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
float fLocal_12=0f;
var uLocal_13=0;
var uLocal_14=0;
int iLocal_15=0;
char* sLocal_16=NULL;
var uLocal_17=0;
var uLocal_18=0;
int iLocal_19=0;
float fLocal_20=0f;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
float fLocal_29=0f;
float fLocal_30=0f;
float fLocal_31=0f;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
struct<395> Local_45={
17, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
struct<30> Local_53={
0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_54={
0, 0, 0 
};
#endregion

void __EntryFunction__(){
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
fLocal_12=0.001f;
iLocal_15=-1;
sLocal_16="NULL";
iLocal_19=3;
fLocal_20=0f;
fLocal_24=-0.0375f;
fLocal_25=0.17f;
fLocal_29=80f;
fLocal_30=140f;
fLocal_31=180f;
iLocal_37=1;
iLocal_38=65;
iLocal_39=49;
iLocal_40=64;
func_189();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_185();
}else{
func_182();
}
func_177(ScriptParam_54);
func_165();
func_160(1);
func_159();
while (true){
func_158();
if(func_146()){
func_182();
}
func_2();
func_1();
}}


void func_1(){
float fVar0;
if(!Local_45.f_380 || !Local_45.f_381){
return;
}
if(Local_45.f_391){
if(AUDIO::IS_STREAM_PLAYING()){
AUDIO::STOP_STREAM();
}
Local_45.f_376=0;
}else{
if(Local_45.f_376==0){
if(Local_53.f_1 !=0){
if(AUDIO::LOAD_STREAM("Walla_Normal", "DLC_H3_Arcade_Walla_Sounds")){
Local_45.f_376++;
}}}
if(Local_45.f_376==1){
AUDIO::PLAY_STREAM_FROM_POSITION(2729.589f, -383.9195f, -48.9951f);
Local_45.f_376++;
}
if(Local_45.f_376==2){
if(AUDIO::IS_STREAM_PLAYING()){
fVar0=(to_float(Local_53.f_1) / 6f);
AUDIO::SET_VARIABLE_ON_STREAM("PedDensity", fVar0);
Local_45.f_376++;
}}}}


void func_2(){
int iVar0;
iVar0=0;
while (iVar0 < func_138()){
if(func_137(&(Local_45[iVar0 /*22*/]), iVar0)){
if(!ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*22*/])){
func_111(&(Local_45[iVar0 /*22*/]), iVar0);
}elseif(ENTITY::IS_ENTITY_DEAD(Local_45[iVar0 /*22*/], 0)){
func_110(&(Local_45[iVar0 /*22*/]));
}
func_99(&(Local_45[iVar0 /*22*/]), iVar0);
func_87(&(Local_45[iVar0 /*22*/]));
func_28(&(Local_45[iVar0 /*22*/]), iVar0);
}
iVar0++;
}
func_26();
func_24();
func_21();
func_10();
func_8();
func_3();
Local_45.f_377=0;
}


void func_3(){
if(func_7(&(Local_53.f_24)) && func_5(&(Local_53.f_24), 15000, 0)){
func_4(&(Local_53.f_24));
}
if(func_7(&(Local_53.f_26)) && func_5(&(Local_53.f_26), 15000, 0)){
func_4(&(Local_53.f_26));
}
if(func_7(&(Local_53.f_28)) && func_5(&(Local_53.f_28), 15000, 0)){
func_4(&(Local_53.f_28));
}
if(func_7(&(Local_45.f_394)) && func_5(&(Local_45.f_394), 15000, 0)){
func_4(&(Local_45.f_394));
}}


void func_4(var uParam0){
uParam0->f_1=0;
}

int func_5(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_6(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_6(var uParam0, bool bParam1, bool bParam2){
if(uParam0->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}}


bool func_7(var uParam0){
return uParam0->f_1;
}


void func_8(){
if(Local_53.f_9==0 && func_9(Local_45[4 /*22*/])){
PED::SET_PED_CAPSULE(Local_45[4 /*22*/], 0.5f);
}}

int func_9(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}}
return 0;
}


void func_10(){
int iVar0;
if(!Global_1579686){
return;
}
if(!MISC::IS_BIT_SET(Local_45.f_375, 1)){
if(Local_45.f_391 !=func_18(Local_45.f_379)){
Local_45.f_391=func_18(Local_45.f_379);
MISC::SET_BIT(&(Local_45.f_375), true);
}}else{
if(Local_45.f_391){
func_17();
}else{
func_11();
}
if(Local_45.f_391 !=func_18(Local_45.f_379)){
Local_45.f_391=func_18(Local_45.f_379);
iVar0=5;
while (iVar0 <=(func_138() - 1)){
MISC::CLEAR_BIT(&(Local_45[iVar0 /*22*/].f_5), false);
MISC::CLEAR_BIT(&(Local_45[iVar0 /*22*/].f_5), true);
iVar0++;
}}}}


void func_11(){
int iVar0;
int iVar1;
iVar1=0;
iVar0=5;
while (iVar0 <=(func_138() - 1)){
if(func_137(&(Local_45[iVar0 /*22*/]), iVar0)){
if(ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*22*/]) && (TASK::GET_SCRIPT_TASK_STATUS(Local_45[iVar0 /*22*/], joaat("script_task_perform_sequence"))==1 || TASK::GET_SCRIPT_TASK_STATUS(Local_45[iVar0 /*22*/], joaat("script_task_synchronized_scene"))==1)){
if(!MISC::IS_BIT_SET(Local_45[iVar0 /*22*/].f_5, 1)){
if(func_12(&(Local_45[iVar0 /*22*/]), 1)){
MISC::SET_BIT(&(Local_45[iVar0 /*22*/].f_5), true);
}}else{
iVar1++;
}}}else{
iVar1++;
}
iVar0++;
}
if(iVar1==(func_138() - 5)){
iVar0=5;
while (iVar0 <=(func_138() - 1)){
MISC::CLEAR_BIT(&(Local_45[iVar0 /*22*/].f_5), true);
iVar0++;
}
MISC::CLEAR_BIT(&(Local_45.f_375), true);
}}

int func_12(var uParam0, bool bParam1){
func_16(uParam0);
if(NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_4)){
func_15(uParam0, bParam1);
}else{
func_13(uParam0, bParam1);
MISC::CLEAR_BIT(&(uParam0->f_5), false);
return 1;
}
return 0;
}


void func_13(var uParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(bParam1){
ENTITY::SET_ENTITY_ALPHA(*uParam0, 255, 0);
func_14(uParam0, 255);
}else{
ENTITY::SET_ENTITY_ALPHA(*uParam0, 0, 0);
func_14(uParam0, 0);
}}}


void func_14(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 2){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iVar0])){
ENTITY::SET_ENTITY_ALPHA(uParam0->f_1[iVar0], iParam1, 0);
}
iVar0++;
}}


void func_15(var uParam0, bool bParam1){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
iVar0=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_4));
iVar1=round(((to_float(iVar0) / 750f) * 255f));
if(bParam1){
iVar1=(255 - round(((to_float(iVar0) / 750f) * 255f)));
}
ENTITY::SET_ENTITY_ALPHA(*uParam0, iVar1, 0);
func_14(uParam0, iVar1);
}}


void func_16(var uParam0){
if(!MISC::IS_BIT_SET(uParam0->f_5, 0)){
uParam0->f_4=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 750);
MISC::SET_BIT(&(uParam0->f_5), false);
}}


void func_17(){
int iVar0;
int iVar1;
iVar1=0;
iVar0=5;
while (iVar0 <=(func_138() - 1)){
if(func_137(&(Local_45[iVar0 /*22*/]), iVar0)){
if(!MISC::IS_BIT_SET(Local_45[iVar0 /*22*/].f_5, 1)){
if(func_12(&(Local_45[iVar0 /*22*/]), 0)){
MISC::SET_BIT(&(Local_45[iVar0 /*22*/].f_5), true);
}}else{
iVar1++;
}}else{
iVar1++;
}
iVar0++;
}
if(iVar1==(func_138() - 5)){
iVar0=5;
while (iVar0 <=(func_138() - 1)){
MISC::CLEAR_BIT(&(Local_45[iVar0 /*22*/].f_5), true);
func_110(&(Local_45[iVar0 /*22*/]));
iVar0++;
}
MISC::CLEAR_BIT(&(Local_45.f_375), true);
}}

int func_18(int iParam0){
if(iParam0==func_20() || !func_19(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_429.f_1, 29);
}


bool func_19(int iParam0){
return Global_1853988[iParam0 /*867*/].f_267.f_429 !=0;
}

int func_20(){
return -1;
}


void func_21(){
if(func_23()){
if(!MISC::IS_BIT_SET(Local_45.f_375, 0)){
func_22(0);
MISC::SET_BIT(&(Local_45.f_375), false);
}}elseif(MISC::IS_BIT_SET(Local_45.f_375, 0)){
func_22(1);
MISC::CLEAR_BIT(&(Local_45.f_375), false);
}}


void func_22(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_138()){
if(ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*22*/])){
ENTITY::SET_ENTITY_VISIBLE(Local_45[iVar0 /*22*/], iParam0, 0);
}
iVar0++;
}}


bool func_23(){
return MISC::IS_BIT_SET(Global_1978241, 1);
}


void func_24(){
if(Global_1579690){
func_22(1);
func_25(1);
Local_45.f_385=0;
Global_1579690=0;
}elseif(!Local_45.f_385){
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
func_22(0);
func_25(0);
Local_45.f_385=1;
}}}


void func_25(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(Local_45.f_382)){
ENTITY::SET_ENTITY_VISIBLE(Local_45.f_382, iParam0, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(Local_45.f_383)){
ENTITY::SET_ENTITY_VISIBLE(Local_45.f_383, iParam0, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(Local_45.f_384)){
ENTITY::SET_ENTITY_VISIBLE(Local_45.f_384, iParam0, 0);
}}


void func_26(){
int iVar0;
int iVar1;
if(!Global_1579686){
iVar1=0;
iVar0=0;
while (iVar0 < func_138()){
if((((((ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*22*/]) && (TASK::GET_SCRIPT_TASK_STATUS(Local_45[iVar0 /*22*/], joaat("script_task_perform_sequence"))==1 || TASK::GET_SCRIPT_TASK_STATUS(Local_45[iVar0 /*22*/], joaat("script_task_synchronized_scene"))==1)) || Local_45[iVar0 /*22*/].f_17) || Local_45[iVar0 /*22*/].f_9 > Local_53.f_1) || ((Local_45.f_390 && !Local_45[iVar0 /*22*/].f_18) && !Global_1579691)) || ((!Local_45.f_390 && Local_45[iVar0 /*22*/].f_18) && !Global_1579691)) || (!func_27(iVar0) && Local_45.f_391)){
iVar1++;
}
iVar0++;
}
if(iVar1==func_138()){
Global_1579686=1;
}}}


bool func_27(int iParam0){
return iParam0 <=4;
}


void func_28(var uParam0, int iParam1){
if(func_77(iParam1, 0)){
func_64(uParam0, iParam1);
func_29(uParam0, iParam1);
}}


void func_29(var uParam0, int iParam1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_63(iParam1)){
func_56(uParam0, iParam1);
func_39(uParam0, iParam1);
func_30(uParam0, iParam1);
}}}


void func_30(var uParam0, int iParam1){
switch (iParam1){
case 0:
if(uParam0->f_8==11 || uParam0->f_8==12){
if(Local_53.f_13 !=Global_1579696){
Local_53.f_13=Global_1579696;
if(!Local_53.f_13){
if(func_37(uParam0, iParam1) && !func_36(iParam1, 1)){
func_33(5, 0);
func_32(&(Local_53.f_16), 0, 0);
}}}}
break;
case 2:
if((((Local_53.f_7==3 && Local_45.f_386==4) && Global_1579695 !=0) && !func_36(2, 0)) && !MISC::IS_BIT_SET(uParam0->f_5, 13)){
if(func_31(PLAYER::PLAYER_ID())){
func_33(13, 2);
MISC::SET_BIT(&(uParam0->f_5), 13);
}else{
Global_1579695=0;
}}
break;
}}

int func_31(int iParam0){
if(iParam0 !=func_20()){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_429.f_2, 27);
}
return 0;
}


void func_32(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}


void func_33(int iParam0, int iParam1){
struct<4> Var0;
int iVar1;
Var0.f_0=-528513542;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
Var0.f_3=iParam1;
iVar1=func_34(1);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 4, iVar1);
}}


