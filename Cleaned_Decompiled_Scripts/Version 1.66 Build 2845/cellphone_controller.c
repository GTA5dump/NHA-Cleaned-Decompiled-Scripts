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
char* sLocal_20=NULL;
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
int iLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
var uLocal_37=0;
bool bLocal_38=0;
float fLocal_39=0f;
float fLocal_40=0f;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43[4]={
0, 0, 0, 0 
};
int iLocal_44[4]={
0, 0, 0, 0 
};
var uLocal_45[4]={
0, 0, 0, 0 
};
int iLocal_46[4]={
0, 0, 0, 0 
};
int iLocal_47=0;
var uLocal_48=0;
int iLocal_49=0;
var uLocal_50=0;
int iLocal_51=0;
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
var uLocal_62=0;
int iLocal_63=0;
int iLocal_64=0;
int iLocal_65=0;
bool bLocal_66=0;
float fLocal_67=0f;
float fLocal_68=0f;
float fLocal_69=0f;
float fLocal_70=0f;
float fLocal_71=0f;
float fLocal_72=0f;
float fLocal_73=0f;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
#endregion

void __EntryFunction__(){
struct<57> Var0;
int iVar1;
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
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_36=3;
fLocal_39=0f;
fLocal_40=0f;
fLocal_70=0.95f;
fLocal_71=0.07f;
fLocal_72=0.755f;
iLocal_81=9999;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
Global_113590=MISC::GET_GAME_TIMER();
func_136();
func_133();
func_131();
Global_20383.f_1=3;
Global_20371=0;
Global_20586=0;
Global_22760=0;
Var0.f_23=2;
Var0.f_56=16;
while (true){
wait(0);
if(Global_20383.f_1 > 3){
PAD::DISABLE_CONTROL_ACTION(0, 337, 1);
PAD::DISABLE_CONTROL_ACTION(0, 353, 1);
PAD::DISABLE_CONTROL_ACTION(0, 354, 1);
PAD::DISABLE_CONTROL_ACTION(0, 357, 1);
PAD::DISABLE_CONTROL_ACTION(0, 353, 1);
}
if(iLocal_79==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_79=1;
iLocal_81=func_128(12388, -1, 0);
}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iLocal_79==1){
switch (LOCALIZATION::GET_CURRENT_LANGUAGE()){
case -1:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
break;
case 0:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
break;
case 1:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_fr");
break;
case 2:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ge");
break;
case 3:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_it");
break;
case 4:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_sp");
break;
case 5:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pt");
break;
case 6:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pl");
break;
case 7:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ru");
break;
case 8:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ko");
break;
case 9:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ch");
break;
case 10:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ja");
break;
case 11:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_me");
break;
case 12:
SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_cn");
break;
}
if(Global_2793046.f_5057){
SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 1);
}
iLocal_79=2;
}
if(iLocal_79==2){
iLocal_80=SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
switch (iLocal_80){
case 3:
break;
case 0:
if(SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() > 0){
SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(0, &Var0);
if(Var0.f_1 !=iLocal_81){
Global_4541031=1;
}else{
Global_4541031=0;
}
}
iLocal_79=3;
break;
case 1:
break;
case 4:
Global_4541031=0;
iLocal_79=3;
break;
}}}else{
Global_4541031=0;
iLocal_79=0;
}
if(MISC::IS_PC_VERSION()){
if(MISC::IS_STUNT_JUMP_IN_PROGRESS()){
if(Global_20383.f_1==6){
Global_20383.f_1=3;
}}}
if(func_127(146)){
if(Global_78558==0){
iVar1=func_95(0, 0, 119);
if(iVar1 !=0){
func_93(iVar1);
}else{
func_92();
}
func_88(0);
}}
if(Global_2793046.f_4642==1){
if(Global_20383.f_1 > 3){
Global_20383.f_1=3;
}}
if(Global_78558==1){
if(Global_20383.f_1==3){
if(MISC::IS_BIT_SET(Global_4542297, 15)){
MISC::SET_BIT(&Global_4542297, 14);
wait(0);
while (!func_86(3, 0, 1, 0)){
wait(0);
}
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 15);
}
if(MISC::IS_BIT_SET(Global_4542297, 16)){
MISC::SET_BIT(&Global_4542297, 14);
wait(0);
while (!func_86(17, 0, 1, 0)){
wait(0);
}
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 16);
MISC::CLEAR_BIT(&Global_4542297, 27);
}
if(MISC::IS_BIT_SET(Global_4542297, 27)){
MISC::SET_BIT(&Global_4542297, 14);
wait(0);
while (!func_86(23, 0, 1, 0)){
wait(0);
}
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 16);
MISC::CLEAR_BIT(&Global_4542297, 27);
}
if(MISC::IS_BIT_SET(Global_4542297, 29)){
MISC::SET_BIT(&Global_4542297, 14);
wait(0);
while (!func_86(1, 0, 1, 0)){
wait(0);
}
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 29);
}}}
if(Global_78558==0){
if(MISC::IS_BIT_SET(Global_4542297, 11)){
if((Global_20383.f_1 !=10 && Global_20383.f_1 !=9) || func_85()==0){
MISC::CLEAR_BIT(&Global_4542297, 11);
MISC::SET_BIT(&Global_8254, 11);
}}elseif(Global_20383.f_1==10 || Global_20383.f_1==9){
if(func_85()){
MISC::SET_BIT(&Global_4542297, 11);
MISC::SET_BIT(&Global_8254, 11);
}}
if(MISC::IS_BIT_SET(Global_4542297, 12)){
MISC::CLEAR_BIT(&Global_4542297, 12);
MISC::SET_BIT(&Global_8254, 11);
}}elseif(MISC::IS_BIT_SET(Global_4542297, 12)){
if((Global_22788==0 || Global_22789==0) && !Global_22790){
MISC::CLEAR_BIT(&Global_4542297, 12);
MISC::SET_BIT(&Global_8254, 11);
}}elseif(Global_22790 || (Global_22788 > 0 && Global_22789==1)){
MISC::SET_BIT(&Global_4542297, 12);
MISC::SET_BIT(&Global_8254, 11);
}
if(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_IS_PUSH_TO_TALK_ACTIVE()){
if(!MISC::IS_BIT_SET(Global_4542297, 19)){
MISC::SET_BIT(&Global_4542297, 19);
MISC::SET_BIT(&Global_8254, 11);
}}elseif(MISC::IS_BIT_SET(Global_4542297, 19)){
MISC::CLEAR_BIT(&Global_4542297, 19);
MISC::SET_BIT(&Global_8254, 11);
}}
if(iLocal_77==0){
if(MISC::IS_BIT_SET(Global_8253, 25)){
STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_76, -1);
iLocal_74=MISC::GET_GAME_TIMER();
iLocal_77=1;
}}elseif(!MISC::IS_BIT_SET(Global_8253, 25)){
STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_76, -1);
iLocal_75=MISC::GET_GAME_TIMER();
iLocal_77=0;
STATS::STAT_SET_INT(joaat("sp_cellphone_sleep_time"), (iLocal_76 + (iLocal_75 - iLocal_74)), 1);
}
func_84();
func_83();
func_82();
func_80();
func_62();
func_61();
func_60();
if(MISC::IS_BIT_SET(Global_8254, 21)){
if(!AUDIO::IS_MOBILE_INTERFERENCE_ACTIVE()){
MISC::CLEAR_BIT(&Global_8254, 21);
}}
if(MISC::IS_BIT_SET(Global_8253, 7)){
func_55();
MISC::CLEAR_BIT(&Global_8253, 7);
}
if(MISC::IS_BIT_SET(Global_8253, 0)){
func_54();
}
if(MISC::IS_BIT_SET(Global_4542297, 0)){
func_53();
}
if(MISC::IS_BIT_SET(Global_8254, 11)){
Global_8957=0;
if(MISC::IS_BIT_SET(Global_8253, 25)){
Global_8957++;
}
if(MISC::IS_BIT_SET(Global_4542297, 11)){
if(Global_78558==0){
Global_8957++;
}}
if(MISC::IS_BIT_SET(Global_4542297, 28)){
if(Global_78558==1){
Global_8957++;
}}
if(MISC::IS_BIT_SET(Global_4542297, 12)){
if(Global_78558 && (Global_22789 || Global_22790)){
Global_8957++;
}}
if(MISC::IS_BIT_SET(Global_4542297, 19)){
Global_8957++;
}
if(Global_8957==0){
MISC::CLEAR_BIT(&Global_8254, 11);
iLocal_41=0;
}else{
iLocal_41=1;
}}
if(!func_52()){
if(!HUD::IS_WARNING_MESSAGE_ACTIVE()){
if(Global_20383.f_1==3){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(Global_78558){
func_37();
}else{
func_37();
}}
}}}}
if(Global_20383.f_1==4){
if(MISC::IS_BIT_SET(Global_8254, 21)){
func_37();
}}
func_23();
}elseif(func_16()){
}
switch (Global_22760){
case 0:
func_15();
if(Global_22762==1){
func_14();
}
break;
case 1:
func_13();
break;
case 2:
func_12();
break;
case 3:
func_11();
break;
case 4:
func_10();
break;
case 5:
func_9();
break;
case 14:
func_14();
break;
case 6:
if(Global_22762==1){
func_14();
}
if(Global_22763==1){
Global_22760=9;
Global_22763=0;
}
break;
case 8:
func_8();
break;
case 9:
func_5();
break;
case 10:
func_4();
break;
case 11:
func_3();
break;
case 12:
func_2();
break;
case 13:
func_1();
break;
}}}


void func_1(){
iLocal_54=GRAPHICS::GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(Global_22764);
switch (iLocal_54){
case 0:
Global_22760=4;
break;
case 1:
break;
case 2:
MISC::SET_BIT(&Global_8254, 15);
func_14();
break;
}}


void func_2(){
if(GRAPHICS::LOAD_HIGH_QUALITY_PHOTO(Global_22764)){
Global_22760=13;
}else{
func_14();
}}


void func_3(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_52=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_50);
}else{
iLocal_51=MISC::GET_GAME_TIMER();
iLocal_52=(iLocal_51 - iLocal_49);
}
if(iLocal_52 > 3000){
HUD::BUSYSPINNER_OFF();
}
if(iLocal_52 > 3200){
Global_22760=6;
}}


void func_4(){
iLocal_54=GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
switch (iLocal_54){
case 0:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_50=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_49=MISC::GET_GAME_TIMER();
}
Global_22760=11;
settimerb(0);
break;
case 1:
break;
case 2:
func_14();
break;
}}


void func_5(){
Global_22765=-1;
if(Global_78558){
if(func_7()){
GRAPHICS::SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(Global_4718592.f_160097, Global_4718592.f_160097.f_1);
}
if(func_6(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_445), 0)){
GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(1);
}else{
GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(0);
}}
if(GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_22765)){
Global_22760=10;
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278");
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
}else{
func_14();
}}


bool func_6(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}


bool func_7(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


void func_8(){
iLocal_54=GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(1);
switch (iLocal_54){
case 0:
Global_22760=9;
break;
case 1:
break;
case 2:
func_14();
break;
}}


void func_9(){
iLocal_54=GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_55);
switch (iLocal_54){
case 0:
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(1, 1);
Global_22760=6;
break;
case 1:
break;
case 2:
if(iLocal_55==3){
MISC::SET_BIT(&Global_8254, 14);
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
Global_22760=6;
}
if(Global_22760==5){
if(iLocal_55==0){
Global_22760=4;
iLocal_55=1;
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
wait(0);
}}
if(Global_22760==5){
if(iLocal_55==1){
Global_22760=4;
iLocal_55=2;
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
wait(0);
}}
if(Global_22760==5){
if(iLocal_55==2){
Global_22760=4;
iLocal_55=3;
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
wait(0);
}}
break;
}}


