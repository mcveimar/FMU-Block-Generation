#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "CB_core_control_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "CB_core_control.h"
#include "CB_core_control_capi.h"
#include "CB_core_control_private.h"
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
"CB_core_control/LPF/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void CB_core_control_InitializeDataAddr ( void * dataAddr [ ] ,
jombyeybf4 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
prapkqmbhn [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void CB_core_control_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void CB_core_control_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 3 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.00853344 , 0.0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 3 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 3 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1253829261U , 3390285548U , 1802530494U , 3534127193U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * CB_core_control_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void CB_core_control_InitializeSystemRan ( g300xrfxoz * const
k1irebyn4b , sysRanDType * systemRan [ ] , jombyeybf4 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
k1irebyn4b ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemTid [ 1 ] = k1irebyn4b -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = k1irebyn4b -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void CB_core_control_InitializeDataMapInfo ( g300xrfxoz * const k1irebyn4b ,
jombyeybf4 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( k1irebyn4b -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( k1irebyn4b -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( k1irebyn4b -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; CB_core_control_InitializeDataAddr ( k1irebyn4b ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
k1irebyn4b -> DataMapInfo . mmi , k1irebyn4b -> DataMapInfo . dataAddress ) ;
CB_core_control_InitializeVarDimsAddr ( k1irebyn4b -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( k1irebyn4b -> DataMapInfo .
mmi , k1irebyn4b -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
k1irebyn4b -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
k1irebyn4b -> DataMapInfo . mmi , ( NULL ) ) ;
CB_core_control_InitializeLoggingFunctions ( k1irebyn4b -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( k1irebyn4b -> DataMapInfo . mmi ,
k1irebyn4b -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
k1irebyn4b -> DataMapInfo . mmi , & k1irebyn4b -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( k1irebyn4b -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( k1irebyn4b -> DataMapInfo .
mmi , 0 ) ; CB_core_control_InitializeSystemRan ( k1irebyn4b , k1irebyn4b ->
DataMapInfo . systemRan , localDW , k1irebyn4b -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( k1irebyn4b -> DataMapInfo .
mmi , k1irebyn4b -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
k1irebyn4b -> DataMapInfo . mmi , k1irebyn4b -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( k1irebyn4b -> DataMapInfo . mmi , & k1irebyn4b ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void CB_core_control_host_InitializeDataMapInfo (
CB_core_control_host_DataMapInfo_T * dataMap , const char * path ) {
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
