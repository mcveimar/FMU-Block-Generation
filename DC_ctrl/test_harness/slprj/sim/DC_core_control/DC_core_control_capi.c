#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DC_core_control_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 20
#endif
#ifndef SS_INT64
#define SS_INT64 21
#endif
#else
#include "builtin_typeid_types.h"
#include "DC_core_control.h"
#include "DC_core_control_capi.h"
#include "DC_core_control_private.h"
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
, TARGET_STRING ( "DC_core_control/Pre-Filter/NotchFilter" ) , TARGET_STRING
( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 , TARGET_STRING (
"DC_core_control/DCBusSum Controller/Integrator/Discrete/Integrator" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1 ,
TARGET_STRING (
 "DC_core_control/Low-Pass Filter/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 3 , - 1
, TARGET_STRING (
 "DC_core_control/Pre-Filter/LPF/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 0 , 3 , 2 , 1 } ;
#ifndef HOST_CAPI_BUILD
static void DC_core_control_InitializeDataAddr ( void * dataAddr [ ] ,
eucybaphjh * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
d4cbfpdwp1 [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> nfncqiie2c )
; dataAddr [ 2 ] = ( void * ) ( & localDW -> bsxapokqfo ) ; dataAddr [ 3 ] =
( void * ) ( & localDW -> j2kv1drnk1 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DC_core_control_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DC_core_control_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 2 , 1 , 1 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.00025 , 0.0 } ; static rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { {
( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , ( NULL
) , { 0 , ( NULL ) , ( NULL ) } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 4
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 1105509215U , 1561489221U
, 3790100682U , 3589938751U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0
, rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
DC_core_control_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DC_core_control_InitializeSystemRan ( b1rrm1enxt * const
di4adofmaf , sysRanDType * systemRan [ ] , eucybaphjh * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
di4adofmaf ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = di4adofmaf
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DC_core_control_InitializeDataMapInfo ( b1rrm1enxt * const di4adofmaf ,
eucybaphjh * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( di4adofmaf -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( di4adofmaf -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( di4adofmaf -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; DC_core_control_InitializeDataAddr ( di4adofmaf ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
di4adofmaf -> DataMapInfo . mmi , di4adofmaf -> DataMapInfo . dataAddress ) ;
DC_core_control_InitializeVarDimsAddr ( di4adofmaf -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( di4adofmaf -> DataMapInfo .
mmi , di4adofmaf -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
di4adofmaf -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
di4adofmaf -> DataMapInfo . mmi , ( NULL ) ) ;
DC_core_control_InitializeLoggingFunctions ( di4adofmaf -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( di4adofmaf -> DataMapInfo . mmi ,
di4adofmaf -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
di4adofmaf -> DataMapInfo . mmi , & di4adofmaf -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( di4adofmaf -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( di4adofmaf -> DataMapInfo .
mmi , 0 ) ; DC_core_control_InitializeSystemRan ( di4adofmaf , di4adofmaf ->
DataMapInfo . systemRan , localDW , di4adofmaf -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( di4adofmaf -> DataMapInfo .
mmi , di4adofmaf -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
di4adofmaf -> DataMapInfo . mmi , di4adofmaf -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( di4adofmaf -> DataMapInfo . mmi , & di4adofmaf ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DC_core_control_host_InitializeDataMapInfo (
DC_core_control_host_DataMapInfo_T * dataMap , const char * path ) {
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
