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
int iLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
char* sLocal_21=NULL;
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
int iLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
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
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
float fLocal_63=0f;
var uLocal_64=0;
float fLocal_65=0f;
float fLocal_66=0f;
float fLocal_67=0f;
float fLocal_68=0f;
float fLocal_69=0f;
float fLocal_70=0f;
int iLocal_71=0;
int iLocal_72=0;
var uLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
struct<2> Local_77={
0, 0 
};
var uLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
struct<3> Local_82={
0, 0, 0 
};
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
int iLocal_89=0;
int iLocal_90=0;
char cLocal_91[16]="";
var uLocal_92=0;
var uLocal_93=0;
int iLocal_94=0;
int iLocal_95=0;
int iLocal_96=0;
int iLocal_97=0;
int iLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
var uLocal_102=0;
int iLocal_103=0;
int iLocal_104=0;
int iLocal_105=0;
int iLocal_106=0;
var uLocal_107=0;
bool bLocal_108=0;
int iLocal_109=0;
int iLocal_110=0;
int iLocal_111=0;
int iLocal_112=0;
int iLocal_113=0;
int iLocal_114=0;
struct<3> Local_115={
0, 0, 0 
};
int iLocal_116=0;
int iLocal_117=0;
int iLocal_118=0;
#endregion

