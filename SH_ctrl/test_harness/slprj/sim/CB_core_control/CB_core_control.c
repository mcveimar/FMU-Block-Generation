#include "CB_core_control.h"
#include "rtwtypes.h"
#include "CB_core_control_private.h"
#include "mwmathutil.h"
#include "CB_core_control_capi.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_CB_core_control [ 41 ] = { { "bh3neqetwem" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "CB_core_control" } , {
"eqnf43pr53" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "baf55dkqup" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "CB_core_control" } , { "gapxhhusfp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CB_core_control" } ,
{ "ler1dtayod" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "bvlvrx5stg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "CB_core_control" } , { "cgjd0gkq40" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CB_core_control" } ,
{ "dshvxqruxm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "od54gmrylo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "CB_core_control" } , { "mgcdmwdb1l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CB_core_control" } ,
{ "b3b0goes5m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "b4oniz3s21" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "CB_core_control" } , { "jombyeybf4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CB_core_control" } ,
{ "mcp2cnxzhw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "kalnohdbud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "CB_core_control" } , { "giuyfjohpx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CB_core_control" } ,
{ "cdoej1wmk4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "idvm0hwalp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "CB_core_control" } , { "fviyn2acc5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CB_core_control" } ,
{ "jwkq2zcfvb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "m3e4cqcnxy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "CB_core_control" } , { "mp1ci1jqga" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CB_core_control" } ,
{ "mdxu22rrsi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "CB_core_control" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , 0 , ( NULL ) } , { "ky4pug2oys" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CB_core_control" } , { "ljanbhxhkp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CB_core_control" } ,
{ "g300xrfxoz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CB_core_control" } , { "mr_CB_core_control_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "CB_core_control" } , { "mr_CB_core_control_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CB_core_control" } , {
"mr_CB_core_control_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "CB_core_control" } , { "CB_core_control.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "CB_core_control.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "CB_core_control" } } ; duii3t1wgqn duii3t1wgq = { 0.3 , 2.0 ,
1.0 , 1.0F , 0.333333343F , - 1.0F , 0.0F , 0.00853344F , 0.0F , 0.0F , 0.0F
, 0.0F , { 0.0F , 0.0F , 0.0F } } ; void jwkq2zcfvb ( g300xrfxoz * const
k1irebyn4b , jombyeybf4 * localDW ) { boolean_T tmp ; localDW -> cgtgt4zn0n =
0 ; localDW -> bd4e0eq5em = 1U ; if ( rtmIsFirstInitCond ( k1irebyn4b ) ) {
tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
k1irebyn4b -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
k1irebyn4b -> _mdlRefSfcnS ) ) ; localDW -> bd4e0eq5em = ( uint8_T ) ! tmp ;
} else { localDW -> bd4e0eq5em = 1U ; } } } void fviyn2acc5 ( g300xrfxoz *
const k1irebyn4b , jombyeybf4 * localDW ) { boolean_T tmp ; localDW ->
cgtgt4zn0n = 0 ; localDW -> bd4e0eq5em = 1U ; if ( rtmIsFirstInitCond (
k1irebyn4b ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
k1irebyn4b -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
k1irebyn4b -> _mdlRefSfcnS ) ) ; localDW -> bd4e0eq5em = ( uint8_T ) ! tmp ;
} else { localDW -> bd4e0eq5em = 1U ; } } } void mp1ci1jqga ( mcp2cnxzhw *
localB ) { localB -> clowlyacfy [ 0 ] = 0.00853344F ; localB -> clowlyacfy [
1 ] = 0.0F ; } void CB_core_control ( const real32_T ek0p5zzs5m [ 3 ] , const
real32_T hdefei1dzg [ 3 ] , const boolean_T * hfeqs2nxke , real32_T
b4ij5hmki2 [ 3 ] , real32_T k40tz4mu1w [ 3 ] , mcp2cnxzhw * localB ,
jombyeybf4 * localDW ) { real32_T lfkl5140xm_idx_0 ; real32_T
lfkl5140xm_idx_1 ; real32_T lfkl5140xm_idx_2 ; real32_T nanyxd2b00 ; real32_T
o4cvnnyexk ; o4cvnnyexk = ( real32_T ) muDoubleScalarMax ( localB ->
clowlyacfy [ 0 ] , duii3t1wgq . P_0 ) ; o4cvnnyexk += ( real32_T ) (
o4cvnnyexk == 0.0F ) * 2.22044605e-16F ; localB -> mdupfrno3v = ( ( (
real32_T ) ( duii3t1wgq . P_0 - localB -> clowlyacfy [ 0 ] ) <= duii3t1wgq .
P_6 ) && localB -> jzq0p0pnmo ) ; if ( * hfeqs2nxke ) { lfkl5140xm_idx_0 =
ek0p5zzs5m [ 0 ] + duii3t1wgq . P_12 [ 0 ] ; lfkl5140xm_idx_1 = ek0p5zzs5m [
1 ] + duii3t1wgq . P_12 [ 1 ] ; lfkl5140xm_idx_2 = ek0p5zzs5m [ 2 ] +
duii3t1wgq . P_12 [ 2 ] ; nanyxd2b00 = ( ( lfkl5140xm_idx_0 +
lfkl5140xm_idx_1 ) + lfkl5140xm_idx_2 ) * duii3t1wgq . P_4 ; lfkl5140xm_idx_0
= ( lfkl5140xm_idx_0 - nanyxd2b00 ) * duii3t1wgq . P_5 ; lfkl5140xm_idx_1 = (
lfkl5140xm_idx_1 - nanyxd2b00 ) * duii3t1wgq . P_5 ; lfkl5140xm_idx_2 = (
lfkl5140xm_idx_2 - nanyxd2b00 ) * duii3t1wgq . P_5 ; } else {
lfkl5140xm_idx_0 = 0.0F ; lfkl5140xm_idx_1 = 0.0F ; lfkl5140xm_idx_2 = 0.0F ;
} lfkl5140xm_idx_0 *= duii3t1wgq . P_3 ; lfkl5140xm_idx_1 *= duii3t1wgq . P_3
; lfkl5140xm_idx_2 *= duii3t1wgq . P_3 ; if ( localDW -> bd4e0eq5em != 0 ) {
localDW -> prapkqmbhn [ 0 ] = lfkl5140xm_idx_0 ; if ( lfkl5140xm_idx_0 >
duii3t1wgq . P_8 ) { localDW -> prapkqmbhn [ 0 ] = duii3t1wgq . P_8 ; } else
if ( lfkl5140xm_idx_0 < duii3t1wgq . P_9 ) { localDW -> prapkqmbhn [ 0 ] =
duii3t1wgq . P_9 ; } localDW -> prapkqmbhn [ 1 ] = lfkl5140xm_idx_1 ; if (
lfkl5140xm_idx_1 > duii3t1wgq . P_8 ) { localDW -> prapkqmbhn [ 1 ] =
duii3t1wgq . P_8 ; } else if ( lfkl5140xm_idx_1 < duii3t1wgq . P_9 ) {
localDW -> prapkqmbhn [ 1 ] = duii3t1wgq . P_9 ; } localDW -> prapkqmbhn [ 2
] = lfkl5140xm_idx_2 ; if ( lfkl5140xm_idx_2 > duii3t1wgq . P_8 ) { localDW
-> prapkqmbhn [ 2 ] = duii3t1wgq . P_8 ; } else if ( lfkl5140xm_idx_2 <
duii3t1wgq . P_9 ) { localDW -> prapkqmbhn [ 2 ] = duii3t1wgq . P_9 ; } } if
( localB -> mdupfrno3v || ( localDW -> cgtgt4zn0n != 0 ) ) { localDW ->
prapkqmbhn [ 0 ] = lfkl5140xm_idx_0 ; if ( lfkl5140xm_idx_0 > duii3t1wgq .
P_8 ) { localDW -> prapkqmbhn [ 0 ] = duii3t1wgq . P_8 ; } else if (
lfkl5140xm_idx_0 < duii3t1wgq . P_9 ) { localDW -> prapkqmbhn [ 0 ] =
duii3t1wgq . P_9 ; } localDW -> prapkqmbhn [ 1 ] = lfkl5140xm_idx_1 ; if (
lfkl5140xm_idx_1 > duii3t1wgq . P_8 ) { localDW -> prapkqmbhn [ 1 ] =
duii3t1wgq . P_8 ; } else if ( lfkl5140xm_idx_1 < duii3t1wgq . P_9 ) {
localDW -> prapkqmbhn [ 1 ] = duii3t1wgq . P_9 ; } localDW -> prapkqmbhn [ 2
] = lfkl5140xm_idx_2 ; if ( lfkl5140xm_idx_2 > duii3t1wgq . P_8 ) { localDW
-> prapkqmbhn [ 2 ] = duii3t1wgq . P_8 ; } else if ( lfkl5140xm_idx_2 <
duii3t1wgq . P_9 ) { localDW -> prapkqmbhn [ 2 ] = duii3t1wgq . P_9 ; } } if
( localDW -> prapkqmbhn [ 0 ] > duii3t1wgq . P_10 ) { nanyxd2b00 = duii3t1wgq
. P_10 ; } else if ( localDW -> prapkqmbhn [ 0 ] < duii3t1wgq . P_11 ) {
nanyxd2b00 = duii3t1wgq . P_11 ; } else { nanyxd2b00 = localDW -> prapkqmbhn
[ 0 ] ; } k40tz4mu1w [ 0 ] = nanyxd2b00 ; localB -> ephjadtbu4 [ 0 ] = 1.0F /
o4cvnnyexk * ( lfkl5140xm_idx_0 - nanyxd2b00 ) ; b4ij5hmki2 [ 0 ] =
nanyxd2b00 - hdefei1dzg [ 0 ] ; if ( localDW -> prapkqmbhn [ 1 ] > duii3t1wgq
. P_10 ) { nanyxd2b00 = duii3t1wgq . P_10 ; } else if ( localDW -> prapkqmbhn
[ 1 ] < duii3t1wgq . P_11 ) { nanyxd2b00 = duii3t1wgq . P_11 ; } else {
nanyxd2b00 = localDW -> prapkqmbhn [ 1 ] ; } k40tz4mu1w [ 1 ] = nanyxd2b00 ;
localB -> ephjadtbu4 [ 1 ] = 1.0F / o4cvnnyexk * ( lfkl5140xm_idx_1 -
nanyxd2b00 ) ; b4ij5hmki2 [ 1 ] = nanyxd2b00 - hdefei1dzg [ 1 ] ; if (
localDW -> prapkqmbhn [ 2 ] > duii3t1wgq . P_10 ) { nanyxd2b00 = duii3t1wgq .
P_10 ; } else if ( localDW -> prapkqmbhn [ 2 ] < duii3t1wgq . P_11 ) {
nanyxd2b00 = duii3t1wgq . P_11 ; } else { nanyxd2b00 = localDW -> prapkqmbhn
[ 2 ] ; } k40tz4mu1w [ 2 ] = nanyxd2b00 ; localB -> ephjadtbu4 [ 2 ] = 1.0F /
o4cvnnyexk * ( lfkl5140xm_idx_2 - nanyxd2b00 ) ; b4ij5hmki2 [ 2 ] =
nanyxd2b00 - hdefei1dzg [ 2 ] ; } void CB_core_controlTID1 ( mcp2cnxzhw *
localB ) { localB -> jzq0p0pnmo = ( duii3t1wgq . P_2 < duii3t1wgq . P_1 ) ; }
void idvm0hwalp ( mcp2cnxzhw * localB , jombyeybf4 * localDW ) { real32_T
prapkqmbhn ; localDW -> bd4e0eq5em = 0U ; prapkqmbhn = duii3t1wgq . P_7 *
localB -> ephjadtbu4 [ 0 ] + localDW -> prapkqmbhn [ 0 ] ; localDW ->
prapkqmbhn [ 0 ] = prapkqmbhn ; if ( prapkqmbhn > duii3t1wgq . P_8 ) {
localDW -> prapkqmbhn [ 0 ] = duii3t1wgq . P_8 ; } else if ( prapkqmbhn <
duii3t1wgq . P_9 ) { localDW -> prapkqmbhn [ 0 ] = duii3t1wgq . P_9 ; }
prapkqmbhn = duii3t1wgq . P_7 * localB -> ephjadtbu4 [ 1 ] + localDW ->
prapkqmbhn [ 1 ] ; localDW -> prapkqmbhn [ 1 ] = prapkqmbhn ; if ( prapkqmbhn
> duii3t1wgq . P_8 ) { localDW -> prapkqmbhn [ 1 ] = duii3t1wgq . P_8 ; }
else if ( prapkqmbhn < duii3t1wgq . P_9 ) { localDW -> prapkqmbhn [ 1 ] =
duii3t1wgq . P_9 ; } prapkqmbhn = duii3t1wgq . P_7 * localB -> ephjadtbu4 [ 2
] + localDW -> prapkqmbhn [ 2 ] ; localDW -> prapkqmbhn [ 2 ] = prapkqmbhn ;
if ( prapkqmbhn > duii3t1wgq . P_8 ) { localDW -> prapkqmbhn [ 2 ] =
duii3t1wgq . P_8 ; } else if ( prapkqmbhn < duii3t1wgq . P_9 ) { localDW ->
prapkqmbhn [ 2 ] = duii3t1wgq . P_9 ; } localDW -> cgtgt4zn0n = ( int8_T )
localB -> mdupfrno3v ; } void giuyfjohpx ( g300xrfxoz * const k1irebyn4b ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( k1irebyn4b
-> _mdlRefSfcnS , "CB_core_control" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void m3e4cqcnxy (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , g300xrfxoz
* const k1irebyn4b , mcp2cnxzhw * localB , jombyeybf4 * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; duii3t1wgq . P_8 = rtInfF ;
duii3t1wgq . P_9 = rtMinusInfF ; duii3t1wgq . P_10 = rtInfF ; duii3t1wgq .
P_11 = rtMinusInfF ; ( void ) memset ( ( void * ) k1irebyn4b , 0 , sizeof (
g300xrfxoz ) ) ; k1irebyn4b -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0
; k1irebyn4b -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; k1irebyn4b ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( k1irebyn4b -> _mdlRefSfcnS , "CB_core_control" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( mcp2cnxzhw ) ) ; { localB -> clowlyacfy [ 0 ] =
0.0F ; localB -> clowlyacfy [ 1 ] = 0.0F ; localB -> ephjadtbu4 [ 0 ] = 0.0F
; localB -> ephjadtbu4 [ 1 ] = 0.0F ; localB -> ephjadtbu4 [ 2 ] = 0.0F ; } (
void ) memset ( ( void * ) localDW , 0 , sizeof ( jombyeybf4 ) ) ; localDW ->
prapkqmbhn [ 0 ] = 0.0F ; localDW -> prapkqmbhn [ 1 ] = 0.0F ; localDW ->
prapkqmbhn [ 2 ] = 0.0F ; CB_core_control_InitializeDataMapInfo ( k1irebyn4b
, localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( k1irebyn4b -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
k1irebyn4b -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( k1irebyn4b -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_CB_core_control_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_CB_core_control , 41 ) ; * retVal = 1 ; } static void
mr_CB_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_CB_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_CB_core_control_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_CB_core_control_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_CB_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_CB_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_CB_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_CB_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_CB_core_control_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_CB_core_control_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_CB_core_control_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_CB_core_control_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_CB_core_control_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_CB_core_control_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_CB_core_control_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_CB_core_control_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_CB_core_control_GetDWork ( const
bh3neqetwem * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_CB_core_control_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) )
; { static const char_T * rtdwDataFieldNames [ 3 ] = {
"mdlrefDW->rtdw.prapkqmbhn" , "mdlrefDW->rtdw.cgtgt4zn0n" ,
"mdlrefDW->rtdw.bd4e0eq5em" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 3 , rtdwDataFieldNames ) ; mr_CB_core_control_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . prapkqmbhn ) ,
sizeof ( mdlrefDW -> rtdw . prapkqmbhn ) ) ;
mr_CB_core_control_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( mdlrefDW -> rtdw . cgtgt4zn0n ) , sizeof ( mdlrefDW -> rtdw . cgtgt4zn0n )
) ; mr_CB_core_control_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( mdlrefDW -> rtdw . bd4e0eq5em ) , sizeof ( mdlrefDW -> rtdw .
bd4e0eq5em ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_CB_core_control_SetDWork ( bh3neqetwem *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_CB_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_CB_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
prapkqmbhn ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . prapkqmbhn ) )
; mr_CB_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. cgtgt4zn0n ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . cgtgt4zn0n )
) ; mr_CB_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . bd4e0eq5em ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
bd4e0eq5em ) ) ; } } void mr_CB_core_control_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3477166805U , 3230483846U ,
3916820850U , 3269729092U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"CB_core_control" , & chksum [ 0 ] ) ; } mxArray *
mr_CB_core_control_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
