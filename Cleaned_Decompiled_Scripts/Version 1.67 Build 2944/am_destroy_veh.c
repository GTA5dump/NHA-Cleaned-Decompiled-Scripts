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
var uLocal_60=0;
float fLocal_61=0f;
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
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
struct<48> Local_86={
0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_87=0;
struct<3> Local_88[32];
var uLocal_89=0;
var uLocal_90=0;
int iLocal_91=0;
var uLocal_92=0;
int iLocal_93=0;
int iLocal_94=0;
int iLocal_95=0;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
struct<8> Local_104[3];
var uLocal_105=0;
var uLocal_106=0;
struct<21> Local_107={
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
fLocal_61=((0.05f + 0.275f) - 0.01f);
iLocal_93=1076369579;
iLocal_94=20;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_246(PLAYER::PLAYER_ID(), 0, 1)){
func_235(ScriptParam_107);
}else{
func_231();
}
while (true){
func_230();
if(func_222() || func_218(17)){
func_231();
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
func_231();
}
switch (func_217(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if(func_216()==1){
func_215();
func_213();
if(func_212(60000)){
if(!func_211()){
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_86.f_10)){
func_210("DSV_HELP1", -1);
}else{
func_210("DSV_HELP2", -1);
}
}}
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=1;
}elseif(func_216()==4){
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=3;
}
break;
case 1:
if(func_216()==1){
func_46();
}elseif(func_216()==4){
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=3;
}
break;
case 3:
func_45(&(Local_86.f_45));
if(func_44(&(Local_86.f_45))){
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=4;
}
break;
case 2:
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=4;
case 4:
func_231();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_216()){
case 0:
if(func_10()){
func_215();
func_9(&(Local_86.f_43), 0, 0);
Local_86.f_0=1;
}
break;
case 1:
func_8();
func_7();
if(func_1()){
Local_86.f_0=4;
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
struct<14> Var0;
struct<14> Var1;
if(Local_86.f_42==0){
if(Local_86.f_0 !=4){
if(ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_86.f_2), 0)){
if(func_6(&(Local_86.f_47), 3000, 0)){
if(Local_86.f_8==func_5()){
Var0.f_2=1698144520;
func_3(Var0, func_4(1));
}else{
Var0.f_2=175357111;
Var0.f_10=Local_86.f_8;
func_3(Var0, func_4(1));
}
return 1;
}}
if(func_6(&(Local_86.f_43), Global_262145.f_11778, 0)){
Var1.f_2=-1178382538;
func_3(Var1, func_4(1));
return 1;
}}}
return 0;
}


void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=-642704387;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_4(int iParam0){
var uVar0;
int iVar1;
bool bVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_246(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, bVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_5(){
return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_9(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_7(){
switch (Local_86.f_42){
case 0:
break;
case 1:
break;
}}


void func_8(){
struct<14> Var0;
var uVar1;
if(Local_86.f_0 !=4){
iLocal_91=0;
while (iLocal_91 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_91))){
uVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_91));
if(MISC::IS_BIT_SET(Local_88[iLocal_91 /*3*/].f_1, 0)){
Var0.f_2=175357111;
Var0.f_10=uVar1;
Local_86.f_8=uVar1;
func_3(Var0, func_4(1));
Local_86.f_0=4;
return;
}
if(!MISC::IS_BIT_SET(Local_86.f_1, 0)){
if(MISC::IS_BIT_SET(Local_88[iLocal_91 /*3*/].f_1, 1)){
MISC::SET_BIT(&(Local_86.f_1), false);
}
if(MISC::IS_BIT_SET(Local_88[iLocal_91 /*3*/].f_1, 2)){
MISC::SET_BIT(&(Local_86.f_1), false);
}}else{
if(!MISC::IS_BIT_SET(Local_86.f_1, 1)){
if(MISC::IS_BIT_SET(Local_88[iLocal_91 /*3*/].f_1, 3)){
MISC::SET_BIT(&(Local_86.f_1), true);
}}
if(!MISC::IS_BIT_SET(Local_86.f_1, 2)){
if(MISC::IS_BIT_SET(Local_88[iLocal_91 /*3*/].f_1, 4)){
MISC::SET_BIT(&(Local_86.f_1), 2);
}}
if(!MISC::IS_BIT_SET(Local_86.f_1, 3)){
if(MISC::IS_BIT_SET(Local_88[iLocal_91 /*3*/].f_1, 5)){
MISC::SET_BIT(&(Local_86.f_1), 3);
}}
if(!MISC::IS_BIT_SET(Local_86.f_1, 4)){
if(MISC::IS_BIT_SET(Local_88[iLocal_91 /*3*/].f_1, 6)){
MISC::SET_BIT(&(Local_86.f_1), 4);
}}}}
iLocal_91++;
}}}


void func_9(var uParam0, bool bParam1, bool bParam2){
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

int func_10(){
if(func_43(Local_86.f_10) && func_43(Local_86.f_11)){
if((func_21() && func_19()) && func_11()){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_86.f_10);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_86.f_11);
return 1;
}}
return 0;
}

int func_11(){
int iVar0;
iVar0=0;
while (iVar0 < Local_86.f_14){
if((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_4[iVar0]) && func_43(Local_86.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_2)){
if(func_17(Local_86.f_2)){
if(Local_86.f_12==0){
if(func_16(&(Local_86.f_4[iVar0]), Local_86.f_2, 22, Local_86.f_11, iVar0, 1, 1, 1)){
func_13(&(Local_86.f_4[iVar0]));
}}elseif(func_12(&(Local_86.f_4[iVar0]), 22, Local_86.f_11, Local_86.f_28[iVar0 /*3*/], Local_86.f_38[iVar0], 1, 1, 1)){
func_13(&(Local_86.f_4[iVar0]));
}}}
iVar0++;
}
iVar0=0;
while (iVar0 < Local_86.f_14){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_4[iVar0])){
return 0;
}
iVar0++;
}
return 1;
}

int func_12(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7){
int iVar0;
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
iVar0=PED::CREATE_PED(iParam1, uParam2, Param3, uParam4, iParam6, bParam5);
*uParam0=NETWORK::PED_TO_NET(iVar0);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, iParam7);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0)){
if(bParam5){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}


void func_13(var uParam0){
int iVar0;
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(*uParam0), Global_1837218);
PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(*uParam0), 0);
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(*uParam0), 1);
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(*uParam0), func_15(), 25000, 1);
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
if(iVar0==0 || iVar0==1){
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 0);
}elseif((iVar0==2 || iVar0==3) || iVar0==4){
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 2);
}else{
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 1);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
if((iVar0==0 || iVar0==1) || iVar0==2){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 5, 1);
}elseif(iVar0==3){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 17, 1);
}elseif((iVar0==4 || iVar0==5) || iVar0==6){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 13, 1);
}
if(func_14()){
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 20, 1);
}
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 2, 1);
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
if(iVar0==0){
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 2);
}elseif(iVar0==1){
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 1);
}elseif(iVar0==2){
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 3);
}
PED::SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(NETWORK::NET_TO_PED(*uParam0), 1);
PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam0), 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(*uParam0), 29, 1);
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(*uParam0), 3);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(*uParam0), round((200f * Global_262145.f_165)), 0);
}

int func_14(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_15(){
switch (Local_86.f_11){
case joaat("g_m_y_ballaorig_01"):
case joaat("g_m_y_ballaeast_01"):
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_combatpistol");
case 1:
return joaat("weapon_pumpshotgun");
case 2:
return joaat("weapon_microsmg");
case 3:
return joaat("weapon_mg");
case 4:
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("g_m_y_mexgoon_02"):
case joaat("g_f_y_vagos_01"):
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_pistol");
case 1:
return joaat("weapon_pumpshotgun");
case 2:
return joaat("weapon_microsmg");
case 3:
return joaat("weapon_mg");
case 4:
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("g_m_y_lost_01"):
case joaat("g_f_y_lost_01"):
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_combatpistol");
case 1:
return joaat("weapon_sawnoffshotgun");
case 2:
return joaat("weapon_smg");
case 3:
return joaat("weapon_mg");
case 4:
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("g_m_m_chigoon_02"):
case joaat("g_m_m_chigoon_01"):
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_pistol");
case 1:
return joaat("weapon_pumpshotgun");
case 2:
return joaat("weapon_advancedrifle");
case 3:
return joaat("weapon_mg");
case 4:
return joaat("weapon_carbinerifle");
default:
}
break;
case joaat("g_m_m_armgoon_01"):
case joaat("g_m_y_armgoon_02"):
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_pistol");
case 1:
return joaat("weapon_sawnoffshotgun");
case 2:
return joaat("weapon_smg");
case 3:
return joaat("weapon_mg");
case 4:
return joaat("weapon_carbinerifle");
default:
}
break;
case joaat("a_m_m_hillbilly_02"):
case joaat("a_m_m_hillbilly_01"):
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_combatpistol");
case 1:
return joaat("weapon_sawnoffshotgun");
case 2:
return joaat("weapon_microsmg");
case 3:
return joaat("weapon_mg");
case 4:
return joaat("weapon_combatmg");
default:
}
break;
case joaat("g_m_y_salvagoon_01"):
case joaat("g_m_y_salvagoon_02"):
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_pistol");
case 1:
return joaat("weapon_pumpshotgun");
case 2:
return joaat("weapon_microsmg");
case 3:
return joaat("weapon_mg");
case 4:
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("g_m_y_strpunk_01"):
case joaat("g_m_y_strpunk_02"):
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_pistol");
case 1:
return joaat("weapon_sawnoffshotgun");
case 2:
return joaat("weapon_microsmg");
case 3:
return joaat("weapon_mg");
case 4:
return joaat("weapon_assaultrifle");
default:
}
break;
default:
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5)){
case 0:
return joaat("weapon_pistol");
case 1:
return joaat("weapon_pumpshotgun");
case 2:
return joaat("weapon_smg");
case 3:
return joaat("weapon_combatmg");
case 4:
return joaat("weapon_carbinerifle");
default:
}
break;
}
return joaat("weapon_pistol");
}