void __EntryFunction__(){
var uVar0;
struct<13> Var1;
int iVar2;
float fVar3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
int iVar8;
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
sLocal_21="NULL";
fLocal_24=80f;
fLocal_25=140f;
fLocal_26=180f;
fLocal_29=0f;
fLocal_33=-0.0375f;
fLocal_34=0.17f;
iLocal_37=3;
iLocal_41=1;
iLocal_42=65;
iLocal_43=49;
iLocal_44=64;
fLocal_63=((0.05f + 0.275f) - 0.01f);
fLocal_65=0.73f;
fLocal_66=0.55f;
fLocal_67=0.73f;
fLocal_68=0.45f;
fLocal_69=0f;
fLocal_70=0f;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
Global_20581=145;
MISC::CLEAR_BIT(&Global_8254, 8);
MISC::CLEAR_BIT(&Global_8253, 14);
MISC::CLEAR_BIT(&Global_4542297, 3);
MISC::CLEAR_BIT(&Global_8254, 10);
MISC::CLEAR_BIT(&Global_8253, 17);
MISC::CLEAR_BIT(&Global_8253, 9);
MISC::CLEAR_BIT(&Global_8253, 26);
MISC::CLEAR_BIT(&Global_8253, 23);
MISC::CLEAR_BIT(&Global_8254, 24);
MISC::CLEAR_BIT(&Global_8254, 25);
MISC::CLEAR_BIT(&Global_8254, 27);
MISC::CLEAR_BIT(&Global_8254, 26);
MISC::CLEAR_BIT(&Global_8253, 30);
Global_2803654=0;
iLocal_116=0;
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
Global_20349=0;
iLocal_74=0;
Global_20327=0;
Global_20367=0;
Global_20368=0;
func_122();
Global_20314={
Global_20346 
};
Global_20387=4;
Global_20388=0;
Global_8858=1;
Global_20363=Global_20387;
if(Global_20365==0){
Global_20366=0;
if(Global_78558){
if(func_121()){
Global_20364=GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
}else{
Global_20364=GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
}
iLocal_85=1;
if(iLocal_85==1){
}}elseif(Global_20326){
Global_20371=1;
Global_20364=GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
}else{
Global_20364=GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(Global_113648.f_14053[Global_20383 /*20*/]));
}
settimera(0);
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364) && Global_20366==0){
wait(0);
if(timera() > 20000){
Global_20366=1;
}
if(MISC::IS_PC_VERSION()){
if(DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched")){
if(timera() > 2000){
Global_20366=1;
}}}
if(Global_20382==1){
func_120();
}}
if(Global_20366==1){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
func_119(Global_20364, "SHUTDOWN_MOVIE");
}
wait(0);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20364);
Global_20324=0;
Global_20365=0;
Global_20582=0;
if(Global_113648.f_14053.f_84==1){
Global_113648.f_14053.f_84=0;
HUD::CLEAR_FLOATING_HELP(0, 1);
}
Global_20327=1;
Global_20383.f_1=3;
func_118();
Global_20371=0;
MOBILE::DESTROY_MOBILE_PHONE();
MISC::CLEAR_BIT(&Global_8253, 9);
MISC::CLEAR_BIT(&Global_8253, 27);
MISC::CLEAR_BIT(&Global_8253, 30);
MISC::CLEAR_BIT(&Global_8254, 5);
MISC::CLEAR_BIT(&Global_8254, 21);
MISC::CLEAR_BIT(&Global_8255, 2);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}
Global_20584=0;
Global_22785=0;
Global_22784=0;
Global_21738=0;
func_116();
func_114();
Global_4542576=0;
SCRIPT::TERMINATE_THIS_THREAD();
}
Global_20307=0.1f;
Global_20308=0.38f;
Global_20309=0.195f;
Global_20310=0.05f;
if((MISC::IS_XBOX360_VERSION() || func_113()) || MISC::IS_PC_VERSION()){
HUD::GET_HUD_COLOUR(18, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
}else{
if(!MISC::IS_JAPANESE_VERSION()){
HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
HUD::GET_HUD_COLOUR(126, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
}
if(MISC::IS_JAPANESE_VERSION()){
HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
HUD::GET_HUD_COLOUR(126, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
func_112(Global_20364, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
}}
if(Global_20366==0){
}
func_111();
if(Global_78558){
StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
}
Global_20365=1;
}
Global_8256=99;
func_110();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iLocal_96=ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
}
if(HUD::IS_RADAR_HIDDEN()){
Global_22739=1;
}else{
Global_22739=0;
}
func_112(Global_20364, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
Global_20325=1;
if(Global_78558){
Global_20586=0;
if(func_121()){
if(Global_1836500==1){
Global_4542573=4;
}else{
Global_4542573=2;
}}else{
Global_4542573=func_107(2030, -1, 0);
}
if(Global_4542573 < 1 || Global_4542573 > 7){
Global_4542573=1;
}
func_112(Global_20364, "SET_THEME", to_float(Global_4542573), -1082130432, -1082130432, -1082130432, -1082130432);
func_106();
if(func_121()){
if(Global_1836500==1){
Global_4542574=16;
}else{
Global_4542574=9;
}}else{
Global_4542574=func_107(2029, -1, 0);
}
if(Global_4542574==0){
Var1={
func_105(PLAYER::PLAYER_ID()) 
};
iVar2=0;
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)==0){
}
if(Global_4542577==1){
}
if((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4542577==0){
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0)){
}else{
iVar2=1;
}
if(iVar2==0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_BACKGROUND_CREW_IMAGE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
func_112(Global_20364, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
}}else{
func_112(Global_20364, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
}}else{
func_112(Global_20364, "SET_BACKGROUND_IMAGE", to_float(Global_4542574), -1082130432, -1082130432, -1082130432, -1082130432);
}}else{
if(Global_20326){
Global_20586=0;
}elseif(Global_113648.f_14053.f_88==1 || Global_113648.f_14053.f_89==1){
Global_20586=0;
}else{
Global_20586=0;
}
func_112(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_9057==0){
func_112(Global_20364, "SET_BACKGROUND_IMAGE", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
}else{
MOBILE::SET_MOBILE_PHONE_SCALE(575f);
}
func_106();
}
iLocal_86=func_104();
if(Global_20326==0){
func_92();
}
Global_20361=0;
Global_20585=0;
MISC::CLEAR_BIT(&Global_8253, 9);
Global_2694521=0;
if(func_87(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE()){
Global_2694521=1;
}
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_85();
func_84();
func_83(1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_20372, 1);
settimerb(0);
while (Global_20383.f_1 < 6 && Global_20366==0){
wait(0);
if(timerb() > 10000){
Global_20366=1;
}
if(Global_20383.f_1 < 4){
Global_20366=1;
}}
if(Global_20383.f_1==5 || Global_20383.f_1==6){
if(func_82(14)){
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
}else{
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
}
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
func_112(Global_20364, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}else{
func_112(Global_20364, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}
if(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20586==0){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(Global_78558){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
if(Global_20585==1){
if(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
}}elseif(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8253, 17);
}
func_80();
}
Global_20369=1;
func_79();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_102=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_97=MISC::GET_GAME_TIMER();
}
if(Global_20582==1){
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(Global_113648.f_14053.f_84==0){
Global_113648.f_14053.f_84=1;
if(Global_20328==0){
fVar3=0.75f;
fVar4=0.8f;
}else{
fVar3=0.65f;
fVar4=0.77f;
}
if(fVar3==fVar4){
}
func_78("CELL_7052", 10000);
}}}
if(Global_78558==0){
iLocal_18=MISC::GET_GAME_TIMER() + 375;
}
if(func_77()){
iLocal_79=1;
}else{
iLocal_79=0;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_80=1;
if(func_77()){
func_76();
}}else{
iLocal_80=0;
}}
if(MISC::IS_PC_VERSION()){
if(Global_78558==0){
iLocal_99=MISC::GET_GAME_TIMER();
iLocal_101=0;
}}
MISC::CLEAR_BIT(&Global_8255, 9);
while (true){
wait(0);
if(MISC::IS_BIT_SET(Global_4542297, 24)){
if(!Global_20585){
if(Global_20383.f_1==6 || Global_20383.f_1 > 6){
MISC::CLEAR_BIT(&Global_4542297, 24);
func_85();
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_83(1);
if(Global_20383.f_1==6){
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}}}
if(func_75()){
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
}
if(Global_78558==0){
if(iLocal_76){
if(Global_20383.f_1==6 || Global_20383.f_1==7){
iLocal_76=0;
}}
if(Global_20383.f_1 > 4){
if((MISC::IS_BIT_SET(Global_8253, 14) && Global_4542576==0) && Global_20323==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(func_74()){
MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
if(Global_20329[Global_20328 /*3*/].f_1 !=Local_77.f_1){
func_72();
}
}
else{
MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
if(Global_20336[Global_20328 /*3*/].f_1 !=Local_77.f_1){
if(!func_75()){
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1){
func_70();
}}
}
if(iLocal_80==0){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_80=1;
func_70();
func_76();
}
}
elseif(!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_80=0;
func_72();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
if(Global_21725 !=2){
func_69();
}}
}
if(iLocal_79==0){
if(func_77()){
iLocal_79=1;
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
func_76();
}
func_72();
}
}
else{
if(PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())){
if(Global_20383.f_1==10 || Global_20383.f_1==9){
PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
}}
if(func_77()==0){
iLocal_79=0;
func_70();
}
}}}}}
if(Global_2694521==1){
if(!func_87(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera"))==0){
if(Global_20383.f_1 > 3){
Global_20368=1;
func_68();
func_65(0);
Global_2694521=0;
}}}}
if(Global_20587==0){
if((Global_43257 !=15 || Global_8258==1) || func_64(0)){
if(!Global_20585){
if(Global_20383.f_1==6){
Global_8259=42;
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_85();
func_84();
func_83(1);
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
Global_20587=1;
}}elseif((Global_43257==15 && func_64(0)==0) && Global_8258==0){
if(!Global_20585){
if(Global_20383.f_1==6){
Global_8259=255;
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_85();
func_84();
func_83(1);
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
Global_20587=0;
}
if(Global_20588==0){
if(MISC::IS_BIT_SET(Global_8254, 3)){
if(!Global_20585){
if(Global_20383.f_1==6){
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_85();
func_84();
func_83(1);
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
Global_20588=1;
}}elseif(!MISC::IS_BIT_SET(Global_8254, 3)){
if(!Global_20585){
if(Global_20383.f_1==6){
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_85();
func_84();
func_83(1);
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
Global_20588=0;
}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(Global_20311.f_1 !=Global_20329[Global_20328 /*3*/].f_1 || func_77()){
if(Global_20383.f_1 > 3){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify"))==0){
if(Global_78558){
if(Global_20383.f_1==9){
if(Global_21778==1 || MISC::IS_BIT_SET(Global_8254, 23)){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20352);
}}else{
PAD::SET_INPUT_EXCLUSIVE(0, Global_20352);
}
}
else{
PAD::SET_INPUT_EXCLUSIVE(0, Global_20352);
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack"))==0){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
if(MISC::IS_BIT_SET(Global_8253, 17)){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20354);
}}
if(!func_63() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack"))==0){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20355);
}}}
if(Global_20311.f_1==Global_20329[Global_20328 /*3*/].f_1){
}}
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(!Global_75693){
if(!func_75()){
PAD::SET_INPUT_EXCLUSIVE(0, 180);
PAD::SET_INPUT_EXCLUSIVE(0, 181);
PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
}
PAD::SET_INPUT_EXCLUSIVE(0, Global_20357);
if(!func_63()){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20358);
}
if(Global_20383.f_1 > 4){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20360);
}}}
if(func_62(2, Global_20351, 0)){
iLocal_94=1;
settimera(0);
}
if(iLocal_75==1){
if(!PAD::IS_CONTROL_PRESSED(2, Global_20352)){
Global_8257=1;
iLocal_75=0;
}
if(!Global_20383.f_1 > 3){
iLocal_75=0;
}}
if(iLocal_94){
if(PAD::IS_CONTROL_PRESSED(2, Global_20351)){
if(timera() > 5000){
Global_20383.f_1=3;
func_60();
}}else{
iLocal_94=0;
}}
Global_8861=MISC::GET_GAME_TIMER();
if(Global_20370){
func_79();
Global_20369=1;
Global_20370=0;
}
if(Global_20584==0){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
func_53();
func_52();
HUD::SET_TEXT_RENDER_ID(iLocal_83);
if(Global_20369==1){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
if(Global_20326){
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20364, Global_20303, Global_20304, Global_20305, Global_20306, 255, 255, 255, 255, 0);
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20364, Global_20303, Global_20304, Global_20305, Global_20306, 255, 255, 255, 255, 0);
}
func_110();
}
if(Global_20323==1){
if(Global_20383.f_1 > 3){
func_51();
}}elseif(Global_20383.f_1 > 3){
if(Global_4542576==1){
func_50();
}
if(MISC::IS_BIT_SET(Global_8254, 25)){
if(Global_78558==1){
func_49();
}}elseif(!MISC::IS_BIT_SET(Global_8254, 24)){
if(MISC::IS_BIT_SET(Global_8254, 26)){
if(func_62(2, Global_20350, 0)){
MISC::SET_BIT(&Global_8254, 25);
MISC::CLEAR_BIT(&Global_8254, 26);
MISC::CLEAR_BIT(&Global_8255, 2);
}}}elseif(Global_78558==1){
func_48();
}}}
if(iLocal_74){
if(Global_20383.f_1==6){
func_44();
}}elseif(!MISC::IS_BIT_SET(Global_8253, 23)){
if(Global_20383.f_1==5 || Global_20383.f_1==6){
if(Global_20584==0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1){
if(Global_20326==0){
if(MISC::IS_BIT_SET(Global_8253, 14)){
if(!Global_78558){
if(iLocal_75==0){
if(!func_82(14)){
func_43();
}
elseif(Global_2694521){
func_42();
}
}}elseif(MISC::IS_BIT_SET(Global_8255, 9)){
func_41();
}else{
func_24();
}}
}
if(MISC::IS_BIT_SET(Global_8253, 9)){
func_22(0, 0, 1, 1);
}
elseif(Global_22784==0){
if(!MISC::IS_BIT_SET(Global_4542297, 3)){
if(Global_78558){
func_21();
}
func_20();
func_18();
}
}
else{
if(Global_78558){
func_21();
}
if(!MISC::IS_BIT_SET(Global_4542297, 3)){
if(Global_22784==1){
if(MISC::IS_BIT_SET(Global_4542297, 1)){
if(MISC::IS_BIT_SET(Global_8253, 14)){
if(Global_78558){
func_22(7, 0, 1, 0);
}else{
Global_22785=0;
}
Global_22784=0;
MISC::CLEAR_BIT(&Global_4542297, 1);
}
}
elseif(MISC::IS_BIT_SET(Global_8253, 14)){
func_22(7, 0, 1, 0);
Global_22784=0;
}}else{
if(Global_22784==3){
func_22(1, 0, 1, 0);
Global_22784=0;
}
if(Global_22784==2){
func_22(14, 0, 1, 0);
Global_22784=0;
}
if(Global_22784==4){
func_22(23, 0, 1, 0);
Global_22784=0;
}}}
}}}}}elseif(SCRIPT::HAS_SCRIPT_LOADED(&(Global_8260[Global_20386 /*15*/].f_5))){
if(Global_20386==0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[Global_20386 /*15*/].f_9)==0){
Global_20381=start_new_script(&(Global_8260[Global_20386 /*15*/].f_5), 4000);
}}else{
iVar5=0;
if(Global_20386==23){
if(MISC::IS_BIT_SET(Global_4542297, 4)==0 && Global_1836102==0){
}}
if(Global_20386==2 || iVar5==1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[Global_20386 /*15*/].f_9)==0){
Global_20381=start_new_script(&(Global_8260[Global_20386 /*15*/].f_5), 4592);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[Global_20386 /*15*/].f_9)==0){
Global_20381=start_new_script(&(Global_8260[Global_20386 /*15*/].f_5), 2552);
}}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8260[Global_20386 /*15*/].f_5));
Global_8256=99;
MISC::CLEAR_BIT(&Global_8253, 23);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
}}
if(Global_20383.f_1==1){
func_9();
}
if(Global_20383.f_1==0){
func_9();
}
if(Global_20383.f_1==3){
func_9();
}else{
if(Global_21738){
if(Global_20383.f_1==9){
if(Global_78558){
if(!MISC::IS_BIT_SET(Global_8254, 31)){
if(!MISC::IS_BIT_SET(Global_8254, 27)){
if(func_8()){
if(!MISC::IS_BIT_SET(Global_8253, 9)){
if(func_62(2, Global_20355, 0)){
if(!MISC::IS_PC_VERSION()){
if(!Global_20382==1){
if(Global_20383.f_1 > 6){
MISC::SET_BIT(&Global_8254, 24);
MISC::SET_BIT(&Global_8254, 27);
MISC::CLEAR_BIT(&Global_8254, 26);
MISC::CLEAR_BIT(&Global_8254, 25);
MISC::SET_BIT(&(Global_2793046.f_1825), 17);
}}}
}
}}}
}}}}
if(Global_20366==1){
Global_20368=1;
func_65(0);
}
if(Global_20367==1){
Global_20368=1;
func_65(0);
}
if(Global_78558){
if(!MISC::IS_BIT_SET(Global_8255, 0)){
if(HUD::IS_PAUSE_MENU_ACTIVE() && !func_7()){
if(Global_2800025.f_1==1){
}
else{
func_68();
func_65(0);
}}}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
if(ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f){
MISC::SET_BIT(&Global_8254, 4);
}
if(ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID())==1f){
if(MISC::IS_BIT_SET(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)){
func_5(1, 1);
MISC::SET_BIT(&Global_8253, 14);
}
else{
Global_20368=1;
func_68();
func_65(0);
}}}
if(func_82(14)){
if((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]){
iLocal_117=0;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_117=1;
}}
if((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) > 0) || Global_78820==1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION()) || iLocal_117){
if(!Global_20326){
MISC::SET_BIT(&Global_8254, 4);
}}
if(MISC::IS_PC_VERSION()){
if(Global_78558==0){
if(iLocal_101==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
iLocal_99=MISC::GET_GAME_TIMER();
iLocal_101=1;
}}
}
else{
iLocal_100=MISC::GET_GAME_TIMER();
iLocal_103=(iLocal_100 - iLocal_99);
if(iLocal_103 < 4000){
MISC::SET_BIT(&Global_8254, 4);
}else{
iLocal_101=0;
}
}}}
if(PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68)){
if(Global_78558){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, 1);
if(iLocal_109 !=joaat("weapon_unarmed") && Global_20383.f_1 < 7){
MISC::SET_BIT(&Global_8254, 4);
}}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uLocal_110=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uLocal_110)==joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("submersible2")){
iLocal_113=1;
}else{
iLocal_113=0;
}
if(((((ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("chernobog")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("khanjali")) || iLocal_113) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, 0)==0){
MISC::SET_BIT(&Global_8254, 4);
}
if(((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("insurgent3")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("halftrack")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("dune3")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("tula")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("chernobog")){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110)){
iVar6=func_2(PLAYER::PLAYER_PED_ID(), iLocal_110);
if(iVar6 !=-2){
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("limo2")){
if(iVar6==3){
MISC::SET_BIT(&Global_8254, 4);
}}
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("trash2")){
if(iVar6==2 || iVar6==1){
MISC::SET_BIT(&Global_8254, 4);
}}
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("technical2")){
if(iVar6==1){
MISC::SET_BIT(&Global_8254, 4);
}}
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("boxville5")){
if(iVar6==3){
MISC::SET_BIT(&Global_8254, 4);
}}
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("insurgent3")){
if(iVar6==3){
MISC::SET_BIT(&Global_8254, 4);
}}
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("halftrack")){
if(iVar6==1){
MISC::SET_BIT(&Global_8254, 4);
}}
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("dune3")){
if(iVar6==0){
MISC::SET_BIT(&Global_8254, 4);
}}
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("trailersmall2")){
if(iVar6==-1){
MISC::SET_BIT(&Global_8254, 4);
}}
if(VEHICLE::IS_TURRET_SEAT(iLocal_110, iVar6)){
MISC::SET_BIT(&Global_8254, 4);
}}
}}
if(PAD::IS_CONTROL_JUST_PRESSED(0, 69)){
if(Global_78558==0){
if(Global_20383.f_1==6 || Global_20383.f_1==7){
bVar7=true;
if(ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iLocal_110)){
bVar7=false;
}
if(((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_110)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_110))) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_110)==joaat("submersible2")){
bVar7=false;
}
if(bVar7){
func_65(0);
}}
}}}else{
if(PAD::IS_CONTROL_JUST_PRESSED(0, 24)){
if(Global_78558==0){
if(Global_20383.f_1==6 || Global_20383.f_1==7){
func_65(0);
}
}}
iLocal_113=0;
}
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BIT_SET(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)){
func_5(1, 1);
}else{
Global_20368=1;
func_68();
func_65(0);
}}
if(Global_78558==0){
if(ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_96){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Global_20368=1;
func_68();
func_65(0);
}}
if(Global_20383.f_1==9 || Global_20383.f_1==10){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
Global_20368=1;
func_68();
func_65(0);
}}}elseif(func_75()){
if(ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_96){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Global_20368=1;
func_68();
func_65(0);
}}}
if(CAM::IS_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_75()){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, 1);
if((iLocal_109==joaat("weapon_sniperrifle") || iLocal_109==joaat("weapon_heavysniper")) || iLocal_109==joaat("weapon_remotesniper")){
bLocal_108=true;
}else{
bLocal_108=false;
}
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(bLocal_108){
Global_20368=1;
func_68();
func_65(0);
}}
}}}
if(PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())){
Global_20368=1;
func_68();
func_65(0);
}
if(PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)){
Global_20368=1;
func_68();
func_65(0);
}
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
Global_20368=1;
func_68();
func_65(0);
}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())){
if(Global_78558==0){
Global_20368=1;
func_68();
func_65(0);
}}}else{
iVar8=0;
if(((Global_78558 && Global_2800025.f_1) && Global_2800025.f_37) && Global_20383.f_1==9){
iVar8=1;
if(!MISC::IS_BIT_SET(Global_8254, 24)){
if(MISC::IS_BIT_SET(Global_8254, 26)){
MISC::SET_BIT(&Global_8254, 25);
MISC::CLEAR_BIT(&Global_8254, 26);
MISC::CLEAR_BIT(&Global_8255, 2);
}}}
if(iVar8==0){
Global_20368=1;
func_68();
func_65(0);
}}}
if(Global_20361==1){
func_1();
}
if(Global_20382==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20352);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}}}}


