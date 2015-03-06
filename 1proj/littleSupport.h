
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from little.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef littleSupport_1487300785_h
#define littleSupport_1487300785_h

/* Uses */
#include "little.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(LittleMsgTypeSupport, LittleMsg);

DDS_DATAWRITER_CPP(LittleMsgDataWriter, LittleMsg);
DDS_DATAREADER_CPP(LittleMsgDataReader, LittleMsgSeq, LittleMsg);


#else

DDS_TYPESUPPORT_C(LittleMsgTypeSupport, LittleMsg);
DDS_DATAWRITER_C(LittleMsgDataWriter, LittleMsg);
DDS_DATAREADER_C(LittleMsgDataReader, LittleMsgSeq, LittleMsg);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* littleSupport_1487300785_h */
