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
var uLocal_35=10;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=0;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
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
var uLocal_63=0;
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
var uLocal_75=0;
var uLocal_76=0;
int iLocal_77=4;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=3;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
struct<3> Local_86[5];
struct<8> Local_87[5];
int iLocal_88=0;
struct<9> Local_89={
4, 0, 0, 0, 0, 3, 0, 0, 0 
};
#endregion

void __EntryFunction__(){
struct<3> Var0;
int iVar1;
int iVar2;
int iVar3;
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
sLocal_16="NULL";
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
iLocal_77={
ScriptParam_89 
};
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)){
func_20();
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_19();
}
iVar1=0;
iVar2=0;
iVar3=200;
iVar4=MISC::GET_GAME_TIMER();
while (true){
if(!func_9()){
func_20();
}
if((MISC::GET_GAME_TIMER() - iVar4) > 100){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
if(func_8(iLocal_77[iVar1])){
if(vdist2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_77[iVar1], 0)) >=IntToFloat((iVar3 * iVar3)) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_77[iVar1])){
func_7(&(Local_87[iVar1 /*8*/]));
func_6(&(iLocal_77[iVar1]), 1, 0, 1);
}else{
func_5(iLocal_77[iVar1], &(Local_87[iVar1 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_77[iVar1])){
func_6(&(iLocal_77[iVar1]), 1, 0, 1);
}
if(func_3(iLocal_77.f_5[iVar2])){
if(vdist2(Var0, Local_86[iVar2 /*3*/]) >=IntToFloat((iVar3 * iVar3))){
if(ENTITY::IS_ENTITY_OCCLUDED(iLocal_77.f_5[iVar2]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_77.f_5[iVar2], 0)){
func_2(&(iLocal_77.f_5[iVar2]));
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_77.f_5[iVar2])){
func_2(&(iLocal_77.f_5[iVar2]));
}
iVar1++;
if(iVar1==iLocal_77){
iVar1=0;
}
iVar2++;
if(iVar2==iLocal_77.f_5){
iVar2=0;
}
if(func_1()){
func_20();
}}
iVar4=MISC::GET_GAME_TIMER();
}
wait(0);
}}

int func_1(){
int iVar0;
iVar0=0;
while (iVar0 <=(iLocal_77.f_5 - 1)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_77.f_5[iVar0])){
return 0;
}
iVar0++;
}
iVar0=0;
while (iVar0 <=(iLocal_77 - 1)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_77[iVar0])){
return 0;
}
iVar0++;
}
return 1;
}


void func_2(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::IS_ENTITY_DEAD(*uParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
}}}

int func_3(var uParam0){
if(func_4(uParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(uParam0)){
return 1;
}}}
return 0;
}

int func_4(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}}
return 0;
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12){
bool bVar0;
if(iParam3==0){
iParam3=PLAYER::GET_PLAYER_INDEX();
}
if(fParam6 < 0f){
fParam6=100f;
}
if(!PED::IS_PED_INJURED(uParam0)){
if(!HUD::DOES_PED_HAVE_AI_BLIP(uParam0)){
bVar0=true;
if(PED::IS_PED_IN_FLYING_VEHICLE(uParam0) && iParam11){
bVar0=false;
}
if(bVar0){
if(iParam8==-1){
HUD::SET_PED_HAS_AI_BLIP(uParam0, 1);
}else{
HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(uParam0, 1, iParam8);
}
uParam1->f_7=uParam0;
HUD::SET_PED_AI_BLIP_GANG_ID(uParam0, iParam2);
HUD::SET_PED_AI_BLIP_NOTICE_RANGE(uParam0, fParam6);
if(HUD::DOES_BLIP_EXIST(*uParam1)){
HUD::SET_BLIP_PRIORITY(*uParam1, 7);
}}}
if(!iParam9==-1){
HUD::SET_PED_AI_BLIP_SPRITE(uParam0, iParam9);
}
HUD::SET_PED_AI_BLIP_FORCED_ON(uParam0, iParam4);
HUD::SET_PED_AI_BLIP_HAS_CONE(uParam0, iParam5);
*uParam1=HUD::GET_AI_PED_PED_BLIP_INDEX(uParam0);
if(!iParam9==-1 || iParam12){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
}
HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
}
HUD::SET_BLIP_PRIORITY(*uParam1, 7);
}}
if(!MISC::IS_BIT_SET(uParam1->f_6, 2)){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
MISC::SET_BIT(&(uParam1->f_6), 2);
}}
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0)){
uParam1->f_1=HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(uParam0);
if(!MISC::IS_BIT_SET(uParam1->f_6, 3)){
if(HUD::DOES_BLIP_EXIST(uParam1->f_1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
}
else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
}
HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
}
HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
MISC::SET_BIT(&(uParam1->f_6), 3);
}}elseif(!HUD::DOES_BLIP_EXIST(uParam1->f_1)){
uParam1->f_1=0;
MISC::CLEAR_BIT(&(uParam1->f_6), 3);
}}elseif(HUD::DOES_BLIP_EXIST(uParam1->f_1)){
uParam1->f_1=0;
MISC::CLEAR_BIT(&(uParam1->f_6), 3);
}}else{
return 1;
}
return 0;
}