void func_1(){
if(!PAD::IS_CONTROL_PRESSED(2, Global_20352) && !PAD::IS_CONTROL_PRESSED(2, Global_20351)){
Global_20361=0;
}}

int func_2(int iParam0, int iParam1){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0)==iParam0){
return -1;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0)==iParam0){
return 0;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0)==iParam0){
return 1;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0)==iParam0){
return 2;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, 0)==iParam0){
return 3;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, 0)==iParam0){
return 4;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, 0)==iParam0){
return 5;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, 0)==iParam0){
return 6;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, 0)==iParam0){
return 3;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, 0)==iParam0){
return 4;
}}}
return -2;
}

int func_3(int iParam0){
if(iParam0==0){
return 0;
}
if(func_4(iParam0)==-1){
return 0;
}
return 1;
}

int func_4(int iParam0){
int iVar0;
if(iParam0==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(!Global_44232[iVar0 /*5*/]==-1){
if(iParam0==Global_44232[iVar0 /*5*/].f_1){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_5(bool bParam0, bool bParam1){
if(bParam0){
if(func_6(0)){
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

int func_6(int iParam0){
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


bool func_7(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_8(){
return Global_2800025.f_1;
}


void func_9(){
float fVar0;
struct<3> Var1;
float fVar2;
Global_22784=0;
Global_22785=0;
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
if(Global_20349==0){
MOBILE::SET_MOBILE_PHONE_SCALE(500f);
if(func_74()){
iLocal_18=MISC::GET_GAME_TIMER();
}else{
iLocal_18=0;
}
MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(1);
Global_20349=1;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID())){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}}
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID())){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}}
if(Global_113648.f_14053.f_84==1){
Global_113648.f_14053.f_84=0;
HUD::CLEAR_FLOATING_HELP(0, 1);
}
fVar0=350f;
if(MISC::IS_BIT_SET(Global_8253, 30) || MISC::IS_BIT_SET(Global_8255, 2)){
fVar0=25f;
}
Var1={
Global_20343 
};
if(Global_20368==1){
Var1={
-45f, 45f, 25f 
};
}
if((MISC::IS_BIT_SET(Global_8254, 26) || MISC::IS_BIT_SET(Global_8253, 30)) || MISC::IS_BIT_SET(Global_8255, 2)){
Local_115={
Global_20329[Global_20328 /*3*/] 
};
}else{
Local_115={
Global_20336[Global_20328 /*3*/] 
};
}
fVar2=func_15(Local_115, Global_20329[Global_20328 /*3*/], Global_20343, Var1, fVar0, 0);
if(!iLocal_84 && fVar2 >=1f){
MOBILE::DESTROY_MOBILE_PHONE();
iLocal_84=1;
}
if(iLocal_84 && (MISC::GET_GAME_TIMER() - iLocal_18) > 500){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
if(Global_20383.f_1==3){
}
if(Global_20383.f_1==1){
}
if(Global_20383.f_1==0){
}
MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
Global_20324=0;
Global_20365=0;
Global_20582=0;
if(Global_113648.f_14053.f_84==1){
Global_113648.f_14053.f_84=0;
HUD::CLEAR_FLOATING_HELP(0, 1);
}
Global_20327=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}
if(Global_22739==0){
}
Global_20584=0;
if(func_12(0)){
func_11();
}
MISC::CLEAR_BIT(&Global_8254, 8);
MISC::CLEAR_BIT(&Global_8253, 14);
MISC::CLEAR_BIT(&Global_8253, 9);
MISC::CLEAR_BIT(&Global_8253, 27);
MISC::CLEAR_BIT(&Global_8253, 30);
MISC::CLEAR_BIT(&Global_8254, 5);
MISC::CLEAR_BIT(&Global_8254, 19);
MISC::CLEAR_BIT(&Global_8254, 21);
MISC::CLEAR_BIT(&Global_8254, 24);
MISC::CLEAR_BIT(&Global_8254, 25);
MISC::CLEAR_BIT(&Global_8254, 27);
MISC::CLEAR_BIT(&Global_8254, 26);
MISC::CLEAR_BIT(&Global_8255, 2);
Global_2803654=0;
iLocal_116=0;
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
func_10();
}
settimera(0);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[2 /*15*/].f_9)==0){
while (SCRIPT::IS_THREAD_ACTIVE(Global_20381)){
wait(0);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
HUD::SET_TEXT_RENDER_ID(iLocal_83);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20364, Global_20303, Global_20304, Global_20305, Global_20306, 255, 255, 255, 255, 0);
}
if(timera() > 5000){
SCRIPT::TERMINATE_THREAD(Global_20381);
}}}
Global_20371=0;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
func_119(Global_20364, "SHUTDOWN_MOVIE");
}
wait(0);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20364);
Global_20349=0;
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_2800025.f_1){
if(Global_78558){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20372, 1);
}}}
func_116();
func_114();
Global_21738=0;
Global_4542576=0;
SCRIPT::TERMINATE_THIS_THREAD();
}}


void func_10(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9) || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21725=6;
return;
}}


void func_11(){
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==2){
Global_9058[0 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==2){
Global_9058[1 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==2){
Global_9058[2 /*2811*/][0 /*281*/].f_259=0;
}
MISC::CLEAR_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
}

int func_12(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_13(iParam0)){
return 0;
}
return 1;
}


bool func_13(int iParam0){
return func_14(iParam0, Global_43257);
}

