//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
int iLocal_0=0;
var uLocal_1=0;
var uLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
int iLocal_12=0;
float fLocal_13=0f;
var uLocal_14=0;
var uLocal_15=0;
int iLocal_16=0;
var uLocal_17=0;
var uLocal_18=0;
char* sLocal_19=NULL;
var uLocal_20=0;
var uLocal_21=0;
float fLocal_22=0f;
float fLocal_23=0f;
float fLocal_24=0f;
var uLocal_25=0;
var uLocal_26=0;
float fLocal_27=0f;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
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
bool bLocal_46=0;
int iLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
bool bLocal_50=0;
int iLocal_51=0;
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
float fLocal_56=0f;
var uLocal_57=0;
var uLocal_58=0;
float fLocal_59[3]={
0f, 0f, 0f 
};
var uLocal_60=16;
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
struct<2> Local_225={
0, 0 
};
var uLocal_226=745926877;
var uLocal_227=0;
var uLocal_228=3;
var uLocal_229=0;
var uLocal_230=-839953400;
var uLocal_231=0;
var uLocal_232=-839953400;
var uLocal_233=0;
var uLocal_234=-839953400;
var uLocal_235=0;
var uLocal_236=0;
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=0;
var uLocal_241=0;
var uLocal_242=0;
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=0;
int iLocal_246[2]={
0, 0 
};
struct<21> Local_247={
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 
};
#endregion

void __EntryFunction__(){
iLocal_0=3;
iLocal_3=1;
iLocal_4=134;
iLocal_5=134;
iLocal_6=1;
iLocal_7=1;
iLocal_8=1;
iLocal_9=134;
iLocal_10=1;
iLocal_11=12;
iLocal_12=12;
fLocal_13=0.001f;
iLocal_16=-1;
sLocal_19="NULL";
fLocal_22=80f;
fLocal_23=140f;
fLocal_24=180f;
fLocal_27=0f;
fLocal_31=-0.0375f;
fLocal_32=0.17f;
iLocal_38=1;
iLocal_39=65;
iLocal_40=49;
iLocal_41=64;
fLocal_56=-1f;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_110(ScriptParam_247);
}
while (true){
func_109();
if(func_101()){
func_97();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_96();
func_94();
switch (func_93(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if(func_92() > 0){
iLocal_246[NETWORK::PARTICIPANT_ID_TO_INT()]=2;
}
break;
case 2:
func_60();
if(func_92()==3){
iLocal_246[NETWORK::PARTICIPANT_ID_TO_INT()]=3;
}
break;
case 3:
func_97();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_92()){
case 0:
Local_225.f_0=2;
break;
case 2:
func_1();
break;
case 3:
break;
}}}}}


void func_1(){
func_7();
if(Local_225.f_1.f_2==5){
Local_225.f_0=3;
}
if(func_6(&(Local_225.f_1.f_19))){
if(func_4(&(Local_225.f_1.f_19), 20000, 0)){
Local_225.f_0=3;
}}
if(func_3()){
Local_225.f_0=3;
}
if(bLocal_46){
if(!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
Local_225.f_0=3;
}}elseif(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
Local_225.f_0=3;
}
if(func_2()){
Local_225.f_0=3;
}}


bool func_2(){
return Global_1927408.f_3;
}


bool func_3(){
return Global_1574582;
}

