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
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
bool bLocal_38=0;
bool bLocal_39=0;
struct<8> Local_40={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
struct<11> Local_46[30];
var uLocal_47=0;
var uLocal_48=0;
int iLocal_49=0;
int iLocal_50=0;
int iLocal_51=0;
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
var uLocal_55=0;
int iLocal_56[30]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
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
bLocal_38=true;
bLocal_39=true;
iLocal_52=-1;
iLocal_53=5;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210)){
func_127();
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_sonar")) > 1){
SCRIPT::TERMINATE_THIS_THREAD();
}
func_126(13);
func_125(0);
while (true){
wait(0);
func_124(PLAYER::PLAYER_PED_ID());
switch (iLocal_49){
case 0:
func_118();
break;
case 1:
func_110();
break;
case 2:
func_1();
break;
case 3:
func_127();
break;
}}}


void func_1(){
iLocal_50=0;
if(func_109(PLAYER::PLAYER_PED_ID())){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_76(&Local_40, &Local_46)){
func_31();
}elseif(PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
uLocal_47=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
func_125(1);
func_13(0);
if(func_109(PLAYER::PLAYER_PED_ID())){
if(func_11(&Local_40, &Local_46, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iLocal_52)){
func_8();
}}
PLAYER::SET_MAX_WANTED_LEVEL(0);
func_7();
func_6(1);
}elseif(func_109(uLocal_47)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_47, 1)) > 62500f){
func_5();
}elseif(!HUD::DOES_BLIP_EXIST(uLocal_48)){
uLocal_48=func_2(uLocal_47, 0, 0);
HUD::SET_BLIP_SPRITE(uLocal_48, 308);
}}else{
func_7();
}}}}

int func_2(var uParam0, bool bParam1, bool bParam2){
return func_3(uParam0, !bParam1, bParam2);
}

int func_3(var uParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(uParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_4(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_5(){
func_7();
if(ENTITY::DOES_ENTITY_EXIST(uLocal_47)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_47);
}}


void func_6(int iParam0){
iLocal_49=iParam0;
}


void func_7(){
if(HUD::DOES_BLIP_EXIST(uLocal_48)){
HUD::REMOVE_BLIP(&uLocal_48);
}}


void func_8(){
func_9(func_10(iLocal_52), 1, 1);
iLocal_51=1;
}


void func_9(struct<3> Param0, bool bParam1, bool bParam2){
Global_22951={
Param0 
};
MISC::CLEAR_BIT(&Global_8371, 30);
if(bParam1){
MISC::SET_BIT(&Global_8371, 29);
}else{
MISC::CLEAR_BIT(&Global_8371, 29);
}
if(bParam2){
MISC::SET_BIT(&Global_8372, true);
}else{
MISC::CLEAR_BIT(&Global_8372, true);
}}


Vector3 func__10(int iParam0){
switch (iParam0){
case 0:
return -1435.61f, 5781.12f, -29.87f;
break;
case 1:
return -1956.54f, -1125.07f, -37.21f;
break;
case 2:
return 2752.88f, -1212.78f, -22.41f;
break;
case 3:
return 3188.04f, -1668.19f, -146.88f;
break;
case 4:
return 2555.04f, -2372.47f, -112.01f;
break;
case 5:
return 2945.9f, 6537.41f, -27.36f;
break;
case 6:
return -1266.69f, 6261.75f, -34.17f;
break;
case 7:
return 3034.72f, 6550.42f, -35.2f;
break;
case 8:
return 1694.53f, 6991.69f, -137.62f;
break;
case 9:
return 1233.43f, 7081.15f, -141.72f;
break;
case 10:
return -3413.73f, 830.23f, -12.95f;
break;
case 11:
return 1422.5f, 6854.67f, -38.2f;
break;
case 12:
return -3345.1f, 3547.8f, -59.1f;
break;
case 13:
return -3437.93f, 3069.57f, -54.85f;
break;
case 14:
return -2909.28f, 4204.32f, -111.62f;
break;
case 15:
return -3179.12f, 2151.28f, -31.86f;
break;
case 16:
return 4146.09f, 3825.86f, -40.96f;
break;
case 17:
return 2716.61f, 6956.91f, -157.17f;
break;
case 18:
return 2487.5f, 7001.69f, -143.56f;
break;
case 19:
return -3043.23f, -212.16f, -23.48f;
break;
case 20:
return -2871.1f, 4268.19f, -152.47f;
break;
case 21:
return -777.21f, 6726.71f, -30.89f;
break;
case 22:
return -3008.33f, 2877.73f, -27.76f;
break;
case 23:
return -1843.12f, -1260.67f, -22.17f;
break;
case 24:
return -2591.62f, -470.34f, -30.4f;
break;
case 25:
return 3824.99f, 3729.17f, -16.17f;
break;
case 26:
return 3885.44f, 3797.19f, -24.26f;
break;
case 27:
return 2153.9f, -2826.37f, -50.76f;
break;
case 28:
return 1873.5f, -3012.6f, -47f;
break;
case 29:
return -2325.06f, -1046.7f, -70.67f;
break;
}
return 0f, 0f, 0f;
}


bool func_11(var uParam0, int iParam1, struct<3> Param2, int iParam3){
int iVar0;
float fVar1;
float fVar2;
iVar0=0;
fVar1=0f;
fVar2=-1f;
iVar0=0;
while (iVar0 < *iParam1){
if(!func_12(&(uParam0->f_1), iVar0)){
fVar1=vdist2(Param2, (iParam1[iVar0 /*11*/])->f_3);
if(fVar2==-1f || fVar1 < fVar2){
*iParam3=iVar0;
fVar2=fVar1;
}}
iVar0++;
}
return *iParam3 !=-1;
}

int func_12(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=64){
return 0;
}
if(iParam1 <=31){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}
return MISC::IS_BIT_SET(uParam0->f_1, (iParam1 - 32));
}

int func_13(int iParam0){
if(func_14(17, 0, 1, 0)){
if(iParam0==1){
MISC::SET_BIT(&Global_8371, 22);
}else{
MISC::CLEAR_BIT(&Global_8371, 22);
}
return 1;
}
return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3){
if(Global_78689){
if(((iParam0 !=17 && iParam0 !=3) && iParam0 !=23) && iParam0 !=1){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4542302, 14)){
if(iParam0==17){
MISC::SET_BIT(&Global_4542302, 14);
MISC::SET_BIT(&Global_4542302, 16);
}
if(iParam0==3){
MISC::SET_BIT(&Global_4542302, 14);
MISC::SET_BIT(&Global_4542302, 15);
}
if(iParam0==23){
MISC::SET_BIT(&Global_4542302, 14);
MISC::SET_BIT(&Global_4542302, 27);
}
if(iParam0==1){
MISC::SET_BIT(&Global_4542302, 14);
MISC::SET_BIT(&Global_4542302, 29);
}}
if(Global_8377[iParam0 /*15*/].f_9==0){
func_27();
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8377[iParam0 /*15*/].f_9) > 0){
MISC::CLEAR_BIT(&Global_4542302, 14);
MISC::CLEAR_BIT(&Global_4542302, 16);
MISC::CLEAR_BIT(&Global_4542302, 15);
MISC::CLEAR_BIT(&Global_4542302, 27);
MISC::CLEAR_BIT(&Global_4542302, 29);
return 1;
}else{
return 0;
}}
func_20();
if(Global_20500.f_1==9){
return 0;
}
if(iParam2==0){
if(func_19(0)==1){
return 0;
}}
if(Global_20466==1){
return 0;
}
if(Global_20500.f_1==7){
return 0;
}
if(iParam1==1){}
if(!SCRIPT::IS_THREAD_ACTIVE(Global_20497)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
if(Global_20500.f_1 < 4){
func_18("cellphone_flashhand");
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
Global_20497=start_new_script("cellphone_flashhand", 1424);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}}
while (!Global_20482){
wait(0);
}
func_27();
func_15();
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8377[iParam0 /*15*/].f_9)==0){
Global_8976=0;
Global_20500.f_1=7;
func_18(&(Global_8377[iParam0 /*15*/].f_5));
if(bParam3){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8377[iParam0 /*15*/].f_9)==0){
Global_20498=start_new_script(&(Global_8377[iParam0 /*15*/].f_5), 4000);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8377[iParam0 /*15*/].f_9)==0){
Global_20498=start_new_script(&(Global_8377[iParam0 /*15*/].f_5), 2552);
}
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8377[iParam0 /*15*/].f_5));
return 1;
}
return 1;
}


