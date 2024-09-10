#include "HC_core_control.h"
#include "rtwtypes.h"
#include "HC_core_control_private.h"
#include "mwmathutil.h"
#include "HC_core_control_capi.h"
#include <string.h>
#include "rt_nonfinite.h"
#define k0tyzldg1i (0.00853344)
static RegMdlInfo rtMdlInfo_HC_core_control [ 41 ] = { { "gqeccqlb2tn" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "HC_core_control" } , {
"ljk45if2tg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "d3ukwmy1uj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_control" } , { "dcemtrddpl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_control" } ,
{ "e3pak4dgby" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "iphnz0xwdn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_control" } , { "pbkem53nz4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_control" } ,
{ "owenpzwdwf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "jrl5gzo23h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_control" } , { "auv1tplidx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_control" } ,
{ "ig1jzqxyce" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "gzrbxakjy0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_control" } , { "nmkt2swflu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_control" } ,
{ "kqhylkjjim" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "pkrtlxjixs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_control" } , { "m133vlzqvd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_control" } ,
{ "cwyzvjjeog" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "okjdub4pqr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_control" } , { "d5qgjc3vsg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_control" } ,
{ "evefst11wn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "pv5ckujrfn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_control" } , { "ccv30d233t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_control" } ,
{ "dzcqltgoof" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "HC_core_control" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , 0 , ( NULL ) } , { "bg2mrbkxg3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "HC_core_control" } , { "f25vngg2z0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_control" } ,
{ "opaxafp3tl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_control" } , { "mr_HC_core_control_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "HC_core_control" } , { "mr_HC_core_control_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_control" } , {
"mr_HC_core_control_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "HC_core_control" } , { "HC_core_control.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "HC_core_control.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "HC_core_control" } } ; ddulwrzxzn3 ddulwrzxzn = { 1.0F , 1.0F
, 4.0F , 4.0F , 0.0F , 0.0F , 0.0F , 0.0F , 100.0 , - 100.0 , 100.0 , - 100.0
, 0.0F , 0.0F , 0.0F , 0.00853344F , 0.0F , 0.00853344F , 0.0F , 0.0F , 0.0F
, 0.0F , 0.0F , false , false , 1 , - 1 , 1 , - 1 , 1 , - 1 , 1 , - 1 } ;
void evefst11wn ( nmkt2swflu * localDW ) { localDW -> fbk0ihg1e4 = 0 ;
localDW -> o43rwndbkq [ 0 ] = ddulwrzxzn . P_15 ; localDW -> bzjqj2nvte [ 0 ]
= ddulwrzxzn . P_5 ; localDW -> nn51fvneph [ 0 ] = ddulwrzxzn . P_17 ;
localDW -> adrcnrssnn [ 0 ] = ddulwrzxzn . P_6 ; localDW -> o43rwndbkq [ 1 ]
= ddulwrzxzn . P_15 ; localDW -> bzjqj2nvte [ 1 ] = ddulwrzxzn . P_5 ;
localDW -> nn51fvneph [ 1 ] = ddulwrzxzn . P_17 ; localDW -> adrcnrssnn [ 1 ]
= ddulwrzxzn . P_6 ; localDW -> o43rwndbkq [ 2 ] = ddulwrzxzn . P_15 ;
localDW -> bzjqj2nvte [ 2 ] = ddulwrzxzn . P_5 ; localDW -> nn51fvneph [ 2 ]
= ddulwrzxzn . P_17 ; localDW -> adrcnrssnn [ 2 ] = ddulwrzxzn . P_6 ;
localDW -> cxbmtrukhs = 0 ; } void d5qgjc3vsg ( nmkt2swflu * localDW ) {
localDW -> fbk0ihg1e4 = 0 ; localDW -> o43rwndbkq [ 0 ] = ddulwrzxzn . P_15 ;
localDW -> bzjqj2nvte [ 0 ] = ddulwrzxzn . P_5 ; localDW -> nn51fvneph [ 0 ]
= ddulwrzxzn . P_17 ; localDW -> adrcnrssnn [ 0 ] = ddulwrzxzn . P_6 ;
localDW -> o43rwndbkq [ 1 ] = ddulwrzxzn . P_15 ; localDW -> bzjqj2nvte [ 1 ]
= ddulwrzxzn . P_5 ; localDW -> nn51fvneph [ 1 ] = ddulwrzxzn . P_17 ;
localDW -> adrcnrssnn [ 1 ] = ddulwrzxzn . P_6 ; localDW -> o43rwndbkq [ 2 ]
= ddulwrzxzn . P_15 ; localDW -> bzjqj2nvte [ 2 ] = ddulwrzxzn . P_5 ;
localDW -> nn51fvneph [ 2 ] = ddulwrzxzn . P_17 ; localDW -> adrcnrssnn [ 2 ]
= ddulwrzxzn . P_6 ; localDW -> cxbmtrukhs = 0 ; } void HC_core_control (
const real32_T i14am44bmg [ 3 ] , const real32_T kkf12gjsjc [ 3 ] , const
real32_T * g3uvkxaf5h , const real32_T nj0ku4lxpo [ 3 ] , const real32_T
prrplqo11t [ 3 ] , const boolean_T * jc4qxvcq53 , real32_T hdeb3ujrin [ 3 ] ,
real32_T katajvjnar [ 3 ] , kqhylkjjim * localB , nmkt2swflu * localDW ) {
real32_T j4vzirmana [ 3 ] ; real32_T dlxx2w5se1 [ 3 ] ; real32_T dpk12dvtle [
3 ] ; real32_T agppycgrgl [ 3 ] ; real32_T c3uixe5c3a [ 3 ] ; real32_T
ixypwwq0af [ 3 ] ; real32_T fidod2fdmt [ 3 ] ; real32_T ginuz5uvm2 [ 3 ] ;
real32_T h3rkuzw4yg [ 3 ] ; real32_T piyquzokjo [ 3 ] ; real32_T
b2bdn4goyp_idx_0 ; real32_T b2bdn4goyp_idx_1 ; real32_T b2bdn4goyp_idx_2 ;
real32_T ctxgiwbndk_idx_0 ; real32_T ctxgiwbndk_idx_1 ; real32_T
ctxgiwbndk_idx_2 ; real32_T esswimfkk5 ; real32_T euyfxy5ysi_idx_0 ; real32_T
euyfxy5ysi_idx_1 ; real32_T euyfxy5ysi_idx_2 ; real32_T l4osv1desg_idx_0 ;
real32_T l4osv1desg_idx_1 ; real32_T l4osv1desg_p ; real32_T tmp_e ; real32_T
u0 ; int8_T tmp ; int8_T tmp_p ; esswimfkk5 =
rtP__shuntMaxRequestedCurrentrms2f2fmuGenerationDictionay_sldd_ / *
g3uvkxaf5h ; if ( nj0ku4lxpo [ 0 ] < ddulwrzxzn . P_19 ) { j4vzirmana [ 0 ] =
ddulwrzxzn . P_19 ; } else { j4vzirmana [ 0 ] = nj0ku4lxpo [ 0 ] ; } if (
nj0ku4lxpo [ 1 ] < ddulwrzxzn . P_19 ) { j4vzirmana [ 1 ] = ddulwrzxzn . P_19
; } else { j4vzirmana [ 1 ] = nj0ku4lxpo [ 1 ] ; } if ( nj0ku4lxpo [ 2 ] <
ddulwrzxzn . P_19 ) { j4vzirmana [ 2 ] = ddulwrzxzn . P_19 ; } else {
j4vzirmana [ 2 ] = nj0ku4lxpo [ 2 ] ; } if ( nj0ku4lxpo [ 0 ] > esswimfkk5 )
{ dlxx2w5se1 [ 0 ] = esswimfkk5 ; } else { dlxx2w5se1 [ 0 ] = j4vzirmana [ 0
] ; } if ( nj0ku4lxpo [ 1 ] > esswimfkk5 ) { dlxx2w5se1 [ 1 ] = esswimfkk5 ;
} else { dlxx2w5se1 [ 1 ] = j4vzirmana [ 1 ] ; } if ( nj0ku4lxpo [ 2 ] >
esswimfkk5 ) { dlxx2w5se1 [ 2 ] = esswimfkk5 ; } else { dlxx2w5se1 [ 2 ] =
j4vzirmana [ 2 ] ; } if ( * jc4qxvcq53 ) { b2bdn4goyp_idx_0 = ddulwrzxzn .
P_1 * dlxx2w5se1 [ 0 ] ; b2bdn4goyp_idx_1 = ddulwrzxzn . P_1 * dlxx2w5se1 [ 1
] ; b2bdn4goyp_idx_2 = ddulwrzxzn . P_1 * dlxx2w5se1 [ 2 ] ; } else {
b2bdn4goyp_idx_0 = ddulwrzxzn . P_20 ; b2bdn4goyp_idx_1 = ddulwrzxzn . P_20 ;
b2bdn4goyp_idx_2 = ddulwrzxzn . P_20 ; } u0 = ( real32_T ) ( ddulwrzxzn . P_9
* k0tyzldg1i ) ; tmp_e = ( real32_T ) ( ddulwrzxzn . P_10 * k0tyzldg1i ) ;
euyfxy5ysi_idx_2 = b2bdn4goyp_idx_0 - localDW -> o43rwndbkq [ 0 ] ; if (
euyfxy5ysi_idx_2 > u0 ) { euyfxy5ysi_idx_2 = localDW -> o43rwndbkq [ 0 ] + u0
; } else if ( euyfxy5ysi_idx_2 < tmp_e ) { euyfxy5ysi_idx_2 = localDW ->
o43rwndbkq [ 0 ] + tmp_e ; } else { euyfxy5ysi_idx_2 = b2bdn4goyp_idx_0 ; }
euyfxy5ysi_idx_0 = euyfxy5ysi_idx_2 ; localDW -> o43rwndbkq [ 0 ] =
euyfxy5ysi_idx_2 ; euyfxy5ysi_idx_2 = b2bdn4goyp_idx_1 - localDW ->
o43rwndbkq [ 1 ] ; if ( euyfxy5ysi_idx_2 > u0 ) { euyfxy5ysi_idx_2 = localDW
-> o43rwndbkq [ 1 ] + u0 ; } else if ( euyfxy5ysi_idx_2 < tmp_e ) {
euyfxy5ysi_idx_2 = localDW -> o43rwndbkq [ 1 ] + tmp_e ; } else {
euyfxy5ysi_idx_2 = b2bdn4goyp_idx_1 ; } euyfxy5ysi_idx_1 = euyfxy5ysi_idx_2 ;
localDW -> o43rwndbkq [ 1 ] = euyfxy5ysi_idx_2 ; euyfxy5ysi_idx_2 =
b2bdn4goyp_idx_2 - localDW -> o43rwndbkq [ 2 ] ; if ( euyfxy5ysi_idx_2 > u0 )
{ euyfxy5ysi_idx_2 = localDW -> o43rwndbkq [ 2 ] + u0 ; } else if (
euyfxy5ysi_idx_2 < tmp_e ) { euyfxy5ysi_idx_2 = localDW -> o43rwndbkq [ 2 ] +
tmp_e ; } else { euyfxy5ysi_idx_2 = b2bdn4goyp_idx_2 ; } localDW ->
o43rwndbkq [ 2 ] = euyfxy5ysi_idx_2 ; b2bdn4goyp_idx_0 = dlxx2w5se1 [ 0 ] -
muSingleScalarHypot ( i14am44bmg [ 0 ] , kkf12gjsjc [ 0 ] ) ;
b2bdn4goyp_idx_1 = dlxx2w5se1 [ 1 ] - muSingleScalarHypot ( i14am44bmg [ 1 ]
, kkf12gjsjc [ 1 ] ) ; b2bdn4goyp_idx_2 = dlxx2w5se1 [ 2 ] -
muSingleScalarHypot ( i14am44bmg [ 2 ] , kkf12gjsjc [ 2 ] ) ; localB ->
amiwrqoeze = ( * jc4qxvcq53 == ddulwrzxzn . P_24 ) ; if ( localB ->
amiwrqoeze || ( localDW -> fbk0ihg1e4 != 0 ) ) { localDW -> bzjqj2nvte [ 0 ]
= ddulwrzxzn . P_5 ; localDW -> bzjqj2nvte [ 1 ] = ddulwrzxzn . P_5 ; localDW
-> bzjqj2nvte [ 2 ] = ddulwrzxzn . P_5 ; } dpk12dvtle [ 0 ] = ddulwrzxzn .
P_7 * b2bdn4goyp_idx_0 + localDW -> bzjqj2nvte [ 0 ] ; dpk12dvtle [ 1 ] =
ddulwrzxzn . P_7 * b2bdn4goyp_idx_1 + localDW -> bzjqj2nvte [ 1 ] ;
dpk12dvtle [ 2 ] = ddulwrzxzn . P_7 * b2bdn4goyp_idx_2 + localDW ->
bzjqj2nvte [ 2 ] ; if ( dpk12dvtle [ 0 ] < ddulwrzxzn . P_19 ) { agppycgrgl [
0 ] = ddulwrzxzn . P_19 ; } else { agppycgrgl [ 0 ] = dpk12dvtle [ 0 ] ; } if
( dpk12dvtle [ 1 ] < ddulwrzxzn . P_19 ) { agppycgrgl [ 1 ] = ddulwrzxzn .
P_19 ; } else { agppycgrgl [ 1 ] = dpk12dvtle [ 1 ] ; } if ( dpk12dvtle [ 2 ]
< ddulwrzxzn . P_19 ) { agppycgrgl [ 2 ] = ddulwrzxzn . P_19 ; } else {
agppycgrgl [ 2 ] = dpk12dvtle [ 2 ] ; } if ( dpk12dvtle [ 0 ] > esswimfkk5 )
{ c3uixe5c3a [ 0 ] = esswimfkk5 ; } else { c3uixe5c3a [ 0 ] = agppycgrgl [ 0
] ; } if ( dpk12dvtle [ 1 ] > esswimfkk5 ) { c3uixe5c3a [ 1 ] = esswimfkk5 ;
} else { c3uixe5c3a [ 1 ] = agppycgrgl [ 1 ] ; } if ( dpk12dvtle [ 2 ] >
esswimfkk5 ) { c3uixe5c3a [ 2 ] = esswimfkk5 ; } else { c3uixe5c3a [ 2 ] =
agppycgrgl [ 2 ] ; } if ( prrplqo11t [ 0 ] < ddulwrzxzn . P_19 ) { ixypwwq0af
[ 0 ] = ddulwrzxzn . P_19 ; } else { ixypwwq0af [ 0 ] = prrplqo11t [ 0 ] ; }
if ( prrplqo11t [ 1 ] < ddulwrzxzn . P_19 ) { ixypwwq0af [ 1 ] = ddulwrzxzn .
P_19 ; } else { ixypwwq0af [ 1 ] = prrplqo11t [ 1 ] ; } if ( prrplqo11t [ 2 ]
< ddulwrzxzn . P_19 ) { ixypwwq0af [ 2 ] = ddulwrzxzn . P_19 ; } else {
ixypwwq0af [ 2 ] = prrplqo11t [ 2 ] ; } if ( prrplqo11t [ 0 ] > esswimfkk5 )
{ fidod2fdmt [ 0 ] = esswimfkk5 ; } else { fidod2fdmt [ 0 ] = ixypwwq0af [ 0
] ; } if ( prrplqo11t [ 1 ] > esswimfkk5 ) { fidod2fdmt [ 1 ] = esswimfkk5 ;
} else { fidod2fdmt [ 1 ] = ixypwwq0af [ 1 ] ; } if ( prrplqo11t [ 2 ] >
esswimfkk5 ) { fidod2fdmt [ 2 ] = esswimfkk5 ; } else { fidod2fdmt [ 2 ] =
ixypwwq0af [ 2 ] ; } if ( * jc4qxvcq53 ) { ctxgiwbndk_idx_0 = ddulwrzxzn .
P_2 * fidod2fdmt [ 0 ] ; ctxgiwbndk_idx_1 = ddulwrzxzn . P_2 * fidod2fdmt [ 1
] ; ctxgiwbndk_idx_2 = ddulwrzxzn . P_2 * fidod2fdmt [ 2 ] ; } else {
ctxgiwbndk_idx_0 = ddulwrzxzn . P_22 ; ctxgiwbndk_idx_1 = ddulwrzxzn . P_22 ;
ctxgiwbndk_idx_2 = ddulwrzxzn . P_22 ; } u0 = ( real32_T ) ( ddulwrzxzn .
P_11 * k0tyzldg1i ) ; tmp_e = ( real32_T ) ( ddulwrzxzn . P_12 * k0tyzldg1i )
; l4osv1desg_p = ctxgiwbndk_idx_0 - localDW -> nn51fvneph [ 0 ] ; if (
l4osv1desg_p > u0 ) { l4osv1desg_p = localDW -> nn51fvneph [ 0 ] + u0 ; }
else if ( l4osv1desg_p < tmp_e ) { l4osv1desg_p = localDW -> nn51fvneph [ 0 ]
+ tmp_e ; } else { l4osv1desg_p = ctxgiwbndk_idx_0 ; } l4osv1desg_idx_0 =
l4osv1desg_p ; localDW -> nn51fvneph [ 0 ] = l4osv1desg_p ; l4osv1desg_p =
ctxgiwbndk_idx_1 - localDW -> nn51fvneph [ 1 ] ; if ( l4osv1desg_p > u0 ) {
l4osv1desg_p = localDW -> nn51fvneph [ 1 ] + u0 ; } else if ( l4osv1desg_p <
tmp_e ) { l4osv1desg_p = localDW -> nn51fvneph [ 1 ] + tmp_e ; } else {
l4osv1desg_p = ctxgiwbndk_idx_1 ; } l4osv1desg_idx_1 = l4osv1desg_p ; localDW
-> nn51fvneph [ 1 ] = l4osv1desg_p ; l4osv1desg_p = ctxgiwbndk_idx_2 -
localDW -> nn51fvneph [ 2 ] ; if ( l4osv1desg_p > u0 ) { l4osv1desg_p =
localDW -> nn51fvneph [ 2 ] + u0 ; } else if ( l4osv1desg_p < tmp_e ) {
l4osv1desg_p = localDW -> nn51fvneph [ 2 ] + tmp_e ; } else { l4osv1desg_p =
ctxgiwbndk_idx_2 ; } localDW -> nn51fvneph [ 2 ] = l4osv1desg_p ;
ctxgiwbndk_idx_0 = fidod2fdmt [ 0 ] - muSingleScalarAtan2 ( kkf12gjsjc [ 0 ]
, i14am44bmg [ 0 ] ) ; ctxgiwbndk_idx_1 = fidod2fdmt [ 1 ] -
muSingleScalarAtan2 ( kkf12gjsjc [ 1 ] , i14am44bmg [ 1 ] ) ;
ctxgiwbndk_idx_2 = fidod2fdmt [ 2 ] - muSingleScalarAtan2 ( kkf12gjsjc [ 2 ]
, i14am44bmg [ 2 ] ) ; localB -> dqqu3krthi = ( * jc4qxvcq53 == ddulwrzxzn .
P_25 ) ; if ( localB -> dqqu3krthi || ( localDW -> cxbmtrukhs != 0 ) ) {
localDW -> adrcnrssnn [ 0 ] = ddulwrzxzn . P_6 ; localDW -> adrcnrssnn [ 1 ]
= ddulwrzxzn . P_6 ; localDW -> adrcnrssnn [ 2 ] = ddulwrzxzn . P_6 ; }
ginuz5uvm2 [ 0 ] = ddulwrzxzn . P_8 * ctxgiwbndk_idx_0 + localDW ->
adrcnrssnn [ 0 ] ; ginuz5uvm2 [ 1 ] = ddulwrzxzn . P_8 * ctxgiwbndk_idx_1 +
localDW -> adrcnrssnn [ 1 ] ; ginuz5uvm2 [ 2 ] = ddulwrzxzn . P_8 *
ctxgiwbndk_idx_2 + localDW -> adrcnrssnn [ 2 ] ; if ( ginuz5uvm2 [ 0 ] <
ddulwrzxzn . P_19 ) { h3rkuzw4yg [ 0 ] = ddulwrzxzn . P_19 ; } else {
h3rkuzw4yg [ 0 ] = ginuz5uvm2 [ 0 ] ; } if ( ginuz5uvm2 [ 1 ] < ddulwrzxzn .
P_19 ) { h3rkuzw4yg [ 1 ] = ddulwrzxzn . P_19 ; } else { h3rkuzw4yg [ 1 ] =
ginuz5uvm2 [ 1 ] ; } if ( ginuz5uvm2 [ 2 ] < ddulwrzxzn . P_19 ) { h3rkuzw4yg
[ 2 ] = ddulwrzxzn . P_19 ; } else { h3rkuzw4yg [ 2 ] = ginuz5uvm2 [ 2 ] ; }
if ( ginuz5uvm2 [ 0 ] > esswimfkk5 ) { piyquzokjo [ 0 ] = esswimfkk5 ; } else
{ piyquzokjo [ 0 ] = h3rkuzw4yg [ 0 ] ; } if ( ginuz5uvm2 [ 1 ] > esswimfkk5
) { piyquzokjo [ 1 ] = esswimfkk5 ; } else { piyquzokjo [ 1 ] = h3rkuzw4yg [
1 ] ; } if ( ginuz5uvm2 [ 2 ] > esswimfkk5 ) { piyquzokjo [ 2 ] = esswimfkk5
; } else { piyquzokjo [ 2 ] = h3rkuzw4yg [ 2 ] ; } u0 = l4osv1desg_idx_0 +
piyquzokjo [ 0 ] ; euyfxy5ysi_idx_0 += c3uixe5c3a [ 0 ] ; l4osv1desg_idx_1 +=
piyquzokjo [ 1 ] ; euyfxy5ysi_idx_1 += c3uixe5c3a [ 1 ] ; l4osv1desg_p +=
piyquzokjo [ 2 ] ; euyfxy5ysi_idx_2 += c3uixe5c3a [ 2 ] ; hdeb3ujrin [ 0 ] =
euyfxy5ysi_idx_0 * muSingleScalarCos ( u0 ) ; katajvjnar [ 0 ] =
euyfxy5ysi_idx_0 * muSingleScalarSin ( u0 ) ; hdeb3ujrin [ 1 ] =
euyfxy5ysi_idx_1 * muSingleScalarCos ( l4osv1desg_idx_1 ) ; katajvjnar [ 1 ]
= euyfxy5ysi_idx_1 * muSingleScalarSin ( l4osv1desg_idx_1 ) ; hdeb3ujrin [ 2
] = euyfxy5ysi_idx_2 * muSingleScalarCos ( l4osv1desg_p ) ; katajvjnar [ 2 ]
= euyfxy5ysi_idx_2 * muSingleScalarSin ( l4osv1desg_p ) ; if ( dpk12dvtle [ 0
] >= esswimfkk5 ) { u0 = esswimfkk5 ; } else if ( dpk12dvtle [ 0 ] >
ddulwrzxzn . P_19 ) { u0 = dpk12dvtle [ 0 ] ; } else { u0 = ddulwrzxzn . P_19
; } euyfxy5ysi_idx_0 = dpk12dvtle [ 0 ] - u0 ; if ( dpk12dvtle [ 1 ] >=
esswimfkk5 ) { u0 = esswimfkk5 ; } else if ( dpk12dvtle [ 1 ] > ddulwrzxzn .
P_19 ) { u0 = dpk12dvtle [ 1 ] ; } else { u0 = ddulwrzxzn . P_19 ; }
euyfxy5ysi_idx_1 = dpk12dvtle [ 1 ] - u0 ; if ( dpk12dvtle [ 2 ] >=
esswimfkk5 ) { u0 = esswimfkk5 ; } else if ( dpk12dvtle [ 2 ] > ddulwrzxzn .
P_19 ) { u0 = dpk12dvtle [ 2 ] ; } else { u0 = ddulwrzxzn . P_19 ; }
euyfxy5ysi_idx_2 = dpk12dvtle [ 2 ] - u0 ; b2bdn4goyp_idx_0 *= ddulwrzxzn .
P_3 ; if ( euyfxy5ysi_idx_0 > ddulwrzxzn . P_21 ) { tmp = ddulwrzxzn . P_26 ;
} else { tmp = ddulwrzxzn . P_27 ; } if ( b2bdn4goyp_idx_0 > ddulwrzxzn .
P_21 ) { tmp_p = ddulwrzxzn . P_28 ; } else { tmp_p = ddulwrzxzn . P_29 ; }
if ( ( ddulwrzxzn . P_21 != euyfxy5ysi_idx_0 ) && ( tmp == tmp_p ) ) { localB
-> d45rqko5zg [ 0 ] = ddulwrzxzn . P_13 ; } else { localB -> d45rqko5zg [ 0 ]
= b2bdn4goyp_idx_0 ; } b2bdn4goyp_idx_0 = ddulwrzxzn . P_3 * b2bdn4goyp_idx_1
; if ( euyfxy5ysi_idx_1 > ddulwrzxzn . P_21 ) { tmp = ddulwrzxzn . P_26 ; }
else { tmp = ddulwrzxzn . P_27 ; } if ( b2bdn4goyp_idx_0 > ddulwrzxzn . P_21
) { tmp_p = ddulwrzxzn . P_28 ; } else { tmp_p = ddulwrzxzn . P_29 ; } if ( (
ddulwrzxzn . P_21 != euyfxy5ysi_idx_1 ) && ( tmp == tmp_p ) ) { localB ->
d45rqko5zg [ 1 ] = ddulwrzxzn . P_13 ; } else { localB -> d45rqko5zg [ 1 ] =
b2bdn4goyp_idx_0 ; } b2bdn4goyp_idx_0 = ddulwrzxzn . P_3 * b2bdn4goyp_idx_2 ;
if ( euyfxy5ysi_idx_2 > ddulwrzxzn . P_21 ) { tmp = ddulwrzxzn . P_26 ; }
else { tmp = ddulwrzxzn . P_27 ; } if ( b2bdn4goyp_idx_0 > ddulwrzxzn . P_21
) { tmp_p = ddulwrzxzn . P_28 ; } else { tmp_p = ddulwrzxzn . P_29 ; } if ( (
ddulwrzxzn . P_21 != euyfxy5ysi_idx_2 ) && ( tmp == tmp_p ) ) { localB ->
d45rqko5zg [ 2 ] = ddulwrzxzn . P_13 ; } else { localB -> d45rqko5zg [ 2 ] =
b2bdn4goyp_idx_0 ; } if ( ginuz5uvm2 [ 0 ] >= esswimfkk5 ) { u0 = esswimfkk5
; } else if ( ginuz5uvm2 [ 0 ] > ddulwrzxzn . P_19 ) { u0 = ginuz5uvm2 [ 0 ]
; } else { u0 = ddulwrzxzn . P_19 ; } b2bdn4goyp_idx_0 = ginuz5uvm2 [ 0 ] -
u0 ; if ( ginuz5uvm2 [ 1 ] >= esswimfkk5 ) { u0 = esswimfkk5 ; } else if (
ginuz5uvm2 [ 1 ] > ddulwrzxzn . P_19 ) { u0 = ginuz5uvm2 [ 1 ] ; } else { u0
= ddulwrzxzn . P_19 ; } b2bdn4goyp_idx_1 = ginuz5uvm2 [ 1 ] - u0 ; if ( ! (
ginuz5uvm2 [ 2 ] >= esswimfkk5 ) ) { if ( ginuz5uvm2 [ 2 ] > ddulwrzxzn .
P_19 ) { esswimfkk5 = ginuz5uvm2 [ 2 ] ; } else { esswimfkk5 = ddulwrzxzn .
P_19 ; } } b2bdn4goyp_idx_2 = ginuz5uvm2 [ 2 ] - esswimfkk5 ; esswimfkk5 =
ddulwrzxzn . P_4 * ctxgiwbndk_idx_0 ; if ( b2bdn4goyp_idx_0 > ddulwrzxzn .
P_23 ) { tmp = ddulwrzxzn . P_30 ; } else { tmp = ddulwrzxzn . P_31 ; } if (
esswimfkk5 > ddulwrzxzn . P_23 ) { tmp_p = ddulwrzxzn . P_32 ; } else { tmp_p
= ddulwrzxzn . P_33 ; } if ( ( ddulwrzxzn . P_23 != b2bdn4goyp_idx_0 ) && (
tmp == tmp_p ) ) { localB -> mn4nnr0tmu [ 0 ] = ddulwrzxzn . P_14 ; } else {
localB -> mn4nnr0tmu [ 0 ] = esswimfkk5 ; } esswimfkk5 = ddulwrzxzn . P_4 *
ctxgiwbndk_idx_1 ; if ( b2bdn4goyp_idx_1 > ddulwrzxzn . P_23 ) { tmp =
ddulwrzxzn . P_30 ; } else { tmp = ddulwrzxzn . P_31 ; } if ( esswimfkk5 >
ddulwrzxzn . P_23 ) { tmp_p = ddulwrzxzn . P_32 ; } else { tmp_p = ddulwrzxzn
. P_33 ; } if ( ( ddulwrzxzn . P_23 != b2bdn4goyp_idx_1 ) && ( tmp == tmp_p )
) { localB -> mn4nnr0tmu [ 1 ] = ddulwrzxzn . P_14 ; } else { localB ->
mn4nnr0tmu [ 1 ] = esswimfkk5 ; } esswimfkk5 = ddulwrzxzn . P_4 *
ctxgiwbndk_idx_2 ; if ( b2bdn4goyp_idx_2 > ddulwrzxzn . P_23 ) { tmp =
ddulwrzxzn . P_30 ; } else { tmp = ddulwrzxzn . P_31 ; } if ( esswimfkk5 >
ddulwrzxzn . P_23 ) { tmp_p = ddulwrzxzn . P_32 ; } else { tmp_p = ddulwrzxzn
. P_33 ; } if ( ( ddulwrzxzn . P_23 != b2bdn4goyp_idx_2 ) && ( tmp == tmp_p )
) { localB -> mn4nnr0tmu [ 2 ] = ddulwrzxzn . P_14 ; } else { localB ->
mn4nnr0tmu [ 2 ] = esswimfkk5 ; } } void okjdub4pqr ( kqhylkjjim * localB ,
nmkt2swflu * localDW ) { localDW -> fbk0ihg1e4 = ( int8_T ) localB ->
amiwrqoeze ; localDW -> bzjqj2nvte [ 0 ] += ddulwrzxzn . P_16 * localB ->
d45rqko5zg [ 0 ] ; localDW -> adrcnrssnn [ 0 ] += ddulwrzxzn . P_18 * localB
-> mn4nnr0tmu [ 0 ] ; localDW -> bzjqj2nvte [ 1 ] += ddulwrzxzn . P_16 *
localB -> d45rqko5zg [ 1 ] ; localDW -> adrcnrssnn [ 1 ] += ddulwrzxzn . P_18
* localB -> mn4nnr0tmu [ 1 ] ; localDW -> bzjqj2nvte [ 2 ] += ddulwrzxzn .
P_16 * localB -> d45rqko5zg [ 2 ] ; localDW -> adrcnrssnn [ 2 ] += ddulwrzxzn
. P_18 * localB -> mn4nnr0tmu [ 2 ] ; localDW -> cxbmtrukhs = ( int8_T )
localB -> dqqu3krthi ; } void m133vlzqvd ( opaxafp3tl * const bsmmrqwpul ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( bsmmrqwpul
-> _mdlRefSfcnS , "HC_core_control" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void pv5ckujrfn (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , opaxafp3tl
* const bsmmrqwpul , kqhylkjjim * localB , nmkt2swflu * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
bsmmrqwpul , 0 , sizeof ( opaxafp3tl ) ) ; bsmmrqwpul -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; bsmmrqwpul -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; bsmmrqwpul -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( bsmmrqwpul -> _mdlRefSfcnS , "HC_core_control" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( kqhylkjjim ) ) ; { localB -> d45rqko5zg [ 0 ] =
0.0F ; localB -> d45rqko5zg [ 1 ] = 0.0F ; localB -> d45rqko5zg [ 2 ] = 0.0F
; localB -> mn4nnr0tmu [ 0 ] = 0.0F ; localB -> mn4nnr0tmu [ 1 ] = 0.0F ;
localB -> mn4nnr0tmu [ 2 ] = 0.0F ; } ( void ) memset ( ( void * ) localDW ,
0 , sizeof ( nmkt2swflu ) ) ; localDW -> bzjqj2nvte [ 0 ] = 0.0F ; localDW ->
bzjqj2nvte [ 1 ] = 0.0F ; localDW -> bzjqj2nvte [ 2 ] = 0.0F ; localDW ->
adrcnrssnn [ 0 ] = 0.0F ; localDW -> adrcnrssnn [ 1 ] = 0.0F ; localDW ->
adrcnrssnn [ 2 ] = 0.0F ; localDW -> o43rwndbkq [ 0 ] = 0.0F ; localDW ->
o43rwndbkq [ 1 ] = 0.0F ; localDW -> o43rwndbkq [ 2 ] = 0.0F ; localDW ->
nn51fvneph [ 0 ] = 0.0F ; localDW -> nn51fvneph [ 1 ] = 0.0F ; localDW ->
nn51fvneph [ 2 ] = 0.0F ; HC_core_control_InitializeDataMapInfo ( bsmmrqwpul
, localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( bsmmrqwpul -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
bsmmrqwpul -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( bsmmrqwpul -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_HC_core_control_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_HC_core_control , 41 ) ; * retVal = 1 ; } static void
mr_HC_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_HC_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_HC_core_control_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_HC_core_control_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_HC_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_HC_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_HC_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_HC_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_HC_core_control_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_HC_core_control_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HC_core_control_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_HC_core_control_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_HC_core_control_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_HC_core_control_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_HC_core_control_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_HC_core_control_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_HC_core_control_GetDWork ( const
gqeccqlb2tn * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_HC_core_control_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) )
; { static const char_T * rtdwDataFieldNames [ 6 ] = {
"mdlrefDW->rtdw.bzjqj2nvte" , "mdlrefDW->rtdw.adrcnrssnn" ,
"mdlrefDW->rtdw.o43rwndbkq" , "mdlrefDW->rtdw.nn51fvneph" ,
"mdlrefDW->rtdw.fbk0ihg1e4" , "mdlrefDW->rtdw.cxbmtrukhs" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 6 , rtdwDataFieldNames ) ;
mr_HC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) &
( mdlrefDW -> rtdw . bzjqj2nvte ) , sizeof ( mdlrefDW -> rtdw . bzjqj2nvte )
) ; mr_HC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( mdlrefDW -> rtdw . adrcnrssnn ) , sizeof ( mdlrefDW -> rtdw .
adrcnrssnn ) ) ; mr_HC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( mdlrefDW -> rtdw . o43rwndbkq ) , sizeof ( mdlrefDW ->
rtdw . o43rwndbkq ) ) ; mr_HC_core_control_cacheDataAsMxArray ( rtdwData , 0
, 3 , ( const void * ) & ( mdlrefDW -> rtdw . nn51fvneph ) , sizeof (
mdlrefDW -> rtdw . nn51fvneph ) ) ; mr_HC_core_control_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . fbk0ihg1e4 ) ,
sizeof ( mdlrefDW -> rtdw . fbk0ihg1e4 ) ) ;
mr_HC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) &
( mdlrefDW -> rtdw . cxbmtrukhs ) , sizeof ( mdlrefDW -> rtdw . cxbmtrukhs )
) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_HC_core_control_SetDWork ( gqeccqlb2tn * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_HC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_HC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
bzjqj2nvte ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . bzjqj2nvte ) )
; mr_HC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. adrcnrssnn ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . adrcnrssnn )
) ; mr_HC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . o43rwndbkq ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
o43rwndbkq ) ) ; mr_HC_core_control_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nn51fvneph ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . nn51fvneph ) ) ; mr_HC_core_control_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . fbk0ihg1e4 ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW
-> rtdw . fbk0ihg1e4 ) ) ; mr_HC_core_control_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . cxbmtrukhs ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . cxbmtrukhs ) ) ; } } void
mr_HC_core_control_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2986592911U , 462282093U , 794772067U , 72204208U ,
} ; slmrModelRefRegisterSimStateChecksum ( S , "HC_core_control" , & chksum [
0 ] ) ; } mxArray * mr_HC_core_control_GetSimStateDisallowedBlocks ( ) {
return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
