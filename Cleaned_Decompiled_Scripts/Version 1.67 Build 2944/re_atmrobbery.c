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
float fLocal_20=0f;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
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
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
struct<4> Local_47[10];
bool bLocal_48=0;
struct<3> Local_49={
0, 0, 0 
};
int iLocal_50=0;
struct<3> Local_51={
0, 0, 0 
};
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
bool bLocal_63=0;
int iLocal_64=0;
int iLocal_65=0;
var uLocal_66=0;
int iLocal_67=0;
var uLocal_68=0;
bool bLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
struct<3> Local_72={
0, 0, 0 
};
struct<3> Local_73={
0, 0, 0 
};
float fLocal_74=0f;
float fLocal_75=0f;
struct<3> Local_76={
0, 0, 0 
};
struct<3> Local_77={
0, 0, 0 
};
bool bLocal_78=0;
int iLocal_79=0;
float fLocal_80=0f;
float fLocal_81=0f;
var uLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
int iLocal_86=0;
var uLocal_87=0;
bool bLocal_88=0;
int iLocal_89=0;
char[] cLocal_90[8]=0;
char[] cLocal_91[8]=0;
char* sLocal_92=NULL;
bool bLocal_93=0;
bool bLocal_94=0;
var uLocal_95=0;
int iLocal_96=0;
bool bLocal_97=0;
bool bLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
int iLocal_103=0;
int iLocal_104=0;
struct<10> Local_105[16];
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
char* sLocal_110=NULL;
char* sLocal_111=NULL;
char* sLocal_112=NULL;
char* sLocal_113=NULL;
char* sLocal_114=NULL;
char* sLocal_115=NULL;
char* sLocal_116=NULL;
char* sLocal_117=NULL;
char[] cLocal_118[8]=0;
char* sLocal_119=NULL;
char* sLocal_120=NULL;
char[] cLocal_121[8]=0;
char* sLocal_122=NULL;
char* sLocal_123=NULL;
int iLocal_124=0;
bool bLocal_125=0;
int iLocal_126=0;
int iLocal_127=0;
bool bLocal_128=0;
int iLocal_129=0;
float fLocal_130=0f;
int iLocal_131=0;
int iLocal_132=0;
int iLocal_133=0;
struct<3> Local_134={
0, 0, 0 
};
struct<3> Local_135={
0, 0, 0 
};
struct<3> Local_136={
0, 0, 0 
};
float fLocal_137=0f;
struct<3> Local_138={
0, 0, 0 
};
float fLocal_139=0f;
char[] cLocal_140[8]=0;
char* sLocal_141=NULL;
char* sLocal_142=NULL;
char* sLocal_143=NULL;
char* sLocal_144=NULL;
char* sLocal_145=NULL;
char[] cLocal_146[8]=0;
char* sLocal_147=NULL;
char* sLocal_148=NULL;
char* sLocal_149=NULL;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=-1;
var uLocal_153=0;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=1000;
var uLocal_160=1000;
var uLocal_161=0;
struct<147> Local_162={
8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_163=1;
struct<18> Local_164={
0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 
};
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
#endregion

void __EntryFunction__(){
struct<3> Var0;
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
fLocal_20=0f;
fLocal_24=-0.0375f;
fLocal_25=0.17f;
fLocal_29=80f;
fLocal_30=140f;
fLocal_31=180f;
iLocal_37=1;
iLocal_38=65;
iLocal_39=49;
iLocal_40=64;
uLocal_44=HUD::GET_STANDARD_BLIP_ENUM_ID();
uLocal_45=HUD::GET_WAYPOINT_BLIP_ENUM_ID();
bLocal_63=3;
bLocal_78=true;
cLocal_90="RANDOM@ATMROBBERYGEN";
cLocal_91="RANDOM@ATMROBBERYGEN";
iLocal_99=joaat("prop_ld_wallet_01_s");
iLocal_100=joaat("prop_ld_wallet_01_s");
iLocal_131=500;
iLocal_132=-1;
iLocal_133=-1;
fLocal_137=0f;
fLocal_139=0f;
Local_51={
ScriptParam_164.f_1[0 /*3*/] 
};
uLocal_52=ScriptParam_164.f_17[0];
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)){
if(bLocal_93){
bLocal_94=true;
func_296(0);
}else{
func_278();
}}
if(vdist(Local_51, -203.758f, -861.738f, 29.2684f) < 5f){
bLocal_63=true;
}elseif(vdist(Local_51, -2957.61f, 488.29f, 14.47f) < 5f){
bLocal_63=true;
}elseif(vdist(Local_51, 288.973f, -1256.79f, 28.4407f) < 5f){
bLocal_63=2;
}elseif(vdist(Local_51, -3043.93f, 594.84f, 6.6115f) < 5f){
bLocal_63=3;
}elseif(vdist(Local_51, 174.715f, 6637.77f, 30.5733f) < 5f){
bLocal_63=4;
}else{
bLocal_63=5;
}
if(func_236(Local_51, 1, bLocal_63, 1, 0)){
func_233(-1);
}else{
SCRIPT::TERMINATE_THIS_THREAD();
}
settimera(0);
func_232();
while (true){
wait(0);
func_231();
func_230(uLocal_56, &uLocal_62);
func_227(&Local_162);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
}
if(!func_224()){
if(func_223()){
func_278();
}
if(BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
switch (iLocal_50){
case 0:
if(func_197()){
iLocal_50=1;
}
break;
case 1:
func_196();
if(iLocal_67==0){
iLocal_67=EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101, Local_51, 30000f);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_53)){
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_54)){
}
if(!PED::IS_PED_INJURED(iLocal_53)){
if(PED::IS_PED_INJURED(iLocal_54)){
TASK::TASK_SMART_FLEE_COORD(iLocal_53, Local_51, 200f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_53, 1);
wait(0);
func_278();
}
if(!PED::IS_PED_INJURED(iLocal_54)){
if(CAM::IS_SPHERE_VISIBLE(Local_51, 2.5f)){
if(bLocal_63==2){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 120f, 120f, 8f, 0, 1, 0) || func_195()){
func_186();
}
}
elseif(bLocal_63==1){
if(vdist(Local_51, -203.758f, -861.738f, 29.2684f) < 5f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 100f, 100f, 8f, 0, 1, 0) || func_195()){
func_186();
}
}
elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 170f, 170f, 8f, 0, 1, 0) || func_195()){
func_186();
}
}
elseif(vdist(Local_51, -3044.06f, 594.93f, 6.74f) < 5f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 65f, 65f, 5f, 0, 1, 0) || func_195()){
func_186();
}
}
elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -712.9f, -819.32f, 22.73f, 1) < 5f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 50f, 50f, 5f, 0, 1, 0) || func_195()){
func_186();
}
}
elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 24.13f, -946.84f, 28.36f, 1) < 5f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 60f, 60f, 5f, 0, 1, 0) || func_195()){
func_186();
}
}
elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 30f, 30f, 8f, 0, 1, 0) || func_195()){
func_186();
}}}
}
else{
if(Local_105[2 /*10*/].f_7){
func_185(&Local_105, 2);
}
if(!PED::IS_PED_INJURED(iLocal_54)){
TASK::TASK_SMART_FLEE_COORD(iLocal_54, Local_51, 200f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iLocal_54, 1);
wait(0);
}
func_278();
}
break;
}}else{
func_183("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
func_278();
}}else{
if(ENTITY::DOES_ENTITY_EXIST(iLocal_53)){
if(!PED::IS_PED_INJURED(iLocal_53)){
if(func_182(iLocal_53, -251125078)){
if(func_181(iLocal_53, Local_51, 1) >=190f){
TASK::CLEAR_PED_TASKS(iLocal_53);
TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}}elseif(func_182(iLocal_53, joaat("script_task_stand_still"))){
TASK::CLEAR_PED_TASKS(iLocal_53);
TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_54)){
}
if(MISC::GET_GAME_TIMER() > iLocal_64 + 3000){
func_152();
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_132() && !func_129()){
PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PLAYER::PLAYER_ID());
if(!iLocal_83 && !bLocal_88){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_54)){
if(vdist(ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), -2956.26f, 487.97f, 15.46f) < 5f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 100f, 100f, 15f, 0, 1, 0)){
if(func_122(&Local_105, cLocal_121, sLocal_113, 3, 0, 0, 0)){
iLocal_83=1;
}}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -203.72f, -861.8f, 29.27f, 1) < 5f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 40f, 40f, 15f, 0, 1, 0)){
if(func_122(&Local_105, cLocal_121, sLocal_113, 3, 0, 0, 0)){
iLocal_83=1;
}}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 288.46f, -1256.71f, 28.44f, 1) < 5f){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 50f, 50f, 15f, 0, 1, 0)){
if(func_122(&Local_105, cLocal_121, sLocal_113, 3, 0, 0, 0)){
iLocal_83=1;
}}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 50f, 50f, 15f, 0, 1, 0)){
if(func_122(&Local_105, cLocal_121, sLocal_113, 3, 0, 0, 0)){
iLocal_83=1;
}}
}}
if(HUD::DOES_BLIP_EXIST(iLocal_57)){
if(!PED::IS_PED_INJURED(iLocal_53)){
if(iLocal_124){
if(ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), fLocal_130, fLocal_130, fLocal_130, 0, 1, 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, 0)){
if(timera() > 1000){
if(PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53)){
fLocal_130=vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1));
fLocal_130=(fLocal_130 * 1.5f);
settimera(0);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, 0);
}
}}elseif(!iLocal_126){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 25f, 25f, 25f, 0, 1, 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, 0)){
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 13, 0);
func_121();
iLocal_126=1;
}
}}}elseif(!iLocal_85){
if((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 0)){
func_122(&Local_105, cLocal_121, sLocal_111, 4, 0, 0, 0);
settimera(0);
fLocal_130=vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1));
fLocal_130=(fLocal_130 * 1.5f);
iLocal_124=1;
iLocal_85=1;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, 0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1)){
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, 0);
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_53)){
TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_53, iLocal_71, PLAYER::PLAYER_PED_ID(), 8, 35f, 4, 10f, 10f, 1);
}
else{
TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}
func_122(&Local_105, cLocal_121, sLocal_111, 4, 0, 0, 0);
settimera(0);
fLocal_130=vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_53, 1));
fLocal_130=(fLocal_130 * 1.5f);
iLocal_124=1;
iLocal_85=1;
}}}
if((iLocal_126 || iLocal_124) || bLocal_128){
if(HUD::DOES_BLIP_EXIST(iLocal_57)){
if(HUD::GET_BLIP_COLOUR(iLocal_57)==1){
}
else{
HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, 0);
HUD::SET_BLIP_COLOUR(iLocal_57, 1);
}}
if(!iLocal_126){
func_121();
iLocal_126=1;
}}else{
if(PED::IS_PED_IN_COMBAT(iLocal_53, PLAYER::PLAYER_PED_ID())){
bLocal_128=true;
}
func_119(iLocal_57, &uLocal_68);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_54)){
if(!iLocal_85){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 15f, 15f, 10f, 0, 1, 0)){
if(func_122(&Local_105, cLocal_121, sLocal_114, 4, 0, 0, 0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_147, 8f, -4f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_148, 8f, -4f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_147, 8f, -4f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_148, 8f, -4f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_149, 8f, -4f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
settimera(0);
iLocal_85=1;
}
}}elseif(!iLocal_86){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 15f, 15f, 10f, 0, 1, 0)){
if(((!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53)) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && func_118(iLocal_54, iLocal_53, 1) > 30f){
if(func_122(&Local_105, cLocal_121, sLocal_115, 4, 0, 0, 0)){
settimera(0);
iLocal_86=1;
}
}
}}elseif(!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_54)){
func_116(iLocal_54, "GENERIC_CURSE_MED", 24);
}}
if(func_114()){
func_113();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_54)){
Var0={
ENTITY::GET_ENTITY_COORDS(iLocal_54, 1) 
};
}
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_53, Var0, 25f, 25f, 25f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 12f, 12f, 12f, 0, 1, 0)){
if(timera() > 20000){
if(func_112(iLocal_53) && !PED::IS_PED_RAGDOLL(iLocal_53)){
if(func_122(&Local_105, cLocal_121, sLocal_116, 4, 0, 0, 0)){
bLocal_128=true;
settimera(0);
}
}
}}}elseif(func_112(iLocal_54)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, Global_19, 0, 1, 0)){
if(func_122(&Local_105, cLocal_121, sLocal_119, 4, 0, 0, 0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
bLocal_125=true;
func_278();
}}elseif(bLocal_128){
if(func_122(&Local_105, cLocal_121, sLocal_120, 4, 0, 0, 0)){
TASK::TASK_WANDER_STANDARD(iLocal_54, 1193033728, 0);
PED::FORCE_PED_MOTION_STATE(iLocal_54, joaat("MotionState_Walk"), 0, 0, 0);
bLocal_125=true;
func_278();
}}else{
TASK::TASK_WANDER_STANDARD(iLocal_54, 1193033728, 0);
PED::FORCE_PED_MOTION_STATE(iLocal_54, joaat("MotionState_Walk"), 0, 0, 0);
bLocal_125=true;
func_278();
}}else{
bLocal_125=true;
func_278();
}
}
elseif(func_114()){
if((PED::IS_PED_INJURED(iLocal_53) || PED::IS_PED_DEAD_OR_DYING(iLocal_53, 1)) || func_182(iLocal_53, joaat("script_task_writhe"))){
func_122(&Local_105, cLocal_121, sLocal_123, 4, 0, 0, 0);
func_109();
func_185(&Local_105, 2);
HUD::REMOVE_BLIP(&iLocal_57);
}
}}elseif(!HUD::DOES_BLIP_EXIST(uLocal_56)){
if(bLocal_93){
if(HUD::DOES_BLIP_EXIST(iLocal_58)){
HUD::REMOVE_BLIP(&iLocal_58);
}
iLocal_58=0;
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
iLocal_56=func_105(iLocal_54, 0, 0);
func_104(&uLocal_62);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_54)){
fLocal_80=vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_54, 0));
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_54);
}
if(fLocal_80 > 750f){
func_296(0);
}
}
else{
func_101();
}}else{
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(bLocal_93){
func_296(0);
}else{
func_278();
}
}
if(bLocal_98){
}
else{
func_2();
}
if(!bLocal_98){
if(!PED::IS_PED_INJURED(iLocal_54)){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_54, 0)) > (fLocal_80 + 100f)){
if(bLocal_93){
func_296(0);
}
else{
TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
func_278();
}}elseif(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_54, 0)) < fLocal_80){
fLocal_80=vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_54, 0));
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1)){
if(bLocal_93){
func_296(0);
}}}
}}}else{
func_1();
}}else{
func_1();
}}}}


void func_1(){
if(!PED::IS_PED_INJURED(iLocal_54)){
TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
func_116(iLocal_54, "GENERIC_FRIGHTENED_HIGH", 24);
PED::SET_PED_KEEP_TASK(iLocal_54, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_54, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54);
}
func_101();
if(bLocal_88){
if(HUD::DOES_BLIP_EXIST(iLocal_58)){
if(OBJECT::DOES_PICKUP_EXIST(uLocal_87)){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_87)) > 100f){
func_278();
}}}elseif(bLocal_93){
func_296(0);
}elseif(PED::IS_PED_INJURED(iLocal_53)){
func_278();
}}
if(HUD::DOES_BLIP_EXIST(iLocal_57)){
if(PED::IS_PED_INJURED(iLocal_53)){
HUD::REMOVE_BLIP(&iLocal_57);
}elseif(!func_114()){
func_278();
}}}