void func_10(){
if(GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_55)){
Global_22760=5;
}else{
MISC::SET_BIT(&Global_8254, 15);
func_14();
}}


void func_11(){
iLocal_54=GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
switch (iLocal_54){
case 0:
Global_22760=4;
iLocal_55=2;
break;
case 1:
break;
case 2:
Global_20383.f_1=3;
func_14();
break;
}}


void func_12(){
if(GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO()){
Global_22760=3;
}}


void func_13(){
if(timerb() > 0){
Global_22760=2;
}}


void func_14(){
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
HUD::BUSYSPINNER_OFF();
Global_22761=0;
Global_22762=0;
Global_22763=0;
Global_22760=0;
}


void func_15(){
if(Global_22761){
Global_22760=1;
MISC::CLEAR_BIT(&Global_8254, 14);
settimerb(0);
}}

int func_16(){
char* sVar0;
if((func_22(2, Global_20350, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !MISC::IS_STUNT_JUMP_IN_PROGRESS()){
if(MISC::IS_PC_VERSION()){
if(DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched")){
sVar0=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_ANTIH_A");
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_ANTIH");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_21(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID())){
if(PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68)){
return 0;
}}}
Global_22784=0;
Global_22785=0;
if(HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID()==Global_22782 && HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() !=-1){
Global_22784=Global_22783;
iLocal_58=MISC::GET_GAME_TIMER();
iLocal_60=0;
iLocal_61=0;
while (((func_20(2, Global_20350) && iLocal_60 < 250) && Global_20592==0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)){
if(Global_8957 > 0){
func_17();
}
wait(0);
iLocal_59=MISC::GET_GAME_TIMER();
iLocal_60=(iLocal_59 - iLocal_58);
if(Global_8957 > 0){
func_17();
}}
if((func_20(2, Global_20350) && Global_20592==0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)){
iLocal_61=1;
}
if(Global_20592==0){
if(iLocal_61==1){
Global_22785=1;
Global_22784=Global_22783;
if(Global_22784==1){
}
if(Global_22784==2){
}
if(Global_22784==3){
}
if(Global_22784==0){
}
if(Global_22784==4){
}}else{
Global_22784=0;
}}else{
Global_22784=0;
}}else{
Global_22784=0;
}
if(!HUD::IS_HUD_COMPONENT_ACTIVE(19)){
return 1;
}else{
Global_22784=0;
Global_22785=0;
return 0;
}}
return 0;
}


void func_17(){
int iVar0;
iVar0=255;
if(Global_22790){
fLocal_71=-0.055f;
fLocal_72=0.745f;
fLocal_67=GRAPHICS::GET_SAFE_ZONE_SIZE();
fLocal_73=((100f * fLocal_70) - (100f * fLocal_67));
fLocal_68=(fLocal_71 + (fLocal_73 * 0.005f));
fLocal_69=(fLocal_72 - (fLocal_73 * 0.005f));
if(!func_19()){
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
if(MISC::IS_PC_VERSION()){
GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
}
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}else{
if(MISC::IS_PC_VERSION()){
if(Global_2646729.f_1593){
bLocal_38=false;
}elseif(MISC::IS_BIT_SET(Global_8253, 13)){
if(MISC::IS_BIT_SET(Global_4542297, 19)){
bLocal_38=false;
}else{
bLocal_38=true;
}}else{
bLocal_38=false;
}}elseif(Global_2646729.f_1593 || MISC::IS_BIT_SET(Global_8253, 13)){
bLocal_38=true;
}else{
bLocal_38=false;
}
if(func_52()){
bLocal_38=true;
}
if(MISC::IS_BIT_SET(Global_4542297, 28)){
iVar0=125;
if(bLocal_38==1){
bLocal_38=false;
}}
if(HUD::IS_MINIMAP_RENDERING()){
if(!HUD::IS_RADAR_HIDDEN()){
if(!bLocal_38){
if(!func_18()){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
if(MISC::IS_PC_VERSION() && Global_2646729.f_1593){
fLocal_71=0.165f;
fLocal_72=0.755f;
}else{
fLocal_71=0.07f;
fLocal_72=0.755f;
}
fLocal_67=GRAPHICS::GET_SAFE_ZONE_SIZE();
fLocal_73=((100f * fLocal_70) - (100f * fLocal_67));
fLocal_68=(fLocal_71 + (fLocal_73 * 0.005f));
fLocal_69=(fLocal_72 - (fLocal_73 * 0.005f));
if(!func_19()){
if(MISC::IS_PC_VERSION()){
GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
}
if(Global_2646729.f_1593){
fLocal_39=0.09f;
fLocal_40=-0.25f;
if(MISC::IS_PC_VERSION()){
if(MISC::IS_BIT_SET(Global_4542297, 28)){
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
}
}
else{
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_37, (fLocal_68 + fLocal_39), (fLocal_69 + fLocal_40), 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
}
}
else{
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
}}}
}}}}}}}

int func_18(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0){
return 1;
}
return 0;
}

int func_19(){
if(MISC::IS_BIT_SET(Global_8255, 3)){
return 1;
}
return 0;
}

int func_20(int iParam0, int iParam1){
if(PAD::IS_CONTROL_PRESSED(iParam0, iParam1)){
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0){
return 0;
}}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}else{
return 1;
}}
return 0;
}

int func_21(var uParam0){
int iVar0;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(uParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
if(((iVar0==joaat("weapon_sniperrifle") || iVar0==joaat("weapon_heavysniper")) || iVar0==joaat("weapon_marksmanrifle")) || iVar0==joaat("weapon_heavysniper_mk2")){
return 1;
}}}
return 0;
}

int func_22(int iParam0, int iParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1))){
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


void func_23(){
switch (Global_20383.f_1){
case 4:
if(MISC::IS_BIT_SET(Global_8254, 21)){
}else{
if(SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
}else{
if(!SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand")){
wait(0);
if(Global_8957 > 0){
func_17();
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
Global_20380=start_new_script("cellphone_flashhand", 1424);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}
func_36(0);
}
if(Global_21735 || Global_21736){
if(!SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand")){
wait(0);
if(Global_8957 > 0){
func_17();
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
Global_20380=start_new_script("cellphone_flashhand", 1424);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364) && Global_20366==0){
wait(0);
if(Global_8957 > 0){
func_17();
}}
if(Global_20366==0){
Global_20383.f_1=9;
func_24();
}}else{
bLocal_66=false;
if(Global_78558 && (Global_22787 || Global_1890001.f_5)){
bLocal_66=true;
}
if(((Global_113648.f_14053[Global_20383 /*20*/].f_18==1 || Global_113648.f_14053[Global_20383 /*20*/].f_17==1) || bLocal_66==1) || Global_22784 !=0){
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364) && Global_20366==0){
wait(0);
if(Global_8957 > 0){
func_17();
}
}
if(Global_20366==0){
if(Global_20383.f_1 > 3){
Global_20383.f_1=6;
if(Global_22784==0){
if(bLocal_66){
}
elseif(Global_78558==0){
if(Global_113648.f_14053[Global_20383 /*20*/].f_17==1){
func_86(1, 0, 1, 0);
}
}}else{
if(Global_22784==3){
}
if(Global_22784==1){
}
if(Global_22784==2){
}
if(Global_22784==4){
}}}
}}else{
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364) && Global_20366==0){
wait(0);
if(Global_8957 > 0){
func_17();
}
}
if(Global_20366==0){
if(Global_20383.f_1 > 3){
if(Global_21735 || Global_21736){
Global_20383.f_1=9;
}else{
Global_20383.f_1=6;
}}
}}}}
break;
}}


