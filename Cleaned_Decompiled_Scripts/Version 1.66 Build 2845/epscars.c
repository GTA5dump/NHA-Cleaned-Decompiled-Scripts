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
char* sLocal_21=NULL;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
float fLocal_35=0f;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
var uLocal_39=0;
struct<3> Local_40={
0, 0, 0 
};
struct<27> Local_41={
0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_42[5];
int iLocal_43[5]={
0, 0, 0, 0, 0 
};
int iLocal_44=0;
int iLocal_45=0;
int iLocal_46=0;
int iLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
int iLocal_50=0;
int iLocal_51=0;
bool bLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
struct<3> Local_61[2];
var uLocal_62=0;
int iLocal_63=0;
var uLocal_64=0;
var uLocal_65=16;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
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
var uLocal_101=0;
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
var uLocal_129=0;
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
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
var uLocal_170=0;
var uLocal_171=0;
var uLocal_172=0;
var uLocal_173=0;
var uLocal_174=0;
var uLocal_175=0;
var uLocal_176=0;
var uLocal_177=0;
var uLocal_178=0;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=0;
var uLocal_194=0;
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=0;
var uLocal_200=0;
var uLocal_201=0;
var uLocal_202=0;
var uLocal_203=0;
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=0;
var uLocal_207=0;
var uLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=0;
var uLocal_213=0;
var uLocal_214=0;
var uLocal_215=0;
var uLocal_216=0;
var uLocal_217=0;
var uLocal_218=0;
var uLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=0;
var uLocal_223=0;
var uLocal_224=0;
var uLocal_225=0;
var uLocal_226=0;
var uLocal_227=0;
var uLocal_228=0;
var uLocal_229=0;
int iLocal_230=0;
int iLocal_231=0;
var uLocal_232=0;
#endregion

void __EntryFunction__(){
struct<3> Var0;
struct<3> Var1;
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
fLocal_24=0f;
fLocal_28=-0.0375f;
fLocal_29=0.17f;
fLocal_33=80f;
fLocal_34=140f;
fLocal_35=180f;
iLocal_38=3;
Local_40={
-690.938f, 512.2703f, 109.3639f 
};
bLocal_52=-1;
iLocal_60=60000;
iLocal_231=99;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(146)){
func_96();
}
if(func_95(90)==1){
func_94();
SCRIPT::TERMINATE_THIS_THREAD();
}
iLocal_51=Global_113648.f_10051.f_103;
func_93();
if(func_92()){
func_96();
}
func_91(6);
func_90(&Local_41, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, Local_40, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
func_89(&Local_41, 2);
Local_41.f_4=3;
MISC::CLEAR_AREA_OF_VEHICLES(Local_40, 5f, 0, 0, 0, 0, 0, 0, 0);
func_88(&Local_61, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_61[0 /*3*/], Local_61[1 /*3*/], 8.25f, 0, 0, 1);
PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
func_87(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var1);
uLocal_64=PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, 0, 1, 1, 1);
if(func_95(90)==1){
func_94();
func_96();
}
if(Global_113648.f_10051.f_104==0){
Global_113648.f_10051.f_104=CLOCK::GET_CLOCK_DAY_OF_MONTH();
}
func_83(1);
func_82(0);
while (true){
if(func_95(90)==1){
func_94();
func_96();
}
func_81(PLAYER::PLAYER_PED_ID());
if(MISC::GET_MISSION_FLAG() || func_75() !=0){
func_70();
}
switch (iLocal_46){
case 0:
func_69(&iLocal_45);
break;
case 4:
func_68(&iLocal_45);
break;
case 1:
func_67(&iLocal_45);
break;
case 2:
func_61(&iLocal_45);
break;
case 3:
func_57(&iLocal_45);
break;
case 6:
func_54(2, 6, 1);
func_53(2, "EPS_LSTEMAIL", 1);
func_52(2);
func_96();
break;
}
func_49(&Local_41);
if(func_48(&Local_41)){
if(func_42(&Local_41)){
if(VEHICLE::GET_LAST_DRIVEN_VEHICLE()==Global_78253){
Global_78253=0;
Global_113648.f_32751.f_5588=0;
}
MISC::CLEAR_AREA_OF_VEHICLES(Local_41.f_14, 8.5f, 0, 0, 0, 0, 0, 0, 0);
Global_113648.f_10051.f_103=iLocal_51;
func_40();
func_39(&uLocal_65, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
func_22(&uLocal_65, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
if(func_21("EPS_DROP_HELP")){
HUD::CLEAR_HELP(1);
}
func_19();
}}
if(Global_113648.f_10051.f_104 !=0){
iLocal_49=(Global_113648.f_10051.f_104 + 14 % func_18(CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR()));
if(((CLOCK::GET_CLOCK_DAY_OF_MONTH()==iLocal_49 && !func_17(0)) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
func_4(func_16());
}}
func_1(&iLocal_230, &uLocal_232, &iLocal_231);
if((iLocal_59 > 0 && MISC::GET_GAME_TIMER() > iLocal_59) && iLocal_231==99){
iLocal_59=0;
if(func_92()){
func_82(6);
}}
wait(0);
}}


void func_1(int iParam0, var uParam1, int iParam2){
int iVar0;
switch (*iParam2){
case 0:
*iParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0)){
iVar0=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
*iParam2++;
}
break;
case 1:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_TITLE");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_NOTE");
HUD::ADD_TEXT_COMPONENT_INTEGER(func_3());
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*uParam1=MISC::GET_GAME_TIMER();
*iParam2++;
break;
case 2:
if((MISC::GET_GAME_TIMER() - *uParam1) > 7000){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHARD_ANIM_OUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*iParam2++;
}elseif(!func_2()){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0)){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
}}
break;
case 3:
if((MISC::GET_GAME_TIMER() - *uParam1) > 7500){
*iParam2++;
}elseif(!func_2()){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0)){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
}}
break;
case 4:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
}
*iParam2=99;
break;
case 99:
break;
}}

int func_2(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}

