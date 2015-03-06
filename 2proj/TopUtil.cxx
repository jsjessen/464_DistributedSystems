// James Jessen
// 10918967
// CptS 464 Project 2

#include "TopUtil.h"

// Constructor
TopUtil::TopUtil() 
{
    procNumber = 0;

    cpuPrevIdle = 0;
    cpuPrevNonIdle = 0;
    cpuPrevTotal = 0;

    update_stat();
}

void TopUtil::update()
{
    update_stat();
    update_meminfo();
}


char* TopUtil::get_username()
{
    if(getlogin_r(username, 256) < 0)
        printf("Error: Failed to get username\n");

    return username;
}

char* TopUtil::get_hostname()
{
    if(gethostname(hostname, 256) < 0)
        printf("Error: Failed to get hostname\n");

    return hostname;
}

char* TopUtil::get_currentTime()
{
    time_t rawtime;
    struct tm* timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

                          // 2011/10/06 00:59:57
    strftime(currentTime, 256, "%Y/%m/%d %X", timeinfo);
    return currentTime;
}

// Use /proc/stat
float TopUtil::get_cpuUsage()
{
    return (
            static_cast<float>
            (
             (cpuNewTotal - cpuPrevTotal) - (cpuNewIdle - cpuPrevIdle)
            ) 
            / (cpuNewTotal - cpuPrevTotal)
           ) 
        * 100;
}

// Use /proc/meminfo
float TopUtil::get_memUsage()
{
    return (
            static_cast<float>
            (
             memTotal - memFree
            ) 
            / memTotal
           ) 
        * 100; 
}

long TopUtil::get_procNumber()
{
    return procNumber;
}

// File IO
void TopUtil::update_stat()
{
    FILE* stat_file = fopen("/proc/stat", "r");
    if(stat_file < 0)
    {
        std::cout << "Error: Failed to open /proc/stat" << std::endl;
        return;
    }

    // The very first  "cpu" line aggregates the  numbers in all  of the other "cpuN"
    // lines.  These numbers identify the amount of time the CPU has spent performing
    // different kinds of work.  Time units are in USER_HZ (typically hundredths of a
    // second).  The meanings of the columns are as follows, from left to right:
    // 
    //     - user: normal processes executing in user mode
    //     - nice: niced processes executing in user mode
    //     - system: processes executing in kernel mode
    //     - idle: twiddling thumbs
    //     - iowait: waiting for I/O to complete
    //     - irq: servicing interrupts
    //     - softirq: servicing softirqs
    //     - steal: involuntary wait
    //     - guest: running a normal guest
    //     - guest_nice: running a niced guest

    unsigned long long int user, nice, system, idle, iowait, irq, softirq, steal = 0;

    int flag = 0;
    char line[256];
    while(fgets(line, 256, stat_file) != NULL && flag < 2)
    {
        if(strncmp(line, "cpu ", 4) == 0)
        {
            // cpu  1915884 21976 555397 275959301 363976 4337 11627 0 0
            flag++;
            sscanf(line, "%*s %Ld %Ld %Ld %Ld %Ld %Ld %Ld %Ld",
                    &user, &nice, &system, &idle, &iowait, &irq, &softirq, &steal);
            continue;
        }
        if(strncmp(line, "procs_running", 13) == 0)
        {
            flag++;
            sscanf(line, "%*s %Ld", &procNumber);
            continue;
        }
    }

    cpuPrevIdle = cpuNewIdle;
    cpuPrevNonIdle = cpuNewNonIdle;
    cpuPrevTotal = cpuNewTotal;

    cpuNewIdle = idle + iowait;
    cpuNewNonIdle = user + nice + system + irq + softirq + steal;
    cpuNewTotal = cpuNewIdle + cpuNewNonIdle;

    fclose(stat_file);
}

void TopUtil::update_meminfo()
{
    // MemTotal:        1922328 kB
    // MemFree:          765380 kB

    FILE* meminfo_file = fopen("/proc/meminfo", "r");
    if(meminfo_file < 0)
    {
        std::cout << "Error: Failed to open /proc/meminfo" << std::endl;
        return;
    }

    int flag = 0;
    char line[256];
    while(fgets(line, 256, meminfo_file) != NULL && flag < 2)
    {
        char label[128];
        unsigned long long int value;

        sscanf(line, "%s %Ld", &label, &value);

        if(strcmp(label, "MemTotal:") == 0)
        {
            flag++;
            memTotal = value;
            continue;
        }
        if(strcmp(label, "MemFree:") == 0)
        {
            flag++;
            memFree = value;
            continue;
        }
    }
}
