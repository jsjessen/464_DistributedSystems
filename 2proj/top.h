
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from top.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef top_1141011039_h
#define top_1141011039_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#define TopFunction_LAST_MEMBER_ID 5
#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TopFunctionTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TopFunctionSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TopFunctionTypeSupport;
    class TopFunctionDataWriter;
    class TopFunctionDataReader;
#endif

#endif

            
    
class TopFunction                                        
{
public:            
#ifdef __cplusplus
    typedef struct TopFunctionSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TopFunctionTypeSupport TypeSupport;
    typedef TopFunctionDataWriter DataWriter;
    typedef TopFunctionDataReader DataReader;
#endif

#endif
    
    char*  username; /* maximum length = (255) */

    char*  hostname; /* maximum length = (255) */

    char*  currentTime; /* maximum length = (255) */

    DDS_Float  cpuUsage;

    DDS_Float  memUsage;

    DDS_Long  procNumber;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TopFunction_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TopFunctionSeq, TopFunction);
        
NDDSUSERDllExport
RTIBool TopFunction_initialize(
        TopFunction* self);
        
NDDSUSERDllExport
RTIBool TopFunction_initialize_ex(
        TopFunction* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TopFunction_initialize_w_params(
        TopFunction* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TopFunction_finalize(
        TopFunction* self);
                        
NDDSUSERDllExport
void TopFunction_finalize_ex(
        TopFunction* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TopFunction_finalize_w_params(
        TopFunction* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TopFunction_finalize_optional_members(
        TopFunction* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TopFunction_copy(
        TopFunction* dst,
        const TopFunction* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* top_1141011039_h */
