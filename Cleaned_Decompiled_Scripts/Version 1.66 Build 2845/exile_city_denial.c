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
int iLocal_28=0;
bool bLocal_29=0;
bool bLocal_30=0;
int iLocal_31=0;
bool bLocal_32=0;
var uLocal_33=0;
#endregion

void __EntryFunction__(){
int iVar0;
int iVar1;
struct<3> Var2;
bool bVar3;
bool bVar4;
bool bVar5;
bool bVar6;
var uVar7;
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
iLocal_28=-1;
bLocal_32=true;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("exile_city_denial")) > 1){
Global_43222=0;
SCRIPT::TERMINATE_THIS_THREAD();
}
func_42(18);
func_41();
settimera(0);
settimerb(0);
iVar0=2;
iVar1=0;
while (!iLocal_31){
iLocal_31=1;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83)){
Global_43222=0;
if(!func_40(130)){
func_39(18);
func_38();
}elseif(func_40(131)){
func_39(18);
func_38();
}
switch (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP()){
case 16:
func_39(18);
func_38();
break;
case 2:
func_38();
break;
case 1:
func_25(1628462442);
func_25(1791324372);
func_25(-240877892);
func_25(1806999335);
func_25(2054503592);
func_25(-2009081795);
bLocal_29=false;
while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
wait(1000);
}
iLocal_31=0;
break;
}}}
while (true){
if(iVar1 > 0){
iVar1=(iVar1 - timera());
settimera(0);
if(iVar1 < 0){
iVar1=0;
}}
Var2={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
bLocal_29=func_24(Var2, &bLocal_32);
if(Global_78828 || Global_78828.f_1){
bLocal_29=false;
}
bVar3=false;
bVar4=false;
if(func_40(131)){
bVar3=true;
}
if(!func_40(130)){
bVar3=true;
}
if(bVar3){
Global_43222=0;
func_39(18);
func_38();
}
if(func_22()==1){
bVar4=true;
}
Global_43222=bLocal_29;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
bLocal_29=false;
}}}
if(bLocal_30 !=bLocal_29){
if(!bLocal_29){
func_20();
}
if(bLocal_29 && !bVar4){
bVar5=false;
bVar6=true;
while (bVar6){
switch (func_18(&iLocal_28, 6, 12, 0, 0)){
case 0:
bVar6=false;
bVar5=false;
break;
case 1:
bVar6=false;
bVar5=true;
break;
default:
wait(0);
break;
}
if(Global_78558){
SCRIPT::TERMINATE_THIS_THREAD();
}}
if(bVar5){
PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
uVar7=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
while (INTERIOR::IS_VALID_INTERIOR(uVar7)){
wait(5000);
PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
uVar7=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
}
}}
if(func_15(PLAYER::PLAYER_PED_ID())==0){
if(!MISC::IS_BIT_SET(Global_113648.f_7690.f_923, 0)){
func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
}
elseif(!MISC::IS_BIT_SET(Global_113648.f_7690.f_923, 1)){
func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
}
elseif(!MISC::IS_BIT_SET(Global_113648.f_7690.f_923, 2)){
func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
}}elseif(func_15(PLAYER::PLAYER_PED_ID())==2){
if(!MISC::IS_BIT_SET(Global_113648.f_7690.f_923, 3)){
func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
}
elseif(!MISC::IS_BIT_SET(Global_113648.f_7690.f_923, 4)){
func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
}
elseif(!MISC::IS_BIT_SET(Global_113648.f_7690.f_923, 4)){
func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
}}
if(iVar1==0 && !bVar4){
if((!func_9(0) && !func_9(4)) && !func_9(3)){
if(MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &uLocal_33, 0, 0);
}}}
if(CAM::IS_SCREEN_FADED_IN()){
if(bLocal_32){
func_8("CITDENAL", -1);
}else{
func_8("CITDENAL_R", -1);
}
iVar1=120000;
}
}}}else{
bLocal_29=false;
}}else{
func_20();
}}
if(bLocal_29){
if(!MISC::IS_INCIDENT_VALID(uLocal_33)){
if(MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &uLocal_33, 0, 0);
}}}}}
if(bLocal_29 && timerb() > 60000){
settimerb(0);
iVar0=(iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
if(iVar0 < 8){
if(MISC::IS_INCIDENT_VALID(uLocal_33)){
MISC::SET_INCIDENT_REQUESTED_UNITS(uLocal_33, 11, iVar0);
}elseif(MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &uLocal_33, 0, 0);
}}}}else{
iVar0=8;
}}
bLocal_30=bLocal_29;
if(bVar4){
Global_43222=0;
if(bLocal_29){
func_20();
}
func_4();
while (func_22()==1){
wait(2000);
}
func_41();
bVar4=false;
}
if(bLocal_29){
wait(0);
}else{
wait(10000);
}
if(func_1(12) && !func_9(12)){
if(bLocal_29){
func_20();
}
while (func_9(0) || func_9(4)){
wait(8000);
}}}
func_4();
}

