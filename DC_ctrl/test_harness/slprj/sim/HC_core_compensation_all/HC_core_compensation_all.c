#include "HC_core_compensation_all.h"
#include "rtwtypes.h"
#include "HC_core_compensation_all_private.h"
#include "HC_core_compensation_all_capi.h"
#include <string.h>
#include "HC_core_compensation.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_HC_core_compensation_all [ 42 ] = { {
"otekkx3ztfm" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "fkqlvp51tx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "cosfve15vi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "m3q3zihfwl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "czp3ej5j3n" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "k3za3qlwof" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "llbq5mr3ex" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "bdoisg5qdx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "df5ayo4vam" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "npcbip0hni" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "m3dp5g1hmv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "awpejrv4e2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "iqohuogald" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "g5ibclfkll" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "g3thnb3wsh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "gefkexhyzf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "pgapoye1gs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "d5cxoj21dh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "d0i35w3ede" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "k1zlgnkq11" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "cezqaqh0pi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "i5ltjfz1ee" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "pzspcw0nsx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "HC_core_compensation_all" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "eb04s03hk0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "ptdmzjsaqi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "m4hx0ogpuj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_compensation_all" } , { "blwxvi3q3iv" , MDL_INFO_ID_DATA_TYPE , 0 ,
- 1 , ( NULL ) } , {
"mr_HC_core_compensation_all_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_compensation_all"
} , { "mr_HC_core_compensation_all_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "HC_core_compensation_all" } , {
"mr_HC_core_compensation_all_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "HC_core_compensation_all" } , { "HC_core_compensation_all.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"HC_core_compensation_all.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"HC_core_compensation_all" } } ; gkk1xkyog0o gkk1xkyog0 = { 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , { 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F } , { 0.0F ,
0.0F , 0.0F } } ; void k1zlgnkq11 ( iqohuogald * localDW ) { lbv5mhn4ns ( & (
localDW -> iidxja3ddi . rtdw ) ) ; } void d0i35w3ede ( iqohuogald * localDW )
{ cmy5t3htxp ( & ( localDW -> iidxja3ddi . rtdw ) ) ; } void i5ltjfz1ee (
iqohuogald * localDW ) { pcdmbxaabi ( & ( localDW -> iidxja3ddi . rtdw ) ) ;
} void HC_core_compensation_all ( const real32_T czqfmvasis [ 18 ] , const
real32_T ikgpjxcg4s [ 18 ] , const boolean_T * chbt35xqh3 , const real32_T
m41oqd0qya [ 6 ] , const real32_T lxdhuayasc [ 18 ] , const real32_T
l4fduq3gdp [ 18 ] , const real32_T gvubshexmp [ 18 ] , real32_T pi0vgdlbia [
18 ] , real32_T jajrmlhuvb [ 18 ] , real32_T kwvrvlc1lg [ 18 ] , g5ibclfkll *
localB , iqohuogald * localDW ) { real32_T be2ftkk5q5 [ 3 ] ; real32_T
a3i45gtlgs [ 3 ] ; real32_T f3q23qgo0t [ 3 ] ; int32_T fx0gfp3nke_tmp ;
fx0gfp3nke_tmp = ( ( int32_T ) gkk1xkyog0 . P_1 - 1 ) * 3 ; localB ->
fx0gfp3nke [ 0 ] = czqfmvasis [ fx0gfp3nke_tmp ] ; localB -> fx0gfp3nke [ 1 ]
= czqfmvasis [ fx0gfp3nke_tmp + 1 ] ; localB -> fx0gfp3nke [ 2 ] = czqfmvasis
[ fx0gfp3nke_tmp + 2 ] ; fx0gfp3nke_tmp = ( ( int32_T ) gkk1xkyog0 . P_2 - 1
) * 3 ; localB -> aamyhuxxoj [ 0 ] = lxdhuayasc [ fx0gfp3nke_tmp ] ; localB
-> aamyhuxxoj [ 1 ] = lxdhuayasc [ fx0gfp3nke_tmp + 1 ] ; localB ->
aamyhuxxoj [ 2 ] = lxdhuayasc [ fx0gfp3nke_tmp + 2 ] ; localB -> fpftiibehl =
m41oqd0qya [ ( int32_T ) gkk1xkyog0 . P_3 - 1 ] ; fx0gfp3nke_tmp = ( (
int32_T ) gkk1xkyog0 . P_4 - 1 ) * 3 ; localB -> oau1ofzwtn [ 0 ] =
ikgpjxcg4s [ fx0gfp3nke_tmp ] ; localB -> oau1ofzwtn [ 1 ] = ikgpjxcg4s [
fx0gfp3nke_tmp + 1 ] ; localB -> oau1ofzwtn [ 2 ] = ikgpjxcg4s [
fx0gfp3nke_tmp + 2 ] ; fx0gfp3nke_tmp = ( ( int32_T ) gkk1xkyog0 . P_5 - 1 )
* 3 ; localB -> m3cpqt3i5b [ 0 ] = l4fduq3gdp [ fx0gfp3nke_tmp ] ; localB ->
m3cpqt3i5b [ 1 ] = l4fduq3gdp [ fx0gfp3nke_tmp + 1 ] ; localB -> m3cpqt3i5b [
2 ] = l4fduq3gdp [ fx0gfp3nke_tmp + 2 ] ; fx0gfp3nke_tmp = ( ( int32_T )
gkk1xkyog0 . P_6 - 1 ) * 3 ; localB -> d33ltxdoyt [ 0 ] = gvubshexmp [
fx0gfp3nke_tmp ] ; localB -> d33ltxdoyt [ 1 ] = gvubshexmp [ fx0gfp3nke_tmp +
1 ] ; localB -> d33ltxdoyt [ 2 ] = gvubshexmp [ fx0gfp3nke_tmp + 2 ] ;
HC_core_compensation ( & localB -> fx0gfp3nke [ 0 ] , & localB -> aamyhuxxoj
[ 0 ] , chbt35xqh3 , & localB -> fpftiibehl , & localB -> oau1ofzwtn [ 0 ] ,
& localB -> m3cpqt3i5b [ 0 ] , & localB -> d33ltxdoyt [ 0 ] , & be2ftkk5q5 [
0 ] , & a3i45gtlgs [ 0 ] , & f3q23qgo0t [ 0 ] , & ( localDW -> iidxja3ddi .
rtb ) , & ( localDW -> iidxja3ddi . rtdw ) ) ; pi0vgdlbia [ 0 ] = be2ftkk5q5
[ 0 ] ; pi0vgdlbia [ 1 ] = be2ftkk5q5 [ 1 ] ; pi0vgdlbia [ 2 ] = be2ftkk5q5 [
2 ] ; pi0vgdlbia [ 3 ] = gkk1xkyog0 . P_7 [ 0 ] ; pi0vgdlbia [ 6 ] =
gkk1xkyog0 . P_7 [ 0 ] ; pi0vgdlbia [ 9 ] = gkk1xkyog0 . P_7 [ 0 ] ;
pi0vgdlbia [ 12 ] = gkk1xkyog0 . P_7 [ 0 ] ; pi0vgdlbia [ 15 ] = gkk1xkyog0 .
P_7 [ 0 ] ; pi0vgdlbia [ 4 ] = gkk1xkyog0 . P_7 [ 1 ] ; pi0vgdlbia [ 7 ] =
gkk1xkyog0 . P_7 [ 1 ] ; pi0vgdlbia [ 10 ] = gkk1xkyog0 . P_7 [ 1 ] ;
pi0vgdlbia [ 13 ] = gkk1xkyog0 . P_7 [ 1 ] ; pi0vgdlbia [ 16 ] = gkk1xkyog0 .
P_7 [ 1 ] ; pi0vgdlbia [ 5 ] = gkk1xkyog0 . P_7 [ 2 ] ; pi0vgdlbia [ 8 ] =
gkk1xkyog0 . P_7 [ 2 ] ; pi0vgdlbia [ 11 ] = gkk1xkyog0 . P_7 [ 2 ] ;
pi0vgdlbia [ 14 ] = gkk1xkyog0 . P_7 [ 2 ] ; pi0vgdlbia [ 17 ] = gkk1xkyog0 .
P_7 [ 2 ] ; jajrmlhuvb [ 0 ] = a3i45gtlgs [ 0 ] ; jajrmlhuvb [ 1 ] =
a3i45gtlgs [ 1 ] ; jajrmlhuvb [ 2 ] = a3i45gtlgs [ 2 ] ; jajrmlhuvb [ 3 ] =
gkk1xkyog0 . P_8 [ 0 ] ; jajrmlhuvb [ 6 ] = gkk1xkyog0 . P_8 [ 0 ] ;
jajrmlhuvb [ 9 ] = gkk1xkyog0 . P_8 [ 0 ] ; jajrmlhuvb [ 12 ] = gkk1xkyog0 .
P_8 [ 0 ] ; jajrmlhuvb [ 15 ] = gkk1xkyog0 . P_8 [ 0 ] ; jajrmlhuvb [ 4 ] =
gkk1xkyog0 . P_8 [ 1 ] ; jajrmlhuvb [ 7 ] = gkk1xkyog0 . P_8 [ 1 ] ;
jajrmlhuvb [ 10 ] = gkk1xkyog0 . P_8 [ 1 ] ; jajrmlhuvb [ 13 ] = gkk1xkyog0 .
P_8 [ 1 ] ; jajrmlhuvb [ 16 ] = gkk1xkyog0 . P_8 [ 1 ] ; jajrmlhuvb [ 5 ] =
gkk1xkyog0 . P_8 [ 2 ] ; jajrmlhuvb [ 8 ] = gkk1xkyog0 . P_8 [ 2 ] ;
jajrmlhuvb [ 11 ] = gkk1xkyog0 . P_8 [ 2 ] ; jajrmlhuvb [ 14 ] = gkk1xkyog0 .
P_8 [ 2 ] ; jajrmlhuvb [ 17 ] = gkk1xkyog0 . P_8 [ 2 ] ; kwvrvlc1lg [ 0 ] =
f3q23qgo0t [ 0 ] ; kwvrvlc1lg [ 1 ] = f3q23qgo0t [ 1 ] ; kwvrvlc1lg [ 2 ] =
f3q23qgo0t [ 2 ] ; kwvrvlc1lg [ 3 ] = gkk1xkyog0 . P_9 [ 0 ] ; kwvrvlc1lg [ 6
] = gkk1xkyog0 . P_9 [ 0 ] ; kwvrvlc1lg [ 9 ] = gkk1xkyog0 . P_9 [ 0 ] ;
kwvrvlc1lg [ 12 ] = gkk1xkyog0 . P_9 [ 0 ] ; kwvrvlc1lg [ 15 ] = gkk1xkyog0 .
P_9 [ 0 ] ; kwvrvlc1lg [ 4 ] = gkk1xkyog0 . P_9 [ 1 ] ; kwvrvlc1lg [ 7 ] =
gkk1xkyog0 . P_9 [ 1 ] ; kwvrvlc1lg [ 10 ] = gkk1xkyog0 . P_9 [ 1 ] ;
kwvrvlc1lg [ 13 ] = gkk1xkyog0 . P_9 [ 1 ] ; kwvrvlc1lg [ 16 ] = gkk1xkyog0 .
P_9 [ 1 ] ; kwvrvlc1lg [ 5 ] = gkk1xkyog0 . P_9 [ 2 ] ; kwvrvlc1lg [ 8 ] =
gkk1xkyog0 . P_9 [ 2 ] ; kwvrvlc1lg [ 11 ] = gkk1xkyog0 . P_9 [ 2 ] ;
kwvrvlc1lg [ 14 ] = gkk1xkyog0 . P_9 [ 2 ] ; kwvrvlc1lg [ 17 ] = gkk1xkyog0 .
P_9 [ 2 ] ; } void d5cxoj21dh ( iqohuogald * localDW ) { cciap5ge1t ( & (
localDW -> iidxja3ddi . rtdw ) ) ; } void gefkexhyzf ( iqohuogald * localDW ,
m4hx0ogpuj * const hyvlkreenb ) { nmlvnzjiku ( & ( localDW -> iidxja3ddi .
rtdw ) , & ( localDW -> iidxja3ddi . rtm ) ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( hyvlkreenb ->
_mdlRefSfcnS , "HC_core_compensation_all" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void cezqaqh0pi (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , m4hx0ogpuj
* const hyvlkreenb , g5ibclfkll * localB , iqohuogald * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
hyvlkreenb , 0 , sizeof ( m4hx0ogpuj ) ) ; hyvlkreenb -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; hyvlkreenb -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; hyvlkreenb -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( hyvlkreenb -> _mdlRefSfcnS , "HC_core_compensation_all"
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> fx0gfp3nke [ 0
] = 0.0F ; localB -> fx0gfp3nke [ 1 ] = 0.0F ; localB -> fx0gfp3nke [ 2 ] =
0.0F ; localB -> aamyhuxxoj [ 0 ] = 0.0F ; localB -> aamyhuxxoj [ 1 ] = 0.0F
; localB -> aamyhuxxoj [ 2 ] = 0.0F ; localB -> fpftiibehl = 0.0F ; localB ->
oau1ofzwtn [ 0 ] = 0.0F ; localB -> oau1ofzwtn [ 1 ] = 0.0F ; localB ->
oau1ofzwtn [ 2 ] = 0.0F ; localB -> m3cpqt3i5b [ 0 ] = 0.0F ; localB ->
m3cpqt3i5b [ 1 ] = 0.0F ; localB -> m3cpqt3i5b [ 2 ] = 0.0F ; localB ->
d33ltxdoyt [ 0 ] = 0.0F ; localB -> d33ltxdoyt [ 1 ] = 0.0F ; localB ->
d33ltxdoyt [ 2 ] = 0.0F ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof
( iqohuogald ) ) ; HC_core_compensation_all_InitializeDataMapInfo (
hyvlkreenb , localDW , sysRanPtr , contextTid ) ; itjrbl0ose ( _mdlRefSfcnS ,
mdlref_TID0 , mdlref_TID1 , & ( localDW -> iidxja3ddi . rtm ) , & ( localDW
-> iidxja3ddi . rtb ) , & ( localDW -> iidxja3ddi . rtdw ) , hyvlkreenb ->
DataMapInfo . systemRan [ 0 ] , hyvlkreenb -> DataMapInfo . systemTid [ 0 ] ,
& ( hyvlkreenb -> DataMapInfo . mmi ) , "HC_core_compensation_all/Model" , 0
, - 1 ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) )
{ rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( hyvlkreenb ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( hyvlkreenb -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( hyvlkreenb ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_HC_core_compensation_all_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) {
mr_HC_core_compensation_MdlInfoRegFcn ( mdlRefSfcnS , "HC_core_compensation"
, retVal ) ; if ( * retVal == 0 ) return ; * retVal = 0 ; } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_HC_core_compensation_all , 42 ) ; * retVal = 1 ; } static void
mr_HC_core_compensation_all_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_HC_core_compensation_all_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_HC_core_compensation_all_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_HC_core_compensation_all_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_HC_core_compensation_all_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_HC_core_compensation_all_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_HC_core_compensation_all_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_HC_core_compensation_all_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_HC_core_compensation_all_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_HC_core_compensation_all_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HC_core_compensation_all_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_HC_core_compensation_all_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_HC_core_compensation_all_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_HC_core_compensation_all_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_HC_core_compensation_all_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_HC_core_compensation_all_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_HC_core_compensation_all_GetDWork (
const otekkx3ztfm * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] =
{ "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix
( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_HC_core_compensation_all_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void
* ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const
char_T * rtdwDataFieldNames [ 1 ] = { "mdlrefDW->rtdw.iidxja3ddi" , } ;
mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 1 , rtdwDataFieldNames )
; { mxArray * varData = mr_HC_core_compensation_GetDWork ( & ( mdlrefDW ->
rtdw . iidxja3ddi ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; }
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_HC_core_compensation_all_SetDWork ( otekkx3ztfm * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_HC_core_compensation_all_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_HC_core_compensation_SetDWork ( & ( mdlrefDW -> rtdw . iidxja3ddi ) ,
mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ; } } void
mr_HC_core_compensation_all_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 1340235487U , 1896158949U , 1444422408U ,
926772661U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"HC_core_compensation_all" , & chksum [ 0 ] ) ;
mr_HC_core_compensation_RegisterSimStateChecksum ( S ) ; } mxArray *
mr_HC_core_compensation_all_GetSimStateDisallowedBlocks ( ) { return
mr_HC_core_compensation_GetSimStateDisallowedBlocks ( ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
