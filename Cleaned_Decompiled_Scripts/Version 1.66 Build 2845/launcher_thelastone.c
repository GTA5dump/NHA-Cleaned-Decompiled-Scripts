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
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
int iLocal_35=0;
var uLocal_36=0;
struct<4> Local_37[10];
bool bLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
int iLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
int iLocal_51=0;
int iLocal_52=0;
int iLocal_53=0;
var uLocal_54=0;
struct<2> Local_55={
0, 5 
};
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=5;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
#endregion

void __EntryFunction__(){
struct<42> Var0;
struct<3> Var1;
int iVar2[1];
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
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
iLocal_42=1;
iLocal_43=65;
iLocal_44=49;
iLocal_45=64;
uLocal_49=HUD::GET_STANDARD_BLIP_ENUM_ID();
uLocal_50=HUD::GET_WAYPOINT_BLIP_ENUM_ID();
iLocal_52=joaat("ig_hunter");
iLocal_53=-1;
MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(1);
func_276();
Var0.f_17=2;
Var0.f_28=6;
Var0.f_35=5;
Var0.f_41=6;
Var1={
0f, 0f, 0f 
};
func_275(&Var0);
Var1={
ScriptParam_55.f_1[0 /*3*/] 
};
iVar2[0]=57;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83)){
func_274("Force cleanup [TERMINATING]");
if(Var0.f_0 !=-1){
if(Global_112735[Var0.f_0 /*10*/].f_9 !=-1){
func_274("Relinquishing candidate id...");
func_273(&(Global_112735[Var0.f_0 /*10*/].f_9));
}}
func_260(&Var0, 1);
}
if(!func_257(&iVar2, &Var0, Var1, 1f)){
func_256();
func_274("SCRIPT TERMINATED");
SCRIPT::TERMINATE_THIS_THREAD();
}
if(!func_248(Var0.f_0)){
func_256();
func_274("SCRIPT TERMINATED");
SCRIPT::TERMINATE_THIS_THREAD();
}
if(func_247(Var0.f_0)){
func_256();
func_274("SCRIPT TERMINATED");
SCRIPT::TERMINATE_THIS_THREAD();
}
while (!func_242(&Var0)){
wait(0);
if(!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
func_274("Player out of range [TERMINATING]");
func_260(&Var0, 1);
}}
MISC::CLEAR_AREA(Var1, Var0.f_15, 1, 0, 0, 0);
while (true){
wait(0);
if(!func_204(&Var0, 1)){
func_260(&Var0, 1);
}
func_203(Var0.f_0);
func_196(&iLocal_53, &uLocal_54, &(Var0.f_9), Var1, -1295.84f, 4641.98f, 105.33f, -1301.43f, 4641.21f, 105.62f);
func_189(&Var0, Var1, "SAS1AUD", "SAS1_AMB", 4, "HUNTER", 10000);
if(func_174(&Var0, 0)){
if(!func_2(&Var0)){
func_260(&Var0, 1);
}
if(func_1(&Var0)){
func_260(&Var0, 0);
}}}}

int func_1(int iParam0){
while (!Global_112735[*iParam0 /*10*/]){
wait(0);
}
return 1;
}

int func_2(var* uParam0){
struct<4> Var0;
char* sVar1;
if(!func_173()){
while (!func_164(*uParam0)){
if(func_163(*uParam0)){
func_152();
}
if(!func_204(uParam0, *uParam0 !=2)){
func_274("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
return 0;
}
wait(0);
}}
if(func_151()){
func_149();
}
if(!func_118(uParam0)){
func_274("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
return 0;
}
func_115(*uParam0, &Var0);
MemCopy(&sVar1,{
func_114(*uParam0)
}
, 4);
func_112(&sVar1, Var0.f_3, 0);
func_109(*uParam0);
if(!func_173()){
if(uParam0->f_16==2){
func_22(&(uParam0->f_1), 0);
}else{
func_22(&(uParam0->f_1), 1);
}}
func_3(*uParam0, Var0.f_0);
return 1;
}


void func_3(int iParam0, char* sParam1){
func_21(sParam1);
MISC::CLEAR_BIT(&(Global_113648.f_18576[iParam0 /*6*/]), 5);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
func_19();
wait(0);
}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1){
Global_63363=0;
SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher")){
wait(0);
}
start_new_script("mission_stat_watcher", 1828);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
}
while (!MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 5)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
MISC::SET_BIT(&(Global_113648.f_18576[iParam0 /*6*/]), 5);
}}
func_4(iParam0);
}


void func_4(int iParam0){
int iVar0;
int iVar1;
if(Global_63360==1){
func_18();
Global_63360=0;
if(Global_63355){
return;
}}
if(Global_3){
Global_63363=1;
func_10();
return;
}
MemCopy(&Global_63377,{
func_9(iParam0)
}
, 4);
Global_63365=0;
Global_63364=0;
switch (iParam0){
case 1:
case 9:
Global_63352=1;
Global_63355=1;
Global_63358=1;
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
Global_63363=1;
Global_63364=1;
func_10();
func_19();
return;
break;
}
iVar0=Global_75607;
Global_75607=1;
iVar1=Global_75608;
Global_75608=iParam0;
if(!Global_63352){
if((Global_75608 !=iVar1 || Global_75457==0) || iVar0 !=Global_75607){
Global_32417=0;
func_10();
func_6(iParam0);
}else{
Global_63355=1;
}}
Global_63390=MISC::GET_GAME_TIMER();
func_5();
Global_63362=0;
}


void func_5(){
int iVar0;
if(!Global_63359){
return;
}
if(Global_75457==0){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_75457){
switch (Global_63587[Global_75458[iVar0 /*9*/] /*13*/]){
case 1:
case 9:
Global_75458[iVar0 /*9*/].f_3=1;
break;
case 4:
if(Global_63370){
Global_75458[iVar0 /*9*/].f_3=1;
}
break;
case 6:
if(Global_63587[Global_75458[iVar0 /*9*/] /*13*/].f_3){
if(Global_75458[iVar0 /*9*/].f_1 !=0){
Global_75458[iVar0 /*9*/].f_3=1;
}}
break;
}
iVar0++;
}
Global_63359=0;
}


void func_6(int iParam0){
switch (iParam0){
case 2:
func_7(741);
func_7(742);
return;
case 3:
func_7(743);
func_7(744);
return;
case 5:
func_7(745);
func_7(746);
return;
case 6:
func_7(747);
func_7(748);
return;
case 8:
func_7(749);
return;
case 12:
func_7(750);
return;
case 14:
func_7(751);
func_7(752);
return;
case 16:
func_7(753);
func_7(754);
return;
case 17:
func_7(755);
func_7(756);
func_7(757);
return;
case 18:
func_7(758);
func_7(759);
return;
case 19:
func_7(760);
func_7(761);
return;
case 20:
func_7(762);
return;
case 21:
func_7(763);
return;
case 22:
func_7(764);
func_7(765);
return;
case 23:
func_7(766);
return;
case 25:
func_7(767);
func_7(768);
func_7(769);
return;
case 26:
func_7(770);
func_7(771);
return;
case 28:
func_7(772);
func_7(773);
return;
case 29:
func_7(774);
func_7(775);
return;
case 30:
func_7(776);
func_7(777);
return;
case 32:
func_7(778);
func_7(779);
return;
case 33:
func_7(780);
func_7(781);
func_7(782);
return;
case 34:
func_7(783);
func_7(784);
return;
case 38:
func_7(785);
func_7(786);
return;
case 39:
func_7(787);
func_7(788);
return;
case 40:
func_7(789);
return;
case 41:
func_7(790);
func_7(791);
func_7(792);
return;
case 42:
func_7(793);
func_7(794);
func_7(795);
return;
case 43:
func_7(796);
func_7(797);
return;
case 46:
func_7(798);
func_7(799);
return;
default:
}
switch (iParam0){
case 47:
func_7(800);
func_7(801);
return;
case 49:
func_7(802);
func_7(803);
return;
case 50:
func_7(804);
func_7(805);
return;
case 51:
func_7(806);
return;
case 57:
func_7(807);
func_7(808);
func_7(809);
return;
case 58:
func_7(828);
func_7(829);
func_7(830);
return;
case 59:
func_7(831);
func_7(832);
func_7(833);
return;
case 60:
func_7(834);
func_7(835);
func_7(836);
return;
case 61:
func_7(837);
func_7(838);
func_7(839);
return;
case 62:
func_7(840);
func_7(841);
func_7(842);
return;
case 24:
func_7(843);
func_7(844);
func_7(845);
return;
default:
}}


void func_7(int iParam0){
Global_63355=1;
Global_63358=1;
if(Global_75457 > 15){
return;
}
func_8(Global_75457);
Global_75458[Global_75457 /*9*/]=iParam0;
Global_75457++;
if(Global_63587[iParam0 /*13*/]==16){
Global_75609=1;
}}


void func_8(int iParam0){
Global_75458[iParam0 /*9*/].f_1=0;
Global_75458[iParam0 /*9*/].f_2=0f;
Global_75458[iParam0 /*9*/].f_3=0;
Global_75458[iParam0 /*9*/].f_4=0;
}


struct<2> func_9(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_114(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


void func_10(){
if(Global_63362){
return;
}
Global_63371=0;
Global_75457=0;
Global_63373=0;
if(Global_63370){}
Global_63370=0;
func_17(0);
func_16();
Global_75609=0;
Global_63361=1;
func_14();
func_13();
func_12();
func_11();
Global_63352=0;
Global_63382=0;
Global_63390=-1;
}


void func_11(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 4){
Global_75644[iVar0 /*2*/].f_1=-1;
iVar0++;
}
Global_75653=0;
}


void func_12(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
Global_75610[iVar0 /*2*/]=0;
Global_75610[iVar0 /*2*/].f_1=-1;
iVar0++;
}
Global_75643=0;
}


void func_13(){
Global_63521=0;
}