void func_24(){
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
func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_33(Global_8858);
if(Global_8858==1){
func_35(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20387;
}else{
func_35(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20388), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20388;
}
if(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20586==0){
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(Global_78558){
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
if(Global_20585==1){
if(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
}}elseif(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8253, 17);
}
if(Global_78558){
func_30();
MISC::CLEAR_BIT(&Global_8255, 9);
func_35(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
}
break;
case 7:
break;
case 10:
func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
break;
case 9:
if(Global_20382==1){
func_29();
func_35(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_28("CELL_300");
func_28("CELL_217");
func_28("CELL_217");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_27(Global_7568, Global_20383)==0){
func_32(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
}else{
func_32(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}elseif(Global_21725==4 || Global_21725==3){
func_35(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
func_29();
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_28("CELL_300");
func_28("CELL_219");
func_28("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
if(Global_21983){
StringCopy(&Var0, "CELL_219", 24);
}else{
StringCopy(&Var0, "CELL_211", 24);
}
if(func_27(Global_7568, Global_20383)==0){
func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_32(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
}else{
func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_32(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &Var0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
}}
func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_25();
break;
default:
break;
}}


void func_25(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
func_26();
if(Global_20382==1){
if(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_21772){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_8253, 20)){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}}}


void func_26(){
if(Global_78558){
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}}

int func_27(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}


void func_28(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_29(){
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


void func_30(){
if(Global_78558){
if(func_31()==0){
return;
}
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}}

int func_31(){
return 0;
}


void func_32(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
func_28(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_28(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_28(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_28(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_28(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_33(int iParam0){
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
if(func_34(14)){
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
func_28(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694521){
if(iVar1==14){
func_32(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_32(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_32(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_32(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_32(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&(Global_8260[iVar1 /*15*/]));
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
func_28(&(Global_8260[iVar1 /*15*/]));
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
func_28(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8254, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890001.f_1;
func_32(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


bool func_34(int iParam0){
return Global_43257==iParam0;
}


void func_35(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


void func_36(bool bParam0){
if(bParam0){
if(Global_20383.f_1==9){
Global_20584=1;
}}else{
Global_20584=0;
}}


void func_37(){
if(func_16() || MISC::IS_BIT_SET(Global_8253, 8)){
MISC::CLEAR_BIT(&Global_8253, 8);
func_45();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
if(func_44()){
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
if(MISC::IS_BIT_SET(Global_8254, 21)){
MISC::CLEAR_BIT(&Global_8254, 21);
}
if(Global_20592==1){
Global_20592=0;
}
switch (Global_20383.f_1){
case 3:
Global_20383.f_1=4;
if(iLocal_78==0){
func_38();
iLocal_78=1;
}
break;
default:
break;
}
Global_20582=1;
}}}}}


void func_38(){
if(Global_4541031==1){
if(!func_43()){
return;
}
if(func_39(PLAYER::PLAYER_ID())){
if(MISC::GET_PROFILE_SETTING(803)==1){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_EMAIL_EVENT");
HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
}elseif(MISC::GET_PROFILE_SETTING(803) !=1){
}}}}

int func_39(int iParam0){
int iVar0;
struct<13> Var1;
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==0){
return 0;
}
iVar0=-1;
if(iParam0 !=PLAYER::PLAYER_ID()){
iVar0=iParam0;
if(iVar0==-1){
return 0;
}}
if(MISC::IS_PS3_VERSION() || func_42()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
if(MISC::IS_XBOX360_VERSION() || func_41()){
if(iParam0==PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, 1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1)){
return 1;
}}else{
Var1={
func_40(iParam0) 
};
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1))){
return 1;
}}}
if(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
return 0;
}
struct<13> func_40(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


bool func_41(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


bool func_42(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

int func_43(){
if(func_42()){
if(NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()==0){
return 1;
}}elseif(func_41()){
if(NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()==0){
return 1;
}}elseif(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}
return 0;
}

int func_44(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if((((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==1){
return 1;
}else{
return 0;
}}
return 1;
}


void func_45(){
if(func_34(14)){
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
Global_20383=func_46();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__46(){
func_47();
return Global_113648.f_2365.f_539.f_4321;
}


void func_47(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_50(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_49(PLAYER::PLAYER_PED_ID());
if(func_48(iVar0) && (!func_34(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_48(Global_113648.f_2365.f_539.f_4321)){
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


bool func_48(int iParam0){
return iParam0 < 3;
}

int func_49(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_50(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_50(int iParam0){
if(func_48(iParam0)){
return func_51(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__51(int iParam0){
return Global_2028[iParam0 /*29*/];
}

int func_52(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_53(){
char cVar0[64];
int iVar1;
char cVar2[64];
char cVar3[64];
char cVar4[64];
char cVar5[64];
MISC::CLEAR_BIT(&Global_4542297, 0);
if(Global_22786 !=0){
if(PED::IS_PEDHEADSHOT_VALID(Global_22786)){
if(PED::IS_PEDHEADSHOT_READY(Global_22786)){
StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_22786), 64);
Global_22794[Global_22792]=Global_22786;
}else{
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
Global_22794[Global_4542281]=0;
}}else{
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
Global_22794[Global_4542281]=0;
}}else{
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_7)), 64);
Global_22794[Global_4542281]=0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
}elseif(MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL")){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
}
if(((((((Global_4541032[Global_4542281 /*104*/].f_32==4 || Global_4541032[Global_4542281 /*104*/].f_32==5) || Global_4541032[Global_4542281 /*104*/].f_32==6) || Global_4541032[Global_4542281 /*104*/].f_32==7) || Global_4541032[Global_4542281 /*104*/].f_32==8) || Global_4541032[Global_4542281 /*104*/].f_32==9) || Global_4541032[Global_4542281 /*104*/].f_32==10) || Global_4541032[Global_4542281 /*104*/].f_32==11){
iVar1=0;
switch (Global_4541032[Global_4542281 /*104*/].f_49){
case 1:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01");
break;
case 2:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02");
break;
case 3:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03");
break;
case 4:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04");
break;
case 5:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05");
break;
case 6:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06");
break;
case 7:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07");
break;
case 8:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08");
break;
case 9:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09");
break;
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/]));
while (iVar1 < Global_4541032[Global_4542281 /*104*/].f_49){
switch (Global_4541032[Global_4542281 /*104*/].f_32){
case 4:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2793046.f_1755[iVar1 /*4*/]));
break;
case 5:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935188[iVar1 /*4*/]));
break;
case 6:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935229[iVar1 /*4*/]));
break;
case 7:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935250[iVar1 /*4*/]));
break;
case 8:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935267[iVar1 /*4*/]));
break;
case 9:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935280[iVar1 /*4*/]));
break;
case 10:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935293[iVar1 /*4*/]));
break;
case 11:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935306[iVar1 /*4*/]));
break;
}
iVar1++;
}
StringCopy(&cVar2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_3)), 64);
uLocal_48=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar2, 0);
MISC::SET_BIT(&Global_4542297, 1);
Global_22783=1;
Global_22782=uLocal_48;
Global_22786=0;
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_4541032[Global_4542281 /*104*/]));
switch (Global_4541032[Global_4542281 /*104*/].f_32){
case 0:
break;
case 1:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_33));
if(Global_4541032[Global_4542281 /*104*/].f_66==1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL")){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_67));
}
if((Global_4541032[Global_4542281 /*104*/].f_66==2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_83), "NULL")){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541032[Global_4542281 /*104*/].f_67))){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/].f_67));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_67));
}
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541032[Global_4542281 /*104*/].f_83))){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/].f_83));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_83));
}}
break;
case 2:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541032[Global_4542281 /*104*/].f_49);
break;
case 3:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_33));
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541032[Global_4542281 /*104*/].f_49);
if(Global_4541032[Global_4542281 /*104*/].f_66==1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL")){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_67));
}
if((Global_4541032[Global_4542281 /*104*/].f_66==2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_83), "NULL")){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541032[Global_4542281 /*104*/].f_67))){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/].f_67));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_67));
}
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541032[Global_4542281 /*104*/].f_83))){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/].f_83));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_83));
}}
break;
}
if(Global_4541032[Global_4542281 /*104*/].f_17==145){
StringCopy(&cVar3, "<C>", 64);
StringConCat(&cVar3, &Global_8941, 64);
StringConCat(&cVar3, "</C>", 64);
uLocal_48=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar3, 0);
MISC::SET_BIT(&Global_4542297, 1);
Global_22783=1;
Global_22782=uLocal_48;
}else{
StringCopy(&cVar4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_3)), 64);
if(Global_4541032[Global_4542281 /*104*/].f_17==98){
StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
StringConCat(&cVar5, &cVar4, 64);
uLocal_48=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar5, 0);
}else{
uLocal_48=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar4, 0);
}
MISC::SET_BIT(&Global_4542297, 1);
Global_22783=1;
Global_22782=uLocal_48;
Global_22786=0;
}}
Global_4541032[Global_4542281 /*104*/].f_16=uLocal_48;
}


void func_54(){
char cVar0[64];
char cVar1[64];
char* sVar2;
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
if(Global_8958==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
StringCopy(&cVar1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8863[1 /*6*/])), 64);
sVar2=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8863[1 /*6*/]));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8253, 0);
}


void func_55(){
if(MISC::IS_BIT_SET(Global_8253, 1)){
func_58();
func_56();
Global_113648.f_14053[Global_20383 /*20*/].f_18=1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_45[Global_20383]=NETWORK::GET_NETWORK_TIME();
iLocal_43[Global_20383]=1;
}elseif(!MISC::IS_BIT_SET(Global_8253, 10)){
iLocal_44[Global_20383]=MISC::GET_GAME_TIMER();
iLocal_43[Global_20383]=1;
}else{
iLocal_44[0]=MISC::GET_GAME_TIMER();
iLocal_44[2]=MISC::GET_GAME_TIMER();
iLocal_44[1]=MISC::GET_GAME_TIMER();
iLocal_43[0]=1;
iLocal_43[2]=1;
iLocal_43[1]=1;
}
MISC::CLEAR_BIT(&Global_8253, 1);
}}


void func_56(){
func_45();
if(Global_78558){
Global_113648.f_14053[3 /*20*/].f_10=func_128(1198, -1, 0);
}
if(Global_113648.f_14053[Global_20383 /*20*/].f_10==1){
if(!func_57(0)){
PAD::SET_CONTROL_SHAKE(0, 2000, 100);
}}}

int func_57(int iParam0){
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


void func_58(){
char cVar0[64];
int iVar1;
int iVar2;
char cVar3[64];
char cVar4[64];
char cVar5[64];
char cVar6[64];
if(Global_22786 !=0){
if(PED::IS_PEDHEADSHOT_VALID(Global_22786)){
if(PED::IS_PEDHEADSHOT_READY(Global_22786)){
StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_22786), 64);
Global_22794[Global_22792]=Global_22786;
}else{
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
Global_22794[Global_22792]=0;
}}else{
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
Global_22794[Global_22792]=0;
}}else{
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_7)), 64);
if(Global_113648.f_14143[Global_22792 /*104*/].f_17==159){
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_COMIC_P"), 64);
}
Global_22794[Global_22792]=0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
}elseif(MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL")){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
}
if((((((((Global_113648.f_14143[Global_22792 /*104*/].f_32==4 || Global_113648.f_14143[Global_22792 /*104*/].f_32==5) || Global_113648.f_14143[Global_22792 /*104*/].f_32==6) || Global_113648.f_14143[Global_22792 /*104*/].f_32==7) || Global_113648.f_14143[Global_22792 /*104*/].f_32==8) || Global_113648.f_14143[Global_22792 /*104*/].f_32==9) || Global_113648.f_14143[Global_22792 /*104*/].f_32==10) || Global_113648.f_14143[Global_22792 /*104*/].f_32==11) || Global_113648.f_14143[Global_22792 /*104*/].f_32==12){
iVar1=0;
iVar2=func_59(9, Global_113648.f_14143[Global_22792 /*104*/].f_49);
switch (iVar2){
case 1:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01");
break;
case 2:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02");
break;
case 3:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03");
break;
case 4:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04");
break;
case 5:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05");
break;
case 6:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06");
break;
case 7:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07");
break;
case 8:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08");
break;
case 9:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09");
break;
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/]));
while (iVar1 < iVar2){
switch (Global_113648.f_14143[Global_22792 /*104*/].f_32){
case 4:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2793046.f_1755[iVar1 /*4*/]));
break;
case 5:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935188[iVar1 /*4*/]));
break;
case 6:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935229[iVar1 /*4*/]));
break;
case 7:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935250[iVar1 /*4*/]));
break;
case 8:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935267[iVar1 /*4*/]));
break;
case 9:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935280[iVar1 /*4*/]));
break;
case 10:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935293[iVar1 /*4*/]));
break;
case 11:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935306[iVar1 /*4*/]));
break;
case 12:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1935319[iVar1 /*4*/]));
break;
}
iVar1++;
}
StringCopy(&cVar3, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_3)), 64);
uLocal_48=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar3, 0);
Global_22783=3;
Global_22782=uLocal_48;
Global_22786=0;
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_113648.f_14143[Global_22792 /*104*/]));
switch (Global_113648.f_14143[Global_22792 /*104*/].f_32){
case 0:
break;
case 1:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_33));
if(Global_113648.f_14143[Global_22792 /*104*/].f_66==1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL")){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
}
if((Global_113648.f_14143[Global_22792 /*104*/].f_66==2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), "NULL")){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_113648.f_14143[Global_22792 /*104*/].f_67))){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
}
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_113648.f_14143[Global_22792 /*104*/].f_83))){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
}}
break;
case 2:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113648.f_14143[Global_22792 /*104*/].f_49);
break;
case 3:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_33));
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113648.f_14143[Global_22792 /*104*/].f_49);
if(Global_113648.f_14143[Global_22792 /*104*/].f_66==1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL")){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
}
if((Global_113648.f_14143[Global_22792 /*104*/].f_66==2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), "NULL")){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_113648.f_14143[Global_22792 /*104*/].f_67))){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
}
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_113648.f_14143[Global_22792 /*104*/].f_83))){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
}}
break;
}
if(Global_113648.f_14143[Global_22792 /*104*/].f_17==145){
StringCopy(&cVar4, "<C>", 64);
StringConCat(&cVar4, &Global_8941, 64);
StringConCat(&cVar4, "</C>", 64);
uLocal_48=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar4, 0);
Global_22783=3;
Global_22782=uLocal_48;
}else{
StringCopy(&cVar5, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_3)), 64);
if(Global_113648.f_14143[Global_22792 /*104*/].f_17==98){
StringCopy(&cVar6, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
StringConCat(&cVar6, &cVar5, 64);
uLocal_48=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar6, 0);
}else{
uLocal_48=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar5, 0);
}
Global_22783=3;
Global_22782=uLocal_48;
Global_22786=0;
}}
Global_113648.f_14143[Global_22792 /*104*/].f_16=uLocal_48;
}

int func_59(int iParam0, int iParam1){
if(iParam0 < iParam1){
return iParam0;
}elseif(iParam1 < iParam0){
return iParam1;
}
return iParam0;
}


