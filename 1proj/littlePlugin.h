
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from little.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef littlePlugin_1487300785_h
#define littlePlugin_1487300785_h

#include "little.h"



struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


#ifdef __cplusplus
extern "C" {
#endif


#define LittleMsgPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LittleMsgPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LittleMsgPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LittleMsgPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LittleMsgPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LittleMsg*
LittleMsgPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LittleMsg*
LittleMsgPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LittleMsg*
LittleMsgPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LittleMsgPluginSupport_copy_data(
    LittleMsg *out,
    const LittleMsg *in);

NDDSUSERDllExport extern void 
LittleMsgPluginSupport_destroy_data_w_params(
    LittleMsg *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LittleMsgPluginSupport_destroy_data_ex(
    LittleMsg *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LittleMsgPluginSupport_destroy_data(
    LittleMsg *sample);

NDDSUSERDllExport extern void 
LittleMsgPluginSupport_print_data(
    const LittleMsg *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
LittleMsgPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
LittleMsgPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
LittleMsgPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
LittleMsgPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
LittleMsgPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    LittleMsg *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
LittleMsgPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LittleMsg *out,
    const LittleMsg *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LittleMsgPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LittleMsg *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LittleMsgPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LittleMsg *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
LittleMsgPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    LittleMsg **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LittleMsgPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LittleMsgPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LittleMsgPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LittleMsgPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LittleMsg * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LittleMsgPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LittleMsgPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LittleMsgPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LittleMsg *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LittleMsgPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LittleMsg * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
LittleMsgPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    LittleMsg ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
LittleMsgPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LittleMsg *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
LittleMsgPlugin_new(void);

NDDSUSERDllExport extern void
LittleMsgPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* littlePlugin_1487300785_h */
