#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Idq_core_control_capi_host.h"
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
#include "Idq_core_control.h"
#include "Idq_core_control_capi.h"
#include "Idq_core_control_private.h"
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
, TARGET_STRING (
"Idq_core_control/currentControlWithFF_d/3-PhasePRController_d/Discrete Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1
, TARGET_STRING (
"Idq_core_control/currentControlWithFF_d/3-PhasePRController_d/Discrete Filter1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1
, TARGET_STRING (
"Idq_core_control/currentControlWithFF_d/3-PhasePRController_d/Discrete Filter2"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3 , - 1
, TARGET_STRING (
"Idq_core_control/currentControlWithFF_q/3-PhasePRController_d/Discrete Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 4 , - 1
, TARGET_STRING (
"Idq_core_control/currentControlWithFF_q/3-PhasePRController_d/Discrete Filter1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 5 , - 1
, TARGET_STRING (
"Idq_core_control/currentControlWithFF_q/3-PhasePRController_d/Discrete Filter2"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 6 , - 1
, TARGET_STRING (
"Idq_core_control/currentControlWithFF_d/First-Order\nFilter/Model/Delay_x" )
, TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 7 , - 1 ,
TARGET_STRING (
"Idq_core_control/currentControlWithFF_q/First-Order\nFilter/Model/Delay_x" )
, TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 ,
( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 4 , 5 , 6 , 3 , 7 } ;
#ifndef HOST_CAPI_BUILD
static void Idq_core_control_InitializeDataAddr ( void * dataAddr [ ] ,
cpo2zckue3 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
htjh3qwpia [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> mws4tcu3qf [
0 ] ) ; dataAddr [ 2 ] = ( void * ) ( & localDW -> mwbpk3uscs [ 0 ] ) ;
dataAddr [ 3 ] = ( void * ) ( & localDW -> abbsngkmwu [ 0 ] ) ; dataAddr [ 4
] = ( void * ) ( & localDW -> hazahriz5k [ 0 ] ) ; dataAddr [ 5 ] = ( void *
) ( & localDW -> btoqbxgwvw [ 0 ] ) ; dataAddr [ 6 ] = ( void * ) ( & localDW
-> oeffvvsesb [ 0 ] ) ; dataAddr [ 7 ] = ( void * ) ( & localDW -> f04awwirwd
[ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Idq_core_control_InitializeVarDimsAddr ( int32_T * vardimsAddr [
] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Idq_core_control_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; }
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
uint_T rtDimensionArray [ ] = { 2 , 1 , 3 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.00026667 , 0.0 } ; static rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { {
( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , ( NULL
) , { 0 , ( NULL ) , ( NULL ) } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 8
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 3629280288U , 1732364486U
, 479130180U , 4176666299U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
Idq_core_control_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Idq_core_control_InitializeSystemRan ( fmlk1c5hb5 * const
dx5hgjdh4m , sysRanDType * systemRan [ ] , cpo2zckue3 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
dx5hgjdh4m ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = dx5hgjdh4m
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Idq_core_control_InitializeDataMapInfo ( fmlk1c5hb5 * const dx5hgjdh4m ,
cpo2zckue3 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( dx5hgjdh4m -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dx5hgjdh4m -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( dx5hgjdh4m -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; Idq_core_control_InitializeDataAddr ( dx5hgjdh4m ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
dx5hgjdh4m -> DataMapInfo . mmi , dx5hgjdh4m -> DataMapInfo . dataAddress ) ;
Idq_core_control_InitializeVarDimsAddr ( dx5hgjdh4m -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( dx5hgjdh4m -> DataMapInfo .
mmi , dx5hgjdh4m -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
dx5hgjdh4m -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
dx5hgjdh4m -> DataMapInfo . mmi , ( NULL ) ) ;
Idq_core_control_InitializeLoggingFunctions ( dx5hgjdh4m -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( dx5hgjdh4m -> DataMapInfo . mmi ,
dx5hgjdh4m -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
dx5hgjdh4m -> DataMapInfo . mmi , & dx5hgjdh4m -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( dx5hgjdh4m -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dx5hgjdh4m -> DataMapInfo .
mmi , 0 ) ; Idq_core_control_InitializeSystemRan ( dx5hgjdh4m , dx5hgjdh4m ->
DataMapInfo . systemRan , localDW , dx5hgjdh4m -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( dx5hgjdh4m -> DataMapInfo .
mmi , dx5hgjdh4m -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
dx5hgjdh4m -> DataMapInfo . mmi , dx5hgjdh4m -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( dx5hgjdh4m -> DataMapInfo . mmi , & dx5hgjdh4m ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Idq_core_control_host_InitializeDataMapInfo (
Idq_core_control_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