int func_14(int iParam0, int iParam1){
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


float func_15(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5){
struct<2> Var0;
float fVar1;
float fVar2;
float fVar3;
if(Global_4542576==0){
if(MISC::IS_BIT_SET(Global_8253, 14) && Global_20383.f_1 < 4){
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20336[Global_20328 /*3*/].f_1==Var0.f_1){
Global_4542576=1;
}}}
if(func_74() && Global_4542576==0){
return 2f;
}
if(iLocal_18==0){
iLocal_18=MISC::GET_GAME_TIMER();
}
fVar1=func_17((to_float((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
if(fVar1 < 1f){
fVar2=fVar1;
if(bParam5){
fVar2=(fVar2 - 1f);
fVar3=0.670158f;
fVar2=(((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
}else{
fVar2=sin((fVar1 * 90f));
}
Global_20311={
func_16(Param0, Param1, fVar2) 
};
Global_20314={
func_16(Param2, Param3, fVar2) 
};
}else{
Global_20311={
Param1 
};
Global_20314={
Param3 
};
}
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20314, 0);
return fVar1;
}


Vector3 func__16(struct<3> Param0, struct<3> Param1, float fParam2){
return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}


float func_17(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}


void func_18(){
if(Global_20361==0){
if(func_62(2, Global_20355, 0)){
if(Global_78558==0){
if(Global_20586){
if(Global_20585==0){
Global_20585=1;
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_83(2);
func_19();
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20388), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20388;
}else{
Global_20585=0;
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_83(1);
func_19();
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20387;
}}}}}}


void func_19(){
if(Global_20586==0){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(Global_78558){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
if(Global_20585==1){
if(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
}}elseif(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8253, 17);
}}


void func_20(){
if(MISC::IS_BIT_SET(Global_8254, 10) || iLocal_116==1){
Global_8860=MISC::GET_GAME_TIMER();
Global_8859=0;
Global_20361=1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_73=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
iLocal_74=1;
}elseif(Global_20361==0){
if(func_62(2, Global_20352, 0)){
if(iLocal_75==0){
Global_8860=MISC::GET_GAME_TIMER();
Global_8859=0;
Global_20361=1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_73=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
iLocal_74=1;
}}}}


void func_21(){
if(Global_20361==0){
if(func_62(2, Global_20350, 1)){
if(func_107(2092, -1, 0)==1){
if(Global_113648.f_14053[Global_20383 /*20*/].f_17==0){
if(!MISC::IS_BIT_SET(Global_8254, 3)){
if(!Global_20326){
if(!MISC::IS_BIT_SET(Global_4542297, 3)){
if(!MISC::IS_BIT_SET(Global_8253, 14)){
Global_20361=1;
MISC::SET_BIT(&Global_4542297, 3);
func_22(3, 0, 1, 0);
Global_22784=0;
}}
}}}}}}}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3){
func_122();
if(Global_78558==0){
if(func_82(14)){
if(Global_22784==2 || Global_22784==4){
}else{
return 0;
}}}
if(Global_20383.f_1==9){
return 0;
}
if(iParam2==0){
if(func_6(0)==1){
return 0;
}}
if(Global_20349==1){
return 0;
}
if(Global_20383.f_1==7){
return 0;
}
if(iParam1==1){}
if(!SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
if(Global_20383.f_1 < 4){
func_23("cellphone_flashhand");
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
Global_20380=start_new_script("cellphone_flashhand", 1424);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}}
while (!Global_20365){
wait(0);
}
func_85();
func_84();
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0){
Global_8859=0;
Global_20383.f_1=7;
func_23(&(Global_8260[iParam0 /*15*/].f_5));
if(bParam3){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0){
Global_20381=start_new_script(&(Global_8260[iParam0 /*15*/].f_5), 4000);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0){
Global_20381=start_new_script(&(Global_8260[iParam0 /*15*/].f_5), 2552);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8260[iParam0 /*15*/].f_5));
return 1;
}
return 1;
}


void func_23(char* sParam0){
SCRIPT::REQUEST_SCRIPT(sParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
wait(0);
}}


void func_24(){
if(func_40()){
if(func_62(2, Global_20355, 0)){
func_38();
Global_20387=Global_20363;
func_35();
return;
}}
if(Global_20362){
if(timera() > 50){
Global_20362=0;
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 180)){
switch (Global_20363){
case 0:
if(Global_8822[1]){
func_33();
Global_20363=1;
}
break;
case 1:
if(Global_8822[2]){
func_33();
Global_20363=2;
}
break;
case 2:
if(Global_8822[3]){
func_33();
func_31();
Global_20363=3;
}else{
func_29();
func_31();
Global_20363=4;
}
break;
case 3:
if(Global_8822[4]){
func_33();
Global_20363=4;
}
break;
case 4:
if(Global_8822[5]){
func_33();
Global_20363=5;
}
break;
case 5:
if(Global_8822[6]){
func_33();
func_31();
Global_20363=6;
}
break;
case 6:
if(Global_8822[7]){
func_33();
Global_20363=7;
}
break;
case 7:
if(Global_8822[8]){
func_33();
Global_20363=8;
}else{
func_29();
func_31();
Global_20363=0;
}
break;
case 8:
if(Global_8822[0]){
func_33();
func_31();
Global_20363=0;
}else{
func_29();
func_31();
}
break;
}}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 181)){
switch (Global_20363){
case 0:
if(Global_8822[8]){
func_29();
func_26();
Global_20363=8;
}else{
func_33();
func_26();
Global_20363=7;
}
break;
case 1:
if(Global_8822[0]){
func_29();
Global_20363=0;
}elseif(Global_8822[8]){
func_26();
func_33();
}else{
func_26();
}
break;
case 2:
if(Global_8822[1]){
func_29();
Global_20363=1;
}
break;
case 3:
if(Global_8822[2]){
func_29();
func_26();
Global_20363=2;
}
break;
case 4:
if(Global_8822[3]){
func_29();
Global_20363=3;
}else{
func_26();
func_33();
Global_20589=1;
Global_20363=2;
}
break;
case 5:
if(Global_8822[4]){
func_29();
Global_20363=4;
}
break;
case 6:
if(Global_8822[5]){
func_26();
func_29();
Global_20363=5;
}
break;
case 7:
if(Global_8822[6]){
func_29();
Global_20363=6;
}
break;
case 8:
if(Global_8822[7]){
func_29();
Global_20363=7;
}
break;
}}}
if(Global_20362==0){
if(func_62(2, Global_20358, 0)){
Global_20589=0;
switch (Global_20363){
case 2:
if(Global_8822[0]==1){
Global_20363=0;
}else{
Global_20363=1;
Global_20589=1;
}
break;
case 5:
Global_20363=3;
break;
case 6:
Global_20363=7;
break;
case 7:
if(Global_8822[Global_20363 + 1]==1){
Global_20363=8;
}else{
Global_20363=6;
Global_20589=1;
}
break;
case 8:
Global_20363=6;
break;
default:
Global_20363++;
break;
}
if(Global_20589==1){
func_29();
}else{
func_33();
}
Global_20362=1;
settimera(0);
}
if(func_62(2, Global_20357, 0)){
Global_20589=0;
switch (Global_20363){
case 0:
Global_20363=2;
break;
case 1:
if(Global_8822[0]==1){
Global_20363=0;
}else{
Global_20363=2;
Global_20589=1;
}
break;
case 3:
Global_20363=5;
break;
case 6:
if(Global_8822[8]==1){
Global_20363=8;
}else{
Global_20363=7;
Global_20589=1;
}
break;
default:
Global_20363=(Global_20363 - 1);
break;
}
if(Global_20589==1){
func_33();
}else{
func_29();
}
Global_20362=1;
settimera(0);
}
if(func_62(2, Global_20359, 0)){
Global_20589=0;
switch (Global_20363){
case 0:
if(Global_8822[6]){
Global_20363=6;
}
break;
case 1:
if(Global_8822[7]){
Global_20363=7;
}else{
Global_20589=1;
Global_20363=4;
}
break;
case 2:
if(Global_8822[8]){
Global_20363=8;
}else{
Global_20589=1;
Global_20363=5;
}
break;
case 3:
if(Global_8822[0]){
Global_20363=0;
}else{
Global_20589=1;
Global_20363=6;
}
break;
case 4:
if(Global_8822[1]){
Global_20363=1;
}
break;
case 5:
if(Global_8822[2]){
Global_20363=2;
}
break;
case 6:
if(Global_8822[3]){
Global_20363=3;
}
break;
case 7:
if(Global_8822[4]){
Global_20363=4;
}
break;
case 8:
if(Global_8822[5]){
Global_20363=5;
}
break;
}
if(Global_20589==1){
func_31();
}else{
func_26();
}
Global_20362=1;
settimera(0);
}
if(func_62(2, Global_20360, 0)){
Global_20589=0;
switch (Global_20363){
case 0:
if(Global_8822[3]){
Global_20363=3;
}
break;
case 1:
if(Global_8822[4]){
Global_20363=4;
}
break;
case 2:
if(Global_8822[5]){
Global_20363=5;
}
break;
case 3:
if(Global_8822[6]){
Global_20363=6;
}
break;
case 4:
if(Global_8822[7]){
Global_20363=7;
}else{
Global_20589=1;
Global_20363=1;
}
break;
case 5:
if(Global_8822[8]){
Global_20363=8;
}else{
Global_20589=1;
Global_20363=2;
}
break;
case 6:
if(Global_8822[0]){
Global_20363=0;
}else{
Global_20589=1;
Global_20363=3;
}
break;
case 7:
if(Global_8822[1]){
Global_20363=1;
}
break;
case 8:
if(Global_8822[2]){
Global_20363=2;
}
break;
}
if(Global_20589==1){
func_26();
}else{
func_31();
}
Global_20362=1;
settimera(0);
}}
if(Global_8260[23 /*15*/].f_10==57){
if(Global_20362==1 && Global_20363==8){
if(iLocal_118==0){
iLocal_118=1;
func_25(12);
}}}}


void func_25(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2793046.f_5225.f_7[iVar0]), iVar1);
}


void func_26(){
func_112(Global_20364, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_27();
}


void func_27(){
if(func_28()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(1);
}else{
MOBILE::CELL_SET_INPUT(2);
}}}

int func_28(){
var uVar0;
int iVar1;
int iVar2;
if(Global_78558){
return 0;
}
iVar2=0;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
iVar2=1;
}
if(Global_4542575 || iVar2){
return 1;
}
return 1;
}


