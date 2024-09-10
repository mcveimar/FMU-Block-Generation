#include "PF_core_control.h"
#include "rtwtypes.h"
#include "PF_core_control_private.h"
#include "mwmathutil.h"
#include "PF_core_control_capi.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_PF_core_control [ 41 ] = { { "ckurqr25mlp" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "PF_core_control" } , {
"m5mqyaridi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "g5uh1bz4en" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "PF_core_control" } , { "cfsl41ricm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PF_core_control" } ,
{ "ejwfxiizmt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "lm1dpbfngq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "PF_core_control" } , { "pu1uehqnpz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PF_core_control" } ,
{ "gmybbkbpck" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "d4xanleuea" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "PF_core_control" } , { "pu301fqygs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PF_core_control" } ,
{ "fujpdsmurz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "cgvfvbhgyv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "PF_core_control" } , { "kffoxsxgi3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PF_core_control" } ,
{ "dazqhehljy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "margq3u5wx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "PF_core_control" } , { "ci4xki353t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PF_core_control" } ,
{ "e2esvqdf4d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "a0j5ozku0y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "PF_core_control" } , { "k2dpjuoiat" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PF_core_control" } ,
{ "e5ef2ozw0e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "f0mfj1yok3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "PF_core_control" } , { "icujx3cwz1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PF_core_control" } ,
{ "kbum5fgxgt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "PF_core_control" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , 0 , ( NULL ) } , { "ktdczivywo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "PF_core_control" } , { "hmzuiyade0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "PF_core_control" } ,
{ "drx5qpwp11" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"PF_core_control" } , { "mr_PF_core_control_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "PF_core_control" } , { "mr_PF_core_control_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "PF_core_control" } , {
"mr_PF_core_control_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "PF_core_control" } , { "PF_core_control.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "PF_core_control.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "PF_core_control" } } ; ejynlan1wgy ejynlan1wg = { 0.3 , 2.0 ,
1.0 , 1.0F , - 1.0F , 0.0F , 0.008F , 0.0F , 0.0F , 0.0F , 0.0F , { 0.0F ,
0.0F , 0.0F } } ; void e5ef2ozw0e ( drx5qpwp11 * const ihatqynl0w ,
kffoxsxgi3 * localDW ) { boolean_T tmp ; localDW -> a4zlcs4kyg = 0 ; localDW
-> momzo3ld3q = 1U ; if ( rtmIsFirstInitCond ( ihatqynl0w ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ihatqynl0w -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ihatqynl0w -> _mdlRefSfcnS ) ) ; localDW -> momzo3ld3q = ( uint8_T ) ! tmp ;
} else { localDW -> momzo3ld3q = 1U ; } } } void k2dpjuoiat ( drx5qpwp11 *
const ihatqynl0w , kffoxsxgi3 * localDW ) { boolean_T tmp ; localDW ->
a4zlcs4kyg = 0 ; localDW -> momzo3ld3q = 1U ; if ( rtmIsFirstInitCond (
ihatqynl0w ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
ihatqynl0w -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
ihatqynl0w -> _mdlRefSfcnS ) ) ; localDW -> momzo3ld3q = ( uint8_T ) ! tmp ;
} else { localDW -> momzo3ld3q = 1U ; } } } void icujx3cwz1 ( dazqhehljy *
localB ) { localB -> eoxpzfpzyo [ 0 ] = 0.008F ; localB -> eoxpzfpzyo [ 1 ] =
0.0F ; } void PF_core_control ( const real32_T hglwwq1tiw [ 3 ] , const
real32_T c4xfikzmdi [ 3 ] , const boolean_T * nt5p0orntv , real32_T
moqnqvlzwm [ 3 ] , real32_T l5giyjufbt [ 3 ] , dazqhehljy * localB ,
kffoxsxgi3 * localDW ) { real32_T j14cwy04c2_idx_0 ; real32_T
j14cwy04c2_idx_1 ; real32_T j14cwy04c2_idx_2 ; real32_T l5giyjufbt_p ;
real32_T ocoaaqd2i4 ; ocoaaqd2i4 = ( real32_T ) muDoubleScalarMax ( localB ->
eoxpzfpzyo [ 0 ] , ejynlan1wg . P_0 ) ; ocoaaqd2i4 += ( real32_T ) (
ocoaaqd2i4 == 0.0F ) * 2.22044605e-16F ; localB -> fcrthjrsxb = ( ( (
real32_T ) ( ejynlan1wg . P_0 - localB -> eoxpzfpzyo [ 0 ] ) <= ejynlan1wg .
P_5 ) && localB -> chaork5i03 ) ; if ( * nt5p0orntv ) { j14cwy04c2_idx_0 = (
hglwwq1tiw [ 0 ] + ejynlan1wg . P_11 [ 0 ] ) * ejynlan1wg . P_4 ;
j14cwy04c2_idx_1 = ( hglwwq1tiw [ 1 ] + ejynlan1wg . P_11 [ 1 ] ) *
ejynlan1wg . P_4 ; j14cwy04c2_idx_2 = ( hglwwq1tiw [ 2 ] + ejynlan1wg . P_11
[ 2 ] ) * ejynlan1wg . P_4 ; } else { j14cwy04c2_idx_0 = 0.0F ;
j14cwy04c2_idx_1 = 0.0F ; j14cwy04c2_idx_2 = 0.0F ; } j14cwy04c2_idx_0 *=
ejynlan1wg . P_3 ; j14cwy04c2_idx_1 *= ejynlan1wg . P_3 ; j14cwy04c2_idx_2 *=
ejynlan1wg . P_3 ; if ( localDW -> momzo3ld3q != 0 ) { localDW -> o01vp0xlcb
[ 0 ] = j14cwy04c2_idx_0 ; if ( j14cwy04c2_idx_0 > ejynlan1wg . P_7 ) {
localDW -> o01vp0xlcb [ 0 ] = ejynlan1wg . P_7 ; } else if ( j14cwy04c2_idx_0
< ejynlan1wg . P_8 ) { localDW -> o01vp0xlcb [ 0 ] = ejynlan1wg . P_8 ; }
localDW -> o01vp0xlcb [ 1 ] = j14cwy04c2_idx_1 ; if ( j14cwy04c2_idx_1 >
ejynlan1wg . P_7 ) { localDW -> o01vp0xlcb [ 1 ] = ejynlan1wg . P_7 ; } else
if ( j14cwy04c2_idx_1 < ejynlan1wg . P_8 ) { localDW -> o01vp0xlcb [ 1 ] =
ejynlan1wg . P_8 ; } localDW -> o01vp0xlcb [ 2 ] = j14cwy04c2_idx_2 ; if (
j14cwy04c2_idx_2 > ejynlan1wg . P_7 ) { localDW -> o01vp0xlcb [ 2 ] =
ejynlan1wg . P_7 ; } else if ( j14cwy04c2_idx_2 < ejynlan1wg . P_8 ) {
localDW -> o01vp0xlcb [ 2 ] = ejynlan1wg . P_8 ; } } if ( localB ->
fcrthjrsxb || ( localDW -> a4zlcs4kyg != 0 ) ) { localDW -> o01vp0xlcb [ 0 ]
= j14cwy04c2_idx_0 ; if ( j14cwy04c2_idx_0 > ejynlan1wg . P_7 ) { localDW ->
o01vp0xlcb [ 0 ] = ejynlan1wg . P_7 ; } else if ( j14cwy04c2_idx_0 <
ejynlan1wg . P_8 ) { localDW -> o01vp0xlcb [ 0 ] = ejynlan1wg . P_8 ; }
localDW -> o01vp0xlcb [ 1 ] = j14cwy04c2_idx_1 ; if ( j14cwy04c2_idx_1 >
ejynlan1wg . P_7 ) { localDW -> o01vp0xlcb [ 1 ] = ejynlan1wg . P_7 ; } else
if ( j14cwy04c2_idx_1 < ejynlan1wg . P_8 ) { localDW -> o01vp0xlcb [ 1 ] =
ejynlan1wg . P_8 ; } localDW -> o01vp0xlcb [ 2 ] = j14cwy04c2_idx_2 ; if (
j14cwy04c2_idx_2 > ejynlan1wg . P_7 ) { localDW -> o01vp0xlcb [ 2 ] =
ejynlan1wg . P_7 ; } else if ( j14cwy04c2_idx_2 < ejynlan1wg . P_8 ) {
localDW -> o01vp0xlcb [ 2 ] = ejynlan1wg . P_8 ; } } if ( localDW ->
o01vp0xlcb [ 0 ] > ejynlan1wg . P_9 ) { l5giyjufbt_p = ejynlan1wg . P_9 ; }
else if ( localDW -> o01vp0xlcb [ 0 ] < ejynlan1wg . P_10 ) { l5giyjufbt_p =
ejynlan1wg . P_10 ; } else { l5giyjufbt_p = localDW -> o01vp0xlcb [ 0 ] ; }
l5giyjufbt [ 0 ] = l5giyjufbt_p ; localB -> grjjr2ea1q [ 0 ] = 1.0F /
ocoaaqd2i4 * ( j14cwy04c2_idx_0 - l5giyjufbt_p ) ; moqnqvlzwm [ 0 ] =
l5giyjufbt_p - c4xfikzmdi [ 0 ] ; if ( localDW -> o01vp0xlcb [ 1 ] >
ejynlan1wg . P_9 ) { l5giyjufbt_p = ejynlan1wg . P_9 ; } else if ( localDW ->
o01vp0xlcb [ 1 ] < ejynlan1wg . P_10 ) { l5giyjufbt_p = ejynlan1wg . P_10 ; }
else { l5giyjufbt_p = localDW -> o01vp0xlcb [ 1 ] ; } l5giyjufbt [ 1 ] =
l5giyjufbt_p ; localB -> grjjr2ea1q [ 1 ] = 1.0F / ocoaaqd2i4 * (
j14cwy04c2_idx_1 - l5giyjufbt_p ) ; moqnqvlzwm [ 1 ] = l5giyjufbt_p -
c4xfikzmdi [ 1 ] ; if ( localDW -> o01vp0xlcb [ 2 ] > ejynlan1wg . P_9 ) {
l5giyjufbt_p = ejynlan1wg . P_9 ; } else if ( localDW -> o01vp0xlcb [ 2 ] <
ejynlan1wg . P_10 ) { l5giyjufbt_p = ejynlan1wg . P_10 ; } else {
l5giyjufbt_p = localDW -> o01vp0xlcb [ 2 ] ; } l5giyjufbt [ 2 ] =
l5giyjufbt_p ; localB -> grjjr2ea1q [ 2 ] = 1.0F / ocoaaqd2i4 * (
j14cwy04c2_idx_2 - l5giyjufbt_p ) ; moqnqvlzwm [ 2 ] = l5giyjufbt_p -
c4xfikzmdi [ 2 ] ; } void PF_core_controlTID1 ( dazqhehljy * localB ) {
localB -> chaork5i03 = ( ejynlan1wg . P_2 < ejynlan1wg . P_1 ) ; } void
a0j5ozku0y ( dazqhehljy * localB , kffoxsxgi3 * localDW ) { real32_T
o01vp0xlcb ; localDW -> momzo3ld3q = 0U ; o01vp0xlcb = ejynlan1wg . P_6 *
localB -> grjjr2ea1q [ 0 ] + localDW -> o01vp0xlcb [ 0 ] ; localDW ->
o01vp0xlcb [ 0 ] = o01vp0xlcb ; if ( o01vp0xlcb > ejynlan1wg . P_7 ) {
localDW -> o01vp0xlcb [ 0 ] = ejynlan1wg . P_7 ; } else if ( o01vp0xlcb <
ejynlan1wg . P_8 ) { localDW -> o01vp0xlcb [ 0 ] = ejynlan1wg . P_8 ; }
o01vp0xlcb = ejynlan1wg . P_6 * localB -> grjjr2ea1q [ 1 ] + localDW ->
o01vp0xlcb [ 1 ] ; localDW -> o01vp0xlcb [ 1 ] = o01vp0xlcb ; if ( o01vp0xlcb
> ejynlan1wg . P_7 ) { localDW -> o01vp0xlcb [ 1 ] = ejynlan1wg . P_7 ; }
else if ( o01vp0xlcb < ejynlan1wg . P_8 ) { localDW -> o01vp0xlcb [ 1 ] =
ejynlan1wg . P_8 ; } o01vp0xlcb = ejynlan1wg . P_6 * localB -> grjjr2ea1q [ 2
] + localDW -> o01vp0xlcb [ 2 ] ; localDW -> o01vp0xlcb [ 2 ] = o01vp0xlcb ;
if ( o01vp0xlcb > ejynlan1wg . P_7 ) { localDW -> o01vp0xlcb [ 2 ] =
ejynlan1wg . P_7 ; } else if ( o01vp0xlcb < ejynlan1wg . P_8 ) { localDW ->
o01vp0xlcb [ 2 ] = ejynlan1wg . P_8 ; } localDW -> a4zlcs4kyg = ( int8_T )
localB -> fcrthjrsxb ; } void ci4xki353t ( drx5qpwp11 * const ihatqynl0w ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( ihatqynl0w
-> _mdlRefSfcnS , "PF_core_control" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void f0mfj1yok3 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , drx5qpwp11
* const ihatqynl0w , dazqhehljy * localB , kffoxsxgi3 * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ejynlan1wg . P_7 = rtInfF ;
ejynlan1wg . P_8 = rtMinusInfF ; ejynlan1wg . P_9 = rtInfF ; ejynlan1wg .
P_10 = rtMinusInfF ; ( void ) memset ( ( void * ) ihatqynl0w , 0 , sizeof (
drx5qpwp11 ) ) ; ihatqynl0w -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0
; ihatqynl0w -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; ihatqynl0w ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( ihatqynl0w -> _mdlRefSfcnS , "PF_core_control" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( dazqhehljy ) ) ; { localB -> eoxpzfpzyo [ 0 ] =
0.0F ; localB -> eoxpzfpzyo [ 1 ] = 0.0F ; localB -> grjjr2ea1q [ 0 ] = 0.0F
; localB -> grjjr2ea1q [ 1 ] = 0.0F ; localB -> grjjr2ea1q [ 2 ] = 0.0F ; } (
void ) memset ( ( void * ) localDW , 0 , sizeof ( kffoxsxgi3 ) ) ; localDW ->
o01vp0xlcb [ 0 ] = 0.0F ; localDW -> o01vp0xlcb [ 1 ] = 0.0F ; localDW ->
o01vp0xlcb [ 2 ] = 0.0F ; PF_core_control_InitializeDataMapInfo ( ihatqynl0w
, localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( ihatqynl0w -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
ihatqynl0w -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( ihatqynl0w -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_PF_core_control_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_PF_core_control , 41 ) ; * retVal = 1 ; } static void
mr_PF_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_PF_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_PF_core_control_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_PF_core_control_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_PF_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_PF_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_PF_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_PF_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_PF_core_control_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_PF_core_control_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_PF_core_control_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_PF_core_control_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_PF_core_control_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_PF_core_control_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_PF_core_control_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_PF_core_control_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_PF_core_control_GetDWork ( const
ckurqr25mlp * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_PF_core_control_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) )
; { static const char_T * rtdwDataFieldNames [ 3 ] = {
"mdlrefDW->rtdw.o01vp0xlcb" , "mdlrefDW->rtdw.a4zlcs4kyg" ,
"mdlrefDW->rtdw.momzo3ld3q" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 3 , rtdwDataFieldNames ) ; mr_PF_core_control_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . o01vp0xlcb ) ,
sizeof ( mdlrefDW -> rtdw . o01vp0xlcb ) ) ;
mr_PF_core_control_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( mdlrefDW -> rtdw . a4zlcs4kyg ) , sizeof ( mdlrefDW -> rtdw . a4zlcs4kyg )
) ; mr_PF_core_control_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( mdlrefDW -> rtdw . momzo3ld3q ) , sizeof ( mdlrefDW -> rtdw .
momzo3ld3q ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_PF_core_control_SetDWork ( ckurqr25mlp *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_PF_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_PF_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
o01vp0xlcb ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . o01vp0xlcb ) )
; mr_PF_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. a4zlcs4kyg ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . a4zlcs4kyg )
) ; mr_PF_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . momzo3ld3q ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
momzo3ld3q ) ) ; } } void mr_PF_core_control_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 1616912897U , 3195080540U ,
3620733411U , 1628885128U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"PF_core_control" , & chksum [ 0 ] ) ; } mxArray *
mr_PF_core_control_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
