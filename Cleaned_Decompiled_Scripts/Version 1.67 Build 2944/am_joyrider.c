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
var uLocal_19=0;
var uLocal_20=0;
float fLocal_21=0f;
float fLocal_22=0f;
float fLocal_23=0f;
var uLocal_24=0;
var uLocal_25=0;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
var uLocal_32=0;
var uLocal_33=0;
int iLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
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
struct<11> Local_60={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_61=0;
struct<3> Local_62[32];
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
struct<21> Local_72={
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 
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
fLocal_21=80f;
fLocal_22=140f;
fLocal_23=180f;
fLocal_26=0f;
fLocal_30=-0.0375f;
fLocal_31=0.17f;
iLocal_34=3;
iLocal_38=1;
iLocal_39=65;
iLocal_40=49;
iLocal_41=64;
iLocal_68=20;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_71(PLAYER::PLAYER_ID(), 0, 1)){
func_62(ScriptParam_72);
}else{
func_58();
}
while (true){
func_57();
if(func_49() || func_45(9)){
func_58();
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
func_58();
}
switch (func_44(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if(func_43()==1){
func_42();
Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=1;
}elseif(func_43()==4){
Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=3;
}
break;
case 1:
if(func_43()==1){
func_40();
}elseif(func_43()==4){
Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=3;
}
break;
case 3:
func_38(&(Local_60.f_10));
if(func_37(&(Local_60.f_10))){
Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=4;
}
break;
case 2:
Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=4;
case 4:
func_58();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_43()){
case 0:
if(func_36()){
if(func_8()){
Local_60.f_0=1;
}}
break;
case 1:
func_7();
func_6();
if(func_1()){
Local_60.f_0=4;
}
break;
case 4:
break;
}}}}

int func_1(){
if(func_2()){
return 1;
}
return 0;
}

int func_2(){
if(Local_60.f_9==0){
if(!func_4(Local_60.f_2)){
return 1;
}elseif(func_3(Local_60.f_3)){
return 1;
}else{
if(iLocal_71==1){
if(MISC::IS_BIT_SET(Local_60.f_1, 0)){
return 1;
}}
if(!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_60.f_3), NETWORK::NET_TO_VEH(Local_60.f_2), 0)){
return 1;
}}}
return 0;
}

int func_3(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
}
return 1;
}

int func_4(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_5(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_5(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
return 1;
}}else{
return 1;
}
return 0;
}


void func_6(){
switch (Local_60.f_9){
case 0:
break;
case 1:
break;
}}


void func_7(){
int iVar0;
int iVar1;
var uVar2;
if(iLocal_70==0){
iLocal_71=0;
MISC::SET_BIT(&(Local_60.f_1), false);
}
if(func_4(Local_60.f_2)){
iVar0=1;
}
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_70))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_70));
uVar2=PLAYER::GET_PLAYER_PED(iVar1);
if(func_71(iVar1, 1, 1)){
if(MISC::IS_BIT_SET(Local_60.f_1, 0)){
if(iVar0==1){
if(ENTITY::IS_ENTITY_AT_ENTITY(uVar2, NETWORK::NET_TO_VEH(Local_60.f_2), 250f, 250f, 250f, 0, 1, 0)){
MISC::CLEAR_BIT(&(Local_60.f_1), false);
}}else{
MISC::CLEAR_BIT(&(Local_60.f_1), false);
}}}}
iLocal_70++;
if(iLocal_70==NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iLocal_70=0;
iLocal_71=1;
}}

int func_8(){
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0)){
if(func_35(Local_60.f_4) && func_35(Local_60.f_5)){
if(func_12() && func_9()){
return 1;
}}}
return 0;
}