void func_2(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
struct<3> Var6;
struct<3> Var7;
bool bVar8;
float fVar9;
float fVar10;
char cVar11[16];
char cVar12[16];
var uVar13;
int iVar14;
if(!PED::IS_PED_INJURED(iLocal_54)){
if(!bLocal_97){
if(iLocal_127){
if(!iLocal_129){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 15f, 15f, 20f, 0, 1, 0)){
func_116(iLocal_54, "GENERIC_HI", 5);
iLocal_129=1;
}}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 296.13f, -894.01f, 28.23f, 1) < 5f){
if(fLocal_81==6f){
fLocal_81=5f;
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -2072.88f, -317.19f, 12.32f, 1) < 5f){
if(fLocal_81==6f){
fLocal_81=4f;
}}
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, fLocal_81, fLocal_81, fLocal_81, 0, 1, 0) && !func_100()){
if(func_97(2)){
HUD::CLEAR_HELP(1);
}
if(!func_129()){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(func_96(1, 0, 1)){
if(!MISC::IS_BIT_SET(Global_8370, 11) || func_95()){
if(!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
HUD::CLEAR_HELP(1);
if(func_94()){
func_93();
}
if(iLocal_99==joaat("prop_ld_wallet_pickup")){
iLocal_55=OBJECT::CREATE_OBJECT(iLocal_100, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
}
else{
iLocal_55=OBJECT::CREATE_OBJECT(iLocal_99, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}
ENTITY::SET_ENTITY_VISIBLE(iLocal_55, 0, 0);
func_84(1, 1, 1, 0, 0, 0, 0);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
while ((!func_82(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uLocal_82, 1, 1056964608, 0, 1, 0) || func_94()) || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_55)){
if(!func_82(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uLocal_82, 1, 1056964608, 0, 1, 0)){
}
if(func_94()){
}
if(!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_55)){
}
wait(0);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
while (func_94() || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_55)){
wait(0);
}
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
if(!PED::IS_PED_INJURED(iLocal_54)){
PED::SET_PED_CAN_RAGDOLL(iLocal_54, 0);
}
EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
EVENT::REMOVE_SHOCKING_EVENT(iLocal_67);
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
func_80();
func_74(0);
wait(0);
if(func_112(iLocal_54)){
if(PED::IS_PED_MALE(iLocal_54)){
sLocal_92="move_m@hurry@b";
}else{
sLocal_92="move_f@hurry@a";
}
}
STREAMING::REQUEST_CLIP_SET(sLocal_92);
bLocal_97=true;
settimera(0);
}}}
}}}else{
func_72(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), &fLocal_81, &uLocal_82);
if(!func_100()){
if(!func_182(iLocal_54, joaat("script_task_go_to_entity")) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
TASK::CLEAR_PED_TASKS(iLocal_54);
TASK::TASK_GO_TO_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
}}elseif(func_182(iLocal_54, joaat("script_task_go_to_entity"))){
TASK::CLEAR_PED_TASKS(iLocal_54);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_147, 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_148, 8f, -8f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_54, 0, 0);
}}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 25f, 25f, 20f, 0, 1, 1) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 30f, 30f, 20f, 0, 1, 2)){
if(!func_100()){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
TASK::CLEAR_PED_TASKS(iLocal_54);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}
iLocal_127=1;
}}}
if(bLocal_97){
switch (iLocal_96){
case 0:
if(((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())){
if(bLocal_78){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -712.9f, -819.32f, 22.73f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0)){
Local_76={
-710.1279f, -821.3084f, 22.6169f 
};
Local_77={
0f, 0f, 266.962f 
};
}elseif(!PED::IS_PED_INJURED(iLocal_54)){
Var7={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
func_69(iLocal_54, &Local_76, &Local_77, cLocal_140, sLocal_142);
if((Local_76.f_2 - Var7.f_2) > 20f){
Local_76={
Var7 
};
}
Local_76.f_2=(Local_76.f_2 + 2f);
MISC::GET_GROUND_Z_FOR_3D_COORD(Local_76, &(Local_76.f_2), 0, 0);
if(Local_76.f_2==0f){
Local_76={
Local_136 
};
Local_77.f_2=fLocal_137;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -203.72f, -861.8f, 29.27f, 1) < 5f){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0)){
if(Local_77.f_2 > 315f && Local_77.f_2 < 360f){
Local_77.f_2=251.4238f;
}
elseif(Local_77.f_2 > 120f && Local_77.f_2 < 212f){
Local_77.f_2=67.2304f;
}
Local_76={
-205.81f, -865.2f, 28.5f 
};
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -821.33f, -1082.43f, 10.14f, 1) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(Local_76, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1)){
Local_76={
-814.0593f, -1082.483f, 10.0671f 
};
Local_77.f_2=275.5752f;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -387.12f, 6045.79f, 30.5f, 1) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(Local_76, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1)){
Local_76={
-375.0627f, 6030.533f, 30.5313f 
};
Local_77.f_2=222.9049f;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -387.12f, 6045.79f, 30.5f, 1) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(Local_76, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1)){
Local_76={
-379.7835f, 6029.472f, 30.5014f 
};
Local_77.f_2=213.2611f;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 89.39f, 2f, 67.34f, 1) < 5f){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0)){
if(Local_77.f_2 > 128f && Local_77.f_2 < 195f){
if(Local_77.f_2 > 162f){
Local_77.f_2=220f;
}else{
Local_77.f_2=107f;
}
}
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 174.53f, 6637.64f, 30.57f, 1) < 5f){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0)){
if(Local_77.f_2 > 244.444f && Local_77.f_2 < 326.2103f){
Local_77.f_2=343.1367f;
}
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -3044.11f, 594.34f, 6.73f, 1) < 5f){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0)){
Local_76={
-3045.4f, 598.65f, 6.51f 
};
}}
Var4={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_140, sLocal_142, Local_76, Local_77, 0f, 2) 
};
Var5={
Var4 - Local_76 
};
Var5.f_2=0f;
fVar10=vmag(Var5);
MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), 0, 0);
fVar9=(Local_76.f_2 - Var4.f_2);
Local_77.f_0=MISC::ATAN2(fVar9, fVar10);
if(Local_77.f_0 > 20f || Local_77.f_0 < -330f){
Local_76={
Local_136 
};
Local_77.f_0=0f;
Local_77.f_2=fLocal_137;
Var4={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_140, sLocal_142, Local_76, Local_77, 0f, 2) 
};
Var5={
Var4 - Local_76 
};
Var5.f_2=0f;
fVar10=vmag(Var5);
MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), 0, 0);
fVar9=(Local_76.f_2 - Var4.f_2);
}}
if(func_68(Local_51, -526.58f, -1222.79f, 17.46f, 10f, 0)){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Local_76, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1)){
if(Local_77.f_2 < 35f || Local_77.f_2 > 275f){
if(Local_77.f_2 < 335f){
Local_77.f_2=260f;
}
else{
Local_77.f_2=55f;
}
}
elseif(Local_77.f_2 > 107.2072f && Local_77.f_2 < 210f){
if(Local_77.f_2 > 154.6742f){
Local_77.f_2=233f;
}
else{
Local_77.f_2=73f;
}
}}}
}
elseif(bLocal_63==4){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 183.6065f, 6636.653f, 30.6299f) < vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 172.2291f, 6631.007f, 30.7398f)){
Local_76={
183.6065f, 6636.653f, 30.6299f 
};
Local_77={
0f, 0f, 265f 
};
}else{
Local_76={
172.2291f, 6631.007f, 30.7398f 
};
Local_77={
0f, 0f, 132f 
};
}
}
else{
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(!PED::IS_PED_INJURED(iLocal_54)){
Var2={
ENTITY::GET_ENTITY_COORDS(iLocal_54, 1) 
};
}
Var3={
Var1 - Var2 
};
Local_76={
Var1 
};
Local_76={
Local_76.f_0, Local_76.f_1, (Local_76.f_2 - 1f) 
};
Local_77={
0f, 0f, MISC::GET_HEADING_FROM_VECTOR_2D(Var3.f_0, Var3.f_1) 
};
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_76, -535.795f, -1222.23f, 17.4567f, 1) < 5f){
Local_76={
-521.475f, -1210.47f, 17.1848f 
};
Local_77={
0f, 0f, 308.502f 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_71);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Local_134, &Local_135);
if(ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_76, (Local_135.f_1 + 1f), (Local_135.f_1 + 1f), 3f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_140, sLocal_142, Local_76, Local_77, 0, 2), (Local_135.f_1 + 1f), (Local_135.f_1 + 1f), 3f, 0, 1, 0)){
if(func_68(Local_51, -526.58f, -1222.79f, 17.46f, 10f, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0))){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0)){
Var6={
2.9f, 12f, 8f 
};
Local_73={
-543.34f, -1216.8f, 17.96f 
};
fLocal_75=337.5f;
bVar8=true;
}
else{
Var6={
2.9f, 12f, 8f 
};
Local_73={
-522.4418f, -1214.57f, 17.1848f 
};
fLocal_75=246.7714f;
bVar8=true;
}
if((Local_135.f_0 - Local_134.f_0) > Var6.f_0){
bVar8=false;
}
elseif((Local_135.f_1 - Local_134.f_1) > Var6.f_1){
bVar8=false;
}
elseif((Local_135.f_2 - Local_134.f_2) > Var6.f_2){
bVar8=false;
}
if(bVar8){
if(func_67(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Local_73, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_75);
VEHICLE::SET_VEHICLE_DOOR_LATCHED(iVar0, 0, 1, 1, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
VEHICLE::DELETE_VEHICLE(&iVar0);
}
}
}
elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -203.72f, -861.8f, 29.27f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0)){
Var6={
2.9f, 12f, 8f 
};
Local_73={
-187f, -855.51f, 29.02f 
};
fLocal_75=158.28f;
bVar8=true;
if((Local_135.f_0 - Local_134.f_0) > Var6.f_0){
bVar8=false;
}
elseif((Local_135.f_1 - Local_134.f_1) > Var6.f_1){
bVar8=false;
}
elseif((Local_135.f_2 - Local_134.f_2) > Var6.f_2){
bVar8=false;
}
if(bVar8){
if(func_67(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Local_73, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_75);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
VEHICLE::DELETE_VEHICLE(&iVar0);
}
}
}
elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -387.12f, 6045.79f, 30.5f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0)){
Var6={
2.9f, 12f, 8f 
};
Local_73={
-395.84f, 6051.16f, 31.19f 
};
fLocal_75=139.92f;
bVar8=true;
if((Local_135.f_0 - Local_134.f_0) > Var6.f_0){
bVar8=false;
}
elseif((Local_135.f_1 - Local_134.f_1) > Var6.f_1){
bVar8=false;
}
elseif((Local_135.f_2 - Local_134.f_2) > Var6.f_2){
bVar8=false;
}
if(bVar8){
if(func_67(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Local_73, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_75);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
VEHICLE::DELETE_VEHICLE(&iVar0);
}
}
}
elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -2956.78f, 488.19f, 14.47f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0)){
Var6={
2.9f, 12f, 8f 
};
Local_73={
-2972.31f, 490.07f, 15.03f 
};
fLocal_75=357.64f;
bVar8=true;
if((Local_135.f_0 - Local_134.f_0) > Var6.f_0){
bVar8=false;
}
elseif((Local_135.f_1 - Local_134.f_1) > Var6.f_1){
bVar8=false;
}
elseif((Local_135.f_2 - Local_134.f_2) > Var6.f_2){
bVar8=false;
}
if(bVar8){
if(func_67(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Local_73, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_75);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
VEHICLE::DELETE_VEHICLE(&iVar0);
}
}
}
elseif((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 174.53f, 6637.64f, 30.57f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0)){
Var6={
2.9f, 12f, 8f 
};
Local_73={
184.05f, 6628.75f, 31.27f 
};
fLocal_75=89.37f;
bVar8=true;
if((Local_135.f_0 - Local_134.f_0) > Var6.f_0){
bVar8=false;
}
elseif((Local_135.f_1 - Local_134.f_1) > Var6.f_1){
bVar8=false;
}
elseif((Local_135.f_2 - Local_134.f_2) > Var6.f_2){
bVar8=false;
}
if(bVar8){
if(func_67(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Local_73, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_75);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
VEHICLE::DELETE_VEHICLE(&iVar0);
}
}
}
else{
Var6={
2.9f, 12f, 8f 
};
fLocal_75=ENTITY::GET_ENTITY_HEADING(iVar0);
Local_73={
func_65(Local_76, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_140, sLocal_142, Local_76, Local_77, 0, 2)) 
};
if(func_64(0f, 0f, 0f, Local_73, 0)){
Local_73={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))){
Local_135.f_0=(Local_135.f_0 + 3f);
Local_135.f_1=(Local_135.f_1 + 3f);
}
bVar8=true;
if((Local_135.f_0 - Local_134.f_0) > Var6.f_0){
bVar8=false;
}
elseif((Local_135.f_1 - Local_134.f_1) > Var6.f_1){
bVar8=false;
}
elseif((Local_135.f_2 - Local_134.f_2) > Var6.f_2){
bVar8=false;
}
if(bVar8){
if(func_67(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Local_73, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_75);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
VEHICLE::DELETE_VEHICLE(&iVar0);
}
}
}}}
}
if(func_67(iVar0)){
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Local_134, &Local_135);
if(ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_76, (Local_135.f_1 + 1f), (Local_135.f_1 + 1f), 1f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_140, sLocal_142, Local_76, Local_77, 0, 2), (Local_135.f_1 + 1f), (Local_135.f_1 + 1f), 1f, 0, 1, 0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Local_138, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_139);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
ENTITY::SET_ENTITY_VISIBLE(iLocal_55, 1, 0);
}
VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 0);
MISC::CLEAR_AREA_OF_PROJECTILES(Local_76, 20f, 0);
MISC::CLEAR_AREA_OF_PEDS(Local_76, 10f, 0);
MISC::CLEAR_AREA(Local_76, (Local_135.f_1 + 1f), 1, 0, 0, 0);
FIRE::STOP_FIRE_IN_RANGE(Local_76, 25f);
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
uLocal_66=PED::CREATE_SYNCHRONIZED_SCENE(Local_76, Local_77, 2);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_66, 0);
uLocal_95=CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
CAM::SET_CAM_FOV(uLocal_95, 15f);
CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_95, uLocal_66, sLocal_143, cLocal_140);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_66, cLocal_140, sLocal_141, 1000f, -1000f, 1024, 0, 1148846080, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
if(!PED::IS_PED_INJURED(iLocal_54)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_54);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_54, uLocal_66, cLocal_140, sLocal_142, 1000f, -4f, 0, 0, 1148846080, 0);
}
CAM::SET_CAM_ACTIVE(uLocal_95, 1);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
StringCopy(&cVar11, sLocal_122, 16);
StringConCat(&cVar11, "_1", 16);
StringCopy(&cVar12, cLocal_118, 16);
StringConCat(&cVar12, "_1", 16);
func_52(&Local_105, cLocal_121, sLocal_122, &cVar11, cLocal_118, &cVar12, 7, 0, 0);
settimera(0);
EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
func_51(joaat("rc_wallets_returned"), 1);
STATS::STAT_GET_INT(joaat("rc_wallets_returned"), &uVar13, -1);
iLocal_96++;
}else{
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
}
if(PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())){
}
if(TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())){
}}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
break;
case 1:
if((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_66) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_66)==1f) || func_48()){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 0, 0);
if(!PED::IS_PED_INJURED(iLocal_54)){
PED::SET_PED_MONEY(iLocal_54, (iLocal_131 - (iLocal_131 / 10)));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
PED::SET_PED_MOVEMENT_CLIPSET(iLocal_54, sLocal_92, 1048576000);
}
if(CAM::IS_SCREEN_FADED_OUT()){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_54);
Var4={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_140, sLocal_142, Local_76, Local_77, 1f, 2) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), 0, 0);
ENTITY::SET_ENTITY_COORDS(iLocal_54, Var4, 1, 0, 0, 1);
Var4={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_140, sLocal_142, Local_76, Local_77, 1f, 2) 
};
ENTITY::SET_ENTITY_HEADING(iLocal_54, Var4.f_2);
}
Var4={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_140, sLocal_142, Local_76, Local_77, 1f, 2) 
};
if(func_68(Local_51, -526.58f, -1222.79f, 17.46f, 10f, 0)){
if(func_47(PLAYER::PLAYER_PED_ID(), 215.68f, 60f)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_54), 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}elseif(func_47(PLAYER::PLAYER_PED_ID(), 122.0371f, 60f)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_54), 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}else{
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_54), 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}
}
elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 288.46f, -1256.71f, 28.44f, 1) < 5f){
if(func_47(PLAYER::PLAYER_PED_ID(), 200.8887f, 60f)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_54), 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}elseif(func_47(PLAYER::PLAYER_PED_ID(), 347.8599f, 60f)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_54), 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}else{
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_54), 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}
}
else{
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_54, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_54), 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}
PED::FORCE_PED_MOTION_STATE(iLocal_54, joaat("MotionState_Walk"), 1, 0, 0);
PED::SET_PED_CAN_RAGDOLL(iLocal_54, 1);
PED::SET_PED_KEEP_TASK(iLocal_54, 1);
func_46(&iLocal_71);
settimerb(0);
CAM::STOP_GAMEPLAY_HINT(0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
if(!func_45()){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
}
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_55)){
OBJECT::DELETE_OBJECT(&iLocal_55);
}
if(!PED::IS_PED_INJURED(iLocal_54)){
PED::SET_PED_MONEY(iLocal_54, (iLocal_131 - (iLocal_131 / 10)));
}
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_CAM_ACTIVE(uLocal_95, 0);
func_44();
CAM::DESTROY_CAM(uLocal_95, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(500);
while (CAM::IS_SCREEN_FADING_IN()){
wait(0);
}
}
iVar14=(iLocal_131 / 100);
iVar14 *=90;
wait(0);
CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
func_84(0, 1, 1, 0, 0, 0, 0);
func_3(func_38(), 1, iVar14);
func_296(1);
}else{
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
if(ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detach"))){
if(!PED::IS_PED_INJURED(iLocal_54) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID())){
ENTITY::DETACH_ENTITY(iLocal_55, 0, 1);
if(PED::IS_PED_MALE(iLocal_54)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_55, iLocal_54, PED::GET_PED_BONE_INDEX(iLocal_54, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}
else{
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_55, iLocal_54, PED::GET_PED_BONE_INDEX(iLocal_54, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}}}
}}
break;
}}}}

