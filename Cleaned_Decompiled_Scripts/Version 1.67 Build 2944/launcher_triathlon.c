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
int iLocal_26=0;
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
struct<3> Local_43={
0, 0, 0 
};
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
struct<16> Local_49={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_50={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_51=0;
var uLocal_52=0;
struct<3> Local_53={
0, 0, 0 
};
struct<3> Local_54={
0, 0, 0 
};
float fLocal_55=0f;
var uLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
int iLocal_62=0;
char* sLocal_63=NULL;
float fLocal_64=0f;
int iLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
float fLocal_72=0f;
struct<3> Local_73={
0, 0, 0 
};
struct<3> Local_74={
0, 0, 0 
};
float fLocal_75=0f;
struct<3> Local_76={
0, 0, 0 
};
struct<3> Local_77={
0, 0, 0 
};
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
var uLocal_84=0;
bool bLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
int iLocal_89=0;
int iLocal_90[5]={
0, 0, 0, 0, 0 
};
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
struct<2> Local_95={
0, 5 
};
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
var uLocal_111=5;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
#endregion

void __EntryFunction__(){
bool bVar0;
float fVar1;
bool bVar2;
bool bVar3;
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
fLocal_12=0.001f;
iLocal_15=-1;
sLocal_18="NULL";
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
iLocal_26=3;
fLocal_29=80f;
fLocal_30=140f;
fLocal_31=180f;
iLocal_37=1;
iLocal_38=65;
iLocal_39=49;
iLocal_40=64;
Local_43={
500f, 500f, 500f 
};
iLocal_58=-1;
iLocal_59=2050;
iLocal_60=-1;
iLocal_61=-1;
sLocal_63="CC_SUBSTR";
fLocal_64=125f;
iLocal_65=1;
iLocal_67=263;
fLocal_75=4f;
bLocal_85=true;
iLocal_87=1;
iLocal_89=-1;
Local_54={
ScriptParam_95.f_1[0 /*3*/] 
};
Local_54={
Local_54 
};
uLocal_52=uLocal_52;
Local_50={
Local_50 
};
bVar0=false;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)){
func_126(1);
}
uLocal_51=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_57=0;
func_124(&Global_112460, 0);
func_121();
MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(1);
if(func_120(uLocal_56, 1)){
iLocal_62=10;
}else{
iLocal_62=9;
}
while (!Global_38716){
wait(0);
}
if(!func_120(uLocal_56, 8)){
if(!func_118(iLocal_62)){
if(func_117(0, iLocal_61)){
func_126(0);
}else{
func_126(1);
}}}
if(iLocal_61 !=-1){
if(!func_117(0, iLocal_61)){
func_126(1);
}}
if(func_120(uLocal_56, 8388608)){
func_126(1);
}
if(func_120(uLocal_56, 524288) && (func_116() && !func_115())){
func_126(1);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_120(uLocal_56, 4194304)){
if(iLocal_67 !=263){
func_114(iLocal_67, 1, 0);
iLocal_67=263;
}
func_113(10);
}
while (true){
if(!func_120(uLocal_56, 268435456)){
fVar1=0f;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_95.f_1[0 /*3*/], &fVar1, 0, 0)){
if(fVar1 !=0f){
ScriptParam_95.f_1[0 /*3*/].f_2=fVar1;
func_112(&uLocal_56, 268435456);
}}}
uLocal_51=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_120(uLocal_56, 1048576)){
if(ENTITY::IS_ENTITY_DEAD(uLocal_51, 0)){
func_126(1);
}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_51) && !ENTITY::IS_ENTITY_DEAD(iLocal_51, 0)){
Local_53={
ENTITY::GET_ENTITY_COORDS(iLocal_51, 1) 
};
fLocal_55=vdist2(Local_53, ScriptParam_95.f_1[0 /*3*/]);
fLocal_55=fLocal_55;
Local_73={
Local_53 
};
Local_74={
ScriptParam_95.f_1[0 /*3*/] 
};
Local_73.f_2=0f;
Local_74.f_2=0f;
fLocal_72=vdist2(Local_73, Local_74);
switch (iLocal_57){
case 0:
if(func_118(iLocal_62) || (func_120(uLocal_56, 16) && !func_120(uLocal_56, 524288))){
iLocal_60=-1;
func_111();
func_113(1);
}else{
if(fLocal_72 > (fLocal_64 * fLocal_64)){
if(iLocal_67 !=263){
func_114(iLocal_67, 1, 0);
iLocal_67=263;
}
func_113(10);
}
if((Local_53.f_2 - ScriptParam_95.f_1[0 /*3*/].f_2) > 500f){
}}
break;
case 1:
if(func_110()){
iLocal_65=iLocal_65;
func_113(3);
}else{
func_111();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_126(1);
return;
}
if(!func_118(iLocal_62)){
if(!func_120(uLocal_56, 8)){
bVar2=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100833.f_3), &Local_50)){
Local_50={
Local_49 
};
bVar2=false;
}
if(bVar2){
func_126(0);
break;
}
}}
if(!func_120(uLocal_56, 4)){
func_105();
func_112(&uLocal_56, 4);
}
if(fLocal_72 > (fLocal_64 * fLocal_64) && !Global_100867){
if(iLocal_67 !=263){
if(func_104(6) && !func_103(iLocal_67)){
}else{
func_114(iLocal_67, 1, 0);
iLocal_67=263;
}
}
func_113(10);
}else{
Local_50={
Local_49 
};
bVar3=!func_120(uLocal_56, 64);
func_124(&uLocal_56, 128);
if(!func_102(3) && !Global_100867){
if(func_120(uLocal_56, 2097152)){
if((!func_120(uLocal_56, 1) || !ENTITY::DOES_ENTITY_EXIST(func_101())) && !Global_100867){
func_113(10);
break;
}}
}
if(func_120(uLocal_56, 524288) && (func_116() && !func_115())){
func_126(1);
}
if(func_100()){
func_126(1);
}
if((!func_92(6) || Global_112857) || func_91()){
bVar3=false;
}
if(func_120(uLocal_56, 1)){
if(!func_90()){
func_88(&uLocal_56, 128);
bVar3=false;
}
}
if(func_87(1)){
bVar3=false;
}
if(Global_78689){
bVar3=false;
}
if(func_86()){
bVar3=false;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
bVar3=false;
}
if(func_85() || func_84(8, -1)){
bVar3=false;
}
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())){
bVar3=false;
}
if(!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar3=false;
}
if(func_83(0) || func_82()){
bVar3=false;
}
if(bVar3){
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_51, ScriptParam_95.f_1[0 /*3*/], fLocal_75, fLocal_75, 2f, 0, 1, iLocal_65)){
bVar3=false;
}
if(fLocal_55 < ((fLocal_75 * fLocal_75) + 4f)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_88(&uLocal_56, 128);
bVar3=false;
if(!func_120(uLocal_56, 1024)){
func_81("MG_GET_ON_FOOT", -1);
func_88(&uLocal_56, 1024);
}}elseif(func_120(uLocal_56, 1024)){
func_124(&uLocal_56, 1024);
HUD::CLEAR_THIS_PRINT("MG_GET_ON_FOOT");
}}elseif(func_120(uLocal_56, 1024)){
func_124(&uLocal_56, 1024);
HUD::CLEAR_THIS_PRINT("MG_GET_ON_FOOT");
}
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar3=false;
}
if(bVar3){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(func_80(uLocal_52)){
if(iLocal_58==-1){
func_79(&iLocal_58, 4, sLocal_63, 0, 0, 0, 0);
func_88(&uLocal_56, 2048);
}
elseif(!func_120(uLocal_56, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_78(&iLocal_58);
func_124(&uLocal_56, 2048);
}
if(func_76(iLocal_58, 1)){
sLocal_63=sLocal_63;
func_78(&iLocal_58);
func_124(&uLocal_56, 2048);
SCRIPT::REQUEST_SCRIPT(&Local_50);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_113(5);
}}else{
sLocal_63=sLocal_63;
func_78(&iLocal_58);
func_124(&uLocal_56, 2048);
SCRIPT::REQUEST_SCRIPT(&Local_50);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
func_113(5);
}}
}
if(!bVar3){
if(iLocal_58 !=-1){
func_78(&iLocal_58);
func_124(&uLocal_56, 2048);
HUD::CLEAR_HELP(0);
}
}}
func_62();
break;
case 5:
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(SCRIPT::HAS_SCRIPT_LOADED(&Local_50)){
if(iLocal_58 !=-1){
func_78(&iLocal_58);
}
iVar4=2;
bVar0=false;
if(func_120(uLocal_56, 1)){
if(func_104(6) || func_104(7)){
iVar4=1;
bVar0=true;
}
}
if(iVar4 !=1){
iVar4=func_59(&iLocal_60, 6, iLocal_62, 0, 0);
}
if(iVar4==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
func_58();
if(Global_44569){
func_49(PLAYER::PLAYER_PED_ID());
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
uLocal_48=func_48();
func_124(&uLocal_56, 4);
func_47();
func_88(&uLocal_56, 2);
func_113(6);
func_43(&uLocal_69);
if(iLocal_61 !=-1){
func_42(iLocal_61);
func_40(func_41(iLocal_61), 0, 0);
}
}
elseif(iVar4==2){
func_39();
}
elseif(iVar4==0){
func_113(10);
}}else{
func_39();
}
break;
case 6:
if(!func_120(uLocal_56, 256)){
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN()){
PAD::SET_INPUT_EXCLUSIVE(0, 51);
}
elseif(CAM::IS_SCREEN_FADED_OUT()){
func_88(&uLocal_56, 256);
}}
if(func_120(Global_112460, 262144)){
func_124(&Global_112460, 262144);
func_38();
}
if(func_120(uLocal_56, 2097152)){
if(!func_102(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_48)){
func_113(10);
}}
if(!SCRIPT::IS_THREAD_ACTIVE(uLocal_48)){
STATS::PLAYSTATS_ODDJOB_DONE(round((func_34(&uLocal_69) * 1000f)), iLocal_61, 0);
func_33(&uLocal_69);
func_124(&uLocal_56, 256);
func_30();
if(bVar0){
func_124(&uLocal_56, 2);
}
elseif(func_120(uLocal_56, 2)){
if(func_120(Global_112460, 0)){
func_29(&iLocal_60);
iLocal_60=-1;
func_124(&uLocal_56, 2);
}else{
func_29(&iLocal_60);
iLocal_60=-1;
func_124(&uLocal_56, 2);
}
}
func_113(0);
if(iLocal_61 !=-1){
if(func_120(Global_112460, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_41(iLocal_61), 0, Global_100870, 0);
func_28(func_41(iLocal_61), 0, Global_100870, 1, 0);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_41(iLocal_61), 0, Global_100870, 0);
func_28(func_41(iLocal_61), 0, Global_100870, 0, 0);
}
}
func_4();
func_124(&Global_112460, 0);
if(func_120(uLocal_56, 16777216)){
func_126(1);
}
if(iLocal_61 !=-1){
if(Global_113810.f_9088){
if(!func_117(0, iLocal_61)){
func_126(1);
}}
}}
func_3();
break;
case 8:
func_113(0);
break;
case 10:
func_126(1);
break;
case 9:
if(fLocal_72 > (fLocal_64 * fLocal_64)){
if(iLocal_67 !=263){
func_114(iLocal_67, 1, 0);
iLocal_67=263;
}
func_113(10);
}
break;
case 7:
func_2();
if(iLocal_67 !=263){
func_114(iLocal_67, 0, 0);
}
if(iLocal_58 !=-1){
func_78(&iLocal_58);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_63)){
if(func_1(sLocal_63)){
HUD::CLEAR_HELP(1);
}}
func_113(4);
break;
case 4:
if((iLocal_66 % 150)==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_68==2){
if(iLocal_68==2){
if(func_118(iLocal_62) && func_117(0, iLocal_61)){
func_121();
if(iLocal_67 !=263){
func_114(iLocal_67, 1, 0);
}
func_113(0);
}}}elseif(iLocal_68==0){
if(fLocal_72 > (fLocal_64 * fLocal_64)){
if(iLocal_67 !=263){
func_114(iLocal_67, 1, 0);
iLocal_67=263;
}
func_113(10);
}}elseif(iLocal_68==1){
if(fLocal_72 > ((80f + 5f) * (80f + 5f))){
func_121();
if(iLocal_67 !=263){
func_114(iLocal_67, 1, 0);
}
func_113(0);
}}
}
else{
func_114(iLocal_67, 1, 0);
}}else{
iLocal_66++;
}
break;
}}
wait(0);
}}


