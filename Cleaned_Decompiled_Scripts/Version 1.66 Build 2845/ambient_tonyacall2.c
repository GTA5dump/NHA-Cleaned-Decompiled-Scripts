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
char* sLocal_18=NULL;
var uLocal_19=0;
var uLocal_20=0;
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
int iLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
float fLocal_41=0f;
float fLocal_42=0f;
struct<3> Local_43={
0, 0, 0 
};
struct<3> Local_44={
0, 0, 0 
};
struct<3> Local_45={
0, 0, 0 
};
float fLocal_46=0f;
struct<3> Local_47={
0, 0, 0 
};
float fLocal_48=0f;
struct<3> Local_49={
0, 0, 0 
};
float fLocal_50=0f;
float fLocal_51=0f;
float fLocal_52=0f;
var uLocal_53=16;
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
sLocal_18="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
fLocal_41=50f;
fLocal_42=2500f;
Local_43={
409.1539f, -1626.677f, 28.2928f 
};
Local_45={
409.2747f, -1623.022f, 28.29278f 
};
fLocal_46=202.6928f;
Local_47={
415.6071f, -1647.604f, 28.2928f 
};
fLocal_48=85.7173f;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18)){
func_33();
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_tonyacall2")) > 1){
SCRIPT::TERMINATE_THIS_THREAD();
}
while (true){
PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
if(func_32(0, 14)){
func_33();
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_44={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(vdist2(Local_44, Local_43) > fLocal_42){
func_33();
}
switch (iLocal_37){
case 0:
if(func_28()){
iLocal_37=1;
}
break;
case 1:
STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
if(((STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@enter")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@standing@call@exit")){
iLocal_37=2;
}
break;
case 2:
if(func_1()){
iLocal_37=3;
}
break;
case 3:
func_33();
break;
}
wait(0);
}}

int func_1(){
struct<3> Var0;
struct<3> Var1;
int iVar2;
var uVar3;
float fVar4;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(uLocal_38, 1) 
};
}else{
Var1={
408.5002f, -1624.583f, 29.2928f 
};
}
if((vdist2(Var0, Var1) > 10000f || ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)) || func_27()){
return 1;
}
switch (iLocal_40){
case 0:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)){
if(ENTITY::IS_ENTITY_AT_COORD(uLocal_38, Local_49, 1f, 1f, 1f, 0, 1, 0)){
TASK::CLEAR_SEQUENCE_TASK(&uVar3);
TASK::OPEN_SEQUENCE_TASK(&uVar3);
TASK::TASK_ACHIEVE_HEADING(0, fLocal_50, 0);
TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar3);
TASK::TASK_PERFORM_SEQUENCE(uLocal_38, uVar3);
TASK::CLEAR_SEQUENCE_TASK(&uVar3);
iLocal_40=1;
}}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)){
if(TASK::GET_SEQUENCE_PROGRESS(uLocal_38)==1){
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_39)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3)){
fVar4=ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
if(fVar4 >=0.157f){
uLocal_39=OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_39, uLocal_38, PED::GET_PED_BONE_INDEX(uLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
}
}}}elseif(TASK::GET_SEQUENCE_PROGRESS(uLocal_38)==2){
iVar2=(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
if(iVar2==0){
if(func_4(&uLocal_53, "TOWAUD", "TONYA_CALL3", 8, 0, 0, 0)){
iLocal_40=2;
}}elseif(func_4(&uLocal_53, "TOWAUD", "TONYA_CALL4", 8, 0, 0, 0)){
iLocal_40=2;
}}}
break;
case 2:
if(!ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)){
if(!func_3()){
TASK::CLEAR_SEQUENCE_TASK(&uVar3);
TASK::OPEN_SEQUENCE_TASK(&uVar3);
TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar3);
TASK::TASK_PERFORM_SEQUENCE(uLocal_38, uVar3);
TASK::CLEAR_SEQUENCE_TASK(&uVar3);
iLocal_40=3;
}}
break;
case 3:
func_2();
if(vdist2(Var0, Var1) < 25f){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) !=4){
if(func_4(&uLocal_53, "TOWAUD", "TOW_MESS2", 8, 0, 0, 0)){
settimera(0);
iLocal_40=4;
}}}
break;
case 4:
func_2();
if(timera() > 10000){
iLocal_40=3;
}
break;
}
return 0;
}


void func_2(){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)){
if(TASK::GET_SEQUENCE_PROGRESS(uLocal_38)==1){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_39)){
OBJECT::DELETE_OBJECT(&uLocal_39);
TASK::TASK_LOOK_AT_ENTITY(uLocal_38, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_39)){
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_38, joaat("script_task_start_scenario_in_place"))==1){
OBJECT::DELETE_OBJECT(&uLocal_39);
}}}}