void func_15(){
if(Global_78689==0){
Global_8377[14 /*15*/].f_4=-99;
Global_8377[4 /*15*/].f_4=-99;
if(Global_2694571){
if(func_17(14)){
func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
}else{
func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
}}else{
func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
}}}


void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
StringCopy(&(Global_8377[iParam0 /*15*/]), sParam1, 16);
Global_8377[iParam0 /*15*/].f_4=iParam2;
StringCopy(&(Global_8377[iParam0 /*15*/].f_5), sParam3, 16);
Global_8377[iParam0 /*15*/].f_9=MISC::GET_HASH_KEY(sParam3);
Global_8377[iParam0 /*15*/].f_10=iParam4;
Global_8377[iParam0 /*15*/].f_11=iParam5;
Global_8377[iParam0 /*15*/].f_12=iParam6;
Global_8377[iParam0 /*15*/].f_13=iParam7;
Global_8377[iParam0 /*15*/].f_14=iParam8;
if(Global_8377[iParam0 /*15*/].f_12==0){
Global_8377[iParam0 /*15*/].f_12=0;
}
if(Global_8377[iParam0 /*15*/].f_13==0){
Global_8377[iParam0 /*15*/].f_13=0;
}
if(Global_8377[iParam0 /*15*/].f_14==0){
Global_8377[iParam0 /*15*/].f_14=0;
}}


bool func_17(int iParam0){
return Global_43377==iParam0;
}


void func_18(char* sParam0){
SCRIPT::REQUEST_SCRIPT(sParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
wait(0);
}}

