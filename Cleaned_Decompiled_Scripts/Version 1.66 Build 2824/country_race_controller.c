//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
int iLocal_0=0;
var uLocal_1=0;
var uLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
int iLocal_12=0;
var uLocal_13=0;
var uLocal_14=0;
float fLocal_15=0f;
var uLocal_16=0;
var uLocal_17=0;
int iLocal_18=0;
char* sLocal_19=NULL;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
struct<3> Local_60={
0, 0, 0 
};
float fLocal_61=0f;
struct<3> Local_62={
0, 0, 0 
};
struct<3> Local_63={
0, 0, 0 
};
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=6;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=9;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=9;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
int iLocal_148=0;
int iLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
int iLocal_152=0;
int iLocal_153=0;
float fLocal_154=0f;
#endregion

void __EntryFunction__(){
iLocal_0=3;
iLocal_3=1;
iLocal_4=134;
iLocal_5=134;
iLocal_6=1;
iLocal_7=1;
iLocal_8=1;
iLocal_9=134;
iLocal_10=1;
iLocal_11=12;
iLocal_12=12;
fLocal_15=0.001f;
iLocal_18=-1;
sLocal_19="NULL";
fLocal_24=80f;
fLocal_25=140f;
fLocal_26=180f;
fLocal_29=0f;
fLocal_33=-0.0375f;
fLocal_34=0.17f;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
Local_60={
-1124.392f, -514.7001f, 33.21493f 
};
fLocal_61=200f;
Local_62={
2490f, 3777f, 2402.879f 
};
Local_63={
-2052f, 3237f, 1450.078f 
};
iLocal_153=1;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18)){
func_62(1);
}
iLocal_149=2;
if(func_61(PLAYER::PLAYER_PED_ID())){
if(vdist2(func_60(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 40000f){
if(CAM::IS_SCREEN_FADED_IN()){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
Global_113648.f_25075.f_8=1;
}}}}
MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(1);
while (true){
if(!func_61(PLAYER::PLAYER_PED_ID())){
return;
}
func_56();
switch (iLocal_148){
case 0:
func_23();
break;
case 1:
func_13();
break;
case 2:
func_11();
break;
case 3:
func_1();
break;
}
wait(0);
}}


void func_1(){
if(func_10()){
func_8();
func_6(Global_113648.f_25075);
}
Global_113648.f_25075.f_8=1;
func_5(65, 0, 0);
func_4();
func_2();
iLocal_148=0;
}

int func_2(){
if(func_3(0)){
return 0;
}
if(Global_100720.f_8){
if(Global_100720.f_10 > 0){
return 0;
}}elseif(Global_100720.f_10 > 1){
return 0;
}
Global_100720.f_10++;
return 1;
}

int func_3(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_4(){
Global_113645=0;
}


void func_5(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(!bParam2){
iVar1=MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 15);
if(iVar1==bParam1){
return;
}}
if(bParam1 !=MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 18);
if(Global_32540==1){
Global_32541=1;
}
Global_32540=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 0);
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 0);
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32543[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Global_32543[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}}}


void func_6(int iParam0){
func_7(iParam0);
switch (iParam0){
case 0:
Global_113648.f_25075=1;
Global_113648.f_25075.f_3=1;
break;
case 1:
Global_113648.f_25075=2;
Global_113648.f_25075.f_4=1;
break;
case 2:
Global_113648.f_25075=3;
Global_113648.f_25075.f_5=1;
break;
case 3:
Global_113648.f_25075=4;
Global_113648.f_25075.f_6=1;
break;
case 4:
Global_113648.f_25075=0;
Global_113648.f_25075.f_7=1;
break;
}}


void func_7(int iParam0){
int iVar0;
iVar0=0;
STATS::STAT_GET_INT(joaat("num_stock_races_completed"), &iVar0, -1);
if(iVar0 < iParam0 + 1){
STATS::STAT_SET_INT(joaat("num_stock_races_completed"), iParam0 + 1, 1);
}}