int func_3(int iParam0, int iParam1, int iParam2){
if(func_37(iParam0)==3){
return 0;
}
if(func_37(iParam0)==4){
return 0;
}
return func_4(func_37(iParam0), 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
float fVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
func_36();
if(iParam3 < 1){
return 0;
}
fVar0=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_35(99, 1);
func_51(joaat("sp0_money_total_spent"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_total_spent"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_total_spent"), iParam3);
break;
}
func_19(0);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_16(5)){
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
func_51(joaat("sp0_money_spent_on_tattoos"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_spent_on_tattoos"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_spent_on_tattoos"), iParam3);
break;
}
if(func_16(1)){
fVar0=0f;
bVar1=true;
}
break;
case 21:
switch (iParam0){
case 0:
func_51(joaat("sp0_money_spent_on_taxis"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_spent_on_taxis"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_spent_on_taxis"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_51(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
func_51(joaat("sp0_money_spent_property"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_spent_property"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_spent_property"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_51(joaat("sp0_money_spent_in_clothes"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_spent_in_clothes"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_spent_in_clothes"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_51(joaat("sp0_money_spent_on_hairdos"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_spent_on_hairdos"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_spent_on_hairdos"), iParam3);
break;
}
if(func_16(0)){
fVar0=0f;
bVar1=false;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_51(joaat("sp0_money_spent_in_buying_guns"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_spent_in_buying_guns"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_spent_in_buying_guns"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_51(joaat("sp0_money_spent_car_mods"), iParam3);
break;
case 1:
func_51(joaat("sp1_money_spent_car_mods"), iParam3);
break;
case 2:
func_51(joaat("sp2_money_spent_car_mods"), iParam3);
break;
}
func_15(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_35(95, iParam3);
break;
case 1:
func_35(97, iParam3);
break;
case 2:
func_35(96, iParam3);
break;
}
func_35(98, iParam3);
break;
}
iVar2=iParam0;
iParam3=floor((fVar0 * to_float(iParam3)));
iVar3=0;
iVar4=iParam3;
if(fVar0==0f){
func_7(bVar1);
return 1;
}elseif(fVar0 !=1f){
func_7(bVar1);
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
func_51(joaat("sp0_total_cash_earned"), iParam3);
break;
case 1:
func_51(joaat("sp1_total_cash_earned"), iParam3);
break;
case 2:
func_51(joaat("sp2_total_cash_earned"), iParam3);
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
func_6(iParam0);
if(Global_43377==15){
func_5(0);
}
return 1;
}


void func_5(bool bParam0){
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


void func_6(int iParam0){
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


void func_7(bool bParam0){
bool bVar0;
char cVar1[64];
if(bParam0==8){
func_14(129, 0, -1);
return;
}
if(bParam0==9){
func_14(135, 0, -1);
return;
}
if(bParam0==10){
func_14(136, 0, -1);
return;
}
if(bParam0==11){
func_14(137, 0, -1);
return;
}
if(bParam0==12){
func_10(8272, 0, -1, 1);
return;
}
if(bParam0==13){
func_10(8273, 0, -1, 1);
return;
}
if(bParam0==14){
func_10(8274, 0, -1, 1);
return;
}
if(bParam0==15){
func_10(8275, 0, -1, 1);
return;
}
if(bParam0==16){
func_10(8276, 0, -1, 1);
return;
}
if(bParam0==17){
func_10(8277, 0, -1, 1);
return;
}
bVar0=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_113810.f_20567.f_471, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_113810.f_20567.f_471, bParam0) || MISC::IS_BIT_SET(Global_2359296[func_9() /*5568*/].f_681.f_10, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_9() /*5568*/].f_681.f_10), bParam0);
}
if(bVar0){
StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_8(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
}}


char* func_8(bool bParam0){
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

int func_9(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_10(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_11(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


var func__11(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_12(uParam1));
}

int func_12(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_13();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_13(){
return Global_1574918;
}


void func_14(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_13();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_15(int iParam0){
func_35(93, iParam0);
func_35(29, iParam0);
func_35(30, iParam0);
}

int func_16(int iParam0){
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
return func_18(129, -1);
}
if(iParam0==9){
return func_18(135, -1);
}
if(iParam0==10){
return func_18(136, -1);
}
if(iParam0==11){
return func_18(137, -1);
}
if(iParam0==12){
iVar0=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar1=func_17(8272, -1);
if(iVar1==0 || iVar0 >=iVar1){
return 0;
}
return 1;
}
if(iParam0==13){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar3=func_17(8273, -1);
if(iVar3==0 || iVar2 >=iVar3){
return 0;
}
return 1;
}
if(iParam0==14){
iVar4=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar5=func_17(8274, -1);
if(iVar5==0 || iVar4 >=iVar5){
return 0;
}
return 1;
}
if(iParam0==15){
iVar6=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar7=func_17(8275, -1);
if(iVar7==0 || iVar6 >=iVar7){
return 0;
}
return 1;
}
if(iParam0==16){
iVar8=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar9=func_17(8276, -1);
if(iVar9==0 || iVar8 >=iVar9){
return 0;
}
return 1;
}
if(iParam0==17){
iVar10=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar11=func_17(8277, -1);
if(iVar11==0 || iVar10 >=iVar11){
return 0;
}
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113810.f_20567.f_471, iParam0);
}
return MISC::IS_BIT_SET(Global_2359296[func_9() /*5568*/].f_681.f_10, iParam0);
}

int func_17(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam0 !=14385){
iVar0=func_11(iParam0, iParam1);
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__18(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_13();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_19(bool bParam0){
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
func_34(27, iVar1);
}
if(iVar1 < 200000000){
return 0;
}
func_20(27, 1);
return 1;
}

int func_20(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_21(iParam0, iParam1);
}

int func_21(int iParam0, int iParam1){
if(func_33(14) && !func_32(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32534 !=0 && !Global_78689){
return 0;
}
if(func_31(&Global_4542602)){
if(func_29(&Global_4542602, iParam0)){
return 0;
}
if(func_22(&Global_4542602, iParam0)){
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

int func_22(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_33(14) && !func_32(iParam1)){
return 0;
}
if(func_29(uParam0, iParam1)){
return 0;
}
if(func_28(uParam0) < 0f){
func_27(uParam0, 0);
}
func_25(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_23(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_23(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_33(14) && !func_32(iParam1)){
return 0;
}
if(func_29(uParam0, iParam1)){
return 0;
}
if(func_28(uParam0) < 0f){
func_27(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_24(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_24(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_25(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_26(uParam0, iVar0);
iVar0++;
}
func_27(uParam0, (Global_4542601 - 0.5f));
}


void func_26(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_27(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_28(var uParam0){
return uParam0->f_80;
}


bool func_29(var uParam0, int iParam1){
return func_30(uParam0, iParam1) !=-1;
}

int func_30(var uParam0, int iParam1){
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


bool func_31(var uParam0){
return uParam0->f_79==1;
}

int func_32(int iParam0){
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


bool func_33(int iParam0){
return Global_43377==iParam0;
}

int func_34(int iParam0, int iParam1){
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


void func_35(int iParam0, int iParam1){
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


void func_36(){
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

int func_37(int iParam0){
return Global_2058[iParam0 /*29*/].f_17;
}

int func_38(){
func_39();
return Global_113810.f_2366.f_539.f_4321;
}


void func_39(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_42(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_41(PLAYER::PLAYER_PED_ID());
if(func_40(iVar0) && (!func_33(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_40(Global_113810.f_2366.f_539.f_4321)){
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


bool func_40(int iParam0){
return iParam0 < 3;
}

int func_41(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_42(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_42(int iParam0){
if(func_40(iParam0)){
return func_43(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__43(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_44(){
var uVar0;
uVar0=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, 1, 2);
CAM::SET_CAM_ACTIVE(uVar0, 1);
}

int func_45(){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
return 1;
}
return 0;
}


void func_46(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
}}}

int func_47(int iParam0, float fParam1, float fParam2){
float fVar0;
float fVar1;
fVar0=(fParam1 + (fParam2 / 2f));
if(fVar0 > 360f){
fVar0=(fVar0 - 360f);
}
fVar1=(fParam1 - (fParam2 / 2f));
if(fVar1 < 0f){
fVar1=(fVar1 + 360f);
}
if(!PED::IS_PED_INJURED(iParam0)){
if(fVar0 > fVar1){
if(ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 && ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1){
return 1;
}else{
return 0;
}}elseif(ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 || ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1){
return 1;
}else{
return 0;
}}
return 0;
}

int func_48(){
if(func_49(1000)){
CAM::DO_SCREEN_FADE_OUT(500);
while (CAM::IS_SCREEN_FADING_OUT()){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
wait(0);
}
return 1;
}
return 0;
}

int func_49(int iParam0){
if(CAM::IS_SCREEN_FADED_IN()){
if((MISC::GET_GAME_TIMER() - Global_28) > iParam0){
Global_27=MISC::GET_GAME_TIMER();
}
Global_28=MISC::GET_GAME_TIMER();
if((MISC::GET_GAME_TIMER() - Global_27) > iParam0){
if(func_50()){
Global_27=MISC::GET_GAME_TIMER();
return 1;
}}}
return 0;
}

int func_50(){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18)){
return 1;
}
return 0;
}


void func_51(int iParam0, int iParam1){
int iVar0;
STATS::STAT_GET_INT(iParam0, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

int func_52(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8){
var uVar0;
var uVar1;
func_63(uParam0, 145, sParam1, iParam7, iParam8, 0);
if(iParam6 > 7){
if(iParam6 < 12){
iParam6=7;
}}
uVar0=10;
uVar1=10;
func_62(2, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
return func_53(&uVar0, &uVar1, iParam6, 0);
}

int func_53(var uParam0, var uParam1, int iParam2, bool bParam3){
int iVar0;
Global_21846=0;
if(Global_21845==0 || Global_21847==2){
if(Global_21845 !=0){
if(iParam2 > Global_21847){
if(bParam3==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20500.f_1=3;
Global_21845=0;
Global_21846=1;
Global_21898=0;
Global_21841=0;
Global_21842=0;
}else{
func_61();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_60(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_59();
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
Global_22841=Global_22842;
Global_22837=Global_22838;
Global_22839=Global_22840;
Global_21464.f_368=Global_22832;
Global_21464.f_369=Global_22833;
Global_21464.f_370=Global_22834;
Global_21841=Global_21842;
Global_21843=Global_21844;
if(Global_22103==0){
Global_21999[0 /*6*/]={
Global_22025[0 /*6*/] 
};
Global_21999[1 /*6*/]={
Global_22025[1 /*6*/] 
};
Global_22051[0 /*6*/]={
Global_22077[0 /*6*/] 
};
Global_22051[1 /*6*/]={
Global_22077[1 /*6*/] 
};
Global_22012[0 /*6*/]={
Global_22038[0 /*6*/] 
};
Global_22012[1 /*6*/]={
Global_22038[1 /*6*/] 
};
Global_22064[0 /*6*/]={
Global_22090[0 /*6*/] 
};
Global_22064[1 /*6*/]={
Global_22090[1 /*6*/] 
};
}
if(Global_21851){
MISC::CLEAR_BIT(&Global_8370, 20);
MISC::CLEAR_BIT(&Global_8371, 17);
MISC::CLEAR_BIT(&Global_8372, false);
if(bParam3){
func_58();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
if(iParam2==13){
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
if(func_57()){
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
if(Global_22103==0){
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
}}}}
if(func_56()){
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
}}
func_55();
Global_21855=bParam3;
}
Global_21847=iParam2;
if(Global_21841 > 0){
iVar0=0;
while (iVar0 < Global_21841){
StringCopy(&(Global_21464.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
StringCopy(&(Global_21464.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
iVar0++;
}}
Global_20711=0;
func_54();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam2 < Global_21847 || iParam2==Global_21847){
return 0;
}
if(iParam2==2){}else{
func_61();
}
return 0;
}


void func_54(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_55(){
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

int func_56(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_57(){
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


void func_58(){
if(func_33(14)){
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
Global_20500=func_38();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


void func_59(){
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


bool func_60(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_61(){
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


void func_62(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16){
Global_21842=iParam0;
Global_21852=0;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22842=0;
Global_2883585=0;
(*uParam1)[0]=uParam3;
(*uParam2)[0]=uParam4;
(*uParam1)[1]=uParam5;
(*uParam2)[1]=uParam6;
(*uParam1)[2]=iParam7;
(*uParam2)[2]=iParam8;
(*uParam1)[3]=iParam9;
(*uParam2)[3]=iParam10;
(*uParam1)[4]=iParam11;
(*uParam2)[4]=iParam12;
(*uParam1)[5]=iParam13;
(*uParam2)[5]=iParam14;
(*uParam1)[6]=iParam15;
(*uParam2)[6]=iParam16;
}


void func_63(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21299={
*uParam0 
};
Global_7686=iParam1;
StringCopy(&Global_21915, sParam2, 24);
Global_22834=iParam5;
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


bool func_64(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


Vector3 func__65(struct<3> Param0, struct<3> Param1){
int iVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
int iVar5;
int iVar6;
int iVar7;
var uVar8;
var uVar9;
struct<3> Var10;
struct<3> Var11;
var uVar12;
var uVar13;
iVar5=0;
iVar6=1;
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
}
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var3, &Var4);
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, 3, &Var2, 1, 1077936128, 0);
if(vdist(Param0, -3039.655f, 602.4346f, 6.5719f) <=25f){
Var1={
-3045.49f, 604.46f, 7.02f 
};
iVar5=8;
}elseif(vdist(Param0, 288.06f, -1257.1f, 28.44f) <=25f){
Var1={
278.97f, -1255.06f, 28.88f 
};
iVar5=8;
}
while (iVar5 < 8){
switch (iVar5){
case 0:
if(vdist(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f)) < vdist(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f))){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f) 
};
}else{
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f) 
};
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
Var10={
func_66(Var1, 0f, Var4) 
};
Var11={
func_66(Var1, 0f, Var3) 
};
uVar13=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
iVar5++;
}else{
iVar5=8;
}}else{
iVar5=8;
}
break;
case 1:
if(SHAPETEST::GET_SHAPE_TEST_RESULT(uVar13, &iVar7, &uVar9, &uVar8, &uVar12)==2){
if(iVar7 !=0){
if(iVar6 >=3){
iVar6=1;
iVar5=2;
}
else{
iVar6++;
iVar5=0;
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <=5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, 1) <=5f){
if(iVar6 >=3){
iVar6=1;
iVar5=2;
}
else{
iVar6++;
iVar5=0;
}}else{
iVar5=8;
}}
break;
case 2:
if(vdist(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f)) < vdist(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f))){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f) 
};
}else{
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f) 
};
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
Var10={
func_66(Var1, 0f, Var4) 
};
Var11={
func_66(Var1, 0f, Var3) 
};
uVar13=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
iVar5++;
}else{
iVar5=8;
}}else{
iVar5=8;
}
break;
case 3:
if(SHAPETEST::GET_SHAPE_TEST_RESULT(uVar13, &iVar7, &uVar9, &uVar8, &uVar12)==2){
if(iVar7 !=0){
if(iVar6 >=3){
iVar6=1;
iVar5=4;
}
else{
iVar6++;
iVar5=2;
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <=5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, 1) <=5f){
if(iVar6 >=3){
iVar6=1;
iVar5=4;
}
else{
iVar6++;
iVar5=2;
}}else{
iVar5=8;
}}
break;
case 4:
if(vdist(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)) < vdist(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f))){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) 
};
}else{
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) 
};
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
Var10={
func_66(Var1, 0f, Var4) 
};
Var11={
func_66(Var1, 0f, Var3) 
};
uVar13=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
iVar5++;
}else{
iVar5=8;
}}else{
iVar5=8;
}
break;
case 5:
if(SHAPETEST::GET_SHAPE_TEST_RESULT(uVar13, &iVar7, &uVar9, &uVar8, &uVar12)==2){
if(iVar7 !=0){
if(iVar6 >=3){
iVar6=1;
iVar5=6;
}
else{
iVar6++;
iVar5=4;
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <=5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, 1) <=5f){
if(iVar6 >=3){
iVar6=1;
iVar5=6;
}
else{
iVar6++;
iVar5=4;
}}else{
iVar5=8;
}}
break;
case 6:
if(vdist(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)) < vdist(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f))){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) 
};
}else{
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) 
};
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
Var10={
func_66(Var1, 0f, Var4) 
};
Var11={
func_66(Var1, 0f, Var3) 
};
uVar13=SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
iVar5++;
}else{
iVar5=8;
}}else{
iVar5=8;
}
break;
case 7:
if(SHAPETEST::GET_SHAPE_TEST_RESULT(uVar13, &iVar7, &uVar9, &uVar8, &uVar12)==2){
if(iVar7 !=0){
if(iVar6 >=3){
iVar6=1;
iVar5=8;
}
else{
iVar6++;
iVar5=6;
}}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <=5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, 1) <=5f){
if(iVar6 >=3){
iVar6=1;
iVar5=8;
}
else{
iVar6++;
iVar5=6;
}}else{
iVar5=8;
}}
break;
case 8:
break;
}
wait(0);
}
return Var1;
}


Vector3 func__66(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3){
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

int func_67(int iParam0){
if(func_112(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}

int func_68(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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


void func_69(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
var uVar5;
int iVar6;
var uVar7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
var uVar11;
iVar0=0;
iVar1=0;
iVar2=1;
*uParam1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
uParam2->f_2=func_71(iParam0, PLAYER::PLAYER_PED_ID(), 1);
fVar3=func_71(iParam0, PLAYER::PLAYER_PED_ID(), 1);
fVar4=func_71(iParam0, PLAYER::PLAYER_PED_ID(), 1);
Var10={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
if(STREAMING::HAS_ANIM_DICT_LOADED(sParam3)){
Var9={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0, 2) 
};
}else{
Var9={
*uParam1 + Vector(0f, 5f, 5f) 
};
}
while (iVar0 < 2){
switch (iVar0){
case 0:
if(iVar1 > 20){
uParam2->f_2=func_70(ENTITY::GET_ENTITY_COORDS(iParam0, 0), *uParam1, 1);
*uParam1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 0), uParam2->f_2, Var10) 
};
iVar0=2;
}else{
uVar5=SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, Var9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
iVar0++;
}
break;
case 1:
if(SHAPETEST::GET_SHAPE_TEST_RESULT(uVar5, &iVar6, &Var8, &uVar7, &uVar11)==2){
if(iVar6 !=0){
if(Var8.f_2 > (uParam1->f_2 + 8.5f)){
iVar0++;
}
else{
if(iVar1 <=3){
fVar4=(fVar4 + 7.5f);
}else{
fVar4=(fVar3 - (7.5f * IntToFloat(iVar2)));
iVar2++;
}
*uParam1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar4, Var10) 
};
iVar1++;
iVar0=0;
}}else{
if(iVar1 > 0){
uParam2->f_2=func_70(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
}
iVar0++;
}}
break;
case 2:
break;
}
wait(0);
}}


float func_70(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, int iParam4){
float fVar0;
float fVar1;
float fVar2;
fVar1=(Param2.f_0 - Param0.f_0);
fVar2=(Param2.f_1 - Param0.f_1);
if(fVar2 !=0f){
fVar0=MISC::ATAN2(fVar1, fVar2);
}elseif(fVar1 < 0f){
fVar0=-90f;
}else{
fVar0=90f;
}
if(iParam4==1){
fVar0=(fVar0 * -1f);
if(fVar0 < 0f){
fVar0=(fVar0 + 360f);
}}
return fVar0;
}


float func_71(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
struct<3> Var1;
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
return func_70(Var0, Var1, iParam2);
}


void func_72(struct<3> Param0, float fParam1, var uParam2){
bool bVar0;
struct<3> Var1;
float fVar2;
bVar0=false;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Param0 
};
fVar2=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
if(func_73(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar2, 15f)){
bVar0=true;
}
Var1={
Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
fVar2=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
if(func_73(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar2, 15f)){
bVar0=true;
}}
if(bVar0){
if(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f){
*fParam1=(6f * 4f);
}elseif(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f){
*fParam1=(6f * 3f);
}elseif(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f){
*fParam1=(6f * 2f);
}else{
*fParam1=6f;
}
*uParam2=((*fParam1 / 1.33f) - 1f);
}else{
*fParam1=6f;
*uParam2=((*fParam1 / 1.33f) - 1f);
}}

int func_73(int iParam0, float fParam1, float fParam2){
float fVar0;
float fVar1;
float fVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
fVar0=ENTITY::GET_ENTITY_HEADING(iParam0);
fVar2=(fParam1 - fParam2);
if(fVar2 < 0f){
fVar2=(fVar2 + 360f);
}
fVar1=(fParam1 + fParam2);
if(fVar1 >=360f){
fVar1=(fVar1 - 360f);
}
if(fVar1 > fVar2){
if(fVar0 < fVar1 && fVar0 > fVar2){
return 1;
}}elseif(fVar0 < fVar1 || fVar0 > fVar2){
return 1;
}}
return 0;
}


void func_74(int iParam0){
if(func_79()){
return;
}
if(!Global_20500.f_1==1){
if(func_78(0)){
func_75(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_75(int iParam0){
if(func_79()){
return;
}
if(Global_20704){
if(func_77()){
func_76(1, 1);
}else{
func_76(0, 0);
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
if(!func_56()){
Global_20500.f_1=3;
}}


void func_76(bool bParam0, bool bParam1){
if(bParam0){
if(func_78(0)){
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


bool func_77(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_78(int iParam0){
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


bool func_79(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_80(){
Global_20711=0;
func_81();
}


void func_81(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}

int func_82(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
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
func_83(iParam0);
if((MISC::GET_GAME_TIMER() - Global_29) > 500){
VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, uParam1, iParam2, iParam4);
}
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <=fParam3){
return 1;
}}
return 0;
}


void func_83(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


void func_84(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_92(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20500.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_56()){
Global_20500.f_1=3;
}
Global_21845=5;
}
func_91(1, iParam3, iParam2, 0);
Global_63491=1;
Global_75819=1;
Global_78687=1;
}else{
func_92(0);
HUD::THEFEED_RESUME();
Global_63491=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_91(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_89(PLAYER::PLAYER_ID())) && !func_86(PLAYER::PLAYER_ID(), 0)) && !func_85()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_89(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78687=0;
}}


bool func_85(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}


bool func_86(int iParam0, int iParam1){
bool bVar0;
if(!func_88(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_87(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_87(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_13();
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

int func_88(var uParam0){
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

int func_89(int iParam0){
if(func_86(iParam0, 0)){
return 1;
}
if(func_90()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_90(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_91(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_92(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 13);
}else{
MISC::CLEAR_BIT(&Global_8370, 13);
}}


void func_93(){
Global_20711=0;
func_61();
}

int func_94(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}

int func_95(){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_94()){
return 1;
}}
return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
if(MISC::IS_MINIGAME_IN_PROGRESS()){
return 0;
}
if(bParam0){
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}}
iVar0=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
return 0;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(bParam0){
if(ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
return 0;
}}
if(bParam2){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) !=PLAYER::PLAYER_PED_ID()){
return 0;
}}}
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f){
return 0;
}}}elseif(bParam1){
return 0;
}
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())){
return 0;
}
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())){
return 0;
}
return 1;
}


bool func_97(int iParam0){
return func_98(func_99(iParam0));
}


bool func_98(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


char* func_99(int iParam0){
char* sVar0;
sVar0="";
switch (iParam0){
case 0:
sVar0="AM_H_REFS";
break;
case 1:
sVar0="RE_FLASHBLIP";
break;
case 2:
sVar0="RE_HANDOVER";
break;
}
return sVar0;
}

int func_100(){
switch (iLocal_70){
case 1:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0)){
return 1;
}
break;
case 2:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0)){
return 1;
}
break;
case 3:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0)){
return 1;
}
break;
case 4:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0)){
return 1;
}
break;
case 6:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0)){
return 1;
}
break;
case 8:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0)){
return 1;
}
break;
case 11:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0)){
return 1;
}
break;
case 16:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0)){
return 1;
}
break;
case 17:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0)){
return 1;
}
break;
case 18:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0)){
return 1;
}
break;
case 19:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0)){
return 1;
}
break;
case 22:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0)){
return 1;
}
break;
case 23:
if((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)){
return 1;
}
break;
case 25:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0)){
return 1;
}
break;
case 30:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0)){
return 1;
}
break;
case 31:
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0)){
return 1;
}
break;
default:
break;
}
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) !=0){
return 1;
}
return 0;
}