int func_4(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_5(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_5(var uParam0, bool bParam1, bool bParam2){
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


bool func_6(var uParam0){
return uParam0->f_1;
}


void func_7(){
switch (Local_225.f_1.f_2){
case 0:
func_59(1);
break;
case 1:
if(func_38()){
if(func_25()){
func_5(&(Local_225.f_1.f_17), 0, 0);
func_59(2);
}}
break;
case 2:
func_16();
func_14();
if(!func_12(Local_225.f_1)){
if((func_11(Local_225.f_1.f_3[0 /*2*/]) && func_11(Local_225.f_1.f_3[1 /*2*/])) && func_11(Local_225.f_1.f_3[2 /*2*/])){
func_59(5);
}}elseif(func_11(Local_225.f_1.f_3[0 /*2*/])){
if(func_11(Local_225.f_1.f_3[1 /*2*/]) && func_11(Local_225.f_1.f_3[2 /*2*/])){
func_59(5);
}}elseif(func_11(Local_225.f_1.f_3[1 /*2*/]) && func_11(Local_225.f_1.f_3[2 /*2*/])){
func_59(3);
}else{
if(func_6(&(Local_225.f_1.f_17))){
if(func_4(&(Local_225.f_1.f_17), 120000, 0)){
func_59(3);
}}
if(func_10(PLAYER::PLAYER_ID(), 0)){
func_59(3);
}
if(bLocal_50){
func_59(3);
}
if(func_8(PLAYER::PLAYER_ID(), 136)){
func_59(3);
}}
break;
case 3:
func_16();
if(!func_12(Local_225.f_1)){
if((func_11(Local_225.f_1.f_3[0 /*2*/]) && func_11(Local_225.f_1.f_3[1 /*2*/])) && func_11(Local_225.f_1.f_3[2 /*2*/])){
func_59(5);
}}elseif(func_11(Local_225.f_1.f_3[0 /*2*/])){
if(func_11(Local_225.f_1.f_3[1 /*2*/]) && func_11(Local_225.f_1.f_3[2 /*2*/])){
func_59(5);
}}
break;
case 5:
break;
}}

int func_8(int iParam0, int iParam1){
if(Global_1895156[iParam0 /*609*/]==iParam1){
return func_9(iParam0);
}
return 0;
}

int func_9(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 0);
}
return 0;
}


bool func_10(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_11(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
}
return 1;
}

int func_12(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_13(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_13(var uParam0){
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


void func_14(){
if(Global_2672524.f_3803){
func_15(1, 600000);
bLocal_50=true;
}
if(Global_2672524.f_3802 >=250f){
func_15(1, 600000);
bLocal_50=true;
}}


void func_15(int iParam0, int iParam1){
if(Global_2672524.f_3686[iParam0] < iParam1){
Global_2672524.f_3686[iParam0]=iParam1;
}
MISC::SET_BIT(&(Global_2672524.f_3685), iParam0);
}


void func_16(){
iLocal_54=0;
iLocal_55=0;
if(func_12(Local_225.f_1)){
iLocal_54++;
}elseif(ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_225.f_1))){
func_24(&(Local_225.f_1));
iLocal_54++;
}
if(func_11(Local_225.f_1.f_3[0 /*2*/])){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_225.f_1.f_3[0 /*2*/])){
func_24(&(Local_225.f_1.f_3[0 /*2*/]));
iLocal_55++;
}}else{
iLocal_55++;
}
if(func_11(Local_225.f_1.f_3[1 /*2*/])){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_225.f_1.f_3[1 /*2*/])){
func_24(&(Local_225.f_1.f_3[1 /*2*/]));
iLocal_55++;
}}else{
iLocal_55++;
}
if(func_11(Local_225.f_1.f_3[2 /*2*/])){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_225.f_1.f_3[2 /*2*/])){
func_24(&(Local_225.f_1.f_3[2 /*2*/]));
iLocal_55++;
}}else{
iLocal_55++;
}
if(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) !=iLocal_54){
if(func_23(iLocal_54, 0, 1)){
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_54);
}}
if(NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) !=iLocal_55){
if(func_17(iLocal_55, 0, 1)){
NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_55);
}}}


bool func_17(int iParam0, bool bParam1, bool bParam2){
return func_18(0, iParam0, 1, bParam1, bParam2);
}