int func_3(){
bool bVar0;
int iVar1;
bVar0=false;
iVar1=0;
bVar0=false;
while (bVar0 < 5){
if(MISC::IS_BIT_SET(iLocal_51, bVar0)){
iVar1++;
}
bVar0++;
}
return iVar1;
}


void func_4(int iParam0){
int iVar0;
if(iParam0 <=0){
return;
}
func_54(2, Local_42[(5 - iParam0) /*3*/], 1);
if(func_15(bLocal_52)){
func_53(2, Local_42[(5 - iParam0) /*3*/].f_2, 0);
}else{
func_53(2, Local_42[(5 - iParam0) /*3*/].f_1, 0);
}
iParam0=0;
iVar0=0;
iParam0=0;
while (iParam0 < iLocal_43){
if(!func_14(iParam0)){
func_12(2, func_13(iLocal_43[iParam0]));
iVar0++;
}
iParam0++;
}
func_5(2);
Global_113648.f_10051.f_104=CLOCK::GET_CLOCK_DAY_OF_MONTH();
if(iVar0==0){}}


void func_5(int iParam0){
int iVar0;
int iVar1;
int iVar2;
struct<4> Var3;
int iVar4;
char* sVar5;
iVar0=func_11(iParam0);
if(iVar0==-1){
return;
}
if(Global_53765[iVar0 /*203*/].f_9==0){
return;
}
iVar1=Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/];
iVar2=(Global_53765[iVar0 /*203*/].f_9 - 1);
if(!Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1){
iVar4=Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/];
MemCopy(&Var3,{
func_10(Global_44465[iVar4 /*12*/].f_1)
}
, 4);
}else{
Var3={
Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 
};
}
if(iParam0==28){
switch (iVar1){
case 249:
sVar5="PW_FEED_EM_1";
break;
case 269:
sVar5="PW_FEED_EM_3";
break;
default:
sVar5="PW_FEED_EM_2";
break;
}
func_6(1, Global_44465[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}else{
switch (Global_44465[iVar1 /*12*/].f_3){
case 0:
func_6(0, Global_44465[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
break;
case 1:
func_6(1, Global_44465[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
break;
case 2:
func_6(2, Global_44465[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
break;
}}}


void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
int iVar0;
bool bVar1;
char cVar2[64];
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return;
}
iVar0=func_75();
bVar1=false;
StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
if(iVar0==iParam0){
switch (iParam2){
case 72:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
break;
case 73:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
break;
case 74:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
break;
default:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam4)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam4);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam5)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam5);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam6)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam6);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam7)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam11);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam12)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam12);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam13)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam13);
}
break;
}
if(bVar1){
func_7(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, 0, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_8(iParam1)), 0));
}else{
func_7(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_8(iParam1)), 0));
}
switch (Global_20383){
case 0:
StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
Global_44457++;
if(Global_44457 > 16){
Global_44457=16;
}
break;
case 2:
StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
Global_44459++;
if(Global_44459 > 16){
Global_44459=16;
}
break;
case 1:
StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
Global_44458++;
if(Global_44458 > 16){
Global_44458=16;
}
break;
default:
StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
break;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20372, 1);
}}


void func_7(var uParam0){
Global_44460[Global_44464]=uParam0;
Global_22783=1;
Global_22782=uParam0;
Global_44464++;
if(Global_44464==3){
Global_44464=0;
}}


char* func_8(int iParam0){
switch (iParam0){
case 0:
return "EMSTR_0";
case 3:
return "EMSTR_3";
case 1:
return "EMSTR_6";
case 2:
return "EMSTR_9";
case 4:
return "EMSTR_12";
case 5:
return "EMSTR_29";
case 6:
return "EMSTR_36";
case 7:
return "EMSTR_39";
case 8:
return "EMSTR_52";
case 9:
return "EMSTR_55";
case 10:
return "EMSTR_58";
case 11:
return "EMSTR_78";
case 12:
return "EMSTR_81";
case 13:
return "EMSTR_84";
case 14:
return "EMSTR_87";
case 15:
return "EMSTR_106";
case 16:
return "EMSTR_114";
case 17:
return "EMSTR_142";
case 18:
return "EMSTR_145";
case 19:
return "EMSTR_152";
case 20:
return "EMSTR_157";
case 21:
return "EMSTR_163";
case 22:
return "EMSTR_182";
case 23:
return "EMSTR_187";
case 24:
return "EMSTR_190";
case 25:
return "EMSTR_206";
case 26:
return "EMSTR_219";
case 27:
return "EMSTR_226";
case 28:
return "EMSTR_233";
case 29:
return "EMSTR_242";
case 30:
return "EMSTR_249";
case 31:
return "EMSTR_262";
case 32:
return "EMSTR_269";
case 33:
return "EMSTR_319";
case 34:
return "EMSTR_340";
case 35:
return "EMSTR_348";
case 36:
return "EMSTR_182";
case 37:
return "EMSTR_357";
case 38:
return "EMSTR_360";
case 39:
return "EMSTR_369";
case 40:
return "EMSTR_376";
case 41:
return "EMSTR_379";
case 42:
return "EMSTR_382";
case 43:
return "EMSTR_384";
case 44:
return "EMSTR_387";
case 45:
return "EMSTR_390";
case 46:
return "EMSTR_393";
case 47:
return "EMSTR_396";
case 48:
return "EMSTR_399";
case 49:
return "EMSTR_402";
case 50:
return "EMSTR_405";
case 51:
return "EMSTR_408";
case 52:
return "EMSTR_411";
case 53:
return "EMSTR_414";
case 54:
return "EMSTR_465";
case 55:
return "EMSTR_468";
case 56:
return "EMSTR_489";
case 57:
return "EMSTR_492";
case 58:
return "EMSTR_495";
case 59:
return "EMSTR_498";
case 60:
return "EMSTR_501";
case 61:
return "EMSTR_504";
case 62:
return "EMSTR_507";
case 63:
return "EMSTR_640";
case 64:
return "EMSTR_643";
case 65:
return "EMSTR_652";
default:
}
return "NULL";
}