void func_101(){
var uVar0;
if(!bLocal_93){
if(iLocal_124){
func_109();
}else{
if(!PED::IS_PED_INJURED(iLocal_53)){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 25f, 25f, 25f, 0, 1, 0)){
iLocal_124=1;
}}}else{
iLocal_124=1;
}
func_119(iLocal_57, &uLocal_68);
}
if(!bLocal_125){
if(bLocal_88){
if(OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_87)){
func_51(joaat("rc_wallets_recovered"), 1);
STATS::STAT_GET_INT(joaat("rc_wallets_recovered"), &uVar0, -1);
PAD::SET_CONTROL_SHAKE(0, 200, 250);
func_102(2);
bLocal_93=true;
}elseif(HUD::DOES_BLIP_EXIST(iLocal_58)){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_87)) > 150f){
if(PED::IS_PED_INJURED(iLocal_54)){
func_278();
}
elseif(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_54, 1)) > 100f){
func_278();
}}}}}}}


void func_102(int iParam0){
switch (iParam0){
case 0:
if(Global_113810.f_24998.f_2 < 3){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_103(func_99(iParam0), -1);
Global_113810.f_24998.f_2++;
MISC::SET_BIT(&Global_113806, false);
}}
break;
case 1:
if(!MISC::IS_BIT_SET(Global_113806, 1)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_103(func_99(iParam0), -1);
Global_113810.f_24998.f_3++;
MISC::SET_BIT(&Global_113806, true);
}}
break;
case 2:
if(!MISC::IS_BIT_SET(Global_113806, 2)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_103(func_99(iParam0), -1);
Global_113810.f_24998.f_4++;
MISC::SET_BIT(&Global_113806, 2);
}}
break;
}}


void func_103(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_104(var uParam0){
*uParam0=-99;
}

int func_105(int iParam0, bool bParam1, int iParam2){
iParam2=iParam2;
return func_106(iParam0, bParam1, 145);
}

int func_106(var uParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=func_107(uParam0, !bParam1, 0);
if((iParam2 !=145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2058[iParam2 /*29*/].f_3));
}
return iVar0;
}

int func_107(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(iVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return iVar0;
}


float func_108(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_109(){
int iVar0;
var uVar1;
iVar0=joaat("pickup_money_purse");
if(!bLocal_88){
MISC::SET_BIT(&uVar1, 3);
MISC::SET_BIT(&uVar1, 4);
MISC::SET_BIT(&uVar1, true);
uLocal_87=OBJECT::CREATE_PICKUP(iVar0, PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_53, 1067030938, 1069547520), uVar1, iLocal_131, 1, iLocal_99);
bLocal_88=true;
iLocal_58=func_110(uLocal_87);
func_122(&Local_105, cLocal_121, sLocal_117, 4, 0, 0, 0);
if(HUD::DOES_BLIP_EXIST(iLocal_57)){
HUD::REMOVE_BLIP(&iLocal_57);
}
if(func_112(iLocal_54)){
TASK::CLEAR_PED_TASKS(iLocal_54);
}}else{
if(!iLocal_89){
if(!func_182(iLocal_54, joaat("script_task_perform_sequence")) && !PED::IS_PED_INJURED(iLocal_54)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_136, 0.5f, 0.5f, 0.5f, 0, 1, 0)){
TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_136, 1f, 20000, 1193033728, 1056964608);
}
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_147, 8f, -2f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_148, 8f, -2f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}}
if(iLocal_89){
if(!bLocal_93){
if(!PED::IS_PED_INJURED(iLocal_54)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, cLocal_91, "pickup_low", 3)){
if(ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54, cLocal_91, "pickup_low") > 0.35f){
if(OBJECT::DOES_PICKUP_EXIST(uLocal_87)){
func_122(&Local_105, cLocal_121, cLocal_118, 4, 0, 0, 0);
OBJECT::REMOVE_PICKUP(uLocal_87);
PED::SET_PED_MONEY(iLocal_54, iLocal_131);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54);
func_296(1);
}
}}elseif(TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("script_task_perform_sequence"))==7){
TASK::CLEAR_PED_TASKS(iLocal_54);
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_PLAY_ANIM(0, cLocal_91, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
PED::SET_PED_KEEP_TASK(iLocal_54, 1);
}}}}elseif(!PED::IS_PED_INJURED(iLocal_54)){
if(OBJECT::DOES_PICKUP_EXIST(uLocal_87)){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_54, OBJECT::GET_PICKUP_COORDS(uLocal_87), 10f, 10f, 7f, 0, 1, 0)){
TASK::CLEAR_PED_TASKS(iLocal_54);
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_87), 1f, 20000, 1f, 512, 1193033728);
TASK::TASK_TURN_PED_TO_FACE_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_87), 0);
TASK::TASK_PLAY_ANIM(0, cLocal_91, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
PED::SET_PED_KEEP_TASK(iLocal_54, 1);
iLocal_89=1;
}}}}}

int func_110(var uParam0){
return func_111(uParam0);
}

int func_111(var uParam0){
var uVar0;
if(!OBJECT::DOES_PICKUP_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_PICKUP(uParam0);
HUD::SET_BLIP_SCALE(uVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
return iVar0;
}

int func_112(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}


void func_113(){
bool bVar0;
int iVar1;
bVar0=false;
switch (bLocal_63){
case 1:
case 2:
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 1)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
bVar0=true;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, 0) && PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_71, 0)){
if(VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_71)){
if(VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_71)){
bVar0=true;
}}}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, 0) || !func_182(iLocal_53, joaat("script_task_vehicle_mission"))){
bVar0=true;
}
if(!PED::IS_PED_FLEEING(iLocal_53)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_vehicle_mission"))==7){
bVar0=true;
}}
if(bVar0){
if(!iLocal_84){
if(PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_71, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_perform_sequence")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_perform_sequence")) !=0){
TASK::OPEN_SEQUENCE_TASK(&uLocal_60);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_60);
TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_60);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_60);
}}elseif(TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_perform_sequence")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_perform_sequence")) !=0){
TASK::OPEN_SEQUENCE_TASK(&uLocal_60);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_60);
TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_60);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_60);
}
iVar1=TASK::GET_NAVMESH_ROUTE_RESULT(iLocal_53);
if(iVar1==2){
TASK::CLEAR_PED_TASKS(iLocal_53);
if(func_112(PLAYER::PLAYER_PED_ID())){
TASK::TASK_COMBAT_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 0, 16);
}
iLocal_84=1;
}}}
break;
}}

int func_114(){
if(!PED::IS_PED_INJURED(iLocal_53)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 180f, 180f, 50f, 0, 1, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_53)){
func_115(iLocal_57, iLocal_53, 180f, 1061158912, 0);
return 1;
}else{
if(Local_105[2 /*10*/].f_7){
func_185(&Local_105, 2);
}
PED::DELETE_PED(&iLocal_53);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, 0)){
if(ENTITY::IS_ENTITY_OCCLUDED(iLocal_71)){
VEHICLE::DELETE_VEHICLE(&iLocal_71);
}}}}elseif(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_53, 0)) < 300f){
return 1;
}
return 0;
}


void func_115(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4){
int iVar0;
float fVar1;
float fVar2;
fVar2=(fParam2 * fParam3);
if(HUD::DOES_BLIP_EXIST(uParam0)){
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
if(fVar1 >=fVar2 || iParam4){
iVar0=round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
if(iVar0 <=0){
iVar0=0;
}
if(iVar0 >=255){
iVar0=255;
}
HUD::SET_BLIP_FLASHES(iParam0, 1);
HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
}else{
HUD::SET_BLIP_FLASHES(iParam0, 0);
HUD::SET_BLIP_ALPHA(iParam0, 255);
}}}elseif(ENTITY::IS_ENTITY_A_PED(iParam1)){
if(!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1))){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
if(fVar1 >=fVar2 || iParam4){
iVar0=round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
if(iVar0 <=0){
iVar0=0;
}
if(iVar0 >=255){
iVar0=255;
}
HUD::SET_BLIP_FLASHES(iParam0, 1);
HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
}else{
HUD::SET_BLIP_FLASHES(iParam0, 0);
HUD::SET_BLIP_ALPHA(iParam0, 255);
}}}}}}


void func_116(int iParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_117(iParam2), 1);
}

int func_117(int iParam0){
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


float func_118(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}else{
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}


void func_119(int iParam0, var uParam1){
if(HUD::DOES_BLIP_EXIST(uParam0)){
if(MISC::GET_GAME_TIMER() > *uParam1 + 500){
if(HUD::GET_BLIP_COLOUR(iParam0)==1){
HUD::SET_BLIP_AS_FRIENDLY(iParam0, true);
}else{
HUD::SET_BLIP_AS_FRIENDLY(iParam0, false);
HUD::SET_BLIP_COLOUR(iParam0, 1);
}
*uParam1=MISC::GET_GAME_TIMER();
}
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_120(0)){
func_102(1);
}}}


var func__120(int iParam0){
return MISC::IS_BIT_SET(Global_113806, iParam0);
}


void func_121(){
switch (bLocal_63){
case 1:
case 2:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, 0)){
if(iLocal_124){
if(PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_71) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_vehicle_mission"))==1){
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_53, iLocal_71, Local_51, 8, 35f, 786469, 10f, 10f, 1);
}else{
TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}}else{
if(!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_71)){
VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(iLocal_71, 0.1f, 1000, 0, 0, 0, -1);
}
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_53, iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 8, 35f, 786469, 10f, 10f, 1);
}}else{
TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}
break;
case 4:
if(!iLocal_124){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}else{
TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}
break;
default:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -3044.11f, 594.34f, 6.73f, 1) < 5f){
TASK::TASK_SMART_FLEE_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
}elseif(iLocal_124){
TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}else{
TASK::TASK_SMART_FLEE_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
}
break;
}
if(!PED::IS_PED_INJURED(iLocal_53)){
PED::SET_PED_KEEP_TASK(iLocal_53, 1);
}}


bool func_122(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_63(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
Global_2883585=0;
return func_123(sParam2, iParam3, 0);
}

int func_123(char* sParam0, int iParam1, bool bParam2){
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
func_61();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_60(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_59();
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
MISC::CLEAR_BIT(&Global_8372, false);
if(bParam2){
func_58();
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
if(func_57()){
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
if(func_56()){
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
func_55();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_54();
func_124();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_61();
}
return 0;
}


void func_124(){
if(!func_125()){
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

int func_125(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_128()){
return 0;
}
if(func_126(PLAYER::PLAYER_ID())){
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


bool func_126(int iParam0){
return func_127(iParam0, 20);
}


var func__127(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_128(){
return -1;
}


bool func_129(){
bool bVar0;
struct<3> Var1;
struct<3> Var2;
Var1={
6f, 6f, 6f 
};
Var2={
-6f, -6f, -6f 
};
if(!PED::IS_PED_INJURED(iLocal_54)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_54)){
iLocal_65++;
if(iLocal_65 > 60){
bVar0=true;
}}else{
iLocal_65=0;
}}
if(MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f), 2f, 1)){
bVar0=true;
}
Var1={
Var1 + PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f) 
};
Var2={
Var2 + PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f) 
};
if((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_stickybomb"), 1)){
bVar0=true;
}
if(GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f), 12f)){
bVar0=true;
}
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_54, 31086, 0f, 0f, 0f), 50f)){
bVar0=true;
}}
if(bVar0){
if(!func_131()){
}else{
bVar0=false;
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("script_task_cower")) !=1){
if(func_130(iLocal_54)){
TASK::TASK_COWER(iLocal_54, 2000);
}}}}
return bVar0;
}

int func_130(int iParam0){
if(func_112(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}

int func_131(){
if(func_112(iLocal_53)){
if(func_118(iLocal_54, iLocal_53, 1) < 22f){
return 1;
}}
return 0;
}


bool func_132(){
bool bVar0;
bVar0=false;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_54)){
if(PED::IS_PED_INJURED(iLocal_54)){
bVar0=true;
}else{
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_RAGDOLL(iLocal_54)){
bVar0=true;
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_54);
}
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_54, 1), 1f, 1)){
bVar0=true;
}
if(func_133(iLocal_54, 0, 1116471296, 1126825984, 0, 1, 0, 0)){
bVar0=true;
}}}
if(bVar0){
if(func_131()){
bVar0=false;
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("script_task_cower")) !=1){
if(func_130(iLocal_54)){
TASK::TASK_COWER(iLocal_54, 2000);
}}}elseif(!PED::IS_PED_INJURED(iLocal_53)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("script_task_smart_flee_ped"))==7){
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 13, 0);
TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}}}
return bVar0;
}

int func_133(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7){
struct<3> Var0;
if(func_112(PLAYER::PLAYER_PED_ID()) && func_112(iParam0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}
if(func_147(iParam0, bParam1, bParam5, bParam6, bParam7)){
return 1;
}
if(!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <=5f){
return func_146(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
}}}
if(bParam4){
return 0;
}elseif(func_134(iParam0, fParam3)){
return 1;
}}
return 0;
}

int func_134(int iParam0, float fParam1){
float fVar0;
if(func_112(PLAYER::PLAYER_PED_ID()) && func_112(iParam0)){
if(func_145(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
fVar0=40f;
}else{
fVar0=3f;
}
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)){
if(func_135(iParam0, fParam1)){
return 1;
}}}}
return 0;
}


bool func_135(int iParam0, float fParam1){
return func_136(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}


bool func_136(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
int iVar2;
iVar2=func_144(iParam0, iParam1);
if(!func_112(iParam0) || !func_112(iParam1)){
if(iVar2 !=-1){
func_143(&(Local_47[iVar2 /*4*/]));
}
return 0;
}
if(!func_140(iParam0, iParam1, fParam2, iParam3)){
return 0;
}
if(iVar2==-1){
iVar2=func_139();
if(iVar2==-1){
return 0;
}
Local_47[iVar2 /*4*/].f_1=iParam0;
Local_47[iVar2 /*4*/].f_2=iParam1;
}
Var1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uVar0=func_137(&(Local_47[iVar2 /*4*/]), Var1, iParam1, &(Local_47[iVar2 /*4*/].f_3), iParam0, iParam5);
return (uVar0 || (MISC::GET_GAME_TIMER() - Local_47[iVar2 /*4*/].f_3) < iParam4);
}

int func_137(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
var uVar2;
int iVar3;
int iVar4;
iVar3=0;
if(!func_112(iParam2)){
*uParam0=0;
return 0;
}
if(*uParam0==0){
Var1={
func_138(iParam2, iParam5) 
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
func_112(iVar3);
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3)==iParam2){
if(bLocal_48){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}
return 0;
}
if(ENTITY::IS_ENTITY_A_VEHICLE(iVar3)){
func_112(iVar3);
if(PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0)){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3)==PED::GET_VEHICLE_PED_IS_IN(iParam2, 0)){
if(bLocal_48){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}}
return 0;
}
return 0;
}