int func_16(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
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

int func_17(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_18(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_18(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 1;
}}else{
return 1;
}
return 0;
}

int func_19(){
if((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_3) && func_43(Local_86.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_2)){
if(func_17(Local_86.f_2)){
if(Local_86.f_12==1){
if(func_12(&(Local_86.f_3), 22, Local_86.f_11, Local_86.f_24, Local_86.f_27, 1, 1, 1)){
func_13(&(Local_86.f_3));
func_20();
}}elseif(func_16(&(Local_86.f_3), Local_86.f_2, 22, Local_86.f_11, -1, 1, 1, 1)){
func_13(&(Local_86.f_3));
func_20();
}}}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_3)){
return 0;
}
return 1;
}


void func_20(){
if(Local_86.f_12==0){
if(func_14()){
TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_86.f_3), NETWORK::NET_TO_VEH(Local_86.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786468);
}else{
TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_86.f_3), NETWORK::NET_TO_VEH(Local_86.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786599);
}}elseif(Local_86.f_12==2){
func_215();
TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_86.f_3), uLocal_90);
}}

int func_21(){
int iVar0;
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_2)){
if(func_43(Local_86.f_10)){
if(func_25(&(Local_86.f_16), &(Local_86.f_19))){
if(func_22(&(Local_86.f_2), Local_86.f_10, Local_86.f_16, Local_86.f_19, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0)){
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_86.f_2), 0);
ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_86.f_2), 1);
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_86.f_2));
VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_86.f_2), 1, 1, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_86.f_2), 0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_86.f_2), "Not_Allow_As_Saved_Veh", 1);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_86.f_2), "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_86.f_2), "MPBitset");
}
MISC::SET_BIT(&iVar0, 10);
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_86.f_2), "MPBitset", iVar0);
}
if(Local_86.f_12==0){
if(VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_86.f_2)) < Local_86.f_14){
Local_86.f_14=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_86.f_2));
}}}}}}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_2)){
return 0;
}
return 1;
}