char* func_9(int iParam0, int iParam1){
*iParam1=1;
switch (iParam0){
case 0:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[0 /*29*/].f_7));
case 1:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[1 /*29*/].f_7));
case 2:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[2 /*29*/].f_7));
case 7:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[12 /*29*/].f_7));
case 4:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[60 /*29*/].f_7));
case 6:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[62 /*29*/].f_7));
case 3:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[14 /*29*/].f_7));
case 16:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[97 /*29*/].f_7));
case 19:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[99 /*29*/].f_7));
case 15:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[96 /*29*/].f_7));
case 63:
return "CHAR_CARSITE2";
case 64:
return "CHAR_BOATSITE";
case 8:
return "CHAR_BANK_MAZE";
case 9:
return "CHAR_BANK_FLEECA";
case 10:
return "CHAR_BANK_BOL";
case 21:
return "CHAR_MINOTAUR";
case 25:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[15 /*29*/].f_7));
case 26:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[30 /*29*/].f_7));
case 27:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[17 /*29*/].f_7));
case 29:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[20 /*29*/].f_7));
case 30:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[43 /*29*/].f_7));
case 31:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[44 /*29*/].f_7));
case 32:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[19 /*29*/].f_7));
case 34:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[40 /*29*/].f_7));
case 36:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381");
case 38:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[64 /*29*/].f_7));
case 5:
return "CHAR_EPSILON";
case 13:
return "CHAR_MILSITE";
case 11:
return "CHAR_CARSITE";
case 14:
return "CHAR_BOATSITE";
case 12:
return "CHAR_PLANESITE";
case 24:
return "CHAR_DR_FRIEDLANDER";
case 55:
return "CHAR_CARSITE2";
case 54:
return "CHAR_BIKESITE";
case 39:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[122 /*29*/].f_7));
case 40:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[125 /*29*/].f_7));
case 41:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[113 /*29*/].f_7));
case 42:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[126 /*29*/].f_7));
case 43:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[127 /*29*/].f_7));
case 44:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[124 /*29*/].f_7));
case 45:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[114 /*29*/].f_7));
case 46:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[115 /*29*/].f_7));
case 47:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[116 /*29*/].f_7));
case 48:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[123 /*29*/].f_7));
case 49:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[117 /*29*/].f_7));
case 50:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[118 /*29*/].f_7));
case 51:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[119 /*29*/].f_7));
case 52:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[120 /*29*/].f_7));
case 53:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[121 /*29*/].f_7));
default:
}
*iParam1=0;
return "ERROR!";
}
struct<16> func_10(int iParam0){
struct<16> Var0;
struct<16> Var1;
if(iParam0 > -1){
StringCopy(&Var0, "EMSTR_", 64);
StringIntConCat(&Var0, iParam0, 64);
return Var0;
}
StringCopy(&Var1, "FAIL", 64);
return Var1;
}

int func_11(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=-1;
iVar2=-1;
iVar0=0;
while (iVar0 < 7){
if(Global_53765[iVar0 /*203*/].f_2==iParam0){
if(Global_53765[iVar0 /*203*/].f_1 > iVar2){
iVar2=Global_53765[iVar0 /*203*/].f_1;
iVar1=iVar0;
}}
iVar0++;
}
if(iVar1 !=-1 && iVar2 !=-1){
return iVar1;
}
return -1;
}


void func_12(int iParam0, char* sParam1){
int iVar0;
int iVar1;
iVar0=func_11(iParam0);
if(iVar0==-1){
return;
}
if(Global_53765[iVar0 /*203*/].f_9==0){
return;
}
if(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_6==10){
return;
}
iVar1=Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}


char* func_13(int iParam0){
if(iParam0==iLocal_43[0]){
return "EPS_CARNME_0";
}
if(iParam0==iLocal_43[1]){
return "EPS_CARNME_1";
}
if(iParam0==iLocal_43[2]){
return "EPS_CARNME_2";
}
if(iParam0==iLocal_43[3]){
return "EPS_CARNME_3";
}
if(iParam0==iLocal_43[4]){
return "EPS_CARNME_4";
}
return "EPS_CARNME_N";
}


bool func_14(int iParam0){
return MISC::IS_BIT_SET(iLocal_51, iParam0);
}

int func_15(int iParam0){
if(iParam0 < 0){
return 1;
}
return MISC::IS_BIT_SET(iLocal_51, iParam0 + 5);
}

int func_16(){
return (5 - func_3());
}

int func_17(int iParam0){
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

int func_18(int iParam0, int iParam1){
if(iParam1 < 0){
iParam1=0;
}
switch (iParam0){
case 0:
case 2:
case 4:
case 6:
case 7:
case 9:
case 11:
return 31;
break;
case 3:
case 5:
case 8:
case 10:
return 30;
break;
case 1:
if((iParam1 % 4)==0){
if((iParam1 % 100) !=0){
return 29;
}elseif((iParam1 % 400)==0){
return 29;
}}
return 28;
break;
}
return 30;
}


void func_19(){
int iVar0;
iLocal_231=0;
STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
if(iVar0 < (6 + func_3())){
STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), 1);
func_20(23, (6 + func_3()));
}}

int func_20(int iParam0, int iParam1){
int iVar0;
if(iParam0 < 0){
return 0;
}
if(iParam0 > 78){
return 0;
}
if(iParam1 <=0 || iParam1 > 100){
return 0;
}
iVar0=PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > iVar0){
return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
}
return 0;
}