void func_29(){
func_112(Global_20364, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_30();
}


void func_30(){
if(func_28()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(3);
}else{
MOBILE::CELL_SET_INPUT(4);
}}}


void func_31(){
func_112(Global_20364, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_32();
}


void func_32(){
if(func_28()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(2);
}else{
MOBILE::CELL_SET_INPUT(1);
}}}


void func_33(){
func_112(Global_20364, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_34();
}


void func_34(){
if(func_28()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(4);
}else{
MOBILE::CELL_SET_INPUT(3);
}}}


void func_35(){
MISC::SET_BIT(&Global_8255, 9);
func_37(10, "CELL_16", 0, "appSettings", 24, 1, 1, 0, 0);
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
iLocal_71=0;
while (iLocal_71 < 9){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_71);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_36(&(Global_8260[10 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_71++;
}
Global_8786[0]=10;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[10 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_36(&(Global_8260[10 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_19();
func_112(Global_20364, "DISPLAY_VIEW", 4f, to_float(0), -1082130432, -1082130432, -1082130432);
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(0), -1082130432, -1082130432, -1082130432);
func_80();
}


void func_36(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
StringCopy(&(Global_8260[iParam0 /*15*/]), sParam1, 16);
Global_8260[iParam0 /*15*/].f_4=iParam2;
StringCopy(&(Global_8260[iParam0 /*15*/].f_5), sParam3, 16);
Global_8260[iParam0 /*15*/].f_9=MISC::GET_HASH_KEY(sParam3);
Global_8260[iParam0 /*15*/].f_10=iParam4;
Global_8260[iParam0 /*15*/].f_11=iParam5;
Global_8260[iParam0 /*15*/].f_12=iParam6;
Global_8260[iParam0 /*15*/].f_13=iParam7;
Global_8260[iParam0 /*15*/].f_14=iParam8;
if(Global_8260[iParam0 /*15*/].f_12==0){
Global_8260[iParam0 /*15*/].f_12=0;
}
if(Global_8260[iParam0 /*15*/].f_13==0){
Global_8260[iParam0 /*15*/].f_13=0;
}
if(Global_8260[iParam0 /*15*/].f_14==0){
Global_8260[iParam0 /*15*/].f_14=0;
}}


void func_38(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, 1);
func_39();
}}


void func_39(){
if(func_28()){
MOBILE::CELL_SET_INPUT(5);
}}

int func_40(){
return 0;
}


void func_41(){
if(func_62(2, Global_20355, 0)){
func_38();
MISC::CLEAR_BIT(&Global_8255, 9);
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_83(1);
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
func_80();
}}


void func_42(){
if(Global_20362){
if(timera() > 50){
Global_20362=0;
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 180)){
switch (Global_20363){
case 6:
if(Global_8822[7]){
func_33();
Global_20363=7;
}
break;
case 7:
if(Global_8822[6]){
func_29();
Global_20363=6;
}
break;
}}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 181)){
switch (Global_20363){
case 6:
if(Global_8822[7]){
func_33();
Global_20363=7;
}
break;
case 7:
if(Global_8822[6]){
func_29();
Global_20363=6;
}
break;
}}}
if(Global_20362==0){
if(func_62(2, Global_20358, 0)){
Global_20589=0;
switch (Global_20363){
case 2:
Global_20363=0;
break;
case 5:
Global_20363=3;
break;
case 7:
if(Global_8822[Global_20363 + 1]==1){
Global_20363=8;
}else{
Global_20363=6;
Global_20589=1;
}
break;
case 8:
Global_20363=6;
break;
default:
Global_20363++;
break;
}
if(Global_20589==1){
func_29();
}else{
func_33();
}
Global_20362=1;
settimera(0);
}
if(func_62(2, Global_20357, 0)){
Global_20589=0;
switch (Global_20363){
case 0:
Global_20363=2;
break;
case 3:
Global_20363=5;
break;
case 6:
if(Global_8822[8]==1){
Global_20363=8;
}else{
Global_20363=7;
Global_20589=1;
}
break;
default:
Global_20363=(Global_20363 - 1);
break;
}
if(Global_20589==1){
func_33();
}else{
func_29();
}
Global_20362=1;
settimera(0);
}}}


void func_43(){
if(Global_20362){
if(timera() > 50){
Global_20362=0;
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 180)){
switch (Global_20363){
case 0:
if(Global_8822[1]){
func_33();
Global_20363=1;
}
break;
case 1:
if(Global_8822[2]){
func_33();
Global_20363=2;
}
break;
case 2:
if(Global_8822[3]){
func_33();
func_31();
Global_20363=3;
}else{
func_29();
func_31();
Global_20363=4;
}
break;
case 3:
if(Global_8822[4]){
func_33();
Global_20363=4;
}
break;
case 4:
if(Global_8822[5]){
func_33();
Global_20363=5;
}
break;
case 5:
if(Global_8822[6]){
func_33();
func_31();
Global_20363=6;
}
break;
case 6:
if(Global_8822[7]){
func_33();
Global_20363=7;
}
break;
case 7:
if(Global_8822[8]){
func_33();
Global_20363=8;
}else{
func_29();
func_31();
Global_20363=0;
}
break;
case 8:
if(Global_8822[0]){
func_33();
func_31();
Global_20363=0;
}
break;
}}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 181)){
switch (Global_20363){
case 0:
if(Global_8822[8]){
func_29();
func_26();
Global_20363=8;
}else{
func_33();
func_26();
Global_20363=7;
}
break;
case 1:
if(Global_8822[0]){
func_29();
Global_20363=0;
}
break;
case 2:
if(Global_8822[1]){
func_29();
Global_20363=1;
}
break;
case 3:
if(Global_8822[2]){
func_29();
func_26();
Global_20363=2;
}
break;
case 4:
if(Global_8822[3]){
func_29();
Global_20363=3;
}else{
func_26();
func_33();
Global_20589=1;
Global_20363=2;
}
break;
case 5:
if(Global_8822[4]){
func_29();
Global_20363=4;
}
break;
case 6:
if(Global_8822[5]){
func_26();
func_29();
Global_20363=5;
}
break;
case 7:
if(Global_8822[6]){
func_29();
Global_20363=6;
}
break;
case 8:
if(Global_8822[7]){
func_29();
Global_20363=7;
}
break;
}}}
if(Global_20362==0){
if(func_62(2, Global_20358, 0)){
Global_20589=0;
switch (Global_20363){
case 2:
Global_20363=0;
break;
case 5:
Global_20363=3;
break;
case 7:
if(Global_8822[Global_20363 + 1]==1){
Global_20363=8;
}else{
Global_20363=6;
Global_20589=1;
}
break;
case 8:
Global_20363=6;
break;
default:
Global_20363++;
break;
}
if(Global_20589==1){
func_29();
}else{
func_33();
}
Global_20362=1;
settimera(0);
}
if(func_62(2, Global_20357, 0)){
Global_20589=0;
switch (Global_20363){
case 0:
Global_20363=2;
break;
case 3:
Global_20363=5;
break;
case 6:
if(Global_8822[8]==1){
Global_20363=8;
}else{
Global_20363=7;
Global_20589=1;
}
break;
default:
Global_20363=(Global_20363 - 1);
break;
}
if(Global_20589==1){
func_33();
}else{
func_29();
}
Global_20362=1;
settimera(0);
}
if(func_62(2, Global_20359, 0)){
Global_20589=0;
switch (Global_20363){
case 0:
if(Global_8822[6]){
Global_20363=6;
}
break;
case 1:
if(Global_8822[7]){
Global_20363=7;
}
break;
case 2:
if(Global_8822[8]){
Global_20363=8;
}else{
Global_20589=1;
Global_20363=5;
}
break;
case 3:
if(Global_8822[0]){
Global_20363=0;
}
break;
case 4:
if(Global_8822[1]){
Global_20363=1;
}
break;
case 5:
if(Global_8822[2]){
Global_20363=2;
}
break;
case 6:
if(Global_8822[3]){
Global_20363=3;
}
break;
case 7:
if(Global_8822[4]){
Global_20363=4;
}
break;
case 8:
if(Global_8822[5]){
Global_20363=5;
}
break;
}
if(Global_20589==1){
func_31();
}else{
func_26();
}
Global_20362=1;
settimera(0);
}
if(func_62(2, Global_20360, 0)){
Global_20589=0;
switch (Global_20363){
case 0:
if(Global_8822[3]){
Global_20363=3;
}
break;
case 1:
if(Global_8822[4]){
Global_20363=4;
}
break;
case 2:
if(Global_8822[5]){
Global_20363=5;
}
break;
case 3:
if(Global_8822[6]){
Global_20363=6;
}
break;
case 4:
if(Global_8822[7]){
Global_20363=7;
}
break;
case 5:
if(Global_8822[8]){
Global_20363=8;
}else{
Global_20589=1;
Global_20363=2;
}
break;
case 6:
if(Global_8822[0]){
Global_20363=0;
}
break;
case 7:
if(Global_8822[1]){
Global_20363=1;
}
break;
case 8:
if(Global_8822[2]){
Global_20363=2;
}
break;
}
if(Global_20589==1){
func_26();
}else{
func_31();
}
Global_20362=1;
settimera(0);
}}}


