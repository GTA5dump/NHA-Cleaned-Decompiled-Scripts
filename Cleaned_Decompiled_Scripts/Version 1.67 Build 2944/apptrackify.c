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
var uLocal_16=0;
var uLocal_17=0;
struct<3> Local_18={
0, 0, 0 
};
float fLocal_19=0f;
float fLocal_20=0f;
float fLocal_21=0f;
float fLocal_22=0f;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
float fLocal_26=0f;
int iLocal_27=0;
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
fLocal_23=9.99f;
fLocal_24=0f;
fLocal_25=0f;
fLocal_26=0f;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_10();
func_7();
settimera(0);
settimerb(0);
while (true){
wait(0);
if(Global_20500.f_1 !=9){
switch (Global_20500.f_1){
case 7:
if(timera() > 125){
func_10();
settimera(0);
}
if(timerb() > floor(fLocal_25) * 30 && timerb() > 150){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "APP_FUNCTION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
settimerb(0);
}
if(timerb() > 2000){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "APP_FUNCTION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
settimerb(0);
}
break;
case 8:
if(func_6(2, Global_20468, 0)){
func_5();
Global_20478=1;
func_10();
func_7();
if(Global_20500.f_1 > 3){
Global_20500.f_1=7;
}}
break;
default:
break;
}
if(func_4()){
func_2();
}}else{
Global_20502=6;
func_2();
}
if(func_1()){
func_2();
}}}

int func_1(){
if(((Global_20500.f_1==1 || Global_20500.f_1==3) || Global_20500.f_1==0) || Global_20444==1){
Global_20487=1;
return 1;
}
return 0;
}


void func_2(){
func_3(0, 0);
func_3(1, 0);
func_3(2, 0);
func_3(3, 0);
func_3(4, 0);
MISC::CLEAR_BIT(&Global_8371, 22);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(int iParam0, int iParam1){
Global_4542555[iParam0]=iParam1;
}

int func_4(){
if(Global_8976==1 || Global_20500.f_1 < 7){
Global_20487=1;
return 1;
}
return 0;
}


void func_5(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20489, 1);
}}

int func_6(int iParam0, var uParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1))){
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2))){
return 0;
}}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}else{
return 1;
}}
return 0;
}


void func_7(){
if(Global_20488){
func_8(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
func_8(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
}else{
func_8(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
func_8(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_8(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}


void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam6));
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
func_9(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_9(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_9(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_9(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_9(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_9(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_10(){
int iVar0;
bool bVar1;
if(func_18()==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_18={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
fLocal_19=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
func_17();
func_16();
func_15();
fLocal_20=(360f - fLocal_19);
fLocal_23=(fLocal_23 - fLocal_20);
if(fLocal_23 < 0f){
fLocal_23=(fLocal_23 + 360f);
}
if(iLocal_27==0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(MISC::IS_BIT_SET(Global_8371, 30)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(fLocal_23));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(fLocal_24));
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
if(MISC::IS_BIT_SET(Global_8371, 22)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}
if(MISC::IS_BIT_SET(Global_8371, 29)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
}
if(MISC::IS_BIT_SET(Global_8372, 1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_26);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(fLocal_19==fLocal_19){
}
func_14(Global_20481, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_18={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
fLocal_19=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
if(Global_4542577 > 21){
}
iVar0=0;
while (iVar0 < Global_4542577){
func_13(iVar0);
func_12(iVar0);
func_11(iVar0);
fLocal_20=(360f - fLocal_19);
fLocal_23=(fLocal_23 - fLocal_20);
if(fLocal_23 < 0f){
fLocal_23=(fLocal_23 + 360f);
}
if(iLocal_27==0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
bVar1=false;
switch (iVar0){
case 0:
if(MISC::IS_BIT_SET(Global_4542302, 5)){
bVar1=true;
}
break;
case 1:
if(MISC::IS_BIT_SET(Global_4542302, 6)){
bVar1=true;
}
break;
case 2:
if(MISC::IS_BIT_SET(Global_4542302, 7)){
bVar1=true;
}
break;
case 3:
if(MISC::IS_BIT_SET(Global_4542302, 8)){
bVar1=true;
}
break;
}
if(bVar1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(fLocal_23));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(floor(fLocal_24));
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
if(MISC::IS_BIT_SET(Global_8371, 22)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
}
if(MISC::IS_BIT_SET(Global_8371, 29)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_26);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542555[iVar0]);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(fLocal_19==fLocal_19){
}
func_14(Global_20481, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
iVar0++;
}}}


float func_11(int iParam0){
fLocal_21=(Global_4542491[iParam0 /*3*/] - Local_18.f_0);
fLocal_22=(cos(((3.14159f / 180f) * Local_18.f_0)) * (Global_4542491[iParam0 /*3*/].f_1 - Local_18.f_1));
fLocal_23=MISC::ATAN2(fLocal_21, fLocal_22);
if(fLocal_23 < 0f){
fLocal_23=(fLocal_23 + 360f);
}
return fLocal_23;
}


float func_12(int iParam0){
fLocal_25=sqrt(vdist2(Global_4542491[iParam0 /*3*/], Local_18));
fLocal_26=(Global_4542491[iParam0 /*3*/].f_2 - Local_18.f_2);
return fLocal_25;
}


float func_13(int iParam0){
fLocal_24=sqrt((((Global_4542491[iParam0 /*3*/] - Local_18.f_0) * (Global_4542491[iParam0 /*3*/] - Local_18.f_0)) + ((Global_4542491[iParam0 /*3*/].f_1 - Local_18.f_1) * (Global_4542491[iParam0 /*3*/].f_1 - Local_18.f_1))));
return fLocal_24;
}


void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam6));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


float func_15(){
fLocal_21=(Global_22951 - Local_18.f_0);
fLocal_22=(cos(((3.14159f / 180f) * Local_18.f_0)) * (Global_22951.f_1 - Local_18.f_1));
fLocal_23=MISC::ATAN2(fLocal_21, fLocal_22);
if(fLocal_23 < 0f){
fLocal_23=(fLocal_23 + 360f);
}
return fLocal_23;
}


float func_16(){
fLocal_25=sqrt(vdist2(Global_22951, Local_18));
fLocal_26=(Global_22951.f_2 - Local_18.f_2);
return fLocal_25;
}


float func_17(){
fLocal_24=sqrt((((Global_22951 - Local_18.f_0) * (Global_22951 - Local_18.f_0)) + ((Global_22951.f_1 - Local_18.f_1) * (Global_22951.f_1 - Local_18.f_1))));
return fLocal_24;
}

int func_18(){
if(Global_78689==1){
return 1;
}
return 0;
}