void func_14(){
Global_63381=0;
Global_63385=func_15(joaat("sp0_shots"));
Global_63384=func_15(joaat("sp0_hits"));
Global_63387=func_15(joaat("sp1_shots"));
Global_63386=func_15(joaat("sp1_hits"));
Global_63389=func_15(joaat("sp2_shots"));
Global_63388=func_15(joaat("sp2_hits"));
}


var func__15(int iParam0){
var uVar0;
STATS::STAT_GET_INT(iParam0, &uVar0, -1);
return uVar0;
}


void func_16(){
int iVar0;
Global_63391=0;
iVar0=0;
iVar0=0;
while (iVar0 < 64){
Global_63392[iVar0 /*2*/]=0;
iVar0++;
}}


void func_17(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}


void func_18(){
int iVar0;
Global_63360=1;
iVar0=0;
iVar0=0;
while (iVar0 < Global_75457){
Global_75458[iVar0 /*9*/].f_3=2;
iVar0++;
}
if(Global_63370){}
Global_63370=0;
}


void func_19(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
if(func_20()){
if(Global_63357 && !Global_63356){
Global_63357=0;
MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
}}else{
MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
}}}

int func_20(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1){
return 0;
}
if(!Global_63355){
return 0;
}
return Global_63367;
}


void func_21(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL(sParam0, sParam0)){}}


void func_22(char[4] cParam0, int iParam1){
MISC::CLEAR_BIT(&(Global_100681.f_20), 17);
func_23(cParam0, iParam1, 0);
}


void func_23(char[4] cParam0, int iParam1, int iParam2){
if(Global_100681 !=10 && Global_100681 !=9){
StringCopy(&Global_104204, cParam0, 32);
func_25(&Global_104212, cParam0, 0, "Start", iParam1, iParam2);
func_24();
Global_94859=0;
}}