void func_8(){
char cVar0[16];
HUD::CLEAR_HELP(1);
StringCopy(&cVar0, "CRACEWIN", 16);
StringIntConCat(&cVar0, Global_113648.f_25075 + 1, 16);
func_9(&cVar0, -1);
}


void func_9(char[4] cParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


bool func_10(){
return Global_113645;
}


void func_11(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("country_race"))==0){
func_12(&Global_113646);
Global_113646=-1;
iLocal_149=2;
iLocal_148=3;
}}


void func_12(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43219){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
}


void func_13(){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
func_22();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
SCRIPT::REQUEST_SCRIPT("Country_Race");
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
MISC::CLEAR_AREA_OF_PROJECTILES(func_60(), 20f, 0);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("country_race"))==0){
if(SCRIPT::HAS_SCRIPT_LOADED("Country_Race")){
if(iLocal_149==2){
iLocal_149=func_17(&Global_113646, 2, 9, 0, 0);
}elseif(iLocal_149==1){
func_15(&uLocal_151, 0);
func_14(&uLocal_150, 0);
start_new_script("Country_Race", 5050);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Country_Race");
iLocal_148=2;
}elseif(iLocal_149==0){
func_62(0);
}}}}


void func_14(var uParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0)){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
}
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -8f, 1);
if(ENTITY::IS_ENTITY_ATTACHED(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}}
if(bParam1){
VEHICLE::DELETE_VEHICLE(uParam0);
}else{
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
}}}


void func_15(var uParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!PED::IS_PED_INJURED(*uParam0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*uParam0)){
if((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*uParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
}
if(!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0)){
ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
}
if(PED::IS_PED_GROUP_MEMBER(*uParam0, func_16())){
PED::REMOVE_PED_FROM_GROUP(*uParam0);
}
if(!bParam1){
PED::SET_PED_KEEP_TASK(*uParam0, 1);
}}
if(bParam1){
PED::DELETE_PED(uParam0);
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
}}}


var func__16(){
return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_17(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98159.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_21(0)){
return 0;
}
Global_43221++;
*uParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23131.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43257=iParam2;
Global_43219=*uParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43218 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*uParam0){
return 2;
}
iVar0++;
}}elseif(Global_43219==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!func_19(iParam2)){
return 0;
}
if(Global_43218==8){
return 0;
}
Global_43221++;
*uParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218++;
if(iParam4 !=0){
func_18(uParam0, iParam4);
}}
return 2;
}


void func_18(var uParam0, int iParam1){
int iVar0;
if(Global_43218==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*uParam0){
Global_43224[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}


bool func_19(int iParam0){
return func_20(iParam0, Global_43257);
}

int func_20(int iParam0, int iParam1){
if(iParam1==15){
return 1;
}
if(iParam0==15){
return 0;
}
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
break;
}
return 1;
break;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
break;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
break;
}
break;
case 4:
if(iParam1==17){
return 1;
}
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5){
return 1;
}
break;
case 7:
if(iParam1==6){
return 1;
}
break;
case 9:
if(iParam1==5){
return 1;
}
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
break;
}
break;
case 11:
if(iParam1==5){
return 1;
}
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
break;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
break;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
break;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
break;
}
break;
}
return 0;
}

int func_21(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_19(iParam0)){
return 0;
}
return 1;
}


void func_22(){
Global_23131.f_6=1;
}


void func_23(){
if(func_43()){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_60(), 5f, 5f, 5f, 1, 1, 0)){
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PED::SET_IK_TARGET(uLocal_151, 1, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, 150, 400);
if(func_41()){
if(func_38()){
func_35();
func_33();
func_32();
if(((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_31(1)) && !func_30(0)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 51)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
HUD::CLEAR_HELP(1);
MISC::CLEAR_AREA_OF_PROJECTILES(func_60(), 20f, 0);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
HUD::HIDE_HELP_TEXT_THIS_FRAME();
iLocal_148=1;
}}}else{
func_28();
func_27();
}}else{
func_24();
func_27();
}}else{
func_24();
func_27();
}}else{
func_24();
func_27();
}}