var func__34(int iParam0){
var uVar0;
int iVar1;
bool bVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_35(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, bVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_35(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2672524.f_3){
return Global_2672524.f_2;
}elseif(Global_2657704[iVar0 /*463*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}

int func_36(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
if(func_9(Local_45[iParam0 /*22*/])){
if(AUDIO::IS_ANY_SPEECH_PLAYING(Local_45[iParam0 /*22*/])){
iVar0=1;
}}
if(bParam1){
switch (iParam0){
case 0:
if((Local_45.f_378==iParam0 && func_7(&(Local_45.f_394))) || func_7(&(Local_53.f_24))){
iVar0=1;
}
break;
case 2:
if((Local_45.f_378==iParam0 && func_7(&(Local_45.f_394))) || func_7(&(Local_53.f_26))){
iVar0=1;
}
break;
case 3:
if((Local_45.f_378==iParam0 && func_7(&(Local_45.f_394))) || func_7(&(Local_53.f_28))){
iVar0=1;
}
break;
}}
return iVar0;
}

int func_37(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
if(func_35(iVar1, 1, 1)){
if(func_9(PLAYER::PLAYER_PED_ID())){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 1), uParam0->f_13, 1) < func_38(iParam1)){
return 1;
}}}}
iVar0++;
}
return 0;
}


float func_38(int iParam0){
switch (iParam0){
case 0:
case 1:
return 5f;
default:
}
return 7f;
}


void func_39(var uParam0, int iParam1){
switch (iParam1){
case 0:
func_43(uParam0, iParam1);
break;
case 2:
func_42(uParam0, iParam1);
break;
case 3:
func_40(uParam0, iParam1);
break;
}}


void func_40(var uParam0, int iParam1){
bool bVar0;
bool bVar1;
if(func_7(&(Local_53.f_22)) && func_5(&(Local_53.f_22), Local_53.f_5, 0)){
if(func_37(uParam0, iParam1)){
bVar0=true;
if(Local_53.f_7==3){
bVar0=false;
}
if(((bVar0 && !func_36(2, 0)) && !func_36(3, 0)) || (!bVar0 && !func_36(3, 0))){
func_33(Local_53.f_21, 3);
bVar1=func_41(Local_53.f_21, iParam1);
MISC::SET_BIT(&Local_53, bVar1);
func_4(&(Local_53.f_22));
Local_53.f_21=0;
}else{
func_32(&(Local_53.f_22), 0, 0);
}}else{
func_32(&(Local_53.f_22), 0, 0);
}}}

int func_41(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 7:
return 1;
case 8:
return 2;
case 9:
return 3;
case 10:
return 4;
case 6:
return 0;
default:
}
break;
case 2:
switch (iParam0){
case 6:
return 5;
case 11:
return 6;
case 12:
return 7;
default:
}
break;
case 3:
switch (iParam0){
case 6:
return 8;
default:
}
break;
}
return -1;
}


void func_42(var uParam0, int iParam1){
bool bVar0;
bool bVar1;
if(func_7(&(Local_53.f_19)) && func_5(&(Local_53.f_19), Local_53.f_4, 0)){
if(func_37(uParam0, iParam1)){
bVar0=true;
if(Local_53.f_7==3){
bVar0=false;
}
if(((bVar0 && !func_36(2, 0)) && !func_36(3, 0)) || (!bVar0 && !func_36(2, 0))){
func_33(Local_53.f_18, 2);
bVar1=func_41(Local_53.f_18, iParam1);
MISC::SET_BIT(&Local_53, bVar1);
func_4(&(Local_53.f_19));
Local_53.f_18=0;
}else{
func_32(&(Local_53.f_19), 0, 0);
}}else{
func_32(&(Local_53.f_19), 0, 0);
}}}


void func_43(var uParam0, int iParam1){
bool bVar0;
bool bVar1;
if(func_7(&(Local_53.f_16)) && func_5(&(Local_53.f_16), Local_53.f_3, 0)){
if(func_37(uParam0, iParam1)){
if(!func_36(iParam1, 1)){
bVar0=true;
if(Local_53.f_14==9){
if(func_55()){
func_44();
}else{
bVar0=false;
}}
if(bVar0){
func_33(Local_53.f_14, 0);
}
bVar1=func_41(Local_53.f_14, iParam1);
MISC::SET_BIT(&Local_53, bVar1);
func_4(&(Local_53.f_16));
Local_53.f_14=0;
}else{
func_32(&(Local_53.f_16), 0, 0);
}}else{
func_32(&(Local_53.f_16), 0, 0);
}}}


void func_44(){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8[14];
bVar4=false;
iVar6=0;
iVar7=0;
iVar1=0;
while (iVar1 < 14){
iVar8[iVar1]=-1;
iVar1++;
}
iVar1=0;
while (iVar1 <=13){
iVar0=0;
while (iVar0 <=3){
if(func_47(Local_45.f_379, iVar1, iVar0, 0) && func_46(iVar1)){
iVar8[iVar7]=iVar1;
iVar7++;
}
iVar0++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 14){
if(iVar8[iVar1] !=-1){
iVar6++;
}else{
}else{
iVar1++;
}}
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
bVar2=func_45(iVar8[iVar5]);
while (MISC::IS_BIT_SET(Local_53.f_0, bVar2) && iVar3 < 10){
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
bVar2=func_45(iVar8[iVar5]);
iVar3++;
}
if(iVar3 >=10){
iVar1=0;
while (iVar1 < iVar6){
bVar2=func_45(iVar8[iVar1]);
if(!MISC::IS_BIT_SET(Local_53.f_0, bVar2)){
MISC::SET_BIT(&Local_53, bVar2);
Local_53.f_15=iVar8[iVar1];
bVar4=true;
}else{
iVar1++;
}}
if(!bVar4){
iVar1=0;
while (iVar1 <=13){
MISC::CLEAR_BIT(&Local_53, func_45(iVar1));
iVar1++;
}
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
bVar2=func_45(iVar8[iVar5]);
MISC::SET_BIT(&Local_53, bVar2);
Local_53.f_15=iVar8[iVar5];
}}else{
MISC::SET_BIT(&Local_53, bVar2);
Local_53.f_15=iVar8[iVar5];
}}

int func_45(int iParam0){
switch (iParam0){
case 0:
return 9;
case 1:
return 10;
case 2:
return 11;
case 3:
return 12;
case 4:
return 13;
case 5:
return 14;
case 6:
return 15;
case 7:
return 16;
case 8:
return 17;
case 9:
return 18;
case 10:
return 19;
case 11:
return 20;
case 12:
return 21;
case 13:
return 22;
default:
}
return -1;
}

int func_46(int iParam0){
switch (iParam0){
case 0:
case 1:
case 3:
case 4:
case 5:
case 9:
case 11:
case 12:
case 13:
return 1;
default:
}
return 0;
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_54(iParam1, iParam2);
if(iVar0==0){
return 0;
}
iVar1=0;
while (iVar1 <=(func_53(iParam3) - 1)){
iVar2=func_48(iParam0, iVar1, iParam3);
if(iVar2 !=0){
if(iVar2==iVar0){
return 1;
}}
iVar1++;
}
return 0;
}

int func_48(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(iParam0 !=func_20()){
switch (iParam2){
case 0:
iVar0=Global_1853988[iParam0 /*867*/].f_267.f_437[iParam1];
break;
case 1:
iVar0=Global_1853988[iParam0 /*867*/].f_267.f_494[iParam1];
break;
}
iVar1=func_52(iVar0);
if(iVar1 !=-1){
if((func_51(iParam0, iVar1, iParam2) && func_50(iParam0, iVar1, iParam2)) || func_49(iVar1)){
return iVar0;
}}}
return 0;
}

int func_49(int iParam0){
switch (iParam0){
case 18:
case 17:
case 19:
return 1;
break;
}
return 0;
}

int func_50(int iParam0, int iParam1, int iParam2){
var uVar0;
if(iParam0 !=func_20()){
uVar0=iParam1;
switch (iParam2){
case 0:
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_435.f_1, uVar0);
break;
}}
return 1;
}

int func_51(int iParam0, int iParam1, int iParam2){
var uVar0;
if(iParam0 !=func_20()){
uVar0=iParam1;
switch (iParam2){
case 0:
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_435, uVar0);
break;
}}
return 1;
}

int func_52(int iParam0){
switch (iParam0){
case 1:
case 2:
case 3:
case 4:
return 10;
case 5:
return 0;
case 6:
return 1;
case 7:
return 5;
case 8:
return 3;
case 9:
return 4;
case 10:
return 2;
case 11:
return 6;
case 12:
return 7;
case 13:
return 8;
case 14:
return 12;
case 15:
return 11;
case 16:
return 13;
case 17:
return 9;
case 18:
return 17;
case 19:
return 18;
case 20:
return 19;
case 21:
return 14;
case 22:
return 15;
case 23:
return 16;
default:
}
return -1;
}

int func_53(int iParam0){
switch (iParam0){
case 1:
return 2;
break;
case 2:
return 2;
break;
case 3:
return 1;
break;
case 4:
return 1;
break;
}
return 41;
}

int func_54(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 10:
return 1;
case 0:
return 5;
case 1:
return 6;
case 2:
return 10;
case 3:
return 8;
case 4:
return 9;
case 5:
return 7;
case 6:
return 11;
case 7:
return 12;
case 8:
return 13;
case 9:
return 17;
case 11:
return 15;
case 12:
return 14;
case 13:
return 16;
case 17:
return 18;
case 18:
return 19;
case 19:
return 20;
case 15:
return 22;
case 16:
return 23;
default:
}
break;
case 1:
switch (iParam0){
case 10:
return 2;
default:
}
break;
case 2:
switch (iParam0){
case 10:
return 3;
default:
}
break;
case 3:
switch (iParam0){
case 10:
return 4;
default:
}
break;
}
return 0;
}


bool func_55(){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 <=13){
iVar0=0;
while (iVar0 <=3){
if(func_47(Local_45.f_379, iVar1, iVar0, 0) && func_46(iVar1)){
iVar2++;
}
iVar0++;
}
iVar1++;
}
return iVar2 > 0;
}


void func_56(var uParam0, int iParam1){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
bVar1=true;
switch (iParam1){
case 0:
if(Local_53.f_14 !=0){
bVar1=false;
}
if(func_7(&(Local_53.f_24))){
bVar1=false;
}
if(!bVar1){
return;
}
if(func_62(iParam1)){
iVar3=6;
while (iVar3 <=10){
MISC::CLEAR_BIT(&Local_53, func_41(iVar3, iParam1));
iVar3++;
}}
if(!func_61(uParam0->f_8)){
MISC::SET_BIT(&Local_53, func_41(6, iParam1));
}
if(!Local_45.f_380 || !Local_45.f_381){
iVar3=7;
while (iVar3 <=9){
MISC::SET_BIT(&Local_53, func_41(iVar3, iParam1));
iVar3++;
}}
iVar2=func_60(iParam1);
while (MISC::IS_BIT_SET(Local_53.f_0, func_41(iVar2, iParam1)) && iVar0 < 10){
iVar2=func_60(iParam1);
iVar0++;
}
if(iVar0 >=10){
iVar3=6;
while (iVar3 <=10){
if(!MISC::IS_BIT_SET(Local_53.f_0, func_41(iVar3, iParam1))){
iVar2=iVar3;
}
iVar3++;
}}
Local_53.f_14=iVar2;
Local_53.f_3=func_59(iParam1);
func_32(&(Local_53.f_16), 0, 0);
break;
case 1:
break;
case 2:
if(Local_53.f_18 !=0){
bVar1=false;
}
if(func_7(&(Local_53.f_26))){
bVar1=false;
}
if(!bVar1){
return;
}
if(func_62(iParam1)){
func_58(iParam1);
}
iVar2=func_60(iParam1);
Local_53.f_18=iVar2;
Local_53.f_4=func_59(iParam1);
func_32(&(Local_53.f_19), 0, 0);
break;
case 3:
if(Local_53.f_21 !=0){
bVar1=false;
}
if(func_7(&(Local_53.f_28))){
bVar1=false;
}
if(!bVar1){
return;
}
if(func_62(iParam1)){
func_57(iParam1);
}
iVar2=func_60(iParam1);
Local_53.f_21=iVar2;
Local_53.f_5=func_59(iParam1);
func_32(&(Local_53.f_22), 0, 0);
break;
case 4:
break;
}}


void func_57(int iParam0){
bool bVar0;
bVar0=func_41(6, iParam0);
MISC::CLEAR_BIT(&Local_53, bVar0);
}


void func_58(int iParam0){
bool bVar0;
bool bVar1;
bool bVar2;
bVar0=func_41(11, iParam0);
bVar1=func_41(6, iParam0);
bVar2=func_41(12, iParam0);
switch (Local_45.f_386){
case 1:
MISC::CLEAR_BIT(&Local_53, bVar0);
MISC::CLEAR_BIT(&Local_53, bVar1);
break;
case 2:
case 3:
MISC::CLEAR_BIT(&Local_53, bVar2);
MISC::CLEAR_BIT(&Local_53, bVar1);
break;
case 4:
MISC::CLEAR_BIT(&Local_53, bVar1);
break;
case 5:
MISC::CLEAR_BIT(&Local_53, bVar1);
break;
}}

