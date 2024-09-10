#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "I_core_limit_capi_host.h"
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
#include "I_core_limit.h"
#include "I_core_limit_capi.h"
#include "I_core_limit_private.h"
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
} ; static int_T rtContextSystems [ 11 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 11 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2820730867U , 1822891691U , 2254331268U , 3698295454U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * I_core_limit_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void I_core_limit_InitializeSystemRan ( fg05pa035r * const ppltozkdmd
, sysRanDType * systemRan [ ] , dg2iue4hq5 * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( ppltozkdmd ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW -> o1nuyu4eux ;
systemRan [ 2 ] = ( sysRanDType * ) & localDW -> hnpgo2j3qd ; systemRan [ 3 ]
= ( NULL ) ; systemRan [ 4 ] = ( sysRanDType * ) & localDW -> dw0gqt4egj5 .
a2jdariv0m ; systemRan [ 5 ] = ( NULL ) ; systemRan [ 6 ] = ( NULL ) ;
systemRan [ 7 ] = ( sysRanDType * ) & localDW -> jvb0kq4eut ; systemRan [ 8 ]
= ( sysRanDType * ) & localDW -> kzdgozbnbw . a2jdariv0m ; systemRan [ 9 ] =
( NULL ) ; systemRan [ 10 ] = ( NULL ) ; systemTid [ 1 ] = ppltozkdmd ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = ppltozkdmd -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [
5 ] = 7 ; rtContextSystems [ 6 ] = 7 ; rtContextSystems [ 7 ] = 7 ;
rtContextSystems [ 8 ] = 8 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void I_core_limit_InitializeDataMapInfo ( fg05pa035r * const ppltozkdmd ,
dg2iue4hq5 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( ppltozkdmd -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ppltozkdmd -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ppltozkdmd -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( ppltozkdmd -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( ppltozkdmd -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( ppltozkdmd -> DataMapInfo . mmi , &
ppltozkdmd -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
ppltozkdmd -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
ppltozkdmd -> DataMapInfo . mmi , 0 ) ; I_core_limit_InitializeSystemRan (
ppltozkdmd , ppltozkdmd -> DataMapInfo . systemRan , localDW , ppltozkdmd ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
ppltozkdmd -> DataMapInfo . mmi , ppltozkdmd -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( ppltozkdmd -> DataMapInfo . mmi , ppltozkdmd ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( ppltozkdmd ->
DataMapInfo . mmi , & ppltozkdmd -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void I_core_limit_host_InitializeDataMapInfo (
I_core_limit_host_DataMapInfo_T * dataMap , const char * path ) {
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