void func_24(){
struct<4> Var0;
Var0={
func_26() 
};
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && (func_25(&Var0) || func_25("CRACECAR"))){
HUD::CLEAR_HELP(1);
}}


bool func_25(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


struct<4> func_26(){
struct<4> Var0;
StringCopy(&Var0, "CRACEHELP", 16);
StringIntConCat(&Var0, Global_113648.f_25075 + 1, 16);
return Var0;
}


void func_27(){
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(0);
}
iLocal_153=1;
}


void func_28(){
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3)){
if(!func_25("CRACECAR") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
HUD::CLEAR_HELP(1);
func_29("CRACECAR", 1, 1, -1);
}}}


void func_29(char* sParam0, int iParam1, int iParam2, int iParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, iParam1, iParam2, iParam3);
}

int func_30(int iParam0){
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


bool func_31(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}


void func_32(){
struct<4> Var0;
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3)){
Var0={
func_26() 
};
if(!func_25(&Var0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
HUD::CLEAR_HELP(1);
func_29(&Var0, 1, 1, -1);
}}}


void func_33(){
if(((((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() !=3 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() !=4) && !CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && func_34(uLocal_151)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f){
if(iLocal_153){
if(!CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_151, 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
iLocal_153=0;
}}}else{
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(0);
}
iLocal_153=1;
}}

int func_34(var uParam0){
if(func_61(uParam0)){
if(!PED::IS_PED_INJURED(uParam0)){
return 1;
}}
return 0;
}


void func_35(){
if(MISC::GET_GAME_TIMER() > iLocal_152 + 5000){
func_36(uLocal_151, "PRERACE_CHAT", 11);
iLocal_152=MISC::GET_GAME_TIMER();
}}


void func_36(var uParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_37(iParam2), 1);
}

int func_37(int iParam0){
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

int func_38(){
int iVar0;
int iVar1;
int iVar2[91];
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(func_40(PLAYER::GET_PLAYERS_LAST_VEHICLE())){
iVar0=ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
if(func_39(iVar0)){
return 0;
}
if(((((((iVar0==joaat("police4") || iVar0==joaat("policeold1")) || iVar0==joaat("policeold2")) || iVar0==joaat("fbi")) || iVar0==joaat("fbi2")) || iVar0==joaat("lguard")) || iVar0==joaat("sheriff")) || iVar0==joaat("sheriff2")){
return 0;
}
if(((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
return 0;
}
iVar2[0]=joaat("ambulance");
iVar2[1]=joaat("benson");
iVar2[2]=joaat("biff");
iVar2[3]=joaat("bus");
iVar2[4]=joaat("firetruk");
iVar2[5]=joaat("forklift");
iVar2[6]=joaat("mule");
iVar2[7]=joaat("mule2");
iVar2[8]=joaat("packer");
iVar2[9]=joaat("phantom");
iVar2[10]=joaat("mower");
iVar2[11]=joaat("stockade");
iVar2[12]=joaat("squalo");
iVar2[13]=joaat("maverick");
iVar2[14]=joaat("polmav");
iVar2[15]=joaat("airtug");
iVar2[16]=joaat("pranger");
iVar2[17]=joaat("annihilator");
iVar2[18]=joaat("dinghy");
iVar2[19]=joaat("police");
iVar2[20]=joaat("ripley");
iVar2[21]=joaat("trash");
iVar2[22]=joaat("burrito");
iVar2[23]=joaat("pony");
iVar2[24]=joaat("speedo");
iVar2[25]=joaat("marquis");
iVar2[26]=joaat("sanchez");
iVar2[27]=joaat("airtug");
iVar2[28]=joaat("taco");
iVar2[29]=joaat("barracks");
iVar2[30]=joaat("romero");
iVar2[31]=joaat("blazer");
iVar2[32]=joaat("blazer2");
iVar2[33]=joaat("bodhi2");
iVar2[34]=joaat("boxville2");
iVar2[35]=joaat("bulldozer");
iVar2[36]=joaat("caddy");
iVar2[37]=joaat("caddy2");
iVar2[38]=joaat("camper");
iVar2[39]=joaat("tiptruck");
iVar2[40]=joaat("tourbus");
iVar2[41]=joaat("towtruck");
iVar2[42]=joaat("towtruck2");
iVar2[43]=joaat("tractor");
iVar2[44]=joaat("tractor2");
iVar2[45]=joaat("utillitruck");
iVar2[46]=joaat("utillitruck2");
iVar2[47]=joaat("utillitruck3");
iVar2[48]=joaat("ratloader");
iVar2[49]=joaat("dloader");
iVar2[50]=joaat("docktug");
iVar2[51]=joaat("dump");
iVar2[52]=joaat("gburrito");
iVar2[53]=joaat("handler");
iVar2[54]=joaat("hauler");
iVar2[55]=joaat("journey");
iVar2[56]=joaat("rentalbus");
iVar2[57]=joaat("mixer");
iVar2[58]=joaat("rhino");
iVar2[59]=joaat("cutter");
iVar2[60]=joaat("pounder");
iVar2[61]=joaat("tiptruck2");
iVar2[62]=joaat("mixer2");
iVar2[63]=joaat("rubble");
iVar2[64]=joaat("scrap");
iVar2[65]=joaat("armytanker");
iVar2[66]=joaat("barracks2");
iVar2[67]=joaat("airbus");
iVar2[68]=joaat("coach");
iVar2[69]=joaat("pbus");
iVar2[70]=joaat("riot");
iVar2[71]=joaat("boxville3");
iVar2[72]=joaat("stockade3");
iVar2[73]=joaat("flatbed");
iVar2[74]=joaat("boxville");
iVar2[75]=joaat("burrito2");
iVar2[76]=joaat("burrito3");
iVar2[77]=joaat("burrito4");
iVar2[78]=joaat("rumpo");
iVar2[79]=joaat("speedo2");
iVar2[80]=joaat("blimp");
iVar2[81]=joaat("blimp2");
iVar2[82]=joaat("submersible");
iVar2[83]=joaat("submersible2");
iVar2[84]=joaat("blazer3");
iVar2[85]=joaat("pony2");
iVar2[86]=joaat("rumpo2");
iVar2[87]=joaat("taxi");
iVar2[88]=MISC::GET_HASH_KEY("RATLOADER2");
iVar2[89]=MISC::GET_HASH_KEY("SLAMVAN");
iVar2[90]=0;
iVar1=0;
while (iVar1 < iVar2){
if(iVar0==iVar2[iVar1]){
return 0;
}
iVar1++;
}
return 1;
}}
return 0;
}

int func_39(int iParam0){
switch (iParam0){
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("polmav"):
case joaat("policeb"):
case joaat("policet"):
case joaat("policeold2"):
case joaat("policeold1"):
case joaat("sheriff"):
case joaat("sheriff2"):
return 1;
break;
}
return 0;
}

int func_40(var uParam0){
if(func_61(uParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(uParam0)){
return 1;
}}}
return 0;
}

int func_41(){
var uVar0;
if(func_42()){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop")) !=0){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(uVar0, 0, 1)==0){
return 1;
}}else{
return 0;
}
return 1;
}

int func_42(){
var uVar0;
if(Global_32315){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0))){
return 1;
}}}}
return 0;
}