bool func_1(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_2(){
}


void func_3(){
}


void func_4(){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_83)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_83, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_81)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_81, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_82)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_82, 1, 1);
}
uLocal_84=PED::ADD_SCENARIO_BLOCKING_AREA((Local_77.f_0 - 3f), (Local_77.f_1 - 3f), (Local_77.f_2 - 3f), (Local_77.f_0 + 3f), (Local_77.f_1 + 3f), (Local_77.f_2 + 3f), 0, 1, 1, 1);
func_7();
func_5();
}

int func_5(){
if(func_6(0)){
return 0;
}
if(Global_100872.f_8){
if(Global_100872.f_10 > 0){
return 0;
}}elseif(Global_100872.f_10 > 1){
return 0;
}
Global_100872.f_10++;
return 1;
}

int func_6(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_7(){
if(func_120(Global_113810.f_20014.f_9, 1)){
func_124(&(Global_113810.f_20014.f_9), 1);
if(iLocal_89==Global_113810.f_20014.f_8){
if(Global_113810.f_20014.f_8 !=2){
Global_113810.f_20014.f_8++;
if(Global_113810.f_20014.f_8==1){
func_114(108, 1, 0);
func_20(114, 1, 0, 1, 0);
}elseif(Global_113810.f_20014.f_8==2){
func_114(109, 1, 0);
func_20(115, 1, 0, 1, 0);
}
if(iLocal_86 && Global_113810.f_20014.f_8==2){
func_19(62);
}else{
func_16("TRI_NEWRC", 0, 0, -1, 10000, 7, 0, 0, 0);
func_15(62);
}}
if(iLocal_89==0){
func_14(107);
func_10(108);
func_9(107, 1);
func_8(108, 1);
}elseif(iLocal_89==1){
func_14(107);
func_14(108);
func_10(109);
func_9(107, 1);
func_9(108, 1);
func_8(109, 1);
}elseif(iLocal_89==2){
func_14(107);
func_14(108);
func_14(109);
func_9(107, 1);
func_9(108, 1);
func_9(109, 1);
}}}}


void func_8(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1 !=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 13)){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 13);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 13);
}}


void func_9(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 20)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 20);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 20);
}
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 20);
}


void func_10(int iParam0){
func_13(iParam0, 1, 0);
func_12(iParam0, 1);
func_11(iParam0, 1);
}


void func_11(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 4)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 4);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 4);
}
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
}


void func_12(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 5)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 5);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 5);
}
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
}


void func_13(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 6)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 6);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 6);
}
if(bParam2){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 11);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 11);
}
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
}


void func_14(int iParam0){
func_13(iParam0, 0, 0);
func_12(iParam0, 1);
func_11(iParam0, 1);
}


void func_15(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
MISC::SET_BIT(&(Global_113810.f_20413.f_150[iVar1]), iVar0);
}}