int func_22(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
func_23(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_23(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_24(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_24(int iParam0, struct<3> Param1, int iParam2){
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


bool func_25(var uParam0, var uParam1){
bool bVar0;
int iVar1;
var uVar2;
struct<3> Var3;
Var3={
func_42(PLAYER::PLAYER_ID()) 
};
if(Local_86.f_12==1){
return 1;
}
if(!bVar0){
if(VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var3, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1)){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
if(iVar1 >=1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.557f, -3220.598f, 12.9448f, Var3, 1) >=600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Var3, 1) >=700f){
if(iLocal_95 <=5){
if(func_26(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
bVar0=true;
}}else{
Local_86.f_0=4;
}}}}}
if(!bVar0){
iLocal_94 +=4;
if(iLocal_94 >=80){
iLocal_94=20;
iLocal_95++;
}}
return bVar0;
}

int func_26(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_36(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635560.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_27(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635560.f_2++;
return 1;
}

int func_27(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_246(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_33(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_246(iVar1, 1, 1)){
if(!func_29(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if((func_28(iVar1) || !bParam8) && !Global_2657704[iVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_33(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_33(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_28(int iParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255){
return 1;
}
return 0;
}


bool func_29(int iParam0, int iParam1){
bool bVar0;
if(!func_32(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_30(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_30(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_31();
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

int func_31(){
return Global_1574918;
}

int func_32(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 < 0){
return 0;
}
if(iVar0 >=32){
return 0;
}
return 1;
}


Vector3 func__33(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_35() && Global_1853988[iVar0 /*867*/].f_834) && !func_34(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_42(iParam0);
}

int func_34(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


var func__35(){
return Global_2683883.f_19;
}

int func_36(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_246(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_28(iVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_37(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_42(iVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_37(int iParam0){
if(func_41(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764376={
func_40(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764376)){
return 1;
}
if(func_38(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_38(int iParam0, int iParam1){
int iVar0;
iVar0=func_39(iParam0);
if(func_32(iVar0)){
if(iVar0==func_39(iParam1)){
return 1;
}}
return 0;
}

int func_39(int iParam0){
if(func_32(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_5();
}
struct<13> func_40(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_41(int iParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_40(iParam0) 
};
Global_2764389={
func_40(iParam1) 
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


Vector3 func__42(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_43(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_44(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_45(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_9(uParam0, 0, 0);
}}}


void func_46(){
switch (Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2){
case 0:
func_213();
func_52();
func_47();
if(Local_86.f_42 > 0){
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=1;
}
break;
case 1:
func_231();
break;
}}


void func_47(){
int iVar0;
func_48(Local_86.f_3, &uLocal_96, -1082130432, 0, 0, 0, 0, -1, -1, 1, 0, 0);
iVar0=0;
while (iVar0 < Local_86.f_14){
func_48(Local_86.f_4[iVar0], &(Local_104[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0, 0);
iVar0++;
}
if(MISC::IS_BIT_SET(Local_86.f_1, 0)){
if(!MISC::IS_BIT_SET(Local_86.f_1, 1) && !MISC::IS_BIT_SET(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 3)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_3)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_3) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_86.f_3) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_86.f_3), Global_1837219);
MISC::SET_BIT(&(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 3);
}}}
iVar0=0;
while (iVar0 < 3){
if(!MISC::IS_BIT_SET(Local_86.f_1, (2 + iVar0)) && !MISC::IS_BIT_SET(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, (4 + iVar0))){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_4[iVar0])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_4[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_86.f_4[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_86.f_4[iVar0]), Global_1837219);
if(!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_86.f_4[iVar0]))){
TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_86.f_4[iVar0]), 100f, 0);
}
MISC::SET_BIT(&(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), (4 + iVar0));
}}}
iVar0++;
}}}


void func_48(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
if(func_51(0)){
Global_2672524=PLAYER::PLAYER_ID();
}
if(bParam3){
func_50(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2672524, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
}else{
func_50(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2672524, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
}}elseif(HUD::DOES_BLIP_EXIST(*uParam1)){
func_49(uParam1);
}}


void func_49(var uParam0){
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

int func_50(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12){
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
if(PED::IS_PED_IN_FLYING_VEHICLE(uParam0) && uParam11){
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
HUD::SET_PED_AI_BLIP_FORCED_ON(uParam0, uParam4);
HUD::SET_PED_AI_BLIP_HAS_CONE(uParam0, uParam5);
*uParam1=HUD::GET_AI_PED_PED_BLIP_INDEX(uParam0);
if(!iParam9==-1 || uParam12){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam7);
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
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
}
else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam7);
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


bool func_51(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_52(){
var uVar0;
int iVar1;
var uVar2;
var uVar3;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_2)){
if(!MISC::IS_BIT_SET(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_86.f_2), 0)){
}
if(ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_86.f_2), 0)){
}
if(ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_86.f_2), 0)){
if(PLAYER::PLAYER_ID()==NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_86.f_2, &uVar0)){
func_209(2106, 1, -1);
func_205(68, 1, -1);
func_155(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_8740, 1, -1, 0, 0, 0);
if(func_14()){
func_142(86, "DSV_PASS0", 0, 0, -99);
}else{
func_142(86, "DSV_PASS1", 0, 0, -99);
}
iVar1=Global_262145.f_8741;
Global_2696952=iVar1;
func_78(&iVar1, 1);
if(iVar1 > 0){
func_74(iVar1, 1, 1, 1092616192);
if(func_73()){
func_61(-1922554349, iVar1, &uVar2, 0, 0, 0);
}
else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar1, "AM_DESTROY_VEH", &uVar3);
}}
MISC::SET_BIT(&(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), false);
}}else{
if(!MISC::IS_BIT_SET(Local_86.f_1, 0)){
if(!MISC::IS_BIT_SET(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 1)){
if(func_60(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_86.f_2), 1)){
MISC::SET_BIT(&(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), true);
}}
if(!MISC::IS_BIT_SET(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 2)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_VEH(Local_86.f_2), PLAYER::PLAYER_PED_ID(), 1)){
MISC::SET_BIT(&(Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 2);
}}}
if(func_246(PLAYER::PLAYER_ID(), 1, 1) && func_60(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_86.f_2), 0)){
if(!MISC::IS_BIT_SET(Global_2794162.f_4699, 1)){
MISC::SET_BIT(&(Global_2794162.f_4699), true);
}}elseif(MISC::IS_BIT_SET(Global_2794162.f_4699, 1)){
MISC::CLEAR_BIT(&(Global_2794162.f_4699), true);
}
func_53();
}}}}


void func_53(){
if(!MISC::IS_BIT_SET(uLocal_89, 0)){
if(func_59(27, -1)==0){
if(func_246(PLAYER::PLAYER_ID(), 1, 1)){
if(func_60(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_86.f_2), 0)){
if(func_6(&uLocal_105, 300000, 0)){
func_56(27, 1, -1);
MISC::SET_BIT(&uLocal_89, false);
}}elseif(func_55(&uLocal_105)){
func_54(&uLocal_105);
}}elseif(func_55(&uLocal_105)){
func_54(&uLocal_105);
}}else{
MISC::SET_BIT(&uLocal_89, false);
}}}


void func_54(var uParam0){
uParam0->f_1=0;
}


bool func_55(var uParam0){
return uParam0->f_1;
}


void func_56(int iParam0, int iParam1, int iParam2){
var uVar0;
uVar0=func_57(iParam0, iParam2);
STATS::STAT_SET_BOOL(uVar0, iParam1, 1);
}


var func__57(var uParam0, var uParam1){
return unk_0xD69CE161FE614531(10, uParam0, func_58(uParam1));
}

int func_58(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_31();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_59(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_57(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_60(int iParam0, int iParam1, int iParam2){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam1)){
if(PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2)){
return 1;
}}}
return 0;
}


void func_61(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_73()){
return;
}
iVar0=1;
if(bParam4){
iVar0=4;
}elseif(bParam3){
iVar0=2;
}elseif(bParam5){
iVar0=8;
}
switch (iParam0){
case -1645229221:
case -585718395:
case -1359375127:
case 454359403:
case -982394051:
case 1643659499:
case -2072289654:
case 650665123:
case 1654961868:
case -876847842:
case 68030260:
case -2122299283:
case 366672791:
case 283351220:
case 291576838:
case 1182673174:
case -516219046:
case 1036455748:
case 277665518:
case 2043854386:
case 1839532116:
case 1022400740:
case 1940862352:
case -1389227906:
case 711665950:
case 1704445500:
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 1612072658:
case -517447402:
case 1948102096:
case 1108628223:
case -1834046564:
case -1239008812:
case -222363842:
case -1276678868:
case 1564537328:
case -96593501:
case 742499889:
case 2050093329:
case -1752488069:
case 634375935:
case 2115896461:
case 797947947:
case 1941570214:
case 665109499:
case -1330755006:
case 1976384368:
case 268924934:
case 1869490922:
case -336803850:
case -1412692765:
case 618167454:
case 980623936:
case 437291904:
case -135813048:
case -930104477:
case -1420909320:
case -1733398043:
case -1892760262:
case -1545737048:
case 2039302543:
case 402505853:
case -1143510182:
case 1678112166:
case 837955913:
case -1532467144:
case 1815541181:
if(iParam1 > 0 || Global_262145.f_28582){
func_62(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case -31156877:
case -1027218631:
case -1398318418:
case 1652884147:
case -57868256:
case -1216489292:
case -46622315:
case -352356931:
case -990286235:
case 563463121:
case 1734805203:
case 941287179:
case -1186079845:
case -1985150258:
case -1127021384:
case -109201286:
case 1982688246:
case -661030418:
case 1301046174:
case -1586170317:
case 393059668:
case 23796958:
case -1077156170:
case 1780666425:
case -2043695058:
case -1922554349:
case 1287308202:
case 691372038:
case 1480707108:
case 1512499951:
case 562283735:
case -154732333:
case -1362660491:
case 645708827:
case 767907967:
case -1970151306:
case 718859568:
case -1955564771:
case 892388724:
case -1426920838:
case 1349151477:
case 1620609399:
case 1961641934:
case 210955503:
case -59668082:
case 1736933716:
case -1468524125:
case 111573502:
case 1525644423:
case 968073639:
case 1577781788:
case -934465332:
case -1194253122:
case -212607085:
case -815546555:
case 1048226110:
case 569170531:
case -856006867:
case 848090538:
case -47546905:
case -293060240:
case 463142405:
case 1550217370:
case -101307780:
case -664597565:
case 599804707:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case 1052472386:
case -2130199671:
case -1227654538:
case 1864522104:
case 215608230:
case -876012764:
case -722894325:
case 1407278493:
case -1579394494:
case -27443911:
case 1179783540:
case 923419301:
case -308826175:
case 603298940:
case -12619854:
case -311112675:
case 870439158:
case -974288740:
case -4138654:
case -1180954122:
case -1918051016:
case 844330594:
case 1934825517:
case 1852024236:
case 2099238988:
case 1952643559:
case -1172900789:
case -2015399333:
case -1574795641:
case -961034881:
case 1135468152:
case 1265272476:
case -634726636:
case 696556762:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
func_62(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}
switch (iParam0){
case -1342064661:
case -1693570755:
case 1868043300:
case -697248883:
case -1295545795:
case 914079366:
case 395122350:
case -331981076:
case 1671535231:
case -1896606724:
case -1291433573:
case 538631715:
case 133782822:
case 2081885153:
case -1314365345:
case 1322977732:
case 396623013:
case 1981664462:
case -1921250821:
case -1370731547:
case 1683798242:
case -910968288:
case -168319378:
case 1637817605:
case 830018386:
case 1051883823:
case -2013760296:
case -1033889004:
case -2081984382:
case 1089562091:
if(iParam1 > 0 || Global_262145.f_28582){
func_62(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case 1240683675:
case 1241904665:
case -1100963799:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case 1057653594:
case 1810506918:
case 451427308:
case 824622151:
case 1253978276:
case -1576080766:
case 1508411869:
case 1428501742:
case -1918967151:
case 1261538664:
case 1180397655:
case 1414674366:
case 261460130:
case -2027658376:
case -2017925037:
case 1668610896:
case -2032529561:
case -1224479447:
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case 1220095570:
case 2050320631:
case 592672421:
case 1775876058:
case -842062976:
case -518651910:
case 14658715:
case -604793592:
case -823426392:
case -1401862980:
case -173354274:
case 409533976:
case -1472522337:
case 542574408:
case -1261799063:
case 784631574:
case -2027479156:
case -837690641:
case -1029672338:
case -1503749970:
case -1843409092:
case 1669058563:
case 2102747615:
case 2030771998:
case 1708747007:
case 645293860:
case -818859193:
case 300796227:
case -1999832346:
case 1058055395:
case -321151125:
case 2078731875:
case 1280785534:
case -1878824774:
case 247992227:
case -229237358:
case -1123183389:
case 1814197076:
case 713955548:
case -2026544524:
case -719580138:
case -163417439:
case -550417574:
case 208223429:
case -1433071892:
case 761999406:
case -1101941763:
case 1748245957:
case 1036772696:
case -1384648535:
case -800037808:
case -695852120:
case 77355315:
case 2097889166:
case 1707592130:
case 1628412596:
case 883337077:
case -1274418755:
case -1853979468:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
case 1633116913:
case 668586600:
case 15168061:
case 590289134:
case 99792878:
case 1866258778:
case -178394060:
case 409592287:
case 593836803:
case 1973036520:
case 2063456538:
case -728008329:
case 119239868:
case -456458353:
case 1900048468:
case 333526332:
case -2091351051:
case -373571001:
case -367430800:
case 1823444356:
func_62(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_62(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_73()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_31()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536678=1;
return 0;
}
if(Global_2695872){
if(iParam3==1067618600 || iParam3==-1303831698){
Global_4536679=1;
return 0;
}}}
bVar3=false;
iVar2=0;
while (iVar2 < 15){
if(Global_4535172[iVar2 /*85*/].f_66.f_2==0){
bVar3=true;
}
iVar2++;
}
if(!bVar3){
return 0;
}
*uParam0=15;
iVar4=2147483647;
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6)){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4)){
*uParam0=func_69(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
if(iVar1 && !bVar0){
}
if(bVar0){
if(*uParam0 !=-1){
Global_4535172[*uParam0 /*85*/].f_66.f_8=1;
Global_4535172[*uParam0 /*85*/].f_66.f_12=1;
}}
Global_4536659=1;
return 1;
}}else{
if(iParam7 & 2 !=0){
Global_4536677=1;
Global_4536680=iParam4;
Global_4536682=iParam3;
Global_4536683=1;
Global_4536681=iParam5;
}
if(iParam7 & 8 !=0){
Global_4536680=iParam4;
Global_4536682=iParam3;
Global_4536683=1;
Global_4536681=iParam5;
}
bVar5=false;
if(bVar5){
func_68(1, iParam4);
Global_4536677=0;
}
if(iParam7 & 4 !=0){
func_63(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_63(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_64(iParam0);
}}


void func_64(int iParam0){
bool bVar0;
bVar0=false;
if(!func_73()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_67(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_65(&(Global_4535172[iParam0 /*85*/]));
}}


void func_65(var uParam0){
uParam0->f_66=0;
uParam0->f_66=2147483647;
uParam0->f_66.f_1=0;
uParam0->f_66.f_2=0;
uParam0->f_66.f_3=-1593119440;
uParam0->f_66.f_4=-2085313189;
uParam0->f_66.f_5=0;
uParam0->f_66.f_6=1227573907;
uParam0->f_66.f_7=-1161833819;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_13=0;
uParam0->f_2=0;
func_66(&(uParam0->f_14));
func_66(&(uParam0->f_14.f_13));
StringCopy(&(uParam0->f_14.f_26), "", 32);
StringCopy(&(uParam0->f_14.f_34), "", 24);
StringCopy(&(uParam0->f_14.f_40), "", 16);
StringCopy(&(uParam0->f_14.f_44), "", 32);
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_66.f_8=0;
uParam0->f_66.f_9=0;
uParam0->f_66.f_10=0;
uParam0->f_66.f_11=0;
uParam0->f_66.f_13=0;
uParam0->f_66.f_12=0;
uParam0->f_66.f_14=0;
uParam0->f_66.f_15=0;
uParam0->f_66.f_16=0;
uParam0->f_66.f_18=0;
}


void func_66(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=0;
}

int func_67(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_68(int iParam0, var uParam1){
Global_2697092=uParam1;
Global_2697091=iParam0;
}

int func_69(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_73()){
iParam0=iVar0 + 900;
}
Global_4535172[iVar0 /*85*/].f_66.f_2=1;
Global_4535172[iVar0 /*85*/].f_66.f_1=uParam5;
Global_4535172[iVar0 /*85*/].f_66.f_3=iParam1;
Global_4535172[iVar0 /*85*/].f_66.f_4=uParam2;
Global_4535172[iVar0 /*85*/].f_66.f_7=uParam3;
Global_4535172[iVar0 /*85*/].f_66.f_5=0;
Global_4535172[iVar0 /*85*/].f_66=iParam0;
Global_4535172[iVar0 /*85*/].f_66.f_6=iParam4;
Global_4535172[iVar0 /*85*/].f_66.f_11=uParam8;
Global_4535172[iVar0 /*85*/].f_66.f_10=uParam7;
Global_4535172[iVar0 /*85*/].f_66.f_13=iParam9;
Global_4535172[iVar0 /*85*/].f_66.f_12=0;
Global_4535172[iVar0 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
Global_4535172[iVar0 /*85*/].f_66.f_18=0;
Global_4536659=0;
if(bParam6){
Global_4535172[iVar0 /*85*/].f_66.f_5=1;
}
if(iParam1==-1135378931 && iParam10){
func_70(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_70(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
struct<3> Var0;
int iVar1;
if(iParam19 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=-710178565;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam19;
iVar1=func_72(Var0.f_1);
if((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260){
return;
}
if(!iVar1==0){
func_71();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_71(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__72(bool bParam0){
var uVar0;
if(func_32(bParam0)){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_73(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_74(int iParam0, int iParam1, int iParam2, float fParam3){
func_75(iParam0, iParam1, iParam2, fParam3);
}


void func_75(int iParam0, int iParam1, int iParam2, float fParam3){
func_76(iParam0, iParam1, iParam2, fParam3);
}


void func_76(int iParam0, int iParam1, int iParam2, float fParam3){
int iVar0;
int iVar1;
float fVar2;
if(iParam1 < 1){
iParam1=1;
}
iVar0=(iParam0 * iParam1);
fParam3=0f;
if(iVar0 > 0){
fVar2=(100f - fParam3);
iVar1=floor((IntToFloat(iVar0) * (fVar2 / 100f)));
}else{
iVar1=iVar0;
}
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_4=iVar1;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_3=(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_3 + iVar1);
if(iParam2==1){
func_77(iVar1, 0);
}}


void func_77(int iParam0, bool bParam1){
if(bParam1){}
iParam0=iParam0;
}


void func_78(var uParam0, int iParam1){
int iVar0;
if(*uParam0 > 0){
if(!func_141()){
if(func_140(0)){
if(!func_136(0)){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_135())){
if(func_134()==100){
iVar0=*uParam0;
*uParam0=0;
}
else{
iVar0=((*uParam0 / 100) * func_134());
*uParam0=(*uParam0 - iVar0);
}
func_132(&iVar0, 0);
if(iParam1==1){
func_83("GB_BCUT_TICK1", func_135(), iVar0, 0, 0, 1);
}
func_82(20);
func_79(func_135(), iVar0, 1);
}}}}}}


void func_79(bool bParam0, int iParam1, int iParam2){
struct<8> Var0;
if(func_246(bParam0, 0, 1)){
Var0.f_0=-1141119736;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam2;
Var0.f_5=func_81(bParam0);
func_80(&(Var0.f_6), &(Var0.f_7));
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_72(bParam0));
}}


void func_80(var uParam0, var uParam1){
*uParam0=Global_1924276.f_9;
*uParam1=Global_1924276.f_10;
}


var func__81(int iParam0){
return Global_1895156[iParam0 /*609*/].f_511;
}


void func_82(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), bVar1);
}

int func_83(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
struct<8> Var1;
iVar0=-1;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5){
if(!bParam4){
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
}else{
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_90(iParam1, -2, 1, 0, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_88(&Var1));
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_84(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_84(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_87() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_29(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_85(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944768.f_5[iVar0 /*53*/]=iParam0;
Global_1944768.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944768.f_5[iVar0 /*53*/].f_2[0]=uParam4;
Global_1944768.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944768.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944768.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944768.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_85(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944768 - 1)){
if(iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1){
func_86(iVar0);
return iVar0;
}
iVar0++;
}
Global_1944768++;
if(Global_1944768 > 5){
Global_1944768=5;
return Global_1944768;
}
return (Global_1944768 - 1);
}


void func_86(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944768.f_5[iVar0 /*53*/]={
Global_1944768.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_87(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


var func__88(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_89(&cVar0);
}


var func__89(char[4] cParam0){
return cParam0;
}

int func_90(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(!func_32(iParam0)){
return 1;
}
if(func_130(iParam0) && !bParam4){
if(bParam2){
return 0;
}else{
return 1;
}}
if(iParam1==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
if(iVar0 > -1 && iVar0 < 4){
if(Global_4718592.f_112316[iVar0] !=-1){
iParam1=iVar0;
}}}
if(((func_130(PLAYER::PLAYER_ID()) || (func_129() && func_128())) && !MISC::IS_BIT_SET(Global_2794162.f_4697, 31)) && !bParam4){
uVar1=func_127();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_246(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_125(iParam1, iParam0, 0);
}else{
return func_105(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_105(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_125(iParam1, iParam0, 0);
}else{
return func_91(0, -1, 0);
}}else{
return func_91(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_125(iParam1, iParam0, 0);
}else{
return func_105(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_105(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_91(bool bParam0, int iParam1, bool bParam2){
return func_92(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_92(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
if((func_104() || (func_103() && func_101())) && Global_1665516.f_1){
if(bParam1){
return func_100(iParam2, iVar0);
}else{
return func_100(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_97(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_96(1);
}else{
return func_96(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_93(iVar0, iParam2, 1, 4);
}else{
return func_93(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_96(1);
}
return func_96(0);
}

int func_93(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_95(iParam0, iParam1, iParam3);
if(func_94(Global_4718592.f_117591, 1)){
if(iVar0==1){
iVar0=0;
}}
if(bParam2){
switch (iVar0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
case 3:
return 31;
case 4:
return 32;
case 5:
return 33;
case 6:
return 34;
case 7:
return 35;
case 8:
return 36;
case 9:
return 37;
case 10:
return 38;
case 11:
return 39;
case 12:
return 40;
case 13:
return 41;
case 14:
return 42;
case 15:
return 43;
default:}}else{
switch (iVar0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
}
default:
}
return 28;
}

int func_94(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(Global_4718592.f_171044==65){
return 1;
}}
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 <=6){
if(iParam0==Global_262145.f_9658[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}

int func_95(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_97(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_96(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_97(int iParam0, int iParam1, int iParam2, int iParam3){
bool bVar0;
bool bVar1;
if(iParam2==1){
if(iParam0==iParam1){
return 1;
}
return 0;
}
if((iParam0 > -1 && iParam1 > -1) && iParam0==iParam1){
return 1;
}
if(((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4){
bVar0=Global_1058071.f_14[iParam0];
if(iParam3 !=-1){
bVar0=iParam3;
}
if(bVar0 < 17 && bVar0 > -1){
if(MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, bVar0)){
bVar1=Global_1058071.f_14[iParam1];
if(bVar1 < 17 && bVar1 > -1){
switch (iParam0){
case 0:
if(!func_98(iParam0, bVar0, iParam1, bVar1) || !func_98(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_98(iParam0, bVar0, iParam1, bVar1) || !func_98(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_98(iParam0, bVar0, iParam1, bVar1) || !func_98(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_98(iParam0, bVar0, iParam1, bVar1) || !func_98(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (12 + iParam1));
}
break;
}}}}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 0);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 1);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 2);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 3);
default:
}
break;
case 1:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 4);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 5);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 6);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 7);
default:
}
break;
case 2:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 8);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 9);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 10);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 11);
default:
}
break;
case 3:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 12);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 13);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 14);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1765, 15);
default:
}
break;
}
return 0;
}

int func_98(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==iParam2){
return 1;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, bParam1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, bParam3)){
return 0;
}
iVar0=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar4=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}
iVar5=0;
iVar5=0;
while (iVar5 <=31){
iVar1=iVar5;
if(((!func_246(iVar1, 1, 1) || func_29(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_99(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
uVar2=PLAYER::GET_PLAYER_PED(iVar1);
if(PED::IS_PED_INJURED(uVar2)){
}else{
iVar3=ENTITY::GET_ENTITY_MODEL(iVar2);
if(iVar4==joaat("mp_f_freemode_01") || iVar4==joaat("mp_m_freemode_01")){
if(iVar3==joaat("mp_f_freemode_01") || iVar3==joaat("mp_m_freemode_01")){
return 1;
}else{
return 0;
}}elseif(iVar4 !=iVar3){
return 0;
}}}
iVar5++;
}
return iVar0;
}


var func__99(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

int func_100(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_95(iParam1, iParam0, 4);
}
switch (iParam0){
case 0:
return 15;
case 1:
return 21;
case 2:
return 24;
case 3:
return 18;
default:
}
return 28;
}

int func_101(){
if(func_102()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_175236, 4);
}


bool func_102(){
return MISC::IS_BIT_SET(Global_4718592.f_164769, 12);
}


bool func_103(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_175236, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_104(){
if(func_102() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_105(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
}else{
iVar0=iParam2;
}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==148){
bVar1=true;
}
iVar2=iParam0;
if(iVar2 > -1){
if(Global_1853988[iVar2 /*867*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_113()){
iVar3=func_110(iParam0);
if(!iVar3==-1){
return func_108(iVar3);
}}
if((func_107(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_97(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_96(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_106(1);
}else{
return func_92(iParam1, 1, iVar0, bParam4);
}}elseif((Global_1836600 || Global_1836590) || Global_1853988[iParam0 /*867*/]==0){
if(iParam0==iParam1 || (Global_1836600==1 && Global_1836610==0)){
return func_96(1);
}else{
return func_92(iParam1, 1, iVar0, bParam4);
}}
if(Global_1836594 && Global_1836080.f_14==iParam0){
return 28;
}}
iVar4=func_110(iParam0);
if(!iVar4==-1){
return func_108(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_106(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_107(int iParam0, int iParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(iParam1)==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(iParam0)==PLAYER::GET_PLAYER_TEAM(iParam1);
}else{
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && iParam2==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(iParam0)==iParam2;
}
return PLAYER::GET_PLAYER_TEAM(iParam0)==iParam2;
}

int func_108(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_109(iParam0);
switch (iVar0){
case 0:
return 192;
case 1:
return 193;
case 2:
return 194;
case 3:
return 195;
case 4:
return 196;
case 5:
return 197;
case 6:
return 198;
case 7:
return 199;
case 8:
return 200;
case 9:
return 201;
case 10:
return 202;
case 11:
return 203;
case 12:
return 204;
case 13:
return 205;
case 14:
return 206;
}
default:
}
return 1;
}


var func__109(int iParam0){
return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_110(int iParam0){
if(func_32(iParam0)){
if(func_111(iParam0, 1)){
return Global_2648711.f_818.f_11[func_39(iParam0)];
}}
return -1;
}


bool func_111(int iParam0, bool bParam1){
if(!func_32(iParam0)){
return 0;
}
if(!bParam1){
if(func_112(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_5();
}

int func_112(int iParam0){
if(func_32(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_113(){
if(((((((func_124() || func_123()) || func_35()) || func_122()) || func_121()) || func_119()) || func_117()) || func_114()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_114(){
return func_115(Global_4718592.f_117591);
}

int func_115(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_116(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_116(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33923[iParam0];
}
return -1;
}

int func_117(){
return func_118(Global_4718592.f_117591);
}

int func_118(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_262145.f_31922[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_119(){
return func_120(Global_4718592.f_117591);
}

int func_120(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31258[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


var func__121(){
return Global_2683883.f_24;
}


var func__122(){
return Global_2683883.f_21;
}


var func__123(){
return Global_2683883.f_18;
}


var func__124(){
return Global_2683883.f_17;
}

int func_125(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058071.f_14[iParam0];
if(func_113()){
iVar2=func_110(iParam1);
if(!iVar2==-1){
return func_108(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_5()){
if(Global_4718592.f_112316[iParam0] !=-1 && Global_4718592.f_112316[iParam0] <=4){
if(Global_4718592.f_112316[iParam0]==0){
iVar0=15;
}elseif(Global_4718592.f_112316[iParam0]==1){
iVar0=18;
}elseif(Global_4718592.f_112316[iParam0]==2){
iVar0=24;
}elseif(Global_4718592.f_112316[iParam0]==4){
if(MISC::IS_BIT_SET(Global_4718592.f_15, 29)){
iVar0=21;
}else{
iVar0=6;
}}else{
iVar0=Global_4718592.f_112316[iParam0];
}}else{
iVar0=func_92(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_126(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_97(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_106(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_126(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=Global_4718592.f_171203;
break;
case 1:
iVar0=Global_4718592.f_171204;
break;
case 2:
iVar0=Global_4718592.f_171205;
break;
case 3:
iVar0=Global_4718592.f_171206;
break;
}
switch (iVar0){
case 0:
return 15;
case 1:
return 21;
case 2:
return 24;
case 3:
return 18;
case 4:
return 6;
case 5:
return 9;
case 6:
return 3;
case 7:
return 1;
case 8:
return 12;
case 9:
return 2;
default:
}
return 2;
}


var func__127(){
return Global_2621446.f_2;
}


var func__128(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__129(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_130(int iParam0){
if(func_29(iParam0, 0)){
return 1;
}
if(func_131()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_131(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


void func_132(int iParam0, bool bParam1){
int iVar0;
int iVar1;
if(bParam1){
iVar1=func_133(1);
}else{
iVar1=func_133(0);
}
iVar0=((*iParam0 / 100) * iVar1);
*iParam0=(*iParam0 - iVar0);
}

int func_133(bool bParam0){
if(bParam0){
return round((0.05f * 100f));
}
return Global_262145.f_13038;
}

int func_134(){
return Global_262145.f_13037;
}


bool func_135(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}


bool func_136(bool bParam0){
return func_137(PLAYER::PLAYER_ID(), bParam0);
}

int func_137(int iParam0, bool bParam1){
return func_138(iParam0, bParam1, 1);
}

int func_138(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_32(iParam0)){
return 0;
}
if(!bParam1){
if(func_139(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_5() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_139(int iParam0, int iParam1){
if(func_32(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}


bool func_140(bool bParam0){
return func_111(PLAYER::PLAYER_ID(), bParam0);
}


bool func_141(){
return func_112(PLAYER::PLAYER_ID());
}


void func_142(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4){
func_143(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}


void func_143(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5){
var uVar0;
bool bVar1;
uVar0=uParam1;
bVar1=false;
func_144(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}


void func_144(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15){
return;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31){
return;
}}
iVar0=func_153();
if(iVar0==-1){
return;
}
func_152(iVar0);
func_151(iVar0, uParam0);
func_150(iVar0, uParam2, bParam3);
func_149(iVar0, sParam1);
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6==-99){
return;
}
func_148(iVar0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
func_146(iVar0, sParam4, bParam5);
}
if(!iParam6==-99){
func_145(iVar0, iParam6);
}}


void func_145(int iParam0, int iParam1){
Global_1649067.f_59[iParam0 /*16*/].f_15=iParam1;
}


void func_146(int iParam0, char* sParam1, bool bParam2){
StringCopy(&(Global_1649067.f_59[iParam0 /*16*/].f_7), sParam1, 32);
if(!bParam2){
return;
}
func_147(iParam0);
}


void func_147(int iParam0){
MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 5);
}


void func_148(int iParam0){
MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 4);
}


void func_149(int iParam0, char* sParam1){
struct<4> Var0;
StringCopy(&Var0, sParam1, 16);
Global_1649067.f_59[iParam0 /*16*/].f_3={
Var0 
};
}


void func_150(int iParam0, var uParam1, bool bParam2){
Global_1649067.f_59[iParam0 /*16*/].f_2=uParam1;
if(bParam2){
MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 2);
MISC::CLEAR_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 3);
}else{
MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 3);
MISC::CLEAR_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 2);
}}


void func_151(int iParam0, var uParam1){
Global_1649067.f_59[iParam0 /*16*/].f_1=uParam1;
}


void func_152(int iParam0){
MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), false);
}

int func_153(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 8){
if(!func_154(iVar0)){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_154(int iParam0){
return MISC::IS_BIT_SET(Global_1649067.f_59[iParam0 /*16*/], 0);
}

int func_155(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_156(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10){
int iVar0;
var uVar1;
iVar0=func_166(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
uVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_162(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
}}}else{
func_157(iParam1, iVar0, sParam8, uParam10);
}
return iVar0;
}


void func_157(int iParam0, int iParam1, char* sParam2, var uParam3){
struct<3> Var0;
Var0={
func_160(iParam0, 1) 
};
if(iParam0==func_159(PLAYER::PLAYER_PED_ID())){
func_158(1);
}
func_162(Var0, iParam1, 0, sParam2, uParam3);
}


void func_158(int iParam0){
Global_2672524.f_1682=iParam0;
}

int func_159(var uParam0){
return uParam0;
}


Vector3 func__160(int iParam0, bool bParam1){
struct<3> Var0;
struct<3> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
if(CAM::IS_GAMEPLAY_CAM_RENDERING()){
Var1={
CAM::GET_GAMEPLAY_CAM_ROT(2) 
};
}
if(iParam0==func_161(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
fVar2=0f;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
fVar2=ENTITY::GET_ENTITY_HEADING(iParam0);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
fVar2=Var1.f_2;
}}
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
if(bParam1){
fVar5=(Var4.f_2 + 0.18f);
}else{
fVar5=(Var3.f_2 + 0.18f);
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) 
};
return Var0;
}

int func_161(var uParam0){
return uParam0;
}


void func_162(struct<3> Param0, int iParam1, int iParam2, char* sParam3, var uParam4){
int iVar0;
int iVar1;
if(iParam1 !=0){
iVar1=-1;
iVar0=0;
while (iVar0 < 20){
if(Global_2672524.f_1081[iVar0 /*30*/].f_6==0 || Global_2672524.f_1081[iVar0 /*30*/].f_6==7){
iVar1=iVar0;
iVar0=20;
}
iVar0++;
}
if(iVar1 !=-1){
Global_2672524.f_1081[iVar1 /*30*/]={
Param0 
};
Global_2672524.f_1081[iVar1 /*30*/].f_6=1;
Global_2672524.f_1081[iVar1 /*30*/].f_4=func_165(Global_2672524.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672524.f_1081[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672524.f_1081[iVar1 /*30*/].f_3=iParam1;
Global_2672524.f_1081[iVar1 /*30*/].f_8=iParam2;
Global_2672524.f_1081[iVar1 /*30*/].f_9=func_164();
Global_2672524.f_1081[iVar1 /*30*/].f_10=func_163();
StringCopy(&(Global_2672524.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
Global_2672524.f_1081[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam4);
}}}

int func_163(){
if(Global_2672524.f_1682){
Global_2672524.f_1682=0;
return 1;
}
Global_2672524.f_1682=0;
return 0;
}


var func__164(){
var uVar0;
uVar0=Global_2672524.f_1684;
Global_2672524.f_1684=1;
return uVar0;
}


float func_165(struct<3> Param0, var uParam1, var uParam2){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
if(fVar0 < 5f){
*uParam1=0.402f;
*uParam2=0.476f;
return 0f;
}
if(fVar0 > 20f){
*uParam1=0.212f;
*uParam2=0.286f;
return 1f;
}
fVar1=(1f - ((fVar0 - 5f) / (20f - 5f)));
fVar2=(fVar1 * (0.402f - 0.212f));
fVar3=(fVar1 * (0.476f - 0.286f));
*uParam1=(fVar2 + 0.212f);
*uParam2=(fVar3 + 0.286f);
return fVar1;
}


var func__166(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_167(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_167(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_196();
if(func_195(uParam2)){}
if(func_194()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_192(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_191(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_189(0, &iVar1);
break;
case 3:
func_189(1, &iVar1);
break;
case 1:
func_187(&iVar1);
break;
}}
if(iVar1 > Global_1962798){
return 0;
}
if(iParam1==0){
if(iVar1 > iVar2){
if(iParam0==1){
iVar1=iVar2;
}
if(iParam0==2 || iParam0==3){
iVar1=iVar2;
}}}
if(bParam7){
func_209(1165, iVar1, -1);
if(iParam1==0){
func_175((func_186(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 !=-1){
func_209(1166, iVar1, -1);
}
func_172(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_168((func_170(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_168((func_170(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_168(int iParam0){
if(func_194()){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5=iParam0;
func_169(joaat("mpply_globalxp"), iParam0);
}}


void func_169(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}}

int func_170(int iParam0){
if(iParam0 > -1){
if(func_246(iParam0, 0, 1)){
if(iParam0==PLAYER::PLAYER_ID()){
return func_171(joaat("mpply_globalxp"));
}else{
return Global_1853988[iParam0 /*867*/].f_205.f_5;
}}else{
return func_171(joaat("mpply_globalxp"));
}}
return 0;
}

int func_171(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_172(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_40(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_173(func_174(&Var0));
if(iVar1==0){
func_169(joaat("mpply_crew_local_xp_0"), (func_171(joaat("mpply_crew_local_xp_0")) + iParam0));
}elseif(iVar1==1){
func_169(joaat("mpply_crew_local_xp_1"), (func_171(joaat("mpply_crew_local_xp_1")) + iParam0));
}elseif(iVar1==2){
func_169(joaat("mpply_crew_local_xp_2"), (func_171(joaat("mpply_crew_local_xp_2")) + iParam0));
}elseif(iVar1==3){
func_169(joaat("mpply_crew_local_xp_3"), (func_171(joaat("mpply_crew_local_xp_3")) + iParam0));
}elseif(iVar1==4){
func_169(joaat("mpply_crew_local_xp_4"), (func_171(joaat("mpply_crew_local_xp_4")) + iParam0));
}}}}

int func_173(int iParam0){
if(iParam0==func_171(joaat("mpply_crew_0_id"))){
return 0;
}elseif(iParam0==func_171(joaat("mpply_crew_1_id"))){
return 1;
}elseif(iParam0==func_171(joaat("mpply_crew_2_id"))){
return 2;
}elseif(iParam0==func_171(joaat("mpply_crew_3_id"))){
return 3;
}elseif(iParam0==func_171(joaat("mpply_crew_4_id"))){
return 4;
}else{
return -1;
}
return -1;
}

int func_174(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694518;
}}
return Global_2694518;
}


void func_175(int iParam0, int iParam1, int iParam2){
if(func_194()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10242==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < func_185(640, -1)){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==func_185(640, -1)){
return;
}}}
if(Global_262145.f_10241==0){
if(iParam0==0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
if(iParam2==0){
return;
}}}
if(Global_262145.f_10241==0){
if(iParam0 < 0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
return;
}}
if(func_184(PLAYER::PLAYER_ID())){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1=iParam0;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6=func_181(iParam0, 1);
}
func_179(640, iParam0, -1, 1);
func_179(641, func_181(iParam0, 1), -1, 1);
func_176(-1109644434, 7, 0);
}}


void func_176(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_178(iParam1, iParam2)){
iVar0=func_177();
Global_2694470[iVar0]=iParam1;
Global_2694481[iVar0]=iParam0;
}}

int func_177(){
int iVar0;
int iVar1;
iVar0=9;
iVar1=0;
while (iVar1 <=9){
if(Global_2694470[iVar1]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_178(int iParam0, var uParam1){
if(Global_1575051){
return 0;
}
if(iParam0==22){
return 1;
}
if((((((((uParam1 || !Global_1575063) || iParam0==3) || iParam0==10) || iParam0==11) || iParam0==27) || iParam0==28) || iParam0==29) || iParam0==30){
return 1;
}else{
return 0;
}
return 1;
}


void func_179(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_180(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


var func__180(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_58(uParam1));
}

int func_181(int iParam0, bool bParam1){
if(bParam1){}
return func_182(iParam0, 0);
}

int func_182(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
if(iParam1==0){}
iVar1=8000;
iVar2=0;
iVar3=((iVar1 - iVar2) / 2);
iVar0=0;
while (iVar0 <=100){
if(iVar1==iVar2){
iVar0=8000;
if(iVar3==0){
iVar3=1;
}
return iVar3;
}
if(func_183(iVar3)==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(func_183(iVar3) < iParam0){
if(iVar2==iVar3){
iVar2++;
}else{
iVar2=iVar3;
}}elseif(iVar1==iVar3){
iVar1=(iVar1 - 1);
}else{
iVar1=iVar3;
}
fVar4=(((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
iVar3=round(fVar4);
iVar0++;
}
return 8000;
}

int func_183(int iParam0){
int iVar0;
int iVar1;
if(iParam0 < 100){
switch (iParam0){
case 1:
return 0;
case 2:
return 800;
case 3:
return 2100;
case 4:
return 3800;
case 5:
return 6100;
case 6:
return 9500;
case 7:
return 12500;
case 8:
return 16000;
case 9:
return 19800;
case 10:
return 24000;
case 11:
return 28500;
case 12:
return 33400;
case 13:
return 38700;
case 14:
return 44200;
case 15:
return 50200;
case 16:
return 56400;
case 17:
return 63000;
case 18:
return 69900;
case 19:
return 77100;
case 20:
return 84700;
case 21:
return 92500;
case 22:
return 100700;
case 23:
return 109200;
case 24:
return 118000;
case 25:
return 127100;
case 26:
return 136500;
case 27:
return 146200;
case 28:
return 156200;
case 29:
return 166500;
case 30:
return 177100;
case 31:
return 188000;
case 32:
return 199200;
case 33:
return 210700;
case 34:
return 222400;
case 35:
return 234500;
case 36:
return 246800;
case 37:
return 259400;
case 38:
return 272300;
case 39:
return 285500;
case 40:
return 299000;
case 41:
return 312700;
case 42:
return 326800;
case 43:
return 341000;
case 44:
return 355600;
case 45:
return 370500;
case 46:
return 385600;
case 47:
return 401000;
case 48:
return 416600;
case 49:
return 432600;
case 50:
return 448800;
case 51:
return 465200;
case 52:
return 482000;
case 53:
return 499000;
case 54:
return 516300;
case 55:
return 533800;
case 56:
return 551600;
case 57:
return 569600;
case 58:
return 588000;
case 59:
return 606500;
case 60:
return 625400;
case 61:
return 644500;
case 62:
return joaat("pyro_sub_bass_synth");
case 63:
return 683400;
case 64:
return 703300;
case 65:
return 723400;
case 66:
return 743800;
case 67:
return 764500;
case 68:
return 785400;
case 69:
return 806500;
case 70:
return 827900;
case 71:
return 849600;
case 72:
return 871500;
case 73:
return 893600;
case 74:
return 916000;
case 75:
return 938700;
case 76:
return 961600;
case 77:
return 984700;
case 78:
return 1008100;
case 79:
return 1031800;
case 80:
return 1055700;
case 81:
return 1079800;
case 82:
return 1104200;
case 83:
return 1128800;
case 84:
return 1153700;
case 85:
return 1178800;
case 86:
return 1204200;
case 87:
return 1229800;
case 88:
return 1255600;
case 89:
return 1281700;
case 90:
return 1308100;
case 91:
return 1334600;
case 92:
return 1361400;
case 93:
return 1388500;
case 94:
return 1415800;
case 95:
return 1443300;
case 96:
return 1471100;
case 97:
return 1499100;
case 98:
return 1527300;
case 99:
return 1555800;
default:}}else{
iVar0=(iParam0 - 99);
iVar1=((iVar0 * iVar0 + 1) / 2);
return ((1555800 + iVar0 * 28500) + iVar1 * 50);
}
return 1555800;
}

int func_184(int iParam0){
if(!func_32(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_2672524.f_1, iParam0);
}

int func_185(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_180(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_186(int iParam0){
if(Global_1574632.f_9==0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return func_185(640, -1);
}elseif(func_184(iParam0)){
return Global_1853988[iParam0 /*867*/].f_205.f_1;
}}}else{
return func_185(640, -1);
}
return 0;
}


void func_187(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar4=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)){
iVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
if(PLAYER::GET_PLAYER_TEAM(iVar5) !=-1){
if(PLAYER::GET_PLAYER_TEAM(iVar5)==iVar1 || func_97(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1)){
iVar2++;
if(iVar5 !=PLAYER::PLAYER_ID()){
if(func_41(PLAYER::PLAYER_ID(), iVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=round((func_188(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_188(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_188(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}


void func_189(bool bParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(bParam0){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar3=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3)){
iVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(func_246(iVar4, 0, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_41(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
iVar4=iVar0;
if(func_246(iVar4, 1, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
if(func_190(PLAYER::PLAYER_ID(), iVar4) <=20f){
iVar1++;
if(func_41(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_188(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_188(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_190(int iParam0, int iParam1){
return vdist(func_42(iParam0), func_42(iParam1));
return 0f;
}

int func_191(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_188(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_192(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_186(PLAYER::PLAYER_ID())){
iParam0=-func_186(PLAYER::PLAYER_ID());
}}
if(func_193(8000, 0, 0) > 0){
if(func_193(8000, 0, 0) < (iParam0 + func_186(PLAYER::PLAYER_ID()))){
iParam0=(func_193(8000, 0, 0) - func_186(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_193(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return func_183(iParam0);
}

int func_194(){
return 1;
}

int func_195(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}

int func_196(){
int iVar0;
if(func_204(PLAYER::PLAYER_ID()) || func_203(PLAYER::PLAYER_ID())){
if(Global_262145.f_10274 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10274;
}}elseif(func_201() || func_197(PLAYER::PLAYER_ID())){
if(Global_262145.f_23463 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_23463;
}}elseif(Global_262145.f_7178 > 36000){
iVar0=36000;
}else{
iVar0=Global_262145.f_7178;
}
return iVar0;
}

int func_197(int iParam0){
return func_198(func_199(iParam0));
}

int func_198(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_199(int iParam0){
if(func_32(iParam0)){
if(func_200(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_200(int iParam0, int iParam1){
if(func_32(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_201(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_35();
}
return func_202(Global_4718592.f_117591);
}

int func_202(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 16){
if(Global_262145.f_5043[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_203(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==2;
}


bool func_204(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==7;
}


void func_205(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_208(iParam0, func_58(iParam2));
iVar0=(iVar0 + iParam1);
func_206(iParam0, iVar0, iParam2);
}


void func_206(var uParam0, int iParam1, var uParam2){
int iVar0;
iVar0=func_207(uParam0, uParam2);
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}


var func__207(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(8, uParam0, func_58(uParam1));
}

int func_208(var uParam0, var uParam1){
var uVar0;
var uVar1;
uVar0=func_207(uParam0, uParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_209(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_185(iParam0, func_58(iParam2));
iVar0=(iVar0 + iParam1);
func_179(iParam0, iVar0, iParam2, 1);
}


void func_210(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_211(){
return 1;
}


bool func_212(int iParam0){
return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644651, NETWORK::GET_NETWORK_TIME())) > iParam0;
}


void func_213(){
if(HUD::DOES_BLIP_EXIST(uLocal_92)){
if(func_211() || func_214()){
HUD::SET_BLIP_DISPLAY(uLocal_92, 0);
}else{
HUD::SET_BLIP_DISPLAY(uLocal_92, 4);
}}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_86.f_2)){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_86.f_2), 0)){
uLocal_92=HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_86.f_2));
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_86.f_10)){
HUD::SET_BLIP_SPRITE(uLocal_92, 225);
}else{
HUD::SET_BLIP_SPRITE(uLocal_92, 348);
}
HUD::SET_BLIP_COLOUR(uLocal_92, 1);
HUD::SET_BLIP_FLASH_TIMER(uLocal_92, 7000);
HUD::SET_BLIP_PRIORITY(uLocal_92, 6);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_92, "DSV_BLIP");
if(func_211()){
HUD::SET_BLIP_DISPLAY(uLocal_92, 0);
}}}}


var func__214(){
return Global_2646835.f_1869;
}


void func_215(){
if(Local_86.f_12==2){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_86.f_2)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_86.f_2), 0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_90);
TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_86.f_2), Local_86.f_20, 7f, iLocal_93, 3f);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_86.f_24, 1f, -1, 1048576000, 0, Local_86.f_27);
TASK::CLOSE_SEQUENCE_TASK(uLocal_90);
}}}}

int func_216(){
return Local_86.f_0;
}

int func_217(int iParam0){
return Local_88[iParam0 /*3*/];
}


bool func_218(int iParam0){
return !func_219(iParam0);
}

int func_219(int iParam0){
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
if(func_221(PLAYER::PLAYER_ID(), 7)){
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
if(func_221(PLAYER::PLAYER_ID(), 7)){
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
if(func_221(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 15:
if(func_220(4)){
return 0;
}
if(func_221(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 17:
if(func_220(4)){
return 0;
}
if(func_221(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 16:
if(func_220(4)){
return 0;
}
if(func_221(PLAYER::PLAYER_ID(), 7)){
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
if(func_220(4)){
return 0;
}
if(func_221(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 19:
if(func_220(4)){
return 0;
}
if(func_221(PLAYER::PLAYER_ID(), 7)){
return 0;
}
break;
case 20:
if(func_220(4)){
return 0;
}
if(func_221(PLAYER::PLAYER_ID(), 7)){
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

int func_220(bool bParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 32){
if(func_246(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1)){
if(MISC::IS_BIT_SET(Global_2657704[iVar0 /*463*/].f_218, bParam0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_221(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_222(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_229()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_228()){
return 1;
}
if(func_227(159)){
if(!func_226()){
return 1;
}}
if(func_227(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_223() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_223())==0){
return 1;
}}
return 0;
}

int func_223(){
switch (func_225()){
case 0:
return func_224();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_224(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_225(){
return Global_32283;
}


bool func_226(){
return Global_2683883.f_698;
}

int func_227(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_228(){
return Global_2694576;
}


bool func_229(){
return Global_2683883.f_693;
}


void func_230(){
wait(0);
}


void func_231(){
if(HUD::DOES_BLIP_EXIST(uLocal_92)){
HUD::REMOVE_BLIP(&uLocal_92);
}
func_234();
if(func_216()==4 && Local_86.f_10 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_86.f_10, 0);
}
MISC::CLEAR_BIT(&(Global_2794162.f_4699), true);
func_233(17, 0);
func_232();
}


void func_232(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_233(bool bParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}


void func_234(){
if(Local_86.f_12==2){
TASK::CLEAR_SEQUENCE_TASK(&uLocal_90);
}}


void func_235(struct<21> Param0){
func_242(func_243(Param0.f_0), Param0);
NETWORK::RESERVE_NETWORK_MISSION_PEDS(4);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
func_241(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_86, 49, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_88, 97, 0);
if(!func_240()){
func_231();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_236();
Local_86.f_8=func_5();
}
func_233(17, 1);
Local_88[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=0;
}else{
func_231();
}}


void func_236(){
func_239();
Local_86.f_12=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(Local_86.f_12==1 || Local_86.f_12==2){
Local_86.f_15=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
if(Local_86.f_12==1){
func_238(&(Local_86.f_16), &(Local_86.f_19));
}else{
func_238(&(Local_86.f_20), &(Local_86.f_23));
}
func_237();
}
Local_86.f_14=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(Global_262145.f_8744 >=0 && Global_262145.f_8744 < 5){
Local_86.f_13=Global_262145.f_8744;
}else{
Local_86.f_13=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}}


void func_237(){
switch (Local_86.f_15){
case 0:
Local_86.f_24={
-2195.782f, -420.2502f, 12.0819f 
};
Local_86.f_27=117.3927f;
Local_86.f_28[0 /*3*/]={
-2189.975f, -422.8502f, 12.0709f 
};
Local_86.f_38[0]=152.6699f;
Local_86.f_28[1 /*3*/]={
-2184.031f, -400.948f, 12.2027f 
};
Local_86.f_38[1]=337.9892f;
Local_86.f_28[2 /*3*/]={
-2175.282f, -426.3756f, 12.128f 
};
Local_86.f_38[2]=12.2947f;
break;
case 1:
Local_86.f_24={
-981.5774f, -1487.319f, 4.5867f 
};
Local_86.f_27=300.0815f;
Local_86.f_28[0 /*3*/]={
-977.8269f, -1494.568f, 4.5867f 
};
Local_86.f_38[0]=0.731f;
Local_86.f_28[1 /*3*/]={
-977.7324f, -1491.717f, 4.5867f 
};
Local_86.f_38[1]=173.7717f;
Local_86.f_28[2 /*3*/]={
-954.6693f, -1486.713f, 4.16f 
};
Local_86.f_38[2]=304.8721f;
break;
case 2:
Local_86.f_24={
697.3923f, -1375.27f, 25.196f 
};
Local_86.f_27=111.1953f;
Local_86.f_28[0 /*3*/]={
717.8624f, -1360.491f, 25.0461f 
};
Local_86.f_38[0]=55.1674f;
Local_86.f_28[1 /*3*/]={
703.9843f, -1361.094f, 24.6728f 
};
Local_86.f_38[1]=306.7133f;
Local_86.f_28[2 /*3*/]={
707.1707f, -1388.706f, 25.2759f 
};
Local_86.f_38[2]=204.5666f;
break;
case 3:
Local_86.f_24={
-258.5791f, 302.4799f, 91.0086f 
};
Local_86.f_27=180.4109f;
Local_86.f_28[0 /*3*/]={
-244.9193f, 299.3712f, 91.0424f 
};
Local_86.f_38[0]=43.0354f;
Local_86.f_28[1 /*3*/]={
-248.7361f, 305.6155f, 91.1444f 
};
Local_86.f_38[1]=191.8736f;
Local_86.f_28[2 /*3*/]={
-232.4524f, 299.4706f, 91.2088f 
};
Local_86.f_38[2]=199.8353f;
break;
case 4:
Local_86.f_24={
862.7026f, 2875.148f, 56.9868f 
};
Local_86.f_27=206.7217f;
Local_86.f_28[0 /*3*/]={
880.2893f, 2862.074f, 55.6697f 
};
Local_86.f_38[0]=191.0122f;
Local_86.f_28[1 /*3*/]={
865.2399f, 2853.536f, 56.2583f 
};
Local_86.f_38[1]=305.8056f;
Local_86.f_28[2 /*3*/]={
867.6559f, 2841.155f, 56.944f 
};
Local_86.f_38[2]=235.4465f;
break;
}}


void func_238(var uParam0, var uParam1){
switch (Local_86.f_15){
case 0:
*uParam0={
-2192.39f, -419.3334f, 12.0959f 
};
*uParam1=71.2404f;
break;
case 1:
*uParam0={
-977.0366f, -1482.866f, 4.0099f 
};
*uParam1=124.7807f;
break;
case 2:
*uParam0={
702.5064f, -1370.477f, 25.0573f 
};
*uParam1=279.9129f;
break;
case 3:
*uParam0={
-253.3582f, 299.4982f, 90.9592f 
};
*uParam1=184.8169f;
break;
case 4:
*uParam0={
868.8133f, 2868.439f, 55.9186f 
};
*uParam1=200.5778f;
break;
}}


void func_239(){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
if(Global_262145.f_8743 >=0 && Global_262145.f_8743 < 8){
iVar0=Global_262145.f_8743;
}
switch (iVar0){
case 0:
if(func_14()){
Local_86.f_10=joaat("baller");
}else{
Local_86.f_10=joaat("zion");
}
if(func_14()){
Local_86.f_11=joaat("g_m_y_ballaorig_01");
}else{
Local_86.f_11=joaat("g_m_y_ballaeast_01");
}
break;
case 1:
if(func_14()){
Local_86.f_10=joaat("emperor");
}else{
Local_86.f_10=joaat("cavalcade2");
}
if(func_14()){
Local_86.f_11=joaat("g_m_y_mexgoon_02");
}else{
Local_86.f_11=joaat("g_f_y_vagos_01");
}
break;
case 2:
if(func_14()){
Local_86.f_10=joaat("daemon");
}else{
Local_86.f_10=joaat("gburrito");
}
if(func_14()){
Local_86.f_11=joaat("g_m_y_lost_01");
}else{
Local_86.f_11=joaat("g_f_y_lost_01");
}
break;
case 3:
if(func_14()){
Local_86.f_10=joaat("pcj");
}else{
Local_86.f_10=joaat("bjxl");
}
if(func_14()){
Local_86.f_11=joaat("g_m_m_chigoon_02");
}else{
Local_86.f_11=joaat("g_m_m_chigoon_01");
}
break;
case 4:
if(func_14()){
Local_86.f_10=joaat("rocoto");
}else{
Local_86.f_10=joaat("emperor");
}
if(func_14()){
Local_86.f_11=joaat("g_m_m_armgoon_01");
}else{
Local_86.f_11=joaat("g_m_y_armgoon_02");
}
break;
case 5:
if(func_14()){
Local_86.f_10=joaat("journey");
}else{
Local_86.f_10=joaat("sandking");
}
if(func_14()){
Local_86.f_11=joaat("a_m_m_hillbilly_02");
}else{
Local_86.f_11=joaat("a_m_m_hillbilly_01");
}
break;
case 6:
if(func_14()){
Local_86.f_10=joaat("habanero");
}else{
Local_86.f_10=joaat("sanchez2");
}
if(func_14()){
Local_86.f_11=joaat("g_m_y_salvagoon_01");
}else{
Local_86.f_11=joaat("g_m_y_salvagoon_02");
}
break;
case 7:
if(func_14()){
Local_86.f_10=joaat("buffalo2");
}else{
Local_86.f_10=joaat("dubsta");
}
if(func_14()){
Local_86.f_11=joaat("g_m_y_strpunk_01");
}else{
Local_86.f_11=joaat("g_m_y_strpunk_02");
}
break;
}}

int func_240(){
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
if(func_229()){
return 0;
}
if(func_227(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_241(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_232();
}else{
return 0;
}}
if(!func_51(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_232();
}else{
return 0;
}}
if(func_229()){
if(!bParam2){
func_232();
}else{
return 0;
}}
if(func_227(157)){
if(!bParam2){
func_232();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_232();
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
func_232();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_232();
}else{
return 0;
}}
return 1;
}


void func_242(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_232();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_243(int iParam0){
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
switch (func_244(func_245(iParam0, 1))){
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

int func_244(int iParam0){
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

int func_245(int iParam0, bool bParam1){
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

int func_246(int iParam0, bool bParam1, bool bParam2){
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