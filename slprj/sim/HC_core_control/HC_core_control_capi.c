#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HC_core_control_capi_host.h"
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
#include "HC_core_control.h"
#include "HC_core_control_capi.h"
#include "HC_core_control_private.h"
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
"HC_core_control/PIwithFeedforward/PIDController/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1
, TARGET_STRING (
 "HC_core_control/PIwithFeedforward1/PIDController/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 } ;
#ifndef HOST_CAPI_BUILD
static void HC_core_control_InitializeDataAddr ( void * dataAddr [ ] ,
nmkt2swflu * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
bzjqj2nvte [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> adrcnrssnn [
0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void HC_core_control_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void HC_core_control_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; }
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
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 4 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2322945284U , 2729685981U , 4258585380U , 426799876U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * HC_core_control_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void HC_core_control_InitializeSystemRan ( opaxafp3tl * const
bsmmrqwpul , sysRanDType * systemRan [ ] , nmkt2swflu * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
bsmmrqwpul ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = bsmmrqwpul -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = bsmmrqwpul -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = bsmmrqwpul -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void HC_core_control_InitializeDataMapInfo ( opaxafp3tl * const bsmmrqwpul ,
nmkt2swflu * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( bsmmrqwpul -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( bsmmrqwpul -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( bsmmrqwpul -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; HC_core_control_InitializeDataAddr ( bsmmrqwpul ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
bsmmrqwpul -> DataMapInfo . mmi , bsmmrqwpul -> DataMapInfo . dataAddress ) ;
HC_core_control_InitializeVarDimsAddr ( bsmmrqwpul -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( bsmmrqwpul -> DataMapInfo .
mmi , bsmmrqwpul -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
bsmmrqwpul -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
bsmmrqwpul -> DataMapInfo . mmi , ( NULL ) ) ;
HC_core_control_InitializeLoggingFunctions ( bsmmrqwpul -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( bsmmrqwpul -> DataMapInfo . mmi ,
bsmmrqwpul -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
bsmmrqwpul -> DataMapInfo . mmi , & bsmmrqwpul -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( bsmmrqwpul -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( bsmmrqwpul -> DataMapInfo .
mmi , 0 ) ; HC_core_control_InitializeSystemRan ( bsmmrqwpul , bsmmrqwpul ->
DataMapInfo . systemRan , localDW , bsmmrqwpul -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( bsmmrqwpul -> DataMapInfo .
mmi , bsmmrqwpul -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
bsmmrqwpul -> DataMapInfo . mmi , bsmmrqwpul -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( bsmmrqwpul -> DataMapInfo . mmi , & bsmmrqwpul ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HC_core_control_host_InitializeDataMapInfo (
HC_core_control_host_DataMapInfo_T * dataMap , const char * path ) {
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