void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_17(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")){
return;
}
if(iParam3 < 0){
return;
}
if(iParam5 < 500 && iParam5 !=-1){
return;
}
if(iParam4 < 0 && iParam4 !=-1){
return;
}
if(iParam6 < 1 || iParam6 > 7){
return;
}
if(iParam7==235){
return;
}
if(iParam8==235){
return;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_20413[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113810.f_20413.f_145 < 9){
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9=iParam5;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11=iParam6;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12=uParam2;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13=iParam7;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14=iParam8;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=-1;
}
Global_113810.f_20413.f_145++;
func_18();
}}


void func_18(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113810.f_20413.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 0)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[0]){
Global_113810.f_20413.f_146[0]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 1)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[1]){
Global_113810.f_20413.f_146[1]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 2)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[2]){
Global_113810.f_20413.f_146[2]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
iVar0++;
}}


void func_19(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
MISC::CLEAR_BIT(&(Global_113810.f_20413.f_150[iVar1]), iVar0);
MISC::CLEAR_BIT(&(Global_113810.f_20413.f_150[iVar1]), iVar0);
}}


void func_20(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
if(iParam0 !=198){
if(Global_78689){
Global_42911.f_227[iParam0]=iParam1;
}else{
Global_113810.f_7264.f_227[iParam0]=iParam1;
}
Global_39917[iParam0]=iParam2;
Global_40116[iParam0]=1;
func_23(iParam0, bParam3, iParam4, 0);
func_21(iParam0, iParam1);
}}


void func_21(int iParam0, int iParam1){
switch (iParam0){
case 12:
if(iParam1==0){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
}
break;
case 71:
if(iParam1 !=1){
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
}
break;
case 65:
if(iParam1==1){
func_22(0, 0);
}else{
func_22(0, 1);
}
break;
case 6:
if(iParam1==1){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
}
break;
case 174:
if(iParam1==2){
AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
}
break;
case 37:
if(iParam1==1){
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
}
break;
}}


void func_22(int iParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_112447, iParam0);
}else{
MISC::CLEAR_BIT(&Global_112447, iParam0);
}
Global_112446=1;
}


bool func_23(int iParam0, bool bParam1, int iParam2, bool bParam3){
bool bVar0;
int iVar1;
int iVar2;
struct<5> Var3;
var uVar4;
bool bVar5;
int iVar6;
Global_1926478=1;
bVar0=false;
Var3.f_4=3;
Var3.f_8=3;
Var3.f_64=3;
Var3.f_75=3;
Var3.f_91=3;
func_27(&Var3, iParam0);
if(func_24()){
iVar1=Global_113810.f_7264.f_227[iParam0];
}else{
iVar1=Global_42911.f_227[iParam0];
}
iVar2=Global_40315[iParam0];
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3){
Global_1926478=1;
}else{
bVar5=true;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=MISC::GET_HASH_KEY("standard_global_reg")){
if(iParam2==0){
if(Global_39917[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3, 1) < 200f){
bVar5=false;
Global_1926478=1;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID())){
if(!CAM::IS_SCREEN_FADED_OUT()){
bVar5=false;
Global_1926478=1;
}}}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() !=5)){
bVar5=false;
Global_1926478=1;
}
if(bVar5){
switch (Var3.f_3){
case 0:
if(iVar1==2){
}else{
if(Var3.f_4[iVar1] !=0){
ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], 0);
}
if(Var3.f_4[iVar2] !=0){
ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
}
Global_41511[iParam0]=1;
}
bVar0=true;
break;
case 1:
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
Global_1926478=1;
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
Global_1926478=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
Global_1926478=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REQUEST_IPL(&(Var3.f_34));
Global_1926478=1;
}
}}elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
}
}}elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
}
}}
Global_41312[iParam0]=1;
Global_41511[iParam0]=1;
bVar0=true;
break;
case 2:
iVar6=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
if(iVar6 !=0){
if(MISC::GET_HASH_KEY(&(Var3.f_50)) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_50))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_50));
}
}
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
}
elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
}
elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
}
if(bParam1){
INTERIOR::REFRESH_INTERIOR(iVar6);
}}
Global_41511[iParam0]=1;
Global_41312[iParam0]=1;
bVar0=true;
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f){
uVar4=OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
if(OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar4)){
if(iVar1==0){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4, 3);
Global_41511[iParam0]=1;
bVar0=true;
}elseif(iVar1==1){
if((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=8){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4, 10);
Global_41511[iParam0]=1;
bVar0=true;
}}elseif(iVar1==2){
bVar0=true;
}
}}
break;
case 4:
if(iVar1==0){
ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
MISC::CLEAR_BIT(&(Global_39663[(iParam0 / 32)]), (iParam0 % 32));
}elseif(iVar1==1){
ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
MISC::SET_BIT(&(Global_39663[(iParam0 / 32)]), (iParam0 % 32));
}
bVar0=true;
break;
}
if(bVar0){
Global_40116[iParam0]=0;
Global_40315[iParam0]=iVar1;
if(!func_24()){
if(!Global_40912[iParam0]){
Global_40912[iParam0]=1;
Global_41111++;
}}}}}
return bVar0;
}

int func_24(){
if((func_26()==-1 || func_26()==999) && !func_25()==0){
return 1;
}
return 0;
}

int func_25(){
return Global_32284;
}

int func_26(){
return Global_32283;
}