int func_59(int iParam0){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(30000, 40001);
if(iParam0==3){
if(Local_53.f_8==0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(10000, 15001);
}}
return iVar0;
}

int func_60(int iParam0){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
iVar0=0;
switch (iParam0){
case 0:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(6, 10 + 1);
break;
case 2:
bVar1=func_41(11, iParam0);
bVar2=func_41(6, iParam0);
bVar3=func_41(12, iParam0);
switch (Local_45.f_386){
case 1:
if(Local_53.f_7==2){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(iVar0==0){
if(!MISC::IS_BIT_SET(Local_53.f_0, bVar1)){
iVar0=11;
}elseif(!MISC::IS_BIT_SET(Local_53.f_0, bVar2)){
iVar0=6;
}
}
elseif(!MISC::IS_BIT_SET(Local_53.f_0, bVar2)){
iVar0=6;
}
elseif(!MISC::IS_BIT_SET(Local_53.f_0, bVar1)){
iVar0=11;
}}else{
iVar0=11;
}
break;
case 2:
case 3:
if(Local_53.f_7==2){
if(!Local_45.f_389){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(iVar0==0){
if(!MISC::IS_BIT_SET(Local_53.f_0, bVar3)){
iVar0=12;
}elseif(!MISC::IS_BIT_SET(Local_53.f_0, bVar2)){
iVar0=6;
}}elseif(!MISC::IS_BIT_SET(Local_53.f_0, bVar2)){
iVar0=6;
}elseif(!MISC::IS_BIT_SET(Local_53.f_0, bVar3)){
iVar0=12;
}
}
else{
iVar0=6;
}}elseif(!Local_45.f_389){
iVar0=12;
}
break;
case 4:
iVar0=6;
break;
case 5:
iVar0=6;
break;
}
break;
case 3:
if(Local_53.f_8==0){
iVar0=6;
}
break;
}
return iVar0;
}

int func_61(int iParam0){
switch (iParam0){
case 13:
return 0;
default:
}
return 1;
}

int func_62(int iParam0){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
var uVar4;
var uVar5;
iVar2=0;
uVar3=func_41(11, iParam0);
uVar4=func_41(6, iParam0);
uVar5=func_41(12, iParam0);
switch (iParam0){
case 0:
iVar1=6;
while (iVar1 <=10){
bVar0=func_41(iVar1, iParam0);
if(MISC::IS_BIT_SET(Local_53.f_0, bVar0)){
iVar2++;
}
iVar1++;
}
return iVar2==(10 + 1 - 6);
case 2:
switch (Local_45.f_386){
case 1:
if(Local_53.f_7==2){
return (MISC::IS_BIT_SET(Local_53.f_0, uVar3) && MISC::IS_BIT_SET(Local_53.f_0, uVar4));
}
return MISC::IS_BIT_SET(Local_53.f_0, uVar3);
case 2:
case 3:
if(Local_53.f_7==2){
if(!Local_45.f_389){
return (MISC::IS_BIT_SET(Local_53.f_0, uVar5) && MISC::IS_BIT_SET(Local_53.f_0, uVar4));
}
return MISC::IS_BIT_SET(Local_53.f_0, uVar4);
}elseif(!Local_45.f_389){
return MISC::IS_BIT_SET(Local_53.f_0, uVar5);
}
break;
case 4:
return MISC::IS_BIT_SET(Local_53.f_0, uVar4);
break;
case 5:
return MISC::IS_BIT_SET(Local_53.f_0, uVar4);
}
break;
case 3:
return MISC::IS_BIT_SET(Local_53.f_0, uVar4);
}
return 0;
}

int func_63(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return 0;
case 2:
switch (Local_45.f_386){
case 1:
return 1;
case 2:
case 3:
if(Local_53.f_7==2 || !Local_45.f_389){
return 1;
}
break;
case 4:
if(Local_53.f_7==2 || Global_1579695 !=0){
return 1;
}
break;
case 5:
return Local_53.f_7==2;
}
break;
case 3:
return Local_53.f_8==0;
case 4:
return 0;
}
return 0;
}


void func_64(var uParam0, int iParam1){
int iVar0;
int iVar1;
if(MISC::IS_BIT_SET(uParam0->f_5, 2)){
return;
}
iVar0=1;
while (iVar0 <=4){
iVar1=iVar0;
if(func_76(iVar1)){
if(func_70(uParam0, iVar1, iParam1) && !func_68(uParam0, iVar1)){
MISC::SET_BIT(&(uParam0->f_5), 2);
func_66(uParam0, iVar1, iParam1, 1);
func_33(iVar1, iParam1);
}}
iVar0++;
}
func_65(uParam0);
}


void func_65(var uParam0){
if(func_7(&(uParam0->f_20)) && func_5(&(uParam0->f_20), 2000, 0)){
func_4(&(uParam0->f_20));
}}


void func_66(var uParam0, int iParam1, int iParam2, bool bParam3){
bool bVar0;
bVar0=func_67(iParam1);
if(bVar0==-1 || iParam2==-1){
return;
}
if(bParam3){
if(!MISC::IS_BIT_SET(uParam0->f_5, bVar0)){
MISC::SET_BIT(&(uParam0->f_5), bVar0);
}}elseif(MISC::IS_BIT_SET(uParam0->f_5, bVar0)){
MISC::CLEAR_BIT(&(uParam0->f_5), bVar0);
}}

int func_67(int iParam0){
switch (iParam0){
case 1:
return 3;
case 2:
return 5;
case 3:
return 7;
default:
}
return -1;
}

int func_68(var uParam0, int iParam1){
int iVar0;
iVar0=func_69(iParam1);
if(iVar0 !=-1){
return MISC::IS_BIT_SET(uParam0->f_5, func_69(iParam1));
}
return 0;
}

int func_69(int iParam0){
switch (iParam0){
case 1:
return 4;
case 2:
return 6;
case 3:
return 8;
default:
}
return -1;
}

int func_70(var uParam0, int iParam1, int iParam2){
int iVar0;
if(!func_75(iParam2, iParam1)){
return 0;
}
switch (iParam1){
case 1:
if(func_9(PLAYER::PLAYER_PED_ID()) && func_9(*uParam0)){
if(func_74(iParam2)){
switch (iParam2){
case 2:
if(!func_7(&(Local_45.f_396))){
return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < func_73(iParam2, iParam1);
}elseif(func_5(&(Local_45.f_396), 30000, 0)){
func_4(&(Local_45.f_396));
}
break;
case 3:
if(!func_7(&(Local_45.f_398))){
return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < func_73(iParam2, iParam1);
}elseif(func_5(&(Local_45.f_398), 30000, 0)){
func_4(&(Local_45.f_398));
}
break;
case 4:
if(!func_7(&(Local_45.f_400))){
return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < func_73(iParam2, iParam1);
}elseif(func_5(&(Local_45.f_400), 30000, 0)){
func_4(&(Local_45.f_400));
}
break;
}}else{
return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < func_73(iParam2, iParam1);
}}
break;
case 2:
if(func_68(uParam0, 1)){
if(func_9(PLAYER::PLAYER_PED_ID()) && func_9(*uParam0)){
return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) > func_73(iParam2, iParam1);
}}
break;
case 4:
if(!func_7(&(Local_45.f_394))){
if(func_9(PLAYER::PLAYER_PED_ID()) && func_9(*uParam0)){
iVar0=2;
if(func_74(iParam2)){
iVar0=1;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < func_73(iParam2, iVar0)){
if(!MISC::IS_BIT_SET(uParam0->f_5, 9)){
MISC::SET_BIT(&(uParam0->f_5), 9);
func_6(&(Local_45.f_392), 0, 0);
Local_45.f_378=iParam2;
}
elseif(Local_45.f_378==iParam2){
if(func_7(&(Local_45.f_392)) && func_5(&(Local_45.f_392), 60000, 0)){
if(!func_36(iParam2, 1)){
return 1;
}}
}
elseif(func_9(Local_45[Local_45.f_378 /*22*/])){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_45[Local_45.f_378 /*22*/], 1), 1)){
func_32(&(Local_45.f_392), 0, 0);
Local_45.f_378=iParam2;
}
}}elseif(Local_45.f_378==iParam2 && MISC::IS_BIT_SET(uParam0->f_5, 9)){
MISC::CLEAR_BIT(&(uParam0->f_5), 9);
func_4(&(Local_45.f_392));
}}}elseif(func_5(&(Local_45.f_394), 15000, 0)){
func_4(&(Local_45.f_394));
}
break;
case 3:
if(func_9(PLAYER::PLAYER_PED_ID()) && func_9(*uParam0)){
if(!func_68(uParam0, iParam1)){
if(func_72(uParam0, iParam2)){
return 1;
}}elseif(!func_72(uParam0, iParam2)){
func_71(uParam0, iParam1, iParam2, 0);
}}
break;
}
return 0;
}


void func_71(var uParam0, int iParam1, int iParam2, bool bParam3){
bool bVar0;
bVar0=func_69(iParam1);
if(bVar0==-1 || iParam2==-1){
return;
}
if(bParam3){
if(!MISC::IS_BIT_SET(uParam0->f_5, bVar0)){
MISC::SET_BIT(&(uParam0->f_5), bVar0);
}}elseif(MISC::IS_BIT_SET(uParam0->f_5, bVar0)){
MISC::CLEAR_BIT(&(uParam0->f_5), bVar0);
}}

int func_72(var uParam0, int iParam1){
switch (iParam1){
case 3:
if(Local_53.f_8==0){
if(ENTITY::DOES_ENTITY_EXIST(Local_45.f_383)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_45.f_383)){
return 1;
}}}
break;
}
return ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0);
}


float func_73(int iParam0, int iParam1){
float fVar0;
fVar0=0f;
switch (iParam0){
case 0:
switch (iParam1){
case 1:
fVar0=2f;
break;
case 2:
fVar0=4f;
break;
}
break;
case 1:
switch (iParam1){
case 1:
fVar0=2f;
break;
case 2:
fVar0=4f;
break;
}
break;
case 2:
switch (iParam1){
case 1:
fVar0=2f;
break;
case 2:
fVar0=5f;
break;
}
break;
case 3:
switch (iParam1){
case 1:
fVar0=2f;
break;
case 2:
fVar0=3.5f;
break;
}
break;
case 4:
switch (iParam1){
case 1:
fVar0=2f;
break;
case 2:
fVar0=6f;
break;
}
break;
}
return fVar0;
}


bool func_74(int iParam0){
return (iParam0 >=2 && iParam0 <=4);
}

int func_75(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 1:
case 2:
case 3:
case 4:
return 1;
break;
}
break;
case 1:
switch (iParam1){
case 1:
case 2:
case 3:
case 4:
if(!Local_45.f_380 || !Local_45.f_381){
return 1;
}
break;
}
break;
case 2:
switch (Local_45.f_386){
case 1:
switch (iParam1){
case 1:
case 2:
case 3:
case 4:
return 1;
default:
}
break;
case 2:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 3:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 4:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 5:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
}
break;
case 3:
switch (Local_45.f_387){
case 1:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 2:
switch (iParam1){
case 1:
case 2:
return 1;
default:
}
break;
case 3:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 4:
switch (iParam1){
case 1:
case 2:
case 3:
case 4:
return 1;
default:
}
break;
case 5:
switch (iParam1){
case 1:
case 2:
case 3:
case 4:
return 1;
default:
}
break;
}
break;
case 4:
switch (Local_45.f_388){
case 1:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 2:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 3:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
case 4:
switch (iParam1){
case 1:
case 2:
case 3:
case 4:
return 1;
default:
}
break;
case 5:
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
default:
}
break;
}
break;
}
return 0;
}


bool func_76(int iParam0){
return (iParam0 !=0 && iParam0 !=14);
}

int func_77(int iParam0, bool bParam1){
if(!func_86(iParam0) || !func_78(iParam0, bParam1, 0, 0)){
return 0;
}
return 1;
}

int func_78(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(iParam0==0 && MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_4, 13)){
return 0;
}
if(iParam0==0 && func_85()){
iVar0=MISC::GET_HASH_KEY(&(Global_23390.f_1));
if(iVar0==-1794358814){
return 0;
}}
if(iParam0==0 || iParam0==1){
if((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2765963) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Global_2765963))) && AUDIO::IS_ANY_SPEECH_PLAYING(NETWORK::NET_TO_PED(Global_2765963))){
return 0;
}}
if(!Global_1579686){
return 0;
}
if(func_84(PLAYER::PLAYER_ID())){
return 0;
}
if(bParam1 && func_36(iParam0, bParam1)){
return 0;
}
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()){
return 0;
}
if(func_83()){
return 0;
}
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || func_82(PLAYER::PLAYER_ID())){
return 0;
}
if((func_81() || func_80()) || func_79()){
return 0;
}
if(Global_2694608){
return 0;
}
if(MISC::IS_BIT_SET(Global_1976059[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*68*/].f_42, 1)){
return 0;
}
if(bParam3){
if((iParam0==2 && Local_53.f_7==3) && Local_45.f_386==4){
if(func_31(PLAYER::PLAYER_ID()) && iParam2 !=13){
return 0;
}}}
return 1;
}