int func_9(){
int iVar0;
if((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3) && func_35(Local_60.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2)){
if(func_4(Local_60.f_2)){
if(func_11(&(Local_60.f_3), Local_60.f_2, 22, Local_60.f_5, -1, 1, 1, 1)){
PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_60.f_3), 0);
if(func_10()){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_60.f_3), Global_1837218);
}else{
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_60.f_3), Global_1837221);
}
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_60.f_3), 1);
if(func_10()){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
if(iVar0 < 5){
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_60.f_3), joaat("weapon_pistol"), 25000, func_10());
}elseif(iVar0 > 6){
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_60.f_3), joaat("weapon_microsmg"), 25000, func_10());
}else{
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_60.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
}}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
if(iVar0==0 || iVar0==1){
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_60.f_3), 0);
}elseif((iVar0==2 || iVar0==3) || iVar0==4){
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_60.f_3), 2);
}else{
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_60.f_3), 1);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
if(iVar0==0){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 5, 1);
}elseif(iVar0==1){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 17, 1);
}elseif(iVar0==2){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 13, 1);
}
if(func_10()){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 20, 1);
}
if(func_10()){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 2, 1);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
if(iVar0==0){
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_60.f_3), 2);
}elseif(iVar0==1){
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_60.f_3), 1);
}elseif(iVar0==2){
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_60.f_3), 3);
}
PED::SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(NETWORK::NET_TO_PED(Local_60.f_3), 1);
PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(Local_60.f_3), 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_60.f_3), 29, 1);
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_60.f_3), 3);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_60.f_3), round((200f * Global_262145.f_165)), 0);
AUDIO::SET_VEHICLE_RADIO_LOUD(NETWORK::NET_TO_VEH(Local_60.f_2), 1);
VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_60.f_2), 1);
func_42();
TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_60.f_3), uLocal_64);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_60.f_5);
}}}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3)){
return 0;
}
return 1;
}

int func_10(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0)){
return 0;
}
*uParam0=NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), iParam7);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0))){
if(bParam5){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}

int func_12(){
struct<3> Var0;
var uVar1;
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2)){
if(func_35(Local_60.f_4)){
if(func_16(&Var0, &uVar1)){
if(func_13(&(Local_60.f_2), Local_60.f_4, Var0, uVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_60.f_2), 1, 1, 0);
VEHICLE::SET_VEHICLE_IS_WANTED(NETWORK::NET_TO_VEH(Local_60.f_2), 1);
VEHICLE::SET_VEHICLE_IS_STOLEN(NETWORK::NET_TO_VEH(Local_60.f_2), 1);
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_60.f_2), "JOYRIDER_GROUP", 0f);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_60.f_4);
}}}}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2)){
return 0;
}
return 1;
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
float fVar0;
int iVar1;
if(!STREAMING::IS_MODEL_VALID(iParam1)){
return 0;
}
if(!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)){
return 0;
}
fVar0=1.5f;
if(iParam1==joaat("bombushka")){
fVar0=20f;
}
if(bParam9){
MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
}
iVar1=VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
*uParam0=NETWORK::VEH_TO_NET(iVar1);
Global_2794162.f_6737=iVar1;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(bParam13){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, 1);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, iParam8);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1)){
if(bParam6){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}else{
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
}
if(bParam11){
NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
}}
VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, iParam7);
VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, 1);
if(bParam10){
VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
}
func_14(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_14(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_15(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
if((Global_2635560.f_3026[1 /*6*/].f_5==iParam3 && Global_2635560.f_3026[1 /*6*/].f_4==iParam2) && vdist(Global_2635560.f_3026[1 /*6*/], Param0) < 0.5f){
return;
}
iVar0=0;
while (iVar0 < 2){
if(iVar0 < 1){
Global_2635560.f_3026[iVar0 /*6*/]={
Global_2635560.f_3026[iVar0 + 1 /*6*/] 
};
}
iVar0++;
}
Global_2635560.f_3026[1 /*6*/]={
Param0 
};
Global_2635560.f_3026[1 /*6*/].f_3=uParam1;
Global_2635560.f_3026[1 /*6*/].f_4=iParam2;
Global_2635560.f_3026[1 /*6*/].f_5=iParam3;
}}

int func_15(int iParam0, struct<3> Param1, int iParam2){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=iParam0;
if(iVar0 > -1){
iVar1=0;
while (iVar1 < 2){
if(Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==iParam2){
Var2={
Param1 
};
if(MISC::ABSF((Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f){
Var2.f_2=Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
}
if(vdist(Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f){
return iVar1;
}}
iVar1++;
}}
return -1;
}


bool func_16(var uParam0, var uParam1){
bool bVar0;
int iVar1;
var uVar2;
if(!bVar0){
if(VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&(Local_60.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1)){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
if(iVar1 >=1 || ZONE::GET_HASH_OF_MAP_AREA_AT_COORD(*uParam0)==joaat("City")){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.557f, -3220.598f, 12.9448f, Local_60.f_6, 1) >=600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Local_60.f_6, 1) >=700f){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(PLAYER::PLAYER_ID()), *uParam0, 1) <=(250f - 50f)){
if(iLocal_69 <=5){
if(func_17(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
bVar0=true;
}
}
else{
Local_60.f_0=4;
}}}}}}
if(!bVar0){
iLocal_68 +=4;
if(iLocal_68 >=80){
iLocal_68=20;
iLocal_69++;
}}
return bVar0;
}

