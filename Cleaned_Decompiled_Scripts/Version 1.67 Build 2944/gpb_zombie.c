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
var uLocal_16=0;
var uLocal_17=0;
char* sLocal_18=NULL;
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
int iLocal_34=0;
var uLocal_35=16;
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
struct<16> Local_200={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_201={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<2> Local_202={
0, 0 
};
struct<2> Local_203={
0, 0 
};
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=0;
int iLocal_207=0;
struct<3> Local_208={
0, 0, 0 
};
int iLocal_209=0;
int iLocal_210=0;
int iLocal_211=0;
var uLocal_212=0;
int iLocal_213=0;
int iLocal_214=0;
int iLocal_215=0;
int iLocal_216=0;
var uLocal_217=0;
int iLocal_218=0;
int iLocal_219[20]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_220[20]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_221=0;
int iLocal_222=0;
int iLocal_223[3]={
0, 0, 0 
};
char* sLocal_224=NULL;
char cLocal_225[16]="";
var uLocal_226=0;
var uLocal_227=0;
struct<4> Local_228={
0, 0, 0, 0 
};
struct<4> Local_229={
0, 0, 0, 0 
};
struct<4> Local_230={
0, 0, 0, 0 
};
struct<4> Local_231={
0, 0, 0, 0 
};
char cLocal_232[64]="";
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=0;
var uLocal_236=0;
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=0;
char cLocal_241[64]="";
var uLocal_242=0;
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
struct<16> Local_250={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_251={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_252={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<8> Local_253={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=0;
struct<16> Local_262={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
bool bLocal_263=0;
bool bLocal_264=0;
bool bLocal_265=0;
bool bLocal_266=0;
int iLocal_267=0;
bool bLocal_268=0;
var uLocal_269=0;
var uLocal_270=0;
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=0;
int iLocal_274=0;
var uLocal_275=0;
int iLocal_276=0;
var uLocal_277=0;
var uLocal_278=0;
var uLocal_279=0;
int iLocal_280=0;
int iLocal_281=0;
int iLocal_282=0;
int iLocal_283=0;
var uLocal_284=0;
var uLocal_285=10;
var uLocal_286=0;
var uLocal_287=0;
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
struct<4> Local_327={
0, 0, 0, 0 
};
var uLocal_328=0;
bool bLocal_329=0;
bool bLocal_330=0;
bool bLocal_331=0;
struct<18> Local_332={
0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 
};
var uLocal_333=0;
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=0;
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
fLocal_12=0.001f;
iLocal_15=-1;
sLocal_18="NULL";
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
StringCopy(&Local_200, "", 64);
StringCopy(&Local_201, "", 64);
iLocal_209=-1;
iLocal_211=1;
bLocal_266=true;
iLocal_274=1;
iLocal_280=1;
iLocal_281=65;
iLocal_282=49;
iLocal_283=64;
Local_208={
ScriptParam_332.f_1[0 /*3*/] 
};
func_119();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)){
func_114(0);
}
if(func_111(func_113(SCRIPT::GET_THIS_SCRIPT_NAME()))){
func_114(0);
}
if(!func_110()){
func_114(0);
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
func_114(0);
}
if(func_109()){
func_114(0);
}
if(func_108()){
func_114(0);
}
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_107()){
func_114(0);
}
if(MISC::GET_GAME_TIMER() < Global_32548 + 10000 && !func_107()){
func_114(0);
}
StringCopy(&Local_253, "", 64);
iLocal_223[0]=1;
iLocal_223[1]=1;
iLocal_223[2]=1;
func_106();
STREAMING::REQUEST_MODEL(iLocal_34);
while (!STREAMING::HAS_MODEL_LOADED(iLocal_34)){
wait(0);
}
if(!bLocal_263){
func_114(0);
}
STREAMING::REQUEST_ANIM_DICT(&cLocal_232);
STREAMING::REQUEST_ANIM_DICT(&cLocal_241);
iLocal_213=1;
while ((!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_232) || !STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_241)) || !STREAMING::HAS_MODEL_LOADED(iLocal_34)){
wait(0);
}
Global_32548=MISC::GET_GAME_TIMER();
MISC::CLEAR_AREA_OF_PEDS(Local_208, 0.5f, 0);
uLocal_206=PED::CREATE_PED(25, iLocal_34, Local_208, ScriptParam_332.f_17[0], 0, 1);
func_104();
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_34);
iLocal_207=1;
if(ENTITY::DOES_ENTITY_EXIST(uLocal_206) && func_103(uLocal_206)){
PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_206, 17, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_206, 1);
}
iLocal_221=0;
uLocal_269=uLocal_269;
uLocal_270=uLocal_270;
uLocal_271=uLocal_271;
uLocal_272=uLocal_272;
uLocal_273=uLocal_273;
MemCopy(&cLocal_225,{
Local_202
}
, 4);
StringConCat(&cLocal_225, "AUD", 16);
MemCopy(&Local_228,{
Local_202
}
, 4);
StringConCat(&Local_228, "_RAND_", 16);
iLocal_214=0;
iLocal_222=-1;
iVar0=1;
iVar6=0;
iVar10=0;
uLocal_217=uLocal_217;
uLocal_220[0]=uLocal_220[0];
iLocal_218=iLocal_218;
uLocal_328=uLocal_328;
bLocal_329=bLocal_329;
func_102(0, 0);
bLocal_330=false;
while (iVar0==1){
if(!func_103(uLocal_206)){
func_98(func_113(SCRIPT::GET_THIS_SCRIPT_NAME()));
func_114(0);
}
if(!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
func_114(1);
}
fVar12=func_97(PLAYER::PLAYER_PED_ID(), uLocal_206);
if(fVar12 < 10f && func_96()){
PED::SET_IK_TARGET(uLocal_206, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
}
if(fVar12 < 8f){
PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, uLocal_206, 31086, 0f, 0f, 0f, 0, -1, -1);
}
if(fVar12 < 15f){
PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
}
if(bLocal_330){
if(bLocal_331){
GRAPHICS::DRAW_DEBUG_TEXT_2D("controlledByAnim", 0.02f, 0.5f, 0f, 0, 0, 255, 255);
}else{
GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT controlledByAnim", 0.02f, 0.5f, 0f, 0, 0, 255, 255);
}
if(iLocal_209==-1){
GRAPHICS::DRAW_DEBUG_TEXT_2D("iBlockObject OFF", 0.02f, 0.6f, 0f, 0, 0, 255, 255);
}else{
GRAPHICS::DRAW_DEBUG_TEXT_2D("iBlockObject ON", 0.02f, 0.6f, 0f, 0, 0, 255, 255);
}
if(iLocal_267){
GRAPHICS::DRAW_DEBUG_TEXT_2D("MONOLOGUE", 0.02f, 0.65f, 0f, 0, 0, 255, 255);
}else{
GRAPHICS::DRAW_DEBUG_TEXT_2D("IDLE", 0.02f, 0.65f, 0f, 0, 0, 255, 255);
}
StringCopy(&cVar13, "conversation_offset ", 64);
StringIntConCat(&cVar13, Global_113755[iLocal_215], 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar13, 0.02f, 0.8f, 0f, 0, 0, 255, 255);
StringCopy(&cVar13, "max_conversation_offset ", 64);
StringIntConCat(&cVar13, iLocal_216, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar13, 0.02f, 0.81f, 0f, 0, 0, 255, 255);
StringCopy(&cVar13, "conversation_split_offset ", 64);
StringIntConCat(&cVar13, iLocal_221, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar13, 0.02f, 0.82f, 0f, 0, 0, 255, 255);
StringCopy(&cVar13, "max_conversation_split_offsets[conversation_offset] ", 64);
StringIntConCat(&cVar13, iLocal_219[Global_113755[iLocal_215]], 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar13, 0.02f, 0.83f, 0f, 0, 0, 255, 255);
}
Var15={
ENTITY::GET_ENTITY_COORDS(uLocal_206, 1) 
};
if(((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uLocal_206) && !iLocal_214==25) && !iLocal_214==5) && !iLocal_214==6){
func_95();
if(func_94()){
func_92();
TASK::TASK_PLAY_ANIM(uLocal_206, &cLocal_232, &Local_201, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_214=25;
}else{
func_91();
func_92();
iLocal_214=5;
iVar10=MISC::GET_GAME_TIMER();
}
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uLocal_206, "GENERIC_CURSE_MED", "SPEECH_PARAMS_FORCE", 1);
}
if(((func_109() || MISC::GET_MISSION_FLAG()) || func_108()) || !func_110()){
if(!func_90() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode"))==0){
if(func_109()){
}
if(MISC::GET_MISSION_FLAG()){
}
TASK::TASK_PLAY_ANIM(uLocal_206, &cLocal_232, &Local_201, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_214=25;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if((((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_206) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_206)) && fVar12 < 25f) && func_89(PLAYER::PLAYER_PED_ID()) !=joaat("weapon_unarmed")) && func_86(uLocal_206, PLAYER::PLAYER_PED_ID(), 1126825984, 0)){
if(!func_90()){
func_92();
TASK::TASK_PLAY_ANIM(uLocal_206, &cLocal_232, &Local_201, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_214=24;
}}}
if(((((PED::IS_PED_INJURED(uLocal_206) || MISC::IS_BULLET_IN_AREA(Var15, 50f, 1)) || MISC::IS_BULLET_IN_AREA(Var15, 50f, 0)) || MISC::IS_PROJECTILE_IN_AREA(Var15, 20f, 20f, 20f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var15, 50f)) || GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(Var15, 1f)){
if(!func_90()){
func_92();
TASK::TASK_PLAY_ANIM(uLocal_206, &cLocal_232, &Local_201, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_214=24;
}}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_206, PLAYER::PLAYER_PED_ID(), 1)){
func_92();
TASK::TASK_PLAY_ANIM(uLocal_206, &cLocal_232, &Local_201, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_214=24;
}
if(func_85(uLocal_206, PLAYER::PLAYER_PED_ID(), 1) < 25f){
if(!HUD::DOES_BLIP_EXIST(uLocal_212)){
func_81(&uLocal_212, &uLocal_206, 0);
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_212)){
func_80(&uLocal_212);
}
if(!bLocal_266){
if(!PED::IS_PED_INJURED(uLocal_206) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_206, 1)) < 16f){
iVar16=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
iVar17=func_79(iVar16);
if(func_78(iVar17)){
if(!func_77(iVar17)){
func_68(iVar16, 0);
}}}}}
switch (iLocal_214){
case 0:
GRAPHICS::DRAW_DEBUG_TEXT_2D("SET_IDLING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_221=0;
func_64();
iLocal_214=1;
if(!func_63()){
GRAPHICS::DRAW_DEBUG_TEXT_2D("SET_IDLING SET_PED_IDLING", 0.02f, 0.11f, 0f, 0, 0, 255, 255);
func_102(0, 1);
}
break;
case 1:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_ANIM_TO_BE_LOADED", 0.02f, 0.15f, 0f, 0, 0, 255, 255);
bVar38=func_62();
if(bLocal_330){
if(bVar38){
GRAPHICS::DRAW_DEBUG_TEXT_2D("conversationAlreadyOngoing", 0.8f, 0.1f, 0f, 0, 0, 255, 255);
}else{
GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT conversationAlreadyOngoing", 0.8f, 0.1f, 0f, 0, 0, 255, 255);
}}
if((func_61() && !bVar38) && !func_60()){
iLocal_214=3;
}
if(!func_63()){
func_102(0, 1);
}
break;
case 5:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_MOVE_BACK_TO_INITIAL_POSITION", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
if((MISC::GET_GAME_TIMER() - iVar10) > 1){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_206, Local_208, 1f, -1, 1f, 1024, ScriptParam_332.f_17[0]);
iLocal_214=6;
}
break;
case 6:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_MOVE_BACK_TO_INITIAL_POSITION", 0.02f, 0.25f, 0f, 0, 0, 255, 255);
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_206, joaat("script_task_follow_nav_mesh_to_coord")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_206, joaat("script_task_follow_nav_mesh_to_coord")) !=0){
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_MOVE_BACK_TO_INITIAL_POSITION TASK_PLAY_ANIM", 0.02f, 0.26f, 0f, 0, 0, 255, 255);
TASK::TASK_PLAY_ANIM(uLocal_206, &cLocal_241, "idle_intro", 4f, -4f, -1, 0, 0, 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_206, 0, 0);
func_119();
iLocal_214=0;
}
break;
case 3:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_IDLING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(Global_3){
fVar9=25f;
}else{
fVar9=25f;
}
if(func_85(uLocal_206, PLAYER::PLAYER_PED_ID(), 1) < fVar9){
if(func_59()==1){
iLocal_214=8;
iLocal_267=0;
}}
if(!func_63()){
func_102(0, 1);
}
break;
case 7:
GRAPHICS::DRAW_DEBUG_TEXT_2D("PRE_PLAY_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(func_61()){
iLocal_214=8;
}
if(!func_63()){
}
break;
case 8:
GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAY_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_216=iLocal_216;
if(func_60()){
func_92();
func_102(0, 1);
iLocal_214=0;
}elseif(!func_63()){
func_55();
iLocal_267=1;
func_54();
iLocal_221++;
iVar8=1;
if(fVar12 > 15f){
iVar8=0;
func_92();
func_102(1, 0);
}
if(iLocal_221 < iLocal_219[Global_113755[iLocal_215]] && iVar8){
func_64();
iLocal_214=7;
}else{
iLocal_214=9;
}}elseif(iLocal_267==1){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_206, &Local_251, &Local_250, 3)){
func_53(Global_113755[iLocal_215], iLocal_221, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_206, &Local_251, &Local_250));
}}
break;
case 9:
GRAPHICS::DRAW_DEBUG_TEXT_2D("MOVE_TO_NEXT_MONOLOGUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
bVar36=func_62();
bVar37=func_63();
func_52(Global_113755[iLocal_215]);
if(!bVar37 && (!bVar36 || bLocal_264)){
if(bLocal_329){
Global_113755[iLocal_215]=uLocal_328;
}else{
Global_113755[iLocal_215]++;
}
if(!Global_113755[iLocal_215] < iLocal_216){
Global_113755[iLocal_215]=0;
}
func_102(0, 1);
iLocal_214=0;
}elseif(!bVar37 && bVar36){
GRAPHICS::DRAW_DEBUG_TEXT_2D("CONVERSATION STILL RUNNING", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
if(!func_63()){
func_102(0, 1);
}}
break;
case 13:
GRAPHICS::DRAW_DEBUG_TEXT_2D("NEWSTATE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
func_51(&sVar1);
func_50(&uLocal_35, 0, PLAYER::PLAYER_PED_ID(), &sVar1, 0, 1);
func_50(&uLocal_35, 3, uLocal_206, &Local_203, 0, 1);
func_49(&cVar2);
if(func_34(&uLocal_35, &cLocal_225, &cVar2, 3, 0, 0, 0)){
iLocal_214=14;
}
func_33();
break;
case 14:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_TO_START_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iVar5=iVar5;
bVar11=false;
if(iLocal_267==0){
func_33();
bVar11=true;
}else{
if(!func_62()){
bVar11=true;
}
func_33();
}
if(bVar11){
iLocal_210=iLocal_211;
if(!bLocal_265){
func_32(&cVar3);
func_51(&sVar1);
}else{
func_31();
func_30(&cVar3);
}
func_50(&uLocal_35, 0, PLAYER::PLAYER_PED_ID(), &sVar1, 0, 1);
func_50(&uLocal_35, 3, uLocal_206, &Local_203, 0, 1);
Global_113755[iLocal_215]++;
if(!Global_113755[iLocal_215] < iLocal_216){
Global_113755[iLocal_215]=0;
}
iLocal_214=10;
}
break;
case 10:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_LOADING_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(!bLocal_265){
func_28(&Local_253);
func_27(iLocal_210, &Var7);
StringConCat(&Local_253, &Var7, 64);
}else{
func_26(&Local_253);
func_27(iLocal_210, &Var7);
StringConCat(&Local_253, &Var7, 64);
}
STREAMING::REQUEST_ANIM_DICT(&Local_253);
iVar35=0;
if(STREAMING::HAS_ANIM_DICT_LOADED(&Local_253)){
if(bLocal_264){
iVar35=1;
}elseif(func_34(&uLocal_35, &cLocal_225, &cVar3, 3, 0, 0, 0)){
iVar35=1;
}
if(iVar35==1){
iLocal_214=11;
}}
func_33();
break;
case 11:
GRAPHICS::DRAW_DEBUG_TEXT_2D("CHECK_FOR_LOADED_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(AUDIO::IS_SCRIPTED_CONVERSATION_LOADED()){
func_24(&sVar4);
TASK::TASK_PLAY_ANIM(uLocal_206, &Local_253, &sVar4, 2f, -2f, -1, 0, 0, 0, 0, 0);
iLocal_214=12;
}else{
func_33();
}
break;
case 12:
GRAPHICS::DRAW_DEBUG_TEXT_2D("START_CONVERSATION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
iLocal_210++;
Local_262={
Local_253 
};
if(!iLocal_210 < func_16() || fVar12 > 10f){
if(fVar12 > 10f && func_62()){
func_14();
}
iLocal_214=16;
}else{
if(!bLocal_265){
func_28(&Local_253);
func_27(iLocal_210, &Var7);
StringConCat(&Local_253, &Var7, 64);
}else{
func_26(&Local_253);
func_27(iLocal_210, &Var7);
StringConCat(&Local_253, &Var7, 64);
}
STREAMING::REQUEST_ANIM_DICT(&Local_253);
iLocal_214=15;
}
break;
case 15:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_CONVERSATION_SECTION_OVER", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
StringCopy(&cVar14, "talking offset:", 64);
StringIntConCat(&cVar14, iLocal_210, 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar14, 0.02f, 0.9f, 0f, 0, 0, 255, 255);
IntToString(&cVar14, func_16(), 64);
GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar14, 0.03f, 0.9f, 0f, 0, 0, 255, 255);
if(STREAMING::HAS_ANIM_DICT_LOADED(&Local_253)){
GRAPHICS::DRAW_DEBUG_TEXT_2D("HAS_ANIM_DICT_LOADED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
if(!func_63()){
GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT IS_ANIM_PLAYING_ON_PED", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
STREAMING::REMOVE_ANIM_DICT(&Local_262);
if(!bLocal_265){
func_28(&Local_253);
func_27(iLocal_210, &Var7);
StringConCat(&Local_253, &Var7, 64);
}
else{
func_26(&Local_253);
func_27(iLocal_210, &Var7);
StringConCat(&Local_253, &Var7, 64);
}
func_24(&sVar4);
TASK::TASK_PLAY_ANIM(uLocal_206, &Local_253, &sVar4, 1000f, -1000f, -1, 0, 0, 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_206, 0, 0);
iLocal_214=12;
}}elseif(!func_63()){
}
break;
case 16:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAIT_FOR_CONVERSATION_TO_END", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(!func_63()){
func_13(&uLocal_35, 0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), 0);
}
STREAMING::REMOVE_ANIM_DICT(&Local_262);
func_12();
func_102(0, 1);
iLocal_214=0;
}
break;
case 24:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING_TO_BLEND_INTO_IDLE_BEFORE_FLEEING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
wait(1000);
func_11();
iVar0=0;
break;
case 25:
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING_TO_BLEND_INTO_IDLE_BEFORE_WANDERING", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
func_9();
iVar0=0;
break;
}
bVar18=SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) > 0;
if(!bVar18){
}
if(((((((((((((iLocal_214==0 || iLocal_214==1) || iLocal_214==3) || iLocal_214==8) || iLocal_214==9) || iLocal_214==7) && func_85(uLocal_206, PLAYER::PLAYER_PED_ID(), 1) < 5f) && bLocal_263==1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && iVar6==0) && bLocal_266==1) && !Global_3) && func_7()) && bVar18){
if(iLocal_222==-1){
func_6(&iLocal_222, 4, sLocal_224, 0, 0, 0, 0);
}
PAD::SET_INPUT_EXCLUSIVE(0, 51);
if(func_4(iLocal_222, 1)){
func_51(&sVar1);
func_49(&cVar2);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), 1);
}
func_92();
func_102(1, 1);
iVar6=1;
iLocal_214=13;
iVar5=0;
iVar19=func_79(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()));
if(func_78(iVar19)){
if(!func_77(iVar19)){
func_68(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()), 0);
}}
func_2(&iLocal_222);
}}elseif(iLocal_222 !=-1){
func_2(&iLocal_222);
}
func_1();
wait(0);
}
if(iLocal_222 !=-1){
func_2(&iLocal_222);
}
if(HUD::DOES_BLIP_EXIST(uLocal_212)){
func_80(&uLocal_212);
}
bVar20=false;
while (true){
GRAPHICS::DRAW_DEBUG_TEXT_2D("do_monologue=FALSE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
if(bLocal_330){
GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING TO CLEAN UP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
}
if(!func_103(uLocal_206)){
if(!bLocal_268){
func_98(func_113(SCRIPT::GET_THIS_SCRIPT_NAME()));
}
func_114(0);
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_206, PLAYER::PLAYER_PED_ID(), 1) && !bVar20){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_206, 0);
TASK::CLEAR_PED_TASKS(uLocal_206);
TASK::TASK_SMART_FLEE_PED(uLocal_206, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(uLocal_206, 1);
bVar20=true;
}
if((ENTITY::IS_ENTITY_OCCLUDED(uLocal_206) && func_85(uLocal_206, PLAYER::PLAYER_PED_ID(), 1) > 50f) && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()){
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
if(Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/].f_7=1;
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
if(Global_44123[iVar0 /*32*/].f_1==iParam0){
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
if(Global_44123[iVar0 /*32*/]==1 && Global_44123[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44123[iVar0 /*32*/].f_29){
return 0;
}}
Global_44123[iVar0 /*32*/].f_5=1;
Global_44123[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44123[iVar0 /*32*/]==0){
}
if(Global_44123[iVar0 /*32*/].f_7){
}}}
return 0;
}