var func__79(){
return Global_2683883.f_692;
}


var func__80(){
return Global_2683883.f_691;
}


bool func_81(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 !=0;
}

int func_82(int iParam0){
if(iParam0 !=func_20() && func_35(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_534, 0);
}
return 0;
}


bool func_83(){
return Global_75816;
}

int func_84(int iParam0){
if(iParam0 !=func_20() && func_35(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 3);
}
return 0;
}


bool func_85(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}


bool func_86(int iParam0){
return (iParam0 >=0 && iParam0 <=4);
}


void func_87(var uParam0){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
var uVar4;
int iVar5[4];
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
return;
}
uVar0=func_98();
uVar1=func_97(uParam0, 0);
uVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.7f);
if(func_96(uParam0)){
func_92(uParam0);
}else{
iVar3=TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("script_task_perform_sequence"));
if(iVar3 !=0 && iVar3 !=1){
if(STREAMING::HAS_ANIM_DICT_LOADED(uVar0)){
TASK::OPEN_SEQUENCE_TASK(&uVar4);
if(!func_91(uParam0)){
if(func_90(uParam0)){
if(func_89(uParam0)){
TASK::TASK_PLAY_ANIM_ADVANCED(0, uVar0, uVar1, uParam0->f_13, 0f, 0f, uParam0->f_12, 1090519040, -1056964608, -1, 135008257, uVar2, 2, 1);
}
else{
TASK::TASK_PLAY_ANIM_ADVANCED(0, uVar0, uVar1, uParam0->f_13, 0f, 0f, uParam0->f_12, 1090519040, -1056964608, -1, 790529, uVar2, 2, 1);
}}else{
TASK::TASK_PLAY_ANIM(0, uVar0, uVar1, 1090519040, -1056964608, -1, 1, uVar2, 0, 0, 0);
}}else{
iVar5[0]=0;
iVar5[1]=1;
iVar5[2]=2;
iVar5[3]=3;
iVar8=0;
while (iVar8 < 10){
iVar6=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
iVar7=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
iVar9=iVar5[iVar6];
iVar5[iVar6]=iVar5[iVar7];
iVar5[iVar7]=iVar9;
iVar8++;
}
if(func_88(uParam0)){
iVar10=0;
while (iVar10 < 4){
if(iVar5[iVar10]==3){
iVar5[iVar10]=-1;
}
iVar10++;
}}
iVar8=0;
while (iVar8 < 4){
TASK::TASK_PLAY_ANIM(0, uVar0, func_97(uParam0, iVar5[iVar8]), 1090519040, -1056964608, -1, 0, 0f, 0, 0, 0);
iVar8++;
}}
TASK::SET_SEQUENCE_TO_REPEAT(uVar4, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar4);
TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar4);
TASK::CLEAR_SEQUENCE_TASK(&uVar4);
}}}}

int func_88(var uParam0){
switch (uParam0->f_8){
case 27:
return 1;
default:
}
return 0;
}

int func_89(var uParam0){
switch (uParam0->f_8){
case 8:
case 16:
case 23:
case 12:
return 1;
default:
}
return 0;
}

int func_90(var uParam0){
switch (uParam0->f_8){
case 8:
case 11:
case 12:
case 16:
case 21:
case 23:
case 24:
case 27:
return 1;
default:
}
return 0;
}

int func_91(var uParam0){
switch (uParam0->f_8){
case 0:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
return 0;
default:
}
return 1;
}


void func_92(var uParam0){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
uVar0=func_98();
uVar1=func_97(uParam0, 0);
uVar2=func_95(uParam0, 0);
if(func_94(uParam0)){
if(uParam0->f_10==-1){
uParam0->f_10=PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_13, 0f, 0f, uParam0->f_12, 2);
if((ENTITY::DOES_ENTITY_EXIST(*uParam0) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar1)){
TASK::TASK_SYNCHRONIZED_SCENE(*uParam0, uParam0->f_10, uVar0, uVar1, 1000f, -1000f, 5, 0, 1148846080, 0);
}
if(((ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[0]) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_1[0])) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar2)){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_1[0], uParam0->f_10, uVar2, uVar0, 1000f, -1000f, 0, 1148846080);
}
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_10, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
PED::SET_PED_KEEP_TASK(*uParam0, 1);
}}else{
iVar3=TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("script_task_synchronized_scene"));
if((iVar3 !=0 && iVar3 !=1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_10) >=1f){
iVar4=MISC::GET_RANDOM_INT_IN_RANGE(0, func_93(uParam0->f_8));
uVar1=func_97(uParam0, iVar4);
uVar2=func_95(uParam0, iVar4);
iVar5=0;
iVar6=5;
if(func_89(uParam0)){
iVar5=1;
iVar6=261;
}
uParam0->f_10=PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_13, 0f, 0f, uParam0->f_12, 2);
if((ENTITY::DOES_ENTITY_EXIST(*uParam0) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar1)){
TASK::TASK_SYNCHRONIZED_SCENE(*uParam0, uParam0->f_10, uVar0, uVar1, 1000f, -1000f, iVar6, 0, 1148846080, iVar5);
}
if(((ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[0]) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_1[0])) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar2)){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_1[0], uParam0->f_10, uVar2, uVar0, 1000f, -1000f, 0, 1148846080);
}
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_10, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
}}}

int func_93(int iParam0){
switch (iParam0){
case 16:
return 4;
case 12:
return 7;
default:
}
return 0;
}

int func_94(var uParam0){
switch (uParam0->f_8){
case 24:
case 25:
return 1;
default:
}
return 0;
}


char* func_95(var uParam0, int iParam1){
switch (uParam0->f_8){
case 24:
return "ANIM@AMB@RANGE@ASSEMBLE_GUNS@Base_W_AR_CarbineRifleMK2";
case 25:
return "ANIM@AMB@RANGE@WEAPON_TEST@Weapon_Test_Busrt_01_W_AR_AssaultRifleMK2";
case 16:
switch (iParam1){
case 0:
return "JIMMY@_SMOKING_BASE_P_CS_Ciggy_01b_S";
case 1:
return "JIMMY@_SMOKING_IDLE_01_P_CS_Ciggy_01b_S";
case 2:
return "JIMMY@_SMOKING_IDLE_02_P_CS_Ciggy_01b_S";
case 3:
return "JIMMY@_SMOKING_IDLE_03_P_CS_Ciggy_01b_S";
default:
}
break;
case 12:
switch (iParam1){
case 0:
return "JIMMY@_DRINKING@_BEER_BASE";
case 1:
return "JIMMY@_DRINKING@_BEER_IDLE_A";
case 2:
return "JIMMY@_DRINKING@_BEER_IDLE_B";
case 3:
return "JIMMY@_DRINKING@_BEER_IDLE_C";
case 4:
return "JIMMY@_DRINKING@_BEER_IDLE_D";
case 5:
return "JIMMY@_DRINKING@_BEER_IDLE_E";
case 6:
return "JIMMY@_DRINKING@_BEER_IDLE_F";
default:
}
break;
}
return "";
}

int func_96(var uParam0){
switch (uParam0->f_8){
case 24:
case 25:
case 16:
case 12:
return 1;
default:
}
return 0;
}


char* func_97(var uParam0, int iParam1){
switch (uParam0->f_8){
case 9:
return "world_human_stand_mobile@_female@_standing@_call@_idle_a";
case 10:
return "world_human_clipboard@_male@_idle_d";
case 7:
return "WORLD_HUMAN_AA_SMOKE@_MALE@_IDLE_A";
case 8:
return "world_human_seat_wall_tablet@_male@_idle_a";
case 11:
return "SWITCH@_MICHAEL@_ON_SOFA_BASE_JIMMY";
case 13:
return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_A";
case 14:
return "male@_standing@_call@_idle_a";
case 15:
return "WORLD_HUMAN_STAND_MOBILE@_MALE@_TEXT@_idle_a";
case 17:
return "AMB@WORLD_HUMAN_LEANING@MALE@WALL@BACK@MOBILE@IDLE_A";
case 18:
return "Inspecting_HIGH_Idle_01_inspector";
case 19:
return "WORLD_HUMAN_STAND_MOBILE@_MALE@_TEXT@_idle_a";
case 20:
return "AMB@WORLD_HUMAN_CLIPBOARD@MALE@IDLE_A_IDLE_A";
case 21:
return "prop_human_seat_computer@_male@_idle_a";
case 22:
return "AMB@WORLD_HUMAN_LEANING@MALE@COFFEE@IDLE_A_IDLE_A";
case 23:
return "world_human_seat_wall_tablet@_male@_idle_a";
case 24:
return "ANIM@AMB@RANGE@ASSEMBLE_GUNS@Base_AMY_Skater_01";
case 25:
return "Weapon_Test_Busrt_01_AMY_Skater_01";
case 26:
return "stand_phone_lookaround_nowork";
case 27:
return "AMB@PROP_HUMAN_SEAT_BAR@MALE@ELBOWS_ON_BAR@IDLE_A";
case 16:
switch (iParam1){
case 0:
return "JIMMY@_SMOKING_BASE";
case 1:
return "JIMMY@_SMOKING_IDLE_01";
case 2:
return "JIMMY@_SMOKING_IDLE_02";
case 3:
return "JIMMY@_SMOKING_IDLE_03";
default:
}
break;
case 12:
switch (iParam1){
case 0:
return "JIMMY@_DRINKING@_BASE";
case 1:
return "JIMMY@_DRINKING@_IDLE_A";
case 2:
return "JIMMY@_DRINKING@_IDLE_B";
case 3:
return "JIMMY@_DRINKING@_IDLE_C";
case 4:
return "JIMMY@_DRINKING@_IDLE_D";
case 5:
return "JIMMY@_DRINKING@_IDLE_E";
case 6:
return "JIMMY@_DRINKING@_IDLE_F";
default:
}
break;
case 1:
switch (iParam1){
case 0:
return "PED_MALE@_STAND_WITHDRINK@_01A@_IDLES_IDLE_A";
case 1:
return "PED_MALE@_STAND_WITHDRINK@_01A@_IDLES_IDLE_B";
case 2:
return "PED_MALE@_STAND_WITHDRINK@_01A@_IDLES_IDLE_C";
case 3:
return "PED_MALE@_STAND_WITHDRINK@_01A@_IDLES_IDLE_D";
default:
}
break;
case 2:
switch (iParam1){
case 0:
return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_A";
case 1:
return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_B";
case 2:
return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_C";
case 3:
return "PED_MALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_D";
default:
}
break;
case 3:
switch (iParam1){
case 0:
return "PED_FEMALE@_STAND@_03A@_IDLES_IDLE_A";
case 1:
return "PED_FEMALE@_STAND@_03A@_IDLES_IDLE_B";
case 2:
return "PED_FEMALE@_STAND@_03A@_IDLES_IDLE_C";
case 3:
return "PED_FEMALE@_STAND@_03A@_IDLES_IDLE_D";
default:
}
break;
case 4:
switch (iParam1){
case 0:
return "PED_FEMALE@_STAND@_03B@_IDLES_IDLE_A";
case 1:
return "PED_FEMALE@_STAND@_03B@_IDLES_IDLE_B";
case 2:
return "PED_FEMALE@_STAND@_03B@_IDLES_IDLE_C";
case 3:
return "PED_FEMALE@_STAND@_03B@_IDLES_IDLE_D";
default:
}
break;
case 5:
switch (iParam1){
case 0:
return "PED_FEMALE@_STAND@_02A@_IDLES_CONVO_IDLE_A";
case 1:
return "PED_FEMALE@_STAND@_02A@_IDLES_CONVO_IDLE_B";
case 2:
return "PED_FEMALE@_STAND@_02A@_IDLES_CONVO_IDLE_C";
case 3:
return "PED_FEMALE@_STAND@_02A@_IDLES_CONVO_IDLE_D";
default:
}
break;
case 6:
switch (iParam1){
case 0:
return "PED_FEMALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_A";
case 1:
return "PED_FEMALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_B";
case 2:
return "PED_FEMALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_C";
case 3:
return "PED_FEMALE@_STAND_WITHDRINK@_01B@_IDLES_IDLE_D";
default:
}
break;
}
if(uParam0->f_16){
switch (uParam0->f_8){
case 0:
return "amb_world_human_hang_out_street_female_hold_arm_idle_b";
default:}}else{
switch (uParam0->f_8){
case 0:
return "amb_world_human_hang_out_street_male_c_base";
}
default:
}
return "amb_world_human_hang_out_street_female_hold_arm_idle_b";
}