int func_27(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 3){
uParam0->f_4[iVar0]=0;
StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
uParam0->f_64[iVar0]=0;
uParam0->f_75[iVar0]=0;
uParam0->f_91[iVar0]=0;
iVar0++;
}
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0;
uParam0->f_33=0;
StringCopy(&(uParam0->f_34), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
StringCopy(&(uParam0->f_50), "", 32);
uParam0->f_58={
0f, 0f, 0f 
};
uParam0->f_61={
0f, 0f, 0f 
};
uParam0->f_68={
0f, 0f, 0f 
};
uParam0->f_71={
0f, 0f, 0f 
};
uParam0->f_74=0f;
uParam0->f_79={
0f, 0f, 0f 
};
uParam0->f_82={
0f, 0f, 0f 
};
uParam0->f_85={
0f, 0f, 0f 
};
uParam0->f_88={
0f, 0f, 0f 
};
switch (iParam1){
case 3:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
uParam0->f_33=1;
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 4:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 0:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
*uParam0={
-93.4f, 6410.9f, 36.8f 
};
break;
case 1:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
*uParam0={
890.3647f, -2367.289f, 28.10582f 
};
break;
case 2:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
uParam0->f_33=0;
*uParam0={
-1020.5f, 663.41f, 154.75f 
};
uParam0->f_58={
-1018.913f, 603.2904f, 105.6611f 
};
uParam0->f_61={
-1038.913f, 639.2904f, 135.6611f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
break;
case 5:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
break;
case 196:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
break;
case 6:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
break;
case 7:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 8:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 9:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 10:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 11:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
break;
case 12:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
uParam0->f_68={
-162.8918f, -2365.769f, 0f 
};
uParam0->f_71={
190.75f, 31.25f, 21f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 13:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
break;
case 14:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
break;
case 15:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
*uParam0={
-95.2f, 6411.3f, 31.5f 
};
break;
case 16:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 17:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 18:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 19:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 20:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
801.7f, -1810.8f, 23.3f 
};
break;
case 21:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
787.3967f, -1808.858f, 29.8532f 
};
uParam0->f_58={
814f, -1750f, 20f 
};
uParam0->f_61={
790f, -1899f, 35f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
uParam0->f_64[2]=0;
break;
case 22:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
break;
case 23:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
break;
case 24:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
break;
case 25:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
break;
case 26:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
*uParam0={
163.4f, -745.7f, 251f 
};
break;
case 27:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 28:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 29:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_h");
uParam0->f_4[1]=joaat("dt1_05_build1_damage");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 30:
uParam0->f_3=4;
uParam0->f_4[0]=-112041596;
uParam0->f_4[1]=joaat("dt1_05_build1_damage_lod");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 31:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_slod");
uParam0->f_4[1]=joaat("dt1_05_damage_slod");
*uParam0={
178.534f, -668.835f, 37.2113f 
};
break;
case 32:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 33:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 34:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 35:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
*uParam0={
105.4557f, -745.4835f, 44.7548f 
};
break;
case 36:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
*uParam0={
169f, -670.3f, 41.9f 
};
break;
case 37:
uParam0->f_3=1;
*uParam0={
50.2f, 3743.9f, 40.9f 
};
uParam0->f_79={
16.9757f, 3614.307f, 30.0677f 
};
uParam0->f_82={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_85={
16.9757f, 3614.307f, 30.0677f 
};
uParam0->f_88={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
break;
case 38:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 39:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 40:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 41:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 42:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 43:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 44:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 45:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 46:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 47:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 48:
uParam0->f_3=1;
StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
uParam0->f_33=1;
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
uParam0->f_68={
31.134f, 3738.783f, 39.062f 
};
uParam0->f_71={
13.6f, 20f, 8.9f 
};
uParam0->f_74=48f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=1;
break;
case 49:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
break;
case 50:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2450.595f, 4959.929f, 44.2575f 
};
uParam0->f_79={
2383.756f, 4929.988f, 39.52461f 
};
uParam0->f_82={
2505.756f, 5023.988f, 67.52461f 
};
break;
case 55:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2450.595f, 4959.929f, 44.2575f 
};
break;
case 51:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
uParam0->f_33=1;
*uParam0={
2444.8f, 4976.4f, 50.5f 
};
break;
case 52:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 53:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 54:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 56:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 57:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 58:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 59:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 60:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
*uParam0={
889.3f, -2910.9f, 40f 
};
break;
case 61:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
*uParam0={
-1600.619f, 4443.457f, 0.725f 
};
break;
case 62:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
*uParam0={
966.1f, -114.8f, 75.2f 
};
break;
case 63:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
*uParam0={
-3086.428f, 339.2523f, 6.3717f 
};
break;
case 64:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1675.178f, -1143.605f, 12.0175f 
};
break;
case 65:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 66:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 67:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
*uParam0={
131.29f, -631.22f, 261.85f 
};
break;
case 68:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
*uParam0={
233.9f, -1355f, 30.3f 
};
break;
case 69:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
*uParam0={
234.4f, -1355.6f, 40.5f 
};
break;
case 70:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 71:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 72:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 73:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 74:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 75:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 76:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 105:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 106:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
*uParam0={
1861.28f, 2402.11f, 58.53f 
};
break;
case 107:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
*uParam0={
-1327.46f, -274.82f, 54.25f 
};
break;
case 108:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
*uParam0={
2697.32f, 3162.18f, 58.1f 
};
break;
case 109:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
*uParam0={
2119.12f, 3058.21f, 53.25f 
};
break;
case 110:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
*uParam0={
-804.25f, -2276.88f, 23.59f 
};
break;
case 111:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 112:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 77:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
480.9554f, -1321.21f, 28.2037f 
};
uParam0->f_85={
508.3f, -1299.3f, 39.4f 
};
uParam0->f_88={
459.9f, -1363.2f, 21.4f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=0;
break;
case 78:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
*uParam0={
1973f, 3815f, 34f 
};
uParam0->f_33=0;
break;
case 79:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
*uParam0={
-1088.6f, -1650.6f, 6.4f 
};
break;
case 80:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
*uParam0={
-13.83f, -1455.45f, 31.81f 
};
break;
case 113:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
*uParam0={
-1277.629f, -2030.913f, 1.2823f 
};
break;
case 114:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
*uParam0={
2384.969f, 4277.583f, 30.379f 
};
break;
case 115:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
*uParam0={
1577.881f, 3836.107f, 30.7717f 
};
break;
case 87:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-180.5771f, -1016.928f, 28.2893f 
};
break;
case 88:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
*uParam0={
-630.4205f, -236.7843f, 37.057f 
};
uParam0->f_79={
(-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) 
};
uParam0->f_82={
(-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) 
};
break;
case 89:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
*uParam0={
-583.1606f, -282.3967f, 35.394f 
};
break;
case 90:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
*uParam0={
-14.651f, -604.3639f, 25.1823f 
};
break;
case 91:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2773.61f, 2835.327f, 35.1903f 
};
break;
case 94:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
1743.682f, 3286.251f, 40.0875f 
};
break;
case 95:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
1222.9f, 1877.9f, 79.9f 
};
uParam0->f_58={
1206.8f, 1803f, 43.9f 
};
uParam0->f_61={
1329f, 2060.4f, 143.9f 
};
uParam0->f_64[0]=0;
uParam0->f_64[1]=1;
uParam0->f_64[2]=0;
break;
case 104:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
*uParam0={
-351f, -1324f, 44.02f 
};
break;
case 103:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
*uParam0={
391.81f, -962.71f, 41.97f 
};
break;
case 102:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
*uParam0={
424.2f, -1944.31f, 33.09f 
};
break;
case 92:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626.374f, 2949.869f, 39.1409f 
};
break;
case 93:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626.374f, 2949.869f, 39.1409f 
};
break;
case 118:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 116:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 117:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 119:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 120:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 122:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 121:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 123:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 124:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 170:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 171:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
*uParam0={
-810.5301f, 187.7868f, 71.4786f 
};
break;
case 125:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 164:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 165:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 166:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 167:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 168:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 169:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 126:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 127:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 128:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 129:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 130:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 131:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 132:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 133:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 134:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 179:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-30.8793f, -1088.336f, 25.4221f 
};
uParam0->f_68={
-29.3f, -1086.35f, 25.57f 
};
uParam0->f_71={
5.5f, 3f, 2f 
};
uParam0->f_74=-10f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 174:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
StringCopy(&(uParam0->f_50), "csr_inMission", 32);
uParam0->f_33=0;
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 175:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_68={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_71={
2.5f, 3f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 176:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_68={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_71={
3f, 1f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 177:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_68={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_71={
1f, 3f, 2f 
};
uParam0->f_74=-45f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 178:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 173:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 180:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
*uParam0={
23.9346f, -669.7552f, 30.8853f 
};
break;
case 181:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
StringCopy(&(uParam0->f_42), "v_hospital", 32);
uParam0->f_33=0;
*uParam0={
300.9423f, -586.1784f, 42.2919f 
};
break;
case 135:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 136:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 137:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 138:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 139:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 140:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 141:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 142:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 143:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 144:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 145:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 146:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 147:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
uParam0->f_33=0;
*uParam0={
-1150.039f, -1521.761f, 9.6331f 
};
break;
case 148:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
uParam0->f_33=0;
*uParam0={
-1150.039f, -1521.761f, 9.6331f 
};
break;
case 149:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
1856.029f, 3682.998f, 33.2675f 
};
break;
case 150:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-440.5073f, 6018.766f, 30.49f 
};
break;
case 151:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.386f, 793.0532f 
};
break;
case 152:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.386f, 793.0532f 
};
break;
case 153:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 154:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 155:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 172:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
StringCopy(&(uParam0->f_42), "v_strip3", 32);
*uParam0={
96.4811f, -1291.294f, 28.2688f 
};
break;
case 182:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
139.5795f, -3092.962f, 8.64631f 
};
uParam0->f_79={
Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_82={
Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_85={
Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_88={
Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=1;
break;
case 183:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
203.7784f, -3131.767f, 7.041344f 
};
uParam0->f_79={
Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) 
};
uParam0->f_82={
Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) 
};
break;
case 184:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
144.7706f, -2982.659f, 7.952507f 
};
uParam0->f_79={
Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) 
};
uParam0->f_82={
Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) 
};
break;
case 185:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1154.965f, -1520.983f, 9.132731f 
};
uParam0->f_79={
-1154.965f, -1520.983f, 9.132731f 
};
uParam0->f_82={
-1158.965f, -1524.983f, 11.63273f 
};
break;
case 187:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1052.204f, 371.9537f, 67.914f 
};
uParam0->f_79={
-1052.204f, 371.9537f, 67.914f 
};
uParam0->f_82={
-1048.064f, 368.0221f, 70.9128f 
};
break;
case 186:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
1954.984f, 3792.991f, 30.3086f 
};
uParam0->f_79={
1954.984f, 3792.991f, 30.3086f 
};
uParam0->f_82={
1983.45f, 3830.78f, 36.2726f 
};
break;
case 188:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1122.202f, 48.5724f, 51.4652f 
};
uParam0->f_79={
-1122.202f, 48.5724f, 51.4652f 
};
uParam0->f_82={
-1076.233f, 92.1041f, 60.0617f 
};
break;
case 81:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2199.138f, 223.4648f, 181.1118f 
};
break;
case 82:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2242.785f, 263.4779f, 173.6154f 
};
break;
case 83:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
3832.9f, 3665.5f, -23.4f 
};
break;
case 84:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
2814.7f, 4758.5f, 47.9f 
};
break;
case 85:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1096.505f, 4.5754f, 49.8103f 
};
break;
case 86:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-781.6566f, 186.8937f, 71.8352f 
};
break;
case 189:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
uParam0->f_33=0;
*uParam0={
55.7f, -1391.3f, 30.5f 
};
break;
case 190:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
uParam0->f_33=0;
*uParam0={
700.091f, -933.641f, 20.308f 
};
break;
case 191:
uParam0->f_3=1;
*uParam0={
-1096.381f, -836.17f, 36.6755f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 192:
uParam0->f_3=1;
*uParam0={
449.6558f, -980.1375f, 42.6918f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 193:
uParam0->f_3=1;
*uParam0={
363.0175f, -1598.079f, 35.9502f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 194:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
-1601.424f, 2808.213f, 16.2598f 
};
break;
case 97:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
23.7318f, -647.2123f, 37.9549f 
};
break;
case 98:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
*uParam0={
12.9689f, -648.4698f, 9.7693f 
};
break;
case 99:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
*uParam0={
-1459.127f, 486.1281f, 115.2016f 
};
break;
case 100:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
*uParam0={
-248.4916f, -2010.509f, 34.5743f 
};
break;
case 101:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
*uParam0={
-1081.347f, -263.1502f, 38.7152f 
};
break;
case 195:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
*uParam0={
136.1795f, -750.701f, 262.0516f 
};
break;
case 197:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
*uParam0={
2096f, 3168.7f, 42.9f 
};
break;
}
switch (iParam1){
case 156:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 157:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 158:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 163:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 159:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 161:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 162:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 160:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 96:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
*uParam0={
19.0568f, 536.4818f, 169.6277f 
};
break;
}
return 1;
}


