#include "HC_core_compensation.h"
#include "rtwtypes.h"
#include "HC_core_compensation_capi.h"
#include "HC_core_compensation_private.h"
#include <string.h>
#include "HC_core_control.h"
#include "HC_core_demand.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_HC_core_compensation [ 43 ] = { { "blwxvi3q3iv" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "axzdwed1vp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "cefumw512k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "j5yis0od01" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "aru04gwh5p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "kk2g2fqpru" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "hljuzjo3uv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "ma0ye05b4o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "i5ytoiegfl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "lesqko1y5x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "ccmtvjtli0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "hertk4kecq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "p1qdjfsmjd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "fjo2zxvios" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "i1o0ov0iwy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "nmlvnzjiku" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "dghbmqllbq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "cciap5ge1t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "cmy5t3htxp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "lbv5mhn4ns" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "itjrbl0ose" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "pcdmbxaabi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "cvhnsummdy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "HC_core_compensation" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "nwfd33pjvk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "ftzqlhqdjr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "HC_core_compensation" } , { "cp1r0l5l22" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation" } , { "ed04h1okrzy" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "gqeccqlb2tn" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "mr_HC_core_compensation_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "HC_core_compensation" } , {
"mr_HC_core_compensation_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "mr_HC_core_compensation_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "HC_core_compensation" } , { "mr_HC_core_compensation_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation" } ,
{ "HC_core_compensation.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } ,
{ "HC_core_compensation.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"HC_core_compensation" } } ; void lbv5mhn4ns ( p1qdjfsmjd * localDW ) {
o0wlz5cdw2 ( & ( localDW -> c1i3ujcjxf . rtb ) , & ( localDW -> c1i3ujcjxf .
rtdw ) ) ; evefst11wn ( & ( localDW -> ipmzlyxruy . rtdw ) ) ; } void
cmy5t3htxp ( p1qdjfsmjd * localDW ) { d5qgjc3vsg ( & ( localDW -> ipmzlyxruy
. rtdw ) ) ; jht1q2yrb0 ( & ( localDW -> c1i3ujcjxf . rtb ) , & ( localDW ->
c1i3ujcjxf . rtdw ) ) ; } void pcdmbxaabi ( p1qdjfsmjd * localDW ) {
fsyqt3jfsy ( & ( localDW -> c1i3ujcjxf . rtb ) ) ; } void
HC_core_compensation ( const real32_T kdt5zk3tu2 [ 3 ] , const real32_T
l2pn23542t [ 3 ] , const boolean_T * jqnb3yhva2 , const real32_T * adqd5vyxtc
, const real32_T du1tm0eyoh [ 3 ] , const real32_T fbbmkgx1pf [ 3 ] , const
real32_T mgljw4kgun [ 3 ] , real32_T pieeuibtfi [ 3 ] , real32_T hcrijcsx1t [
3 ] , real32_T esjxzfyzyu [ 3 ] , fjo2zxvios * localB , p1qdjfsmjd * localDW
) { real32_T bd15sawqln [ 3 ] ; HC_core_demand ( & kdt5zk3tu2 [ 0 ] , &
l2pn23542t [ 0 ] , & localB -> dnxu32g12i [ 0 ] , & bd15sawqln [ 0 ] , & (
localDW -> c1i3ujcjxf . rtb ) , & ( localDW -> c1i3ujcjxf . rtdw ) ) ; if ( *
jqnb3yhva2 ) { esjxzfyzyu [ 0 ] = bd15sawqln [ 0 ] ; esjxzfyzyu [ 1 ] =
bd15sawqln [ 1 ] ; esjxzfyzyu [ 2 ] = bd15sawqln [ 2 ] ; } else { esjxzfyzyu
[ 0 ] = 0.0F ; esjxzfyzyu [ 1 ] = 0.0F ; esjxzfyzyu [ 2 ] = 0.0F ; } localB
-> hol3ijwalo [ 0 ] = esjxzfyzyu [ 0 ] - mgljw4kgun [ 0 ] ; localB ->
hol3ijwalo [ 1 ] = esjxzfyzyu [ 1 ] - mgljw4kgun [ 1 ] ; localB -> hol3ijwalo
[ 2 ] = esjxzfyzyu [ 2 ] - mgljw4kgun [ 2 ] ; HC_core_control ( & du1tm0eyoh
[ 0 ] , & fbbmkgx1pf [ 0 ] , adqd5vyxtc , & localB -> hol3ijwalo [ 0 ] , &
localB -> dnxu32g12i [ 0 ] , jqnb3yhva2 , & pieeuibtfi [ 0 ] , & hcrijcsx1t [
0 ] , & ( localDW -> ipmzlyxruy . rtb ) , & ( localDW -> ipmzlyxruy . rtdw )
) ; } void cciap5ge1t ( p1qdjfsmjd * localDW ) { js2osz2qo5 ( & ( localDW ->
c1i3ujcjxf . rtb ) , & ( localDW -> c1i3ujcjxf . rtdw ) ) ; okjdub4pqr ( & (
localDW -> ipmzlyxruy . rtb ) , & ( localDW -> ipmzlyxruy . rtdw ) ) ; } void
nmlvnzjiku ( p1qdjfsmjd * localDW , cp1r0l5l22 * const kceqn1azcu ) {
m133vlzqvd ( & ( localDW -> ipmzlyxruy . rtm ) ) ; amz4zilgtp ( & ( localDW
-> c1i3ujcjxf . rtm ) ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( kceqn1azcu -> _mdlRefSfcnS , "HC_core_compensation" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void itjrbl0ose (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , cp1r0l5l22
* const kceqn1azcu , fjo2zxvios * localB , p1qdjfsmjd * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
kceqn1azcu , 0 , sizeof ( cp1r0l5l22 ) ) ; kceqn1azcu -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; kceqn1azcu -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; kceqn1azcu -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( kceqn1azcu -> _mdlRefSfcnS , "HC_core_compensation" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> dnxu32g12i [ 0 ]
= 0.0F ; localB -> dnxu32g12i [ 1 ] = 0.0F ; localB -> dnxu32g12i [ 2 ] =
0.0F ; localB -> hol3ijwalo [ 0 ] = 0.0F ; localB -> hol3ijwalo [ 1 ] = 0.0F
; localB -> hol3ijwalo [ 2 ] = 0.0F ; } ( void ) memset ( ( void * ) localDW
, 0 , sizeof ( p1qdjfsmjd ) ) ; HC_core_compensation_InitializeDataMapInfo (
kceqn1azcu , localDW , sysRanPtr , contextTid ) ; pv5ckujrfn ( _mdlRefSfcnS ,
mdlref_TID0 , mdlref_TID1 , & ( localDW -> ipmzlyxruy . rtm ) , & ( localDW
-> ipmzlyxruy . rtb ) , & ( localDW -> ipmzlyxruy . rtdw ) , kceqn1azcu ->
DataMapInfo . systemRan [ 0 ] , kceqn1azcu -> DataMapInfo . systemTid [ 0 ] ,
& ( kceqn1azcu -> DataMapInfo . mmi ) , "HC_core_compensation/HC_Control" , 0
, - 1 ) ; hfxfypauzg ( _mdlRefSfcnS , mdlref_TID0 , mdlref_TID1 , & ( localDW
-> c1i3ujcjxf . rtm ) , & ( localDW -> c1i3ujcjxf . rtb ) , & ( localDW ->
c1i3ujcjxf . rtdw ) , kceqn1azcu -> DataMapInfo . systemRan [ 0 ] ,
kceqn1azcu -> DataMapInfo . systemTid [ 0 ] , & ( kceqn1azcu -> DataMapInfo .
mmi ) , "HC_core_compensation/HC_Demand" , 1 , - 1 ) ; if ( ( rt_ParentMMI !=
( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( *
rt_ParentMMI , rt_ChildMMIIdx , & ( kceqn1azcu -> DataMapInfo . mmi ) ) ;
rtwCAPI_SetPath ( kceqn1azcu -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( kceqn1azcu -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_HC_core_compensation_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) {
mr_HC_core_control_MdlInfoRegFcn ( mdlRefSfcnS , "HC_core_control" , retVal )
; if ( * retVal == 0 ) return ; * retVal = 0 ;
mr_HC_core_demand_MdlInfoRegFcn ( mdlRefSfcnS , "HC_core_demand" , retVal ) ;
if ( * retVal == 0 ) return ; * retVal = 0 ; } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_HC_core_compensation , 43 ) ; * retVal = 1 ; } static void
mr_HC_core_compensation_cacheDataAsMxArray ( mxArray * destArray , mwIndex i
, int j , const void * srcData , size_t numBytes ) ; static void
mr_HC_core_compensation_cacheDataAsMxArray ( mxArray * destArray , mwIndex i
, int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_HC_core_compensation_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_HC_core_compensation_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_HC_core_compensation_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_HC_core_compensation_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_HC_core_compensation_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_HC_core_compensation_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_HC_core_compensation_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_HC_core_compensation_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HC_core_compensation_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_HC_core_compensation_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_HC_core_compensation_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_HC_core_compensation_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_HC_core_compensation_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_HC_core_compensation_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_HC_core_compensation_GetDWork ( const
blwxvi3q3iv * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_HC_core_compensation_cacheDataAsMxArray (
ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW ->
rtb ) ) ; { static const char_T * rtdwDataFieldNames [ 2 ] = {
"mdlrefDW->rtdw.c1i3ujcjxf" , "mdlrefDW->rtdw.ipmzlyxruy" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 2 , rtdwDataFieldNames ) ; {
mxArray * varData = mr_HC_core_demand_GetDWork ( & ( mdlrefDW -> rtdw .
c1i3ujcjxf ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; } {
mxArray * varData = mr_HC_core_control_GetDWork ( & ( mdlrefDW -> rtdw .
ipmzlyxruy ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 , varData ) ; }
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_HC_core_compensation_SetDWork ( blwxvi3q3iv * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_HC_core_compensation_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_HC_core_demand_SetDWork (
& ( mdlrefDW -> rtdw . c1i3ujcjxf ) , mxGetFieldByNumber ( rtdwData , 0 , 0 )
) ; mr_HC_core_control_SetDWork ( & ( mdlrefDW -> rtdw . ipmzlyxruy ) ,
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ; } } void
mr_HC_core_compensation_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 967770096U , 506034326U , 2446986038U , 2311822292U
, } ; slmrModelRefRegisterSimStateChecksum ( S , "HC_core_compensation" , &
chksum [ 0 ] ) ; mr_HC_core_control_RegisterSimStateChecksum ( S ) ;
mr_HC_core_demand_RegisterSimStateChecksum ( S ) ; } mxArray *
mr_HC_core_compensation_GetSimStateDisallowedBlocks ( ) { mxArray * data =
NULL ; size_t numChildrenWithDisallowedBlocks = 0 ; size_t numBlocks = 0 ;
mxArray * disallowedBlocksInChild [ 2 ] ; disallowedBlocksInChild [ 0 ] =
mr_HC_core_control_GetSimStateDisallowedBlocks ( ) ; disallowedBlocksInChild
[ 1 ] = mr_HC_core_demand_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for
( i = 0 ; i < 2 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ;
if ( ( NULL ) != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) {
data = data_i ; } numBlocks += mxGetM ( data_i ) ; } } } if (
numChildrenWithDisallowedBlocks > 1 ) { mwIndex subs [ 2 ] , offset ; data =
mxCreateCellMatrix ( numBlocks , 3 ) ; subs [ 0 ] = 0 ; { size_t i ; for ( i
= 0 ; i < 2 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if
( ( NULL ) != data_i ) { mwIndex subs_i [ 2 ] , offset_i ; const mwIndex
numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for ( subs_i [ 0 ] = 0 ; subs_i [
0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex j ; for ( j = 0 ; j < 3 ;
++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ; offset_i =
mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij = mxGetCell ( data_i
, offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ; subs [ 1 ] = j ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; } mxDestroyArray ( data_i ) ; } }
} } return data ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