Vector3 func__138(int iParam0, int iParam1){
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

int func_139(){
int iVar0;
iVar0=0;
while (iVar0 < Local_47.f_0){
if((Local_47[iVar0 /*4*/]==0 && Local_47[iVar0 /*4*/].f_1==0) && Local_47[iVar0 /*4*/].f_2==0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_140(int iParam0, int iParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_142(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
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
func_142(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_141(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}


float func_141(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__142(struct<3> Param0){
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


void func_143(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}

int func_144(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Local_47.f_0){
if(Local_47[iVar0 /*4*/].f_1==iParam0 && Local_47[iVar0 /*4*/].f_2==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_145(int iParam0){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
return 1;
}
return 0;
}


bool func_146(int iParam0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
Var0={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) 
};
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
return (((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1)) / vdist(Var1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_147(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
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
if(func_112(PLAYER::PLAYER_PED_ID()) && func_112(iParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
if(iVar2==joaat("weapon_petrolcan")){
fVar0=3f;
fVar1=3f;
}
if(!bParam2){
if(func_151(iParam0, bParam1, fVar0, fVar1)){
return 1;
}
if(func_148(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}else{
if(WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1)){
return 1;
}}}else{
if(bParam1){
fVar0=1.86f;
fVar1=1.86f;
}
if(func_151(iParam0, bParam1, fVar0, fVar1)){
return 1;
}}
if(func_148(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}}
return 0;
}

int func_148(int iParam0, float fParam1, bool bParam2, bool bParam3){
struct<3> Var0;
struct<3> Var1;
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
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
if(func_149(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
return 1;
}}else{
if(bParam3){
if(func_149(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
if(MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, 1)){
return 1;
}}
return 0;
}

int func_149(int iParam0, float fParam1){
var uVar0;
struct<3> Var1;
if((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0)){
if(func_150(iParam0, Var1, 90f, 0)){
return 1;
}}
return 0;
}

int func_150(int iParam0, struct<3> Param1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_142(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
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
func_142(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_141(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}

int func_151(int iParam0, bool bParam1, float fParam2, float fParam3){
if(bParam1){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0)){
return 1;
}}}
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1)){
return 1;
}
return 0;
}


void func_152(){
if(bLocal_88 || ENTITY::IS_ENTITY_DEAD(iLocal_53, 0)){
func_180(&uLocal_150, 0, 0);
}else{
func_153(&uLocal_150, iLocal_53, "ATM_CHASEHINT", 0, 1, 1, 1);
}}


void func_153(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6){
func_154(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}


void func_154(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6){
func_155(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}


void func_155(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
func_180(uParam0, 0, 0);
}
uParam0->f_6=2;
func_156(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}


void func_156(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7){
int iVar0;
int iVar1;
if(uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE()){
if(MISC::GET_GAME_TIMER() >=(uParam0->f_8 + uParam0->f_9)){
uParam0->f_1=0;
}}
iVar0=sParam3;
if(MISC::IS_STRING_NULL(iVar0)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0="CMN_HINT";
}else{
iVar0="FM_IHELP_HNT";
}}
if(func_98(iVar0)){
func_179();
}
if(func_178(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1)){
iVar1=0;
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
if(PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1))){
iVar1=1;
}}elseif(ENTITY::IS_ENTITY_A_VEHICLE(iParam1)){
VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
if(VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1))){
iVar1=1;
}}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam1)){
OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
if(OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1))){
iVar1=1;
}}
if(!CAM::IS_GAMEPLAY_HINT_ACTIVE()){
if(func_173(uParam0, bParam5, bParam7, 0)){
func_170(uParam0, iParam1, Param2, iParam4);
}
if(*uParam0){
*uParam0=0;
}elseif(uParam0->f_6==2){
if(func_160(iVar0)){
if((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6){
if(!func_98(iVar0)){
func_103(iVar0, -1);
uParam0->f_3=iVar0;
if(MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0)){
func_159(1);
}}
}}}}elseif(func_160(iVar0)){
if(MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)){
if(((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6){
if(!func_98(iVar0)){
func_103(iVar0, -1);
uParam0->f_3=iVar0;
if(MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0)){
func_159(1);
}
}}}}}else{
if(!MISC::IS_STRING_NULL(sParam3)){
if(func_98(sParam3)){
HUD::CLEAR_HELP(1);
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==4){
func_180(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==4){
func_180(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==4){
func_180(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==4){
func_180(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==4){
func_180(uParam0, iVar0, 1);
}}elseif(CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==4){
func_180(uParam0, iVar0, 1);
}}
if(!func_173(uParam0, bParam5, bParam7, 0)){
if((!*uParam0 && !uParam0->f_1) && !func_158(uParam0)){
func_157(uParam0);
}}}}else{
func_180(uParam0, iVar0, 0);
}}


void func_157(var uParam0){
if(func_178(PLAYER::PLAYER_PED_ID())){
TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
CAM::STOP_GAMEPLAY_HINT(0);
AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
if(uParam0->f_11){
GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
uParam0->f_11=0;
}}
uParam0->f_2=-1;
*uParam0=1;
}

int func_158(var uParam0){
int iVar0;
if(uParam0->f_2 > 0){
iVar0=(uParam0->f_10 / 2);
if(uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER(){
return 1;
}}
return 0;
}

int func_159(bool bParam0){
switch (Global_43377){
case 0:
case 3:
if(bParam0){
Global_113810.f_10052.f_100++;
}
return Global_113810.f_10052.f_100;
break;
case 4:
if(bParam0){
Global_113810.f_10052.f_101++;
}
return Global_113810.f_10052.f_101;
break;
case 5:
case 15:
if(bParam0){
Global_113810.f_10052.f_102++;
}
return Global_113810.f_10052.f_102;
break;
default:
break;
}
return 3;
}

int func_160(char* sParam0){
if(!func_161(1, 1, 0)){
if((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_98(sParam0)) || func_98("CMN_HINT")){
HUD::CLEAR_HELP(1);
}
return 0;
}
switch (Global_43377){
case 0:
case 3:
if(func_159(0) < 3){
return 1;
}
break;
case 4:
if(func_159(0) < 1){
return 1;
}
break;
case 5:
case 15:
if(func_159(0) < 1){
return 1;
}
break;
default:
break;
}
return 0;
}

int func_161(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(bParam0){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return 0;
}}
if(bParam2){
return 1;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
return 0;
}
if(func_78(0)){
return 0;
}
if(func_169()){
return 0;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return 0;
}
if(Global_75816){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0){
return 0;
}
if(Global_60666){
return 0;
}
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==4){
return 0;
}}elseif(PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==4){
return 0;
}}elseif(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==4){
return 0;
}}elseif(CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==4){
return 0;
}
if(CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND()){
return 0;
}}}
if((func_168() || func_167(Global_4718592.f_171044)) || func_166()){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar1=func_165(PLAYER::PLAYER_PED_ID(), 0);
if(((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("apc") && iVar1 !=-1)) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("akula") && iVar1 !=-1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("riot2") && iVar1==0) && func_164(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) !=-1)){
return 0;
}}}
if(Global_1962809){
return 0;
}
if(func_162(PLAYER::PLAYER_ID())){
return 0;
}
return 1;
}

int func_162(int iParam0){
if(iParam0 !=func_128()){
if(func_163(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}elseif((Global_1575063 && iParam0==PLAYER::PLAYER_ID()) && func_163(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_163(int iParam0, bool bParam1, bool bParam2){
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

int func_164(int iParam0, int iParam1){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
switch (iParam1){
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
return 1;
break;
default:
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0){
return 1;
}
break;
}}}
return 0;
}

int func_165(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
if(iVar1==1){
iVar3=-1;
return iVar3;
}
iVar2=0;
while (iVar2 < iVar1){
iVar3=(iVar2 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0)==iParam0){
return iVar3;
}}
iVar2++;
}}}}
return iVar3;
}


var func__166(){
return Global_2683883.f_19;
}


bool func_167(int iParam0){
return iParam0==51;
}


var func__168(){
return Global_2683883.f_18;
}


bool func_169(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}


void func_170(var uParam0, int iParam1, struct<3> Param2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(Global_1581988==1){
return;
}
if(ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
func_180(uParam0, 0, 0);
}
if(func_64(Param2, 0f, 0f, 0f, 0)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
iVar0=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
if(!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
if(!func_171()){
Param2={
0f, 0f, 1f 
};
}}elseif(PED::IS_PED_MALE(iVar0)){
Param2={
0f, 0f, 1f 
};
}}}}
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
iVar1=uParam0->f_9;
iVar2=uParam0->f_10;
if(iParam3==1726668277){
if(iVar1 < 1500){
iVar1=1500;
}
if(iVar2 < 1500){
iVar2=1500;
}}
CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
iVar3=2048;
iVar4=3;
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
uParam0->f_11=1;
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_1=1;
*uParam0=0;
}


bool func_171(){
return func_172(PLAYER::PLAYER_ID());
}

int func_172(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}

int func_173(var uParam0, bool bParam1, bool bParam2, bool bParam3){
if(uParam0->f_1){
if(MISC::GET_GAME_TIMER() >=(uParam0->f_8 + uParam0->f_9)){
uParam0->f_1=0;
}}
switch (uParam0->f_5){
case 0:
uParam0->f_7=0;
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(func_177(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(func_176(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(uParam0->f_6==1){
if(func_176(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(uParam0->f_6==2){
if(func_177(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}
if(func_158(uParam0)){
uParam0->f_7=1;
uParam0->f_5=4;
}
break;
case 1:
if((MISC::GET_GAME_TIMER() - uParam0->f_4) <=500){
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_177(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(!func_176(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(uParam0->f_6==1){
if(!func_176(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(uParam0->f_6==2){
if(!func_177(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}}else{
uParam0->f_5=2;
}
break;
case 2:
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_177(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(!func_176(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==1){
if(!func_176(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==2){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)){
uParam0->f_5=0;
}elseif(!func_177(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}
break;
case 3:
if((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500){
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(func_175(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(func_174(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_174(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==2){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)){
uParam0->f_5=0;
}elseif(func_175(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}}
break;
case 4:
if(!func_158(uParam0)){
uParam0->f_5=0;
}
break;
}
if(!func_161(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
uParam0->f_7=0;
}
if(uParam0->f_7){
func_179();
return 1;
}else{
return 0;
}
return 0;
}

int func_174(bool bParam0, bool bParam1, bool bParam2){
if(!func_161(bParam0, bParam1, bParam2)){
return 0;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())){
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80)){
return 1;
}}}
return 0;
}

int func_175(bool bParam0, bool bParam1, bool bParam2){
if(!func_161(bParam0, bParam1, bParam2)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE()){
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80)){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
return 1;
}}}
return 0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2){
if(!func_161(bParam0, bParam1, bParam2)){
return 0;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())){
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116){
return 1;
}}}
return 0;
}

int func_177(bool bParam0, bool bParam1, bool bParam2){
if(!func_161(bParam0, bParam1, bParam2)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE()){
if(PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
return 1;
}}}
return 0;
}

int func_178(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0)){
return 1;
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
if(!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))){
return 1;
}}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
return 1;
}}
return 0;
}


void func_179(){
MISC::SET_BIT(&Global_8371, 4);
}


void func_180(var uParam0, int iParam1, int iParam2){
char* sVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_2794162.f_4697, 26)){
return;
}}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(iParam2);
GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
if(uParam0->f_11){
GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
uParam0->f_11=0;
}}
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
uParam0->f_1=0;
*uParam0=0;
uParam0->f_2=-1;
uParam0->f_8=0;
uParam0->f_5=0;
uParam0->f_6=0;
sVar0=iParam1;
if(MISC::IS_STRING_NULL(sVar0)){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
sVar0="CMN_HINT";
}else{
sVar0="FM_IHELP_HNT";
}}
if(!MISC::IS_STRING_NULL(uParam0->f_3)){
if(func_98(uParam0->f_3)){
HUD::CLEAR_HELP(1);
}}
if(!MISC::IS_STRING_NULL(sVar0)){
if(func_98(sVar0)){
HUD::CLEAR_HELP(1);
}}}


float func_181(int iParam0, struct<3> Param1, int iParam2){
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

int func_182(int iParam0, int iParam1){
if(func_130(iParam0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}}
return 0;
}


void func_183(char* sParam0){
func_184(sParam0);
}


void func_184(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL(sParam0, sParam0)){}}


void func_185(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}


void func_186(){
TASK::OPEN_SEQUENCE_TASK(&uLocal_59);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_53, 750);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_147, 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_148, 8f, -2f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_147, 8f, -2f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_148, 8f, -2f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, cLocal_146, sLocal_149, 8f, -2f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_59);
TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_59);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_59);
if(HUD::DOES_BLIP_EXIST(iLocal_56)){
HUD::REMOVE_BLIP(&iLocal_56);
}
if(!HUD::DOES_BLIP_EXIST(iLocal_57)){
iLocal_57=func_105(iLocal_53, 1, 0);
}
HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, 1);
PED::SET_CREATE_RANDOM_COPS(0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
func_121();
if((vdist(ENTITY::GET_ENTITY_COORDS(iLocal_54, 0), -2956.26f, 487.97f, 15.46f) > 5f && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -203.72f, -861.8f, 29.27f, 1) > 5f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 288.46f, -1256.71f, 28.44f, 1) > 5f){
if(func_118(PLAYER::PLAYER_PED_ID(), iLocal_54, 1) < 50f){
func_122(&Local_105, cLocal_121, sLocal_113, 3, 0, 0, 0);
iLocal_83=1;
}}
iLocal_64=MISC::GET_GAME_TIMER();
settimera(0);
if(func_112(PLAYER::PLAYER_PED_ID())){
AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
}
func_187(1);
}

int func_187(int iParam0){
if(func_189()){
Global_113800=1;
Global_113797=MISC::GET_GAME_TIMER();
if(func_188(Global_113799)){
func_102(0);
}
HUD::SET_MISSION_NAME(1, "RE_TITLE");
if(iParam0 && func_188(Global_113799)){
HUD::FLASH_MINIMAP_DISPLAY();
}
return 1;
}
return 0;
}

int func_188(int iParam0){
switch (iParam0){
case 29:
case 30:
case 2:
case 18:
return 0;
break;
}
return 1;
}

int func_189(){
switch (func_190(&Global_32343, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD())){
case 1:
return 1;
break;
case 0:
return 1;
break;
}
return 0;
}

int func_190(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_194(0)){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23251.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43377=iParam2;
Global_43339=*uParam0;
Global_43340=iParam4;
Global_43338=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43338 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
return 2;
}
iVar0++;
}}elseif(Global_43339==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!func_192(iParam2)){
return 0;
}
if(Global_43338==8){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
Global_43344[Global_43338 /*4*/]=Global_43341;
Global_43344[Global_43338 /*4*/].f_1=iParam1;
Global_43344[Global_43338 /*4*/].f_2=iParam2;
Global_43344[Global_43338 /*4*/].f_3=0;
Global_43338++;
if(iParam4 !=0){
func_191(uParam0, iParam4);
}}
return 2;
}


void func_191(var uParam0, int iParam1){
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


bool func_192(int iParam0){
return func_193(iParam0, Global_43377);
}

int func_193(int iParam0, int iParam1){
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

int func_194(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_192(iParam0)){
return 0;
}
return 1;
}

int func_195(){
if(iLocal_132==-1){
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_53)){
iLocal_132=MISC::GET_GAME_TIMER();
}}}elseif(MISC::GET_GAME_TIMER() > iLocal_132 + 1000){
return 1;
}
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_51, 50f)){
return 1;
}
if((MISC::GET_GAME_TIMER() - iLocal_133) > 30000){
if(!ENTITY::IS_ENTITY_OCCLUDED(iLocal_53)){
return 1;
}else{
func_278();
}}
if(HUD::DOES_BLIP_EXIST(iLocal_57)){
if((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -3044.11f, 594.34f, 6.73f, 1) > 5f && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -712.9f, -819.32f, 22.73f, 1) > 5f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 24.13f, -946.84f, 28.36f, 1) > 5f){
if(CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_53, 0), 2.5f)){
return 1;
}}}
return 0;
}


void func_196(){
if(vdist(Local_51, -3044.06f, 594.93f, 6.74f) < 5f){
if(!HUD::DOES_BLIP_EXIST(iLocal_57)){
if(func_112(iLocal_54) && func_112(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 60f, 90f, 12f, 0, 1, 0)){
iLocal_57=func_105(iLocal_53, 1, 0);
HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, 0);
}}}else{
func_119(iLocal_57, &uLocal_68);
}}elseif(!HUD::DOES_BLIP_EXIST(iLocal_57)){
if(func_112(iLocal_54) && func_112(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 90f, 90f, 8f, 0, 1, 0)){
iLocal_57=func_105(iLocal_53, 1, 0);
HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, 0);
}}}else{
func_119(iLocal_57, &uLocal_68);
}
if(iLocal_133==-1){
iLocal_133=MISC::GET_GAME_TIMER();
}}