void func_28(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97883)){
return;
}
if(MISC::COMPARE_STRINGS(sParam0, &Global_97883, 0, -1) !=0){
return;
}
STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_94990);
StringCopy(&Global_97883, "", 64);
}


void func_29(int iParam0){
if(*iParam0==-1){
return;
}
if(!*iParam0==Global_43339){
*iParam0=-1;
return;
}
*iParam0=-1;
Global_43338=0;
Global_43340=0;
Global_43377=15;
Global_63482=0;
Global_63483=0;
}


void func_30(){
char cVar0[24];
if(MISC::IS_XBOX360_VERSION() || func_32()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_31()){
StringCopy(&cVar0, "PRESENCE_0_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
}}


var func__31(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__32(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_33(var uParam0){
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
}


float func_34(var uParam0){
if(func_37(uParam0)){
if(func_36(uParam0)){
return uParam0->f_2;
}else{
return (func_35(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


float func_35(bool bParam0){
float fVar0;
float fVar1;
int iVar2;
float fVar3;
float fVar4;
if(bParam0){
fVar0=to_float(MISC::GET_GAME_TIMER());
fVar1=(fVar0 / 1000f);
return fVar1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar2=NETWORK::GET_NETWORK_TIME();
fVar3=to_float(iVar2);
fVar4=(fVar3 / 1000f);
return fVar4;
}
return (to_float(MISC::GET_GAME_TIMER()) / 1000f);
}


bool func_36(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


bool func_37(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_38(){
func_7();
return 1;
}


void func_39(){
}


void func_40(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97883)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97883, 0, 0, 0, 1, 0);
StringCopy(&Global_97883, "", 64);
}
StringCopy(&Global_97883, sParam0, 64);
STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_6(0));
}


char* func_41(int iParam0){
switch (iParam0){
case 0:
return "OJBJ";
break;
case 1:
return "MGDT";
break;
case 2:
return "MGGF";
break;
case 3:
return "OJHU";
break;
case 4:
return "MGOR";
break;
case 5:
return "MGPS";
break;
case 6:
return "MGRP";
break;
case 7:
return "MGSEA";
break;
case 8:
return "MGSTR";
break;
case 9:
return "MGSC";
break;
case 10:
return "MGSP";
break;
case 11:
return "MGSRm";
break;
case 12:
return "OJTX";
break;
case 13:
return "MGTN";
break;
case 14:
return "OJTW";
break;
case 15:
return "OJDA";
break;
case 16:
return "OJDG";
break;
case 17:
return "MGTR";
break;
case 18:
return "MGYG";
break;
case 19:
return "MGCR";
break;
}
return "INVALID!";
}


void func_42(int iParam0){
var uVar0;
char cVar1[24];
if(MISC::IS_XBOX360_VERSION() || func_32()){
uVar0=iParam0;
NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
}elseif(MISC::IS_PS3_VERSION() || func_31()){
StringCopy(&cVar1, "SPMG_", 24);
StringIntConCat(&cVar1, iParam0, 24);
StringConCat(&cVar1, "_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
}}


void func_43(var uParam0){
if(!func_37(uParam0)){
func_46(uParam0);
}else{
func_44(uParam0);
}}


void func_44(var uParam0){
func_45(uParam0, 0f);
}


void func_45(var uParam0, float fParam1){
uParam0->f_1=(func_35(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, 1);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


void func_46(var uParam0){
if(!func_37(uParam0)){
func_44(uParam0);
}}


void func_47(){
int iVar0;
if(bLocal_85){
iVar0=0;
while (iVar0 < iLocal_90){
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_90[iVar0])){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_90[iVar0]);
}
iVar0++;
}
TASK::RESET_EXCLUSIVE_SCENARIO_GROUP();
}}

int func_48(){
struct<8> Var0;
int iVar1;
HUD::CLEAR_HELP(1);
Var0.f_0=iLocal_89;
Var0.f_1={
Local_76 
};
Var0.f_4=uLocal_79;
Var0.f_5=iLocal_83;
Var0.f_6=iLocal_81;
Var0.f_7=iLocal_82;
iVar1=start_new_script_with_args(&Local_49, &Var0, 8, iLocal_59);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_49);
return iVar1;
}


void func_49(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0==0){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
iVar0=func_57(iParam0);
if(!iVar0==-1){
iVar1=Global_44355[iVar0 /*5*/];
func_52(1, iVar1, 1);
return;
}
iVar2=func_51(iParam0);
if(iVar2==-1){
return;
}
func_50(iVar2);
}


void func_50(int iParam0){
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

int func_51(int iParam0){
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


void func_52(int iParam0, int iParam1, int iParam2){
func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}


void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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
if(func_55(iParam0, iParam1, iParam2)){
return;
}
iVar0=func_54();
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

int func_54(){
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

int func_55(int iParam0, int iParam1, int iParam2){
if(func_56(iParam0, iParam1, iParam2)==-1){
return 0;
}
return 1;
}

int func_56(int iParam0, int iParam1, int iParam2){
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

int func_57(int iParam0){
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


void func_58(){
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

int func_59(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_61(0)){
return 0;
}
Global_43341++;
*iParam0=Global_43341;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23251.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43377=iParam2;
Global_43339=*iParam0;
Global_43340=iParam4;
Global_43338=0;
return 1;
}
if(*iParam0 !=-1){
if(Global_43338 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*iParam0){
return 2;
}
iVar0++;
}}elseif(Global_43339==*iParam0){
return 1;
}
*iParam0=-1;
}
if(*iParam0==-1){
if(!func_118(iParam2)){
return 0;
}
if(Global_43338==8){
return 0;
}
Global_43341++;
*iParam0=Global_43341;
Global_43344[Global_43338 /*4*/]=Global_43341;
Global_43344[Global_43338 /*4*/].f_1=iParam1;
Global_43344[Global_43338 /*4*/].f_2=iParam2;
Global_43344[Global_43338 /*4*/].f_3=0;
Global_43338++;
if(iParam4 !=0){
func_60(iParam0, iParam4);
}}
return 2;
}


void func_60(var uParam0, int iParam1){
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

int func_61(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_118(iParam0)){
return 0;
}
return 1;
}


void func_62(){
int iVar0;
if(iLocal_89==2 && iLocal_86){
func_75(iLocal_67);
}elseif((PED::IS_PED_INJURED(iLocal_83) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(91, ENTITY::GET_ENTITY_COORDS(iLocal_83, 1), 40f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(118, ENTITY::GET_ENTITY_COORDS(iLocal_83, 1), 40f)){
func_81("TRI_DEATH", -1);
iVar0=iLocal_67;
func_75(iLocal_67);
iLocal_67=iVar0;
}elseif(!iLocal_86){
if(func_74() || func_72()){
}else{
iLocal_86=1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_83)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_83, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_83, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) <=144f){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("script_task_look_at_entity")) !=1){
TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}}elseif(TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("script_task_look_at_entity"))==1){
TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
}}}
if(bLocal_85){
func_63();
}}


void func_63(){
int iVar0;
int iVar1;
var uVar2[10];
int iVar3;
var uVar4;
int iVar5;
char cVar6[32];
if(MISC::GET_GAME_TIMER() > iLocal_88 && fLocal_55 < (30f * 30f)){
iLocal_88=MISC::GET_GAME_TIMER() + 10000;
if(MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216) <=0.5f){
iVar1=func_66();
if(iVar1==0){
iVar0=0;
}elseif(iVar1==1){
iVar0=1;
}elseif(iVar1==2){
iVar0=3;
}
PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(1);
iVar3=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, iVar0);
iVar5=0;
while (iVar5 < iVar3){
if(!PED::IS_PED_INJURED(uVar2[iVar5]) && !ENTITY::DOES_ENTITY_EXIST(uVar4)){
if(ENTITY::GET_ENTITY_MODEL(uVar2[iVar5])==joaat("a_m_y_roadcyc_01")){
iVar4=uVar2[iVar5];
}}
iVar5++;
}
if(ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_INJURED(iVar4)){
StringCopy(&cVar6, "A_M_Y_TRIATHLON_01_MINI_0", 32);
StringIntConCat(&cVar6, MISC::GET_RANDOM_INT_IN_RANGE(1, 5), 32);
func_64(iVar4, "TRIATHLON_WARMUP", &cVar6, 6);
}}}}


void func_64(var uParam0, char* sParam1, char[4] cParam2, int iParam3){
AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, cParam2, func_65(iParam3), 0);
}