void func_44(){
int iVar0;
var uVar1;
char* sVar2;
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_73)){
iLocal_74=0;
iLocal_72=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_73);
if(Global_20585==0){
Global_20387=iLocal_72;
}else{
Global_20388=iLocal_72;
}
if(iLocal_72 < 0){
iLocal_72=0;
}
Global_20386=Global_8786[iLocal_72];
if(MISC::IS_BIT_SET(Global_8254, 10)){
Global_20386=2;
MISC::CLEAR_BIT(&Global_8254, 10);
}
if(iLocal_116==1){
Global_20387=1;
Global_20386=0;
Global_2803654=0;
iLocal_116=0;
}
iVar0=0;
if(Global_78558){
if(Global_20386==24 && func_40()){
}}
if(SCRIPT::IS_THREAD_ACTIVE(Global_20381)){
iVar0=1;
}
if(Global_20386==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar0=1;
}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)) || GRAPHICS::GET_USINGNIGHTVISION()){
iVar0=1;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())==0){
iVar0=1;
}
uVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(uVar1) < 0f){
iVar0=1;
}}
if(PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())){
iVar0=1;
}
if(Global_78558){
if(PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, 1);
if(iLocal_109 !=joaat("weapon_unarmed")){
iVar0=1;
}}}}}
if(Global_20386==2){
if(MISC::IS_BIT_SET(Global_8254, 6)){
iVar0=1;
}}
if(Global_20386==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[Global_20386 /*15*/]), "CELL_BENWEB")){
if(MISC::IS_BIT_SET(Global_8254, 6)){
iVar0=1;
}}
if(Global_78558){
if(Global_20386==15 || Global_20386==5){
}else{
if(Global_20386==23){
if(((MISC::IS_BIT_SET(Global_4542297, 4)==0 && Global_1836102==0) && MISC::IS_BIT_SET(Global_4542297, 20)==0) && MISC::IS_BIT_SET(Global_4542297, 22)==0){
}
if((((MISC::IS_BIT_SET(Global_4542297, 20)==1 && MISC::IS_BIT_SET(Global_4542297, 4)==0) && Global_1836102==0) && MISC::IS_BIT_SET(Global_4542297, 22)==0) && MISC::IS_BIT_SET(Global_4542297, 26)==0){
iVar0=1;
MISC::SET_BIT(&Global_4542297, 21);
}}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())){
if(Global_20386==3){
iVar0=1;
}}}
if(Global_75692 && Global_20386==2){
iVar0=1;
sVar2=func_47();
if(!func_46(sVar2)){
func_78(sVar2, -1);
}}
if(func_121()){
if(Global_20386==10){
if(!func_46("FIX_MPCHAR_BLCK")){
func_78("FIX_MPCHAR_BLCK", -1);
}
iVar0=1;
}}
if(iVar0==0){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
Global_20383.f_1=7;
if(MISC::IS_BIT_SET(Global_8253, 23)){
}else{
func_38();
SCRIPT::REQUEST_SCRIPT(&(Global_8260[Global_20386 /*15*/].f_5));
MISC::SET_BIT(&Global_8253, 23);
}}else{
if(Global_20386==2 || Global_20386==3){
}
func_45();
}}}else{
switch (Global_20386){
case 3:
if(Global_112701==1){
iVar0=1;
}
break;
case 8:
iVar0=1;
break;
case 15:
iVar0=1;
break;
case 16:
iVar0=1;
MISC::SET_BIT(&Global_8253, 26);
break;
case 5:
iVar0=1;
break;
case 20:
iVar0=1;
if(Global_20587==0){
if((Global_8257==0 && iLocal_75==0) && Global_43257==15){
iLocal_75=1;
func_38();
if(!Global_113648.f_14053.f_85){
}
}}else{
func_45();
}
break;
default:
break;
}
if(CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE()){
if(Global_20386 !=0){
iVar0=1;
}}
if(func_82(14)){
if(Global_20386 !=3 && Global_20386 !=14){
iVar0=1;
}}
if(iVar0==0){
func_38();
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
Global_20383.f_1=7;
if(MISC::IS_BIT_SET(Global_8253, 23)){
}else{
SCRIPT::REQUEST_SCRIPT(&(Global_8260[Global_20386 /*15*/].f_5));
MISC::SET_BIT(&Global_8253, 23);
}}elseif(Global_20386 !=20){
if(Global_113648.f_14053.f_86==0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0){
if(Global_20386==3){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
func_78("CELL_38", -1);
Global_113648.f_14053.f_86=1;
}}
}}}
func_45();
}}}}


void func_45(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, 1);
}}


bool func_46(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


char* func_47(){
return "BLOCK_APP_WEB";
}


void func_48(){
if(Global_20349==0){
if(func_15(Global_20336[Global_20328 /*3*/], Global_20329[Global_20328 /*3*/], Global_20343, Global_20343, 350f, 0) >=1f){
iLocal_18=0;
MISC::CLEAR_BIT(&Global_8254, 24);
MISC::SET_BIT(&Global_8254, 26);
}}}


void func_49(){
if(Global_20349==0){
if(func_15(Global_20329[Global_20328 /*3*/], Global_20336[Global_20328 /*3*/], Global_20343, Global_20343, 350f, 1) >=1f){
iLocal_18=0;
MISC::CLEAR_BIT(&Global_8254, 25);
if(Global_21738){
MISC::CLEAR_BIT(&Global_8254, 27);
}}}}


void func_50(){
if(Global_20349==0 && Global_20323==0){
if(func_15(Global_20336[Global_20328 /*3*/], Global_20329[Global_20328 /*3*/], Global_20343, Global_20343, 350f, 0) >=1f){
iLocal_18=0;
Global_4542576=0;
}}}


void func_51(){
float fVar0;
float fVar1;
if(MISC::IS_BIT_SET(Global_8255, 2)){
MISC::SET_BIT(&Global_8254, 8);
MISC::SET_BIT(&Global_8253, 14);
Global_20323=0;
iLocal_18=0;
MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20343, 0);
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1){
fVar0=func_15(Global_20329[Global_20328 /*3*/], Global_20336[Global_20328 /*3*/], Global_20346, Global_20343, 450f, 1);
if(fVar0 >=1f){
MISC::SET_BIT(&Global_8254, 8);
MISC::SET_BIT(&Global_8253, 14);
Global_20323=0;
iLocal_18=0;
MISC::CLEAR_BIT(&Global_8255, 2);
iLocal_81=0;
}elseif(fVar0 >=0.75f){
MISC::SET_BIT(&Global_8254, 8);
}}else{
if(iLocal_81==0){
Local_82={
Global_20336[Global_20328 /*3*/] 
};
Local_82.f_0=(Local_82.f_0 - 10f);
Local_82.f_1=(Local_82.f_1 + 20f);
iLocal_81=1;
}
fVar1=func_15(Global_20329[Global_20328 /*3*/], Local_82, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
if(fVar1 >=1f){
MISC::SET_BIT(&Global_8254, 8);
MISC::SET_BIT(&Global_8253, 14);
Global_20323=0;
iLocal_18=0;
MISC::CLEAR_BIT(&Global_8255, 2);
iLocal_81=0;
}elseif(fVar1 >=0.75f){
MISC::SET_BIT(&Global_8254, 8);
}}}


void func_52(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_103=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_102);
}else{
iLocal_98=MISC::GET_GAME_TIMER();
iLocal_103=(iLocal_98 - iLocal_97);
}
if(iLocal_103 > 4000){
iLocal_86=func_104();
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_102=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_97=MISC::GET_GAME_TIMER();
}}}


void func_53(){
if(Global_20382==1){
func_120();
if(Global_20361==0){
if(func_62(2, Global_20353, 0)){
if(MISC::IS_BIT_SET(Global_8254, 8)){
if(Global_21772==0){
func_45();
Global_20361=1;
Global_20382=3;
Global_21774=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}}}}}
if(Global_20361==0){
if(func_62(2, Global_20352, 0)){
if(MISC::IS_BIT_SET(Global_8254, 8)){
func_38();
Global_20361=1;
Global_20382=2;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}
func_59();
func_58();
}}}}else{
if(iLocal_95==0){
if(MISC::IS_BIT_SET(Global_8253, 27)){
iLocal_95=1;
settimerb(0);
}}else{
if(Global_20383.f_1 > 3){
if(timerb() > 1500){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID())){
if(Global_20326){
AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
}elseif(!MISC::IS_BIT_SET(Global_8255, 5)){
AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
}
}}}}
if(!MISC::IS_BIT_SET(Global_8253, 27)){
iLocal_95=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
}}}
if(Global_20382==0){
if(Global_20361==0){
if(func_62(2, Global_20351, 0) || Global_2803654==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_8254, 8)){
switch (Global_20383.f_1){
case 3:
break;
case 4:
break;
case 6:
if(Global_20584==0){
if(Global_20585==1){
func_45();
Global_20585=0;
func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_85();
func_84();
func_83(1);
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
}else{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_20372, 1);
}
iLocal_18=0;
Global_20383.f_1=3;
}
}
break;
case 5:
Global_20383.f_1=3;
break;
case 7:
if(MISC::IS_BIT_SET(Global_8253, 23)==1){
}
if((Global_8861 - Global_8860) > Global_8862 && MISC::IS_BIT_SET(Global_8253, 23)==0){
if(MISC::IS_BIT_SET(Global_8254, 0)){
}else{
func_45();
Global_8859=1;
Global_20383.f_1=6;
if(Global_78558){
func_112(Global_20364, "SET_THEME", to_float(Global_4542573), -1082130432, -1082130432, -1082130432, -1082130432);
}
Global_8256=99;
if(Global_2803654==0){
func_54();
}}
}
break;
case 8:
break;
case 10:
if(Global_7568==132){
if(Global_2800025.f_1 || MISC::IS_BIT_SET(Global_8254, 20)){
func_45();
func_76();
}
}
else{
func_45();
func_76();
Global_21774=1;
}
break;
case 9:
if(Global_21725==0){
Global_20383.f_1=3;
}
break;
default:
break;
}
if(Global_2803654==1){
iLocal_116=1;
Global_2803654=0;
}}
}}}}}}}