int func_43(){
if((!Global_113648.f_25075.f_9 && !Global_113648.f_25075.f_8) && vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_60()) < 84100f){
Global_113648.f_25075.f_9=func_54();
func_51();
if(!Global_113648.f_25075.f_9){
if(func_61(uLocal_151) && func_61(uLocal_150)){
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) <=0){
HUD::REQUEST_ADDITIONAL_TEXT("C_RACE", 3);
}
return 1;
}else{
func_44(0);
}}}else{
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_60()) > 90000f){
func_15(&uLocal_151, 1);
func_14(&uLocal_150, 1);
if(Global_113648.f_25075.f_9){
Global_113648.f_25075.f_9=0;
}
if(Global_113648.f_25075.f_8){
Global_113648.f_25075.f_8=0;
}}
if(Global_113648.f_25075.f_9){
func_15(&uLocal_151, 0);
func_14(&uLocal_150, 0);
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_60(), 5f, 5f, 5f, 1, 1, 0)){
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3)){
if(!func_25("CRACEDISRUPT") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
HUD::CLEAR_HELP(1);
func_29("CRACEDISRUPT", 1, 1, -1);
}}}elseif(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && func_25("CRACEDISRUPT")){
HUD::CLEAR_HELP(1);
}}elseif(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3) && func_25("CRACEDISRUPT")){
HUD::CLEAR_HELP(1);
}}
return 0;
}


