
// James Jessen
// 10918967
// CptS 464 Project 2

#include <ctime>
#include <iostream>
#include <iomanip>
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"

// Used to get current CPU and memory usage
// and current number of processes
class TopUtil
{
    private:
        char username[256];
        char hostname[256];
        char currentTime[256];

        // Processes (running)
        long procNumber;

        // Memory
        unsigned long long int memTotal, memFree; // in Kb

        // CPU
        unsigned long long int cpuPrevIdle, cpuPrevNonIdle, cpuPrevTotal;
        unsigned long long int cpuNewIdle, cpuNewNonIdle, cpuNewTotal;

        // File IO
        void update_stat();
        void update_meminfo();

    public:
        // Constructor
        TopUtil();
        void update();

        char* get_username();
        char* get_hostname();
        char* get_currentTime();
        float get_cpuUsage();
        float get_memUsage();
        long get_procNumber();
};