void func_54(){
struct<3> Var0;
if(Global_20366==1){
return;
}
if(Global_20383.f_1 < 4){
return;
}
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
if(Global_78558){
return;
}
wait(0);
}
switch (Global_20383.f_1){
case 6:
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_83(Global_8858);
if(Global_8858==1){
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20387;
}else{
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20388), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20388;
}
if(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20586==0){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(Global_78558){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
if(Global_20585==1){
if(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
}}elseif(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8253, 17);
}
if(Global_78558){
func_80();
MISC::CLEAR_BIT(&Global_8255, 9);
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
}
break;
case 7:
break;
case 10:
func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
break;
case 9:
if(Global_20382==1){
func_106();
func_112(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_36("CELL_300");
func_36("CELL_217");
func_36("CELL_217");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_57(Global_7568, Global_20383)==0){
func_81(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
}else{
func_81(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}elseif(Global_21725==4 || Global_21725==3){
func_112(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
func_106();
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_36("CELL_300");
func_36("CELL_219");
func_36("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
if(Global_21983){
StringCopy(&Var0, "CELL_219", 24);
}else{
StringCopy(&Var0, "CELL_211", 24);
}
if(func_57(Global_7568, Global_20383)==0){
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_81(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
}else{
func_112(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_81(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &Var0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
}}
func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_55();
break;
default:
break;
}}


void func_55(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
func_56();
if(Global_20382==1){
if(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_21772){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_8253, 20)){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}}}


void func_56(){
if(Global_78558){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}}

int func_57(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}


void func_58(){
if(Global_21738){
if(Global_78558){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
if(!MISC::IS_PC_VERSION()){
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
MISC::SET_BIT(&(Global_2793046.f_1825), 15);
}}}}}


void func_59(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
if(!Global_21733){
func_81(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_81(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_36("CELL_300");
func_36("CELL_219");
func_36("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_57(Global_7568, Global_20383)==0){
func_81(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
}else{
func_81(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_219", &(Global_2028[Global_7568 /*29*/].f_3), 0);
}}
func_112(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}}


void func_60(){
Global_20591=0;
func_61();
}


void func_61(){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20382==1){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
Global_20383.f_1=Global_20385;
return;
}}

int func_62(int iParam0, int iParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1))){
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

int func_63(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0){
return 1;
}
return 0;
}

int func_64(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_65(int iParam0){
if(func_67()){
return;
}
if(Global_20584){
if(func_7()){
func_5(1, 1);
}else{
func_5(0, 0);
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
if(!func_66()){
Global_20383.f_1=3;
}}

int func_66(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


bool func_67(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_68(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_69(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_77() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
iVar1=1;
}}
if(!Global_78558){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1==0){
iVar2=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
if(Global_78558){
if(((((iVar2==15 || iVar2==16) || iVar2==17) || iVar2==18) || iVar2==19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
iVar0=1;
}}elseif(PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
iVar0=1;
}
if(!Global_20326){
if(Global_7568 !=128){
if(iVar0==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
}else{
if(Global_78558){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
}
MISC::SET_BIT(&Global_8253, 11);
TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
}
}}}}}}}


void func_70(){
if((MISC::IS_BIT_SET(Global_8253, 14) && Global_4542576==0) && Global_20323==0){
if(func_75()){
}else{
func_71();
}
if(Global_20383.f_1==9){
if(Global_21738==0){
iLocal_76=1;
}}}}


void func_71(){
struct<2> Var0;
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20336[Global_20328 /*3*/].f_1==Var0.f_1){}else{
Global_20323=1;
}}


void func_72(){
if((MISC::IS_BIT_SET(Global_8253, 14) && Global_4542576==0) && Global_20323==0){
if(iLocal_76==0){
if(MISC::IS_BIT_SET(Global_8254, 26)){
MISC::CLEAR_BIT(&Global_8254, 24);
MISC::CLEAR_BIT(&Global_8254, 25);
MISC::CLEAR_BIT(&Global_8254, 27);
MISC::CLEAR_BIT(&Global_8254, 26);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_71();
}elseif(func_74()==0){
func_71();
}}}}
if(Global_20383.f_1==10 || Global_20383.f_1==9){
if(func_74()){
func_73();
}}elseif(func_75()){
}elseif(func_74()){
func_73();
}
if(Global_20383.f_1==9){
if(Global_21738==0){
iLocal_76=1;
}}}}


void func_73(){
struct<2> Var0;
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20329[Global_20328 /*3*/].f_1==Var0.f_1){}else{
Global_4542576=1;
}}

int func_74(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20383.f_1==10 || Global_20383.f_1==9){
if(Global_20326==0){
if(Global_7568 !=128){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_21725 !=2){
}}}}}
if(func_82(14)){
return 0;
}
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()){
if(ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
return 0;
}}}
if(((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(MISC::IS_BIT_SET(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)))){
return 0;
}
if(Global_112696){
return 0;
}}
if(Global_78558){
return 0;
}
iVar2=0;
iVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
if(iVar1==4 && (iVar0==0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())){
iVar2=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("toro")){
iVar2=0;
}}}}
if(Global_4542575 || iVar2==1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0){
return 1;
}else{
return 0;
}}else{
return 1;
}}
return 0;
}

int func_75(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0){
return 1;
}
return 0;
}


void func_76(){
if(!Global_78558){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BIT_SET(Global_8253, 11)){
if(!Global_20326){
TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
}
if(Global_78558){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
}
MISC::CLEAR_BIT(&Global_8253, 11);
}}}}

int func_77(){
var uVar0;
int iVar1;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
return 1;
}
return 0;
}