void func_60(){
if(MISC::IS_BIT_SET(Global_8253, 19)){
MISC::CLEAR_BIT(&Global_8253, 19);
func_45();
Global_113648.f_14053[3 /*20*/].f_18=0;
Global_113648.f_14053[3 /*20*/].f_17=0;
}}


void func_61(){
if(iLocal_43[Global_20383]==1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_47=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_45[Global_20383]);
}else{
iLocal_46[Global_20383]=MISC::GET_GAME_TIMER();
iLocal_47=(iLocal_46[Global_20383] - iLocal_44[Global_20383]);
}
if(iLocal_47 > 300000){
Global_113648.f_14053[Global_20383 /*20*/].f_18=0;
Global_113648.f_14053[Global_20383 /*20*/].f_17=0;
iLocal_43[Global_20383]=0;
}}}


void func_62(){
int iVar0;
func_45();
if(Global_78558==0){
if(!func_52()){
if(iLocal_53==0){
if((Global_113648.f_14143[21 /*104*/].f_24 !=0 || Global_113648.f_14143[22 /*104*/].f_24 !=0) || Global_113648.f_14143[23 /*104*/].f_24 !=0){
switch (Global_20383){
case 0:
if(Global_113648.f_14143[21 /*104*/].f_24 !=0){
iLocal_42=21;
iLocal_53=1;
settimera(0);
}
break;
case 1:
if(Global_113648.f_14143[22 /*104*/].f_24 !=0){
iLocal_42=22;
iLocal_53=1;
settimera(0);
}
break;
case 2:
if(Global_113648.f_14143[23 /*104*/].f_24 !=0){
iLocal_42=23;
iLocal_53=1;
settimera(0);
}
break;
default:
break;
}}}elseif(timera() > 15000){
iLocal_53=0;
iVar0=0;
func_45();
if(iLocal_42==21 && Global_20383 !=0){
iVar0=1;
}
if(iLocal_42==22 && Global_20383 !=1){
iVar0=1;
}
if(iLocal_42==23 && Global_20383 !=2){
iVar0=1;
}
if(Global_113648.f_14143[iLocal_42 /*104*/].f_24 !=0 && iVar0==0){
if(!func_34(14)){
if(func_65(Global_113648.f_14143[iLocal_42 /*104*/].f_17, &(Global_113648.f_14143[iLocal_42 /*104*/]), Global_113648.f_14143[iLocal_42 /*104*/].f_24, Global_113648.f_14143[iLocal_42 /*104*/].f_25, Global_113648.f_14143[iLocal_42 /*104*/].f_26, Global_113648.f_14143[iLocal_42 /*104*/].f_29, 0, 1, Global_113648.f_14143[iLocal_42 /*104*/].f_31, Global_113648.f_14143[iLocal_42 /*104*/].f_30)){
Global_113648.f_14143[iLocal_42 /*104*/].f_24=0;
}}}}
if(iLocal_64==0){
if(Global_8929[Global_20383]){
iLocal_64=1;
iLocal_65=Global_20383;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_62=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_56=MISC::GET_GAME_TIMER();
}}}else{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_63=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_62);
}else{
iLocal_57=MISC::GET_GAME_TIMER();
iLocal_63=(iLocal_57 - iLocal_56);
}
if(iLocal_63 > 7000){
if(func_63(0)){
Global_8863[1 /*6*/]={
Global_8912[Global_20383 /*4*/] 
};
Global_8939=Global_8934[Global_20383];
Global_8929[Global_20383]=0;
iLocal_64=0;
}}
if(iLocal_65 !=Global_20383){
iLocal_64=0;
}}}}}


bool func_63(int iParam0){
return func_64(iParam0, Global_43257);
}

