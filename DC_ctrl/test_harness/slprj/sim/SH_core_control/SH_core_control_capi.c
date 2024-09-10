#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SH_core_control_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 24
#endif
#ifndef SS_INT64
#define SS_INT64 25
#endif
#else
#include "builtin_typeid_types.h"
#include "SH_core_control.h"
#include "SH_core_control_capi.h"
#include "SH_core_control_private.h"
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
, TARGET_STRING ( "SH_core_control/Delay" ) , TARGET_STRING ( "" ) , "" , 0 ,
0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 , TARGET_STRING (
"SH_core_control/Delay1" ) , TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 ,
0 , - 1 , 0 } , { 2 , - 1 , TARGET_STRING ( "SH_core_control/Delay2" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , (
NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void SH_core_control_InitializeDataAddr ( void * dataAddr [ ] ,
o0dgt5t3tx * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
nng2bawhua [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> aa5ydd4hrb [
0 ] ) ; dataAddr [ 2 ] = ( void * ) ( & localDW -> dutdlgd5uj [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SH_core_control_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SH_core_control_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 18 , 1 , 3 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.008 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap
[ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T )
0 } , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void
* ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( int8_T ) 1 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 3 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1423400493U , 4211661754U , 609416966U , 369239152U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * SH_core_control_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void SH_core_control_InitializeSystemRan ( g0zk2atzxj * const
ob2yydonjz , sysRanDType * systemRan [ ] , o0dgt5t3tx * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
ob2yydonjz ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = ob2yydonjz
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void SH_core_control_InitializeDataMapInfo ( g0zk2atzxj * const ob2yydonjz ,
o0dgt5t3tx * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( ob2yydonjz -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ob2yydonjz -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ob2yydonjz -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; SH_core_control_InitializeDataAddr ( ob2yydonjz ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
ob2yydonjz -> DataMapInfo . mmi , ob2yydonjz -> DataMapInfo . dataAddress ) ;
SH_core_control_InitializeVarDimsAddr ( ob2yydonjz -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( ob2yydonjz -> DataMapInfo .
mmi , ob2yydonjz -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
ob2yydonjz -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
ob2yydonjz -> DataMapInfo . mmi , ( NULL ) ) ;
SH_core_control_InitializeLoggingFunctions ( ob2yydonjz -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( ob2yydonjz -> DataMapInfo . mmi ,
ob2yydonjz -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
ob2yydonjz -> DataMapInfo . mmi , & ob2yydonjz -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( ob2yydonjz -> DataMapInfo .
mmi , ob2yydonjz -> DataMapInfo . childMMI ) ; rtwCAPI_SetChildMMIArrayLen (
ob2yydonjz -> DataMapInfo . mmi , 4 ) ; SH_core_control_InitializeSystemRan (
ob2yydonjz , ob2yydonjz -> DataMapInfo . systemRan , localDW , ob2yydonjz ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
ob2yydonjz -> DataMapInfo . mmi , ob2yydonjz -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( ob2yydonjz -> DataMapInfo . mmi , ob2yydonjz ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( ob2yydonjz ->
DataMapInfo . mmi , & ob2yydonjz -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SH_core_control_host_InitializeDataMapInfo (
SH_core_control_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi )
; LC_core_control_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"SH_core_control/FLC_Model" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap ->
child1 . mmi ) ; I_core_limit_host_InitializeDataMapInfo ( & ( dataMap ->
child1 ) , "SH_core_control/Model" ) ; dataMap -> childMMI [ 2 ] = & (
dataMap -> child2 . mmi ) ; DC_core_control_host_InitializeDataMapInfo ( & (
dataMap -> child2 ) , "SH_core_control/Model1" ) ; dataMap -> childMMI [ 3 ]
= & ( dataMap -> child3 . mmi ) ;
HC_core_compensation_all_host_InitializeDataMapInfo ( & ( dataMap -> child3 )
, "SH_core_control/Model2" ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi ,
dataMap -> childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 4 ) ;
}
#ifdef __cplusplus
}
#endif
#endif
