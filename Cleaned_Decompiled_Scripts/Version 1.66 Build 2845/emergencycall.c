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
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
struct<3> Local_45={
0, 0, 0 
};
int iLocal_46=0;
var uLocal_47=0;
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
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)){
iLocal_43=5;
}
while (true){
wait(0);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
switch (iLocal_43){
case 0:
func_9();
break;
case 1:
break;
case 2:
func_8();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::CREATE_INCIDENT_WITH_ENTITY(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_47, 0, 0)){
iLocal_46=MISC::GET_GAME_TIMER();
iLocal_43=5;
}}elseif(MISC::CREATE_INCIDENT(7, Local_45, 2, 3f, &uLocal_47, 0, 0)){
iLocal_46=MISC::GET_GAME_TIMER();
iLocal_43=5;
}
break;
case 3:
func_8();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((func_7(PLAYER::PLAYER_ID(), 0) && func_4(PLAYER::PLAYER_ID())==5) && Global_1968277){
if(Global_1968278==0){
Global_1968278=1;
}
iLocal_43=5;
}
elseif(MISC::CREATE_INCIDENT_WITH_ENTITY(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_47, 0, 0)){
iLocal_46=MISC::GET_GAME_TIMER();
iLocal_43=5;
}}elseif(MISC::CREATE_INCIDENT(5, Local_45, 2, 3f, &uLocal_47, 0, 0)){
iLocal_46=MISC::GET_GAME_TIMER();
iLocal_43=5;
}
break;
case 4:
func_8();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::CREATE_INCIDENT_WITH_ENTITY(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &uLocal_47, 0, 0)){
iLocal_46=MISC::GET_GAME_TIMER();
iLocal_43=5;
}}elseif(MISC::CREATE_INCIDENT(3, Local_45, 4, 3f, &uLocal_47, 0, 0)){
if(Global_97178.f_358==MISC::GET_HASH_KEY("AGENCY_PREP_1") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && func_3(0))){
Global_97178.f_358=MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
}
elseif(func_2(67) && !func_2(68)){
Global_97108=1;
}
iLocal_46=MISC::GET_GAME_TIMER();
iLocal_43=5;
}
break;
case 5:
if(MISC::GET_GAME_TIMER() > (iLocal_46 + 60000) || !MISC::IS_INCIDENT_VALID(uLocal_47)){
func_1();
}elseif(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(MISC::IS_INCIDENT_VALID(uLocal_47)){
MISC::DELETE_INCIDENT(uLocal_47);
}
}}
break;
}}}}


void func_1(){
iLocal_43=0;
iLocal_44=0;
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_3(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}

int func_4(int iParam0){
if(func_6(iParam0)==233){
return func_5(iParam0);
}
return -1;
}

int func_5(int iParam0){
if(func_7(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_6(int iParam0){
if(func_7(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_7(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}


void func_8(){
if(MISC::GET_GAME_TIMER() > iLocal_46 + 30000){
iLocal_43=5;
}}


void func_9(){
var uVar0;
switch (iLocal_44){
case 0:
iLocal_44=1;
iLocal_46=MISC::GET_GAME_TIMER();
break;
case 1:
while (!func_19()){
wait(0);
if(func_18()==3){
iLocal_43=3;
}
if(func_18()==4){
iLocal_43=4;
}
if(func_18()==5){
iLocal_43=2;
}
if(MISC::GET_GAME_TIMER() > iLocal_46 + 30000){
iLocal_46=MISC::GET_GAME_TIMER();
func_12(0);
}}
if(iLocal_43==0){
iLocal_43=5;
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_10(PLAYER::PLAYER_PED_ID(), &Local_45, &uVar0);
}
iLocal_46=MISC::GET_GAME_TIMER();
break;
}}


void func_10(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
struct<3> Var6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
int iVar13;
var uVar14;
int iVar15;
var uVar16;
struct<3> Var17;
var uVar18;
fVar12=5f;
iVar0=1;
iVar13=0;
while (iVar13 < 2){
switch (iVar13){
case 0:
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iVar0, uParam1, &fVar10, &iVar1, 5, 1077936128, 0);
PATHFIND::GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f){
*uParam1={
-3031.38f, 605.32f, 6.86f 
};
}
Var6={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
fVar8=MISC::GET_HEADING_FROM_VECTOR_2D(Var6.f_0, Var6.f_1);
fVar9=(fVar10 + 180f);
if(fVar9 > 360f){
fVar9=(fVar9 - 360f);
}
if(func_11(fVar8, fVar10, 90f)){
*uParam2=fVar10;
}else{
*uParam2=fVar9;
}
if(fVar7 < 0f){
fVar11=0f;
}elseif(PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 1077936128, 0))){
fVar11=0f;
}else{
fVar11=(fVar12 * to_float((iVar1 / 2)));
if(fVar11==0f){
fVar11=(fVar11 + fVar12);
}
if(iVar1==5){
fVar11=(fVar11 + fVar12);
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 294f, -895f, 28f, 1) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f){
fVar11=(fVar11 + 5f);
}else{
fVar11=(fVar11 + 3.75f);
}
fVar11=(fVar11 + (fVar7 / 2f));
}
if(vdist(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar11, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > vdist(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, -fVar11, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))){
fVar11=-fVar11;
}
*uParam1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar11, 0f, 0f) 
};
uVar14=SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
iVar13++;
break;
case 1:
if(iVar0 <=2){
if(SHAPETEST::GET_SHAPE_TEST_RESULT(uVar14, &iVar15, &Var17, &uVar16, &uVar18)==2){
if(iVar15 !=0){
if(Var17.f_2 > (uParam1->f_2 + 8.5f)){
iVar13++;
}else{
iVar0++;
iVar13=0;
}
}
else{
iVar13++;
}}}else{
iVar13++;
}
break;
case 2:
break;
}}}

int func_11(float fParam0, float fParam1, float fParam2){
float fVar0;
float fVar1;
fVar1=(fParam1 - fParam2);
if(fVar1 < 0f){
fVar1=(fVar1 + 360f);
}
fVar0=(fParam1 + fParam2);
if(fVar0 >=360f){
fVar0=(fVar0 - 360f);
}
if(fVar0 > fVar1){
if(fParam0 < fVar0 && fParam0 > fVar1){
return 1;
}}elseif(fParam0 < fVar0 || fParam0 > fVar1){
return 1;
}
return 0;
}


void func_12(int iParam0){
if(func_17()){
return;
}
if(Global_20584){
if(func_16()){
func_14(1, 1);
}else{
func_14(0, 0);
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
if(!func_13()){
Global_20383.f_1=3;
}}

int func_13(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_14(bool bParam0, bool bParam1){
if(bParam0){
if(func_15(0)){
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

int func_15(int iParam0){
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


bool func_16(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_17(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_18(){
return Global_22742;
}

int func_19(){
if(Global_21725==0){
return 1;
}
return 0;
}