#include "LC_core_control.h"
#include "rtwtypes.h"
#include "LC_core_control_capi.h"
#include "LC_core_control_private.h"
#include <string.h>
#include "CB_core_control.h"
#include "PF_core_control.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_LC_core_control [ 43 ] = { { "jfe402omtci" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "LC_core_control" } , {
"bialdkvy0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "knzyexzx5e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "LC_core_control" } , { "ohfumdphbh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "LC_core_control" } ,
{ "eohqjp2dff" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "crp5gme2px" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "LC_core_control" } , { "dafxveoiiv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "LC_core_control" } ,
{ "ebqq4mipdk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "pwg3c5nagu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "LC_core_control" } , { "h3gern02mr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "LC_core_control" } ,
{ "kwjbnybg0a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "ieoliziy4w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "LC_core_control" } , { "ldkbugvmsi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "LC_core_control" } ,
{ "otd41cpi3l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "dj4naeykxm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "LC_core_control" } , { "nan4o5p35k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "LC_core_control" } ,
{ "ezigfrnqe0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "kstupqmgsy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "LC_core_control" } , { "ekvlsf2l1w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "LC_core_control" } ,
{ "oy0qujxpgs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "fhctpdvbbm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "LC_core_control" } , { "hefhsp2lgr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "LC_core_control" } ,
{ "odnaev1ogj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "LC_core_control" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , 0 , ( NULL ) } , { "pzrumhvzx4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "LC_core_control" } , { "plg1g1kska" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "LC_core_control" } ,
{ "h12xxmkjhw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"LC_core_control" } , { "ckurqr25mlp" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "bh3neqetwem" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_LC_core_control_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "LC_core_control" } , { "mr_LC_core_control_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "LC_core_control" } , {
"mr_LC_core_control_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "LC_core_control" } , { "LC_core_control.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "LC_core_control.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "LC_core_control" } } ; void oy0qujxpgs ( ldkbugvmsi * localDW
) { jwkq2zcfvb ( & ( localDW -> ipgchh23nu . rtm ) , & ( localDW ->
ipgchh23nu . rtdw ) ) ; e5ef2ozw0e ( & ( localDW -> hcpmcentc5 . rtm ) , & (
localDW -> hcpmcentc5 . rtdw ) ) ; } void ekvlsf2l1w ( ldkbugvmsi * localDW )
{ fviyn2acc5 ( & ( localDW -> ipgchh23nu . rtm ) , & ( localDW -> ipgchh23nu
. rtdw ) ) ; k2dpjuoiat ( & ( localDW -> hcpmcentc5 . rtm ) , & ( localDW ->
hcpmcentc5 . rtdw ) ) ; } void hefhsp2lgr ( ldkbugvmsi * localDW ) {
mp1ci1jqga ( & ( localDW -> ipgchh23nu . rtb ) ) ; icujx3cwz1 ( & ( localDW
-> hcpmcentc5 . rtb ) ) ; } void LC_core_control ( const real32_T fkbfutvxow
[ 3 ] , const real32_T kuj52o20fb [ 3 ] , const boolean_T * d4atsxkvm0 ,
const real32_T foizhxqcy4 [ 3 ] , const real32_T dpdxvxlf2m [ 3 ] , const
boolean_T * ds2fqp4qpb , real32_T aosb3sxbjw [ 3 ] , real32_T lp5bmwtntp [ 3
] , real32_T elwj4znp4s [ 3 ] , real32_T o0xehaf555 [ 3 ] , ldkbugvmsi *
localDW ) { CB_core_control ( & fkbfutvxow [ 0 ] , & kuj52o20fb [ 0 ] ,
d4atsxkvm0 , & aosb3sxbjw [ 0 ] , & lp5bmwtntp [ 0 ] , & ( localDW ->
ipgchh23nu . rtb ) , & ( localDW -> ipgchh23nu . rtdw ) ) ; PF_core_control (
& foizhxqcy4 [ 0 ] , & dpdxvxlf2m [ 0 ] , ds2fqp4qpb , & elwj4znp4s [ 0 ] , &
o0xehaf555 [ 0 ] , & ( localDW -> hcpmcentc5 . rtb ) , & ( localDW ->
hcpmcentc5 . rtdw ) ) ; } void LC_core_controlTID1 ( ldkbugvmsi * localDW ) {
CB_core_controlTID1 ( & ( localDW -> ipgchh23nu . rtb ) ) ;
PF_core_controlTID1 ( & ( localDW -> hcpmcentc5 . rtb ) ) ; } void kstupqmgsy
( ldkbugvmsi * localDW ) { idvm0hwalp ( & ( localDW -> ipgchh23nu . rtb ) , &
( localDW -> ipgchh23nu . rtdw ) ) ; a0j5ozku0y ( & ( localDW -> hcpmcentc5 .
rtb ) , & ( localDW -> hcpmcentc5 . rtdw ) ) ; } void nan4o5p35k ( ldkbugvmsi
* localDW , h12xxmkjhw * const pkdnbyzfyn ) { giuyfjohpx ( & ( localDW ->
ipgchh23nu . rtm ) ) ; ci4xki353t ( & ( localDW -> hcpmcentc5 . rtm ) ) ; if
( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( pkdnbyzfyn ->
_mdlRefSfcnS , "LC_core_control" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void fhctpdvbbm (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , h12xxmkjhw
* const pkdnbyzfyn , ldkbugvmsi * localDW , void * sysRanPtr , int contextTid
, rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath ,
int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof (
real_T ) ) ; ( void ) memset ( ( void * ) pkdnbyzfyn , 0 , sizeof (
h12xxmkjhw ) ) ; pkdnbyzfyn -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0
; pkdnbyzfyn -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; pkdnbyzfyn ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( pkdnbyzfyn -> _mdlRefSfcnS , "LC_core_control" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( void * )
localDW , 0 , sizeof ( ldkbugvmsi ) ) ; LC_core_control_InitializeDataMapInfo
( pkdnbyzfyn , localDW , sysRanPtr , contextTid ) ; m3e4cqcnxy ( _mdlRefSfcnS
, mdlref_TID0 , mdlref_TID1 , & ( localDW -> ipgchh23nu . rtm ) , & ( localDW
-> ipgchh23nu . rtb ) , & ( localDW -> ipgchh23nu . rtdw ) , pkdnbyzfyn ->
DataMapInfo . systemRan [ 0 ] , pkdnbyzfyn -> DataMapInfo . systemTid [ 0 ] ,
& ( pkdnbyzfyn -> DataMapInfo . mmi ) , "LC_core_control/CB_Model" , 0 , - 1
) ; f0mfj1yok3 ( _mdlRefSfcnS , mdlref_TID0 , mdlref_TID1 , & ( localDW ->
hcpmcentc5 . rtm ) , & ( localDW -> hcpmcentc5 . rtb ) , & ( localDW ->
hcpmcentc5 . rtdw ) , pkdnbyzfyn -> DataMapInfo . systemRan [ 0 ] ,
pkdnbyzfyn -> DataMapInfo . systemTid [ 0 ] , & ( pkdnbyzfyn -> DataMapInfo .
mmi ) , "LC_core_control/PF_Model" , 1 , - 1 ) ; if ( ( rt_ParentMMI != (
NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( *
rt_ParentMMI , rt_ChildMMIIdx , & ( pkdnbyzfyn -> DataMapInfo . mmi ) ) ;
rtwCAPI_SetPath ( pkdnbyzfyn -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( pkdnbyzfyn -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_LC_core_control_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) {
mr_CB_core_control_MdlInfoRegFcn ( mdlRefSfcnS , "CB_core_control" , retVal )
; if ( * retVal == 0 ) return ; * retVal = 0 ;
mr_PF_core_control_MdlInfoRegFcn ( mdlRefSfcnS , "PF_core_control" , retVal )
; if ( * retVal == 0 ) return ; * retVal = 0 ; } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_LC_core_control ,
43 ) ; * retVal = 1 ; } static void mr_LC_core_control_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_LC_core_control_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_LC_core_control_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_LC_core_control_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_LC_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_LC_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_LC_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_LC_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_LC_core_control_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_LC_core_control_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_LC_core_control_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_LC_core_control_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_LC_core_control_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_LC_core_control_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_LC_core_control_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_LC_core_control_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_LC_core_control_GetDWork ( const
jfe402omtci * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"NULL->rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ; { static const char_T *
rtdwDataFieldNames [ 2 ] = { "mdlrefDW->rtdw.ipgchh23nu" ,
"mdlrefDW->rtdw.hcpmcentc5" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 2 , rtdwDataFieldNames ) ; { mxArray * varData =
mr_CB_core_control_GetDWork ( & ( mdlrefDW -> rtdw . ipgchh23nu ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; } { mxArray * varData =
mr_PF_core_control_GetDWork ( & ( mdlrefDW -> rtdw . hcpmcentc5 ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 1 , varData ) ; } mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_LC_core_control_SetDWork ( jfe402omtci * mdlrefDW , const mxArray * ssDW )
{ ( void ) ssDW ; ( void ) mdlrefDW ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_CB_core_control_SetDWork ( & (
mdlrefDW -> rtdw . ipgchh23nu ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_PF_core_control_SetDWork ( & ( mdlrefDW -> rtdw . hcpmcentc5 ) ,
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ; } } void
mr_LC_core_control_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1386532247U , 1119767808U , 2650410943U ,
521199874U , } ; slmrModelRefRegisterSimStateChecksum ( S , "LC_core_control"
, & chksum [ 0 ] ) ; mr_CB_core_control_RegisterSimStateChecksum ( S ) ;
mr_PF_core_control_RegisterSimStateChecksum ( S ) ; } mxArray *
mr_LC_core_control_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ;
size_t numChildrenWithDisallowedBlocks = 0 ; size_t numBlocks = 0 ; mxArray *
disallowedBlocksInChild [ 2 ] ; disallowedBlocksInChild [ 0 ] =
mr_CB_core_control_GetSimStateDisallowedBlocks ( ) ; disallowedBlocksInChild
[ 1 ] = mr_PF_core_control_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for
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
