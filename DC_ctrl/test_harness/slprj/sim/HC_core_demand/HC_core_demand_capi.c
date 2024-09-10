#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HC_core_demand_capi_host.h"
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
#include "HC_core_demand.h"
#include "HC_core_demand_capi.h"
#include "HC_core_demand_private.h"
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
 "HC_core_demand/Second-Order Filter1/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1
, TARGET_STRING (
 "HC_core_demand/Second-Order Filter1/Integrator\n(Discrete or Continuous)1/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1
, TARGET_STRING (
 "HC_core_demand/Second-Order Filter2/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3 , - 1
, TARGET_STRING (
 "HC_core_demand/Second-Order Filter2/Integrator\n(Discrete or Continuous)1/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 1 , 0 , 3 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void HC_core_demand_InitializeDataAddr ( void * dataAddr [ ] ,
mubhr0gjvh * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
jfy4pktyte [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> lzooef1vg0 [
0 ] ) ; dataAddr [ 2 ] = ( void * ) ( & localDW -> fnqc2inubu [ 0 ] ) ;
dataAddr [ 3 ] = ( void * ) ( & localDW -> icks32ycfg [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void HC_core_demand_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void HC_core_demand_InitializeLoggingFunctions ( RTWLoggingFcnPtr
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
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 3 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.008 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 4 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 4 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 58395647U , 2943209845U , 336397368U , 2860363470U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * HC_core_demand_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void HC_core_demand_InitializeSystemRan ( bwqie2cqq2 * const
bazujgqrv3 , sysRanDType * systemRan [ ] , mubhr0gjvh * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
bazujgqrv3 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = bazujgqrv3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = bazujgqrv3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = bazujgqrv3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void HC_core_demand_InitializeDataMapInfo ( bwqie2cqq2 * const bazujgqrv3 ,
mubhr0gjvh * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( bazujgqrv3 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( bazujgqrv3 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( bazujgqrv3 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; HC_core_demand_InitializeDataAddr ( bazujgqrv3 ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
bazujgqrv3 -> DataMapInfo . mmi , bazujgqrv3 -> DataMapInfo . dataAddress ) ;
HC_core_demand_InitializeVarDimsAddr ( bazujgqrv3 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( bazujgqrv3 -> DataMapInfo .
mmi , bazujgqrv3 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
bazujgqrv3 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
bazujgqrv3 -> DataMapInfo . mmi , ( NULL ) ) ;
HC_core_demand_InitializeLoggingFunctions ( bazujgqrv3 -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( bazujgqrv3 -> DataMapInfo . mmi ,
bazujgqrv3 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
bazujgqrv3 -> DataMapInfo . mmi , & bazujgqrv3 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( bazujgqrv3 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( bazujgqrv3 -> DataMapInfo .
mmi , 0 ) ; HC_core_demand_InitializeSystemRan ( bazujgqrv3 , bazujgqrv3 ->
DataMapInfo . systemRan , localDW , bazujgqrv3 -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( bazujgqrv3 -> DataMapInfo .
mmi , bazujgqrv3 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
bazujgqrv3 -> DataMapInfo . mmi , bazujgqrv3 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( bazujgqrv3 -> DataMapInfo . mmi , & bazujgqrv3 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HC_core_demand_host_InitializeDataMapInfo (
HC_core_demand_host_DataMapInfo_T * dataMap , const char * path ) {
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