int func_197(){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
Var0={
Local_51 
};
Var1={
0f, 0f, uLocal_52 
};
Var2={
10f, 10f, 5f 
};
if(bLocal_63==1){
func_221();
if(vdist(Local_51, -203.758f, -861.738f, 29.2684f) < 5f){
Local_72={
-197.9643f, -868.5554f, 28.2738f 
};
fLocal_74=196f;
Local_73={
-187.5415f, -858.1728f, 28.1863f 
};
fLocal_75=160.391f;
Local_134={
-259.0351f, -865.7119f, 28f 
};
Local_135={
-130.3981f, -908.8096f, 40f 
};
TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("ATM_1");
STREAMING::REQUEST_MODEL(iLocal_104);
while (!STREAMING::HAS_MODEL_LOADED(iLocal_104)){
if(func_208()){
func_278();
}
wait(0);
}
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_104, 1);
}else{
Local_72={
-2968.5f, 494.48f, 14.82f 
};
fLocal_74=55.24f;
Local_73={
-2973.03f, 496.38f, 14.96f 
};
fLocal_75=3.18f;
Local_134={
-259.0351f, -865.7119f, 28f 
};
Local_135={
-130.3981f, -908.8096f, 40f 
};
STREAMING::REQUEST_MODEL(iLocal_104);
while (!STREAMING::HAS_MODEL_LOADED(iLocal_104)){
if(func_208()){
func_278();
}
wait(0);
}
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_104, 1);
}}elseif(bLocal_63==2){
func_221();
Local_72={
283.31f, -1249.51f, 28.95f 
};
fLocal_74=78.25f;
Local_73={
288.9906f, -1248.443f, 28.2847f 
};
fLocal_75=75.9756f;
Local_134={
266.3643f, -1313.829f, 28.59103f 
};
Local_135={
265.1489f, -1215.932f, 36.20192f 
};
STREAMING::REQUEST_MODEL(iLocal_104);
while (!STREAMING::HAS_MODEL_LOADED(iLocal_104)){
if(func_208()){
func_278();
}
wait(0);
}
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_104, 1);
}elseif(bLocal_63==3){
func_221();
Local_73={
-1587.15f, -539.9152f, 34.3644f 
};
fLocal_75=327f;
Local_134={
-1596.203f, -474.8844f, 32f 
};
Local_135={
-1595.572f, -565.8368f, 48f 
};
}elseif(bLocal_63==4){
func_221();
Local_72={
181.2355f, 6632.627f, 30.5732f 
};
fLocal_74=182f;
Local_73={
200.0727f, 6630.587f, 30.517f 
};
fLocal_75=165f;
Local_134={
178.1817f, 6660.375f, 31f 
};
Local_135={
179.1249f, 6530.043f, 38f 
};
MISC::SET_STUNT_JUMPS_CAN_TRIGGER(0);
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
STREAMING::REQUEST_MODEL(iLocal_104);
while (!STREAMING::HAS_MODEL_LOADED(iLocal_104)){
if(func_208()){
func_278();
}
wait(0);
}
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_104, 1);
}elseif(bLocal_63==5){
func_221();
}
if(func_199()){
MISC::CLEAR_AREA(Local_51, Var2.f_0, 0, 0, 0, 0);
uLocal_61=PED::ADD_SCENARIO_BLOCKING_AREA(Local_51 - Var2, Local_51 + Var2, 0, 1, 1, 1);
iLocal_54=PED::CREATE_PED(5, iLocal_103, Local_51, uLocal_52, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 13, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 11, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54, 17, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 6, 1, 0, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_54, 1, 1);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_54, 1);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_54, 0);
AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_54, sLocal_145);
PED::SET_PED_MONEY(iLocal_54, 0);
if(bLocal_69==1){
PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 2, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 3, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 4, 0, 2, 0);
}
iLocal_53=PED::CREATE_PED(22, iLocal_102, Local_51, 0, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 13, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 6, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 128, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_53, 42, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_53, 281, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_53, 172, 0);
PED::SET_PED_CONFIG_FLAG(iLocal_53, 137, 1);
PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(iLocal_53);
AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53, sLocal_144);
PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_53, 1);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_53, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_90, "b_atm_mugging", Var0, Var1, 0, 2), 0, 0, 1);
Var3={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_90, "b_atm_mugging", Var0, Var1, 0, 2) 
};
ENTITY::SET_ENTITY_HEADING(iLocal_53, Var3.f_2);
if(func_112(iLocal_54)){
if(PED::IS_PED_MALE(iLocal_54)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_54, PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2), 0, 0, 1);
Var3={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2) 
};
}else{
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_54, PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2), 0, 0, 1);
Var3={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2) 
};
}
ENTITY::SET_ENTITY_HEADING(iLocal_54, Var3.f_2);
}
TASK::TASK_PLAY_ANIM(iLocal_53, cLocal_90, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
if(PED::IS_PED_MALE(iLocal_54)){
TASK::TASK_PLAY_ANIM(iLocal_54, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
STREAMING::REMOVE_ANIM_DICT("random@atmrobberygen@female");
}else{
TASK::TASK_PLAY_ANIM(iLocal_54, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
STREAMING::REMOVE_ANIM_DICT("random@atmrobberygen@male");
}
PED::SET_PED_AS_ENEMY(iLocal_53, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_53, joaat("weapon_pistol"), -1, 1, 1);
WEAPON::SET_PED_AMMO(iLocal_53, joaat("weapon_pistol"), 34, 0);
WEAPON::SET_CURRENT_PED_WEAPON(iLocal_53, joaat("weapon_pistol"), 0);
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53, 1, 0);
switch (func_38()){
case 0:
sLocal_110="MICHAEL";
break;
case 1:
sLocal_110="FRANKLIN";
break;
case 2:
sLocal_110="TREVOR";
break;
}
func_198(&Local_105, 0, PLAYER::PLAYER_PED_ID(), sLocal_110, 0, 1);
func_198(&Local_105, 1, iLocal_54, sLocal_112, 0, 1);
func_198(&Local_105, 2, iLocal_53, "ATMRobber", 0, 1);
if(bLocal_63==1 || bLocal_63==2){
iLocal_71=VEHICLE::CREATE_VEHICLE(iLocal_104, Local_72, fLocal_74, 1, 1, 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_71, 1, 1, 0);
VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_71);
VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_71, 1);
if(bLocal_63==2){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_71, 0, 0, 0);
}elseif(bLocal_63==1){
PED::SET_PED_HELMET(iLocal_53, 0);
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_53, 3);
}elseif(bLocal_63==4){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_71, 3);
}}
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
return 1;
}elseif(func_208()){
func_278();
}
return 0;
}


void func_198(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=uParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78689){
if(!PED::IS_PED_INJURED(uParam2)){
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

int func_199(){
STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@male");
STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@female");
if(!iLocal_79){
func_207(&Local_162, 3);
Local_162.f_146=MISC::GET_FRAME_COUNT();
func_206(&Local_162, iLocal_102);
func_206(&Local_162, iLocal_103);
func_206(&Local_162, iLocal_99);
func_206(&Local_162, iLocal_100);
func_204(&Local_162, cLocal_90);
func_204(&Local_162, cLocal_146);
func_204(&Local_162, cLocal_140);
func_204(&Local_162, cLocal_91);
iLocal_79=1;
}
if((STREAMING::HAS_ANIM_DICT_LOADED("random@atmrobberygen@male") && STREAMING::HAS_ANIM_DICT_LOADED("random@atmrobberygen@female")) && func_200(&Local_162)){
return 1;
}
return 0;
}

int func_200(var uParam0){
int iVar0;
if(!uParam0->f_145){
return 1;
}
iVar0=0;
while (iVar0 < 8){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
if(!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29)){
return 0;
}
if(!func_201(uParam0[iVar0 /*18*/])){
return 0;
}}
iVar0++;
}
uParam0->f_145=0;
return 1;
}


bool func_201(var uParam0){
return func_202(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_202(var uParam0, char* sParam1, int iParam2){
if(MISC::IS_BIT_SET(uParam0, 30)){
if(MISC::IS_BIT_SET(uParam0, 29)){
switch (func_203(uParam0)){
case 0:
return STREAMING::HAS_MODEL_LOADED(iParam2);
break;
case 1:
return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
break;
case 2:
return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
break;
case 3:
return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
break;
case 4:
return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
break;
case 5:
return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
break;
case 6:
return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(uParam0, 27), -1);
break;
case 7:
return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
break;
case 8:
return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
break;
case 9:
return STREAMING::HAS_PTFX_ASSET_LOADED();
break;
default:
break;
}}else{
return 0;
}}
return 0;
}

int func_203(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 10){
if(MISC::IS_BIT_SET(uParam0, bVar0)){
return bVar0;
}
bVar0++;
}
return -1;
}


void func_204(var uParam0, char* sParam1){
func_205(uParam0, 1, -1, sParam1, 0);
}


void func_205(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], bParam1)){
if(iParam2 !=-1){
if((uParam0[iVar0 /*18*/])->f_1==iParam2){
return;
}}
if(bParam1 !=4){
if(!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL")){
if(MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3)){
return;
}}}
if(bParam1==9){
return;
}}}
iVar0++;
}
if(!uParam0->f_145){
uParam0->f_145=1;
}
iVar0=0;
while (iVar0 < 8){
if(!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
(uParam0[iVar0 /*18*/])->f_1=iParam2;
(*uParam0)[iVar0 /*18*/]=iParam4;
MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
return;
}
iVar0++;
}}


void func_206(var uParam0, int iParam1){
func_205(uParam0, 0, iParam1, "NULL", 0);
}


void func_207(var uParam0, int iParam1){
if(iParam1 > 0){
uParam0->f_147=iParam1;
}}

int func_208(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_49) < (75f * 75f)){
return 1;
}
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_220()){
return 0;
}}
if(func_216()){
return 1;
}
if(func_209(100f, 1) !=-1){
return 1;
}
return 0;
}

int func_209(float fParam0, bool bParam1){
struct<27> Var0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
iVar2=-1;
fVar3=fParam0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_40(func_38())){
iVar5=func_215();
iVar6=0;
iVar6=0;
while (iVar6 < 63){
iVar1=iVar6;
if(MISC::IS_BIT_SET(Global_113810.f_18577[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_113810.f_18577[iVar1 /*6*/], 3)){
func_210(iVar1, &Var0);
fVar4=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
if(fVar4 < fVar3){
bVar7=true;
if(bParam1){
if(iVar5 !=Var0.f_26){
bVar7=false;
}
}
if(bVar7){
iVar2=iVar1;
fVar3=fVar4;
}}}
iVar6++;
}}}
return iVar2;
}