int func_65(int iParam0){
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


var func__66(){
func_67();
return Global_113810.f_2366.f_539.f_4321;
}


void func_67(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_70(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_69(PLAYER::PLAYER_PED_ID());
if(func_68(iVar0) && (!func_104(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_68(Global_113810.f_2366.f_539.f_4321)){
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


bool func_68(int iParam0){
return iParam0 < 3;
}

int func_69(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_70(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_70(int iParam0){
if(func_68(iParam0)){
return func_71(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__71(int iParam0){
return Global_2058[iParam0 /*29*/];
}

int func_72(){
if(func_73(131)){
return 1;
}
return 0;
}

int func_73(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_99.f_58[iParam0];
}

int func_74(){
if(!func_73(130)){
return 1;
}
return 0;
}


void func_75(int iParam0){
if(iLocal_57 < 5){
if(iParam0 !=263){
if(iParam0 < 0 || iParam0 >=263){
}
func_114(iParam0, 0, 0);
}
iLocal_67=263;
func_78(&iLocal_58);
iLocal_57=9;
}}

int func_76(int iParam0, bool bParam1){
int iVar0;
iVar0=func_77(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_83(0)){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]==1 && Global_44123[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44123[iVar0 /*32*/].f_29){
return 0;
}}
Global_44123[iVar0 /*32*/].f_5=1;
Global_44123[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44123[iVar0 /*32*/]==0){
}
if(Global_44123[iVar0 /*32*/].f_7){
}}}
return 0;
}

int func_77(int iParam0){
int iVar0;
if(iParam0 < 0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(Global_44123[iVar0 /*32*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_78(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_77(*iParam0);
if(iVar0==-1){
*iParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/].f_7=1;
*iParam0=-1;
return;
}}
*iParam0=-1;
}


void func_79(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_78(iParam0);
}
return;
}
if(!*iParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(!Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/]=1;
Global_44123[iVar0 /*32*/].f_1=Global_44324;
Global_44324++;
Global_44123[iVar0 /*32*/].f_4=0;
Global_44123[iVar0 /*32*/].f_29=0;
Global_44123[iVar0 /*32*/].f_5=0;
Global_44123[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
Global_44123[iVar0 /*32*/].f_6=iParam3;
Global_44123[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44123[iVar0 /*32*/].f_7=0;
Global_44123[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44123[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
Global_44123[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44123[iVar0 /*32*/].f_12=0;
Global_44123[iVar0 /*32*/].f_30=0;
}
*iParam0=Global_44123[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_80(var uParam0){
return 1;
}


void func_81(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


var func__82(){
return Global_75816;
}

int func_83(int iParam0){
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


var func__84(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


bool func_85(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}

int func_86(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}


bool func_87(bool bParam0){
if(bParam0){
return (Global_23251.f_4 && Global_23251.f_104==4);
}
return Global_23251.f_4;
}


void func_88(var uParam0, int iParam1){
func_89(uParam0, iParam1);
}


void func_89(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}

int func_90(){
return 1;
}


bool func_91(){
int iVar0;
bool bVar1;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return 0;
}
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
if(((iVar0==0 || iVar0==joaat("weapon_unarmed")) || iVar0==joaat("weapon_electric_fence")) || iVar0==joaat("gadget_parachute")){
bVar1=false;
}else{
bVar1=true;
}
if(bVar1){}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}
return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_92(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_66();
if(!func_68(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_99()) || Global_112857) || Global_32286) || func_98()) || func_84(8, -1)) || func_97()) || func_96()) || func_95()) || func_86()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_99()) || Global_32286) || func_98()) || func_84(8, -1)) || func_95()) || func_97()) || func_96()) || func_86()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_99()) || Global_112857) || Global_32286) || func_98()) || func_84(8, -1)) || func_95()) || func_97()) || func_96()) || func_86()) || Global_113810.f_7691.f_919[iVar0]==5) || Global_43924 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_99()) || Global_112857) || Global_32286) || func_98()) || func_84(8, -1)) || func_97()) || func_96()) || func_86()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_99() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_84(8, -1)) || func_86()) || func_94()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_84(8, -1) || func_97()) || func_96()) || func_94()) || func_93()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_99()) || Global_32286) || func_98()) || func_84(8, -1)) || func_96()) || func_95()) || func_86()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_99()) || func_96()) || Global_112857) || Global_32286) || func_98()) || Global_44569) || func_84(8, -1)) || func_95()) || func_94()) || func_86()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_99()) || Global_112857) || Global_32286) || func_98()) || func_84(8, -1)) || func_95()) || func_94()) || func_97()) || func_96()) || func_86()){
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


var func__93(){
return Global_100872.f_1;
}

int func_94(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_95(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


bool func_96(){
return Global_100885.f_394 > 0;
}


bool func_97(){
return Global_100885.f_393 > 0;
}


var func__98(){
return Global_1575063;
}

int func_99(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}

int func_100(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0){
return 1;
}
return 0;
}


var func__101(){
return Global_96645;
}

int func_102(int iParam0){
switch (iParam0){
case 0:
return 1;
break;
case 1:
if(func_104(6) || func_104(7)){
return 1;
}else{
return func_102(3);
}
break;
case 2:
return 1;
break;
case 3:
if(func_118(5)){
if(func_92(4)){
return 1;
}}
break;
}
return 0;
}


bool func_103(int iParam0){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
return HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19);
}


bool func_104(int iParam0){
return Global_43377==iParam0;
}


void func_105(){
float fVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
float fVar4;
struct<3> Var5;
struct<3> Var6;
var uVar7;
int iVar8;
if(bLocal_85){
MISC::CLEAR_AREA_OF_OBJECTS(Local_76, 25f, 0);
if(TASK::DOES_SCENARIO_GROUP_EXIST("Triathlon_1_Start") && iLocal_89==1){
TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1_Start", 1);
}
if(TASK::DOES_SCENARIO_GROUP_EXIST("Triathlon_2_Start") && iLocal_89==0){
TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2_Start", 1);
}
if(TASK::DOES_SCENARIO_GROUP_EXIST("Triathlon_3_Start") && iLocal_89==2){
TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3_Start", 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_79)){
Var1={
func_109(iLocal_89==1, 2434.162f, 4282.774f, 35.5112f, func_109(iLocal_89==0, -1231.203f, -2051.531f, 12.9317f, func_109(iLocal_89==2, 1591.099f, 3814.026f, 33.2697f, 0f, 0f, 0f))) 
};
fVar0=func_108(iLocal_89==1, 264.0724f, func_108(iLocal_89==0, 256.2876f, func_108(iLocal_89==2, 222.6197f, 0f)));
iLocal_79=OBJECT::CREATE_OBJECT(joaat("prop_tri_table_01"), Var1, 1, 1, 0);
ENTITY::SET_ENTITY_HEADING(iLocal_79, fVar0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tri_table_01"));
}
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_80)){
Local_77={
func_109(iLocal_89==1, 2434.955f, 4282.711f, 35.5333f, func_109(iLocal_89==0, -1230.361f, -2051.761f, 12.918f, func_109(iLocal_89==2, 1591.686f, 3813.401f, 33.3371f, 0f, 0f, 0f))) 
};
fVar0=func_108(iLocal_89==1, 264.3256f, func_108(iLocal_89==0, 253.044f, func_108(iLocal_89==2, 220.7912f, 0f)));
iLocal_80=OBJECT::CREATE_OBJECT(joaat("prop_chair_08"), Local_77, 1, 1, 0);
ENTITY::SET_ENTITY_HEADING(iLocal_80, fVar0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_chair_08"));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_81)){
Var1.f_2=(Var1.f_2 + 0.54f);
iLocal_81=OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), Var1, 1, 1, 0);
ENTITY::SET_ENTITY_ROTATION(iLocal_81, -90f, 0f, 90f, 2, 0);
PHYSICS::ACTIVATE_PHYSICS(iLocal_81);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_clipboard"));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_83)){
fVar0=func_108(iLocal_89==1, 79.9315f, func_108(iLocal_89==0, 77.5972f, func_108(iLocal_89==2, 47.2081f, 0f)));
iLocal_83=PED::CREATE_PED(4, joaat("a_m_y_roadcyc_01"), Local_77, fVar0, 1, 1);
PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 4, 0, 3, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 3, 0, 2, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_roadcyc_01"));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_82)){
if(iLocal_89==1){
Var2={
2433.74f, 4283.08f, 36.235f 
};
}elseif(iLocal_89==0){
Var2={
-1231.47f, -2051.23f, 13.68f 
};
}elseif(iLocal_89==2){
Var2={
1591.11f, 3814.46f, 33.99f 
};
}
iLocal_82=OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), Var2, 1, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pencil_01"));
}
if(!PED::IS_PED_INJURED(iLocal_83)){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_77, 3f, 1)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_83, Local_77, 2f, 0);
}else{
switch (iLocal_89){
case 0:
Var3={
-1230.37f, -2051.766f, 13.4441f 
};
fVar4=69.8085f;
break;
case 1:
Var3={
2435.042f, 4282.716f, 36.0357f 
};
fVar4=83.5805f;
break;
case 2:
Var3={
1591.71f, 3813.355f, 33.8383f 
};
fVar4=41.0251f;
break;
}
TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_83, "PROP_HUMAN_SEAT_CHAIR", Var3, fVar4, -1, 0, 1);
}}
iVar8=0;
while (iVar8 < iLocal_90){
func_107(iLocal_89, iVar8, &Var5, &Var6, &uVar7);
if(!func_106(Var5)){
iLocal_90[iVar8]=PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Var5, Var6, uVar7, 0, 7);
}
iVar8++;
}}}