char* func_98(){
return "ANIM_HEIST@ARCADE_COMBINED@";
}


void func_99(var uParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
iVar1=SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
switch (iVar1){
case 174:
SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
switch (iVar2){
case -528513542:
if(Global_1669211.f_795){
return;
}
func_100(uParam0, iParam1, iVar0);
break;
}
break;
}
iVar0++;
}}


void func_100(var uParam0, int iParam1, int iParam2){
struct<4> Var0;
if(SCRIPT::GET_EVENT_DATA(1, iParam2, &Var0, 4)){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var0.f_1)){
if(Var0.f_3==iParam1){
if(!func_7(&(uParam0->f_20)) || Var0.f_2 !=uParam0->f_19){
if(func_109(uParam0, iParam1) && func_78(iParam1, func_108(Var0.f_2), Var0.f_2, 1)){
func_104(uParam0, Var0.f_2, Var0.f_3);
func_101(uParam0, Var0, 1);
}else{
func_101(uParam0, Var0, 1);
}}elseif(func_7(&(uParam0->f_20))){
func_101(uParam0, Var0, 0);
}}}}}


void func_101(var uParam0, struct<4> Param1, bool bParam2){
func_102(uParam0, Param1.f_2, Param1.f_3);
uParam0->f_19=Param1.f_2;
if(bParam2){
func_6(&(uParam0->f_20), 0, 0);
}}


void func_102(var uParam0, int iParam1, int iParam2){
switch (iParam1){
case 1:
if(func_9(PLAYER::PLAYER_PED_ID()) && func_9(*uParam0)){
if(func_103(uParam0, iParam1) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < func_73(iParam2, 2)){
func_66(uParam0, iParam1, iParam2, 0);
func_71(uParam0, 1, iParam2, 1);
func_71(uParam0, 2, iParam2, 0);
MISC::CLEAR_BIT(&(uParam0->f_5), 2);
if(func_74(iParam2)){
switch (iParam2){
case 2:
func_32(&(Local_45.f_396), 0, 0);
break;
case 3:
func_32(&(Local_45.f_398), 0, 0);
break;
case 4:
func_32(&(Local_45.f_400), 0, 0);
break;
}
}}}
break;
case 2:
if(func_103(uParam0, iParam1)){
func_66(uParam0, iParam1, iParam2, 0);
func_71(uParam0, 2, iParam2, 1);
func_71(uParam0, 1, iParam2, 0);
MISC::CLEAR_BIT(&(uParam0->f_5), 2);
}
break;
case 4:
func_4(&(Local_45.f_392));
func_32(&(Local_45.f_394), 0, 0);
MISC::CLEAR_BIT(&(uParam0->f_5), 9);
MISC::CLEAR_BIT(&(uParam0->f_5), 2);
break;
case 3:
if(func_103(uParam0, iParam1)){
func_66(uParam0, iParam1, iParam2, 0);
func_71(uParam0, iParam1, iParam2, 1);
MISC::CLEAR_BIT(&(uParam0->f_5), 2);
}
break;
case 5:
break;
case 13:
Global_1579695=0;
MISC::CLEAR_BIT(&(uParam0->f_5), 13);
break;
default:
switch (iParam2){
case 0:
func_32(&(Local_53.f_24), 0, 0);
break;
case 2:
func_32(&(Local_53.f_26), 0, 0);
break;
case 3:
func_32(&(Local_53.f_28), 0, 0);
break;
}
break;
}}

int func_103(var uParam0, int iParam1){
int iVar0;
iVar0=func_67(iParam1);
if(iVar0 !=-1){
return MISC::IS_BIT_SET(uParam0->f_5, func_67(iParam1));
}
return 0;
}

int func_104(var uParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
uVar0=func_107(iParam1, iParam2);
if(MISC::IS_STRING_NULL_OR_EMPTY(uVar0)){
return 0;
}
uVar1=func_106(iParam2);
if(MISC::IS_STRING_NULL_OR_EMPTY(uVar1)){
return 0;
}
AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(*uParam0, uVar0, uVar1, func_105(6), 0);
return 1;
}

int func_105(int iParam0){
int iVar0;
switch (iParam0){
case 0:
return "SPEECH_PARAMS_STANDARD";
case 1:
return "SPEECH_PARAMS_ALLOW_REPEAT";
case 2:
return "SPEECH_PARAMS_BEAT";
case 3:
return "SPEECH_PARAMS_FORCE";
case 4:
return "SPEECH_PARAMS_FORCE_FRONTEND";
case 5:
return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
case 6:
return "SPEECH_PARAMS_FORCE_NORMAL";
case 7:
return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
case 8:
return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
case 9:
return "SPEECH_PARAMS_FORCE_SHOUTED";
case 10:
return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
case 11:
return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
case 12:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
case 13:
return "SPEECH_PARAMS_MEGAPHONE";
case 14:
return "SPEECH_PARAMS_HELI";
case 15:
return "SPEECH_PARAMS_FORCE_MEGAPHONE";
case 16:
return "SPEECH_PARAMS_FORCE_HELI";
case 17:
return "SPEECH_PARAMS_INTERRUPT";
case 18:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
case 19:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
case 20:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
case 21:
return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
case 22:
return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
case 23:
return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
case 24:
return "SPEECH_PARAMS_ADD_BLIP";
case 25:
return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
case 26:
return "SPEECH_PARAMS_ADD_BLIP_FORCE";
case 27:
return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
case 28:
return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
case 29:
return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
case 30:
return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
case 31:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
case 32:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
case 33:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
case 34:
return "SPEECH_PARAMS_SHOUTED";
case 35:
return "SPEECH_PARAMS_SHOUTED_CLEAR";
case 36:
return "SPEECH_PARAMS_SHOUTED_CRITICAL";
default:
}
iVar0=0;
return iVar0;
}


char* func_106(int iParam0){
char* sVar0;
sVar0="";
switch (iParam0){
case 0:
sVar0="JIMMY";
break;
case 1:
sVar0="HS3_WENDY";
break;
case 2:
switch (Local_45.f_386){
case 1:
sVar0="KARIM";
break;
case 2:
sVar0="TALINA";
break;
case 3:
sVar0="EDDIE";
break;
case 4:
sVar0="BIKE_MECHANIC";
break;
case 5:
sVar0="WEPSEXP";
break;
}
break;
case 3:
switch (Local_45.f_387){
case 1:
sVar0="LIENGINEER";
break;
case 2:
sVar0="CHRISTIAN";
break;
case 3:
sVar0="BTL_YOHAN";
break;
case 4:
sVar0="AVI";
break;
case 5:
sVar0="PAIGE";
break;
}
break;
case 4:
switch (Local_45.f_388){
case 1:
sVar0="KARL";
break;
case 2:
sVar0="GUSTAVO";
break;
case 3:
sVar0="AIRMECH";
break;
case 4:
sVar0="WEPSEXP";
break;
case 5:
sVar0="PACKIE";
break;
}
break;
}
return sVar0;
}


char* func_107(int iParam0, int iParam1){
char* sVar0;
sVar0="";
switch (iParam1){
case 0:
switch (iParam0){
case 1:
sVar0="ARCADE_HI";
break;
case 2:
sVar0="ARCADE_BYE";
break;
case 3:
sVar0="ARCADE_BUMP";
break;
case 4:
sVar0="ARCADE_LOITER";
break;
case 5:
sVar0="ARCADE_TV_TURNEDOFF";
break;
case 10:
sVar0="ARCADE_HOWSITGOING";
break;
case 6:
switch (Local_53.f_6){
case 0:
case 1:
sVar0="ARCADE_TV_OFF";
if(Global_1579696){
sVar0="ARCADE_WATCHING_TV";
}
break;
case 3:
sVar0="ARCADE_PHONE";
break;
case 4:
sVar0="ARCADE_TEXTING";
break;
case 5:
sVar0="ARCADE_SMOKING";
break;
}
if(!Local_45.f_380 && !Local_45.f_381){
sVar0="ARCADE_SETUP";
}elseif(Local_45.f_380 && !Local_45.f_381){
sVar0="ARCADE_TEXTING";
}
break;
case 7:
sVar0="ARCADE_LOW";
if(Local_53.f_1 >=4){
sVar0="ARCADE_HIGH";
}
break;
case 8:
sVar0="ARCADE_CABINETS";
if(Local_53.f_10==14){
sVar0="ARCADE_ALL_CABINETS";
}
break;
case 9:
switch (Local_53.f_15){
case 0:
sVar0="ARCADE_SPACE";
break;
case 1:
sVar0="ARCADE_LIGHTGUN";
break;
case 3:
sVar0="ARCADE_DRIVING";
break;
case 4:
sVar0="ARCADE_DRIVING";
break;
case 5:
sVar0="ARCADE_DRIVING";
break;
case 9:
sVar0="ARCADE_INVADE";
break;
case 11:
sVar0="ARCADE_FORTUNE";
break;
case 12:
sVar0="ARCADE_CRANE";
break;
case 13:
sVar0="ARCADE_LOVETEST";
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 1:
sVar0="ARCADE_PLAYER_HI";
break;
case 2:
sVar0="ARCADE_PLAYER_BYE";
break;
case 3:
sVar0="BUMP";
break;
case 4:
sVar0="ARCADE_LOITER";
break;
}
break;
case 2:
switch (iParam0){
case 1:
sVar0="ARCADE_HI";
break;
case 2:
sVar0="ARCADE_BYE";
break;
case 3:
sVar0="ARCADE_BUMP";
break;
case 4:
sVar0="ARCADE_LOITER";
break;
case 11:
sVar0="ARCADE_IDLE";
break;
case 6:
if(Local_53.f_7==2){
sVar0="ARCADE_PHONE";
}
break;
case 12:
switch (Local_45.f_386){
case 2:
if(!Local_45.f_389){
sVar0="ARCADE_NOVEHICLE";
}
break;
case 3:
if(!Local_45.f_389){
sVar0="ARCADE_NOVEHICLE";
}
break;
}
break;
case 13:
switch (Local_45.f_386){
case 4:
if(Global_1579695==1){
sVar0="ARCADE_FIRST_UPGRADE";
}elseif(Global_1579695==2){
sVar0="ARCADE_SECOND_UPGRADE";
}
break;
}
break;
}
break;
case 3:
switch (iParam0){
case 1:
sVar0="ARCADE_HI";
break;
case 2:
sVar0="ARCADE_BYE";
break;
case 3:
sVar0="ARCADE_BUMP";
break;
case 4:
sVar0="ARCADE_LOITER";
break;
case 6:
if(Local_53.f_8==0){
sVar0="ARCADE_COMPUTER";
}
break;
}
break;
case 4:
switch (iParam0){
case 1:
sVar0="ARCADE_HI";
break;
case 2:
sVar0="ARCADE_BYE";
break;
case 3:
sVar0="ARCADE_BUMP";
break;
case 4:
sVar0="ARCADE_LOITER";
break;
}
break;
}
return sVar0;
}

int func_108(int iParam0){
switch (iParam0){
case 13:
return 0;
default:
}
return 1;
}

int func_109(var uParam0, int iParam1){
if(func_9(PLAYER::PLAYER_PED_ID()) && func_9(*uParam0)){
return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < func_38(iParam1);
}
return 0;
}


void func_110(var uParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
PED::DELETE_PED(uParam0);
}
iVar0=0;
while (iVar0 < 2){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iVar0])){
OBJECT::DELETE_OBJECT(&(uParam0->f_1[iVar0]));
}
iVar0++;
}}


void func_111(var uParam0, int iParam1){
if(Local_45.f_377 < 2){
if(!func_134(uParam0)){
func_133(uParam0, iParam1);
if(func_132(uParam0, iParam1)){
*uParam0=PED::CREATE_PED(26, func_131(iParam1, uParam0->f_16, Local_45.f_386, Local_45.f_387, Local_45.f_388, uParam0->f_11), uParam0->f_13, uParam0->f_12, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(func_130(iParam1)){
if(func_129(uParam0->f_6, uParam0->f_7)){
func_125(*uParam0, uParam0->f_6, uParam0->f_7);
}
else{
func_122(*uParam0, &(uParam0->f_6), &(uParam0->f_7));
}}
func_121(uParam0);
func_120(uParam0, iParam1);
if(func_119(uParam0)){
func_113(uParam0);
}
if(func_91(uParam0)){
PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(*uParam0, 0, func_98(), func_112(uParam0), 1090519040, 1);
}
if(Local_45.f_385){
ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0, 0);
}
if(MISC::IS_BIT_SET(Local_45.f_375, 1)){
ENTITY::SET_ENTITY_ALPHA(*uParam0, 0, 0);
}
Local_45.f_377++;
}}}}}


