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
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
int iLocal_35=0;
int iLocal_36=0;
var uLocal_37=16;
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
struct<16> Local_202={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_203={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<2> Local_204={
0, 0 
};
struct<2> Local_205={
0, 0 
};
var uLocal_206=0;
var uLocal_207=0;
var uLocal_208=0;
int iLocal_209=0;
struct<3> Local_210={
0, 0, 0 
};
int iLocal_211=0;
int iLocal_212=0;
int iLocal_213=0;
var uLocal_214=0;
int iLocal_215=0;
int iLocal_216=0;
int iLocal_217=0;
int iLocal_218=0;
var uLocal_219=0;
int iLocal_220=0;
int iLocal_221[20]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_222[20]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_223=0;
int iLocal_224=0;
int iLocal_225[3]={
0, 0, 0 
};
char* sLocal_226=NULL;
char cLocal_227[16]="";
var uLocal_228=0;
var uLocal_229=0;
struct<4> Local_230={
0, 0, 0, 0 
};
struct<4> Local_231={
0, 0, 0, 0 
};
struct<4> Local_232={
0, 0, 0, 0 
};
struct<4> Local_233={
0, 0, 0, 0 
};
char cLocal_234[64]="";
var uLocal_235=0;
var uLocal_236=0;
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=0;
var uLocal_241=0;
var uLocal_242=0;
char cLocal_243[64]="";
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=0;
var uLocal_251=0;
struct<16> Local_252={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_253={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_254={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<8> Local_255={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
struct<16> Local_264={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
bool bLocal_265=0;
bool bLocal_266=0;
bool bLocal_267=0;
bool bLocal_268=0;
int iLocal_269=0;
bool bLocal_270=0;
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=0;
var uLocal_274=0;
var uLocal_275=0;
int iLocal_276=0;
char* sLocal_277=NULL;
int iLocal_278=0;
var uLocal_279=0;
var uLocal_280=0;
var uLocal_281=0;
int iLocal_282=0;
int iLocal_283=0;
int iLocal_284=0;
int iLocal_285=0;
var uLocal_286=0;
var uLocal_287=10;
var uLocal_288=0;
var uLocal_289=0;
var uLocal_290=0;
var uLocal_291=0;
var uLocal_292=0;
var uLocal_293=0;
var uLocal_294=0;
var uLocal_295=0;
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=0;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=0;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=0;
var uLocal_307=0;
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=0;
var uLocal_314=0;
var uLocal_315=0;
var uLocal_316=0;
var uLocal_317=0;
var uLocal_318=0;
var uLocal_319=0;
var uLocal_320=0;
var uLocal_321=0;
var uLocal_322=0;
var uLocal_323=0;
var uLocal_324=0;
var uLocal_325=0;
var uLocal_326=0;
var uLocal_327=0;
var uLocal_328=0;
struct<4> Local_329={
0, 0, 0, 0 
};
var uLocal_330=0;
bool bLocal_331=0;
bool bLocal_332=0;
bool bLocal_333=0;
struct<18> Local_334={
0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 
};
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=0;
var uLocal_338=0;
var uLocal_339=0;
#endregion

void __EntryFunction__(){
int iVar0;
char* sVar1;
char[] cVar2[8];
char[] cVar3[8];
char* sVar4;
int iVar5;
int iVar6;
struct<8> Var7;
int iVar8;
float fVar9;
int iVar10;
bool bVar11;
float fVar12;
char cVar13[64];
char cVar14[64];
struct<3> Var15;
int iVar16;
int iVar17;
bool bVar18;
int iVar19;
bool bVar20;
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
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
StringCopy(&Local_202, "", 64);
StringCopy(&Local_203, "", 64);
iLocal_211=-1;
iLocal_213=1;
bLocal_268=true;
iLocal_276=1;
iLocal_282=1;
iLocal_283=65;
iLocal_284=49;
iLocal_285=64;
Local_210={
ScriptParam_334.f_1[0 /*3*/] 
};
func_119();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)){
func_114(0);
}
if(func_111(func_113(SCRIPT::GET_THIS_SCRIPT_NAME()))){
func_114(0);
}
if(!func_109()){
func_114(0);
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
func_114(0);
}
if(func_108()){
func_114(0);
}
if(func_107()){
func_114(0);
}
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_106()){
func_114(0);
}
if(MISC::GET_GAME_TIMER() < Global_32428 + 10000 && !func_106()){
func_114(0);
}
StringCopy(&Local_255, "", 64);
iLocal_225[0]=1;
iLocal_225[1]=1;
iLocal_225[2]=1;
func_105();
STREAMING::REQUEST_MODEL(iLocal_36);
while (!STREAMING::HAS_MODEL_LOADED(iLocal_36)){
wait(0);
}
if(!bLocal_265){
func_114(0);
}
STREAMING::REQUEST_ANIM_DICT(&cLocal_234);
STREAMING::REQUEST_ANIM_DICT(&cLocal_243);
iLocal_215=1;
while ((!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_234) || !STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_243)) || !STREAMING::HAS_MODEL_LOADED(iLocal_36)){
wait(0);
}
Global_32428=MISC::GET_GAME_TIMER();
MISC::CLEAR_AREA_OF_PEDS(Local_210, 0.5f, 0);
uLocal_208=PED::CREATE_PED(25, iLocal_36, Local_210, ScriptParam_334.f_17[0], 0, 1);
func_103();
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_36);
iLocal_209=1;
if(ENTITY::DOES_ENTITY_EXIST(uLocal_208) && func_102(uLocal_208)){
PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_208, 17, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_208, 1);
}
iLocal_223=0;
uLocal_271=uLocal_271;
uLocal_272=uLocal_272;
uLocal_273=uLocal_273;
uLocal_274=uLocal_274;
uLocal_275=uLocal_275;
MemCopy(&cLocal_227,{
Local_204
}
, 4);
StringConCat(&cLocal_227, "AUD", 16);
MemCopy(&Local_230,{
Local_204
}
, 4);
StringConCat(&Local_230, "_RAND_", 16);
iLocal_216=0;
iLocal_224=-1;
iVar0=1;
iVar6=0;
iVar10=0;
uLocal_219=uLocal_219;
uLocal_222[0]=uLocal_222[0];
iLocal_220=iLocal_220;
uLocal_330=uLocal_330;
bLocal_331=bLocal_331;
func_101(0, 0);
bLocal_332=false;
while (iVar0==1){
if(!func_102(uLocal_208)){
func_97(func_113(SCRIPT::GET_THIS_SCRIPT_NAME()));
func_114(0);
}
if(!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
func_114(1);
}
fVar12=func_96(PLAYER::PLAYER_PED_ID(), uLocal_208);
if(fVar12 < 10f && func_95()){
PED::SET_IK_TARGET(uLocal_208, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
}
if(fVar12 < 8f){
PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, uLocal_208, 31086, 0f, 0f, 0f, 0, -1, -1);
}
if(fVar12 < 15f){
PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
}
if(bLocal_332){
if(bLocal_333){
GRAPHICS::DRAW_DEBUG_TEXT_2D("controlledByAnim", 0.02f, 0.5f, 0f, 0, 0, 255, 255);
}else{
GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT controlledByAnim", 0.02f, 0.5f, 0f, 0, 0, 255, 255);
}
if(iLocal_211==-1){
GRAPHICS::DRAW_DEBUG_TEXT_2D("iBlockObject OFF", 0.02f, 0.6f, 0f, 0, 0, 255, 255);
}else{
GRAPHICS::DRAW_DEBUG_TEXT_2D("iBlockObject ON", 0.02f, 0.6f, 0f, 0, 0, 255, 255);
}
if(iLocal_269){
GRAPHICS::DRAW_DEBUG_TEXT_2D("MONOLOGUE", 0.02f, 0.65f, 0f, 0, 0, 255, 255);
}else{
GRAPHICS::DRAW_DEBUG_TEXT_2D("IDLE", 0.02f, 0.65f, 0f, 0, 0, 255, 255);
}
StringCopy(&cVar13, "conversation_offset ", 64);
StringIntConCat(&cVar13, Global_113593[iLocal_217], 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar13, 0.02f, 0.8f, 0f, 0, 0, 255, 255);
StringCopy(&cVar13, "max_conversation_offset ", 64);
StringIntConCat(&cVar13, iLocal_218, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar13, 0.02f, 0.81f, 0f, 0, 0, 255, 255);
StringCopy(&cVar13, "conversation_split_offset ", 64);
StringIntConCat(&cVar13, iLocal_223, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar13, 0.02f, 0.82f, 0f, 0, 0, 255, 255);
StringCopy(&cVar13, "max_conversation_split_offsets[conversation_offset] ", 64);
StringIntConCat(&cVar13, iLocal_221[Global_113593[iLocal_217]], 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar13, 0.02f, 0.83f, 0f, 0, 0, 255, 255);
}
Var15={
ENTITY::GET_ENTITY_COORDS(uLocal_208, 1) 
};
if(((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uLocal_208) && !iLocal_216==25) && !iLocal_216==5) && !iLocal_216==6){
func_94();
if(func_93()){
func_91();
TASK::TASK_PLAY_ANIM(uLocal_208, &cLocal_234, &Local_203, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_216=25;
}else{
func_90();
func_91();
iLocal_216=5;
iVar10=MISC::GET_GAME_TIMER();
}
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uLocal_208, "GENERIC_CURSE_MED", "SPEECH_PARAMS_FORCE", 1);
}
if(((func_108() || MISC::GET_MISSION_FLAG()) || func_107()) || !func_109()){
if(!func_89() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode"))==0){
if(func_108()){
}
if(MISC::GET_MISSION_FLAG()){
}
TASK::TASK_PLAY_ANIM(uLocal_208, &cLocal_234, &Local_203, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_216=25;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if((((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_208) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_208)) && fVar12 < 25f) && func_88(PLAYER::PLAYER_PED_ID()) !=joaat("weapon_unarmed")) && func_85(uLocal_208, PLAYER::PLAYER_PED_ID(), 1126825984, 0)){
if(!func_89()){
func_91();
TASK::TASK_PLAY_ANIM(uLocal_208, &cLocal_234, &Local_203, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_216=24;
}}}
if(((((PED::IS_PED_INJURED(uLocal_208) || MISC::IS_BULLET_IN_AREA(Var15, 50f, 1)) || MISC::IS_BULLET_IN_AREA(Var15, 50f, 0)) || MISC::IS_PROJECTILE_IN_AREA(Var15, 20f, 20f, 20f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var15, 50f)) || GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(Var15, 1f)){
if(!func_89()){
func_91();
TASK::TASK_PLAY_ANIM(uLocal_208, &cLocal_234, &Local_203, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_216=24;
}}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_208, PLAYER::PLAYER_PED_ID(), 1)){
func_91();
TASK::TASK_PLAY_ANIM(uLocal_208, &cLocal_234, &Local_203, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_216=24;
}
if(func_84(uLocal_208, PLAYER::PLAYER_PED_ID(), 1) < 25f){
if(!HUD::DOES_BLIP_EXIST(uLocal_214)){
func_80(&uLocal_214, &uLocal_208, 0);
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_214)){
func_79(&uLocal_214);
}
if(!bLocal_268){
if(!PED::IS_PED_INJURED(uLocal_208) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_208, 1)) < 16f){
iVar16=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
iVar17=func_78(iVar16);
if(func_77(iVar17)){
if(!func_76(iVar17)){
func_67(iVar16, 0);
}}}}}
switch (iLocal_216){
case 0:
GRAPHICS::DRAW_DEBUG_TEXT_2D("SET_IDLING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_223=0;
func_63();
iLocal_216=1;
if(!func_62()){
GRAPHICS::DRAW_DEBUG_TEXT_2D("SET_IDLING SET_PED_IDLING", 0.02f, 0.11f, 0f, 0, 0, 255, 255);
func_101(0, 1);
}
break;
case 1:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_ANIM_TO_BE_LOADED", 0.02f, 0.15f, 0f, 0, 0, 255, 255);
bVar38=func_61();
if(bLocal_332){
if(bVar38){
GRAPHICS::DRAW_DEBUG_TEXT_2D("conversationAlreadyOngoing", 0.8f, 0.1f, 0f, 0, 0, 255, 255);
}else{
GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT conversationAlreadyOngoing", 0.8f, 0.1f, 0f, 0, 0, 255, 255);
}}
if((func_60() && !bVar38) && !func_59()){
iLocal_216=3;
}
if(!func_62()){
func_101(0, 1);
}
break;
case 5:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_MOVE_BACK_TO_INITIAL_POSITION", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
if((MISC::GET_GAME_TIMER() - iVar10) > 1){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_208, Local_210, 1f, -1, 1f, 1024, ScriptParam_334.f_17[0]);
iLocal_216=6;
}
break;
case 6:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_MOVE_BACK_TO_INITIAL_POSITION", 0.02f, 0.25f, 0f, 0, 0, 255, 255);
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_208, joaat("script_task_follow_nav_mesh_to_coord")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_208, joaat("script_task_follow_nav_mesh_to_coord")) !=0){
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_MOVE_BACK_TO_INITIAL_POSITION TASK_PLAY_ANIM", 0.02f, 0.26f, 0f, 0, 0, 255, 255);
TASK::TASK_PLAY_ANIM(uLocal_208, &cLocal_243, "idle_intro", 4f, -4f, -1, 0, 0, 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_208, 0, 0);
func_119();
iLocal_216=0;
}
break;
case 3:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_IDLING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(Global_3){
fVar9=25f;
}else{
fVar9=25f;
}
if(func_84(uLocal_208, PLAYER::PLAYER_PED_ID(), 1) < fVar9){
if(func_58()==1){
iLocal_216=8;
iLocal_269=0;
}}
if(!func_62()){
func_101(0, 1);
}
break;
case 7:
GRAPHICS::DRAW_DEBUG_TEXT_2D("PRE_PLAY_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(func_60()){
iLocal_216=8;
}
if(!func_62()){
}
break;
case 8:
GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAY_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_218=iLocal_218;
if(func_59()){
func_91();
func_101(0, 1);
iLocal_216=0;
}elseif(!func_62()){
func_54();
iLocal_269=1;
func_53();
iLocal_223++;
iVar8=1;
if(fVar12 > 15f){
iVar8=0;
func_91();
func_101(1, 0);
}
if(iLocal_223 < iLocal_221[Global_113593[iLocal_217]] && iVar8){
func_63();
iLocal_216=7;
}else{
iLocal_216=9;
}}elseif(iLocal_269==1){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_208, &Local_253, &Local_252, 3)){
func_52(Global_113593[iLocal_217], iLocal_223, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_208, &Local_253, &Local_252));
}}
break;
case 9:
GRAPHICS::DRAW_DEBUG_TEXT_2D("MOVE_TO_NEXT_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
bVar36=func_61();
bVar37=func_62();
func_51(Global_113593[iLocal_217]);
if(!bVar37 && (!bVar36 || bLocal_266)){
if(bLocal_331){
Global_113593[iLocal_217]=uLocal_330;
}else{
Global_113593[iLocal_217]++;
}
if(!Global_113593[iLocal_217] < iLocal_218){
Global_113593[iLocal_217]=0;
}
func_101(0, 1);
iLocal_216=0;
}elseif(!bVar37 && bVar36){
GRAPHICS::DRAW_DEBUG_TEXT_2D("CONVERSATION STILL RUNNING", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
if(!func_62()){
func_101(0, 1);
}}
break;
case 13:
GRAPHICS::DRAW_DEBUG_TEXT_2D("NEWSTATE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
func_50(&sVar1);
func_49(&uLocal_37, 0, PLAYER::PLAYER_PED_ID(), &sVar1, 0, 1);
func_49(&uLocal_37, 3, uLocal_208, &Local_205, 0, 1);
func_48(&cVar2);
if(func_33(&uLocal_37, &cLocal_227, &cVar2, 3, 0, 0, 0)){
iLocal_216=14;
}
func_32();
break;
case 14:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_TO_START_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iVar5=iVar5;
bVar11=false;
if(iLocal_269==0){
func_32();
bVar11=true;
}else{
if(!func_61()){
bVar11=true;
}
func_32();
}
if(bVar11){
iLocal_212=iLocal_213;
if(!bLocal_267){
func_31(&cVar3);
func_50(&sVar1);
}else{
func_30();
func_29(&cVar3);
}
func_49(&uLocal_37, 0, PLAYER::PLAYER_PED_ID(), &sVar1, 0, 1);
func_49(&uLocal_37, 3, uLocal_208, &Local_205, 0, 1);
Global_113593[iLocal_217]++;
if(!Global_113593[iLocal_217] < iLocal_218){
Global_113593[iLocal_217]=0;
}
iLocal_216=10;
}
break;
case 10:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_LOADING_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(!bLocal_267){
func_27(&Local_255);
func_26(iLocal_212, &Var7);
StringConCat(&Local_255, &Var7, 64);
}else{
func_25(&Local_255);
func_26(iLocal_212, &Var7);
StringConCat(&Local_255, &Var7, 64);
}
STREAMING::REQUEST_ANIM_DICT(&Local_255);
iVar35=0;
if(STREAMING::HAS_ANIM_DICT_LOADED(&Local_255)){
if(bLocal_266){
iVar35=1;
}elseif(func_33(&uLocal_37, &cLocal_227, &cVar3, 3, 0, 0, 0)){
iVar35=1;
}
if(iVar35==1){
iLocal_216=11;
}}
func_32();
break;
case 11:
GRAPHICS::DRAW_DEBUG_TEXT_2D("CHECK_FOR_LOADED_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(AUDIO::IS_SCRIPTED_CONVERSATION_LOADED()){
func_23(&sVar4);
TASK::TASK_PLAY_ANIM(uLocal_208, &Local_255, &sVar4, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_216=12;
}else{
func_32();
}
break;
case 12:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_212++;
Local_264={
Local_255 
};
if(!iLocal_212 < func_15() || fVar12 > 10f){
if(fVar12 > 10f && func_61()){
func_13();
}
iLocal_216=16;
}else{
if(!bLocal_267){
func_27(&Local_255);
func_26(iLocal_212, &Var7);
StringConCat(&Local_255, &Var7, 64);
}else{
func_25(&Local_255);
func_26(iLocal_212, &Var7);
StringConCat(&Local_255, &Var7, 64);
}
STREAMING::REQUEST_ANIM_DICT(&Local_255);
iLocal_216=15;
}
break;
case 15:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_CONVERSATION_SECTION_OVER", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
StringCopy(&cVar14, "talking offset:", 64);
StringIntConCat(&cVar14, iLocal_212, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar14, 0.02f, 0.9f, 0f, 0, 0, 255, 255);
IntToString(&cVar14, func_15(), 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar14, 0.03f, 0.9f, 0f, 0, 0, 255, 255);
if(STREAMING::HAS_ANIM_DICT_LOADED(&Local_255)){
GRAPHICS::DRAW_DEBUG_TEXT_2D("HAS_ANIM_DICT_LOADED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
if(!func_62()){
GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT IS_ANIM_PLAYING_ON_PED", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
STREAMING::REMOVE_ANIM_DICT(&Local_264);
if(!bLocal_267){
func_27(&Local_255);
func_26(iLocal_212, &Var7);
StringConCat(&Local_255, &Var7, 64);
}
else{
func_25(&Local_255);
func_26(iLocal_212, &Var7);
StringConCat(&Local_255, &Var7, 64);
}
func_23(&sVar4);
TASK::TASK_PLAY_ANIM(uLocal_208, &Local_255, &sVar4, 1000f, -1000f, -1, 0, 0, 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_208, 0, 0);
iLocal_216=12;
}}elseif(!func_62()){
}
break;
case 16:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_CONVERSATION_TO_END", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(!func_62()){
func_12(&uLocal_37, 0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), 0);
}
STREAMING::REMOVE_ANIM_DICT(&Local_264);
func_11();
func_101(0, 1);
iLocal_216=0;
}
break;
case 24:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING_TO_BLEND_INTO_IDLE_BEFORE_FLEEING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
wait(1000);
func_10();
iVar0=0;
break;
case 25:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING_TO_BLEND_INTO_IDLE_BEFORE_WANDERING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
func_8();
iVar0=0;
break;
}
bVar18=SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) > 0;
if(!bVar18){
}
if(((((((((((((iLocal_216==0 || iLocal_216==1) || iLocal_216==3) || iLocal_216==8) || iLocal_216==9) || iLocal_216==7) && func_84(uLocal_208, PLAYER::PLAYER_PED_ID(), 1) < 5f) && bLocal_265==1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && iVar6==0) && bLocal_268==1) && !Global_3) && func_7()) && bVar18){
if(iLocal_224==-1){
func_6(&iLocal_224, 4, sLocal_226, 0, 0, 0, 0);
}
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(func_4(iLocal_224, 1)){
func_50(&sVar1);
func_48(&cVar2);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), 1);
}
func_91();
func_101(1, 1);
iVar6=1;
iLocal_216=13;
iVar5=0;
iVar19=func_78(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()));
if(func_77(iVar19)){
if(!func_76(iVar19)){
func_67(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()), 0);
}}
func_2(&iLocal_224);
}}elseif(iLocal_224 !=-1){
func_2(&iLocal_224);
}
func_1();
wait(0);
}
if(iLocal_224 !=-1){
func_2(&iLocal_224);
}
if(HUD::DOES_BLIP_EXIST(uLocal_214)){
func_79(&uLocal_214);
}
bVar20=false;
while (true){
GRAPHICS::DRAW_DEBUG_TEXT_2D("do_monologue=FALSE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(bLocal_332){
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING TO CLEAN UP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
}
if(!func_102(uLocal_208)){
if(!bLocal_270){
func_97(func_113(SCRIPT::GET_THIS_SCRIPT_NAME()));
}
func_114(0);
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_208, PLAYER::PLAYER_PED_ID(), 1) && !bVar20){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_208, 0);
TASK::CLEAR_PED_TASKS(uLocal_208);
TASK::TASK_SMART_FLEE_PED(uLocal_208, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(uLocal_208, 1);
bVar20=true;
}
if((ENTITY::IS_ENTITY_OCCLUDED(uLocal_208) && func_84(uLocal_208, PLAYER::PLAYER_PED_ID(), 1) > 50f) && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
func_114(1);
}
wait(0);
}}