int func_106(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_107(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
*uParam2={
-1285.288f, -2039.943f, 1.60045f 
};
*uParam3={
4f, 10.2f, 10f 
};
*uParam4=2.3168f;
break;
case 1:
*uParam2={
-1268.667f, -2024.78f, 1.5678f 
};
*uParam3={
4f, 10.2f, 10f 
};
*uParam4=2.4f;
break;
case 2:
*uParam2={
-1227.085f, -2053.458f, 12.98837f 
};
*uParam3={
5f, 14f, 10f 
};
*uParam4=2.6f;
break;
case 3:
*uParam2={
-1210.865f, -2052.289f, 13f 
};
*uParam3={
1.96f, 3f, 10f 
};
*uParam4=2.865f;
break;
case 4:
*uParam2={
-1215.452f, -2065.881f, 13f 
};
*uParam3={
1.63f, 2.9f, 10f 
};
*uParam4=2.685f;
break;
}
break;
case 1:
switch (iParam1){
case 0:
*uParam2={
2384.317f, 4268.876f, 30.44363f 
};
*uParam3={
4f, 10f, 10f 
};
*uParam4=6.047f;
break;
case 1:
*uParam2={
2384.975f, 4289.719f, 30.32816f 
};
*uParam3={
4f, 10f, 10f 
};
*uParam4=3.238f;
break;
case 2:
*uParam2={
2436.907f, 4282.85f, 35.5872f 
};
*uParam3={
4.5f, 13f, 10f 
};
*uParam4=3.019f;
break;
case 3:
*uParam2={
2411.25f, 4298.006f, 34.98311f 
};
*uParam3={
2.1f, 3.2f, 10f 
};
*uParam4=1.19f;
break;
case 4:
*uParam2={
0f, 0f, 0f 
};
*uParam3={
1.63f, 2.9f, 0f 
};
*uParam4=2.685f;
break;
}
break;
case 2:
switch (iParam1){
case 0:
*uParam2={
1568.879f, 3829.782f, 30.95098f 
};
*uParam3={
4f, 9.9f, 10f 
};
*uParam4=2.107f;
break;
case 1:
*uParam2={
1586.192f, 3842.765f, 30.538f 
};
*uParam3={
4f, 9.9f, 10f 
};
*uParam4=2.295f;
break;
case 2:
*uParam2={
1594.002f, 3810.718f, 33.55904f 
};
*uParam3={
4f, 12f, 10f 
};
*uParam4=2.251f;
break;
case 3:
*uParam2={
1604.679f, 3828.308f, 33.82485f 
};
*uParam3={
1.96f, 3f, 10f 
};
*uParam4=0.876f;
break;
case 4:
*uParam2={
1607.135f, 3824.388f, 33.06039f 
};
*uParam3={
1.63f, 2.9f, 0f 
};
*uParam4=0f;
break;
}
break;
}}


