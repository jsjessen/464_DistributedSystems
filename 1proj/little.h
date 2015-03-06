
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from little.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef little_1487300785_h
#define little_1487300785_h

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

             
static const DDS_Long MSG_LEN = 256;
#define LittleMsg_LAST_MEMBER_ID 1
#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *LittleMsgTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct LittleMsgSeq;

#ifndef NDDS_STANDALONE_TYPE
    class LittleMsgTypeSupport;
    class LittleMsgDataWriter;
    class LittleMsgDataReader;
#endif

#endif

            
    
class LittleMsg                                        
{
public:            
#ifdef __cplusplus
    typedef struct LittleMsgSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef LittleMsgTypeSupport TypeSupport;
    typedef LittleMsgDataWriter DataWriter;
    typedef LittleMsgDataReader DataReader;
#endif

#endif
    
    char*  sender; /* maximum length = ((MSG_LEN)) */

    char*  message; /* maximum length = ((MSG_LEN)) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LittleMsg_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(LittleMsgSeq, LittleMsg);
        
NDDSUSERDllExport
RTIBool LittleMsg_initialize(
        LittleMsg* self);
        
NDDSUSERDllExport
RTIBool LittleMsg_initialize_ex(
        LittleMsg* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool LittleMsg_initialize_w_params(
        LittleMsg* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void LittleMsg_finalize(
        LittleMsg* self);
                        
NDDSUSERDllExport
void LittleMsg_finalize_ex(
        LittleMsg* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void LittleMsg_finalize_w_params(
        LittleMsg* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void LittleMsg_finalize_optional_members(
        LittleMsg* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool LittleMsg_copy(
        LittleMsg* dst,
        const LittleMsg* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* little_1487300785_h */