int func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(Global_1666708, 0)){
return 0;
}
if((bParam2 && !bParam3) && iParam1 <=(func_22(iParam0) - func_21(iParam0, 0))){
return 1;
}else{
if(bParam3){
if(bParam2){
iVar0=(iParam1 - func_21(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_22(iParam0) - func_20(iParam0));
}else{
if(bParam2){
iVar0=(iParam1 - func_21(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_22(iParam0) - func_21(iParam0, 1));
}
if(!bParam4 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=3){
iVar1=(iVar1 - func_19(iParam0));
}
if(iVar0 < iVar1){
return 1;
}}
return 0;
}

int func_19(int iParam0){
switch (iParam0){
case 0:
return 10;
break;
case 1:
return 10;
break;
case 2:
return 10;
break;
}
return 0;
}

int func_20(int iParam0){
switch (iParam0){
case 0:
return Global_1666708.f_1;
break;
case 1:
return Global_1666708.f_2;
break;
case 2:
return Global_1666708.f_3;
break;
}
return 0;
}

int func_21(int iParam0, bool bParam1){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
switch (iParam0){
case 0:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_219;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
}
break;
case 1:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_220;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
}
break;
case 2:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_221;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
}
break;
}
return 0;
}

int func_22(int iParam0){
switch (iParam0){
case 0:
return Global_1666716;
break;
case 1:
return Global_1666717;
break;
case 2:
return Global_1666718;
break;
}
return 0;
}


bool func_23(int iParam0, bool bParam1, bool bParam2){
return func_18(1, iParam0, 1, bParam1, bParam2);
}


void func_24(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}

int func_25(){
if(func_37(Local_225.f_1.f_1)){
if(func_37(Local_225.f_1.f_3[0 /*2*/].f_1)){
if(!func_12(Local_225.f_1)){
if(func_34(&(Local_225.f_1), Local_225.f_1.f_1, Local_225.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0)){
VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_225.f_1));
VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_225.f_1), 1, 1, 0);
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_225.f_1));
ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_225.f_1), 1);
func_33(NETWORK::NET_TO_VEH(Local_225.f_1), 4);
Global_2672524.f_3797=NETWORK::NET_TO_VEH(Local_225.f_1);
if(func_32(&(Local_225.f_1.f_3[0 /*2*/]), Local_225.f_1, 4, Local_225.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1)){
func_27(Local_225.f_1.f_3[0 /*2*/]);
func_26(NETWORK::NET_TO_PED(Local_225.f_1.f_3[0 /*2*/]), 0, 0, 1);
NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_225.f_1.f_3[0 /*2*/]), PLAYER::PLAYER_ID());
func_33(NETWORK::NET_TO_PED(Local_225.f_1.f_3[0 /*2*/]), 4);
Global_2672524.f_3798[0]=NETWORK::NET_TO_PED(Local_225.f_1.f_3[0 /*2*/]);
if(func_32(&(Local_225.f_1.f_3[1 /*2*/]), Local_225.f_1, 4, Local_225.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1)){
func_27(Local_225.f_1.f_3[1 /*2*/]);
func_26(NETWORK::NET_TO_PED(Local_225.f_1.f_3[1 /*2*/]), 1, 1, 1);
NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_225.f_1.f_3[1 /*2*/]), PLAYER::PLAYER_ID());
func_33(NETWORK::NET_TO_PED(Local_225.f_1.f_3[1 /*2*/]), 4);
Global_2672524.f_3798[1]=NETWORK::NET_TO_PED(Local_225.f_1.f_3[1 /*2*/]);
if(func_32(&(Local_225.f_1.f_3[2 /*2*/]), Local_225.f_1, 4, Local_225.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1)){
func_27(Local_225.f_1.f_3[2 /*2*/]);
func_26(NETWORK::NET_TO_PED(Local_225.f_1.f_3[2 /*2*/]), 2, 1, 1);
NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_225.f_1.f_3[2 /*2*/]), PLAYER::PLAYER_ID());
func_33(NETWORK::NET_TO_PED(Local_225.f_1.f_3[2 /*2*/]), 4);
Global_2672524.f_3798[2]=NETWORK::NET_TO_PED(Local_225.f_1.f_3[2 /*2*/]);
return 1;
}
}}}}}}
return 0;
}