void func_210(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_211(uParam1, "Abigail1", func_213(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
break;
case 1:
func_211(uParam1, "Abigail2", func_213(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
break;
case 2:
func_211(uParam1, "Barry1", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
break;
case 3:
func_211(uParam1, "Barry2", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
break;
case 4:
func_211(uParam1, "Barry3", func_213(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_212(iParam0), 0, 0);
break;
case 5:
func_211(uParam1, "Barry3A", func_213(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 6:
func_211(uParam1, "Barry3C", func_213(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 7:
func_211(uParam1, "Barry4", func_213(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_212(iParam0), 0, 0);
break;
case 8:
func_211(uParam1, "Dreyfuss1", func_213(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
break;
case 9:
func_211(uParam1, "Epsilon1", func_213(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
break;
case 10:
func_211(uParam1, "Epsilon2", func_213(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
break;
case 11:
func_211(uParam1, "Epsilon3", func_213(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
break;
case 12:
func_211(uParam1, "Epsilon4", func_213(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
break;
case 13:
func_211(uParam1, "Epsilon5", func_213(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
break;
case 14:
func_211(uParam1, "Epsilon6", func_213(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_212(iParam0), 0, 1);
break;
case 15:
func_211(uParam1, "Epsilon7", func_213(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
break;
case 16:
func_211(uParam1, "Epsilon8", func_213(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
break;
case 17:
func_211(uParam1, "Extreme1", func_213(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 18:
func_211(uParam1, "Extreme2", func_213(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 19:
func_211(uParam1, "Extreme3", func_213(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 20:
func_211(uParam1, "Extreme4", func_213(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
break;
case 21:
func_211(uParam1, "Fanatic1", func_213(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_212(iParam0), 1, 0);
break;
case 22:
func_211(uParam1, "Fanatic2", func_213(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_212(iParam0), 1, 0);
break;
case 23:
func_211(uParam1, "Fanatic3", func_213(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_212(iParam0), 0, 1);
break;
case 24:
func_211(uParam1, "Hao1", func_213(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_212(iParam0), 0, 1);
break;
case 25:
func_211(uParam1, "Hunting1", func_213(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
break;
case 26:
func_211(uParam1, "Hunting2", func_213(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
break;
case 27:
func_211(uParam1, "Josh1", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
break;
case 28:
func_211(uParam1, "Josh2", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
break;
case 29:
func_211(uParam1, "Josh3", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
break;
case 30:
func_211(uParam1, "Josh4", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
break;
case 31:
func_211(uParam1, "Maude1", func_213(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
break;
case 32:
func_211(uParam1, "Minute1", func_213(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
break;
case 33:
func_211(uParam1, "Minute2", func_213(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
break;
case 34:
func_211(uParam1, "Minute3", func_213(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
break;
case 35:
func_211(uParam1, "MrsPhilips1", func_213(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
break;
case 36:
func_211(uParam1, "MrsPhilips2", func_213(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
break;
case 37:
func_211(uParam1, "Nigel1", func_213(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_212(iParam0), 1, 0);
break;
case 38:
func_211(uParam1, "Nigel1A", func_213(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
break;
case 39:
func_211(uParam1, "Nigel1B", func_213(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
break;
case 40:
func_211(uParam1, "Nigel1C", func_213(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
break;
case 41:
func_211(uParam1, "Nigel1D", func_213(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
break;
case 42:
func_211(uParam1, "Nigel2", func_213(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
break;
case 43:
func_211(uParam1, "Nigel3", func_213(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
break;
case 44:
func_211(uParam1, "Omega1", func_213(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
break;
case 45:
func_211(uParam1, "Omega2", func_213(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
break;
case 46:
func_211(uParam1, "Paparazzo1", func_213(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 47:
func_211(uParam1, "Paparazzo2", func_213(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 48:
func_211(uParam1, "Paparazzo3", func_213(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_212(iParam0), 0, 0);
break;
case 49:
func_211(uParam1, "Paparazzo3A", func_213(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 50:
func_211(uParam1, "Paparazzo3B", func_213(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 51:
func_211(uParam1, "Paparazzo4", func_213(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
break;
case 52:
func_211(uParam1, "Rampage1", func_213(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
break;
case 54:
func_211(uParam1, "Rampage3", func_213(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
break;
case 55:
func_211(uParam1, "Rampage4", func_213(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
break;
case 56:
func_211(uParam1, "Rampage5", func_213(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
break;
case 53:
func_211(uParam1, "Rampage2", func_213(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
break;
case 57:
func_211(uParam1, "TheLastOne", func_213(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 58:
func_211(uParam1, "Tonya1", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 59:
func_211(uParam1, "Tonya2", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 60:
func_211(uParam1, "Tonya3", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 61:
func_211(uParam1, "Tonya4", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
case 62:
func_211(uParam1, "Tonya5", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
break;
default:
break;
}}


void func_211(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
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

int func_212(int iParam0){
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


struct<2> func_213(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_214(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_214(int iParam0){
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

int func_215(){
func_39();
switch (Global_113810.f_2366.f_539.f_4321){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 4;
break;
}
return 0;
}

int func_216(){
if(func_219() && !func_220()){
return 1;
}
if(func_218() && func_217()){
return 1;
}
return 0;
}


bool func_217(){
return Global_113528 > 0;
}

int func_218(){
if(Global_97735 !=-1){
return 1;
}
return 0;
}

int func_219(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 20);
}
return 0;
}

int func_220(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}


void func_221(){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
if(bLocal_69==0 && bLocal_63==5){
bLocal_69=MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
}elseif(bLocal_63 !=5){
bLocal_69=bLocal_63;
}
switch (bLocal_69){
case 1:
iLocal_102=joaat("g_m_y_armgoon_02");
sLocal_144="G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
iLocal_103=joaat("a_f_m_tourist_01");
sLocal_145="A_F_M_BEVHILLS_02_WHITE_FULL_02";
iLocal_104=joaat("sanchez");
sLocal_113="REAR1_ATTR";
sLocal_114="REAR1_HELP";
sLocal_115="REAR1_PROMPT";
sLocal_116="REAR1_CHASE";
sLocal_117="REAR1_FLEE";
cLocal_118="REAR1_THX";
sLocal_119="REAR1_DAMN";
switch (func_38()){
case 0:
sLocal_122="REAR1_REM";
sLocal_120="REAR1_FKM";
sLocal_111="REAR1_WM";
sLocal_123="REAR1_GYM";
break;
case 1:
sLocal_122="REAR1_REF";
sLocal_120="REAR1_FKF";
sLocal_111="REAR1_WF";
sLocal_123="REAR1_GYF";
break;
case 2:
sLocal_122="REAR1_RET";
sLocal_120="REAR1_FKT";
sLocal_111="REAR1_WT";
sLocal_123="REAR1_GYT";
break;
}
sLocal_112="ATMRobVictim1";
cLocal_121="REAR1AU";
if(iLocal_101==0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(iVar0==0){
iLocal_99=joaat("prop_ld_purse_01");
}elseif(iVar0==1){
iLocal_99=joaat("prop_ld_wallet_01");
}elseif(iVar0==2){
bVar1=func_222();
if(bVar1){
iLocal_99=joaat("prop_ld_wallet_pickup");
}else{
iLocal_99=joaat("prop_ld_purse_01");
}}
iLocal_101=1;
}
cLocal_140="RANDOM@ATMROBBERY1";
sLocal_141="Return_Wallet_Positive_A_Player";
sLocal_142="Return_Wallet_Positive_A_Female";
sLocal_143="Return_Wallet_Positive_A_Cam";
cLocal_146="random@car_thief@waiting_ig_4";
sLocal_147="waiting";
sLocal_148="waiting";
sLocal_149="waiting";
break;
case 2:
iLocal_102=joaat("g_m_y_famfor_01");
sLocal_144="G_M_Y_FamFor_01_BLACK_MINI_01";
iLocal_103=joaat("a_m_y_hipster_02");
sLocal_145="A_M_Y_Hipster_02_White_Full_01";
iLocal_104=joaat("ruiner");
sLocal_113="REAR2_ATTR";
sLocal_114="REAR2_HELP";
sLocal_115="REAR2_PROMPT";
sLocal_116="REAR2_CHASE";
sLocal_117="REAR2_FLEE";
cLocal_118="REAR2_THX";
sLocal_119="REAR2_DAMN";
switch (func_38()){
case 0:
sLocal_122="REAR2_REM";
sLocal_120="REAR2_FKM";
sLocal_111="REAR2_WM";
sLocal_123="REAR2_GYM";
break;
case 1:
sLocal_122="REAR2_REF";
sLocal_120="REAR2_FKF";
sLocal_111="REAR2_WF";
sLocal_123="REAR2_GYF";
break;
case 2:
sLocal_122="REAR2_RET";
sLocal_120="REAR2_FKT";
sLocal_111="REAR2_WT";
sLocal_123="REAR2_GYT";
break;
}
sLocal_112="ATMRobVictim2";
cLocal_121="REAR2AU";
iLocal_99=joaat("prop_ld_wallet_pickup");
cLocal_140="RANDOM@ATMROBBERY2";
sLocal_141="Return_Wallet_Positive_A_Player";
sLocal_142="Return_Wallet_Positive_A_Male";
sLocal_143="Return_Wallet_Positive_A_Cam";
cLocal_146="RANDOM@BICYCLE_THIEF@IDLE_A";
sLocal_147="IDLE_A";
sLocal_148="IDLE_B";
sLocal_149="IDLE_C";
break;
case 3:
iLocal_103=joaat("a_f_m_tourist_01");
sLocal_145="A_F_Y_Tourist_01_White_Mini_01";
iLocal_102=joaat("g_m_y_salvagoon_02");
sLocal_144="G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
sLocal_113="REAR5_ATTR";
sLocal_114="REAR5_HELP";
sLocal_115="REAR5_PROMPT";
sLocal_116="REAR5_CHASE";
sLocal_117="REAR5_FLEE";
cLocal_118="REAR5_THX";
sLocal_119="REAR5_DAMN";
switch (func_38()){
case 0:
sLocal_122="REAR5_REM";
sLocal_120="REAR5_FKM";
sLocal_111="REAR5_WM";
sLocal_123="REAR5_GYM";
break;
case 1:
sLocal_122="REAR5_REF";
sLocal_120="REAR5_FKF";
sLocal_111="REAR5_WF";
sLocal_123="REAR5_GYF";
break;
case 2:
sLocal_122="REAR5_RET";
sLocal_120="REAR5_FKT";
sLocal_111="REAR5_WT";
sLocal_123="REAR5_GYT";
break;
}
sLocal_112="ATMRobVictim5";
cLocal_121="REAR5AU";
if(iLocal_101==0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(iVar0==0){
iLocal_99=joaat("prop_ld_purse_01");
}elseif(iVar0==1){
iLocal_99=joaat("prop_ld_wallet_01");
}elseif(iVar0==2){
bVar2=func_222();
if(bVar2){
iLocal_99=joaat("prop_ld_wallet_pickup");
}else{
iLocal_99=joaat("prop_ld_wallet_01");
}}
iLocal_101=1;
}
cLocal_140="RANDOM@ATMROBBERY3";
sLocal_141="Return_Wallet_Positive_B_Player";
sLocal_142="Return_Wallet_Positive_B_Female";
sLocal_143="Return_Wallet_Positive_B_Cam";
cLocal_146="random@car_thief@waiting_ig_4";
sLocal_147="waiting";
sLocal_148="waiting";
sLocal_149="waiting";
break;
case 4:
iLocal_103=joaat("a_f_m_tourist_01");
sLocal_145="A_F_M_BevHills_02_WHITE_FULL_01";
iLocal_104=joaat("ruiner");
iLocal_102=joaat("g_m_y_azteca_01");
sLocal_144="G_M_Y_Latino01_Latino_MINI_01";
sLocal_113="REAR3_ATTR";
sLocal_114="REAR3_HELP";
sLocal_115="REAR3_PROMPT";
sLocal_116="REAR3_CHASE";
sLocal_117="REAR3_FLEE";
cLocal_118="REAR3_THX";
sLocal_119="REAR3_DAMN";
switch (func_38()){
case 0:
sLocal_122="REAR3_REM";
sLocal_120="REAR3_FKM";
sLocal_111="REAR3_WM";
sLocal_123="REAR3_GYM";
break;
case 1:
sLocal_122="REAR3_REF";
sLocal_120="REAR3_FKF";
sLocal_111="REAR3_WF";
sLocal_123="REAR3_GYF";
break;
case 2:
sLocal_122="REAR3_RET";
sLocal_120="REAR3_FKT";
sLocal_111="REAR3_WT";
sLocal_123="REAR3_GYT";
break;
}
sLocal_112="ATMRobVictim3";
cLocal_121="REAR3AU";
if(iLocal_101==0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(iVar0==0){
iLocal_99=joaat("prop_ld_purse_01");
}elseif(iVar0==1){
iLocal_99=joaat("prop_ld_wallet_01");
}elseif(iVar0==2){
bVar3=func_222();
if(bVar3){
iLocal_99=joaat("prop_ld_wallet_pickup");
}else{
iLocal_99=joaat("prop_ld_purse_01");
}}
iLocal_101=1;
}
cLocal_140="RANDOM@ATMROBBERY4";
sLocal_141="Return_Wallet_Positive_C_Player";
sLocal_142="Return_Wallet_Positive_C_Female";
sLocal_143="Return_Wallet_Positive_C_Cam";
cLocal_146="random@car_thief@waiting_ig_4";
sLocal_147="waiting";
sLocal_148="waiting";
sLocal_149="waiting";
break;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -203.72f, -861.8f, 29.27f, 1) < 5f){
Local_136={
-197.64f, -863.25f, 28.33f 
};
fLocal_137=334.5007f;
Local_138={
-187.24f, -856.77f, 28.97f 
};
fLocal_139=162.69f;
iLocal_70=1;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 288.46f, -1256.71f, 28.44f, 1) < 5f){
Local_136={
286.5f, -1256.73f, 28.29f 
};
fLocal_137=167.3216f;
Local_138={
250.55f, -1239.27f, 28.84f 
};
fLocal_139=265.51f;
iLocal_70=2;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -3044.11f, 594.34f, 6.73f, 1) < 5f){
Local_136={
-3044.66f, 595.7f, 6.59f 
};
fLocal_137=296.7338f;
Local_138={
-3037.55f, 608.53f, 7.34f 
};
fLocal_139=202.3f;
iLocal_70=3;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 174.53f, 6637.64f, 30.57f, 1) < 5f){
Local_136={
175.57f, 6636.58f, 30.57f 
};
fLocal_137=260.4868f;
Local_138={
188.97f, 6616.2f, 31.48f 
};
fLocal_139=93.97f;
iLocal_70=4;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 24.13f, -946.84f, 28.36f, 1) < 5f){
Local_136={
23.65f, -948.26f, 28.36f 
};
fLocal_137=258.8732f;
Local_138={
22.19f, -955.82f, 28.94f 
};
fLocal_139=70.66f;
iLocal_70=6;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 296.13f, -894.01f, 28.23f, 1) < 5f){
Local_136={
294.64f, -893.6f, 28.18f 
};
fLocal_137=156.7222f;
Local_138={
286.4f, -897.28f, 28.57f 
};
fLocal_139=341.97f;
iLocal_70=8;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 1077.69f, -775.73f, 57.21f, 1) < 5f){
Local_136={
1077.64f, -773.86f, 57.09f 
};
fLocal_137=275.6593f;
Local_138={
1081.93f, -764.08f, 57.35f 
};
fLocal_139=268.57f;
iLocal_70=11;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -2072.88f, -317.19f, 12.32f, 1) < 5f){
Local_136={
-2074.93f, -316.75f, 12.16f 
};
fLocal_137=157.3363f;
Local_138={
-2101.2f, -293.74f, 12.74f 
};
fLocal_139=263.12f;
iLocal_70=16;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -821.33f, -1082.43f, 10.14f, 1) < 5f){
Local_136={
-819.39f, -1084.12f, 10.03f 
};
fLocal_137=236.6294f;
Local_138={
-803.18f, -1075.91f, 11.13f 
};
fLocal_139=209.53f;
iLocal_70=17;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -712.9f, -819.32f, 22.73f, 1) < 5f){
Local_136={
-712.88f, -820.47f, 22.61f 
};
fLocal_137=268.2568f;
Local_138={
-721.63f, -826.84f, 22.82f 
};
fLocal_139=93.14f;
iLocal_70=18;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -387.12f, 6045.79f, 30.5f, 1) < 5f){
Local_136={
-389.5633f, 6042.153f, 30.4989f 
};
fLocal_137=223.2838f;
Local_138={
-406.23f, 6045.69f, 31.06f 
};
fLocal_139=229.52f;
iLocal_70=19;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -301.84f, -830.39f, 31.38f, 1) < 5f){
Local_136={
-304.1459f, -837.4778f, 30.6799f 
};
fLocal_137=286.139f;
Local_138={
-304.56f, -840.76f, 31.26f 
};
fLocal_139=77.59f;
iLocal_70=22;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -254.3f, -691.96f, 32.61f, 1) < 5f){
Local_136={
-253.51f, -689.26f, 32.57f 
};
fLocal_137=209.9227f;
Local_138={
-250.91f, -684.01f, 33f 
};
fLocal_139=230.65f;
iLocal_70=23;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, 89.39f, 2f, 67.34f, 1) < 5f){
Local_136={
88.7f, 0.01f, 67.38f 
};
fLocal_137=71.0114f;
Local_138={
91.35f, -7.07f, 67.82f 
};
fLocal_139=70.28f;
iLocal_70=25;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -526.42f, -1222.51f, 17.46f, 1) < 5f){
Local_136={
-530.11f, -1217.33f, 17.26f 
};
fLocal_137=53.768f;
Local_138={
-522.45f, -1196.35f, 18.45f 
};
fLocal_139=297.22f;
iLocal_70=30;
}elseif(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_51, -2956.78f, 488.19f, 14.47f, 1) < 5f){
Local_136={
-2956.78f, 488.19f, 14.47f 
};
fLocal_137=80.0912f;
Local_138={
-2974.34f, 491.96f, 15f 
};
fLocal_139=1.95f;
iLocal_70=31;
}else{
Local_136={
Local_51 
};
}}

int func_222(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_223(){
if(!func_192(5)){
return 1;
}
if(func_216()){
return 1;
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_220()){
return 0;
}}
if(func_209(100f, 1) !=-1){
return 1;
}
return 0;
}

int func_224(){
if((Global_113799==func_225() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113800){
return 1;
}
return 0;
}

int func_225(){
struct<16> Var0;
var uVar1;
StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
uVar1=func_226(Var0);
return uVar1;
}

int func_226(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15){
switch (MISC::GET_HASH_KEY(&cParam0)){
case joaat("re_abandonedcar"):
return 23;
break;
case joaat("re_accident"):
return 0;
break;
case joaat("re_arrests"):
return 15;
break;
case joaat("re_atmrobbery"):
return 1;
break;
case joaat("re_bikethief"):
return 26;
break;
case joaat("re_border"):
return 29;
break;
case joaat("re_burials"):
return 24;
break;
case joaat("re_bus_tours"):
return 2;
break;
case joaat("re_cartheft"):
return 17;
break;
case joaat("re_chasethieves"):
return 11;
break;
case joaat("re_crashrescue"):
return 16;
break;
case joaat("re_cultshootout"):
return 18;
break;
case joaat("re_dealgonewrong"):
return 12;
break;
case joaat("re_domestic"):
return 3;
break;
case joaat("re_drunkdriver"):
return 27;
break;
case joaat("re_gang_intimidation"):
return 20;
break;
case joaat("re_gangfight"):
return 19;
break;
case joaat("re_getaway_driver"):
return 4;
break;
case joaat("re_hitch_lift"):
return 13;
break;
case joaat("re_homeland_security"):
return 28;
break;
case joaat("re_lured"):
return 7;
break;
case joaat("re_muggings"):
return 25;
break;
case joaat("re_paparazzi"):
return 10;
break;
case joaat("re_prisonerlift"):
return 22;
break;
case joaat("re_prisonvanbreak"):
return 21;
break;
case joaat("re_securityvan"):
return 9;
break;
case joaat("re_shoprobbery"):
return 5;
break;
case joaat("re_snatched"):
return 6;
break;
case joaat("re_stag_do"):
return 14;
break;
case joaat("re_yetarian"):
return 30;
break;
case joaat("re_duel"):
return 31;
break;
case joaat("re_seaplane"):
return 32;
break;
case joaat("re_monkey"):
return 33;
break;
}
return -1;
}


void func_227(var uParam0){
int iVar0;
if(uParam0->f_145){
if((MISC::GET_FRAME_COUNT() >=(uParam0->f_146 + uParam0->f_147) || MISC::IS_BIT_SET(Global_100833.f_20, 2)) || MISC::IS_BIT_SET(Global_100833.f_20, 13)){
iVar0=0;
while (iVar0 < 8){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
if(!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29)){
func_228(uParam0[iVar0 /*18*/]);
uParam0->f_146=MISC::GET_FRAME_COUNT();
return;
}}
iVar0++;
}}}}


void func_228(var uParam0){
func_229(uParam0, &(uParam0->f_2), uParam0->f_1);
}


void func_229(var uParam0, char* sParam1, int iParam2){
if(MISC::IS_BIT_SET(*uParam0, 30)){
switch (func_203(*uParam0)){
case 0:
STREAMING::REQUEST_MODEL(uParam2);
break;
case 1:
STREAMING::REQUEST_ANIM_DICT(uParam1);
break;
case 2:
STREAMING::REQUEST_CLIP_SET(sParam1);
break;
case 3:
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*uParam0, 28));
break;
case 4:
VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
break;
case 5:
TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
break;
case 6:
AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27), -1);
break;
case 7:
SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
break;
case 8:
HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
break;
case 9:
STREAMING::REQUEST_PTFX_ASSET();
break;
default:
break;
}
MISC::SET_BIT(uParam0, 29);
}}


void func_230(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(*uParam1==-99){
*uParam1=MISC::GET_GAME_TIMER();
}
if(HUD::DOES_BLIP_EXIST(uParam0)){
iVar0=(MISC::GET_GAME_TIMER() - *uParam1);
if(iVar0 < 5000){
iVar1=ceil((to_float(iVar0) / 1000f));
if((iVar1 * 1000 - iVar0) < 500){
if(HUD::GET_BLIP_ALPHA(iParam0) !=255){
HUD::SET_BLIP_ALPHA(iParam0, 255);
}}elseif(HUD::GET_BLIP_ALPHA(iParam0) !=0){
HUD::SET_BLIP_ALPHA(iParam0, 0);
}}elseif(*uParam1 !=-100){
*uParam1=-100;
if(HUD::GET_BLIP_ALPHA(iParam0) !=255){
HUD::SET_BLIP_ALPHA(iParam0, 255);
}}}}


void func_231(){
}


void func_232(){
}


void func_233(int iParam0){
if(iParam0==-1){
iParam0=func_225();
}
if(iParam0==-1){
return;
}
func_235(iParam0);
MISC::SET_SCRIPT_HIGH_PRIO(0);
MISC::SET_RANDOM_EVENT_FLAG(1);
Global_113796=0;
func_234();
}


void func_234(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
}
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}}


void func_235(int iParam0){
Global_113799=iParam0;
}

int func_236(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
bool bVar0;
struct<3> Var1;
int iVar2;
struct<3> Var3;
int iVar4;
if(!Global_152397){
return 0;
}
if(iParam1==-1){
iParam1=func_225();
}
if(iParam1==-1){
return 0;
}
if(iParam1==31 || iParam1==32){
if(!func_277()){
return 0;
}}
Local_49={
Param0 
};
bVar0=false;
if(!bVar0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_220()){
return 0;
}}
if(!Global_113810.f_9088){
return 0;
}
if(func_276(0)){
return 0;
}
if(func_216()){
return 0;
}
if(func_275()){
return 0;
}
if(Global_113799 !=-1){
return 0;
}
if(func_40(func_38())){
if(func_209(100f, 1) !=-1){
return 0;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4){
if((Var1.f_2 - Local_49.f_2) > 50f){
return 0;
}}
if(!func_274(iParam1)){
return 0;
}
if(func_40(func_38())){
if(func_273(func_38())==4 || func_273(func_38())==5){
return 0;
}}
if(func_40(func_38())){
if(!func_272(iParam1, bParam2, 145)){
return 0;
}}
if(!func_271(Global_113810.f_24998.f_43[iParam1])){
return 0;
}
if((MISC::GET_GAME_TIMER() - Global_113801) < 150000){
if(iParam1 !=30){
return 0;
}}
if(func_270()){
return 0;
}
if(MISC::GET_MISSION_FLAG()){
return 0;
}
if(MISC::GET_RANDOM_EVENT_FLAG()){
return 0;
}
if(!func_261(4)){
return 0;
}
if(!func_192(5)){
return 0;
}
if(func_260(iParam1, bParam2) && !bParam3){
return 0;
}
if(Global_3 && iParam1 !=10){
return 0;
}
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))){
if((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f)){
return 0;
}}
if((iParam1==9 && (bParam2==2 || bParam2==5)) && !func_260(0, 0)){
return 0;
}
if(Global_32430){
return 0;
}
if(func_274(30) && !func_260(30, 0)){
if(iParam1 !=30){
if(vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f){
return 0;
}}}
if(func_40(func_38())){
iVar2=0;
while (iVar2 < 3){
Var3={
Global_113810.f_2366.f_539.f_2300[iVar2 /*3*/] 
};
iVar4=Global_113810.f_2366.f_539.f_2296[iVar2];
if(func_259(iVar4)){
if(func_237(iVar2)){
if(!func_64(Var3, 0f, 0f, 0f, 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f)){
if(func_38() !=iVar2){
return 0;
}}
}}}
iVar2++;
}}}
return 1;
}


bool func_237(int iParam0){
int iVar0;
iVar0=Global_113810.f_2366.f_539.f_2296[iParam0];
return func_238(iVar0);
}

int func_238(int iParam0){
return func_239(iParam0, 1);
}

int func_239(int iParam0, int iParam1){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!func_259(iParam0)){
return 0;
}
func_240(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
if(((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >=iParam1){
return 1;
}
return 0;
}


void func_240(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6){
func_241(func_252(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}


void func_241(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(func_251(iParam0, iParam1)){
iVar0=func_250(iParam1);
iVar1=func_248(iParam0);
iVar2=(func_248(iParam0) - func_248(iParam1));
iVar3=(func_250(iParam0) - func_250(iParam1));
iVar4=(func_247(iParam0) - func_247(iParam1));
iVar5=(func_246(iParam0) - func_246(iParam1));
iVar6=(func_245(iParam0) - func_245(iParam1));
iVar7=(func_244(iParam0) - func_244(iParam1));
}else{
iVar0=func_250(iParam0);
iVar1=func_248(iParam1);
iVar2=(func_248(iParam1) - func_248(iParam0));
iVar3=(func_250(iParam1) - func_250(iParam0));
iVar4=(func_247(iParam1) - func_247(iParam0));
iVar5=(func_246(iParam1) - func_246(iParam0));
iVar6=(func_245(iParam1) - func_245(iParam0));
iVar7=(func_244(iParam1) - func_244(iParam0));
}
while (iVar7 < 0){
iVar7 +=60;
iVar6=(iVar6 - 1);
}
while (iVar7 > 59){
iVar7=(iVar7 - 60);
iVar6++;
}
while (iVar6 < 0){
iVar6 +=60;
iVar5=(iVar5 - 1);
}
while (iVar6 > 59){
iVar6=(iVar6 - 60);
iVar5++;
}
while (iVar5 < 0){
iVar5 +=24;
iVar4=(iVar4 - 1);
}
while (iVar5 > 23){
iVar5=(iVar5 - 24);
iVar4++;
}
while (iVar4 < 0){
while (iVar3 < 0){
iVar3 +=12;
iVar2=(iVar2 - 1);
}
iVar4=(iVar4 + func_243(iVar0, iVar1));
iVar3=(iVar3 - 1);
iVar0=round(func_242(to_float(iVar0 + 1), 0f, 12f));
}
while (iVar3 < 0){
iVar3 +=12;
iVar2=(iVar2 - 1);
}
while (iVar3 > 12){
iVar3=(iVar3 - 12);
iVar2++;
}
*uParam2=iVar7;
*uParam3=iVar6;
*uParam4=iVar5;
*uParam5=iVar4;
*uParam6=iVar3;
*uParam7=iVar2;
}


float func_242(float fParam0, float fParam1, float fParam2){
float fVar0;
if(fParam1==fParam2){
return fParam1;
}
fVar0=(fParam2 - fParam1);
fParam0=(fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
if(fParam0 < fParam1){
fParam0=(fParam0 + fVar0);
}
return fParam0;
}

int func_243(int iParam0, int iParam1){
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

int func_244(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_245(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_246(int iParam0){
return shift_right(iParam0, 9) & 31;
}

int func_247(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_248(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_249(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_249(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_250(int iParam0){
return iParam0 & 15;
}

int func_251(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_259(iParam1) || !func_259(iParam0)){
return 1;
}
iVar0=func_248(iParam0);
iVar1=func_248(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_250(iParam0);
iVar1=func_250(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_247(iParam0);
iVar1=func_247(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_246(iParam0);
iVar1=func_246(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_245(iParam0);
iVar1=func_245(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_244(iParam0);
iVar1=func_244(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_252(){
var uVar0;
func_258(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_257(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_256(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_255(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_254(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_253(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_253(var uParam0, int iParam1){
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


void func_254(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_255(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_250(*uParam0);
iVar1=func_248(*uParam0);
if(iParam1 < 1 || iParam1 > func_243(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}


void func_256(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_257(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_258(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_259(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_244(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_245(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_246(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_248(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_250(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_247(iParam0);
if(iVar5 < 1 || iVar5 > func_243(iVar4, iVar3)){
return 0;
}
return 1;
}

int func_260(int iParam0, bool bParam1){
if(MISC::IS_BIT_SET(Global_113810.f_24998.f_8[iParam0], bParam1)){
return 1;
}
return 0;
}

int func_261(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_38();
if(!func_40(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_269()) || Global_112857) || Global_32286) || func_268()) || func_60(8, -1)) || func_267()) || func_266()) || func_265()) || func_264()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_269()) || Global_32286) || func_268()) || func_60(8, -1)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_269()) || Global_112857) || Global_32286) || func_268()) || func_60(8, -1)) || func_265()) || func_267()) || func_266()) || func_264()) || Global_113810.f_7691.f_919[iVar0]==5) || Global_43924 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_269()) || Global_112857) || Global_32286) || func_268()) || func_60(8, -1)) || func_267()) || func_266()) || func_264()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_269() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_60(8, -1)) || func_264()) || func_263()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_60(8, -1) || func_267()) || func_266()) || func_263()) || func_262()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_269()) || Global_32286) || func_268()) || func_60(8, -1)) || func_266()) || func_265()) || func_264()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_269()) || func_266()) || Global_112857) || Global_32286) || func_268()) || Global_44569) || func_60(8, -1)) || func_265()) || func_263()) || func_264()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_269()) || Global_112857) || Global_32286) || func_268()) || func_60(8, -1)) || func_265()) || func_263()) || func_267()) || func_266()) || func_264()){
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


var func__262(){
return Global_100872.f_1;
}

int func_263(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_264(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_265(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


bool func_266(){
return Global_100885.f_394 > 0;
}


bool func_267(){
return Global_100885.f_393 > 0;
}


var func__268(){
return Global_1575063;
}

int func_269(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}

int func_270(){
func_58();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
return 1;
}
return 0;
}


bool func_271(int iParam0){
return func_251(func_252(), iParam0);
}

int func_272(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
iVar1=func_38();
if(iParam2 !=145 && ((iParam2==0 || iParam2==1) || iParam2==2)){
iVar1=iParam2;
}
switch (iParam0){
case 18:
if(iVar1==2){
iVar0=1;
}
break;
case 19:
if(iVar1 !=2){
iVar0=1;
}
break;
case 20:
if(iVar1 !=1){
iVar0=1;
}
break;
case 28:
if(iVar1 !=2){
iVar0=1;
}
break;
case 13:
if(iVar1==0){
if(iParam1==2){
iVar0=0;
}else{
iVar0=1;
}}else{
iVar0=1;
}
break;
case 22:
if(iParam1==2 || iVar1 !=2){
iVar0=1;
}
break;
case 30:
if(iVar1 !=2){
iVar0=1;
}
break;
default:
iVar0=1;
break;
}
return iVar0;
}

int func_273(int iParam0){
if(!func_40(iParam0)){
return 7;
}
return Global_113810.f_7691.f_919[iParam0];
}

int func_274(int iParam0){
int iVar0;
int iVar1;
if(iParam0==31 || iParam0==32){
if(!func_277()){
return 0;
}}
iVar0=iParam0;
if(iVar0 < 31){
iVar1=MISC::IS_BIT_SET(Global_113810.f_24998, iVar0);
}else{
iVar0=(iVar0 - 31);
iVar1=MISC::IS_BIT_SET(Global_113810.f_24998.f_1, iVar0);
}
return iVar1;
}

int func_275(){
var uVar0;
if(Global_32435){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0))){
return 1;
}}}}
return 0;
}

int func_276(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}

int func_277(){
int iVar0;
if(Global_152686==2){
return 1;
}elseif(Global_152686==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
MISC::SET_BIT(&iVar0, 2);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar0, false);
STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}


void func_278(){
if(bLocal_125){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, 0)){
if(VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_71)){
VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iLocal_71);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_53)){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
}
EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
if(iLocal_67 !=0){
EVENT::REMOVE_SHOCKING_EVENT(iLocal_67);
}
EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
if(!PED::IS_PED_INJURED(iLocal_54)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, 0);
PED::SET_PED_CAN_BE_TARGETTED(iLocal_54, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54);
}
if(bLocal_63==4){
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
}
func_180(&uLocal_150, 0, 0);
if(func_224()){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
}
func_291(&Local_162, 0);
func_279(-1);
MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_61, 0);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_279(int iParam0){
char cVar0[64];
if(iParam0==-1){
iParam0=func_225();
}
if(iParam0==-1){
return;
}
if(func_224()){
func_284(iParam0);
HUD::SET_MISSION_NAME(0, 0);
Global_113801=MISC::GET_GAME_TIMER();
func_283(30000);
StringCopy(&cVar0, func_282(Global_113799, 1), 64);
if(func_281(Global_113799) > 0){
StringConCat(&cVar0, " Variation ", 64);
StringIntConCat(&cVar0, Global_113798, 64);
}
STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113796, (MISC::GET_GAME_TIMER() - Global_113797), 0);
}elseif(MISC::IS_BIT_SET(Global_113806, 0) && Global_113810.f_24998.f_2 < 3){
MISC::CLEAR_BIT(&Global_113806, false);
}
func_280(&Global_32343);
Global_113800=0;
func_235(-1);
}


void func_280(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43339){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43338=0;
Global_43340=0;
Global_43377=15;
Global_63482=0;
Global_63483=0;
}

int func_281(int iParam0){
int iVar0;
iVar0=1;
switch (iParam0){
case 1:
iVar0=5;
break;
case 5:
iVar0=2;
break;
case 9:
iVar0=10;
break;
case 11:
iVar0=4;
break;
case 13:
iVar0=4;
break;
case 15:
iVar0=2;
break;
case 17:
iVar0=2;
break;
case 22:
iVar0=2;
break;
case 23:
iVar0=2;
break;
case 25:
iVar0=3;
break;
case 26:
iVar0=2;
break;
case 27:
iVar0=2;
break;
case 29:
iVar0=3;
break;
}
return iVar0;
}


char* func_282(int iParam0, bool bParam1){
switch (iParam0){
case 0:
return "RE_ACCIDENT";
break;
case 1:
return "RE_ATMROBBERY";
break;
case 2:
return "RE_BUSTOUR";
break;
case 3:
return "RE_DOMESTIC";
break;
case 4:
return "RE_GETAWAYDRIVER";
break;
case 5:
return "RE_SHOPROBBERY";
break;
case 6:
return "RE_SNATCHED";
break;
case 7:
return "RE_LURED";
break;
case 8:
return "RE_BIKETHIEFSTAMP";
break;
case 9:
return "RE_SECURITYVAN";
break;
case 10:
return "RE_PAPARAZZI";
break;
case 11:
return "RE_CHASETHIEVES";
break;
case 12:
return "RE_DEALGONEWRONG";
break;
case 13:
return "RE_HITCHLIFT";
break;
case 14:
return "RE_STAG";
break;
case 15:
return "RE_ARREST";
break;
case 16:
return "RE_CRASHRESCUE";
break;
case 17:
return "RE_CARTHEFT";
break;
case 18:
return "RE_CULTSHOOTOUT";
break;
case 19:
return "RE_GANGFIGHT";
break;
case 20:
return "RE_GANGINTIMIDATION";
break;
case 21:
return "RE_PRISONVANBREAK";
break;
case 22:
return "RE_PRISONERLIFT";
break;
case 23:
return "RE_ABANDONEDCAR";
break;
case 24:
return "RE_BURIAL";
break;
case 25:
return "RE_MUGGING";
break;
case 26:
return "RE_BIKETHIEF";
break;
case 27:
return "RE_DRUNKDRIVER";
break;
case 28:
return "RE_HOMELANDSECURITY";
break;
case 29:
return "RE_BORDERPATROL";
break;
case 30:
return "RE_SIMEONYETARIAN";
break;
case 31:
return "RE_DUEL";
break;
case 32:
return "RE_SEAPLANE";
break;
case 33:
return "RE_MONKEYPHOTO";
break;
case -1:
return "RE_NONE";
break;
}
if(!bParam1){}
return "UNKNOWN";
}


void func_283(int iParam0){
Global_43928=(MISC::GET_GAME_TIMER() + iParam0);
}


void func_284(int iParam0){
func_285(iParam0, 0, func_290(iParam0));
}


void func_285(int iParam0, int iParam1, int iParam2){
var uVar0;
struct<16> Var1;
uVar0=func_252();
func_288(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
func_287(iParam0, &uVar0);
Var1={
func_286(&uVar0) 
};
}
struct<16> func_286(var uParam0){
struct<16> Var0;
int iVar1;
StringCopy(&Var0, "", 64);
iVar1=func_246(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_245(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_244(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, " ", 64);
iVar1=func_247(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, "/", 64);
iVar1=func_250(*uParam0);
if(iVar1 < 9){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1 + 1, 64);
StringConCat(&Var0, "/", 64);
StringIntConCat(&Var0, func_248(*uParam0), 64);
return Var0;
}


void func_287(int iParam0, var uParam1){
Global_113810.f_24998.f_43[iParam0]=*uParam1;
}


void func_288(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_248(*uParam0);
iVar1=func_250(*uParam0);
iVar2=func_247(*uParam0);
iVar3=func_246(*uParam0);
iVar4=func_245(*uParam0);
iVar5=func_244(*uParam0);
if(((((iParam6==0 && iParam5==0) && iParam4==0) && iParam3==0) && iParam2==0) && iParam1==0){
return;
}
if(iParam1 < 0){
return;
}
if(iParam2 < 0){
return;
}
if(iParam3 < 0){
return;
}
if(iParam4 < 0){
return;
}
if(iParam5 < 0){
return;
}
if(iParam6 < 0){
return;
}
iVar5=(iVar5 + iParam1);
while (iVar5 >=60){
iParam2++;
iVar5=(iVar5 - 60);
}
iVar4=(iVar4 + iParam2);
while (iVar4 >=60){
iParam3++;
iVar4=(iVar4 - 60);
}
iVar3=(iVar3 + iParam3);
while (iVar3 >=24){
iParam4++;
iVar3=(iVar3 - 24);
}
iVar2=(iVar2 + iParam4);
iVar6=func_243(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_243(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_289(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_289(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_258(uParam0, iParam1);
func_257(uParam0, iParam2);
func_256(uParam0, iParam3);
func_254(uParam0, iParam5);
func_255(uParam0, iParam4);
func_253(uParam0, iParam6);
}

int func_290(int iParam0){
int iVar0;
switch (iParam0){
case 23:
iVar0=30;
break;
case 0:
iVar0=30;
break;
case 15:
iVar0=30;
break;
case 1:
iVar0=200;
break;
case 26:
iVar0=30;
break;
case 8:
iVar0=30;
break;
case 29:
iVar0=30;
break;
case 24:
iVar0=30;
break;
case 2:
iVar0=0;
break;
case 17:
iVar0=30;
break;
case 11:
iVar0=30;
break;
case 16:
iVar0=30;
break;
case 18:
iVar0=30;
break;
case 12:
iVar0=120;
break;
case 3:
iVar0=60;
break;
case 27:
iVar0=60;
break;
case 19:
iVar0=30;
break;
case 20:
iVar0=30;
break;
case 4:
iVar0=60;
break;
case 28:
iVar0=30;
break;
case 13:
iVar0=35;
break;
case 7:
iVar0=30;
break;
case 25:
iVar0=40;
break;
case 10:
iVar0=30;
break;
case 22:
iVar0=30;
break;
case 21:
iVar0=30;
break;
case 5:
iVar0=30;
break;
case 30:
iVar0=60;
break;
case 9:
iVar0=60;
break;
case 6:
iVar0=40;
break;
case 14:
iVar0=40;
break;
}
return iVar0;
}


void func_291(var uParam0, bool bParam1){
int iVar0;
if(!bParam1){
func_293(uParam0);
}
iVar0=0;
while (iVar0 < 8){
func_292(uParam0[iVar0 /*18*/]);
iVar0++;
}
uParam0->f_145=0;
uParam0->f_146=-1;
}


void func_292(var uParam0){
*uParam0=0;
uParam0->f_1=-1;
StringCopy(&(uParam0->f_2), "NULL", 64);
}


void func_293(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30)){
func_294(uParam0[iVar0 /*18*/]);
}
iVar0++;
}
uParam0->f_145=1;
}


void func_294(var uParam0){
func_295(*uParam0, &(uParam0->f_2), uParam0->f_1);
}


void func_295(var uParam0, char* sParam1, var uParam2){
if(MISC::IS_BIT_SET(uParam0, 30)){
switch (func_203(uParam0)){
case 0:
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
break;
case 1:
STREAMING::REMOVE_ANIM_DICT(uParam1);
break;
case 2:
STREAMING::REMOVE_CLIP_SET(sParam1);
break;
case 3:
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
break;
case 4:
VEHICLE::REMOVE_VEHICLE_RECORDING(uParam2, sParam1);
break;
case 5:
TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
break;
case 6:
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
break;
case 7:
SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(uParam2);
break;
case 8:
HUD::CLEAR_ADDITIONAL_TEXT(uParam2, MISC::IS_BIT_SET(uParam0, 26));
break;
case 9:
STREAMING::REMOVE_PTFX_ASSET();
break;
default:
break;
}}}


void func_296(bool bParam0){
Global_113802={
Local_51 
};
if(bParam0){
func_311(3);
}
func_300(1, 0);
if(!bLocal_94){
func_299();
}
func_297();
func_278();
}


void func_297(){
func_298();
}

int func_298(){
if(func_276(0)){
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

int func_299(){
return 1;
}


void func_300(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_225();
}
if(iParam0==-1){
return;
}
if(iParam1 <=func_281(iParam0)){
func_310(iParam0, iParam1);
if(!func_309(51)){
func_306("RE_REWARD", 1, 0, 4000, 10000, func_215(), 0, 138, 0);
func_305(51);
}
if(func_188(iParam0)){
Global_113810.f_24998.f_2=3;
}
if(func_304(iParam0, iParam1) !=322){
func_301(func_304(iParam0, iParam1), Local_49.f_0, Local_49.f_1);
}
Global_113798=iParam1;
if(Global_113796==0){
if(((Global_113799==1 || Global_113799==5) || Global_113799==11) || Global_113799==25){
func_311(2);
}elseif((Global_113799==26 || Global_113799==8) || Global_113799==17){
func_311(7);
}else{
func_311(1);
}}}}


void func_301(int iParam0, var uParam1, var uParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_14((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113810.f_10197[iParam0 /*12*/].f_5==1){
if(Global_113810.f_10197[iParam0 /*12*/].f_6==11 || Global_113810.f_10197[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113810.f_10197[iParam0 /*12*/].f_5=1;
Global_113810.f_10197[iParam0 /*12*/].f_10=uParam1;
Global_113810.f_10197[iParam0 /*12*/].f_11=uParam2;
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
func_302();
}}


void func_302(){
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
func_34(13, floor(Global_113810.f_10197.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78689){
if(func_303()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113544=0;
}
if(!Global_63485){
func_298();
}}}}}

int func_303(){
return Global_32283;
}

int func_304(int iParam0, int iParam1){
switch (iParam0){
case 0:
return 250;
break;
case 1:
return 226;
break;
case 2:
return 243;
break;
case 3:
return 256;
break;
case 4:
return 259;
break;
case 5:
if(iParam1==1){
return 281;
}
if(iParam1==2){
return 282;
}
break;
case 6:
return 265;
break;
case 7:
return 218;
break;
case 9:
if(iParam1==1){
return 271;
}
if(iParam1==2){
return 272;
}
if(iParam1==3){
return 273;
}
if(iParam1==4){
return 274;
}
if(iParam1==5){
return 275;
}
if(iParam1==6){
return 276;
}
if(iParam1==7){
return 277;
}
if(iParam1==8){
return 278;
}
if(iParam1==9){
return 279;
}
if(iParam1==10){
return 280;
}
break;
case 10:
return 219;
break;
case 11:
if(iParam1==1){
return 246;
}
if(iParam1==2){
return 247;
}
if(iParam1==3){
return 248;
}
if(iParam1==4){
return 249;
}
break;
case 12:
return 254;
break;
case 13:
if(iParam1==1){
return 260;
}
if(iParam1==2){
return 261;
}
if(iParam1==3){
return 262;
}
if(iParam1==4){
return 264;
}
break;
case 14:
return 283;
break;
case 15:
if(iParam1==1){
return 224;
}
if(iParam1==2){
return 225;
}
break;
case 16:
return 252;
break;
case 17:
if(iParam1==1){
return 244;
}
if(iParam1==2){
return 245;
}
break;
case 18:
return 253;
break;
case 19:
return 215;
break;
case 20:
return 216;
break;
case 21:
return 251;
break;
case 22:
if(iParam1==1){
return 221;
}
if(iParam1==2){
return 222;
}
break;
case 23:
if(iParam1==1){
return 213;
}
if(iParam1==2){
return 214;
}
break;
case 24:
return 242;
break;
case 25:
if(iParam1==1){
return 267;
}
if(iParam1==2){
return 268;
}
if(iParam1==3){
return 269;
}
break;
case 8:
return 255;
break;
case 26:
if(iParam1==1){
return 227;
}
if(iParam1==2){
return 228;
}
break;
case 27:
if(iParam1==1){
return 257;
}
if(iParam1==2){
return 258;
}
break;
case 28:
return 217;
break;
case 29:
if(iParam1==1){
return 229;
}
if(iParam1==2){
return 230;
}
if(iParam1==3){
return 231;
}
break;
case 30:
return 285;
break;
case 31:
return 318;
break;
case 32:
return 319;
break;
case 33:
return 320;
break;
}
return 322;
}


void func_305(int iParam0){
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


void func_306(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_307(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_307(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
func_308();
}}


void func_308(){
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

int func_309(int iParam0){
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


void func_310(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_113810.f_24998.f_8[iParam0]), iParam1);
}


void func_311(int iParam0){
Global_113796=iParam0;
}