float func_108(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


Vector3 func__109(bool bParam0, struct<3> Param1, struct<3> Param2){
if(bParam0){
return Param1;
}
return Param2;
}

int func_110(){
if(bLocal_85){
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_tri_table_01"))){
return 0;
}
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_chair_08"))){
return 0;
}
if(!STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_roadcyc_01"))){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@male@generic@idle_a")){
return 0;
}
if(!STREAMING::HAS_MODEL_LOADED(joaat("p_cs_clipboard"))){
return 0;
}
if(!STREAMING::HAS_MODEL_LOADED(joaat("prop_pencil_01"))){
return 0;
}}
return 1;
}


void func_111(){
if(bLocal_85){
STREAMING::REQUEST_MODEL(joaat("prop_tri_table_01"));
STREAMING::REQUEST_MODEL(joaat("prop_chair_08"));
STREAMING::REQUEST_MODEL(joaat("a_m_y_roadcyc_01"));
STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@generic@idle_a");
switch (iLocal_89){
case 0:
if(!STREAMING::IS_IPL_ACTIVE("AP1_04_TriAf01")){
STREAMING::REQUEST_IPL("AP1_04_TriAf01");
}
break;
case 1:
if(!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02")){
STREAMING::REQUEST_IPL("CS2_06_TriAf02");
}
break;
case 2:
if(!STREAMING::IS_IPL_ACTIVE("CS4_04_TriAf03")){
STREAMING::REQUEST_IPL("CS4_04_TriAf03");
}
break;
}}}


void func_112(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


void func_113(int iParam0){
iLocal_57=iParam0;
}


void func_114(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(!bParam2){
iVar1=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 15);
if(iVar1==bParam1){
return;
}}
if(bParam1 !=MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
if(Global_32660==1){
Global_32661=1;
}
Global_32660=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32663[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Global_32663[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}}}

int func_115(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_116(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 20);
}
return 0;
}

int func_117(int iParam0, int iParam1){
int iVar0;
if(iParam0==11 || iParam0==-1){
return 0;
}
if(iParam1 < 0 || iParam1 >=32){
return 0;
}
iVar0=MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iParam0], iParam1);
return iVar0;
}


bool func_118(int iParam0){
return func_119(iParam0, Global_43377);
}

int func_119(int iParam0, int iParam1){
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


bool func_120(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_121(){
StringCopy(&Local_49, "TriathlonSP", 64);
sLocal_63="PLAY_TRIATH";
iLocal_61=17;
func_88(&uLocal_56, 4194304);
iLocal_59=57500;
bLocal_85=true;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0)){}
iLocal_89=func_122(Local_54, &Local_76);
if(func_74() || func_72()){}else{
iLocal_86=1;
}
switch (iLocal_89){
case 0:
iLocal_67=107;
break;
case 1:
iLocal_67=108;
break;
case 2:
iLocal_67=109;
if(iLocal_86){
func_88(&uLocal_56, 8388608);
func_75(iLocal_67);
}
break;
}
if(Global_113810.f_20014.f_8==-1){
Global_113810.f_20014.f_8=0;
}
if(Global_113810.f_20014.f_8 < iLocal_89){
func_88(&uLocal_56, 8388608);
}}

int func_122(struct<3> Param0, var uParam1){
int iVar0;
struct<3> Var1[3];
float fVar2;
int iVar3;
float fVar4;
iVar0=0;
Var1[1 /*3*/]={
func_123(1) 
};
Var1[0 /*3*/]={
func_123(0) 
};
Var1[2 /*3*/]={
func_123(2) 
};
fVar2=vdist2(Var1[0 /*3*/], Param0);
fVar4=0f;
iVar3=1;
while (iVar3 <=(3 - 1)){
fVar4=vdist2(Param0, Var1[iVar3 /*3*/]);
if(fVar4 < fVar2){
iVar0=iVar3;
fVar2=fVar4;
}
iVar3++;
}
*uParam1={
Var1[iVar0 /*3*/] 
};
return iVar0;
}


Vector3 func__123(int iParam0){
if(iParam0 >=3 || iParam0 <=-1){
return 0f, 0f, 0f;
}
switch (iParam0){
case 1:
return 2434.415f, 4284.25f, 35.5059f;
case 0:
return -1230.622f, -2049.97f, 12.8882f;
case 2:
return 1591.686f, 3813.401f, 33.3371f;
break;
}
return 0f, 0f, 0f;
}


void func_124(var uParam0, int iParam1){
func_125(uParam0, iParam1);
}


void func_125(var uParam0, var uParam1){
*uParam0=(*uParam0 - (*uParam0 && uParam1));
}


void func_126(bool bParam0){
if(bParam0){
if(iLocal_67 !=263){
func_114(iLocal_67, 0, 0);
}}
func_78(&iLocal_58);
if(func_120(uLocal_56, 2)){
func_4();
func_124(&uLocal_56, 2);
func_29(&iLocal_60);
}
iLocal_60=-1;
func_127();
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_127(){
func_124(&uLocal_56, 4);
func_128();
if(SCRIPT::IS_THREAD_ACTIVE(uLocal_48)){
PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_48, 3);
}
if(!MISC::IS_STRING_NULL(&Local_50)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_50) !=0){
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_50);
}}}


void func_128(){
int iVar0;
if(fLocal_72 > (fLocal_64 * fLocal_64)){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_78)){
OBJECT::DELETE_OBJECT(&iLocal_78);
}}
func_129(1, -1);
iVar0=0;
while (iVar0 < iLocal_90){
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_90[iVar0])){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_90[iVar0]);
}
iVar0++;
}
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_84, 0);
if(!iLocal_87){
CAM::STOP_GAMEPLAY_HINT(0);
iLocal_87=1;
}}


void func_129(bool bParam0, int iParam1){
int iVar0;
if(!func_131(&iVar0, 0, iParam1)){
return;
}
if(Global_23390.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23390.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23390.f_6071[iVar0]){
HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
Global_23390.f_6071[iVar0]=0;
}
if(Global_23390.f_6057[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23390.f_6057[iVar0]=0;
}
if(Global_23390.f_6064[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23390.f_6064[iVar0]=0;
}
if(bParam0){
func_130(&(Global_23390.f_6103[iVar0 /*10*/]));
Global_23390.f_6164[iVar0]=0;
}else{
Global_23390.f_6164[iVar0]=0;
}}


void func_130(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_131(var uParam0, bool bParam1, int iParam2){
char cVar0[64];
int iVar1;
int iVar2;
int iVar3;
if(iParam2==-1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
iParam2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
}}
StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
StringIntConCat(&cVar0, iParam2, 64);
iVar1=MISC::GET_HASH_KEY(&cVar0);
iVar3=-1;
iVar2=0;
while (iVar2 < 6){
if(Global_23390.f_6164[iVar2]==iVar1){
*uParam0=iVar2;
return 1;
}elseif(Global_23390.f_6164[iVar2]==0){
iVar3=iVar2;
}
iVar2++;
}
if(bParam1){
if(iVar3 !=-1){
Global_23390.f_6164[iVar3]=iVar1;
*uParam0=iVar3;
return 1;
}}
return 0;
}