void func_78(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_79(){
MOBILE::GET_MOBILE_PHONE_RENDER_I(&iLocal_83);
if(iLocal_83==-1){}}


void func_80(){
if(Global_78558){
if(func_40()==0){
return;
}
func_81(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}}


void func_81(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
if(!MISC::IS_STRING_NULL_OR_EMPTY(cParam7)){
func_36(cParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_36(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_36(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_36(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_36(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


bool func_82(int iParam0){
return Global_43257==iParam0;
}


void func_83(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
Global_22793=0;
Global_8858=iParam0;
iVar0=0;
while (iVar0 < 9){
Global_8822[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
iVar1=0;
if(func_82(14)){
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(iVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[iVar0]==0){
Global_8786[iVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar2=42;
Global_20588=1;
}else{
iVar2=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_36(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694521){
if(iVar1==14){
func_81(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(iVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[iVar0]==0){
Global_8786[iVar0]=iVar1;
if(iVar1==1){
iVar3=0;
while (iVar3 < 35){
if(Global_113648.f_14143[iVar3 /*104*/].f_24 !=0){
if(Global_113648.f_14143[iVar3 /*104*/].f_28==0){
if(Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383]==1){
Global_22793++;
}
}
}
iVar3++;
}
func_81(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78558){
iVar4=0;
iVar4=Global_4541031;
iVar5=0;
while (iVar5 < 12){
if(Global_4541032[iVar5 /*104*/].f_24 !=0){
if(Global_4541032[iVar5 /*104*/].f_28==0){
if(Global_4541032[iVar5 /*104*/].f_99[Global_20383]==1){
iVar4++;
}}
}
iVar5++;
}
func_81(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20383){
case 0:
iVar6=Global_44457;
break;
case 1:
iVar6=Global_44458;
break;
case 2:
iVar6=Global_44459;
break;
default:
break;
}
func_81(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_81(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_36(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8254, 6)){
iVar7=42;
}else{
iVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_36(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
iVar8=42;
Global_20588=1;
}else{
iVar8=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_36(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_36(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8254, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_36(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890001.f_1;
func_81(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_81(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_84(){
if(Global_78558==0){
Global_8260[14 /*15*/].f_4=-99;
Global_8260[4 /*15*/].f_4=-99;
if(Global_2694521){
if(func_82(14)){
func_37(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
func_37(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
}else{
func_37(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
}}else{
func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
}}}


void func_85(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 34){
Global_8260[iVar0 /*15*/].f_4=-99;
iVar0++;
}
if(Global_78558==0){
iVar1=0;
while (iVar2 < 161){
if(func_86(iVar2, Global_20383)==1){
iVar1=1;
}
iVar2++;
}
func_37(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
if((Global_43257==15 && func_64(0)==0) && Global_8258==0){
func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
Global_20587=0;
Global_8259=255;
}else{
func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
Global_20587=1;
Global_8259=42;
}
if(iVar1==1){
func_37(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
}else{
func_37(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
}
func_37(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
func_37(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
func_37(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
if(Global_113648.f_14053.f_89==1){
func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
}
if(Global_113648.f_14053.f_88==1){
func_37(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
}
func_37(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
func_37(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
func_37(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
func_37(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_37(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_37(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
func_37(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_37(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_37(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
}else{
func_37(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
func_37(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
func_37(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
func_37(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
func_37(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
func_37(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
func_37(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
if(MISC::IS_BIT_SET(Global_4542297, 4)==1){
func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
}
func_37(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
func_37(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
func_37(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
func_37(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
func_37(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
func_37(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
func_37(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
func_37(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
func_37(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
func_37(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
func_37(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
func_37(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
func_37(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
func_37(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
func_37(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
func_37(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
if(!MISC::IS_BIT_SET(Global_4542297, 4)==1){
if(Global_1836102){
func_37(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 20)==1){
func_37(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 22)==1){
func_37(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 26)==1){
if(func_121()){
func_37(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
}else{
func_37(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
}}}
if((((MISC::IS_BIT_SET(Global_4542297, 4)==0 && Global_1836102==0) && MISC::IS_BIT_SET(Global_4542297, 20)==0) && MISC::IS_BIT_SET(Global_4542297, 22)==0) && MISC::IS_BIT_SET(Global_4542297, 26)==0){
if(func_121()){
func_37(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
}else{
func_37(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
}}}}

int func_86(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_19[iParam1];
}

int func_87(int iParam0){
int iVar0;
if(iParam0==1){}
if(iParam0==0){
if(func_90()==0){
return 0;
}}
if(func_88(&iVar0) && MISC::GET_PROFILE_SETTING(903)==1){
return 1;
}
if(!func_88(&iVar0)){
if(iVar0==6){
return 1;
}elseif(iVar0==7){
return 1;
}elseif(iVar0==8){
return 1;
}elseif(iVar0==10){
return 1;
}elseif(iVar0==12){
return 1;
}elseif(iVar0==13){
return 1;
}elseif(iVar0==11){
return 1;
}}
return 0;
}

int func_88(var uParam0){
if(func_89()){
*uParam0=11;
return 1;
}
return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(uParam0);
}


bool func_89(){
return Global_32441;
}

int func_90(){
if(func_91()){
if(!NETWORK::NETWORK_IS_NP_AVAILABLE()){
if(NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON()==4){
return 0;
}
if(NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON()==2){
return 0;
}
if(NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON()==1){
return 0;
}
if(NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON()==5){
return 0;
}}}
return 1;
}


bool func_91(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_92(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iLocal_111=ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
}
switch (iLocal_111){
case 0:
iLocal_87=5;
break;
case 1:
iLocal_87=5;
break;
case 2:
iLocal_87=4;
break;
case 3:
iLocal_87=4;
break;
case 4:
iLocal_87=3;
break;
case 5:
iLocal_87=2;
break;
default:
iLocal_87=3;
break;
}
iLocal_112=MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
if(iLocal_112 < 2){
if(iLocal_87 > 2){
iLocal_87=(iLocal_87 - 1);
}}
if(iLocal_113==1 || func_93()){
iLocal_87=0;
}
func_112(Global_20364, "SET_PROVIDER_ICON", to_float(iLocal_86), to_float(iLocal_87), -1082130432, -1082130432, -1082130432);
}

int func_93(){
bool bVar0;
struct<3> Var1;
int iVar2;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
bVar0=func_99();
if(func_98(bVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
iVar2=0;
while (iVar2 < Global_113648.f_7690.f_136){
if(MISC::IS_BIT_SET(Global_113648.f_7690[iVar2 /*15*/].f_2, bVar0)){
if(func_96(Var1, func_97(iVar2))){
return 1;
}}
iVar2++;
}
iVar2=0;
while (iVar2 < Global_113648.f_7690.f_764){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_651[iVar2 /*14*/].f_2, bVar0)){
if(func_96(Var1, func_95(iVar2))){
return 1;
}}
iVar2++;
}
iVar2=0;
while (iVar2 < Global_113648.f_7690.f_866){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_765[iVar2 /*10*/].f_2, bVar0)){
if(func_96(Var1, func_94(iVar2))){
return 1;
}}
iVar2++;
}}}
return 0;
}

int func_94(int iParam0){
return Global_113648.f_7690.f_765[iParam0 /*10*/].f_7;
}

int func_95(int iParam0){
return Global_113648.f_7690.f_651[iParam0 /*14*/].f_7;
}

int func_96(struct<3> Param0, int iParam1){
if(iParam1 !=-1){
if(iParam1 >=Global_43258){
return 0;
}
if(vdist2(Param0, Global_43258[iParam1 /*5*/]) <=(Global_43258[iParam1 /*5*/].f_3 * Global_43258[iParam1 /*5*/].f_3)){
return 1;
}elseif(Global_43258[iParam1 /*5*/].f_4 !=-1){
return func_96(Param0, Global_43258[iParam1 /*5*/].f_4);
}}
return 0;
}

int func_97(int iParam0){
return Global_113648.f_7690[iParam0 /*15*/].f_7;
}


bool func_98(int iParam0){
return iParam0 < 3;
}


var func__99(){
func_100();
return Global_113648.f_2365.f_539.f_4321;
}


void func_100(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_102(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_101(PLAYER::PLAYER_PED_ID());
if(func_98(iVar0) && (!func_82(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_98(Global_113648.f_2365.f_539.f_4321)){
Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
}
Global_113648.f_2365.f_539.f_4323=iVar0;
Global_113648.f_2365.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=145){
Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
}
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
}

int func_101(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_102(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_102(int iParam0){
if(func_98(iParam0)){
return func_103(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__103(int iParam0){
return Global_2028[iParam0 /*29*/];
}

int func_104(){
func_122();
return Global_113648.f_14053[Global_20383 /*20*/].f_8;
}
struct<13> func_105(var uParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
return Var0;
}


void func_106(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20383==0){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
default:
break;
}}
if(Global_20383==1){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
default:
break;
}}
if(Global_20383==2){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
default:
break;
}}
if(Global_20383==3){
switch (Global_4542573){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
default:
break;
}}}}

int func_107(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_108(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_108(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_109();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}


var func__109(){
return Global_1574918;
}


void func_110(){
if(func_82(14)){
if(Global_2694521){
if(Global_20383.f_1==6){
if(Global_20363==7){
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(7), -1082130432, -1082130432, -1082130432);
}else{
Global_20363=6;
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
}}}elseif(Global_20383.f_1==6){
func_112(Global_20364, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
}}
iLocal_89=CLOCK::GET_CLOCK_MINUTES();
if(iLocal_89 !=Global_8256){
Global_8256=iLocal_89;
iLocal_88=CLOCK::GET_CLOCK_HOURS();
iLocal_90=CLOCK::GET_CLOCK_DAY_OF_WEEK();
switch (iLocal_90){
case 0:
StringCopy(&cLocal_91, "CELL_920", 16);
break;
case 1:
StringCopy(&cLocal_91, "CELL_921", 16);
break;
case 2:
StringCopy(&cLocal_91, "CELL_922", 16);
break;
case 3:
StringCopy(&cLocal_91, "CELL_923", 16);
break;
case 4:
StringCopy(&cLocal_91, "CELL_924", 16);
break;
case 5:
StringCopy(&cLocal_91, "CELL_925", 16);
break;
case 6:
StringCopy(&cLocal_91, "CELL_926", 16);
break;
default:
StringCopy(&cLocal_91, "CELL_206", 16);
break;
}
func_81(Global_20364, "SET_TITLEBAR_TIME", to_float(iLocal_88), to_float(iLocal_89), -1f, -1f, -1f, &cLocal_91, 0, 0, 0, 0);
if(Global_20326==0){
func_92();
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iLocal_96=ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
}}}


void func_111(){
if(Global_78558){
StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
MOBILE::CREATE_MOBILE_PHONE(0);
}elseif(Global_20326){
MOBILE::CREATE_MOBILE_PHONE(4);
StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20383){
case 0:
StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
MOBILE::CREATE_MOBILE_PHONE(0);
break;
case 2:
StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
MOBILE::CREATE_MOBILE_PHONE(1);
break;
case 1:
StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
MOBILE::CREATE_MOBILE_PHONE(2);
break;
default:
StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
MOBILE::CREATE_MOBILE_PHONE(0);
break;
}}
Global_20346={
-90f, -130f, 0f 
};
if(GRAPHICS::GET_IS_HIDEF()){
Global_20328=0;
Global_20329[0 /*3*/]={
(GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f 
};
Global_20336[0 /*3*/]={
(GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f 
};
}else{
Global_20328=0;
Global_20329[0 /*3*/]={
(GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f 
};
Global_20336[0 /*3*/]={
(GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f 
};
}
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20329[Global_20328 /*3*/]);
MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20346, 0);
Global_20323=1;
}


void func_112(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


var func__113(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_114(){
Global_2800025.f_1=0;
Global_2800025=0;
Global_2800025.f_2=0;
Global_2800025.f_33=-1;
Global_2800025.f_34=-1;
StringCopy(&(Global_2800025.f_4), "", 64);
StringCopy(&(Global_2800025.f_39[0 /*16*/]), "", 64);
Global_2800025.f_38=0;
Global_2800025.f_56=0;
Global_2800025.f_57=0;
Global_2800025.f_58=-2;
Global_2800025.f_3=0;
func_115(&(Global_2800025.f_20));
}


void func_115(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=0;
}


void func_116(){
Global_2800025.f_2=1;
Global_2800025.f_38=1;
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION()){
while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY()){
wait(0);
}
NETWORK::NETWORK_SESSION_VOICE_LEAVE();
Global_2800025=0;
Global_2800025.f_2=0;
}elseif(func_117(Global_2800025.f_20)){
if(NETWORK::NETWORK_IS_FRIEND(&(Global_2800025.f_20))){
if(!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2800025.f_20))){
func_114();
}}}else{
func_114();
}}else{
func_114();
}
if(Global_2800025.f_37){
func_65(0);
}
Global_2800025.f_37=0;
Global_2800025.f_3=0;
}


bool func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


void func_118(){
Global_20591=0;
func_10();
}


void func_119(var uParam0, char* sParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_120(){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20352);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20352);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20353);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
}
if(Global_78558){
Global_113648.f_14053[3 /*20*/].f_10=func_107(1198, -1, 0);
}
if(MISC::IS_PC_VERSION()){
if(DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched")){
}elseif(((MISC::GET_GAME_TIMER() - iLocal_114) >=300 || iLocal_114==0) || iLocal_114 > MISC::GET_GAME_TIMER()){
PAD::SET_CONTROL_SHAKE(0, 100, 100);
iLocal_114=MISC::GET_GAME_TIMER();
}}elseif(Global_113648.f_14053[Global_20383 /*20*/].f_10==1){
if(((MISC::GET_GAME_TIMER() - iLocal_114) >=300 || iLocal_114==0) || iLocal_114 > MISC::GET_GAME_TIMER()){
PAD::SET_CONTROL_SHAKE(0, 100, 100);
iLocal_114=MISC::GET_GAME_TIMER();
}}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID())){
if(Global_78558){
if(!MISC::ARE_STRINGS_EQUAL(&(Global_9058[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1, 0) /*6*/]), "Silent Ringtone Dummy")){
AUDIO::PLAY_PED_RINGTONE(&(Global_9058[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1, 0) /*6*/]), PLAYER::PLAYER_PED_ID(), 1);
}}elseif(!MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14053[Global_20383 /*20*/].f_11), "Silent Ringtone Dummy")){
if(!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==1){
if(MISC::IS_PC_VERSION()){
if(DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched")){
}
else{
AUDIO::PLAY_PED_RINGTONE(&(Global_113648.f_14053[Global_20383 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
}}else{
AUDIO::PLAY_PED_RINGTONE(&(Global_113648.f_14053[Global_20383 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
}}}}}}

int func_121(){
if(Global_78558){
if(Global_1836499 || Global_1836500==1){
return 1;
}}
return 0;
}


void func_122(){
if(func_82(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]){
Global_20383=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]){
Global_20383=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]){
Global_20383=2;
}else{
Global_20383=0;
}}}else{
Global_20383=func_99();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}