int func_3(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21732=0;
Global_21734=0;
Global_21739=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_2883585=0;
return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2){
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20383.f_1=3;
Global_21725=0;
Global_21726=1;
Global_21778=0;
Global_21721=0;
Global_21722=0;
Global_21736=0;
Global_21735=0;
Global_20382=0;
}else{
func_25();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_24(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_23();
Global_21014={
Global_21179 
};
Global_21731=Global_21732;
Global_21738=Global_21739;
Global_2883586=Global_2883585;
Global_21740={
Global_21756 
};
Global_21733=Global_21734;
Global_22715=Global_22716;
Global_22723={
Global_22729 
};
Global_22717=Global_22718;
Global_22719=Global_22720;
Global_22721=Global_22722;
Global_21344.f_370=Global_22714;
Global_21344.f_368=Global_22712;
Global_21344.f_369=Global_22713;
Global_21721=Global_21722;
if(Global_21731){
MISC::CLEAR_BIT(&Global_8253, 20);
MISC::CLEAR_BIT(&Global_8254, 17);
MISC::CLEAR_BIT(&Global_8255, 0);
if(bParam2){
func_15();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20383.f_1 > 3){
return 0;
}}
if(Global_20349==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_14()){
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
if(!Global_78558){
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
if(func_13()){
return 0;
}else{
switch (Global_20383.f_1){
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
if(MISC::IS_BIT_SET(Global_8253, 9)){
return 0;
}}
func_12();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_11();
func_6();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_25();
}
return 0;
}


void func_6(){
if(!func_7()){
return;
}
if(Global_21731){
MemCopy(&(Global_1977511.f_1),{
Global_21344
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}}

int func_7(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_10()){
return 0;
}
if(func_8(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_8(int iParam0){
return func_9(iParam0, 20);
}


var func__9(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_10(){
return -1;
}


void func_11(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_12(){
Global_21778=Global_21777;
Global_21772=Global_21773;
Global_21819={
Global_21807 
};
Global_21825={
Global_21813 
};
Global_21780=Global_21779;
Global_21849={
Global_21831 
};
Global_21855={
Global_21837 
};
Global_21861={
Global_21843 
};
Global_21867={
Global_21873 
};
Global_7568=Global_7569;
Global_7570=Global_7571;
Global_21736=Global_21737;
Global_21738=Global_21739;
Global_21740={
Global_21756 
};
Global_21729=Global_21730;
Global_22741=0;
Global_21774=0;
Global_21775=0;
MISC::CLEAR_BIT(&Global_8254, 16);
}

int func_13(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_14(){
int iVar0;
int iVar1;
if(Global_78558){
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


void func_15(){
if(func_22(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]){
Global_20383=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]){
Global_20383=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]){
Global_20383=2;
}else{
Global_20383=0;
}}}else{
Global_20383=func_16();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__16(){
func_17();
return Global_113648.f_2365.f_539.f_4321;
}


void func_17(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_20(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_19(PLAYER::PLAYER_PED_ID());
if(func_18(iVar0) && (!func_22(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_18(Global_113648.f_2365.f_539.f_4321)){
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


bool func_18(int iParam0){
return iParam0 < 3;
}

int func_19(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_20(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_20(int iParam0){
if(func_18(iParam0)){
return func_21(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__21(int iParam0){
return Global_2028[iParam0 /*29*/];
}


bool func_22(int iParam0){
return Global_43257==iParam0;
}


void func_23(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21014[iVar0 /*10*/]=0;
StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
Global_21014[iVar0 /*10*/].f_7=0;
Global_21014[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21014.f_161=-99;
Global_21014.f_162={
0f, 0f, 0f 
};
}


bool func_24(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_25(){
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


void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21179={
*uParam0 
};
Global_7569=iParam1;
StringCopy(&Global_21795, sParam2, 24);
Global_22714=uParam5;
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

int func_27(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_38) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_39)){
ENTITY::DETACH_ENTITY(uLocal_39, 1, 1);
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_38, joaat("script_task_smart_flee_ped")) !=1){
PED::SET_PED_KEEP_TASK(uLocal_38, 1);
TASK::TASK_SMART_FLEE_PED(uLocal_38, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
return 1;
}}}
return 0;
}

int func_28(){
struct<3> Var0;
var uVar1;
int iVar2;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
PED::GET_CLOSEST_PED(Var0, fLocal_41, 1, 1, &uVar1, 0, 1, -1);
if(ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(uVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(uVar1);
if(iVar2==joaat("ig_tonya")){
uLocal_38=uVar1;
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_38, 1, 0);
PED::SET_PED_MONEY(uLocal_38, 0);
PED::SET_PED_CAN_BE_TARGETTED(uLocal_38, 0);
PED::SET_PED_NAME_DEBUG(uLocal_38, "TONYA");
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_38, joaat("player"));
func_31(&uLocal_53, 3, uLocal_38, "TONYA", 1, 1);
func_30();
if(!func_29(Local_49)){
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_38, joaat("script_task_follow_nav_mesh_to_coord")) !=1){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_38, Local_49, 1f, -1, 0.25f, 0, fLocal_50);
PED::SET_PED_KEEP_TASK(uLocal_38, 1);
}
return 1;
}}}
return 0;
}

int func_29(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_30(){
struct<3> Var0;
if(ENTITY::DOES_ENTITY_EXIST(uLocal_38) && !ENTITY::IS_ENTITY_DEAD(uLocal_38, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(uLocal_38, 1) 
};
if(func_29(Local_49)){
fLocal_51=vdist(Var0, Local_45);
fLocal_52=vdist(Var0, Local_47);
if(fLocal_51 < fLocal_52){
Local_49={
Local_45 
};
fLocal_50=fLocal_46;
}else{
Local_49={
Local_47 
};
fLocal_50=fLocal_48;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0)){
Local_49={
Local_47 
};
fLocal_50=fLocal_48;
}}}}}


void func_31(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=uParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78558){
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

int func_32(int iParam0, int iParam1){
int iVar0;
if(iParam0==11 || iParam0==-1){
return 0;
}
if(iParam1 < 0 || iParam1 >=32){
return 0;
}
iVar0=MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return iVar0;
}


void func_33(){
STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@enter");
STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@base");
STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@standing@call@exit");
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
if(ENTITY::DOES_ENTITY_EXIST(uLocal_38)){
if(ENTITY::IS_ENTITY_OCCLUDED(uLocal_38)){
PED::DELETE_PED(&uLocal_38);
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_38);
}}
SCRIPT::TERMINATE_THIS_THREAD();
}