bool func_21(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21732=0;
Global_21734=0;
Global_21739=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_2883585=0;
return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2){
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20383.f_1=3;
Global_21725=0;
Global_21726=1;
Global_21778=0;
Global_21721=0;
Global_21722=0;
Global_21736=0;
Global_21735=0;
Global_20382=0;
}else{
func_37();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_36(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_35();
Global_21014={
Global_21179 
};
Global_21731=Global_21732;
Global_21738=Global_21739;
Global_2883586=Global_2883585;
Global_21740={
Global_21756 
};
Global_21733=Global_21734;
Global_22715=Global_22716;
Global_22723={
Global_22729 
};
Global_22717=Global_22718;
Global_22719=Global_22720;
Global_22721=Global_22722;
Global_21344.f_370=Global_22714;
Global_21344.f_368=Global_22712;
Global_21344.f_369=Global_22713;
Global_21721=Global_21722;
if(Global_21731){
MISC::CLEAR_BIT(&Global_8253, 20);
MISC::CLEAR_BIT(&Global_8254, 17);
MISC::CLEAR_BIT(&Global_8255, false);
if(bParam2){
func_33();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20383.f_1 > 3){
return 0;
}}
if(Global_20349==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_32()){
return 0;
}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"))){
return 0;
}
if(!Global_78558){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())){
return 0;
}
if(PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)){
return 0;
}}}
if(func_31()){
return 0;
}else{
switch (Global_20383.f_1){
case 7:
return 0;
break;
case 8:
return 0;
break;
case 9:
break;
case 10:
break;
default:
break;
}
if(MISC::IS_BIT_SET(Global_8253, 9)){
return 0;
}}
func_30();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_29();
func_24();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_37();
}
return 0;
}


void func_24(){
if(!func_25()){
return;
}
if(Global_21731){
MemCopy(&(Global_1977511.f_1),{
Global_21344
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}}

int func_25(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_28()){
return 0;
}
if(func_26(PLAYER::PLAYER_ID())){
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


bool func_26(int iParam0){
return func_27(iParam0, 20);
}


var func__27(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_28(){
return -1;
}


void func_29(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_30(){
Global_21778=Global_21777;
Global_21772=Global_21773;
Global_21819={
Global_21807 
};
Global_21825={
Global_21813 
};
Global_21780=Global_21779;
Global_21849={
Global_21831 
};
Global_21855={
Global_21837 
};
Global_21861={
Global_21843 
};
Global_21867={
Global_21873 
};
Global_7568=Global_7569;
Global_7570=Global_7571;
Global_21736=Global_21737;
Global_21738=Global_21739;
Global_21740={
Global_21756 
};
Global_21729=Global_21730;
Global_22741=0;
Global_21774=0;
Global_21775=0;
MISC::CLEAR_BIT(&Global_8254, 16);
}

int func_31(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_32(){
int iVar0;
int iVar1;
if(Global_78558){
iVar0=0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if((iVar1==joaat("weapon_sniperrifle") || iVar1==joaat("weapon_heavysniper")) || iVar1==joaat("weapon_remotesniper")){
iVar0=1;
}}
if(CAM::IS_AIM_CAM_ACTIVE() && iVar0==1){
return 1;
}else{
return 0;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1)){
return 1;
}else{
return 0;
}}
return 1;
}


void func_33(){
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
Global_20383=func_75();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


bool func_34(int iParam0){
return Global_43257==iParam0;
}


void func_35(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21014[iVar0 /*10*/]=0;
StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
Global_21014[iVar0 /*10*/].f_7=0;
Global_21014[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21014.f_161=-99;
Global_21014.f_162={
0f, 0f, 0f 
};
}


bool func_36(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_37(){
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


void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21179={
*uParam0 
};
Global_7569=iParam1;
StringCopy(&Global_21795, sParam2, 24);
Global_22714=uParam5;
if(iParam3==0){
Global_22712=1;
Global_22710=0;
}else{
Global_22712=0;
Global_22710=1;
}
if(iParam4==0){
Global_22713=1;
Global_22711=0;
}else{
Global_22713=0;
Global_22711=1;
}}


void func_39(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(iParam2)){
if((uParam0[iParam1 /*10*/])->f_8==0){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
}else{
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
}}
if(!PED::IS_PED_INJURED(iParam2)){
if((uParam0[iParam1 /*10*/])->f_9==0){
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
}else{
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
}}}}

int func_40(){
if(func_41(0)){
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

int func_41(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}

int func_42(var uParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3[20];
iVar2=0;
iVar1=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar3);
if(iVar1==0){
return 0;
}
iVar0=0;
while (iVar0 < iVar1){
if(func_81(uVar3[iVar0])){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, 0, 1, 0) && !uParam0->f_26){
if(func_43(uVar3[iVar0])){
iVar2=1;
}}}
iVar0++;
}
if(iVar2==1){
Global_113648.f_10051.f_104=CLOCK::GET_CLOCK_DAY_OF_MONTH();
iLocal_59=(MISC::GET_GAME_TIMER() + iLocal_60);
}
return iVar2;
}

int func_43(int iParam0){
bool bVar0;
int iVar1;
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
if(func_47(iParam0)){
return 0;
}
bVar0=false;
while (bVar0 < 5){
if(func_46(iVar1, bVar0)){
if(!func_14(bVar0)){
func_45(bVar0, ENTITY::GET_ENTITY_HEALTH(iParam0) < 875);
func_44(bVar0, 1);
return 1;
}}
bVar0++;
}
return 0;
}


void func_44(bool bParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&iLocal_51, bParam0);
bLocal_52=bParam0;
}else{
MISC::CLEAR_BIT(&iLocal_51, bParam0);
}}


void func_45(int iParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&iLocal_51, iParam0 + 5);
}else{
MISC::CLEAR_BIT(&iLocal_51, iParam0 + 5);
}}

int func_46(int iParam0, int iParam1){
if(iParam0==iLocal_43[iParam1]){
return 1;
}
if(iLocal_43[iParam1] !=joaat("tornado2")){
return 0;
}
if(iParam0==joaat("tornado")){
return 1;
}
if(iParam0==joaat("tornado2")){
return 1;
}
if(iParam0==joaat("tornado3")){
return 1;
}
if(iParam0==joaat("tornado4")){
return 1;
}
return 0;
}


bool func_47(int iParam0){
if(!func_81(uParam0)){
return 1;
}
if(ENTITY::GET_ENTITY_HEALTH(uParam0) < 750){
return 1;
}
if(VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 1) || VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 0)){
return 1;
}
return VEHICLE::GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(iParam0) > 0;
}


bool func_48(var uParam0){
return (uParam0->f_5==2 && uParam0->f_4==2);
}


