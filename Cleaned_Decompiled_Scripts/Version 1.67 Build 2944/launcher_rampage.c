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
char* sLocal_18=NULL;
float fLocal_19=0f;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
float fLocal_29=0f;
float fLocal_30=0f;
var uLocal_31=0;
var uLocal_32=0;
int iLocal_33=0;
var uLocal_34=0;
struct<4> Local_35[10];
bool bLocal_36=0;
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
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
int iLocal_63=0;
int iLocal_64=0;
struct<3> Local_65={
0, 0, 0 
};
struct<3> Local_66={
0, 0, 0 
};
var uLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
var uLocal_70[3]={
0, 0, 0 
};
var uLocal_71=16;
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
var uLocal_230=0;
var uLocal_231=0;
var uLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=0;
int iLocal_236=0;
var uLocal_237=0;
int iLocal_238=0;
int iLocal_239=0;
int iLocal_240=0;
int iLocal_241=0;
int iLocal_242=0;
int iLocal_243=0;
var uLocal_244=3;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
struct<3> Local_248={
0, 0, 0 
};
int iLocal_249=0;
struct<2> Local_250={
0, 5 
};
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
var uLocal_264=0;
var uLocal_265=0;
var uLocal_266=5;
var uLocal_267=0;
var uLocal_268=0;
var uLocal_269=0;
var uLocal_270=0;
var uLocal_271=0;
#endregion

void __EntryFunction__(){
struct<42> Var0;
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
fLocal_12=0.001f;
iLocal_15=-1;
sLocal_18="NULL";
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
uLocal_47=HUD::GET_STANDARD_BLIP_ENUM_ID();
uLocal_48=HUD::GET_WAYPOINT_BLIP_ENUM_ID();
Local_65={
1180.969f, -402.381f, 67.2f 
};
Local_66={
5f, 0f, 57.33f 
};
iLocal_68=-1;
iLocal_238=77;
iLocal_239=-1;
iLocal_240=-1;
iLocal_241=1;
iLocal_242=1;
iLocal_243=1;
MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(1);
func_397();
Var0.f_17=2;
Var0.f_28=6;
Var0.f_35=5;
Var0.f_41=6;
Var1={
ScriptParam_250.f_1[0 /*3*/] 
};
Global_98085=1;
func_396(&Var0);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83)){
func_395(" Force cleanup [TERMINATING]");
func_380(&Var0, 1);
}
if(!func_379(108)){
func_238(&Var0, Var1);
}else{
func_1(&Var0, Var1);
}}


void func_1(var* uParam0, struct<3> Param1){
while (true){
if(!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
func_395(" Ambient - Player isn't within World Point Range");
func_380(uParam0, 1);
}
if(func_237() !=2){
func_395(" Ambient - Player is not Trevor");
func_380(uParam0, 1);
}
iLocal_240=func_236(5f);
if(iLocal_240 !=-1){
if(!func_230()){
*uParam0=func_229(iLocal_240);
StringCopy(&(uParam0->f_1), func_228(iLocal_240), 32);
uParam0->f_16=3;
uParam0->f_15=5f;
if(*uParam0==-1){
func_395(" - Ambient Rampage Mission ID is invalid");
func_380(uParam0, 1);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1))){
func_395(" - Ambient Rampage Mission ID is invalid");
func_380(uParam0, 1);
}
MISC::SET_BIT(&(Global_113810.f_18577[*uParam0 /*6*/]), 0);
MISC::SET_BIT(&(Global_113810.f_18577[*uParam0 /*6*/]), 2);
MISC::CLEAR_BIT(&(Global_113810.f_18577[*uParam0 /*6*/]), 3);
Global_112897[*uParam0 /*10*/].f_1=0;
if(!func_227(0)){
Global_112897[*uParam0 /*10*/].f_3=0;
}
if(!func_219(*uParam0)){
func_395(" RC Ambient Can't Launch - Can_RC_Launch Faled");
func_380(uParam0, 1);
}elseif(!func_5(uParam0)){
func_395(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
func_380(uParam0, 1);
}else{
func_4(500, 1);
MISC::CLEAR_AREA(Param1, uParam0->f_15, 1, 0, 0, 0);
func_395(" RC Ambient Launcher Waiting To Terminate");
Global_112897[*uParam0 /*10*/].f_1=0;
if(func_3(uParam0)){
func_395(" Ambient - Ready To Terminate");
func_380(uParam0, 0);
}}}}else{
if(func_2("RAMP_HELP_TRIG")){
HUD::CLEAR_HELP(1);
}
iLocal_243=0;
}
wait(0);
}}


bool func_2(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_3(var* uParam0){
while (!Global_112897[*uParam0 /*10*/]){
wait(0);
}
return 1;
}


void func_4(int iParam0, bool bParam1){
if(CAM::IS_SCREEN_FADED_IN()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(iParam0);
if(bParam1){
while (!CAM::IS_SCREEN_FADED_OUT()){
wait(0);
}}}}}

int func_5(var* uParam0){
struct<4> Var0;
char* sVar1;
if(!func_218()){
while (!func_213(*uParam0)){
if(func_212(*uParam0)){
func_201();
}
if(!func_158(uParam0, *uParam0 !=2)){
func_395("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
return 0;
}
wait(0);
}}
if(func_157()){
func_155();
}
if(!func_123(uParam0)){
func_395("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
return 0;
}
func_120(*uParam0, &Var0);
MemCopy(&sVar1,{
func_119(*uParam0)
}
, 4);
func_118(&sVar1, Var0.f_3, 0);
func_115(*uParam0);
if(!func_218()){
if(uParam0->f_16==2){
func_25(&(uParam0->f_1), 0);
}else{
func_25(&(uParam0->f_1), 1);
}}
func_6(*uParam0, Var0.f_0);
return 1;
}


void func_6(int iParam0, char* sParam1){
func_24(sParam1);
MISC::CLEAR_BIT(&(Global_113810.f_18577[iParam0 /*6*/]), 5);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
func_22();
wait(0);
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1){
Global_63486=0;
SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher")){
wait(0);
}
start_new_script("mission_stat_watcher", 1828);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
}
while (!MISC::IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 5)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
MISC::SET_BIT(&(Global_113810.f_18577[iParam0 /*6*/]), 5);
}}
func_7(iParam0);
}


void func_7(int iParam0){
int iVar0;
int iVar1;
if(Global_63483==1){
func_21();
Global_63483=0;
if(Global_63478){
return;
}}
if(Global_3){
Global_63486=1;
func_13();
return;
}
MemCopy(&Global_63500,{
func_12(iParam0)
}
, 4);
Global_63488=0;
Global_63487=0;
switch (iParam0){
case 1:
case 9:
Global_63475=1;
Global_63478=1;
Global_63481=1;
break;
case 0:
case 4:
case 7:
case 10:
case 11:
case 13:
case 15:
case 27:
case 31:
case 35:
case 36:
case 37:
case 48:
case 44:
case 45:
case 52:
case 53:
case 54:
case 55:
case 56:
Global_63486=1;
Global_63487=1;
func_13();
func_22();
return;
break;
}
iVar0=Global_75730;
Global_75730=1;
iVar1=Global_75731;
Global_75731=iParam0;
if(!Global_63475){
if((Global_75731 !=iVar1 || Global_75580==0) || iVar0 !=Global_75730){
Global_32537=0;
func_13();
func_9(iParam0);
}else{
Global_63478=1;
}}
Global_63513=MISC::GET_GAME_TIMER();
func_8();
Global_63485=0;
}


void func_8(){
int iVar0;
if(!Global_63482){
return;
}
if(Global_75580==0){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_75580){
switch (Global_63710[Global_75581[iVar0 /*9*/] /*13*/]){
case 1:
case 9:
Global_75581[iVar0 /*9*/].f_3=1;
break;
case 4:
if(Global_63493){
Global_75581[iVar0 /*9*/].f_3=1;
}
break;
case 6:
if(Global_63710[Global_75581[iVar0 /*9*/] /*13*/].f_3){
if(Global_75581[iVar0 /*9*/].f_1 !=0){
Global_75581[iVar0 /*9*/].f_3=1;
}}
break;
}
iVar0++;
}
Global_63482=0;
}


void func_9(int iParam0){
switch (iParam0){
case 2:
func_10(741);
func_10(742);
return;
case 3:
func_10(743);
func_10(744);
return;
case 5:
func_10(745);
func_10(746);
return;
case 6:
func_10(747);
func_10(748);
return;
case 8:
func_10(749);
return;
case 12:
func_10(750);
return;
case 14:
func_10(751);
func_10(752);
return;
case 16:
func_10(753);
func_10(754);
return;
case 17:
func_10(755);
func_10(756);
func_10(757);
return;
case 18:
func_10(758);
func_10(759);
return;
case 19:
func_10(760);
func_10(761);
return;
case 20:
func_10(762);
return;
case 21:
func_10(763);
return;
case 22:
func_10(764);
func_10(765);
return;
case 23:
func_10(766);
return;
case 25:
func_10(767);
func_10(768);
func_10(769);
return;
case 26:
func_10(770);
func_10(771);
return;
case 28:
func_10(772);
func_10(773);
return;
case 29:
func_10(774);
func_10(775);
return;
case 30:
func_10(776);
func_10(777);
return;
case 32:
func_10(778);
func_10(779);
return;
case 33:
func_10(780);
func_10(781);
func_10(782);
return;
case 34:
func_10(783);
func_10(784);
return;
case 38:
func_10(785);
func_10(786);
return;
case 39:
func_10(787);
func_10(788);
return;
case 40:
func_10(789);
return;
case 41:
func_10(790);
func_10(791);
func_10(792);
return;
case 42:
func_10(793);
func_10(794);
func_10(795);
return;
case 43:
func_10(796);
func_10(797);
return;
case 46:
func_10(798);
func_10(799);
return;
default:
}
switch (iParam0){
case 47:
func_10(800);
func_10(801);
return;
case 49:
func_10(802);
func_10(803);
return;
case 50:
func_10(804);
func_10(805);
return;
case 51:
func_10(806);
return;
case 57:
func_10(807);
func_10(808);
func_10(809);
return;
case 58:
func_10(828);
func_10(829);
func_10(830);
return;
case 59:
func_10(831);
func_10(832);
func_10(833);
return;
case 60:
func_10(834);
func_10(835);
func_10(836);
return;
case 61:
func_10(837);
func_10(838);
func_10(839);
return;
case 62:
func_10(840);
func_10(841);
func_10(842);
return;
case 24:
func_10(843);
func_10(844);
func_10(845);
return;
default:
}}


void func_10(int iParam0){
Global_63478=1;
Global_63481=1;
if(Global_75580 > 15){
return;
}
func_11(Global_75580);
Global_75581[Global_75580 /*9*/]=iParam0;
Global_75580++;
if(Global_63710[iParam0 /*13*/]==16){
Global_75732=1;
}}


void func_11(int iParam0){
Global_75581[iParam0 /*9*/].f_1=0;
Global_75581[iParam0 /*9*/].f_2=0f;
Global_75581[iParam0 /*9*/].f_3=0;
Global_75581[iParam0 /*9*/].f_4=0;
}


struct<2> func_12(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_119(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


void func_13(){
if(Global_63485){
return;
}
Global_63494=0;
Global_75580=0;
Global_63496=0;
if(Global_63493){}
Global_63493=0;
func_20(0);
func_19();
Global_75732=0;
Global_63484=1;
func_17();
func_16();
func_15();
func_14();
Global_63475=0;
Global_63505=0;
Global_63513=-1;
}


void func_14(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 4){
Global_75767[iVar0 /*2*/].f_1=-1;
iVar0++;
}
Global_75776=0;
}


void func_15(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
Global_75733[iVar0 /*2*/]=0;
Global_75733[iVar0 /*2*/].f_1=-1;
iVar0++;
}
Global_75766=0;
}


void func_16(){
Global_63644=0;
}


void func_17(){
Global_63504=0;
Global_63508=func_18(joaat("sp0_shots"));
Global_63507=func_18(joaat("sp0_hits"));
Global_63510=func_18(joaat("sp1_shots"));
Global_63509=func_18(joaat("sp1_hits"));
Global_63512=func_18(joaat("sp2_shots"));
Global_63511=func_18(joaat("sp2_hits"));
}


var func__18(int iParam0){
var uVar0;
STATS::STAT_GET_INT(iParam0, &uVar0, -1);
return uVar0;
}


void func_19(){
int iVar0;
Global_63514=0;
iVar0=0;
iVar0=0;
while (iVar0 < 64){
Global_63515[iVar0 /*2*/]=0;
iVar0++;
}}


void func_20(int iParam0){
Global_78950=iParam0;
Global_78951=iParam0;
}


void func_21(){
int iVar0;
Global_63483=1;
iVar0=0;
iVar0=0;
while (iVar0 < Global_75580){
Global_75581[iVar0 /*9*/].f_3=2;
iVar0++;
}
if(Global_63493){}
Global_63493=0;
}


void func_22(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
if(func_23()){
if(Global_63480 && !Global_63479){
Global_63480=0;
MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
}}else{
MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
}}}

int func_23(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1){
return 0;
}
if(!Global_63478){
return 0;
}
return Global_63490;
}


void func_24(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL(sParam0, sParam0)){}}


void func_25(char[4] cParam0, int iParam1){
MISC::CLEAR_BIT(&(Global_100833.f_20), 17);
func_26(cParam0, iParam1, 0);
}


void func_26(char[4] cParam0, int iParam1, int iParam2){
if(Global_100833 !=10 && Global_100833 !=9){
StringCopy(&Global_104365, cParam0, 32);
func_28(&Global_104373, cParam0, 0, "Start", iParam1, iParam2);
func_27();
Global_94991=0;
}}


void func_27(){
int iVar0;
int iVar1;
Global_107357=Global_104373;
Global_107357.f_1=Global_104373.f_1;
Global_107357.f_6=Global_104373.f_6;
Global_107357.f_7=Global_104373.f_7;
Global_107357.f_8=Global_104373.f_8;
Global_107357.f_2=Global_104373.f_2;
Global_107357.f_3=Global_104373.f_3;
Global_107357.f_4=Global_104373.f_4;
Global_107357.f_5=Global_104373.f_5;
iVar1=0;
while (iVar1 < 3){
Global_107357.f_9[iVar1]=Global_104373.f_9[iVar1];
Global_107357.f_13[iVar1]=Global_104373.f_13[iVar1];
Global_107357.f_17[iVar1]=Global_104373.f_17[iVar1];
Global_107357.f_21[iVar1]=Global_104373.f_21[iVar1];
Global_107357.f_25[0 /*295*/][iVar1 /*98*/]={
Global_104373.f_25[0 /*295*/][iVar1 /*98*/] 
};
Global_107357.f_25[1 /*295*/][iVar1 /*98*/]={
Global_104373.f_25[1 /*295*/][iVar1 /*98*/] 
};
iVar0=0;
while (iVar0 < 12){
Global_107357.f_616[iVar1 /*65*/][iVar0]=Global_104373.f_616[iVar1 /*65*/][iVar0];
Global_107357.f_616[iVar1 /*65*/].f_13[iVar0]=Global_104373.f_616[iVar1 /*65*/].f_13[iVar0];
Global_107357.f_616[iVar1 /*65*/].f_26[iVar0]=Global_104373.f_616[iVar1 /*65*/].f_26[iVar0];
iVar0++;
}
Global_107357.f_616[iVar1 /*65*/].f_59=Global_104373.f_616[iVar1 /*65*/].f_59;
Global_107357.f_616[iVar1 /*65*/].f_60=Global_104373.f_616[iVar1 /*65*/].f_60;
Global_107357.f_616[iVar1 /*65*/].f_61=Global_104373.f_616[iVar1 /*65*/].f_61;
Global_107357.f_616[iVar1 /*65*/].f_62=Global_104373.f_616[iVar1 /*65*/].f_62;
Global_107357.f_616[iVar1 /*65*/].f_63=Global_104373.f_616[iVar1 /*65*/].f_63;
Global_107357.f_616[iVar1 /*65*/].f_64=Global_104373.f_616[iVar1 /*65*/].f_64;
iVar0=0;
while (iVar0 < 9){
Global_107357.f_616[iVar1 /*65*/].f_39[iVar0]=Global_104373.f_616[iVar1 /*65*/].f_39[iVar0];
Global_107357.f_616[iVar1 /*65*/].f_49[iVar0]=Global_104373.f_616[iVar1 /*65*/].f_49[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 < 44){
Global_107357.f_812[iVar1 /*477*/][iVar0 /*5*/]={
Global_104373.f_812[iVar1 /*477*/][iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
Global_107357.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]={
Global_104373.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 4){
Global_107357.f_2244[iVar1 /*32*/][iVar0]=Global_104373.f_2244[iVar1 /*32*/][iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_107357.f_2244[iVar1 /*32*/].f_5[iVar0]=Global_104373.f_2244[iVar1 /*32*/].f_5[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
Global_107357.f_2244[iVar1 /*32*/].f_16[iVar0]=Global_104373.f_2244[iVar1 /*32*/].f_16[iVar0];
iVar0++;
}
Global_107357.f_2341[iVar1]=Global_104373.f_2341[iVar1];
iVar0=0;
while (iVar0 <=3){
Global_107357.f_2838[iVar1 /*15*/][iVar0]=Global_104373.f_2838[iVar1 /*15*/][iVar0];
Global_107357.f_2838[iVar1 /*15*/].f_5[iVar0]=Global_104373.f_2838[iVar1 /*15*/].f_5[iVar0];
Global_107357.f_2838[iVar1 /*15*/].f_10[iVar0]=Global_104373.f_2838[iVar1 /*15*/].f_10[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
Global_107357.f_2345[iVar1 /*164*/][iVar0]=Global_104373.f_2345[iVar1 /*164*/][iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_4[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_4[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_8[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_8[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_12[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_12[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_16[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_16[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_20[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_20[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_24[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_24[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_28[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_28[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_32[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_32[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_36[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_36[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_40[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_40[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_44[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_44[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_48[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_48[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_52[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_52[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_56[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_56[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_60[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_60[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_64[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_64[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_68[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_68[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_72[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_72[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_76[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_76[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_80[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_80[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_84[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_84[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_88[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_88[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_92[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_92[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_96[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_96[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_100[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_100[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_104[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_104[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_108[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_108[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_112[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_112[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_116[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_116[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_120[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_120[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_124[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_124[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_128[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_128[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_132[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_132[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_136[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_136[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_140[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_140[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_144[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_144[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_148[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_148[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_152[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_152[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_156[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_156[iVar0];
Global_107357.f_2345[iVar1 /*164*/].f_160[iVar0]=Global_104373.f_2345[iVar1 /*164*/].f_160[iVar0];
iVar0++;
}
iVar1++;
}
Global_107357.f_2884={
Global_104373.f_2884 
};
Global_107357.f_2884.f_3=Global_104373.f_2884.f_3;
Global_107357.f_2890={
Global_104373.f_2890 
};
Global_107357.f_2890.f_3={
Global_104373.f_2890.f_3 
};
Global_107357.f_2890.f_6=Global_104373.f_2890.f_6;
Global_107357.f_2890.f_8=Global_107357.f_2890.f_8;
Global_107357.f_2890.f_7=Global_104373.f_2890.f_7;
Global_107357.f_2890.f_9=Global_104373.f_2890.f_9;
Global_107357.f_2890.f_11=Global_104373.f_2890.f_11;
Global_107357.f_2890.f_10=Global_104373.f_2890.f_10;
Global_107357.f_2890.f_12=Global_104373.f_2890.f_12;
Global_107357.f_2890.f_12.f_1={
Global_104373.f_2890.f_12.f_1 
};
Global_107357.f_2890.f_12.f_5=Global_104373.f_2890.f_12.f_5;
Global_107357.f_2890.f_12.f_6=Global_104373.f_2890.f_12.f_6;
Global_107357.f_2890.f_12.f_7=Global_104373.f_2890.f_12.f_7;
Global_107357.f_2890.f_12.f_8=Global_104373.f_2890.f_12.f_8;
Global_107357.f_2890.f_12.f_9={
Global_104373.f_2890.f_12.f_9 
};
Global_107357.f_2890.f_12.f_59={
Global_104373.f_2890.f_12.f_59 
};
Global_107357.f_2890.f_12.f_62=Global_104373.f_2890.f_12.f_62;
Global_107357.f_2890.f_12.f_63=Global_104373.f_2890.f_12.f_63;
Global_107357.f_2890.f_12.f_64=Global_104373.f_2890.f_12.f_64;
Global_107357.f_2890.f_12.f_65=Global_104373.f_2890.f_12.f_65;
Global_107357.f_2890.f_12.f_77=Global_104373.f_2890.f_12.f_77;
Global_107357.f_2890.f_12.f_66=Global_104373.f_2890.f_12.f_66;
Global_107357.f_2890.f_12.f_67=Global_104373.f_2890.f_12.f_67;
Global_107357.f_2890.f_12.f_68=Global_104373.f_2890.f_12.f_68;
Global_107357.f_2890.f_12.f_69=Global_104373.f_2890.f_12.f_69;
Global_107357.f_2890.f_12.f_71=Global_104373.f_2890.f_12.f_71;
Global_107357.f_2890.f_12.f_72=Global_104373.f_2890.f_12.f_72;
Global_107357.f_2890.f_12.f_73=Global_104373.f_2890.f_12.f_73;
Global_107357.f_2890.f_12.f_74=Global_104373.f_2890.f_12.f_74;
Global_107357.f_2890.f_12.f_75=Global_104373.f_2890.f_12.f_75;
Global_107357.f_2890.f_12.f_76=Global_104373.f_2890.f_12.f_76;
Global_107357.f_2980=Global_104373.f_2980;
Global_107357.f_2980.f_1=Global_104373.f_2980.f_1;
Global_107357.f_2980.f_2=Global_104373.f_2980.f_2;
Global_107357.f_2980.f_3=Global_104373.f_2980.f_3;
}


void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
*uParam0=func_237();
uParam0->f_1=func_104();
MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_71(&(uParam0->f_2884), 0);
func_70(PLAYER::PLAYER_PED_ID());
func_63(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
if(uParam0->f_2==0 || uParam0->f_2==joaat("object")){
uParam0->f_2=joaat("weapon_unarmed");
}}
iVar1=0;
while (iVar1 < 3){
uParam0->f_17[iVar1]=Global_113810.f_2366.f_539.f_294[iVar1];
if(iVar1==func_60()){
func_51(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
}else{
iVar0=0;
while (iVar0 < 12){
uParam0->f_616[iVar1 /*65*/][iVar0]=Global_100558[iVar1 /*65*/][iVar0];
uParam0->f_616[iVar1 /*65*/].f_13[iVar0]=Global_100558[iVar1 /*65*/].f_13[iVar0];
iVar0++;
}
uParam0->f_616[iVar1 /*65*/].f_59=Global_100558[iVar1 /*65*/].f_59;
uParam0->f_616[iVar1 /*65*/].f_60=Global_100558[iVar1 /*65*/].f_60;
uParam0->f_616[iVar1 /*65*/].f_61=Global_100558[iVar1 /*65*/].f_61;
uParam0->f_616[iVar1 /*65*/].f_62=Global_100558[iVar1 /*65*/].f_62;
uParam0->f_616[iVar1 /*65*/].f_63=Global_100558[iVar1 /*65*/].f_63;
uParam0->f_616[iVar1 /*65*/].f_64=Global_100558[iVar1 /*65*/].f_64;
iVar0=0;
while (iVar0 < 9){
uParam0->f_616[iVar1 /*65*/].f_39[iVar0]=Global_100558[iVar1 /*65*/].f_39[iVar0];
uParam0->f_616[iVar1 /*65*/].f_49[iVar0]=Global_100558[iVar1 /*65*/].f_49[iVar0];
iVar0++;
}}
iVar0=0;
while (iVar0 < 44){
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/]={
Global_113810.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]={
Global_113810.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] 
};
iVar0++;
}
switch (iVar1){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
}
uParam0->f_9[iVar1]=Global_113810.f_20567.f_233[iVar1 /*69*/].f_1;
uParam0->f_13[iVar1]=Global_60659[iVar1];
uParam0->f_25[0 /*295*/][iVar1 /*98*/]={
Global_113810.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] 
};
uParam0->f_25[1 /*295*/][iVar1 /*98*/]={
Global_113810.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] 
};
iVar0=0;
while (iVar0 <=3){
uParam0->f_2838[iVar1 /*15*/][iVar0]=Global_113810.f_2366.f_493[iVar1 /*15*/][iVar0];
uParam0->f_2838[iVar1 /*15*/].f_5[iVar0]=Global_113810.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
uParam0->f_2838[iVar1 /*15*/].f_10[iVar0]=Global_113810.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
uParam0->f_2345[iVar1 /*164*/][iVar0]=Global_113810.f_2366[iVar1 /*164*/][iVar0];
uParam0->f_2345[iVar1 /*164*/].f_4[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_4[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_8[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_8[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_12[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_12[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_16[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_16[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_20[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_20[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_24[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_24[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_28[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_28[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_32[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_32[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_36[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_36[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_40[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_40[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_44[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_44[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_48[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_48[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_52[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_52[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_56[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_56[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_60[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_60[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_64[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_64[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_68[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_68[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_72[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_72[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_76[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_76[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_80[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_80[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_84[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_84[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_88[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_88[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_92[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_92[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_96[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_96[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_100[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_100[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_104[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_104[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_108[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_108[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_112[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_112[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_116[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_116[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_120[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_120[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_124[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_124[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_128[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_128[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_132[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_132[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_136[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_136[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_140[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_140[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_144[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_144[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_148[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_148[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_152[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_152[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_156[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_156[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_160[iVar0]=Global_113810.f_2366[iVar1 /*164*/].f_160[iVar0];
iVar0++;
}
iVar1++;
}
STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
uParam0->f_5=145;
if(iParam4==1){
func_30(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
}
func_29(&(uParam0->f_2980));
sParam3=sParam3;
iParam2=iParam2;
}

int func_29(var uParam0){
*uParam0=Global_96662;
uParam0->f_1=Global_96663;
uParam0->f_2=0;
uParam0->f_3=0;
return 1;
}


void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(iParam2==0){
iParam2=PLAYER::PLAYER_PED_ID();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam2)){
uParam1->f_5=func_48(iParam2);
}
if(func_45(iParam2, &iVar0, iParam3, iParam5)){
func_31(uParam0, uParam1, iVar0, iParam4);
}elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
func_31(uParam0, uParam1, iVar0, iParam4);
}}}}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0)){
func_33(uParam0, iParam2, iParam3);
uParam1->f_4=iParam2;
if(func_32(iParam2)){
uParam1->f_3=1;
}else{
uParam1->f_3=0;
}
return 1;
}
return 0;
}

int func_32(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=6){
if(Global_100833.f_22[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_33(var uParam0, int iParam1, int iParam2){
func_40(iParam1, &(uParam0->f_12));
uParam0->f_7=func_36(iParam1, 145, 0);
uParam0->f_11=func_35(iParam1);
if(!uParam0->f_7){
if(!uParam0->f_10){
uParam0->f_10=func_34(iParam1);
}}
if(iParam2==1){
*uParam0={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
uParam0->f_6=ENTITY::GET_ENTITY_HEADING(iParam1);
uParam0->f_3={
ENTITY::GET_ENTITY_VELOCITY(iParam1) 
};
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0)){
*uParam0={
-1160.095f, -1515.407f, 3.1496f 
};
uParam0->f_6=305.6424f;
}
if(Global_78384==iParam1){
uParam0->f_9=1;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_8=1;
}else{
uParam0->f_8=0;
}}

int func_34(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0])){
if(iParam0==Global_77479.f_484[iVar0]){
return 1;
}}
iVar0++;
}
return 0;
}

int func_35(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(Global_98144[iVar0]==iParam0){
return Global_98154[iVar0];
}}
iVar0++;
}
return 145;
}

int func_36(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(Global_98144[iVar0]==iParam0){
if(bParam1==145 || bParam1==Global_98154[iVar0]){
if(iParam2==0 || ENTITY::GET_ENTITY_MODEL(iParam0)==func_37(bParam1, iParam2)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_37(bool bParam0, int iParam1){
struct<82> Var0;
if(func_39(bParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_38(bParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(bParam0 !=145){}
return 0;
}


void func_38(bool bParam0, var uParam1, int iParam2){
int iVar0;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (bParam0){
case 0:
iVar0=joaat("tailgater");
if(Global_113810.f_9088.f_99.f_58[128] && !Global_113810.f_9088.f_99.f_58[131]){
iVar0=joaat("premier");
}
switch (iVar0){
case joaat("tailgater"):
*uParam1=iVar0;
uParam1->f_2=3f;
uParam1->f_4=0;
uParam1->f_9=1;
uParam1->f_11[0]=1;
StringCopy(&(uParam1->f_27), "5MDS003", 16);
break;
case joaat("premier"):
*uParam1=iVar0;
uParam1->f_2=14.9f;
uParam1->f_5=43;
uParam1->f_6=43;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_9=0;
StringCopy(&(uParam1->f_27), "880HS955", 16);
break;
}
break;
case 2:
iVar0=joaat("bodhi2");
switch (iVar0){
case joaat("bodhi2"):
*uParam1=iVar0;
uParam1->f_2=14f;
uParam1->f_5=32;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "BETTY 32", 16);
if(Global_113810.f_9088.f_99.f_58[119]){
uParam1->f_11[1]=1;
}
break;
}
break;
case 1:
if(iParam2==1){
iVar0=joaat("buffalo2");
}elseif(iParam2==2){
iVar0=joaat("bagger");
}elseif(Global_113810.f_9088.f_99.f_58[118]){
iVar0=joaat("bagger");
}else{
iVar0=joaat("buffalo2");
}
switch (iVar0){
case joaat("bagger"):
*uParam1=iVar0;
uParam1->f_2=6f;
uParam1->f_5=53;
uParam1->f_6=0;
uParam1->f_7=59;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "FC88", 16);
break;
case joaat("buffalo2"):
*uParam1=iVar0;
uParam1->f_2=0f;
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_10=1;
StringCopy(&(uParam1->f_27), "FC1988", 16);
uParam1->f_11[0]=1;
uParam1->f_11[1]=1;
uParam1->f_11[2]=1;
uParam1->f_11[3]=1;
uParam1->f_11[4]=1;
uParam1->f_11[5]=1;
uParam1->f_11[6]=1;
uParam1->f_11[7]=1;
uParam1->f_11[8]=1;
break;
}
break;
default:
break;
}}


bool func_39(bool bParam0){
return bParam0 < 3;
}


void func_40(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_44(uParam1);
uParam1->f_66=ENTITY::GET_ENTITY_MODEL(iParam0);
StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
*uParam1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
uParam1->f_65=VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
uParam1->f_67=VEHICLE::GET_VEHICLE_LIVERY(iParam0);
uParam1->f_69=VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
uParam1->f_70=VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2)){
MISC::SET_BIT(&(uParam1->f_77), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3)){
MISC::SET_BIT(&(uParam1->f_77), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1)){
MISC::SET_BIT(&(uParam1->f_77), 31);
}
if(uParam1->f_65==-1 && !func_43(uParam1->f_66)){
uParam1->f_65=0;
}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
uParam1->f_68=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)){
if(VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0)){
switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0)){
case 3:
case 0:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::SET_BIT(&(uParam1->f_77), 22);
break;
case 4:
case 1:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::CLEAR_BIT(&(uParam1->f_77), 22);
break;
case 5:
MISC::SET_BIT(&(uParam1->f_77), 23);
break;
}}else{
MISC::SET_BIT(&(uParam1->f_77), 23);
}}
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 9);
}
if(VEHICLE::IS_VEHICLE_STOLEN(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 10);
}
if(VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 13);
VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
}
if(VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 12);
}
func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_41(iVar0 + 1));
}
iVar0++;
}
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 11);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 11);
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave")){
MISC::SET_BIT(&(uParam1->f_77), 27);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 27);
}}}

int func_41(int iParam0){
switch (iParam0){
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 2;
break;
case 4:
return 3;
break;
case 5:
return 4;
break;
case 6:
return 5;
break;
case 7:
return 6;
break;
case 8:
return 7;
break;
case 9:
return 8;
break;
case 10:
return 24;
break;
case 11:
return 25;
break;
case 12:
return 26;
break;
}
return 0;
}

int func_42(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
(*uParam1)[iVar0]=0;
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
(*uParam1)[iVar0]=1;
}}elseif(iVar1==22){
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0)){
case 255:
(*uParam1)[iVar0]=1;
break;
case 0:
(*uParam1)[iVar0]=2;
break;
case 1:
(*uParam1)[iVar0]=3;
break;
case 2:
(*uParam1)[iVar0]=4;
break;
case 3:
(*uParam1)[iVar0]=5;
break;
case 4:
(*uParam1)[iVar0]=6;
break;
case 5:
(*uParam1)[iVar0]=7;
break;
case 6:
(*uParam1)[iVar0]=8;
break;
case 7:
(*uParam1)[iVar0]=9;
break;
case 8:
(*uParam1)[iVar0]=10;
break;
case 9:
(*uParam1)[iVar0]=11;
break;
case 10:
(*uParam1)[iVar0]=12;
break;
case 11:
(*uParam1)[iVar0]=13;
break;
case 12:
(*uParam1)[iVar0]=14;
break;
case 13:
(*uParam1)[iVar0]=15;
break;
}}else{
(*uParam1)[iVar0]=0;
}}else{
(*uParam1)[iVar0]=VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
if(iVar0==23){
(*uParam2)[0]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}elseif(iVar0==24){
(*uParam2)[1]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}}
iVar0++;
}
return 1;
}

int func_43(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_44(var uParam0){
int iVar0;
uParam0->f_66=0;
uParam0->f_77=0;
uParam0->f_65=0;
uParam0->f_62=0;
uParam0->f_63=0;
uParam0->f_64=0;
uParam0->f_74=0;
uParam0->f_75=0;
uParam0->f_76=0;
*uParam0=0;
StringCopy(&(uParam0->f_1), "", 16);
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
iVar0=0;
while (iVar0 < 49){
uParam0->f_9[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 2){
uParam0->f_59[iVar0]=0;
iVar0++;
}
uParam0->f_67=0;
uParam0->f_68=0;
uParam0->f_69=0;
uParam0->f_70=1;
uParam0->f_71=0;
uParam0->f_72=0;
uParam0->f_73=0;
}

int func_45(int iParam0, var uParam1, int iParam2, int iParam3){
char* sVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
*uParam1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
}else{
*uParam1=PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0)){
if(iParam2==0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f){
if(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi"))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) !=iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) !=0){
return 0;
}
}
if(func_46(*uParam1, func_237(), 1)){
sVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere")){
return 0;
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1)){
return 0;
}
}
if(iParam3==1){
if(DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave")){
if(DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave")){
return 0;
}}
}
elseif(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp"))){
return 0;
}
return 1;
}}}}}
return 0;
}

int func_46(int iParam0, bool bParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_47(bParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3){
StringCopy(sParam2, "", 32);
switch (iParam0){
case 0:
if(iParam1==0){
StringCopy(sParam2, "Michael - Beverly Hills", 32);
*uParam3=0;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=1;
return 1;
}
break;
case 1:
if(iParam1==0){
StringCopy(sParam2, "Franklin - Aunt", 32);
*uParam3=5;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Franklin - Hills", 32);
*uParam3=6;
return 1;
}
break;
case 2:
if(iParam1==0){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=2;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - City", 32);
*uParam3=3;
return 1;
}elseif(iParam1==2){
StringCopy(sParam2, "Trevor - Stripclub", 32);
*uParam3=4;
return 1;
}
break;
}
return 0;
}

int func_48(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_49(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_49(int iParam0){
if(func_39(iParam0)){
return func_50(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__50(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_51(int iParam0, var uParam1, int iParam2, int iParam3){
bool bVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_48(iParam0);
iVar1=0;
while (iVar1 < 12){
func_59(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
iVar1++;
}
iVar1=0;
while (iVar1 < 9){
func_58(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
iVar1++;
}
if(func_39(bVar0)){
uParam1->f_59=Global_113810.f_2366.f_539[bVar0 /*65*/].f_59;
uParam1->f_60=Global_113810.f_2366.f_539[bVar0 /*65*/].f_60;
uParam1->f_61=Global_113810.f_2366.f_539[bVar0 /*65*/].f_61;
uParam1->f_62=Global_113810.f_2366.f_539[bVar0 /*65*/].f_62;
uParam1->f_63=Global_113810.f_2366.f_539[bVar0 /*65*/].f_63;
uParam1->f_64=Global_113810.f_2366.f_539[bVar0 /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_56(161, iParam3)){
uParam1->f_59=func_52(2053, iParam3);
}else{
uParam1->f_59=func_52(753, iParam3);
}
uParam1->f_60=func_52(754, iParam3);
uParam1->f_61=func_52(755, iParam3);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
if(func_56(161, iParam3)){
uParam1->f_59=func_52(2053, iParam3);
}else{
uParam1->f_59=func_52(753, iParam3);
}}}}

int func_52(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_53(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__53(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_54(uParam1));
}

int func_54(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_55();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_55(){
return Global_1574918;
}

int func_56(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_57(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__57(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_54(uParam1));
}


void func_58(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
iVar0=func_48(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
*uParam3=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
}else{
iVar0=iParam5;
}
if(iParam4==0){
return;
}
if(iParam1==0){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
if(iParam0 !=0){
if(PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) !=-1){
*uParam2=PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
*uParam3=PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
}}}}
switch (iVar0){
case 0:
if(iParam1==0){
if(*uParam2==7){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==28){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=14 && *uParam2 <=20){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}elseif(iParam1==1){
if(*uParam2==1){
if(iParam4 & 2 !=0 || iParam4 & 64 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 1:
if(iParam1==0){
if(*uParam2==2){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==4){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==6){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==17){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==20){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=8 && *uParam2 <=14){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 2:
if(iParam1==0){
if(*uParam2==9){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==12){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif((*uParam2 >=14 && *uParam2 <=20) || *uParam2==2){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
}}


void func_59(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
iVar0=func_48(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
*uParam3=PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
*uParam4=PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
}else{
iVar0=iParam6;
}
if(iParam5==0){
return;
}
switch (iVar0){
case 0:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==15){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==3 || *uParam2==22){
*uParam2=0;
*uParam3=0;
}}}elseif(iParam1==9){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==8){
*uParam2=0;
*uParam3=0;
}}}
break;
case 1:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==1 || *uParam2==10){
*uParam2=14;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==19){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}}
break;
case 2:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==3){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(*uParam2 >=5 && *uParam2 <=7){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
*uParam2=0;
*uParam3=0;
}}}
break;
}}

int func_60(){
func_61();
return Global_113810.f_2366.f_539.f_4321;
}


void func_61(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_49(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_48(PLAYER::PLAYER_PED_ID());
if(func_39(iVar0) && (!func_62(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_39(Global_113810.f_2366.f_539.f_4321)){
Global_113810.f_2366.f_539.f_4322=Global_113810.f_2366.f_539.f_4321;
}
Global_113810.f_2366.f_539.f_4323=iVar0;
Global_113810.f_2366.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113810.f_2366.f_539.f_4321 !=145){
Global_113810.f_2366.f_539.f_4323=Global_113810.f_2366.f_539.f_4321;
}
return;
}}
Global_113810.f_2366.f_539.f_4321=145;
}


bool func_62(int iParam0){
return Global_43377==iParam0;
}


void func_63(int iParam0, bool bParam1){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
bVar0=func_48(iParam0);
if(func_39(bVar0) && !PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
func_64(iParam0, &(Global_113810.f_2366.f_539.f_298[bVar0 /*477*/]));
iVar2=0;
while (iVar2 <=(8 - 1)){
Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0]=HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
if(bParam1){
iVar1=HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
if(Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0]==iVar1){
Global_113810.f_2366.f_539.f_1763=iVar2;
}}
iVar2++;
}
PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
if(bVar0==0){
STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
}elseif(bVar0==1){
STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), uVar3, 1);
}elseif(bVar0==2){
STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), uVar3, 1);
}}}}


void func_64(int iParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
struct<5> Var4;
int iVar5;
int iVar6;
struct<2> Var7;
struct<4> Var8;
int iVar9;
int iVar10;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=0;
while (iVar0 <=(44 - 1)){
(uParam1[iVar0 /*5*/])->f_1=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=(44 - 1)){
iVar3=func_69(iVar0);
if(iVar3 !=0){
Var4.f_0=WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_69(iVar0));
Var4.f_1=0;
Var4.f_2=0;
Var4.f_3=0;
Var4.f_4=0;
if(Var4.f_0 !=0 && Var4.f_0 !=joaat("weapon_unarmed")){
Var4.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
if(Var4.f_0==joaat("gadget_parachute")){
Var4.f_1=1;
}
Var4.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
Var4.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
if(Var4.f_1==-1){
if(!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1))){
Var4.f_1=0;
}}
(uParam1[iVar0 /*5*/])->f_1=Var4.f_1;
iVar1=0;
iVar2=func_67(Var4.f_0, iVar1);
while (iVar2 !=0){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2)){
MISC::SET_BIT(&(Var4.f_2), iVar1);
}
iVar1++;
iVar2=func_67(Var4.f_0, iVar1);
}}
*(uParam1[iVar0 /*5*/])={
Var4 
};
}
iVar0++;
}
iVar0=0;
while (iVar0 <=50){
uParam1->f_221[iVar0 /*5*/].f_1=0;
iVar0++;
}
iVar6=FILES::GET_NUM_DLC_WEAPONS_SP();
iVar5=0;
while (iVar5 < iVar6){
if((FILES::GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_66(Var7.f_1)) && iVar9 < 51){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var7.f_0)){
Var4.f_0=Var7.f_1;
Var4.f_1=0;
Var4.f_2=0;
Var4.f_3=0;
Var4.f_4=0;
Var4.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
if(WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, 0)){
Var4.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
Var4.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
}
if(Var4.f_1==-1){
if(!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1))){
Var4.f_1=0;
}}
uParam1->f_221[iVar9 /*5*/].f_1=Var4.f_1;
iVar10=0;
iVar1=0;
while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, iVar1, &Var8)){
if(!func_65(Var8.f_3)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3)){
MISC::SET_BIT(&(Var4.f_2), iVar10);
}
iVar10++;
}
}
iVar1++;
}}
if(Var4.f_0 !=0){
if(!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, 0)){
Var4.f_0=0;
Var4.f_1=0;
}}
uParam1->f_221[iVar9 /*5*/]={
Var4 
};
iVar9++;
}
iVar5++;
}}}

int func_65(int iParam0){
switch (iParam0){
case joaat("component_pistol_mk2_camo_slide"):
case joaat("component_pistol_mk2_camo_02_slide"):
case joaat("component_pistol_mk2_camo_03_slide"):
case joaat("component_pistol_mk2_camo_04_slide"):
case joaat("component_pistol_mk2_camo_05_slide"):
case joaat("component_pistol_mk2_camo_06_slide"):
case joaat("component_pistol_mk2_camo_07_slide"):
case joaat("component_pistol_mk2_camo_08_slide"):
case joaat("component_pistol_mk2_camo_09_slide"):
case joaat("component_pistol_mk2_camo_10_slide"):
case joaat("component_pistol_mk2_camo_ind_01_slide"):
case joaat("component_snspistol_mk2_camo_slide"):
case joaat("component_snspistol_mk2_camo_02_slide"):
case joaat("component_snspistol_mk2_camo_03_slide"):
case joaat("component_snspistol_mk2_camo_04_slide"):
case joaat("component_snspistol_mk2_camo_05_slide"):
case joaat("component_snspistol_mk2_camo_06_slide"):
case joaat("component_snspistol_mk2_camo_07_slide"):
case joaat("component_snspistol_mk2_camo_08_slide"):
case joaat("component_snspistol_mk2_camo_09_slide"):
case joaat("component_snspistol_mk2_camo_10_slide"):
case joaat("component_snspistol_mk2_camo_ind_01_slide"):
case joaat("component_pistol_mk2_varmod_xm3_slide"):
return 1;
break;
}
return 0;
}

int func_66(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}else{
switch (iParam0){
case joaat("weapon_pistol50"):
case joaat("weapon_bullpupshotgun"):
case joaat("weapon_assaultsmg"):
return 0;
break;
case joaat("weapon_bottle"):
case joaat("weapon_snspistol"):
case joaat("weapon_gusenberg"):
return 0;
break;
case joaat("weapon_heavypistol"):
case joaat("weapon_specialcarbine"):
return 0;
break;
case joaat("weapon_bullpuprifle"):
return 0;
break;
case joaat("weapon_dagger"):
case joaat("weapon_vintagepistol"):
return 0;
break;
case joaat("weapon_firework"):
case joaat("weapon_musket"):
return 0;
break;
case joaat("weapon_heavyshotgun"):
case joaat("weapon_marksmanrifle"):
return 0;
break;
case joaat("weapon_hominglauncher"):
case joaat("weapon_proxmine"):
return 0;
break;
case joaat("weapon_combatpdw"):
case joaat("weapon_knuckle"):
case joaat("weapon_marksmanpistol"):
return 0;
break;
case joaat("weapon_heavyrifle"):
case -572349828:
case 392730790:
case -1523701417:
case -2112826155:
case -664359727:
case -1887867191:
case -837150131:
case -344484024:
case joaat("weapon_flaregun"):
case joaat("weapon_handcuffs"):
case joaat("weapon_snowball"):
case joaat("weapon_garbagebag"):
case joaat("weapon_flashlight"):
case joaat("weapon_switchblade"):
case joaat("weapon_revolver"):
case joaat("weapon_dbshotgun"):
case joaat("weapon_compactrifle"):
case joaat("weapon_autoshotgun"):
case joaat("weapon_minismg"):
case joaat("weapon_compactlauncher"):
case joaat("weapon_battleaxe"):
case joaat("weapon_pipebomb"):
case joaat("weapon_poolcue"):
case joaat("weapon_wrench"):
case joaat("weapon_doubleaction"):
case joaat("weapon_raycarbine"):
case joaat("weapon_rayminigun"):
case joaat("weapon_raypistol"):
case joaat("weapon_navyrevolver"):
case joaat("weapon_ceramicpistol"):
case joaat("weapon_gadgetpistol"):
case joaat("weapon_militaryrifle"):
case joaat("weapon_combatshotgun"):
case joaat("weapon_emplauncher"):
case joaat("weapon_fertilizercan"):
case joaat("weapon_stungun_mp"):
case joaat("weapon_metaldetector"):
case joaat("weapon_precisionrifle"):
case joaat("weapon_tacticalrifle"):
case joaat("weapon_pistolxm3"):
case joaat("weapon_candycane"):
case joaat("weapon_railgunxm3"):
case 350597077:
return 1;
break;
}}
return 0;
}

int func_67(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
struct<4> Var5;
iVar0=0;
switch (iParam0){
case joaat("weapon_pistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_pistol_clip_01");
break;
case 2:
iVar0=joaat("component_pistol_clip_02");
break;
case 3:
iVar0=joaat("component_at_pi_flsh");
break;
case 4:
iVar0=joaat("component_at_pi_supp_02");
break;
case 5:
iVar0=joaat("component_pistol_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_combatpistol_clip_01");
break;
case 1:
iVar0=joaat("component_combatpistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_combatpistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_appistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_appistol_clip_01");
break;
case 1:
iVar0=joaat("component_appistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_appistol_varmod_luxe");
break;
case 5:
iVar0=joaat("component_appistol_varmod_security");
break;
}
break;
case joaat("weapon_microsmg"):
switch (iParam1){
case 0:
iVar0=joaat("component_microsmg_clip_01");
break;
case 1:
iVar0=joaat("component_microsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_microsmg_varmod_luxe");
break;
case 6:
iVar0=joaat("component_microsmg_varmod_security");
break;
case 7:
iVar0=joaat("component_microsmg_varmod_xm3");
break;
case 8:
iVar0=1694268374;
break;
}
break;
case joaat("weapon_smg"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_smg_clip_01");
break;
case 2:
iVar0=joaat("component_smg_clip_02");
break;
case 3:
iVar0=joaat("component_smg_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_flsh");
break;
case 5:
iVar0=joaat("component_at_pi_supp");
break;
case 6:
iVar0=joaat("component_at_scope_macro_02");
break;
case 7:
iVar0=joaat("component_at_ar_afgrip");
break;
case 8:
iVar0=joaat("component_smg_varmod_luxe");
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_assaultrifle_clip_01");
break;
case 2:
iVar0=joaat("component_assaultrifle_clip_02");
break;
case 3:
iVar0=joaat("component_assaultrifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_afgrip");
break;
case 5:
iVar0=joaat("component_at_ar_flsh");
break;
case 6:
iVar0=joaat("component_at_scope_macro");
break;
case 7:
iVar0=joaat("component_at_ar_supp_02");
break;
case 8:
iVar0=joaat("component_assaultrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_carbinerifle_clip_01");
break;
case 2:
iVar0=joaat("component_carbinerifle_clip_02");
break;
case 3:
iVar0=joaat("component_carbinerifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_railcover_01");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_at_ar_flsh");
break;
case 7:
iVar0=joaat("component_at_scope_medium");
break;
case 8:
iVar0=joaat("component_at_ar_supp");
break;
case 9:
iVar0=joaat("component_carbinerifle_varmod_luxe");
break;
case 10:
iVar0=1605520746;
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_advancedrifle_clip_01");
break;
case 1:
iVar0=joaat("component_advancedrifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_advancedrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_mg"):
switch (iParam1){
case 0:
iVar0=joaat("component_mg_clip_01");
break;
case 1:
iVar0=joaat("component_mg_clip_02");
break;
case 2:
iVar0=joaat("component_at_scope_small_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_mg_varmod_lowrider");
break;
}
break;
case joaat("weapon_combatmg"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_combatmg_clip_01");
break;
case 2:
iVar0=joaat("component_combatmg_clip_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_combatmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (iParam1){
case 0:
iVar0=joaat("component_at_sr_supp");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_pumpshotgun_varmod_lowrider");
break;
case 3:
iVar0=joaat("component_pumpshotgun_varmod_security");
break;
case 4:
iVar0=joaat("component_pumpshotgun_varmod_xm3");
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (iParam1){
case 0:
iVar0=joaat("component_assaultshotgun_clip_01");
break;
case 1:
iVar0=joaat("component_assaultshotgun_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_afgrip");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_sniperrifle_clip_01");
break;
case 1:
iVar0=joaat("component_at_scope_large");
break;
case 2:
iVar0=joaat("component_at_scope_max");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_sniperrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_heavysniper"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_heavysniper_clip_01");
break;
case 2:
iVar0=joaat("component_at_scope_large");
break;
case 3:
iVar0=joaat("component_at_scope_max");
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (iParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_scope_small");
break;
}
break;
case joaat("weapon_minigun"):
switch (iParam1){
case 0:
iVar0=joaat("component_minigun_clip_01");
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (iParam1){
case 0:
iVar0=joaat("component_assaultsmg_clip_01");
break;
case 1:
iVar0=joaat("component_assaultsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_assaultsmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (iParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_ar_supp_02");
break;
}
break;
case joaat("weapon_pistol50"):
switch (iParam1){
case 0:
iVar0=joaat("component_pistol50_clip_01");
break;
case 1:
iVar0=joaat("component_pistol50_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_pistol50_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpdw"):
switch (iParam1){
case 0:
iVar0=joaat("component_combatpdw_clip_01");
break;
case 1:
iVar0=joaat("component_combatpdw_clip_02");
break;
case 2:
iVar0=joaat("component_combatpdw_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_small");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (iParam1){
case 0:
iVar0=joaat("component_sawnoffshotgun_varmod_luxe");
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_bullpuprifle_clip_01");
break;
case 1:
iVar0=joaat("component_bullpuprifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_bullpuprifle_varmod_low");
break;
}
break;
case joaat("weapon_snspistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_snspistol_clip_01");
break;
case 1:
iVar0=joaat("component_snspistol_clip_02");
break;
case 2:
iVar0=joaat("component_snspistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (iParam1){
case 0:
iVar0=joaat("component_specialcarbine_clip_01");
break;
case 1:
iVar0=joaat("component_specialcarbine_clip_02");
break;
case 2:
iVar0=joaat("component_specialcarbine_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_at_ar_supp_02");
break;
case 6:
iVar0=joaat("component_at_ar_afgrip");
break;
case 7:
iVar0=joaat("component_specialcarbine_varmod_lowrider");
break;
}
break;
case joaat("weapon_knuckle"):
switch (iParam1){
case 0:
iVar0=joaat("component_knuckle_varmod_pimp");
break;
case 1:
iVar0=joaat("component_knuckle_varmod_ballas");
break;
case 2:
iVar0=joaat("component_knuckle_varmod_dollar");
break;
case 3:
iVar0=joaat("component_knuckle_varmod_diamond");
break;
case 4:
iVar0=joaat("component_knuckle_varmod_hate");
break;
case 5:
iVar0=joaat("component_knuckle_varmod_love");
break;
case 6:
iVar0=joaat("component_knuckle_varmod_player");
break;
case 7:
iVar0=joaat("component_knuckle_varmod_king");
break;
case 8:
iVar0=joaat("component_knuckle_varmod_vagos");
break;
}
break;
case joaat("weapon_machinepistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_machinepistol_clip_01");
break;
case 1:
iVar0=joaat("component_machinepistol_clip_02");
break;
case 2:
iVar0=joaat("component_machinepistol_clip_03");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
}
break;
case joaat("weapon_switchblade"):
switch (iParam1){
case 0:
iVar0=joaat("component_switchblade_varmod_var1");
break;
case 1:
iVar0=joaat("component_switchblade_varmod_var2");
break;
}
break;
case joaat("weapon_revolver"):
switch (iParam1){
case 0:
iVar0=joaat("component_revolver_clip_01");
break;
case 1:
iVar0=joaat("component_revolver_varmod_boss");
break;
case 2:
iVar0=joaat("component_revolver_varmod_goon");
break;
}
break;
case joaat("weapon_minismg"):
switch (iParam1){
case 0:
iVar0=joaat("component_minismg_clip_01");
break;
case 1:
iVar0=joaat("component_minismg_clip_02");
break;
}
break;
case joaat("weapon_bat"):
switch (iParam1){
case 0:
iVar0=joaat("component_bat_varmod_xm3");
break;
case 1:
iVar0=joaat("component_bat_varmod_xm3_01");
break;
case 2:
iVar0=joaat("component_bat_varmod_xm3_02");
break;
case 3:
iVar0=joaat("component_bat_varmod_xm3_03");
break;
case 4:
iVar0=joaat("component_bat_varmod_xm3_04");
break;
case 5:
iVar0=joaat("component_bat_varmod_xm3_05");
break;
case 6:
iVar0=joaat("component_bat_varmod_xm3_06");
break;
case 7:
iVar0=joaat("component_bat_varmod_xm3_07");
break;
case 8:
iVar0=joaat("component_bat_varmod_xm3_08");
break;
case 9:
iVar0=joaat("component_bat_varmod_xm3_09");
break;
}
break;
case joaat("weapon_rpg"):
switch (iParam1){
case 0:
iVar0=-1240142720;
break;
}
break;
default:
if(iParam0 !=0){
iVar1=func_68(iParam0, &uVar4);
if(iVar1 !=-1){
iVar2=0;
while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5)){
if(!func_65(Var5.f_3)){
if(iVar3==iParam1){
return Var5.f_3;
}
iVar3++;
}
}
iVar2++;
}}}
break;
}
return iVar0;
}

int func_68(int iParam0, var uParam1){
int iVar0;
int iVar1;
iVar1=FILES::GET_NUM_DLC_WEAPONS();
iVar0=0;
while (iVar0 < iVar1){
if(FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1)){
if(uParam1->f_1==iParam0){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_69(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 0:
iVar0=1993361168;
break;
case 1:
iVar0=1277010230;
break;
case 2:
iVar0=932043479;
break;
case 3:
iVar0=-690654591;
break;
case 4:
iVar0=-1459198205;
break;
case 5:
iVar0=195782970;
break;
case 6:
iVar0=-438797331;
break;
case 7:
iVar0=896793492;
break;
case 8:
iVar0=495159329;
break;
case 9:
iVar0=-1155528315;
break;
case 10:
iVar0=-515636489;
break;
case 11:
iVar0=-871913299;
break;
case 12:
iVar0=-1352759032;
break;
case 13:
iVar0=-542958961;
break;
case 14:
iVar0=1682645887;
break;
case 15:
iVar0=-859470162;
break;
case 16:
iVar0=-2125426402;
break;
case 17:
iVar0=2067210266;
break;
case 18:
iVar0=-538172856;
break;
case 19:
iVar0=1783244476;
break;
case 20:
iVar0=439844898;
break;
case 21:
iVar0=-24829327;
break;
case 22:
iVar0=1949306232;
break;
case 23:
iVar0=-1941230881;
break;
case 24:
iVar0=-1033554448;
break;
case 25:
iVar0=320513715;
break;
case 26:
iVar0=-695165975;
break;
case 27:
iVar0=-281028447;
break;
case 28:
iVar0=-686713772;
break;
case 29:
iVar0=347509793;
break;
case 30:
iVar0=1769089473;
break;
case 31:
iVar0=189935548;
break;
case 33:
iVar0=248801358;
break;
case 34:
iVar0=386596758;
break;
case 35:
iVar0=-157212362;
break;
case 36:
iVar0=436985596;
break;
case 37:
iVar0=-47957369;
break;
case 38:
iVar0=575938238;
break;
}
return iVar0;
}


void func_70(int iParam0){
bool bVar0;
bVar0=func_48(iParam0);
if(func_39(bVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113810.f_2366.f_539.f_294[bVar0]=PED::GET_PED_ARMOUR(iParam0);
}}


void func_71(var uParam0, int iParam1){
int iVar0;
struct<3> Var1;
var uVar2;
bool bVar3;
*uParam0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
uParam0->f_3=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
uParam0->f_5=PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
uParam0->f_4=PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
if(vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f){
*uParam0={
301.2162f, 202.1357f, 103.3797f 
};
uParam0->f_3=156.5144f;
}elseif(vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f){
*uParam0={
394.2567f, -713.5439f, 28.2853f 
};
uParam0->f_3=276.6273f;
}elseif(vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f){
*uParam0={
-1423.472f, -214.2539f, 45.5004f 
};
uParam0->f_3=353.8757f;
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0){
*uParam0={
4.2587f, 525.0214f, 173.6281f 
};
uParam0->f_3=203.6746f;
}elseif(MISC::IS_BIT_SET(Global_78938, 4)){
*uParam0={
452.0255f, 5571.85f, 780.1859f 
};
uParam0->f_3=78.9858f;
}elseif(MISC::IS_BIT_SET(Global_78938, 5)){
*uParam0={
-745.4462f, 5595.146f, 40.6594f 
};
uParam0->f_3=261.747f;
}elseif(MISC::IS_BIT_SET(Global_78938, 6)){
*uParam0={
-1675.521f, -1125.59f, 12.091f 
};
uParam0->f_3=271.8208f;
}elseif(MISC::IS_BIT_SET(Global_78938, 7)){
*uParam0={
-1631.219f, -1112.805f, 12.0212f 
};
uParam0->f_3=316.8879f;
}elseif(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters")){
*uParam0={
1276.956f, -1725.189f, 53.6551f 
};
uParam0->f_3=204.1703f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0)){
*uParam0={
-601.59f, 2099.197f, 128.8928f 
};
uParam0->f_3=204.7498f;
}elseif(vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f){
*uParam0={
-1018.376f, -483.9436f, 36.0964f 
};
uParam0->f_3=114.7664f;
}elseif(vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f){
*uParam0={
497.7238f, -1310.932f, 28.2372f 
};
uParam0->f_3=289.3663f;
}elseif(vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f){
*uParam0={
2316.93f, 2594.153f, 45.7199f 
};
uParam0->f_3=348.1325f;
}
if(iParam1==1){
if(func_75(&iVar0)){
if(func_73(iVar0, &Var1, &uVar2)){
Var1.f_2=(Var1.f_2 + 1f);
*uParam0={
Var1 
};
uParam0->f_3=uVar2;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)){
bVar3=func_237();
if(bVar3==0){
*uParam0={
-65.1234f, 81.2517f, 70.5644f 
};
uParam0->f_3=71.6237f;
}elseif(bVar3==1){
*uParam0={
-68.5531f, -1824.377f, 25.9424f 
};
uParam0->f_3=215.8295f;
}elseif(bVar3==2){
*uParam0={
-220.8189f, -1162.302f, 22.0242f 
};
uParam0->f_3=70.2711f;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0)){
*uParam0={
495.4108f, -1306.08f, 29.2883f 
};
uParam0->f_3=213.6273f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0)){
*uParam0={
-1160.095f, -1515.407f, 3.1496f 
};
uParam0->f_3=305.6424f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0)){
*uParam0={
431.8853f, -1013.133f, 28.7907f 
};
uParam0->f_3=186.6814f;
}elseif(func_72(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)){
*uParam0={
279.4137f, -585.8815f, 43.2502f 
};
uParam0->f_3=48.8028f;
}}}

int func_72(struct<3> Param0, char* sParam1, struct<3> Param2){
int iVar0;
int iVar1;
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
iVar0=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
if(!INTERIOR::IS_VALID_INTERIOR(iVar0)){
return 0;
}
iVar1=INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
if(iVar1==iVar0){
return 1;
}}
return 0;
}


bool func_73(int iParam0, var uParam1, var uParam2){
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
switch (iParam0){
case 0:
*uParam1={
-829.842f, -191.7454f, 36.4386f 
};
*uParam2=29.5061f;
break;
case 1:
*uParam1={
129.8484f, -1716.528f, 28.0702f 
};
*uParam2=50.3483f;
break;
case 2:
*uParam1={
-1296.913f, -1120.999f, 5.3951f 
};
*uParam2=0.9933f;
break;
case 3:
*uParam1={
1938.028f, 3718.736f, 31.3154f 
};
*uParam2=118.2305f;
break;
case 4:
*uParam1={
1197.866f, -469.3809f, 65.0885f 
};
*uParam2=346.4477f;
break;
case 5:
*uParam1={
-32.2161f, -135.8212f, 56.0532f 
};
*uParam2=186.0052f;
break;
case 6:
*uParam1={
-287.7696f, 6238.081f, 30.2902f 
};
*uParam2=316.1349f;
break;
case 7:
*uParam1={
99.2876f, -1395.16f, 28.2759f 
};
*uParam2=320.2739f;
break;
case 8:
*uParam1={
1679.445f, 4819.056f, 41.0035f 
};
*uParam2=4.6192f;
break;
case 9:
*uParam1={
411.3063f, -809.1863f, 28.1554f 
};
*uParam2=1.8972f;
break;
case 10:
*uParam1={
-1088.054f, 2699.167f, 19.2748f 
};
*uParam2=129.7382f;
break;
case 11:
*uParam1={
1194.163f, 2695.644f, 36.9225f 
};
*uParam2=1.1454f;
break;
case 12:
*uParam1={
-821.2829f, -1088.027f, 10.0499f 
};
*uParam2=120.5883f;
break;
case 13:
*uParam1={
-3.3416f, 6521.303f, 30.2961f 
};
*uParam2=316.4451f;
break;
case 14:
*uParam1={
-1208.417f, -785.9635f, 16.0139f 
};
*uParam2=36.3181f;
break;
case 15:
*uParam1={
623.1845f, 2739.191f, 40.9588f 
};
*uParam2=3.5411f;
break;
case 16:
*uParam1={
130.9555f, -198.2084f, 53.41f 
};
*uParam2=251.3506f;
break;
case 17:
*uParam1={
-3164.065f, 1067.317f, 19.6778f 
};
*uParam2=101.2229f;
break;
case 18:
*uParam1={
-713.2797f, -174.2767f, 35.8962f 
};
*uParam2=29.8138f;
break;
case 19:
*uParam1={
-147.0616f, -306.4322f, 37.7912f 
};
*uParam2=160.4526f;
break;
case 20:
*uParam1={
-1461.355f, -230.6092f, 48.3064f 
};
*uParam2=318.7851f;
break;
case 21:
*uParam1={
-1347.739f, -1278.573f, 3.8952f 
};
*uParam2=17.9365f;
break;
case 22:
*uParam1={
325.6833f, 164.3263f, 102.4425f 
};
*uParam2=68.6407f;
break;
case 23:
*uParam1={
1858.774f, 3742.393f, 32.0779f 
};
*uParam2=301.2329f;
break;
case 24:
*uParam1={
-286.3272f, 6202.802f, 30.3323f 
};
*uParam2=225.1334f;
break;
case 25:
*uParam1={
-1161.596f, -1417.7f, 3.712f 
};
*uParam2=246.9161f;
break;
case 26:
*uParam1={
1308.952f, -1660.611f, 50.2362f 
};
*uParam2=163.5456f;
break;
case 27:
*uParam1={
-3161.585f, 1074.214f, 19.6847f 
};
*uParam2=98.6092f;
break;
case 28:
*uParam1={
28.423f, -1110.814f, 28.2848f 
};
*uParam2=85.2495f;
break;
case 29:
*uParam1={
1704.966f, 3749.709f, 33.0188f 
};
*uParam2=45.6778f;
break;
case 30:
*uParam1={
223.949f, -38.7894f, 68.6483f 
};
*uParam2=159.4265f;
break;
case 31:
*uParam1={
837.7854f, -1017.963f, 26.3045f 
};
*uParam2=181.0445f;
break;
case 32:
*uParam1={
-313.1914f, 6093.351f, 30.4625f 
};
*uParam2=315.8405f;
break;
case 33:
*uParam1={
-663.4631f, -952.8069f, 20.3143f 
};
*uParam2=92.6796f;
break;
case 34:
*uParam1={
-1323.06f, -392.8577f, 35.4596f 
};
*uParam2=210.7398f;
break;
case 35:
*uParam1={
-1106.102f, 2684.35f, 18.0953f 
};
*uParam2=127.0383f;
break;
case 36:
*uParam1={
-3157.932f, 1081.309f, 19.6953f 
};
*uParam2=100.2942f;
break;
case 37:
*uParam1={
2562.882f, 312.8641f, 107.4612f 
};
*uParam2=179.205f;
break;
case 38:
*uParam1={
822.48f, -2142.875f, 27.8496f 
};
*uParam2=355.0598f;
break;
case 39:
*uParam1={
-1137.053f, -1993.916f, 12.1677f 
};
*uParam2=43.1213f;
break;
case 40:
*uParam1={
717.8107f, -1084.081f, 21.3094f 
};
*uParam2=93.2649f;
break;
case 41:
*uParam1={
-387.6789f, -128.2568f, 37.6796f 
};
*uParam2=119.1085f;
break;
case 42:
*uParam1={
117.8835f, 6599.415f, 31.0134f 
};
*uParam2=90.7225f;
break;
case 43:
*uParam1={
1201.709f, 2664.813f, 36.8102f 
};
*uParam2=133.9002f;
break;
case 44:
*uParam1={
-200.1521f, -1297.502f, 30.296f 
};
*uParam2=269.0687f;
break;
case 45:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 47:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 48:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 49:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 52:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 50:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 51:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 54:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 55:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 56:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 57:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
}
return !func_74(*uParam1, 0f, 0f, 0f, 0);
}


bool func_74(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_75(var uParam0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_103()){
*uParam0=func_81(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, -1, 0, 1, -1);
if(func_80(*uParam0) && !func_76(*uParam0)){
return 1;
}}}
return 0;
}


bool func_76(int iParam0){
return func_77(iParam0, 0, 1);
}

int func_77(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_79()==0){
return MISC::IS_BIT_SET(func_52(func_78(iParam0), -1), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);
}
return 0;
}

int func_78(int iParam0){
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
return 12514;
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
case 60:
return 11901;
break;
default:
break;
}
return 14385;
}

int func_79(){
return Global_32283;
}

int func_80(int iParam0){
return func_77(iParam0, 5, 1);
}

int func_81(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=-1;
iVar0=0;
while (iVar0 <=60){
if(iParam1==6 || iParam1==func_102(iVar0)){
if(!bParam3 || func_101(iVar0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_82(iVar0, 0), 1);
if(((fVar1 < fVar2 && (fVar1 <=IntToFloat(iParam2) || iParam2==-1)) && (iParam4 || iVar0 !=21)) && iVar0 !=iParam5){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}


Vector3 func__82(int iParam0, bool bParam1){
switch (iParam0){
case -1:
return 0f, 0f, 0f;
break;
case 0:
return -821.9946f, -187.1776f, 36.5689f;
break;
case 1:
return 133.5702f, -1710.918f, 28.2916f;
break;
case 2:
return -1287.082f, -1116.558f, 5.9901f;
break;
case 3:
return 1933.119f, 3726.079f, 31.8444f;
break;
case 4:
return 1208.333f, -470.917f, 65.208f;
break;
case 5:
return -30.7448f, -148.4921f, 56.0765f;
break;
case 6:
return -280.8165f, 6231.771f, 30.6955f;
break;
case 7:
return 80.665f, -1391.669f, 28.3761f;
break;
case 8:
return 1687.881f, 4820.55f, 41.0096f;
break;
case 9:
return 419.531f, -807.5787f, 28.4896f;
break;
case 10:
return -1094.049f, 2704.171f, 18.0873f;
break;
case 11:
return 1197.972f, 2704.22f, 37.1572f;
break;
case 12:
return -818.6218f, -1077.533f, 10.3282f;
break;
case 13:
return -0.2361f, 6516.045f, 30.8684f;
break;
case 14:
return -1199.809f, -776.6886f, 16.3237f;
break;
case 15:
return 618.1857f, 2752.567f, 41.0881f;
break;
case 16:
return 126.6853f, -212.5027f, 53.5578f;
break;
case 17:
return -3168.966f, 1055.287f, 19.8632f;
break;
case 18:
return -715.3598f, -155.7742f, 36.4105f;
break;
case 19:
return -158.2199f, -304.9663f, 38.735f;
break;
case 20:
return -1455.005f, -233.1862f, 48.7936f;
break;
case 21:
return -1335.973f, -1278.555f, 3.8598f;
break;
case 22:
return 321.6098f, 179.4165f, 102.5865f;
break;
case 23:
return 1861.685f, 3750.08f, 32.0318f;
break;
case 24:
return -290.1603f, 6199.095f, 30.4871f;
break;
case 25:
return -1153.948f, -1425.019f, 3.9544f;
break;
case 26:
return 1322.455f, -1651.125f, 51.1885f;
break;
case 27:
return -3169.42f, 1074.727f, 19.8343f;
break;
case 28:
return 17.6804f, -1114.288f, 28.797f;
break;
case 29:
return 1697.979f, 3753.2f, 33.7053f;
break;
case 30:
return 245.2711f, -45.8126f, 68.941f;
break;
case 31:
return 844.1248f, -1025.571f, 27.1948f;
break;
case 32:
return -325.8904f, 6077.026f, 30.4548f;
break;
case 33:
return -664.2178f, -943.3646f, 20.8292f;
break;
case 34:
return -1313.948f, -390.9637f, 35.592f;
break;
case 35:
return -1111.238f, 2688.463f, 17.6131f;
break;
case 36:
return -3165.231f, 1082.855f, 19.8438f;
break;
case 37:
return 2569.612f, 302.576f, 107.7349f;
break;
case 38:
return 811.8699f, -2149.102f, 28.6363f;
break;
case 39:
return -1147.314f, -1992.434f, 12.1803f;
break;
case 40:
return 724.524f, -1089.081f, 21.1692f;
break;
case 41:
return -354.5272f, -135.4011f, 38.185f;
break;
case 42:
return 113.2615f, 6624.28f, 30.7871f;
break;
case 43:
return 1174.707f, 2644.45f, 36.7552f;
break;
case 44:
if(bParam1){
return -211.5f, -1324.2f, 30.296f;
}else{
return -205.6654f, -1311.113f, 30.296f;
}
break;
case 45:
return func_98(Global_102986);
break;
case 46:
if(Global_1853823 !=func_97()){
if(func_96(Global_1853823)){
return func_89(2, 2);
}elseif(func_88(Global_1853823)){
return func_89(45, 3);
}else{
return 1000000f, 1000000f, 1000000f;
}}else{
return 1000000f, 1000000f, 1000000f;
}
break;
case 47:
return func_86(-9.9f, -0.5f, 1f);
break;
case 48:
return -1422.197f, -3015.803f, -79.1603f;
break;
case 49:
return 203.0799f, 5200.189f, -89.6f;
break;
case 52:
return 2714.547f, -354.2701f, -55.1867f;
break;
case 50:
return Global_1971274;
break;
case 51:
return 1100f, 220f, -50f;
break;
case 53:
return 1560f, 400f, -50f;
break;
case 54:
return -2159.901f, 1075.213f, -25.36174f;
break;
case 55:
return -2194.123f, 1103.805f, -24.2451f;
break;
case 56:
switch (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7){
case 155:
return 379.4285f, -53.6067f, 111.7088f;
break;
case 156:
return -1029.166f, -426.3766f, 72.2069f;
break;
case 157:
return -581.9924f, -721.3945f, 121.3509f;
break;
case 158:
return -1013.718f, -768.3539f, 69.4942f;
break;
}
return 1000000f, 1000000f, 1000000f;
break;
case 57:
return -1010f, -70f, -100f;
break;
case 58:
return func_83();
break;
case 59:
return 560f, -405f, -69.6591f;
break;
case 60:
return -1299.691f, -3017.165f, -48.2612f;
break;
}
return 1000000f, 1000000f, 1000000f;
}


Vector3 func__83(){
if(!func_85(Global_1956855)){
return Global_1956855;
}
switch (func_84()){
case 0:
return -29.532f, 6435.136f, 31.162f;
case 1:
return 1705.214f, 4819.167f, 41.75f;
case 2:
return 1795.522f, 3899.753f, 33.869f;
case 3:
return 1335.536f, 2758.746f, 51.099f;
case 4:
return 795.583f, 1210.78f, 338.962f;
case 5:
return -3192.67f, 1077.205f, 20.594f;
case 6:
return -789.719f, 5400.921f, 33.915f;
case 7:
return -24.384f, 3048.167f, 40.703f;
case 8:
return 2666.786f, 1469.324f, 24.237f;
case 9:
return -1454.966f, 2667.503f, 3.2f;
case 10:
return 2340.418f, 3054.188f, 47.888f;
case 11:
return 1509.183f, -2146.795f, 76.853f;
case 12:
return 1137.404f, -1358.654f, 34.322f;
case 13:
return -57.208f, -2658.793f, 5.737f;
case 14:
return 1905.017f, 565.222f, 175.558f;
case 15:
return 974.484f, -1718.798f, 30.296f;
case 16:
return 779.077f, -3266.297f, 5.719f;
case 17:
return -587.728f, -1637.208f, 19.611f;
case 18:
return 733.99f, -736.803f, 26.165f;
case 19:
return -1694.632f, -454.082f, 40.712f;
case 20:
return -1330.726f, -1163.948f, 4.313f;
case 21:
return -496.618f, 40.231f, 52.316f;
case 22:
return 275.527f, 66.509f, 94.108f;
case 23:
return 260.928f, -763.35f, 30.559f;
case 24:
return -478.025f, -741.45f, 30.299f;
case 25:
return 894.94f, 3603.911f, 32.56f;
case 26:
return -2166.511f, 4289.503f, 48.733f;
case 27:
return 1465.633f, 6553.67f, 13.771f;
case 28:
return 1101.032f, -335.172f, 66.944f;
case 29:
return 149.683f, -1655.674f, 29.028f;
default:
}
return 0f, 0f, 0f;
}

int func_84(){
return Global_2652364.f_2650;
}

int func_85(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


Vector3 func__86(struct<3> Param0){
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_87(), 0f, Param0);
}


Vector3 func__87(){
return -880f, -2770f, -50f;
}

int func_88(int iParam0){
if(iParam0 !=func_97()){
if((MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 0) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}


Vector3 func__89(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
Var1={
1000000f, 1000000f, 1000000f 
};
if(Global_1853823 !=func_97()){
if(iParam1==3){
if(func_90(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(iParam1==2){
if(MISC::IS_BIT_SET(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 4)){
if(func_90(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(MISC::IS_BIT_SET(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 5)){
if(func_90(iParam0, 2, &Var0, 0, 0)){
Var1={
Var0 
};
}}}}
return Var1;
}

int func_90(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
struct<4> Var0;
struct<3> Var1;
struct<4> Var2;
struct<3> Var3;
if(!func_95(iParam3, &Var0)){
return 0;
}
if(!func_95(iParam1, &Var1)){
return 0;
}
if(!bParam4){
Var2={
func_93(iParam0) 
};
}else{
Var2={
func_92(iParam0) 
};
}
Var3={
Var2 - Var0 
};
Var3={
func_91(Var3, -Var0.f_3.f_2) 
};
Var3={
func_91(Var3, Var1.f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, 0f, Var3) 
};
uParam2->f_3={
Var2.f_3 
};
return 1;
}


Vector3 func__91(struct<3> Param0, float fParam1){
struct<3> Var0;
float fVar1;
float fVar2;
fVar1=sin(fParam1);
fVar2=cos(fParam1);
Var0.f_0=((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
Var0.f_1=((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
Var0.f_2=Param0.f_2;
return Var0;
}


struct<6> func_92(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 1:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 2:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 3:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 4:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 5:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 6:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 7:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 8:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
}
return Var0;
}


struct<6> func_93(int iParam0){
return func_94(iParam0);
}


struct<6> func_94(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1105.22f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 1:
Var0={
1104.105f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 19:
Var0={
1105.22f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 20:
Var0={
1104.105f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 2:
Var0={
1102f, -3011.925f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
1103f, -3010f, -38.125f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
1103.213f, -3013.483f, -39.03f 
};
Var0.f_3={
0f, 0f, 31.32f 
};
break;
case 5:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1101.408f, -3012.32f, -38.45339f 
};
break;
case 6:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1103.037f, -3012.318f, -39.99874f 
};
break;
case 7:
Var0={
1105.645f, -3012.04f, -39.542f 
};
Var0.f_3={
0f, 0f, -86.04f 
};
break;
case 8:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1104.063f, -3012.368f, -39.99875f 
};
break;
case 9:
Var0={
1105.665f, -3012.334f, -38.50835f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 10:
Var0={
1102.504f, -3012.35f, -39.341f 
};
Var0.f_3={
0f, 0f, -96.48f 
};
break;
case 11:
Var0={
1102.928f, -3012.693f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 12:
Var0={
1102.942f, -3011.315f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 61:
Var0={
1101.994f, -3012.878f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 62:
Var0={
1103.152f, -3013.032f, -38.24946f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 13:
Var0={
1102.465f, -3009.515f, -39.341f 
};
Var0.f_3={
0f, 0f, -12.96f 
};
break;
case 14:
Var0={
1102.917f, -3009.525f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 15:
Var0={
1102.922f, -3010.887f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 63:
Var0={
1101.682f, -3009.227f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
1102.453f, -3008.51f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 16:
Var0={
1104.684f, -3009.561f, -39.341f 
};
Var0.f_3={
0f, 0f, 169.56f 
};
break;
case 17:
Var0={
1104.34f, -3008.698f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 18:
Var0={
1104.344f, -3009.618f, -37.98172f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 65:
Var0={
1105.459f, -3009.793f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 66:
Var0={
1104.783f, -3010.433f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 44:
Var0={
1104.025f, -3007.316f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 21:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 22:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 23:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 24:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 25:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 26:
Var0={
1102.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 27:
Var0={
1102.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 28:
Var0={
1105.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 29:
Var0={
1105.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 30:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 31:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 32:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 33:
Var0={
1102.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 34:
Var0={
1102.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 35:
Var0={
1105.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 36:
Var0={
1105.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 37:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 38:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 39:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
case 40:
Var0={
1102.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 41:
Var0={
1102.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 42:
Var0={
1105.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 43:
Var0={
1105.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 45:
Var0={
1101f, -3011.9f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 46:
Var0={
1102f, -3010f, -38.115f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 47:
Var0={
1105.174f, -3004.16f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 48:
Var0={
1105.175f, -3005.818f, -37.91948f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 49:
Var0={
1106.6f, -3000.847f, -39.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 50:
Var0={
1106.601f, -3002.171f, -37.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 51:
Var0={
1101.95f, -3011.9f, -39.2f 
};
Var0.f_3={
0f, 0f, 49.5f 
};
break;
case 52:
Var0={
1101.95f, -3010f, -39.2f 
};
Var0.f_3={
0f, 0f, 130.32f 
};
break;
case 53:
Var0={
1105.16f, -3009.06f, -39.2f 
};
Var0.f_3={
0f, 0f, -44.64f 
};
break;
case 54:
Var0={
1102.476f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 55:
Var0={
1099f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 56:
Var0={
1103.593f, -3008.27f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 57:
Var0={
1103.565f, -3014f, -39.988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 58:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 59:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 60:
Var0={
1103.55f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 67:
Var0={
1103.55f, -3013.762f, -40f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 68:
Var0={
1103.55f, -3006.186f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 71:
case 69:
case 70:
case 73:
case 72:
case 74:
Var0={
1103.6f, -3013.933f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
}
return Var0;
}

int func_95(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1={
1103.562f, -3014f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 1:
*uParam1={
1103.562f, -3006f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 2:
*uParam1={
1103.562f, -2998f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
default:
}
return 0;
}

int func_96(int iParam0){
if(iParam0 !=func_97()){
if((MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 3) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 4)) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 5)){
return 1;
}}
return 0;
}

int func_97(){
return -1;
}


Vector3 func__98(int iParam0){
switch (iParam0){
case 1:
return 1060f, -2990f, -35f;
break;
case 2:
return 1060f, -2990f, -35f;
break;
case 3:
return 974.9542f, -3000.091f, -35f;
break;
case 6:
return -1586.36f, -566.6f, 106.17f;
break;
case 7:
return -1389.87f, -465.17f, 82.68f;
break;
case 8:
return -145.81f, -590.2f, 171.13f;
break;
case 9:
return -62.49f, -823.55f, 288.74f;
break;
case 4:
return 1102.515f, -3158.888f, -38.5186f;
break;
case 5:
return 1005.861f, -3156.162f, -39.907f;
break;
case 10:
return 1103.562f, -3000f, -40f;
break;
case 11:
return 938.3077f, -3196.112f, -100f;
break;
case 12:
return -1266.802f, -3014.836f, -49.4895f;
break;
case 13:
return func_87();
break;
case 14:
return 345.0041f, 4842.001f, -59.9997f;
break;
case 15:
return -1604.664f, -3012.583f, -79.9999f;
break;
case 16:
return -1421.015f, -3012.587f, -80f;
break;
case 17:
if(func_99()==0){
return 205f, 5180f, -90f;
}else{
return 170f, 5190f, 10f;
}
break;
case 18:
return -2000f, 1250f, 50f;
break;
case 19:
return -1350f, 160f, -100f;
break;
case 20:
return -1070f, -70f, -100f;
break;
case 21:
return 570f, -415f, -70f;
break;
default:
return 0f, 0f, -200f;
break;
}
return 0f, 0f, -200f;
}

int func_99(){
return func_100(PLAYER::PLAYER_ID());
}


var func__100(int iParam0){
return MISC::GET_BITS_IN_RANGE(Global_2657704[iParam0 /*463*/].f_321.f_3, 28, 31);
}

int func_101(int iParam0){
return func_77(iParam0, 0, 0);
}

int func_102(int iParam0){
switch (iParam0){
case -1:
return 6;
break;
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 0;
break;
case 3:
return 0;
break;
case 4:
return 0;
break;
case 5:
return 0;
break;
case 6:
return 0;
break;
case 50:
return 0;
break;
case 7:
return 1;
break;
case 8:
return 1;
break;
case 9:
return 1;
break;
case 10:
return 1;
break;
case 11:
return 1;
break;
case 12:
return 1;
break;
case 13:
return 1;
break;
case 14:
return 1;
break;
case 15:
return 1;
break;
case 16:
return 1;
break;
case 17:
return 1;
break;
case 18:
return 1;
break;
case 19:
return 1;
break;
case 20:
return 1;
break;
case 21:
return 1;
break;
case 22:
return 2;
break;
case 23:
return 2;
break;
case 24:
return 2;
break;
case 25:
return 2;
break;
case 26:
return 2;
break;
case 27:
return 2;
break;
case 28:
return 3;
break;
case 29:
return 3;
break;
case 30:
return 3;
break;
case 31:
return 3;
break;
case 32:
return 3;
break;
case 33:
return 3;
break;
case 34:
return 3;
break;
case 35:
return 3;
break;
case 36:
return 3;
break;
case 37:
return 3;
break;
case 38:
return 3;
break;
case 39:
return 4;
break;
case 40:
return 4;
break;
case 41:
return 4;
break;
case 42:
return 4;
break;
case 43:
return 4;
break;
case 44:
return 4;
break;
case 45:
return 5;
break;
case 46:
return 3;
break;
case 47:
return 3;
break;
case 48:
return 3;
break;
case 49:
return 3;
break;
case 52:
return 3;
break;
case 51:
return 1;
break;
case 53:
return 3;
break;
case 54:
return 2;
break;
case 55:
return 1;
break;
case 56:
return 3;
break;
case 57:
return 1;
break;
case 58:
return 3;
break;
case 59:
return 3;
break;
case 60:
return 3;
break;
}
return 6;
}


bool func_103(){
return Global_100885.f_393 > 0;
}


var func__104(){
var uVar0;
func_114(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_113(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_112(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_107(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_106(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_105(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_105(var uParam0, int iParam1){
if(iParam1 <=0){
return;
}
if(iParam1 > 2043 || iParam1 < 1979){
return;
}
*uParam0=(*uParam0 - *uParam0 & 2080374784);
if(iParam1 < 2011){
*uParam0=(*uParam0 || shift_left((2011 - iParam1), 26));
*uParam0 |=-2147483648;
}else{
*uParam0=(*uParam0 || shift_left((iParam1 - 2011), 26));
*uParam0=(*uParam0 - *uParam0 & -2147483648);
}}


void func_106(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_107(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_111(*uParam0);
iVar1=func_109(*uParam0);
if(iParam1 < 1 || iParam1 > func_108(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_108(int iParam0, int iParam1){
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


var func__109(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_110(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_110(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_111(int iParam0){
return iParam0 & 15;
}


void func_112(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_113(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_114(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}


void func_115(int iParam0){
var uVar0;
char cVar1[24];
if(MISC::IS_XBOX360_VERSION() || func_117()){
uVar0=iParam0;
NETWORK::NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
}elseif(MISC::IS_PS3_VERSION() || func_116()){
StringCopy(&cVar1, "SPRC_", 24);
StringIntConCat(&cVar1, iParam0, 24);
StringConCat(&cVar1, "_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &cVar1);
}}


var func__116(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__117(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_118(char* sParam0, var uParam1, int iParam2){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97883)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97883, 0, 0, 0, 1, 0);
StringCopy(&Global_97883, "", 64);
}
StringCopy(&Global_97883, sParam0, 64);
STATS::PLAYSTATS_MISSION_STARTED(sParam0, uParam1, iParam2, func_227(0));
}


struct<2> func_119(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "", 8);
switch (iParam0){
case 0:
StringCopy(&Var0, "ABI1", 8);
break;
case 1:
StringCopy(&Var0, "ABI2", 8);
break;
case 2:
StringCopy(&Var0, "BA1", 8);
break;
case 3:
StringCopy(&Var0, "BA2", 8);
break;
case 4:
StringCopy(&Var0, "BA3", 8);
break;
case 5:
StringCopy(&Var0, "BA3A", 8);
break;
case 6:
StringCopy(&Var0, "BA3C", 8);
break;
case 7:
StringCopy(&Var0, "BA4", 8);
break;
case 8:
StringCopy(&Var0, "DRE1", 8);
break;
case 9:
StringCopy(&Var0, "EPS1", 8);
break;
case 10:
StringCopy(&Var0, "EPS2", 8);
break;
case 11:
StringCopy(&Var0, "EPS3", 8);
break;
case 12:
StringCopy(&Var0, "EPS4", 8);
break;
case 13:
StringCopy(&Var0, "EPS5", 8);
break;
case 14:
StringCopy(&Var0, "EPS6", 8);
break;
case 15:
StringCopy(&Var0, "EPS7", 8);
break;
case 16:
StringCopy(&Var0, "EPS8", 8);
break;
case 17:
StringCopy(&Var0, "EXT1", 8);
break;
case 18:
StringCopy(&Var0, "EXT2", 8);
break;
case 19:
StringCopy(&Var0, "EXT3", 8);
break;
case 20:
StringCopy(&Var0, "EXT4", 8);
break;
case 21:
StringCopy(&Var0, "FAN1", 8);
break;
case 22:
StringCopy(&Var0, "FAN2", 8);
break;
case 23:
StringCopy(&Var0, "FAN3", 8);
break;
case 24:
StringCopy(&Var0, "HAO1", 8);
break;
case 25:
StringCopy(&Var0, "HUN1", 8);
break;
case 26:
StringCopy(&Var0, "HUN2", 8);
break;
case 27:
StringCopy(&Var0, "JOS1", 8);
break;
case 28:
StringCopy(&Var0, "JOS2", 8);
break;
case 29:
StringCopy(&Var0, "JOS3", 8);
break;
case 30:
StringCopy(&Var0, "JOS4", 8);
break;
case 31:
StringCopy(&Var0, "MAU1", 8);
break;
case 32:
StringCopy(&Var0, "MIN1", 8);
break;
case 33:
StringCopy(&Var0, "MIN2", 8);
break;
case 34:
StringCopy(&Var0, "MIN3", 8);
break;
case 35:
StringCopy(&Var0, "MRS1", 8);
break;
case 36:
StringCopy(&Var0, "MRS2", 8);
break;
case 37:
StringCopy(&Var0, "NI1", 8);
break;
case 38:
StringCopy(&Var0, "NI1A", 8);
break;
case 39:
StringCopy(&Var0, "NI1B", 8);
break;
case 40:
StringCopy(&Var0, "NI1C", 8);
break;
case 41:
StringCopy(&Var0, "NI1D", 8);
break;
case 42:
StringCopy(&Var0, "NI2", 8);
break;
case 43:
StringCopy(&Var0, "NI3", 8);
break;
case 44:
StringCopy(&Var0, "OME1", 8);
break;
case 45:
StringCopy(&Var0, "OME2", 8);
break;
case 46:
StringCopy(&Var0, "PA1", 8);
break;
case 47:
StringCopy(&Var0, "PA2", 8);
break;
case 48:
StringCopy(&Var0, "PA3", 8);
break;
case 49:
StringCopy(&Var0, "PA3A", 8);
break;
case 50:
StringCopy(&Var0, "PA3B", 8);
break;
case 51:
StringCopy(&Var0, "PA4", 8);
break;
case 52:
StringCopy(&Var0, "RAM1", 8);
break;
case 53:
StringCopy(&Var0, "RAM2", 8);
break;
case 54:
StringCopy(&Var0, "RAM3", 8);
break;
case 55:
StringCopy(&Var0, "RAM4", 8);
break;
case 56:
StringCopy(&Var0, "RAM5", 8);
break;
case 57:
StringCopy(&Var0, "SAS1", 8);
break;
case 58:
StringCopy(&Var0, "TON1", 8);
break;
case 59:
StringCopy(&Var0, "TON2", 8);
break;
case 60:
StringCopy(&Var0, "TON3", 8);
break;
case 61:
StringCopy(&Var0, "TON4", 8);
break;
case 62:
StringCopy(&Var0, "TON5", 8);
break;
default:
break;
}
return Var0;
}


void func_120(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_121(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
break;
case 1:
func_121(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
break;
case 2:
func_121(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
break;
case 3:
func_121(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
break;
case 4:
func_121(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_122(iParam0), 0, 0);
break;
case 5:
func_121(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 6:
func_121(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 7:
func_121(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_122(iParam0), 0, 0);
break;
case 8:
func_121(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
break;
case 9:
func_121(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
break;
case 10:
func_121(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
break;
case 11:
func_121(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
break;
case 12:
func_121(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
break;
case 13:
func_121(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
break;
case 14:
func_121(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_122(iParam0), 0, 1);
break;
case 15:
func_121(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
break;
case 16:
func_121(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
break;
case 17:
func_121(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 18:
func_121(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 19:
func_121(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 20:
func_121(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
break;
case 21:
func_121(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_122(iParam0), 1, 0);
break;
case 22:
func_121(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_122(iParam0), 1, 0);
break;
case 23:
func_121(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_122(iParam0), 0, 1);
break;
case 24:
func_121(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_122(iParam0), 0, 1);
break;
case 25:
func_121(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
break;
case 26:
func_121(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
break;
case 27:
func_121(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
break;
case 28:
func_121(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
break;
case 29:
func_121(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
break;
case 30:
func_121(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
break;
case 31:
func_121(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
break;
case 32:
func_121(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
break;
case 33:
func_121(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
break;
case 34:
func_121(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
break;
case 35:
func_121(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
break;
case 36:
func_121(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
break;
case 37:
func_121(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_122(iParam0), 1, 0);
break;
case 38:
func_121(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
break;
case 39:
func_121(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
break;
case 40:
func_121(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
break;
case 41:
func_121(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
break;
case 42:
func_121(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
break;
case 43:
func_121(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
break;
case 44:
func_121(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
break;
case 45:
func_121(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
break;
case 46:
func_121(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 47:
func_121(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 48:
func_121(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_122(iParam0), 0, 0);
break;
case 49:
func_121(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 50:
func_121(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 51:
func_121(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
break;
case 52:
func_121(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
break;
case 54:
func_121(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
break;
case 55:
func_121(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
break;
case 56:
func_121(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
break;
case 53:
func_121(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
break;
case 57:
func_121(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 58:
func_121(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 59:
func_121(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 60:
func_121(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 61:
func_121(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
case 62:
func_121(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
break;
default:
break;
}}


void func_121(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
uParam0->f_4=iParam4;
*uParam0=sParam1;
uParam0->f_1={
Param2 
};
uParam0->f_3=iParam3;
uParam0->f_5=iParam5;
uParam0->f_6={
Param6 
};
uParam0->f_9=iParam7;
StringCopy(&(uParam0->f_10), sParam8, 16);
uParam0->f_14=iParam9;
uParam0->f_15=iParam10;
StringCopy(&(uParam0->f_16), sParam11, 24);
uParam0->f_22=iParam12;
uParam0->f_23=iParam13;
uParam0->f_24=iParam14;
uParam0->f_25=iParam15;
uParam0->f_26=iParam16;
uParam0->f_27=iParam17;
uParam0->f_28=iParam18;
uParam0->f_29=uParam19;
uParam0->f_30=iParam20;
uParam0->f_31=iParam21;
}

int func_122(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 1;
break;
case 4:
return 0;
break;
case 5:
return 1;
break;
case 6:
return 1;
break;
case 7:
return 0;
break;
case 8:
return 1;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 11:
return 0;
break;
case 12:
return 1;
break;
case 13:
return 0;
break;
case 14:
return 1;
break;
case 15:
return 0;
break;
case 16:
return 1;
break;
case 17:
return 1;
break;
case 18:
return 1;
break;
case 19:
return 1;
break;
case 20:
return 1;
break;
case 21:
return 1;
break;
case 22:
return 1;
break;
case 23:
return 1;
break;
case 24:
return 1;
break;
case 25:
return 1;
break;
case 26:
return 1;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 1;
break;
case 30:
return 1;
break;
case 31:
return 0;
break;
case 32:
return 1;
break;
case 33:
return 1;
break;
case 34:
return 1;
break;
case 35:
return 0;
break;
case 36:
return 0;
break;
case 37:
return 0;
break;
case 38:
return 1;
break;
case 39:
return 1;
break;
case 40:
return 1;
break;
case 41:
return 1;
break;
case 42:
return 1;
break;
case 43:
return 1;
break;
case 44:
return 0;
break;
case 45:
return 0;
break;
case 46:
return 1;
break;
case 47:
return 1;
break;
case 48:
return 0;
break;
case 49:
return 1;
break;
case 50:
return 1;
break;
case 51:
return 1;
break;
case 52:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 1;
break;
case 56:
return 1;
break;
case 53:
return 1;
break;
case 57:
return 1;
break;
case 58:
return 1;
break;
case 59:
return 1;
break;
case 60:
return 1;
break;
case 61:
return 1;
break;
case 62:
return 1;
break;
default:
break;
}
return 0;
}

int func_123(var* uParam0){
int iVar0;
if(func_154(&(uParam0->f_1))){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9))){
func_143(1);
func_141(uParam0, 1, func_142(*uParam0));
}
if(uParam0->f_27){
if(func_140(*uParam0)){
while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
func_201();
wait(0);
}}}
func_124(*uParam0);
iVar0=start_new_script_with_args(&(uParam0->f_1), uParam0, 61, 57500);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
func_395("Initial cutscene loaded and passing to RC mission.");
CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(iVar0);
}else{
func_395("Initial cutscene wasn't loaded in time to pass to RC mission.");
CUTSCENE::REMOVE_CUTSCENE();
}
return 1;
}
return 0;
}


void func_124(int iParam0){
struct<2> Var0;
func_139();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
}
if(func_138(iParam0)){
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
if(Global_44569==1){
if(func_136(PLAYER::PLAYER_PED_ID())){
func_127(PLAYER::PLAYER_PED_ID());
}}
if(!func_218()){
if(iParam0 < 63){
func_125(iParam0);
Var0={
func_12(iParam0) 
};
HUD::SET_MISSION_NAME(1, &Var0);
}}}


void func_125(int iParam0){
if(iParam0 < 63){
func_126();
Global_78945=iParam0;
Global_78944=0;
Global_78947=7;
}}


void func_126(){
if(Global_78944 !=6){}
if(Global_78949){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_78949=0;
Global_23390.f_8892=0;
}
Global_78944=6;
Global_78946=-1;
Global_78945=-1;
}


void func_127(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0==0){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
iVar0=func_135(iParam0);
if(!iVar0==-1){
iVar1=Global_44355[iVar0 /*5*/];
func_130(1, iVar1, 1);
return;
}
iVar2=func_129(iParam0);
if(iVar2==-1){
return;
}
func_128(iVar2);
}


void func_128(int iParam0){
if(iParam0 < 0 || iParam0 >=5){
return;
}
if(!Global_44329[iParam0 /*5*/].f_1==0){
if(Global_44329[iParam0 /*5*/].f_1==PLAYER::PLAYER_PED_ID()){
Global_44567=0;
}}
Global_44329[iParam0 /*5*/]=13;
Global_44329[iParam0 /*5*/].f_1=0;
Global_44329[iParam0 /*5*/].f_2=0;
Global_44329[iParam0 /*5*/].f_3=0;
Global_44329[iParam0 /*5*/].f_4=0;
Global_44327=(Global_44327 - 1);
if(Global_44327 < 0){
Global_44327=0;
}}

int func_129(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 5){
if(Global_44329[iVar0 /*5*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_130(int iParam0, int iParam1, int iParam2){
func_131(iParam0, iParam1, iParam2, 0, 0, 1);
}


void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(iParam0==-1){
return;
}
if(iParam1==-1){
return;
}
if(iParam2==6){
return;
}
if(func_133(iParam0, iParam1, iParam2)){
return;
}
iVar0=func_132();
if(iVar0==-1){
return;
}
Global_44436[iVar0 /*6*/]=iParam0;
Global_44436[iVar0 /*6*/].f_1=iParam1;
Global_44436[iVar0 /*6*/].f_2=iParam2;
Global_44436[iVar0 /*6*/].f_3=iParam3;
Global_44436[iVar0 /*6*/].f_4=iParam4;
Global_44436[iVar0 /*6*/].f_5=iParam5;
}

int func_132(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(Global_44436[iVar0 /*6*/].f_2==6){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_133(int iParam0, int iParam1, int iParam2){
if(func_134(iParam0, iParam1, iParam2)==-1){
return 0;
}
return 1;
}

int func_134(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(iParam2==Global_44436[iVar0 /*6*/].f_2){
if(iParam0==Global_44436[iVar0 /*6*/]){
if(iParam1==Global_44436[iVar0 /*6*/].f_1){
return iVar0;
}}}
iVar0++;
}
return -1;
}

int func_135(int iParam0){
int iVar0;
if(iParam0==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(!Global_44355[iVar0 /*5*/]==-1){
if(iParam0==Global_44355[iVar0 /*5*/].f_1){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_136(int iParam0){
if(func_137(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}

int func_137(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_138(int iParam0){
switch (iParam0){
case 5:
case 6:
case 38:
case 39:
case 40:
case 41:
case 49:
case 50:
case 60:
case 61:
return 0;
break;
}
return 1;
}


void func_139(){
if(Global_9175[0 /*2811*/][0 /*281*/].f_259==2){
Global_9175[0 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9175[1 /*2811*/][0 /*281*/].f_259==2){
Global_9175[1 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9175[2 /*2811*/][0 /*281*/].f_259==2){
Global_9175[2 /*2811*/][0 /*281*/].f_259=0;
}
MISC::CLEAR_BIT(&Global_8370, 25);
MISC::SET_BIT(&Global_8371, 11);
}

int func_140(int iParam0){
switch (iParam0){
case 5:
case 6:
case 14:
case 16:
case 38:
case 39:
case 40:
case 41:
case 49:
case 50:
return 0;
break;
}
return 1;
}


void func_141(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(func_137(uParam0->f_28[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(func_137(uParam0->f_35[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 6){
if(func_137(uParam0->f_41[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
}
iVar0++;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), iParam1);
if(bParam2){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
}}}

int func_142(int iParam0){
switch (iParam0){
case 5:
case 6:
case 14:
case 38:
case 39:
case 40:
case 41:
case 49:
case 50:
case 52:
case 53:
case 54:
case 55:
case 56:
return 0;
break;
}
return 1;
}


void func_143(bool bParam0){
var uVar0;
uVar0=PLAYER::GET_PLAYER_INDEX();
if(!PLAYER::IS_PLAYER_DEAD(uVar0)){
if(bParam0){
}
PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 16);
PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 32);
}
func_144(1, 1, 0, 0, 0, 0, 0);
}


void func_144(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_153(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20500.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_152()){
Global_20500.f_1=3;
}
Global_21845=5;
}
func_151(1, iParam3, iParam2, 0);
Global_63491=1;
Global_75819=1;
Global_78687=1;
}else{
func_153(0);
HUD::THEFEED_RESUME();
Global_63491=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_151(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !func_146(PLAYER::PLAYER_ID(), 0)) && !func_145()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78687=0;
}}


bool func_145(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}


bool func_146(int iParam0, int iParam1){
bool bVar0;
if(!func_148(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_147(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_147(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_55();
}
if(Global_1575043[iVar1]==1){
if(bParam1){
}
iVar0=8;
}else{
iVar0=Global_1574912[iVar1];
if(bParam1){
}}
return iVar0;
}

int func_148(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 < 0){
return 0;
}
if(iVar0 >=32){
return 0;
}
return 1;
}

int func_149(int iParam0){
if(func_146(iParam0, 0)){
return 1;
}
if(func_150()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_150(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_151(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_152(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_153(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 13);
}else{
MISC::CLEAR_BIT(&Global_8370, 13);
}}

int func_154(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
SCRIPT::REQUEST_SCRIPT(uParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
SCRIPT::REQUEST_SCRIPT(sParam0);
wait(0);
}
return 1;
}
func_395("Attempting to launch invalid script file [TERMINATING]");
return 0;
}


void func_155(){
Global_20711=0;
func_156();
}


void func_156(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1==9) || Global_20499==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
Global_20500.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21845=6;
return;
}}

int func_157(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}

int func_158(var uParam0, bool bParam1){
struct<27> Var0;
if(Global_78689){
func_395("IS_RC_FINE_AND_IN_RANGE():
The game is running Multiplayer [TERMINATING]");
return 0;
}
func_120(*uParam0, &Var0);
if((func_200(*uParam0) || func_198(*uParam0)) || Global_78935==1){
return 1;
}
if(!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
func_395("IS_RC_FINE_AND_IN_RANGE():
Player out of range [TERMINATING]");
return 0;
}
if(func_190(*uParam0)){
if(*uParam0==19){
func_189(uParam0->f_28[0]);
}
func_395("IS_RC_FINE_AND_IN_RANGE():
Script denied by RC Controller [TERMINATING]");
return 0;
}
if(uParam0->f_25==1){
if(!func_169(uParam0, 1, 0)){
return 0;
}}elseif(uParam0->f_16==0){
if(!func_169(uParam0, 0, 0)){
return 0;
}}
if(((((*uParam0==16 || *uParam0==9) || *uParam0==18) || *uParam0==22) || *uParam0==32) || *uParam0==51){
if(!func_166(uParam0, 1, 1)){
if(*uParam0==16){
func_165(uParam0);
}else{
func_163(uParam0);
}
return 0;
}}elseif(*uParam0==24){
if(!func_166(uParam0, 0, 1)){
func_163(uParam0);
return 0;
}}elseif(*uParam0==6){
if(!func_166(uParam0, 0, 1)){
return 0;
}}elseif(uParam0->f_26==1){
if(!func_166(uParam0, 1, 0)){
func_163(uParam0);
return 0;
}}elseif(uParam0->f_16==2 || uParam0->f_16==1){
if(!func_166(uParam0, 0, 0)){
func_163(uParam0);
return 0;
}}
if(uParam0->f_16==2 || uParam0->f_16==1){
if(func_137(uParam0->f_35[0])){
if(!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0)){
return 0;
}}}
if(*uParam0==10){
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0 /*3*/], 8f)){
func_395("IS_RC_FINE_AND_IN_RANGE():
Explosion near mission trigger [TERMINATING]");
return 0;
}}
if(Var0.f_4 !=17){
if(!MISC::IS_BIT_SET(Var0.f_26, func_237())){
func_395("IS_RC_FINE_AND_IN_RANGE():
No longer a valid player character to launch mission");
return 0;
}}
if(func_162(&(uParam0->f_48)) && bParam1){
func_159(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
}
return 1;
}


void func_159(int iParam0, var uParam1, int iParam2){
var uVar0;
var uVar1;
if(func_137(iParam0)){
switch (uParam1->f_3){
case 1:
if(func_162(uParam1)){
if(STREAMING::HAS_ANIM_DICT_LOADED(*uParam1)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
if(iParam2 !=21){
if(func_74(uParam1->f_5, 0f, 0f, 0f, 0)){
TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
}else{
TASK::OPEN_SEQUENCE_TASK(&uVar0);
if(func_161(uParam1)){
TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
}else{
TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
}
TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar0);
TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}
}
else{
TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
}
uParam1->f_3=2;
}else{
uParam1->f_3=0;
}}else{
uParam1->f_3=0;
}
break;
case 2:
if(!func_161(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3)){
if(func_160(iParam2) && !PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 25f)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
uParam1->f_3=5;
}elseif((func_161(uParam1) && uParam1->f_4==0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 20f){
uParam1->f_3=3;
}}
break;
case 3:
TASK::OPEN_SEQUENCE_TASK(&uVar1);
if(func_74(uParam1->f_5, 0f, 0f, 0f, 0)){
TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
}else{
TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
}
TASK::CLOSE_SEQUENCE_TASK(uVar1);
TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar1);
TASK::CLEAR_SEQUENCE_TASK(&uVar1);
uParam1->f_4=1;
if(func_160(iParam2)){
uParam1->f_3=2;
}else{
uParam1->f_3=0;
}
break;
case 5:
if(!func_160(iParam2) || PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 10f)){
if(func_74(uParam1->f_5, 0f, 0f, 0f, 0)){
TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
}else{
TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
}
uParam1->f_3=2;
}
break;
}}}

int func_160(int iParam0){
if(iParam0==17 || iParam0==20){
return 1;
}
return 0;
}

int func_161(var uParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2)){
return 0;
}
return 1;
}

int func_162(var uParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1)){
return 0;
}
return 1;
}


void func_163(var uParam0){
int iVar0;
var uVar1;
if(*uParam0==52){
func_164(&(uParam0->f_41[1]));
func_164(&(uParam0->f_41[2]));
}
if(func_137(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=(uParam0->f_28 - 1)){
if(func_136(uParam0->f_28[iVar0])){
if(!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[iVar0], 0)){
ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[iVar0], 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 0);
}
PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
if(*uParam0==34){
if(func_137(uParam0->f_41[0])){
ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
}}
switch (*uParam0){
case 19:
func_189(uParam0->f_28[iVar0]);
break;
case 8:
STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@")){
wait(0);
}
TASK::OPEN_SEQUENCE_TASK(&uVar1);
TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar1);
TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
TASK::CLEAR_SEQUENCE_TASK(&uVar1);
break;
case 0:
case 1:
STREAMING::REQUEST_ANIM_DICT("rcmabigail");
while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail")){
wait(0);
}
TASK::OPEN_SEQUENCE_TASK(&uVar1);
TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar1);
TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
TASK::CLEAR_SEQUENCE_TASK(&uVar1);
break;
case 32:
STREAMING::REQUEST_ANIM_DICT("rcmminute1");
while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1")){
wait(0);
}
TASK::OPEN_SEQUENCE_TASK(&uVar1);
if(iVar0==0){
TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
}
else{
TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
}
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar1);
TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
TASK::CLEAR_SEQUENCE_TASK(&uVar1);
break;
case 24:
STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base")){
wait(0);
}
TASK::OPEN_SEQUENCE_TASK(&uVar1);
TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar1);
TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], uVar1);
TASK::CLEAR_SEQUENCE_TASK(&uVar1);
break;
default:
TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_28[iVar0]);
TASK::TASK_SMART_FLEE_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
break;
}}
iVar0++;
}}}


void func_164(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}
OBJECT::DELETE_OBJECT(uParam0);
}}


void func_165(var uParam0){
int iVar0;
if(func_137(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=(uParam0->f_28 - 1)){
if(func_136(uParam0->f_28[iVar0])){
PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[iVar0], 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar0], 0);
PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
TASK::TASK_COMBAT_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_28[iVar0]));
}
iVar0++;
}}}

int func_166(var uParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
if(bParam1){
iVar1=(uParam0->f_35 - 1);
}else{
iVar1=0;
}
if(func_136(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=iVar1){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[iVar0])){
if(ENTITY::IS_ENTITY_DEAD(uParam0->f_35[iVar0], 0)){
func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[iVar0], 0)){
func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
return 0;
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID(), 0)){
func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
return 0;
}
if(ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[iVar0]) < 850){
func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
return 0;
}
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f){
func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
return 0;
}
uVar2=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_168(uVar2)){
if(ENTITY::GET_ENTITY_MODEL(uVar2)==joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar2)==joaat("towtruck2")){
if(func_168(uParam0->f_35[iVar0])){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_35[iVar0])){
func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
return 0;
}}}
}}else{
iVar3=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_168(iVar3)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], iVar3) && ENTITY::GET_ENTITY_SPEED(iVar3) > 6f){
func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
return 0;
}
}
if(*uParam0==16){
if(func_167(PLAYER::PLAYER_PED_ID(), uParam0->f_35[iVar0])){
func_395("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
return 0;
}
}}}}
iVar0++;
}}
return 1;
}

int func_167(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(iParam0);
if(iVar0==iParam1){
return 1;
}}}
return 0;
}

int func_168(int iParam0){
if(func_137(uParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}

int func_169(var uParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
if(bParam1){
iVar1=(uParam0->f_28 - 1);
}else{
iVar1=0;
}
if(*uParam0==16){
iParam2=1;
}
if(*uParam0==30){
iParam2=1;
}
if(func_136(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=iVar1){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_28[iVar0])){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0])){
if(iParam2==0){
func_163(uParam0);
}else{
func_165(uParam0);
}
if(func_157()){
func_155();
}
func_395("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
return 0;
}}
if((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0])){
if(iParam2==0){
func_163(uParam0);
}
else{
func_165(uParam0);
}
func_395("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
return 0;
}
if(PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0])){
if(ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0)){
if(iParam2==0){
func_163(uParam0);
}else{
func_165(uParam0);
}
func_395("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
return 0;
}}
if(func_188(*uParam0)){
if(!func_212(*uParam0)){
if(func_183(uParam0->f_28[iVar0], 1, 0, 0, 0)){
if(iParam2==0){
func_163(uParam0);
}else{
func_165(uParam0);
}
func_395("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
return 0;
}
}
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 15f)){
if(iParam2==0){
func_163(uParam0);
}else{
func_165(uParam0);
}
func_395("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
return 0;
}
if(func_171(uParam0->f_28[iVar0], 1126825984)){
if(iParam2==0){
func_163(uParam0);
}else{
func_165(uParam0);
}
func_395("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
return 0;
}}
if(!func_170(*uParam0)){
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 5f)){
if(iParam2==0){
func_163(uParam0);
}else{
func_165(uParam0);
}
func_395("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
return 0;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(iParam2==0){
func_163(uParam0);
}else{
func_165(uParam0);
}
func_395("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
return 0;
}}}else{
func_395("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
if(*uParam0==34){
if(func_137(uParam0->f_41[0])){
ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
}}
return 0;
}}
iVar0++;
}}
return 1;
}

int func_170(int iParam0){
if(((iParam0==2 || iParam0==3) || iParam0==52) || iParam0==53){
return 1;
}
return 0;
}

int func_171(int iParam0, float fParam1){
float fVar0;
if(func_137(PLAYER::PLAYER_PED_ID()) && func_137(iParam0)){
if(func_182(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
fVar0=40f;
}else{
fVar0=3f;
}
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)){
if(func_172(iParam0, fParam1)){
return 1;
}}}}
return 0;
}


bool func_172(int iParam0, float fParam1){
return func_173(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}


bool func_173(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
int iVar2;
iVar2=func_181(iParam0, iParam1);
if(!func_137(iParam0) || !func_137(iParam1)){
if(iVar2 !=-1){
func_180(&(Local_35[iVar2 /*4*/]));
}
return 0;
}
if(!func_177(iParam0, iParam1, fParam2, iParam3)){
return 0;
}
if(iVar2==-1){
iVar2=func_176();
if(iVar2==-1){
return 0;
}
Local_35[iVar2 /*4*/].f_1=iParam0;
Local_35[iVar2 /*4*/].f_2=iParam1;
}
Var1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uVar0=func_174(&(Local_35[iVar2 /*4*/]), Var1, iParam1, &(Local_35[iVar2 /*4*/].f_3), iParam0, iParam5);
return (uVar0 || (MISC::GET_GAME_TIMER() - Local_35[iVar2 /*4*/].f_3) < iParam4);
}

int func_174(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
var uVar2;
int iVar3;
int iVar4;
iVar3=0;
if(!func_137(iParam2)){
*uParam0=0;
return 0;
}
if(*uParam0==0){
Var1={
func_175(iParam2, iParam5) 
};
*uParam0=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
return 0;
}
iVar4=SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
if(iVar4==0){
*uParam0=0;
return 0;
}elseif(iVar4==1){
return 0;
}
*uParam0=0;
if(ENTITY::IS_ENTITY_A_PED(iVar3)){
func_137(iVar3);
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3)==iParam2){
if(bLocal_36){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}
return 0;
}
if(ENTITY::IS_ENTITY_A_VEHICLE(iVar3)){
func_137(iVar3);
if(PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0)){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3)==PED::GET_VEHICLE_PED_IS_IN(iParam2, 0)){
if(bLocal_36){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}}
return 0;
}
return 0;
}


Vector3 func__175(int iParam0, int iParam1){
int iVar0;
if(iParam1==7){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
iParam1=iVar0;
}
if(iParam1==0){
return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}elseif(iParam1==1){
return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
}elseif(iParam1==2){
return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
}elseif(iParam1==3){
return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
}elseif(iParam1==4){
return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
}elseif(iParam1==5){
return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
}elseif(iParam1==6){
return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
}
return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}

int func_176(){
int iVar0;
iVar0=0;
while (iVar0 < Local_35.f_0){
if((Local_35[iVar0 /*4*/]==0 && Local_35[iVar0 /*4*/].f_1==0) && Local_35[iVar0 /*4*/].f_2==0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_177(int iParam0, int iParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_179(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
};
if(fParam2 < 0.1f || fParam2 > 360f){
return 1;
}
if(iParam3==0){
Var1={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
}else{
Var1={
func_179(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_178(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}


float func_178(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__179(struct<3> Param0){
float fVar0;
float fVar1;
fVar0=vmag(Param0);
if(fVar0 !=0f){
fVar1=(1f / fVar0);
Param0={
Param0 * Vector(fVar1, fVar1, fVar1) 
};
}else{
Param0.f_0=0f;
Param0.f_1=0f;
Param0.f_2=0f;
}
return Param0;
}


void func_180(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}

int func_181(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Local_35.f_0){
if(Local_35[iVar0 /*4*/].f_1==iParam0 && Local_35[iVar0 /*4*/].f_2==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_182(var uParam0){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
return 1;
}
return 0;
}

int func_183(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
float fVar0;
float fVar1;
int iVar2;
fVar0=8f;
fVar1=15f;
if(bParam1==0){
fVar0=1.86f;
fVar1=1.86f;
}
if(bParam2){
fVar0=2f;
}
if(func_137(PLAYER::PLAYER_PED_ID()) && func_137(uParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
if(iVar2==joaat("weapon_petrolcan")){
fVar0=3f;
fVar1=3f;
}
if(!bParam2){
if(func_187(uParam0, bParam1, fVar0, fVar1)){
return 1;
}
if(func_184(uParam0, fVar1, bParam3, bParam4)){
return 1;
}}else{
if(WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0, 1), fVar0, 1)){
return 1;
}}}else{
if(bParam1){
fVar0=1.86f;
fVar1=1.86f;
}
if(func_187(iParam0, bParam1, fVar0, fVar1)){
return 1;
}}
if(func_184(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}}
return 0;
}

int func_184(int iParam0, float fParam1, bool bParam2, bool bParam3){
struct<3> Var0;
struct<3> Var1;
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
Var1={
Var0 
};
Var0.f_0=(Var0.f_0 - fParam1);
Var0.f_1=(Var0.f_1 - fParam1);
Var0.f_2=(Var0.f_2 - fParam1);
Var1.f_0=(Var1.f_0 + fParam1);
Var1.f_1=(Var1.f_1 + fParam1);
Var1.f_2=(Var1.f_2 + fParam1);
if(bParam2){
if(((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1)){
if(bParam3){
if(func_185(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
return 1;
}}else{
if(bParam3){
if(func_185(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
if(MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, 1)){
return 1;
}}
return 0;
}

int func_185(var uParam0, float fParam1){
var uVar0;
struct<3> Var1;
if((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0)){
if(func_186(uParam0, Var1, 90f, 0)){
return 1;
}}
return 0;
}

int func_186(int iParam0, struct<3> Param1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_179(Param1 - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) 
};
if(fParam2 < 0.1f || fParam2 > 360f){
return 1;
}
if(iParam3==0){
Var1={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
}else{
Var1={
func_179(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_178(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}

int func_187(int iParam0, bool bParam1, float fParam2, float fParam3){
if(bParam1){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0)){
return 1;
}}}
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1)){
return 1;
}
return 0;
}

int func_188(int iParam0){
if(((((iParam0==2 || iParam0==3) || iParam0==34) || iParam0==11) || iParam0==52) || iParam0==53){
return 0;
}
return 1;
}


void func_189(int iParam0){
var uVar0;
if(func_137(PLAYER::PLAYER_PED_ID()) && func_137(uParam0)){
STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3")){
wait(0);
}
TASK::OPEN_SEQUENCE_TASK(&uVar0);
TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar0);
TASK::TASK_PERFORM_SEQUENCE(uParam0, uVar0);
TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}}

int func_190(int iParam0){
if(iParam0==-1){
iParam0=func_196();
}
if(iParam0==-1){
return 1;
}
if(func_200(iParam0)){
return 0;
}
if(!func_194(4)){
if(func_198(iParam0)){
}else{
return 1;
}}
if(func_193() && !func_192()){
return 1;
}
if(!func_191(iParam0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) !=0){
return 1;
}}}
if(!MISC::IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 2)){
return 1;
}
return 0;
}

int func_191(int iParam0){
if((((iParam0==5 || iParam0==6) || iParam0==41) || iParam0==60) || iParam0==61){
return 1;
}
return 0;
}

int func_192(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_193(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 20);
}
return 0;
}


bool func_194(int iParam0){
return func_195(iParam0, Global_43377);
}

int func_195(int iParam0, int iParam1){
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

int func_196(){
return func_197(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_197(var uParam0, int iParam1){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar2=MISC::GET_HASH_KEY(uParam0);
iVar3=0;
iVar3=0;
while (iVar3 < 63){
iVar0=iVar3;
func_120(iVar0, &uVar1);
if(MISC::GET_HASH_KEY(uVar1)==iVar2){
return iVar0;
}
iVar3++;
}
if(iParam1==0){}
return -1;
}

int func_198(int iParam0){
if((func_199() && Global_100833.f_11==6) && iParam0==func_197(&(Global_100833.f_3), 0)){
return 1;
}
return 0;
}

int func_199(){
if(((Global_100833==13 || Global_100833==10) || Global_100833==11) || Global_100833==12){
return 0;
}
return 1;
}

int func_200(int iParam0){
if(func_227(0)){
if(Global_78936.f_1==7){
if(Global_78936==iParam0){
return 1;
}}}
return 0;
}


void func_201(){
func_206(0);
func_205();
func_202();
}


void func_202(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_203(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 1056964608, 0, 1, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_leave_any_vehicle")) !=1){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}}}}

int func_203(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
if(bParam5){
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(!bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
PAD::DISABLE_CONTROL_ACTION(0, 352, 1);
PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
func_204(iParam0);
if((MISC::GET_GAME_TIMER() - Global_29) > 500){
VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
}
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <=fParam3){
return 1;
}}
return 0;
}


void func_204(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


void func_205(){
PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
}


void func_206(int iParam0){
if(func_211()){
return;
}
if(!Global_20500.f_1==1){
if(func_210(0)){
func_207(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_207(int iParam0){
if(func_211()){
return;
}
if(Global_20704){
if(func_209()){
func_208(1, 1);
}else{
func_208(0, 0);
}}
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
Global_21845=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 30);
}else{
MISC::CLEAR_BIT(&Global_8370, 30);
}
if(!func_152()){
Global_20500.f_1=3;
}}


void func_208(bool bParam0, bool bParam1){
if(bParam0){
if(func_210(0)){
Global_20704=1;
if(bParam1){
MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
}
Global_20428={
Global_20446[Global_20445 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
}}elseif(Global_20704==1){
Global_20704=0;
Global_20428={
Global_20453[Global_20445 /*3*/] 
};
if(bParam1){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
}}}


bool func_209(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_210(int iParam0){
if(iParam0==1){
if(Global_20500.f_1 > 3){
if(MISC::IS_BIT_SET(Global_8370, 14)){
return 1;
}else{
return 0;
}}else{
return 0;
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
if(Global_20500.f_1 > 3){
return 1;
}
return 0;
}


bool func_211(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}

int func_212(int iParam0){
if((((iParam0==52 || iParam0==53) || iParam0==54) || iParam0==55) || iParam0==56){
return 1;
}
return 0;
}

int func_213(int iParam0){
int iVar0;
if(iParam0==-1){
iParam0=func_196();
}
if(iParam0==-1){
return 0;
}
iVar0=func_215(&(Global_112897[iParam0 /*10*/].f_9), 1, 4, 0, 0);
if(!iVar0==1){
return 0;
}
func_214(iParam0);
return 1;
}


void func_214(int iParam0){
Global_112897[iParam0 /*10*/].f_4=1;
Global_112897[iParam0 /*10*/].f_5=0;
Global_112897[iParam0 /*10*/].f_6=0;
Global_112897[iParam0 /*10*/]=0;
}

int func_215(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_217(0)){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23251.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43377=iParam2;
Global_43339=*uParam0;
Global_43340=iParam4;
Global_43338=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43338 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
return 2;
}
iVar0++;
}}elseif(Global_43339==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!func_194(iParam2)){
return 0;
}
if(Global_43338==8){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
Global_43344[Global_43338 /*4*/]=Global_43341;
Global_43344[Global_43338 /*4*/].f_1=iParam1;
Global_43344[Global_43338 /*4*/].f_2=iParam2;
Global_43344[Global_43338 /*4*/].f_3=0;
Global_43338++;
if(iParam4 !=0){
func_216(uParam0, iParam4);
}}
return 2;
}


void func_216(var uParam0, int iParam1){
int iVar0;
if(Global_43338==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
Global_43344[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}

int func_217(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_194(iParam0)){
return 0;
}
return 1;
}

int func_218(){
if(Global_100833==10 || Global_100833==9){
return 1;
}
return 0;
}

int func_219(int iParam0){
char* sVar0;
if(Global_78689){
func_395("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
return 0;
}
if(!Global_113810.f_9088 && !func_227(1)){
func_395("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
return 0;
}
if(!func_220(iParam0)){
Global_112897[iParam0 /*10*/].f_1=1;
func_395("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
return 0;
}
if(Global_100833.f_11==6){
if(Global_100833 < 9){
func_120(iParam0, &sVar0);
if(MISC::ARE_STRINGS_EQUAL(&(Global_100833.f_3), sVar0)){
func_395("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
return 0;
}}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller"))==0){
Global_112897[iParam0 /*10*/].f_1=1;
func_395("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
return 0;
}
return 1;
}

int func_220(int iParam0){
var uVar0;
func_120(iParam0, &uVar0);
if(!func_194(4)){
if(func_198(iParam0)){
}else{
return 0;
}}
if(func_193() && !func_192()){
return 0;
}
if(func_226(iParam0)){
return 0;
}
if(iParam0==-1){
iParam0=func_196();
}
if(iParam0==-1){
return 0;
}
if(!func_200(iParam0)){
if(!func_225(iParam0)){
return 0;
}
if(!func_224(iParam0)){
return 0;
}
if(func_223(iParam0)){
return 0;
}}
if(iParam0==58){
if(func_221(5)){
Global_112897[iParam0 /*10*/].f_3=0;
}}
if(Global_112897[iParam0 /*10*/].f_3==1){
return 0;
}
return 1;
}

int func_221(int iParam0){
int iVar0;
char* sVar1;
int iVar2;
if(Global_100885.f_391==0){
return 0;
}
if(iParam0==10){
iVar0=0;
while (iVar0 < 10){
if(func_221(iVar0)){
return 1;
}
iVar0++;
}}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_222(iParam0, &sVar1);
iVar2=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95851[iParam0 /*10*/].f_3, &sVar1);
if(iVar2 !=0 && Global_100885.f_391==iVar2){
return 1;
}}
return 0;
}


bool func_222(int iParam0, char* sParam1){
StringCopy(sParam1, "", 32);
switch (iParam0){
case 0:
StringCopy(sParam1, "v_michael", 32);
break;
case 5:
StringCopy(sParam1, "v_franklins", 32);
break;
case 6:
StringCopy(sParam1, "v_franklinshouse", 32);
break;
case 2:
case 1:
if(STREAMING::IS_IPL_ACTIVE("TrevorsTrailer")){
StringCopy(sParam1, "v_trailer", 32);
}elseif(STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy")){
StringCopy(sParam1, "V_TrailerTIDY", 32);
}elseif(STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash")){
StringCopy(sParam1, "V_TrailerTRASH", 32);
}
break;
case 3:
StringCopy(sParam1, "v_trevors", 32);
break;
case 4:
StringCopy(sParam1, "v_strip3", 32);
break;
case 8:
case 7:
case 9:
StringCopy(sParam1, "v_psycheoffice", 32);
break;
}
return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_223(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 3);
}

int func_224(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 2);
}

int func_225(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 0);
}

int func_226(int iParam0){
if(func_191(iParam0)){
return 0;
}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) !=0){
return 1;
}}
return 0;
}

int func_227(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


char* func_228(int iParam0){
switch (iParam0){
case 0:
return "Rampage1";
case 1:
return "Rampage3";
case 2:
return "Rampage4";
case 3:
return "Rampage5";
case 4:
return "Rampage2";
default:
}
return "";
}

int func_229(int iParam0){
switch (iParam0){
case 0:
return 52;
case 1:
return 54;
case 2:
return 55;
case 3:
return 56;
case 4:
return 53;
default:
}
return -1;
}


bool func_230(){
bool bVar0;
bVar0=false;
if(!func_235(PLAYER::PLAYER_PED_ID())){
return bVar0;
}
if(Global_112897[56 /*10*/].f_3){
return bVar0;
}
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(iLocal_242){
HUD::CLEAR_HELP(1);
func_234("RAMP_HELP_CRIM", -1);
iLocal_242=0;
}
bVar0=true;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(iLocal_241){
HUD::CLEAR_HELP(1);
func_234("RAMP_HELP_FOOT", -1);
iLocal_241=0;
}
bVar0=true;
}elseif((func_233(0) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_232()){
if(func_2("RAMP_HELP_TRIG")){
if(func_233(0)){
}elseif(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
}elseif(func_232()){
}
HUD::CLEAR_HELP(1);
iLocal_243=0;
}
bVar0=true;
}elseif(func_379(108)){
if(!iLocal_243){
if(!func_2("RAMP_HELP_TRIG")){
HUD::CLEAR_HELP(1);
func_231("RAMP_HELP_TRIG");
}
iLocal_243=1;
}
bVar0=!PAD::IS_CONTROL_PRESSED(2, 51);
}
return bVar0;
}


void func_231(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_232(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}


bool func_233(bool bParam0){
if(bParam0){
return (Global_23251.f_4 && Global_23251.f_104==4);
}
return Global_23251.f_4;
}


void func_234(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


bool func_235(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

int func_236(float fParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
if(!func_235(PLAYER::PLAYER_PED_ID())){
return -1;
}
Var2={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
iVar0=0;
while (iVar0 < 5){
Var1={
Global_32663[(iLocal_238 + iVar0) /*23*/][0 /*3*/] 
};
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var1, 1) <=fParam0 && MISC::ABSF((Var2.f_2 - Var1.f_2)) < 1.5f){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_237(){
func_61();
return Global_113810.f_2366.f_539.f_4321;
}


void func_238(var* uParam0, struct<3> Param1){
int iVar0;
int iVar1[5];
int iVar2;
iVar0=0;
iVar1[0]=52;
iVar1[1]=53;
iVar1[2]=54;
iVar1[3]=55;
iVar1[4]=56;
if(!func_376(&iVar1, uParam0, Param1, 5f)){
func_395(" Didn't know which RC To Launch");
func_380(uParam0, 1);
}
if(!func_219(*uParam0)){
func_395(" RC Can't Launch");
func_380(uParam0, 1);
}
if(func_375(*uParam0)){
while (true){
wait(0);
if(func_374(*uParam0)){
func_380(uParam0, 1);
}}}
func_284(uParam0);
MISC::CLEAR_AREA(Param1, uParam0->f_15, 1, 0, 0, 0);
while (true){
wait(0);
if(*uParam0==52 || *uParam0==53){
if(func_137(uParam0->f_28[0])){
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 5.1f)){
if(*uParam0==52){
iVar2=0;
while (iVar2 < uParam0->f_41){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar2])){
if((func_137(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar2], uParam0->f_28[0])) || (func_137(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar2], uParam0->f_28[1]))){
OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar2]));
}}
iVar2++;
}}
PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, 1, 0);
if(func_137(uParam0->f_28[1])){
PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, 1, 0);
}
func_395("Sitting Rampage attacked with explosives, cleaning up");
func_380(uParam0, 1);
}}
if(func_137(uParam0->f_28[1])){
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], 1), 5.1f)){
if(*uParam0==52){
iVar2=0;
while (iVar2 < uParam0->f_41){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar2])){
if((func_137(uParam0->f_28[0]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar2], uParam0->f_28[0])) || (func_137(uParam0->f_28[1]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_41[iVar2], uParam0->f_28[1]))){
OBJECT::DELETE_OBJECT(&(uParam0->f_41[iVar2]));
}}
iVar2++;
}}
PED::SET_PED_TO_RAGDOLL(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[1], 1000, 1, 0);
if(func_137(uParam0->f_28[0])){
PED::SET_PED_TO_RAGDOLL(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
PED::APPLY_DAMAGE_TO_PED(uParam0->f_28[0], 1000, 1, 0);
}
func_395("Sitting Rampage attacked with explosives, cleaning up");
func_380(uParam0, 1);
}}}
if(func_283(uParam0)){
func_282(uParam0);
func_395(" RC combat happening in area, tell peds to flee");
func_163(uParam0);
func_380(uParam0, 1);
}
if(!func_158(uParam0, 1)){
func_395(" RC Is Not Fine And In Range");
func_380(uParam0, 1);
}
if(func_281(52)){
if(TASK::IS_SCENARIO_GROUP_ENABLED("Rampage1")){
func_395(" Turning Off Scenario Group For Rampage 1");
TASK::SET_SCENARIO_GROUP_ENABLED("Rampage1", 0);
}}
func_280(*uParam0);
func_272(&iLocal_239, &(uParam0->f_9), Param1);
if(iVar0==0 && iLocal_239 !=-1){
func_271(uParam0, &uLocal_244);
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
func_395(" Cutscene Loaded");
iVar0=1;
}}
Local_248={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if((!(*uParam0==52 && Local_248.f_2 > 34f) && !(*uParam0==53 && Local_248.f_2 > 71f)) && !(*uParam0==54 && Local_248.f_2 > 30f)){
if(func_259(uParam0, 0)){
if(*uParam0==53){
if(func_256(uParam0)){
func_395(" Trigger Conditions Met");
func_201();
if(!func_5(uParam0)){
func_395(" RC Can't Launch");
func_380(uParam0, 1);
}
func_395(" RC Launcher Waiting To Terminate");
if(func_3(uParam0)){
func_395(" Ready To Terminate");
func_380(uParam0, 0);
}}}elseif(func_255(uParam0)){
func_395(" Trigger Conditions Met");
func_201();
if(!func_5(uParam0)){
func_395(" RC Can't Launch");
func_380(uParam0, 1);
}
func_395(" RC Launcher Waiting To Terminate");
if(func_3(uParam0)){
func_395(" Ready To Terminate");
func_380(uParam0, 0);
}}}else{
if(*uParam0==53){
func_239(uParam0);
}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
iLocal_68=-1;
CAM::STOP_GAMEPLAY_HINT(0);
TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
}}}}}


void func_239(var* uParam0){
char* sVar0;
sVar0="misstrvram_2";
switch (iLocal_69){
case 0:
STREAMING::REQUEST_ANIM_DICT(sVar0);
if(STREAMING::HAS_ANIM_DICT_LOADED(sVar0)){
iLocal_69++;
}
break;
case 1:
if(func_137(uParam0->f_28[0])){
if(func_254(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), 1) < 30f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_28[0])){
func_253(&uLocal_71, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
iLocal_69++;
}}
break;
case 2:
uLocal_70[0]=PED::CREATE_SYNCHRONIZED_SCENE(Local_65, Local_66, 2);
if(func_137(uParam0->f_28[0])){
func_240(&uLocal_71, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_70[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
}
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_70[0], 0);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_70[0], 1);
iLocal_69++;
break;
case 3:
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_70[0])){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_70[0]) >=0.95f){
iLocal_69++;
}}
break;
case 4:
uLocal_70[1]=PED::CREATE_SYNCHRONIZED_SCENE(Local_65, Local_66, 2);
if(func_137(uParam0->f_28[0])){
func_240(&uLocal_71, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_70[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
}
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_70[1], 0);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_70[1], 1);
iLocal_69++;
break;
case 5:
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_70[1])){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_70[1]) >=0.95f){
iLocal_69++;
}}
break;
case 6:
uLocal_70[2]=PED::CREATE_SYNCHRONIZED_SCENE(Local_65, Local_66, 2);
if(func_137(uParam0->f_28[0])){
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_70[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
}
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_70[2], 1);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_70[2], 0);
iLocal_69++;
break;
case 7:
break;
}}


bool func_240(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_252(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21852=0;
Global_21859=0;
Global_21854=0;
Global_22836=1;
Global_22838=0;
Global_22842=0;
StringCopy(&Global_22849, sParam3, 24);
Global_2883585=0;
return func_241(sParam2, iParam4, 0);
}

int func_241(char* sParam0, int iParam1, bool bParam2){
Global_21846=0;
if(Global_21845==0 || Global_21847==2){
if(Global_21845 !=0){
if(iParam1 > Global_21847){
if(Global_21852==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20500.f_1=3;
Global_21845=0;
Global_21846=1;
Global_21898=0;
Global_21841=0;
Global_21842=0;
Global_21856=0;
Global_21855=0;
Global_20499=0;
}else{
func_156();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_251(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_250();
Global_21134={
Global_21299 
};
Global_21851=Global_21852;
Global_21858=Global_21859;
Global_2883586=Global_2883585;
Global_21860={
Global_21876 
};
Global_21853=Global_21854;
Global_22835=Global_22836;
Global_22843={
Global_22849 
};
Global_22837=Global_22838;
Global_22839=Global_22840;
Global_22841=Global_22842;
Global_21464.f_370=Global_22834;
Global_21464.f_368=Global_22832;
Global_21464.f_369=Global_22833;
Global_21841=Global_21842;
if(Global_21851){
MISC::CLEAR_BIT(&Global_8370, 20);
MISC::CLEAR_BIT(&Global_8371, 17);
MISC::CLEAR_BIT(&Global_8372, 0);
if(bParam2){
func_249();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20500.f_1 > 3){
return 0;
}}
if(Global_20466==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_248()){
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
if(!Global_78689){
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
if(func_152()){
return 0;
}else{
switch (Global_20500.f_1){
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
if(MISC::IS_BIT_SET(Global_8370, 9)){
return 0;
}}
func_247();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_246();
func_242();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_156();
}
return 0;
}


void func_242(){
if(!func_243()){
return;
}
if(Global_21851){
MemCopy(&(Global_1978312.f_1),{
Global_21464
}
, 4);
Global_1978312=Global_7685;
Global_1978312.f_6=Global_21855;
}}

int func_243(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_97()){
return 0;
}
if(func_244(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_244(int iParam0){
return func_245(iParam0, 20);
}


var func__245(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


void func_246(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_247(){
Global_21898=Global_21897;
Global_21892=Global_21893;
Global_21939={
Global_21927 
};
Global_21945={
Global_21933 
};
Global_21900=Global_21899;
Global_21969={
Global_21951 
};
Global_21975={
Global_21957 
};
Global_21981={
Global_21963 
};
Global_21987={
Global_21993 
};
Global_7685=Global_7686;
Global_7687=Global_7688;
Global_21856=Global_21857;
Global_21858=Global_21859;
Global_21860={
Global_21876 
};
Global_21849=Global_21850;
Global_22861=0;
Global_21894=0;
Global_21895=0;
MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_248(){
int iVar0;
int iVar1;
if(Global_78689){
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


void func_249(){
if(func_62(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[0 /*29*/]){
Global_20500=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[1 /*29*/]){
Global_20500=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[2 /*29*/]){
Global_20500=2;
}else{
Global_20500=0;
}}}else{
Global_20500=func_237();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


void func_250(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21134[iVar0 /*10*/]=0;
StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
Global_21134[iVar0 /*10*/].f_7=0;
Global_21134[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21134.f_161=-99;
Global_21134.f_162={
0f, 0f, 0f 
};
}


bool func_251(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_252(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21299={
*uParam0 
};
Global_7686=iParam1;
StringCopy(&Global_21915, sParam2, 24);
Global_22834=iParam5;
if(iParam3==0){
Global_22832=1;
Global_22830=0;
}else{
Global_22832=0;
Global_22830=1;
}
if(iParam4==0){
Global_22833=1;
Global_22831=0;
}else{
Global_22833=0;
Global_22831=1;
}}


void func_253(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78689){
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


float func_254(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}else{
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

int func_255(var* uParam0){
func_201();
if(iLocal_68 < 0){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[1], 1)) < 25f){
return 1;
}
switch (*uParam0){
case 52:
CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(1);
CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-5f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.1f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
CAM::SET_GAMEPLAY_HINT_FOV(40f);
break;
case 54:
CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(1);
CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-10f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.9f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
CAM::SET_GAMEPLAY_HINT_FOV(40f);
break;
case 55:
CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(1);
CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-8f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.9f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
CAM::SET_GAMEPLAY_HINT_FOV(40f);
break;
case 56:
CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[1], -1, 0, 2);
CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(1);
CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-5f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.15f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
CAM::SET_GAMEPLAY_HINT_FOV(40f);
break;
}
iLocal_68=MISC::GET_GAME_TIMER() + 2500;
}elseif(MISC::GET_GAME_TIMER() > iLocal_68){
iLocal_68=-1;
return 1;
}
return 0;
}

int func_256(var uParam0){
func_201();
switch (iLocal_236){
case 0:
if(func_137(uParam0->f_28[0])){
func_257();
iLocal_236++;
}
break;
case 1:
if(func_137(uParam0->f_28[0])){
if(!func_157()){
if(func_240(&uLocal_71, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0)){
uLocal_237=PED::CREATE_SYNCHRONIZED_SCENE(Local_65, Local_66, 2);
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_237, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[0], -1, 0, 2);
CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(1);
CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.1f);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
CAM::SET_GAMEPLAY_HINT_FOV(40f);
iLocal_236++;
}}}
break;
case 2:
if(func_137(uParam0->f_28[0])){
if(!func_157()){
iLocal_236++;
}}
break;
case 3:
return 1;
break;
}
return 0;
}


void func_257(){
Global_20711=0;
func_258();
}


void func_258(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}

int func_259(var uParam0, int iParam1){
switch (uParam0->f_16){
case 0:
if(*uParam0==12){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0)){
if(func_137(uParam0->f_28[0])){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < 3f){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
func_395("ARE_RC_TRIGGER_CONDITIONS_MET:
RC_TRIG_CHAR - Used special case Eps 4 trigger.");
return 1;
}}
}}else{
return 0;
}}elseif(func_137(uParam0->f_28[0])){
if(func_261(uParam0)){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
return 1;
}
}}}else{
return 0;
}}elseif(*uParam0==21){
if((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0)){
if(func_137(uParam0->f_28[0])){
if(func_261(uParam0)){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
return 1;
}}
}}else{
return 0;
}}else{
return 0;
}}elseif(*uParam0==22){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0)){
if(func_137(uParam0->f_28[0])){
if(func_261(uParam0)){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
return 1;
}}
}}else{
return 0;
}}else{
return 0;
}}elseif(func_137(uParam0->f_28[0])){
if(func_261(uParam0)){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
return 1;
}}}}else{
return 0;
}
break;
case 2:
if(func_137(uParam0->f_35[0])){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_35[0], 0)){
if(func_264(3)){
func_262(uParam0->f_27, *uParam0);
return 1;
}}elseif(iParam1==1){
func_260();
}}else{
return 0;
}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0])){
if(!ENTITY::IS_ENTITY_DEAD(uParam0->f_35[0], 0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_35[0], 1), 1) < uParam0->f_15){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
return 1;
}
}}}}else{
return 0;
}
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
return 1;
}}}else{
return 0;
}
break;
case 4:
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0)){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
return 1;
}}}else{
return 0;
}
break;
case 5:
if(*uParam0==6){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_137(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck2"))){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_35[0])){
if(func_264(3)){
return 1;
}}
}
elseif((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob2"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob3"))){
if(VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_35[0])){
if(func_264(3)){
return 1;
}}
}}}}elseif(*uParam0==10){
if(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >=2f){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0)){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
func_395("RC5_IN_ACTIVATION_RANGE:
RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
return 1;
}
}}}}elseif(*uParam0==46){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0)){
return 0;
}}elseif(*uParam0==31){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0)){
if(func_264(2)){
if(func_263(1)){
func_262(1, *uParam0);
func_395("RC_IN_ACTIVATION_RANGE:
RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
return 1;
}}}}elseif(*uParam0==39){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0)){
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
func_395("RC_IN_ACTIVATION_RANGE:
RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
return 1;
}}
}}}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0)){
if(*uParam0==45){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0)){
return 0;
}}
if(func_264(2)){
if(func_263(uParam0->f_27)){
func_262(uParam0->f_27, *uParam0);
return 1;
}}}else{
return 0;
}
break;
case 6:
break;
}
return 0;
}


void func_260(){
func_30(&(Global_104373.f_2890), &Global_104373, 0, 1, 1, 0);
}

int func_261(var uParam0){
float fVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && uParam0->f_27){
if(*uParam0==27 || *uParam0==30){
fVar0=1f;
}else{
fVar0=5f;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0)){
return 1;
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < uParam0->f_15){
return 1;
}
return 0;
}


void func_262(int iParam0, int iParam1){
if(iParam0==1){
if(!func_140(iParam1)){
return;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_395("RC_STOP_PLAYER_VEHICLE_CHECK:
Stopping player's vehicle.");
if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
func_395("RC_STOP_PLAYER_VEHICLE_CHECK:
Turning off engine for plane or helicopter.");
VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 1, 0);
}
func_201();
}}}

int func_263(bool bParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
if(PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
return 1;
}elseif(bParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_168(iVar0)){
if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if((!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && !ENTITY::IS_ENTITY_IN_AIR(iVar0)) && ENTITY::GET_ENTITY_SPEED(iVar0) < 1f){
return 1;
}}elseif(!ENTITY::IS_ENTITY_IN_AIR(iVar0)){
return 1;
}}}}}
return 0;
}

int func_264(int iParam0){
bool bVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
bVar0=func_237();
if(!func_39(bVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_112857) || Global_32286) || func_270()) || func_251(8, -1)) || func_103()) || func_269()) || func_268()) || func_267()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_232()) || Global_32286) || func_270()) || func_251(8, -1)) || func_268()) || func_103()) || func_269()) || func_267()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_112857) || Global_32286) || func_270()) || func_251(8, -1)) || func_268()) || func_103()) || func_269()) || func_267()) || Global_113810.f_7691.f_919[bVar0]==5) || Global_43924 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_232()) || Global_112857) || Global_32286) || func_270()) || func_251(8, -1)) || func_103()) || func_269()) || func_267()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 4:
if(((((func_232() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_251(8, -1)) || func_267()) || func_266()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 5:
if((((func_251(8, -1) || func_103()) || func_269()) || func_266()) || func_265()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_232()) || Global_32286) || func_270()) || func_251(8, -1)) || func_269()) || func_268()) || func_267()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_232()) || func_269()) || Global_112857) || Global_32286) || func_270()) || Global_44569) || func_251(8, -1)) || func_268()) || func_266()) || func_267()) || Global_113810.f_7691.f_919[bVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_232()) || Global_112857) || Global_32286) || func_270()) || func_251(8, -1)) || func_268()) || func_266()) || func_103()) || func_269()) || func_267()){
return 0;
}
break;
}}else{
return 0;
}}else{
return 0;
}}else{
return 0;
}
return 1;
}


var func__265(){
return Global_100872.f_1;
}

int func_266(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_267(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_268(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


bool func_269(){
return Global_100885.f_394 > 0;
}


var func__270(){
return Global_1575063;
}


void func_271(var uParam0, var uParam1){
if(CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY()){
if(func_137(PLAYER::PLAYER_PED_ID())){
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
}
switch (*uParam0){
case 52:
if(func_137(uParam0->f_28[0])){
(*uParam1)[0]="TriggerHappy_WhiteTrash";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
}
if(func_137(uParam0->f_28[1])){
(*uParam1)[1]="Nervous_WhiteTrash";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
}
break;
case 53:
if(func_137(uParam0->f_28[0])){
(*uParam1)[0]="Rampage_Hipster";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
}
break;
case 54:
if(func_137(uParam0->f_28[0])){
(*uParam1)[0]="Armed_Mexican_Goon";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 8, 1, 0, 0);
}
if(func_137(uParam0->f_28[1])){
(*uParam1)[1]="Mexican_Goon";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
}
break;
case 55:
if(func_137(uParam0->f_28[0])){
(*uParam1)[0]="Thug";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 10, 0, 1, 0);
}
if(func_137(uParam0->f_28[1])){
(*uParam1)[1]="Armed_Thug";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[1], 10, 1, 0, 0);
}
break;
case 56:
if(func_137(uParam0->f_28[0])){
(*uParam1)[0]="Army_Guy_Right";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
}
if(func_137(uParam0->f_28[1])){
(*uParam1)[1]="Army_Guy_Left";
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
}
break;
}}}


void func_272(int iParam0, char* sParam1, struct<3> Param2){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
if(Global_43377==17){
if(*iParam0 !=-1){
func_278(iParam0);
}}elseif(func_277()){
if(*iParam0 !=-1){
func_278(iParam0);
}}elseif(*iParam0==-1){
if(func_276(PLAYER::PLAYER_PED_ID(), Param2, 1) <=100f){
func_275(iParam0, 1);
}}else{
switch (func_274(*iParam0)){
case 1:
if(MISC::ARE_STRINGS_EQUAL(sParam1, "JOSH_1_INT_CONCAT")){
CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam1, 14, 8);
}
else{
CUTSCENE::REQUEST_CUTSCENE(sParam1, 8);
}
STREAMING::SET_SRL_FORCE_PRESTREAM(2);
func_273(*iParam0, 1);
break;
case 2:
CUTSCENE::STOP_CUTSCENE(0);
CUTSCENE::REMOVE_CUTSCENE();
STREAMING::SET_SRL_FORCE_PRESTREAM(0);
func_273(*iParam0, 0);
break;
}
if(func_276(PLAYER::PLAYER_PED_ID(), Param2, 1) > 120f){
func_278(iParam0);
}}}}}


void func_273(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(Global_78685==iParam0){
Global_78686=iParam0;
}}elseif(Global_78686==iParam0){
Global_78686=-1;
}}

int func_274(int iParam0){
if(Global_78685==iParam0){
if(Global_78686==-1){
if(Global_78684 < MISC::GET_FRAME_COUNT()){
return 1;
}}}elseif(Global_78686==iParam0){
return 2;
}
return 0;
}


void func_275(int iParam0, int iParam1){
bool bVar0;
int iVar1;
if(Global_78682 < 5){
Global_78671[Global_78682 /*2*/]=0;
Global_78671[Global_78682 /*2*/].f_1=iParam1;
bVar0=false;
while (!bVar0){
bVar0=true;
iVar1=0;
while (iVar1 < Global_78682){
if(Global_78671[iVar1 /*2*/]==Global_78671[Global_78682 /*2*/]){
Global_78671[Global_78682 /*2*/]++;
bVar0=false;
}
iVar1++;
}}
*iParam0=Global_78671[Global_78682 /*2*/];
Global_78682++;
Global_78683=1;
}else{
*iParam0=-1;
}}


float func_276(int iParam0, struct<3> Param1, int iParam2){
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


bool func_277(){
return Global_98122;
}


void func_278(int iParam0){
CUTSCENE::STOP_CUTSCENE(0);
CUTSCENE::REMOVE_CUTSCENE();
func_279(iParam0);
}


void func_279(int iParam0){
bool bVar0;
int iVar1;
int iVar2;
if(*iParam0==-1){
return;
}
if(Global_78686==*iParam0){
func_273(*iParam0, 0);
}
if(Global_78685==*iParam0){
Global_78685=-1;
}
bVar0=false;
iVar1=0;
while (!bVar0 && iVar1 < Global_78682){
if(Global_78671[iVar1 /*2*/]==*iParam0){
bVar0=true;
}else{
iVar1++;
}}
if(!bVar0){
return;
}
iVar2=iVar1;
while (iVar2 <=(Global_78682 - 2)){
Global_78671[iVar2 /*2*/]=Global_78671[iVar2 + 1 /*2*/];
Global_78671[iVar2 /*2*/].f_1=Global_78671[iVar2 + 1 /*2*/].f_1;
iVar2++;
}
Global_78671[(Global_78682 - 1) /*2*/]=-1;
Global_78671[(Global_78682 - 1) /*2*/].f_1=3;
Global_78682=(Global_78682 - 1);
Global_78683=1;
Global_78684=MISC::GET_FRAME_COUNT();
*iParam0=-1;
}


void func_280(int iParam0){
if(iParam0==-1){
iParam0=func_196();
}
if(iParam0==-1){
return;
}
Global_112897[iParam0 /*10*/].f_1=1;
}


bool func_281(int iParam0){
return Global_112897[iParam0 /*10*/].f_1;
}


void func_282(var uParam0){
if(*uParam0==52){
func_395(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3])){
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[3]));
uParam0->f_41[3]=0;
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4])){
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], 1);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_41[4]));
uParam0->f_41[4]=0;
}}}

int func_283(var uParam0){
if((*uParam0==54 || *uParam0==55) || *uParam0==56){
if(PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0){
return 1;
}}
return 0;
}


void func_284(var uParam0){
switch (*uParam0){
case 52:
func_373(uParam0);
iLocal_249=func_372();
break;
case 53:
func_366(uParam0);
iLocal_249=func_364();
break;
case 54:
func_363(uParam0);
break;
case 55:
func_362(uParam0);
iLocal_249=func_361();
break;
case 56:
func_285(uParam0);
break;
default:
break;
}
if(iLocal_249 !=0){}
uParam0->f_16=0;
if(*uParam0==53){
uParam0->f_15=15f;
}else{
uParam0->f_15=12f;
}
uParam0->f_25=1;
}


void func_285(var uParam0){
char* sVar0;
int iVar1;
int iVar2;
sVar0="misstvrram_5";
iVar1=joaat("s_m_y_marine_03");
iVar2=joaat("crusader");
STREAMING::REQUEST_MODEL(iVar1);
STREAMING::REQUEST_MODEL(iVar2);
STREAMING::REQUEST_ANIM_DICT(sVar0);
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_grenadelauncher"), 31, 0);
while ((!STREAMING::HAS_MODEL_LOADED(iVar1) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar0)){
wait(0);
}
while (!func_359(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0)){
wait(0);
}
func_358(&(uParam0->f_28[0]));
PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 0, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 1, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 2, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 3, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 4, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 5, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 6, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 7, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[0], 8, 1);
while (!func_359(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0)){
wait(0);
}
func_358(&(uParam0->f_28[1]));
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 0, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 1, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 2, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 3, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 4, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 5, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 6, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 7, 1);
PED::CLEAR_PED_PROP(uParam0->f_28[1], 8, 1);
PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
while (!func_357(&(uParam0->f_35[0]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f)){
wait(0);
}
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 1084227584);
func_356(&(uParam0->f_35[0]));
VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, 0);
VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_35[0], 1, 1);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_35[0], 1);
if(!func_286(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_355(-0.5f))){}else{
ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 0, 0);
ENTITY::SET_ENTITY_COORDS(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uParam0->f_41[0], func_355(-0.5f));
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
}
StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
uParam0->f_27=0;
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}

int func_286(var uParam0, int iParam1, struct<3> Param2, float fParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
OBJECT::DELETE_OBJECT(uParam0);
*uParam0=0;
}
iVar0=WEAPON::GET_WEAPONTYPE_MODEL(iParam1);
STREAMING::REQUEST_MODEL(iVar0);
iVar1=MISC::GET_GAME_TIMER() + 10000;
while (MISC::GET_GAME_TIMER() < iVar1){
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
*uParam0=WEAPON::CREATE_WEAPON_OBJECT(iParam1, -1, Param2, 1, 1065353216, 0, 0, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
if(func_354(iParam1, joaat("gun_root")) && !func_352(iParam1)){
iVar3=func_287(iParam1, joaat("gun_root"), iVar2);
while (iVar3 !=0){
if(WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, iVar3)){
WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, iVar3);
}
iVar2++;
iVar3=func_287(iParam1, joaat("gun_root"), iVar2);
}}
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
return 1;
}}
wait(0);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
return 0;
}

int func_287(int iParam0, int iParam1, int iParam2){
struct<5> Var0;
int iVar1;
int iVar2;
iVar2=0;
while (func_288(&Var0, iParam0, iVar1, 0)){
if(Var0.f_4==iParam1){
if(iParam2==iVar2){
return Var0.f_0;
}
iVar2++;
}
iVar1++;
}
return 0;
}


bool func_288(var uParam0, int iParam1, int iParam2, bool bParam3){
int iVar0[37];
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
var uVar17;
struct<4> Var18;
func_351(uParam0, 0, 989182658, 0, 0);
switch (iParam1){
case joaat("weapon_pistol"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pistol"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_combatpistol"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}
break;
case joaat("weapon_appistol"):
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_appistol_varmod_security"), joaat("gun_root"), 2, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_microsmg"):
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_microsmg_varmod_security"), joaat("gun_root"), 2, 0);
break;
case 7:
func_351(uParam0, joaat("component_microsmg_varmod_xm3"), joaat("gun_root"), 3, 0);
break;
case 8:
func_351(uParam0, 1694268374, joaat("gun_root"), 4, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_smg"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_smg"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_assaultrifle"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_assaultrifle"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 8:
func_351(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_carbinerifle"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_carbinerifle"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 8:
func_351(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
case 9:
func_351(uParam0, 1605520746, joaat("gun_root"), 2, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
case 8:
func_351(uParam0, 1605520746, joaat("gun_root"), 2, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_advancedrifle"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}
break;
case joaat("weapon_mg"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}
break;
case joaat("weapon_combatmg"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_combatmg"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_assaultshotgun"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
break;
case 4:
func_351(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}
break;
case joaat("weapon_heavysniper"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_heavysniper"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
break;
}}
break;
case joaat("weapon_grenadelauncher"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
break;
}
break;
case joaat("weapon_minigun"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
}
break;
case joaat("weapon_pistol50"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}
break;
case joaat("weapon_assaultrifle_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_assaultrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_assaultrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_assaultrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_assaultrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_assaultrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_assaultrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPGrip"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
break;
case 10:
func_351(uParam0, 0, joaat("WAPScop_2"), 1, 1);
break;
case 11:
func_351(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
break;
case 12:
func_351(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
break;
case 13:
func_351(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
break;
case 14:
func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
break;
case 15:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
break;
case 16:
func_351(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
break;
case 17:
func_351(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
break;
case 18:
func_351(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
break;
case 19:
func_351(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
break;
case 20:
func_351(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
break;
case 21:
func_351(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
break;
case 22:
func_351(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
break;
case 23:
func_351(uParam0, joaat("component_at_ar_barrel_01"), -1312077031, 1, 1);
break;
case 24:
func_351(uParam0, joaat("component_at_ar_barrel_02"), -1312077031, 2, 0);
break;
case 25:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 26:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 27:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 28:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 29:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 30:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 31:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 32:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 33:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 34:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 35:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 36:
func_351(uParam0, joaat("component_assaultrifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_carbinerifle_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_carbinerifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_carbinerifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_carbinerifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_carbinerifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_carbinerifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_carbinerifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
break;
case 10:
func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
break;
case 11:
func_351(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
break;
case 12:
func_351(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
break;
case 13:
func_351(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
break;
case 14:
func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
break;
case 15:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
break;
case 16:
func_351(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
break;
case 17:
func_351(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
break;
case 18:
func_351(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
break;
case 19:
func_351(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
break;
case 20:
func_351(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
break;
case 21:
func_351(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
break;
case 22:
func_351(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
break;
case 23:
func_351(uParam0, joaat("component_at_cr_barrel_01"), -1312077031, 1, 1);
break;
case 24:
func_351(uParam0, joaat("component_at_cr_barrel_02"), -1312077031, 2, 0);
break;
case 25:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 26:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 27:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 28:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 29:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 30:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 31:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 32:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 33:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 34:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 35:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 36:
func_351(uParam0, joaat("component_carbinerifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_combatmg_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_combatmg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_combatmg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_combatmg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_combatmg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_combatmg_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_combatmg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
break;
case 10:
func_351(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 3, 0);
break;
case 11:
func_351(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
break;
case 12:
func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
break;
case 13:
func_351(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 2, 0);
break;
case 14:
func_351(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 3, 0);
break;
case 15:
func_351(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 4, 0);
break;
case 16:
func_351(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 5, 0);
break;
case 17:
func_351(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 6, 0);
break;
case 18:
func_351(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 7, 0);
break;
case 19:
func_351(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 8, 0);
break;
case 20:
func_351(uParam0, joaat("component_at_mg_barrel_01"), -1312077031, 1, 1);
break;
case 21:
func_351(uParam0, joaat("component_at_mg_barrel_02"), -1312077031, 2, 0);
break;
case 22:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 23:
func_351(uParam0, joaat("component_combatmg_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 24:
func_351(uParam0, joaat("component_combatmg_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 25:
func_351(uParam0, joaat("component_combatmg_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 26:
func_351(uParam0, joaat("component_combatmg_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 27:
func_351(uParam0, joaat("component_combatmg_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 28:
func_351(uParam0, joaat("component_combatmg_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 29:
func_351(uParam0, joaat("component_combatmg_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 30:
func_351(uParam0, joaat("component_combatmg_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 31:
func_351(uParam0, joaat("component_combatmg_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 32:
func_351(uParam0, joaat("component_combatmg_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 33:
func_351(uParam0, joaat("component_combatmg_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_heavysniper_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_heavysniper_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_heavysniper_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_heavysniper_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_heavysniper_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_heavysniper_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_heavysniper_mk2_clip_explosive"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_scope_large_mk2"), joaat("WAPScop"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
break;
case 8:
func_351(uParam0, joaat("component_at_scope_nv"), joaat("WAPScop"), 3, 0);
break;
case 9:
func_351(uParam0, joaat("component_at_scope_thermal"), joaat("WAPScop"), 4, 0);
break;
case 10:
func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
break;
case 11:
func_351(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
break;
case 12:
func_351(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
break;
case 13:
func_351(uParam0, joaat("component_at_muzzle_09"), joaat("WAPSupp"), 4, 0);
break;
case 14:
func_351(uParam0, joaat("component_at_sr_barrel_01"), -1312077031, 1, 1);
break;
case 15:
func_351(uParam0, joaat("component_at_sr_barrel_02"), -1312077031, 2, 0);
break;
case 16:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 17:
func_351(uParam0, joaat("component_heavysniper_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 18:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 19:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 20:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 21:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 22:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 23:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 24:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 25:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 26:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 27:
func_351(uParam0, joaat("component_heavysniper_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_pistol_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_pistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_pistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_pistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_pistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_pistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_pistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_pi_rail"), joaat("WAPScop"), 2, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_pi_flsh_02"), joaat("WAPFlshLasr"), 2, 0);
break;
case 10:
func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
break;
case 11:
func_351(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
break;
case 12:
func_351(uParam0, joaat("component_at_pi_comp"), joaat("WAPSupp"), 3, 0);
break;
case 13:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 14:
func_351(uParam0, joaat("component_pistol_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 15:
func_351(uParam0, joaat("component_pistol_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 16:
func_351(uParam0, joaat("component_pistol_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 17:
func_351(uParam0, joaat("component_pistol_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 18:
func_351(uParam0, joaat("component_pistol_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 19:
func_351(uParam0, joaat("component_pistol_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 20:
func_351(uParam0, joaat("component_pistol_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 21:
func_351(uParam0, joaat("component_pistol_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 22:
func_351(uParam0, joaat("component_pistol_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 23:
func_351(uParam0, joaat("component_pistol_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 24:
func_351(uParam0, joaat("component_pistol_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
case 25:
func_351(uParam0, joaat("component_pistol_mk2_varmod_xm3"), joaat("gun_root"), 13, 0);
break;
}
break;
case joaat("weapon_smg_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_smg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_smg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_smg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_smg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_smg_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_smg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_sights_smg"), joaat("WAPScop"), 2, 0);
break;
case 10:
func_351(uParam0, joaat("component_at_scope_macro_02_smg_mk2"), joaat("WAPScop"), 3, 0);
break;
case 11:
func_351(uParam0, joaat("component_at_scope_small_smg_mk2"), joaat("WAPScop"), 4, 0);
break;
case 12:
func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
break;
case 13:
func_351(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
break;
case 14:
func_351(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 2, 0);
break;
case 15:
func_351(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 3, 0);
break;
case 16:
func_351(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 4, 0);
break;
case 17:
func_351(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 5, 0);
break;
case 18:
func_351(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 6, 0);
break;
case 19:
func_351(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 7, 0);
break;
case 20:
func_351(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 8, 0);
break;
case 21:
func_351(uParam0, joaat("component_at_sb_barrel_01"), -1312077031, 1, 1);
break;
case 22:
func_351(uParam0, joaat("component_at_sb_barrel_02"), -1312077031, 2, 0);
break;
case 23:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 24:
func_351(uParam0, joaat("component_smg_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 25:
func_351(uParam0, joaat("component_smg_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 26:
func_351(uParam0, joaat("component_smg_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 27:
func_351(uParam0, joaat("component_smg_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 28:
func_351(uParam0, joaat("component_smg_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 29:
func_351(uParam0, joaat("component_smg_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 30:
func_351(uParam0, joaat("component_smg_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 31:
func_351(uParam0, joaat("component_smg_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 32:
func_351(uParam0, joaat("component_smg_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 33:
func_351(uParam0, joaat("component_smg_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 34:
func_351(uParam0, joaat("component_smg_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_pumpshotgun"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pumpshotgun"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
break;
case 5:
func_351(uParam0, joaat("component_pumpshotgun_varmod_xm3"), joaat("gun_root"), 3, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
break;
case 4:
func_351(uParam0, joaat("component_pumpshotgun_varmod_xm3"), joaat("gun_root"), 3, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_specialcarbine"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_specialcarbine"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 8:
func_351(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
case 8:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_snspistol"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_snspistol"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_marksmanrifle"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_marksmanrifle"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_revolver"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_revolver"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
break;
case 2:
func_351(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
break;
}}
break;
case joaat("weapon_bullpuprifle"):
if(func_350(iLocal_64)){
if(!func_347(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_bullpuprifle"), -1)){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
case 1:
func_351(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 2:
func_351(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
break;
}}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
break;
}}
break;
case joaat("weapon_pumpshotgun_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_pumpshotgun_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_pumpshotgun_mk2_clip_incendiary"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_pumpshotgun_mk2_clip_hollowpoint"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_pumpshotgun_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_pumpshotgun_mk2_clip_explosive"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
break;
case 7:
func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
break;
case 8:
func_351(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
break;
case 9:
func_351(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
break;
case 10:
func_351(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 4, 0);
break;
case 11:
func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
break;
case 12:
func_351(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
break;
case 13:
func_351(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
break;
case 14:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 15:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 16:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 17:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 18:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 19:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 20:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 21:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 22:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 23:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 24:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 25:
func_351(uParam0, joaat("component_pumpshotgun_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_specialcarbine_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_specialcarbine_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_specialcarbine_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_specialcarbine_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_specialcarbine_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_specialcarbine_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_specialcarbine_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPScop_2"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
break;
case 10:
func_351(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
break;
case 11:
func_351(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
break;
case 12:
func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
break;
case 13:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
break;
case 14:
func_351(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
break;
case 15:
func_351(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
break;
case 16:
func_351(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
break;
case 17:
func_351(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
break;
case 18:
func_351(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
break;
case 19:
func_351(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
break;
case 20:
func_351(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
break;
case 21:
func_351(uParam0, 0, joaat("WAPGrip"), 1, 1);
break;
case 22:
func_351(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
break;
case 23:
func_351(uParam0, joaat("component_at_sc_barrel_01"), -1312077031, 1, 1);
break;
case 24:
func_351(uParam0, joaat("component_at_sc_barrel_02"), -1312077031, 2, 0);
break;
case 25:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 26:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 27:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 28:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 29:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 30:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 31:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 32:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 33:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 34:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 35:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 36:
func_351(uParam0, joaat("component_specialcarbine_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_snspistol_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_snspistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_snspistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_snspistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_snspistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_snspistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_snspistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_pi_flsh_03"), joaat("WAPFlshLasr_2"), 2, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_pi_rail_02"), joaat("WAPScop"), 2, 0);
break;
case 10:
func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
break;
case 11:
func_351(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
break;
case 12:
func_351(uParam0, joaat("component_at_pi_comp_02"), joaat("WAPSupp_2"), 3, 0);
break;
case 13:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 14:
func_351(uParam0, joaat("component_snspistol_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 15:
func_351(uParam0, joaat("component_snspistol_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 16:
func_351(uParam0, joaat("component_snspistol_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 17:
func_351(uParam0, joaat("component_snspistol_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 18:
func_351(uParam0, joaat("component_snspistol_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 19:
func_351(uParam0, joaat("component_snspistol_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 20:
func_351(uParam0, joaat("component_snspistol_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 21:
func_351(uParam0, joaat("component_snspistol_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 22:
func_351(uParam0, joaat("component_snspistol_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 23:
func_351(uParam0, joaat("component_snspistol_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 24:
func_351(uParam0, joaat("component_snspistol_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_marksmanrifle_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_marksmanrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_marksmanrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_marksmanrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_marksmanrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_marksmanrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_marksmanrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
break;
case 8:
func_351(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
break;
case 9:
func_351(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 3, 0);
break;
case 10:
func_351(uParam0, joaat("component_at_scope_large_fixed_zoom_mk2"), joaat("WAPScop_2"), 4, 1);
break;
case 11:
func_351(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
break;
case 12:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
break;
case 13:
func_351(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
break;
case 14:
func_351(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
break;
case 15:
func_351(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
break;
case 16:
func_351(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
break;
case 17:
func_351(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
break;
case 18:
func_351(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
break;
case 19:
func_351(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
break;
case 20:
func_351(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
break;
case 21:
func_351(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
break;
case 22:
func_351(uParam0, joaat("component_at_mrfl_barrel_01"), -1312077031, 1, 1);
break;
case 23:
func_351(uParam0, joaat("component_at_mrfl_barrel_02"), -1312077031, 2, 0);
break;
case 24:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 25:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 26:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 27:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 28:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 29:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 30:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 31:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 32:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 33:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 34:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 35:
func_351(uParam0, joaat("component_marksmanrifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_revolver_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_revolver_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_revolver_mk2_clip_tracer"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_revolver_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_revolver_mk2_clip_hollowpoint"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_revolver_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, 0, joaat("WAPScop"), 1, 1);
break;
case 6:
func_351(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
break;
case 7:
func_351(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
break;
case 10:
func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
break;
case 11:
func_351(uParam0, joaat("component_at_pi_comp_03"), joaat("WAPSupp"), 2, 0);
break;
case 12:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 13:
func_351(uParam0, joaat("component_revolver_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 14:
func_351(uParam0, joaat("component_revolver_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 15:
func_351(uParam0, joaat("component_revolver_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 16:
func_351(uParam0, joaat("component_revolver_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 17:
func_351(uParam0, joaat("component_revolver_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 18:
func_351(uParam0, joaat("component_revolver_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 19:
func_351(uParam0, joaat("component_revolver_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 20:
func_351(uParam0, joaat("component_revolver_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 21:
func_351(uParam0, joaat("component_revolver_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 22:
func_351(uParam0, joaat("component_revolver_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 23:
func_351(uParam0, joaat("component_revolver_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_bullpuprifle_mk2"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_bullpuprifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_bullpuprifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_bullpuprifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
break;
case 3:
func_351(uParam0, joaat("component_bullpuprifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
break;
case 4:
func_351(uParam0, joaat("component_bullpuprifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
break;
case 5:
func_351(uParam0, joaat("component_bullpuprifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
break;
case 6:
func_351(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
break;
case 7:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
break;
case 8:
func_351(uParam0, 0, joaat("WAPScop_2"), 1, 1);
break;
case 9:
func_351(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
break;
case 10:
func_351(uParam0, joaat("component_at_scope_macro_02_mk2"), joaat("WAPScop_2"), 3, 0);
break;
case 11:
func_351(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop_2"), 4, 0);
break;
case 12:
func_351(uParam0, joaat("component_at_bp_barrel_01"), -1312077031, 1, 1);
break;
case 13:
func_351(uParam0, joaat("component_at_bp_barrel_02"), -1312077031, 2, 0);
break;
case 14:
func_351(uParam0, 0, joaat("WAPSupp"), 1, 1);
break;
case 15:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
break;
case 16:
func_351(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
break;
case 17:
func_351(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
break;
case 18:
func_351(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
break;
case 19:
func_351(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
break;
case 20:
func_351(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
break;
case 21:
func_351(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
break;
case 22:
func_351(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
break;
case 23:
func_351(uParam0, 0, joaat("WAPGrip"), 1, 1);
break;
case 24:
func_351(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
break;
case 25:
func_351(uParam0, 0, joaat("gun_root"), 1, 1);
break;
case 26:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo"), joaat("gun_root"), 2, 0);
break;
case 27:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
break;
case 28:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
break;
case 29:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
break;
case 30:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
break;
case 31:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
break;
case 32:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
break;
case 33:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
break;
case 34:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
break;
case 35:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
break;
case 36:
func_351(uParam0, joaat("component_bullpuprifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
break;
}
break;
case joaat("weapon_raypistol"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_raypistol_varmod_xmas18"), joaat("gun_root"), 1, 0);
break;
}
break;
case joaat("weapon_ceramicpistol"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_ceramicpistol_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_ceramicpistol_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_ceramicpistol_supp"), joaat("WAPSupp"), 1, 0);
break;
}
break;
case joaat("weapon_heavyrifle"):
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
case 7:
func_351(uParam0, joaat("component_heavyrifle_camo1"), joaat("gun_root"), 1, 0);
break;
}}else{
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 5:
func_351(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
break;
case 6:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
}}
break;
case joaat("weapon_tacticalrifle"):
switch (iParam2){
case 0:
func_351(uParam0, joaat("component_tacticalrifle_clip_01"), joaat("WAPClip"), 1, 1);
break;
case 1:
func_351(uParam0, joaat("component_tacticalrifle_clip_02"), joaat("WAPClip"), 2, 0);
break;
case 2:
func_351(uParam0, joaat("component_at_ar_flsh_reh"), joaat("WAPFlshLasr"), 1, 0);
break;
case 3:
func_351(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
break;
case 4:
func_351(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
break;
}
break;
case joaat("weapon_knife"):
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar1=func_335(iParam1, &iVar0);
if((iVar1 > 0 && iParam2 >=0) && iParam2 < iVar0){
switch (iVar0[iParam2]){
case joaat("component_knife_varmod_xm3"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 1, 0);
break;
case joaat("component_knife_varmod_xm3_01"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 2, 0);
break;
case joaat("component_knife_varmod_xm3_02"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 3, 0);
break;
case joaat("component_knife_varmod_xm3_03"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 4, 0);
break;
case joaat("component_knife_varmod_xm3_04"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 5, 0);
break;
case joaat("component_knife_varmod_xm3_05"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 6, 0);
break;
case joaat("component_knife_varmod_xm3_06"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 7, 0);
break;
case joaat("component_knife_varmod_xm3_07"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 8, 0);
break;
case joaat("component_knife_varmod_xm3_08"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 9, 0);
break;
case joaat("component_knife_varmod_xm3_09"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 10, 0);
break;
}}}
break;
case joaat("weapon_bat"):
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar1=func_335(iParam1, &iVar0);
if((iVar1 > 0 && iParam2 >=0) && iParam2 < iVar0){
switch (iVar0[iParam2]){
case joaat("component_bat_varmod_xm3"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 1, 0);
break;
case joaat("component_bat_varmod_xm3_01"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 2, 0);
break;
case joaat("component_bat_varmod_xm3_02"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 3, 0);
break;
case joaat("component_bat_varmod_xm3_03"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 4, 0);
break;
case joaat("component_bat_varmod_xm3_04"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 5, 0);
break;
case joaat("component_bat_varmod_xm3_05"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 6, 0);
break;
case joaat("component_bat_varmod_xm3_06"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 7, 0);
break;
case joaat("component_bat_varmod_xm3_07"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 8, 0);
break;
case joaat("component_bat_varmod_xm3_08"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 9, 0);
break;
case joaat("component_bat_varmod_xm3_09"):
func_351(uParam0, iVar0[iParam2], joaat("gun_root"), 10, 0);
break;
}}}
break;
case joaat("weapon_rpg"):
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (iParam2){
case 0:
func_351(uParam0, -1240142720, joaat("gun_root"), 1, 0);
break;
}}
break;
default:
iVar14=func_68(iParam1, &uVar17);
if(iVar14 !=-1){
iVar15=0;
while (iVar15 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar14)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar14, iVar15, &Var18)){
if(!func_65(Var18.f_3)){
if(Var18.f_0==joaat("WAPClip") || Var18.f_0==joaat("WAPClip_2")){
iVar3++;
}elseif(Var18.f_0==joaat("WAPFlshLasr") || Var18.f_0==joaat("WAPFlshLasr_2")){
iVar4++;
}elseif(Var18.f_0==joaat("WAPScop") || Var18.f_0==joaat("WAPScop_2")){
iVar5++;
}elseif(Var18.f_0==joaat("WAPRail") || Var18.f_0==joaat("WAPRail_2")){
iVar6++;
}elseif(Var18.f_0==joaat("WAPGrip") || Var18.f_0==joaat("WAPGrip_2")){
iVar7++;
}elseif(Var18.f_0==joaat("WAPSupp") || Var18.f_0==joaat("WAPSupp_2")){
iVar8++;
}elseif(Var18.f_0==1731751835){
iVar9++;
}elseif(Var18.f_0==joaat("gun_root")){
iVar10++;
}elseif(Var18.f_0==-31573710){
iVar11++;
}elseif(Var18.f_0==-1312077031){
iVar12++;
}else{
iVar13++;
}
if(iVar16==iParam2){
if(Var18.f_0==joaat("WAPClip") || Var18.f_0==joaat("WAPClip_2")){
iVar2=iVar3;
}elseif(Var18.f_0==joaat("WAPFlshLasr") || Var18.f_0==joaat("WAPFlshLasr_2")){
iVar2=iVar4;
}elseif(Var18.f_0==joaat("WAPScop") || Var18.f_0==joaat("WAPScop_2")){
iVar2=iVar5;
}elseif(Var18.f_0==joaat("WAPRail") || Var18.f_0==joaat("WAPRail_2")){
iVar2=iVar6;
}elseif(Var18.f_0==joaat("WAPGrip") || Var18.f_0==joaat("WAPGrip_2")){
iVar2=iVar7;
}elseif(Var18.f_0==joaat("WAPSupp") || Var18.f_0==joaat("WAPSupp_2")){
iVar2=iVar8;
}elseif(Var18.f_0==1731751835){
iVar2=iVar9;
}elseif(Var18.f_0==joaat("gun_root")){
iVar2=iVar10;
}elseif(Var18.f_0==-31573710){
iVar2=iVar11;
}elseif(Var18.f_0==-1312077031){
iVar2=iVar12;
}else{
iVar2=iVar13;
}
func_351(uParam0, Var18.f_3, Var18.f_0, iVar2, Var18.f_1);
}
iVar16++;
}}
iVar15++;
}}
break;
}
if(bParam3){
uParam0->f_2=func_289(iParam1, *uParam0);
}
return uParam0->f_4 !=989182658;
}

int func_289(int iParam0, int iParam1){
int iVar0;
float fVar1;
int iVar2;
int iVar3;
var uVar4;
struct<6> Var5;
int iVar6;
int iVar7;
var uVar8;
struct<6> Var9;
char* sVar10;
struct<4> Var11;
float fVar12;
iVar0=0;
fVar1=2.5f;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
fVar1=2.5f;
switch (iParam0){
case joaat("weapon_pistol"):
switch (iParam1){
case joaat("component_pistol_clip_01"):
iVar0=120;
break;
case joaat("component_pistol_clip_02"):
iVar0=155;
break;
case joaat("component_at_pi_flsh"):
iVar0=189;
break;
case joaat("component_at_pi_supp_02"):
iVar0=729;
break;
case joaat("component_pistol_varmod_luxe"):
iVar0=18600;
break;
}
break;
case joaat("weapon_combatpistol"):
switch (iParam1){
case joaat("component_combatpistol_clip_01"):
iVar0=136;
break;
case joaat("component_combatpistol_clip_02"):
iVar0=159;
break;
case joaat("component_at_pi_flsh"):
iVar0=189;
break;
case joaat("component_at_pi_supp"):
iVar0=735;
break;
case joaat("component_combatpistol_varmod_lowrider"):
iVar0=14500;
break;
}
break;
case joaat("weapon_appistol"):
switch (iParam1){
case joaat("component_appistol_clip_01"):
iVar0=145;
break;
case joaat("component_appistol_clip_02"):
iVar0=165;
break;
case joaat("component_at_pi_flsh"):
iVar0=185;
break;
case joaat("component_at_pi_supp"):
iVar0=730;
break;
case joaat("component_appistol_varmod_luxe"):
iVar0=15800;
break;
}
break;
case joaat("weapon_microsmg"):
switch (iParam1){
case joaat("component_microsmg_clip_01"):
iVar0=120;
break;
case joaat("component_microsmg_clip_02"):
iVar0=137;
break;
case joaat("component_at_pi_flsh"):
iVar0=190;
break;
case joaat("component_at_scope_macro"):
iVar0=549;
break;
case joaat("component_at_ar_supp_02"):
iVar0=775;
break;
case joaat("component_microsmg_varmod_luxe"):
iVar0=15100;
break;
}
break;
case joaat("weapon_smg"):
switch (iParam1){
case joaat("component_smg_clip_01"):
iVar0=119;
break;
case joaat("component_smg_clip_02"):
iVar0=134;
break;
case joaat("component_smg_clip_03"):
iVar0=-1;
break;
case joaat("component_at_ar_flsh"):
iVar0=210;
break;
case joaat("component_at_scope_macro_02"):
iVar0=549;
break;
case joaat("component_at_pi_supp"):
iVar0=815;
break;
case joaat("component_smg_varmod_luxe"):
iVar0=19300;
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (iParam1){
case joaat("component_assaultrifle_clip_01"):
iVar0=120;
break;
case joaat("component_assaultrifle_clip_02"):
iVar0=129;
break;
case joaat("component_assaultrifle_clip_03"):
iVar0=-1;
break;
case joaat("component_at_ar_afgrip"):
iVar0=159;
break;
case joaat("component_at_ar_flsh"):
iVar0=189;
break;
case joaat("component_at_scope_macro"):
iVar0=565;
break;
case joaat("component_at_ar_supp_02"):
iVar0=810;
break;
case joaat("component_assaultrifle_varmod_luxe"):
iVar0=14400;
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (iParam1){
case joaat("component_carbinerifle_clip_01"):
iVar0=99;
break;
case joaat("component_carbinerifle_clip_02"):
iVar0=105;
break;
case joaat("component_carbinerifle_clip_03"):
iVar0=-1;
break;
case joaat("component_at_ar_afgrip"):
iVar0=132;
break;
case joaat("component_at_ar_flsh"):
iVar0=150;
break;
case joaat("component_at_scope_medium"):
iVar0=450;
break;
case joaat("component_at_ar_supp"):
iVar0=815;
break;
case joaat("component_carbinerifle_varmod_luxe"):
iVar0=17900;
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (iParam1){
case joaat("component_advancedrifle_clip_01"):
iVar0=110;
break;
case joaat("component_advancedrifle_clip_02"):
iVar0=124;
break;
case joaat("component_at_ar_flsh"):
iVar0=159;
break;
case joaat("component_at_scope_small"):
iVar0=450;
break;
case joaat("component_at_ar_supp"):
iVar0=812;
break;
case joaat("component_advancedrifle_varmod_luxe"):
iVar0=16500;
break;
}
break;
case joaat("weapon_mg"):
switch (iParam1){
case joaat("component_mg_clip_01"):
iVar0=135;
break;
case joaat("component_mg_clip_02"):
iVar0=145;
break;
case joaat("component_at_scope_small_02"):
iVar0=450;
break;
case joaat("component_mg_varmod_lowrider"):
iVar0=15600;
break;
}
break;
case joaat("weapon_combatmg"):
switch (iParam1){
case joaat("component_combatmg_clip_01"):
iVar0=119;
break;
case joaat("component_combatmg_clip_02"):
iVar0=126;
break;
case joaat("component_at_ar_afgrip"):
iVar0=129;
break;
case joaat("component_at_scope_medium"):
iVar0=559;
break;
case joaat("component_combatmg_varmod_lowrider"):
iVar0=14000;
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (iParam1){
case joaat("component_at_ar_flsh"):
iVar0=189;
break;
case joaat("component_at_sr_supp"):
iVar0=975;
break;
case joaat("component_pumpshotgun_varmod_lowrider"):
iVar0=16900;
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (iParam1){
case joaat("component_assaultshotgun_clip_01"):
iVar0=129;
break;
case joaat("component_assaultshotgun_clip_02"):
iVar0=139;
break;
case joaat("component_at_ar_afgrip"):
iVar0=150;
break;
case joaat("component_at_ar_flsh"):
iVar0=225;
break;
case joaat("component_at_ar_supp"):
iVar0=899;
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (iParam1){
case joaat("component_sniperrifle_clip_01"):
iVar0=-1;
break;
case joaat("component_at_scope_large"):
iVar0=559;
break;
case joaat("component_at_scope_max"):
iVar0=975;
break;
case joaat("component_at_ar_supp_02"):
iVar0=920;
break;
case joaat("component_sniperrifle_varmod_luxe"):
iVar0=13000;
break;
}
break;
case joaat("weapon_heavysniper"):
switch (iParam1){
case joaat("component_heavysniper_clip_01"):
iVar0=-1;
break;
case joaat("component_at_scope_large"):
iVar0=575;
break;
case joaat("component_at_scope_max"):
iVar0=999;
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (iParam1){
case joaat("component_at_ar_afgrip"):
iVar0=128;
break;
case joaat("component_at_ar_flsh"):
iVar0=185;
break;
case joaat("component_at_scope_small"):
iVar0=525;
break;
}
break;
case joaat("weapon_minigun"):
switch (iParam1){
case joaat("component_minigun_clip_01"):
iVar0=-1;
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (iParam1){
case joaat("component_assaultsmg_clip_01"):
iVar0=110;
break;
case joaat("component_assaultsmg_clip_02"):
iVar0=9700;
break;
case joaat("component_at_ar_flsh"):
iVar0=2275;
break;
case joaat("component_at_scope_macro"):
iVar0=10875;
break;
case joaat("component_at_ar_supp_02"):
iVar0=12400;
break;
case joaat("component_assaultsmg_varmod_lowrider"):
iVar0=17600;
break;
}
if(func_334() && (func_333() || func_332())){
iVar0=0;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (iParam1){
case joaat("component_at_ar_afgrip"):
iVar0=4100;
break;
case joaat("component_at_ar_flsh"):
iVar0=2300;
break;
case joaat("component_at_ar_supp_02"):
iVar0=12450;
break;
}
if(func_334() && (func_333() || func_332())){
iVar0=0;
}
break;
case joaat("weapon_pistol50"):
switch (iParam1){
case joaat("component_pistol50_clip_01"):
iVar0=0;
break;
case joaat("component_pistol50_clip_02"):
iVar0=9500;
break;
case joaat("component_at_pi_flsh"):
iVar0=2000;
break;
case joaat("component_at_ar_supp_02"):
iVar0=12250;
break;
case joaat("component_pistol50_varmod_luxe"):
iVar0=20000;
break;
}
if(func_334() && (func_333() || func_332())){
iVar0=0;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (iParam1){
case joaat("component_sawnoffshotgun_varmod_luxe"):
iVar0=13700;
break;
}
break;
case joaat("weapon_marksmanrifle"):
switch (iParam1){
case joaat("component_marksmanrifle_clip_01"):
iVar0=0;
break;
case joaat("component_marksmanrifle_clip_02"):
iVar0=3612;
break;
case joaat("component_at_scope_large_fixed_zoom"):
iVar0=0;
break;
case joaat("component_at_ar_flsh"):
iVar0=1020;
break;
case joaat("component_at_ar_supp"):
iVar0=5000;
break;
case joaat("component_at_ar_afgrip"):
iVar0=1760;
break;
case joaat("component_marksmanrifle_varmod_luxe"):
iVar0=17200;
break;
}
break;
case joaat("weapon_heavypistol"):
switch (iParam1){
case joaat("component_heavypistol_clip_01"):
iVar0=0;
break;
case joaat("component_heavypistol_clip_02"):
iVar0=3680;
break;
case joaat("component_at_pi_flsh"):
iVar0=710;
break;
case joaat("component_at_pi_supp"):
iVar0=4800;
break;
case joaat("component_heavypistol_varmod_luxe"):
iVar0=12000;
break;
}
break;
case joaat("weapon_knuckle"):
switch (iParam1){
case joaat("component_knuckle_varmod_pimp"):
iVar0=4900;
break;
case joaat("component_knuckle_varmod_ballas"):
iVar0=5600;
break;
case joaat("component_knuckle_varmod_dollar"):
iVar0=5500;
break;
case joaat("component_knuckle_varmod_diamond"):
iVar0=5200;
break;
case joaat("component_knuckle_varmod_hate"):
iVar0=4600;
break;
case joaat("component_knuckle_varmod_love"):
iVar0=4700;
break;
case joaat("component_knuckle_varmod_player"):
iVar0=4800;
break;
case joaat("component_knuckle_varmod_king"):
iVar0=4300;
break;
case joaat("component_knuckle_varmod_vagos"):
iVar0=4000;
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (iParam1){
case joaat("component_bullpuprifle_clip_01"):
iVar0=108;
break;
case joaat("component_bullpuprifle_clip_02"):
iVar0=9950;
break;
case joaat("component_at_ar_flsh"):
iVar0=2575;
break;
case joaat("component_at_scope_macro"):
iVar0=11350;
break;
case joaat("component_at_ar_supp_02"):
iVar0=12500;
break;
case joaat("component_at_ar_afgrip"):
iVar0=4275;
break;
case joaat("component_bullpuprifle_varmod_low"):
iVar0=16600;
break;
}
break;
case joaat("weapon_snspistol"):
switch (iParam1){
case joaat("component_snspistol_clip_01"):
iVar0=29;
break;
case joaat("component_snspistol_clip_02"):
iVar0=9150;
break;
case joaat("component_snspistol_varmod_lowrider"):
iVar0=13900;
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (iParam1){
case joaat("component_specialcarbine_clip_01"):
iVar0=108;
break;
case joaat("component_specialcarbine_clip_02"):
iVar0=9975;
break;
case joaat("component_specialcarbine_clip_03"):
iVar0=-1;
break;
case joaat("component_at_ar_flsh"):
iVar0=2525;
break;
case joaat("component_at_scope_medium"):
iVar0=11550;
break;
case joaat("component_at_ar_supp_02"):
iVar0=12500;
break;
case joaat("component_specialcarbine_varmod_lowrider"):
iVar0=18000;
break;
}
break;
case joaat("weapon_machinepistol"):
switch (iParam1){
case joaat("component_machinepistol_clip_01"):
iVar0=0;
break;
case joaat("component_machinepistol_clip_02"):
iVar0=3680;
break;
case joaat("component_machinepistol_clip_03"):
iVar0=-1;
break;
case joaat("component_at_pi_supp"):
iVar0=4840;
break;
}
break;
default:
iVar2=func_68(iParam0, &uVar4);
if(iVar2 !=-1){
iVar3=0;
while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var5)){
if(!func_65(Var5.f_3)){
if(Var5.f_3==iParam1){
fVar1=1f;
if(!func_330(iParam1)){
Var5.f_5=-1;
}
if(Var5.f_5==-1){
iVar0=-1;
}
else{
iVar0=Var5.f_5;
}
if(iParam0==joaat("weapon_hammer")){
if(func_334() && (func_333() || func_332())){
iVar0=0;
}
}}}
}
iVar3++;
}}
break;
}}else{
fVar1=2.5f;
switch (iParam0){
case joaat("weapon_pistol"):
switch (iParam1){
case joaat("component_pistol_clip_01"):
iVar0=120;
break;
case joaat("component_pistol_clip_02"):
iVar0=9175;
iVar0=floor((to_float(iVar0) * Global_262145.f_2895));
break;
case joaat("component_at_pi_flsh"):
iVar0=1675;
iVar0=floor((to_float(iVar0) * Global_262145.f_4347));
break;
case joaat("component_at_pi_supp_02"):
iVar0=12050;
iVar0=floor((to_float(iVar0) * Global_262145.f_4348));
break;
case joaat("component_pistol_varmod_luxe"):
iVar0=Global_262145.f_11212;
iVar0=floor((to_float(iVar0) * Global_262145.f_4425));
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_21373;
break;
}
break;
case joaat("weapon_combatpistol"):
switch (iParam1){
case joaat("component_combatpistol_clip_01"):
iVar0=136;
break;
case joaat("component_combatpistol_clip_02"):
iVar0=Global_262145.f_21259;
iVar0=floor((to_float(iVar0) * Global_262145.f_2896));
break;
case joaat("component_at_pi_flsh"):
iVar0=1825;
iVar0=floor((to_float(iVar0) * Global_262145.f_4349));
break;
case joaat("component_at_pi_supp"):
iVar0=Global_262145.f_21260;
iVar0=floor((to_float(iVar0) * Global_262145.f_4350));
break;
case joaat("component_combatpistol_varmod_lowrider"):
iVar0=Global_262145.f_12604;
iVar0=floor((to_float(iVar0) * Global_262145.f_4420));
break;
}
break;
case joaat("weapon_appistol"):
switch (iParam1){
case joaat("component_appistol_clip_01"):
iVar0=145;
break;
case joaat("component_appistol_clip_02"):
iVar0=9400;
iVar0=floor((to_float(iVar0) * Global_262145.f_2898));
break;
case joaat("component_at_pi_flsh"):
iVar0=1975;
iVar0=floor((to_float(iVar0) * Global_262145.f_4351));
break;
case joaat("component_at_pi_supp"):
iVar0=12200;
iVar0=floor((to_float(iVar0) * Global_262145.f_4352));
break;
case joaat("component_appistol_varmod_luxe"):
iVar0=Global_262145.f_11211;
iVar0=floor((to_float(iVar0) * Global_262145.f_4414));
break;
case joaat("component_appistol_varmod_security"):
iVar0=Global_262145.f_32220;
break;
}
break;
case joaat("weapon_microsmg"):
switch (iParam1){
case joaat("component_microsmg_clip_01"):
iVar0=120;
break;
case joaat("component_microsmg_clip_02"):
iVar0=9325;
iVar0=floor((to_float(iVar0) * Global_262145.f_2899));
break;
case joaat("component_at_pi_flsh"):
iVar0=1900;
iVar0=floor((to_float(iVar0) * Global_262145.f_4355));
break;
case joaat("component_at_scope_macro"):
iVar0=10800;
iVar0=floor((to_float(iVar0) * Global_262145.f_4357));
break;
case joaat("component_at_ar_supp_02"):
iVar0=12150;
iVar0=floor((to_float(iVar0) * Global_262145.f_4356));
break;
case joaat("component_microsmg_varmod_luxe"):
iVar0=Global_262145.f_11215;
iVar0=floor((to_float(iVar0) * Global_262145.f_4424));
break;
case joaat("component_microsmg_varmod_security"):
iVar0=Global_262145.f_32219;
break;
case joaat("component_microsmg_varmod_xm3"):
iVar0=0;
break;
case 1694268374:
iVar0=0;
break;
}
break;
case joaat("weapon_smg"):
switch (iParam1){
case joaat("component_smg_clip_01"):
iVar0=119;
break;
case joaat("component_smg_clip_02"):
iVar0=9475;
iVar0=floor((to_float(iVar0) * Global_262145.f_2900));
break;
case joaat("component_smg_clip_03"):
iVar0=Global_262145.f_16767;
break;
case joaat("component_at_ar_flsh"):
iVar0=2050;
iVar0=floor((to_float(iVar0) * Global_262145.f_4358));
break;
case joaat("component_at_scope_macro_02"):
iVar0=10825;
iVar0=floor((to_float(iVar0) * Global_262145.f_4360));
break;
case joaat("component_at_pi_supp"):
iVar0=12250;
iVar0=floor((to_float(iVar0) * Global_262145.f_4359));
break;
case joaat("component_smg_varmod_luxe"):
iVar0=Global_262145.f_11214;
iVar0=floor((to_float(iVar0) * Global_262145.f_4429));
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_21374;
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (iParam1){
case joaat("component_assaultrifle_clip_01"):
iVar0=120;
break;
case joaat("component_assaultrifle_clip_02"):
iVar0=9550;
iVar0=floor((to_float(iVar0) * Global_262145.f_2902));
break;
case joaat("component_assaultrifle_clip_03"):
iVar0=Global_262145.f_16762;
break;
case joaat("component_at_ar_afgrip"):
iVar0=4200;
iVar0=floor((to_float(iVar0) * Global_262145.f_4368));
break;
case joaat("component_at_ar_flsh"):
iVar0=2125;
iVar0=floor((to_float(iVar0) * Global_262145.f_4365));
break;
case joaat("component_at_scope_macro"):
iVar0=10850;
iVar0=floor((to_float(iVar0) * Global_262145.f_4367));
break;
case joaat("component_at_ar_supp_02"):
iVar0=12300;
iVar0=floor((to_float(iVar0) * Global_262145.f_4366));
break;
case joaat("component_assaultrifle_varmod_luxe"):
iVar0=Global_262145.f_11208;
iVar0=floor((to_float(iVar0) * Global_262145.f_4415));
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_21376;
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (iParam1){
case joaat("component_carbinerifle_clip_01"):
iVar0=99;
break;
case joaat("component_carbinerifle_clip_02"):
iVar0=9775;
iVar0=floor((to_float(iVar0) * Global_262145.f_2903));
break;
case joaat("component_carbinerifle_clip_03"):
iVar0=Global_262145.f_16761;
break;
case joaat("component_at_ar_afgrip"):
iVar0=4350;
iVar0=floor((to_float(iVar0) * Global_262145.f_4376));
break;
case joaat("component_at_ar_flsh"):
iVar0=2350;
iVar0=floor((to_float(iVar0) * Global_262145.f_4373));
break;
case joaat("component_at_scope_medium"):
iVar0=10900;
iVar0=floor((to_float(iVar0) * Global_262145.f_4375));
break;
case joaat("component_at_ar_supp"):
iVar0=12450;
iVar0=floor((to_float(iVar0) * Global_262145.f_4374));
break;
case joaat("component_carbinerifle_varmod_luxe"):
iVar0=Global_262145.f_11210;
iVar0=floor((to_float(iVar0) * Global_262145.f_4418));
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_21377;
break;
case 1605520746:
iVar0=0;
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (iParam1){
case joaat("component_advancedrifle_clip_01"):
iVar0=110;
break;
case joaat("component_advancedrifle_clip_02"):
iVar0=9925;
iVar0=floor((to_float(iVar0) * Global_262145.f_2905));
break;
case joaat("component_at_ar_flsh"):
iVar0=2425;
iVar0=floor((to_float(iVar0) * Global_262145.f_4378));
break;
case joaat("component_at_scope_small"):
iVar0=10950;
iVar0=floor((to_float(iVar0) * Global_262145.f_4380));
break;
case joaat("component_at_ar_supp"):
iVar0=12500;
iVar0=floor((to_float(iVar0) * Global_262145.f_4379));
break;
case joaat("component_advancedrifle_varmod_luxe"):
iVar0=Global_262145.f_11209;
iVar0=floor((to_float(iVar0) * Global_262145.f_4413));
break;
}
break;
case joaat("weapon_mg"):
switch (iParam1){
case joaat("component_mg_clip_01"):
iVar0=135;
break;
case joaat("component_mg_clip_02"):
iVar0=9850;
iVar0=floor((to_float(iVar0) * Global_262145.f_2906));
break;
case joaat("component_at_scope_small_02"):
iVar0=10925;
iVar0=floor((to_float(iVar0) * Global_262145.f_4381));
break;
case joaat("component_mg_varmod_lowrider"):
iVar0=Global_262145.f_12605;
iVar0=floor((to_float(iVar0) * Global_262145.f_4423));
break;
}
break;
case joaat("weapon_combatmg"):
switch (iParam1){
case joaat("component_combatmg_clip_01"):
iVar0=119;
break;
case joaat("component_combatmg_clip_02"):
iVar0=10000;
iVar0=floor((to_float(iVar0) * Global_262145.f_2907));
break;
case joaat("component_at_ar_afgrip"):
iVar0=4425;
iVar0=floor((to_float(iVar0) * Global_262145.f_4403));
break;
case joaat("component_at_scope_medium"):
iVar0=10975;
iVar0=floor((to_float(iVar0) * Global_262145.f_4404));
break;
case joaat("component_combatmg_varmod_lowrider"):
iVar0=Global_262145.f_12606;
iVar0=floor((to_float(iVar0) * Global_262145.f_4419));
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_21375;
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (iParam1){
case joaat("component_at_ar_flsh"):
iVar0=1750;
iVar0=floor((to_float(iVar0) * Global_262145.f_4385));
break;
case joaat("component_at_sr_supp"):
iVar0=12350;
iVar0=floor((to_float(iVar0) * Global_262145.f_4386));
break;
case joaat("component_pumpshotgun_varmod_lowrider"):
iVar0=Global_262145.f_12601;
iVar0=floor((to_float(iVar0) * Global_262145.f_4427));
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_23113;
break;
case joaat("component_pumpshotgun_varmod_security"):
iVar0=Global_262145.f_32217;
break;
case joaat("component_pumpshotgun_varmod_xm3"):
iVar0=0;
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (iParam1){
case joaat("component_assaultshotgun_clip_01"):
iVar0=129;
break;
case joaat("component_assaultshotgun_clip_02"):
iVar0=9625;
iVar0=floor((to_float(iVar0) * Global_262145.f_2909));
break;
case joaat("component_at_ar_afgrip"):
iVar0=4275;
iVar0=floor((to_float(iVar0) * Global_262145.f_4389));
break;
case joaat("component_at_ar_flsh"):
iVar0=2200;
iVar0=floor((to_float(iVar0) * Global_262145.f_4390));
break;
case joaat("component_at_ar_supp"):
iVar0=12350;
iVar0=floor((to_float(iVar0) * Global_262145.f_4391));
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (iParam1){
case joaat("component_sniperrifle_clip_01"):
iVar0=-1;
break;
case joaat("component_at_scope_large"):
iVar0=12400;
iVar0=floor((to_float(iVar0) * Global_262145.f_4392));
break;
case joaat("component_at_scope_max"):
iVar0=12500;
iVar0=floor((to_float(iVar0) * Global_262145.f_4393));
break;
case joaat("component_at_ar_supp_02"):
iVar0=12050;
iVar0=floor((to_float(iVar0) * Global_262145.f_4394));
break;
case joaat("component_sniperrifle_varmod_luxe"):
iVar0=Global_262145.f_11217;
iVar0=floor((to_float(iVar0) * Global_262145.f_4430));
break;
}
break;
case joaat("weapon_heavysniper"):
switch (iParam1){
case joaat("component_heavysniper_clip_01"):
iVar0=-1;
break;
case joaat("component_at_scope_large"):
iVar0=99;
iVar0=floor((to_float(iVar0) * Global_262145.f_4395));
break;
case joaat("component_at_scope_max"):
iVar0=12500;
iVar0=floor((to_float(iVar0) * Global_262145.f_4396));
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_21378;
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (iParam1){
case joaat("component_at_ar_afgrip"):
iVar0=4500;
iVar0=floor((to_float(iVar0) * Global_262145.f_4405));
break;
case joaat("component_at_ar_flsh"):
iVar0=2500;
iVar0=floor((to_float(iVar0) * Global_262145.f_4401));
break;
case joaat("component_at_scope_small"):
iVar0=11000;
iVar0=floor((to_float(iVar0) * Global_262145.f_4402));
break;
}
break;
case joaat("weapon_minigun"):
switch (iParam1){
case joaat("component_minigun_clip_01"):
iVar0=-1;
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (iParam1){
case joaat("component_assaultsmg_clip_01"):
iVar0=110;
break;
case joaat("component_assaultsmg_clip_02"):
iVar0=9700;
iVar0=floor((to_float(iVar0) * Global_262145.f_2901));
break;
case joaat("component_at_ar_flsh"):
iVar0=2275;
iVar0=floor((to_float(iVar0) * Global_262145.f_4361));
break;
case joaat("component_at_scope_macro"):
iVar0=10875;
iVar0=floor((to_float(iVar0) * Global_262145.f_4364));
break;
case joaat("component_at_ar_supp_02"):
iVar0=12400;
iVar0=floor((to_float(iVar0) * Global_262145.f_4362));
break;
case joaat("component_assaultsmg_varmod_lowrider"):
iVar0=Global_262145.f_12602;
iVar0=floor((to_float(iVar0) * Global_262145.f_4363));
break;
}
break;
case joaat("weapon_gusenberg"):
switch (iParam1){
case joaat("component_gusenberg_clip_01"):
iVar0=0;
break;
case joaat("component_gusenberg_clip_02"):
iVar0=Global_262145.f_7144;
break;
}
break;
case joaat("weapon_snspistol"):
switch (iParam1){
case joaat("component_snspistol_clip_01"):
iVar0=0;
break;
case joaat("component_snspistol_clip_02"):
iVar0=Global_262145.f_7811;
break;
case joaat("component_snspistol_varmod_lowrider"):
iVar0=Global_262145.f_12603;
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_23118;
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (iParam1){
case joaat("component_specialcarbine_clip_01"):
iVar0=0;
break;
case joaat("component_specialcarbine_clip_02"):
iVar0=Global_262145.f_7816;
break;
case joaat("component_specialcarbine_clip_03"):
iVar0=Global_262145.f_16764;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_7819;
break;
case joaat("component_at_scope_medium"):
iVar0=Global_262145.f_7815;
break;
case joaat("component_at_ar_supp_02"):
iVar0=Global_262145.f_7813;
break;
case joaat("component_at_ar_afgrip"):
iVar0=Global_262145.f_7818;
break;
case joaat("component_specialcarbine_varmod_lowrider"):
iVar0=Global_262145.f_12607;
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_23114;
break;
}
break;
case joaat("weapon_heavypistol"):
switch (iParam1){
case joaat("component_heavypistol_clip_01"):
iVar0=0;
break;
case joaat("component_heavypistol_clip_02"):
iVar0=Global_262145.f_7817;
break;
case joaat("component_at_pi_flsh"):
iVar0=Global_262145.f_7821;
break;
case joaat("component_at_pi_supp"):
iVar0=Global_262145.f_7814;
break;
case joaat("component_heavypistol_varmod_luxe"):
iVar0=Global_262145.f_7841;
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (iParam1){
case joaat("component_bullpuprifle_clip_01"):
iVar0=0;
break;
case joaat("component_bullpuprifle_clip_02"):
iVar0=Global_262145.f_7824;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_7827;
break;
case joaat("component_at_ar_supp"):
iVar0=Global_262145.f_7822;
break;
case joaat("component_at_scope_small"):
iVar0=Global_262145.f_7823;
break;
case joaat("component_at_ar_afgrip"):
iVar0=Global_262145.f_7825;
break;
case joaat("component_bullpuprifle_varmod_low"):
iVar0=Global_262145.f_12608;
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_23117;
break;
}
break;
case joaat("weapon_vintagepistol"):
switch (iParam1){
case joaat("component_vintagepistol_clip_01"):
iVar0=0;
break;
case joaat("component_vintagepistol_clip_02"):
iVar0=Global_262145.f_8299;
break;
case joaat("component_at_pi_supp"):
iVar0=Global_262145.f_8300;
break;
}
break;
case joaat("weapon_heavyshotgun"):
switch (iParam1){
case joaat("component_heavyshotgun_clip_01"):
iVar0=0;
break;
case joaat("component_heavyshotgun_clip_02"):
iVar0=Global_262145.f_9029;
break;
case joaat("component_heavyshotgun_clip_03"):
iVar0=Global_262145.f_16768;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_9030;
break;
case joaat("component_at_ar_supp_02"):
iVar0=Global_262145.f_9031;
break;
case joaat("component_at_ar_afgrip"):
iVar0=Global_262145.f_9032;
break;
}
break;
case joaat("weapon_marksmanrifle"):
switch (iParam1){
case joaat("component_marksmanrifle_clip_01"):
iVar0=0;
break;
case joaat("component_marksmanrifle_clip_02"):
iVar0=Global_262145.f_9035;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_9036;
break;
case joaat("component_at_ar_supp"):
iVar0=Global_262145.f_9038;
break;
case joaat("component_at_ar_afgrip"):
iVar0=Global_262145.f_9039;
break;
case joaat("component_marksmanrifle_varmod_luxe"):
iVar0=Global_262145.f_9040;
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_23115;
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (iParam1){
case joaat("component_at_ar_afgrip"):
iVar0=4100;
iVar0=floor((to_float(iVar0) * Global_262145.f_15312));
break;
case joaat("component_at_ar_flsh"):
iVar0=2300;
iVar0=floor((to_float(iVar0) * Global_262145.f_4387));
break;
case joaat("component_at_ar_supp_02"):
iVar0=12450;
iVar0=floor((to_float(iVar0) * Global_262145.f_4388));
break;
}
if(func_334() && (func_333() || func_332())){
iVar0=0;
}
break;
case joaat("weapon_pistol50"):
switch (iParam1){
case joaat("component_pistol50_clip_01"):
iVar0=0;
break;
case joaat("component_pistol50_clip_02"):
iVar0=9500;
iVar0=floor((to_float(iVar0) * Global_262145.f_2897));
break;
case joaat("component_at_pi_flsh"):
iVar0=2000;
iVar0=floor((to_float(iVar0) * Global_262145.f_4353));
break;
case joaat("component_at_ar_supp_02"):
iVar0=12250;
iVar0=floor((to_float(iVar0) * Global_262145.f_4354));
break;
case joaat("component_pistol50_varmod_luxe"):
iVar0=Global_262145.f_11213;
iVar0=floor((to_float(iVar0) * Global_262145.f_4426));
break;
}
if(func_334() && (func_333() || func_332())){
iVar0=0;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (iParam1){
case joaat("component_sawnoffshotgun_varmod_luxe"):
iVar0=Global_262145.f_11216;
iVar0=floor((to_float(iVar0) * Global_262145.f_4428));
break;
}
break;
case joaat("weapon_knuckle"):
switch (iParam1){
case joaat("component_knuckle_varmod_pimp"):
iVar0=Global_262145.f_11540;
iVar0=floor((to_float(iVar0) * Global_262145.f_4433));
break;
case joaat("component_knuckle_varmod_ballas"):
iVar0=Global_262145.f_11541;
iVar0=floor((to_float(iVar0) * Global_262145.f_4434));
break;
case joaat("component_knuckle_varmod_dollar"):
iVar0=Global_262145.f_11542;
iVar0=floor((to_float(iVar0) * Global_262145.f_4435));
break;
case joaat("component_knuckle_varmod_diamond"):
iVar0=Global_262145.f_11543;
iVar0=floor((to_float(iVar0) * Global_262145.f_4436));
break;
case joaat("component_knuckle_varmod_hate"):
iVar0=Global_262145.f_11544;
iVar0=floor((to_float(iVar0) * Global_262145.f_4437));
break;
case joaat("component_knuckle_varmod_love"):
iVar0=Global_262145.f_11545;
iVar0=floor((to_float(iVar0) * Global_262145.f_4438));
break;
case joaat("component_knuckle_varmod_player"):
iVar0=Global_262145.f_11546;
iVar0=floor((to_float(iVar0) * Global_262145.f_4439));
break;
case joaat("component_knuckle_varmod_king"):
iVar0=Global_262145.f_11547;
iVar0=floor((to_float(iVar0) * Global_262145.f_4440));
break;
case joaat("component_knuckle_varmod_vagos"):
iVar0=Global_262145.f_11548;
iVar0=floor((to_float(iVar0) * Global_262145.f_4441));
break;
}
break;
case joaat("weapon_machinepistol"):
switch (iParam1){
case joaat("component_machinepistol_clip_01"):
iVar0=0;
break;
case joaat("component_machinepistol_clip_02"):
iVar0=Global_262145.f_11565;
iVar0=floor((to_float(iVar0) * Global_262145.f_4443));
break;
case joaat("component_machinepistol_clip_03"):
iVar0=Global_262145.f_16766;
break;
case joaat("component_at_pi_supp"):
iVar0=Global_262145.f_11566;
iVar0=floor((to_float(iVar0) * Global_262145.f_4444));
break;
}
break;
case joaat("weapon_switchblade"):
switch (iParam1){
case joaat("component_switchblade_varmod_base"):
iVar0=0;
break;
case joaat("component_switchblade_varmod_var1"):
iVar0=Global_262145.f_13449;
break;
case joaat("component_switchblade_varmod_var2"):
iVar0=Global_262145.f_13450;
break;
}
break;
case joaat("weapon_revolver"):
switch (iParam1){
case joaat("component_revolver_clip_01"):
iVar0=0;
break;
case joaat("component_revolver_varmod_boss"):
iVar0=Global_262145.f_13507;
break;
case joaat("component_revolver_varmod_goon"):
iVar0=Global_262145.f_13448;
break;
case joaat("component_gunrun_mk2_upgrade"):
iVar0=Global_262145.f_23116;
break;
}
break;
case joaat("weapon_compactrifle"):
switch (iParam1){
case joaat("component_compactrifle_clip_01"):
iVar0=0;
break;
case joaat("component_compactrifle_clip_02"):
iVar0=Global_262145.f_15242;
break;
case joaat("component_compactrifle_clip_03"):
iVar0=Global_262145.f_16763;
break;
}
break;
case joaat("weapon_dbshotgun"):
switch (iParam1){
case joaat("component_dbshotgun_clip_01"):
iVar0=0;
break;
}
break;
case joaat("weapon_minismg"):
switch (iParam1){
case joaat("component_minismg_clip_01"):
iVar0=0;
break;
case joaat("component_minismg_clip_02"):
iVar0=Global_262145.f_19222;
break;
}
break;
case joaat("weapon_combatpdw"):
switch (iParam1){
case joaat("component_combatpdw_clip_01"):
iVar0=0;
break;
case joaat("component_combatpdw_clip_02"):
iVar0=Global_262145.f_21255;
break;
case joaat("component_combatpdw_clip_03"):
iVar0=Global_262145.f_16765;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_21256;
break;
case joaat("component_at_scope_small"):
iVar0=Global_262145.f_21258;
break;
case joaat("component_at_ar_afgrip"):
iVar0=Global_262145.f_21257;
break;
}
break;
case joaat("weapon_assaultrifle_mk2"):
switch (iParam1){
case joaat("component_assaultrifle_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_assaultrifle_mk2_clip_02"):
iVar0=Global_262145.f_21379;
break;
case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
iVar0=Global_262145.f_21380;
break;
case joaat("component_assaultrifle_mk2_clip_fmj"):
iVar0=Global_262145.f_21381;
break;
case joaat("component_assaultrifle_mk2_clip_incendiary"):
iVar0=Global_262145.f_21382;
break;
case joaat("component_assaultrifle_mk2_clip_tracer"):
iVar0=Global_262145.f_21383;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_21384;
break;
case joaat("component_at_sights"):
iVar0=Global_262145.f_21385;
break;
case joaat("component_at_scope_macro_mk2"):
iVar0=Global_262145.f_21386;
break;
case joaat("component_at_scope_small_mk2"):
iVar0=Global_262145.f_21387;
break;
case joaat("component_at_scope_medium_mk2"):
iVar0=Global_262145.f_21388;
break;
case joaat("component_at_ar_supp_02"):
iVar0=Global_262145.f_21389;
break;
case joaat("component_at_muzzle_01"):
iVar0=Global_262145.f_21390;
break;
case joaat("component_at_muzzle_02"):
iVar0=Global_262145.f_21391;
break;
case joaat("component_at_muzzle_03"):
iVar0=Global_262145.f_21392;
break;
case joaat("component_at_muzzle_04"):
iVar0=Global_262145.f_21393;
break;
case joaat("component_at_muzzle_05"):
iVar0=Global_262145.f_21394;
break;
case joaat("component_at_muzzle_06"):
iVar0=Global_262145.f_21395;
break;
case joaat("component_at_muzzle_07"):
iVar0=Global_262145.f_21396;
break;
case joaat("component_at_ar_afgrip_02"):
iVar0=Global_262145.f_21397;
break;
case joaat("component_at_ar_barrel_01"):
iVar0=0;
break;
case joaat("component_at_ar_barrel_02"):
iVar0=Global_262145.f_21398;
break;
case joaat("component_assaultrifle_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_assaultrifle_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_assaultrifle_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_assaultrifle_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_assaultrifle_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_assaultrifle_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_assaultrifle_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_assaultrifle_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_assaultrifle_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_assaultrifle_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_assaultrifle_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_carbinerifle_mk2"):
switch (iParam1){
case joaat("component_carbinerifle_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_carbinerifle_mk2_clip_02"):
iVar0=Global_262145.f_21399;
break;
case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
iVar0=Global_262145.f_21400;
break;
case joaat("component_carbinerifle_mk2_clip_fmj"):
iVar0=Global_262145.f_21401;
break;
case joaat("component_carbinerifle_mk2_clip_incendiary"):
iVar0=Global_262145.f_21402;
break;
case joaat("component_carbinerifle_mk2_clip_tracer"):
iVar0=Global_262145.f_21403;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_21404;
break;
case joaat("component_at_sights"):
iVar0=Global_262145.f_21405;
break;
case joaat("component_at_scope_macro_mk2"):
iVar0=Global_262145.f_21406;
break;
case joaat("component_at_scope_small_mk2"):
iVar0=Global_262145.f_21407;
break;
case joaat("component_at_scope_medium_mk2"):
iVar0=Global_262145.f_21408;
break;
case joaat("component_at_ar_supp"):
iVar0=Global_262145.f_21409;
break;
case joaat("component_at_muzzle_01"):
iVar0=Global_262145.f_21410;
break;
case joaat("component_at_muzzle_02"):
iVar0=Global_262145.f_21411;
break;
case joaat("component_at_muzzle_03"):
iVar0=Global_262145.f_21412;
break;
case joaat("component_at_muzzle_04"):
iVar0=Global_262145.f_21413;
break;
case joaat("component_at_muzzle_05"):
iVar0=Global_262145.f_21414;
break;
case joaat("component_at_muzzle_06"):
iVar0=Global_262145.f_21415;
break;
case joaat("component_at_muzzle_07"):
iVar0=Global_262145.f_21416;
break;
case joaat("component_at_ar_afgrip_02"):
iVar0=Global_262145.f_21417;
break;
case joaat("component_at_cr_barrel_01"):
iVar0=0;
break;
case joaat("component_at_cr_barrel_02"):
iVar0=Global_262145.f_21418;
break;
case joaat("component_carbinerifle_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_carbinerifle_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_carbinerifle_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_carbinerifle_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_carbinerifle_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_carbinerifle_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_carbinerifle_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_carbinerifle_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_carbinerifle_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_carbinerifle_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_carbinerifle_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_combatmg_mk2"):
switch (iParam1){
case joaat("component_combatmg_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_combatmg_mk2_clip_02"):
iVar0=Global_262145.f_21419;
break;
case joaat("component_combatmg_mk2_clip_armorpiercing"):
iVar0=Global_262145.f_21420;
break;
case joaat("component_combatmg_mk2_clip_fmj"):
iVar0=Global_262145.f_21421;
break;
case joaat("component_combatmg_mk2_clip_incendiary"):
iVar0=Global_262145.f_21422;
break;
case joaat("component_combatmg_mk2_clip_tracer"):
iVar0=Global_262145.f_21423;
break;
case joaat("component_at_sights"):
iVar0=Global_262145.f_21424;
break;
case joaat("component_at_scope_macro_mk2"):
iVar0=Global_262145.f_21425;
break;
case joaat("component_at_scope_small_mk2"):
iVar0=Global_262145.f_21426;
break;
case joaat("component_at_scope_medium_mk2"):
iVar0=Global_262145.f_21427;
break;
case joaat("component_at_muzzle_01"):
iVar0=Global_262145.f_21428;
break;
case joaat("component_at_muzzle_02"):
iVar0=Global_262145.f_21429;
break;
case joaat("component_at_muzzle_03"):
iVar0=Global_262145.f_21430;
break;
case joaat("component_at_muzzle_04"):
iVar0=Global_262145.f_21431;
break;
case joaat("component_at_muzzle_05"):
iVar0=Global_262145.f_21432;
break;
case joaat("component_at_muzzle_06"):
iVar0=Global_262145.f_21433;
break;
case joaat("component_at_muzzle_07"):
iVar0=Global_262145.f_21434;
break;
case joaat("component_at_ar_afgrip_02"):
iVar0=Global_262145.f_21435;
break;
case joaat("component_at_mg_barrel_01"):
iVar0=0;
break;
case joaat("component_at_mg_barrel_02"):
iVar0=Global_262145.f_21436;
break;
case joaat("component_combatmg_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_combatmg_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_combatmg_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_combatmg_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_combatmg_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_combatmg_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_combatmg_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_combatmg_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_combatmg_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_combatmg_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_combatmg_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_heavysniper_mk2"):
switch (iParam1){
case joaat("component_heavysniper_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_heavysniper_mk2_clip_02"):
iVar0=Global_262145.f_21437;
break;
case joaat("component_heavysniper_mk2_clip_armorpiercing"):
iVar0=Global_262145.f_21438;
break;
case joaat("component_heavysniper_mk2_clip_fmj"):
iVar0=Global_262145.f_21440;
break;
case joaat("component_heavysniper_mk2_clip_incendiary"):
iVar0=Global_262145.f_21441;
break;
case joaat("component_heavysniper_mk2_clip_explosive"):
iVar0=Global_262145.f_21439;
break;
case joaat("component_at_scope_large_mk2"):
iVar0=Global_262145.f_21442;
break;
case joaat("component_at_scope_max"):
iVar0=0;
break;
case joaat("component_at_scope_nv"):
iVar0=Global_262145.f_21443;
break;
case joaat("component_at_scope_thermal"):
iVar0=Global_262145.f_21444;
break;
case joaat("component_at_sr_supp_03"):
iVar0=Global_262145.f_21445;
break;
case joaat("component_at_muzzle_08"):
iVar0=Global_262145.f_21446;
break;
case joaat("component_at_muzzle_09"):
iVar0=Global_262145.f_21447;
break;
case joaat("component_at_sr_barrel_01"):
iVar0=0;
break;
case joaat("component_at_sr_barrel_02"):
iVar0=Global_262145.f_21448;
break;
case joaat("component_heavysniper_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_heavysniper_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_heavysniper_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_heavysniper_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_heavysniper_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_heavysniper_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_heavysniper_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_heavysniper_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_heavysniper_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_heavysniper_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_heavysniper_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_pistol_mk2"):
switch (iParam1){
case joaat("component_pistol_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_pistol_mk2_clip_02"):
iVar0=Global_262145.f_21449;
break;
case joaat("component_pistol_mk2_clip_hollowpoint"):
iVar0=Global_262145.f_21451;
break;
case joaat("component_pistol_mk2_clip_fmj"):
iVar0=Global_262145.f_21450;
break;
case joaat("component_pistol_mk2_clip_incendiary"):
iVar0=Global_262145.f_21452;
break;
case joaat("component_pistol_mk2_clip_tracer"):
iVar0=Global_262145.f_21453;
break;
case joaat("component_at_pi_flsh_02"):
iVar0=Global_262145.f_21454;
break;
case joaat("component_at_pi_rail"):
iVar0=Global_262145.f_21455;
break;
case joaat("component_at_pi_supp_02"):
iVar0=Global_262145.f_21456;
break;
case joaat("component_at_pi_comp"):
iVar0=Global_262145.f_21457;
break;
case joaat("component_pistol_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_pistol_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_pistol_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_pistol_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_pistol_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_pistol_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_pistol_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_pistol_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_pistol_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_pistol_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_pistol_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
case joaat("component_pistol_mk2_varmod_xm3"):
iVar0=0;
break;
}
break;
case joaat("weapon_smg_mk2"):
switch (iParam1){
case joaat("component_smg_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_smg_mk2_clip_02"):
iVar0=Global_262145.f_21458;
break;
case joaat("component_smg_mk2_clip_hollowpoint"):
iVar0=Global_262145.f_21460;
break;
case joaat("component_smg_mk2_clip_fmj"):
iVar0=Global_262145.f_21459;
break;
case joaat("component_smg_mk2_clip_incendiary"):
iVar0=Global_262145.f_21461;
break;
case joaat("component_smg_mk2_clip_tracer"):
iVar0=Global_262145.f_21462;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_21463;
break;
case joaat("component_at_sights_smg"):
iVar0=Global_262145.f_21464;
break;
case joaat("component_at_scope_macro_02_smg_mk2"):
iVar0=Global_262145.f_21465;
break;
case joaat("component_at_scope_small_smg_mk2"):
iVar0=Global_262145.f_21466;
break;
case joaat("component_at_pi_supp"):
iVar0=Global_262145.f_21467;
break;
case joaat("component_at_muzzle_01"):
iVar0=Global_262145.f_21468;
break;
case joaat("component_at_muzzle_02"):
iVar0=Global_262145.f_21469;
break;
case joaat("component_at_muzzle_03"):
iVar0=Global_262145.f_21470;
break;
case joaat("component_at_muzzle_04"):
iVar0=Global_262145.f_21471;
break;
case joaat("component_at_muzzle_05"):
iVar0=Global_262145.f_21472;
break;
case joaat("component_at_muzzle_06"):
iVar0=Global_262145.f_21473;
break;
case joaat("component_at_muzzle_07"):
iVar0=Global_262145.f_21474;
break;
case joaat("component_at_sb_barrel_01"):
iVar0=0;
break;
case joaat("component_at_sb_barrel_02"):
iVar0=Global_262145.f_21475;
break;
case joaat("component_smg_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_smg_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_smg_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_smg_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_smg_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_smg_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_smg_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_smg_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_smg_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_smg_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_smg_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_pumpshotgun_mk2"):
switch (iParam1){
case joaat("component_pumpshotgun_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
iVar0=Global_262145.f_23145;
break;
case joaat("component_pumpshotgun_mk2_clip_explosive"):
iVar0=Global_262145.f_23146;
break;
case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
iVar0=Global_262145.f_23144;
break;
case joaat("component_pumpshotgun_mk2_clip_incendiary"):
iVar0=Global_262145.f_23143;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_23172;
break;
case joaat("component_at_sights"):
iVar0=Global_262145.f_23173;
break;
case joaat("component_at_scope_macro_mk2"):
iVar0=Global_262145.f_23174;
break;
case joaat("component_at_scope_small_mk2"):
iVar0=Global_262145.f_23175;
break;
case joaat("component_at_sr_supp_03"):
iVar0=Global_262145.f_23176;
break;
case joaat("component_at_muzzle_08"):
iVar0=Global_262145.f_23177;
break;
case joaat("component_pumpshotgun_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_pumpshotgun_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_pumpshotgun_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_pumpshotgun_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_pumpshotgun_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_pumpshotgun_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_pumpshotgun_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_pumpshotgun_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_pumpshotgun_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_pumpshotgun_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_pumpshotgun_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_specialcarbine_mk2"):
switch (iParam1){
case joaat("component_specialcarbine_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_specialcarbine_mk2_clip_02"):
iVar0=Global_262145.f_23147;
break;
case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
iVar0=Global_262145.f_23151;
break;
case joaat("component_specialcarbine_mk2_clip_fmj"):
iVar0=Global_262145.f_23149;
break;
case joaat("component_specialcarbine_mk2_clip_incendiary"):
iVar0=Global_262145.f_23150;
break;
case joaat("component_specialcarbine_mk2_clip_tracer"):
iVar0=Global_262145.f_23148;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_23178;
break;
case joaat("component_at_sights"):
iVar0=Global_262145.f_23179;
break;
case joaat("component_at_scope_macro_mk2"):
iVar0=Global_262145.f_23180;
break;
case joaat("component_at_scope_medium_mk2"):
iVar0=Global_262145.f_23181;
break;
case joaat("component_at_ar_supp_02"):
iVar0=Global_262145.f_23182;
break;
case joaat("component_at_muzzle_01"):
iVar0=Global_262145.f_23183;
break;
case joaat("component_at_muzzle_02"):
iVar0=Global_262145.f_23184;
break;
case joaat("component_at_muzzle_03"):
iVar0=Global_262145.f_23185;
break;
case joaat("component_at_muzzle_04"):
iVar0=Global_262145.f_23186;
break;
case joaat("component_at_muzzle_05"):
iVar0=Global_262145.f_23187;
break;
case joaat("component_at_muzzle_06"):
iVar0=Global_262145.f_23188;
break;
case joaat("component_at_muzzle_07"):
iVar0=Global_262145.f_23189;
break;
case joaat("component_at_ar_afgrip_02"):
iVar0=Global_262145.f_23190;
break;
case joaat("component_at_sc_barrel_01"):
iVar0=0;
break;
case joaat("component_at_sc_barrel_02"):
iVar0=Global_262145.f_23191;
break;
case joaat("component_specialcarbine_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_specialcarbine_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_specialcarbine_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_specialcarbine_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_specialcarbine_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_specialcarbine_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_specialcarbine_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_specialcarbine_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_specialcarbine_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_specialcarbine_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_specialcarbine_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_snspistol_mk2"):
switch (iParam1){
case joaat("component_snspistol_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_snspistol_mk2_clip_02"):
iVar0=Global_262145.f_24063;
break;
case joaat("component_snspistol_mk2_clip_fmj"):
iVar0=Global_262145.f_23167;
break;
case joaat("component_snspistol_mk2_clip_hollowpoint"):
iVar0=Global_262145.f_23169;
break;
case joaat("component_snspistol_mk2_clip_incendiary"):
iVar0=Global_262145.f_23168;
break;
case joaat("component_snspistol_mk2_clip_tracer"):
iVar0=Global_262145.f_23166;
break;
case joaat("component_at_pi_flsh_03"):
iVar0=Global_262145.f_23223;
break;
case joaat("component_at_pi_rail_02"):
iVar0=Global_262145.f_23224;
break;
case joaat("component_at_pi_supp_02"):
iVar0=Global_262145.f_23225;
break;
case joaat("component_at_pi_comp_02"):
iVar0=Global_262145.f_23226;
break;
case joaat("component_snspistol_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_snspistol_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_snspistol_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_snspistol_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_snspistol_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_snspistol_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_snspistol_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_snspistol_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_snspistol_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_snspistol_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_snspistol_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_marksmanrifle_mk2"):
switch (iParam1){
case joaat("component_marksmanrifle_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_marksmanrifle_mk2_clip_02"):
iVar0=Global_262145.f_23152;
break;
case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
iVar0=Global_262145.f_23156;
break;
case joaat("component_marksmanrifle_mk2_clip_fmj"):
iVar0=Global_262145.f_23154;
break;
case joaat("component_marksmanrifle_mk2_clip_incendiary"):
iVar0=Global_262145.f_23155;
break;
case joaat("component_marksmanrifle_mk2_clip_tracer"):
iVar0=Global_262145.f_23153;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_23192;
break;
case joaat("component_at_sights"):
iVar0=Global_262145.f_23193;
break;
case joaat("component_at_scope_medium_mk2"):
iVar0=Global_262145.f_23194;
break;
case joaat("component_at_scope_large_fixed_zoom_mk2"):
iVar0=0;
break;
case joaat("component_at_ar_supp"):
iVar0=Global_262145.f_23195;
break;
case joaat("component_at_muzzle_01"):
iVar0=Global_262145.f_23196;
break;
case joaat("component_at_muzzle_02"):
iVar0=Global_262145.f_23197;
break;
case joaat("component_at_muzzle_03"):
iVar0=Global_262145.f_23198;
break;
case joaat("component_at_muzzle_04"):
iVar0=Global_262145.f_23199;
break;
case joaat("component_at_muzzle_05"):
iVar0=Global_262145.f_23200;
break;
case joaat("component_at_muzzle_06"):
iVar0=Global_262145.f_23201;
break;
case joaat("component_at_muzzle_07"):
iVar0=Global_262145.f_23202;
break;
case joaat("component_at_ar_afgrip_02"):
iVar0=Global_262145.f_23203;
break;
case joaat("component_at_mrfl_barrel_01"):
iVar0=0;
break;
case joaat("component_at_mrfl_barrel_02"):
iVar0=Global_262145.f_23204;
break;
case joaat("component_marksmanrifle_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_marksmanrifle_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_marksmanrifle_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_marksmanrifle_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_marksmanrifle_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_marksmanrifle_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_marksmanrifle_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_marksmanrifle_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_marksmanrifle_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_marksmanrifle_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_marksmanrifle_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_revolver_mk2"):
switch (iParam1){
case joaat("component_revolver_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_revolver_mk2_clip_tracer"):
iVar0=Global_262145.f_23157;
break;
case joaat("component_revolver_mk2_clip_fmj"):
iVar0=Global_262145.f_23158;
break;
case joaat("component_revolver_mk2_clip_hollowpoint"):
iVar0=Global_262145.f_23160;
break;
case joaat("component_revolver_mk2_clip_incendiary"):
iVar0=Global_262145.f_23159;
break;
case joaat("component_at_sights"):
iVar0=Global_262145.f_23205;
break;
case joaat("component_at_scope_macro_mk2"):
iVar0=Global_262145.f_23206;
break;
case joaat("component_at_pi_flsh"):
iVar0=Global_262145.f_23207;
break;
case joaat("component_at_pi_comp_03"):
iVar0=Global_262145.f_23208;
break;
case joaat("component_revolver_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_revolver_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_revolver_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_revolver_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_revolver_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_revolver_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_revolver_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_revolver_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_revolver_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_revolver_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_revolver_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_bullpuprifle_mk2"):
switch (iParam1){
case joaat("component_bullpuprifle_mk2_clip_01"):
iVar0=0;
break;
case joaat("component_bullpuprifle_mk2_clip_02"):
iVar0=Global_262145.f_23161;
break;
case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
iVar0=Global_262145.f_23165;
break;
case joaat("component_bullpuprifle_mk2_clip_fmj"):
iVar0=Global_262145.f_23163;
break;
case joaat("component_bullpuprifle_mk2_clip_incendiary"):
iVar0=Global_262145.f_23164;
break;
case joaat("component_bullpuprifle_mk2_clip_tracer"):
iVar0=Global_262145.f_23162;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_23209;
break;
case joaat("component_at_sights"):
iVar0=Global_262145.f_23210;
break;
case joaat("component_at_scope_macro_02_mk2"):
iVar0=Global_262145.f_23211;
break;
case joaat("component_at_scope_small_mk2"):
iVar0=Global_262145.f_23212;
break;
case joaat("component_at_bp_barrel_01"):
iVar0=0;
break;
case joaat("component_at_bp_barrel_02"):
iVar0=Global_262145.f_23222;
break;
case joaat("component_at_ar_supp"):
iVar0=Global_262145.f_23213;
break;
case joaat("component_at_muzzle_01"):
iVar0=Global_262145.f_23214;
break;
case joaat("component_at_muzzle_02"):
iVar0=Global_262145.f_23215;
break;
case joaat("component_at_muzzle_03"):
iVar0=Global_262145.f_23216;
break;
case joaat("component_at_muzzle_04"):
iVar0=Global_262145.f_23217;
break;
case joaat("component_at_muzzle_05"):
iVar0=Global_262145.f_23218;
break;
case joaat("component_at_muzzle_06"):
iVar0=Global_262145.f_23219;
break;
case joaat("component_at_muzzle_07"):
iVar0=Global_262145.f_23220;
break;
case joaat("component_at_ar_afgrip_02"):
iVar0=Global_262145.f_23221;
break;
case joaat("component_bullpuprifle_mk2_camo"):
iVar0=Global_262145.f_21507;
break;
case joaat("component_bullpuprifle_mk2_camo_02"):
iVar0=Global_262145.f_21508;
break;
case joaat("component_bullpuprifle_mk2_camo_03"):
iVar0=Global_262145.f_21509;
break;
case joaat("component_bullpuprifle_mk2_camo_04"):
iVar0=Global_262145.f_21510;
break;
case joaat("component_bullpuprifle_mk2_camo_05"):
iVar0=Global_262145.f_21511;
break;
case joaat("component_bullpuprifle_mk2_camo_06"):
iVar0=Global_262145.f_21512;
break;
case joaat("component_bullpuprifle_mk2_camo_07"):
iVar0=Global_262145.f_21513;
break;
case joaat("component_bullpuprifle_mk2_camo_08"):
iVar0=Global_262145.f_21514;
break;
case joaat("component_bullpuprifle_mk2_camo_09"):
iVar0=Global_262145.f_21515;
break;
case joaat("component_bullpuprifle_mk2_camo_10"):
iVar0=Global_262145.f_21516;
break;
case joaat("component_bullpuprifle_mk2_camo_ind_01"):
iVar0=Global_262145.f_21517;
break;
}
break;
case joaat("weapon_raypistol"):
switch (iParam1){
case joaat("component_raypistol_varmod_xmas18"):
iVar0=0;
break;
}
break;
case joaat("weapon_ceramicpistol"):
switch (iParam1){
case joaat("component_ceramicpistol_clip_01"):
iVar0=0;
break;
case joaat("component_ceramicpistol_clip_02"):
iVar0=Global_262145.f_28904;
break;
case joaat("component_ceramicpistol_supp"):
iVar0=Global_262145.f_28905;
break;
}
break;
case joaat("weapon_combatshotgun"):
switch (iParam1){
case joaat("component_combatshotgun_clip_01"):
iVar0=0;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_31043;
break;
case joaat("component_at_ar_supp"):
iVar0=Global_262145.f_31044;
break;
}
break;
case joaat("weapon_gadgetpistol"):
switch (iParam1){
case joaat("component_gadgetpistol_clip_01"):
iVar0=0;
break;
}
break;
case joaat("weapon_militaryrifle"):
switch (iParam1){
case joaat("component_militaryrifle_clip_01"):
iVar0=Global_262145.f_31029;
break;
case joaat("component_militaryrifle_clip_02"):
iVar0=Global_262145.f_31030;
break;
case joaat("component_militaryrifle_sight_01"):
iVar0=Global_262145.f_31031;
break;
case joaat("component_at_scope_small"):
iVar0=Global_262145.f_31032;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_31033;
break;
case joaat("component_at_ar_supp"):
iVar0=Global_262145.f_31034;
break;
}
break;
case joaat("weapon_heavyrifle"):
switch (iParam1){
case joaat("component_heavyrifle_clip_01"):
iVar0=Global_262145.f_32185;
break;
case joaat("component_heavyrifle_clip_02"):
iVar0=Global_262145.f_32186;
break;
case joaat("component_heavyrifle_camo1"):
iVar0=Global_262145.f_32218;
break;
case joaat("component_at_ar_afgrip"):
iVar0=Global_262145.f_32191;
break;
case joaat("component_at_ar_flsh"):
iVar0=Global_262145.f_32189;
break;
case joaat("component_at_scope_medium"):
iVar0=Global_262145.f_32188;
break;
case joaat("component_at_ar_supp"):
iVar0=Global_262145.f_32190;
break;
case joaat("component_heavyrifle_sight_01"):
iVar0=Global_262145.f_32187;
break;
}
break;
case joaat("weapon_tacticalrifle"):
switch (iParam1){
case joaat("component_tacticalrifle_clip_01"):
iVar0=0;
break;
case joaat("component_tacticalrifle_clip_02"):
iVar0=Global_262145.f_33437;
break;
case joaat("component_at_ar_flsh_reh"):
iVar0=Global_262145.f_33439;
break;
case joaat("component_at_ar_supp_02"):
iVar0=Global_262145.f_33440;
break;
case joaat("component_at_ar_afgrip"):
iVar0=Global_262145.f_33438;
break;
}
break;
case joaat("weapon_knife"):
switch (iParam1){
case joaat("component_knife_varmod_xm3"):
iVar0=Global_262145.f_34353;
break;
case joaat("component_knife_varmod_xm3_01"):
iVar0=Global_262145.f_34357;
break;
case joaat("component_knife_varmod_xm3_02"):
iVar0=Global_262145.f_34354;
break;
case joaat("component_knife_varmod_xm3_03"):
iVar0=Global_262145.f_34355;
break;
case joaat("component_knife_varmod_xm3_04"):
iVar0=Global_262145.f_34358;
break;
case joaat("component_knife_varmod_xm3_05"):
iVar0=Global_262145.f_34356;
break;
case joaat("component_knife_varmod_xm3_06"):
iVar0=Global_262145.f_34360;
break;
case joaat("component_knife_varmod_xm3_07"):
iVar0=Global_262145.f_34359;
break;
case joaat("component_knife_varmod_xm3_08"):
iVar0=Global_262145.f_34361;
break;
case joaat("component_knife_varmod_xm3_09"):
iVar0=Global_262145.f_34362;
break;
}
break;
case joaat("weapon_bat"):
switch (iParam1){
case joaat("component_bat_varmod_xm3"):
iVar0=Global_262145.f_34343;
break;
case joaat("component_bat_varmod_xm3_01"):
iVar0=Global_262145.f_34344;
break;
case joaat("component_bat_varmod_xm3_02"):
iVar0=Global_262145.f_34346;
break;
case joaat("component_bat_varmod_xm3_03"):
iVar0=Global_262145.f_34347;
break;
case joaat("component_bat_varmod_xm3_04"):
iVar0=Global_262145.f_34348;
break;
case joaat("component_bat_varmod_xm3_05"):
iVar0=Global_262145.f_34349;
break;
case joaat("component_bat_varmod_xm3_06"):
iVar0=Global_262145.f_34350;
break;
case joaat("component_bat_varmod_xm3_07"):
iVar0=Global_262145.f_34351;
break;
case joaat("component_bat_varmod_xm3_08"):
iVar0=Global_262145.f_34352;
break;
case joaat("component_bat_varmod_xm3_09"):
iVar0=Global_262145.f_34345;
break;
}
break;
case joaat("weapon_pistolxm3"):
switch (iParam1){
case joaat("component_pistolxm3_clip_01"):
iVar0=0;
break;
case joaat("component_pistolxm3_supp"):
iVar0=Global_262145.f_34326;
break;
}
break;
case 350597077:
switch (iParam1){
case 943088878:
iVar0=Global_262145.f_35799;
break;
case 310778254:
iVar0=Global_262145.f_35800;
break;
case joaat("component_at_ar_supp_02"):
iVar0=Global_262145.f_35804;
break;
case joaat("component_at_scope_macro"):
iVar0=Global_262145.f_35802;
break;
}
break;
case joaat("weapon_rpg"):
switch (iParam1){
case -1240142720:
iVar0=0;
break;
}
break;
default:
iVar6=func_68(iParam0, &uVar8);
if(iVar6 !=-1){
iVar7=0;
while (iVar7 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar6)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar6, iVar7, &Var9)){
if(!func_65(Var9.f_3)){
if(Var9.f_3==iParam1){
fVar1=1f;
if(Var9.f_5==-1){
iVar0=-1;
}
else{
iVar0=Var9.f_5;
}}}
}
iVar7++;
}}
break;
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_328()){
StringCopy(&Var11, func_326(iParam1, iParam0), 16);
func_317(&sVar10, Var11, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_324(iParam0), func_323(iParam0), -1, 0, 0, 2);
if(NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar10)){
iVar0=NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar10), 1671640801, 1);
}}
if(iVar0 > 0){
fVar12=func_290(iParam0, &iVar0, fVar1);
if(fVar12 !=1f){
}}
return iVar0;
}


float func_290(int iParam0, int iParam1, float fParam2){
float fVar0;
float fVar1;
int iVar2;
fVar0=0f;
fVar1=0f;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_328()){
fVar1=(fVar1 + func_316());
fVar0=(1f - fVar1);
*iParam1=floor((to_float(*iParam1) * fVar0));
return fVar0;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
*iParam1=floor((to_float(*iParam1) * fParam2));
}
if(!Global_78689){
if(*iParam1 !=0){
iVar2=func_313(iParam0);
if(iVar2==3){
fVar1=0.1f;
}elseif(iVar2==2){
fVar1=0.15f;
}elseif(iVar2==1){
fVar1=0.25f;
}}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iLocal_63==1){
*iParam1=floor((to_float(*iParam1) * Global_262145.f_77));
fVar1=(fVar1 + (to_float(Global_262145.f_133) / 100f));
}
if(iLocal_63==0){
*iParam1=floor((to_float(*iParam1) * Global_262145.f_77));
if(func_291()){
fVar1=(fVar1 + (to_float(Global_262145.f_133) / 100f));
iLocal_63=1;
}else{
iLocal_63=-1;
}}
fVar1=(fVar1 + func_316());
}
fVar0=(1f - fVar1);
*iParam1=floor((to_float(*iParam1) * fVar0));
return fVar0;
}

int func_291(){
int iVar0;
int iVar1;
float fVar2;
if(MISC::IS_PC_VERSION()){
return 0;
}
if(func_310()){
if(func_295()){
iVar0=func_294();
iVar1=func_292();
fVar2=((to_float(iVar1) / to_float(iVar0)) * 100f);
if(fVar2 > IntToFloat(Global_262145.f_132) && iVar0 >=8){
return 1;
}}}
return 0;
}

int func_292(){
int iVar0;
iVar0=(iVar0 + func_293(joaat("mpply_friendly")));
iVar0=(iVar0 + func_293(joaat("mpply_helpful")));
return iVar0;
}

int func_293(int iParam0){
int iVar0;
var uVar1;
iVar0=iParam0;
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_294(){
int iVar0;
iVar0=(iVar0 + func_293(joaat("mpply_offensive_language")));
iVar0=(iVar0 + func_293(joaat("mpply_griefing")));
iVar0=(iVar0 + func_293(joaat("mpply_friendly")));
iVar0=(iVar0 + func_293(joaat("mpply_helpful")));
iVar0=(iVar0 + func_293(joaat("mpply_offensive_ugc")));
iVar0=(iVar0 + func_293(joaat("mpply_offensive_tagplate")));
iVar0=(iVar0 + func_293(joaat("mpply_exploits")));
iVar0=(iVar0 + func_293(joaat("mpply_vc_annoyingme")));
iVar0=(iVar0 + func_293(joaat("mpply_vc_hate")));
iVar0=(iVar0 + func_293(joaat("mpply_bad_crew_name")));
iVar0=(iVar0 + func_293(joaat("mpply_bad_crew_motto")));
iVar0=(iVar0 + func_293(joaat("mpply_bad_crew_status")));
iVar0=(iVar0 + func_293(joaat("mpply_bad_crew_emblem")));
iVar0=(iVar0 + func_293(joaat("mpply_playermade_title")));
iVar0=(iVar0 + func_293(joaat("mpply_playermade_desc")));
return iVar0;
}

int func_295(){
struct<7> Var0;
struct<7> Var1;
CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
Var1={
func_309(joaat("mpply_started_mp")) 
};
if(func_296(Var1, Var0, 7)){
return 1;
}
return 0;
}

int func_296(struct<7> Param0, struct<7> Param1, int iParam2){
int iVar0;
int iVar1;
iVar0=func_307(Param1);
iVar1=func_303(Param0, iParam2);
if(iVar1==-15){
return 0;
}
if(func_297(iVar0, iVar1)==1){
return 1;
}
return 0;
}

int func_297(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_302(iParam1) || !func_302(iParam0)){
return 1;
}
iVar0=func_109(iParam0);
iVar1=func_109(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_111(iParam0);
iVar1=func_111(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_301(iParam0);
iVar1=func_301(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_300(iParam0);
iVar1=func_300(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_299(iParam0);
iVar1=func_299(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_298(iParam0);
iVar1=func_298(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_298(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_299(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_300(int iParam0){
return shift_right(iParam0, 9) & 31;
}

int func_301(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_302(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_298(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_299(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_300(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_109(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_111(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_301(iParam0);
if(iVar5 < 1 || iVar5 > func_108(iVar4, iVar3)){
return 0;
}
return 1;
}


var func__303(struct<7> Param0, int iParam1){
var uVar0;
var uVar1;
var uVar2;
if(func_306(Param0)==0){
uVar0=func_307(Param0);
uVar1=uVar0;
func_304(&uVar1, 0, 0, 0, iParam1, 0, 0);
if(iParam1==0){
uVar1=uVar0;
}
return uVar1;
}
return uVar2;
}


void func_304(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_109(*uParam0);
iVar1=func_111(*uParam0);
iVar2=func_301(*uParam0);
iVar3=func_300(*uParam0);
iVar4=func_299(*uParam0);
iVar5=func_298(*uParam0);
if(((((iParam6==0 && iParam5==0) && iParam4==0) && iParam3==0) && iParam2==0) && iParam1==0){
return;
}
if(iParam1 < 0){
return;
}
if(iParam2 < 0){
return;
}
if(iParam3 < 0){
return;
}
if(iParam4 < 0){
return;
}
if(iParam5 < 0){
return;
}
if(iParam6 < 0){
return;
}
iVar5=(iVar5 + iParam1);
while (iVar5 >=60){
iParam2++;
iVar5=(iVar5 - 60);
}
iVar4=(iVar4 + iParam2);
while (iVar4 >=60){
iParam3++;
iVar4=(iVar4 - 60);
}
iVar3=(iVar3 + iParam3);
while (iVar3 >=24){
iParam4++;
iVar3=(iVar3 - 24);
}
iVar2=(iVar2 + iParam4);
iVar6=func_108(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_108(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_305(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_305(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_114(uParam0, iParam1);
func_113(uParam0, iParam2);
func_112(uParam0, iParam3);
func_106(uParam0, iParam5);
func_107(uParam0, iParam4);
func_105(uParam0, iParam6);
}

int func_306(struct<7> Param0){
if((((((Param0.f_0==0 && Param0.f_1==0) && Param0.f_2==0) && Param0.f_3==0) && Param0.f_4==0) && Param0.f_5==0) && Param0.f_6==0){
return 1;
}
return 0;
}


var func__307(struct<6> Param0, var uParam1){
var uVar0;
if(Param0.f_0 > 0){
func_105(&uVar0, Param0.f_0);
}
if(Param0.f_1 > 0){
func_106(&uVar0, func_308(Param0.f_1));
}
if(Param0.f_2 > 0){
func_107(&uVar0, Param0.f_2);
}
if(Param0.f_3 > 0){
func_112(&uVar0, Param0.f_3);
}
if(Param0.f_4 > 0){
func_113(&uVar0, Param0.f_4);
}
if(Param0.f_5 > 0){
func_114(&uVar0, Param0.f_5);
}
return uVar0;
}

int func_308(int iParam0){
if(iParam0 < 1){
return 0;
}
if(iParam0 > 12){
return 0;
}
switch (iParam0){
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 2;
break;
case 4:
return 3;
break;
case 5:
return 4;
break;
case 6:
return 5;
break;
case 7:
return 6;
break;
case 8:
return 7;
break;
case 9:
return 8;
break;
case 10:
return 9;
break;
case 11:
return 10;
break;
case 12:
return 11;
break;
}
return 0;
}


struct<7> func_309(int iParam0){
var uVar0;
struct<7> Var1;
struct<7> Var2;
uVar0=iParam0;
if(STATS::STAT_GET_DATE(uVar0, &Var2, 7, -1)){
return Var2;
}
return Var1;
}

int func_310(){
if(func_312() && func_311(0)){
return 1;
}
return 0;
}


var func__311(int iParam0){
return Global_1574538[iParam0];
}


var func__312(){
return func_311(func_55() + 1);
}

int func_313(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3[6];
bool bVar4;
iVar0=func_237();
if(iParam0==0 || !func_39(iVar0)){
return -1;
}
iVar1=7;
switch (iParam0){
case joaat("weapon_unarmed"):
break;
case joaat("gadget_parachute"):
break;
case joaat("weapon_microsmg"):
iVar1=1;
break;
case joaat("weapon_smg"):
iVar1=1;
break;
case joaat("weapon_sawnoffshotgun"):
iVar1=3;
break;
case joaat("weapon_pumpshotgun"):
iVar1=3;
break;
case joaat("weapon_assaultshotgun"):
iVar1=3;
break;
case joaat("weapon_assaultrifle"):
iVar1=2;
break;
case joaat("weapon_carbinerifle"):
iVar1=2;
break;
case joaat("weapon_advancedrifle"):
iVar1=2;
break;
case joaat("weapon_sniperrifle"):
break;
case joaat("weapon_heavysniper"):
break;
case joaat("weapon_mg"):
iVar1=4;
break;
case joaat("weapon_combatmg"):
iVar1=4;
break;
case joaat("weapon_rpg"):
break;
case joaat("weapon_grenadelauncher"):
break;
case joaat("weapon_minigun"):
iVar1=5;
break;
case joaat("weapon_knife"):
break;
case joaat("weapon_nightstick"):
break;
case joaat("weapon_petrolcan"):
break;
case joaat("weapon_stungun"):
break;
case joaat("weapon_appistol"):
iVar1=0;
break;
case joaat("weapon_combatpistol"):
iVar1=0;
break;
case joaat("weapon_pistol"):
iVar1=0;
break;
case joaat("weapon_smokegrenade"):
break;
case joaat("weapon_grenade"):
break;
case joaat("weapon_stickybomb"):
break;
}
if(iVar1 !=7){
switch (func_314(iVar1, iVar0)){
case 1:
return 3;
break;
case 2:
return 2;
break;
case 3:
return 1;
break;
}}else{
iVar3[0]=func_314(1, iVar0);
iVar3[1]=func_314(3, iVar0);
iVar3[2]=func_314(2, iVar0);
iVar3[3]=func_314(4, iVar0);
iVar3[4]=func_314(5, iVar0);
iVar3[5]=func_314(0, iVar0);
bVar4=false;
iVar2=0;
while (iVar2 < 6){
if(iVar3[iVar2] < 3){
bVar4=true;
}
iVar2++;
}
if(!bVar4){
return 1;
}
bVar4=false;
iVar2=0;
while (iVar2 < 6){
if(iVar3[iVar2] < 2){
bVar4=true;
}
iVar2++;
}
if(!bVar4){
return 2;
}
bVar4=false;
iVar2=0;
while (iVar2 < 6){
if(iVar3[iVar2] < 1){
bVar4=true;
}
iVar2++;
}
if(!bVar4){
return 3;
}}
return -1;
}

int func_314(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam0==0){
iVar0=0;
iVar1=1;
iVar2=2;
iVar3=-1;
}elseif(iParam0==1){
iVar0=3;
iVar1=4;
iVar2=5;
iVar3=-1;
}elseif(iParam0==2){
iVar0=9;
iVar1=10;
iVar2=11;
iVar3=-1;
}elseif(iParam0==3){
iVar0=6;
iVar1=7;
iVar2=8;
iVar3=-1;
}elseif(iParam0==4){
iVar0=12;
iVar1=13;
iVar2=14;
iVar3=-1;
}elseif(iParam0==5){
iVar0=15;
iVar1=16;
iVar2=17;
iVar3=-1;
}elseif(iParam0==6){
iVar0=18;
iVar1=19;
iVar2=20;
iVar3=21;
}else{
return 0;
}
iVar4=func_315(iVar0, iParam1);
if(func_315(iVar1, iParam1) < iVar4){
iVar4=func_315(iVar1, iParam1);
}
if(func_315(iVar2, iParam1) < iVar4){
iVar4=func_315(iVar2, iParam1);
}
if(iVar3 !=-1){
if(func_315(iVar3, iParam1) < iVar4){
iVar4=func_315(iVar3, iParam1);
}}
return iVar4;
}

int func_315(int iParam0, int iParam1){
return Global_113810.f_19150[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}


float func_316(){
return Global_100885.f_2096;
}


void func_317(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12){
switch (MISC::GET_HASH_KEY(&cParam1)){
case 64715401:
case joaat("GSA_TYPE_R"):
StringCopy(&cParam1, "GSA_TYPE_R", 16);
break;
case -414529079:
case joaat("GSA_TYPE_C"):
StringCopy(&cParam1, "GSA_TYPE_C", 16);
break;
case 336264847:
case joaat("GSA_TYPE_RO"):
StringCopy(&cParam1, "GSA_TYPE_RO", 16);
break;
case 531395379:
case joaat("GSA_TYPE_CH"):
StringCopy(&cParam1, "GSA_TYPE_CH", 16);
break;
case 1034118160:
case joaat("GSA_TYPE_G"):
StringCopy(&cParam1, "GSA_TYPE_G", 16);
break;
case -218834291:
case joaat("GSA_TYPE_B"):
StringCopy(&cParam1, "GSA_TYPE_B", 16);
break;
case 1779531303:
case joaat("GSA_TYPE_FW"):
StringCopy(&cParam1, "GSA_TYPE_FW", 16);
break;
}
StringCopy(sParam0, "", 64);
switch (iParam5){
case 0:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_HA_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
break;
case 1:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_CL_", 64);
if(iParam6==12){
StringConCat(sParam0, "OUTFIT_", 64);
}
StringConCat(sParam0, &cParam1, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam9 !=-1){
StringConCat(sParam0, "_p", 64);
StringIntConCat(sParam0, iParam9, 64);
}
break;
case 2:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_TA_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
break;
case 3:
StringConCat(sParam0, "WP_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
break;
case 4:
if(iParam4==Global_75777){
StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
}elseif(iParam4==Global_75778){
StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
}elseif(iParam4==Global_75779){
StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
}elseif(iParam4==Global_75780){
StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
}elseif(iParam4==Global_75781){
StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
}elseif(iParam4==func_322()){
StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
}elseif(iParam4==func_321()){
if(iParam6==40){
StringCopy(sParam0, "VEU_BRICKADE2_t0_v0", 64);
}elseif(iParam6==2){
StringCopy(sParam0, "VE_BRICKADE2_t2_v38", 64);
}elseif(iParam6==1){
StringCopy(sParam0, "VE_BRICKADE2_t1_v38", 64);
}else{
StringCopy(sParam0, "VE_BRICKADE2_t0_v38", 64);
}}elseif(iParam4==func_320()){
if(iParam6==1){
StringCopy(sParam0, "VE_MANCHEZ3_t1_v4", 64);
}else{
StringCopy(sParam0, "VE_MANCHEZ3_t0_v4", 64);
}}elseif(iParam4==-426933872){
if(iParam6==40){
if(iParam12==61){
StringCopy(sParam0, "VEU_AVENGER3_t0_v0", 64);
}elseif(iParam12==103){
if(!func_318()){
StringCopy(sParam0, "VEU_AVENGER3_t1_v0", 64);
}
else{
StringCopy(sParam0, "VEU_AVENGER3_t1_v1", 64);
}}}else{
StringCopy(sParam0, "VE_AVENGER_t0_v33", 64);
}}elseif(iParam4==0){
StringConCat(sParam0, "VEM_", 64);
if(iParam6==24 || iParam6==25){
if(iParam8==1){
StringConCat(sParam0, "COLOUR_1_", 64);
}elseif(iParam8==2){
StringConCat(sParam0, "COLOUR_2_", 64);
}elseif(iParam8==3){
StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
}
if(iParam9==5){
StringConCat(sParam0, "MCT_CHROME_", 64);
}elseif(iParam9==1){
StringConCat(sParam0, "MCT_CLASSIC_", 64);
}elseif(iParam9==0){
StringConCat(sParam0, "MCT_METALLIC_", 64);
}elseif(iParam9==4){
StringConCat(sParam0, "MCT_METALS_", 64);
}elseif(iParam9==3){
StringConCat(sParam0, "MCT_MATTE_", 64);
}elseif(iParam9==2){
StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
}elseif(iParam9==7){
StringConCat(sParam0, "MCT_NONE_", 64);
}
iParam8=-1;
}elseif(iParam6==38){
StringConCat(sParam0, "COLOUR_5_", 64);
}elseif(iParam6==65){
StringConCat(sParam0, "COLOUR_6_", 64);
}
StringConCat(sParam0, &cParam1, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
}elseif(iParam6==22){
StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1)==-515263000){
return;
}
StringConCat(sParam0, "VEM_INSURANCE_", 64);
StringConCat(sParam0, &cParam1, 64);
if(!bParam10){
switch (iParam4){
case joaat("dubsta2"):
case joaat("cavalcade2"):
case joaat("mesa2"):
case joaat("rapidgt2"):
case joaat("emperor2"):
case joaat("cargobob2"):
StringConCat(sParam0, "2", 64);
break;
case joaat("mesa3"):
case joaat("emperor3"):
case joaat("burrito3"):
case joaat("mule3"):
StringConCat(sParam0, "3", 64);
break;
case joaat("tornado4"):
StringConCat(sParam0, "4", 64);
break;
}}}elseif(iParam6==40){
switch (iParam4){
case joaat("fcr2"):
StringCopy(&cParam1, "FCR2", 16);
break;
case joaat("diablous2"):
StringCopy(&cParam1, "DIABLOUS2", 16);
break;
case joaat("comet3"):
StringCopy(&cParam1, "COMET3", 16);
break;
default:
StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cParam1)){
return;
}
break;
}
StringConCat(sParam0, "VEU_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t0_v", 64);
StringIntConCat(sParam0, iParam7, 64);
}else{
StringConCat(sParam0, "VE_", 64);
StringConCat(sParam0, &cParam1, 64);
if(!bParam10){
switch (iParam4){
case joaat("dubsta2"):
case joaat("cavalcade2"):
case joaat("mesa2"):
case joaat("rapidgt2"):
case joaat("emperor2"):
case joaat("cargobob2"):
StringConCat(sParam0, "2", 64);
break;
case joaat("mesa3"):
case joaat("emperor3"):
case joaat("burrito3"):
case joaat("mule3"):
StringConCat(sParam0, "3", 64);
break;
case joaat("tornado4"):
StringConCat(sParam0, "4", 64);
break;
}}
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam9 !=-1){
StringConCat(sParam0, "_p", 64);
StringIntConCat(sParam0, iParam9, 64);
}}
break;
}
if(bParam11){
StringConCat(sParam0, "_CESP", 64);
}}


bool func_318(){
return func_319();
}


bool func_319(){
return Global_1586488[189 /*142*/].f_66==joaat("thruster");
}

int func_320(){
return joaat("manchez3");
}

int func_321(){
return joaat("brickade2");
}

int func_322(){
return joaat("kosatka");
}

int func_323(int iParam0){
switch (iParam0){
case joaat("weapon_pistol_mk2"):
case joaat("weapon_smg_mk2"):
case joaat("weapon_assaultrifle_mk2"):
case joaat("weapon_carbinerifle_mk2"):
case joaat("weapon_combatmg_mk2"):
case joaat("weapon_heavysniper_mk2"):
case joaat("weapon_pumpshotgun_mk2"):
case joaat("weapon_specialcarbine_mk2"):
case joaat("weapon_snspistol_mk2"):
case joaat("weapon_marksmanrifle_mk2"):
case joaat("weapon_revolver_mk2"):
case joaat("weapon_bullpuprifle_mk2"):
return 2;
break;
}
return -1;
}

int func_324(int iParam0){
return func_325(iParam0);
}

int func_325(int iParam0){
switch (iParam0){
case joaat("weapon_unarmed"):
return 0;
break;
case joaat("weapon_pistol"):
return 1;
break;
case joaat("weapon_combatpistol"):
return 2;
break;
case joaat("weapon_appistol"):
return 3;
break;
case joaat("weapon_pistol50"):
return 4;
break;
case joaat("weapon_smg"):
return 5;
break;
case joaat("weapon_assaultsmg"):
return 6;
break;
case joaat("weapon_microsmg"):
return 7;
break;
case joaat("weapon_assaultrifle"):
return 8;
break;
case joaat("weapon_carbinerifle"):
return 9;
break;
case joaat("weapon_advancedrifle"):
return 11;
break;
case joaat("weapon_mg"):
return 12;
break;
case joaat("weapon_combatmg"):
return 13;
break;
case -572349828:
return 14;
break;
case joaat("weapon_stickybomb"):
return 15;
break;
case joaat("weapon_grenade"):
return 16;
break;
case joaat("weapon_smokegrenade"):
return 17;
break;
case joaat("weapon_remotesniper"):
return 18;
break;
case 392730790:
return 19;
break;
case joaat("weapon_sniperrifle"):
return 20;
break;
case joaat("weapon_heavysniper"):
return 21;
break;
case joaat("weapon_pumpshotgun"):
return 22;
break;
case joaat("weapon_bullpupshotgun"):
return 23;
break;
case joaat("weapon_assaultshotgun"):
return 24;
break;
case joaat("weapon_sawnoffshotgun"):
return 25;
break;
case joaat("weapon_grenadelauncher"):
return 26;
break;
case joaat("weapon_rpg"):
return 27;
break;
case joaat("weapon_minigun"):
return 28;
break;
case -344484024:
return 29;
break;
case -1887867191:
return 30;
break;
case joaat("weapon_stungun"):
return 31;
break;
case -837150131:
return 32;
break;
case joaat("gadget_parachute"):
return 33;
break;
case joaat("weapon_knife"):
return 34;
break;
case joaat("weapon_nightstick"):
return 35;
break;
case joaat("weapon_hammer"):
return 36;
break;
case joaat("weapon_bat"):
return 37;
break;
case joaat("weapon_crowbar"):
return 38;
break;
case joaat("weapon_golfclub"):
return 39;
break;
case joaat("weapon_grenadelauncher_smoke"):
return 40;
break;
case joaat("weapon_molotov"):
return 41;
break;
case joaat("weapon_fireextinguisher"):
return 42;
break;
case joaat("weapon_petrolcan"):
return 43;
break;
case joaat("weapon_digiscanner"):
return 44;
break;
case joaat("weapon_bottle"):
return 45;
break;
case joaat("weapon_specialcarbine"):
return 46;
break;
case joaat("weapon_snspistol"):
return 47;
break;
case joaat("weapon_heavypistol"):
return 49;
break;
case joaat("weapon_bullpuprifle"):
return 48;
break;
case joaat("weapon_gusenberg"):
return 50;
break;
case joaat("weapon_dagger"):
return 51;
break;
case joaat("weapon_vintagepistol"):
return 52;
break;
case joaat("weapon_flaregun"):
return 57;
break;
case joaat("weapon_musket"):
return 53;
break;
case joaat("weapon_firework"):
return 54;
break;
case joaat("weapon_marksmanrifle"):
return 56;
break;
case joaat("weapon_heavyshotgun"):
return 55;
break;
case joaat("weapon_proxmine"):
return 60;
break;
case joaat("weapon_hominglauncher"):
return 61;
break;
case joaat("weapon_hatchet"):
return 58;
break;
case joaat("weapon_railgun"):
return 59;
break;
case joaat("weapon_combatpdw"):
return 64;
break;
case joaat("weapon_knuckle"):
return 62;
break;
case joaat("weapon_marksmanpistol"):
return 63;
break;
case joaat("weapon_machete"):
return 65;
break;
case joaat("weapon_machinepistol"):
return 68;
break;
case joaat("weapon_dbshotgun"):
return 66;
break;
case joaat("weapon_compactrifle"):
return 67;
break;
case joaat("weapon_flashlight"):
return 69;
break;
case joaat("weapon_revolver"):
return 70;
break;
case joaat("weapon_switchblade"):
return 71;
break;
case joaat("weapon_autoshotgun"):
return 72;
break;
case joaat("weapon_minismg"):
return 73;
break;
case joaat("weapon_compactlauncher"):
return 74;
break;
case joaat("weapon_battleaxe"):
return 75;
break;
case joaat("weapon_pipebomb"):
return 76;
break;
case joaat("weapon_poolcue"):
return 77;
break;
case joaat("weapon_wrench"):
return 78;
break;
case joaat("weapon_assaultrifle_mk2"):
return 8;
break;
case joaat("weapon_carbinerifle_mk2"):
return 9;
break;
case joaat("weapon_combatmg_mk2"):
return 13;
break;
case joaat("weapon_heavysniper_mk2"):
return 21;
break;
case joaat("weapon_pistol_mk2"):
return 1;
break;
case joaat("weapon_smg_mk2"):
return 5;
break;
case joaat("weapon_pumpshotgun_mk2"):
return 22;
break;
case joaat("weapon_specialcarbine_mk2"):
return 46;
break;
case joaat("weapon_snspistol_mk2"):
return 47;
break;
case joaat("weapon_marksmanrifle_mk2"):
return 56;
break;
case joaat("weapon_revolver_mk2"):
return 70;
break;
case joaat("weapon_bullpuprifle_mk2"):
return 48;
break;
case joaat("weapon_doubleaction"):
return 79;
break;
case joaat("weapon_stone_hatchet"):
return 80;
break;
case joaat("weapon_raypistol"):
return 81;
break;
case joaat("weapon_raycarbine"):
return 82;
break;
case joaat("weapon_rayminigun"):
return 83;
break;
case joaat("weapon_navyrevolver"):
return 84;
break;
case joaat("weapon_ceramicpistol"):
return 85;
break;
case joaat("weapon_combatshotgun"):
return 86;
break;
case joaat("weapon_militaryrifle"):
return 88;
break;
case joaat("weapon_gadgetpistol"):
return 87;
break;
case joaat("weapon_heavyrifle"):
return 10;
break;
case joaat("weapon_emplauncher"):
return 89;
break;
case joaat("weapon_fertilizercan"):
return 90;
break;
case joaat("weapon_stungun_mp"):
return 91;
break;
case joaat("weapon_metaldetector"):
return 92;
break;
case joaat("weapon_tacticalrifle"):
return 93;
break;
case joaat("weapon_precisionrifle"):
return 94;
break;
case joaat("weapon_pistolxm3"):
return 95;
break;
case joaat("weapon_candycane"):
return 96;
break;
case joaat("weapon_railgunxm3"):
return 97;
break;
case 350597077:
return 98;
break;
}
return 0;
}


char* func_326(int iParam0, int iParam1){
int iVar0;
int iVar1;
var uVar2;
struct<7> Var3;
if(iParam1==joaat("weapon_knuckle")){
switch (iParam0){
case joaat("component_knuckle_varmod_base"):
return "WT_KNUCKLE";
break;
case joaat("component_knuckle_varmod_pimp"):
return "WCT_KNUCK_02";
break;
case joaat("component_knuckle_varmod_ballas"):
return "WCT_KNUCK_BG";
break;
case joaat("component_knuckle_varmod_dollar"):
return "WCT_KNUCK_DLR";
break;
case joaat("component_knuckle_varmod_diamond"):
return "WCT_KNUCK_DMD";
break;
case joaat("component_knuckle_varmod_hate"):
return "WCT_KNUCK_HT";
break;
case joaat("component_knuckle_varmod_love"):
return "WCT_KNUCK_LV";
break;
case joaat("component_knuckle_varmod_player"):
return "WCT_KNUCK_PC";
break;
case joaat("component_knuckle_varmod_king"):
return "WCT_KNUCK_SLG";
break;
case joaat("component_knuckle_varmod_vagos"):
return "WCT_KNUCK_VG";
break;
}}elseif(iParam1==joaat("weapon_bat")){
switch (iParam0){
case joaat("component_bat_varmod_xm3"):
return "WCT_BAT_XM3";
break;
case joaat("component_bat_varmod_xm3_01"):
return "WCT_BAT_XM301";
break;
case joaat("component_bat_varmod_xm3_02"):
return "WCT_BAT_XM302";
break;
case joaat("component_bat_varmod_xm3_03"):
return "WCT_BAT_XM303";
break;
case joaat("component_bat_varmod_xm3_04"):
return "WCT_BAT_XM304";
break;
case joaat("component_bat_varmod_xm3_05"):
return "WCT_BAT_XM305";
break;
case joaat("component_bat_varmod_xm3_06"):
return "WCT_BAT_XM306";
break;
case joaat("component_bat_varmod_xm3_07"):
return "WCT_BAT_XM307";
break;
case joaat("component_bat_varmod_xm3_08"):
return "WCT_BAT_XM308";
break;
case joaat("component_bat_varmod_xm3_09"):
return "WCT_BAT_XM309";
break;
}}elseif(iParam1==joaat("weapon_knife")){
switch (iParam0){
case joaat("component_knife_varmod_xm3"):
return "WCT_KNIFE_XM3";
break;
case joaat("component_knife_varmod_xm3_01"):
return "WCT_KNIFE_XM301";
break;
case joaat("component_knife_varmod_xm3_02"):
return "WCT_KNIFE_XM302";
break;
case joaat("component_knife_varmod_xm3_03"):
return "WCT_KNIFE_XM303";
break;
case joaat("component_knife_varmod_xm3_04"):
return "WCT_KNIFE_XM304";
break;
case joaat("component_knife_varmod_xm3_05"):
return "WCT_KNIFE_XM305";
break;
case joaat("component_knife_varmod_xm3_06"):
return "WCT_KNIFE_XM306";
break;
case joaat("component_knife_varmod_xm3_07"):
return "WCT_KNIFE_XM307";
break;
case joaat("component_knife_varmod_xm3_08"):
return "WCT_KNIFE_XM308";
break;
case joaat("component_knife_varmod_xm3_09"):
return "WCT_KNIFE_XM309";
break;
}}
switch (iParam0){
case 0:
return "WCT_NONE";
break;
case joaat("component_at_railcover_01"):
return "WCT_RAIL";
break;
case joaat("component_at_ar_afgrip"):
return "WCT_GRIP";
break;
case joaat("component_at_pi_flsh"):
return "WCT_FLASH";
break;
case joaat("component_at_ar_flsh"):
return "WCT_FLASH";
break;
case joaat("component_at_scope_macro"):
return "WCT_SCOPE_MAC";
break;
case joaat("component_at_scope_macro_02"):
return "WCT_SCOPE_MAC";
break;
case joaat("component_at_scope_small"):
return "WCT_SCOPE_SML";
break;
case joaat("component_at_scope_small_02"):
return "WCT_SCOPE_SML";
break;
case joaat("component_at_scope_medium"):
return "WCT_SCOPE_MED";
break;
case joaat("component_at_scope_large"):
return "WCT_SCOPE_LRG";
break;
case joaat("component_at_scope_max"):
return "WCT_SCOPE_MAX";
break;
case joaat("component_at_pi_supp"):
return "WCT_SUPP";
break;
case joaat("component_at_ar_supp"):
return "WCT_SUPP";
break;
case joaat("component_at_ar_supp_02"):
return "WCT_SUPP";
break;
case joaat("component_at_sr_supp"):
return "WCT_SUPP";
break;
case joaat("component_pistol_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_pistol_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_combatpistol_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_combatpistol_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_appistol_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_appistol_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_microsmg_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_microsmg_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_smg_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_smg_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_assaultrifle_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_assaultrifle_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_carbinerifle_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_carbinerifle_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_advancedrifle_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_advancedrifle_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_mg_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_mg_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_combatmg_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_combatmg_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_assaultshotgun_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_assaultshotgun_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_sniperrifle_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_heavysniper_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_minigun_clip_01"):
return "WCT_CLIP2";
break;
case joaat("component_assaultsmg_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_assaultsmg_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_pistol50_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_pistol50_clip_02"):
return "WCT_CLIP2";
break;
case 195735895:
return "WCT_CLIP1";
break;
case -890514874:
return "WCT_CLIP1";
break;
case -507117574:
return "WCT_CLIP2";
break;
case -124428919:
return "WCT_CLIP1";
break;
case 1048471894:
return "WCT_CLIP2";
break;
case joaat("component_snspistol_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_snspistol_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_vintagepistol_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_vintagepistol_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_heavyshotgun_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_marksmanrifle_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_heavyshotgun_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_marksmanrifle_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_tacticalrifle_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_tacticalrifle_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_at_scope_large_fixed_zoom"):
return "WCT_SCOPE_LRG";
break;
case joaat("component_at_pi_supp_02"):
return "WCT_SUPP";
break;
case joaat("component_combatpdw_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_combatpdw_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_marksmanpistol_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_machinepistol_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_machinepistol_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_assaultrifle_varmod_luxe"):
return "WCT_VAR_GOLD";
break;
case joaat("component_advancedrifle_varmod_luxe"):
return "WCT_VAR_METAL";
break;
case joaat("component_carbinerifle_varmod_luxe"):
return "WCT_VAR_GOLD";
break;
case joaat("component_appistol_varmod_luxe"):
return "WCT_VAR_METAL";
break;
case joaat("component_pistol_varmod_luxe"):
return "WCT_VAR_GOLD";
break;
case joaat("component_pistol50_varmod_luxe"):
return "WCT_VAR_SIL";
break;
case joaat("component_heavypistol_varmod_luxe"):
return "WCT_VAR_WOOD";
break;
case joaat("component_smg_varmod_luxe"):
return "WCT_VAR_GOLD";
break;
case joaat("component_microsmg_varmod_luxe"):
return "WCT_VAR_GOLD";
break;
case joaat("component_sawnoffshotgun_varmod_luxe"):
return "WCT_VAR_METAL";
break;
case joaat("component_sniperrifle_varmod_luxe"):
return "WCT_VAR_WOOD";
break;
case joaat("component_marksmanrifle_varmod_luxe"):
return "WCT_VAR_GOLD";
break;
case joaat("component_assaultsmg_varmod_lowrider"):
return "WCT_VAR_GOLD";
break;
case joaat("component_bullpuprifle_varmod_low"):
return "WCT_VAR_METAL";
break;
case joaat("component_combatmg_varmod_lowrider"):
return "WCT_VAR_ETCHM";
break;
case joaat("component_combatpistol_varmod_lowrider"):
return "WCT_VAR_GOLD";
break;
case joaat("component_mg_varmod_lowrider"):
return "WCT_VAR_GOLD";
break;
case joaat("component_pumpshotgun_varmod_lowrider"):
return "WCT_VAR_GOLD";
break;
case joaat("component_snspistol_varmod_lowrider"):
return "WCT_VAR_WOOD";
break;
case joaat("component_specialcarbine_varmod_lowrider"):
return "WCT_VAR_ETCHM";
break;
case joaat("component_switchblade_varmod_base"):
return "WCT_SB_BASE";
break;
case joaat("component_switchblade_varmod_var1"):
return "WCT_SB_VAR1";
break;
case joaat("component_switchblade_varmod_var2"):
return "WCT_SB_VAR2";
break;
case joaat("component_revolver_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_revolver_varmod_boss"):
return "WCT_REV_VARB";
break;
case joaat("component_revolver_varmod_goon"):
return "WCT_REV_VARG";
break;
case joaat("component_smg_clip_03"):
return "WCT_CLIP_DRM";
break;
case joaat("component_carbinerifle_clip_03"):
return "WCT_CLIP_BOX";
break;
case joaat("component_assaultrifle_clip_03"):
return "WCT_CLIP_DRM";
break;
case joaat("component_heavyshotgun_clip_03"):
return "WCT_CLIP_DRM";
break;
case joaat("component_gunrun_mk2_upgrade"):
return "WCT_VAR_GUN";
break;
case joaat("component_marksmanrifle_mk2_camo_ind_01"):
return "WCT_CAMO_IND";
break;
case joaat("component_snspistol_mk2_camo_ind_01"):
return "WCT_CAMO_IND";
break;
case joaat("component_snspistol_mk2_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_at_scope_macro_02_mk2"):
return "WCT_SCOPE_MAC2";
break;
case joaat("component_at_scope_small_mk2"):
return "WCT_SCOPE_SML2";
break;
case joaat("component_raypistol_varmod_xmas18"):
return "WCT_VAR_RAY18";
break;
case joaat("component_ceramicpistol_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_ceramicpistol_clip_02"):
return "WCT_CLIP2";
break;
case joaat("component_ceramicpistol_supp"):
return "WCT_SUPP";
break;
case joaat("component_heavyrifle_camo1"):
return "WCT_VAR_FAM";
break;
case joaat("component_microsmg_varmod_security"):
return "WCT_VAR_WEED";
break;
case joaat("component_appistol_varmod_security"):
return "WCT_VAR_STUD";
break;
case joaat("component_pumpshotgun_varmod_security"):
return "WCT_VAR_BONE";
break;
case joaat("component_pistol_mk2_varmod_xm3"):
return "WCT_PISTMK2_XM3";
break;
case joaat("component_microsmg_varmod_xm3"):
return "WCT_MSMG_XM3";
break;
case joaat("component_pumpshotgun_varmod_xm3"):
return "WCT_PUMPSHT_XM3";
break;
case joaat("component_pistolxm3_clip_01"):
return "WCT_CLIP1";
break;
case joaat("component_pistolxm3_supp"):
return "WCT_SUPP";
break;
case 1694268374:
return "WCT_MSMGFRN_VAR";
break;
case 1605520746:
return "WCT_CRBNMIC_VAR";
break;
case -1240142720:
return "WCT_RPGTVR_VAR";
break;
case 943088878:
return "WCT_CLIP1";
break;
case 310778254:
return "WCT_CLIP2";
break;
default:
if(iParam1 !=0){
iVar0=func_68(iParam1, &uVar2);
if(iVar0 !=-1){
iVar1=0;
while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3)){
if(Var3.f_3==iParam0){
return func_327(&(Var3.f_6));
}
}
iVar1++;
}}}
break;
}
return "WCT_INVALID";
}


var func__327(var uParam0){
return uParam0;
}

int func_328(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_329()){
return 1;
}
return 0;
}

int func_329(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_330(int iParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (iParam0){
case joaat("component_assaultrifle_clip_03"):
case joaat("component_carbinerifle_clip_03"):
case joaat("component_combatpdw_clip_03"):
case joaat("component_compactrifle_clip_03"):
case joaat("component_heavyshotgun_clip_03"):
case joaat("component_machinepistol_clip_03"):
case joaat("component_smg_clip_03"):
case joaat("component_specialcarbine_clip_03"):
return 0;
default:}}elseif(func_331(iParam0)){
return Global_262145.f_21368;
}
return 1;
}

int func_331(int iParam0){
switch (iParam0){
case joaat("component_pistol_mk2_camo_ind_01"):
case joaat("component_smg_mk2_camo_ind_01"):
case joaat("component_heavysniper_mk2_camo_ind_01"):
case joaat("component_combatmg_mk2_camo_ind_01"):
case joaat("component_assaultrifle_mk2_camo_ind_01"):
case joaat("component_carbinerifle_mk2_camo_ind_01"):
case joaat("component_pumpshotgun_mk2_camo_ind_01"):
case joaat("component_specialcarbine_mk2_camo_ind_01"):
case joaat("component_snspistol_mk2_camo_ind_01"):
case joaat("component_marksmanrifle_mk2_camo_ind_01"):
case joaat("component_revolver_mk2_camo_ind_01"):
case joaat("component_bullpuprifle_mk2_camo_ind_01"):
return 1;
break;
}
return 0;
}

int func_332(){
var uVar0;
var uVar1;
int iVar2;
var uVar3;
if(MISC::IS_BIT_SET(Global_25, 6)){
if(MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4)){
return 1;
}else{
return 0;
}}
if(STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1)){
if(MISC::IS_BIT_SET(uVar0, 6)){
if(MISC::IS_BIT_SET(uVar0, 2) || MISC::IS_BIT_SET(uVar0, 4)){
return 1;
}else{
return 0;
}}}
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152688.f_3){
iVar2=joaat("mpply_plat_up_lb_check");
if(STATS::STAT_GET_INT(iVar2, &uVar1, -1)){
if(MISC::IS_BIT_SET(uVar1, 8)){
return 1;
}}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar3=MISC::GET_PROFILE_SETTING(866);
if(MISC::IS_BIT_SET(uVar3, 2) || MISC::IS_BIT_SET(uVar3, 4)){
return 1;
}}
return 0;
}

int func_333(){
var uVar0;
var uVar1;
int iVar2;
var uVar3;
var uVar4;
if(MISC::IS_BIT_SET(Global_25, 5)){
if(MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3)){
return 1;
}else{
return 0;
}}
if(STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1)){
if(MISC::IS_BIT_SET(uVar0, 5)){
if(MISC::IS_BIT_SET(uVar0, 1) || MISC::IS_BIT_SET(uVar0, 3)){
return 1;
}else{
return 0;
}}}
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152688.f_3){
iVar2=joaat("mpply_plat_up_lb_check");
if(STATS::STAT_GET_INT(iVar2, &uVar1, -1)){
if(MISC::IS_BIT_SET(uVar1, 5)){
return 1;
}}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar3=MISC::GET_PROFILE_SETTING(866);
if(MISC::IS_BIT_SET(uVar3, 1) || MISC::IS_BIT_SET(uVar3, 3)){
return 1;
}}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar4, -1);
MISC::SET_BIT(&uVar4, 1);
MISC::SET_BIT(&uVar4, 3);
MISC::SET_BIT(&uVar4, 5);
MISC::SET_BIT(&Global_25, 1);
MISC::SET_BIT(&Global_25, 3);
MISC::SET_BIT(&Global_25, 5);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar4, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar4=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar4, 1);
MISC::SET_BIT(&uVar4, 3);
STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar4);
}
return 1;
}}}
return 0;
}

int func_334(){
var uVar0;
if(Global_152686==2){
return 1;
}elseif(Global_152686==3){
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

int func_335(int iParam0, int iParam1){
int iVar0;
var uVar1;
var uVar2;
iVar0=0;
switch (iParam0){
case joaat("weapon_knife"):
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_336(joaat("component_knife_varmod_xm3"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_01"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_01");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_02"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_02");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_03"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_03");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_04"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_04");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_05"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_05");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_06"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_06");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_07"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_07");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_08"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_08");
iVar0++;
}
if(func_336(joaat("component_knife_varmod_xm3_09"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_knife_varmod_xm3_09");
iVar0++;
}}
break;
case joaat("weapon_bat"):
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_336(joaat("component_bat_varmod_xm3"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_01"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_01");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_02"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_02");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_03"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_03");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_04"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_04");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_05"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_05");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_06"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_06");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_07"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_07");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_08"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_08");
iVar0++;
}
if(func_336(joaat("component_bat_varmod_xm3_09"), iParam0, &uVar1, &uVar2) && uVar1){
(*iParam1)[iVar0]=joaat("component_bat_varmod_xm3_09");
iVar0++;
}}
break;
}
return iVar0;
}

int func_336(int iParam0, int iParam1, var uParam2, var uParam3){
*uParam2=1;
*uParam3=0;
switch (iParam1){
case joaat("weapon_bat"):
if((!Global_262145.f_34131 && func_346(iLocal_64, 0)) || func_337(iParam0, iParam1, -1)){
*uParam2=1;
*uParam3=0;
return 1;
}
if(Global_262145.f_34131 || !func_346(iLocal_64, 0)){
*uParam2=0;
*uParam3=1;
return 1;
}
return 1;
break;
case joaat("weapon_knife"):
if((!Global_262145.f_34131 && func_346(iLocal_64, 0)) || func_337(iParam0, iParam1, -1)){
*uParam2=1;
*uParam3=0;
return 1;
}
if(Global_262145.f_34131){
*uParam2=0;
*uParam3=1;
return 1;
}
return 1;
break;
}
return 0;
}

int func_337(int iParam0, int iParam1, int iParam2){
var uVar0;
int iVar1;
if(func_345()){
return 0;
}
uVar0=func_341(iParam0, iParam1, iParam2);
iVar1=func_339(iParam0, iParam1);
return MISC::IS_BIT_SET(uVar0, func_338(iVar1));
}

int func_338(int iParam0){
return (iParam0 % 32);
}

int func_339(int iParam0, int iParam1){
return func_340(iParam0, iParam1);
}

int func_340(int iParam0, int iParam1){
switch (iParam1){
case joaat("weapon_pistol"):
switch (iParam0){
case joaat("component_pistol_clip_01"):
return 1;
break;
case joaat("component_pistol_clip_02"):
return 2;
break;
case joaat("component_at_pi_flsh"):
return 3;
break;
case joaat("component_at_pi_supp_02"):
return 4;
break;
case joaat("component_pistol_varmod_luxe"):
return 175;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 211;
break;
}
break;
case joaat("weapon_combatpistol"):
switch (iParam0){
case joaat("component_combatpistol_clip_01"):
return 5;
break;
case joaat("component_combatpistol_clip_02"):
return 6;
break;
case joaat("component_at_pi_flsh"):
return 7;
break;
case joaat("component_at_pi_supp"):
return 8;
break;
case joaat("component_combatpistol_varmod_lowrider"):
return 186;
break;
}
break;
case joaat("weapon_appistol"):
switch (iParam0){
case joaat("component_appistol_clip_01"):
return 11;
break;
case joaat("component_appistol_clip_02"):
return 12;
break;
case joaat("component_at_pi_flsh"):
return 13;
break;
case joaat("component_at_pi_supp"):
return 14;
break;
case joaat("component_appistol_varmod_luxe"):
return 164;
break;
case joaat("component_appistol_varmod_security"):
return 569;
break;
}
break;
case joaat("weapon_microsmg"):
switch (iParam0){
case joaat("component_microsmg_clip_01"):
return 15;
break;
case joaat("component_microsmg_clip_02"):
return 16;
break;
case joaat("component_at_pi_flsh"):
return 17;
break;
case joaat("component_at_scope_macro"):
return 18;
break;
case joaat("component_at_ar_supp_02"):
return 19;
break;
case joaat("component_microsmg_varmod_luxe"):
return 174;
break;
case joaat("component_microsmg_varmod_security"):
return 570;
break;
case 1694268374:
return 605;
break;
case joaat("component_microsmg_varmod_xm3"):
return 602;
break;
}
break;
case joaat("weapon_smg"):
switch (iParam0){
case joaat("component_smg_clip_01"):
return 22;
break;
case joaat("component_smg_clip_02"):
return 23;
break;
case joaat("component_smg_clip_03"):
return 207;
break;
case joaat("component_at_ar_flsh"):
return 24;
break;
case joaat("component_at_scope_macro_02"):
return 25;
break;
case joaat("component_at_pi_supp"):
return 26;
break;
case joaat("component_smg_varmod_luxe"):
return 179;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 212;
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (iParam0){
case joaat("component_assaultrifle_clip_01"):
return 27;
break;
case joaat("component_assaultrifle_clip_02"):
return 28;
break;
case joaat("component_assaultrifle_clip_03"):
return 201;
break;
case joaat("component_at_ar_afgrip"):
return 29;
break;
case joaat("component_at_ar_flsh"):
return 30;
break;
case joaat("component_at_scope_macro"):
return 31;
break;
case joaat("component_at_ar_supp_02"):
return 32;
break;
case joaat("component_assaultrifle_varmod_luxe"):
return 165;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 213;
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (iParam0){
case joaat("component_carbinerifle_clip_01"):
return 33;
break;
case joaat("component_carbinerifle_clip_02"):
return 34;
break;
case joaat("component_carbinerifle_clip_03"):
return 202;
break;
case joaat("component_at_railcover_01"):
return 35;
break;
case joaat("component_at_ar_afgrip"):
return 36;
break;
case joaat("component_at_ar_flsh"):
return 37;
break;
case joaat("component_at_scope_medium"):
return 38;
break;
case joaat("component_at_ar_supp"):
return 39;
break;
case joaat("component_carbinerifle_varmod_luxe"):
return 168;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 214;
break;
case 1605520746:
return 604;
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (iParam0){
case joaat("component_advancedrifle_clip_01"):
return 44;
break;
case joaat("component_advancedrifle_clip_02"):
return 45;
break;
case joaat("component_at_ar_flsh"):
return 47;
break;
case joaat("component_at_scope_small"):
return 48;
break;
case joaat("component_at_ar_supp"):
return 49;
break;
case joaat("component_advancedrifle_varmod_luxe"):
return 163;
break;
}
break;
case joaat("weapon_mg"):
switch (iParam0){
case joaat("component_mg_clip_01"):
return 50;
break;
case joaat("component_mg_clip_02"):
return 51;
break;
case joaat("component_at_scope_small_02"):
return 52;
break;
case joaat("component_mg_varmod_lowrider"):
return 187;
break;
}
break;
case joaat("weapon_combatmg"):
switch (iParam0){
case joaat("component_combatmg_clip_01"):
return 53;
break;
case joaat("component_combatmg_clip_02"):
return 54;
break;
case joaat("component_at_ar_afgrip"):
return 55;
break;
case joaat("component_at_scope_medium"):
return 56;
break;
case joaat("component_combatmg_varmod_lowrider"):
return 188;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 215;
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (iParam0){
case joaat("component_at_sr_supp"):
return 59;
break;
case joaat("component_at_ar_flsh"):
return 60;
break;
case joaat("component_pumpshotgun_varmod_lowrider"):
return 193;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 389;
break;
case joaat("component_pumpshotgun_varmod_security"):
return 571;
break;
case joaat("component_pumpshotgun_varmod_xm3"):
return 603;
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (iParam0){
case joaat("component_assaultshotgun_clip_01"):
return 64;
break;
case joaat("component_assaultshotgun_clip_02"):
return 65;
break;
case joaat("component_at_ar_afgrip"):
return 66;
break;
case joaat("component_at_ar_flsh"):
return 67;
break;
case joaat("component_at_ar_supp"):
return 68;
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (iParam0){
case joaat("component_sniperrifle_clip_01"):
return 69;
break;
case joaat("component_at_scope_large"):
return 70;
break;
case joaat("component_at_scope_max"):
return 71;
break;
case joaat("component_at_ar_supp_02"):
return 72;
break;
case joaat("component_sniperrifle_varmod_luxe"):
return 180;
break;
}
break;
case joaat("weapon_heavysniper"):
switch (iParam0){
case joaat("component_heavysniper_clip_01"):
return 76;
break;
case joaat("component_at_scope_max"):
return 77;
break;
case joaat("component_at_scope_large"):
return 82;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 216;
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (iParam0){
case joaat("component_at_ar_afgrip"):
return 78;
break;
case joaat("component_at_ar_flsh"):
return 79;
break;
case joaat("component_at_scope_small"):
return 80;
break;
}
break;
case joaat("weapon_minigun"):
switch (iParam0){
case joaat("component_minigun_clip_01"):
return 81;
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (iParam0){
case joaat("component_assaultsmg_clip_01"):
return 83;
break;
case joaat("component_assaultsmg_clip_02"):
return 84;
break;
case joaat("component_at_ar_flsh"):
return 85;
break;
case joaat("component_at_scope_macro"):
return 86;
break;
case joaat("component_at_ar_supp_02"):
return 87;
break;
case joaat("component_assaultsmg_varmod_lowrider"):
return 189;
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (iParam0){
case joaat("component_at_ar_afgrip"):
return 88;
break;
case joaat("component_at_ar_flsh"):
return 89;
break;
case joaat("component_at_ar_supp_02"):
return 90;
break;
}
break;
case joaat("weapon_pistol50"):
switch (iParam0){
case joaat("component_pistol50_clip_01"):
return 91;
break;
case joaat("component_pistol50_clip_02"):
return 92;
break;
case joaat("component_at_pi_flsh"):
return 93;
break;
case joaat("component_at_ar_supp_02"):
return 94;
break;
case joaat("component_pistol50_varmod_luxe"):
return 176;
break;
}
break;
case 392730790:
switch (iParam0){
case 195735895:
return 95;
break;
case joaat("component_at_scope_large"):
return 96;
break;
case joaat("component_at_scope_max"):
return 97;
break;
case joaat("component_at_ar_supp"):
return 98;
break;
}
break;
case -572349828:
switch (iParam0){
case -890514874:
return 105;
break;
case -507117574:
return 106;
break;
case joaat("component_at_ar_afgrip"):
return 107;
break;
case joaat("component_at_scope_medium"):
return 108;
break;
}
break;
case -1887867191:
switch (iParam0){
case -124428919:
return 109;
break;
case 1048471894:
return 110;
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (iParam0){
case joaat("component_specialcarbine_clip_01"):
return 111;
break;
case joaat("component_specialcarbine_clip_02"):
return 112;
break;
case joaat("component_specialcarbine_clip_03"):
return 208;
break;
case joaat("component_at_ar_afgrip"):
return 113;
break;
case joaat("component_at_ar_flsh"):
return 114;
break;
case joaat("component_at_scope_medium"):
return 115;
break;
case joaat("component_at_ar_supp_02"):
return 116;
break;
case joaat("component_specialcarbine_varmod_lowrider"):
return 190;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 390;
break;
}
break;
case joaat("weapon_snspistol"):
switch (iParam0){
case joaat("component_snspistol_clip_01"):
return 117;
break;
case joaat("component_snspistol_clip_02"):
return 118;
break;
case joaat("component_at_pi_flsh"):
return 119;
break;
case joaat("component_at_pi_supp"):
return 120;
break;
case joaat("component_snspistol_varmod_lowrider"):
return 191;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 391;
break;
}
break;
case joaat("weapon_heavypistol"):
switch (iParam0){
case joaat("component_heavypistol_clip_01"):
return 121;
break;
case joaat("component_heavypistol_clip_02"):
return 122;
break;
case joaat("component_at_pi_flsh"):
return 123;
break;
case joaat("component_at_pi_supp"):
return 124;
break;
case joaat("component_heavypistol_varmod_luxe"):
return 171;
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (iParam0){
case joaat("component_bullpuprifle_clip_01"):
return 131;
break;
case joaat("component_bullpuprifle_clip_02"):
return 132;
break;
case joaat("component_at_ar_flsh"):
return 127;
break;
case joaat("component_at_ar_supp"):
return 128;
break;
case joaat("component_at_scope_small"):
return 129;
break;
case joaat("component_at_ar_afgrip"):
return 130;
break;
case joaat("component_bullpuprifle_varmod_low"):
return 192;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 394;
break;
}
break;
case joaat("weapon_gusenberg"):
switch (iParam0){
case joaat("component_gusenberg_clip_01"):
return 125;
break;
case joaat("component_gusenberg_clip_02"):
return 126;
break;
}
break;
case joaat("weapon_vintagepistol"):
switch (iParam0){
case joaat("component_vintagepistol_clip_01"):
return 133;
break;
case joaat("component_vintagepistol_clip_02"):
return 134;
break;
case joaat("component_at_pi_supp"):
return 136;
break;
}
break;
case joaat("weapon_heavyshotgun"):
switch (iParam0){
case joaat("component_heavyshotgun_clip_01"):
return 137;
break;
case joaat("component_heavyshotgun_clip_02"):
return 140;
break;
case joaat("component_heavyshotgun_clip_03"):
return 205;
break;
case joaat("component_at_ar_flsh"):
return 145;
break;
case joaat("component_at_ar_supp_02"):
return 146;
break;
case joaat("component_at_ar_afgrip"):
return 147;
break;
}
break;
case joaat("weapon_marksmanrifle"):
switch (iParam0){
case joaat("component_marksmanrifle_clip_01"):
return 138;
break;
case joaat("component_marksmanrifle_clip_02"):
return 139;
break;
case joaat("component_at_scope_large_fixed_zoom"):
return 141;
break;
case joaat("component_at_ar_flsh"):
return 142;
break;
case joaat("component_at_ar_supp"):
return 143;
break;
case joaat("component_at_ar_afgrip"):
return 144;
break;
case joaat("component_marksmanrifle_varmod_luxe"):
return 172;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 392;
break;
}
break;
case joaat("weapon_combatpdw"):
switch (iParam0){
case joaat("component_combatpdw_clip_01"):
return 149;
break;
case joaat("component_combatpdw_clip_02"):
return 150;
break;
case joaat("component_combatpdw_clip_03"):
return 203;
break;
case joaat("component_at_ar_flsh"):
return 151;
break;
case joaat("component_at_scope_small"):
return 152;
break;
case joaat("component_at_ar_afgrip"):
return 153;
break;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (iParam0){
case joaat("component_sawnoffshotgun_varmod_luxe"):
return 178;
break;
}
break;
case joaat("weapon_marksmanpistol"):
switch (iParam0){
case joaat("component_marksmanpistol_clip_01"):
return 148;
break;
}
break;
case joaat("weapon_knuckle"):
switch (iParam0){
case joaat("component_knuckle_varmod_pimp"):
return 154;
break;
case joaat("component_knuckle_varmod_ballas"):
return 155;
break;
case joaat("component_knuckle_varmod_dollar"):
return 156;
break;
case joaat("component_knuckle_varmod_diamond"):
return 157;
break;
case joaat("component_knuckle_varmod_hate"):
return 158;
break;
case joaat("component_knuckle_varmod_love"):
return 159;
break;
case joaat("component_knuckle_varmod_player"):
return 160;
break;
case joaat("component_knuckle_varmod_king"):
return 161;
break;
case joaat("component_knuckle_varmod_vagos"):
return 162;
break;
}
break;
case joaat("weapon_machinepistol"):
switch (iParam0){
case joaat("component_machinepistol_clip_01"):
return 184;
break;
case joaat("component_machinepistol_clip_02"):
return 185;
break;
case joaat("component_machinepistol_clip_03"):
return 206;
break;
case joaat("component_at_pi_supp"):
return 183;
break;
}
break;
case joaat("weapon_switchblade"):
switch (iParam0){
case joaat("component_switchblade_varmod_var1"):
return 194;
break;
case joaat("component_switchblade_varmod_var2"):
return 195;
break;
}
break;
case joaat("weapon_revolver"):
switch (iParam0){
case joaat("component_revolver_clip_01"):
return 196;
break;
case joaat("component_revolver_varmod_boss"):
return 197;
break;
case joaat("component_revolver_varmod_goon"):
return 198;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 393;
break;
}
break;
case joaat("weapon_compactrifle"):
switch (iParam0){
case joaat("component_compactrifle_clip_01"):
return 199;
break;
case joaat("component_compactrifle_clip_02"):
return 200;
break;
case joaat("component_compactrifle_clip_03"):
return 204;
break;
}
break;
case joaat("weapon_minismg"):
switch (iParam0){
case joaat("component_minismg_clip_01"):
return 209;
break;
case joaat("component_minismg_clip_02"):
return 210;
break;
}
break;
case joaat("weapon_pistol_mk2"):
switch (iParam0){
case joaat("component_pistol_mk2_clip_01"):
return 217;
break;
case joaat("component_pistol_mk2_clip_02"):
return 218;
break;
case joaat("component_pistol_mk2_clip_fmj"):
return 219;
break;
case joaat("component_pistol_mk2_clip_hollowpoint"):
return 220;
break;
case joaat("component_pistol_mk2_clip_incendiary"):
return 221;
break;
case joaat("component_pistol_mk2_clip_tracer"):
return 222;
break;
case joaat("component_at_pi_flsh_02"):
return 223;
break;
case joaat("component_at_pi_rail"):
return 224;
break;
case joaat("component_at_pi_supp_02"):
return 225;
break;
case joaat("component_at_pi_comp"):
return 226;
break;
case joaat("component_pistol_mk2_camo"):
return 367;
break;
case joaat("component_pistol_mk2_camo_02"):
return 368;
break;
case joaat("component_pistol_mk2_camo_03"):
return 369;
break;
case joaat("component_pistol_mk2_camo_04"):
return 370;
break;
case joaat("component_pistol_mk2_camo_05"):
return 371;
break;
case joaat("component_pistol_mk2_camo_06"):
return 372;
break;
case joaat("component_pistol_mk2_camo_07"):
return 373;
break;
case joaat("component_pistol_mk2_camo_08"):
return 374;
break;
case joaat("component_pistol_mk2_camo_09"):
return 375;
break;
case joaat("component_pistol_mk2_camo_10"):
return 376;
break;
case joaat("component_pistol_mk2_camo_ind_01"):
return 377;
break;
case joaat("component_pistol_mk2_varmod_xm3"):
return 601;
break;
}
break;
case joaat("weapon_smg_mk2"):
switch (iParam0){
case joaat("component_smg_mk2_clip_01"):
return 227;
break;
case joaat("component_smg_mk2_clip_02"):
return 228;
break;
case joaat("component_smg_mk2_clip_fmj"):
return 229;
break;
case joaat("component_smg_mk2_clip_hollowpoint"):
return 230;
break;
case joaat("component_smg_mk2_clip_incendiary"):
return 231;
break;
case joaat("component_smg_mk2_clip_tracer"):
return 232;
break;
case joaat("component_at_ar_flsh"):
return 233;
break;
case joaat("component_at_sights_smg"):
return 234;
break;
case joaat("component_at_scope_macro_02_smg_mk2"):
return 235;
break;
case joaat("component_at_scope_small_smg_mk2"):
return 236;
break;
case joaat("component_at_pi_supp"):
return 237;
break;
case joaat("component_at_muzzle_01"):
return 238;
break;
case joaat("component_at_muzzle_02"):
return 239;
break;
case joaat("component_at_muzzle_03"):
return 240;
break;
case joaat("component_at_muzzle_04"):
return 241;
break;
case joaat("component_at_muzzle_05"):
return 242;
break;
case joaat("component_at_muzzle_06"):
return 243;
break;
case joaat("component_at_muzzle_07"):
return 244;
break;
case joaat("component_at_sb_barrel_01"):
return 245;
break;
case joaat("component_at_sb_barrel_02"):
return 246;
break;
case joaat("component_smg_mk2_camo"):
return 378;
break;
case joaat("component_smg_mk2_camo_02"):
return 379;
break;
case joaat("component_smg_mk2_camo_03"):
return 380;
break;
case joaat("component_smg_mk2_camo_04"):
return 381;
break;
case joaat("component_smg_mk2_camo_05"):
return 382;
break;
case joaat("component_smg_mk2_camo_06"):
return 383;
break;
case joaat("component_smg_mk2_camo_07"):
return 384;
break;
case joaat("component_smg_mk2_camo_08"):
return 385;
break;
case joaat("component_smg_mk2_camo_09"):
return 386;
break;
case joaat("component_smg_mk2_camo_10"):
return 387;
break;
case joaat("component_smg_mk2_camo_ind_01"):
return 388;
break;
}
break;
case joaat("weapon_heavysniper_mk2"):
switch (iParam0){
case joaat("component_heavysniper_mk2_clip_01"):
return 247;
break;
case joaat("component_heavysniper_mk2_clip_02"):
return 248;
break;
case joaat("component_heavysniper_mk2_clip_armorpiercing"):
return 249;
break;
case joaat("component_heavysniper_mk2_clip_explosive"):
return 250;
break;
case joaat("component_heavysniper_mk2_clip_fmj"):
return 251;
break;
case joaat("component_heavysniper_mk2_clip_incendiary"):
return 252;
break;
case joaat("component_at_scope_large_mk2"):
return 253;
break;
case joaat("component_at_scope_max"):
return 254;
break;
case joaat("component_at_scope_nv"):
return 255;
break;
case joaat("component_at_scope_thermal"):
return 256;
break;
case joaat("component_at_sr_supp_03"):
return 257;
break;
case joaat("component_at_muzzle_08"):
return 258;
break;
case joaat("component_at_muzzle_09"):
return 259;
break;
case joaat("component_at_sr_barrel_01"):
return 260;
break;
case joaat("component_at_sr_barrel_02"):
return 261;
break;
case joaat("component_heavysniper_mk2_camo"):
return 356;
break;
case joaat("component_heavysniper_mk2_camo_02"):
return 357;
break;
case joaat("component_heavysniper_mk2_camo_03"):
return 358;
break;
case joaat("component_heavysniper_mk2_camo_04"):
return 359;
break;
case joaat("component_heavysniper_mk2_camo_05"):
return 360;
break;
case joaat("component_heavysniper_mk2_camo_06"):
return 361;
break;
case joaat("component_heavysniper_mk2_camo_07"):
return 362;
break;
case joaat("component_heavysniper_mk2_camo_08"):
return 363;
break;
case joaat("component_heavysniper_mk2_camo_09"):
return 364;
break;
case joaat("component_heavysniper_mk2_camo_10"):
return 365;
break;
case joaat("component_heavysniper_mk2_camo_ind_01"):
return 366;
break;
}
break;
case joaat("weapon_combatmg_mk2"):
switch (iParam0){
case joaat("component_combatmg_mk2_clip_01"):
return 262;
break;
case joaat("component_combatmg_mk2_clip_02"):
return 263;
break;
case joaat("component_combatmg_mk2_clip_armorpiercing"):
return 264;
break;
case joaat("component_combatmg_mk2_clip_fmj"):
return 265;
break;
case joaat("component_combatmg_mk2_clip_incendiary"):
return 266;
break;
case joaat("component_combatmg_mk2_clip_tracer"):
return 267;
break;
case joaat("component_at_ar_afgrip_02"):
return 268;
break;
case joaat("component_at_sights"):
return 269;
break;
case joaat("component_at_scope_small_mk2"):
return 270;
break;
case joaat("component_at_scope_medium_mk2"):
return 271;
break;
case joaat("component_at_muzzle_01"):
return 272;
break;
case joaat("component_at_muzzle_02"):
return 273;
break;
case joaat("component_at_muzzle_03"):
return 274;
break;
case joaat("component_at_muzzle_04"):
return 275;
break;
case joaat("component_at_muzzle_05"):
return 276;
break;
case joaat("component_at_muzzle_06"):
return 277;
break;
case joaat("component_at_muzzle_07"):
return 278;
break;
case joaat("component_at_mg_barrel_01"):
return 279;
break;
case joaat("component_at_mg_barrel_02"):
return 280;
break;
case joaat("component_combatmg_mk2_camo"):
return 345;
break;
case joaat("component_combatmg_mk2_camo_02"):
return 346;
break;
case joaat("component_combatmg_mk2_camo_03"):
return 347;
break;
case joaat("component_combatmg_mk2_camo_04"):
return 348;
break;
case joaat("component_combatmg_mk2_camo_05"):
return 349;
break;
case joaat("component_combatmg_mk2_camo_06"):
return 350;
break;
case joaat("component_combatmg_mk2_camo_07"):
return 351;
break;
case joaat("component_combatmg_mk2_camo_08"):
return 352;
break;
case joaat("component_combatmg_mk2_camo_09"):
return 353;
break;
case joaat("component_combatmg_mk2_camo_10"):
return 354;
break;
case joaat("component_combatmg_mk2_camo_ind_01"):
return 355;
break;
}
break;
case joaat("weapon_assaultrifle_mk2"):
switch (iParam0){
case joaat("component_assaultrifle_mk2_clip_01"):
return 281;
break;
case joaat("component_assaultrifle_mk2_clip_02"):
return 282;
break;
case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
return 283;
break;
case joaat("component_assaultrifle_mk2_clip_fmj"):
return 284;
break;
case joaat("component_assaultrifle_mk2_clip_incendiary"):
return 285;
break;
case joaat("component_assaultrifle_mk2_clip_tracer"):
return 286;
break;
case joaat("component_at_ar_afgrip_02"):
return 287;
break;
case joaat("component_at_ar_flsh"):
return 288;
break;
case joaat("component_at_sights"):
return 289;
break;
case joaat("component_at_scope_macro_mk2"):
return 290;
break;
case joaat("component_at_scope_medium_mk2"):
return 291;
break;
case joaat("component_at_ar_supp_02"):
return 292;
break;
case joaat("component_at_muzzle_01"):
return 293;
break;
case joaat("component_at_muzzle_02"):
return 294;
break;
case joaat("component_at_muzzle_03"):
return 295;
break;
case joaat("component_at_muzzle_04"):
return 296;
break;
case joaat("component_at_muzzle_05"):
return 297;
break;
case joaat("component_at_muzzle_06"):
return 298;
break;
case joaat("component_at_muzzle_07"):
return 299;
break;
case joaat("component_at_ar_barrel_01"):
return 300;
break;
case joaat("component_at_ar_barrel_02"):
return 301;
break;
case joaat("component_assaultrifle_mk2_camo"):
return 323;
break;
case joaat("component_assaultrifle_mk2_camo_02"):
return 324;
break;
case joaat("component_assaultrifle_mk2_camo_03"):
return 325;
break;
case joaat("component_assaultrifle_mk2_camo_04"):
return 326;
break;
case joaat("component_assaultrifle_mk2_camo_05"):
return 327;
break;
case joaat("component_assaultrifle_mk2_camo_06"):
return 328;
break;
case joaat("component_assaultrifle_mk2_camo_07"):
return 329;
break;
case joaat("component_assaultrifle_mk2_camo_08"):
return 330;
break;
case joaat("component_assaultrifle_mk2_camo_09"):
return 331;
break;
case joaat("component_assaultrifle_mk2_camo_10"):
return 332;
break;
case joaat("component_assaultrifle_mk2_camo_ind_01"):
return 333;
break;
}
break;
case joaat("weapon_carbinerifle_mk2"):
switch (iParam0){
case joaat("component_carbinerifle_mk2_clip_01"):
return 302;
break;
case joaat("component_carbinerifle_mk2_clip_02"):
return 303;
break;
case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
return 304;
break;
case joaat("component_carbinerifle_mk2_clip_fmj"):
return 305;
break;
case joaat("component_carbinerifle_mk2_clip_incendiary"):
return 306;
break;
case joaat("component_carbinerifle_mk2_clip_tracer"):
return 307;
break;
case joaat("component_at_ar_afgrip_02"):
return 308;
break;
case joaat("component_at_ar_flsh"):
return 309;
break;
case joaat("component_at_sights"):
return 310;
break;
case joaat("component_at_scope_macro_mk2"):
return 311;
break;
case joaat("component_at_scope_medium_mk2"):
return 312;
break;
case joaat("component_at_ar_supp"):
return 313;
break;
case joaat("component_at_muzzle_01"):
return 314;
break;
case joaat("component_at_muzzle_02"):
return 315;
break;
case joaat("component_at_muzzle_03"):
return 316;
break;
case joaat("component_at_muzzle_04"):
return 317;
break;
case joaat("component_at_muzzle_05"):
return 318;
break;
case joaat("component_at_muzzle_06"):
return 319;
break;
case joaat("component_at_muzzle_07"):
return 320;
break;
case joaat("component_at_cr_barrel_01"):
return 321;
break;
case joaat("component_at_cr_barrel_02"):
return 322;
break;
case joaat("component_carbinerifle_mk2_camo"):
return 334;
break;
case joaat("component_carbinerifle_mk2_camo_02"):
return 335;
break;
case joaat("component_carbinerifle_mk2_camo_03"):
return 336;
break;
case joaat("component_carbinerifle_mk2_camo_04"):
return 337;
break;
case joaat("component_carbinerifle_mk2_camo_05"):
return 338;
break;
case joaat("component_carbinerifle_mk2_camo_06"):
return 339;
break;
case joaat("component_carbinerifle_mk2_camo_07"):
return 340;
break;
case joaat("component_carbinerifle_mk2_camo_08"):
return 341;
break;
case joaat("component_carbinerifle_mk2_camo_09"):
return 342;
break;
case joaat("component_carbinerifle_mk2_camo_10"):
return 343;
break;
case joaat("component_carbinerifle_mk2_camo_ind_01"):
return 344;
break;
}
break;
case joaat("weapon_pumpshotgun_mk2"):
switch (iParam0){
case joaat("component_pumpshotgun_mk2_clip_01"):
return 395;
break;
case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
return 396;
break;
case joaat("component_pumpshotgun_mk2_clip_explosive"):
return 397;
break;
case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
return 398;
break;
case joaat("component_pumpshotgun_mk2_clip_incendiary"):
return 399;
break;
case joaat("component_at_ar_flsh"):
return 400;
break;
case joaat("component_at_sights"):
return 401;
break;
case joaat("component_at_scope_macro_mk2"):
return 402;
break;
case joaat("component_at_scope_small_mk2"):
return 403;
break;
case joaat("component_at_sr_supp_03"):
return 404;
break;
case joaat("component_at_muzzle_08"):
return 405;
break;
case joaat("component_pumpshotgun_mk2_camo"):
return 488;
break;
case joaat("component_pumpshotgun_mk2_camo_02"):
return 489;
break;
case joaat("component_pumpshotgun_mk2_camo_03"):
return 490;
break;
case joaat("component_pumpshotgun_mk2_camo_04"):
return 491;
break;
case joaat("component_pumpshotgun_mk2_camo_05"):
return 492;
break;
case joaat("component_pumpshotgun_mk2_camo_06"):
return 493;
break;
case joaat("component_pumpshotgun_mk2_camo_07"):
return 494;
break;
case joaat("component_pumpshotgun_mk2_camo_08"):
return 495;
break;
case joaat("component_pumpshotgun_mk2_camo_09"):
return 496;
break;
case joaat("component_pumpshotgun_mk2_camo_10"):
return 497;
break;
case joaat("component_pumpshotgun_mk2_camo_ind_01"):
return 498;
break;
}
break;
case joaat("weapon_specialcarbine_mk2"):
switch (iParam0){
case joaat("component_specialcarbine_mk2_clip_01"):
return 406;
break;
case joaat("component_specialcarbine_mk2_clip_02"):
return 407;
break;
case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
return 408;
break;
case joaat("component_specialcarbine_mk2_clip_fmj"):
return 409;
break;
case joaat("component_specialcarbine_mk2_clip_incendiary"):
return 410;
break;
case joaat("component_specialcarbine_mk2_clip_tracer"):
return 411;
break;
case joaat("component_at_ar_flsh"):
return 412;
break;
case joaat("component_at_sights"):
return 413;
break;
case joaat("component_at_scope_macro_mk2"):
return 414;
break;
case joaat("component_at_scope_medium_mk2"):
return 415;
break;
case joaat("component_at_ar_supp_02"):
return 416;
break;
case joaat("component_at_muzzle_01"):
return 417;
break;
case joaat("component_at_muzzle_02"):
return 418;
break;
case joaat("component_at_muzzle_03"):
return 419;
break;
case joaat("component_at_muzzle_04"):
return 420;
break;
case joaat("component_at_muzzle_05"):
return 421;
break;
case joaat("component_at_muzzle_06"):
return 422;
break;
case joaat("component_at_muzzle_07"):
return 423;
break;
case joaat("component_at_ar_afgrip_02"):
return 424;
break;
case joaat("component_at_sc_barrel_01"):
return 425;
break;
case joaat("component_at_sc_barrel_02"):
return 426;
break;
case joaat("component_specialcarbine_mk2_camo"):
return 532;
break;
case joaat("component_specialcarbine_mk2_camo_02"):
return 533;
break;
case joaat("component_specialcarbine_mk2_camo_03"):
return 534;
break;
case joaat("component_specialcarbine_mk2_camo_04"):
return 535;
break;
case joaat("component_specialcarbine_mk2_camo_05"):
return 536;
break;
case joaat("component_specialcarbine_mk2_camo_06"):
return 537;
break;
case joaat("component_specialcarbine_mk2_camo_07"):
return 538;
break;
case joaat("component_specialcarbine_mk2_camo_08"):
return 539;
break;
case joaat("component_specialcarbine_mk2_camo_09"):
return 540;
break;
case joaat("component_specialcarbine_mk2_camo_10"):
return 541;
break;
case joaat("component_specialcarbine_mk2_camo_ind_01"):
return 542;
break;
}
break;
case joaat("weapon_snspistol_mk2"):
switch (iParam0){
case joaat("component_snspistol_mk2_clip_01"):
return 427;
break;
case joaat("component_snspistol_mk2_clip_02"):
return 428;
break;
case joaat("component_snspistol_mk2_clip_fmj"):
return 429;
break;
case joaat("component_snspistol_mk2_clip_hollowpoint"):
return 430;
break;
case joaat("component_snspistol_mk2_clip_incendiary"):
return 431;
break;
case joaat("component_snspistol_mk2_clip_tracer"):
return 432;
break;
case joaat("component_at_pi_flsh_03"):
return 433;
break;
case joaat("component_at_pi_rail_02"):
return 434;
break;
case joaat("component_at_pi_supp_02"):
return 435;
break;
case joaat("component_at_pi_comp_02"):
return 436;
break;
case joaat("component_snspistol_mk2_camo"):
return 510;
break;
case joaat("component_snspistol_mk2_camo_02"):
return 511;
break;
case joaat("component_snspistol_mk2_camo_03"):
return 512;
break;
case joaat("component_snspistol_mk2_camo_04"):
return 513;
break;
case joaat("component_snspistol_mk2_camo_05"):
return 514;
break;
case joaat("component_snspistol_mk2_camo_06"):
return 515;
break;
case joaat("component_snspistol_mk2_camo_07"):
return 516;
break;
case joaat("component_snspistol_mk2_camo_08"):
return 517;
break;
case joaat("component_snspistol_mk2_camo_09"):
return 518;
break;
case joaat("component_snspistol_mk2_camo_10"):
return 519;
break;
case joaat("component_snspistol_mk2_camo_ind_01"):
return 520;
break;
}
break;
case joaat("weapon_marksmanrifle_mk2"):
switch (iParam0){
case joaat("component_marksmanrifle_mk2_clip_01"):
return 437;
break;
case joaat("component_marksmanrifle_mk2_clip_02"):
return 438;
break;
case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
return 439;
break;
case joaat("component_marksmanrifle_mk2_clip_fmj"):
return 440;
break;
case joaat("component_marksmanrifle_mk2_clip_incendiary"):
return 441;
break;
case joaat("component_marksmanrifle_mk2_clip_tracer"):
return 442;
break;
case joaat("component_at_ar_flsh"):
return 443;
break;
case joaat("component_at_sights"):
return 444;
break;
case joaat("component_at_scope_medium_mk2"):
return 445;
break;
case joaat("component_at_scope_large_fixed_zoom_mk2"):
return 446;
break;
case joaat("component_at_ar_supp"):
return 447;
break;
case joaat("component_at_muzzle_01"):
return 448;
break;
case joaat("component_at_muzzle_02"):
return 449;
break;
case joaat("component_at_muzzle_03"):
return 450;
break;
case joaat("component_at_muzzle_04"):
return 451;
break;
case joaat("component_at_muzzle_05"):
return 452;
break;
case joaat("component_at_muzzle_06"):
return 453;
break;
case joaat("component_at_muzzle_07"):
return 454;
break;
case joaat("component_at_ar_afgrip_02"):
return 455;
break;
case joaat("component_at_mrfl_barrel_01"):
return 456;
break;
case joaat("component_at_mrfl_barrel_02"):
return 457;
break;
case joaat("component_marksmanrifle_mk2_camo"):
return 521;
break;
case joaat("component_marksmanrifle_mk2_camo_02"):
return 522;
break;
case joaat("component_marksmanrifle_mk2_camo_03"):
return 523;
break;
case joaat("component_marksmanrifle_mk2_camo_04"):
return 524;
break;
case joaat("component_marksmanrifle_mk2_camo_05"):
return 525;
break;
case joaat("component_marksmanrifle_mk2_camo_06"):
return 526;
break;
case joaat("component_marksmanrifle_mk2_camo_07"):
return 527;
break;
case joaat("component_marksmanrifle_mk2_camo_08"):
return 528;
break;
case joaat("component_marksmanrifle_mk2_camo_09"):
return 529;
break;
case joaat("component_marksmanrifle_mk2_camo_10"):
return 530;
break;
case joaat("component_marksmanrifle_mk2_camo_ind_01"):
return 531;
break;
}
break;
case joaat("weapon_revolver_mk2"):
switch (iParam0){
case joaat("component_revolver_mk2_clip_01"):
return 458;
break;
case joaat("component_revolver_mk2_clip_fmj"):
return 459;
break;
case joaat("component_revolver_mk2_clip_hollowpoint"):
return 460;
break;
case joaat("component_revolver_mk2_clip_incendiary"):
return 461;
break;
case joaat("component_revolver_mk2_clip_tracer"):
return 462;
break;
case joaat("component_at_sights"):
return 463;
break;
case joaat("component_at_scope_macro_mk2"):
return 464;
break;
case joaat("component_at_pi_flsh"):
return 465;
break;
case joaat("component_at_pi_comp_03"):
return 466;
break;
case joaat("component_revolver_mk2_camo"):
return 499;
break;
case joaat("component_revolver_mk2_camo_02"):
return 500;
break;
case joaat("component_revolver_mk2_camo_03"):
return 501;
break;
case joaat("component_revolver_mk2_camo_04"):
return 502;
break;
case joaat("component_revolver_mk2_camo_05"):
return 503;
break;
case joaat("component_revolver_mk2_camo_06"):
return 504;
break;
case joaat("component_revolver_mk2_camo_07"):
return 505;
break;
case joaat("component_revolver_mk2_camo_08"):
return 506;
break;
case joaat("component_revolver_mk2_camo_09"):
return 507;
break;
case joaat("component_revolver_mk2_camo_10"):
return 508;
break;
case joaat("component_revolver_mk2_camo_ind_01"):
return 509;
break;
}
break;
case joaat("weapon_bullpuprifle_mk2"):
switch (iParam0){
case joaat("component_bullpuprifle_mk2_clip_01"):
return 467;
break;
case joaat("component_bullpuprifle_mk2_clip_02"):
return 468;
break;
case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
return 469;
break;
case joaat("component_bullpuprifle_mk2_clip_fmj"):
return 470;
break;
case joaat("component_bullpuprifle_mk2_clip_incendiary"):
return 471;
break;
case joaat("component_bullpuprifle_mk2_clip_tracer"):
return 472;
break;
case joaat("component_at_ar_flsh"):
return 473;
break;
case joaat("component_at_sights"):
return 474;
break;
case joaat("component_at_scope_macro_02_mk2"):
return 475;
break;
case joaat("component_at_scope_small_mk2"):
return 476;
break;
case joaat("component_at_bp_barrel_01"):
return 477;
break;
case joaat("component_at_bp_barrel_02"):
return 478;
break;
case joaat("component_at_ar_supp"):
return 479;
break;
case joaat("component_at_muzzle_01"):
return 480;
break;
case joaat("component_at_muzzle_02"):
return 481;
break;
case joaat("component_at_muzzle_03"):
return 482;
break;
case joaat("component_at_muzzle_04"):
return 483;
break;
case joaat("component_at_muzzle_05"):
return 484;
break;
case joaat("component_at_muzzle_06"):
return 485;
break;
case joaat("component_at_muzzle_07"):
return 486;
break;
case joaat("component_at_ar_afgrip_02"):
return 487;
break;
case joaat("component_bullpuprifle_mk2_camo"):
return 543;
break;
case joaat("component_bullpuprifle_mk2_camo_02"):
return 544;
break;
case joaat("component_bullpuprifle_mk2_camo_03"):
return 545;
break;
case joaat("component_bullpuprifle_mk2_camo_04"):
return 546;
break;
case joaat("component_bullpuprifle_mk2_camo_05"):
return 547;
break;
case joaat("component_bullpuprifle_mk2_camo_06"):
return 548;
break;
case joaat("component_bullpuprifle_mk2_camo_07"):
return 549;
break;
case joaat("component_bullpuprifle_mk2_camo_08"):
return 550;
break;
case joaat("component_bullpuprifle_mk2_camo_09"):
return 551;
break;
case joaat("component_bullpuprifle_mk2_camo_10"):
return 552;
break;
case joaat("component_bullpuprifle_mk2_camo_ind_01"):
return 553;
break;
}
break;
case joaat("weapon_raypistol"):
switch (iParam0){
case joaat("component_raypistol_varmod_xmas18"):
return 554;
break;
}
break;
case joaat("weapon_ceramicpistol"):
switch (iParam0){
case joaat("component_ceramicpistol_clip_01"):
return 555;
break;
case joaat("component_ceramicpistol_clip_02"):
return 556;
break;
case joaat("component_ceramicpistol_supp"):
return 557;
break;
}
break;
case joaat("weapon_combatshotgun"):
switch (iParam0){
case joaat("component_combatshotgun_clip_01"):
return 559;
case joaat("component_at_ar_flsh"):
return 560;
break;
case joaat("component_at_ar_supp"):
return 561;
break;
}
break;
case joaat("weapon_militaryrifle"):
switch (iParam0){
case joaat("component_militaryrifle_clip_01"):
return 562;
break;
case joaat("component_militaryrifle_clip_02"):
return 563;
break;
case joaat("component_militaryrifle_sight_01"):
return 564;
break;
case joaat("component_at_scope_small"):
return 565;
break;
case joaat("component_at_ar_flsh"):
return 566;
break;
case joaat("component_at_ar_supp"):
return 567;
break;
}
break;
case joaat("weapon_gadgetpistol"):
switch (iParam0){
case joaat("component_gadgetpistol_clip_01"):
return 558;
break;
}
break;
case joaat("weapon_heavyrifle"):
switch (iParam0){
case joaat("component_heavyrifle_clip_01"):
return 99;
break;
case joaat("component_heavyrifle_clip_02"):
return 100;
break;
case joaat("component_heavyrifle_camo1"):
return 568;
break;
case joaat("component_at_ar_afgrip"):
return 101;
break;
case joaat("component_at_ar_flsh"):
return 102;
break;
case joaat("component_at_scope_medium"):
return 103;
break;
case joaat("component_at_ar_supp"):
return 104;
break;
case joaat("component_heavyrifle_sight_01"):
return 572;
break;
}
break;
case joaat("weapon_tacticalrifle"):
switch (iParam0){
case joaat("component_tacticalrifle_clip_01"):
return 573;
break;
case joaat("component_tacticalrifle_clip_02"):
return 574;
break;
case joaat("component_at_ar_flsh_reh"):
return 575;
break;
case joaat("component_at_ar_supp_02"):
return 576;
break;
case joaat("component_at_ar_afgrip"):
return 577;
break;
}
break;
case joaat("weapon_pistolxm3"):
switch (iParam0){
case joaat("component_pistolxm3_clip_01"):
return 578;
break;
case joaat("component_pistolxm3_supp"):
return 579;
break;
}
break;
case 350597077:
switch (iParam0){
case 943088878:
return 607;
break;
case 310778254:
return 608;
break;
case joaat("component_at_ar_supp_02"):
return 609;
break;
case joaat("component_at_scope_macro"):
return 610;
break;
}
break;
case joaat("weapon_railgunxm3"):
switch (iParam0){
case joaat("component_railgunxm3_clip_01"):
return 580;
break;
}
break;
case joaat("weapon_bat"):
switch (iParam0){
case joaat("component_bat_varmod_xm3"):
return 581;
break;
case joaat("component_bat_varmod_xm3_01"):
return 583;
break;
case joaat("component_bat_varmod_xm3_02"):
return 584;
break;
case joaat("component_bat_varmod_xm3_03"):
return 585;
break;
case joaat("component_bat_varmod_xm3_04"):
return 586;
break;
case joaat("component_bat_varmod_xm3_05"):
return 587;
break;
case joaat("component_bat_varmod_xm3_06"):
return 588;
break;
case joaat("component_bat_varmod_xm3_07"):
return 589;
break;
case joaat("component_bat_varmod_xm3_08"):
return 590;
break;
case joaat("component_bat_varmod_xm3_09"):
return 591;
break;
}
break;
case joaat("weapon_knife"):
switch (iParam0){
case joaat("component_knife_varmod_xm3"):
return 582;
break;
case joaat("component_knife_varmod_xm3_01"):
return 592;
break;
case joaat("component_knife_varmod_xm3_02"):
return 593;
break;
case joaat("component_knife_varmod_xm3_03"):
return 594;
break;
case joaat("component_knife_varmod_xm3_04"):
return 595;
break;
case joaat("component_knife_varmod_xm3_05"):
return 596;
break;
case joaat("component_knife_varmod_xm3_06"):
return 597;
break;
case joaat("component_knife_varmod_xm3_07"):
return 598;
break;
case joaat("component_knife_varmod_xm3_08"):
return 599;
break;
case joaat("component_knife_varmod_xm3_09"):
return 600;
break;
}
break;
case joaat("weapon_rpg"):
switch (iParam0){
case -1240142720:
return 606;
break;
}
break;
}
return 0;
}


var func__341(int iParam0, int iParam1, var uParam2){
var uVar0;
uVar0=func_52(func_342(iParam0, iParam1), uParam2);
return uVar0;
}

int func_342(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_339(iParam0, iParam1);
iVar1=func_344(iVar0);
if((func_79()==0 || func_343()==0) || (func_79()==999 && func_343()==999)){
switch (iVar1){
case 0:
return 811;
break;
case 1:
return 812;
break;
case 2:
return 813;
break;
case 3:
return 814;
break;
case 4:
return 1753;
break;
case 5:
return 2435;
break;
case 6:
return 2828;
break;
case 7:
return 5502;
break;
case 8:
return 5506;
break;
case 9:
return 5510;
break;
case 10:
return 5623;
break;
case 11:
return 5627;
break;
case 12:
return 5631;
break;
case 13:
return 5635;
break;
case 14:
return 6374;
break;
case 15:
return 6497;
break;
case 16:
return 6517;
break;
case 17:
return 6523;
break;
case 18:
return 10272;
break;
case 19:
return 12005;
break;
}}
return 14385;
}

int func_343(){
return Global_32284;
}

int func_344(int iParam0){
return (iParam0 / 32);
}


bool func_345(){
return Global_1575042;
}

int func_346(int iParam0, bool bParam1){
if(iParam0==58){
if(bParam1){
return Global_100885.f_329[58] < 5f;
}
return 1;
}
return 0;
}

int func_347(int iParam0, int iParam1, int iParam2){
var uVar0;
int iVar1;
if(func_345()){
return 0;
}
uVar0=func_348(iParam0, iParam1, iParam2);
iVar1=func_339(iParam0, iParam1);
return MISC::IS_BIT_SET(uVar0, func_338(iVar1));
}


var func__348(int iParam0, int iParam1, var uParam2){
var uVar0;
uVar0=func_52(func_349(iParam0, iParam1), uParam2);
return uVar0;
}

int func_349(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_339(iParam0, iParam1);
iVar1=func_344(iVar0);
if((func_79()==0 || func_343()==0) || (func_79()==999 && func_343()==999)){
switch (iVar1){
case 0:
return 688;
break;
case 1:
return 689;
break;
case 2:
return 690;
break;
case 3:
return 691;
break;
case 4:
return 1755;
break;
case 5:
return 2437;
break;
case 6:
return 2830;
break;
case 7:
return 5504;
break;
case 8:
return 5508;
break;
case 9:
return 5512;
break;
case 10:
return 5625;
break;
case 11:
return 5629;
break;
case 12:
return 5633;
break;
case 13:
return 5637;
break;
case 14:
return 6376;
break;
case 15:
return 6499;
break;
case 16:
return 6519;
break;
case 17:
return 6525;
break;
case 18:
return 10274;
break;
case 19:
return 12007;
break;
}}
return 1755;
}

int func_350(int iParam0){
switch (iParam0){
case 46:
case 47:
case 48:
case 49:
case 52:
case 53:
case 56:
case 59:
case 60:
return 1;
default:
}
return 0;
}


void func_351(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4){
*uParam0=iParam1;
uParam0->f_4=iParam2;
uParam0->f_6=iParam3;
uParam0->f_1=iParam4;
}

int func_352(int iParam0){
if(func_353(iParam0) || iParam0==joaat("weapon_heavyrifle")){
return 1;
}
return 0;
}

int func_353(int iParam0){
switch (iParam0){
case joaat("weapon_pistol_mk2"):
case joaat("weapon_smg_mk2"):
case joaat("weapon_assaultrifle_mk2"):
case joaat("weapon_carbinerifle_mk2"):
case joaat("weapon_combatmg_mk2"):
case joaat("weapon_heavysniper_mk2"):
case joaat("weapon_pumpshotgun_mk2"):
case joaat("weapon_specialcarbine_mk2"):
case joaat("weapon_snspistol_mk2"):
case joaat("weapon_marksmanrifle_mk2"):
case joaat("weapon_revolver_mk2"):
case joaat("weapon_bullpuprifle_mk2"):
return 1;
break;
}
return 0;
}

int func_354(int iParam0, int iParam1){
struct<5> Var0;
int iVar1;
while (func_288(&Var0, iParam0, iVar1, 0)){
if(Var0.f_4==iParam1){
return 1;
}
iVar1++;
}
return 0;
}


float func_355(float fParam0){
return (fParam0 * 57.29578f);
}

int func_356(var uParam0){
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
return 1;
}

int func_357(var uParam0, int iParam1, struct<3> Param2, float fParam3){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
VEHICLE::DELETE_VEHICLE(uParam0);
*uParam0=0;
}
*uParam0=VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, 1, 1, 0);
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
return 1;
}

int func_358(var uParam0){
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
PED::SET_PED_MONEY(*uParam0, 0);
PED::SET_PED_NAME_DEBUG(*uParam0, "RAMP:SCENE PED");
PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
return 1;
}

int func_359(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
PED::DELETE_PED(uParam0);
*uParam0=0;
}
*uParam0=PED::CREATE_PED(26, iParam1, Param2, fParam3, 1, 1);
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
if(bParam4){
func_360(*uParam0, Param2);
ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
}
PED::SET_PED_MONEY(*uParam0, 0);
PED::SET_PED_NAME_DEBUG(*uParam0, "RAMP:SCENE PED");
PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
return 1;
}


Vector3 func__360(var uParam0, struct<3> Param1){
var uVar0;
Param1.f_2=(Param1.f_2 + 0.15f);
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, 0, 0)){
Param1.f_2=uVar0;
}
if(func_235(uParam0)){
ENTITY::SET_ENTITY_COORDS(uParam0, Param1, 1, 0, 0, 1);
}
return Param1;
}

int func_361(){
return PED::ADD_SCENARIO_BLOCKING_AREA(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}


void func_362(var uParam0){
int iVar0;
char* sVar1;
iVar0=joaat("ig_ramp_gang");
sVar1="misstrvram_4";
STREAMING::REQUEST_MODEL(iVar0);
STREAMING::REQUEST_ANIM_DICT(sVar1);
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
while (!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1)){
wait(0);
}
while (!func_359(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_355(1.03f), 1)){
wait(0);
}
func_358(&(uParam0->f_28[0]));
PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RP0_NOGUN");
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
while (!func_359(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_355(0.2f), 1)){
wait(0);
}
func_358(&(uParam0->f_28[1]));
PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RP1_GUN");
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[1]);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, 1, 1);
TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
uParam0->f_27=0;
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}


void func_363(var uParam0){
int iVar0;
char* sVar1;
iVar0=joaat("ig_ramp_mex");
sVar1="misstrvram_3";
STREAMING::REQUEST_MODEL(iVar0);
STREAMING::REQUEST_ANIM_DICT(sVar1);
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_microsmg"), 31, 10);
while ((!STREAMING::HAS_MODEL_LOADED(iVar0) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_microsmg"))) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1)){
wait(0);
}
while (!func_359(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1)){
wait(0);
}
func_358(&(uParam0->f_28[0]));
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
while (!func_359(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1)){
wait(0);
}
func_358(&(uParam0->f_28[1]));
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
TASK::TASK_PLAY_ANIM(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
if(func_286(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_355(-0.85f))){
WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], joaat("component_at_scope_macro"));
WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
}
StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
uParam0->f_27=0;
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

int func_364(){
return func_365(1182.137f, -400.4787f, 66.92414f, 8f);
}


var func__365(struct<3> Param0, float fParam1){
struct<3> Var0;
Var0={
(fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) 
};
return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}


void func_366(var uParam0){
int iVar0;
int iVar1;
int iVar2;
char* sVar3;
int iVar4;
struct<3> Var5;
struct<3> Var6;
iVar0=joaat("ig_ramp_hipster");
iVar1=joaat("prop_chair_01a");
iVar2=joaat("prop_npc_phone");
sVar3="misstrvram_2";
iVar4=60309;
Var5={
0f, 0f, 0f 
};
Var6={
0f, 0f, 0f 
};
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_sawnoffshotgun"), 31, 0);
STREAMING::REQUEST_MODEL(iVar0);
STREAMING::REQUEST_MODEL(iVar1);
STREAMING::REQUEST_MODEL(iVar2);
STREAMING::REQUEST_ANIM_DICT(sVar3);
func_370(&uLocal_67);
while ((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_MODEL_LOADED(iVar1)) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3)) || !func_369(&uLocal_67)){
wait(0);
}
MISC::CLEAR_AREA_OF_OBJECTS(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
uParam0->f_41[2]=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2])){
ENTITY::SET_ENTITY_COORDS(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
}
uParam0->f_41[3]=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1181.243f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), 1, 0, 1);
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3])){
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
}
while (!func_359(&(uParam0->f_28[0]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0)){
wait(0);
}
func_358(&(uParam0->f_28[0]));
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
func_368(&(uParam0->f_41[1]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar4), Var6, Var5, 1, 0, 0, 0, 2, 1, 0);
func_367(&uLocal_67, 0, 3);
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59)){
uParam0->f_59=PED::CREATE_SYNCHRONIZED_SCENE(Local_65, Local_66, 2);
if(func_137(uParam0->f_28[0])){
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
}
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
}
if(!func_286(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_355(-0.71f))){}
StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
uParam0->f_27=0;
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
}


void func_367(var uParam0, bool bParam1, int iParam2){
var uVar0;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(bParam1){
MOBILE::GET_MOBILE_PHONE_RENDER_I(&uVar0);
}else{
if(!HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone")){
HUD::REGISTER_NAMED_RENDERTARGET("npcphone", 0);
HUD::LINK_NAMED_RENDERTARGET(joaat("prop_npc_phone"));
}
uVar0=HUD::GET_NAMED_RENDERTARGET_RENDER_ID("npcphone");
}
HUD::SET_TEXT_RENDER_ID(uVar0);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, Global_20420, Global_20421, Global_20422, Global_20423, 255, 255, 255, 255, 0);
}}


void func_368(var uParam0, int iParam1, struct<3> Param2, float fParam3){
func_164(uParam0);
*uParam0=OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
}

int func_369(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
return 1;
}
return 0;
}


void func_370(var uParam0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_371());
}


char* func_371(){
return "CELLPHONE_CUTSCENE";
}

int func_372(){
return func_365(911.5349f, 3642.111f, 31.64738f, 8f);
}


void func_373(var uParam0){
struct<3> Var0;
char* sVar1;
int iVar2;
struct<3> Var3;
struct<3> Var4;
int iVar5;
int iVar6;
int iVar7;
sVar1="misstrvram_1";
iVar2=28422;
Var3={
0f, 0f, 0f 
};
Var4={
0f, 0f, -0.1f 
};
iVar5=joaat("ig_ramp_hic");
iVar6=joaat("prop_table_03b_chr");
iVar7=joaat("prop_beer_bottle");
STREAMING::REQUEST_MODEL(iVar5);
STREAMING::REQUEST_MODEL(iVar6);
STREAMING::REQUEST_MODEL(iVar7);
STREAMING::REQUEST_ANIM_DICT(sVar1);
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
while ((((!STREAMING::HAS_MODEL_LOADED(iVar5) || !STREAMING::HAS_MODEL_LOADED(iVar6)) || !STREAMING::HAS_MODEL_LOADED(iVar7)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1)) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))){
wait(0);
}
while (!func_359(&(uParam0->f_28[0]), iVar5, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0)){
wait(0);
}
if(func_137(uParam0->f_28[0])){
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 1, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 7, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 10, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 0, 0, 0);
Var0={
PED::GET_PED_BONE_COORDS(uParam0->f_28[0], iVar2, 0f, 0f, 0f) 
};
PED::SET_PED_NAME_DEBUG(uParam0->f_28[0], "RAMP:PED 0");
func_368(&(uParam0->f_41[1]), iVar7, Var0, 0f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], iVar2), Var4, Var3, 1, 1, 0, 0, 2, 1, 0);
OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[1], 1);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], joaat("player"));
}
while (!func_359(&(uParam0->f_28[1]), iVar5, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0)){
wait(0);
}
if(func_137(uParam0->f_28[1])){
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 1, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 5, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 6, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 9, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 10, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
Var0={
PED::GET_PED_BONE_COORDS(uParam0->f_28[1], iVar2, 0f, 0f, 0f) 
};
PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "RAMP:PED 1");
func_368(&(uParam0->f_41[2]), iVar7, Var0, 0f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], iVar2), Var4, Var3, 1, 1, 0, 0, 2, 1, 0);
OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0->f_41[2], 1);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[1], 1);
PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 208, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], joaat("player"));
}
uParam0->f_41[3]=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(909.3884f, 3643.652f, 31.699f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3])){
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
}
uParam0->f_41[4]=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[4])){
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[4], 1);
}
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59)){
uParam0->f_59=PED::CREATE_SYNCHRONIZED_SCENE(910.13f, 3643.74f, 31.69f, 0f, 0f, func_355(-0.26f), 2);
if(func_137(uParam0->f_28[0])){
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, sVar1, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
}
if(func_137(uParam0->f_28[1])){
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, sVar1, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
}
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
}
if(!func_286(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f)){}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
uParam0->f_27=0;
}

int func_374(int iParam0){
if(!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
return 1;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
return 1;
}
if(func_190(iParam0)){
return 1;
}
return 0;
}

int func_375(int iParam0){
struct<27> Var0;
bool bVar1;
func_120(iParam0, &Var0);
bVar1=func_237();
if(bVar1==145){
return 1;
}elseif((bVar1 !=1 && bVar1 !=0) && bVar1 !=2){
return 1;
}
if(!MISC::IS_BIT_SET(Var0.f_26, bVar1)){
return 1;
}
return 0;
}

int func_376(int iParam0, var uParam1, struct<3> Param2, float fParam3){
int iVar0;
if(*iParam0==1){
if(func_377((*iParam0)[0], Param2, fParam3, uParam1)){
return 1;
}}else{
iVar0=0;
while (iVar0 < *iParam0){
if(func_377((*iParam0)[iVar0], Param2, fParam3, uParam1)){
iVar0=*iParam0;
return 1;
}
iVar0++;
}}
func_395("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
return 0;
}

int func_377(int iParam0, struct<3> Param1, float fParam2, var uParam3){
int iVar0;
struct<7> Var1;
iVar0=0;
func_120(iParam0, &Var1);
if(func_378(Var1.f_6, Param1, fParam2, 0)){
if(MISC::IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 0)){
if(!MISC::IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 3)){
iVar0=1;
}}
if(func_200(iParam0)){
iVar0=1;
}}
if(iVar0==1){
*uParam3=iParam0;
StringCopy(&(uParam3->f_1), Var1.f_0, 32);
return 1;
}
return 0;
}

int func_378(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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

int func_379(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_99.f_58[iParam0];
}


void func_380(var* uParam0, bool bParam1){
func_282(uParam0);
if(bParam1){
func_395(" SCRIPT TERMINATING:
Cleaning up entities in Launcher");
func_383(uParam0, 0, 0, 0);
}
func_382(&(uParam0->f_48));
if(iLocal_239 !=-1){
func_395("SCRIPT TERMINATING:
Ending off-mission cutscene request");
func_279(&iLocal_239);
}
if(iLocal_249 !=0){
if(*uParam0==55 || *uParam0==53){
PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_249, 0);
}}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(0);
}
if(iLocal_243){
if(func_2("RAMP_HELP_TRIG")){
HUD::CLEAR_HELP(1);
iLocal_243=0;
}}
func_381();
func_395("SCRIPT TERMINATED");
Global_98085=0;
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_381(){
func_395("Running end routines.");
Global_113528=(Global_113528 - 1);
}

int func_382(var uParam0){
if(func_162(uParam0)){
if(STREAMING::HAS_ANIM_DICT_LOADED(*uParam0)){
STREAMING::REMOVE_ANIM_DICT(*uParam0);
*uParam0="";
uParam0->f_1="";
return 1;
}}
return 0;
}


void func_383(var uParam0, int iParam1, bool bParam2, bool bParam3){
func_391(uParam0, iParam1);
func_387(uParam0, bParam2);
func_384(uParam0, bParam3);
}


void func_384(var uParam0, bool bParam1){
func_385(&(uParam0->f_41), bParam1);
}


void func_385(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_164(uParam0[iVar0]);
}else{
func_386(uParam0[iVar0], 0);
}
iVar0++;
}}


void func_386(var uParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}
if(!bParam1){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
}else{
OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*uParam0);
}}}


void func_387(var uParam0, bool bParam1){
func_388(&(uParam0->f_35), bParam1);
}


void func_388(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_390(uParam0[iVar0]);
}else{
func_389(uParam0[iVar0]);
}
iVar0++;
}}


void func_389(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::IS_ENTITY_DEAD(*uParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
}}}


void func_390(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
}
if(func_168(*uParam0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1)){
if(func_137(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(uParam0);
}}else{
if(func_137(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(uParam0);
}}}


void func_391(var uParam0, int iParam1){
func_392(&(uParam0->f_28), iParam1);
}


void func_392(var uParam0, int iParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(iParam1==1){
func_394(uParam0[iVar0]);
}else{
func_393(uParam0[iVar0], 0, 1, 0);
}
iVar0++;
}}


void func_393(var uParam0, int iParam1, int iParam2, int iParam3){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!PED::IS_PED_INJURED(*uParam0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
if(iParam3==0){
TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
}
PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
if(iParam2==1){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
}}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
}}


void func_394(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
}
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
}
PED::DELETE_PED(uParam0);
}}


void func_395(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){}}


void func_396(var uParam0){
*uParam0=-1;
StringCopy(&(uParam0->f_1), "", 32);
uParam0->f_15=12f;
uParam0->f_16=6;
uParam0->f_25=0;
uParam0->f_26=0;
uParam0->f_27=0;
}


void func_397(){
func_395("Running start routines.");
Global_113528++;
}