
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from top.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "top.h"

/* ========================================================================= */
const char *TopFunctionTYPENAME = "TopFunction";

DDS_TypeCode* TopFunction_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TopFunction_g_tc_username_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode TopFunction_g_tc_hostname_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode TopFunction_g_tc_currentTime_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member TopFunction_g_tc_members[6]=
    {
        {
            (char *)"username",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"hostname",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"currentTime",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"cpuUsage",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"memUsage",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"procNumber",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TopFunction_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TopFunction", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        TopFunction_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TopFunction*/

    if (is_initialized) {
        return &TopFunction_g_tc;
    }


    TopFunction_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&TopFunction_g_tc_username_string;
    TopFunction_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&TopFunction_g_tc_hostname_string;
    TopFunction_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&TopFunction_g_tc_currentTime_string;
    TopFunction_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TopFunction_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    TopFunction_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &TopFunction_g_tc;
}


RTIBool TopFunction_initialize(
    TopFunction* sample) {
  return TopFunction_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TopFunction_initialize_ex(
    TopFunction* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return TopFunction_initialize_w_params(
        sample,&allocParams);
}

RTIBool TopFunction_initialize_w_params(
        TopFunction* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        sample->username = DDS_String_alloc((255));
        if (sample->username == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->username != NULL) { 
            sample->username[0] = '\0';
        }
    }
            

    if (allocParams->allocate_memory) {
        sample->hostname = DDS_String_alloc((255));
        if (sample->hostname == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->hostname != NULL) { 
            sample->hostname[0] = '\0';
        }
    }
            

    if (allocParams->allocate_memory) {
        sample->currentTime = DDS_String_alloc((255));
        if (sample->currentTime == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->currentTime != NULL) { 
            sample->currentTime[0] = '\0';
        }
    }
            

    if (!RTICdrType_initFloat(&sample->cpuUsage)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->memUsage)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->procNumber)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TopFunction_finalize(
    TopFunction* sample)
{
    TopFunction_finalize_ex(sample,RTI_TRUE);
}
        
void TopFunction_finalize_ex(
    TopFunction* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    TopFunction_finalize_w_params(
        sample,&deallocParams);
}

void TopFunction_finalize_w_params(
        TopFunction* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    if (sample->username != NULL) {    
        DDS_String_free(sample->username);
        sample->username = NULL;
    }
            

    if (sample->hostname != NULL) {    
        DDS_String_free(sample->hostname);
        sample->hostname = NULL;
    }
            

    if (sample->currentTime != NULL) {    
        DDS_String_free(sample->currentTime);
        sample->currentTime = NULL;
    }
            




}

void TopFunction_finalize_optional_members(
    TopFunction* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             







}

RTIBool TopFunction_copy(
    TopFunction* dst,
    const TopFunction* src)
{

    if (!RTICdrType_copyString(
        dst->username, src->username, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->hostname, src->hostname, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->currentTime, src->currentTime, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->cpuUsage, &src->cpuUsage)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->memUsage, &src->memUsage)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->procNumber, &src->procNumber)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TopFunction' sequence class.
 */
#define T TopFunction
#define TSeq TopFunctionSeq
#define T_initialize_w_params TopFunction_initialize_w_params
#define T_finalize_w_params   TopFunction_finalize_w_params
#define T_copy       TopFunction_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