void func_49(var uParam0){
struct<3> Var0;
uParam0->f_26=0;
if(MISC::IS_POSITION_OCCUPIED(uParam0->f_19[0 /*3*/], 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_26=1;
}elseif(MISC::IS_POSITION_OCCUPIED(uParam0->f_19[1 /*3*/], 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_26=1;
}else{
Var0={
func_50(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1) 
};
uParam0->f_26=MISC::IS_POSITION_OCCUPIED(Var0, 1.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0);
if(uParam0->f_26){
}}
if(uParam0->f_5==2 && (uParam0->f_4 !=2 || uParam0->f_4==3)){
uParam0->f_17=(uParam0->f_17 - uParam0->f_18);
if(uParam0->f_17 <=0f){
uParam0->f_17=0f;
uParam0->f_4=2;
AUDIO::STOP_SOUND(iLocal_47);
iLocal_48=0;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
}elseif(!iLocal_48){
AUDIO::PLAY_SOUND_FROM_COORD(iLocal_47, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
iLocal_48=1;
}}
if(uParam0->f_5==1 && (uParam0->f_4 !=1 || uParam0->f_4==4)){
uParam0->f_17=(uParam0->f_17 + uParam0->f_18);
if(uParam0->f_17 >=1f){
uParam0->f_17=1f;
uParam0->f_4=1;
AUDIO::STOP_SOUND(iLocal_47);
iLocal_48=0;
AUDIO::PLAY_SOUND_FROM_COORD(-1, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
}elseif(!iLocal_48){
AUDIO::PLAY_SOUND_FROM_COORD(iLocal_47, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
iLocal_48=1;
}}
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, 0)){
OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, 1, uParam0->f_17, 0);
}}


Vector3 func__50(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
if(bParam3){
fParam2=func_51(fParam2, 0f, 1f);
}
return Param0 + Vector(fParam2, fParam2, fParam2) * Param1 - Param0;
}


float func_51(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}


void func_52(int iParam0){
int iVar0;
if(iParam0==26){
if(!MISC::IS_BIT_SET(Global_113648.f_24988, (4 - 1))){
return;
}}
iVar0=func_11(iParam0);
if(iVar0==-1){
return;
}
Global_53765[iVar0 /*203*/]=0;
}


void func_53(int iParam0, char* sParam1, bool bParam2){
int iVar0;
iVar0=func_11(iParam0);
if(iVar0==-1){
return;
}
if(Global_53765[iVar0 /*203*/].f_9==0){
return;
}
Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_1=1;
StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_6=0;
StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
if(bParam2){
func_5(iParam0);
}}

int func_54(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_56(iParam0, 1);
if(iVar0==-1){
return 0;
}
if(Global_53765[iVar0 /*203*/].f_9==4){
return 0;
}
Global_53765[iVar0 /*203*/].f_2=iParam0;
Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/]=iParam1;
Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/].f_1=0;
Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/].f_6=0;
Global_53765[iVar0 /*203*/].f_9++;
iVar1=0;
iVar2=-1;
iVar1=0;
while (iVar1 < Global_53765[iVar0 /*203*/].f_3){
if(iVar2==-1){
if(Global_53765[iVar0 /*203*/].f_4[iVar1]==Global_44465[iParam1 /*12*/].f_3){
iVar2=iVar1;
}}
iVar1++;
}
if(iVar2==-1){
if(Global_53765[iVar0 /*203*/].f_3==4){
return 0;
}else{
Global_53765[iVar0 /*203*/].f_4[Global_53765[iVar0 /*203*/].f_3]=Global_44465[iParam1 /*12*/].f_3;
Global_53765[iVar0 /*203*/].f_3++;
}}
iVar1=0;
iVar2=-1;
iVar1=0;
while (iVar1 < Global_53765[iVar0 /*203*/].f_3){
if(iVar2==-1){
if(Global_53765[iVar0 /*203*/].f_4[iVar1]==Global_44465[iParam1 /*12*/].f_2){
iVar2=iVar1;
}}
iVar1++;
}
if(iVar2==-1){
if(Global_53765[iVar0 /*203*/].f_3==4){
return 0;
}else{
Global_53765[iVar0 /*203*/].f_4[Global_53765[iVar0 /*203*/].f_3]=Global_44465[iParam1 /*12*/].f_2;
Global_53765[iVar0 /*203*/].f_3++;
}}
iVar1=0;
iVar1=0;
while (iVar1 < Global_53765[iVar0 /*203*/].f_3){
iVar3=Global_53765[iVar0 /*203*/].f_4[iVar1];
if(iVar3 < 3){
func_55(Global_53765[iVar0 /*203*/].f_4[iVar1], Global_53765[iVar0 /*203*/].f_1, 1, bParam2, 0);
}
iVar1++;
}
return 1;
}


