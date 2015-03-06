
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from top.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef topPlugin_1141011039_h
#define topPlugin_1141011039_h

#include "top.h"



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


#define TopFunctionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TopFunctionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TopFunctionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TopFunctionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TopFunctionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TopFunction*
TopFunctionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TopFunction*
TopFunctionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TopFunction*
TopFunctionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TopFunctionPluginSupport_copy_data(
    TopFunction *out,
    const TopFunction *in);

NDDSUSERDllExport extern void 
TopFunctionPluginSupport_destroy_data_w_params(
    TopFunction *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TopFunctionPluginSupport_destroy_data_ex(
    TopFunction *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TopFunctionPluginSupport_destroy_data(
    TopFunction *sample);

NDDSUSERDllExport extern void 
TopFunctionPluginSupport_print_data(
    const TopFunction *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TopFunctionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TopFunctionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TopFunctionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TopFunctionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TopFunctionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TopFunction *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TopFunctionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TopFunction *out,
    const TopFunction *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TopFunctionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TopFunction *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TopFunctionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TopFunction *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TopFunctionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TopFunction **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TopFunctionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TopFunctionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TopFunctionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TopFunctionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TopFunction * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TopFunctionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TopFunctionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TopFunctionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TopFunction *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TopFunctionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TopFunction * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TopFunctionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TopFunction ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TopFunctionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TopFunction *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TopFunctionPlugin_new(void);

NDDSUSERDllExport extern void
TopFunctionPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* topPlugin_1141011039_h */