int func_64(int iParam0, int iParam1){
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

int func_65(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9){
int iVar0;
char* sVar1;
int iVar2;
char* sVar3;
int iVar4;
char* sVar5;
char* sVar6;
int iVar7;
MISC::CLEAR_BIT(&Global_8253, 10);
iVar0=0;
sVar1="NULL";
iVar2=-99;
sVar3="NULL";
iVar4=0;
sVar5="NULL";
sVar6="NULL";
iVar7=3;
if(func_67(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_8960=iParam6;
Global_8863[3 /*6*/]={
func_66(iParam0) 
};
Global_8940=iParam0;
MISC::SET_BIT(&Global_8253, 1);
MISC::SET_BIT(&Global_8253, 7);
}
return 1;
}
return 0;
}


struct<4> func_66(int iParam0){
return Global_2028[iParam0 /*29*/].f_3;
}

int func_67(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_45();
iVar0=0;
switch (iParam16){
case 0:
if(Global_20383==0){
iVar0=0;
}else{
iVar0=1;
}
break;
case 2:
if(Global_20383==2){
iVar0=0;
}else{
iVar0=1;
}
break;
case 1:
if(Global_20383==1){
iVar0=0;
}else{
iVar0=1;
}
break;
default:
iVar0=0;
break;
}
if(iVar0==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}}
if(Global_113648.f_14053[Global_20383 /*20*/].f_17==1){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}}
if(func_79()==0){
func_77();
return 0;
}
func_76(Global_22792);
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/]), sParam1, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_113648.f_14143[Global_22792 /*104*/].f_24=iParam2;
}
Global_113648.f_14143[Global_22792 /*104*/].f_25=iParam7;
Global_113648.f_14143[Global_22792 /*104*/].f_26=uParam8;
Global_113648.f_14143[Global_22792 /*104*/].f_29=uParam9;
Global_113648.f_14143[Global_22792 /*104*/].f_30=uParam12;
Global_113648.f_14143[Global_22792 /*104*/].f_31=uParam11;
Global_113648.f_14143[Global_22792 /*104*/].f_28=0;
Global_113648.f_14143[Global_22792 /*104*/].f_32=iParam3;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_49=iParam6;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_66=iParam13;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);
if(MISC::IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
Global_8959=4;
func_75(0);
func_75(2);
func_75(1);
}else{
func_45();
switch (iParam16){
case 3:
Global_113648.f_14143[Global_22792 /*104*/].f_99[Global_20383]=1;
break;
case 0:
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
break;
case 2:
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
break;
case 1:
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20383){
case 0:
func_75(0);
Global_8959=0;
break;
case 1:
func_75(1);
Global_8959=1;
break;
case 2:
func_75(2);
Global_8959=2;
break;
case 3:
func_75(3);
Global_8959=3;
break;
default:
Global_8959=4;
break;
}}}
if(iParam7==1){
if(MISC::IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14053[0 /*20*/].f_17=1;
Global_113648.f_14053[1 /*20*/].f_17=1;
Global_113648.f_14053[2 /*20*/].f_17=1;
}else{
switch (iParam16){
case 3:
Global_113648.f_14053[Global_20383 /*20*/].f_17=1;
break;
case 0:
Global_113648.f_14053[0 /*20*/].f_17=1;
break;
case 2:
Global_113648.f_14053[2 /*20*/].f_17=1;
break;
case 1:
Global_113648.f_14053[1 /*20*/].f_17=1;
break;
}}}
Global_22794[Global_22792]=0;
if(bParam10){
func_45();
if(Global_20326){
StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20383){
case 0:
StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
break;
case 2:
StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
break;
case 1:
StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
break;
default:
StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==1){
if(!func_74()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20372, 1);
}}}
if(!Global_20585){
if(Global_20383.f_1==6){
func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_33(1);
func_35(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
if(Global_1977527 !=-1 && iParam0==Global_1977527){
bVar1=true;
}
func_68(iParam0, sParam1, bVar1, func_73(PLAYER::PLAYER_ID()));
return 1;
}


void func_68(int iParam0, char* sParam1, bool bParam2, var uParam3){
if(!func_69()){
return;
}
STATS::PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
if(bParam2){
Global_1977527=-1;
}}

int func_69(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_72()){
return 0;
}
if(func_70(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_70(int iParam0){
return func_71(iParam0, 20);
}


var func__71(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_72(){
return -1;
}


var func__73(int iParam0){
return Global_1853910[iParam0 /*862*/].f_205.f_6;
}


bool func_74(){
return Global_1575060;
}


void func_75(int iParam0){
var uVar0;
var uVar1;
uVar0=Global_113648.f_14053[iParam0 /*20*/].f_8;
uVar0=uVar0;
uVar1=uVar1;
}


void func_76(int iParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
uVar0=CLOCK::GET_CLOCK_SECONDS();
uVar1=CLOCK::GET_CLOCK_MINUTES();
uVar2=CLOCK::GET_CLOCK_HOURS();
uVar3=CLOCK::GET_CLOCK_DAY_OF_MONTH();
uVar4=CLOCK::GET_CLOCK_MONTH() + 1;
uVar5=CLOCK::GET_CLOCK_YEAR();
Global_113648.f_14143[iParam0 /*104*/].f_18=uVar0;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_1=uVar1;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_2=uVar2;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_3=uVar3;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_4=uVar4;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_5=uVar5;
}


void func_77(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78558){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(!func_78(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)){
Global_22792=iVar2;
}
iVar2++;
}
Global_113648.f_14143[Global_22792 /*104*/].f_24=1;
}

int func_78(struct<6> Param0, struct<6> Param1){
struct<4> Var0;
struct<4> Var1;
int iVar2;
int iVar3;
if(Param0.f_5 < Param1.f_5){
return 0;
}
if(Param0.f_5 > Param1.f_5){
return 1;
}
if(Param0.f_5==Param1.f_5){
if(Param0.f_4 < Param1.f_4){
return 0;
}
if(Param0.f_4 > Param1.f_4){
return 1;
}
if(Param0.f_4==Param1.f_4){
Var0.f_0=Param0.f_0;
Var0.f_1=Param0.f_1 * 60;
Var0.f_2=Param0.f_2 * 3600;
Var0.f_3=(Param0.f_3 * 86400);
iVar2=(((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
Var1.f_0=Param1.f_0;
Var1.f_1=Param1.f_1 * 60;
Var1.f_2=Param1.f_2 * 3600;
Var1.f_3=(Param1.f_3 * 86400);
iVar3=(((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
if(iVar2 > iVar3 || iVar2==iVar3){
return 1;
}else{
return 0;
}}}
return 0;
}

int func_79(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78558){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
while (iVar2 < iVar1){
if(Global_113648.f_14143[iVar2 /*104*/].f_24==0){
Global_22792=iVar2;
return 1;
}
iVar2++;
}
iVar2=iVar0;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(Global_113648.f_14143[iVar2 /*104*/].f_24==0 || Global_113648.f_14143[iVar2 /*104*/].f_24==1){
if(!func_78(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)){
Global_22792=iVar2;
}}
if(Global_113648.f_14143[iVar2 /*104*/].f_24==2){
}
iVar2++;
}
if(Global_22792==34){
return 0;
}
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=0;
return 1;
}


void func_80(){
if(MISC::IS_BIT_SET(Global_8253, 6)){
if(Global_8957 > 0){
if(MISC::IS_BIT_SET(Global_8254, 11)){
if(iLocal_41){
func_81(uLocal_37, "CLEAR_ALL");
if(MISC::IS_BIT_SET(Global_8253, 25)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(MISC::IS_BIT_SET(Global_4542297, 11)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(53);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_78558==1){
if(MISC::IS_BIT_SET(Global_4542297, 12)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(52);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(MISC::IS_BIT_SET(Global_4542297, 28)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(60);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(148f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
if(MISC::IS_BIT_SET(Global_4542297, 19)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
if((MISC::IS_BIT_SET(Global_4542297, 12) || MISC::IS_BIT_SET(Global_4542297, 11)) || MISC::IS_BIT_SET(Global_8253, 25)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(192f);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
MISC::CLEAR_BIT(&Global_8254, 11);
iLocal_41=0;
}}}
if(Global_8957 < 1){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_37);
MISC::CLEAR_BIT(&Global_8253, 6);
}else{
func_17();
}}elseif(Global_8957 > 0){
uLocal_37=GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_alert_popup");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_37)){
wait(0);
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
MISC::SET_BIT(&Global_8253, 6);
}}


void func_81(var uParam0, char* sParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_82(){
if(MISC::IS_BIT_SET(Global_8254, 7)){
MISC::SET_BIT(&Global_8254, 6);
MISC::CLEAR_BIT(&Global_8254, 7);
return;
}
if(!MISC::IS_BIT_SET(Global_8254, 7)){
MISC::CLEAR_BIT(&Global_8254, 6);
return;
}}


void func_83(){
if(MISC::IS_BIT_SET(Global_8254, 4)){
MISC::SET_BIT(&Global_8254, 3);
MISC::CLEAR_BIT(&Global_8254, 4);
return;
}
if(!MISC::IS_BIT_SET(Global_8254, 4)){
MISC::CLEAR_BIT(&Global_8254, 3);
return;
}}


void func_84(){
if(MISC::IS_BIT_SET(Global_8254, 2)){
if(!Global_20383.f_1==1){
Global_20383.f_1=0;
}
MISC::CLEAR_BIT(&Global_8254, 2);
return;
}
if(!MISC::IS_BIT_SET(Global_8254, 2)){
if(!Global_20383.f_1==1){
if(Global_20383.f_1 < 4){
Global_20383.f_1=3;
}}
return;
}}

int func_85(){
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
if(func_34(14)){
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
if((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3))) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("toro")){
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

int func_86(int iParam0, int iParam1, int iParam2, bool bParam3){
func_45();
if(Global_78558==0){
if(func_34(14)){
if(Global_22784==2 || Global_22784==4){
}else{
return 0;
}}}
if(Global_20383.f_1==9){
return 0;
}
if(iParam2==0){
if(func_57(0)==1){
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
func_87("cellphone_flashhand");
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
Global_20380=start_new_script("cellphone_flashhand", 1424);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}}
while (!Global_20365){
wait(0);
}
func_133();
func_131();
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0){
Global_8859=0;
Global_20383.f_1=7;
func_87(&(Global_8260[iParam0 /*15*/].f_5));
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


void func_87(char* sParam0){
SCRIPT::REQUEST_SCRIPT(sParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
wait(0);
}}


void func_88(int iParam0){
if(func_91()){
return;
}
if(Global_20584){
if(func_90()){
func_89(1, 1);
}else{
func_89(0, 0);
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
if(!func_52()){
Global_20383.f_1=3;
}}


void func_89(bool bParam0, bool bParam1){
if(bParam0){
if(func_57(0)){
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


bool func_90(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_91(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_92(){
float fVar0;
MISC::SET_GAME_PAUSED(1);
PAD::SET_INPUT_EXCLUSIVE(2, 201);
PAD::SET_INPUT_EXCLUSIVE(2, 202);
fVar0=0f;
while ((!PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || fVar0 < 1f){
set_warning_message_with_header("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, false, -1, 0, 0, true, 0);
wait(0);
fVar0=(fVar0 + MISC::GET_FRAME_TIME());
}
MISC::SET_GAME_PAUSED(0);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
CAM::DO_SCREEN_FADE_OUT(0);
Global_112593=1;
}}


void func_93(int iParam0){
float fVar0;
char* sVar1;
MISC::SET_GAME_PAUSED(1);
PAD::SET_INPUT_EXCLUSIVE(2, 201);
fVar0=0f;
while (!PAD::IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f){
sVar1=func_94(iParam0, 119);
set_warning_message("FBR_GENERIC", 16384, 0, false, -1, "FBR_DIR_MODE", sVar1, true, 0);
wait(0);
fVar0=(fVar0 + MISC::GET_FRAME_TIME());
}
MISC::SET_GAME_PAUSED(0);
}


char* func_94(int iParam0, int iParam1){
iParam1=iParam1;
switch (iParam0){
case 1:
return "FBR_BLK_CLEAN";
break;
case 2:
return "FBR_BLK_RNNNG";
break;
case 13:
return "FBR_BLK_DEAD";
break;
case 3:
return "FBR_BLK_MISS";
break;
case 5:
return "FBR_BLK_SHOP";
break;
case 4:
return "FBR_BLK_CUTS";
break;
case 6:
return "FBR_BLK_WANT";
break;
case 7:
return "FBR_BLK_ONLI";
break;
case 8:
return "FBR_BLK_ACT";
break;
case 9:
return "FBR_BLK_LOC";
break;
case 10:
return "FBR_BLK_VEH";
break;
case 11:
return "FBR_BLK_PARA";
break;
case 12:
return "FBR_BLK_FALL";
break;
default:
return "ERROR";
break;
}
return "ERROR";
}

int func_95(int iParam0, bool bParam1, int iParam2){
int iVar0;
iParam2=iParam2;
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
return 13;
}
if(bParam1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1){
return 2;
}}
if(func_126() && !func_34(14)){
return 3;
}
if(func_125()){
return 3;
}
if(func_124()){
return 8;
}
if(bParam1){
if(func_123()){
return 8;
}}
if(Global_97601){
return 3;
}
if(Global_32421){
return 8;
}
if(Global_32312){
return 8;
}
if(Global_2883694){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0){
return 3;
}}elseif(Global_2883693){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0){
return 3;
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
return 3;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0){
return 3;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0){
return 3;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0){
return 13;
}
if(func_122(bParam1)){
return 3;
}
if(PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 12;
}
if(func_121(Global_112673, 256)){
return 3;
}
if(((func_120() || func_119()) || func_114()) || func_113()){
return 5;
}
if(func_113()){
return 5;
}
if(func_112()){
return 5;
}
if(func_111()){
return 5;
}
if(func_119()){
return 5;
}
if(func_110() && !Global_112598){
return 8;
}
if(func_114()){
return 5;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_109()){
return 4;
}
if(func_74()){
return 4;
}
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_99(60);
if(iVar0 !=0){
return iVar0;
}
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) !=-1){
return 11;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || Global_112695){
return 10;
}}}
if(Global_32419){
return 8;
}
if(Global_78556){
return 4;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
return 6;
}
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())){
return 8;
}
if(TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())){
return 8;
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 7;
}
if(func_98()){
return 8;
}
if(Global_32166){
return 3;
}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
return 4;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0)){
return 9;
}
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
return 9;
}
if(bParam1){
if(!func_96(0)){
return 8;
}}
if(PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())){
return 9;
}
return 0;
}

int func_96(bool bParam0){
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return 0;
}
if((((((((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
return 0;
}
if((((((func_74() || Global_23131.f_4) || func_97()) || MISC::IS_MEMORY_CARD_IN_USE()) || MISC::IS_AUTO_SAVE_IN_PROGRESS()) || func_109()) || func_125()){
return 0;
}
if(!bParam0){
if(MISC::GET_MISSION_FLAG()){
return 0;
}}
return 1;
}

int func_97(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}


bool func_98(){
return Global_60543;
}

int func_99(int iParam0){
struct<3> Var0;
int iVar1;
int iVar2;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
return 5;
}
Var0={
func_108(PLAYER::PLAYER_ID()) 
};
if(Global_112735[10 /*10*/].f_1){
if(vdist2(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f){
return 3;
}}
if(func_107(2) && !func_107(17)){
if(vdist2(Var0, -59.96629f, -1099.005f, 25.52088f) < 8f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1)){
return 9;
}}}
if(vdist2(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1)){
return 9;
}}
if(vdist2(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1)){
return 9;
}}
if(vdist2(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1)){
return 9;
}}
if(vdist2(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1)){
return 9;
}}
if(vdist2(Var0, 128.83f, -1297.98f, 29.3f) < 2f || vdist2(Var0, 95.07f, -1284.98f, 29.3f) < 2f){
return 9;
}
if(vdist2(Var0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_106(26)){
return 9;
}
if(!iLocal_27){
func_100(iParam0);
}
iVar1=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(iVar1==0){
return 0;
}elseif((iVar1==Global_112611 || iVar1==Global_112612) || iVar1==Global_112613){
return 9;
}elseif(iVar1==Global_112602){
return 9;
}elseif(iVar1==Global_112603){
return 9;
}elseif(iVar1==Global_112606){
return 9;
}elseif(iVar1==Global_112605){
return 9;
}elseif(iVar1==Global_112607){
return 9;
}elseif(iVar1==Global_112608){
return 9;
}elseif(iVar1==Global_112609){
return 9;
}elseif(iVar1==Global_112610){
return 9;
}elseif(iVar1==Global_112614){
return 9;
}elseif(iVar1==Global_112615){
return 9;
}elseif(iVar1==Global_112616){
return 9;
}elseif(iVar1==Global_112617){
return 9;
}elseif(iVar1==Global_112618){
return 9;
}elseif((iVar1==Global_112619 || iVar1==Global_112620) && func_107(67)){
return 9;
}
iVar2=0;
while (iVar2 <=(19 - 1)){
if(iVar1==Global_112621[iVar2]){
return 9;
}
iVar2++;
}
return 0;
}


void func_100(var uParam0){
int iVar0;
uParam0=uParam0;
func_103(24, &Global_112602);
func_103(47, &Global_112603);
func_103(10, &Global_112611);
func_103(9, &Global_112612);
func_103(8, &Global_112613);
func_103(21, &Global_112614);
func_103(11, &Global_112615);
func_103(18, &Global_112619);
func_103(19, &Global_112620);
Global_112606=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
Global_112605=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.022f, 31.924f, "V_factory2");
Global_112607=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
Global_112608=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
Global_112609=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.259f, 28.797f, "v_gun");
Global_112610=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.13f, 28.2847f, "v_strip3");
Global_112616=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
Global_112617=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
Global_112618=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
iVar0=0;
while (iVar0 <=(19 - 1)){
Global_112621[iVar0]=INTERIOR::GET_INTERIOR_AT_COORDS(func_101(iVar0));
iVar0++;
}
iLocal_27=1;
}


Vector3 func__101(int iParam0){
if(!func_102(iParam0)){
return 0f, 0f, 0f;
}
switch (iParam0){
case 0:
return -711.8212f, -915.9057f, 18.2377f;
case 1:
return -52.7185f, -1756.175f, 28.4432f;
case 2:
return 1159.441f, -325.6666f, 68.2272f;
case 3:
return 1699.429f, 4928.642f, 41.0858f;
case 4:
return -1822.926f, 788.9531f, 137.212f;
case 5:
return 1166.427f, 2703.528f, 37.1574f;
case 6:
return -2973.414f, 390.6885f, 14.0433f;
case 7:
return -1225.86f, -903.5782f, 11.3263f;
case 8:
return 1140.659f, -981.0806f, 45.4158f;
case 9:
return -1490.275f, -382.8514f, 39.1634f;
case 10:
return -3240.719f, 1004.508f, 11.8468f;
case 11:
return -3039.249f, 589.3831f, 6.9251f;
case 12:
return 544.4275f, 2672.061f, 41.1726f;
case 13:
return 2558.754f, 385.599f, 107.6391f;
case 14:
return 2681.511f, 3282.763f, 54.2573f;
case 15:
return 1731.153f, 6411.633f, 34.0373f;
case 16:
return 1964.931f, 3741.207f, 31.3599f;
case 17:
return 29.0707f, -1348.773f, 28.5101f;
case 18:
return 376.8503f, 323.9777f, 102.5825f;
default:
}
return 0f, 0f, 0f;
}

int func_102(int iParam0){
if(iParam0 >=19){
return 0;
}elseif(iParam0 <=-1){
return 0;
}
return 1;
}


var func__103(int iParam0, var uParam1){
struct<5> Var0;
Var0={
func_104(iParam0) 
};
*uParam1=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
return Var0.f_4;
}


struct<5> func_104(int iParam0){
struct<5> Var0;
struct<3> Var1;
switch (iParam0){
case 0:
Var0={
-447.4833f, 280.3197f, 77.5215f 
};
Var0.f_3="v_comedy";
Var0.f_4=Var0.f_3;
break;
case 1:
Var0={
-1906.786f, -573.7576f, 19.0773f 
};
Var0.f_3="v_psycheoffice";
Var0.f_4=Var0.f_3;
break;
case 2:
Var0={
1399.973f, 1148.756f, 113.3336f 
};
Var0.f_3="v_ranch";
Var0.f_4=Var0.f_3;
break;
case 3:
Var0={
-598.6379f, -1608.399f, 26.0108f 
};
Var0.f_3="v_recycle";
Var0.f_4=Var0.f_3;
break;
case 4:
Var0={
-556.5089f, 286.3181f, 81.1763f 
};
Var0.f_3="v_rockclub";
Var0.f_4=Var0.f_3;
break;
case 5:
Var0={
-111.7116f, -11.912f, 69.5196f 
};
Var0.f_3="v_janitor";
Var0.f_4=Var0.f_3;
break;
case 6:
Var0={
1274.934f, -1714.726f, 53.7715f 
};
Var0.f_3="v_lesters";
Var0.f_4=Var0.f_3;
break;
case 7:
Var0={
147.433f, -2201.37f, 3.688f 
};
Var0.f_3="v_torture";
Var0.f_4=Var0.f_3;
break;
case 8:
Var0={
320.9934f, 265.2515f, 82.1221f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Vinewood)";
break;
case 9:
Var0={
-1425.564f, -244.3f, 15.8053f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Morningwood)";
break;
case 10:
Var0={
377.153f, -717.567f, 10.0536f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Downtown)";
break;
case 11:
Var0={
245.1564f, 370.211f, 104.7382f 
};
Var0.f_3="v_epsilonism";
Var0.f_4=Var0.f_3;
break;
case 12:
Var0={
173.1176f, -1003.279f, -99.9999f 
};
Var0.f_3="v_garages";
Var0.f_4=Var0.f_3;
break;
case 13:
Var0={
199.9715f, -999.6678f, -100f 
};
Var0.f_3="v_garagem";
Var0.f_4=Var0.f_3;
break;
case 14:
Var0={
228.6058f, -992.0537f, -99.9999f 
};
Var0.f_3="v_garagel";
Var0.f_3="hei_dlc_garage_high_new";
Var0.f_4=Var0.f_3;
break;
case 15:
Var0={
1854.254f, 3686.739f, 33.2671f 
};
Var0.f_3="v_sheriff";
Var0.f_4=Var0.f_3;
break;
case 16:
Var0={
-444.8907f, 6013.587f, 30.7164f 
};
Var0.f_3="v_sheriff2";
Var0.f_4=Var0.f_3;
break;
case 17:
Var0={
3522.845f, 3707.965f, 19.9918f 
};
Var0.f_3="v_lab";
Var0.f_4=Var0.f_3;
break;
case 18:
Var0={
717.2994f, -974.4271f, 23.9142f 
};
Var0.f_3="v_sweat";
Var0.f_4=Var0.f_3;
break;
case 19:
Var0={
717.299f, -974.4271f, 23.9142f 
};
Var0.f_3="v_sweatempty";
Var0.f_4=Var0.f_3;
break;
case 20:
Var0={
2449.785f, 4983.825f, 45.8106f 
};
Var0.f_3="v_farmhouse";
Var0.f_4=Var0.f_3;
break;
case 22:
Var0={
1087.195f, -1988.445f, 28.649f 
};
Var0.f_3="v_foundry";
Var0.f_4=Var0.f_3;
break;
case 23:
Var0={
982.233f, -2160.382f, 28.4761f 
};
Var0.f_3="v_abattoir";
Var0.f_4=Var0.f_3;
break;
case 21:
Var0={
479.0568f, -1316.825f, 28.2038f 
};
Var0.f_3="v_chopshop";
Var0.f_4=Var0.f_3;
break;
case 24:
Var0={
-1005.663f, -478.3461f, 49.0265f 
};
Var0.f_3="v_58_sol_office";
Var0.f_4=Var0.f_3;
break;
case 25:
Var1={
func_105(1, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (1)";
break;
case 26:
Var1={
func_105(2, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (2)";
break;
case 27:
Var1={
func_105(3, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (3)";
break;
case 28:
Var1={
func_105(4, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (4)";
break;
case 29:
Var1={
func_105(5, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (5)";
break;
case 30:
Var1={
func_105(6, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (6)";
break;
case 31:
Var1={
func_105(7, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (7)";
break;
case 32:
Var0={
Global_1312228[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (8)";
break;
case 33:
Var1={
func_105(35, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (9)";
break;
case 34:
Var1={
func_105(36, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (10)";
break;
case 35:
Var1={
func_105(37, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (11)";
break;
case 36:
Var1={
func_105(38, 0) 
};
Var0={
-20.1f, -580.8f, 91.3f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (12)";
break;
case 37:
Var1={
func_105(39, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (13)";
break;
case 38:
Var1={
func_105(40, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (14)";
break;
case 39:
Var1={
func_105(41, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (15)";
break;
case 40:
Var1={
func_105(42, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (16)";
break;
case 41:
Var1={
func_105(43, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (17)";
break;
case 42:
Var0={
-470.3754f, -698.5207f, 51.5276f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (18)";
break;
case 43:
Var0={
-460.6133f, -691.5562f, 69.9067f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (19)";
break;
case 44:
Var0={
300.633f, -997.4288f, -99.9727f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (20)";
break;
case 49:
Var0={
-171.3969f, 494.2671f, 134.4935f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (1)";
break;
case 50:
Var0={
339.4982f, 434.0887f, 146.2206f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (2)";
break;
case 51:
Var0={
-761.3884f, 615.7333f, 140.9805f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (3)";
break;
case 52:
Var0={
-678.1752f, 591.0076f, 142.2196f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (4)";
break;
case 53:
Var0={
120.0541f, 553.793f, 181.0943f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (5)";
break;
case 54:
Var0={
-571.4039f, 655.2008f, 142.6293f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (7)";
break;
case 55:
Var0={
-742.2565f, 587.6547f, 143.0577f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (8)";
break;
case 56:
Var0={
-857.2222f, 685.051f, 149.6502f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (10)";
break;
case 57:
Var0={
-1287.65f, 443.2707f, 94.6919f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (12)";
break;
case 58:
Var0={
374.2012f, 416.9688f, 142.5991f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (13)";
break;
case 45:
Var0={
-16.29585f, -684.0385f, 33.50832f 
};
Var0.f_3="dt1_03_carpark";
Var0.f_4="dt1_03_carpark";
break;
case 46:
Var0={
341.1f, -1000f, -99.2f 
};
Var0.f_3="v_apart_midspaz";
Var0.f_4="v_apart_midspaz";
break;
case 47:
Var0={
199.9716f, -1018.954f, -100f 
};
Var0.f_3="v_garagem_sp";
Var0.f_4=Var0.f_3;
break;
case 48:
Var0={
-1388.001f, -618.4197f, 30.8196f 
};
Var0.f_3="v_bahama";
Var0.f_4=Var0.f_3;
break;
}
switch (iParam0){
case 59:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 60:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 61:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 62:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 63:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 64:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 65:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 66:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 67:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 68:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 69:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 70:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 71:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 72:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 73:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 74:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 75:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 76:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 77:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 78:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 79:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 80:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 81:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 82:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 83:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 84:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 85:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 86:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 87:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 88:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 89:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 90:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 91:
Var1={
func_105(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 92:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 93:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 94:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 95:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 96:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 97:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 98:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 99:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 100:
Var1={
func_105(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 101:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 102:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 103:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 104:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 105:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 106:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 107:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 108:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 109:
Var1={
func_105(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 110:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 111:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 112:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 113:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 114:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 115:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 116:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 117:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 118:
Var1={
func_105(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 119:
Var1={
func_105(91, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="bkr_biker_dlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 120:
Var1={
func_105(97, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="bkr_biker_dlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 121:
Var1={
func_105(103, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 122:
Var1={
func_105(104, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 123:
Var1={
func_105(105, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 124:
Var1={
func_105(106, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 125:
Var1={
func_105(107, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 126:
Var1={
func_105(108, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 127:
Var1={
func_105(109, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 128:
Var1={
func_105(110, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 129:
Var1={
func_105(111, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 130:
Var1={
func_105(112, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 131:
Var1={
func_105(113, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 132:
Var1={
func_105(114, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 133:
Var1={
func_105(103, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 134:
Var1={
func_105(106, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 135:
Var1={
func_105(109, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 136:
Var1={
func_105(112, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 137:
Var0={
938.3077f, -3196.112f, -100f 
};
Var0.f_3="gr_grdlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 138:
Var0={
512.5f, 4852f, -62.6f 
};
Var0.f_3="xm_x17dlc_int_sub";
Var0.f_4=Var0.f_3;
break;
case 139:
Var0={
2047f, 2942f, -61.9f 
};
Var0.f_3="xm_x17dlc_int_facility";
Var0.f_4=Var0.f_3;
break;
case 140:
Var0={
-1047.6f, -232.3503f, 38.0135f 
};
Var0.f_3="v_faceoffice";
Var0.f_4=Var0.f_3;
break;
case 22:
Var0={
1100f, -2004f, 37f 
};
Var0.f_3="v_foundry";
Var0.f_4=Var0.f_3;
break;
case 141:
Var0={
361f, 6306f, -159f 
};
Var0.f_3="xm_x17dlc_int_silo_01";
Var0.f_4=Var0.f_3;
break;
case 142:
Var0={
305f, 6298f, -160f 
};
Var0.f_3="xm_x17dlc_int_silo_02";
Var0.f_4=Var0.f_3;
break;
case 143:
Var0={
244f, 6163f, -159f 
};
Var0.f_3="xm_x17dlc_int_lab";
Var0.f_4=Var0.f_3;
break;
case 144:
Var0={
2168f, 2920f, -84f 
};
Var0.f_3="xm_x17dlc_int_facility2";
Var0.f_4=Var0.f_3;
break;
case 145:
Var0={
446f, 5922f, -158f 
};
Var0.f_3="xm_x17dlc_int_bse_tun";
Var0.f_4=Var0.f_3;
break;
case 146:
Var0={
252f, 5972f, -156f 
};
Var0.f_3="xm_x17dlc_int_base_loop";
Var0.f_4=Var0.f_3;
break;
case 147:
Var0={
682f, 5959f, -152f 
};
Var0.f_3="xm_x17dlc_int_base_ent";
Var0.f_4=Var0.f_3;
break;
case 148:
Var0={
551f, 5939f, -158f 
};
Var0.f_3="xm_x17dlc_int_base";
Var0.f_4=Var0.f_3;
break;
case 149:
Var0={
520.0001f, 4750f, -70f 
};
Var0.f_3="xm_x17dlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 150:
Var0={
-1266.802f, -3014.849f, -49.4903f 
};
Var0.f_3="sm_smugdlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 151:
Var0={
974.9203f, -3000.065f, -40.647f 
};
Var0.f_3="imp_impexp_intwaremed";
Var0.f_4=Var0.f_3;
break;
case 152:
Var0={
969.5376f, -3000.411f, -48.647f 
};
Var0.f_3="imp_impexp_int_02";
Var0.f_4=Var0.f_3;
break;
case 153:
Var0={
1094.997f, -3100.012f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_s_dlc";
Var0.f_4=Var0.f_3;
break;
case 154:
Var0={
1059.995f, -3100f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_m_dlc";
Var0.f_4=Var0.f_3;
break;
case 155:
Var0={
1010.008f, -3100f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_l_dlc";
Var0.f_4=Var0.f_3;
break;
case 156:
Var0={
372.6707f, 405.5235f, 144.5326f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4=Var0.f_3;
break;
case 157:
Var0={
-282.0588f, -955.17f, 85.3036f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4=Var0.f_3;
break;
case 158:
Var0={
342.7946f, -997.4225f, -99.7444f 
};
Var0.f_3="v_apart_midspaz";
Var0.f_4=Var0.f_3;
break;
case 159:
Var0={
260.3268f, -997.4298f, -100.0086f 
};
Var0.f_3="v_studio_lo";
Var0.f_4=Var0.f_3;
break;
case 160:
Var0={
108.2369f, -753.5364f, 233.1523f 
};
Var0.f_3="v_fib01";
Var0.f_4=Var0.f_3;
break;
case 161:
Var0={
135.3226f, -746.3677f, 253.1523f 
};
Var0.f_3="v_fib03";
Var0.f_4=Var0.f_3;
break;
case 162:
Var0={
108.2572f, -753.5342f, 44.7548f 
};
Var0.f_3="v_office_lobby";
Var0.f_4=Var0.f_3;
break;
case 163:
Var0={
228.6161f, -992.053f, -99.9999f 
};
Var0.f_3="heist_dlc_garage_high_new";
Var0.f_4=Var0.f_3;
break;
case 164:
Var0={
575f, 4750f, -60f 
};
Var0.f_3="xm_v_apart_midspaz";
Var0.f_4=Var0.f_3;
break;
case 165:
Var0={
600f, 4750f, -60f 
};
Var0.f_3="xm_v_studio_lo";
Var0.f_4=Var0.f_3;
break;
case 166:
Var0={
630f, 4750f, -60f 
};
Var0.f_3="xm_v_garagem";
Var0.f_4=Var0.f_3;
break;
case 167:
Var0={
1257f, 4796.7f, -39.1f 
};
Var0.f_3="xm_x17dlc_int_tun_entry";
Var0.f_4=Var0.f_3;
break;
case 168:
Var0={
694.4f, 5898.9f, -152.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 169:
Var0={
1121.8f, 5516.3f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 170:
Var0={
1279.6f, 5233.2f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 171:
Var0={
1158.6f, 5467.1f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 172:
Var0={
705.9f, 5838.5f, -152.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 173:
Var0={
1316.5f, 5184f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 174:
Var0={
1248f, 5276.1f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 175:
Var0={
1090.2f, 5559.2f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 176:
Var0={
1261f, 4808.6f, -39.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 177:
Var0={
721.8f, 5781.4f, -146.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 178:
Var0={
780.8f, 5703.4f, -136.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 179:
Var0={
868.1f, 5659.2f, -126.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 180:
Var0={
1218.2f, 5321.2f, -85.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 181:
Var0={
1278.5f, 4859.7f, -44.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 182:
Var0={
1187.2f, 5419.8f, -96.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 183:
Var0={
1344.7f, 5136.4f, -75.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 184:
Var0={
1363.4f, 5039.5f, -65.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 185:
Var0={
1049.3f, 5602.1f, -107.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 186:
Var0={
1337.8f, 4944.3f, -55.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 187:
Var0={
961.5f, 5646.9f, -117.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 188:
Var0={
345.0041f, 4842.001f, -59.9997f 
};
Var0.f_3="xm_x17dlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 189:
Var0={
279.9322f, -1337.49f, 23.7419f 
};
Var0.f_3="v_coroner";
Var0.f_4=Var0.f_3;
break;
case 190:
Var0={
-1604.664f, -3012.583f, -79.9999f 
};
Var0.f_3="ba_dlc_int_01_ba";
Var0.f_4=Var0.f_3;
break;
case 191:
case 212:
Var0={
-1505.783f, -3012.587f, -79.9999f 
};
Var0.f_3="ba_dlc_int_02_ba";
Var0.f_4=Var0.f_3;
break;
case 192:
Var0={
-630.4205f, -236.7843f, 37.057f 
};
Var0.f_3="V_JEWEL2";
Var0.f_4=Var0.f_3;
break;
case 193:
Var0={
2800f, -3800f, 100f 
};
Var0.f_3="xs_x18_int_01";
Var0.f_4=Var0.f_3;
break;
case 194:
Var0={
2800f, -3942f, 182.5f 
};
Var0.f_3="xs_arena_vip";
Var0.f_4=Var0.f_3;
break;
break;
case 195:
Var0={
1049.6f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware02";
Var0.f_4=Var0.f_3;
break;
case 223:
Var0={
2920f, 4470f, -100f 
};
Var0.f_3="sf_dlc_warehouse_sec";
Var0.f_4=Var0.f_3;
break;
case 196:
Var0={
1093.6f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware03";
Var0.f_4=Var0.f_3;
break;
case 197:
Var0={
1009.5f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware01";
Var0.f_4=Var0.f_3;
break;
case 198:
Var0={
1100f, 245f, -49f 
};
Var0.f_3="vw_dlc_casino_main";
Var0.f_4=Var0.f_3;
break;
case 199:
Var0={
1380f, 200f, -50f 
};
Var0.f_3="vw_dlc_casino_carpark";
Var0.f_4=Var0.f_3;
break;
case 200:
Var0={
976.6364f, 70.29476f, 115.1641f 
};
Var0.f_3="vw_dlc_casino_apart";
Var0.f_4=Var0.f_3;
break;
case 201:
Var0={
1295f, 230f, -50f 
};
Var0.f_3="vw_dlc_casino_garage";
Var0.f_4=Var0.f_3;
break;
case 202:
Var0={
2479.3f, -273.9f, -58f 
};
Var0.f_3="ch_DLC_Casino_Heist";
Var0.f_4=Var0.f_3;
break;
case 203:
Var0={
2730f, -380f, -49f 
};
Var0.f_3="ch_DLC_Arcade";
Var0.f_4=Var0.f_3;
break;
case 204:
Var0={
2800f, -380f, -48.5f 
};
Var0.f_3="ch_DLC_Plan";
Var0.f_4=Var0.f_3;
break;
case 205:
Var0={
2497.7f, -312.8f, -69.9f 
};
Var0.f_3="ch_DLC_Tunnel";
Var0.f_4=Var0.f_3;
break;
case 206:
Var0={
2523.4f, -270f, -58.7f 
};
Var0.f_3="ch_DLC_Casino_Back";
Var0.f_4=Var0.f_3;
break;
case 207:
Var0={
2504.4f, -257.2f, -39.1f 
};
Var0.f_3="ch_DLC_Casino_Hotel";
Var0.f_4=Var0.f_3;
break;
case 208:
Var0={
2554f, -281.4f, -64.7f 
};
Var0.f_3="ch_DLC_Casino_Loading";
Var0.f_4=Var0.f_3;
break;
case 209:
Var0={
2488.3f, -267.4f, -70.6f 
};
Var0.f_3="ch_DLC_Casino_Vault";
Var0.f_4=Var0.f_3;
break;
case 210:
Var0={
2519.9f, -255.3f, -24.1f 
};
Var0.f_3="ch_DLC_Casino_Utility";
Var0.f_4=Var0.f_3;
break;
case 211:
Var0={
2572.9f, -253.4f, -64.7f 
};
Var0.f_3="ch_dlc_casino_shaft";
Var0.f_4=Var0.f_3;
break;
case 213:
Var0={
1103.562f, -3000f, -40f 
};
Var0.f_3="gr_grdlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 214:
Var0={
1210f, 1857f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 215:
Var0={
1569f, -2130f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 216:
Var0={
839f, 2176f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 217:
Var0={
982f, -143f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 218:
Var0={
-2000f, 1113.4f, 25.7f 
};
Var0.f_3="tr_tuner_car_meet";
Var0.f_4=Var0.f_3;
break;
case 219:
Var0={
-1350f, 160f, -99.2f 
};
Var0.f_3="tr_tuner_mod_garage";
Var0.f_4=Var0.f_3;
break;
case 220:
Var0={
1.1f, -705.6f, 16.1f 
};
Var0.f_3="finbank";
Var0.f_4=Var0.f_3;
break;
case 221:
Var0={
-1010f, -70f, -99.4f 
};
Var0.f_3="sf_dlc_studio_sec";
Var0.f_4=Var0.f_3;
break;
case 222:
Var0={
1550f, 250f, -50f 
};
Var0.f_3="h4_dlc_int_02_h4";
Var0.f_4=Var0.f_3;
break;
case 224:
Var0={
-935.7f, -2992.2f, 13.9f 
};
Var0.f_3="v_hanger";
Var0.f_4=Var0.f_3;
break;
case 225:
Var0={
730f, -2990f, -39f 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 226:
Var0={
152.3f, -1004.4f, -97.8f 
};
Var0.f_3="v_motel_mp";
Var0.f_4=Var0.f_3;
break;
case 227:
Var0={
170f, 5190f, 10f 
};
Var0.f_3="xs_x18_int_mod2";
Var0.f_4=Var0.f_3;
break;
case 228:
Var0={
850f, -3000f, -50f 
};
Var0.f_3="reh_dlc_int_04_sum2";
Var0.f_4=Var0.f_3;
break;
case 229:
Var0={
495f, -2560f, -50f 
};
Var0.f_3="xm3_DLC_INT_04_xm3";
Var0.f_4=Var0.f_3;
break;
case 230:
Var0={
570f, -415.1f, -69.6f 
};
Var0.f_3="xm3_DLC_INT_03_xm3";
Var0.f_4=Var0.f_3;
break;
case 231:
Var0={
984.4f, -95.4f, 76.8f 
};
Var0.f_3="bkr_biker_dlc_int_03";
Var0.f_4=Var0.f_3;
break;
return Var0;
}}


struct<6> func_105(int iParam0, bool bParam1){
struct<6> Var0;
switch (iParam0){
case -1:
Var0={
-794.9184f, 339.6266f, 200.4135f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 1:
Var0={
-794.9184f, 339.6266f, 200.4135f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 2:
Var0={
-761.0982f, 317.6259f, 169.5963f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
-761.1888f, 317.6295f, 216.0503f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
-795.3856f, 340.0188f, 152.7941f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 61:
Var0={
-778.5056f, 332.3779f, 212.1968f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 5:
Var0={
-258.1807f, -950.6853f, 70.0239f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 6:
Var0={
-285.0051f, -957.6552f, 85.3035f 
};
Var0.f_3={
0f, 0f, -110f 
};
break;
case 7:
Var0={
-1471.882f, -530.7484f, 62.34918f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 34:
Var0={
-1471.882f, -530.7484f, 49.72156f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 62:
Var0={
-1463.15f, -540.2369f, 74.2439f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 35:
Var0={
-885.3702f, -451.4775f, 119.327f 
};
Var0.f_3={
0f, 0f, 27.55617f 
};
break;
case 36:
Var0={
-913.0385f, -438.4284f, 114.3997f 
};
Var0.f_3={
0f, 0f, -153.3093f 
};
break;
case 37:
Var0={
-892.5499f, -430.4789f, 88.25368f 
};
Var0.f_3={
0f, 0f, 116.9193f 
};
break;
case 38:
Var0={
-35.0462f, -576.317f, 82.90739f 
};
Var0.f_3={
0f, 0f, 160f 
};
break;
case 39:
Var0={
-10.3788f, -590.7431f, 93.02542f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 65:
Var0={
-22.2487f, -589.1461f, 80.2305f 
};
Var0.f_3={
0f, 0f, 69.88f 
};
break;
case 40:
Var0={
-900.6311f, -376.7462f, 78.27306f 
};
Var0.f_3={
0f, 0f, 26.92611f 
};
break;
case 41:
Var0={
-929.483f, -374.5104f, 102.2329f 
};
Var0.f_3={
0f, 0f, -152.5531f 
};
break;
case 63:
Var0={
-914.4202f, -375.8189f, 114.4743f 
};
Var0.f_3={
0f, 0f, -63f 
};
break;
case 42:
Var0={
-617.1647f, 64.6042f, 100.8196f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 43:
Var0={
-584.2015f, 42.7133f, 86.4187f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
-609.5665f, 50.2203f, 98.3998f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 73:
Var0={
-171.3969f, 494.2671f, 134.4935f 
};
Var0.f_3={
0f, 0f, 11f 
};
break;
case 74:
Var0={
339.4982f, 434.0887f, 146.2206f 
};
Var0.f_3={
0f, 0f, -63.5f 
};
break;
case 75:
Var0={
-761.3884f, 615.7333f, 140.9805f 
};
Var0.f_3={
0f, 0f, -71.5f 
};
break;
case 76:
Var0={
-678.1752f, 591.0076f, 142.2196f 
};
Var0.f_3={
0f, 0f, 40.5f 
};
break;
case 77:
Var0={
120.0541f, 553.793f, 181.0943f 
};
Var0.f_3={
0f, 0f, 6f 
};
break;
case 78:
Var0={
-571.4039f, 655.2008f, 142.6293f 
};
Var0.f_3={
0f, 0f, -14.5f 
};
break;
case 79:
Var0={
-742.2565f, 587.6547f, 143.0577f 
};
Var0.f_3={
0f, 0f, -29f 
};
break;
case 80:
Var0={
-857.2222f, 685.051f, 149.6502f 
};
Var0.f_3={
0f, 0f, 4.5f 
};
break;
case 81:
Var0={
-1287.65f, 443.2707f, 94.6919f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 82:
Var0={
374.2012f, 416.9688f, 142.6977f 
};
Var0.f_3={
0f, 0f, -14f 
};
break;
case 83:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 84:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 85:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 86:
Var0={
-1573.098f, -4085.806f, 9.7851f 
};
Var0.f_3={
0f, 0f, 162f 
};
break;
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 66:
case 67:
case 68:
case 69:
Var0={
342.8157f, -997.4288f, -100f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 70:
case 71:
case 72:
Var0={
260.3297f, -997.4288f, -100f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 87:
Var0={
-1572.187f, -570.8315f, 109.9879f 
};
Var0.f_3={
0f, 0f, -54f 
};
break;
case 88:
Var0={
-1383.954f, -476.7112f, 73.507f 
};
Var0.f_3={
0f, 0f, 8f 
};
break;
case 89:
Var0={
-138.0029f, -629.739f, 170.2854f 
};
Var0.f_3={
0f, 0f, -84f 
};
break;
case 90:
Var0={
-74.8895f, -817.6883f, 244.8508f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
Var0={
1100.764f, -3159.384f, -34.9342f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
Var0={
1005.806f, -3157.67f, -36.0897f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 103:
if(!bParam1){
Var0={
-1576.571f, -569.7595f, 85.5f 
};
Var0.f_3={
0f, 0f, 36.1f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 104:
if(!bParam1){
Var0={
-1571.254f, -566.5865f, 85.5f 
};
Var0.f_3={
0f, 0f, -53.9f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 105:
if(!bParam1){
Var0={
-1568.098f, -571.9171f, 85.5f 
};
Var0.f_3={
0f, 0f, -143.9f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 106:
if(!bParam1){
Var0={
-1384.518f, -475.8657f, 56.1f 
};
Var0.f_3={
0f, 0f, 98.7f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 107:
if(!bParam1){
Var0={
-1384.538f, -475.8829f, 48.1f 
};
Var0.f_3={
0f, 0f, 98.7f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 108:
if(!bParam1){
Var0={
-1378.994f, -477.2481f, 56.1f 
};
Var0.f_3={
0f, 0f, -81.1f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 109:
if(!bParam1){
Var0={
-186.5683f, -576.4624f, 135f 
};
Var0.f_3={
0f, 0f, 96.16f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 110:
if(!bParam1){
Var0={
-113.886f, -564.3862f, 135f 
};
Var0.f_3={
0f, 0f, 110.96f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 111:
if(!bParam1){
Var0={
-134.6568f, -635.1774f, 135f 
};
Var0.f_3={
0f, 0f, -9.04f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 112:
if(!bParam1){
Var0={
-79.0479f, -822.6393f, 221f 
};
Var0.f_3={
0f, 0f, 70f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
case 113:
if(!bParam1){
Var0={
-70.3086f, -819.5784f, 221f 
};
Var0.f_3={
0f, 0f, 160f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
case 114:
if(!bParam1){
Var0={
-79.9861f, -818.425f, 221f 
};
Var0.f_3={
0f, 0f, -20f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
}
return Var0;
}

int func_106(int iParam0){
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

int func_107(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


Vector3 func__108(var uParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_109(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}


bool func_110(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}


bool func_111(){
return MISC::IS_BIT_SET(Global_78807, 9);
}


bool func_112(){
return MISC::IS_BIT_SET(Global_78807, 8);
}

int func_113(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3)){
return 1;
}}
return 0;
}

int func_114(){
int iVar0;
if(func_120()){
iVar0=0;
while (iVar0 < 60){
if(func_115(iVar0)){
return 1;
}
iVar0++;
}}
return 0;
}


bool func_115(int iParam0){
return func_116(iParam0, 20, 1);
}

int func_116(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_118()==0){
return MISC::IS_BIT_SET(func_128(func_117(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_117(int iParam0){
switch (iParam0){
case 0:
return 828;
break;
case 1:
return 829;
break;
case 2:
return 830;
break;
case 3:
return 831;
break;
case 4:
return 832;
break;
case 5:
return 833;
break;
case 6:
return 834;
break;
case 7:
return 835;
break;
case 8:
return 836;
break;
case 9:
return 837;
break;
case 10:
return 838;
break;
case 11:
return 839;
break;
case 12:
return 840;
break;
case 13:
return 841;
break;
case 14:
return 842;
break;
case 15:
return 844;
break;
case 16:
return 845;
break;
case 17:
return 846;
break;
case 18:
return 847;
break;
case 19:
return 848;
break;
case 20:
return 849;
break;
case 21:
return 850;
break;
case 22:
return 851;
break;
case 23:
return 852;
break;
case 24:
return 853;
break;
case 25:
return 854;
break;
case 26:
return 855;
break;
case 27:
return 856;
break;
case 28:
return 857;
break;
case 29:
return 858;
break;
case 30:
return 859;
break;
case 31:
return 860;
break;
case 32:
return 861;
break;
case 33:
return 862;
break;
case 34:
return 863;
break;
case 35:
return 864;
break;
case 36:
return 865;
break;
case 37:
return 866;
break;
case 38:
return 867;
break;
case 39:
return 868;
break;
case 40:
return 872;
break;
case 41:
return 873;
break;
case 42:
return 874;
break;
case 43:
return 875;
break;
case 44:
return 12385;
break;
case 45:
return 3811;
break;
case 46:
return 5386;
break;
case 47:
return 6158;
break;
case 48:
return 7235;
break;
case 49:
return 7881;
break;
case 52:
return 8917;
break;
case 50:
return 8268;
break;
case 51:
return 8270;
break;
case 53:
return 9557;
break;
case 54:
return 9633;
break;
case 55:
return 9848;
break;
case 56:
return 9916;
break;
case 57:
return 9918;
break;
case 58:
return 11433;
break;
case 59:
return 11844;
break;
default:
break;
}
return 14192;
}

int func_118(){
return Global_32163;
}


bool func_119(){
return Global_100733.f_388 > 0;
}


bool func_120(){
return Global_100733.f_387 > 0;
}


bool func_121(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}

int func_122(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


bool func_123(){
return Global_100720.f_1;
}


bool func_124(){
return Global_78826;
}

int func_125(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}

int func_126(){
if(Global_43257==15){
return 0;
}
return 1;
}

int func_127(int iParam0){
if((Global_22839 || Global_22838) || Global_22840){
if(iParam0==130){
}else{
return 0;
}}
if(Global_117[iParam0 /*10*/].f_8 !=169){
if(Global_20383.f_1==10){
if(Global_7568==iParam0){
return 1;
}else{
return 0;
}}else{
return 0;
}}
return 0;
}

int func_128(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_129(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_129(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_130();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}


var func__130(){
return Global_1574918;
}


void func_131(){
if(Global_78558==0){
Global_8260[14 /*15*/].f_4=-99;
Global_8260[4 /*15*/].f_4=-99;
if(Global_2694521){
if(func_34(14)){
func_132(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
func_132(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
}else{
func_132(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
}}else{
func_132(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
}}}


void func_132(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
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


void func_133(){
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
if(func_135(iVar2, Global_20383)==1){
iVar1=1;
}
iVar2++;
}
func_132(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
func_132(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
func_132(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
if((Global_43257==15 && func_122(0)==0) && Global_8258==0){
func_132(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
Global_20587=0;
Global_8259=255;
}else{
func_132(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
Global_20587=1;
Global_8259=42;
}
if(iVar1==1){
func_132(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
}else{
func_132(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
}
func_132(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
func_132(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
func_132(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
if(Global_113648.f_14053.f_89==1){
func_132(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
}
if(Global_113648.f_14053.f_88==1){
func_132(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
}
func_132(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
func_132(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
func_132(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
func_132(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_132(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_132(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
func_132(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_132(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_132(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
}else{
func_132(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
func_132(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
func_132(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
func_132(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
func_132(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
func_132(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
func_132(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
func_132(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
if(MISC::IS_BIT_SET(Global_4542297, 4)==1){
func_132(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
}
func_132(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
func_132(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
func_132(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
func_132(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
func_132(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
func_132(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
func_132(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
func_132(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
func_132(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
func_132(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
func_132(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
func_132(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
func_132(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
func_132(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
func_132(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
func_132(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
if(!MISC::IS_BIT_SET(Global_4542297, 4)==1){
if(Global_1836102){
func_132(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 20)==1){
func_132(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 22)==1){
func_132(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542297, 26)==1){
if(func_134()){
func_132(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
}else{
func_132(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
}}}
if((((MISC::IS_BIT_SET(Global_4542297, 4)==0 && Global_1836102==0) && MISC::IS_BIT_SET(Global_4542297, 20)==0) && MISC::IS_BIT_SET(Global_4542297, 22)==0) && MISC::IS_BIT_SET(Global_4542297, 26)==0){
if(func_134()){
func_132(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
}else{
func_132(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
}}}}

int func_134(){
if(Global_78558){
if(Global_1836499 || Global_1836500==1){
return 1;
}}
return 0;
}

int func_135(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_19[iParam1];
}


void func_136(){
}