void func_55(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
int iVar2;
struct<16> Var3;
int iVar4;
int iVar5;
bool bVar6;
bool bVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
if(!iParam0 < 3){
return;
}
iVar0=-1;
StringCopy(&Var3, "UNSET", 64);
if(!bParam2){
iVar4=(Global_47790[iParam1 /*46*/].f_42 - 1);
if(iVar4 < 0){
return;
}
iVar5=Global_47790[iParam1 /*46*/].f_32[iVar4];
iVar2=iVar5;
Var3={
func_10(Global_44465[iVar5 /*12*/].f_1) 
};
if(Global_44465[iVar5 /*12*/].f_2==iParam0 && !Global_44465[iVar5 /*12*/].f_3==iParam0){
return;
}
iVar1=Global_44465[iVar5 /*12*/].f_2;
iVar0=Global_53403[iParam0 /*120*/];
bVar6=false;
while (iVar0 >=16){
iVar0=(iVar0 - 16);
bVar6=true;
}
if(bVar6){
if(!Global_53403[iParam0 /*120*/].f_69[iVar0]){
switch (iParam0){
case 0:
Global_44457=(Global_44457 - 1);
if(Global_44457 < 0){
Global_44457=0;
}
break;
case 1:
Global_44458=(Global_44458 - 1);
if(Global_44458 < 0){
Global_44458=0;
}
break;
case 2:
Global_44459=(Global_44459 - 1);
if(Global_44459 < 0){
Global_44459=0;
}
break;
}}}
Global_53403[iParam0 /*120*/].f_18[iVar0]=iParam1;
Global_53403[iParam0 /*120*/].f_1[iVar0]=iVar4;
Global_53403[iParam0 /*120*/].f_35[iVar0]=0;
Global_53403[iParam0 /*120*/].f_86[iVar0]=0;
Global_53403[iParam0 /*120*/].f_69[iVar0]=0;
Global_53403[iParam0 /*120*/]++;
}else{
iVar0=Global_53403[iParam0 /*120*/];
bVar7=false;
while (iVar0 >=16){
iVar0=(iVar0 - 16);
bVar7=true;
}
if(bVar7){
if(!Global_53403[iParam0 /*120*/].f_69[iVar0]){
switch (iParam0){
case 0:
Global_44457=(Global_44457 - 1);
if(Global_44457 < 0){
Global_44457=0;
}
break;
case 1:
Global_44458=(Global_44458 - 1);
if(Global_44458 < 0){
Global_44458=0;
}
break;
case 2:
Global_44459=(Global_44459 - 1);
if(Global_44459 < 0){
Global_44459=0;
}
break;
}}}
iVar8=-1;
iVar9=0;
iVar9=0;
while (iVar9 < 7){
if(Global_53765[iVar9 /*203*/].f_1==iParam1 && Global_53765[iVar9 /*203*/].f_9 > 0){
iVar8=iVar9;
}
iVar9++;
}
if(iVar8==-1){
return;
}
Global_53403[iParam0 /*120*/].f_18[iVar0]=Global_53765[iVar8 /*203*/].f_1;
Global_53403[iParam0 /*120*/].f_1[iVar0]=(Global_53765[iVar8 /*203*/].f_9 - 1);
Global_53403[iParam0 /*120*/].f_35[iVar0]=0;
Global_53403[iParam0 /*120*/].f_86[iVar0]=1;
Global_53403[iParam0 /*120*/].f_69[iVar0]=0;
Global_53403[iParam0 /*120*/]++;
iVar10=Global_53403[iParam0 /*120*/].f_1[iVar0];
iVar11=Global_53765[iVar8 /*203*/].f_10[iVar10 /*48*/];
iVar2=iVar11;
iVar1=Global_44465[iVar11 /*12*/].f_2;
if(Global_53765[iVar8 /*203*/].f_10[(Global_53765[iVar8 /*203*/].f_9 - 1) /*48*/].f_1){
MemCopy(&Var3,{
Global_53765[iVar8 /*203*/].f_10[(Global_53765[iVar8 /*203*/].f_9 - 1) /*48*/].f_2
}
, 16);
}else{
Var3={
func_10(Global_44465[iVar11 /*12*/].f_1) 
};
}}
if(!bParam4){
if(!Global_53403[iParam0 /*120*/].f_69[iVar0] && !bParam3){
switch (iParam0){
case 0:
func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
case 1:
if(iVar2==249){
func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}else{
func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
break;
case 2:
func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
}}}}

int func_56(int iParam0, bool bParam1){
int iVar0;
int iVar1;
bool bVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
iVar0=func_11(iParam0);
if(iVar0 > -1){
if(Global_53765[iVar0 /*203*/].f_9 < 4){
return iVar0;
}}
iVar1=0;
bVar2=false;
iVar1=0;
while (iVar1 < 7){
if(Global_53765[iVar1 /*203*/]==0){
bVar2=true;
}
iVar1++;
}
if(!bVar2){
return -1;
}
bVar3=true;
iVar1=0;
iVar4=-1;
iVar5=-1;
iVar1=0;
while (iVar1 < 7){
if(Global_53765[iVar1 /*203*/]==0){
if(bVar3){
iVar4=iVar1;
iVar5=Global_53765[iVar1 /*203*/].f_1;
bVar3=false;
}elseif(iVar5 > Global_53765[iVar1 /*203*/].f_1){
iVar4=iVar1;
iVar5=Global_53765[iVar1 /*203*/].f_1;
}}
iVar1++;
}
if(Global_53765[iVar4 /*203*/].f_9 > 0){
iVar1=0;
iVar1=0;
while (iVar1 < Global_53765[iVar4 /*203*/].f_9){
iVar6=0;
iVar6=0;
while (iVar6 < 3){
iVar7=Global_53403[iVar6 /*120*/];
if(iVar7 > 16){
iVar7=16;
}
iVar8=0;
iVar8=0;
while (iVar8 < iVar7){
if(Global_53403[iVar6 /*120*/].f_86[iVar8]){
if(!Global_53403[iVar6 /*120*/].f_69[iVar8]){
if(Global_53403[iVar6 /*120*/].f_18[iVar8]==Global_53765[iVar4 /*203*/].f_1){
if(Global_53403[iVar6 /*120*/].f_1[iVar8]==iVar1){
switch (iVar6){
case 0:
Global_44457=(Global_44457 - 1);
break;
case 1:
Global_44458=(Global_44458 - 1);
break;
case 2:
Global_44459=(Global_44459 - 1);
break;
}
}}}}
iVar8++;
}
iVar6++;
}
iVar1++;
}}
Global_53765[iVar4 /*203*/].f_2=iParam0;
Global_53765[iVar4 /*203*/].f_3=0;
if(!bParam1){
Global_53765[iVar4 /*203*/]=1;
}
Global_113648.f_21039.f_310++;
if(Global_113648.f_21039.f_310==0){
Global_113648.f_21039.f_310=1;
}
Global_53765[iVar4 /*203*/].f_1=Global_113648.f_21039.f_310;
Global_53765[iVar4 /*203*/].f_9=0;
return iVar4;
}


void func_57(int iParam0){
int iVar0;
switch (*iParam0){
case 1:
func_60(&iLocal_44);
func_59("EPS_DROP_PERSON", -1);
*iParam0=2;
break;
case 2:
if(!func_58()){
*iParam0=4;
return;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
if(func_81(iVar0)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, 0, 1)==0){
*iParam0=4;
}}}
break;
case 4:
if(!func_58()){
func_82(0);
}else{
func_59("EPS_DROP_ESCAPE", -1);
func_82(2);
}
break;
}}

