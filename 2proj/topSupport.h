
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from top.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef topSupport_1141011039_h
#define topSupport_1141011039_h

/* Uses */
#include "top.h"



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

DDS_TYPESUPPORT_CPP(TopFunctionTypeSupport, TopFunction);

DDS_DATAWRITER_CPP(TopFunctionDataWriter, TopFunction);
DDS_DATAREADER_CPP(TopFunctionDataReader, TopFunctionSeq, TopFunction);


#else

DDS_TYPESUPPORT_C(TopFunctionTypeSupport, TopFunction);
DDS_DATAWRITER_C(TopFunctionDataWriter, TopFunction);
DDS_DATAREADER_C(TopFunctionDataReader, TopFunctionSeq, TopFunction);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* topSupport_1141011039_h */