void func_24(){
int iVar0;
int iVar1;
Global_107196=Global_104212;
Global_107196.f_1=Global_104212.f_1;
Global_107196.f_6=Global_104212.f_6;
Global_107196.f_7=Global_104212.f_7;
Global_107196.f_8=Global_104212.f_8;
Global_107196.f_2=Global_104212.f_2;
Global_107196.f_3=Global_104212.f_3;
Global_107196.f_4=Global_104212.f_4;
Global_107196.f_5=Global_104212.f_5;
iVar1=0;
while (iVar1 < 3){
Global_107196.f_9[iVar1]=Global_104212.f_9[iVar1];
Global_107196.f_13[iVar1]=Global_104212.f_13[iVar1];
Global_107196.f_17[iVar1]=Global_104212.f_17[iVar1];
Global_107196.f_21[iVar1]=Global_104212.f_21[iVar1];
Global_107196.f_25[0 /*295*/][iVar1 /*98*/]={
Global_104212.f_25[0 /*295*/][iVar1 /*98*/] 
};
Global_107196.f_25[1 /*295*/][iVar1 /*98*/]={
Global_104212.f_25[1 /*295*/][iVar1 /*98*/] 
};
iVar0=0;
while (iVar0 < 12){
Global_107196.f_616[iVar1 /*65*/][iVar0]=Global_104212.f_616[iVar1 /*65*/][iVar0];
Global_107196.f_616[iVar1 /*65*/].f_13[iVar0]=Global_104212.f_616[iVar1 /*65*/].f_13[iVar0];
Global_107196.f_616[iVar1 /*65*/].f_26[iVar0]=Global_104212.f_616[iVar1 /*65*/].f_26[iVar0];
iVar0++;
}
Global_107196.f_616[iVar1 /*65*/].f_59=Global_104212.f_616[iVar1 /*65*/].f_59;
Global_107196.f_616[iVar1 /*65*/].f_60=Global_104212.f_616[iVar1 /*65*/].f_60;
Global_107196.f_616[iVar1 /*65*/].f_61=Global_104212.f_616[iVar1 /*65*/].f_61;
Global_107196.f_616[iVar1 /*65*/].f_62=Global_104212.f_616[iVar1 /*65*/].f_62;
Global_107196.f_616[iVar1 /*65*/].f_63=Global_104212.f_616[iVar1 /*65*/].f_63;
Global_107196.f_616[iVar1 /*65*/].f_64=Global_104212.f_616[iVar1 /*65*/].f_64;
iVar0=0;
while (iVar0 < 9){
Global_107196.f_616[iVar1 /*65*/].f_39[iVar0]=Global_104212.f_616[iVar1 /*65*/].f_39[iVar0];
Global_107196.f_616[iVar1 /*65*/].f_49[iVar0]=Global_104212.f_616[iVar1 /*65*/].f_49[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 < 44){
Global_107196.f_812[iVar1 /*477*/][iVar0 /*5*/]={
Global_104212.f_812[iVar1 /*477*/][iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
Global_107196.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]={
Global_104212.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 4){
Global_107196.f_2244[iVar1 /*32*/][iVar0]=Global_104212.f_2244[iVar1 /*32*/][iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_107196.f_2244[iVar1 /*32*/].f_5[iVar0]=Global_104212.f_2244[iVar1 /*32*/].f_5[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
Global_107196.f_2244[iVar1 /*32*/].f_16[iVar0]=Global_104212.f_2244[iVar1 /*32*/].f_16[iVar0];
iVar0++;
}
Global_107196.f_2341[iVar1]=Global_104212.f_2341[iVar1];
iVar0=0;
while (iVar0 <=3){
Global_107196.f_2838[iVar1 /*15*/][iVar0]=Global_104212.f_2838[iVar1 /*15*/][iVar0];
Global_107196.f_2838[iVar1 /*15*/].f_5[iVar0]=Global_104212.f_2838[iVar1 /*15*/].f_5[iVar0];
Global_107196.f_2838[iVar1 /*15*/].f_10[iVar0]=Global_104212.f_2838[iVar1 /*15*/].f_10[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
Global_107196.f_2345[iVar1 /*164*/][iVar0]=Global_104212.f_2345[iVar1 /*164*/][iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_4[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_4[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_8[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_8[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_12[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_12[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_16[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_16[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_20[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_20[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_24[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_24[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_28[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_28[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_32[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_32[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_36[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_36[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_40[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_40[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_44[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_44[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_48[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_48[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_52[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_52[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_56[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_56[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_60[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_60[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_64[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_64[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_68[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_68[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_72[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_72[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_76[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_76[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_80[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_80[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_84[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_84[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_88[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_88[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_92[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_92[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_96[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_96[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_100[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_100[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_104[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_104[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_108[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_108[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_112[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_112[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_116[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_116[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_120[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_120[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_124[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_124[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_128[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_128[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_132[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_132[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_136[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_136[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_140[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_140[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_144[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_144[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_148[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_148[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_152[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_152[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_156[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_156[iVar0];
Global_107196.f_2345[iVar1 /*164*/].f_160[iVar0]=Global_104212.f_2345[iVar1 /*164*/].f_160[iVar0];
iVar0++;
}
iVar1++;
}
Global_107196.f_2884={
Global_104212.f_2884 
};
Global_107196.f_2884.f_3=Global_104212.f_2884.f_3;
Global_107196.f_2890={
Global_104212.f_2890 
};
Global_107196.f_2890.f_3={
Global_104212.f_2890.f_3 
};
Global_107196.f_2890.f_6=Global_104212.f_2890.f_6;
Global_107196.f_2890.f_8=Global_107196.f_2890.f_8;
Global_107196.f_2890.f_7=Global_104212.f_2890.f_7;
Global_107196.f_2890.f_9=Global_104212.f_2890.f_9;
Global_107196.f_2890.f_11=Global_104212.f_2890.f_11;
Global_107196.f_2890.f_10=Global_104212.f_2890.f_10;
Global_107196.f_2890.f_12=Global_104212.f_2890.f_12;
Global_107196.f_2890.f_12.f_1={
Global_104212.f_2890.f_12.f_1 
};
Global_107196.f_2890.f_12.f_5=Global_104212.f_2890.f_12.f_5;
Global_107196.f_2890.f_12.f_6=Global_104212.f_2890.f_12.f_6;
Global_107196.f_2890.f_12.f_7=Global_104212.f_2890.f_12.f_7;
Global_107196.f_2890.f_12.f_8=Global_104212.f_2890.f_12.f_8;
Global_107196.f_2890.f_12.f_9={
Global_104212.f_2890.f_12.f_9 
};
Global_107196.f_2890.f_12.f_59={
Global_104212.f_2890.f_12.f_59 
};
Global_107196.f_2890.f_12.f_62=Global_104212.f_2890.f_12.f_62;
Global_107196.f_2890.f_12.f_63=Global_104212.f_2890.f_12.f_63;
Global_107196.f_2890.f_12.f_64=Global_104212.f_2890.f_12.f_64;
Global_107196.f_2890.f_12.f_65=Global_104212.f_2890.f_12.f_65;
Global_107196.f_2890.f_12.f_77=Global_104212.f_2890.f_12.f_77;
Global_107196.f_2890.f_12.f_66=Global_104212.f_2890.f_12.f_66;
Global_107196.f_2890.f_12.f_67=Global_104212.f_2890.f_12.f_67;
Global_107196.f_2890.f_12.f_68=Global_104212.f_2890.f_12.f_68;
Global_107196.f_2890.f_12.f_69=Global_104212.f_2890.f_12.f_69;
Global_107196.f_2890.f_12.f_71=Global_104212.f_2890.f_12.f_71;
Global_107196.f_2890.f_12.f_72=Global_104212.f_2890.f_12.f_72;
Global_107196.f_2890.f_12.f_73=Global_104212.f_2890.f_12.f_73;
Global_107196.f_2890.f_12.f_74=Global_104212.f_2890.f_12.f_74;
Global_107196.f_2890.f_12.f_75=Global_104212.f_2890.f_12.f_75;
Global_107196.f_2890.f_12.f_76=Global_104212.f_2890.f_12.f_76;
Global_107196.f_2980=Global_104212.f_2980;
Global_107196.f_2980.f_1=Global_104212.f_2980.f_1;
Global_107196.f_2980.f_2=Global_104212.f_2980.f_2;
Global_107196.f_2980.f_3=Global_104212.f_2980.f_3;
}


void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
*uParam0=func_108();
uParam0->f_1=func_97();
MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_66(&(uParam0->f_2884), 0);
func_65(PLAYER::PLAYER_PED_ID());
func_58(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
if(uParam0->f_2==0 || uParam0->f_2==joaat("object")){
uParam0->f_2=joaat("weapon_unarmed");
}}
iVar1=0;
while (iVar1 < 3){
uParam0->f_17[iVar1]=Global_113648.f_2365.f_539.f_294[iVar1];
if(iVar1==func_55()){
func_48(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
}else{
iVar0=0;
while (iVar0 < 12){
uParam0->f_616[iVar1 /*65*/][iVar0]=Global_100406[iVar1 /*65*/][iVar0];
uParam0->f_616[iVar1 /*65*/].f_13[iVar0]=Global_100406[iVar1 /*65*/].f_13[iVar0];
iVar0++;
}
uParam0->f_616[iVar1 /*65*/].f_59=Global_100406[iVar1 /*65*/].f_59;
uParam0->f_616[iVar1 /*65*/].f_60=Global_100406[iVar1 /*65*/].f_60;
uParam0->f_616[iVar1 /*65*/].f_61=Global_100406[iVar1 /*65*/].f_61;
uParam0->f_616[iVar1 /*65*/].f_62=Global_100406[iVar1 /*65*/].f_62;
uParam0->f_616[iVar1 /*65*/].f_63=Global_100406[iVar1 /*65*/].f_63;
uParam0->f_616[iVar1 /*65*/].f_64=Global_100406[iVar1 /*65*/].f_64;
iVar0=0;
while (iVar0 < 9){
uParam0->f_616[iVar1 /*65*/].f_39[iVar0]=Global_100406[iVar1 /*65*/].f_39[iVar0];
uParam0->f_616[iVar1 /*65*/].f_49[iVar0]=Global_100406[iVar1 /*65*/].f_49[iVar0];
iVar0++;
}}
iVar0=0;
while (iVar0 < 44){
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/]={
Global_113648.f_2365.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]={
Global_113648.f_2365.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] 
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
uParam0->f_9[iVar1]=Global_113648.f_20566.f_233[iVar1 /*69*/].f_1;
uParam0->f_13[iVar1]=Global_60536[iVar1];
uParam0->f_25[0 /*295*/][iVar1 /*98*/]={
Global_113648.f_2365.f_539.f_2407[0 /*295*/][iVar1 /*98*/] 
};
uParam0->f_25[1 /*295*/][iVar1 /*98*/]={
Global_113648.f_2365.f_539.f_2407[1 /*295*/][iVar1 /*98*/] 
};
iVar0=0;
while (iVar0 <=3){
uParam0->f_2838[iVar1 /*15*/][iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/][iVar0];
uParam0->f_2838[iVar1 /*15*/].f_5[iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/].f_5[iVar0];
uParam0->f_2838[iVar1 /*15*/].f_10[iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/].f_10[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
uParam0->f_2345[iVar1 /*164*/][iVar0]=Global_113648.f_2365[iVar1 /*164*/][iVar0];
uParam0->f_2345[iVar1 /*164*/].f_4[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_4[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_8[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_8[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_12[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_12[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_16[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_16[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_20[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_20[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_24[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_24[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_28[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_28[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_32[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_32[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_36[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_36[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_40[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_40[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_44[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_44[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_48[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_48[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_52[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_52[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_56[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_56[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_60[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_60[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_64[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_64[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_68[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_68[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_72[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_72[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_76[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_76[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_80[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_80[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_84[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_84[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_88[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_88[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_92[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_92[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_96[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_96[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_100[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_100[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_104[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_104[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_108[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_108[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_112[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_112[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_116[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_116[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_120[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_120[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_124[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_124[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_128[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_128[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_132[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_132[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_136[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_136[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_140[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_140[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_144[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_144[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_148[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_148[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_152[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_152[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_156[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_156[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_160[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_160[iVar0];
iVar0++;
}
iVar1++;
}
STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
uParam0->f_5=145;
if(iParam4==1){
func_27(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
}
func_26(&(uParam0->f_2980));
sParam3=sParam3;
iParam2=iParam2;
}

int func_26(var uParam0){
*uParam0=Global_96530;
uParam0->f_1=Global_96531;
uParam0->f_2=0;
uParam0->f_3=0;
return 1;
}


void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(iParam2==0){
iParam2=PLAYER::PLAYER_PED_ID();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam2)){
uParam1->f_5=func_45(iParam2);
}
if(func_42(iParam2, &iVar0, iParam3, iParam5)){
func_28(uParam0, uParam1, iVar0, iParam4);
}elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
func_28(uParam0, uParam1, iVar0, iParam4);
}}}}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0)){
func_30(uParam0, iParam2, iParam3);
uParam1->f_4=iParam2;
if(func_29(iParam2)){
uParam1->f_3=1;
}else{
uParam1->f_3=0;
}
return 1;
}
return 0;
}

int func_29(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=6){
if(Global_100681.f_22[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_30(var uParam0, int iParam1, int iParam2){
func_37(iParam1, &(uParam0->f_12));
uParam0->f_7=func_33(iParam1, 145, 0);
uParam0->f_11=func_32(iParam1);
if(!uParam0->f_7){
if(!uParam0->f_10){
uParam0->f_10=func_31(iParam1);
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
if(Global_78253==iParam1){
uParam0->f_9=1;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_8=1;
}else{
uParam0->f_8=0;
}}

int func_31(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0])){
if(iParam0==Global_77348.f_484[iVar0]){
return 1;
}}
iVar0++;
}
return 0;
}

int func_32(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
if(Global_98012[iVar0]==iParam0){
return Global_98022[iVar0];
}}
iVar0++;
}
return 145;
}

int func_33(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
if(Global_98012[iVar0]==iParam0){
if(bParam1==145 || bParam1==Global_98022[iVar0]){
if(iParam2==0 || ENTITY::GET_ENTITY_MODEL(iParam0)==func_34(bParam1, iParam2)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_34(bool bParam0, int iParam1){
struct<82> Var0;
if(func_36(bParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_35(bParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(bParam0 !=145){}
return 0;
}


void func_35(bool bParam0, var uParam1, int iParam2){
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
if(Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131]){
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
if(Global_113648.f_9087.f_99.f_58[119]){
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
}elseif(Global_113648.f_9087.f_99.f_58[118]){
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


bool func_36(bool bParam0){
return bParam0 < 3;
}


void func_37(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_41(uParam1);
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
if(uParam1->f_65==-1 && !func_40(uParam1->f_66)){
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
func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_38(iVar0 + 1));
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

int func_38(int iParam0){
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

int func_39(int iParam0, var uParam1, var uParam2){
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

int func_40(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_41(var uParam0){
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

int func_42(int iParam0, var uParam1, int iParam2, int iParam3){
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
if(func_43(*uParam1, func_108(), 1)){
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

int func_43(int iParam0, bool bParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_44(bParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113648.f_7231[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3){
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

int func_45(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_46(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_46(int iParam0){
if(func_36(iParam0)){
return func_47(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__47(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_48(int iParam0, var uParam1, int iParam2, int iParam3){
bool bVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_45(iParam0);
iVar1=0;
while (iVar1 < 12){
func_54(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
iVar1++;
}
iVar1=0;
while (iVar1 < 9){
func_53(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
iVar1++;
}
if(func_36(bVar0)){
uParam1->f_59=Global_113648.f_2365.f_539[bVar0 /*65*/].f_59;
uParam1->f_60=Global_113648.f_2365.f_539[bVar0 /*65*/].f_60;
uParam1->f_61=Global_113648.f_2365.f_539[bVar0 /*65*/].f_61;
uParam1->f_62=Global_113648.f_2365.f_539[bVar0 /*65*/].f_62;
uParam1->f_63=Global_113648.f_2365.f_539[bVar0 /*65*/].f_63;
uParam1->f_64=Global_113648.f_2365.f_539[bVar0 /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_52(161, iParam3)){
uParam1->f_59=func_49(2053, iParam3, 0);
}else{
uParam1->f_59=func_49(753, iParam3, 0);
}
uParam1->f_60=func_49(754, iParam3, 0);
uParam1->f_61=func_49(755, iParam3, 0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
if(func_52(161, iParam3)){
uParam1->f_59=func_49(2053, iParam3, 0);
}else{
uParam1->f_59=func_49(753, iParam3, 0);
}}}}

int func_49(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_50(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_50(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_51();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_51(){
return Global_1574918;
}

int func_52(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_50(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
iVar0=func_45(iParam0);
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


void func_54(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
iVar0=func_45(iParam0);
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

int func_55(){
func_56();
return Global_113648.f_2365.f_539.f_4321;
}


void func_56(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_46(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_45(PLAYER::PLAYER_PED_ID());
if(func_36(iVar0) && (!func_57(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_36(Global_113648.f_2365.f_539.f_4321)){
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


bool func_57(int iParam0){
return Global_43257==iParam0;
}


void func_58(int iParam0, bool bParam1){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
bVar0=func_45(iParam0);
if(func_36(bVar0) && !PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
func_59(iParam0, &(Global_113648.f_2365.f_539.f_298[bVar0 /*477*/]));
iVar2=0;
while (iVar2 <=(8 - 1)){
Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][bVar0]=HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
if(bParam1){
iVar1=HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
if(Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][bVar0]==iVar1){
Global_113648.f_2365.f_539.f_1763=iVar2;
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


void func_59(int iParam0, var uParam1){
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
iVar3=func_64(iVar0);
if(iVar3 !=0){
Var4.f_0=WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_64(iVar0));
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
iVar2=func_62(Var4.f_0, iVar1);
while (iVar2 !=0){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2)){
MISC::SET_BIT(&(Var4.f_2), iVar1);
}
iVar1++;
iVar2=func_62(Var4.f_0, iVar1);
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
if((FILES::GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_61(Var7.f_1)) && iVar9 < 51){
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
if(!func_60(Var8.f_3)){
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

int func_60(int iParam0){
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

int func_61(int iParam0){
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
return 1;
break;
}}
return 0;
}

int func_62(int iParam0, int iParam1){
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
default:
if(iParam0 !=0){
iVar1=func_63(iParam0, &uVar4);
if(iVar1 !=-1){
iVar2=0;
while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5)){
if(!func_60(Var5.f_3)){
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

int func_63(int iParam0, var uParam1){
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

int func_64(int iParam0){
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


void func_65(int iParam0){
bool bVar0;
bVar0=func_45(iParam0);
if(func_36(bVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113648.f_2365.f_539.f_294[bVar0]=PED::GET_PED_ARMOUR(iParam0);
}}


void func_66(var uParam0, int iParam1){
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
}elseif(MISC::IS_BIT_SET(Global_78807, 4)){
*uParam0={
452.0255f, 5571.85f, 780.1859f 
};
uParam0->f_3=78.9858f;
}elseif(MISC::IS_BIT_SET(Global_78807, 5)){
*uParam0={
-745.4462f, 5595.146f, 40.6594f 
};
uParam0->f_3=261.747f;
}elseif(MISC::IS_BIT_SET(Global_78807, 6)){
*uParam0={
-1675.521f, -1125.59f, 12.091f 
};
uParam0->f_3=271.8208f;
}elseif(MISC::IS_BIT_SET(Global_78807, 7)){
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
if(func_70(&iVar0)){
if(func_68(iVar0, &Var1, &uVar2)){
Var1.f_2=(Var1.f_2 + 1f);
*uParam0={
Var1 
};
uParam0->f_3=uVar2;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)){
bVar3=func_108();
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
}elseif(func_67(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)){
*uParam0={
279.4137f, -585.8815f, 43.2502f 
};
uParam0->f_3=48.8028f;
}}}

int func_67(struct<3> Param0, char* sParam1, struct<3> Param2){
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


bool func_68(int iParam0, var uParam1, var uParam2){
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
return !func_69(*uParam1, 0f, 0f, 0f, 0);
}


bool func_69(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_70(var uParam0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_96()){
*uParam0=func_76(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, -1, 0, 1, -1);
if(func_75(*uParam0) && !func_71(*uParam0)){
return 1;
}}}
return 0;
}


bool func_71(int iParam0){
return func_72(iParam0, 0, 1);
}

int func_72(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_74()==0){
return MISC::IS_BIT_SET(func_49(func_73(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_73(int iParam0){
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

int func_74(){
return Global_32163;
}

int func_75(int iParam0){
return func_72(iParam0, 5, 1);
}

int func_76(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=-1;
iVar0=0;
while (iVar0 <=59){
if(iParam1==6 || iParam1==func_95(iVar0)){
if(!bParam3 || func_94(iVar0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_77(iVar0, 0), 1);
if(((fVar1 < fVar2 && (fVar1 <=IntToFloat(iParam2) || iParam2==-1)) && (iParam4 || iVar0 !=21)) && iVar0 !=iParam5){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}


Vector3 func__77(int iParam0, bool bParam1){
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
return func_91(Global_102825);
break;
case 46:
if(Global_1853747 !=func_90()){
if(func_89(Global_1853747)){
return func_82(2, 2);
}elseif(func_81(Global_1853747)){
return func_82(45, 3);
}else{
return 1000000f, 1000000f, 1000000f;
}}else{
return 1000000f, 1000000f, 1000000f;
}
break;
case 47:
return 510.1f, 4749.5f, -69f;
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
return Global_1970473;
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
switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7){
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
return func_78();
break;
case 59:
return 560f, -405f, -69.6591f;
break;
}
return 1000000f, 1000000f, 1000000f;
}


Vector3 func__78(){
if(!func_80(Global_1956117)){
return Global_1956117;
}
switch (func_79()){
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

int func_79(){
return Global_2652258.f_2650;
}

int func_80(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_81(int iParam0){
if(iParam0 !=func_90()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}


Vector3 func__82(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
Var1={
1000000f, 1000000f, 1000000f 
};
if(Global_1853747 !=func_90()){
if(iParam1==3){
if(func_83(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(iParam1==2){
if(MISC::IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4)){
if(func_83(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(MISC::IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5)){
if(func_83(iParam0, 2, &Var0, 0, 0)){
Var1={
Var0 
};
}}}}
return Var1;
}

int func_83(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
struct<4> Var0;
struct<3> Var1;
struct<4> Var2;
struct<3> Var3;
if(!func_88(iParam3, &Var0)){
return 0;
}
if(!func_88(iParam1, &Var1)){
return 0;
}
if(!bParam4){
Var2={
func_86(iParam0) 
};
}else{
Var2={
func_85(iParam0) 
};
}
Var3={
Var2 - Var0 
};
Var3={
func_84(Var3, -Var0.f_3.f_2) 
};
Var3={
func_84(Var3, Var1.f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, 0f, Var3) 
};
uParam2->f_3={
Var2.f_3 
};
return 1;
}


Vector3 func__84(struct<3> Param0, float fParam1){
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


struct<6> func_85(int iParam0){
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


struct<6> func_86(int iParam0){
return func_87(iParam0);
}


struct<6> func_87(int iParam0){
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

int func_88(int iParam0, var uParam1){
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

int func_89(int iParam0){
if(iParam0 !=func_90()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 5)){
return 1;
}}
return 0;
}

int func_90(){
return -1;
}


Vector3 func__91(int iParam0){
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
return 520.0001f, 4750f, -70f;
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
if(func_92()==0){
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

int func_92(){
return func_93(PLAYER::PLAYER_ID());
}


var func__93(int iParam0){
return MISC::GET_BITS_IN_RANGE(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_94(int iParam0){
return func_72(iParam0, 0, 0);
}

int func_95(int iParam0){
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
}
return 6;
}


bool func_96(){
return Global_100733.f_387 > 0;
}


var func__97(){
var uVar0;
func_107(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_106(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_105(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_100(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_99(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_98(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_98(var uParam0, int iParam1){
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


void func_99(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_100(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_104(*uParam0);
iVar1=func_102(*uParam0);
if(iParam1 < 1 || iParam1 > func_101(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_101(int iParam0, int iParam1){
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


var func__102(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_103(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_104(var uParam0){
return uParam0 & 15;
}


void func_105(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_106(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_107(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}


bool func_108(){
func_56();
return Global_113648.f_2365.f_539.f_4321;
}


void func_109(int iParam0){
var uVar0;
char cVar1[24];
if(MISC::IS_XBOX360_VERSION() || func_111()){
uVar0=iParam0;
NETWORK::NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
}elseif(MISC::IS_PS3_VERSION() || func_110()){
StringCopy(&cVar1, "SPRC_", 24);
StringIntConCat(&cVar1, iParam0, 24);
StringConCat(&cVar1, "_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &cVar1);
}}


var func__110(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__111(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_112(char* sParam0, var uParam1, int iParam2){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97751, 0, 0, 0, 1, 0);
StringCopy(&Global_97751, "", 64);
}
StringCopy(&Global_97751, sParam0, 64);
STATS::PLAYSTATS_MISSION_STARTED(sParam0, uParam1, iParam2, func_113(0));
}

int func_113(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


struct<2> func_114(int iParam0){
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


void func_115(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_116(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
break;
case 1:
func_116(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
break;
case 2:
func_116(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
break;
case 3:
func_116(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
break;
case 4:
func_116(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_117(iParam0), 0, 0);
break;
case 5:
func_116(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 6:
func_116(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 7:
func_116(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_117(iParam0), 0, 0);
break;
case 8:
func_116(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
break;
case 9:
func_116(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
break;
case 10:
func_116(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
break;
case 11:
func_116(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
break;
case 12:
func_116(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
break;
case 13:
func_116(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
break;
case 14:
func_116(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_117(iParam0), 0, 1);
break;
case 15:
func_116(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
break;
case 16:
func_116(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
break;
case 17:
func_116(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 18:
func_116(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 19:
func_116(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 20:
func_116(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
break;
case 21:
func_116(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_117(iParam0), 1, 0);
break;
case 22:
func_116(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_117(iParam0), 1, 0);
break;
case 23:
func_116(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_117(iParam0), 0, 1);
break;
case 24:
func_116(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_117(iParam0), 0, 1);
break;
case 25:
func_116(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
break;
case 26:
func_116(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
break;
case 27:
func_116(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
break;
case 28:
func_116(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
break;
case 29:
func_116(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
break;
case 30:
func_116(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
break;
case 31:
func_116(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
break;
case 32:
func_116(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
break;
case 33:
func_116(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
break;
case 34:
func_116(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
break;
case 35:
func_116(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
break;
case 36:
func_116(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
break;
case 37:
func_116(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_117(iParam0), 1, 0);
break;
case 38:
func_116(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
break;
case 39:
func_116(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
break;
case 40:
func_116(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
break;
case 41:
func_116(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
break;
case 42:
func_116(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
break;
case 43:
func_116(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
break;
case 44:
func_116(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
break;
case 45:
func_116(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
break;
case 46:
func_116(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 47:
func_116(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 48:
func_116(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_117(iParam0), 0, 0);
break;
case 49:
func_116(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 50:
func_116(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 51:
func_116(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
break;
case 52:
func_116(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
break;
case 54:
func_116(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
break;
case 55:
func_116(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
break;
case 56:
func_116(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
break;
case 53:
func_116(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
break;
case 57:
func_116(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 58:
func_116(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 59:
func_116(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 60:
func_116(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 61:
func_116(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
case 62:
func_116(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
break;
default:
break;
}}


void func_116(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
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

int func_117(int iParam0){
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

int func_118(var* uParam0){
int iVar0;
if(func_148(&(uParam0->f_1))){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9))){
func_138(1);
func_136(uParam0, 1, func_137(*uParam0));
}
if(uParam0->f_27){
if(func_135(*uParam0)){
while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
func_152();
wait(0);
}}}
func_119(*uParam0);
iVar0=start_new_script_with_args(&(uParam0->f_1), uParam0, 61, 54000);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
func_274("Initial cutscene loaded and passing to RC mission.");
CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(iVar0);
}else{
func_274("Initial cutscene wasn't loaded in time to pass to RC mission.");
CUTSCENE::REMOVE_CUTSCENE();
}
return 1;
}
return 0;
}


void func_119(int iParam0){
struct<2> Var0;
func_134();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
}
if(func_133(iParam0)){
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
if(Global_44446==1){
if(func_131(PLAYER::PLAYER_PED_ID())){
func_122(PLAYER::PLAYER_PED_ID());
}}
if(!func_173()){
if(iParam0 < 63){
func_120(iParam0);
Var0={
func_9(iParam0) 
};
HUD::SET_MISSION_NAME(1, &Var0);
}}}


void func_120(int iParam0){
if(iParam0 < 63){
func_121();
Global_78814=iParam0;
Global_78813=0;
Global_78816=7;
}}


void func_121(){
if(Global_78813 !=6){}
if(Global_78818){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_78818=0;
Global_23270.f_8892=0;
}
Global_78813=6;
Global_78815=-1;
Global_78814=-1;
}


void func_122(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0==0){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
iVar0=func_130(iParam0);
if(!iVar0==-1){
iVar1=Global_44232[iVar0 /*5*/];
func_125(1, iVar1, 1);
return;
}
iVar2=func_124(iParam0);
if(iVar2==-1){
return;
}
func_123(iVar2);
}


void func_123(int iParam0){
if(iParam0 < 0 || iParam0 >=5){
return;
}
if(!Global_44206[iParam0 /*5*/].f_1==0){
if(Global_44206[iParam0 /*5*/].f_1==PLAYER::PLAYER_PED_ID()){
Global_44444=0;
}}
Global_44206[iParam0 /*5*/]=13;
Global_44206[iParam0 /*5*/].f_1=0;
Global_44206[iParam0 /*5*/].f_2=0;
Global_44206[iParam0 /*5*/].f_3=0;
Global_44206[iParam0 /*5*/].f_4=0;
Global_44204=(Global_44204 - 1);
if(Global_44204 < 0){
Global_44204=0;
}}

int func_124(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 5){
if(Global_44206[iVar0 /*5*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_125(int iParam0, int iParam1, int iParam2){
func_126(iParam0, iParam1, iParam2, 0, 0, 1);
}


void func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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
if(func_128(iParam0, iParam1, iParam2)){
return;
}
iVar0=func_127();
if(iVar0==-1){
return;
}
Global_44313[iVar0 /*6*/]=iParam0;
Global_44313[iVar0 /*6*/].f_1=iParam1;
Global_44313[iVar0 /*6*/].f_2=iParam2;
Global_44313[iVar0 /*6*/].f_3=iParam3;
Global_44313[iVar0 /*6*/].f_4=iParam4;
Global_44313[iVar0 /*6*/].f_5=iParam5;
}

int func_127(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(Global_44313[iVar0 /*6*/].f_2==6){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_128(int iParam0, int iParam1, int iParam2){
if(func_129(iParam0, iParam1, iParam2)==-1){
return 0;
}
return 1;
}

int func_129(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(iParam2==Global_44313[iVar0 /*6*/].f_2){
if(iParam0==Global_44313[iVar0 /*6*/]){
if(iParam1==Global_44313[iVar0 /*6*/].f_1){
return iVar0;
}}}
iVar0++;
}
return -1;
}

int func_130(int iParam0){
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

int func_131(int iParam0){
if(func_132(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}

int func_132(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_133(int iParam0){
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


void func_134(){
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

int func_135(int iParam0){
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


void func_136(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(func_132(uParam0->f_28[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(func_132(uParam0->f_35[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 6){
if(func_132(uParam0->f_41[iVar0])){
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

int func_137(int iParam0){
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


void func_138(bool bParam0){
var uVar0;
uVar0=PLAYER::GET_PLAYER_INDEX();
if(!PLAYER::IS_PLAYER_DEAD(uVar0)){
if(bParam0){
}
PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 16);
PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 32);
}
func_139(1, 1, 0, 0, 0, 0, 0);
}


void func_139(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_147(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_146()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_145(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_147(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_145(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_143(PLAYER::PLAYER_ID())) && !func_141(PLAYER::PLAYER_ID(), 0)) && !func_140()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_143(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_140(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


bool func_141(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_142(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_142(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_51();
}
if(Global_1575040[iVar1]==1){
if(bParam1){
}
iVar0=8;
}else{
iVar0=Global_1574912[iVar1];
if(bParam1){
}}
return iVar0;
}

int func_143(int iParam0){
if(func_141(iParam0, 0)){
return 1;
}
if(func_144()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_144(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_145(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_146(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_147(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}

int func_148(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
SCRIPT::REQUEST_SCRIPT(uParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
SCRIPT::REQUEST_SCRIPT(sParam0);
wait(0);
}
return 1;
}
func_274("Attempting to launch invalid script file [TERMINATING]");
return 0;
}


void func_149(){
Global_20591=0;
func_150();
}


void func_150(){
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

int func_151(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_152(){
func_157(0);
func_156();
func_153();
}


void func_153(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_154(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 1056964608, 0, 1, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_leave_any_vehicle")) !=1){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}}}}

int func_154(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
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
func_155(iParam0);
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


void func_155(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


void func_156(){
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


void func_157(int iParam0){
if(func_162()){
return;
}
if(!Global_20383.f_1==1){
if(func_161(0)){
func_158(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_158(int iParam0){
if(func_162()){
return;
}
if(Global_20584){
if(func_160()){
func_159(1, 1);
}else{
func_159(0, 0);
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
if(!func_146()){
Global_20383.f_1=3;
}}


void func_159(bool bParam0, bool bParam1){
if(bParam0){
if(func_161(0)){
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


bool func_160(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_161(int iParam0){
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


bool func_162(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_163(int iParam0){
if((((iParam0==52 || iParam0==53) || iParam0==54) || iParam0==55) || iParam0==56){
return 1;
}
return 0;
}

int func_164(int iParam0){
int iVar0;
if(iParam0==-1){
iParam0=func_171();
}
if(iParam0==-1){
return 0;
}
iVar0=func_166(&(Global_112735[iParam0 /*10*/].f_9), 1, 4, 0, 0);
if(!iVar0==1){
return 0;
}
func_165(iParam0);
return 1;
}


void func_165(int iParam0){
Global_112735[iParam0 /*10*/].f_4=1;
Global_112735[iParam0 /*10*/].f_5=0;
Global_112735[iParam0 /*10*/].f_6=0;
Global_112735[iParam0 /*10*/]=0;
}

int func_166(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98159.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_170(0)){
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
if(!func_168(iParam2)){
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
func_167(uParam0, iParam4);
}}
return 2;
}


void func_167(var uParam0, int iParam1){
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


bool func_168(int iParam0){
return func_169(iParam0, Global_43257);
}

int func_169(int iParam0, int iParam1){
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

int func_170(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_168(iParam0)){
return 0;
}
return 1;
}

int func_171(){
return func_172(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_172(var uParam0, int iParam1){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar2=MISC::GET_HASH_KEY(uParam0);
iVar3=0;
iVar3=0;
while (iVar3 < 63){
iVar0=iVar3;
func_115(iVar0, &uVar1);
if(MISC::GET_HASH_KEY(uVar1)==iVar2){
return iVar0;
}
iVar3++;
}
if(iParam1==0){}
return -1;
}

int func_173(){
if(Global_100681==10 || Global_100681==9){
return 1;
}
return 0;
}

int func_174(var uParam0, int iParam1){
switch (uParam0->f_16){
case 0:
if(*uParam0==12){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0)){
if(func_132(uParam0->f_28[0])){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], 1), 1) < 3f){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
func_274("ARE_RC_TRIGGER_CONDITIONS_MET:
RC_TRIG_CHAR - Used special case Eps 4 trigger.");
return 1;
}}
}}else{
return 0;
}}elseif(func_132(uParam0->f_28[0])){
if(func_176(uParam0)){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
return 1;
}
}}}else{
return 0;
}}elseif(*uParam0==21){
if((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0)){
if(func_132(uParam0->f_28[0])){
if(func_176(uParam0)){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
return 1;
}}
}}else{
return 0;
}}else{
return 0;
}}elseif(*uParam0==22){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0)){
if(func_132(uParam0->f_28[0])){
if(func_176(uParam0)){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
return 1;
}}
}}else{
return 0;
}}else{
return 0;
}}elseif(func_132(uParam0->f_28[0])){
if(func_176(uParam0)){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
return 1;
}}}}else{
return 0;
}
break;
case 2:
if(func_132(uParam0->f_35[0])){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_35[0], 0)){
if(func_180(3)){
func_177(uParam0->f_27, *uParam0);
return 1;
}}elseif(iParam1==1){
func_175();
}}else{
return 0;
}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0])){
if(!ENTITY::IS_ENTITY_DEAD(uParam0->f_35[0], 0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_35[0], 1), 1) < uParam0->f_15){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
return 1;
}
}}}}else{
return 0;
}
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
return 1;
}}}else{
return 0;
}
break;
case 4:
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0)){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
return 1;
}}}else{
return 0;
}
break;
case 5:
if(*uParam0==6){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_132(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck2"))){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_35[0])){
if(func_180(3)){
return 1;
}}
}
elseif((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob2"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob3"))){
if(VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_35[0])){
if(func_180(3)){
return 1;
}}
}}}}elseif(*uParam0==10){
if(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >=2f){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0)){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
func_274("RC5_IN_ACTIVATION_RANGE:
RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
return 1;
}
}}}}elseif(*uParam0==46){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0)){
return 0;
}}elseif(*uParam0==31){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0)){
if(func_180(2)){
if(func_178(1)){
func_177(1, *uParam0);
func_274("RC_IN_ACTIVATION_RANGE:
RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
return 1;
}}}}elseif(*uParam0==39){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0)){
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
func_274("RC_IN_ACTIVATION_RANGE:
RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
return 1;
}}
}}}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0)){
if(*uParam0==45){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0)){
return 0;
}}
if(func_180(2)){
if(func_178(uParam0->f_27)){
func_177(uParam0->f_27, *uParam0);
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


void func_175(){
func_27(&(Global_104212.f_2890), &Global_104212, 0, 1, 1, 0);
}

int func_176(var uParam0){
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


void func_177(int iParam0, int iParam1){
if(iParam0==1){
if(!func_135(iParam1)){
return;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_274("RC_STOP_PLAYER_VEHICLE_CHECK:
Stopping player's vehicle.");
if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
func_274("RC_STOP_PLAYER_VEHICLE_CHECK:
Turning off engine for plane or helicopter.");
VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 1, 0);
}
func_152();
}}}

int func_178(bool bParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
if(PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
return 1;
}elseif(bParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_179(iVar0)){
if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if((!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && !ENTITY::IS_ENTITY_IN_AIR(iVar0)) && ENTITY::GET_ENTITY_SPEED(iVar0) < 1f){
return 1;
}}elseif(!ENTITY::IS_ENTITY_IN_AIR(iVar0)){
return 1;
}}}}}
return 0;
}

int func_179(int iParam0){
if(func_132(uParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}

int func_180(int iParam0){
bool bVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
bVar0=func_108();
if(!func_36(bVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_188()) || Global_112695) || Global_32166) || func_187()) || func_186(8, -1)) || func_96()) || func_185()) || func_184()) || func_183()) || Global_113648.f_7690.f_919[bVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_188()) || Global_32166) || func_187()) || func_186(8, -1)) || func_184()) || func_96()) || func_185()) || func_183()) || Global_113648.f_7690.f_919[bVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_188()) || Global_112695) || Global_32166) || func_187()) || func_186(8, -1)) || func_184()) || func_96()) || func_185()) || func_183()) || Global_113648.f_7690.f_919[bVar0]==5) || Global_43804 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_188()) || Global_112695) || Global_32166) || func_187()) || func_186(8, -1)) || func_96()) || func_185()) || func_183()) || Global_113648.f_7690.f_919[bVar0]==5){
return 0;
}
break;
case 4:
if(((((func_188() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_186(8, -1)) || func_183()) || func_182()) || Global_113648.f_7690.f_919[bVar0]==5){
return 0;
}
break;
case 5:
if((((func_186(8, -1) || func_96()) || func_185()) || func_182()) || func_181()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_188()) || Global_32166) || func_187()) || func_186(8, -1)) || func_185()) || func_184()) || func_183()) || Global_113648.f_7690.f_919[bVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_188()) || func_185()) || Global_112695) || Global_32166) || func_187()) || Global_44446) || func_186(8, -1)) || func_184()) || func_182()) || func_183()) || Global_113648.f_7690.f_919[bVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_188()) || Global_112695) || Global_32166) || func_187()) || func_186(8, -1)) || func_184()) || func_182()) || func_96()) || func_185()) || func_183()){
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


var func__181(){
return Global_100720.f_1;
}

int func_182(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
}
return 0;
}

int func_183(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_184(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}


bool func_185(){
return Global_100733.f_388 > 0;
}


var func__186(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


var func__187(){
return Global_1575060;
}

int func_188(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}

int func_189(var uParam0, struct<3> Param1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6){
var uVar0;
if(func_180(2)){
if(!func_151()){
if(((func_132(PLAYER::PLAYER_PED_ID()) && func_132(uParam0->f_28[0])) && (MISC::GET_GAME_TIMER() - uParam0->f_60) > iParam6) && func_195(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f){
uVar0=16;
func_194(&uVar0, iParam4, uParam0->f_28[0], sParam5, 0, 1);
func_192(&uVar0, cParam2, sParam3, 7, 0, 0);
uParam0->f_60=MISC::GET_GAME_TIMER();
return 1;
}}elseif(func_190(sParam3)){
if(func_132(PLAYER::PLAYER_PED_ID())){
if(func_195(PLAYER::PLAYER_PED_ID(), Param1, 1) >=20f){
func_149();
}}}}
return 0;
}

int func_190(char* sParam0){
struct<6> Var0;
Var0={
func_191() 
};
if(MISC::ARE_STRINGS_EQUAL(&Var0, sParam0)){
return 1;
}
return 0;
}


struct<6> func_191(){
struct<6> Var0;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
return Global_21344;
}
return Var0;
}


void func_192(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
func_193(uParam0, 145, sParam1, iParam4, iParam5, 0);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
MISC::SET_BIT(&Global_20591, 0);
Global_21728=iParam3;
StringCopy(&Global_21715, sParam2, 24);
}


void func_193(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21179={
*uParam0 
};
Global_7569=iParam1;
StringCopy(&Global_21795, sParam2, 24);
Global_22714=iParam5;
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


void func_194(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


float func_195(int iParam0, struct<3> Param1, int iParam2){
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


void func_196(int iParam0, var uParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5){
float fVar0;
float fVar1;
float fVar2;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam2)){
if(func_202()){
if(*iParam0 !=-1){
func_200(iParam0);
}}elseif(*iParam0==-1){
if(func_195(PLAYER::PLAYER_PED_ID(), Param3, 1) <=100f){
func_199(iParam0, 1);
}}else{
if(func_198(*iParam0)==2){
CUTSCENE::STOP_CUTSCENE(0);
CUTSCENE::REMOVE_CUTSCENE();
func_197(*iParam0, 0);
}else{
fVar0=func_195(PLAYER::PLAYER_PED_ID(), Param4, 1);
fVar1=func_195(PLAYER::PLAYER_PED_ID(), Param5, 1);
fVar2=(fVar0 - fVar1);
if(fVar2 < 0f){
fVar2=(fVar2 * -1f);
}
if(fVar2 > 0.5f){
if(fVar0 < fVar1){
if(*uParam1 !=1){
CUTSCENE::REMOVE_CUTSCENE();
CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(uParam2, 5, 8);
func_197(*iParam0, 1);
*uParam1=1;
}
}
elseif(*uParam1 !=2){
CUTSCENE::REMOVE_CUTSCENE();
CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(uParam2, 6, 8);
func_197(*iParam0, 1);
*uParam1=2;
}}}
if(func_195(PLAYER::PLAYER_PED_ID(), Param3, 1) > 120f){
func_200(iParam0);
}}}}}


void func_197(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(Global_78554==iParam0){
Global_78555=iParam0;
}}elseif(Global_78555==iParam0){
Global_78555=-1;
}}

int func_198(int iParam0){
if(Global_78554==iParam0){
if(Global_78555==-1){
if(Global_78553 < MISC::GET_FRAME_COUNT()){
return 1;
}}}elseif(Global_78555==iParam0){
return 2;
}
return 0;
}


void func_199(int iParam0, int iParam1){
bool bVar0;
int iVar1;
if(Global_78551 < 5){
Global_78540[Global_78551 /*2*/]=0;
Global_78540[Global_78551 /*2*/].f_1=iParam1;
bVar0=false;
while (!bVar0){
bVar0=true;
iVar1=0;
while (iVar1 < Global_78551){
if(Global_78540[iVar1 /*2*/]==Global_78540[Global_78551 /*2*/]){
Global_78540[Global_78551 /*2*/]++;
bVar0=false;
}
iVar1++;
}}
*iParam0=Global_78540[Global_78551 /*2*/];
Global_78551++;
Global_78552=1;
}else{
*iParam0=-1;
}}


void func_200(int iParam0){
CUTSCENE::STOP_CUTSCENE(0);
CUTSCENE::REMOVE_CUTSCENE();
func_201(iParam0);
}


void func_201(int iParam0){
bool bVar0;
int iVar1;
int iVar2;
if(*iParam0==-1){
return;
}
if(Global_78555==*iParam0){
func_197(*iParam0, 0);
}
if(Global_78554==*iParam0){
Global_78554=-1;
}
bVar0=false;
iVar1=0;
while (!bVar0 && iVar1 < Global_78551){
if(Global_78540[iVar1 /*2*/]==*iParam0){
bVar0=true;
}else{
iVar1++;
}}
if(!bVar0){
return;
}
iVar2=iVar1;
while (iVar2 <=(Global_78551 - 2)){
Global_78540[iVar2 /*2*/]=Global_78540[iVar2 + 1 /*2*/];
Global_78540[iVar2 /*2*/].f_1=Global_78540[iVar2 + 1 /*2*/].f_1;
iVar2++;
}
Global_78540[(Global_78551 - 1) /*2*/]=-1;
Global_78540[(Global_78551 - 1) /*2*/].f_1=3;
Global_78551=(Global_78551 - 1);
Global_78552=1;
Global_78553=MISC::GET_FRAME_COUNT();
*iParam0=-1;
}


bool func_202(){
return Global_97990;
}


void func_203(int iParam0){
if(iParam0==-1){
iParam0=func_171();
}
if(iParam0==-1){
return;
}
Global_112735[iParam0 /*10*/].f_1=1;
}

int func_204(var uParam0, bool bParam1){
struct<27> Var0;
if(Global_78558){
func_274("IS_RC_FINE_AND_IN_RANGE():
The game is running Multiplayer [TERMINATING]");
return 0;
}
func_115(*uParam0, &Var0);
if((func_241(*uParam0) || func_239(*uParam0)) || Global_78804==1){
return 1;
}
if(!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
func_274("IS_RC_FINE_AND_IN_RANGE():
Player out of range [TERMINATING]");
return 0;
}
if(func_235(*uParam0)){
if(*uParam0==19){
func_234(uParam0->f_28[0]);
}
func_274("IS_RC_FINE_AND_IN_RANGE():
Script denied by RC Controller [TERMINATING]");
return 0;
}
if(uParam0->f_25==1){
if(!func_214(uParam0, 1, 0)){
return 0;
}}elseif(uParam0->f_16==0){
if(!func_214(uParam0, 0, 0)){
return 0;
}}
if(((((*uParam0==16 || *uParam0==9) || *uParam0==18) || *uParam0==22) || *uParam0==32) || *uParam0==51){
if(!func_212(uParam0, 1, 1)){
if(*uParam0==16){
func_211(uParam0);
}else{
func_209(uParam0);
}
return 0;
}}elseif(*uParam0==24){
if(!func_212(uParam0, 0, 1)){
func_209(uParam0);
return 0;
}}elseif(*uParam0==6){
if(!func_212(uParam0, 0, 1)){
return 0;
}}elseif(uParam0->f_26==1){
if(!func_212(uParam0, 1, 0)){
func_209(uParam0);
return 0;
}}elseif(uParam0->f_16==2 || uParam0->f_16==1){
if(!func_212(uParam0, 0, 0)){
func_209(uParam0);
return 0;
}}
if(uParam0->f_16==2 || uParam0->f_16==1){
if(func_132(uParam0->f_35[0])){
if(!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0)){
return 0;
}}}
if(*uParam0==10){
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0 /*3*/], 8f)){
func_274("IS_RC_FINE_AND_IN_RANGE():
Explosion near mission trigger [TERMINATING]");
return 0;
}}
if(Var0.f_4 !=17){
if(!MISC::IS_BIT_SET(Var0.f_26, func_108())){
func_274("IS_RC_FINE_AND_IN_RANGE():
No longer a valid player character to launch mission");
return 0;
}}
if(func_208(&(uParam0->f_48)) && bParam1){
func_205(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
}
return 1;
}


void func_205(int iParam0, var uParam1, int iParam2){
var uVar0;
var uVar1;
if(func_132(iParam0)){
switch (uParam1->f_3){
case 1:
if(func_208(uParam1)){
if(STREAMING::HAS_ANIM_DICT_LOADED(*uParam1)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
if(iParam2 !=21){
if(func_69(uParam1->f_5, 0f, 0f, 0f, 0)){
TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
}else{
TASK::OPEN_SEQUENCE_TASK(&uVar0);
if(func_207(uParam1)){
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
if(!func_207(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3)){
if(func_206(iParam2) && !PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 25f)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
uParam1->f_3=5;
}elseif((func_207(uParam1) && uParam1->f_4==0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 20f){
uParam1->f_3=3;
}}
break;
case 3:
TASK::OPEN_SEQUENCE_TASK(&uVar1);
if(func_69(uParam1->f_5, 0f, 0f, 0f, 0)){
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
if(func_206(iParam2)){
uParam1->f_3=2;
}else{
uParam1->f_3=0;
}
break;
case 5:
if(!func_206(iParam2) || PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 10f)){
if(func_69(uParam1->f_5, 0f, 0f, 0f, 0)){
TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
}else{
TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
}
uParam1->f_3=2;
}
break;
}}}

int func_206(int iParam0){
if(iParam0==17 || iParam0==20){
return 1;
}
return 0;
}

int func_207(var uParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2)){
return 0;
}
return 1;
}

int func_208(var uParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1)){
return 0;
}
return 1;
}


void func_209(var uParam0){
int iVar0;
var uVar1;
if(*uParam0==52){
func_210(&(uParam0->f_41[1]));
func_210(&(uParam0->f_41[2]));
}
if(func_132(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=(uParam0->f_28 - 1)){
if(func_131(uParam0->f_28[iVar0])){
if(!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[iVar0], 0)){
ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[iVar0], 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 0);
}
PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
if(*uParam0==34){
if(func_132(uParam0->f_41[0])){
ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
}}
switch (*uParam0){
case 19:
func_234(uParam0->f_28[iVar0]);
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


void func_210(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}
OBJECT::DELETE_OBJECT(uParam0);
}}


void func_211(var uParam0){
int iVar0;
if(func_132(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=(uParam0->f_28 - 1)){
if(func_131(uParam0->f_28[iVar0])){
PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[iVar0], 1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar0], 0);
PED::SET_PED_KEEP_TASK(uParam0->f_28[iVar0], 1);
TASK::TASK_COMBAT_PED(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_28[iVar0]));
}
iVar0++;
}}}

int func_212(var uParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
if(bParam1){
iVar1=(uParam0->f_35 - 1);
}else{
iVar1=0;
}
if(func_131(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=iVar1){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[iVar0])){
if(ENTITY::IS_ENTITY_DEAD(uParam0->f_35[iVar0], 0)){
func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[iVar0], 0)){
func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
return 0;
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID(), 0)){
func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
return 0;
}
if(ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[iVar0]) < 850){
func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
return 0;
}
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f){
func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
return 0;
}
uVar2=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_179(uVar2)){
if(ENTITY::GET_ENTITY_MODEL(uVar2)==joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar2)==joaat("towtruck2")){
if(func_179(uParam0->f_35[iVar0])){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_35[iVar0])){
func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
return 0;
}}}
}}else{
iVar3=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_179(iVar3)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], iVar3) && ENTITY::GET_ENTITY_SPEED(iVar3) > 6f){
func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
return 0;
}
}
if(*uParam0==16){
if(func_213(PLAYER::PLAYER_PED_ID(), uParam0->f_35[iVar0])){
func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
return 0;
}
}}}}
iVar0++;
}}
return 1;
}

int func_213(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(iParam0);
if(iVar0==iParam1){
return 1;
}}}
return 0;
}

int func_214(var uParam0, bool bParam1, int iParam2){
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
if(func_131(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=iVar1){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_28[iVar0])){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0])){
if(iParam2==0){
func_209(uParam0);
}else{
func_211(uParam0);
}
if(func_151()){
func_149();
}
func_274("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
return 0;
}}
if((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0])){
if(iParam2==0){
func_209(uParam0);
}
else{
func_211(uParam0);
}
func_274("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
return 0;
}
if(PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0])){
if(ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0)){
if(iParam2==0){
func_209(uParam0);
}else{
func_211(uParam0);
}
func_274("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
return 0;
}}
if(func_233(*uParam0)){
if(!func_163(*uParam0)){
if(func_228(uParam0->f_28[iVar0], 1, 0, 0, 0)){
if(iParam2==0){
func_209(uParam0);
}else{
func_211(uParam0);
}
func_274("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
return 0;
}
}
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 15f)){
if(iParam2==0){
func_209(uParam0);
}else{
func_211(uParam0);
}
func_274("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
return 0;
}
if(func_216(uParam0->f_28[iVar0], 1126825984)){
if(iParam2==0){
func_209(uParam0);
}else{
func_211(uParam0);
}
func_274("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
return 0;
}}
if(!func_215(*uParam0)){
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 5f)){
if(iParam2==0){
func_209(uParam0);
}else{
func_211(uParam0);
}
func_274("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
return 0;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(iParam2==0){
func_209(uParam0);
}else{
func_211(uParam0);
}
func_274("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
return 0;
}}}else{
func_274("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
if(*uParam0==34){
if(func_132(uParam0->f_41[0])){
ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
}}
return 0;
}}
iVar0++;
}}
return 1;
}

int func_215(int iParam0){
if(((iParam0==2 || iParam0==3) || iParam0==52) || iParam0==53){
return 1;
}
return 0;
}

int func_216(int iParam0, float fParam1){
float fVar0;
if(func_132(PLAYER::PLAYER_PED_ID()) && func_132(iParam0)){
if(func_227(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
fVar0=40f;
}else{
fVar0=3f;
}
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)){
if(func_217(iParam0, fParam1)){
return 1;
}}}}
return 0;
}


bool func_217(int iParam0, float fParam1){
return func_218(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}


bool func_218(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
int iVar2;
iVar2=func_226(iParam0, iParam1);
if(!func_132(iParam0) || !func_132(iParam1)){
if(iVar2 !=-1){
func_225(&(Local_37[iVar2 /*4*/]));
}
return 0;
}
if(!func_222(iParam0, iParam1, fParam2, iParam3)){
return 0;
}
if(iVar2==-1){
iVar2=func_221();
if(iVar2==-1){
return 0;
}
Local_37[iVar2 /*4*/].f_1=iParam0;
Local_37[iVar2 /*4*/].f_2=iParam1;
}
Var1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uVar0=func_219(&(Local_37[iVar2 /*4*/]), Var1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
return (uVar0 || (MISC::GET_GAME_TIMER() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_219(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
var uVar2;
int iVar3;
int iVar4;
iVar3=0;
if(!func_132(iParam2)){
*uParam0=0;
return 0;
}
if(*uParam0==0){
Var1={
func_220(iParam2, iParam5) 
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
func_132(iVar3);
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3)==iParam2){
if(bLocal_38){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}
return 0;
}
if(ENTITY::IS_ENTITY_A_VEHICLE(iVar3)){
func_132(iVar3);
if(PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0)){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3)==PED::GET_VEHICLE_PED_IS_IN(iParam2, 0)){
if(bLocal_38){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}}
return 0;
}
return 0;
}


Vector3 func__220(int iParam0, int iParam1){
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

int func_221(){
int iVar0;
iVar0=0;
while (iVar0 < Local_37.f_0){
if((Local_37[iVar0 /*4*/]==0 && Local_37[iVar0 /*4*/].f_1==0) && Local_37[iVar0 /*4*/].f_2==0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_222(int iParam0, int iParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_224(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
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
func_224(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_223(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}


float func_223(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__224(struct<3> Param0){
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


void func_225(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}

int func_226(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Local_37.f_0){
if(Local_37[iVar0 /*4*/].f_1==iParam0 && Local_37[iVar0 /*4*/].f_2==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_227(var uParam0){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
return 1;
}
return 0;
}

int func_228(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
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
if(func_132(PLAYER::PLAYER_PED_ID()) && func_132(uParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
if(iVar2==joaat("weapon_petrolcan")){
fVar0=3f;
fVar1=3f;
}
if(!bParam2){
if(func_232(uParam0, bParam1, fVar0, fVar1)){
return 1;
}
if(func_229(uParam0, fVar1, bParam3, bParam4)){
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
if(func_232(iParam0, bParam1, fVar0, fVar1)){
return 1;
}}
if(func_229(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}}
return 0;
}

int func_229(int iParam0, float fParam1, bool bParam2, bool bParam3){
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
if(func_230(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
return 1;
}}else{
if(bParam3){
if(func_230(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
if(MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, 1)){
return 1;
}}
return 0;
}

int func_230(var uParam0, float fParam1){
var uVar0;
struct<3> Var1;
if((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0)){
if(func_231(uParam0, Var1, 90f, 0)){
return 1;
}}
return 0;
}

int func_231(int iParam0, struct<3> Param1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_224(Param1 - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) 
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
func_224(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_223(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}

int func_232(int iParam0, bool bParam1, float fParam2, float fParam3){
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

int func_233(int iParam0){
if(((((iParam0==2 || iParam0==3) || iParam0==34) || iParam0==11) || iParam0==52) || iParam0==53){
return 0;
}
return 1;
}


void func_234(int iParam0){
var uVar0;
if(func_132(PLAYER::PLAYER_PED_ID()) && func_132(uParam0)){
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

int func_235(int iParam0){
if(iParam0==-1){
iParam0=func_171();
}
if(iParam0==-1){
return 1;
}
if(func_241(iParam0)){
return 0;
}
if(!func_168(4)){
if(func_239(iParam0)){
}else{
return 1;
}}
if(func_238() && !func_237()){
return 1;
}
if(!func_236(iParam0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) !=0){
return 1;
}}}
if(!MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 2)){
return 1;
}
return 0;
}

int func_236(int iParam0){
if((((iParam0==5 || iParam0==6) || iParam0==41) || iParam0==60) || iParam0==61){
return 1;
}
return 0;
}

int func_237(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_238(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
}
return 0;
}

int func_239(int iParam0){
if((func_240() && Global_100681.f_11==6) && iParam0==func_172(&(Global_100681.f_3), 0)){
return 1;
}
return 0;
}

int func_240(){
if(((Global_100681==13 || Global_100681==10) || Global_100681==11) || Global_100681==12){
return 0;
}
return 1;
}

int func_241(int iParam0){
if(func_113(0)){
if(Global_78805.f_1==7){
if(Global_78805==iParam0){
return 1;
}}}
return 0;
}

int func_242(int iParam0){
if(!func_243(iParam0)){
return 0;
}
func_274("Created initial scene");
return 1;
}

int func_243(var uParam0){
int iVar0[3];
int iVar1;
bool bVar2;
iVar0[0]=iLocal_52;
iVar0[1]=joaat("dune");
iVar0[2]=joaat("prop_crate_07a");
switch (iLocal_51){
case 0:
uParam0->f_16=0;
uParam0->f_27=0;
uParam0->f_26=1;
StringCopy(&(uParam0->f_9), "sas_1_rcm_concat", 24);
iVar1=0;
while (iVar1 <=(iVar0 - 1)){
STREAMING::REQUEST_MODEL(iVar0[iVar1]);
iVar1++;
}
STREAMING::REQUEST_ANIM_DICT("rcmlastone1");
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_sniperrifle"), 31, 0);
iLocal_51=1;
break;
case 1:
if(((!func_246(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmlastone1")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun"))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_sniperrifle"))){
return 0;
}
iLocal_51=2;
break;
case 2:
bVar2=true;
uParam0->f_28[0]=PED::CREATE_PED(25, iLocal_52, -1299.02f, 4639.86f, 106.66f, 345.7769f, 1, 1);
if(func_131(uParam0->f_28[0])){
WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_sniperrifle"), 100, 1, 1);
TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmlastone1", "idle_action_01", 8f, -8f, -1, 1, 0, 0, 0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
}else{
bVar2=false;
}
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0])){
func_244(&(uParam0->f_35[0]), iVar0[1], -1303.163f, 4648.085f, 104.9664f, 293.1504f);
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0])){
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
}else{
bVar2=false;
}}
if(bVar2){
iLocal_51=3;
}
break;
case 3:
iVar1=0;
while (iVar1 <=(iVar0 - 1)){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
iVar1++;
}
return 1;
break;
}
return 0;
}


void func_244(var uParam0, var uParam1, struct<3> Param2, float fParam3){
func_245(uParam0);
*uParam0=VEHICLE::CREATE_VEHICLE(uParam1, Param2, fParam3, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000, 0);
}}


void func_245(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
}
if(func_179(*uParam0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1)){
if(func_132(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(uParam0);
}}else{
if(func_132(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(uParam0);
}}}

int func_246(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(*iParam0 - 1)){
if(!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0])){
return 0;
}
iVar0++;
}
return 1;
}

int func_247(int iParam0){
struct<27> Var0;
bool bVar1;
func_115(iParam0, &Var0);
bVar1=func_108();
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

int func_248(int iParam0){
char* sVar0;
if(Global_78558){
func_274("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
return 0;
}
if(!Global_113648.f_9087 && !func_113(1)){
func_274("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
return 0;
}
if(!func_249(iParam0)){
Global_112735[iParam0 /*10*/].f_1=1;
func_274("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
return 0;
}
if(Global_100681.f_11==6){
if(Global_100681 < 9){
func_115(iParam0, &sVar0);
if(MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), sVar0)){
func_274("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
return 0;
}}}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller"))==0){
Global_112735[iParam0 /*10*/].f_1=1;
func_274("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
return 0;
}
return 1;
}

int func_249(int iParam0){
var uVar0;
func_115(iParam0, &uVar0);
if(!func_168(4)){
if(func_239(iParam0)){
}else{
return 0;
}}
if(func_238() && !func_237()){
return 0;
}
if(func_255(iParam0)){
return 0;
}
if(iParam0==-1){
iParam0=func_171();
}
if(iParam0==-1){
return 0;
}
if(!func_241(iParam0)){
if(!func_254(iParam0)){
return 0;
}
if(!func_253(iParam0)){
return 0;
}
if(func_252(iParam0)){
return 0;
}}
if(iParam0==58){
if(func_250(5)){
Global_112735[iParam0 /*10*/].f_3=0;
}}
if(Global_112735[iParam0 /*10*/].f_3==1){
return 0;
}
return 1;
}

int func_250(int iParam0){
int iVar0;
char* sVar1;
int iVar2;
if(Global_100733.f_385==0){
return 0;
}
if(iParam0==10){
iVar0=0;
while (iVar0 < 10){
if(func_250(iVar0)){
return 1;
}
iVar0++;
}}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_251(iParam0, &sVar1);
iVar2=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95719[iParam0 /*10*/].f_3, &sVar1);
if(iVar2 !=0 && Global_100733.f_385==iVar2){
return 1;
}}
return 0;
}


bool func_251(int iParam0, char* sParam1){
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

int func_252(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3);
}

int func_253(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 2);
}

int func_254(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 0);
}

int func_255(int iParam0){
if(func_236(iParam0)){
return 0;
}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) !=0){
return 1;
}}
return 0;
}


void func_256(){
func_274("Running end routines.");
Global_113366=(Global_113366 - 1);
}

int func_257(int iParam0, int iParam1, struct<3> Param2, float fParam3){
int iVar0;
if(*iParam0==1){
if(func_258((*iParam0)[0], Param2, fParam3, iParam1)){
return 1;
}}else{
iVar0=0;
while (iVar0 < *iParam0){
if(func_258((*iParam0)[iVar0], Param2, fParam3, iParam1)){
iVar0=*iParam0;
return 1;
}
iVar0++;
}}
func_274("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
return 0;
}

int func_258(int iParam0, struct<3> Param1, float fParam2, var uParam3){
int iVar0;
struct<7> Var1;
iVar0=0;
func_115(iParam0, &Var1);
if(func_259(Var1.f_6, Param1, fParam2, 0)){
if(MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 0)){
if(!MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3)){
iVar0=1;
}}
if(func_241(iParam0)){
iVar0=1;
}}
if(iVar0==1){
*uParam3=iParam0;
StringCopy(&(uParam3->f_1), Var1.f_0, 32);
return 1;
}
return 0;
}

int func_259(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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


void func_260(int iParam0, bool bParam1){
if(bParam1){
func_274("SCRIPT TERMINATING:
Cleaning up entities in Launcher");
func_262(iParam0, 0, 0, 0);
}
func_261(&(iParam0->f_48));
if(iLocal_53 !=-1){
func_274("SCRIPT TERMINATING:
Ending off-mission cutscene request");
func_201(&iLocal_53);
}
if(bParam1){
func_203(*iParam0);
}
func_256();
func_274("SCRIPT TERMINATED");
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_261(var uParam0){
if(func_208(uParam0)){
if(STREAMING::HAS_ANIM_DICT_LOADED(*uParam0)){
STREAMING::REMOVE_ANIM_DICT(*uParam0);
*uParam0="";
uParam0->f_1="";
return 1;
}}
return 0;
}


void func_262(var uParam0, int iParam1, bool bParam2, bool bParam3){
func_269(uParam0, iParam1);
func_266(uParam0, bParam2);
func_263(uParam0, bParam3);
}


void func_263(var uParam0, bool bParam1){
func_264(&(uParam0->f_41), bParam1);
}


void func_264(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_210(uParam0[iVar0]);
}else{
func_265(uParam0[iVar0], 0);
}
iVar0++;
}}


void func_265(var uParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}
if(!bParam1){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
}else{
OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*uParam0);
}}}


void func_266(var uParam0, bool bParam1){
func_267(&(uParam0->f_35), bParam1);
}


void func_267(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_245(uParam0[iVar0]);
}else{
func_268(uParam0[iVar0]);
}
iVar0++;
}}


void func_268(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::IS_ENTITY_DEAD(*uParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
}}}


void func_269(var uParam0, int iParam1){
func_270(&(uParam0->f_28), iParam1);
}


void func_270(var uParam0, int iParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(iParam1==1){
func_272(uParam0[iVar0]);
}else{
func_271(uParam0[iVar0], 0, 1, 0);
}
iVar0++;
}}


void func_271(var uParam0, int iParam1, int iParam2, int iParam3){
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


void func_272(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
}
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
}
PED::DELETE_PED(uParam0);
}}


void func_273(var uParam0){
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


void func_274(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){}}


void func_275(var uParam0){
*uParam0=-1;
StringCopy(&(uParam0->f_1), "", 32);
uParam0->f_15=12f;
uParam0->f_16=6;
uParam0->f_25=0;
uParam0->f_26=0;
uParam0->f_27=0;
}


void func_276(){
func_274("Running start routines.");
Global_113366++;
}