void func_6(var uParam0, int iParam1, int iParam2, int iParam3){
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


void func_7(var uParam0){
bool bVar0;
struct<8> Var1;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
bVar0=true;
}
if(HUD::DOES_BLIP_EXIST(uParam0->f_1)){
HUD::REMOVE_BLIP(&(uParam0->f_1));
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_7)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0)){
if(HUD::DOES_PED_HAVE_AI_BLIP(uParam0->f_7)){
HUD::SET_PED_HAS_AI_BLIP(uParam0->f_7, 0);
}}
bVar0=true;
}
if(bVar0){
*uParam0={
Var1 
};
}}

int func_8(var uParam0){
if(func_4(uParam0)){
if(!PED::IS_PED_INJURED(uParam0)){
return 1;
}}
return 0;
}

int func_9(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("bailbond2"))==0){
if(!func_17(4)){
return 0;
}}
if(Global_97733==1){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(Global_32286){
return 0;
}
if(func_10() !=2){
return 0;
}
return 1;
}

int func_10(){
func_11();
return Global_113810.f_2366.f_539.f_4321;
}


void func_11(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_15(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_14(PLAYER::PLAYER_PED_ID());
if(func_13(iVar0) && (!func_12(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_13(Global_113810.f_2366.f_539.f_4321)){
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


bool func_12(int iParam0){
return Global_43377==iParam0;
}


bool func_13(int iParam0){
return iParam0 < 3;
}

int func_14(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_15(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_15(int iParam0){
if(func_13(iParam0)){
return func_16(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__16(int iParam0){
return Global_2058[iParam0 /*29*/];
}


bool func_17(int iParam0){
return func_18(iParam0, Global_43377);
}

int func_18(int iParam0, int iParam1){
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


void func_19(){
int iVar0;
PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_88);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_88);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_88, joaat("player"));
iVar0=0;
while (iVar0 <=(iLocal_77.f_5 - 1)){
if(func_3(iLocal_77.f_5[iVar0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_77.f_5[iVar0], 1, 1);
Local_86[iVar0 /*3*/]={
ENTITY::GET_ENTITY_COORDS(iLocal_77.f_5[iVar0], 0) 
};
}
iVar0++;
}
iVar0=0;
while (iVar0 <=(iLocal_77 - 1)){
if(func_8(iLocal_77[iVar0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_77[iVar0], 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_77[iVar0], iLocal_88);
func_5(iLocal_77[iVar0], &(Local_87[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
iVar0++;
}}


void func_20(){
int iVar0;
PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_88);
PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_88, joaat("player"));
iVar0=0;
while (iVar0 <=(iLocal_77 - 1)){
func_7(&(Local_87[iVar0 /*8*/]));
func_6(&(iLocal_77[iVar0]), 1, 0, 1);
iVar0++;
}
iVar0=0;
while (iVar0 <=(iLocal_77.f_5 - 1)){
func_2(&(iLocal_77.f_5[iVar0]));
iVar0++;
}
SCRIPT::TERMINATE_THIS_THREAD();
}