int func_58(){
int iVar0;
var uVar1;
iVar0=0;
if(!func_81(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_54=0;
return 0;
}
uVar1=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(!func_81(uVar1)){
return 0;
}
iVar0=0;
while (iVar0 < 5){
if(!func_14(iVar0)){
if(func_46(ENTITY::GET_ENTITY_MODEL(uVar1), iVar0)){
if(func_47(iVar1)){
if(!iLocal_54){
func_59("EPS_DROP_FAIL", -1);
iLocal_54=1;
}
return 0;
}
return 1;
}}
iVar0++;
}
return 0;
}


void func_59(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_60(int iParam0){
if(HUD::DOES_BLIP_EXIST(*iParam0)){
HUD::SET_BLIP_ROUTE(*iParam0, 0);
HUD::REMOVE_BLIP(iParam0);
}}


void func_61(int iParam0){
int iVar0;
switch (*iParam0){
case 1:
func_89(&Local_41, 1);
Local_41.f_4=4;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1.5f);
}
*iParam0=2;
iLocal_50=0;
iLocal_58=0;
break;
case 2:
switch (iLocal_50){
case 0:
if(iLocal_55==1 && !Local_41.f_26){
if(func_21("EPS_DROP_MESS")){
HUD::CLEAR_HELP(1);
}}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
func_82(4);
return;
}
if(func_66(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
}
if(func_81(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, 0, 1) > 0){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0) !=PLAYER::PLAYER_PED_ID()){
func_82(3);
return;
}}
if(!Local_41.f_26){
if(iLocal_56==0){
if(func_65(iVar0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_41.f_6[0 /*3*/], Local_41.f_6[1 /*3*/], Local_41.f_6.f_7, 0, 1, 0)){
func_64("EPS_DROP_EXIT", 7500, 1);
iLocal_58=0;
iLocal_56=1;
iLocal_55=0;
}}
}
if(func_63(PLAYER::PLAYER_PED_ID(), Local_41.f_14, 0) < 3f){
func_60(&iLocal_44);
}
if(func_63(PLAYER::PLAYER_PED_ID(), Local_41, 0) > (15f + 5f)){
func_89(&Local_41, 2);
Local_41.f_4=3;
iLocal_56=0;
iLocal_55=0;
iLocal_58=0;
func_82(1);
return;
}
if(func_62(&Local_41) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_89(&Local_41, 2);
Local_41.f_4=3;
iLocal_58=0;
func_82(0);
return;
}}
if((Local_41.f_26 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
if(iLocal_58==0){
iLocal_58=MISC::GET_GAME_TIMER();
}
elseif((MISC::GET_GAME_TIMER() - iLocal_58) > 500){
if(iLocal_55==0){
HUD::CLEAR_PRINTS();
func_59("EPS_DROP_MESS", -1);
iLocal_55=1;
iLocal_56=0;
}
}}
break;
}
break;
}}


bool func_62(var uParam0){
return (!uParam0->f_26 && !MISC::IS_POSITION_OCCUPIED(uParam0->f_14, 6.2f, 0, 0, 1, 0, 0, 0, 0));
}


float func_63(int iParam0, struct<3> Param1, int iParam2){
struct<3> Var0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}


void func_64(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_65(int iParam0){
if(func_66(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}

int func_66(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}


void func_67(int iParam0){
int iVar0;
switch (*iParam0){
case 1:
if(!HUD::DOES_BLIP_EXIST(iLocal_44)){
iLocal_44=HUD::ADD_BLIP_FOR_COORD(Local_40);
if(HUD::DOES_BLIP_EXIST(iLocal_44)){
HUD::SET_BLIP_SPRITE(iLocal_44, 206);
HUD::SET_BLIP_COLOUR(iLocal_44, 42);
}}
*iParam0=2;
iLocal_50=0;
break;
case 2:
if(!func_58()){
func_82(0);
return;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
func_82(4);
return;
}
if(func_66(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
}
if(func_81(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, 0, 1) > 0){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0) !=PLAYER::PLAYER_PED_ID()){
func_82(3);
return;
}}
if(func_63(PLAYER::PLAYER_PED_ID(), Local_41, 0) < 15f){
*iParam0=4;
return;
}
break;
case 4:
func_82(2);
break;
}}


void func_68(int iParam0){
switch (*iParam0){
case 1:
func_60(&iLocal_44);
if(iLocal_57==0){
func_59("EPS_DROP_WANTED", -1);
}
*iParam0=2;
break;
case 2:
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
*iParam0=4;
}
break;
case 4:
if(!func_58()){
func_82(0);
}else{
if(iLocal_57==0){
func_59("EPS_DROP_ESCAPE", -1);
}
func_82(2);
}
iLocal_57=1;
break;
}}


void func_69(int iParam0){
switch (*iParam0){
case 1:
*iParam0=2;
iLocal_53=0;
iLocal_55=0;
func_60(&iLocal_44);
break;
case 2:
if(func_66(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41.f_6[0 /*3*/], Local_41.f_6[1 /*3*/], Local_41.f_6.f_7, 0, 1, 0) && func_48(&Local_41)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -687.6668f, 500.598f, 109.0364f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 200.7367f);
}}
if(func_63(PLAYER::PLAYER_PED_ID(), Local_41, 0) > (15f + 5f)){
func_89(&Local_41, 2);
if(Local_41.f_4 !=2){
Local_41.f_4=3;
}}
if(func_58()){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
func_82(4);
return;
}
*iParam0=4;
return;
}
break;
case 4:
if(iLocal_53==0 && func_66(PLAYER::PLAYER_PED_ID())){
if(iLocal_63 !=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)){
iLocal_63=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
func_59("EPS_DROP_HELP", -1);
iLocal_53=1;
}}
iLocal_54=0;
func_82(1);
break;
}}