char* func_112(var uParam0){
switch (uParam0->f_8){
case 1:
return "PED_MALE@_STAND_WITHDRINK@_01A@_BASE_BASE";
case 2:
return "PED_MALE@_STAND_WITHDRINK@_01B@_BASE_BASE";
case 3:
return "PED_FEMALE@_STAND@_03A@_BASE_BASE";
case 4:
return "PED_FEMALE@_STAND@_03B@_BASE_BASE";
case 5:
return "PED_FEMALE@_STAND@_02A@_BASE_BASE";
case 6:
return "PED_FEMALE@_STAND_WITHDRINK@_01B@_BASE_BASE";
case 27:
return "AMB@PROP_HUMAN_SEAT_BAR@MALE@ELBOWS_ON_BAR@BASE";
default:
}
return "";
}


void func_113(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 2){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iVar0]) && func_118(uParam0, iVar0) !=0){
uParam0->f_1[iVar0]=OBJECT::CREATE_OBJECT(func_118(uParam0, iVar0), PED::GET_PED_BONE_COORDS(*uParam0, func_117(uParam0, iVar0), 0f, 0f, 0f), 0, 0, 0);
if(MISC::IS_BIT_SET(Local_45.f_375, 1)){
ENTITY::SET_ENTITY_ALPHA(uParam0->f_1[iVar0], 0, 0);
}
if(func_116(uParam0)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1[iVar0], *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, func_117(uParam0, iVar0)), func_115(uParam0), func_114(uParam0), 1, 1, 0, 0, 2, 1, 0);
}}
iVar0++;
}}


Vector3 func__114(var uParam0){
switch (uParam0->f_8){
case 8:
return 0f, -90f, 0f;
case 12:
return 10f, 0f, 0f;
case 13:
return -2f, -5f, 0f;
case 15:
case 19:
return 0f, 10f, 0f;
case 24:
case 25:
return 270f, 20f, 10f;
case 26:
return 270f, 0f, 0f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__115(var uParam0){
switch (uParam0->f_8){
case 7:
return 0.005f, 0.0175f, 0.02f;
case 8:
return -0.03f, 0f, -0.02f;
case 12:
return 0.02f, -0.02f, -0.04f;
case 13:
return 0.02f, -0.02f, -0.08f;
case 15:
case 19:
return 0.015f, -0.012f, -0.02f;
case 16:
return 0.01f, 0.023f, 0.02f;
case 24:
case 25:
return 0.13f, 0.075f, 0f;
case 26:
return 0.07f, 0.05f, 0f;
case 23:
return 0f, 0f, 0f;
default:
}
return 0f, 0f, 0f;
}

int func_116(var uParam0){
switch (uParam0->f_8){
case 24:
case 25:
case 16:
case 12:
return 0;
default:
}
return 1;
}

int func_117(var uParam0, int iParam1){
switch (uParam0->f_8){
case 2:
case 6:
case 12:
case 13:
case 22:
case 24:
case 25:
case 7:
case 16:
case 9:
case 14:
case 15:
case 17:
case 19:
return 28422;
case 1:
case 8:
case 26:
case 23:
case 10:
case 20:
return 60309;
case 18:
switch (iParam1){
case 0:
return 28422;
case 1:
return 60309;
default:
}
break;
}
return 28422;
}

int func_118(var uParam0, int iParam1){
switch (iParam1){
case 0:
switch (uParam0->f_8){
case 1:
case 2:
case 6:
case 13:
case 12:
return joaat("prop_amb_beer_bottle");
case 7:
case 16:
return joaat("prop_cs_ciggy_01");
case 23:
return joaat("prop_cs_tablet");
case 8:
case 26:
case 9:
case 14:
case 15:
case 17:
case 19:
return joaat("prop_amb_phone");
case 10:
case 20:
return joaat("p_cs_clipboard");
case 22:
return joaat("p_amb_coffeecup_01");
case 24:
return joaat("w_ar_carbinerifle");
case 25:
return joaat("w_ar_assaultrifle");
case 18:
return joaat("prop_pencil_01");
default:
}
break;
case 1:
switch (uParam0->f_8){
case 18:
return joaat("bkr_prop_fakeid_clipboard_01a");
default:
}
break;
}
return 0;
}

int func_119(var uParam0){
switch (uParam0->f_8){
case 1:
case 2:
case 6:
case 7:
case 8:
case 9:
case 10:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 24:
case 25:
case 26:
return 1;
default:
}
return 0;
}


void func_120(var uParam0, int iParam1){
switch (iParam1){
case 1:
PED::SET_PED_PROP_INDEX(*uParam0, 0, 0, 0, 0, 1);
PED::SET_PED_PROP_INDEX(*uParam0, 1, 0, 0, 0, 1);
break;
case 2:
switch (Local_45.f_386){
case 1:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 4, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 3, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 1, 0, 0);
break;
case 2:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 2, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 1, 0, 0);
break;
case 4:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 1, 0, 0);
break;
case 5:
PED::SET_PED_PROP_INDEX(*uParam0, 0, 0, 0, 0, 1);
break;
}
break;
case 3:
switch (Local_45.f_387){
case 1:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 3, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 3, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 3, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
PED::SET_PED_PROP_INDEX(*uParam0, 1, 0, 0, 0, 1);
PED::SET_PED_PROP_INDEX(*uParam0, 2, 0, 0, 0, 1);
break;
case 2:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
break;
case 3:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 5, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 5, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 5, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 4, 0, 0);
break;
}
break;
case 4:
switch (Local_45.f_388){
case 1:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 6, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 6, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 1, 0, 0);
break;
case 2:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 4, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 6, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 6, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 1, 0, 0);
break;
case 5:
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 5, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 6, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 6, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
break;
case 4:
PED::SET_PED_PROP_INDEX(*uParam0, 0, 0, 0, 0, 1);
break;
}
break;
}}


void func_121(var uParam0){
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*uParam0, 0);
PED::SET_PED_AS_ENEMY(*uParam0, 0);
WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
PED::SET_PED_RESET_FLAG(*uParam0, 249, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 185, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 108, 1);
PED::SET_PED_CONFIG_FLAG(*uParam0, 106, 1);
PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 0);
PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(*uParam0, 1);
PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, 0);
PED::SET_PED_CAN_RAGDOLL(*uParam0, 0);
PED::SET_PED_CONFIG_FLAG(*uParam0, 208, 1);
TASK::CLEAR_PED_TASKS(*uParam0);
}


void func_122(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<21> Var1;
var uVar2;
var uVar3;
Var1=10;
iVar0=0;
while (iVar0 < 12){
uVar2=PED::GET_PED_DRAWABLE_VARIATION(uParam0, iVar0);
uVar3=PED::GET_PED_TEXTURE_VARIATION(uParam0, iVar0);
if(iVar0 < 10){
Var1[iVar0 /*2*/]=uVar2;
Var1[iVar0 /*2*/].f_1=uVar3;
}
iVar0++;
}
func_123(Var1, uParam1, uParam2);
}


void func_123(struct<2>[] Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 10){
iVar1=iVar0 * 3;
func_124(uParam21, Param0[iVar0 /*2*/], iVar1);
func_124(uParam22, Param0[iVar0 /*2*/].f_1, iVar1);
iVar0++;
}}


void func_124(var uParam0, int iParam1, bool bParam2){
switch (iParam1){
case 0:
MISC::CLEAR_BIT(uParam0, iParam2);
MISC::CLEAR_BIT(uParam0, bParam2 + 1);
MISC::CLEAR_BIT(uParam0, bParam2 + 2);
break;
case 1:
MISC::SET_BIT(uParam0, bParam2);
MISC::CLEAR_BIT(uParam0, bParam2 + 1);
MISC::CLEAR_BIT(uParam0, bParam2 + 2);
break;
case 2:
MISC::CLEAR_BIT(uParam0, bParam2);
MISC::SET_BIT(uParam0, bParam2 + 1);
MISC::CLEAR_BIT(uParam0, bParam2 + 2);
break;
case 3:
MISC::SET_BIT(uParam0, bParam2);
MISC::SET_BIT(uParam0, bParam2 + 1);
MISC::CLEAR_BIT(uParam0, bParam2 + 2);
break;
case 4:
MISC::CLEAR_BIT(uParam0, bParam2);
MISC::CLEAR_BIT(uParam0, bParam2 + 1);
MISC::SET_BIT(uParam0, bParam2 + 2);
break;
case 5:
MISC::SET_BIT(uParam0, bParam2);
MISC::CLEAR_BIT(uParam0, bParam2 + 1);
MISC::SET_BIT(uParam0, bParam2 + 2);
break;
case 6:
MISC::CLEAR_BIT(uParam0, bParam2);
MISC::SET_BIT(uParam0, bParam2 + 1);
MISC::SET_BIT(uParam0, bParam2 + 2);
break;
case 7:
MISC::SET_BIT(uParam0, bParam2);
MISC::SET_BIT(uParam0, bParam2 + 1);
MISC::SET_BIT(uParam0, bParam2 + 2);
break;
}}


void func_125(var uParam0, var uParam1, var uParam2){
struct<21> Var0;
Var0=10;
func_127(&Var0, uParam1, uParam2);
func_126(uParam0, Var0);
}


void func_126(var uParam0, struct<2>[] Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21){
int iVar0;
iVar0=0;
while (iVar0 < 10){
PED::SET_PED_COMPONENT_VARIATION(uParam0, iVar0, Param1[iVar0 /*2*/], Param1[iVar0 /*2*/].f_1, 0);
iVar0++;
}}


void func_127(var uParam0, var uParam1, var uParam2){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 10){
bVar1=iVar0 * 3;
(*uParam0)[iVar0 /*2*/]=func_128(&uParam1, bVar1);
(uParam0[iVar0 /*2*/])->f_1=func_128(&uParam2, bVar1);
iVar0++;
}}

int func_128(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
if(MISC::IS_BIT_SET(*uParam0, bParam1)){
iVar0++;
}
if(MISC::IS_BIT_SET(*uParam0, bParam1 + 1)){
iVar0 +=2;
}
if(MISC::IS_BIT_SET(*uParam0, bParam1 + 2)){
iVar0 +=4;
}
return iVar0;
}


bool func_129(int iParam0, int iParam1){
return (iParam0 > 0 || iParam1 > 0);
}


bool func_130(int iParam0){
return iParam0 > 4;
}

int func_131(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
switch (iParam0){
case 0:
return MISC::GET_HASH_KEY("ig_jimmydisanto2");
case 1:
return MISC::GET_HASH_KEY("ig_wendy");
case 2:
switch (iParam2){
case 1:
return joaat("hc_driver");
case 2:
return joaat("hc_driver");
case 3:
return joaat("u_m_m_edtoh");
case 4:
return joaat("s_m_y_xmech_02");
case 5:
return joaat("mp_m_weapexp_01");
default:
}
break;
case 3:
switch (iParam3){
case 1:
return joaat("hc_hacker");
case 2:
return joaat("hc_hacker");
case 3:
return joaat("s_m_y_waretech_01");
case 4:
return joaat("ig_money");
case 5:
return joaat("ig_paige");
default:
}
break;
case 4:
switch (iParam4){
case 1:
return joaat("hc_gunman");
case 2:
return joaat("hc_gunman");
case 3:
return joaat("u_m_y_smugmech_01");
case 4:
return joaat("mp_m_weapexp_01");
case 5:
return joaat("hc_gunman");
default:
}
break;
}
if(bParam1){
switch (iParam5){
case 0:
return joaat("a_f_y_hipster_02");
case 1:
return joaat("a_f_y_hipster_04");
case 2:
return joaat("a_f_y_skater_01");
default:}}else{
switch (iParam5){
case 0:
return joaat("a_m_y_beachvesp_01");
case 1:
return joaat("a_m_y_skater_01");
case 2:
return joaat("a_m_y_skater_02");
case 3:
return joaat("a_m_y_hipster_01");
case 4:
return joaat("a_m_y_stwhi_02");
}
default:
}
return joaat("a_m_y_hipster_01");
}

int func_132(var uParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
var uVar3;
if(func_137(uParam0, iParam1)){
uVar0=func_131(iParam1, uParam0->f_16, Local_45.f_386, Local_45.f_387, Local_45.f_388, uParam0->f_11);
if(STREAMING::IS_MODEL_VALID(uVar0)){
if(STREAMING::HAS_MODEL_LOADED(uVar0) && STREAMING::HAS_ANIM_DICT_LOADED(func_98())){
if(func_119(uParam0)){
iVar2=0;
iVar1=0;
while (iVar1 < 2){
uVar3=func_118(uParam0, iVar1);
if(STREAMING::IS_MODEL_VALID(uVar3)){
if(STREAMING::HAS_MODEL_LOADED(uVar3)){
iVar2++;
}
}
else{
iVar2++;
}
iVar1++;
}
return iVar2==2;
}else{
return 1;
}}}
return 0;
}
return 1;
}


