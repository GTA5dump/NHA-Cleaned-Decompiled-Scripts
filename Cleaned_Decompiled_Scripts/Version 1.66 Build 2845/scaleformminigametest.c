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
int iLocal_21=0;
int iLocal_22=0;
bool bLocal_23=0;
bool bLocal_24=0;
float fLocal_25=0f;
bool bLocal_26=0;
bool bLocal_27=0;
float fLocal_28=0f;
bool bLocal_29=0;
bool bLocal_30=0;
float fLocal_31=0f;
bool bLocal_32=0;
bool bLocal_33=0;
float fLocal_34=0f;
bool bLocal_35=0;
bool bLocal_36=0;
float fLocal_37=0f;
bool bLocal_38=0;
bool bLocal_39=0;
float fLocal_40=0f;
bool bLocal_41=0;
bool bLocal_42=0;
float fLocal_43=0f;
bool bLocal_44=0;
bool bLocal_45=0;
float fLocal_46=0f;
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
fLocal_14=0.001f;
iLocal_17=-1;
uLocal_20=HUD::ADD_BLIP_FOR_COORD(100f, 100f, 30f);
iLocal_22=1;
fLocal_25=0f;
fLocal_28=0f;
fLocal_31=0f;
fLocal_34=0f;
fLocal_37=0f;
fLocal_40=0f;
fLocal_43=0f;
fLocal_46=0f;
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(500);
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_2();
}
uLocal_18=GRAPHICS::REQUEST_SCALEFORM_MOVIE("p_bubblegum");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_18)){
wait(0);
}
while (true){
if(iLocal_21==1){
}
if(iLocal_22==1){
iLocal_22=0;
uLocal_19=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
if(CAM::DOES_CAM_EXIST(uLocal_19)){
CAM::SET_CAM_PARAMS(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
CAM::SET_CAM_NEAR_CLIP(uLocal_19, 0.01f);
CAM::SET_CAM_FAR_CLIP(uLocal_19, 0.02f);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}
HUD::SET_BLIP_SPRITE(uLocal_20, 66);
}
iLocal_21=1;
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
func_1(uLocal_18);
wait(0);
}}


void func_1(var uParam0){
if(Global_20362==0){
if(PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190)){
Global_20362=1;
settimera(0);
}}elseif(timera() > 50){
Global_20362=0;
}
if(Global_20362==0){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
bLocal_23=true;
fLocal_25=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 189)){
bLocal_23=true;
fLocal_25=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 189)){
bLocal_23=false;
fLocal_25=0f;
}
if(!bLocal_23==bLocal_24){
bLocal_24=bLocal_23;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_25);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
bLocal_26=true;
fLocal_28=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 190)){
bLocal_26=true;
fLocal_28=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 190)){
bLocal_26=false;
fLocal_28=0f;
}
if(!bLocal_26==bLocal_27){
bLocal_27=bLocal_26;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_28);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
bLocal_29=true;
fLocal_31=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 188)){
bLocal_29=true;
fLocal_31=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 188)){
bLocal_29=false;
fLocal_31=0f;
}
if(!bLocal_29==bLocal_30){
bLocal_30=bLocal_29;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_31);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 187)){
bLocal_32=true;
fLocal_34=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 187)){
bLocal_32=true;
fLocal_34=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 187)){
bLocal_32=false;
fLocal_34=0f;
}
if(!bLocal_32==bLocal_33){
bLocal_33=bLocal_32;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_34);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
bLocal_35=true;
fLocal_37=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 202)){
bLocal_35=true;
fLocal_37=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 202)){
bLocal_35=false;
fLocal_37=0f;
}
if(!bLocal_35==bLocal_36){
bLocal_36=bLocal_35;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_37);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 204)){
bLocal_38=true;
fLocal_40=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 204)){
bLocal_38=true;
fLocal_40=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 204)){
bLocal_38=false;
fLocal_40=0f;
}
if(!bLocal_38==bLocal_39){
bLocal_39=bLocal_38;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
bLocal_41=true;
fLocal_43=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 201)){
bLocal_41=true;
fLocal_43=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 201)){
bLocal_41=false;
fLocal_43=0f;
}
if(!bLocal_41==bLocal_42){
bLocal_42=bLocal_41;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_43);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 203)){
bLocal_44=true;
fLocal_46=1f;
}
if(PAD::IS_CONTROL_PRESSED(2, 203)){
bLocal_44=true;
fLocal_46=1f;
}
if(!PAD::IS_CONTROL_PRESSED(2, 203)){
bLocal_44=false;
fLocal_46=0f;
}
if(!bLocal_44==bLocal_45){
bLocal_45=bLocal_44;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_46);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_2(){
if(CAM::DOES_CAM_EXIST(uLocal_19)){
CAM::DESTROY_CAM(uLocal_19, 0);
}
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
func_3(0);
MISC::SET_GAME_PAUSED(0);
HUD::CLEAR_HELP(1);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_18);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(bool bParam0){
if(bParam0){
func_10();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_9(0)){
func_4(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_4(int iParam0){
if(func_8()){
return;
}
if(Global_20584){
if(func_7()){
func_6(1, 1);
}else{
func_6(0, 0);
}}
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
Global_21725=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 30);
}else{
MISC::CLEAR_BIT(&Global_8253, 30);
}
if(!func_5()){
Global_20383.f_1=3;
}}

int func_5(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_6(bool bParam0, bool bParam1){
if(bParam0){
if(func_9(0)){
Global_20584=1;
if(bParam1){
MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
}
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==1){
Global_20584=0;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}}


bool func_7(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_8(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_9(int iParam0){
if(iParam0==1){
if(Global_20383.f_1 > 3){
if(MISC::IS_BIT_SET(Global_8253, 14)){
return 1;
}else{
return 0;
}}else{
return 0;
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
if(Global_20383.f_1 > 3){
return 1;
}
return 0;
}


void func_10(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}