void func_44(bool bParam0){
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_150) && !ENTITY::DOES_ENTITY_EXIST(uLocal_151)){
STREAMING::REQUEST_MODEL(func_50());
STREAMING::REQUEST_MODEL(joaat("a_m_y_motox_02"));
if(bParam0){
while (!STREAMING::HAS_MODEL_LOADED(func_50())){
wait(0);
}
while (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_motox_02"))){
wait(0);
}}
if(STREAMING::HAS_MODEL_LOADED(func_50()) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_motox_02"))){
uLocal_150=VEHICLE::CREATE_VEHICLE(func_50(), func_49(), func_48(), 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_150, 1084227584);
if(Global_113648.f_25075==4){
VEHICLE::SET_VEHICLE_LIVERY(uLocal_150, 0);
VEHICLE::SET_VEHICLE_COLOURS(uLocal_150, 44, 83);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_150, 111, 111);
}
VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_150, 3);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(uLocal_150, 0, 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(uLocal_150, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_50());
uLocal_151=PED::CREATE_PED(26, joaat("a_m_y_motox_02"), func_47(), func_46(), 1, 1);
func_45(uLocal_151);
AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_151, "A_M_Y_RACER_01_WHITE_MINI_01");
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_151, "WORLD_HUMAN_STAND_IMPATIENT", -1, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_motox_02"));
}}}


void func_45(var uParam0){
switch (Global_113648.f_25075){
case 0:
PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
break;
case 1:
PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 7, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 4, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 1, 0);
break;
case 2:
PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 5, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 2, 0);
break;
case 3:
PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 3, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
break;
case 4:
PED::SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 6, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 6, 0, 3, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0, 10, 0, 0, 0);
break;
}}


float func_46(){
return 294.2507f;
}


Vector3 func__47(){
return 1965.248f, 3114.886f, 46.1663f;
}


float func_48(){
return 194.8257f;
}


Vector3 func__49(){
return 1964.038f, 3114.635f, 46.1319f;
}

int func_50(){
switch (Global_113648.f_25075){
case 0:
return joaat("stalion2");
break;
case 1:
return joaat("gauntlet2");
break;
case 2:
return joaat("dominator2");
break;
case 3:
return joaat("buffalo3");
break;
case 4:
return joaat("marshall");
break;
}
return joaat("buffalo3");
}


void func_51(){
if(func_61(uLocal_151)){
if((!PED::IS_PED_FLEEING(uLocal_151) && !PED::IS_PED_IN_COMBAT(uLocal_151, 0)) && !PED::IS_PED_RAGDOLL(uLocal_151)){
if(!func_53(uLocal_151, joaat("script_task_start_scenario_in_place"), 1)){
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_151, "WORLD_HUMAN_STAND_IMPATIENT", -1, 1);
}
if(func_52(uLocal_150) || Global_113648.f_25075.f_9){
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_151);
TASK::TASK_COMBAT_PED(uLocal_151, PLAYER::PLAYER_PED_ID(), 0, 16);
}
fLocal_154=ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
}elseif(PED::IS_PED_RAGDOLL(uLocal_151)){
if(!func_53(uLocal_151, joaat("script_task_combat"), 1)){
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_151);
TASK::TASK_COMBAT_PED(uLocal_151, PLAYER::PLAYER_PED_ID(), 0, 16);
}}}}

