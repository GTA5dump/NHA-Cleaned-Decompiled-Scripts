//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
var uLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
char* sLocal_23=NULL;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
float fLocal_27=0f;
float fLocal_28=0f;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
float fLocal_35=0f;
float fLocal_36=0f;
var uLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
int iLocal_45=0;
int iLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
struct<2> ScriptParam_0={
0, 5 
};
var uScriptParam_1=0;
var uScriptParam_2=0;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=0;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=0;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=5;
var uScriptParam_17=0;
var uScriptParam_18=0;
var uScriptParam_19=0;
var uScriptParam_20=0;
var uScriptParam_21=0;
#endregion

void __EntryFunction__(){
int iVar0;
int iVar1;
char* sVar2;
struct<3> Var3;
int iVar4;
iLocal_2=1;
iLocal_3=134;
iLocal_4=134;
iLocal_5=1;
iLocal_6=1;
iLocal_7=1;
iLocal_8=134;
iLocal_9=1;
iLocal_10=12;
iLocal_11=12;
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_23="NULL";
fLocal_26=80f;
fLocal_27=140f;
fLocal_28=180f;
fLocal_31=0f;
fLocal_35=-0.0375f;
fLocal_36=0.17f;
iLocal_39=3;
iLocal_43=1;
iLocal_44=65;
iLocal_45=49;
iLocal_46=64;
iVar1=joaat("carwash1");
sVar2="carwash1";
Var3={
ScriptParam_50.f_1[0 /*3*/] 
};
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_carwash_launch")) > 1){
SCRIPT::TERMINATE_THIS_THREAD();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
}else{
SCRIPT::TERMINATE_THIS_THREAD();
}
if(Global_2883694){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(131838674)==0){
SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(131838674);
while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(131838674)){
wait(0);
}
start_new_script_with_name_hash_and_args(131838674, &ScriptParam_50, 23, 1424);
}
SCRIPT::TERMINATE_THIS_THREAD();
}
if(func_12(PLAYER::PLAYER_PED_ID())){}
iVar4=0;
while (iVar4==0){
if((((((func_9(PLAYER::PLAYER_ID(), 1, 0) || func_8()) || !func_7(PLAYER::PLAYER_ID())) || func_6()) || func_5(PLAYER::PLAYER_ID())) || func_4(PLAYER::PLAYER_ID())) || func_2(PLAYER::PLAYER_ID())){
iVar4=0;
}else{
iVar4=1;
}
wait(0);
}
if(vdist2(Var3, func_1(157)) < vdist2(Var3, func_1(156))){
sVar2="carwash2";
}
iVar0=MISC::GET_GAME_TIMER();
iVar1=MISC::GET_HASH_KEY(sVar2);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iVar1)==0){
SCRIPT::REQUEST_SCRIPT(sVar2);
while (!SCRIPT::HAS_SCRIPT_LOADED(sVar2)){
SCRIPT::REQUEST_SCRIPT(sVar2);
wait(0);
if(MISC::GET_GAME_TIMER() > iVar0 + 20000){
SCRIPT::TERMINATE_THIS_THREAD();
}}
if(SCRIPT::HAS_SCRIPT_LOADED(sVar2)){
start_new_script(sVar2, 1424);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar2);
}}
SCRIPT::TERMINATE_THIS_THREAD();
}


Vector3 func__1(int iParam0){
int iVar0;
iVar0=iParam0;
return Global_32543[iVar0 /*23*/][0 /*3*/];
}

int func_2(int iParam0){
if(iParam0 !=func_3()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
}
return 0;
}

int func_3(){
return -1;
}

int func_4(int iParam0){
if(iParam0 !=func_3()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_428.f_2, 16);
}
return 0;
}

int func_5(int iParam0){
if(iParam0 !=func_3()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_365, 29);
}
return 0;
}


var func__6(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 0);
}


bool func_7(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_139, 6);
}

int func_8(){
int iVar0;
iVar0=Global_2672505;
if(MISC::IS_BIT_SET(Global_1890444[iVar0 /*129*/].f_14, 0) && Global_1890444[iVar0 /*129*/].f_23==2){
return 1;
}
return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_10(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_10(int iParam0){
return func_11(iParam0);
}


var func__11(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_12(var uParam0){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}