void func_70(){
func_72();
while (MISC::GET_MISSION_FLAG() || func_75() !=0){
wait(0);
}
func_71();
}


void func_71(){
struct<3> Var0;
struct<3> Var1;
if(!func_81(PLAYER::PLAYER_PED_ID())){}
PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
func_87(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var1);
uLocal_64=PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, 0, 1, 1, 1);
iLocal_51=Global_113648.f_10051.f_103;
func_93();
if(func_92()){
func_96();
}
func_83(1);
if(func_11(2)==-1){
func_4(func_16());
}
func_82(0);
}


void func_72(){
if(HUD::DOES_BLIP_EXIST(iLocal_44)){
func_60(&iLocal_44);
iLocal_44=0;
}
Global_113648.f_10051.f_103=iLocal_51;
func_60(&iLocal_44);
func_83(0);
func_74();
func_73(&Local_41);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_64, 0);
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_61[0 /*3*/], Local_61[1 /*3*/], 8.25f, 1);
}


void func_73(var uParam0){
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, 0)){
OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, 1, 0f, 0);
}}


void func_74(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 5){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_43[iVar0]);
iVar0++;
}}

int func_75(){
func_76();
return Global_113648.f_2365.f_539.f_4321;
}


void func_76(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_79(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_78(PLAYER::PLAYER_PED_ID());
if(func_77(iVar0) && (!func_34(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_77(Global_113648.f_2365.f_539.f_4321)){
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


bool func_77(int iParam0){
return iParam0 < 3;
}

int func_78(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_79(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_79(int iParam0){
if(func_77(iParam0)){
return func_80(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__80(int iParam0){
return Global_2028[iParam0 /*29*/];
}


bool func_81(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}


void func_82(int iParam0){
iLocal_46=iParam0;
iLocal_45=1;
}


void func_83(bool bParam0){
func_84(44, bParam0);
func_84(45, bParam0);
func_84(46, bParam0);
func_84(47, bParam0);
func_84(48, bParam0);
func_84(49, bParam0);
func_84(50, bParam0);
}


void func_84(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_86(iParam0, 0)){
func_85(iParam0, 1, 0);
func_85(iParam0, 2, 0);
func_85(iParam0, 3, 0);
func_85(iParam0, 4, 0);
func_85(iParam0, 0, 1);
Global_77348[iParam0]=1;
}}else{
func_85(iParam0, 0, 0);
}}


void func_85(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}}

int func_86(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}


void func_87(struct<3> Param0, float fParam1, var uParam2, var uParam3){
struct<3> Var0;
Var0={
fParam1, fParam1, fParam1 
};
*uParam2={
Param0 - Var0 
};
*uParam3={
Param0 + Var0 
};
}


void func_88(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3){
*(uParam0[0 /*3*/])={
Param1 
};
*(uParam0[1 /*3*/])={
Param2 
};
uParam0->f_7=fParam3;
}


void func_89(var uParam0, int iParam1){
uParam0->f_5=iParam1;
}


void func_90(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, float fParam6, struct<3> Param7, struct<3> Param8){
uParam0->f_3=iParam1;
*uParam0={
Param2 
};
uParam0->f_5=2;
uParam0->f_4=0;
uParam0->f_19[0 /*3*/]={
Param7 
};
uParam0->f_19[1 /*3*/]={
Param8 
};
uParam0->f_14={
Param3 
};
func_88(&(uParam0->f_6), Param4, Param5, fParam6);
}

int func_91(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iVar0], bVar1)){
return 0;
}
MISC::SET_BIT(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
return 1;
}


bool func_92(){
return func_3()==5;
}


void func_93(){
iLocal_43[0]=joaat("vacca");
iLocal_43[1]=joaat("surano");
iLocal_43[2]=joaat("tornado2");
iLocal_43[3]=joaat("superd");
iLocal_43[4]=joaat("double");
Local_42[0 /*3*/]=1;
Local_42[0 /*3*/].f_1="EPS_GMAIL_G5";
Local_42[0 /*3*/].f_2="EPS_BMAIL_G5";
Local_42[1 /*3*/]=2;
Local_42[1 /*3*/].f_1="EPS_GMAIL_G4";
Local_42[1 /*3*/].f_2="EPS_BMAIL_G4";
Local_42[2 /*3*/]=3;
Local_42[2 /*3*/].f_1="EPS_GMAIL_G3";
Local_42[2 /*3*/].f_2="EPS_BMAIL_G3";
Local_42[3 /*3*/]=4;
Local_42[3 /*3*/].f_1="EPS_GMAIL_G2";
Local_42[3 /*3*/].f_2="EPS_BMAIL_G2";
Local_42[4 /*3*/]=5;
Local_42[4 /*3*/].f_1="EPS_GMAIL_G1";
Local_42[4 /*3*/].f_2="EPS_BMAIL_G1";
}


void func_94(){
int iVar0;
iLocal_51=0;
iVar0=0;
while (iVar0 < 5){
MISC::SET_BIT(&iLocal_51, iVar0);
bVar0++;
}}

int func_95(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_99.f_58[iParam0];
}


void func_96(){
int iVar0;
func_60(&iLocal_44);
func_83(0);
func_74();
func_73(&Local_41);
Global_113648.f_10051.f_103=iLocal_51;
if(func_92() || func_95(90)==1){
func_98(90, 1);
func_97(6);
}
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_61[0 /*3*/], Local_61[1 /*3*/], 8.25f, 1);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_64, 0);
if(iLocal_230 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_230);
iLocal_230=0;
}
STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
if(iVar0 < (6 + func_3())){
STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), 1);
func_20(23, (6 + func_3()));
}
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_97(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iVar0], bVar1)){
MISC::CLEAR_BIT(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
return 1;
}
return 0;
}


void func_98(int iParam0, int iParam1){
if(iParam0==146 || iParam0==-1){
return;
}
if(Global_113648.f_9087.f_99.f_58[iParam0]==iParam1){
return;
}
Global_113648.f_9087.f_99.f_58[iParam0]=iParam1;
}