int func_5(int iParam0){
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
if(!Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/]=1;
Global_44123[iVar0 /*32*/].f_1=Global_44324;
Global_44324++;
Global_44123[iVar0 /*32*/].f_4=0;
Global_44123[iVar0 /*32*/].f_29=0;
Global_44123[iVar0 /*32*/].f_5=0;
Global_44123[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
Global_44123[iVar0 /*32*/].f_6=iParam3;
Global_44123[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44123[iVar0 /*32*/].f_7=0;
Global_44123[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44123[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
Global_44123[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44123[iVar0 /*32*/].f_12=0;
Global_44123[iVar0 /*32*/].f_30=0;
}
*iParam0=Global_44123[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}


bool func_7(){
return !func_8();
}

int func_8(){
if(Global_113755[iLocal_215]==3 && (iLocal_221 >=4 && iLocal_221 <=12)){
return 1;
}
return 0;
}


void func_9(){
func_10();
if(func_103(uLocal_206) && func_103(PLAYER::PLAYER_PED_ID())){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_206, 0);
TASK::TASK_WANDER_STANDARD(uLocal_206, 1193033728, 0);
PED::SET_PED_KEEP_TASK(uLocal_206, 1);
}}


void func_10(){
if(iLocal_276){
if(func_8()){
ENTITY::DETACH_ENTITY(uLocal_275, 1, 1);
iLocal_276=0;
}else{
OBJECT::DELETE_OBJECT(&uLocal_275);
iLocal_276=0;
}}}


void func_11(){
func_10();
if(func_103(uLocal_206) && func_103(PLAYER::PLAYER_PED_ID())){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_206, 0);
TASK::TASK_SMART_FLEE_PED(uLocal_206, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(uLocal_206, 1);
func_92();
}}


void func_12(){
}


void func_13(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}


void func_14(){
Global_20711=0;
func_15();
}


void func_15(){
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

int func_16(){
int iVar0;
iVar0=func_17();
if(iVar0==2){
return 19;
}elseif(iVar0==0){
return 8;
}
return 7;
}

int func_17(){
func_18();
return Global_113810.f_2366.f_539.f_4321;
}


void func_18(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_22(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_21(PLAYER::PLAYER_PED_ID());
if(func_20(iVar0) && (!func_19(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_20(Global_113810.f_2366.f_539.f_4321)){
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


bool func_19(int iParam0){
return Global_43377==iParam0;
}


bool func_20(int iParam0){
return iParam0 < 3;
}

int func_21(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_22(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_22(int iParam0){
if(func_20(iParam0)){
return func_23(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__23(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_24(char* sParam0){
struct<16> Var0;
func_25(&Var0);
*sParam0={
Var0 
};
StringConCat(sParam0, "_", 64);
StringIntConCat(sParam0, iLocal_210, 64);
}


void func_25(char* sParam0){
int iVar0;
iVar0=func_17();
if(iVar0==2){
StringCopy(sParam0, "CONVO_TREVOR_MYBROTHER", 64);
}elseif(iVar0==0){
StringCopy(sParam0, "CONVO_MICHAEL_OHHOWYOUDOING", 64);
}elseif(iVar0==1){
StringCopy(sParam0, "CONVO_FRANKLIN_HEYWASSUP", 64);
}}


void func_26(char* sParam0){
int iVar0;
iVar0=iLocal_218 + 1;
*sParam0={
Local_200 
};
StringConCat(sParam0, "@", 64);
StringConCat(sParam0, "CONVO_", 64);
StringIntConCat(sParam0, iVar0, 64);
StringConCat(sParam0, "@", 64);
StringConCat(sParam0, "CONVO_", 64);
StringIntConCat(sParam0, iVar0, 64);
}


void func_27(int iParam0, char* sParam1){
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


void func_28(char* sParam0){
char cVar0[64];
*sParam0={
Local_200 
};
StringConCat(sParam0, "@", 64);
func_29(&cVar0);
StringConCat(sParam0, &cVar0, 64);
StringConCat(sParam0, "@", 64);
StringConCat(sParam0, &cVar0, 64);
}


void func_29(char* sParam0){
struct<4> Var0;
func_51(&Var0);
*sParam0={
Var0 
};
StringConCat(sParam0, "_", 16);
StringIntConCat(sParam0, iLocal_223[func_17()], 16);
}


void func_30(char* sParam0){
MemCopy(sParam0,{
Local_202
}
, 4);
StringConCat(sParam0, "_CONV_", 16);
StringIntConCat(sParam0, iLocal_218 + 1, 16);
}


void func_31(){
iLocal_218=MISC::GET_RANDOM_INT_IN_RANGE(0, uLocal_217);
}


void func_32(char* sParam0){
int iVar0;
MemCopy(sParam0,{
Local_202
}
, 4);
StringConCat(sParam0, "_CONV_", 16);
iVar0=func_17();
if(iVar0==2){
StringConCat(sParam0, "T", 16);
}elseif(iVar0==0){
StringConCat(sParam0, "M", 16);
}else{
StringConCat(sParam0, "F", 16);
}
StringIntConCat(sParam0, iLocal_223[func_17()], 16);
}


void func_33(){
if(!func_63()){
func_102(1, 1);
}}


bool func_34(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_48(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_35(sParam2, iParam3, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2){
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
func_15();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_47(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_46();
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
func_45();
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
if(func_44()){
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
if(func_43()){
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
func_42();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_41();
func_36();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_15();
}
return 0;
}


void func_36(){
if(!func_37()){
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

int func_37(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_40()){
return 0;
}
if(func_38(PLAYER::PLAYER_ID())){
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


bool func_38(int iParam0){
return func_39(iParam0, 20);
}


var func__39(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_40(){
return -1;
}


void func_41(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_42(){
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

int func_43(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_44(){
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


void func_45(){
if(func_19(14)){
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
Global_20500=func_17();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


void func_46(){
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


bool func_47(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_48(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
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


void func_49(char[4] cParam0){
int iVar0;
iVar0=func_17();
if(iVar0==2){
*cParam0={
Local_230 
};
}elseif(iVar0==0){
*cParam0={
Local_229 
};
}else{
*cParam0={
Local_231 
};
}}


void func_50(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5){
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


void func_51(char* sParam0){
int iVar0;
iVar0=func_17();
if(iVar0==2){
StringCopy(sParam0, "TREVOR", 16);
}elseif(iVar0==0){
StringCopy(sParam0, "MICHAEL", 16);
}else{
StringCopy(sParam0, "FRANKLIN", 16);
}}


void func_52(var uParam0){
}


void func_53(int iParam0, int iParam1, float fParam2){
if(iParam0==3){
if((iParam1==3 && !iLocal_276) && fParam2 >=0.773f){
uLocal_275=OBJECT::CREATE_OBJECT(joaat("prop_npc_phone"), ENTITY::GET_ENTITY_COORDS(uLocal_206, 1), 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_275, uLocal_206, PED::GET_PED_BONE_INDEX(uLocal_206, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
iLocal_276=1;
}
if((iParam1==12 && iLocal_276) && fParam2 >=0.116f){
ENTITY::DETACH_ENTITY(uLocal_275, 1, 1);
OBJECT::DELETE_OBJECT(&uLocal_275);
iLocal_276=0;
}}}


void func_54(){
STREAMING::REMOVE_ANIM_DICT(&Local_252);
}


void func_55(){
char* sVar0;
struct<16> Var1;
func_58(Global_113755[iLocal_215] + 1, &sVar0, &Var1);
StringConCat(&Var1, "_", 64);
StringIntConCat(&Var1, iLocal_221, 64);
Local_250={
Var1 
};
Local_251={
Local_252 
};
func_57(&Local_250);
TASK::TASK_PLAY_ANIM(uLocal_206, &Local_252, &Var1, 1000f, -8f, -1, 0, 0, 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_206, 0, 0);
func_56(Global_113755[iLocal_215]);
}


void func_56(var uParam0){
}


void func_57(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL(sParam0, sParam0)){}}


void func_58(int iParam0, char* sParam1, char* sParam2){
StringCopy(sParam1, "Special_Ped@zombie", 32);
switch (iParam0){
case 1:
StringCopy(sParam2, "IAmUndead", 64);
break;
case 2:
StringCopy(sParam2, "DoYouWantAPhotoWithMe", 64);
break;
case 3:
StringCopy(sParam2, "Careful", 64);
break;
case 4:
StringCopy(sParam2, "IamTheUndead", 64);
break;
case 5:
StringCopy(sParam2, "BrainsItsBrains", 64);
break;
case 6:
StringCopy(sParam2, "IAmThevinewoodZombie", 64);
break;
case 7:
StringCopy(sParam2, "RRRItsBrains", 64);
break;
case 8:
StringCopy(sParam2, "WhoSaysCosplayIsA", 64);
break;
}}

int func_59(){
struct<4> Var0;
int iVar1;
Var0={
Local_228 
};
StringIntConCat(&Var0, Global_113755[iLocal_215] + 1, 16);
func_50(&uLocal_35, 3, uLocal_206, &Local_203, 0, 1);
if(bLocal_264){
iVar1=1;
}else{
iVar1=func_34(&uLocal_35, &cLocal_225, &Var0, 3, 0, 0, 0);
}
Local_327={
Var0 
};
return iVar1;
}


bool func_60(){
return Global_100885.f_393 > 0;
}


bool func_61(){
bool bVar0;
bVar0=STREAMING::HAS_ANIM_DICT_LOADED(&Local_252);
return bVar0;
}

int func_62(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}

int func_63(){
if(TASK::GET_SCRIPT_TASK_STATUS(uLocal_206, joaat("script_task_play_anim")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_206, joaat("script_task_play_anim")) !=0){
return 0;
}
return 1;
}


void func_64(){
struct<16> Var0;
func_65(&Var0);
STREAMING::REQUEST_ANIM_DICT(&Var0);
Local_252={
Var0 
};
}


void func_65(char* sParam0){
struct<8> Var0;
*sParam0={
Local_200 
};
StringConCat(sParam0, "@", 64);
func_67(&Var0);
StringConCat(sParam0, &Var0, 64);
StringConCat(sParam0, "@", 64);
StringConCat(sParam0, &Var0, 64);
func_66(&Var0);
StringConCat(sParam0, &Var0, 64);
}


void func_66(char* sParam0){
func_27(iLocal_221, sParam0);
}


void func_67(char* sParam0){
StringCopy(sParam0, "MONOLOGUE_", 16);
StringIntConCat(sParam0, Global_113755[iLocal_215] + 1, 16);
}


void func_68(int iParam0, bool bParam1){
int iVar0;
iVar0=func_79(iParam0);
if(func_78(iVar0)){
func_69(iVar0, bParam1);
}}


void func_69(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 <=31){
if(func_78(iParam0)){
if(!func_76(iParam0)){
MISC::SET_BIT(&(Global_113810.f_26437.f_2), iVar0);
if(!bParam1){
func_74(func_75(iParam0));
if(!func_73(70)){
func_70("DI_HLP_SPCL", 2, 0, 20000, 10000, 7, 0, 210, 0);
}}}}}}


void func_70(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_71(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_71(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
func_72();
}}


void func_72(){
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

int func_73(int iParam0){
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


void func_74(var uParam0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}


char* func_75(int iParam0){
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

int func_76(int iParam0){
if(func_78(iParam0)){
return MISC::IS_BIT_SET(Global_113810.f_26437.f_2, iParam0);
}
return 0;
}

int func_77(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 <=31){
return MISC::IS_BIT_SET(Global_113810.f_26437.f_2, iVar0);
}
return 0;
}

int func_78(int iParam0){
if((iParam0==-1 || iParam0==13) || iParam0==9){
return 0;
}
return 1;
}

int func_79(int iParam0){
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


void func_80(var uParam0){
if(iLocal_274==1){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}}}


void func_81(var uParam0, var uParam1, bool bParam2){
if(iLocal_274==1){
if(!HUD::DOES_BLIP_EXIST(*uParam0)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(!PED::IS_PED_INJURED(*uParam1)){
*uParam0=func_82(*uParam1, bParam2, 145);
if(bParam2==0){
HUD::SET_BLIP_PRIORITY(*uParam0, 7);
}
HUD::SET_BLIP_COLOUR(*uParam0, 3);
}}}}}


var func__82(var uParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=func_83(uParam0, !bParam1, 0);
if((iParam2 !=145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_2058[iParam2 /*29*/].f_3));
}
return uVar0;
}

int func_83(var uParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(uParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_84(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_84(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(uParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_84(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_84(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


float func_85(var uParam0, var uParam1, int iParam2){
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

int func_86(var uParam0, var uParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_88(ENTITY::GET_ENTITY_COORDS(uParam1, 1) - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) 
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
func_88(PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_87(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}


float func_87(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__88(struct<3> Param0){
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

int func_89(var uParam0){
var uVar0;
WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &uVar0, 1);
return uVar0;
}

int func_90(){
if(iLocal_214==24 || iLocal_214==25){
return 1;
}
return 0;
}


void func_91(){
if(iLocal_209 !=-1){
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_209)){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_209);
}
iLocal_209=-1;
}}


void func_92(){
Global_20711=0;
func_93();
}


void func_93(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}


bool func_94(){
return func_8();
}


void func_95(){
}

int func_96(){
if(Global_113755[iLocal_215]==3){
return 0;
}
return 1;
}


float func_97(var uParam0, var uParam1){
return func_85(uParam0, uParam1, 1);
}


void func_98(int iParam0){
int iVar0;
func_101(&(Global_113810.f_20120), iParam0);
iVar0=func_99(iParam0);
if(func_78(iVar0)){
func_69(func_99(iParam0), 0);
}}

int func_99(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 13){
iVar1=iVar0;
if(func_100(iVar1, 1)==iParam0){
return iVar1;
}
iVar0++;
}
return -1;
}

int func_100(int iParam0, bool bParam1){
if(!func_78(iParam0)){
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


void func_101(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_102(int iParam0, bool bParam1){
if(iParam0==1){
TASK::TASK_PLAY_ANIM(uLocal_206, &cLocal_232, &Local_201, 2f, -2f, -1, 0, 0, 0, 0, 0);
}else{
TASK::TASK_PLAY_ANIM(uLocal_206, &cLocal_232, &Local_201, 1000f, 1000f, -1, 0, 0, 0, 0, 0);
}
Local_250={
Local_201 
};
if(bParam1){
if(!PED::IS_PED_INJURED(uLocal_206) && !PED::IS_PED_DEAD_OR_DYING(uLocal_206, 1)){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_206, 0, 0);
}}}

int func_103(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
return 1;
}}
return 0;
}


void func_104(){
func_105();
}


void func_105(){
PED::SET_PED_CAN_EVASIVE_DIVE(uLocal_206, 0);
PED::SET_PED_CONFIG_FLAG(uLocal_206, 185, 1);
PED::SET_PED_CONFIG_FLAG(uLocal_206, 318, 1);
}


void func_106(){
iLocal_34=joaat("u_m_y_zombie_01");
StringCopy(&Local_202, "PBZB", 8);
StringCopy(&Local_203, "ZOMBIE", 16);
StringCopy(&Local_200, "Special_Ped@zombie", 64);
StringCopy(&Local_201, "Base", 64);
bLocal_263=!Global_3;
iLocal_216=8;
sLocal_224="PBZB_INTERACT";
StringCopy(&Local_229, "PBZB_CONV_GM", 16);
StringCopy(&Local_230, "PBZB_CONV_GT", 16);
StringCopy(&Local_231, "PBZB_CONV_GF", 16);
StringCopy(&cLocal_232, "special_ped@zombie@base", 64);
StringCopy(&cLocal_241, "special_ped@zombie@intro", 64);
iLocal_215=12;
iLocal_219[0]=9;
iLocal_219[1]=8;
iLocal_219[2]=7;
iLocal_219[3]=14;
iLocal_219[4]=8;
iLocal_219[5]=7;
iLocal_219[6]=10;
iLocal_219[7]=7;
}

int func_107(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_108(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_109(){
if(Global_43377==15){
return 0;
}
return 1;
}

int func_110(){
return 1;
}


bool func_111(var uParam0){
return func_112(Global_113810.f_20120, uParam0);
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
if(iLocal_207){
MemCopy(&uVar0,{
func_116()
}
, 4);
if(MISC::ARE_STRINGS_EQUAL(&uVar0, &Local_327)){
func_14();
}
if(iParam0==1){
PED::DELETE_PED(&uLocal_206);
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_206);
}
iLocal_207=0;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Local_253)){
STREAMING::REMOVE_ANIM_DICT(&Local_253);
}
if(iLocal_213==1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_232)){
if(STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_232)){
STREAMING::REMOVE_ANIM_DICT(&cLocal_232);
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_241)){
if(STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_241)){
STREAMING::REMOVE_ANIM_DICT(&cLocal_241);
}}}
if(iLocal_222 !=-1){
func_2(&iLocal_222);
}
if(HUD::DOES_BLIP_EXIST(uLocal_212)){
func_115(&uLocal_212);
}
func_91();
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
if(Global_21845==4){
return Global_21464;
}
return Var0;
}


void func_117(){
func_118();
}


void func_118(){
}


void func_119(){
if(iLocal_209==-1){
iLocal_209=PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_208, 2f, 2f, 2f, 0f, 0, 1);
}}