void func_26(var uParam0, int iParam1, bool bParam2, bool bParam3){
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0, joaat("weapon_assaultrifle"), 300, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 5, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 3, 0);
PED::SET_PED_COMBAT_MOVEMENT(uParam0, 2);
PED::SET_PED_COMBAT_ABILITY(uParam0, 1);
PED::SET_PED_COMBAT_RANGE(uParam0, 2);
PED::SET_PED_TARGET_LOSS_RESPONSE(uParam0, 1);
PED::SET_PED_HIGHLY_PERCEPTIVE(uParam0, 1);
PED::SET_PED_CAN_BE_TARGETTED(uParam0, 1);
PED::SET_PED_SEEING_RANGE(uParam0, (fLocal_59[iParam1] + 100f));
PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(uParam0, 400f);
PED::SET_COMBAT_FLOAT(uParam0, 10, 400f);
if(!bParam2){
if(bParam3){
ENTITY::SET_ENTITY_MAX_HEALTH(uParam0, 250);
ENTITY::SET_ENTITY_HEALTH(uParam0, 250, 0);
PED::SET_PED_ARMOUR(uParam0, 250);
}}else{
ENTITY::SET_ENTITY_INVINCIBLE(uParam0, 1);
}}


void func_27(var uParam0){
var uVar0;
if(!func_29(PLAYER::PLAYER_ID(), 0, 0) && !func_28()){
uVar0=Global_1837231[5];
}else{
uVar0=PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam0), uVar0);
}


