#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HC_core_compensation_capi_host.h"
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
#include "HC_core_compensation.h"
#include "HC_core_compensation_capi.h"
#include "HC_core_compensation_private.h"
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
{ 1449204750U , 2776424923U , 364160617U , 566749952U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * HC_core_compensation_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void HC_core_compensation_InitializeSystemRan ( cp1r0l5l22 * const
kceqn1azcu , sysRanDType * systemRan [ ] , p1qdjfsmjd * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
kceqn1azcu ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = kceqn1azcu
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void HC_core_compensation_InitializeDataMapInfo ( cp1r0l5l22 * const
kceqn1azcu , p1qdjfsmjd * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( kceqn1azcu -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( kceqn1azcu -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( kceqn1azcu -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( kceqn1azcu -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( kceqn1azcu -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( kceqn1azcu -> DataMapInfo . mmi , &
kceqn1azcu -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
kceqn1azcu -> DataMapInfo . mmi , kceqn1azcu -> DataMapInfo . childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( kceqn1azcu -> DataMapInfo . mmi , 2 ) ;
HC_core_compensation_InitializeSystemRan ( kceqn1azcu , kceqn1azcu ->
DataMapInfo . systemRan , localDW , kceqn1azcu -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( kceqn1azcu -> DataMapInfo .
mmi , kceqn1azcu -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
kceqn1azcu -> DataMapInfo . mmi , kceqn1azcu -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( kceqn1azcu -> DataMapInfo . mmi , & kceqn1azcu ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HC_core_compensation_host_InitializeDataMapInfo (
HC_core_compensation_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi )
; HC_core_control_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"HC_core_compensation/HC_Control" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap
-> child1 . mmi ) ; HC_core_demand_host_InitializeDataMapInfo ( & ( dataMap
-> child1 ) , "HC_core_compensation/HC_Demand" ) ; rtwCAPI_SetChildMMIArray (
dataMap -> mmi , dataMap -> childMMI ) ; rtwCAPI_SetChildMMIArrayLen (
dataMap -> mmi , 2 ) ; }
#ifdef __cplusplus
}
#endif
#endif