void func_1(){
}


void func_2(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_3(*iParam0);
if(iVar0==-1){
*iParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/].f_7=1;
*iParam0=-1;
return;
}}
*iParam0=-1;
}

int func_3(int iParam0){
int iVar0;
if(iParam0 < 0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(Global_44000[iVar0 /*32*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_4(int iParam0, bool bParam1){
int iVar0;
iVar0=func_3(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_5(0)){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]==1 && Global_44000[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44000[iVar0 /*32*/].f_29){
return 0;
}}
Global_44000[iVar0 /*32*/].f_5=1;
Global_44000[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44000[iVar0 /*32*/]==0){
}
if(Global_44000[iVar0 /*32*/].f_7){
}}}
return 0;
}

int func_5(int iParam0){
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


void func_6(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_2(iParam0);
}
return;
}
if(!*iParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(!Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/]=1;
Global_44000[iVar0 /*32*/].f_1=Global_44201;
Global_44201++;
Global_44000[iVar0 /*32*/].f_4=0;
Global_44000[iVar0 /*32*/].f_29=0;
Global_44000[iVar0 /*32*/].f_5=0;
Global_44000[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44000[iVar0 /*32*/].f_8), sParam2, 16);
Global_44000[iVar0 /*32*/].f_6=iParam3;
Global_44000[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44000[iVar0 /*32*/].f_7=0;
Global_44000[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44000[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44000[iVar0 /*32*/].f_13), sParam4, 64);
Global_44000[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44000[iVar0 /*32*/].f_12=0;
Global_44000[iVar0 /*32*/].f_30=0;
}
*iParam0=Global_44000[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_7(){
return 1;
}


void func_8(){
func_9();
if(func_102(uLocal_208) && func_102(PLAYER::PLAYER_PED_ID())){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_208, 0);
TASK::TASK_WANDER_STANDARD(uLocal_208, 1193033728, 0);
PED::SET_PED_KEEP_TASK(uLocal_208, 1);
}}


void func_9(){
if(!ENTITY::IS_ENTITY_DEAD(uLocal_208, 0)){
PED::SET_PED_MOVEMENT_CLIPSET(uLocal_208, sLocal_277, 1048576000);
}}


void func_10(){
func_9();
if(func_102(uLocal_208) && func_102(PLAYER::PLAYER_PED_ID())){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_208, 0);
TASK::TASK_SMART_FLEE_PED(uLocal_208, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(uLocal_208, 1);
func_91();
}}


void func_11(){
}


void func_12(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}


void func_13(){
Global_20591=0;
func_14();
}


void func_14(){
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

int func_15(){
int iVar0;
iVar0=func_16();
if(iVar0==2){
return 6;
}elseif(iVar0==0){
return 5;
}
return 10;
}

int func_16(){
func_17();
return Global_113648.f_2365.f_539.f_4321;
}


void func_17(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_21(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_20(PLAYER::PLAYER_PED_ID());
if(func_19(iVar0) && (!func_18(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_19(Global_113648.f_2365.f_539.f_4321)){
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
return Global_43257==iParam0;
}


bool func_19(int iParam0){
return iParam0 < 3;
}

int func_20(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_21(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_21(int iParam0){
if(func_19(iParam0)){
return func_22(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__22(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_23(char* sParam0){
struct<16> Var0;
func_24(&Var0);
*sParam0={
Var0 
};
StringConCat(sParam0, "_", 64);
StringIntConCat(sParam0, iLocal_212, 64);
}


void func_24(char* sParam0){
int iVar0;
iVar0=func_16();
if(iVar0==2){
StringCopy(sParam0, "ImAnActualized", 64);
}elseif(iVar0==0){
StringCopy(sParam0, "IAmWellonTheWay", 64);
}elseif(iVar0==1){
StringCopy(sParam0, "EverythingIsUp", 64);
}}


void func_25(char* sParam0){
int iVar0;
iVar0=iLocal_220 + 1;
*sParam0={
Local_202 
};
StringConCat(sParam0, "@", 64);
StringConCat(sParam0, "CONVO_", 64);
StringIntConCat(sParam0, iVar0, 64);
StringConCat(sParam0, "@", 64);
StringConCat(sParam0, "CONVO_", 64);
StringIntConCat(sParam0, iVar0, 64);
}


void func_26(int iParam0, char* sParam1){
switch (iParam0){
case 0:
StringCopy(sParam1, "A", 16);
break;
case 1:
StringCopy(sParam1, "B", 16);
break;
case 2:
StringCopy(sParam1, "C", 16);
break;
case 3:
StringCopy(sParam1, "D", 16);
break;
case 4:
StringCopy(sParam1, "E", 16);
break;
case 5:
StringCopy(sParam1, "F", 16);
break;
case 6:
StringCopy(sParam1, "G", 16);
break;
case 7:
StringCopy(sParam1, "H", 16);
break;
case 8:
StringCopy(sParam1, "I", 16);
break;
case 9:
StringCopy(sParam1, "J", 16);
break;
case 10:
StringCopy(sParam1, "K", 16);
break;
case 11:
StringCopy(sParam1, "L", 16);
break;
case 12:
StringCopy(sParam1, "M", 16);
break;
case 13:
StringCopy(sParam1, "N", 16);
break;
case 14:
StringCopy(sParam1, "O", 16);
break;
case 15:
StringCopy(sParam1, "P", 16);
break;
case 16:
StringCopy(sParam1, "Q", 16);
break;
case 17:
StringCopy(sParam1, "R", 16);
break;
case 18:
StringCopy(sParam1, "S", 16);
break;
case 19:
StringCopy(sParam1, "T", 16);
break;
case 20:
StringCopy(sParam1, "U", 16);
break;
case 21:
StringCopy(sParam1, "V", 16);
break;
case 22:
StringCopy(sParam1, "W", 16);
break;
case 23:
StringCopy(sParam1, "X", 16);
break;
case 24:
StringCopy(sParam1, "Y", 16);
break;
case 25:
StringCopy(sParam1, "Z", 16);
break;
}}


void func_27(char* sParam0){
char cVar0[64];
*sParam0={
Local_202 
};
StringConCat(sParam0, "@", 64);
func_28(&cVar0);
StringConCat(sParam0, &cVar0, 64);
StringConCat(sParam0, "@", 64);
StringConCat(sParam0, &cVar0, 64);
}


void func_28(char* sParam0){
struct<4> Var0;
func_50(&Var0);
*sParam0={
Var0 
};
StringConCat(sParam0, "_", 16);
StringIntConCat(sParam0, iLocal_225[func_16()], 16);
}


void func_29(char* sParam0){
MemCopy(sParam0,{
Local_204
}
, 4);
StringConCat(sParam0, "_CONV_", 16);
StringIntConCat(sParam0, iLocal_220 + 1, 16);
}


void func_30(){
iLocal_220=MISC::GET_RANDOM_INT_IN_RANGE(0, uLocal_219);
}


void func_31(char* sParam0){
int iVar0;
MemCopy(sParam0,{
Local_204
}
, 4);
StringConCat(sParam0, "_CONV_", 16);
iVar0=func_16();
if(iVar0==2){
StringConCat(sParam0, "T", 16);
}elseif(iVar0==0){
StringConCat(sParam0, "M", 16);
}else{
StringConCat(sParam0, "F", 16);
}
StringIntConCat(sParam0, iLocal_225[func_16()], 16);
}


void func_32(){
if(!func_62()){
func_101(1, 1);
}}


bool func_33(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_34(sParam2, iParam3, 0);
}

int func_34(char* sParam0, int iParam1, bool bParam2){
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
func_14();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_46(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_45();
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
func_44();
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
if(func_43()){
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
if(func_42()){
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
func_41();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_40();
func_35();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_14();
}
return 0;
}


void func_35(){
if(!func_36()){
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

int func_36(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_39()){
return 0;
}
if(func_37(PLAYER::PLAYER_ID())){
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


bool func_37(int iParam0){
return func_38(iParam0, 20);
}


var func__38(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_39(){
return -1;
}


void func_40(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_41(){
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

int func_42(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_43(){
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


void func_44(){
if(func_18(14)){
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


void func_45(){
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


bool func_46(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
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


void func_48(char[4] cParam0){
int iVar0;
iVar0=func_16();
if(iVar0==2){
*cParam0={
Local_232 
};
}elseif(iVar0==0){
*cParam0={
Local_231 
};
}else{
*cParam0={
Local_233 
};
}}


void func_49(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5){
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


void func_50(char* sParam0){
int iVar0;
iVar0=func_16();
if(iVar0==2){
StringCopy(sParam0, "TREVOR", 16);
}elseif(iVar0==0){
StringCopy(sParam0, "MICHAEL", 16);
}else{
StringCopy(sParam0, "FRANKLIN", 16);
}}


void func_51(var uParam0){
}


void func_52(var uParam0, int iParam1, var uParam2){
}


void func_53(){
STREAMING::REMOVE_ANIM_DICT(&Local_254);
}


void func_54(){
char* sVar0;
struct<16> Var1;
func_57(Global_113593[iLocal_217] + 1, &sVar0, &Var1);
StringConCat(&Var1, "_", 64);
StringIntConCat(&Var1, iLocal_223, 64);
Local_252={
Var1 
};
Local_253={
Local_254 
};
func_56(&Local_252);
TASK::TASK_PLAY_ANIM(uLocal_208, &Local_254, &Var1, 1000f, -8f, -1, 0, 0, 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_208, 0, 0);
func_55(Global_113593[iLocal_217]);
}


void func_55(var uParam0){
}


void func_56(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL(sParam0, sParam0)){}}


void func_57(int iParam0, char* sParam1, char* sParam2){
StringCopy(sParam1, "Special_Ped@jane", 32);
switch (iParam0){
case 1:
StringCopy(sParam2, "WereNotACult", 64);
break;
case 2:
StringCopy(sParam2, "YesIKnow", 64);
break;
case 3:
StringCopy(sParam2, "ItsTimeToUtilise", 64);
break;
case 4:
StringCopy(sParam2, "DontBelieveWhatOthers", 64);
break;
case 5:
StringCopy(sParam2, "BrotherAdrianHasShown", 64);
break;
case 6:
StringCopy(sParam2, "IHearYou", 64);
break;
case 7:
StringCopy(sParam2, "ItsTimeTo", 64);
break;
}}

int func_58(){
struct<4> Var0;
int iVar1;
Var0={
Local_230 
};
StringIntConCat(&Var0, Global_113593[iLocal_217] + 1, 16);
func_49(&uLocal_37, 3, uLocal_208, &Local_205, 0, 1);
if(bLocal_266){
iVar1=1;
}else{
iVar1=func_33(&uLocal_37, &cLocal_227, &Var0, 3, 0, 0, 0);
}
Local_329={
Var0 
};
return iVar1;
}


bool func_59(){
return Global_100733.f_387 > 0;
}


bool func_60(){
bool bVar0;
bVar0=STREAMING::HAS_ANIM_DICT_LOADED(&Local_254);
return bVar0;
}

int func_61(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}

int func_62(){
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_208, joaat("script_task_play_anim")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_208, joaat("script_task_play_anim")) !=0){
return 0;
}
return 1;
}


void func_63(){
struct<16> Var0;
func_64(&Var0);
STREAMING::REQUEST_ANIM_DICT(&Var0);
Local_254={
Var0 
};
}


void func_64(char* sParam0){
struct<8> Var0;
*sParam0={
Local_202 
};
StringConCat(sParam0, "@", 64);
func_66(&Var0);
StringConCat(sParam0, &Var0, 64);
StringConCat(sParam0, "@", 64);
StringConCat(sParam0, &Var0, 64);
func_65(&Var0);
StringConCat(sParam0, &Var0, 64);
}


void func_65(char* sParam0){
func_26(iLocal_223, sParam0);
}


void func_66(char* sParam0){
StringCopy(sParam0, "MONOLOGUE_", 16);
StringIntConCat(sParam0, Global_113593[iLocal_217] + 1, 16);
}


void func_67(int iParam0, bool bParam1){
int iVar0;
iVar0=func_78(iParam0);
if(func_77(iVar0)){
func_68(iVar0, bParam1);
}}


void func_68(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 <=31){
if(func_77(iParam0)){
if(!func_75(iParam0)){
MISC::SET_BIT(&(Global_113648.f_26436.f_2), iVar0);
if(!bParam1){
func_73(func_74(iParam0));
if(!func_72(70)){
func_69("DI_HLP_SPCL", 2, 0, 20000, 10000, 7, 0, 210, 0);
}}}}}}


void func_69(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_70(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_70(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113648.f_20412.f_145 < 9){
StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=uParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
}
Global_113648.f_20412.f_145++;
func_71();
}}


void func_71(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113648.f_20412.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 0)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0]){
Global_113648.f_20412.f_146[0]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 1)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1]){
Global_113648.f_20412.f_146[1]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 2)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2]){
Global_113648.f_20412.f_146[2]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
iVar0++;
}}

int func_72(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113648.f_20412.f_150[iVar1], iVar0);
}
return 0;
}


void func_73(var uParam0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}


char* func_74(int iParam0){
switch (iParam0){
case 0:
return "CM_SPEAND";
break;
case 1:
return "CM_SPEBAY";
break;
case 2:
return "CM_SPEBIL";
break;
case 3:
return "CM_SPECLI";
break;
case 4:
return "CM_SPEGRI";
break;
case 5:
return "CM_SPEJAN";
break;
case 6:
return "CM_SPEJER";
break;
case 7:
return "CM_SPEJES";
break;
case 8:
return "CM_SPEMAN";
break;
case 9:
return "CM_SPEMIM";
break;
case 10:
return "CM_SPEPAM";
break;
case 11:
return "CM_SPEIMP";
break;
case 12:
return "CM_SPEZOM";
break;
}
return "ERROR!";
}

int func_75(int iParam0){
if(func_77(iParam0)){
return MISC::IS_BIT_SET(Global_113648.f_26436.f_2, iParam0);
}
return 0;
}

int func_76(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 <=31){
return MISC::IS_BIT_SET(Global_113648.f_26436.f_2, iVar0);
}
return 0;
}

int func_77(int iParam0){
if((iParam0==-1 || iParam0==13) || iParam0==9){
return 0;
}
return 1;
}

int func_78(int iParam0){
switch (iParam0){
case joaat("gpb_andymoon"):
return 0;
break;
case joaat("gpb_baygor"):
return 1;
break;
case joaat("gpb_billbinder"):
return 2;
break;
case joaat("gpb_clinton"):
return 3;
break;
case joaat("gpb_griff"):
return 4;
break;
case joaat("gpb_jane"):
return 5;
break;
case joaat("gpb_jerome"):
return 6;
break;
case joaat("gpb_jesse"):
return 7;
break;
case joaat("gpb_mani"):
return 8;
break;
case joaat("gpb_mime"):
return 9;
break;
case joaat("gpb_pameladrake"):
return 10;
break;
case joaat("gpb_superhero"):
return 11;
break;
case joaat("gpb_zombie"):
return 12;
break;
}
return -1;
}


void func_79(var uParam0){
if(iLocal_276==1){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}}}


void func_80(var uParam0, var uParam1, bool bParam2){
if(iLocal_276==1){
if(!HUD::DOES_BLIP_EXIST(*uParam0)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(!PED::IS_PED_INJURED(*uParam1)){
*uParam0=func_81(*uParam1, bParam2, 145);
if(bParam2==0){
HUD::SET_BLIP_PRIORITY(*uParam0, 7);
}
HUD::SET_BLIP_COLOUR(*uParam0, 3);
}}}}}


var func__81(var uParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=func_82(uParam0, !bParam1, 0);
if((iParam2 !=145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
}
return uVar0;
}

int func_82(var uParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(uParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_83(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_83(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_83(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_83(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


float func_84(var uParam0, var uParam1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(uParam0, 0) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(uParam1, 1) 
};
}else{
Var1={
ENTITY::GET_ENTITY_COORDS(uParam1, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

int func_85(var uParam0, var uParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_87(ENTITY::GET_ENTITY_COORDS(uParam1, 1) - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) 
};
if(fParam2 < 0.1f || fParam2 > 360f){
return 1;
}
if(iParam3==0){
Var1={
ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0) 
};
}else{
Var1={
func_87(PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_86(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}


float func_86(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__87(struct<3> Param0){
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

int func_88(var uParam0){
var uVar0;
WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &uVar0, 1);
return uVar0;
}

int func_89(){
if(iLocal_216==24 || iLocal_216==25){
return 1;
}
return 0;
}


void func_90(){
if(iLocal_211 !=-1){
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_211)){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_211);
}
iLocal_211=-1;
}}


void func_91(){
Global_20591=0;
func_92();
}


void func_92(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
}}

int func_93(){
return 1;
}


void func_94(){
}

int func_95(){
return 1;
}


float func_96(var uParam0, var uParam1){
return func_84(uParam0, uParam1, 1);
}


void func_97(int iParam0){
int iVar0;
func_100(&(Global_113648.f_20119), iParam0);
iVar0=func_98(iParam0);
if(func_77(iVar0)){
func_68(func_98(iParam0), 0);
}}

int func_98(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 13){
iVar1=iVar0;
if(func_99(iVar1, 1)==iParam0){
return iVar1;
}
iVar0++;
}
return -1;
}

int func_99(int iParam0, bool bParam1){
if(!func_77(iParam0)){
if(!bParam1){
}
return 0;
}
switch (iParam0){
case 0:
return 1;
case 1:
return 2;
case 2:
return 4;
case 3:
return 8;
case 4:
return 16;
case 5:
return 64;
case 6:
return 128;
case 7:
return 256;
case 8:
return 512;
case 10:
return 2048;
case 11:
return 4096;
case 12:
return 8192;
default:
}
if(!bParam1){}
return 0;
}


void func_100(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_101(int iParam0, bool bParam1){
if(iParam0==1){
TASK::TASK_PLAY_ANIM(uLocal_208, &cLocal_234, &Local_203, 2f, -2f, -1, 0, 0, 0, 0, 0);
}else{
TASK::TASK_PLAY_ANIM(uLocal_208, &cLocal_234, &Local_203, 1000f, 1000f, -1, 0, 0, 0, 0, 0);
}
Local_252={
Local_203 
};
if(bParam1){
if(!PED::IS_PED_INJURED(uLocal_208) && !PED::IS_PED_DEAD_OR_DYING(uLocal_208, 1)){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_208, 0, 0);
}}}

int func_102(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}}
return 0;
}


void func_103(){
func_104();
}


void func_104(){
STREAMING::REQUEST_ANIM_DICT(sLocal_277);
while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_277)){
wait(0);
}
iLocal_278=1;
if(!ENTITY::IS_ENTITY_DEAD(uLocal_208, 0)){
PED::SET_PED_PROP_INDEX(uLocal_208, 1, 0, 0, 0, 1);
}}


void func_105(){
iLocal_36=joaat("u_f_y_comjane");
StringCopy(&Local_204, "PBJA", 8);
StringCopy(&Local_205, "JANE", 16);
StringCopy(&Local_202, "Special_Ped@jane", 64);
StringCopy(&Local_203, "Base", 64);
bLocal_265=!Global_3;
iLocal_218=7;
sLocal_226="PBJA_INTERACT";
StringCopy(&Local_231, "PBJA_CONV_GM", 16);
StringCopy(&Local_232, "PBJA_CONV_GT", 16);
StringCopy(&Local_233, "PBJA_CONV_GF", 16);
StringCopy(&cLocal_234, "special_ped@jane@base", 64);
StringCopy(&cLocal_243, "special_ped@jane@intro", 64);
sLocal_277="move_f@hurry@b";
iLocal_217=5;
iLocal_221[0]=5;
iLocal_221[1]=4;
iLocal_221[2]=5;
iLocal_221[3]=5;
iLocal_221[4]=7;
iLocal_221[5]=6;
iLocal_221[6]=6;
}

int func_106(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_107(){
if(Global_97603 !=-1){
return MISC::IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
}
return 0;
}

int func_108(){
if(Global_43257==15){
return 0;
}
return 1;
}

int func_109(){
if(func_110(62)){
return 1;
}
return 0;
}

int func_110(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


bool func_111(var uParam0){
return func_112(Global_113648.f_20119, uParam0);
}


bool func_112(var uParam0, var uParam1){
return (uParam0 && uParam1) !=0;
}

int func_113(char* sParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_AndyMoon")){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Baygor")){
return 2;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_BillBinder")){
return 4;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Clinton")){
return 8;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Griff")){
return 16;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jane")){
return 64;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jerome")){
return 128;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jesse")){
return 256;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Mani")){
return 512;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Mime")){
return 1024;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_PamelaDrake")){
return 2048;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Superhero")){
return 4096;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Zombie")){
return 8192;
}
return 0;
}


void func_114(int iParam0){
var uVar0;
func_117();
if(iLocal_209){
MemCopy(&uVar0,{
func_116()
}
, 4);
if(MISC::ARE_STRINGS_EQUAL(&uVar0, &Local_329)){
func_13();
}
if(iParam0==1){
PED::DELETE_PED(&uLocal_208);
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_208);
}
iLocal_209=0;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Local_255)){
STREAMING::REMOVE_ANIM_DICT(&Local_255);
}
if(iLocal_215==1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_234)){
if(STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_234)){
STREAMING::REMOVE_ANIM_DICT(&cLocal_234);
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_243)){
if(STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_243)){
STREAMING::REMOVE_ANIM_DICT(&cLocal_243);
}}}
if(iLocal_224 !=-1){
func_2(&iLocal_224);
}
if(HUD::DOES_BLIP_EXIST(uLocal_214)){
func_115(&uLocal_214);
}
func_90();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), 0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_115(var uParam0){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::SET_BLIP_ROUTE(*uParam0, 0);
HUD::REMOVE_BLIP(uParam0);
}}


struct<6> func_116(){
struct<6> Var0;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
return Global_21344;
}
return Var0;
}


void func_117(){
func_118();
}


void func_118(){
if(iLocal_278==1){
if(STREAMING::HAS_ANIM_DICT_LOADED(sLocal_277)){
STREAMING::REMOVE_ANIM_DICT(sLocal_277);
}}}


void func_119(){
if(iLocal_211==-1){
iLocal_211=PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_210, 2f, 2f, 2f, 0f, 0, 1);
}}