int func_19(int iParam0){
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


void func_20(){
if(func_17(14)){
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
Global_20500=func_21();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


var func__21(){
func_22();
return Global_113810.f_2366.f_539.f_4321;
}


void func_22(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_25(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_24(PLAYER::PLAYER_PED_ID());
if(func_23(iVar0) && (!func_17(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_23(Global_113810.f_2366.f_539.f_4321)){
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


bool func_23(int iParam0){
return iParam0 < 3;
}

int func_24(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_25(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_25(int iParam0){
if(func_23(iParam0)){
return func_26(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__26(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_27(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 34){
Global_8377[iVar0 /*15*/].f_4=-99;
iVar0++;
}
if(Global_78689==0){
iVar1=0;
while (iVar2 < 161){
if(func_30(iVar2, Global_20500)==1){
iVar1=1;
}
iVar2++;
}
func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
if((Global_43377==15 && func_29(0)==0) && Global_8375==0){
func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
Global_20707=0;
Global_8376=255;
}else{
func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
Global_20707=1;
Global_8376=42;
}
if(iVar1==1){
func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
}else{
func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
}
func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
if(Global_113810.f_14054.f_89==1){
func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
}
if(Global_113810.f_14054.f_88==1){
func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
}
func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
}else{
func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
func_16(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
if(MISC::IS_BIT_SET(Global_4542302, 4)==1){
func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
}
func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
if(!MISC::IS_BIT_SET(Global_4542302, 4)==1){
if(Global_1836104){
func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542302, 20)==1){
func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542302, 22)==1){
func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_4542302, 26)==1){
if(func_28()){
func_16(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
}else{
func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
}}}
if((((MISC::IS_BIT_SET(Global_4542302, 4)==0 && Global_1836104==0) && MISC::IS_BIT_SET(Global_4542302, 20)==0) && MISC::IS_BIT_SET(Global_4542302, 22)==0) && MISC::IS_BIT_SET(Global_4542302, 26)==0){
if(func_28()){
func_16(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
}else{
func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
}}}}

int func_28(){
if(Global_78689){
if(Global_1836502 || Global_1836503==1){
return 1;
}}
return 0;
}

int func_29(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}

int func_30(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_19[iParam1];
}


void func_31(){
func_54(3, 250000);
func_47(299, 0, 0);
func_34(20, 1);
func_32();
func_6(3);
}


void func_32(){
int iVar0;
iVar0=func_33(65);
Global_2645174[iVar0 /*83*/]=65;
StringCopy(&(Global_2645174[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_33(int iParam0){
int iVar0;
int iVar1;
iVar0=19;
iVar1=0;
while (iVar1 <=19){
if(Global_2645174[iVar1 /*83*/]==iParam0){
iVar0=iVar1;
iVar1=20;
}elseif(Global_2645174[iVar1 /*83*/]==0){
iVar0=iVar1;
iVar1=20;
}
iVar1++;
}
return iVar0;
}

int func_34(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1){
if(func_17(14) && !func_46(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32534 !=0 && !Global_78689){
return 0;
}
if(func_45(&Global_4542602)){
if(func_43(&Global_4542602, iParam0)){
return 0;
}
if(func_36(&Global_4542602, iParam0)){
return 1;
}}else{
if(!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0)){
return 1;
}
return 0;
}
return 0;
}

int func_36(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_17(14) && !func_46(iParam1)){
return 0;
}
if(func_43(uParam0, iParam1)){
return 0;
}
if(func_42(uParam0) < 0f){
func_41(uParam0, 0);
}
func_39(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_37(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_37(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_17(14) && !func_46(iParam1)){
return 0;
}
if(func_43(uParam0, iParam1)){
return 0;
}
if(func_42(uParam0) < 0f){
func_41(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_38(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_38(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_39(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_40(uParam0, iVar0);
iVar0++;
}
func_41(uParam0, (Global_4542601 - 0.5f));
}


void func_40(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_41(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_42(var uParam0){
return uParam0->f_80;
}


bool func_43(var uParam0, int iParam1){
return func_44(uParam0, iParam1) !=-1;
}

int func_44(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
if((*uParam0)[iVar0]==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_45(var uParam0){
return uParam0->f_79==1;
}

int func_46(int iParam0){
switch (iParam0){
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return 1;
default:
}
return 0;
}


void func_47(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_52((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113810.f_10197[iParam0 /*12*/].f_5==1){
if(Global_113810.f_10197[iParam0 /*12*/].f_6==11 || Global_113810.f_10197[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113810.f_10197[iParam0 /*12*/].f_5=1;
Global_113810.f_10197[iParam0 /*12*/].f_10=iParam1;
Global_113810.f_10197[iParam0 /*12*/].f_11=iParam2;
if(iParam0==287){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
}
if(iParam0==286){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
}
if(iParam0==299){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
}}
if(bVar0){
func_48();
}}


void func_48(){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
iVar0=0;
Global_113546=0;
Global_113547=0;
Global_113548=0;
Global_113549=0;
Global_113550=0;
Global_113551=0;
Global_113552=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113810.f_10197.f_3853;
Global_113810.f_10197.f_3853=0f;
while (iVar0 < 321){
if(Global_113810.f_10197[iVar0 /*12*/].f_5==1){
switch (Global_113810.f_10197[iVar0 /*12*/].f_6){
case 1:
Global_113546++;
fVar1=(fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 3:
Global_113547++;
fVar2=(fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 5:
Global_113548++;
fVar3=(fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 7:
Global_113549++;
fVar4=(fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 9:
Global_113550++;
fVar5=(fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113551++;
fVar6=(fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 13:
Global_113552++;
fVar7=(fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113529 > 0){
if(Global_113546==Global_113529){
fVar1=55f;
}}
if(Global_113530 > 0){
if(Global_113547==Global_113530){
fVar2=10f;
}}
if(Global_113531 > 0){
if(Global_113548==Global_113531){
fVar3=0f;
}}
if(Global_113532 > 0){
if(Global_113549==Global_113532){
fVar4=10f;
}}
if(Global_113533 > 0){
if(((Global_113550==Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550==Global_113536){
if(!MISC::IS_BIT_SET(Global_113810.f_10197.f_3856, 14)){
if(Global_113550==Global_113533){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113533, 0);
MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113534 > 0){
if(Global_113551==Global_113534){
fVar6=15f;
}}
if(Global_113535 > 0){
if(Global_113552==Global_113535){
fVar7=5f;
}}
Global_113810.f_10197.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113550 > Global_113536 || Global_113550==Global_113536){
iVar9=Global_113536;
}else{
iVar9=Global_113550;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113546, 1);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113529, 1);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113547, 1);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113530, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113548, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113531, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113549, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113532, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113536, 1);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113552 + Global_113551), 1);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113535 + Global_113534), 1);
Global_113553=(Global_113546 * 100 / Global_113529);
Global_113555=((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
Global_113554=((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
Global_113556=((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113810.f_10197.f_3853, 1);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113553, 1);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113554, 1);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113555, 1);
if(fVar8 > 0f && floor(fVar8) < floor(Global_113810.f_10197.f_3853)){
func_51(13, floor(Global_113810.f_10197.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78689){
if(func_50()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113544=0;
}
if(!Global_63485){
func_49();
}}}}}

int func_49(){
if(func_29(0)){
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

int func_50(){
return Global_32283;
}

int func_51(int iParam0, int iParam1){
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


void func_52(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_53();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_53(){
return Global_1574918;
}


void func_54(int iParam0, int iParam1){
int iVar0;
func_56(Global_113810.f_24907[iParam0 /*4*/], func_75(iParam0), iParam1, 0, 0);
switch (iParam0){
case 3:
Global_113810.f_24907.f_69=(Global_113810.f_24907.f_69 + iParam1);
break;
case 2:
Global_113810.f_24907.f_70=(Global_113810.f_24907.f_70 + iParam1);
break;
case 0:
Global_113810.f_24907.f_71=(Global_113810.f_24907.f_71 + iParam1);
break;
}
STATS::STAT_GET_INT(func_55(iParam0, 1), &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(func_55(iParam0, 1), iVar0, 1);
}

int func_55(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return joaat("prop_bought_towi");
break;
case 1:
return joaat("prop_earned_towi");
break;
}
break;
case 1:
switch (iParam1){
case 0:
return joaat("prop_bought_taxi");
break;
case 1:
return joaat("prop_earned_taxi");
break;
case 2:
return joaat("prop_missions_taxi");
break;
}
break;
case 2:
switch (iParam1){
case 0:
return joaat("prop_bought_traf");
break;
case 1:
return joaat("prop_earned_traf");
break;
}
break;
case 3:
switch (iParam1){
case 0:
return joaat("prop_bought_soco");
break;
case 1:
return joaat("prop_earned_soco");
break;
}
break;
case 4:
switch (iParam1){
case 0:
return joaat("prop_bought_cmsh");
break;
case 1:
return joaat("prop_earned_cmsh");
break;
}
break;
case 5:
switch (iParam1){
case 0:
return joaat("prop_bought_cinv");
break;
case 1:
return joaat("prop_earned_cinv");
break;
case 2:
return joaat("prop_missions_cinv");
break;
}
break;
case 6:
switch (iParam1){
case 0:
return joaat("prop_bought_cind");
break;
case 1:
return joaat("prop_earned_cind");
break;
case 2:
return joaat("prop_missions_cind");
break;
}
break;
case 7:
switch (iParam1){
case 0:
return joaat("prop_bought_cinm");
break;
case 1:
return joaat("prop_earned_cinm");
break;
case 2:
return joaat("prop_missions_cinm");
break;
}
break;
case 8:
switch (iParam1){
case 0:
return joaat("prop_bought_golf");
break;
case 1:
return joaat("prop_earned_golf");
break;
}
break;
case 9:
switch (iParam1){
case 0:
return joaat("prop_bought_cscr");
break;
case 1:
return joaat("prop_earned_cscr");
break;
case 2:
return joaat("prop_missions_cscr");
break;
}
break;
case 10:
switch (iParam1){
case 0:
return joaat("prop_bought_weed");
break;
case 1:
return joaat("prop_earned_weed");
break;
case 2:
return joaat("prop_missions_weed");
break;
}
break;
case 11:
switch (iParam1){
case 0:
return joaat("prop_bought_barte");
break;
case 1:
return joaat("prop_earned_barte");
break;
case 2:
return joaat("prop_missions_barte");
break;
}
break;
case 12:
switch (iParam1){
case 0:
return joaat("prop_bought_barpi");
break;
case 1:
return joaat("prop_earned_barpi");
break;
case 2:
return joaat("prop_missions_barpi");
break;
}
break;
case 13:
switch (iParam1){
case 0:
return joaat("prop_bought_barhe");
break;
case 1:
return joaat("prop_earned_barhe");
break;
case 2:
return joaat("prop_missions_barhe");
break;
}
break;
case 14:
switch (iParam1){
case 0:
return joaat("prop_bought_barho");
break;
case 1:
return joaat("prop_earned_barho");
break;
case 2:
return joaat("prop_missions_barho");
break;
}
break;
case 15:
switch (iParam1){
case 0:
return joaat("prop_bought_strip");
break;
case 1:
return joaat("prop_earned_strip");
break;
}
break;
}
return joaat("prop_bought_towi");
}


void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(func_74(iParam0)==3){
return;
}
if(func_74(iParam0)==4){
return;
}
func_57(func_74(iParam0), 1, iParam1, iParam2, 0);
if(bParam3){
iVar0=0;
if(bParam4){
switch (iParam0){
case 0:
iVar1=joaat("sp0_money_made_from_random_peds");
break;
case 1:
iVar1=joaat("sp1_money_made_from_random_peds");
break;
case 2:
iVar1=joaat("sp2_money_made_from_random_peds");
break;
default:
return;
}}else{
switch (iParam0){
case 0:
iVar1=joaat("sp0_money_made_from_missions");
break;
case 1:
iVar1=joaat("sp1_money_made_from_missions");
break;
case 2:
iVar1=joaat("sp2_money_made_from_missions");
break;
default:
return;
}}
STATS::STAT_GET_INT(iVar1, &iVar0, -1);
iVar0=(iVar0 + iParam2);
STATS::STAT_SET_INT(iVar1, iVar0, 1);
}}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
float fVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
func_73();
if(iParam3 < 1){
return 0;
}
fVar0=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_72(99, 1);
func_71(joaat("sp0_money_total_spent"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_total_spent"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_total_spent"), iParam3);
break;
}
func_70(0);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_67(5)){
fVar0=0.9f;
bVar1=5;
}
break;
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
switch (iParam0){
case 0:
func_71(joaat("sp0_money_spent_on_tattoos"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_spent_on_tattoos"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_spent_on_tattoos"), iParam3);
break;
}
if(func_67(1)){
fVar0=0f;
bVar1=true;
}
break;
case 21:
switch (iParam0){
case 0:
func_71(joaat("sp0_money_spent_on_taxis"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_spent_on_taxis"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_spent_on_taxis"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_71(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
break;
}
break;
case 99:
case 100:
case 101:
case 102:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
case 112:
case 113:
switch (iParam0){
case 0:
func_71(joaat("sp0_money_spent_property"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_spent_property"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_spent_property"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_71(joaat("sp0_money_spent_in_clothes"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_spent_in_clothes"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_spent_in_clothes"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_71(joaat("sp0_money_spent_on_hairdos"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_spent_on_hairdos"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_spent_on_hairdos"), iParam3);
break;
}
if(func_67(0)){
fVar0=0f;
bVar1=false;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_71(joaat("sp0_money_spent_in_buying_guns"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_spent_in_buying_guns"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_spent_in_buying_guns"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_71(joaat("sp0_money_spent_car_mods"), iParam3);
break;
case 1:
func_71(joaat("sp1_money_spent_car_mods"), iParam3);
break;
case 2:
func_71(joaat("sp2_money_spent_car_mods"), iParam3);
break;
}
func_66(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_72(95, iParam3);
break;
case 1:
func_72(97, iParam3);
break;
case 2:
func_72(96, iParam3);
break;
}
func_72(98, iParam3);
break;
}
iVar2=iParam0;
iParam3=floor((fVar0 * to_float(iParam3)));
iVar3=0;
iVar4=iParam3;
if(fVar0==0f){
func_60(bVar1);
return 1;
}elseif(fVar0 !=1f){
func_60(bVar1);
}
iVar5=(Global_60659[iVar2] + iParam3);
switch (iParam1){
case 1:
if(Global_60659[iVar2] >=0 && iParam3 > 0){
if(iVar5 <=0){
Global_60659[iVar2]=2147483647;
}else{
Global_60659[iVar2]=(Global_60659[iVar2] + iParam3);
}}
switch (iParam0){
case 0:
func_71(joaat("sp0_total_cash_earned"), iParam3);
break;
case 1:
func_71(joaat("sp1_total_cash_earned"), iParam3);
break;
case 2:
func_71(joaat("sp2_total_cash_earned"), iParam3);
break;
}
break;
case 0:
if(!bParam4){
if((Global_60659[iVar2] - iParam3) < 0){
return 0;
}}
iVar3=Global_60659[iVar2];
Global_60659[iVar2]=(Global_60659[iVar2] - iParam3);
if(bParam4){
iVar4=iVar3;
}
break;
}
if(iParam2==1){
if(iVar4 > 20){
}}else{
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/]=iParam1;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1=iParam2;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2=iParam3;
Global_113810.f_20567.f_233[iVar2 /*69*/]++;
Global_113810.f_20567.f_233[iVar2 /*69*/].f_1++;
if(Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 > 10){
Global_113810.f_20567.f_233[iVar2 /*69*/].f_1=0;
}}
func_59(iParam0);
if(Global_43377==15){
func_58(0);
}
return 1;
}


void func_58(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 11){
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5=Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_60667[iVar0 /*3*/][0]=Global_113810.f_20567[iVar0];
Global_60667.f_31[iVar0 /*3*/][0]=Global_113810.f_20567.f_11[iVar0];
Global_60667.f_62[iVar0 /*3*/][0]=Global_113810.f_20567.f_22[iVar0];
Global_60667.f_93[iVar0 /*3*/][0]=Global_113810.f_20567.f_33[iVar0];
Global_60667.f_124[iVar0 /*3*/][0]=Global_113810.f_20567.f_44[iVar0];
Global_60667.f_155[iVar0 /*3*/][0]=Global_113810.f_20567.f_55[iVar0];
Global_60667.f_186[iVar0 /*3*/][0]=Global_113810.f_20567.f_66[iVar0];
Global_60667.f_217[iVar0 /*3*/][0]=Global_113810.f_20567.f_77[iVar0];
Global_60667.f_248[iVar0 /*3*/][0]=Global_113810.f_20567.f_88[iVar0];
if(!bParam0){
Global_60667[iVar0 /*3*/][1]=Global_113810.f_20567[iVar0];
Global_60667.f_31[iVar0 /*3*/][1]=Global_113810.f_20567.f_11[iVar0];
Global_60667.f_62[iVar0 /*3*/][1]=Global_113810.f_20567.f_22[iVar0];
Global_60667.f_93[iVar0 /*3*/][1]=Global_113810.f_20567.f_33[iVar0];
Global_60667.f_124[iVar0 /*3*/][1]=Global_113810.f_20567.f_44[iVar0];
Global_60667.f_155[iVar0 /*3*/][1]=Global_113810.f_20567.f_55[iVar0];
Global_60667.f_186[iVar0 /*3*/][1]=Global_113810.f_20567.f_66[iVar0];
Global_60667.f_217[iVar0 /*3*/][1]=Global_113810.f_20567.f_77[iVar0];
Global_60667.f_248[iVar0 /*3*/][1]=Global_113810.f_20567.f_88[iVar0];
}
iVar0++;
}}


void func_59(int iParam0){
int iVar0;
iVar0=Global_60659[iParam0];
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
break;
}}


void func_60(bool bParam0){
bool bVar0;
char cVar1[64];
if(bParam0==8){
func_52(129, 0, -1);
return;
}
if(bParam0==9){
func_52(135, 0, -1);
return;
}
if(bParam0==10){
func_52(136, 0, -1);
return;
}
if(bParam0==11){
func_52(137, 0, -1);
return;
}
if(bParam0==12){
func_63(8272, 0, -1, 1);
return;
}
if(bParam0==13){
func_63(8273, 0, -1, 1);
return;
}
if(bParam0==14){
func_63(8274, 0, -1, 1);
return;
}
if(bParam0==15){
func_63(8275, 0, -1, 1);
return;
}
if(bParam0==16){
func_63(8276, 0, -1, 1);
return;
}
if(bParam0==17){
func_63(8277, 0, -1, 1);
return;
}
bVar0=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_113810.f_20567.f_471, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_20567.f_471, bParam0) || MISC::IS_BIT_SET(Global_2359296[func_62() /*5568*/].f_681.f_10, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_62() /*5568*/].f_681.f_10), bParam0);
}
if(bVar0){
StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_61(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
}}


char* func_61(bool bParam0){
switch (bParam0){
case 0:
return "COUP_HAIRC";
case 1:
return "COUP_TATTOO";
case 2:
return "COUP_WARSTOCK";
case 3:
return "COUP_MOSPORT";
case 4:
return "COUP_ELITAS";
case 5:
return "COUP_MEDSPENS";
case 6:
return "COUP_SPRUNK";
case 7:
return "COUP_RESPRAY";
case 8:
return "COUP_XMAS2017";
case 9:
return "COUP_CAR_XMAS2018";
case 10:
return "COUP_HELI_XMAS2018";
case 11:
return "COUP_CAR2_XMAS2018";
case 12:
return "COUP_CAS_ELITAS";
case 13:
return "COUP_CAS_DOCKTEASE";
case 14:
return "COUP_CAS_MOSPORT";
case 15:
return "COUP_CAS_SSASA";
case 16:
return "COUP_CAS_WARSTOCK";
case 17:
return "COUP_CAS_PANDM";
break;
default:
break;
}
return "";
}

int func_62(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_63(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_64(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


var func__64(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_65(uParam1));
}

int func_65(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_53();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


void func_66(int iParam0){
func_72(93, iParam0);
func_72(29, iParam0);
func_72(30, iParam0);
}

int func_67(int iParam0){
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
int iVar10;
int iVar11;
if(iParam0==8){
return func_69(129, -1);
}
if(iParam0==9){
return func_69(135, -1);
}
if(iParam0==10){
return func_69(136, -1);
}
if(iParam0==11){
return func_69(137, -1);
}
if(iParam0==12){
iVar0=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar1=func_68(8272, -1);
if(iVar1==0 || iVar0 >=iVar1){
return 0;
}
return 1;
}
if(iParam0==13){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar3=func_68(8273, -1);
if(iVar3==0 || iVar2 >=iVar3){
return 0;
}
return 1;
}
if(iParam0==14){
iVar4=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar5=func_68(8274, -1);
if(iVar5==0 || iVar4 >=iVar5){
return 0;
}
return 1;
}
if(iParam0==15){
iVar6=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar7=func_68(8275, -1);
if(iVar7==0 || iVar6 >=iVar7){
return 0;
}
return 1;
}
if(iParam0==16){
iVar8=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar9=func_68(8276, -1);
if(iVar9==0 || iVar8 >=iVar9){
return 0;
}
return 1;
}
if(iParam0==17){
iVar10=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar11=func_68(8277, -1);
if(iVar11==0 || iVar10 >=iVar11){
return 0;
}
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113810.f_20567.f_471, iParam0);
}
return MISC::IS_BIT_SET(Global_2359296[func_62() /*5568*/].f_681.f_10, iParam0);
}

int func_68(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam0 !=14385){
iVar0=func_64(iParam0, iParam1);
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


bool func_69(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_53();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_70(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27)){
return 0;
}
if(STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(bParam0){}
iVar2=0;
STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
if(iVar1 > 0 && (iVar2 / 2000000) !=(iVar1 / 2000000)){
STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
func_51(27, iVar1);
}
if(iVar1 < 200000000){
return 0;
}
func_34(27, 1);
return 1;
}


void func_71(int iParam0, int iParam1){
int iVar0;
STATS::STAT_GET_INT(iParam0, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(iParam0, iVar0, 1);
}


void func_72(int iParam0, int iParam1){
int iVar0;
if(iParam1 < 1){
return;
}
if(Global_59227[iParam0 /*7*/].f_2){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(Global_59227[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, 1);
}}


void func_73(){
int iVar0;
if(NETWORK::NETWORK_IS_SIGNED_IN()){
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
if(!Global_60659[0]==iVar0){
Global_60659[0]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
if(!Global_60659[1]==iVar0){
Global_60659[1]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
if(!Global_60659[2]==iVar0){
Global_60659[2]=iVar0;
}}}

int func_74(int iParam0){
return Global_2058[iParam0 /*29*/].f_17;
}

int func_75(int iParam0){
switch (iParam0){
case 0:
return 99;
break;
case 1:
return 100;
break;
case 2:
return 101;
break;
case 3:
return 102;
break;
case 4:
return 103;
break;
case 5:
return 104;
break;
case 6:
return 105;
break;
case 7:
return 106;
break;
case 8:
return 107;
break;
case 9:
return 108;
break;
case 10:
return 109;
break;
case 11:
return 110;
break;
case 12:
return 111;
break;
case 13:
return 112;
break;
case 14:
return 113;
break;
case 15:
return 25;
break;
}
return 0;
}

int func_76(var uParam0, int iParam1){
int iVar0;
struct<3> Var1;
bool bVar2;
PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
iVar0=0;
while (iVar0 < iLocal_53){
bVar2=func_12(&(uParam0->f_1), uParam0->f_10);
if(!(iParam1[uParam0->f_10 /*11*/])->f_10){
if(!bVar2){
if(!func_108((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0)){
func_106(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
}else{
func_106(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
}}}elseif(!bVar2){
if(func_93(uParam0, iParam1, Var1)){
if(func_11(uParam0, iParam1, Var1, &iLocal_52)){
func_54(3, 23000);
func_8();
}}}
func_90(uParam0->f_10, bVar2);
uParam0->f_10++;
if(uParam0->f_10 >=*iParam1){
uParam0->f_10=0;
}
iVar0++;
}
if(!Global_78950){
func_83(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_54, &uLocal_55, "SUBM_TITLE", "SUBM_COLLECT");
}
if(uParam0->f_1.f_4 >=uParam0->f_1.f_3){
func_82();
func_125(0);
func_77(0);
}
if(!uParam0->f_12 && !uParam0->f_11){
return uParam0->f_1.f_4 >=uParam0->f_1.f_3;
}
return 0;
}


void func_77(int iParam0){
if(func_81()){
return;
}
if(Global_20704){
if(func_80()){
func_79(1, 1);
}else{
func_79(0, 0);
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
if(!func_78()){
Global_20500.f_1=3;
}}

int func_78(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_79(bool bParam0, bool bParam1){
if(bParam0){
if(func_19(0)){
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


bool func_80(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_81(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_82(){
MISC::SET_BIT(&Global_8371, 30);
}


void func_83(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7){
var uVar0;
func_89(0);
if(*uParam0){
switch (*iParam4){
case 0:
*uParam5=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5)){
uVar0=AUDIO::GET_SOUND_ID();
if(iParam3==6){
AUDIO::PLAY_SOUND_FRONTEND(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND(uVar0, "COLLECTED", "HUD_AWARDS", 1);
}
*iParam4++;
}
break;
case 1:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
HUD::ADD_TEXT_COMPONENT_INTEGER(func_85(iParam3));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*uParam2=MISC::GET_GAME_TIMER();
*iParam4++;
break;
case 2:
if((MISC::GET_GAME_TIMER() - *uParam2) > 7000){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHARD_ANIM_OUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*iParam4++;
}elseif(!func_84()){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5)){
func_89(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
}}
break;
case 3:
if((MISC::GET_GAME_TIMER() - *uParam2) > 7500){
*iParam4++;
}elseif(!func_84()){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5)){
func_89(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
}}
break;
case 4:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam5);
}
func_89(0);
*uParam1=0;
*uParam0=0;
*iParam4=0;
break;
}}}

int func_84(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}

int func_85(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=0;
if(iParam0==2){
iVar1=0;
while (iVar1 < func_88(iParam0)){
if(MISC::IS_BIT_SET(Global_113810.f_10052.f_108, func_87(func_88(iParam0), iVar1))){
iVar0++;
}
iVar1++;
}}elseif(iParam0==6){
STATS::STAT_GET_INT(joaat("num_hidden_packages_5"), &iVar0, -1);
}elseif(iParam0==7){
STATS::STAT_GET_INT(joaat("num_hidden_packages_7"), &iVar0, -1);
}elseif(iParam0==8){
STATS::STAT_GET_INT(joaat("num_hidden_packages_6"), &iVar0, -1);
}else{
iVar1=0;
while (iVar1 < func_88(iParam0)){
iVar2=(func_86(iParam0) + iVar1);
if(func_69(iVar2, -1)){
iVar0++;
}
iVar1++;
}}
return iVar0;
}

int func_86(int iParam0){
if(iParam0==3){
return 815;
}
if(iParam0==5){
return 845;
}
if(iParam0==1){
return 705;
}
if(iParam0==0){
return 755;
}
return 805;
}

int func_87(int iParam0, int iParam1){
if(iParam1 < 32){
return iParam1;
}
return (iParam0 - iParam1);
}

int func_88(int iParam0){
if(iParam0==3){
return 30;
}
if(iParam0==1){
return 50;
}
if(iParam0==0){
return 50;
}
if(iParam0==4){
return 10;
}
if(iParam0==5){
return 30;
}
return 15;
}


void func_89(int iParam0){
if(Global_78957 !=iParam0){
Global_78957=iParam0;
}}


void func_90(int iParam0, bool bParam1){
int iVar0;
if(func_92(iParam0)==0){
return;
}
if(iLocal_56[iParam0]==-1){
if(!bParam1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_46[iParam0 /*11*/].f_3) < (100f * 100f)){
if(func_91(&iVar0)){
GRAPHICS::PROCGRASS_ENABLE_CULLSPHERE(iVar0, Local_46[iParam0 /*11*/].f_3, 8f);
iLocal_56[iParam0]=iVar0;
}}}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_46[iParam0 /*11*/].f_3) > (105f * 105f)){
if(iLocal_56[iParam0] >=0 && iLocal_56[iParam0] < 8){
GRAPHICS::PROCGRASS_DISABLE_CULLSPHERE(iLocal_56[iParam0]);
iLocal_56[iParam0]=-1;
}}}}

int func_91(var uParam0){
*uParam0=0;
*uParam0=0;
while (*uParam0 < 8){
if(!GRAPHICS::PROCGRASS_IS_CULLSPHERE_ENABLED(*uParam0)){
return 1;
}
*uParam0++;
}
*uParam0=-1;
return 0;
}

int func_92(int iParam0){
if(iParam0==23){
return 0;
}
return 1;
}

int func_93(var uParam0, var uParam1, struct<3> Param2){
bool bVar0;
bVar0=uParam0->f_10;
if((uParam1[bVar0 /*11*/])->f_10){
if((uParam1[bVar0 /*11*/])->f_1 !=0){
if(OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[bVar0 /*11*/])->f_1) || func_105((uParam1[bVar0 /*11*/])->f_1)){
func_95(uParam0, uParam1, bVar0);
return 1;
}}}
if(OBJECT::DOES_PICKUP_EXIST((uParam1[bVar0 /*11*/])->f_1)){
if((vdist2(Param2, OBJECT::GET_PICKUP_COORDS((uParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(13)) || func_17(14)){
func_94(&((uParam1[bVar0 /*11*/])->f_1));
(uParam1[bVar0 /*11*/])->f_1=0;
(uParam1[bVar0 /*11*/])->f_10=0;
}}
return 0;
}


void func_94(var uParam0){
if(OBJECT::DOES_PICKUP_EXIST(*uParam0)){
OBJECT::REMOVE_PICKUP(*uParam0);
}}


void func_95(var uParam0, var uParam1, bool bParam2){
int iVar0;
iVar0=(func_86(*uParam0) + bParam2);
func_94(&((uParam1[bParam2 /*11*/])->f_1));
func_104(&((uParam1[bParam2 /*11*/])->f_2));
(uParam1[bParam2 /*11*/])->f_1=0;
(uParam1[bParam2 /*11*/])->f_10=0;
func_103(&(uParam0->f_1), bParam2, 1);
if(*uParam0==1 || *uParam0==0){
func_102(*uParam0, bParam2, 1);
}
PAD::SET_CONTROL_SHAKE(0, 200, 250);
STATS::STAT_INCREMENT(uParam0->f_6, 1f);
if(bLocal_39){
func_101(&(uParam0->f_1), bParam2);
}else{
func_99(&(uParam0->f_1));
}
func_97();
STATS::PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(iVar0);
func_96(1, 0);
func_49();
uParam0->f_11=1;
}


void func_96(int iParam0, int iParam1){
Global_100872.f_7=iParam0;
Global_100872.f_8=iParam1;
}


void func_97(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar3=0;
STATS::STAT_GET_INT(func_98(0), &iVar0, -1);
iVar1=(iVar1 + iVar0);
if(iVar0 > 0){
func_51(18, iVar0);
}
STATS::STAT_GET_INT(func_98(1), &iVar0, -1);
iVar1=(iVar1 + iVar0);
if(iVar0 > 0){
func_51(19, iVar0);
}
STATS::STAT_GET_INT(func_98(3), &iVar0, -1);
iVar1=(iVar1 + iVar0);
if(iVar0 > 0){
func_51(20, iVar0);
}
iVar2=((func_88(0) + func_88(1)) + func_88(3));
if(iVar2 > 0){
iVar3=(iVar1 * 100 / iVar2);
}
STATS::STAT_SET_INT(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_98(int iParam0){
if(iParam0==3){
return joaat("num_hidden_packages_3");
}
if(iParam0==1){
return joaat("num_hidden_packages_0");
}
if(iParam0==0){
return joaat("num_hidden_packages_1");
}
if(iParam0==5){
return joaat("num_hidden_packages_4");
}
return joaat("num_hidden_packages_2");
}


void func_99(var uParam0){
int iVar0;
int iVar1;
iVar1=0;
if(uParam0->f_3 <=0){}
if(uParam0->f_2 <=0){}
if(bLocal_38){}
iVar0=0;
while (iVar0 < uParam0->f_3){
if(func_12(uParam0, iVar0)){
iVar1++;
func_52((uParam0->f_2 + iVar0), 1, -1);
if(bLocal_38){
}}
iVar0++;
}
uParam0->f_4=iVar1;
if(bLocal_38){}
if(iVar1==uParam0->f_3 && uParam0->f_2==705){
func_100(168, 0);
}}


void func_100(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113810.f_8616[iParam0]=1;
Global_113810.f_8616.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}


void func_101(var uParam0, bool bParam1){
if(uParam0->f_3 <=0){}
if(uParam0->f_2 <=0){}
if(bLocal_38){}
if(bParam1 >=uParam0->f_3){}
if(func_12(uParam0, bParam1)){
uParam0->f_4++;
func_52((uParam0->f_2 + bParam1), 1, -1);
if(bLocal_38){
}}
if(bLocal_38){}
if(uParam0->f_4==uParam0->f_3 && uParam0->f_2==705){
func_100(168, 0);
}}


void func_102(int iParam0, bool bParam1, bool bParam2){
if(bParam1 < 0 || bParam1 >=64){
return;
}
if(iParam0==1){
if(bParam1 <=31){
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_10052.f_122), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_10052.f_122), bParam1);
}
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_10052.f_122.f_1), (bParam1 - 32));
}else{
MISC::CLEAR_BIT(&(Global_113810.f_10052.f_122.f_1), (bParam1 - 32));
}}elseif(iParam0==0){
if(bParam1 <=31){
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_10052.f_125), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_10052.f_125), bParam1);
}
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_10052.f_125.f_1), (bParam1 - 32));
}else{
MISC::CLEAR_BIT(&(Global_113810.f_10052.f_125.f_1), (bParam1 - 32));
}}}


void func_103(var uParam0, bool bParam1, bool bParam2){
if(bParam1 < 0 || bParam1 >=64){
return;
}
if(bParam1 <=31){
if(bParam2){
MISC::SET_BIT(uParam0, bParam1);
}else{
MISC::CLEAR_BIT(uParam0, bParam1);
}
return;
}
if(bParam2){
MISC::SET_BIT(&(uParam0->f_1), (bParam1 - 32));
}else{
MISC::CLEAR_BIT(&(uParam0->f_1), (bParam1 - 32));
}}


void func_104(var uParam0){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::SET_BLIP_ROUTE(*uParam0, 0);
HUD::REMOVE_BLIP(uParam0);
}}

int func_105(var uParam0){
var uVar0;
int iVar1;
if(!OBJECT::DOES_PICKUP_EXIST(uParam0)){
return 0;
}
if(func_109(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar1=ENTITY::GET_ENTITY_MODEL(uVar0);
if(iVar1==joaat("submersible") || iVar1==joaat("submersible2")){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_OBJECT(uParam0))){
return 1;
}}}}
return 0;
}


void func_106(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5){
var uVar0;
if(!uParam0->f_10){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_17(13) && !func_17(14)){
if(!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_3) <=(50f * 50f)){
STREAMING::REQUEST_MODEL(uParam1);
while (!STREAMING::HAS_MODEL_LOADED(uParam1)){
STREAMING::REQUEST_MODEL(uParam1);
wait(0);
}
if(bParam3){
func_107(uParam0->f_3);
}
MISC::CLEAR_AREA(uParam0->f_3, 2.5f, 0, 0, 0, 0);
if(bParam4){
MISC::SET_BIT(&uVar0, true);
uParam0->f_1=OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
}
else{
MISC::SET_BIT(&uVar0, 3);
MISC::SET_BIT(&uVar0, 4);
MISC::SET_BIT(&uVar0, 8);
MISC::SET_BIT(&uVar0, true);
uParam0->f_1=OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1);
}}}
if(OBJECT::DOES_PICKUP_EXIST(uParam0->f_1)){
uParam0->f_10=1;
}}}}


void func_107(struct<3> Param0){
var uVar0;
uVar0=INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
if(INTERIOR::IS_VALID_INTERIOR(uVar0)){
INTERIOR::PIN_INTERIOR_IN_MEMORY(uVar0);
while (!INTERIOR::IS_INTERIOR_READY(uVar0)){
wait(0);
}
wait(0);
INTERIOR::UNPIN_INTERIOR(uVar0);
}}


bool func_108(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_109(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}}
return 0;
}


void func_110(){
if(func_109(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
func_125(0);
func_77(0);
PLAYER::SET_MAX_WANTED_LEVEL(5);
func_6(2);
}else{
if(!func_117(15)){
func_114("SUBM_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
func_113(15);
}
if(!func_112()){
func_125(1);
if(!iLocal_50 && !Local_40.f_1.f_4 >=Local_40.f_1.f_3){
func_114("SUBM_TRKHELP", 1, 0, -1, 10000, 7, 0, 0, 0);
iLocal_50=1;
}}
func_111();
if(func_76(&Local_40, &Local_46)){
func_31();
}}}}


void func_111(){
iLocal_51++;
if((iLocal_51 % 30)==0 || iLocal_52==-1){
if(func_11(&Local_40, &Local_46, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iLocal_52)){
func_8();
}}}

int func_112(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0){
return 1;
}
return 0;
}


void func_113(int iParam0){
bool bVar0;
int iVar1;
bVar0=iParam0;
iVar1=0;
while (bVar0 > 31){
bVar0=(bVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
MISC::SET_BIT(&(Global_113810.f_20413.f_150[iVar1]), bVar0);
}}


void func_114(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_115(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_115(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
func_116();
}}


void func_116(){
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

int func_117(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113810.f_20413.f_150[iVar1], iVar0);
}
return 0;
}


void func_118(){
iLocal_54=0;
func_122();
func_121(&Local_40, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
func_119(&Local_40, joaat("num_hidden_packages_3"), 815, 30);
if(func_109(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_MAX_WANTED_LEVEL(0);
func_6(1);
}else{
PLAYER::SET_MAX_WANTED_LEVEL(5);
func_6(2);
}}}


void func_119(var uParam0, int iParam1, int iParam2, int iParam3){
uParam0->f_6=iParam1;
func_120(&(uParam0->f_1), iParam2, iParam3);
}


void func_120(var uParam0, var uParam1, var uParam2){
bool bVar0;
int iVar1;
iVar1=0;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=uParam1;
uParam0->f_3=uParam2;
if(bLocal_38){}
bVar0=false;
while (bVar0 < uParam0->f_3){
if(func_69((uParam0->f_2 + bVar0), -1)){
iVar1++;
func_103(uParam0, bVar0, 1);
if(bLocal_38){
}}
bVar0++;
}
uParam0->f_4=iVar1;
if(bLocal_38){}}


void func_121(var uParam0, int iParam1, int iParam2, char* sParam3){
*uParam0=iParam1;
uParam0->f_7=iParam2;
uParam0->f_8=sParam3;
uParam0->f_10=0;
}


void func_122(){
int iVar0;
Local_46[0 /*11*/].f_3={
func_10(0) 
};
Local_46[0 /*11*/].f_9=179.47f;
Local_46[1 /*11*/].f_3={
func_10(1) 
};
Local_46[1 /*11*/].f_9=104f;
Local_46[2 /*11*/].f_3={
func_10(2) 
};
Local_46[2 /*11*/].f_9=321.5f;
Local_46[3 /*11*/].f_3={
func_10(3) 
};
Local_46[3 /*11*/].f_9=-29.79f;
Local_46[4 /*11*/].f_3={
func_10(4) 
};
Local_46[4 /*11*/].f_9=-165.6f;
Local_46[5 /*11*/].f_3={
func_10(5) 
};
Local_46[5 /*11*/].f_9=116f;
Local_46[6 /*11*/].f_3={
func_10(6) 
};
Local_46[6 /*11*/].f_9=-68.65f;
Local_46[7 /*11*/].f_3={
func_10(7) 
};
Local_46[7 /*11*/].f_9=40f;
Local_46[8 /*11*/].f_3={
func_10(8) 
};
Local_46[8 /*11*/].f_9=40f;
Local_46[9 /*11*/].f_3={
func_10(9) 
};
Local_46[9 /*11*/].f_9=40f;
Local_46[10 /*11*/].f_3={
func_10(10) 
};
Local_46[10 /*11*/].f_9=40f;
Local_46[11 /*11*/].f_3={
func_10(11) 
};
Local_46[11 /*11*/].f_9=27.04f;
Local_46[12 /*11*/].f_3={
func_10(12) 
};
Local_46[12 /*11*/].f_9=40f;
Local_46[13 /*11*/].f_3={
func_10(13) 
};
Local_46[13 /*11*/].f_9=40f;
Local_46[14 /*11*/].f_3={
func_10(14) 
};
Local_46[14 /*11*/].f_9=40f;
Local_46[15 /*11*/].f_3={
func_10(15) 
};
Local_46[15 /*11*/].f_9=40f;
Local_46[16 /*11*/].f_3={
func_10(16) 
};
Local_46[16 /*11*/].f_6={
89.94f, 61.93f, 90.94f 
};
Local_46[17 /*11*/].f_3={
func_10(17) 
};
Local_46[17 /*11*/].f_9=40f;
Local_46[18 /*11*/].f_3={
func_10(18) 
};
Local_46[18 /*11*/].f_9=40f;
Local_46[19 /*11*/].f_3={
func_10(19) 
};
Local_46[19 /*11*/].f_9=40f;
Local_46[20 /*11*/].f_3={
func_10(20) 
};
Local_46[20 /*11*/].f_9=40f;
Local_46[21 /*11*/].f_3={
func_10(21) 
};
Local_46[21 /*11*/].f_9=40f;
Local_46[22 /*11*/].f_3={
func_10(22) 
};
Local_46[22 /*11*/].f_9=40f;
Local_46[23 /*11*/].f_3={
func_10(23) 
};
Local_46[23 /*11*/].f_9=40f;
Local_46[24 /*11*/].f_3={
func_10(24) 
};
Local_46[24 /*11*/].f_9=40f;
Local_46[25 /*11*/].f_3={
func_10(25) 
};
Local_46[25 /*11*/].f_9=198f;
Local_46[26 /*11*/].f_3={
func_10(26) 
};
Local_46[26 /*11*/].f_9=198f;
Local_46[27 /*11*/].f_3={
func_10(27) 
};
Local_46[27 /*11*/].f_9=198f;
Local_46[28 /*11*/].f_3={
func_10(28) 
};
Local_46[28 /*11*/].f_9=198f;
Local_46[29 /*11*/].f_3={
func_10(29) 
};
Local_46[29 /*11*/].f_9=-109.43f;
func_123(&Local_46);
iVar0=0;
while (iVar0 < 30){
iLocal_56[iVar0]=-1;
iVar0++;
}}


void func_123(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < *iParam0){
(iParam0[iVar0 /*11*/])->f_10=0;
iVar0++;
}}


bool func_124(var uParam0){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}


void func_125(bool bParam0){
if(bParam0){
Global_113810.f_14054.f_89=1;
}else{
Global_113810.f_14054.f_89=0;
}}

int func_126(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iVar0], bVar1)){
return 0;
}
MISC::SET_BIT(&(Global_113810.f_9088.f_99.f_219[iVar0]), bVar1);
return 1;
}


void func_127(){
int iVar0;
PLAYER::SET_MAX_WANTED_LEVEL(5);
func_5();
iVar0=0;
while (iVar0 < Local_46.f_0){
func_104(&(Local_46[iVar0 /*11*/].f_2));
func_94(&(Local_46[iVar0 /*11*/].f_1));
if(iLocal_56[iVar0] >=0 && iLocal_56[iVar0] < 8){
GRAPHICS::PROCGRASS_DISABLE_CULLSPHERE(iLocal_56[iVar0]);
}
iVar0++;
}
if(func_129(&(Local_40.f_1))){
func_128(13);
}
func_82();
func_125(0);
func_77(0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_40.f_7);
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_128(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iVar0], bVar1)){
MISC::CLEAR_BIT(&(Global_113810.f_9088.f_99.f_219[iVar0]), bVar1);
return 1;
}
return 0;
}


bool func_129(var uParam0){
if(uParam0->f_3 <=0){}
return uParam0->f_4 >=uParam0->f_3;
}