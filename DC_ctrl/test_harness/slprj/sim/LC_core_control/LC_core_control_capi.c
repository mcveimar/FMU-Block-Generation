#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "LC_core_control_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
#else
#include "builtin_typeid_types.h"
#include "LC_core_control.h"
#include "LC_core_control_capi.h"
#include "LC_core_control_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static TARGET_CONST
rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 }
} ; static int_T rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1529811719U , 2978520256U , 2419495587U , 2257925220U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * LC_core_control_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void LC_core_control_InitializeSystemRan ( h12xxmkjhw * const
pkdnbyzfyn , sysRanDType * systemRan [ ] , ldkbugvmsi * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
pkdnbyzfyn ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = pkdnbyzfyn
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void LC_core_control_InitializeDataMapInfo ( h12xxmkjhw * const pkdnbyzfyn ,
ldkbugvmsi * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( pkdnbyzfyn -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( pkdnbyzfyn -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( pkdnbyzfyn -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( pkdnbyzfyn -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( pkdnbyzfyn -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( pkdnbyzfyn -> DataMapInfo . mmi , &
pkdnbyzfyn -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
pkdnbyzfyn -> DataMapInfo . mmi , pkdnbyzfyn -> DataMapInfo . childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( pkdnbyzfyn -> DataMapInfo . mmi , 2 ) ;
LC_core_control_InitializeSystemRan ( pkdnbyzfyn , pkdnbyzfyn -> DataMapInfo
. systemRan , localDW , pkdnbyzfyn -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( pkdnbyzfyn -> DataMapInfo . mmi ,
pkdnbyzfyn -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( pkdnbyzfyn
-> DataMapInfo . mmi , pkdnbyzfyn -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( pkdnbyzfyn -> DataMapInfo . mmi , & pkdnbyzfyn ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void LC_core_control_host_InitializeDataMapInfo (
LC_core_control_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi )
; CB_core_control_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"LC_core_control/CB_Model" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap ->
child1 . mmi ) ; PF_core_control_host_InitializeDataMapInfo ( & ( dataMap ->
child1 ) , "LC_core_control/PF_Model" ) ; rtwCAPI_SetChildMMIArray ( dataMap
-> mmi , dataMap -> childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi
, 2 ) ; }
#ifdef __cplusplus
}
#endif
#endif