int func_1(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_2(iParam0)){
return 0;
}
return 1;
}


bool func_2(int iParam0){
return func_3(iParam0, Global_43257);
}

int func_3(int iParam0, int iParam1){
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


void func_4(){
func_7(0, 1);
func_7(2, 1);
func_7(1, 1);
func_5(0, 1);
func_5(1, 1);
func_5(3, 1);
func_5(2, 1);
}


void func_5(int iParam0, bool bParam1){
if(iParam0==7){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_113648.f_7231.f_17[iParam0]), false);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_7231.f_17[iParam0]), false);
}
MISC::DISABLE_POLICE_RESTART(Global_95820[iParam0 /*9*/].f_8, !bParam1);
func_6(Global_95820[iParam0 /*9*/].f_7, 0, 0);
}


void func_6(int iParam0, bool bParam1, bool bParam2){
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
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), false);
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32543[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), false);
MISC::CLEAR_BIT(&(Global_32543[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32543[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32543[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Global_32543[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}}}


void func_7(int iParam0, bool bParam1){
if(iParam0==5){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_113648.f_7231.f_11[iParam0]), false);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_7231.f_11[iParam0]), false);
}
MISC::DISABLE_HOSPITAL_RESTART(Global_95884[iParam0 /*9*/].f_8, !bParam1);
func_6(Global_95884[iParam0 /*9*/].f_7, 0, 0);
}


void func_8(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


bool func_9(int iParam0){
return Global_43257==iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11){
struct<15> Var0;
bool bVar1;
if(func_14(0)){
return 0;
}
if(iParam5 < 0){
return 0;
}
if(iParam6 < 0){
return 0;
}
if(iParam8==76){
return 0;
}
if(iParam9==235){
return 0;
}
if(bParam3 < 3){
if(MISC::IS_BIT_SET(iParam2, bParam3)){
return 0;
}}
if(iParam4 < 3){
if(iParam4 !=bParam3){
return 0;
}}
if(iParam2 < 1 || iParam2 > 7){
return 0;
}
if(Global_113648.f_7690.f_136 < 9){
Var0.f_0=iParam0;
if(Global_113648.f_7690.f_911==Var0.f_0){
Global_113648.f_7690.f_911=-1;
}
Var0.f_3=func_13(iParam1);
Var0.f_1=iParam11;
Var0.f_2=iParam2;
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam5);
Var0.f_5=iParam6;
Var0.f_6=bParam3;
Var0.f_14=iParam4;
Var0.f_10=iParam7;
Var0.f_11=-1;
Var0.f_7=iParam8;
Var0.f_8=iParam9;
Var0.f_9=iParam10;
MISC::CLEAR_BIT(&(Var0.f_1), true);
MISC::CLEAR_BIT(&(Var0.f_1), false);
if(iParam7 !=-1){
MISC::SET_BIT(&(Var0.f_1), 11);
}elseif(iParam1==0){
MISC::SET_BIT(&(Var0.f_1), 10);
}
Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/]={
Var0 
};
Global_113648.f_7690.f_136++;
bVar1=false;
while (bVar1 < 3){
if(MISC::IS_BIT_SET(iParam2, bVar1)){
func_11(bVar1);
}
bVar1++;
}
return 1;
}
return 0;
}


void func_11(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(!func_12(bParam0)){
return;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
if(MISC::IS_BIT_SET(Global_113648.f_7690[iVar0 /*15*/].f_2, bParam0)){
if(Global_113648.f_7690[iVar0 /*15*/].f_3 > iVar1){
iVar1=Global_113648.f_7690[iVar0 /*15*/].f_3;
}}
iVar0++;
}
iVar2=0;
while (iVar2 < Global_113648.f_7690.f_764){
if(MISC::IS_BIT_SET(Global_113648.f_7690.f_651[iVar2 /*14*/].f_2, bParam0)){
if(Global_113648.f_7690.f_651[iVar2 /*14*/].f_3==5){
iVar1=5;
}}
iVar2++;
}
Global_113648.f_7690.f_919[bParam0]=iVar1;
}