int func_17(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
Global_2635560.f_2=0;
if(fParam1 > 0f){
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1)){
return 0;
}}
if(fParam2 > 0f){
if(PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2)){
return 0;
}}
if(fParam3 > 0f){
if(OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, iParam16)){
return 0;
}}
Global_2635560.f_2++;
if(bParam11){
if(FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0){
return 0;
}}
Global_2635560.f_2++;
if(fParam12 > 0f){
if(func_27(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635560.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_18(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635560.f_2++;
return 1;
}

int func_18(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_71(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_71(iVar1, 1, 1)){
if(!func_20(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if((func_19(iVar1) || !bParam8) && !Global_2657704[iVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_19(int iParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255){
return 1;
}
return 0;
}


bool func_20(int iParam0, int iParam1){
bool bVar0;
if(!func_23(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_21(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_21(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_22();
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

int func_22(){
return Global_1574918;
}

int func_23(var uParam0){
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


Vector3 func__24(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_26() && Global_1853988[iVar0 /*867*/].f_834) && !func_25(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_34(iParam0);
}

int func_25(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


var func__26(){
return Global_2683883.f_19;
}

int func_27(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_71(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_19(iVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_28(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(iVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_28(int iParam0){
if(func_33(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764376={
func_32(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764376)){
return 1;
}
if(func_29(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_29(int iParam0, int iParam1){
int iVar0;
iVar0=func_30(iParam0);
if(func_23(iVar0)){
if(iVar0==func_30(iParam1)){
return 1;
}}
return 0;
}

int func_30(int iParam0){
if(func_23(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_31();
}

int func_31(){
return -1;
}
struct<13> func_32(var uParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
return Var0;
}

int func_33(int iParam0, var uParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_32(iParam0) 
};
Global_2764389={
func_32(uParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376)){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
if(Global_2764306==Global_2764341){
return 1;
}}}}
return 0;
}


Vector3 func__34(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_35(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}


bool func_36(){
if(!MISC::IS_BIT_SET(uLocal_63, 1)){
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_34(PLAYER::PLAYER_ID()), iLocal_67, &(Local_60.f_6), 4, 1077936128, 0)){
MISC::SET_BIT(&uLocal_63, true);
}else{
iLocal_67++;
}}
return MISC::IS_BIT_SET(uLocal_63, 1);
}

int func_37(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_38(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_39(uParam0, 0, 0);
}}}


void func_39(var uParam0, bool bParam1, bool bParam2){
if(uParam0->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}}


void func_40(){
switch (Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2){
case 0:
func_42();
func_41();
if(Local_60.f_9 > 0){
Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=1;
}
break;
case 1:
func_58();
break;
}}


void func_41(){
int iVar0;
float fVar1;
if(!MISC::IS_BIT_SET(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0)){
if(func_4(Local_60.f_2) && !func_3(Local_60.f_3)){
iVar0=ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_60.f_2));
fVar1=ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_60.f_2));
if(iVar0 < 200){
func_42();
TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_60.f_3), uLocal_66);
MISC::SET_BIT(&(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), false);
}elseif(fVar1 < 3f){
if((((ENTITY::IS_ENTITY_UPSIDEDOWN(NETWORK::NET_TO_VEH(Local_60.f_2)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_60.f_2), 3, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_60.f_2), 1, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_60.f_2), 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_60.f_2), 2, 10000)){
func_42();
TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_60.f_3), uLocal_65);
MISC::SET_BIT(&(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), false);
}}}}}


void func_42(){
if(!MISC::IS_BIT_SET(uLocal_63, 0)){
if(func_4(Local_60.f_2)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_64);
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6, 14, 30f, 786468, 15f, 1f, 0);
TASK::TASK_VEHICLE_DRIVE_WANDER(0, NETWORK::NET_TO_VEH(Local_60.f_2), 30f, 786468);
TASK::CLOSE_SEQUENCE_TASK(uLocal_64);
TASK::OPEN_SEQUENCE_TASK(&uLocal_65);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_65);
TASK::OPEN_SEQUENCE_TASK(&uLocal_66);
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6, 5, 30f, 786468, 99999f, 1f, 0);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_66);
MISC::SET_BIT(&uLocal_63, false);
}}}

int func_43(){
return Local_60.f_0;
}

int func_44(int iParam0){
return Local_62[iParam0 /*3*/];
}


bool func_45(int iParam0){
return !func_46(iParam0);
}

int func_46(int iParam0){
switch (iParam0){
case 0:
break;
case 1:
break;
case 2:
break;
case 3:
break;
case 4:
if(Global_262145.f_7203){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 5:
if(Global_262145.f_7204){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 6:
if(Global_262145.f_7205){
return 0;
}
break;
case 7:
break;
case 8:
break;
case 9:
if(Global_262145.f_7206){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 15:
if(func_47(4)){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 17:
if(func_47(4)){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 16:
if(func_47(4)){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 18:
case 21:
case 22:
case 23:
if(func_47(4)){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 19:
if(func_47(4)){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
break;
case 20:
if(func_47(4)){
return 0;
}
if(func_48(PLAYER::PLAYER_ID(), 7)){
return 0;
}
break;
case 10:
break;
case 11:
break;
case 12:
break;
}
return 1;
}

int func_47(bool bParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 32){
if(func_71(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1)){
if(MISC::IS_BIT_SET(Global_2657704[iVar0 /*463*/].f_218, bParam0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_48(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_49(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_56()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_55()){
return 1;
}
if(func_54(159)){
if(!func_53()){
return 1;
}}
if(func_54(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_50() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_50())==0){
return 1;
}}
return 0;
}

int func_50(){
switch (func_52()){
case 0:
return func_51();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_51(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_52(){
return Global_32283;
}


bool func_53(){
return Global_2683883.f_698;
}

int func_54(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_55(){
return Global_2694576;
}


bool func_56(){
return Global_2683883.f_693;
}


void func_57(){
wait(0);
}


void func_58(){
func_61();
if(func_43()==4 && Local_60.f_4 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_60.f_4, 0);
}
if(func_4(Local_60.f_2)){
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_60.f_2), 0f);
}
AUDIO::STOP_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
func_60(9, 0);
func_59();
}


void func_59(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_60(bool bParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}


void func_61(){
TASK::CLEAR_SEQUENCE_TASK(&uLocal_64);
}


void func_62(struct<21> Param0){
int iVar0;
func_67(func_68(Param0.f_0), Param0);
NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
func_65(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 12, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_62, 97, 0);
if(!func_64()){
func_58();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(Global_2794162.f_4488==0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
switch (iVar0){
case 0:
Local_60.f_4=joaat("stingergt");
break;
case 1:
Local_60.f_4=joaat("entityxf");
break;
case 2:
Local_60.f_4=joaat("feltzer2");
break;
case 3:
Local_60.f_4=joaat("monroe");
break;
case 4:
Local_60.f_4=joaat("cogcabrio");
break;
case 5:
Local_60.f_4=joaat("superd");
break;
case 6:
Local_60.f_4=joaat("infernus");
break;
}}else{
Local_60.f_4=Global_2794162.f_4488;
Global_2794162.f_4488=0;
}
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_60.f_4, 1);
Local_60.f_5=func_63(1);
}
func_60(9, 1);
AUDIO::START_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=0;
}else{
func_58();
}}

int func_63(bool bParam0){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
if(bParam0){
switch (iVar0){
case 0:
return joaat("a_m_m_eastsa_01");
case 1:
return joaat("a_m_m_bevhills_01");
case 2:
return joaat("a_m_m_bevhills_02");
case 3:
return joaat("a_m_m_business_01");
case 4:
return joaat("a_m_m_malibu_01");
case 5:
return joaat("a_m_m_eastsa_02");
case 6:
return joaat("a_m_m_hillbilly_01");
case 7:
return joaat("a_m_m_hillbilly_02");
case 8:
return joaat("a_m_m_og_boss_01");
case 9:
return joaat("a_m_m_stlat_02");
case 10:
return joaat("a_m_y_beachvesp_01");
case 11:
return joaat("a_m_y_epsilon_01");
case 12:
return joaat("a_m_m_prolhost_01");
case 13:
return joaat("a_m_m_salton_01");
case 14:
return joaat("a_m_m_skater_01");
case 15:
return joaat("a_m_y_skater_02");
case 16:
return joaat("a_m_y_methhead_01");
case 17:
return joaat("a_m_m_skidrow_01");
case 18:
return joaat("a_m_m_soucent_01");
case 19:
return joaat("a_m_m_soucent_02");
case 20:
return joaat("a_m_m_soucent_03");
case 21:
return joaat("a_m_y_genstreet_02");
case 22:
return joaat("a_m_y_roadcyc_01");
case 23:
return joaat("a_m_m_afriamer_01");
case 24:
return joaat("a_m_m_beach_01");
case 25:
return joaat("a_m_m_farmer_01");
case 26:
return joaat("a_m_m_fatlatin_01");
case 27:
return joaat("a_m_m_genfat_01");
case 28:
return joaat("a_m_m_indian_01");
case 29:
return joaat("a_m_m_ktown_01");
case 30:
return joaat("a_m_m_socenlat_01");
case 31:
return joaat("a_m_m_mexlabor_01");
default:}}else{
switch (iVar0){
case 0:
return joaat("a_f_m_bevhills_01");
case 1:
return joaat("a_f_m_bevhills_02");
case 2:
return joaat("a_f_m_beach_01");
case 3:
return joaat("a_f_m_ktown_02");
case 4:
return joaat("a_f_m_prolhost_01");
case 5:
return joaat("a_f_m_bodybuild_01");
case 6:
return joaat("a_f_m_business_02");
case 7:
return joaat("a_f_m_downtown_01");
case 8:
return joaat("a_f_m_eastsa_01");
case 9:
return joaat("a_f_m_eastsa_02");
case 10:
return joaat("a_f_m_fatwhite_01");
case 11:
return joaat("a_f_m_ktown_01");
case 12:
return joaat("a_f_m_ktown_02");
case 13:
return joaat("a_f_m_salton_01");
case 14:
return joaat("a_f_m_skidrow_01");
case 15:
return joaat("a_f_m_soucent_01");
case 16:
return joaat("a_f_m_soucent_02");
case 17:
return joaat("a_f_m_soucentmc_01");
case 18:
return joaat("a_f_m_tramp_01");
case 19:
return joaat("a_f_m_trampbeac_01");
case 20:
return joaat("a_f_y_yoga_01");
case 21:
return joaat("a_f_y_vinewood_02");
case 22:
return joaat("a_f_y_vinewood_03");
case 23:
return joaat("a_f_y_vinewood_04");
case 24:
return joaat("a_f_y_tennis_01");
case 25:
return joaat("a_f_y_tourist_01");
case 26:
return joaat("a_f_y_hipster_01");
case 27:
return joaat("a_f_y_golfer_01");
case 28:
return joaat("a_f_y_fitness_01");
case 29:
return joaat("a_f_y_scdressy_01");
case 30:
return joaat("a_f_y_epsilon_01");
case 31:
return joaat("a_f_y_hiker_01");
default:}}
return joaat("a_f_m_bevhills_01");
}

int func_64(){
int iVar0;
iVar0=0;
while (true){
iVar0++;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA()){
return 1;
}
if(func_56()){
return 0;
}
if(func_54(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_65(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_59();
}else{
return 0;
}}
if(!func_66(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_59();
}else{
return 0;
}}
if(func_56()){
if(!bParam2){
func_59();
}else{
return 0;
}}
if(func_54(157)){
if(!bParam2){
func_59();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_59();
}else{
return 0;
}}}
wait(0);
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
}
if(iParam1 > -1){
Global_1574666=iVar0;
}
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_59();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_59();
}else{
return 0;
}}
return 1;
}


bool func_66(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_67(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_59();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_68(int iParam0){
switch (iParam0){
case 3:
return 2;
case 1:
return 32;
case 32:
return 32;
case 33:
return 32;
case 34:
return 32;
case 35:
return 32;
case 36:
return 32;
case 37:
return 32;
case 38:
return 32;
case 39:
return 32;
case 40:
return 32;
case 41:
return 32;
case 42:
return 32;
case 43:
return 32;
case 44:
return 32;
case 45:
return 32;
case 46:
return 32;
case 47:
return 32;
case 48:
return 32;
case 49:
return 32;
case 50:
return 4;
case 51:
return 32;
case 52:
return 32;
case 53:
return 32;
case 54:
return 32;
case 55:
return 32;
case 56:
return 32;
case 57:
return 32;
case 58:
return 32;
case 59:
return 32;
case 60:
return 32;
case 61:
return 32;
case 62:
return 32;
case 63:
return 32;
case 64:
return 4;
case 65:
return 32;
case 66:
return 4;
case 67:
return 4;
case 68:
return 32;
case 69:
return 32;
case 70:
return 4;
case 71:
return 32;
case 72:
return 32;
case 73:
case 74:
return 4;
case 75:
return 32;
case 76:
return 32;
case 77:
return 32;
case 78:
return 32;
case 79:
return 32;
case 80:
return 32;
case 81:
return 32;
case 82:
return 32;
case 84:
return 32;
case 83:
return 32;
case 85:
return 32;
case 86:
return 8;
case 87:
return 32;
case 88:
return 32;
case 89:
return 32;
case 90:
return 32;
case 91:
return 8;
case 92:
return 32;
case 93:
return 8;
case 94:
return 8;
case 102:
return 8;
case 95:
return 8;
case 96:
return 32;
case 97:
return 32;
case 98:
return 32;
case 99:
return 8;
case 100:
return 32;
case 101:
return 32;
case 103:
return 32;
case 104:
return 32;
case 105:
return 32;
case 106:
return 8;
case 107:
return 8;
case 108:
return 8;
case 109:
return 8;
case 110:
return 8;
case 111:
return 8;
case 112:
return 8;
case 113:
return 8;
case 114:
return 32;
case 115:
return 8;
case 116:
return 8;
case 117:
return 8;
case 118:
return 8;
case 119:
return 32;
case 120:
return 32;
case 121:
return 32;
case 122:
return 32;
case 123:
return 8;
case 124:
return 8;
case 125:
return 8;
case 126:
return 8;
case 12:
return 32;
case 4:
return 16;
case 13:
return 32;
case 5:
return 16;
case 6:
return 2;
case 8:
return 2;
case 9:
return 2;
case 7:
return 16;
case 10:
return 2;
case 11:
return 4;
case 15:
return 32;
case 16:
return 32;
case 27:
return 2;
case 25:
return 2;
case 26:
return 2;
case 18:
return 32;
case 28:
return 32;
case 29:
return 2;
case 30:
return 32;
case 31:
return 32;
case 17:
return 2;
case 180:
return 32;
case 181:
return 32;
case 19:
return 32;
case 22:
return 32;
case 23:
return 32;
case 24:
return 32;
case 20:
return 2;
case 0:
return 0;
case 21:
return 32;
case 192:
return 32;
case 193:
return 32;
case 182:
return 32;
case 183:
return 32;
case 187:
return 32;
case 185:
return 32;
case 186:
return 32;
case 190:
return 32;
case 191:
return 32;
case 188:
return 32;
case 189:
return 32;
case 194:
return 32;
case 195:
return 32;
case 196:
return 32;
case 197:
return 32;
case 198:
return 2;
case 203:
return 1;
case 199:
return 2;
case 200:
return 4;
case 201:
return 2;
case 202:
return 2;
case 184:
return 1;
case 204:
return 2;
case 205:
case 206:
case 207:
case 208:
case 209:
case 210:
return 0;
case 226:
return 1;
case 211:
return 4;
case 214:
return 4;
case 215:
return 1;
case 216:
return 1;
case 222:
return 1;
case 218:
return 2;
case 223:
return 1;
case 219:
return 1;
case 217:
return 2;
case 220:
return 8;
case 221:
return 8;
case 224:
return 1;
case 225:
return 2;
case 142:
return 8;
case 148:
return 1;
case 170:
return 1;
case 178:
return 1;
case 212:
return 16;
case 213:
return 32;
default:
}
switch (func_69(func_70(iParam0, 1))){
case 0:
return 8;
case 1:
return 32;
case 2:
return 32;
default:
}
return 0;
}

int func_69(int iParam0){
switch (iParam0){
case 150:
return 1;
case 24:
return 2;
case 26:
return 2;
case 256:
return 0;
case 258:
return 0;
case 259:
return 2;
case 271:
return 0;
case 273:
return 2;
case 276:
return 0;
case 277:
return 0;
case 262:
return 0;
case 263:
return 0;
case 264:
return 0;
case 269:
return 2;
case 270:
return 2;
case 275:
return 2;
case 268:
return 2;
case 286:
return 2;
case 267:
return 0;
case 266:
return 2;
case 287:
return 2;
case 289:
return 2;
case 147:
return 2;
case 291:
return 0;
case 292:
return 0;
case 293:
return 0;
case 294:
return 0;
case 295:
return 0;
case 296:
return 0;
case 297:
return 0;
case 298:
return 0;
case 299:
return 0;
case 300:
return 0;
case 301:
return 0;
case 288:
return 2;
case 290:
return 2;
case 304:
return 0;
case 305:
return 0;
case 306:
return 0;
case 307:
return 0;
case 308:
return 0;
case 309:
return 0;
case 310:
return 2;
case 311:
return 2;
case 312:
return 2;
case 320:
return 2;
case 313:
return 2;
case 315:
return 0;
case 316:
return 0;
case 317:
return 0;
case 318:
return 0;
default:
}
return -1;
}

int func_70(int iParam0, bool bParam1){
switch (iParam0){
case 198:
return 15;
case 205:
return 8;
case 199:
return 14;
case 203:
return 122;
case 206:
return 1;
case 204:
return 5;
case 207:
return 6;
case 200:
return 11;
case 208:
return 0;
case 209:
return 2;
case 201:
return 13;
case 210:
return 3;
case 202:
return 12;
case 49:
return 148;
case 52:
return 151;
case 53:
return 152;
case 54:
return 157;
case 55:
return 153;
case 56:
return 154;
case 57:
return 155;
case 58:
return 159;
case 51:
return 162;
case 60:
return 142;
case 62:
return 160;
case 63:
return 164;
case 64:
return 163;
case 65:
return 166;
case 66:
return 167;
case 67:
return 168;
case 68:
return 169;
case 69:
return 170;
case 70:
return 171;
case 71:
return 172;
case 72:
return 173;
case 73:
return 178;
case 74:
return 188;
case 75:
return 214;
case 76:
return 215;
case 77:
return 216;
case 78:
return 217;
case 79:
return 218;
case 80:
return 219;
case 81:
return 220;
case 82:
return 221;
case 84:
return 179;
case 83:
return 189;
case 85:
return 180;
case 87:
return 182;
case 88:
return 183;
case 89:
return 185;
case 90:
return 186;
case 91:
return 190;
case 92:
return 191;
case 93:
return 192;
case 94:
return 193;
case 102:
return 205;
case 95:
return 194;
case 96:
return 197;
case 97:
return 198;
case 99:
return 199;
case 100:
return 200;
case 101:
return 201;
case 103:
return 207;
case 104:
return 208;
case 105:
return 209;
case 106:
return 210;
case 98:
return 195;
case 107:
return 225;
case 108:
return 226;
case 109:
return 227;
case 110:
return 229;
case 111:
return 230;
case 113:
return 233;
case 115:
return 237;
case 116:
return 238;
case 117:
return 239;
case 118:
return 240;
case 119:
return 241;
case 120:
return 242;
case 121:
return 244;
case 122:
return 248;
case 123:
return 249;
case 124:
return 250;
case 125:
return 243;
case 126:
return 158;
case 86:
return 181;
case 127:
return 150;
case 128:
return 24;
case 129:
return 26;
case 130:
return 256;
case 131:
return 258;
case 133:
return 259;
case 134:
return 271;
case 135:
return 273;
case 136:
return 276;
case 137:
return 277;
case 138:
return 262;
case 139:
return 263;
case 140:
return 264;
case 141:
return 268;
case 143:
return 269;
case 144:
return 270;
case 145:
return 275;
case 146:
return 286;
case 148:
return 267;
case 147:
return 266;
case 151:
return 147;
case 149:
return 287;
case 152:
return 291;
case 153:
return 292;
case 154:
return 293;
case 155:
return 294;
case 156:
return 295;
case 157:
return 296;
case 158:
return 297;
case 159:
return 298;
case 160:
return 299;
case 161:
return 300;
case 162:
return 301;
case 163:
return 288;
case 164:
return 290;
case 165:
return 304;
case 166:
return 305;
case 167:
return 306;
case 168:
return 307;
case 169:
return 308;
case 170:
return 309;
case 171:
return 310;
case 172:
return 311;
case 173:
return 312;
case 174:
return 313;
case 175:
return 315;
case 176:
return 316;
case 177:
return 317;
case 178:
return 318;
case 179:
return 320;
default:
}
if(bParam1){}
return 322;
}

int func_71(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2672524.f_3){
return Global_2672524.f_2;
}elseif(Global_2657704[iVar0 /*463*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}