int func_52(var uParam0){
var uVar0;
float fVar1;
uVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_61(uParam0)){
if((func_61(uVar0) && fLocal_154 !=0f) && fLocal_154 >=9f){
fVar1=ENTITY::GET_ENTITY_SPEED(uVar0);
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0, uVar0) && fVar1 <=(fLocal_154 * 0.5f)){
return 1;
}}
if(ENTITY::GET_ENTITY_HEALTH(uParam0) + 100 < ENTITY::GET_ENTITY_MAX_HEALTH(uParam0)){
return 1;
}}
return 0;
}

int func_53(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
if(iVar0==1 || iVar0==0){
return 1;
}elseif(!bParam2){
if(iVar0==2 || iVar0==3){
return 1;
}}
return 0;
}

int func_54(){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_151)){
if(ENTITY::IS_ENTITY_DEAD(uLocal_151, 0)){
return 1;
}elseif(PED::IS_PED_FLEEING(uLocal_151)){
return 1;
}elseif(PED::IS_PED_IN_COMBAT(uLocal_151, 0)){
return 1;
}elseif(PED::IS_PED_RAGDOLL(uLocal_151)){
return 1;
}elseif(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
return 1;
}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_150)){
if(ENTITY::IS_ENTITY_DEAD(uLocal_150, 0)){
return 1;
}else{
if(func_55(uLocal_150, func_49(), 1) > 2f){
return 1;
}
if(WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), uLocal_150, 0, -1)){
return 1;
}}}
return 0;
}


float func_55(var uParam0, struct<3> Param1, int iParam2){
struct<3> Var0;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}


void func_56(){
if(!func_59(0, 19)){
Global_113648.f_25075.f_8=1;
func_62(0);
}
if(func_21(9) && iLocal_148==0){
Global_113648.f_25075.f_8=1;
func_62(0);
}
if(func_58(13)){
Global_113648.f_25075.f_8=1;
func_62(0);
}
if(!func_57()){
Global_113648.f_25075.f_8=1;
func_62(0);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("country_race"))==0){
if(vdist2(func_60(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 160000f){
func_62(0);
}}}

int func_57(){
var uVar0;
if(Global_152523==2){
return 1;
}elseif(Global_152523==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
MISC::SET_BIT(&uVar0, 2);
MISC::SET_BIT(&uVar0, 4);
MISC::SET_BIT(&uVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar0, 0);
STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}

int func_58(int iParam0){
int iVar0;
if(iParam0==94 || iParam0==-1){
return 0;
}
if(Global_94666[iParam0 /*2*/]){
return 1;
}
iVar0=0;
while (iVar0 < Global_91433){
if(Global_91433[iVar0 /*5*/] !=-1){
if(Global_78828.f_109[Global_91433[iVar0 /*5*/] /*4*/]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_59(int iParam0, int iParam1){
int iVar0;
if(iParam0==11 || iParam0==-1){
return 0;
}
if(iParam1 < 0 || iParam1 >=32){
return 0;
}
iVar0=MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return iVar0;
}


Vector3 func__60(){
return 1967.042f, 3116.005f, 45.8901f;
}

int func_61(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}}
return 0;
}


void func_62(bool bParam0){
struct<4> Var0;
func_12(&Global_113646);
if(func_61(uLocal_151)){
if(func_53(uLocal_151, joaat("script_task_start_scenario_at_position"), 1) || func_53(uLocal_151, joaat("script_task_start_scenario_in_place"), 1)){
TASK::TASK_WANDER_STANDARD(uLocal_151, 1193033728, 0);
}}
func_15(&uLocal_151, bParam0);
func_14(&uLocal_150, bParam0);
if(bParam0){
MISC::CLEAR_AREA(func_60(), 100f, 1, 0, 0, 0);
}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(0);
}
iLocal_153=1;
Var0={
func_26() 
};
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("C_RACE", 3)){
if((func_25("CRACEDISRUPT") || func_25("CRACECAR")) || func_25(&Var0)){
HUD::CLEAR_HELP(1);
}}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Country_Race");
SCRIPT::TERMINATE_THIS_THREAD();
}