bool func_28(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_30(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_30(int iParam0){
return func_31(iParam0);
}


var func__31(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
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


void func_33(var uParam0, int iParam1){
int iVar0;
iVar0=0;
if(DECORATOR::DECOR_EXIST_ON(uParam0, "AttributeDamage")){
iVar0=DECORATOR::DECOR_GET_INT(uParam0, "AttributeDamage");
}
MISC::SET_BIT(&iVar0, iParam1);
DECORATOR::DECOR_SET_INT(uParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
iVar1=VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
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
func_35(Param2, fParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_35(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_36(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_36(int iParam0, struct<3> Param1, int iParam2){
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

int func_37(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_38(){
struct<3> Var0;
if(func_58(Local_225.f_1.f_10)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
func_56(func_57(PLAYER::PLAYER_ID()), 0f, (-200f * sin((to_float(Local_225.f_1.f_15) * 30f))), (200f * cos((to_float(Local_225.f_1.f_15) * 30f))), 0f) 
};
Var0.f_2=PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var0.f_0, Var0.f_1);
Var0.f_2=(Var0.f_2 + 30f);
if(func_39(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0)){
Local_225.f_1.f_10={
Var0 
};
return 1;
}else{
Local_225.f_1.f_15++;
if(Local_225.f_1.f_15 >=12){
Local_225.f_1.f_15=0;
}}}}}else{
return 1;
}
return 0;
}

int func_39(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_49(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635560.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_40(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635560.f_2++;
return 1;
}

int func_40(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_48(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_46(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_48(iVar1, 1, 1)){
if(!func_42(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if((func_41(iVar1) || !bParam8) && !Global_2657704[iVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_46(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_46(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_41(int iParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255){
return 1;
}
return 0;
}


bool func_42(int iParam0, int iParam1){
bool bVar0;
if(!func_45(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_43(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_43(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_44();
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

int func_44(){
return Global_1574918;
}

int func_45(var uParam0){
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


Vector3 func__46(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_47() && Global_1853988[iVar0 /*867*/].f_834) && !func_58(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_57(iParam0);
}


var func__47(){
return Global_2683883.f_19;
}

int func_48(int iParam0, bool bParam1, bool bParam2){
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

int func_49(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_48(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_41(iVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_50(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_57(iVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_50(int iParam0){
if(func_55(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764376={
func_54(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764376)){
return 1;
}
if(func_51(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_51(int iParam0, int iParam1){
int iVar0;
iVar0=func_52(iParam0);
if(func_45(iVar0)){
if(iVar0==func_52(iParam1)){
return 1;
}}
return 0;
}

int func_52(int iParam0){
if(func_45(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_53();
}

int func_53(){
return -1;
}
struct<13> func_54(var uParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
return Var0;
}

int func_55(int iParam0, var uParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_54(iParam0) 
};
Global_2764389={
func_54(uParam1) 
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


Vector3 func__56(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3){
struct<3> Var0;
float fVar1;
float fVar2;
float fVar3;
struct<3> Var4;
fVar1=fParam1;
fVar2=cos(fVar1);
fVar3=sin(fVar1);
Var0.f_0=((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
Var0.f_1=((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
Var4={
Param0 + Var0 
};
return Var4;
}


Vector3 func__57(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_58(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_59(int iParam0){
Local_225.f_1.f_2=iParam0;
}


void func_60(){
func_90();
func_61();
}


void func_61(){
var uVar0;
var uVar1;
int iVar2;
switch (Local_225.f_1.f_2){
case 0:
func_89();
break;
case 1:
func_89();
break;
case 2:
if(func_12(Local_225.f_1)){
uVar1=NETWORK::NET_TO_VEH(Local_225.f_1);
if(!HUD::DOES_BLIP_EXIST(uLocal_45)){
uLocal_45=HUD::ADD_BLIP_FOR_ENTITY(uVar1);
HUD::SET_BLIP_SPRITE(uLocal_45, 422);
HUD::SHOW_HEIGHT_ON_BLIP(uLocal_45, 0);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_45, "MPCT_MERRY3");
func_87(&uLocal_45, 1);
}
if(func_86(Local_225.f_1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1)){
if(func_85()){
if(!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(uVar1)){
VEHICLE::SET_VEHICLE_SEARCHLIGHT(uVar1, 1, 0);
}
}
elseif(VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(uVar1)){
VEHICLE::SET_VEHICLE_SEARCHLIGHT(uVar1, 0, 0);
}}}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_225.f_1.f_3[0 /*2*/])){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[0 /*2*/]);
if(!PED::IS_PED_INJURED(uVar0)){
iVar2=TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(uVar1);
if(iVar2 !=23 || fLocal_59[0] !=fLocal_56){
if(func_86(Local_225.f_1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[0 /*2*/])){
fLocal_59[0]=fLocal_56;
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
func_26(uVar0, 0, 0, 0);
VEHICLE::SET_HELI_BLADES_FULL_SPEED(uVar1);
VEHICLE::SET_VEHICLE_ENGINE_ON(uVar1, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_HELI_MISSION(uVar0, uVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 23, 20f, 40f, -1f, ceil(fLocal_59[0]), 10, -1082130432, 0);
}
}}}
}
if(!iLocal_48){
if(vdist(func_57(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_225.f_1), 1)) <=50f){
func_63(&uLocal_60, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
iLocal_48=1;
}
}}}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_225.f_1.f_3[1 /*2*/])){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[1 /*2*/]);
if(!PED::IS_PED_INJURED(uVar0)){
if(!PED::IS_PED_IN_COMBAT(uVar0, 0) || fLocal_59[1] !=fLocal_56){
if(func_86(Local_225.f_1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[1 /*2*/])){
fLocal_59[1]=fLocal_56;
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
func_26(uVar0, 1, 0, 0);
}}
}}}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_225.f_1.f_3[2 /*2*/])){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[2 /*2*/]);
if(!PED::IS_PED_INJURED(uVar0)){
if(!PED::IS_PED_IN_COMBAT(uVar0, 0) || fLocal_59[2] !=fLocal_56){
if(func_86(Local_225.f_1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[2 /*2*/])){
fLocal_59[2]=fLocal_56;
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
func_26(uVar0, 2, 0, 0);
}}
}}}}
if(!func_12(Local_225.f_1) || func_11(Local_225.f_1.f_3[0 /*2*/])){
func_62();
}
break;
case 3:
func_89();
if(!func_6(&(Local_225.f_1.f_19))){
func_5(&(Local_225.f_1.f_19), 0, 0);
}
if(func_12(Local_225.f_1)){
uVar1=NETWORK::NET_TO_VEH(Local_225.f_1);
if(!func_11(Local_225.f_1.f_3[0 /*2*/])){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[0 /*2*/]);
if(iLocal_51==0){
if(func_86(Local_225.f_1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[0 /*2*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
TASK::CLEAR_PED_TASKS(uVar0);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uVar0, Global_1837216);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_HELI_MISSION(uVar0, uVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
PED::SET_PED_KEEP_TASK(uVar0, 1);
iLocal_51=1;
}}}
}}}
if(!func_11(Local_225.f_1.f_3[1 /*2*/])){
if(iLocal_52==0){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[1 /*2*/]);
if(func_86(Local_225.f_1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[1 /*2*/])){
TASK::CLEAR_PED_TASKS(uVar0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
PED::SET_PED_KEEP_TASK(uVar0, 1);
iLocal_52=1;
}
}}
if(!iLocal_49){
if(vdist(func_57(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_225.f_1), 1)) <=50f){
func_63(&uLocal_60, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
iLocal_49=1;
}}}
if(!func_11(Local_225.f_1.f_3[2 /*2*/])){
if(iLocal_53==0){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[2 /*2*/]);
if(func_86(Local_225.f_1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[2 /*2*/])){
TASK::CLEAR_PED_TASKS(uVar0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
PED::SET_PED_KEEP_TASK(uVar0, 1);
iLocal_53=1;
}
}}}}
if(!func_12(Local_225.f_1) || func_11(Local_225.f_1.f_3[0 /*2*/])){
func_62();
}
break;
case 5:
func_89();
break;
}}


void func_62(){
var uVar0;
if(!func_11(Local_225.f_1.f_3[0 /*2*/])){
if(func_86(Local_225.f_1.f_3[0 /*2*/])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[0 /*2*/])){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[0 /*2*/]);
ENTITY::SET_ENTITY_HEALTH(uVar0, 0, 0);
}}}
if(!func_11(Local_225.f_1.f_3[1 /*2*/])){
if(func_86(Local_225.f_1.f_3[1 /*2*/])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[1 /*2*/])){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[1 /*2*/]);
ENTITY::SET_ENTITY_HEALTH(uVar0, 0, 0);
}}}
if(!func_11(Local_225.f_1.f_3[2 /*2*/])){
if(func_86(Local_225.f_1.f_3[2 /*2*/])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_225.f_1.f_3[2 /*2*/])){
uVar0=NETWORK::NET_TO_PED(Local_225.f_1.f_3[2 /*2*/]);
ENTITY::SET_ENTITY_HEALTH(uVar0, 0, 0);
}}}}

int func_63(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21852=0;
Global_21854=0;
Global_21859=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_2883585=1;
return func_64(sParam2, iParam3, 0);
}

int func_64(char* sParam0, int iParam1, bool bParam2){
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
func_83();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_82(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_81();
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
func_73();
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
if(func_72()){
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
if(func_71()){
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
func_70();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_69();
func_65();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_83();
}
return 0;
}


void func_65(){
if(!func_66()){
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

int func_66(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_53()){
return 0;
}
if(func_67(PLAYER::PLAYER_ID())){
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


bool func_67(int iParam0){
return func_68(iParam0, 20);
}


var func__68(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


void func_69(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_70(){
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

int func_71(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_72(){
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


void func_73(){
if(func_80(14)){
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
Global_20500=func_74();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


var func__74(){
func_75();
return Global_113810.f_2366.f_539.f_4321;
}


void func_75(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_78(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_77(PLAYER::PLAYER_PED_ID());
if(func_76(iVar0) && (!func_80(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_76(Global_113810.f_2366.f_539.f_4321)){
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


bool func_76(int iParam0){
return iParam0 < 3;
}

int func_77(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_78(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_78(int iParam0){
if(func_76(iParam0)){
return func_79(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__79(int iParam0){
return Global_2058[iParam0 /*29*/];
}


bool func_80(int iParam0){
return Global_43377==iParam0;
}


void func_81(){
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


bool func_82(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_83(){
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


void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21299={
*uParam0 
};
Global_7686=iParam1;
StringCopy(&Global_21915, sParam2, 24);
Global_22834=uParam5;
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

int func_85(){
if(CLOCK::GET_CLOCK_HOURS() >=22){
return 1;
}
if(CLOCK::GET_CLOCK_HOURS() <=6 && CLOCK::GET_CLOCK_HOURS() >=0){
return 1;
}
return 0;
}

int func_86(var uParam0){
if(NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uParam0)){
return 1;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
}
return 0;
}


void func_87(var uParam0, int iParam1){
var uVar0;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
uVar0=func_88(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, uVar0);
}}

int func_88(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
switch (iParam0){
case 1:
return 4;
case 0:
return 4;
case 6:
return 59;
case 18:
return 2;
case 13:
return 5;
case 116:
return 38;
case 28:
return 6;
case 29:
return 7;
case 30:
return 8;
case 31:
return 9;
case 32:
return 10;
case 33:
return 11;
case 34:
return 12;
case 35:
return 13;
case 36:
return 14;
case 37:
return 15;
case 38:
return 16;
case 39:
return 17;
case 40:
return 18;
case 41:
return 19;
case 42:
return 20;
case 43:
return 21;
case 44:
return 22;
case 45:
return 23;
case 46:
return 24;
case 47:
return 25;
case 48:
return 26;
case 49:
return 27;
case 50:
return 28;
case 51:
return 29;
case 52:
return 30;
case 53:
return 31;
case 54:
return 32;
case 55:
return 33;
case 56:
return 34;
case 57:
return 35;
case 58:
return 36;
case 59:
return 37;
case 9:
return 57;
case 10:
return 53;
case 118:
return 57;
case 14:
return 56;
case 3:
return 55;
case 21:
return 50;
case 15:
return 51;
case 20:
return 52;
case 11:
return 54;
case 23:
return 58;
case 12:
return 60;
case 24:
return 61;
case 4:
return 62;
default:
}
HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
return 0;
}


void func_89(){
if(HUD::DOES_BLIP_EXIST(uLocal_45)){
HUD::REMOVE_BLIP(&uLocal_45);
}}


void func_90(){
if(!iLocal_47){
if(!func_11(Local_225.f_1.f_3[0 /*2*/])){
func_91(&uLocal_60, 3, NETWORK::NET_TO_PED(Local_225.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
iLocal_47=1;
}}}


void func_91(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=uParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78689){
if(!PED::IS_PED_INJURED(uParam2)){
if((uParam0[iParam1 /*10*/])->f_8==0){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
}else{
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
}}
if(!PED::IS_PED_INJURED(uParam2)){
if((uParam0[iParam1 /*10*/])->f_9==0){
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
}else{
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
}}}}

int func_92(){
return Local_225.f_0;
}

int func_93(int iParam0){
return iLocal_246[iParam0];
}


void func_94(){
bool bVar0;
struct<3> Var1;
if(fLocal_56==-1f){
bVar0=true;
}elseif(!func_6(&uLocal_57)){
func_5(&uLocal_57, 0, 0);
}elseif(func_4(&uLocal_57, 5000, 0)){
bVar0=true;
}
if(bVar0){
Var1={
func_57(PLAYER::PLAYER_ID()) 
};
fLocal_56=PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var1.f_0, Var1.f_1);
if(fLocal_56 < 85f){
fLocal_56=85f;
}
func_95(&uLocal_57);
}}


void func_95(var uParam0){
uParam0->f_1=0;
}


void func_96(){
}


void func_97(){
var uVar0;
var uVar1;
Global_2672524.f_3797=uVar0;
Global_2672524.f_3798[0]=uVar1;
Global_2672524.f_3798[1]=uVar1;
Global_2672524.f_3798[2]=uVar1;
Global_2672524.f_3802=0f;
Global_2672524.f_3803=0;
func_99(func_100(1, 1), 10, func_53());
func_98();
}


void func_98(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_99(int iParam0, int iParam1, var uParam2){
struct<4> Var0;
Var0.f_0=-836944817;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_3=iParam1;
Var0.f_2=uParam2;
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 6, iParam0);
}}

int func_100(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_48(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_42(iVar2, 0)){
MISC::SET_BIT(&uVar0, iVar1);
}}}
iVar1++;
}
return uVar0;
}

int func_101(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_108()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_107()){
return 1;
}
if(func_106(159)){
if(!func_105()){
return 1;
}}
if(func_106(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_102() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_102())==0){
return 1;
}}
return 0;
}

int func_102(){
switch (func_104()){
case 0:
return func_103();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_103(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_104(){
return Global_32283;
}


bool func_105(){
return Global_2683883.f_698;
}

int func_106(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_107(){
return Global_2694576;
}


bool func_108(){
return Global_2683883.f_693;
}


void func_109(){
wait(0);
}


void func_110(struct<21> Param0){
func_116(func_117(Param0.f_0), Param0);
NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
func_114(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_225, 22, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_246, 3, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(!func_113()){
func_97();
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
bLocal_46=true;
}
func_111(62, 1);
iLocal_246[NETWORK::PARTICIPANT_ID_TO_INT()]=0;
}


void func_111(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
if(bParam1){
iVar0=-1;
}
switch (iParam0){
case 59:
Global_2359296[func_112() /*5568*/].f_681.f_19=iVar0;
break;
case 19:
Global_2359296[func_112() /*5568*/].f_681.f_18=iVar0;
break;
case 74:
Global_2359296[func_112() /*5568*/].f_681.f_12=iVar0;
break;
case 29:
Global_2359296[func_112() /*5568*/].f_681.f_14=iVar0;
break;
case 8:
Global_2359296[func_112() /*5568*/].f_681.f_15=iVar0;
break;
case 31:
Global_2359296[func_112() /*5568*/].f_681.f_16=iVar0;
break;
case 3:
Global_2359296[func_112() /*5568*/].f_681.f_20=iVar0;
break;
case 6:
Global_2359296[func_112() /*5568*/].f_681.f_17=iVar0;
break;
case 103:
case 104:
case 98:
case 105:
Global_2359296[func_112() /*5568*/].f_681.f_23=iVar0;
break;
case 76:
Global_2359296[func_112() /*5568*/].f_681.f_24=iVar0;
break;
case 93:
Global_2359296[func_112() /*5568*/].f_681.f_25=iVar0;
break;
case 61:
case 62:
case 63:
case 64:
case 77:
case 81:
Global_2359296[func_112() /*5568*/].f_681.f_26=iVar0;
break;
case 65:
case 75:
case 95:
Global_2359296[func_112() /*5568*/].f_681.f_27=iVar0;
break;
break;
case 97:
Global_2359296[func_112() /*5568*/].f_681.f_29=iVar0;
break;
case 88:
Global_2359296[func_112() /*5568*/].f_681.f_28=iVar0;
break;
case 100:
Global_2359296[func_112() /*5568*/].f_681.f_31=iVar0;
break;
case 106:
Global_2359296[func_112() /*5568*/].f_681.f_32=iVar0;
break;
case 99:
Global_2359296[func_112() /*5568*/].f_681.f_30=iVar0;
break;
}}

int func_112(){
int iVar0;
iVar0=0;
return iVar0;
}

int func_113(){
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
if(func_108()){
return 0;
}
if(func_106(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_114(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_98();
}else{
return 0;
}}
if(!func_115(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_98();
}else{
return 0;
}}
if(func_108()){
if(!bParam2){
func_98();
}else{
return 0;
}}
if(func_106(157)){
if(!bParam2){
func_98();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_98();
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
func_98();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_98();
}else{
return 0;
}}
return 1;
}


bool func_115(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_116(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_98();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_117(int iParam0){
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
switch (func_118(func_119(iParam0, 1))){
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

int func_118(int iParam0){
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

int func_119(int iParam0, bool bParam1){
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