#include "Idq_core_control.h"
#include "rtwtypes.h"
#include "Idq_core_control_private.h"
#include "Idq_core_control_capi.h"
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_Idq_core_control [ 43 ] = { { "pqgg0s5mnwe" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Idq_core_control" } , {
"kxtvuae3qb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "e4c0dd0di2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Idq_core_control" } , { "boaa3vfjhw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Idq_core_control" }
, { "cgsthwuz3q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "ai0p0ly2l0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Idq_core_control" } , { "h5syvq24qe" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Idq_core_control" }
, { "kxgsjivefx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "az5v3n231t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Idq_core_control" } , { "ky1sb5be3z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Idq_core_control" }
, { "ohln4fdxi1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "frqka50jus" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Idq_core_control" } , { "cpo2zckue3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Idq_core_control" }
, { "iv0sgoigmm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "p0nusikdam" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Idq_core_control" } , { "l242pzq2ig" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Idq_core_control" }
, { "feo3qyqycm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "i0vombvibb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Idq_core_control" } , { "cfngso15cx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Idq_core_control" }
, { "fpnmyyhukc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "gqkdhuz13j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Idq_core_control" } , { "c2tqsygvvk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Idq_core_control" }
, { "cfl45cc5jp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "Idq_core_control" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "bm45o0jzuh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Idq_core_control" }
, { "bfzhrgxl1h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Idq_core_control" } , { "fmlk1c5hb5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Idq_core_control" } , { "struct_dKfjdzq9DqVRdgNQC5fpiB" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_Qezy6KcS4s7mCng6ROOkfD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "mr_Idq_core_control_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Idq_core_control" } , { "mr_Idq_core_control_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Idq_core_control" } , {
"mr_Idq_core_control_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "Idq_core_control" } , { "Idq_core_control.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "Idq_core_control.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "Idq_core_control" } } ;
ayanpjhtrps ayanpjhtrp = { 2.0F , { 0.5F , - 0.9655F , 0.4657F } , { 1.0F , -
1.9979F , 0.9983F } , 0.0F , { 0.5F , - 0.9655F , 0.4657F } , { 1.0F , -
1.9979F , 0.9983F } , 0.0F , { 0.5F , - 0.9655F , 0.4657F } , { 1.0F , -
1.9979F , 0.9983F } , 0.0F , 0.0F , 0.239844725F , 2850.54663F , -
0.00016531469F , 0.61992234F , 3.0F , 2.0F , { 0.5F , - 0.9655F , 0.4657F } ,
{ 1.0F , - 1.9979F , 0.9983F } , 0.0F , { 0.5F , - 0.9655F , 0.4657F } , {
1.0F , - 1.9979F , 0.9983F } , 0.0F , { 0.5F , - 0.9655F , 0.4657F } , { 1.0F
, - 1.9979F , 0.9983F } , 0.0F , 0.0F , 0.239844725F , 2850.54663F , -
0.00016531469F , 0.61992234F , 3.0F , false } ; void fpnmyyhukc ( cpo2zckue3
* localDW ) { localDW -> htjh3qwpia [ 0 ] = ayanpjhtrp . P_3 ; localDW ->
mws4tcu3qf [ 0 ] = ayanpjhtrp . P_6 ; localDW -> mwbpk3uscs [ 0 ] =
ayanpjhtrp . P_9 ; localDW -> htjh3qwpia [ 1 ] = ayanpjhtrp . P_3 ; localDW
-> mws4tcu3qf [ 1 ] = ayanpjhtrp . P_6 ; localDW -> mwbpk3uscs [ 1 ] =
ayanpjhtrp . P_9 ; localDW -> oeffvvsesb [ 0 ] = ayanpjhtrp . P_10 ; localDW
-> oeffvvsesb [ 1 ] = ayanpjhtrp . P_10 ; localDW -> oeffvvsesb [ 2 ] =
ayanpjhtrp . P_10 ; localDW -> abbsngkmwu [ 0 ] = ayanpjhtrp . P_19 ; localDW
-> hazahriz5k [ 0 ] = ayanpjhtrp . P_22 ; localDW -> btoqbxgwvw [ 0 ] =
ayanpjhtrp . P_25 ; localDW -> abbsngkmwu [ 1 ] = ayanpjhtrp . P_19 ; localDW
-> hazahriz5k [ 1 ] = ayanpjhtrp . P_22 ; localDW -> btoqbxgwvw [ 1 ] =
ayanpjhtrp . P_25 ; localDW -> f04awwirwd [ 0 ] = ayanpjhtrp . P_26 ; localDW
-> f04awwirwd [ 1 ] = ayanpjhtrp . P_26 ; localDW -> f04awwirwd [ 2 ] =
ayanpjhtrp . P_26 ; } void cfngso15cx ( cpo2zckue3 * localDW ) { localDW ->
htjh3qwpia [ 0 ] = ayanpjhtrp . P_3 ; localDW -> mws4tcu3qf [ 0 ] =
ayanpjhtrp . P_6 ; localDW -> mwbpk3uscs [ 0 ] = ayanpjhtrp . P_9 ; localDW
-> htjh3qwpia [ 1 ] = ayanpjhtrp . P_3 ; localDW -> mws4tcu3qf [ 1 ] =
ayanpjhtrp . P_6 ; localDW -> mwbpk3uscs [ 1 ] = ayanpjhtrp . P_9 ; localDW
-> oeffvvsesb [ 0 ] = ayanpjhtrp . P_10 ; localDW -> oeffvvsesb [ 1 ] =
ayanpjhtrp . P_10 ; localDW -> oeffvvsesb [ 2 ] = ayanpjhtrp . P_10 ; localDW
-> abbsngkmwu [ 0 ] = ayanpjhtrp . P_19 ; localDW -> hazahriz5k [ 0 ] =
ayanpjhtrp . P_22 ; localDW -> btoqbxgwvw [ 0 ] = ayanpjhtrp . P_25 ; localDW
-> abbsngkmwu [ 1 ] = ayanpjhtrp . P_19 ; localDW -> hazahriz5k [ 1 ] =
ayanpjhtrp . P_22 ; localDW -> btoqbxgwvw [ 1 ] = ayanpjhtrp . P_25 ; localDW
-> f04awwirwd [ 0 ] = ayanpjhtrp . P_26 ; localDW -> f04awwirwd [ 1 ] =
ayanpjhtrp . P_26 ; localDW -> f04awwirwd [ 2 ] = ayanpjhtrp . P_26 ; } void
Idq_core_control ( const boolean_T * cs14rbb4zx , const real32_T l3zcfg4pbo [
3 ] , const real32_T psvu3qnip2 [ 3 ] , const real32_T ewmzvpgx0t [ 3 ] ,
const real32_T l0yl1omkd2 [ 3 ] , const real32_T hcxtb30d2m [ 3 ] , const
real32_T jn14fz3rza [ 3 ] , const real32_T cvck5zynsj [ 3 ] , const real32_T
jn1juyx1qb [ 3 ] , real32_T fl0pmgxtbx [ 3 ] , real32_T dwr43n5nz1 [ 3 ] ,
iv0sgoigmm * localB , cpo2zckue3 * localDW , ky1sb5be3z * localZCE ) {
boolean_T liv20ouyss_p ; liv20ouyss_p = ( * cs14rbb4zx == ayanpjhtrp . P_32 )
; if ( ( ( ( localZCE -> fs0gz12tpu == POS_ZCSIG ) != ( int32_T )
liv20ouyss_p ) && ( localZCE -> fs0gz12tpu != UNINITIALIZED_ZCSIG ) ) ||
liv20ouyss_p ) { localDW -> htjh3qwpia [ 0 ] = ayanpjhtrp . P_3 ; localDW ->
htjh3qwpia [ 1 ] = ayanpjhtrp . P_3 ; } localZCE -> fs0gz12tpu = liv20ouyss_p
; localDW -> c0sg4egpmd = ( ( ( l3zcfg4pbo [ 0 ] - ewmzvpgx0t [ 0 ] ) *
ayanpjhtrp . P_0 - localDW -> htjh3qwpia [ 0 ] * ayanpjhtrp . P_2 [ 1 ] ) -
localDW -> htjh3qwpia [ 1 ] * ayanpjhtrp . P_2 [ 2 ] ) / ayanpjhtrp . P_2 [ 0
] ; if ( ( ( ( localZCE -> polwo5lbeb == POS_ZCSIG ) != ( int32_T )
liv20ouyss_p ) && ( localZCE -> polwo5lbeb != UNINITIALIZED_ZCSIG ) ) ||
liv20ouyss_p ) { localDW -> mws4tcu3qf [ 0 ] = ayanpjhtrp . P_6 ; localDW ->
mws4tcu3qf [ 1 ] = ayanpjhtrp . P_6 ; } localZCE -> polwo5lbeb = liv20ouyss_p
; localDW -> cpjbcdef4e = ( ( ( l3zcfg4pbo [ 1 ] - ewmzvpgx0t [ 1 ] ) *
ayanpjhtrp . P_0 - localDW -> mws4tcu3qf [ 0 ] * ayanpjhtrp . P_5 [ 1 ] ) -
localDW -> mws4tcu3qf [ 1 ] * ayanpjhtrp . P_5 [ 2 ] ) / ayanpjhtrp . P_5 [ 0
] ; if ( ( ( ( localZCE -> b1rttlkk33 == POS_ZCSIG ) != ( int32_T )
liv20ouyss_p ) && ( localZCE -> b1rttlkk33 != UNINITIALIZED_ZCSIG ) ) ||
liv20ouyss_p ) { localDW -> mwbpk3uscs [ 0 ] = ayanpjhtrp . P_9 ; localDW ->
mwbpk3uscs [ 1 ] = ayanpjhtrp . P_9 ; } localZCE -> b1rttlkk33 = liv20ouyss_p
; localDW -> btwgoycztt = ( ( ( l3zcfg4pbo [ 2 ] - ewmzvpgx0t [ 2 ] ) *
ayanpjhtrp . P_0 - localDW -> mwbpk3uscs [ 0 ] * ayanpjhtrp . P_8 [ 1 ] ) -
localDW -> mwbpk3uscs [ 1 ] * ayanpjhtrp . P_8 [ 2 ] ) / ayanpjhtrp . P_8 [ 0
] ; localB -> mw1z3unhmu [ 0 ] = ayanpjhtrp . P_11 * localDW -> oeffvvsesb [
0 ] + ayanpjhtrp . P_12 * hcxtb30d2m [ 0 ] ; localB -> mw1z3unhmu [ 1 ] =
ayanpjhtrp . P_11 * localDW -> oeffvvsesb [ 1 ] + ayanpjhtrp . P_12 *
hcxtb30d2m [ 1 ] ; localB -> mw1z3unhmu [ 2 ] = ayanpjhtrp . P_11 * localDW
-> oeffvvsesb [ 2 ] + ayanpjhtrp . P_12 * hcxtb30d2m [ 2 ] ; fl0pmgxtbx [ 0 ]
= ( ( ( ayanpjhtrp . P_1 [ 0 ] * localDW -> c0sg4egpmd + localDW ->
htjh3qwpia [ 0 ] * ayanpjhtrp . P_1 [ 1 ] ) + localDW -> htjh3qwpia [ 1 ] *
ayanpjhtrp . P_1 [ 2 ] ) - ( ayanpjhtrp . P_14 * hcxtb30d2m [ 0 ] +
ayanpjhtrp . P_13 * localDW -> oeffvvsesb [ 0 ] ) * ayanpjhtrp . P_15 ) +
cvck5zynsj [ 0 ] ; fl0pmgxtbx [ 1 ] = ( ( ( ayanpjhtrp . P_4 [ 0 ] * localDW
-> cpjbcdef4e + localDW -> mws4tcu3qf [ 0 ] * ayanpjhtrp . P_4 [ 1 ] ) +
localDW -> mws4tcu3qf [ 1 ] * ayanpjhtrp . P_4 [ 2 ] ) - ( ayanpjhtrp . P_14
* hcxtb30d2m [ 1 ] + ayanpjhtrp . P_13 * localDW -> oeffvvsesb [ 1 ] ) *
ayanpjhtrp . P_15 ) + cvck5zynsj [ 1 ] ; fl0pmgxtbx [ 2 ] = ( ( ( ayanpjhtrp
. P_7 [ 0 ] * localDW -> btwgoycztt + localDW -> mwbpk3uscs [ 0 ] *
ayanpjhtrp . P_7 [ 1 ] ) + localDW -> mwbpk3uscs [ 1 ] * ayanpjhtrp . P_7 [ 2
] ) - ( ayanpjhtrp . P_14 * hcxtb30d2m [ 2 ] + ayanpjhtrp . P_13 * localDW ->
oeffvvsesb [ 2 ] ) * ayanpjhtrp . P_15 ) + cvck5zynsj [ 2 ] ; if ( ( ( (
localZCE -> oi41yxc3kg == POS_ZCSIG ) != ( int32_T ) liv20ouyss_p ) && (
localZCE -> oi41yxc3kg != UNINITIALIZED_ZCSIG ) ) || liv20ouyss_p ) { localDW
-> abbsngkmwu [ 0 ] = ayanpjhtrp . P_19 ; localDW -> abbsngkmwu [ 1 ] =
ayanpjhtrp . P_19 ; } localZCE -> oi41yxc3kg = liv20ouyss_p ; localDW ->
e3fe1rwasq = ( ( ( psvu3qnip2 [ 0 ] - l0yl1omkd2 [ 0 ] ) * ayanpjhtrp . P_16
- localDW -> abbsngkmwu [ 0 ] * ayanpjhtrp . P_18 [ 1 ] ) - localDW ->
abbsngkmwu [ 1 ] * ayanpjhtrp . P_18 [ 2 ] ) / ayanpjhtrp . P_18 [ 0 ] ; if (
( ( ( localZCE -> oftvwekxsj == POS_ZCSIG ) != ( int32_T ) liv20ouyss_p ) &&
( localZCE -> oftvwekxsj != UNINITIALIZED_ZCSIG ) ) || liv20ouyss_p ) {
localDW -> hazahriz5k [ 0 ] = ayanpjhtrp . P_22 ; localDW -> hazahriz5k [ 1 ]
= ayanpjhtrp . P_22 ; } localZCE -> oftvwekxsj = liv20ouyss_p ; localDW ->
lka1egzuhp = ( ( ( psvu3qnip2 [ 1 ] - l0yl1omkd2 [ 1 ] ) * ayanpjhtrp . P_16
- localDW -> hazahriz5k [ 0 ] * ayanpjhtrp . P_21 [ 1 ] ) - localDW ->
hazahriz5k [ 1 ] * ayanpjhtrp . P_21 [ 2 ] ) / ayanpjhtrp . P_21 [ 0 ] ; if (
( ( ( localZCE -> nlylhet0p1 == POS_ZCSIG ) != ( int32_T ) liv20ouyss_p ) &&
( localZCE -> nlylhet0p1 != UNINITIALIZED_ZCSIG ) ) || liv20ouyss_p ) {
localDW -> btoqbxgwvw [ 0 ] = ayanpjhtrp . P_25 ; localDW -> btoqbxgwvw [ 1 ]
= ayanpjhtrp . P_25 ; } localZCE -> nlylhet0p1 = liv20ouyss_p ; localDW ->
byfriecyzb = ( ( ( psvu3qnip2 [ 2 ] - l0yl1omkd2 [ 2 ] ) * ayanpjhtrp . P_16
- localDW -> btoqbxgwvw [ 0 ] * ayanpjhtrp . P_24 [ 1 ] ) - localDW ->
btoqbxgwvw [ 1 ] * ayanpjhtrp . P_24 [ 2 ] ) / ayanpjhtrp . P_24 [ 0 ] ;
localB -> lqzrdlmlxe [ 0 ] = ayanpjhtrp . P_27 * localDW -> f04awwirwd [ 0 ]
+ ayanpjhtrp . P_28 * jn14fz3rza [ 0 ] ; localB -> lqzrdlmlxe [ 1 ] =
ayanpjhtrp . P_27 * localDW -> f04awwirwd [ 1 ] + ayanpjhtrp . P_28 *
jn14fz3rza [ 1 ] ; localB -> lqzrdlmlxe [ 2 ] = ayanpjhtrp . P_27 * localDW
-> f04awwirwd [ 2 ] + ayanpjhtrp . P_28 * jn14fz3rza [ 2 ] ; dwr43n5nz1 [ 0 ]
= ( ( ( ayanpjhtrp . P_17 [ 0 ] * localDW -> e3fe1rwasq + localDW ->
abbsngkmwu [ 0 ] * ayanpjhtrp . P_17 [ 1 ] ) + localDW -> abbsngkmwu [ 1 ] *
ayanpjhtrp . P_17 [ 2 ] ) - ( ayanpjhtrp . P_30 * jn14fz3rza [ 0 ] +
ayanpjhtrp . P_29 * localDW -> f04awwirwd [ 0 ] ) * ayanpjhtrp . P_31 ) +
jn1juyx1qb [ 0 ] ; dwr43n5nz1 [ 1 ] = ( ( ( ayanpjhtrp . P_20 [ 0 ] * localDW
-> lka1egzuhp + localDW -> hazahriz5k [ 0 ] * ayanpjhtrp . P_20 [ 1 ] ) +
localDW -> hazahriz5k [ 1 ] * ayanpjhtrp . P_20 [ 2 ] ) - ( ayanpjhtrp . P_30
* jn14fz3rza [ 1 ] + ayanpjhtrp . P_29 * localDW -> f04awwirwd [ 1 ] ) *
ayanpjhtrp . P_31 ) + jn1juyx1qb [ 1 ] ; dwr43n5nz1 [ 2 ] = ( ( ( ayanpjhtrp
. P_23 [ 0 ] * localDW -> byfriecyzb + localDW -> btoqbxgwvw [ 0 ] *
ayanpjhtrp . P_23 [ 1 ] ) + localDW -> btoqbxgwvw [ 1 ] * ayanpjhtrp . P_23 [
2 ] ) - ( ayanpjhtrp . P_30 * jn14fz3rza [ 2 ] + ayanpjhtrp . P_29 * localDW
-> f04awwirwd [ 2 ] ) * ayanpjhtrp . P_31 ) + jn1juyx1qb [ 2 ] ; } void
i0vombvibb ( iv0sgoigmm * localB , cpo2zckue3 * localDW ) { localDW ->
htjh3qwpia [ 1 ] = localDW -> htjh3qwpia [ 0 ] ; localDW -> htjh3qwpia [ 0 ]
= localDW -> c0sg4egpmd ; localDW -> mws4tcu3qf [ 1 ] = localDW -> mws4tcu3qf
[ 0 ] ; localDW -> mws4tcu3qf [ 0 ] = localDW -> cpjbcdef4e ; localDW ->
mwbpk3uscs [ 1 ] = localDW -> mwbpk3uscs [ 0 ] ; localDW -> mwbpk3uscs [ 0 ]
= localDW -> btwgoycztt ; localDW -> abbsngkmwu [ 1 ] = localDW -> abbsngkmwu
[ 0 ] ; localDW -> abbsngkmwu [ 0 ] = localDW -> e3fe1rwasq ; localDW ->
hazahriz5k [ 1 ] = localDW -> hazahriz5k [ 0 ] ; localDW -> hazahriz5k [ 0 ]
= localDW -> lka1egzuhp ; localDW -> btoqbxgwvw [ 1 ] = localDW -> btoqbxgwvw
[ 0 ] ; localDW -> btoqbxgwvw [ 0 ] = localDW -> byfriecyzb ; localDW ->
oeffvvsesb [ 0 ] = localB -> mw1z3unhmu [ 0 ] ; localDW -> f04awwirwd [ 0 ] =
localB -> lqzrdlmlxe [ 0 ] ; localDW -> oeffvvsesb [ 1 ] = localB ->
mw1z3unhmu [ 1 ] ; localDW -> f04awwirwd [ 1 ] = localB -> lqzrdlmlxe [ 1 ] ;
localDW -> oeffvvsesb [ 2 ] = localB -> mw1z3unhmu [ 2 ] ; localDW ->
f04awwirwd [ 2 ] = localB -> lqzrdlmlxe [ 2 ] ; } void l242pzq2ig (
fmlk1c5hb5 * const dx5hgjdh4m ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( dx5hgjdh4m -> _mdlRefSfcnS , "Idq_core_control" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void gqkdhuz13j (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , fmlk1c5hb5 * const dx5hgjdh4m
, iv0sgoigmm * localB , cpo2zckue3 * localDW , ky1sb5be3z * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
dx5hgjdh4m , 0 , sizeof ( fmlk1c5hb5 ) ) ; dx5hgjdh4m -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; dx5hgjdh4m -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( dx5hgjdh4m -> _mdlRefSfcnS , "Idq_core_control" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> mw1z3unhmu [ 0 ]
= 0.0F ; localB -> mw1z3unhmu [ 1 ] = 0.0F ; localB -> mw1z3unhmu [ 2 ] =
0.0F ; localB -> lqzrdlmlxe [ 0 ] = 0.0F ; localB -> lqzrdlmlxe [ 1 ] = 0.0F
; localB -> lqzrdlmlxe [ 2 ] = 0.0F ; } localDW -> htjh3qwpia [ 0 ] = 0.0F ;
localDW -> htjh3qwpia [ 1 ] = 0.0F ; localDW -> mws4tcu3qf [ 0 ] = 0.0F ;
localDW -> mws4tcu3qf [ 1 ] = 0.0F ; localDW -> mwbpk3uscs [ 0 ] = 0.0F ;
localDW -> mwbpk3uscs [ 1 ] = 0.0F ; localDW -> oeffvvsesb [ 0 ] = 0.0F ;
localDW -> oeffvvsesb [ 1 ] = 0.0F ; localDW -> oeffvvsesb [ 2 ] = 0.0F ;
localDW -> abbsngkmwu [ 0 ] = 0.0F ; localDW -> abbsngkmwu [ 1 ] = 0.0F ;
localDW -> hazahriz5k [ 0 ] = 0.0F ; localDW -> hazahriz5k [ 1 ] = 0.0F ;
localDW -> btoqbxgwvw [ 0 ] = 0.0F ; localDW -> btoqbxgwvw [ 1 ] = 0.0F ;
localDW -> f04awwirwd [ 0 ] = 0.0F ; localDW -> f04awwirwd [ 1 ] = 0.0F ;
localDW -> f04awwirwd [ 2 ] = 0.0F ; localDW -> c0sg4egpmd = 0.0F ; localDW
-> cpjbcdef4e = 0.0F ; localDW -> btwgoycztt = 0.0F ; localDW -> e3fe1rwasq =
0.0F ; localDW -> lka1egzuhp = 0.0F ; localDW -> byfriecyzb = 0.0F ;
Idq_core_control_InitializeDataMapInfo ( dx5hgjdh4m , localDW , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
dx5hgjdh4m -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( dx5hgjdh4m ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
dx5hgjdh4m -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } localZCE -> fs0gz12tpu =
UNINITIALIZED_ZCSIG ; localZCE -> polwo5lbeb = UNINITIALIZED_ZCSIG ; localZCE
-> b1rttlkk33 = UNINITIALIZED_ZCSIG ; localZCE -> oi41yxc3kg =
UNINITIALIZED_ZCSIG ; localZCE -> oftvwekxsj = UNINITIALIZED_ZCSIG ; localZCE
-> nlylhet0p1 = UNINITIALIZED_ZCSIG ; } void
mr_Idq_core_control_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_Idq_core_control , 43 ) ; * retVal = 1 ;
} static void mr_Idq_core_control_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Idq_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Idq_core_control_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Idq_core_control_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Idq_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_Idq_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Idq_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Idq_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Idq_core_control_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Idq_core_control_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Idq_core_control_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_Idq_core_control_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_Idq_core_control_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_Idq_core_control_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_Idq_core_control_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Idq_core_control_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Idq_core_control_GetDWork ( const
pqgg0s5mnwe * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1
, 3 , ssDWFieldNames ) ; mr_Idq_core_control_cacheDataAsMxArray ( ssDW , 0 ,
0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; {
static const char_T * rtdwDataFieldNames [ 14 ] = {
"mdlrefDW->rtdw.htjh3qwpia" , "mdlrefDW->rtdw.mws4tcu3qf" ,
"mdlrefDW->rtdw.mwbpk3uscs" , "mdlrefDW->rtdw.oeffvvsesb" ,
"mdlrefDW->rtdw.abbsngkmwu" , "mdlrefDW->rtdw.hazahriz5k" ,
"mdlrefDW->rtdw.btoqbxgwvw" , "mdlrefDW->rtdw.f04awwirwd" ,
"mdlrefDW->rtdw.c0sg4egpmd" , "mdlrefDW->rtdw.cpjbcdef4e" ,
"mdlrefDW->rtdw.btwgoycztt" , "mdlrefDW->rtdw.e3fe1rwasq" ,
"mdlrefDW->rtdw.lka1egzuhp" , "mdlrefDW->rtdw.byfriecyzb" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 14 , rtdwDataFieldNames ) ;
mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * )
& ( mdlrefDW -> rtdw . htjh3qwpia ) , sizeof ( mdlrefDW -> rtdw . htjh3qwpia
) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const
void * ) & ( mdlrefDW -> rtdw . mws4tcu3qf ) , sizeof ( mdlrefDW -> rtdw .
mws4tcu3qf ) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 2 ,
( const void * ) & ( mdlrefDW -> rtdw . mwbpk3uscs ) , sizeof ( mdlrefDW ->
rtdw . mwbpk3uscs ) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0
, 3 , ( const void * ) & ( mdlrefDW -> rtdw . oeffvvsesb ) , sizeof (
mdlrefDW -> rtdw . oeffvvsesb ) ) ; mr_Idq_core_control_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . abbsngkmwu ) ,
sizeof ( mdlrefDW -> rtdw . abbsngkmwu ) ) ;
mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * )
& ( mdlrefDW -> rtdw . hazahriz5k ) , sizeof ( mdlrefDW -> rtdw . hazahriz5k
) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( mdlrefDW -> rtdw . btoqbxgwvw ) , sizeof ( mdlrefDW -> rtdw .
btoqbxgwvw ) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 7 ,
( const void * ) & ( mdlrefDW -> rtdw . f04awwirwd ) , sizeof ( mdlrefDW ->
rtdw . f04awwirwd ) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0
, 8 , ( const void * ) & ( mdlrefDW -> rtdw . c0sg4egpmd ) , sizeof (
mdlrefDW -> rtdw . c0sg4egpmd ) ) ; mr_Idq_core_control_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( mdlrefDW -> rtdw . cpjbcdef4e ) ,
sizeof ( mdlrefDW -> rtdw . cpjbcdef4e ) ) ;
mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * )
& ( mdlrefDW -> rtdw . btwgoycztt ) , sizeof ( mdlrefDW -> rtdw . btwgoycztt
) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( mdlrefDW -> rtdw . e3fe1rwasq ) , sizeof ( mdlrefDW -> rtdw .
e3fe1rwasq ) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0 , 12 ,
( const void * ) & ( mdlrefDW -> rtdw . lka1egzuhp ) , sizeof ( mdlrefDW ->
rtdw . lka1egzuhp ) ) ; mr_Idq_core_control_cacheDataAsMxArray ( rtdwData , 0
, 13 , ( const void * ) & ( mdlrefDW -> rtdw . byfriecyzb ) , sizeof (
mdlrefDW -> rtdw . byfriecyzb ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 ,
rtdwData ) ; } mr_Idq_core_control_cacheDataAsMxArray ( ssDW , 0 , 2 , (
const void * ) & ( mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; (
void ) mdlrefDW ; return ssDW ; } void mr_Idq_core_control_SetDWork (
pqgg0s5mnwe * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. htjh3qwpia ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . htjh3qwpia )
) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . mws4tcu3qf ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
mws4tcu3qf ) ) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mwbpk3uscs ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW ->
rtdw . mwbpk3uscs ) ) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . oeffvvsesb ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW
-> rtdw . oeffvvsesb ) ) ; mr_Idq_core_control_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . abbsngkmwu ) , rtdwData , 0 , 4 , sizeof (
mdlrefDW -> rtdw . abbsngkmwu ) ) ;
mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. hazahriz5k ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . hazahriz5k )
) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . btoqbxgwvw ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw .
btoqbxgwvw ) ) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . f04awwirwd ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW ->
rtdw . f04awwirwd ) ) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . c0sg4egpmd ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW
-> rtdw . c0sg4egpmd ) ) ; mr_Idq_core_control_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . cpjbcdef4e ) , rtdwData , 0 , 9 , sizeof (
mdlrefDW -> rtdw . cpjbcdef4e ) ) ;
mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. btwgoycztt ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . btwgoycztt )
) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . e3fe1rwasq ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw .
e3fe1rwasq ) ) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lka1egzuhp ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW ->
rtdw . lka1egzuhp ) ) ; mr_Idq_core_control_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . byfriecyzb ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW
-> rtdw . byfriecyzb ) ) ; } mr_Idq_core_control_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce
) ) ; } void mr_Idq_core_control_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 2994163755U , 200745439U , 2941244654U ,
3337095147U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"Idq_core_control" , & chksum [ 0 ] ) ; } mxArray *
mr_Idq_core_control_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