bool func_12(int iParam0){
return iParam0 < 3;
}

int func_13(int iParam0){
switch (iParam0){
case 0:
case 4:
return 5;
break;
case 7:
return 4;
break;
case 2:
return 3;
break;
case 1:
return 2;
break;
case 3:
return 1;
break;
case 5:
case 6:
return 0;
break;
}
return 7;
}

int func_14(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}

int func_15(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_16(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_16(int iParam0){
if(func_12(iParam0)){
return func_17(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__17(int iParam0){
return Global_2028[iParam0 /*29*/];
}

int func_18(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98159.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_1(0)){
return 0;
}
Global_43221++;
*iParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23131.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43257=iParam2;
Global_43219=*iParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*iParam0 !=-1){
if(Global_43218 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*iParam0){
return 2;
}
iVar0++;
}}elseif(Global_43219==*iParam0){
return 1;
}
*iParam0=-1;
}
if(*iParam0==-1){
if(!func_2(iParam2)){
return 0;
}
if(Global_43218==8){
return 0;
}
Global_43221++;
*iParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218++;
if(iParam4 !=0){
func_19(iParam0, iParam4);
}}
return 2;
}


void func_19(var uParam0, int iParam1){
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


void func_20(){
if(iLocal_28 !=-1){
func_21(&iLocal_28);
}
func_25(1628462442);
func_25(1791324372);
func_25(-240877892);
func_25(1806999335);
func_25(2054503592);
func_25(-2009081795);
bLocal_29=false;
bLocal_30=false;
Global_43222=0;
MISC::DELETE_INCIDENT(uLocal_33);
}


void func_21(int iParam0){
if(*iParam0==-1){
return;
}
if(!*iParam0==Global_43219){
*iParam0=-1;
return;
}
*iParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
}

int func_22(){
func_23();
return Global_113648.f_2365.f_539.f_4321;
}


void func_23(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_16(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_15(PLAYER::PLAYER_PED_ID());
if(func_12(iVar0) && (!func_9(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_12(Global_113648.f_2365.f_539.f_4321)){
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

int func_24(struct<2> Param0, var uParam1, int iParam2){
if(!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())){
return 0;
}
if(Param0.f_1 < 400f){
if(Param0.f_0 < 1400f){
if(Param0.f_0 > -1900f){
if(Param0.f_1 > -3500f){
*iParam2=1;
return 1;
}}}}
if(Param0.f_0 < 1536.35f){
if(Param0.f_1 > 1016.18f){
if(Param0.f_1 < 1213.53f){
if(Param0.f_0 > 1278.08f){
*iParam2=0;
return 1;
}}}}
return 0;
}

int func_25(int iParam0){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
if(Global_113648.f_7690[iVar0 /*15*/]==iParam0){
if(Global_43804 !=iVar0){
func_37(iVar0);
func_29(iParam0);
iVar1=1;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_198){
if(Global_113648.f_7690.f_137[iVar0 /*15*/]==iParam0){
func_29(iParam0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_650){
if(Global_113648.f_7690.f_199[iVar0 /*15*/]==iParam0){
func_28(iParam0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_764){
if(Global_113648.f_7690.f_651[iVar0 /*14*/]==iParam0){
func_27(iVar0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_866){
if(Global_113648.f_7690.f_765[iVar0 /*10*/]==iParam0){
func_26(iVar0);
iVar1=1;
}
iVar0++;
}
return iVar1;
}


void func_26(int iParam0){
int iVar0;
struct<10> Var1;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_866){
return;
}
if(Global_113648.f_7690.f_866 > 1){
iVar0=iParam0;
while (iVar0 <=(Global_113648.f_7690.f_866 - 2)){
Global_113648.f_7690.f_765[iVar0 /*10*/]={
Global_113648.f_7690.f_765[iVar0 + 1 /*10*/] 
};
iVar0++;
}}
if(Global_113648.f_7690.f_866 > 0){
Global_113648.f_7690.f_765[(Global_113648.f_7690.f_866 - 1) /*10*/]={
Var1 
};
Global_113648.f_7690.f_866=(Global_113648.f_7690.f_866 - 1);
}}


void func_27(int iParam0){
int iVar0;
struct<14> Var1;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_764){
return;
}
if(Global_113648.f_7690.f_764 > 1){
iVar0=iParam0;
while (iVar0 <=(Global_113648.f_7690.f_764 - 2)){
Global_113648.f_7690.f_651[iVar0 /*14*/]={
Global_113648.f_7690.f_651[iVar0 + 1 /*14*/] 
};
iVar0++;
}}
if(Global_113648.f_7690.f_764 > 0){
Global_113648.f_7690.f_651[(Global_113648.f_7690.f_764 - 1) /*14*/]={
Var1 
};
Global_113648.f_7690.f_764=(Global_113648.f_7690.f_764 - 1);
}
func_11(0);
func_11(1);
func_11(2);
}


void func_28(int iParam0){
struct<15> Var0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < Global_113648.f_7690.f_650){
if(Global_113648.f_7690.f_199[iVar1 /*15*/]==iParam0){
iVar2=iVar1;
while (iVar2 <=(Global_113648.f_7690.f_650 - 2)){
Global_113648.f_7690.f_199[iVar2 /*15*/]={
Global_113648.f_7690.f_199[iVar2 + 1 /*15*/] 
};
iVar2++;
}
Global_113648.f_7690.f_199[(Global_113648.f_7690.f_650 - 1) /*15*/]={
Var0 
};
Global_113648.f_7690.f_650=(Global_113648.f_7690.f_650 - 1);
return;
}
iVar1++;
}}


void func_29(int iParam0){
struct<15> Var0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < Global_113648.f_7690.f_198){
if(Global_113648.f_7690.f_137[iVar1 /*15*/]==iParam0){
func_30(Global_113648.f_7690.f_137[iVar1 /*15*/].f_6);
iVar2=iVar1;
while (iVar2 <=(Global_113648.f_7690.f_198 - 2)){
Global_113648.f_7690.f_137[iVar2 /*15*/]={
Global_113648.f_7690.f_137[iVar2 + 1 /*15*/] 
};
iVar2++;
}
Global_113648.f_7690.f_137[(Global_113648.f_7690.f_198 - 1) /*15*/]={
Var0 
};
Global_113648.f_7690.f_198=(Global_113648.f_7690.f_198 - 1);
return;
}
iVar1++;
}}

int func_30(int iParam0){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
if(func_36(iParam0, Global_20383)==1){
func_35(iParam0, Global_20383, 0);
if(func_34(iParam0, Global_20383)==0){
iVar0=Global_20383;
func_31(iParam0, iVar0);
}
return 1;
}else{
return 0;
}}
return 0;
}


void func_31(int iParam0, int iParam1){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
if(iParam1 > 3){
}else{
iVar0=iParam1;
func_33(iParam0, iVar0, 0);
func_32(iParam0, iVar0, 0);
}}}


void func_32(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_33(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_34(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}


void func_35(int iParam0, int iParam1, int iParam2){
Global_2028[iParam0 /*29*/].f_19[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_19[iParam1]=iParam2;
}}

int func_36(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_19[iParam1];
}


void func_37(int iParam0){
bool bVar0;
var uVar1;
struct<15> Var2;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_136){
return;
}
uVar1=Global_113648.f_7690[iParam0 /*15*/].f_2;
if(Global_113648.f_7690.f_136 > 1){
bVar0=iParam0;
while (bVar0 <=(Global_113648.f_7690.f_136 - 2)){
Global_113648.f_7690[bVar0 /*15*/]={
Global_113648.f_7690[bVar0 + 1 /*15*/] 
};
bVar0++;
}}
if(Global_113648.f_7690.f_136 > 0){
Global_113648.f_7690[(Global_113648.f_7690.f_136 - 1) /*15*/]={
Var2 
};
Global_113648.f_7690.f_136=(Global_113648.f_7690.f_136 - 1);
}
bVar0=false;
while (bVar0 < 3){
if(MISC::IS_BIT_SET(uVar1, bVar0)){
func_11(bVar0);
}
bVar0++;
}}


void func_38(){
func_20();
func_4();
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_39(int iParam0){
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

int func_40(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_99.f_58[iParam0];
}


void func_41(){
func_7(0, 0);
func_7(2, 0);
func_7(1, 0);
func_5(0, 0);
func_5(1, 0);
func_5(3, 0);
func_5(2, 0);
}

int func_42(int iParam0){
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