void func_133(var uParam0, int iParam1){
int iVar0;
int iVar1;
if(func_137(uParam0, iParam1)){
STREAMING::REQUEST_MODEL(func_131(iParam1, uParam0->f_16, Local_45.f_386, Local_45.f_387, Local_45.f_388, uParam0->f_11));
STREAMING::REQUEST_ANIM_DICT(func_98());
if(func_119(uParam0)){
iVar0=0;
while (iVar0 < 2){
iVar1=func_118(uParam0, iVar0);
if(iVar1 !=0){
STREAMING::REQUEST_MODEL(iVar1);
}
iVar0++;
}}}}

int func_134(var uParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
if(func_35(iVar1, 1, 1)){
if(func_135(func_136(iVar1), uParam0->f_13, 0.75f, 1)){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_135(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
if(fParam2 < 0f){
fParam2=0f;
}
if(!bParam3){
if(MISC::ABSF((Param0.f_0 - Param1.f_0)) <=fParam2){
if(MISC::ABSF((Param0.f_1 - Param1.f_1)) <=fParam2){
if(MISC::ABSF((Param0.f_2 - Param1.f_2)) <=fParam2){
return 1;
}}}}elseif(MISC::ABSF((Param0.f_0 - Param1.f_0)) <=fParam2){
if(MISC::ABSF((Param0.f_1 - Param1.f_1)) <=fParam2){
return 1;
}}
return 0;
}


Vector3 func__136(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


bool func_137(var uParam0, int iParam1){
if(uParam0->f_17){
return 0;
}
if((Local_45.f_391 && !func_27(iParam1)) && !MISC::IS_BIT_SET(Local_45.f_375, 1)){
return 0;
}
if(Local_45.f_390){
if(!uParam0->f_18){
return (Global_1579691 && uParam0->f_9 <=Local_53.f_1);
}}elseif(uParam0->f_18){
return (Global_1579691 && uParam0->f_9 <=Local_53.f_1);
}
return uParam0->f_9 <=Local_53.f_1;
}

int func_138(){
if(!func_139(Local_45.f_379)){
return 2;
}
return 17;
}


bool func_139(int iParam0){
return (func_145(iParam0) && func_140(iParam0));
}

int func_140(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return MISC::IS_BIT_SET(func_141(8726, -1), 4);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1976059[iParam0 /*68*/].f_40, 4);
}
return 0;
}

int func_141(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_142(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__142(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_143(uParam1));
}

int func_143(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_144();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


var func__144(){
return Global_1574918;
}

int func_145(int iParam0){
if(iParam0 !=func_20()){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_429.f_1, 2);
}
return 0;
}

int func_146(){
int iVar0;
iVar0=0;
if(func_150()){
iVar0=1;
}
if((!func_148(PLAYER::PLAYER_ID()) && !func_147(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321, 28)){
iVar0=1;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ARCADE")) < 1){
iVar0=1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
iVar0=1;
}
if(Global_1579689==0){
iVar0=1;
}
return iVar0;
}

int func_147(int iParam0){
if(iParam0 !=func_20() && func_35(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 4);
}
return 0;
}

int func_148(int iParam0){
if(iParam0 !=func_20()){
if(func_35(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_149(Global_2657704[iParam0 /*463*/].f_321.f_7)==17;
}}}
return 0;
}

int func_149(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
break;
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return 1;
break;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
break;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
break;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
break;
case 81:
return 5;
break;
case 82:
return 6;
break;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
break;
case 88:
return 8;
break;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
break;
case 101:
return 10;
break;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
break;
case 117:
return 12;
break;
case 122:
return 13;
break;
case 123:
return 14;
break;
case 124:
return 15;
break;
case 125:
return 16;
break;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
break;
case 145:
return 18;
break;
case 146:
return 19;
break;
case 147:
return 20;
break;
case 148:
return 21;
break;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
break;
case 154:
return 23;
break;
case 155:
case 156:
case 157:
case 158:
return 24;
break;
case 159:
return 25;
break;
case 160:
return 26;
break;
case 161:
return 27;
break;
}
return -1;
}

int func_150(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_157()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_156()){
return 1;
}
if(func_155(159)){
if(!func_154()){
return 1;
}}
if(func_155(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_151() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_151())==0){
return 1;
}}
return 0;
}

int func_151(){
switch (func_153()){
case 0:
return func_152();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_152(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_153(){
return Global_32283;
}


bool func_154(){
return Global_2683883.f_698;
}

int func_155(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_156(){
return Global_2694576;
}


bool func_157(){
return Global_2683883.f_693;
}


void func_158(){
wait(0);
}


void func_159(){
if(!Local_45.f_380){
if(!ENTITY::DOES_ENTITY_EXIST(Local_45.f_382)){
Local_45.f_382=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tool_broom"), 2733.13f, -387.578f, -49.33f, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_45.f_382, 2733.13f, -387.578f, -49.33f, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(Local_45.f_382, -12f, 0f, 225f, 2, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_45.f_382, 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_45.f_382, 0);
ENTITY::FREEZE_ENTITY_POSITION(Local_45.f_382, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tool_broom"));
if(Local_45.f_385){
ENTITY::SET_ENTITY_VISIBLE(Local_45.f_382, 0, 0);
}}}
if(((Local_45.f_380 && Local_45.f_381) && Local_45.f_387 !=0) && Local_53.f_8==0){
if(!ENTITY::DOES_ENTITY_EXIST(Local_45.f_383)){
Local_45.f_383=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("ex_prop_offchair_exec_03"), 2712.377f, -352.966f, -55.587f, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_45.f_383, 2712.377f, -352.966f, -55.587f, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(Local_45.f_383, 0f, 0f, 180f, 2, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_45.f_383, 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_45.f_383, 0);
ENTITY::FREEZE_ENTITY_POSITION(Local_45.f_383, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ex_prop_offchair_exec_03"));
if(Local_45.f_385){
ENTITY::SET_ENTITY_VISIBLE(Local_45.f_383, 0, 0);
}}}
if(((Local_45.f_380 && Local_45.f_381) && Local_45.f_388 !=0) && Local_53.f_9==0){
if(!ENTITY::DOES_ENTITY_EXIST(Local_45.f_384)){
Local_45.f_384=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("ex_prop_offchair_exec_03"), 2714.403f, -355.905f, -55.587f, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_45.f_384, 2714.403f, -355.905f, -55.587f, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(Local_45.f_384, 0f, 0f, -55f, 2, 1);
ENTITY::SET_ENTITY_INVINCIBLE(Local_45.f_384, 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_45.f_384, 0);
ENTITY::FREEZE_ENTITY_POSITION(Local_45.f_384, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ex_prop_offchair_exec_03"));
ENTITY::SET_ENTITY_COLLISION(Local_45.f_384, 0, 0);
if(Local_45.f_385){
ENTITY::SET_ENTITY_VISIBLE(Local_45.f_384, 0, 0);
}}}}


void func_160(bool bParam0){
func_164();
if(bParam0){
func_162();
}
func_161();
Global_1579694=Local_53.f_6;
}


void func_161(){
int iVar0;
iVar0=0;
while (iVar0 < func_138()){
func_133(&(Local_45[iVar0 /*22*/]), iVar0);
iVar0++;
}}


void func_162(){
int iVar0;
iVar0=0;
while (iVar0 < func_138()){
func_163(Local_53, &(Local_45[iVar0 /*22*/]), iVar0, Local_45.f_380, Local_45.f_381, Local_45.f_386, Local_45.f_387, Local_45.f_388);
iVar0++;
}}


void func_163(struct<10> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22, bool bParam23, bool bParam24, int iParam25, int iParam26, int iParam27){
switch (Param0.f_2){
case 0:
switch (iParam22){
case 0:
if(!bParam23){
uParam21->f_13={
2732.426f, -387.6855f, -49.02532f 
};
uParam21->f_12=17.28f;
uParam21->f_16=0;
uParam21->f_8=7;
uParam21->f_9=0;
}elseif(!bParam24){
uParam21->f_13={
2724.772f, -383.15f, -48.9625f 
};
uParam21->f_12=-90f;
uParam21->f_16=0;
uParam21->f_8=8;
uParam21->f_9=0;
}else{
switch (Param0.f_6){
case 0:
uParam21->f_13={
2737.947f, -381.5125f, -48.56255f 
};
uParam21->f_12=1.25f;
uParam21->f_16=0;
uParam21->f_8=11;
uParam21->f_9=0;
break;
case 1:
uParam21->f_13={
2738.195f, -380.763f, -49.43f 
};
uParam21->f_12=95f;
uParam21->f_16=0;
uParam21->f_8=12;
uParam21->f_9=0;
break;
case 2:
uParam21->f_13={
2723.006f, -389.275f, -49.0089f 
};
uParam21->f_12=-74.5f;
uParam21->f_16=0;
uParam21->f_8=13;
uParam21->f_9=0;
break;
case 3:
uParam21->f_13={
2735.208f, -380.53f, -49.345f 
};
uParam21->f_12=38.16f;
uParam21->f_16=0;
uParam21->f_8=14;
uParam21->f_9=0;
break;
case 4:
uParam21->f_13={
2722.576f, -382.3125f, -49.005f 
};
uParam21->f_12=-43f;
uParam21->f_16=0;
uParam21->f_8=15;
uParam21->f_9=0;
break;
case 5:
uParam21->f_13={
2728.902f, -389.2875f, -49.99f 
};
uParam21->f_12=88.75f;
uParam21->f_16=0;
uParam21->f_8=16;
uParam21->f_9=0;
break;
}}
break;
case 1:
if(!bParam23){
uParam21->f_13={
2723.778f, -384.875f, -49.02532f 
};
uParam21->f_12=-57f;
uParam21->f_16=1;
uParam21->f_8=9;
uParam21->f_9=0;
}elseif(!bParam24){
uParam21->f_13={
2731.507f, -381.1375f, -49.02532f 
};
uParam21->f_12=141.75f;
uParam21->f_16=1;
uParam21->f_8=10;
uParam21->f_9=0;
}else{
uParam21->f_17=1;
}
break;
case 2:
if((bParam23 && bParam24) && iParam25 !=0){
switch (Param0.f_7){
case 0:
uParam21->f_13={
2710.603f, -354.328f, -56.162f 
};
uParam21->f_12=104.5f;
uParam21->f_16=0;
uParam21->f_8=18;
uParam21->f_9=0;
uParam21->f_18=1;
break;
case 1:
uParam21->f_13={
2710.709f, -355.79f, -56.162f 
};
uParam21->f_12=-128f;
uParam21->f_16=0;
uParam21->f_8=19;
uParam21->f_9=0;
uParam21->f_18=1;
break;
case 2:
uParam21->f_13={
2709.916f, -357.1025f, -55.16993f 
};
uParam21->f_12=-90f;
uParam21->f_16=0;
uParam21->f_8=17;
uParam21->f_9=0;
uParam21->f_18=1;
break;
case 3:
uParam21->f_13={
2694.033f, -358.24f, -55.18243f 
};
uParam21->f_12=-68.5f;
uParam21->f_16=0;
uParam21->f_8=20;
uParam21->f_9=0;
uParam21->f_18=1;
break;
}}else{
uParam21->f_17=1;
}
break;
case 3:
if((bParam23 && bParam24) && iParam26 !=0){
switch (Param0.f_8){
case 0:
uParam21->f_13={
2712.357f, -352.9247f, -55.65743f 
};
uParam21->f_12=0f;
uParam21->f_16=0;
uParam21->f_8=21;
uParam21->f_9=0;
uParam21->f_18=1;
break;
case 1:
uParam21->f_13={
2711.475f, -352.9872f, -55.19493f 
};
uParam21->f_12=-19.25f;
uParam21->f_16=0;
uParam21->f_8=15;
uParam21->f_9=0;
uParam21->f_18=1;
break;
case 2:
uParam21->f_13={
2713.429f, -352.94f, -55.19493f 
};
uParam21->f_12=180f;
uParam21->f_16=0;
uParam21->f_8=22;
uParam21->f_9=0;
uParam21->f_18=1;
break;
case 3:
uParam21->f_13={
2716.49f, -359.0622f, -54.59493f 
};
uParam21->f_12=180f;
uParam21->f_16=0;
uParam21->f_8=23;
uParam21->f_9=0;
uParam21->f_18=1;
break;
}}else{
uParam21->f_17=1;
}
break;
case 4:
if((bParam23 && bParam24) && iParam27 !=0){
switch (Param0.f_9){
case 0:
uParam21->f_13={
2712.863f, -356.7349f, -55.82305f 
};
uParam21->f_12=-150.5f;
uParam21->f_16=0;
uParam21->f_8=24;
uParam21->f_9=0;
uParam21->f_18=1;
break;
case 1:
uParam21->f_13={
2714.122f, -355.6775f, -56.15743f 
};
uParam21->f_12=-99.25f;
uParam21->f_16=0;
uParam21->f_8=25;
uParam21->f_9=0;
uParam21->f_18=1;
break;
case 2:
uParam21->f_13={
2715.202f, -357.2525f, -55.20743f 
};
uParam21->f_12=90f;
uParam21->f_16=0;
uParam21->f_8=26;
uParam21->f_9=0;
uParam21->f_18=1;
break;
}}else{
uParam21->f_17=1;
}
break;
case 5:
uParam21->f_13={
2725.394f, -382.9775f, -49.9124f 
};
uParam21->f_12=34.9f;
uParam21->f_16=0;
uParam21->f_6=4608;
uParam21->f_7=13314;
uParam21->f_8=2;
uParam21->f_9=1;
uParam21->f_11=0;
break;
case 6:
uParam21->f_13={
2724.975f, -382.305f, -49.9999f 
};
uParam21->f_12=217.665f;
uParam21->f_16=1;
uParam21->f_6=65;
uParam21->f_7=4608;
uParam21->f_8=5;
uParam21->f_9=1;
uParam21->f_11=1;
break;
case 7:
uParam21->f_13={
2729.888f, -388.92f, -49.3124f 
};
uParam21->f_12=300f;
uParam21->f_16=0;
uParam21->f_6=37377;
uParam21->f_7=33587265;
uParam21->f_8=14;
uParam21->f_9=2;
uParam21->f_11=1;
break;
case 8:
uParam21->f_13={
2725.378f, -386.4875f, -49.2124f 
};
uParam21->f_12=90f;
uParam21->f_16=0;
uParam21->f_6=16781313;
uParam21->f_7=268444160;
uParam21->f_8=27;
uParam21->f_9=2;
uParam21->f_11=2;
break;
case 9:
uParam21->f_13={
2734.232f, -387.2575f, -49.3799f 
};
uParam21->f_12=134.565f;
uParam21->f_16=0;
uParam21->f_6=4160;
uParam21->f_7=16781826;
uParam21->f_8=15;
uParam21->f_9=3;
uParam21->f_11=3;
if(!Global_262145.f_9568){
uParam21->f_17=1;
}
break;
case 10:
uParam21->f_13={
2733.669f, -387.7975f, -49.3624f 
};
uParam21->f_12=-47.575f;
uParam21->f_16=0;
uParam21->f_6=134218241;
uParam21->f_7=33559553;
uParam21->f_8=15;
uParam21->f_9=3;
uParam21->f_11=2;
if(!Global_262145.f_9568){
uParam21->f_17=1;
}
break;
case 11:
uParam21->f_13={
2725.313f, -387.165f, -49.9525f 
};
uParam21->f_12=38.64f;
uParam21->f_16=1;
uParam21->f_6=4673;
uParam21->f_7=9281;
uParam21->f_8=3;
uParam21->f_9=4;
uParam21->f_11=0;
break;
case 12:
uParam21->f_13={
2728.143f, -387.5425f, -49.1974f 
};
uParam21->f_12=180f;
uParam21->f_16=0;
uParam21->f_6=1;
uParam21->f_7=8704;
uParam21->f_8=27;
uParam21->f_9=4;
uParam21->f_11=0;
break;
case 13:
uParam21->f_13={
2736.281f, -374.2325f, -49.9999f 
};
uParam21->f_12=6.48f;
uParam21->f_16=1;
uParam21->f_6=16777216;
uParam21->f_7=4673;
uParam21->f_8=6;
uParam21->f_9=5;
uParam21->f_11=2;
break;
case 14:
uParam21->f_13={
2736.237f, -373.4775f, -50.0024f 
};
uParam21->f_12=190.165f;
uParam21->f_16=0;
uParam21->f_6=16777857;
uParam21->f_7=8194;
uParam21->f_8=0;
uParam21->f_9=5;
uParam21->f_11=3;
break;
case 15:
uParam21->f_13={
2736.418f, -379.0775f, -49.3649f 
};
uParam21->f_12=100.64f;
uParam21->f_16=0;
uParam21->f_6=65;
uParam21->f_7=6721;
uParam21->f_8=1;
uParam21->f_9=6;
uParam21->f_11=4;
break;
case 16:
uParam21->f_13={
2735.684f, -379.1575f, -49.3649f 
};
uParam21->f_12=280.63f;
uParam21->f_16=1;
uParam21->f_6=4097;
uParam21->f_7=9281;
uParam21->f_8=4;
uParam21->f_9=6;
uParam21->f_11=1;
break;
}
break;
}}


void func_164(){
int iVar0;
iVar0=0;
while (iVar0 < 17){
func_110(&(Local_45[iVar0 /*22*/]));
iVar0++;
}}


void func_165(){
while (Local_53.f_12==0){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_53.f_2=0;
Local_53.f_12=1;
Local_53.f_6=func_176();
Local_53.f_7=func_172();
Local_53.f_8=func_171();
Local_53.f_9=func_170();
Local_53.f_10=func_169();
Local_53.f_11=func_167(Local_45.f_379, 0);
Local_53.f_1=func_166();
Local_53.f_13=Global_1579696;
}else{
wait(0);
}}}

int func_166(){
if(Local_53.f_10 >=13 && Local_53.f_11 >=20){
return 6;
}elseif(Local_53.f_10 >=11 && Local_53.f_11 >=17){
return 5;
}elseif(Local_53.f_10 >=9 && Local_53.f_11 >=14){
return 4;
}elseif(Local_53.f_10 >=7 && Local_53.f_11 >=9){
return 3;
}elseif(Local_53.f_10 >=5 && Local_53.f_11 >=5){
return 2;
}elseif(Local_53.f_10 >=2 && Local_53.f_11 >=2){
return 1;
}
return 0;
}

int func_167(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 <=(func_53(iParam1) - 1)){
iVar2=func_48(iParam0, iVar1, iParam1);
if(iVar2 !=0 && !func_168(iVar2)){
iVar0++;
}
iVar1++;
}
return iVar0;
}

int func_168(int iParam0){
switch (iParam0){
case 18:
case 19:
case 20:
return 1;
break;
}
return 0;
}

int func_169(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 <=13){
if(func_50(Local_45.f_379, iVar1, 0)){
iVar0++;
}
iVar1++;
}
return iVar0;
}

int func_170(){
int iVar0;
int iVar1;
iVar0=2;
if(Local_45.f_388==1){
iVar0=3;
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
return iVar1;
}

int func_171(){
int iVar0;
int iVar1;
iVar0=4;
if(Local_53.f_6==7){
iVar0=3;
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
return iVar1;
}

int func_172(){
int iVar0[4];
int iVar1;
iVar0[0]=1;
iVar0[1]=1;
if(Local_53.f_6 !=9){
iVar0[2]=1;
}
if((Local_45.f_389 && Local_45.f_386 !=0) && func_173(1, Local_45.f_386, Local_45.f_379) !=0){
iVar0[3]=1;
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
while (iVar0[iVar1]==0){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
}
return iVar1;
}

int func_173(int iParam0, int iParam1, int iParam2){
if(iParam2==func_20()){
return 0;
}
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
switch (iParam1){
case 1:
switch (func_175(iParam2)){
case 0:
return joaat("issi3");
case 1:
return joaat("asbo");
case 2:
return joaat("kanjo");
case 3:
return joaat("sentinel3");
default:
}
break;
case 2:
switch (func_175(iParam2)){
case 0:
return joaat("retinue2");
case 1:
return joaat("yosemite2");
case 2:
return joaat("sugoi");
case 3:
return joaat("jugular");
default:
}
break;
case 3:
switch (func_175(iParam2)){
case 0:
return joaat("sultan2");
case 1:
return joaat("gauntlet3");
case 2:
return joaat("ellie");
case 3:
return joaat("komoda");
default:
}
break;
case 4:
switch (func_175(iParam2)){
case 0:
return joaat("manchez");
case 1:
return joaat("stryder");
case 2:
return joaat("defiler");
case 3:
return joaat("lectro");
default:
}
break;
case 5:
switch (func_175(iParam2)){
case 0:
return joaat("zhaba");
case 1:
return joaat("vagrant");
case 2:
return joaat("outlaw");
case 3:
return joaat("everon");
default:
}
break;
}
break;
case 4:
if(Global_1976059[iParam2 /*68*/].f_62 !=0){
switch (Global_1976059[iParam2 /*68*/].f_62){
case 1:
return joaat("burrito2");
case 2:
return joaat("boxville");
case 3:
return joaat("stockade");
case 4:
return joaat("stockade");
default:
}}else{
switch (iParam1){
case 1:
return joaat("rancherxl");
case 2:
return joaat("sultan");
case 4:
return joaat("youga2");
case 5:
return joaat("kamacho");
case 3:
if(func_174(iParam2)){
return joaat("kuruma");
}
else{
return joaat("asterope");
}
break;
}}
break;
}
return 0;
}

int func_174(int iParam0){
if(iParam0 !=func_20()){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_429.f_2, 1);
}
return 0;
}

int func_175(int iParam0){
if(iParam0 !=-1){
return Global_1976059[iParam0 /*68*/].f_18.f_13;
}
return 0;
}


var func__176(){
var uVar0;
uVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
return uVar0;
}


void func_177(struct<3> Param0){
Local_45.f_379=Param0.f_0;
Local_45.f_385=Param0.f_1;
Local_45.f_380=func_145(Param0.f_0);
Local_45.f_381=func_140(Param0.f_0);
Local_45.f_386=func_181(Param0.f_0, 0);
Local_45.f_387=func_180(Param0.f_0, 0);
Local_45.f_388=func_179(Param0.f_0, 0);
Local_45.f_389=func_178(Param0.f_0);
Local_45.f_390=Param0.f_2;
Local_45.f_391=func_18(Param0.f_0);
}

int func_178(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1976059[iParam0 /*68*/].f_18.f_1, 3);
}
return 0;
}

int func_179(int iParam0, bool bParam1){
if(iParam0 !=-1){
if(Global_1976059[iParam0 /*68*/].f_18.f_10 !=0 || !bParam1){
return Global_1976059[iParam0 /*68*/].f_18.f_10;
}}
if(bParam1){
return Global_1971662.f_13;
}
return 0;
}

int func_180(int iParam0, bool bParam1){
if(iParam0 !=-1){
if(Global_1976059[iParam0 /*68*/].f_18.f_14 !=0 || bParam1){
return Global_1976059[iParam0 /*68*/].f_18.f_14;
}}
if(bParam1){
return Global_1971662.f_17;
}
return 0;
}

int func_181(int iParam0, bool bParam1){
if(iParam0 !=-1){
if(Global_1976059[iParam0 /*68*/].f_18.f_12 !=0 || !bParam1){
return Global_1976059[iParam0 /*68*/].f_18.f_12;
}}
if(bParam1){
return Global_1971662.f_15;
}
return 0;
}


void func_182(){
if(AUDIO::IS_STREAM_PLAYING()){
AUDIO::STOP_STREAM();
}
Global_1579686=0;
Global_1579690=0;
Global_1579694=-1;
func_164();
func_184();
func_183();
}


void func_183(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_184(){
if(ENTITY::DOES_ENTITY_EXIST(Local_45.f_382)){
OBJECT::DELETE_OBJECT(&(Local_45.f_382));
}
if(ENTITY::DOES_ENTITY_EXIST(Local_45.f_383)){
OBJECT::DELETE_OBJECT(&(Local_45.f_383));
}
if(ENTITY::DOES_ENTITY_EXIST(Local_45.f_384)){
OBJECT::DELETE_OBJECT(&(Local_45.f_384));
}}


void func_185(){
while (!NETWORK::NETWORK_TRY_TO_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Global_1579704)){
wait(0);
}
Global_1579704++;
func_187(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_53, 30, 0);
if(!func_186()){
func_182();
}
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
}

int func_186(){
int iVar0;
iVar0=0;
while (true){
iVar0++;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA()){
return 1;
}
if(func_157()){
return 0;
}
if(func_155(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_187(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_183();
}else{
return 0;
}}
if(!func_188(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_183();
}else{
return 0;
}}
if(func_157()){
if(!bParam2){
func_183();
}else{
return 0;
}}
if(func_155(157)){
if(!bParam2){
func_183();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_183();
}else{
return 0;
}}}
wait(0);
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
}
if(iParam1 > -1){
Global_1574666=iVar0;
}
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_183();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_183();
}else{
return 0;
}}
return 1;
}


bool func_188(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_189(){
Global_1579689=1;
Global_1579686=0;
Global_1579690=0;
Global_1579694=-1;
}