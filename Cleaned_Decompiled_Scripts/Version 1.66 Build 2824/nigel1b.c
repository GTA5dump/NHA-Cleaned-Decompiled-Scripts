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
struct<3> Local_22={
0, 0, 0 
};
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
struct<4> Local_35[10];
bool bLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
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
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
struct<61> Local_57={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_58=16;
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
var uLocal_218=0;
var uLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=0;
bool bLocal_223=0;
int iLocal_224=0;
bool bLocal_225=0;
int iLocal_226=0;
int iLocal_227=0;
bool bLocal_228=0;
int iLocal_229=0;
int iLocal_230=0;
int iLocal_231=0;
int iLocal_232=0;
int iLocal_233=0;
int iLocal_234=0;
int iLocal_235=0;
int iLocal_236=0;
int iLocal_237=0;
int iLocal_238=0;
int iLocal_239=0;
int iLocal_240=0;
bool bLocal_241=0;
int iLocal_242=0;
int iLocal_243=0;
int iLocal_244=0;
int iLocal_245=0;
int iLocal_246=0;
int iLocal_247[2]={
0, 0 
};
int iLocal_248=0;
int iLocal_249=0;
int iLocal_250=0;
int iLocal_251=0;
bool bLocal_252=0;
int iLocal_253=0;
int iLocal_254=0;
int iLocal_255=0;
bool bLocal_256=0;
int iLocal_257=0;
int iLocal_258=0;
bool bLocal_259=0;
int iLocal_260=0;
int iLocal_261=0;
bool bLocal_262=0;
bool bLocal_263=0;
int iLocal_264[2]={
0, 0 
};
int iLocal_265=0;
int iLocal_266=0;
int iLocal_267=0;
float fLocal_268[2]={
0f, 0f 
};
float fLocal_269[2]={
0f, 0f 
};
float fLocal_270[2]={
0f, 0f 
};
float fLocal_271=0f;
float fLocal_272=0f;
float fLocal_273=0f;
int iLocal_274=0;
int iLocal_275=0;
int iLocal_276[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_277=0;
var uLocal_278=0;
int iLocal_279=0;
int iLocal_280=0;
int iLocal_281=0;
int iLocal_282=0;
int iLocal_283=0;
int iLocal_284=0;
int iLocal_285=0;
int iLocal_286=0;
int iLocal_287=0;
int iLocal_288=0;
int iLocal_289=0;
int iLocal_290=0;
int iLocal_291=0;
int iLocal_292=0;
int iLocal_293[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_294=0;
float fLocal_295=0f;
struct<14> Local_296={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<14> Local_297[2];
struct<9> Local_298={
0, 0, 0, 0, 0, 0, 738282662, 0, 0 
};
var uLocal_299=0;
var uLocal_300=0;
struct<6> Local_301={
0, 0, 0, 0, 0, 0 
};
var uLocal_302=0;
var uLocal_303=0;
var uLocal_304=0;
struct<9> Local_305[3];
struct<9> Local_306[2];
int iLocal_307=0;
int iLocal_308=0;
int iLocal_309=0;
int iLocal_310=0;
int iLocal_311=0;
int iLocal_312=0;
int iLocal_313=0;
int iLocal_314=0;
int iLocal_315=0;
int iLocal_316=0;
var uLocal_317=0;
var uLocal_318=0;
char* sLocal_319=NULL;
var uLocal_320=15;
var uLocal_321=0;
var uLocal_322=0;
var uLocal_323=0;
var uLocal_324=0;
var uLocal_325=0;
var uLocal_326=0;
var uLocal_327=0;
var uLocal_328=0;
var uLocal_329=0;
var uLocal_330=0;
var uLocal_331=0;
var uLocal_332=0;
var uLocal_333=0;
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=0;
var uLocal_338=0;
var uLocal_339=0;
var uLocal_340=0;
var uLocal_341=0;
var uLocal_342=0;
var uLocal_343=0;
var uLocal_344=0;
var uLocal_345=0;
var uLocal_346=0;
var uLocal_347=0;
var uLocal_348=0;
var uLocal_349=0;
var uLocal_350=0;
var uLocal_351=0;
var uLocal_352=0;
var uLocal_353=0;
var uLocal_354=0;
var uLocal_355=0;
var uLocal_356=0;
var uLocal_357=0;
var uLocal_358=0;
var uLocal_359=0;
var uLocal_360=0;
var uLocal_361=0;
var uLocal_362=0;
var uLocal_363=0;
var uLocal_364=0;
var uLocal_365=0;
var uLocal_366=0;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=0;
var uLocal_371=0;
var uLocal_372=15;
var uLocal_373=0;
var uLocal_374=0;
var uLocal_375=0;
var uLocal_376=0;
var uLocal_377=0;
var uLocal_378=0;
var uLocal_379=0;
var uLocal_380=0;
var uLocal_381=0;
var uLocal_382=0;
var uLocal_383=0;
var uLocal_384=0;
var uLocal_385=0;
var uLocal_386=0;
var uLocal_387=0;
var uLocal_388=0;
var uLocal_389=0;
var uLocal_390=0;
var uLocal_391=0;
var uLocal_392=0;
var uLocal_393=0;
var uLocal_394=0;
var uLocal_395=0;
var uLocal_396=0;
var uLocal_397=0;
var uLocal_398=0;
var uLocal_399=0;
var uLocal_400=0;
var uLocal_401=0;
var uLocal_402=0;
var uLocal_403=0;
var uLocal_404=0;
var uLocal_405=0;
var uLocal_406=0;
var uLocal_407=0;
var uLocal_408=0;
var uLocal_409=0;
var uLocal_410=0;
var uLocal_411=0;
var uLocal_412=0;
var uLocal_413=0;
var uLocal_414=0;
var uLocal_415=0;
var uLocal_416=0;
var uLocal_417=0;
var uLocal_418=0;
var uLocal_419=0;
var uLocal_420=0;
var uLocal_421=0;
var uLocal_422=0;
var uLocal_423=0;
struct<6> Local_424={
0, 0, 0, 0, 0, 0 
};
char cLocal_425[64]="";
var uLocal_426=0;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=0;
var uLocal_430=0;
var uLocal_431=0;
var uLocal_432=0;
var uLocal_433=0;
char cLocal_434[64]="";
var uLocal_435=0;
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=0;
var uLocal_439=0;
var uLocal_440=0;
var uLocal_441=0;
var uLocal_442=0;
struct<3> Local_443={
0, 0, 0 
};
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=0;
struct<3> Local_447={
0, 0, 0 
};
var uLocal_448=0;
var uLocal_449=0;
var uLocal_450=0;
char* sLocal_451=NULL;
var uLocal_452=0;
var uLocal_453=0;
var uLocal_454=0;
var uLocal_455=0;
var uLocal_456=0;
char[] cLocal_457[8]=0;
var uLocal_458=0;
var uLocal_459=0;
var uLocal_460=0;
var uLocal_461=0;
var uLocal_462=0;
struct<3> Local_463={
0, 0, 0 
};
struct<3> Local_464[2];
struct<3> Local_465={
0, 0, 0 
};
struct<3> Local_466={
0, 0, 0 
};
struct<3> Local_467={
0, 0, 0 
};
struct<3> Local_468={
0, 0, 0 
};
struct<3> Local_469[2];
struct<3> Local_470[2];
struct<3> Local_471[2];
struct<3> Local_472={
0, 0, 0 
};
struct<3> Local_473={
0, 0, 0 
};
struct<3> Local_474={
0, 0, 0 
};
struct<3> Local_475={
0, 0, 0 
};
struct<3> Local_476={
0, 0, 0 
};
struct<3> Local_477={
0, 0, 0 
};
struct<3> Local_478={
0, 0, 0 
};
struct<3> Local_479={
0, 0, 0 
};
struct<3> Local_480={
0, 0, 0 
};
struct<3> Local_481={
0, 0, 0 
};
struct<3> Local_482={
0, 0, 0 
};
struct<3> Local_483={
0, 0, 0 
};
struct<3> Local_484={
0, 0, 0 
};
struct<3> Local_485={
0, 0, 0 
};
struct<3> Local_486={
0, 0, 0 
};
struct<3> Local_487={
0, 0, 0 
};
struct<3> Local_488={
0, 0, 0 
};
int iLocal_489=0;
int iLocal_490=0;
int iLocal_491=0;
int iLocal_492=0;
struct<61> Local_493={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
#endregion

void __EntryFunction__(){
int iVar0;
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
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
uLocal_38=func_649(64);
uLocal_39=func_649(63);
iLocal_40=joaat("u_m_m_aldinapoli");
iLocal_41=joaat("premier");
bLocal_252=true;
StringCopy(&Local_424, "", 24);
StringCopy(&cLocal_425, "rcmnigel1b@reactions", 64);
StringCopy(&cLocal_434, "rcmnigel1bnmt_1b", 64);
StringCopy(&Local_443, "", 24);
StringCopy(&Local_447, "", 24);
iLocal_492=joaat("weapon_unarmed");
Local_57={
ScriptParam_493 
};
func_647(&Local_57);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_57.f_59)){
PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(Local_57.f_59);
}
MISC::SET_MISSION_FLAG(1);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)){
func_646("Force cleanup [TERMINATING]");
func_632(1);
func_623();
}
func_604();
if(func_603()){
func_498(&iLocal_491, -990.5321f, 342.9136f, 70.4615f, 111.0291f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
iVar0=func_497();
if(Global_94858==1){
iVar0++;
}
switch (iVar0){
case 0:
func_496(Local_488, fLocal_295, 1, 0);
func_484(0, 0);
break;
case 1:
func_496(-1045.017f, 367.3012f, 68.9128f, 103.701f, 1, 0);
func_484(1, 0);
break;
case 2:
func_496(-462.2575f, -156.7884f, 37.0458f, 112.5754f, 1, 0);
func_484(4, 0);
break;
default:
break;
}}elseif(func_483(0)){
if(func_482(PLAYER::PLAYER_PED_ID())){
func_481(PLAYER::PLAYER_PED_ID(), Local_488, fLocal_295, 0, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}}
while (true){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_VST", 0);
func_465(Local_57.f_9, 0, 0, 0, 0, 0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_463();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
switch (iLocal_54){
case 0:
func_376();
break;
case 1:
func_375();
break;
case 2:
func_374();
break;
case 5:
func_362();
break;
case 3:
func_276();
break;
case 4:
func_75();
break;
case 6:
func_48();
break;
case 7:
break;
}}
if(bLocal_252==0){
func_1(iLocal_55);
}
wait(0);
}}


void func_1(int iParam0){
if(iLocal_54==iParam0){
if(func_47()){
func_45(0, -1, 0);
}
func_34(1, 1, 1);
bLocal_252=true;
iLocal_253=0;
if(iLocal_54==4){
func_33(500, 1);
}}else{
func_2();
}}


void func_2(){
if(func_32(PLAYER::PLAYER_PED_ID())){
func_24(1, 0);
HUD::CLEAR_PRINTS();
switch (iLocal_54){
case 0:
if(iLocal_56==1){
func_23(&(Local_298.f_2));
func_22(&Local_298);
if(func_603() && func_497()==1){
func_21(Global_100681.f_12[1], 1);
func_17(Global_100681.f_12[0], 1);
if(iLocal_311==2 && iLocal_314==2){
func_481(Local_296.f_8, -1050.359f, 354.0594f, 68.9132f, 38.0338f, 0, 0);
Local_296.f_9=38;
}
elseif(iLocal_311==5){
Local_296.f_9=51;
func_14(&(Local_296.f_8), 1);
}}
if(!func_47()){
func_481(PLAYER::PLAYER_PED_ID(), -1045.017f, 367.3012f, 68.9128f, 103.701f, 0, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
if(iLocal_253==0){
if(iLocal_55==1){
if(func_482(PLAYER::PLAYER_PED_ID())){
func_11(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
iLocal_253=1;
}}
}}
if(iLocal_314==0){
iLocal_251=1;
iLocal_283=MISC::GET_GAME_TIMER();
}
func_10();
iLocal_56=2;
}
break;
case 1:
if(iLocal_56==1){
func_10();
if(!func_47()){
func_481(PLAYER::PLAYER_PED_ID(), -462.2575f, -156.7884f, 37.0458f, 112.5754f, 0, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
wait(0);
if(iLocal_253==0){
if(iLocal_55==2){
if(func_482(PLAYER::PLAYER_PED_ID())){
func_11(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
iLocal_253=1;
}}
}}}
break;
case 2:
if(iLocal_56==1){
func_10();
func_24(0, 0);
iLocal_243=1;
}
break;
case 3:
if(func_9(0)){
func_4(0);
}
if(!iLocal_257){
iLocal_56=2;
}else{
while (func_3()){
func_24(0, 1);
wait(0);
}}
break;
case 5:
if(iLocal_56==1){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}
break;
default:
break;
}}}

int func_3(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_4(int iParam0){
if(func_8()){
return;
}
if(Global_20584){
if(func_7()){
func_6(1, 1);
}else{
func_6(0, 0);
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
if(!func_5()){
Global_20383.f_1=3;
}}

int func_5(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_6(bool bParam0, bool bParam1){
if(bParam0){
if(func_9(0)){
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


bool func_7(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_8(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_9(int iParam0){
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


void func_10(){
int iVar0;
iVar0=0;
while (iVar0 <=1){
Local_297[iVar0 /*14*/].f_11=0;
Local_297[iVar0 /*14*/].f_12=0;
Local_297[iVar0 /*14*/].f_13=0;
iVar0++;
}
Local_296.f_11=0;
Local_296.f_12=0;
Local_296.f_13=0;
}


void func_11(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, bool bParam5){
var uVar0;
int iVar1;
uVar0=STREAMING::STREAMVOL_CREATE_SPHERE(Param0, fParam1, iParam2, 127);
if(STREAMING::STREAMVOL_IS_VALID(uVar0)){
iVar1=(MISC::GET_GAME_TIMER() + iParam3);
while (!STREAMING::STREAMVOL_HAS_LOADED(uVar0) && MISC::GET_GAME_TIMER() < iVar1){
if(bParam5){
func_13(0);
}
if(bParam4){
func_12();
}
wait(0);
}
if(MISC::GET_GAME_TIMER() < iVar1){
}
STREAMING::STREAMVOL_DELETE(uVar0);
}}


void func_12(){
Global_23131.f_6=1;
}


void func_13(int iParam0){
if(func_8()){
return;
}
if(!Global_20383.f_1==1){
if(func_9(0)){
func_4(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_14(var uParam0, bool bParam1){
if(bParam1){
func_16(uParam0);
}else{
func_15(uParam0, 1, 0, 1);
}}


void func_15(var uParam0, int iParam1, int iParam2, int iParam3){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!PED::IS_PED_INJURED(*uParam0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
if(iParam3==0){
TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
}
PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
if(iParam2==1){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
}}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
}}


void func_16(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
}
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
}
PED::DELETE_PED(uParam0);
}}


void func_17(int iParam0, bool bParam1){
int iVar0;
iLocal_314=iParam0;
if(bParam1){
iVar0=0;
while (iVar0 <=1){
switch (iLocal_314){
case 0:
Local_297[iVar0 /*14*/].f_9=0;
break;
case 1:
break;
case 2:
Local_297[iVar0 /*14*/].f_9=36;
break;
case 3:
Local_297[iVar0 /*14*/].f_9=32;
break;
case 4:
if(iVar0==0){
Local_297[iVar0 /*14*/].f_9=26;
}else{
Local_297[iVar0 /*14*/].f_9=32;
}
break;
case 5:
if(Local_297[iVar0 /*14*/].f_9 !=42 || Local_297[iVar0 /*14*/].f_9 !=43){
Local_297[iVar0 /*14*/].f_9=44;
if(func_482(Local_297[iVar0 /*14*/].f_8)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_297[iVar0 /*14*/].f_8);
}}
break;
case 6:
Local_297[iVar0 /*14*/].f_9=48;
break;
}
iVar0++;
}}
if(iLocal_314==5){
iLocal_290=MISC::GET_GAME_TIMER();
}elseif(iLocal_314==2 || iLocal_314==4){
iLocal_282=MISC::GET_GAME_TIMER();
}elseif(iLocal_314==6){
if(!iLocal_254){
func_20(0);
func_19(5, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[5]), 0, 0);
func_18(5, 0, 1);
iLocal_258=1;
iLocal_260=1;
iLocal_254=1;
}}}

int func_18(int iParam0, int iParam1, int iParam2){
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0])){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_276[iParam0], iParam1, 0, iParam2);
return 1;
}
return 0;
}

int func_19(int iParam0, float fParam1, int iParam2, int iParam3){
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0])){
OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(iLocal_276[iParam0], iParam2);
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_276[iParam0], fParam1, 0, iParam3);
return 1;
}
return 0;
}


void func_20(bool bParam0){
int iVar0;
iVar0=0;
if(bParam0){
iVar0=1;
}
if(!iLocal_258){
func_19(0, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[0]), 0, 0);
func_18(0, iVar0, 1);
func_19(1, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[1]), 0, 0);
func_18(1, iVar0, 1);
}
if(!iLocal_260){
func_19(2, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[2]), 0, 0);
func_18(2, iVar0, 1);
func_19(3, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[3]), 0, 0);
func_18(3, iVar0, 1);
}}


void func_21(int iParam0, bool bParam1){
iLocal_311=iParam0;
if(bParam1){
switch (iLocal_311){
case 0:
Local_296.f_9=0;
break;
case 1:
Local_296.f_9=32;
break;
case 2:
Local_296.f_9=38;
break;
case 3:
Local_296.f_9=44;
if(func_482(Local_296.f_8)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_296.f_8);
}
break;
case 4:
Local_296.f_9=49;
break;
case 5:
Local_296.f_9=51;
break;
}}}


void func_22(var uParam0){
if(OBJECT::DOES_PICKUP_EXIST(*uParam0)){
OBJECT::REMOVE_PICKUP(*uParam0);
}}


void func_23(var uParam0){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::SET_BLIP_ROUTE(*uParam0, 0);
HUD::REMOVE_BLIP(uParam0);
}}


void func_24(bool bParam0, bool bParam1){
if(func_3()){
if(bParam0){
func_30();
}else{
func_28();
}}
if(bParam1){
func_26();
}
func_25(&sLocal_451, &cLocal_457);
}


void func_25(char* sParam0, char* sParam1){
if(iLocal_316 !=0){
StringCopy(sParam0, "NULL", 24);
StringCopy(sParam1, "NULL", 24);
iLocal_316=0;
}}


void func_26(){
Global_20591=0;
func_27();
}


void func_27(){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20382==1){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
Global_20383.f_1=Global_20385;
return;
}}


void func_28(){
Global_20591=0;
func_29();
}


void func_29(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
}}


void func_30(){
Global_20591=0;
func_31();
}


void func_31(){
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

int func_32(int iParam0){
if(func_482(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}


void func_33(int iParam0, bool bParam1){
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
if(!CAM::IS_SCREEN_FADING_IN()){
CAM::DO_SCREEN_FADE_IN(iParam0);
}}
if(bParam1){
while (!CAM::IS_SCREEN_FADED_IN()){
wait(0);
}}}


void func_34(int iParam0, int iParam1, int iParam2){
func_35(0, 0, iParam2, 1);
if(iParam0==1){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
if(iParam1==1){
func_33(500, 0);
}}


void func_35(int iParam0, int iParam1, int iParam2, bool bParam3){
var uVar0;
uVar0=PLAYER::GET_PLAYER_INDEX();
PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
func_36(0, 1, 0, 0, 0, 0, 0);
if(iParam2==1){
HUD::DISPLAY_RADAR(1);
HUD::DISPLAY_HUD(1);
}
HUD::CLEAR_HELP(1);
if(iParam0==1){
CAM::SET_WIDESCREEN_BORDERS(0, 0);
}
if(iParam1==1){
if((iLocal_34 !=0 && iLocal_34 !=joaat("object")) && iLocal_34 !=joaat("gadget_parachute")){
if(func_482(PLAYER::PLAYER_PED_ID())){
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_34, 0)){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_34, 0);
}}}}
if(func_32(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
}}


void func_36(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_44(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_5()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_43(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_44(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_43(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_41(PLAYER::PLAYER_ID())) && !func_38(PLAYER::PLAYER_ID(), 0)) && !func_37()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_41(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_37(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


bool func_38(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_39(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_39(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_40();
}
if(Global_1575040[iVar1]==1){
if(bParam1){
}
iVar0=8;
}else{
iVar0=Global_1574912[iVar1];
if(bParam1){
}}
return iVar0;
}

int func_40(){
return Global_1574918;
}

int func_41(int iParam0){
if(func_38(iParam0, 0)){
return 1;
}
if(func_42()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_42(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_43(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_44(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}


void func_45(int iParam0, int iParam1, int iParam2){
if(func_603() && func_47()){
while (Global_100676 !=6){
wait(0);
}
MISC::SET_GAME_PAUSED(0);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
}}
if(iParam0 !=0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
wait(0);
}}}}}
if(iParam2==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}}
GRAPHICS::ANIMPOSTFX_STOP_ALL();
func_46(0);
}}


void func_46(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100681.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100681.f_20), 13);
}}


bool func_47(){
return MISC::IS_BIT_SET(Global_100681.f_20, 13);
}


void func_48(){
char* sVar0;
sVar0=0;
Local_468={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
func_65();
func_63();
switch (iLocal_56){
case 0:
if(func_62("NIGEL1B_MISSION_FAIL", 0)){
HUD::CLEAR_PRINTS();
HUD::CLEAR_HELP(1);
func_24(1, 1);
func_60();
if(iLocal_267==0){
func_632(1);
}else{
func_58(sVar0, 1);
}
iLocal_284=2;
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
func_62("NIGEL1B_MISSION_FAIL", 0);
iLocal_56=1;
}
break;
case 1:
if(func_57()){
func_49(1);
MISC::CLEAR_AREA(Local_465, 35f, 1, 0, 0, 0);
MISC::CLEAR_AREA_OF_PEDS(Local_465, 35f, 0);
MISC::CLEAR_AREA_OF_VEHICLES(Local_465, 35f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_OBJECTS(Local_465, 35f, 0);
func_623();
}
break;
}}


void func_49(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 <=1){
if(func_32(Local_297[iVar0 /*14*/].f_8)){
PED::SET_PED_KEEP_TASK(Local_297[iVar0 /*14*/].f_8, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_297[iVar0 /*14*/].f_8, 0, 1);
if(iVar0==0){
PED::SET_PED_LEG_IK_MODE(Local_297[iVar0 /*14*/].f_8, 1);
}}
func_14(&(Local_297[iVar0 /*14*/].f_8), bParam0);
iVar0++;
}
if(func_32(Local_296.f_8)){
PED::SET_PED_KEEP_TASK(Local_296.f_8, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_296.f_8, 0, 1);
}
func_14(&(Local_296.f_8), bParam0);
func_22(&Local_298);
iVar0=0;
iVar0=0;
while (iVar0 < 2){
func_54(&(Local_306[iVar0 /*9*/]), bParam0);
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 3){
func_54(&(Local_305[iVar0 /*9*/]), bParam0);
iVar0++;
}
func_51(&uLocal_489, bParam0);
if(func_50(iLocal_490)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo", 3)){
ENTITY::STOP_ENTITY_ANIM(iLocal_490, "idle_speedo", "rcmnigel1b", -4f);
}
AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_490, 0);
}
func_51(&iLocal_490, bParam0);
func_51(&iLocal_491, bParam0);
}

int func_50(int iParam0){
if(func_482(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}


void func_51(var uParam0, bool bParam1){
if(bParam1){
func_53(uParam0);
}else{
func_52(uParam0);
}}


void func_52(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::IS_ENTITY_DEAD(*uParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
}}}


void func_53(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
}
if(func_50(*uParam0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1)){
if(func_482(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(uParam0);
}}else{
if(func_482(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(uParam0);
}}}


void func_54(int iParam0, bool bParam1){
if(bParam1){
func_56(iParam0);
}else{
func_55(iParam0, 0);
}}


void func_55(var uParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}
if(!bParam1){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
}else{
OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*uParam0);
}}}


void func_56(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}
OBJECT::DELETE_OBJECT(uParam0);
}}

int func_57(){
if(Global_3){
return 1;
}
if(Global_100681==7 || Global_100681==8){
return 1;
}
return 0;
}


void func_58(char* sParam0, bool bParam1){
func_59(sParam0);
func_632(bParam1);
}


void func_59(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78791, sParam0, 16);
StringCopy(&Global_78795, "", 16);
if(RECORDING::IS_REPLAY_RECORDING()){
RECORDING::STOP_REPLAY_RECORDING();
}}}}


void func_60(){
int iVar0;
func_23(&(Local_298.f_2));
iVar0=0;
while (iVar0 <=1){
func_61(&(Local_297[iVar0 /*14*/]));
iVar0++;
}
func_61(&Local_296);
}


void func_61(var uParam0){
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

int func_62(char* sParam0, bool bParam1){
if(bParam1){
if(!AUDIO::PREPARE_MUSIC_EVENT(sParam0)){
return 0;
}}
if(AUDIO::TRIGGER_MUSIC_EVENT(sParam0)){
return 1;
}
return 0;
}


void func_63(){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(iLocal_313 !=0){
PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
if(!iLocal_254){
func_20(0);
func_19(5, OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_276[5]), 0, 0);
func_18(5, 0, 1);
iLocal_258=1;
iLocal_260=1;
iLocal_254=1;
}}
func_64(0);
}}


void func_64(int iParam0){
if(iParam0==iLocal_284){
switch (iLocal_284){
case 0:
if(func_62("NIGEL1B_START", 0)){
iLocal_284++;
}
break;
case 1:
if(func_62("NIGEL1B_WANTED", 0)){
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
iLocal_284++;
}
break;
case 2:
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(func_62("NIGEL1B_COPS_LOST", 0)){
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
iLocal_286=MISC::GET_GAME_TIMER();
iLocal_284=3;
}}elseif(func_62("NIGEL1B_MISSION_FAIL", 0)){
iLocal_284=4;
}
break;
default:
break;
}}}


void func_65(){
if(iLocal_313==0){
if(func_74(PLAYER::PLAYER_PED_ID(), 0)){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
iLocal_313=1;
return;
}}elseif(iLocal_313==1){
if(func_72(PLAYER::PLAYER_PED_ID(), 0)){
func_20(0);
func_71(1);
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX")){
AUDIO::START_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
}
iLocal_313=2;
return;
}elseif(func_68(PLAYER::PLAYER_PED_ID(), 0)){
func_20(0);
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX")){
AUDIO::START_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
}
iLocal_313=3;
return;
}elseif(!func_74(PLAYER::PLAYER_PED_ID(), 0)){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.8f);
iLocal_313=0;
return;
}}elseif(iLocal_313==2){
if(func_72(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())){
EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
}
func_66();
}else{
func_20(1);
func_71(0);
iLocal_313=1;
return;
}}elseif(iLocal_313==3){
if(func_68(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())){
EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
}
func_66();
}else{
func_20(1);
iLocal_313=1;
return;
}}}


void func_66(){
if(!iLocal_258){
if(func_67(0) || func_67(1)){
iLocal_258=1;
}}
if(!iLocal_260){
if(func_67(2) || func_67(3)){
iLocal_260=1;
}}}

int func_67(int iParam0){
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0])){
if(!OBJECT::IS_DOOR_CLOSED(iLocal_276[iParam0])){
return 1;
}}
return 0;
}

int func_68(int iParam0, bool bParam1){
struct<3> Var0;
if(bParam1){
if(!func_482(iParam0)){
return 0;
}}
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if(func_70(&uLocal_372, Var0)){
if(func_69(Var0.f_2, 66.21f, 11f)){
return 1;
}}
return 0;
}

int func_69(float fParam0, float fParam1, float fParam2){
float fVar0;
fVar0=MISC::ABSF((fParam0 - fParam1));
if(fVar0 <=fParam2){
return 1;
}
return 0;
}


bool func_70(var uParam0, struct<2> Param1, var uParam2){
bool bVar0;
int iVar1;
int iVar2;
if(uParam0->f_46 < 3){}
bVar0=false;
iVar1=0;
iVar2=(uParam0->f_46 - 1);
while (iVar1 < uParam0->f_46){
if(((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >=Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >=Param1.f_1)){
if(((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0){
bVar0=!bVar0;
}}
iVar2=iVar1;
iVar1++;
}
return bVar0;
}


void func_71(bool bParam0){
if(bParam0){
Global_21781=1;
}else{
Global_21781=0;
}}

int func_72(int iParam0, bool bParam1){
struct<3> Var0;
if(bParam1){
if(!func_482(iParam0)){
return 0;
}}
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if(func_73(iParam0, Local_475, 5.93f, 1)){
if(!ENTITY::IS_ENTITY_AT_COORD(iParam0, -1055.184f, 382.7324f, 70.68832f, 1f, 2f, 2.75f, 0, 1, 0)){
if(func_69(Var0.f_2, 66.21f, 11f)){
return 1;
}}}
if((((ENTITY::IS_ENTITY_IN_AREA(iParam0, Local_476, Local_477, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_478, Local_479, 2.8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_480, Local_481, 12.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_482, Local_483, 8.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_484, Local_485, 4f, 0, 1, 0)){
if(func_69(Var0.f_2, 66.21f, 11f)){
return 1;
}}
return 0;
}


bool func_73(int iParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), Param1) <=(fParam2 * fParam2);
}

int func_74(int iParam0, bool bParam1){
struct<3> Var0;
if(bParam1){
if(!func_482(iParam0)){
return 0;
}}
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if(func_70(&uLocal_320, Var0)){
if(func_69(Var0.f_2, 66.21f, 11f)){
return 1;
}}
return 0;
}


void func_75(){
func_33(500, 1);
func_76(97, 1);
func_623();
}


void func_76(int iParam0, bool bParam1){
int iVar0;
var uVar1;
iVar0=func_274();
if(iVar0==-1){
return;
}
if(!Global_112735[iVar0 /*10*/].f_4){
return;
}
if(Global_112735[iVar0 /*10*/].f_5){
return;
}
if(Global_112735[iVar0 /*10*/].f_6){
return;
}
func_245(iVar0, 0);
MISC::SET_BIT(&Global_78807, true);
if(Global_112735[iVar0 /*10*/].f_9==-1){}else{
func_244(&(Global_112735[iVar0 /*10*/].f_9));
}
if(bParam1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
PLAYER::START_FIRING_AMNESTY(5000);
}}
func_230(iVar0, 1, 0, 0);
func_229(0, 0);
MemCopy(&uVar1,{
func_227(iVar0)
}
, 4);
func_224(&uVar1, func_225());
func_101();
if(MISC::IS_BIT_SET(Global_113648.f_10018.f_25, 3)){
func_100();
}
func_83();
if(iParam0==210 || iParam0==211){
func_78(iParam0, 406.38f, -1635.86f);
}elseif(iParam0==111){
func_78(iParam0, 1973.84f, 3814.89f);
}elseif(iParam0 !=322){
func_78(iParam0, 0, 0);
}
func_77();
}

int func_77(){
if(func_483(0)){
return 0;
}
if(Global_100720.f_8){
if(Global_100720.f_10 > 0){
return 0;
}}elseif(Global_100720.f_10 > 1){
return 0;
}
Global_100720.f_10++;
return 1;
}


void func_78(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_82((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(Global_113648.f_10196[iParam0 /*12*/].f_6==11 || Global_113648.f_10196[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113648.f_10196[iParam0 /*12*/].f_5=1;
Global_113648.f_10196[iParam0 /*12*/].f_10=iParam1;
Global_113648.f_10196[iParam0 /*12*/].f_11=iParam2;
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
func_79();
}}


void func_79(){
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
Global_113384=0;
Global_113385=0;
Global_113386=0;
Global_113387=0;
Global_113388=0;
Global_113389=0;
Global_113390=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113648.f_10196.f_3853;
Global_113648.f_10196.f_3853=0f;
while (iVar0 < 321){
if(Global_113648.f_10196[iVar0 /*12*/].f_5==1){
switch (Global_113648.f_10196[iVar0 /*12*/].f_6){
case 1:
Global_113384++;
fVar1=(fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 3:
Global_113385++;
fVar2=(fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 5:
Global_113386++;
fVar3=(fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 7:
Global_113387++;
fVar4=(fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 9:
Global_113388++;
fVar5=(fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113389++;
fVar6=(fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
case 13:
Global_113390++;
fVar7=(fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113367 > 0){
if(Global_113384==Global_113367){
fVar1=55f;
}}
if(Global_113368 > 0){
if(Global_113385==Global_113368){
fVar2=10f;
}}
if(Global_113369 > 0){
if(Global_113386==Global_113369){
fVar3=0f;
}}
if(Global_113370 > 0){
if(Global_113387==Global_113370){
fVar4=10f;
}}
if(Global_113371 > 0){
if(((Global_113388==Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388==Global_113374){
if(!MISC::IS_BIT_SET(Global_113648.f_10196.f_3856, 14)){
if(Global_113388==Global_113371){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113371, 0);
MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113372 > 0){
if(Global_113389==Global_113372){
fVar6=15f;
}}
if(Global_113373 > 0){
if(Global_113390==Global_113373){
fVar7=5f;
}}
Global_113648.f_10196.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113388 > Global_113374 || Global_113388==Global_113374){
iVar9=Global_113374;
}else{
iVar9=Global_113388;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113384, 1);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113367, 1);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113385, 1);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113368, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113386, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113369, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113387, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113370, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113374, 1);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
Global_113391=(Global_113384 * 100 / Global_113367);
Global_113393=((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
Global_113392=((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
Global_113394=((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113391, 1);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113392, 1);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113393, 1);
if(fVar8 > 0f && floor(fVar8) < floor(Global_113648.f_10196.f_3853)){
func_81(13, floor(Global_113648.f_10196.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_80()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113382=0;
}
if(!Global_63362){
func_77();
}}}}}

int func_80(){
return Global_32163;
}

int func_81(int iParam0, int iParam1){
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


void func_82(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_40();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_83(){
func_99();
func_91();
func_87();
func_86();
func_85();
func_84();
Global_100718=0;
Global_94856=-1;
MISC::CLEAR_BIT(&(Global_100681.f_20), 17);
Global_100716=0;
MISC::PAUSE_DEATH_ARREST_RESTART(0);
MISC::IGNORE_NEXT_RESTART(0);
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
MISC::SET_FADE_OUT_AFTER_ARREST(1);
MISC::SET_FADE_OUT_AFTER_DEATH(1);
func_46(0);
}


void func_84(){
Global_78799={
0f, 0f, 0f 
};
Global_78802=0f;
Global_100681.f_21=145;
}


void func_85(){
StringCopy(&Global_78791, "", 16);
StringCopy(&Global_78795, "", 16);
}


void func_86(){
int iVar0;
iVar0=0;
while (iVar0 <=6){
Global_100681.f_22[iVar0]=0;
iVar0++;
}}


void func_87(){
Global_100681=13;
Global_100681.f_1=-1;
Global_100681.f_2=0;
Global_100681.f_30=0f;
MISC::CLEAR_BIT(&(Global_100681.f_20), 25);
Global_100715=0;
func_90(0);
func_89();
func_88();
Global_100681.f_18=-1;
Global_100681.f_19=-1;
}


void func_88(){
MISC::CLEAR_BIT(&(Global_100681.f_20), 22);
MISC::CLEAR_BIT(&(Global_100681.f_20), 8);
}


void func_89(){
if(Global_100681.f_16 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100681.f_16));
Global_100681.f_16=0;
}
if(Global_100681.f_17 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100681.f_17));
Global_100681.f_17=0;
}}


void func_90(int iParam0){
if(iParam0==1){
Global_43806=1;
}else{
Global_43806=0;
}}


void func_91(){
func_92(&Global_107196);
}


void func_92(var uParam0){
int iVar0;
int iVar1;
*uParam0=145;
func_98(&(uParam0->f_1));
uParam0->f_6=-1;
uParam0->f_7=-1;
uParam0->f_8=0f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=145;
iVar1=0;
while (iVar1 < 3){
uParam0->f_9[iVar1]=-1;
uParam0->f_13[iVar1]=0;
uParam0->f_17[iVar1]=0;
uParam0->f_21[iVar1]=0;
func_97(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
func_97(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
iVar0=0;
while (iVar0 < 12){
uParam0->f_616[iVar1 /*65*/][iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_13[iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_26[iVar0]=-1;
iVar0++;
}
uParam0->f_616[iVar1 /*65*/].f_59=0;
uParam0->f_616[iVar1 /*65*/].f_60=-99;
uParam0->f_616[iVar1 /*65*/].f_61=2;
uParam0->f_616[iVar1 /*65*/].f_62=0;
uParam0->f_616[iVar1 /*65*/].f_63=-99;
uParam0->f_616[iVar1 /*65*/].f_64=1;
iVar0=0;
while (iVar0 < 9){
uParam0->f_616[iVar1 /*65*/].f_39[iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_49[iVar0]=-1;
iVar0++;
}
iVar0=0;
while (iVar0 < 44){
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_1=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_2=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_3=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_4=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_1=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_2=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_3=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_4=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 4){
uParam0->f_2244[iVar1 /*32*/][iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
uParam0->f_2244[iVar1 /*32*/].f_5[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
uParam0->f_2244[iVar1 /*32*/].f_16[iVar0]=0;
iVar0++;
}
uParam0->f_2341[iVar1]=0;
iVar0=0;
while (iVar0 <=3){
uParam0->f_2838[iVar1 /*15*/][iVar0]=0;
uParam0->f_2838[iVar1 /*15*/].f_5[iVar0]=0;
uParam0->f_2838[iVar1 /*15*/].f_10[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
uParam0->f_2345[iVar1 /*164*/][iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_4[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_8[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_12[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_16[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_20[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_24[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_28[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_32[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_36[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_40[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_44[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_48[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_52[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_56[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_60[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_64[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_68[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_72[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_76[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_80[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_84[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_88[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_92[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_96[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_100[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_104[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_108[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_112[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_116[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_120[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_124[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_128[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_132[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_136[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_140[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_144[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_148[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_152[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_156[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_160[iVar0]=0;
iVar0++;
}
iVar1++;
}
func_96(&(uParam0->f_2884));
func_94(&(uParam0->f_2890));
func_93(&(uParam0->f_2980));
}


void func_93(var uParam0){
*uParam0=-1;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}


void func_94(var uParam0){
func_95(&(uParam0->f_12));
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3={
0f, 0f, 0f 
};
uParam0->f_6=0f;
uParam0->f_8=0;
uParam0->f_9=0;
}


void func_95(var uParam0){
int iVar0;
uParam0->f_66=0;
uParam0->f_77=0;
uParam0->f_65=0;
uParam0->f_62=0;
uParam0->f_63=0;
uParam0->f_64=0;
uParam0->f_74=0;
uParam0->f_75=0;
uParam0->f_76=0;
*uParam0=0;
StringCopy(&(uParam0->f_1), "", 16);
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
iVar0=0;
while (iVar0 < 49){
uParam0->f_9[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 2){
uParam0->f_59[iVar0]=0;
iVar0++;
}
uParam0->f_67=0;
uParam0->f_68=0;
uParam0->f_69=0;
uParam0->f_70=1;
uParam0->f_71=0;
uParam0->f_72=0;
uParam0->f_73=0;
}


void func_96(var uParam0){
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
uParam0->f_5=-1;
}


void func_97(var uParam0){
int iVar0;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0f;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
iVar0=0;
while (iVar0 <=11){
uParam0->f_11[iVar0]=0;
iVar0++;
}
uParam0->f_24=0;
uParam0->f_25=0;
StringCopy(&(uParam0->f_27), "", 16);
iVar0=0;
while (iVar0 <=48){
uParam0->f_31[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=1){
uParam0->f_81[iVar0]=0;
iVar0++;
}
uParam0->f_84=0;
uParam0->f_85=0;
uParam0->f_86=0;
uParam0->f_87=0;
uParam0->f_88=0;
uParam0->f_89=0;
uParam0->f_90=0;
uParam0->f_91=0;
uParam0->f_93=0;
uParam0->f_94=0;
uParam0->f_95=0;
uParam0->f_92=0;
}


void func_98(var uParam0){
*uParam0=-15;
}


void func_99(){
StringCopy(&Global_104204, "", 32);
func_92(&Global_104212);
}


void func_100(){
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==0){
Global_9058[0 /*2811*/][0 /*281*/].f_259=2;
}
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==0){
Global_9058[1 /*2811*/][0 /*281*/].f_259=2;
}
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==0){
Global_9058[2 /*2811*/][0 /*281*/].f_259=2;
}
MISC::SET_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
}


void func_101(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
while (iVar0 <=8){
iVar1=Global_98050[iVar0];
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)){
iVar3=func_220(iVar1);
iVar2=-99;
switch (iVar3){
case 0:
iVar2=112;
break;
case 1:
iVar2=158;
break;
case 2:
iVar2=154;
break;
}
if(iVar2 !=-99){
if(func_219(iVar1, 14, iVar2)){
func_102(iVar1, 14, iVar2);
}
if(Global_113648.f_2365.f_539[iVar3 /*65*/].f_39[2]==iVar2){
Global_113648.f_2365.f_539[iVar3 /*65*/].f_39[2]=-1;
}}}
iVar0++;
}}

int func_102(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
int iVar7;
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_154(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(!func_219(iParam0, iParam1, iParam2)){
return 0;
}
if(iParam1==12){
uVar2={
func_150(iVar0, iParam2) 
};
iVar1=0;
while (iVar1 <=14){
if(uVar2[iVar1] !=-99){
func_102(iParam0, iVar1, uVar2[iVar1]);
}
iVar1++;
}}elseif(iParam1==13){
uVar5={
func_147(iVar0, iParam2) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_102(iParam0, 14, uVar5[iVar3])){
iVar4=0;
}
iVar3++;
}
return iVar4;
}elseif(iParam1==14){
PED::CLEAR_PED_PROP(iParam0, Global_78341[1 /*14*/].f_12, 1);
}else{
uVar6={
func_150(iVar0, 0) 
};
Global_78341[1 /*14*/]={
func_154(iVar0, iParam1, uVar6[iParam1], -1) 
};
if(PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, func_146(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, func_146(iParam1), Global_78341[1 /*14*/].f_3) > 0){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_146(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, 0);
}}
if(func_145(iParam0, iVar0, &iVar7, 0)){
func_105(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_103(iParam0, iVar0, &iVar7)){
func_105(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
return 1;
}

int func_103(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_104(iParam1);
if(Global_113648.f_2365.f_539[iVar0 /*65*/].f_63 !=-99){
if(!func_219(iParam0, Global_113648.f_2365.f_539[iVar0 /*65*/].f_64, Global_113648.f_2365.f_539[iVar0 /*65*/].f_63)){
*iParam2=Global_113648.f_2365.f_539[iVar0 /*65*/].f_62;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=-99;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=1;
return 1;
}}
return 0;
}

int func_104(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 0;
break;
case joaat("player_one"):
return 1;
break;
case joaat("player_two"):
return 2;
break;
default:
break;
}
return 145;
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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
var uVar11;
var uVar12;
var uVar13;
struct<14> Var14;
var uVar15;
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
Global_78339++;
iVar5=-99;
iVar6=-99;
iVar7=-99;
iVar8=-99;
iVar9=-99;
iVar10=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iParam5==0){
Global_78341[1 /*14*/]={
func_154(iVar10, iParam1, iParam2, -1) 
};
if(!func_144(iParam3)){
Global_78339=(Global_78339 - 1);
return 0;
}
func_137(iParam1);
}
if(iParam1==12){
if(iParam7==1){
if(iVar10==joaat("player_one")){
iVar5=func_135(iParam0, 8);
if(iVar5 !=9){
iVar5=-99;
}}
iVar6=func_135(iParam0, 9);
if(iVar10==joaat("player_zero")){
if(iVar6 >=9 && iVar6 <=14){
}else{
iVar6=-99;
}}elseif(iVar10==joaat("player_one")){
if(iVar6 >=5 && iVar6 <=10){
}else{
iVar6=-99;
}}elseif(iVar10==joaat("player_two")){
if((iVar6 >=9 && iVar6 <=14) || (iVar6 >=15 && iVar6 <=16)){
}else{
iVar6=-99;
}}
iVar7=func_134(iParam0, 1);
if(!func_133(iVar10, 14, iVar7, -1)){
iVar7=-99;
}
iVar8=func_134(iParam0, 0);
if(!func_132(iVar10, 14, iVar8, -1) && !func_131(iVar10, 14, iVar8, -1)){
iVar8=-99;
}
if(iVar10==joaat("player_one")){
iVar9=func_134(iParam0, 2);
}}
PED::CLEAR_ALL_PED_PROPS(iParam0, 1);
uVar11=15;
if(iParam5==1){
uVar11={
Global_78384 
};
}else{
uVar11={
func_150(iVar10, iParam2) 
};
}
iVar0=0;
while (iVar0 <=14){
if(uVar11[iVar0] !=-99){
Global_78341[1 /*14*/]={
func_154(iVar10, iVar0, uVar11[iVar0], -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
if(iVar0==13){
uVar12=9;
if(iParam5==1){
uVar12={
Global_78401 
};
}
else{
uVar12={
func_147(iVar10, uVar11[iVar0]) 
};
}
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_154(iVar10, 14, uVar12[iVar1], -1) 
};
func_121(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_137(14);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_113(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
iVar1++;
}}elseif(iVar0 !=14 && iVar0 !=12){
if((iVar10==joaat("player_one") && iVar0==2) && uVar11[iVar0]==20){
func_112(iVar10, 2, 20, &iVar4);
}
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_146(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_146(iVar0)));
}
else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_146(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
func_137(iVar0);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_113(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
if(iVar3 !=-99){
func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}
}}}}elseif(iVar0 !=12 && iVar0 !=14){
Global_78341[1 /*14*/]={
func_154(iVar10, iVar0, func_111(iParam0, iVar0, -1), -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
if(iVar0==2){
if(iVar10==joaat("player_one")){
if(func_145(iParam0, iVar10, &iVar4, 1)){
func_105(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
}}else{
uVar13={
func_150(iVar10, 0) 
};
func_105(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
iVar0++;
}
if(iParam7==1){
Var14={
func_154(iVar10, 8, iVar5, -1) 
};
if(iVar5 !=-99){
if(func_109(iVar10, iParam2, 8, iVar5, &uVar11, &Var14)){
func_105(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_154(iVar10, 9, iVar6, -1) 
};
if(iVar6 !=-99){
if(func_109(iVar10, iParam2, 9, iVar6, &uVar11, &Var14)){
func_105(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_154(iVar10, 14, iVar7, -1) 
};
if(iVar7 !=-99){
if(func_109(iVar10, iParam2, 14, iVar7, &uVar11, &Var14)){
func_105(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_154(iVar10, 14, iVar8, -1) 
};
if(iVar8 !=-99){
if(func_109(iVar10, iParam2, 14, iVar8, &uVar11, &Var14)){
func_105(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_154(iVar10, 14, iVar9, -1) 
};
if(iVar9 !=-99){
if(func_109(iVar10, iParam2, 14, iVar9, &uVar11, &Var14)){
func_105(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}}}elseif(iParam1==13){
uVar15={
func_147(iVar10, iParam2) 
};
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_154(iVar10, 14, uVar15[iVar1], -1) 
};
func_121(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_137(14);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_113(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
iVar1++;
}}elseif(iParam1==14){
func_121(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_137(iParam1);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_113(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}}else{
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_146(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_146(iParam1)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_146(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_113(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_105(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
if(iParam6==0){
func_106(iVar10, iParam1, iParam2);
}}
if(Global_78339==1){
if(func_145(iParam0, iVar10, &iVar4, 0)){
func_105(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_103(iParam0, iVar10, &iVar4)){
func_105(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
Global_78339=(Global_78339 - 1);
return 1;
}


void func_106(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(iParam0==joaat("player_zero")){
iVar0=5;
}elseif(iParam0==joaat("player_one")){
iVar0=2;
}elseif(iParam0==joaat("player_two")){
iVar0=4;
}
if(func_108(iParam0, 12, iVar0)){
if(func_107(iParam0, iParam1, iParam2)){
iVar1=func_104(iParam0);
if(iParam1==3){
Global_113648.f_2365.f_539.f_196[iVar1]=iParam2;
}elseif(iParam1==4){
Global_113648.f_2365.f_539.f_200[iVar1]=iParam2;
}}}}

int func_107(int iParam0, int iParam1, int iParam2){
if(iParam0==joaat("player_zero")){
if(iParam1==4){
if(iParam2 >=47 && iParam2 <=54){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=77 && iParam2 <=84){
return 1;
}}}elseif(iParam0==joaat("player_one")){
if(iParam1==4){
if(iParam2 >=14 && iParam2 <=21){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=41 && iParam2 <=56){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==4){
if(iParam2 >=18 && iParam2 <=29){
return 1;
}}elseif(iParam1==3){
if(iParam2 >=54 && iParam2 <=69){
return 1;
}}}
return 0;
}


bool func_108(int iParam0, int iParam1, int iParam2){
Global_78341[1 /*14*/]={
func_154(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
var uVar0;
int iVar1;
if((*uParam4)[iParam2]==iParam3){
return 1;
}
if(((*uParam4)[iParam2]==-99 && iParam2 !=14) && iParam2 !=13){
return 1;
}
if(iParam2==13 || (iParam2==14 && (*uParam4)[13]==31)){
if((((((((iParam3==0 || iParam3==1) || iParam3==2) || iParam3==3) || iParam3==4) || iParam3==5) || iParam3==6) || iParam3==7) || iParam3==8){
return 1;
}}
if(iParam3==-99 || uParam5->f_1==-1){
return 1;
}
if(iParam2==14){
uVar0={
func_147(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_110(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_133(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_132(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=0){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_131(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_133(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_132(iParam0, iParam2, iParam3, -1)){
if((((iParam1==3 || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
if(iParam2==8){
if(iParam3==9){
if(iParam1==8 || iParam1==21){
return 1;
}}else{
return 0;
}}else{
return 0;
}}
if(iParam2==8){
if((*uParam4)[8] !=26){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=5 && iParam3 <=10){
return 0;
}}}elseif(iParam2==14){
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=26 && iParam3 <=39){
return 0;
}}}
return 1;
}elseif(func_131(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==3 || iParam1==3) || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
return 0;
}
return 1;
}elseif(iParam2==14){
if(iParam3 >=159 && iParam3 <=174){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==2){
if(iParam2==14 && iParam3==0){
return 1;
}}
if(func_133(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_132(iParam0, iParam2, iParam3, -1)){
if(((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==45) || iParam1==12){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=15){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_131(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_110(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 8:
if(iParam2==15){
return 1;
}
break;
case 9:
if(iParam2==6){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 8:
if(iParam2==1 || iParam2==10){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 8:
if(iParam2==4){
return 1;
}
break;
}
break;
}
return 0;
}

int func_111(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_219(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_219(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_134(iParam0, iParam2);
}}else{
return func_135(iParam0, iParam1);
}}
return -99;
}

int func_112(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
*iParam3=-99;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 8:
if(iParam2==7 || iParam2==23){
*iParam3=1;
}
break;
case 9:
if(iParam2==8 || (iParam2 >=9 && iParam2 <=14)){
*iParam3=1;
}
break;
case 10:
if(iParam2 >=44 && iParam2 <=47){
*iParam3=1;
}
break;
case 14:
if((((((iParam2 >=31 && iParam2 <=32) || (iParam2 >=33 && iParam2 <=34)) || (iParam2 >=35 && iParam2 <=36)) || iParam2==37) || (iParam2 >=40 && iParam2 <=41)) || iParam2==46){
*iParam3=1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 2:
if(iParam2==20){
*iParam3=20;
}
break;
case 8:
if(iParam2==4){
*iParam3=19;
}
break;
case 9:
if(iParam2 >=5 && iParam2 <=10){
*iParam3=19;
}
break;
case 10:
if(iParam2 >=47 && iParam2 <=50){
*iParam3=19;
}
break;
case 14:
if(((((iParam2 >=26 && iParam2 <=27) || (iParam2 >=28 && iParam2 <=29)) || (iParam2 >=30 && iParam2 <=31)) || iParam2==32) || (iParam2 >=35 && iParam2 <=36)){
*iParam3=19;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 8:
if(iParam2==7){
*iParam3=2;
}
break;
case 9:
if((iParam2 >=9 && iParam2 <=14) || (iParam2 >=15 && iParam2 <=16)){
*iParam3=2;
}
break;
case 10:
if(iParam2 >=29 && iParam2 <=32){
*iParam3=2;
}
break;
case 14:
if((((((iParam2 >=47 && iParam2 <=48) || (iParam2 >=49 && iParam2 <=50)) || (iParam2 >=51 && iParam2 <=52)) || iParam2==53) || (iParam2 >=56 && iParam2 <=57)) || iParam2==62){
*iParam3=2;
}
break;
}
break;
}
if(*iParam3 !=-99){
iVar0=func_104(iParam0);
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=iParam2;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=iParam1;
return 1;
}
return 0;
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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
iVar0=-99;
if(iParam4==0){
switch (iParam2){
case 2:
iVar1=func_135(iParam0, 1);
iVar0=func_120(iParam1, iParam3, iVar1);
break;
case 1:
iVar2=func_135(iParam0, 2);
iVar0=func_120(iParam1, iVar2, iParam3);
break;
}}elseif(iParam4==2){
func_112(iParam1, iParam2, iParam3, &iVar0);
}elseif(iParam4==1){
func_119(iParam1, iParam2, iParam3, &iVar0);
}elseif(iParam4==6){
if(iParam2==4){
if(func_118(iParam1, iParam3, &iVar0)){
}}}else{
switch (iParam1){
case joaat("player_zero"):
switch (iParam4){
case 3:
switch (iParam2){
case 10:
switch (iParam3){
case 36:
iVar0=17;
break;
case 37:
iVar0=17;
break;
case 38:
iVar0=18;
break;
case 39:
iVar0=18;
break;
case 40:
iVar0=19;
break;
case 41:
iVar0=19;
break;
case 42:
iVar0=20;
break;
case 43:
iVar0=20;
break;
}
break;
case 11:
if(iParam3 >=2 && iParam3 <=7){
if(!func_117(iParam0, 3, 44, 59)){
iVar0=44;
}}elseif(((iParam3 >=8 && iParam3 <=17) || (iParam3 >=18 && iParam3 <=27)) || (iParam3 >=28 && iParam3 <=43)){
if(!func_117(iParam0, 3, 135, 150)){
iVar0=func_116(iParam1, 3, 135, 150);
}}
break;
}
break;
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 63:
iVar0=4;
break;
case 61:
iVar0=3;
break;
case 16:
iVar0=1;
break;
case 114:
iVar0=15;
break;
case 115:
iVar0=17;
break;
case 116:
iVar0=16;
break;
case 117:
iVar0=18;
break;
case 118:
iVar0=20;
break;
case 119:
iVar0=19;
break;
case 125:
iVar0=21;
break;
case 120:
iVar0=22;
break;
case 124:
iVar0=23;
break;
case 126:
iVar0=24;
break;
case 121:
iVar0=25;
break;
case 127:
iVar0=26;
break;
case 128:
iVar0=27;
break;
case 85:
iVar0=6;
break;
case 77:
iVar0=7;
break;
case 78:
iVar0=8;
break;
case 79:
iVar0=9;
break;
case 80:
iVar0=10;
break;
case 81:
iVar0=11;
break;
case 82:
iVar0=12;
break;
case 83:
iVar0=13;
break;
case 84:
iVar0=14;
break;
case 21:
iVar0=31;
break;
case 22:
iVar0=30;
break;
case 23:
iVar0=29;
break;
case 24:
iVar0=28;
break;
case 25:
iVar0=33;
break;
case 26:
iVar0=35;
break;
case 27:
iVar0=34;
break;
case 28:
iVar0=32;
break;
default:
if(iParam3 >=17 && iParam3 <=20){
}
else{
iVar0=0;
}
break;
}
break;
case 11:
if(iParam3 !=0){
iVar0=0;
}
break;
}
break;
case 11:
if(iParam2==3){
if((iParam3 >=44 && iParam3 <=59) || (iParam3 >=135 && iParam3 <=150)){
}else{
iVar0=0;
}
}
elseif(iParam2==10){
if(iParam3 >=36 && iParam3 <=43){
iVar0=0;
}
}
break;
}
break;
case joaat("player_one"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 17:
iVar0=2;
break;
case 90:
iVar0=1;
break;
case 268:
iVar0=3;
break;
case 269:
iVar0=5;
break;
case 270:
iVar0=4;
break;
case 271:
iVar0=6;
break;
case 272:
iVar0=8;
break;
case 273:
iVar0=7;
break;
case 279:
iVar0=9;
break;
case 274:
iVar0=10;
break;
case 278:
iVar0=11;
break;
case 280:
iVar0=12;
break;
case 275:
iVar0=13;
break;
case 281:
iVar0=14;
break;
case 282:
iVar0=15;
break;
case 107:
iVar0=16;
break;
case 108:
iVar0=17;
break;
case 109:
iVar0=18;
break;
case 110:
iVar0=19;
break;
case 111:
iVar0=20;
break;
case 112:
iVar0=21;
break;
case 113:
iVar0=22;
break;
case 114:
iVar0=23;
break;
case 115:
iVar0=24;
break;
case 116:
iVar0=25;
break;
case 117:
iVar0=52;
break;
case 118:
iVar0=27;
break;
case 119:
iVar0=28;
break;
case 120:
iVar0=29;
break;
case 121:
iVar0=30;
break;
case 122:
iVar0=31;
break;
case 296:
iVar0=32;
break;
case 297:
iVar0=33;
break;
case 298:
iVar0=34;
break;
case 299:
iVar0=35;
break;
case 300:
iVar0=36;
break;
case 301:
iVar0=37;
break;
case 302:
iVar0=38;
break;
case 309:
iVar0=39;
break;
case 310:
iVar0=40;
break;
case 311:
iVar0=41;
break;
case 312:
iVar0=42;
break;
case 313:
iVar0=43;
break;
case 314:
iVar0=44;
break;
case 315:
iVar0=45;
break;
case 316:
iVar0=46;
break;
case 317:
iVar0=51;
break;
default:
iVar0=0;
break;
}
break;
case 11:
if(iParam3 !=0){
iVar0=0;
}
break;
}
break;
case 3:
switch (iParam2){
case 11:
if(iParam3 >=47 && iParam3 <=62){
if(!func_117(iParam0, 3, 209, 222)){
iVar0=func_116(iParam1, 3, 209, 222);
}}elseif((iParam3 >=1 && iParam3 <=4) || (iParam3 >=5 && iParam3 <=8)){
if(!func_117(iParam0, 3, 243, 258)){
if(iParam3==1 || iParam3==5){
iVar0=func_116(iParam1, 3, 243, 246);
}
elseif(iParam3==2 || iParam3==6){
iVar0=func_116(iParam1, 3, 247, 250);
}
elseif(iParam3==3 || iParam3==7){
iVar0=func_116(iParam1, 3, 251, 254);
}
elseif(iParam3==4 || iParam3==8){
iVar0=func_116(iParam1, 3, 255, 258);
}
}}elseif(iParam3==41 || iParam3==42){
if(!func_117(iParam0, 3, 176, 191) && !func_117(iParam0, 3, 227, 242)){
iVar0=func_116(iParam1, 3, 176, 191);
}}
break;
}
break;
case 8:
if(iParam2==11 || iParam2==3){
if(iParam2==11){
iVar5=iParam3;
iVar4=func_135(iParam0, 3);
}elseif(iParam2==3){
iVar4=iParam3;
iVar5=func_135(iParam0, 11);
iVar5=func_115(iParam1, iVar4, iVar5, 0);
}
iVar3=func_135(iParam0, 8);
if(((iVar5 >=5 && iVar5 <=8) || (iVar5 >=25 && iVar5 <=40)) || (iVar5 >=42 && iVar5 <=43)){
if(!func_114(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)){
if(iVar6 !=-99){
iVar0=iVar6;
}}}elseif(((iVar3 >=27 && iVar3 <=42) || (iVar3 >=43 && iVar3 <=58)) || (iVar3 >=59 && iVar3 <=74)){
iVar0=26;
}
}
break;
case 11:
if(iParam2==3){
if(iParam3 >=209 && iParam3 <=222){
}elseif(((iParam3 >=176 && iParam3 <=191) || (iParam3 >=227 && iParam3 <=242)) || (iParam3 >=243 && iParam3 <=258)){
iVar7=func_135(iParam0, 8);
iVar8=func_135(iParam0, 11);
if(((iVar7 >=27 && iVar7 <=42) || (iVar7 >=43 && iVar7 <=58)) || (iVar7 >=59 && iVar7 <=74)){
iVar0=func_115(iParam1, iParam3, iVar8, 0);
}else{
iVar0=func_115(iParam1, iParam3, iVar8, 1);
}}elseif(iParam3 >=41 && iParam3 <=56){
iVar0=45;
}elseif(iParam3 >=223 && iParam3 <=226){
iVar0=44;
}else{
iVar0=0;
}
}
elseif(iParam2==8){
if(((iParam3 >=27 && iParam3 <=42) || (iParam3 >=43 && iParam3 <=58)) || (iParam3 >=59 && iParam3 <=74)){
iVar9=func_135(iParam0, 11);
iVar0=func_115(iParam1, -99, iVar9, 0);
}
}
break;
}
break;
case joaat("player_two"):
switch (iParam4){
case 10:
switch (iParam2){
case 3:
switch (iParam3){
case 50:
iVar0=3;
break;
case 81:
iVar0=5;
break;
case 82:
iVar0=6;
break;
case 83:
iVar0=7;
break;
case 84:
iVar0=10;
break;
case 85:
iVar0=9;
break;
case 86:
iVar0=8;
break;
case 92:
iVar0=22;
break;
case 87:
iVar0=23;
break;
case 91:
iVar0=24;
break;
case 93:
iVar0=25;
break;
case 88:
iVar0=26;
break;
case 94:
iVar0=27;
break;
case 120:
iVar0=11;
break;
case 121:
iVar0=13;
break;
case 122:
iVar0=14;
break;
case 124:
iVar0=12;
break;
case 126:
iVar0=18;
break;
case 128:
iVar0=17;
break;
case 130:
iVar0=19;
break;
case 131:
iVar0=16;
break;
case 134:
iVar0=15;
break;
case 135:
iVar0=20;
break;
default:
iVar0=0;
break;
}
break;
}
break;
}
break;
}}
return iVar0;
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4){
int iVar0;
switch (iParam0){
case joaat("player_zero"):
break;
case joaat("player_one"):
*uParam4=0;
if(iParam1 >=27 && iParam1 <=42){
if(iParam2 !=-99){
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
}else{
if(iParam2 >=42 && iParam2 <=43){
if(iParam3 >=176 && iParam3 <=191){
iVar0=(iParam1 - 27);
*uParam4=(59 + iVar0);
}elseif(iParam3 >=227 && iParam3 <=242){
iVar0=(iParam1 - 27);
*uParam4=(43 + iVar0);
}
}
return 0;
}}
if(iParam3 !=-99){
if(((iParam3 >=227 && iParam3 <=242) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=243 && iParam3 <=258)){
}else{
return 0;
}}}elseif(iParam1 >=43 && iParam1 <=58){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 43);
*uParam4=(27 + iVar0);
}
return 0;
}}
if(iParam3 !=-99){
if(iParam3 >=227 && iParam3 <=242){
}else{
if(iParam3 >=176 && iParam3 <=191){
if(iParam2 >=42 && iParam2 <=43){
iVar0=(iParam1 - 43);
*uParam4=(59 + iVar0);
}
}
return 0;
}}}elseif(iParam1 >=59 && iParam1 <=74){
if(iParam2 !=-99){
if(iParam2 >=42 && iParam2 <=43){
}else{
if((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 59);
*uParam4=(27 + iVar0);
}
return 0;
}}
if(iParam3 !=-99){
if(iParam3 >=176 && iParam3 <=191){
}else{
if(iParam3 >=227 && iParam3 <=242){
if(iParam2 >=42 && iParam2 <=43){
iVar0=(iParam1 - 59);
*uParam4=(43 + iVar0);
}
}
elseif((iParam2 >=5 && iParam2 <=8) || (iParam2 >=25 && iParam2 <=40)){
iVar0=(iParam1 - 59);
*uParam4=(27 + iVar0);
}
return 0;
}}}
break;
case joaat("player_two"):
if(iParam1==12){
if(iParam3 !=241){
return 0;
}}
break;
}
return 1;
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam1 >=243 && iParam1 <=246){
if(iParam3==1){
return 1;
}else{
return 5;
}}elseif(iParam1 >=247 && iParam1 <=250){
if(iParam3==1){
return 2;
}else{
return 6;
}}elseif(iParam1 >=251 && iParam1 <=254){
if(iParam3==1){
return 3;
}else{
return 7;
}}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1){
return 4;
}else{
return 8;
}}elseif(iParam1 >=255 && iParam1 <=258){
if(iParam3==1){
return 4;
}else{
return 8;
}}elseif((iParam1 >=176 && iParam1 <=191) || (iParam1 >=227 && iParam1 <=242)){
if(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 9);
iParam2=(25 + iVar0);
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
iVar0=(iParam2 - 25);
iParam2=(9 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1){
return 41;
}else{
return 42;
}}else{
if(iParam3==1){
iParam2=func_116(iParam0, 11, 9, 24);
}else{
iParam2=func_116(iParam0, 11, 25, 40);
}
if(iParam2==-99){
if(iParam3==1){
return 41;
}else{
return 42;
}}else{
return iParam2;
}}}elseif(iParam2 >=1 && iParam2 <=4){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 1);
iParam2=(5 + iVar0);
return iParam2;
}}elseif(iParam2 >=5 && iParam2 <=8){
if(iParam3==1){
iVar0=(iParam2 - 5);
iParam2=(1 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2 >=9 && iParam2 <=24){
if(iParam3==1){
return iParam2;
}else{
iVar0=(iParam2 - 9);
iParam2=(25 + iVar0);
return iParam2;
}}elseif(iParam2 >=25 && iParam2 <=40){
if(iParam3==1){
iVar0=(iParam2 - 25);
iParam2=(9 + iVar0);
return iParam2;
}else{
return iParam2;
}}elseif(iParam2==41 || iParam2==42){
if(iParam3==1){
return 41;
}else{
return 42;
}}
return -99;
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=iParam2;
while (iVar0 <=(iParam3 - 1)){
iVar1=iVar0;
if(func_108(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar0++;
}
return -99;
}

int func_117(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_135(iParam0, iParam1);
if(iVar0 >=iParam2 && iVar0 <=iParam3){
return 1;
}
return 0;
}

int func_118(int iParam0, int iParam1, int iParam2){
*iParam2=-99;
switch (iParam0){
case joaat("player_zero"):
if((((((((((((((((((iParam1==16 || iParam1==17) || iParam1==21) || iParam1==22) || iParam1==32) || (iParam1 >=34 && iParam1 <=39)) || (iParam1 >=41 && iParam1 <=45)) || iParam1==46) || (iParam1 >=47 && iParam1 <=54)) || (iParam1 >=55 && iParam1 <=70)) || (iParam1 >=72 && iParam1 <=79)) || iParam1==80) || (iParam1 >=81 && iParam1 <=83)) || (iParam1 >=84 && iParam1 <=87)) || iParam1==88) || (iParam1 >=89 && iParam1 <=91)) || iParam1==95) || (iParam1 >=96 && iParam1 <=111)) || iParam1==112){
*iParam2=6;
return 1;
}
break;
case joaat("player_one"):
if((((((iParam1==12 || (iParam1 >=14 && iParam1 <=21)) || iParam1==32) || iParam1==52) || (iParam1 >=69 && iParam1 <=70)) || iParam1==71) || (iParam1 >=72 && iParam1 <=77)){
*iParam2=17;
return 1;
}
break;
case joaat("player_two"):
if(((((((((((((((iParam1==4 || iParam1==5) || iParam1==6) || iParam1==7) || iParam1==14) || (iParam1 >=18 && iParam1 <=29)) || iParam1==31) || iParam1==32) || iParam1==33) || iParam1==34) || (iParam1 >=35 && iParam1 <=42)) || (iParam1 >=43 && iParam1 <=53)) || (iParam1 >=54 && iParam1 <=61)) || (iParam1 >=71 && iParam1 <=80)) || (iParam1 >=81 && iParam1 <=90)) || (iParam1 >=94 && iParam1 <=103)){
*iParam2=8;
return 1;
}
break;
}
return 0;
}

int func_119(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
*iParam3=-99;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 10:
if(iParam2 >=44 && iParam2 <=47){
*iParam3=0;
}
break;
case 14:
if(((((((iParam2 >=31 && iParam2 <=32) || (iParam2 >=33 && iParam2 <=34)) || (iParam2 >=35 && iParam2 <=36)) || iParam2==37) || (iParam2 >=38 && iParam2 <=39)) || (iParam2 >=40 && iParam2 <=41)) || (iParam2 >=42 && iParam2 <=44)){
*iParam3=0;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 10:
if(iParam2 >=47 && iParam2 <=50){
*iParam3=0;
}
break;
case 14:
if(((((iParam2 >=26 && iParam2 <=27) || (iParam2 >=28 && iParam2 <=29)) || (iParam2 >=30 && iParam2 <=31)) || iParam2==32) || (iParam2 >=35 && iParam2 <=36)){
*iParam3=0;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 9:
if(iParam2 >=15 && iParam2 <=16){
*iParam3=0;
}
break;
case 10:
if(iParam2 >=29 && iParam2 <=32){
*iParam3=0;
}
break;
case 14:
if(((((((iParam2 >=47 && iParam2 <=48) || (iParam2 >=49 && iParam2 <=50)) || (iParam2 >=51 && iParam2 <=52)) || iParam2==53) || (iParam2 >=54 && iParam2 <=55)) || (iParam2 >=56 && iParam2 <=57)) || (iParam2 >=58 && iParam2 <=60)){
*iParam3=0;
}
break;
}
break;
}
if(*iParam3 !=-99){
iVar0=func_104(iParam0);
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=iParam2;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=iParam1;
return 1;
}
return 0;
}

int func_120(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("player_zero"):
if(iParam1==1){
if(iParam2==0){
return 1;
}elseif(iParam2==4){
return 5;
}else{
return 3;
}}elseif(iParam2==0){
return 0;
}elseif(iParam2==4){
return 4;
}else{
return 2;
}
break;
case joaat("player_one"):
if(iParam1 >=0 && iParam1 <=15){
if(iParam2==0){
return 0;
}else{
return 3;
}}elseif(iParam1 >=16 && iParam1 <=17){
if(iParam2==0){
return 2;
}else{
return 5;
}}elseif(iParam1==18){
if(iParam2==0){
return 6;
}else{
return 7;
}}elseif(iParam1==19){
if(iParam2==0){
return 1;
}else{
return 4;
}}elseif(iParam2==0){
return 1;
}else{
return 4;
}
break;
case joaat("player_two"):
if(iParam1==2){
if(iParam2==0){
return 2;
}else{
return 3;
}}elseif(iParam1==3){
if(iParam2==0){
return 4;
}else{
return 6;
}}elseif(iParam1==8){
return 5;
}elseif(iParam2==0){
return 0;
}else{
return 1;
}
break;
}
return -99;
}


void func_121(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam2==-1){
PED::CLEAR_PED_PROP(iParam0, iParam1, 1);
if(iParam1==0){
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 0);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 0);
}}else{
PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
if(iParam1==0){
iVar0=func_126(iParam0, iParam2, iParam3, iParam1);
if(func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3))){
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 1);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 1);
}else{
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 0);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 0);
}}}}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 14, 3);
}
if((iParam2 >=131 && iParam2 <=154) || (iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("helmet"), 1))){
return 1;
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 14, 4);
}
if((iParam2 >=131 && iParam2 <=154) || (iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("helmet"), 1))){
return 1;
}
break;
}
break;
}
return 0;
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_125(iParam0));
if(iVar1 < 0){
return -1;
}
iVar2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
if(iVar2 <=iVar1){
return -1;
}
FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
return Var0.f_1;
}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var3);
iVar4=(iParam1 - func_124(iParam0, func_146(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_146(iParam2));
if(iVar5 <=iVar4){
return -1;
}
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
Global_78491.f_13[iParam2]=Var3.f_1;
Global_78491[iParam2]=iParam1;
Global_78491.f_26[iParam2]=iParam0;
return Var3.f_1;
}
return -1;
}

int func_124(int iParam0, int iParam1){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 5;
break;
case 2:
return 6;
break;
case 3:
return 181;
break;
case 4:
return 113;
break;
case 5:
return 14;
break;
case 6:
return 99;
break;
case 7:
return 1;
break;
case 8:
return 24;
break;
case 9:
return 20;
break;
case 10:
return 48;
break;
case 11:
return 45;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 5;
break;
case 2:
return 21;
break;
case 3:
return 318;
break;
case 4:
return 117;
break;
case 5:
return 7;
break;
case 6:
return 134;
break;
case 7:
return 1;
break;
case 8:
return 77;
break;
case 9:
return 12;
break;
case 10:
return 53;
break;
case 11:
return 63;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 6;
break;
case 2:
return 9;
break;
case 3:
return 242;
break;
case 4:
return 104;
break;
case 5:
return 7;
break;
case 6:
return 84;
break;
case 7:
return 1;
break;
case 8:
return 18;
break;
case 9:
return 17;
break;
case 10:
return 33;
break;
case 11:
return 1;
break;
}
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 91;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 92;
break;
case 8:
return 241;
break;
case 9:
return 46;
break;
case 10:
return 7;
break;
case 11:
return 237;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 92;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 55;
break;
case 8:
return 136;
break;
case 9:
return 36;
break;
case 10:
return 6;
break;
case 11:
return 256;
break;
}
break;
}
return -99;
}

int func_125(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 113;
break;
case joaat("player_one"):
return 175;
break;
case joaat("player_two"):
return 155;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 327;
break;
case joaat("mp_f_freemode_01"):
return 327;
break;
}
return -99;
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_130(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_128(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_128(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
}}
iVar2=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
iVar4=0;
while (iVar4 <=(iVar2 - 1)){
iVar6=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
if(iVar4 !=iParam1){
iVar3=(iVar3 + iVar6);
}else{
iVar5=0;
while (iVar5 <=(iVar6 - 1)){
if(iVar4==iParam1 && iVar5==iParam2){
iVar3=(iVar3 + func_127(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_130(iParam3);
}

int func_127(int iParam0, int iParam1){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
switch (iVar0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 58;
break;
case 2:
return 112;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 82;
break;
case 2:
return 158;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 88;
break;
case 2:
return 154;
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
}
return -99;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==12){
iVar2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, 0);
iVar1=0;
while (iVar1 < iVar2){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar1, &Var0);
if(Var0.f_1==iParam1){
return (func_129(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_125(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_146(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_124(iParam0, func_146(iParam2)) + iVar4);
}}
return -99;
}

int func_129(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 53;
break;
case joaat("player_one"):
return 47;
break;
case joaat("player_two"):
return 48;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 26;
break;
case joaat("mp_f_freemode_01"):
return 28;
break;
}
return -99;
}

int func_130(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
}
return 0;
}

int func_131(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 14:
if(iParam2==16){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 14:
if((iParam2==40 || (iParam2 >=41 && iParam2 <=56)) || (iParam2 >=64 && iParam2 <=79)){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 14:
if((iParam2 >=17 && iParam2 <=18) || (iParam2 >=71 && iParam2 <=86)){
return 1;
}
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_123(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_123(iParam0, iParam2, 1, 3), -1842686353, 0));
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_123(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_123(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_132(int iParam0, int iParam1, int iParam2, int iParam3){
if(iParam0==joaat("player_zero")){
if(iParam1==6){
if(iParam2==10){
return 1;
}}elseif(iParam1==8){
if((iParam2==9 || iParam2==7) || iParam2==23){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=9 && iParam2 <=14){
return 1;
}}elseif(iParam1==14){
if((((((((((((((((iParam2==12 || iParam2==59) || iParam2==60) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || iParam2==37) || iParam2==38) || iParam2==39) || iParam2==40) || iParam2==41) || (iParam2 >=42 && iParam2 <=44)) || iParam2==54) || iParam2==55){
return 1;
}}}elseif(iParam0==joaat("player_one")){
if(iParam1==2){
if(iParam2==20){
return 1;
}}elseif(iParam1==8){
if((iParam2==3 || iParam2==5) || iParam2==9){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=5 && iParam2 <=10){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==82 || iParam2==10) || iParam2==26) || iParam2==27) || iParam2==28) || iParam2==29) || iParam2==30) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || (iParam2 >=37 && iParam2 <=39)){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==8){
if(iParam2==14 || iParam2==7){
return 1;
}}elseif(iParam1==9){
if(((iParam2==8 || (iParam2 >=9 && iParam2 <=14)) || iParam2==15) || iParam2==16){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==88 || iParam2==12) || iParam2==47) || iParam2==48) || iParam2==49) || iParam2==50) || iParam2==51) || iParam2==52) || iParam2==53) || iParam2==54) || iParam2==55) || iParam2==56) || iParam2==57) || (iParam2 >=58 && iParam2 <=60)){
return 1;
}}}elseif(iParam0==joaat("mp_m_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 1, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
if(iParam1==14){
if((((((((iParam2==58 || iParam2==61) || (iParam2 >=62 && iParam2 <=69)) || (iParam2 >=70 && iParam2 <=79)) || (iParam2 >=80 && iParam2 <=89)) || iParam2==90) || (iParam2 >=91 && iParam2 <=102)) || (iParam2 >=103 && iParam2 <=110)) || iParam2==111){
return 1;
}}
break;
case joaat("player_one"):
if(iParam1==14){
if(((((((((((iParam2 >=83 && iParam2 <=92) || iParam2==93) || iParam2==94) || (iParam2 >=95 && iParam2 <=101)) || (iParam2 >=102 && iParam2 <=111)) || (iParam2 >=112 && iParam2 <=121)) || (iParam2 >=122 && iParam2 <=131)) || (iParam2 >=132 && iParam2 <=139)) || (iParam2 >=140 && iParam2 <=149)) || (iParam2 >=150 && iParam2 <=156)) || iParam2==157){
return 1;
}}
break;
case joaat("player_two"):
if(iParam1==14){
if(((((((((iParam2==89 || (iParam2 >=90 && iParam2 <=99)) || (iParam2 >=100 && iParam2 <=109)) || iParam2==111) || iParam2==112) || (iParam2 >=113 && iParam2 <=122)) || (iParam2 >=123 && iParam2 <=132)) || (iParam2 >=133 && iParam2 <=142)) || (iParam2 >=143 && iParam2 <=152)) || iParam2==153){
return 1;
}}
break;
case joaat("mp_m_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 14, 3);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
case joaat("mp_f_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_123(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_134(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
if(iVar0==-1){
return func_130(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_126(iParam0, iVar0, iVar1, iParam1);
}

int func_135(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_146(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_136(iParam0, iVar1, iVar2, iParam1);
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_146(iParam3);
iVar1=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
iVar3=0;
while (iVar3 <=(iVar1 - 1)){
if(iVar3 !=iParam1){
iVar2=(iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
}else{
iVar2=(iVar2 + iParam2);
return iVar2;
}
iVar3++;
}
return -99;
}


void func_137(int iParam0){
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
func_143(iParam0, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 1, 0);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(iParam0==12){
func_138(Global_2883588, 2, 1, 1, -1);
}elseif(iParam0==13){
}elseif(iParam0==14){
func_138(Global_2883588, 2, 1, 1, -1);
}else{
func_138(Global_2883588, 2, 1, 1, -1);
}}}


void func_138(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
bool bVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_142(iParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3)){
uVar3=func_141(iVar2, iVar0, 0);
MISC::SET_BIT(&uVar3, bVar1);
func_139(iVar2, uVar3, iVar0, 1, 0);
}}


void func_139(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_140(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
}}

int func_140(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_40();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_141(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
iVar0=Global_2805029[iParam0 /*3*/][func_140(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


bool func_142(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
*uParam2=14192;
if((bParam4 && Global_4539485) || (!bParam4 && bParam5)){
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_0"):
case joaat("dlc_mp_biker_m_special_2_0"):
case joaat("dlc_mp_biker_m_special_4_0"):
*uParam2=936;
*uParam3=0;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_1"):
case joaat("dlc_mp_biker_m_special_2_1"):
case joaat("dlc_mp_biker_m_special_4_1"):
*uParam2=936;
*uParam3=1;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_2"):
case joaat("dlc_mp_biker_m_special_2_2"):
case joaat("dlc_mp_biker_m_special_4_2"):
*uParam2=936;
*uParam3=2;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_3"):
case joaat("dlc_mp_biker_m_special_2_3"):
case joaat("dlc_mp_biker_m_special_4_3"):
*uParam2=936;
*uParam3=3;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_4"):
case joaat("dlc_mp_biker_m_special_2_4"):
case joaat("dlc_mp_biker_m_special_4_4"):
*uParam2=936;
*uParam3=4;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_5"):
case joaat("dlc_mp_biker_m_special_2_5"):
case joaat("dlc_mp_biker_m_special_4_5"):
*uParam2=936;
*uParam3=5;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_7"):
case joaat("dlc_mp_biker_m_special_2_7"):
case joaat("dlc_mp_biker_m_special_4_7"):
*uParam2=936;
*uParam3=7;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_8"):
case joaat("dlc_mp_biker_m_special_2_8"):
case joaat("dlc_mp_biker_m_special_4_8"):
*uParam2=936;
*uParam3=8;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_11"):
case joaat("dlc_mp_biker_m_special_2_11"):
case joaat("dlc_mp_biker_m_special_4_11"):
*uParam2=936;
*uParam3=11;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}
iVar0=-1;
if(bParam4){
if(Global_4539485){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}}elseif(bParam5){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}
if(iVar0==-1){
return 0;
}
switch (iParam1){
case 1:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case 79:
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
}
break;
case 2:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case 79:
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
}
break;
}
*uParam3=(iVar0 % 32);
return *uParam2 !=14192;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], bParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], bParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], bParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], bParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], bParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], bParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], bParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], bParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], bParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], bParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], bParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], bParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], bParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], bParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], bParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], bParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], bParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], bParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], bParam4);
}}
return 0;
}

int func_144(int iParam0){
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam0==1){
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2)){
return 0;
}}
return 1;
}

int func_145(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_104(iParam1);
if(iVar0 >=3 || iVar0 < 0){
return 0;
}
if(Global_113648.f_2365.f_539[iVar0 /*65*/].f_60 !=-99){
if(!func_219(iParam0, Global_113648.f_2365.f_539[iVar0 /*65*/].f_61, Global_113648.f_2365.f_539[iVar0 /*65*/].f_60) || iParam3==1){
*iParam2=Global_113648.f_2365.f_539[iVar0 /*65*/].f_59;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=-99;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=2;
return 1;
}}
return 0;
}

int func_146(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


struct<10> func_147(int iParam0, int iParam1){
int iVar0;
struct<10> Var1;
Var1=9;
iVar0=0;
while (iVar0 <=8){
Var1[iVar0]=-99;
iVar0++;
}
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 31:
func_149(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_149(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_149(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_149(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_149(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_149(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_149(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_149(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_149(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_149(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_149(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_148(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_149(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_149(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_149(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_149(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_149(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_149(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_149(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_149(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_149(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_149(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_148(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_149(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_149(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_149(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_149(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_149(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_149(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_149(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_149(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_149(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_149(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_148(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_149(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_149(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_149(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_149(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_149(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_149(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_149(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_149(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_149(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_149(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_149(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_149(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_149(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_149(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_149(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_149(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_149(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_149(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_149(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_149(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_149(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_149(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_149(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_149(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_149(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_149(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_148(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_149(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_149(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_149(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_149(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_149(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_149(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_149(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_149(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_149(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_149(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_149(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_149(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_149(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_149(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_149(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_149(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_149(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_149(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_149(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_149(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_149(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_149(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_149(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_149(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_149(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_148(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_148(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<4> Var1;
struct<3> Var2;
int iVar3;
if(iParam2 !=0 && iParam2 !=-99){
(*iParam0)[0]=0;
(*iParam0)[1]=1;
(*iParam0)[2]=2;
(*iParam0)[3]=3;
(*iParam0)[4]=4;
(*iParam0)[5]=5;
(*iParam0)[6]=6;
(*iParam0)[7]=7;
(*iParam0)[8]=8;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
}elseif(iParam1==joaat("player_one")){
iVar0=1;
}elseif(iParam1==joaat("player_two")){
iVar0=2;
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar3=0;
while (iVar3 < Var1.f_3){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 !=-1){
if((Var2.f_0 !=0 && Var2.f_0 !=-1) && Var2.f_0 !=joaat("0")){
(*iParam0)[Var2.f_2]=func_128(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}


void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
(*iParam0)[0]=iParam1;
(*iParam0)[1]=iParam2;
(*iParam0)[2]=iParam3;
(*iParam0)[3]=iParam4;
(*iParam0)[4]=iParam5;
(*iParam0)[5]=iParam6;
(*iParam0)[6]=iParam7;
(*iParam0)[7]=iParam8;
(*iParam0)[8]=iParam9;
}
struct<17> func_150(int iParam0, int iParam1){
int iVar0;
struct<17> Var1;
Var1=15;
iVar0=0;
while (iVar0 <=14){
Var1[iVar0]=-99;
iVar0++;
}
Var1.f_16=0;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
if(Global_113648.f_9087.f_99.f_58[120]){
func_153(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_153(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_153(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_153(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_153(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_153(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_153(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_153(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_153(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_153(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_153(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_153(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_153(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_153(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_153(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_153(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_153(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_153(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_153(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_153(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_153(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_153(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_153(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_153(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_153(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_153(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_153(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_153(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_153(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_153(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_153(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_153(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_153(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_153(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_153(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_153(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_153(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_153(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_153(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_153(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_153(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_153(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_153(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_153(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_153(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_153(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_153(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_153(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_153(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_153(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_153(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_153(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_153(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_153(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_151(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_153(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_153(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_153(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_153(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_153(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_153(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_153(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_153(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_153(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_153(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_153(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_153(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_153(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_153(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_153(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_153(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_153(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_153(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_153(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_153(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_153(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_153(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_153(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_153(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_153(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_153(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_153(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_153(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_153(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_153(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_153(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_153(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_153(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_153(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_153(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_153(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_153(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_153(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_153(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_153(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_153(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_153(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_153(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_153(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_153(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_153(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_153(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_151(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_153(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_153(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_153(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_153(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_153(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_153(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_153(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_153(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_153(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_153(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_153(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_153(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_153(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_153(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_153(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_153(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_153(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_153(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_153(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_153(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_153(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_153(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_153(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_153(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_153(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_153(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_153(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_153(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_153(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_153(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_153(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_153(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_153(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_153(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_153(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_153(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_153(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_153(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_153(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_153(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_153(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_153(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_153(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_153(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_153(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_153(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_153(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_153(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_151(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_153(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_153(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_153(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_153(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_153(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_153(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_153(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_153(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_153(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_153(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_153(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_153(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_153(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_153(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_153(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_153(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_153(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_153(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_153(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_153(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_153(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_153(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_153(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_153(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_153(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_153(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_151(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_153(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_153(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_153(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_153(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_153(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_153(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_153(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_153(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_153(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_153(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_153(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_153(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_153(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_153(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_153(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_153(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_153(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_153(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_153(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_153(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_153(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_153(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_153(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_153(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_153(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_153(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_153(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_153(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_151(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_151(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<5> Var1;
struct<3> Var2;
struct<2> Var3;
int iVar4;
(*uParam0)[0]=0;
(*uParam0)[2]=-99;
(*uParam0)[3]=0;
(*uParam0)[4]=0;
(*uParam0)[6]=0;
(*uParam0)[5]=0;
(*uParam0)[8]=0;
(*uParam0)[9]=0;
(*uParam0)[10]=0;
(*uParam0)[1]=0;
(*uParam0)[7]=0;
(*uParam0)[11]=0;
(*uParam0)[13]=-99;
(*uParam0)[14]=-99;
uParam0->f_16=0;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
(*uParam0)[13]=(10 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_one")){
iVar0=1;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_two")){
iVar0=2;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, 0);
FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar4=0;
while (iVar4 < Var1.f_4){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar4, &Var2)){
if((Var2.f_0 !=0 && Var2.f_0 !=-1) && Var2.f_0 !=joaat("0")){
if(Var2.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&Var3);
FILES::GET_SHOP_PED_COMPONENT(Var2.f_0, &Var3);
if(Var2.f_0 !=Var3.f_1){
uParam0->f_16=1;
}}
if(Var2.f_2==10 && uParam0->f_16){
(*uParam0)[func_152(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_152(Var2.f_2)]=func_128(iParam1, Var2.f_0, func_152(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_152(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_152(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


void func_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
(*uParam0)[0]=iParam1;
(*uParam0)[2]=iParam2;
(*uParam0)[3]=iParam3;
(*uParam0)[4]=iParam4;
(*uParam0)[6]=iParam5;
(*uParam0)[5]=iParam6;
(*uParam0)[8]=iParam7;
(*uParam0)[9]=iParam8;
(*uParam0)[10]=iParam9;
(*uParam0)[1]=iParam10;
(*uParam0)[7]=iParam11;
(*uParam0)[11]=iParam12;
(*uParam0)[13]=iParam13;
(*uParam0)[14]=-99;
}
struct<14> func_154(int iParam0, int iParam1, int iParam2, int iParam3){
func_218();
if(iParam0==joaat("player_zero")){
func_200(iParam1, iParam2);
}elseif(iParam0==joaat("player_one")){
func_181(iParam1, iParam2);
}elseif(iParam0==joaat("player_two")){
func_155(iParam1, iParam2);
}
return Global_78341[0 /*14*/];
}


void func_155(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_180(iParam1);
break;
case 2:
func_179(iParam1);
break;
case 3:
func_176(iParam1);
break;
case 4:
func_175(iParam1);
break;
case 6:
func_174(iParam1);
break;
case 5:
func_173(iParam1);
break;
case 8:
func_172(iParam1);
break;
case 9:
func_171(iParam1);
break;
case 10:
func_170(iParam1);
break;
case 1:
func_169(iParam1);
break;
case 7:
func_168(iParam1);
break;
case 11:
func_167(iParam1);
break;
case 12:
func_166(iParam1);
break;
case 13:
func_165(iParam1);
break;
case 14:
func_156(iParam1);
break;
}}


void func_156(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 154:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
case 88:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P2_E1", 16);
iVar3=1;
iVar4=0;
iVar1=45;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P2_E2", 16);
iVar3=2;
iVar4=0;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P2_E2_1", 16);
iVar3=2;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P2_E2_2", 16);
iVar3=2;
iVar4=2;
iVar1=55;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P2_E2_3", 16);
iVar3=2;
iVar4=3;
iVar1=52;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P2_E2_4", 16);
iVar3=2;
iVar4=4;
iVar1=54;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P2_E2_5", 16);
iVar3=2;
iVar4=5;
iVar1=54;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P2_E2_6", 16);
iVar3=2;
iVar4=6;
iVar1=55;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P2_E2_7", 16);
iVar3=2;
iVar4=7;
iVar1=55;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P2_E2_8", 16);
iVar3=2;
iVar4=8;
iVar1=58;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P2_E2_9", 16);
iVar3=2;
iVar4=9;
iVar1=58;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P2_E3", 16);
iVar3=3;
iVar4=0;
iVar1=75;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P2_E3_1", 16);
iVar3=3;
iVar4=1;
iVar1=75;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P2_E3_2", 16);
iVar3=3;
iVar4=2;
iVar1=75;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P2_E3_3", 16);
iVar3=3;
iVar4=3;
iVar1=75;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P2_E3_4", 16);
iVar3=3;
iVar4=4;
iVar1=75;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P2_E3_5", 16);
iVar3=3;
iVar4=5;
iVar1=75;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P2_E3_6", 16);
iVar3=3;
iVar4=6;
iVar1=75;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P2_E3_7", 16);
iVar3=3;
iVar4=7;
iVar1=75;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P2_E3_8", 16);
iVar3=3;
iVar4=8;
iVar1=75;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P2_E3_9", 16);
iVar3=3;
iVar4=9;
iVar1=75;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
iVar5=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P2_E7_0", 16);
iVar3=7;
iVar4=0;
iVar1=60;
iVar5=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P2_E7_1", 16);
iVar3=7;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P2_E7_2", 16);
iVar3=7;
iVar4=2;
iVar1=50;
iVar5=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P2_E7_3", 16);
iVar3=7;
iVar4=3;
iVar1=59;
iVar5=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P2_E7_4", 16);
iVar3=7;
iVar4=4;
iVar1=55;
iVar5=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P2_E7_5", 16);
iVar3=7;
iVar4=5;
iVar1=55;
iVar5=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P2_E7_6", 16);
iVar3=7;
iVar4=6;
iVar1=65;
iVar5=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P2_E7_7", 16);
iVar3=7;
iVar4=7;
iVar1=59;
iVar5=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P2_E7_8", 16);
iVar3=7;
iVar4=8;
iVar1=79;
iVar5=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P2_E7_9", 16);
iVar3=7;
iVar4=9;
iVar1=79;
iVar5=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P2_E8_0", 16);
iVar3=8;
iVar4=0;
iVar1=150;
iVar5=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P2_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=150;
iVar5=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P2_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=170;
iVar5=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P2_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=175;
iVar5=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P2_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=180;
iVar5=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P2_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=185;
iVar5=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P2_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=189;
iVar5=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P2_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=195;
iVar5=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P2_E8_8", 16);
iVar3=8;
iVar4=8;
iVar1=210;
iVar5=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P2_E8_9", 16);
iVar3=8;
iVar4=9;
iVar1=215;
iVar5=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P2_E9_0", 16);
iVar3=9;
iVar4=0;
iVar1=165;
iVar5=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P2_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=165;
iVar5=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P2_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=169;
iVar5=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P2_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=169;
iVar5=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P2_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=175;
iVar5=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P2_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=175;
iVar5=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P2_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=175;
iVar5=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P2_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=189;
iVar5=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P2_E9_8", 16);
iVar3=9;
iVar4=8;
iVar1=195;
iVar5=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P2_E9_9", 16);
iVar3=9;
iVar4=9;
iVar1=195;
iVar5=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P2_E10_0", 16);
iVar3=10;
iVar4=0;
iVar1=49;
iVar5=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P2_E10_1", 16);
iVar3=10;
iVar4=1;
iVar1=50;
iVar5=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P2_E10_2", 16);
iVar3=10;
iVar4=2;
iVar1=52;
iVar5=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P2_E10_3", 16);
iVar3=10;
iVar4=3;
iVar1=55;
iVar5=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P2_E10_4", 16);
iVar3=10;
iVar4=4;
iVar1=60;
iVar5=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P2_E10_5", 16);
iVar3=10;
iVar4=5;
iVar1=58;
iVar5=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P2_E10_6", 16);
iVar3=10;
iVar4=6;
iVar1=60;
iVar5=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P2_E10_7", 16);
iVar3=10;
iVar4=7;
iVar1=63;
iVar5=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P2_E10_8", 16);
iVar3=10;
iVar4=8;
iVar1=65;
iVar5=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P2_E10_9", 16);
iVar3=10;
iVar4=9;
iVar1=68;
iVar5=10;
break;
case 153:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P2_H2_0", 16);
iVar3=2;
iVar4=0;
iVar1=320;
iVar5=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "PROPS_P2_H7_0", 16);
iVar3=7;
iVar4=0;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "PROPS_P2_H7_1", 16);
iVar3=7;
iVar4=1;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=4;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=5;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=6;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=7;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=8;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=9;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=10;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=11;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=12;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=13;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=14;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=15;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=6;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=7;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=14;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=14;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=15;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=16;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=16;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=17;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=18;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=18;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=19;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=19;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=20;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 59:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=20;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 60:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=20;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
iVar5=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
iVar5=0;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=1;
iVar5=0;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=2;
iVar5=0;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=3;
iVar5=0;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=4;
iVar5=0;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=5;
iVar5=0;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
iVar5=0;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
iVar5=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H26_0", 16);
iVar3=26;
iVar4=0;
iVar1=20;
iVar5=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H26_1", 16);
iVar3=26;
iVar4=1;
iVar1=25;
iVar5=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H26_2", 16);
iVar3=26;
iVar4=2;
iVar1=25;
iVar5=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H26_3", 16);
iVar3=26;
iVar4=3;
iVar1=22;
iVar5=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H26_4", 16);
iVar3=26;
iVar4=4;
iVar1=20;
iVar5=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H26_5", 16);
iVar3=26;
iVar4=5;
iVar1=25;
iVar5=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H26_6", 16);
iVar3=26;
iVar4=6;
iVar1=28;
iVar5=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H26_7", 16);
iVar3=26;
iVar4=7;
iVar1=24;
iVar5=0;
break;
case 79:
StringCopy(&Var2, "PROPS_P1_H26_8", 16);
iVar3=26;
iVar4=8;
iVar1=25;
iVar5=0;
break;
case 80:
StringCopy(&Var2, "PROPS_P1_H26_9", 16);
iVar3=26;
iVar4=9;
iVar1=22;
iVar5=0;
break;
case 81:
StringCopy(&Var2, "PROPS_P1_H26_10", 16);
iVar3=26;
iVar4=10;
iVar1=18;
iVar5=0;
break;
case 82:
StringCopy(&Var2, "PROPS_P1_H26_11", 16);
iVar3=26;
iVar4=11;
iVar1=20;
iVar5=0;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_H26_12", 16);
iVar3=26;
iVar4=12;
iVar1=24;
iVar5=0;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_H26_13", 16);
iVar3=26;
iVar4=13;
iVar1=22;
iVar5=0;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_H26_14", 16);
iVar3=26;
iVar4=14;
iVar1=25;
iVar5=0;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_H26_15", 16);
iVar3=26;
iVar4=15;
iVar1=25;
iVar5=0;
break;
case 87:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
iVar5=0;
break;
default:
func_164(iVar7, iParam0, 155, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_157(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
var uVar0;
int iVar1;
uParam0->f_6=0;
*uParam0=iParam9;
uParam0->f_1=(iParam2 % 32);
uParam0->f_2=(iParam2 / 32);
uParam0->f_3=iParam4;
uParam0->f_4=iParam5;
uParam0->f_7=iParam6;
StringCopy(&(uParam0->f_8), sParam3, 16);
uParam0->f_13=iParam8;
uParam0->f_12=func_163(iParam8);
if((uParam0->f_2 >=10 && uParam0->f_5 >=0) && uParam0->f_5 < 3){
if(!bParam10){
}
uParam0->f_2=0;
}
if(MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL")){}
if(bParam7){
MISC::SET_BIT(&(uParam0->f_6), 3);
}
if(bParam10){
MISC::SET_BIT(&(uParam0->f_6), false);
if(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 5);
}
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
MISC::SET_BIT(&(uParam0->f_6), 6);
if(func_162(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_161(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_161(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_161(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_161(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_161(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_161(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_143(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_143(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_143(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_162(14)){
return;
}
uVar0=func_141(func_160(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_141(func_159(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_158(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_141(iVar1, Global_78338, 0);
if(!MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}}else{
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}}


bool func_158(int iParam0, int iParam1, var uParam2){
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}

int func_159(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 928;
break;
case 3:
return 1415;
break;
case 4:
return 944;
break;
case 6:
return 952;
break;
case 8:
return 1416;
break;
case 9:
return 1424;
break;
case 10:
return 1426;
break;
case 1:
return 960;
break;
case 7:
return 1427;
break;
case 11:
return 936;
break;
case 14:
return 968;
break;
case 12:
return 979;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 929;
break;
case 4:
return 945;
break;
case 6:
return 953;
break;
case 8:
return 1417;
break;
case 9:
return 1425;
break;
case 7:
return 1428;
break;
case 11:
return 937;
break;
case 14:
return 969;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 930;
break;
case 4:
return 946;
break;
case 6:
return 954;
break;
case 8:
return 1418;
break;
case 7:
return 1429;
break;
case 11:
return 938;
break;
case 14:
return 970;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 947;
break;
case 6:
return 955;
break;
case 8:
return 1419;
break;
case 11:
return 939;
break;
case 14:
return 971;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 948;
break;
case 6:
return 956;
break;
case 8:
return 1420;
break;
case 11:
return 940;
break;
case 14:
return 972;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 949;
break;
case 6:
return 957;
break;
case 8:
return 1421;
break;
case 11:
return 941;
break;
case 14:
return 973;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 950;
break;
case 6:
return 958;
break;
case 8:
return 1422;
break;
case 11:
return 942;
break;
case 14:
return 974;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 951;
break;
case 6:
return 959;
break;
case 8:
return 1423;
break;
case 11:
return 943;
break;
case 14:
return 975;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 976;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 977;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 978;
break;
}
break;
}
return 936;
}

int func_160(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 876;
break;
case 3:
return 1400;
break;
case 4:
return 892;
break;
case 6:
return 900;
break;
case 8:
return 1401;
break;
case 9:
return 1409;
break;
case 10:
return 1411;
break;
case 1:
return 908;
break;
case 7:
return 1412;
break;
case 11:
return 884;
break;
case 14:
return 916;
break;
case 12:
return 927;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 877;
break;
case 4:
return 893;
break;
case 6:
return 901;
break;
case 8:
return 1402;
break;
case 9:
return 1410;
break;
case 7:
return 1413;
break;
case 11:
return 885;
break;
case 14:
return 917;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 878;
break;
case 4:
return 894;
break;
case 6:
return 902;
break;
case 8:
return 1403;
break;
case 7:
return 1414;
break;
case 11:
return 886;
break;
case 14:
return 918;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 895;
break;
case 6:
return 903;
break;
case 8:
return 1404;
break;
case 11:
return 887;
break;
case 14:
return 919;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 896;
break;
case 6:
return 904;
break;
case 8:
return 1405;
break;
case 11:
return 888;
break;
case 14:
return 920;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 897;
break;
case 6:
return 905;
break;
case 8:
return 1406;
break;
case 11:
return 889;
break;
case 14:
return 921;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 898;
break;
case 6:
return 906;
break;
case 8:
return 1407;
break;
case 11:
return 890;
break;
case 14:
return 922;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 899;
break;
case 6:
return 907;
break;
case 8:
return 1408;
break;
case 11:
return 891;
break;
case 14:
return 923;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 924;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 925;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 926;
break;
}
break;
}
return 884;
}

int func_161(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_142(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_141(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_162(int iParam0){
return Global_43257==iParam0;
}

int func_163(int iParam0){
switch (iParam0){
case -1:
return 0;
break;
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
case 9:
return 0;
break;
case 10:
return 1;
break;
case 11:
return 0;
break;
case 12:
return 0;
break;
case 13:
return 0;
break;
}
return 0;
}


void func_164(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
var uVar1;
struct<8> Var2;
int iVar3;
int iVar4;
struct<10> Var5;
int iVar6;
int iVar7;
int iVar8;
struct<10> Var9;
int iVar10;
int iVar11;
iVar0=(iParam1 - iParam2);
iVar0=iVar0;
if(iVar0 < 0){
return;
}
uVar1=Global_78341[0 /*14*/].f_5;
if(iParam0==12){
iVar3=(iParam1 - iParam2);
if(iVar3 >=0){
iVar4=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
if(iVar4 > iVar3){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
Global_2883588=Var2.f_1;
Global_2883589=Var2.f_0;
func_157(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_157(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&Var5);
iVar7=(iParam1 - iParam2);
if(iVar7 >=0){
iVar8=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 1, -1, -1);
if(iVar8 > iVar7){
FILES::GET_SHOP_PED_QUERY_PROP(iVar7, &Var5);
if(Var5.f_6==0){
iVar6=9;
}elseif(Var5.f_6==1){
iVar6=10;
}elseif(Var5.f_6==2){
iVar6=2;
}elseif(Var5.f_6==3){
iVar6=3;
}elseif(Var5.f_6==4){
iVar6=4;
}elseif(Var5.f_6==5){
iVar6=5;
}elseif(Var5.f_6==6){
iVar6=6;
}elseif(Var5.f_6==7){
iVar6=7;
}elseif(Var5.f_6==8){
iVar6=8;
}else{
iVar6=-1;
}
Global_2883588=Var5.f_1;
Global_2883589=Var5.f_0;
func_157(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_157(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_146(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_157(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}


void func_165(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 9, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_166(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P2_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P2_5", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P2_6", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P2_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P2_8", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P2_9", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P2_10", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P2_13", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P2_14", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P2_15", 16);
iVar3=0;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P2_16", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P2_17", 16);
iVar3=0;
iVar4=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P2_18", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P2_19", 16);
iVar3=0;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P2_20", 16);
iVar3=0;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P2_21", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P2_22", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P2_23", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P2_24", 16);
iVar3=0;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P2_25", 16);
iVar3=0;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P2_26", 16);
iVar3=0;
iVar4=0;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P2_27", 16);
iVar3=0;
iVar4=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P2_28", 16);
iVar3=0;
iVar4=0;
iVar1=119;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P2_29", 16);
iVar3=0;
iVar4=0;
iVar1=99;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P2_30", 16);
iVar3=0;
iVar4=0;
iVar1=129;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P2_44", 16);
iVar3=0;
iVar4=0;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P2_45", 16);
iVar3=0;
iVar4=0;
iVar1=120;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P2_46", 16);
iVar3=0;
iVar4=0;
iVar1=139;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P2_47", 16);
iVar3=0;
iVar4=0;
iVar1=149;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P2_48", 16);
iVar3=0;
iVar4=0;
iVar1=145;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P2_49", 16);
iVar3=0;
iVar4=0;
iVar1=140;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P2_50", 16);
iVar3=0;
iVar4=0;
iVar1=135;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P2_31", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P2_32", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P2_33", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P2_34", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P2_35", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P2_36", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P2_37", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P2_38", 16);
iVar3=0;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P2_39", 16);
iVar3=0;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P2_40", 16);
iVar3=0;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P2_41", 16);
iVar3=0;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P2_42", 16);
iVar3=0;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P2_43", 16);
iVar3=0;
iVar4=0;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar3=0;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 48, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_167(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 1, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_168(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 1, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_169(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P2_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P2_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P2_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "BERD_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 6, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_170(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=7;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=8;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=9;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=4;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=5;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=6;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
break;
default:
func_164(iVar7, iParam0, 33, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_171(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=6;
iVar4=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=6;
iVar4=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=6;
iVar4=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=6;
iVar4=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=6;
iVar4=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=6;
iVar4=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=7;
iVar4=0;
iVar1=270;
break;
case 16:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=7;
iVar4=1;
iVar1=270;
break;
default:
func_164(iVar7, iParam0, 17, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_172(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "SPEC_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "SPEC_P2_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 18, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_173(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 7, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_174(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=22;
break;
case 2:
StringCopy(&Var2, "FEET_P2_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=45;
break;
case 3:
StringCopy(&Var2, "FEET_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=65;
break;
case 4:
StringCopy(&Var2, "FEET_P2_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=58;
break;
case 5:
StringCopy(&Var2, "FEET_P2_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=72;
break;
case 6:
StringCopy(&Var2, "FEET_P2_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=68;
break;
case 7:
StringCopy(&Var2, "FEET_P2_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=60;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "FEET_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "FEET_P2_8_0", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "FEET_P2_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "FEET_P2_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=680;
break;
case 18:
StringCopy(&Var2, "FEET_P2_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=650;
break;
case 19:
StringCopy(&Var2, "FEET_P2_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=670;
break;
case 20:
StringCopy(&Var2, "FEET_P2_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=700;
break;
case 21:
StringCopy(&Var2, "FEET_P2_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=680;
break;
case 22:
StringCopy(&Var2, "FEET_P2_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=720;
break;
case 23:
StringCopy(&Var2, "FEET_P2_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=740;
break;
case 24:
StringCopy(&Var2, "FEET_P2_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=760;
break;
case 25:
StringCopy(&Var2, "FEET_P2_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=780;
break;
case 26:
StringCopy(&Var2, "FEET_P2_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=750;
break;
case 27:
StringCopy(&Var2, "FEET_P2_9_11", 16);
iVar3=9;
iVar4=11;
iVar1=700;
break;
case 28:
StringCopy(&Var2, "FEET_P2_10_0", 16);
iVar3=10;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
break;
case 36:
StringCopy(&Var2, "FEET_P2_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=790;
break;
case 37:
StringCopy(&Var2, "FEET_P2_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=750;
break;
case 38:
StringCopy(&Var2, "FEET_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=860;
break;
case 39:
StringCopy(&Var2, "FEET_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=750;
break;
case 40:
StringCopy(&Var2, "FEET_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=790;
break;
case 41:
StringCopy(&Var2, "FEET_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 42:
StringCopy(&Var2, "FEET_P2_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=820;
break;
case 43:
StringCopy(&Var2, "FEET_P2_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=800;
break;
case 44:
StringCopy(&Var2, "FEET_P2_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=850;
break;
case 45:
StringCopy(&Var2, "FEET_P2_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=870;
break;
case 46:
StringCopy(&Var2, "FEET_P2_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=720;
break;
case 47:
StringCopy(&Var2, "FEET_P2_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=740;
break;
case 48:
StringCopy(&Var2, "FEET_P2_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=800;
break;
case 49:
StringCopy(&Var2, "FEET_P2_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=750;
break;
case 50:
StringCopy(&Var2, "FEET_P2_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=770;
break;
case 51:
StringCopy(&Var2, "FEET_P2_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=860;
break;
case 52:
StringCopy(&Var2, "FEET_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=850;
break;
case 53:
StringCopy(&Var2, "FEET_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=800;
break;
case 54:
StringCopy(&Var2, "FEET_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=780;
break;
case 55:
StringCopy(&Var2, "FEET_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=890;
break;
case 56:
StringCopy(&Var2, "FEET_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=820;
break;
case 57:
StringCopy(&Var2, "FEET_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=840;
break;
case 58:
StringCopy(&Var2, "FEET_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=870;
break;
case 59:
StringCopy(&Var2, "FEET_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=930;
break;
case 60:
StringCopy(&Var2, "FEET_P2_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=880;
break;
case 61:
StringCopy(&Var2, "FEET_P2_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=900;
break;
case 62:
StringCopy(&Var2, "FEET_P2_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=920;
break;
case 63:
StringCopy(&Var2, "FEET_P2_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=970;
break;
case 64:
StringCopy(&Var2, "FEET_P2_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=990;
break;
case 65:
StringCopy(&Var2, "FEET_P2_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=960;
break;
case 66:
StringCopy(&Var2, "FEET_P2_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=980;
break;
case 67:
StringCopy(&Var2, "FEET_P2_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=950;
break;
case 68:
StringCopy(&Var2, "FEET_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=110;
break;
case 69:
StringCopy(&Var2, "FEET_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 70:
StringCopy(&Var2, "FEET_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "FEET_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P2_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=125;
break;
case 73:
StringCopy(&Var2, "FEET_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=128;
break;
case 74:
StringCopy(&Var2, "FEET_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=135;
break;
case 75:
StringCopy(&Var2, "FEET_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=130;
break;
case 76:
StringCopy(&Var2, "FEET_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=145;
break;
case 77:
StringCopy(&Var2, "FEET_P2_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=110;
break;
case 78:
StringCopy(&Var2, "FEET_P2_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=120;
break;
case 79:
StringCopy(&Var2, "FEET_P2_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=150;
break;
case 80:
StringCopy(&Var2, "FEET_P2_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=125;
break;
case 81:
StringCopy(&Var2, "FEET_P2_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P2_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=130;
break;
case 83:
StringCopy(&Var2, "FEET_P2_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=110;
break;
default:
func_164(iVar7, iParam0, 84, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_175(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=95;
break;
case 2:
StringCopy(&Var2, "LEGS_P2_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=129;
break;
case 3:
StringCopy(&Var2, "LEGS_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=115;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "LEGS_P2_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "LEGS_P2_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=750;
break;
case 20:
StringCopy(&Var2, "LEGS_P2_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=650;
break;
case 21:
StringCopy(&Var2, "LEGS_P2_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=850;
break;
case 22:
StringCopy(&Var2, "LEGS_P2_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=850;
break;
case 23:
StringCopy(&Var2, "LEGS_P2_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=750;
break;
case 24:
StringCopy(&Var2, "LEGS_P2_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=690;
break;
case 25:
StringCopy(&Var2, "LEGS_P2_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=820;
break;
case 26:
StringCopy(&Var2, "LEGS_P2_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=650;
break;
case 27:
StringCopy(&Var2, "LEGS_P2_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=690;
break;
case 28:
StringCopy(&Var2, "LEGS_P2_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=690;
break;
case 29:
StringCopy(&Var2, "LEGS_P2_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=820;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "LEGS_P2_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "LEGS_P2_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "LEGS_P2_16_0", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "LEGS_P2_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=58;
break;
case 36:
StringCopy(&Var2, "LEGS_P2_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=68;
break;
case 37:
StringCopy(&Var2, "LEGS_P2_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=65;
break;
case 38:
StringCopy(&Var2, "LEGS_P2_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=60;
break;
case 39:
StringCopy(&Var2, "LEGS_P2_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=65;
break;
case 40:
StringCopy(&Var2, "LEGS_P2_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=63;
break;
case 41:
StringCopy(&Var2, "LEGS_P2_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=60;
break;
case 42:
StringCopy(&Var2, "LEGS_P2_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=58;
break;
case 43:
StringCopy(&Var2, "LEGS_P2_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "LEGS_P2_18_1", 16);
iVar3=18;
iVar4=1;
break;
case 45:
StringCopy(&Var2, "LEGS_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=99;
break;
case 46:
StringCopy(&Var2, "LEGS_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=105;
break;
case 47:
StringCopy(&Var2, "LEGS_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=110;
break;
case 48:
StringCopy(&Var2, "LEGS_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=110;
break;
case 49:
StringCopy(&Var2, "LEGS_P2_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=99;
break;
case 50:
StringCopy(&Var2, "LEGS_P2_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=110;
break;
case 51:
StringCopy(&Var2, "LEGS_P2_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=110;
break;
case 52:
StringCopy(&Var2, "LEGS_P2_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=105;
break;
case 53:
StringCopy(&Var2, "LEGS_P2_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=105;
break;
case 54:
StringCopy(&Var2, "LEGS_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=15;
break;
case 55:
StringCopy(&Var2, "LEGS_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=15;
break;
case 56:
StringCopy(&Var2, "LEGS_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=15;
break;
case 57:
StringCopy(&Var2, "LEGS_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=15;
break;
case 58:
StringCopy(&Var2, "LEGS_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=15;
break;
case 59:
StringCopy(&Var2, "LEGS_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=15;
break;
case 60:
StringCopy(&Var2, "LEGS_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=15;
break;
case 61:
StringCopy(&Var2, "LEGS_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=15;
break;
case 62:
StringCopy(&Var2, "LEGS_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=600;
break;
case 63:
StringCopy(&Var2, "LEGS_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=600;
break;
case 64:
StringCopy(&Var2, "LEGS_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=600;
break;
case 65:
StringCopy(&Var2, "LEGS_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=600;
break;
case 66:
StringCopy(&Var2, "LEGS_P2_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=600;
break;
case 67:
StringCopy(&Var2, "LEGS_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=600;
break;
case 68:
StringCopy(&Var2, "LEGS_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=600;
break;
case 69:
StringCopy(&Var2, "LEGS_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=600;
break;
case 70:
StringCopy(&Var2, "LEGS_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=600;
break;
case 71:
StringCopy(&Var2, "LEGS_P2_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=80;
break;
case 72:
StringCopy(&Var2, "LEGS_P2_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=80;
break;
case 73:
StringCopy(&Var2, "LEGS_P2_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=80;
break;
case 74:
StringCopy(&Var2, "LEGS_P2_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=80;
break;
case 75:
StringCopy(&Var2, "LEGS_P2_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=80;
break;
case 76:
StringCopy(&Var2, "LEGS_P2_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=80;
break;
case 77:
StringCopy(&Var2, "LEGS_P2_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=80;
break;
case 78:
StringCopy(&Var2, "LEGS_P2_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=80;
break;
case 79:
StringCopy(&Var2, "LEGS_P2_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=80;
break;
case 80:
StringCopy(&Var2, "LEGS_P2_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=80;
break;
case 81:
StringCopy(&Var2, "LEGS_P2_22_0", 16);
iVar3=22;
iVar4=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P2_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=12;
break;
case 83:
StringCopy(&Var2, "LEGS_P2_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=12;
break;
case 84:
StringCopy(&Var2, "LEGS_P2_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=22;
break;
case 85:
StringCopy(&Var2, "LEGS_P2_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=18;
break;
case 86:
StringCopy(&Var2, "LEGS_P2_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=20;
break;
case 87:
StringCopy(&Var2, "LEGS_P2_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=30;
break;
case 88:
StringCopy(&Var2, "LEGS_P2_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=30;
break;
case 89:
StringCopy(&Var2, "LEGS_P2_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=30;
break;
case 90:
StringCopy(&Var2, "LEGS_P2_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=30;
break;
case 91:
StringCopy(&Var2, "LEGS_P2_23_0", 16);
iVar3=23;
iVar4=0;
break;
case 92:
StringCopy(&Var2, "LEGS_P2_24_0", 16);
iVar3=24;
iVar4=0;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
break;
case 95:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=1;
break;
case 96:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=2;
break;
case 97:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=3;
break;
case 98:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=4;
break;
case 99:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=5;
break;
case 100:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=6;
break;
case 101:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=7;
break;
case 102:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=8;
break;
case 103:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=9;
break;
default:
func_164(iVar7, iParam0, 104, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_176(int iParam0){
if(iParam0 < 136){
func_178(iParam0);
}else{
func_177(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_164(3, iParam0, 242, -1);
}}


void func_177(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 136:
StringCopy(&Var2, "TORSO_P2_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=32;
break;
case 137:
StringCopy(&Var2, "TORSO_P2_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=39;
break;
case 138:
StringCopy(&Var2, "TORSO_P2_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=40;
break;
case 139:
StringCopy(&Var2, "TORSO_P2_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=42;
break;
case 140:
StringCopy(&Var2, "TORSO_P2_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=45;
break;
case 141:
StringCopy(&Var2, "TORSO_P2_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=48;
break;
case 142:
StringCopy(&Var2, "TORSO_P2_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=52;
break;
case 143:
StringCopy(&Var2, "TORSO_P2_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=55;
break;
case 144:
StringCopy(&Var2, "TORSO_P2_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=390;
break;
case 145:
StringCopy(&Var2, "TORSO_P2_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=390;
break;
case 146:
StringCopy(&Var2, "TORSO_P2_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=560;
break;
case 147:
StringCopy(&Var2, "TORSO_P2_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=390;
break;
case 148:
StringCopy(&Var2, "TORSO_P2_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=390;
break;
case 149:
StringCopy(&Var2, "TORSO_P2_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=390;
break;
case 150:
StringCopy(&Var2, "TORSO_P2_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=560;
break;
case 151:
StringCopy(&Var2, "TORSO_P2_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=390;
break;
case 152:
StringCopy(&Var2, "TORSO_P2_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=390;
break;
case 153:
StringCopy(&Var2, "TORSO_P2_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=390;
break;
case 154:
StringCopy(&Var2, "TORSO_P2_22_10", 16);
iVar3=22;
iVar4=10;
iVar1=390;
break;
case 155:
StringCopy(&Var2, "TORSO_P2_22_11", 16);
iVar3=22;
iVar4=11;
iVar1=3950;
break;
case 156:
StringCopy(&Var2, "TORSO_P2_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=150;
break;
case 157:
StringCopy(&Var2, "TORSO_P2_23_1", 16);
iVar3=23;
iVar4=1;
break;
case 158:
StringCopy(&Var2, "TORSO_P2_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=150;
break;
case 159:
StringCopy(&Var2, "TORSO_P2_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=150;
break;
case 160:
StringCopy(&Var2, "TORSO_P2_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=160;
break;
case 161:
StringCopy(&Var2, "TORSO_P2_23_5", 16);
iVar3=23;
iVar4=5;
break;
case 162:
StringCopy(&Var2, "TORSO_P2_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=19;
break;
case 163:
StringCopy(&Var2, "TORSO_P2_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=20;
break;
case 164:
StringCopy(&Var2, "TORSO_P2_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=19;
break;
case 165:
StringCopy(&Var2, "TORSO_P2_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=22;
break;
case 166:
StringCopy(&Var2, "TORSO_P2_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=20;
break;
case 167:
StringCopy(&Var2, "TORSO_P2_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=28;
break;
case 168:
StringCopy(&Var2, "TORSO_P2_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=28;
break;
case 169:
StringCopy(&Var2, "TORSO_P2_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=25;
break;
case 170:
StringCopy(&Var2, "TORSO_P2_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=22;
break;
case 171:
StringCopy(&Var2, "TORSO_P2_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=19;
break;
case 172:
StringCopy(&Var2, "TORSO_P2_24_10", 16);
iVar3=24;
iVar4=10;
iVar1=22;
break;
case 173:
StringCopy(&Var2, "TORSO_P2_24_11", 16);
iVar3=24;
iVar4=11;
iVar1=19;
break;
case 174:
StringCopy(&Var2, "TORSO_P2_24_12", 16);
iVar3=24;
iVar4=12;
iVar1=20;
break;
case 175:
StringCopy(&Var2, "TORSO_P2_24_13", 16);
iVar3=24;
iVar4=13;
iVar1=25;
break;
case 176:
StringCopy(&Var2, "TORSO_P2_24_14", 16);
iVar3=24;
iVar4=14;
iVar1=20;
break;
case 177:
StringCopy(&Var2, "TORSO_P2_24_15", 16);
iVar3=24;
iVar4=15;
iVar1=28;
break;
case 178:
StringCopy(&Var2, "TORSO_P2_25_0", 16);
iVar3=25;
iVar4=0;
iVar1=35;
break;
case 179:
StringCopy(&Var2, "TORSO_P2_25_1", 16);
iVar3=25;
iVar4=1;
iVar1=40;
break;
case 180:
StringCopy(&Var2, "TORSO_P2_25_2", 16);
iVar3=25;
iVar4=2;
iVar1=45;
break;
case 181:
StringCopy(&Var2, "TORSO_P2_25_3", 16);
iVar3=25;
iVar4=3;
iVar1=45;
break;
case 182:
StringCopy(&Var2, "TORSO_P2_25_4", 16);
iVar3=25;
iVar4=4;
iVar1=49;
break;
case 183:
StringCopy(&Var2, "TORSO_P2_25_5", 16);
iVar3=25;
iVar4=5;
iVar1=820;
break;
case 184:
StringCopy(&Var2, "TORSO_P2_25_6", 16);
iVar3=25;
iVar4=6;
iVar1=790;
break;
case 185:
StringCopy(&Var2, "TORSO_P2_25_7", 16);
iVar3=25;
iVar4=7;
iVar1=820;
break;
case 186:
StringCopy(&Var2, "TORSO_P2_25_8", 16);
iVar3=25;
iVar4=8;
iVar1=929;
break;
case 187:
StringCopy(&Var2, "TORSO_P2_25_9", 16);
iVar3=25;
iVar4=9;
iVar1=40;
break;
case 188:
StringCopy(&Var2, "TORSO_P2_25_10", 16);
iVar3=25;
iVar4=10;
iVar1=850;
break;
case 189:
StringCopy(&Var2, "TORSO_P2_25_11", 16);
iVar3=25;
iVar4=11;
iVar1=790;
break;
case 190:
StringCopy(&Var2, "TORSO_P2_26_0", 16);
iVar3=26;
iVar4=0;
break;
case 191:
StringCopy(&Var2, "TORSO_P2_26_1", 16);
iVar3=26;
iVar4=1;
break;
case 192:
StringCopy(&Var2, "TORSO_P2_26_2", 16);
iVar3=26;
iVar4=2;
break;
case 193:
StringCopy(&Var2, "TORSO_P2_26_3", 16);
iVar3=26;
iVar4=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P2_26_4", 16);
iVar3=26;
iVar4=4;
break;
case 195:
StringCopy(&Var2, "TORSO_P2_26_5", 16);
iVar3=26;
iVar4=5;
break;
case 196:
StringCopy(&Var2, "TORSO_P2_26_6", 16);
iVar3=26;
iVar4=6;
break;
case 197:
StringCopy(&Var2, "TORSO_P2_26_7", 16);
iVar3=26;
iVar4=7;
break;
case 198:
StringCopy(&Var2, "TORSO_P2_26_8", 16);
iVar3=26;
iVar4=8;
break;
case 199:
StringCopy(&Var2, "TORSO_P2_26_9", 16);
iVar3=26;
iVar4=9;
break;
case 200:
StringCopy(&Var2, "TORSO_P2_27_0", 16);
iVar3=27;
iVar4=0;
iVar1=2200;
break;
case 201:
StringCopy(&Var2, "TORSO_P2_27_1", 16);
iVar3=27;
iVar4=1;
iVar1=2500;
break;
case 202:
StringCopy(&Var2, "TORSO_P2_27_2", 16);
iVar3=27;
iVar4=2;
iVar1=2500;
break;
case 203:
StringCopy(&Var2, "TORSO_P2_27_3", 16);
iVar3=27;
iVar4=3;
iVar1=2200;
break;
case 204:
StringCopy(&Var2, "TORSO_P2_27_4", 16);
iVar3=27;
iVar4=4;
iVar1=2500;
break;
case 205:
StringCopy(&Var2, "TORSO_P2_27_5", 16);
iVar3=27;
iVar4=5;
iVar1=2500;
break;
case 206:
StringCopy(&Var2, "TORSO_P2_27_6", 16);
iVar3=27;
iVar4=6;
iVar1=2200;
break;
case 207:
StringCopy(&Var2, "TORSO_P2_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=1100;
break;
case 208:
StringCopy(&Var2, "TORSO_P2_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=1200;
break;
case 209:
StringCopy(&Var2, "TORSO_P2_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=1220;
break;
case 210:
StringCopy(&Var2, "TORSO_P2_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=1250;
break;
case 211:
StringCopy(&Var2, "TORSO_P2_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=1300;
break;
case 212:
StringCopy(&Var2, "TORSO_P2_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=1360;
break;
case 213:
StringCopy(&Var2, "TORSO_P2_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=35;
break;
case 214:
StringCopy(&Var2, "TORSO_P2_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=38;
break;
case 215:
StringCopy(&Var2, "TORSO_P2_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=40;
break;
case 216:
StringCopy(&Var2, "TORSO_P2_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=42;
break;
case 217:
StringCopy(&Var2, "TORSO_P2_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=50;
break;
case 218:
StringCopy(&Var2, "TORSO_P2_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=45;
break;
case 219:
StringCopy(&Var2, "TORSO_P2_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=45;
break;
case 220:
StringCopy(&Var2, "TORSO_P2_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=44;
break;
case 221:
StringCopy(&Var2, "TORSO_P2_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=46;
break;
case 222:
StringCopy(&Var2, "TORSO_P2_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=52;
break;
case 223:
StringCopy(&Var2, "TORSO_P2_29_0", 16);
iVar3=29;
iVar4=0;
iVar1=3200;
break;
case 224:
StringCopy(&Var2, "TORSO_P2_29_1", 16);
iVar3=29;
iVar4=1;
iVar1=3200;
break;
case 225:
StringCopy(&Var2, "TORSO_P2_29_2", 16);
iVar3=29;
iVar4=2;
iVar1=2550;
break;
case 226:
StringCopy(&Var2, "TORSO_P2_29_3", 16);
iVar3=29;
iVar4=3;
iVar1=2750;
break;
case 227:
StringCopy(&Var2, "TORSO_P2_29_4", 16);
iVar3=29;
iVar4=4;
iVar1=2590;
break;
case 228:
StringCopy(&Var2, "TORSO_P2_29_5", 16);
iVar3=29;
iVar4=5;
iVar1=2750;
break;
case 229:
StringCopy(&Var2, "TORSO_P2_29_6", 16);
iVar3=29;
iVar4=6;
iVar1=2550;
break;
case 230:
StringCopy(&Var2, "TORSO_P2_29_7", 16);
iVar3=29;
iVar4=7;
iVar1=2590;
break;
case 231:
StringCopy(&Var2, "TORSO_P2_29_8", 16);
iVar3=29;
iVar4=8;
iVar1=2720;
break;
case 232:
StringCopy(&Var2, "TORSO_P2_29_9", 16);
iVar3=29;
iVar4=9;
iVar1=2750;
break;
case 233:
StringCopy(&Var2, "TORSO_P2_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=3250;
break;
case 234:
StringCopy(&Var2, "TORSO_P2_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=2950;
break;
case 235:
StringCopy(&Var2, "TORSO_P2_30_2", 16);
iVar3=30;
iVar4=2;
iVar1=3100;
break;
case 236:
StringCopy(&Var2, "TORSO_P2_30_3", 16);
iVar3=30;
iVar4=3;
iVar1=3150;
break;
case 237:
StringCopy(&Var2, "TORSO_P2_30_4", 16);
iVar3=30;
iVar4=4;
iVar1=3240;
break;
case 238:
StringCopy(&Var2, "TORSO_P2_30_5", 16);
iVar3=30;
iVar4=5;
iVar1=3350;
break;
case 239:
StringCopy(&Var2, "TORSO_P2_30_6", 16);
iVar3=30;
iVar4=6;
iVar1=3400;
break;
case 240:
StringCopy(&Var2, "TORSO_P2_30_7", 16);
iVar3=30;
iVar4=7;
iVar1=3280;
break;
case 241:
StringCopy(&Var2, "TORSO_P2_31_0", 16);
iVar3=31;
iVar4=0;
break;
default:
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_178(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P2_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=25;
break;
case 2:
StringCopy(&Var2, "TORSO_P2_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "TORSO_P2_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=15;
break;
case 4:
StringCopy(&Var2, "TORSO_P2_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=25;
break;
case 5:
StringCopy(&Var2, "TORSO_P2_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=25;
break;
case 6:
StringCopy(&Var2, "TORSO_P2_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=22;
break;
case 7:
StringCopy(&Var2, "TORSO_P2_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P2_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P2_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=20;
break;
case 10:
StringCopy(&Var2, "TORSO_P2_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=24;
break;
case 11:
StringCopy(&Var2, "TORSO_P2_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=26;
break;
case 12:
StringCopy(&Var2, "TORSO_P2_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=28;
break;
case 13:
StringCopy(&Var2, "TORSO_P2_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=29;
break;
case 14:
StringCopy(&Var2, "TORSO_P2_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=22;
break;
case 15:
StringCopy(&Var2, "TORSO_P2_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=20;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "TORSO_P2_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=35;
break;
case 19:
StringCopy(&Var2, "TORSO_P2_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "TORSO_P2_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P2_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=38;
break;
case 22:
StringCopy(&Var2, "TORSO_P2_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "TORSO_P2_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=40;
break;
case 24:
StringCopy(&Var2, "TORSO_P2_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "TORSO_P2_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "TORSO_P2_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=40;
break;
case 27:
StringCopy(&Var2, "TORSO_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "TORSO_P2_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=500;
break;
case 29:
StringCopy(&Var2, "TORSO_P2_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=560;
break;
case 30:
StringCopy(&Var2, "TORSO_P2_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=600;
break;
case 31:
StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
iVar3=4;
iVar4=4;
iVar1=650;
break;
case 32:
StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
iVar3=4;
iVar4=5;
iVar1=500;
break;
case 33:
StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
iVar3=4;
iVar4=6;
iVar1=560;
break;
case 34:
StringCopy(&Var2, "TORSO_P2_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=500;
break;
case 35:
StringCopy(&Var2, "TORSO_P2_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=650;
break;
case 36:
StringCopy(&Var2, "TORSO_P2_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=540;
break;
case 37:
StringCopy(&Var2, "TORSO_P2_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=690;
break;
case 38:
StringCopy(&Var2, "TORSO_P2_4_11", 16);
iVar3=4;
iVar4=11;
iVar1=560;
break;
case 39:
StringCopy(&Var2, "TORSO_P2_4_12", 16);
iVar3=4;
iVar4=12;
iVar1=590;
break;
case 40:
StringCopy(&Var2, "TORSO_P2_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=690;
break;
case 41:
StringCopy(&Var2, "TORSO_P2_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=540;
break;
case 42:
StringCopy(&Var2, "TORSO_P2_4_15", 16);
iVar3=4;
iVar4=15;
iVar1=500;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "TORSO_P2_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 55:
StringCopy(&Var2, "TORSO_P2_11_1", 16);
iVar3=11;
iVar4=1;
break;
case 56:
StringCopy(&Var2, "TORSO_P2_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "TORSO_P2_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "TORSO_P2_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=22;
break;
case 59:
StringCopy(&Var2, "TORSO_P2_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=350;
break;
case 60:
StringCopy(&Var2, "TORSO_P2_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=27;
break;
case 61:
StringCopy(&Var2, "TORSO_P2_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=370;
break;
case 62:
StringCopy(&Var2, "TORSO_P2_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=25;
break;
case 63:
StringCopy(&Var2, "TORSO_P2_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=22;
break;
case 64:
StringCopy(&Var2, "TORSO_P2_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=25;
break;
case 65:
StringCopy(&Var2, "TORSO_P2_11_11", 16);
iVar3=11;
iVar4=11;
break;
case 66:
StringCopy(&Var2, "TORSO_P2_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=22;
break;
case 67:
StringCopy(&Var2, "TORSO_P2_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=27;
break;
case 68:
StringCopy(&Var2, "TORSO_P2_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=25;
break;
case 69:
StringCopy(&Var2, "TORSO_P2_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=27;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
iVar6=1;
break;
case 71:
StringCopy(&Var2, "TORSO_P2_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 72:
StringCopy(&Var2, "TORSO_P2_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=39;
break;
case 73:
StringCopy(&Var2, "TORSO_P2_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=42;
break;
case 74:
StringCopy(&Var2, "TORSO_P2_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=49;
break;
case 75:
StringCopy(&Var2, "TORSO_P2_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=35;
break;
case 76:
StringCopy(&Var2, "TORSO_P2_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=50;
break;
case 77:
StringCopy(&Var2, "TORSO_P2_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=50;
break;
case 78:
StringCopy(&Var2, "TORSO_P2_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=50;
break;
case 79:
StringCopy(&Var2, "TORSO_P2_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 80:
StringCopy(&Var2, "TORSO_P2_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=88;
break;
case 81:
StringCopy(&Var2, "TORSO_P2_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=60;
break;
case 82:
StringCopy(&Var2, "TORSO_P2_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=80;
break;
case 83:
StringCopy(&Var2, "TORSO_P2_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=70;
break;
case 84:
StringCopy(&Var2, "TORSO_P2_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=80;
break;
case 85:
StringCopy(&Var2, "TORSO_P2_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=70;
break;
case 86:
StringCopy(&Var2, "TORSO_P2_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=90;
break;
case 87:
StringCopy(&Var2, "TORSO_P2_14_8", 16);
iVar3=14;
iVar4=8;
iVar1=95;
break;
case 88:
StringCopy(&Var2, "TORSO_P2_14_9", 16);
iVar3=14;
iVar4=9;
iVar1=105;
break;
case 89:
StringCopy(&Var2, "TORSO_P2_14_10", 16);
iVar3=14;
iVar4=10;
iVar1=95;
break;
case 90:
StringCopy(&Var2, "TORSO_P2_14_11", 16);
iVar3=14;
iVar4=11;
iVar1=110;
break;
case 91:
StringCopy(&Var2, "TORSO_P2_14_12", 16);
iVar3=14;
iVar4=12;
iVar1=98;
break;
case 92:
StringCopy(&Var2, "TORSO_P2_14_13", 16);
iVar3=14;
iVar4=13;
iVar1=88;
break;
case 93:
StringCopy(&Var2, "TORSO_P2_14_14", 16);
iVar3=14;
iVar4=14;
iVar1=98;
break;
case 94:
StringCopy(&Var2, "TORSO_P2_14_15", 16);
iVar3=14;
iVar4=15;
iVar1=110;
break;
case 95:
StringCopy(&Var2, "TORSO_P2_15_0", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "TORSO_P2_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 97:
StringCopy(&Var2, "TORSO_P2_17_0", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "TORSO_P2_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 99:
StringCopy(&Var2, "TORSO_P2_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=520;
break;
case 100:
StringCopy(&Var2, "TORSO_P2_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=490;
break;
case 101:
StringCopy(&Var2, "TORSO_P2_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=450;
break;
case 102:
StringCopy(&Var2, "TORSO_P2_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=420;
break;
case 103:
StringCopy(&Var2, "TORSO_P2_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=420;
break;
case 104:
StringCopy(&Var2, "TORSO_P2_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=85;
break;
case 105:
StringCopy(&Var2, "TORSO_P2_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=85;
break;
case 106:
StringCopy(&Var2, "TORSO_P2_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "TORSO_P2_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=68;
break;
case 108:
StringCopy(&Var2, "TORSO_P2_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=68;
break;
case 109:
StringCopy(&Var2, "TORSO_P2_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=78;
break;
case 110:
StringCopy(&Var2, "TORSO_P2_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=85;
break;
case 111:
StringCopy(&Var2, "TORSO_P2_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=68;
break;
case 112:
StringCopy(&Var2, "TORSO_P2_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=75;
break;
case 113:
StringCopy(&Var2, "TORSO_P2_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=75;
break;
case 114:
StringCopy(&Var2, "TORSO_P2_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=78;
break;
case 115:
StringCopy(&Var2, "TORSO_P2_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=75;
break;
case 116:
StringCopy(&Var2, "TORSO_P2_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=75;
break;
case 117:
StringCopy(&Var2, "TORSO_P2_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=75;
break;
case 118:
StringCopy(&Var2, "TORSO_P2_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=78;
break;
case 119:
StringCopy(&Var2, "TORSO_P2_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=78;
break;
case 120:
StringCopy(&Var2, "TORSO_P2_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=40;
break;
case 121:
StringCopy(&Var2, "TORSO_P2_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=32;
break;
case 122:
StringCopy(&Var2, "TORSO_P2_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=32;
break;
case 123:
StringCopy(&Var2, "TORSO_P2_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=32;
break;
case 124:
StringCopy(&Var2, "TORSO_P2_20_4", 16);
iVar3=20;
iVar4=4;
break;
case 125:
StringCopy(&Var2, "TORSO_P2_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=38;
break;
case 126:
StringCopy(&Var2, "TORSO_P2_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=35;
break;
case 127:
StringCopy(&Var2, "TORSO_P2_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=38;
break;
case 128:
StringCopy(&Var2, "TORSO_P2_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=29;
break;
case 129:
StringCopy(&Var2, "TORSO_P2_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=32;
break;
case 130:
StringCopy(&Var2, "TORSO_P2_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=29;
break;
case 131:
StringCopy(&Var2, "TORSO_P2_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=35;
break;
case 132:
StringCopy(&Var2, "TORSO_P2_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=32;
break;
case 133:
StringCopy(&Var2, "TORSO_P2_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=35;
break;
case 134:
StringCopy(&Var2, "TORSO_P2_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=32;
break;
case 135:
StringCopy(&Var2, "TORSO_P2_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=40;
break;
default:
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_179(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P2_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P2_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P2_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P2_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P2_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "HAIR_P2_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "HAIR_P2_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "HAIR_P2_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "HAIR_P2_7_0", 16);
iVar3=7;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 9, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_180(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=0;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
default:
func_164(iVar7, iParam0, 7, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_181(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_199(iParam1);
break;
case 2:
func_198(iParam1);
break;
case 3:
func_194(iParam1);
break;
case 4:
func_193(iParam1);
break;
case 6:
func_192(iParam1);
break;
case 5:
func_191(iParam1);
break;
case 8:
func_190(iParam1);
break;
case 9:
func_189(iParam1);
break;
case 10:
func_188(iParam1);
break;
case 1:
func_187(iParam1);
break;
case 7:
func_186(iParam1);
break;
case 11:
func_185(iParam1);
break;
case 12:
func_184(iParam1);
break;
case 13:
func_183(iParam1);
break;
case 14:
func_182(iParam1);
break;
}}


void func_182(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 158:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
case 159:
StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
iVar3=1;
iVar4=0;
iVar1=4590;
iVar5=2;
break;
case 160:
StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
iVar3=1;
iVar4=1;
iVar1=4100;
iVar5=2;
break;
case 161:
StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
iVar3=1;
iVar4=2;
iVar1=3850;
iVar5=2;
break;
case 162:
StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
iVar3=1;
iVar4=3;
iVar1=1850;
iVar5=2;
break;
case 163:
StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
iVar3=1;
iVar4=4;
iVar1=5250;
iVar5=2;
break;
case 164:
StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
iVar3=1;
iVar4=5;
iVar1=2700;
iVar5=2;
break;
case 165:
StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
iVar3=1;
iVar4=6;
iVar1=3100;
iVar5=2;
break;
case 166:
StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
iVar3=1;
iVar4=7;
iVar1=5050;
iVar5=2;
break;
case 167:
StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
iVar3=2;
iVar4=0;
iVar1=2500;
iVar5=2;
break;
case 168:
StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
iVar3=2;
iVar4=1;
iVar1=1950;
iVar5=2;
break;
case 169:
StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
iVar3=2;
iVar4=2;
iVar1=3900;
iVar5=2;
break;
case 170:
StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
iVar3=2;
iVar4=3;
iVar1=3550;
iVar5=2;
break;
case 171:
StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
iVar3=2;
iVar4=4;
iVar1=4500;
iVar5=2;
break;
case 172:
StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
iVar3=2;
iVar4=5;
iVar1=2700;
iVar5=2;
break;
case 173:
StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
iVar3=2;
iVar4=6;
iVar1=3100;
iVar5=2;
break;
case 174:
StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
iVar3=2;
iVar4=7;
iVar1=2950;
iVar5=2;
break;
case 82:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_E1_0", 16);
iVar3=1;
iVar4=0;
iVar1=75;
iVar5=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_E1_1", 16);
iVar3=1;
iVar4=1;
iVar1=75;
iVar5=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_E1_2", 16);
iVar3=1;
iVar4=2;
iVar1=75;
iVar5=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_E1_3", 16);
iVar3=1;
iVar4=3;
iVar1=75;
iVar5=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P1_E1_4", 16);
iVar3=1;
iVar4=4;
iVar1=75;
iVar5=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P1_E1_5", 16);
iVar3=1;
iVar4=5;
iVar1=75;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P1_E1_6", 16);
iVar3=1;
iVar4=6;
iVar1=75;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P1_E1_7", 16);
iVar3=1;
iVar4=7;
iVar1=75;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P1_E1_8", 16);
iVar3=1;
iVar4=8;
iVar1=75;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P1_E1_9", 16);
iVar3=1;
iVar4=9;
iVar1=75;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P1_E2", 16);
iVar3=2;
iVar4=0;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P1_E3", 16);
iVar3=3;
iVar4=0;
iVar1=110;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P1_E4_0", 16);
iVar3=4;
iVar4=0;
iVar1=120;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P1_E4_1", 16);
iVar3=4;
iVar4=1;
iVar1=128;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P1_E4_2", 16);
iVar3=4;
iVar4=2;
iVar1=130;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P1_E4_3", 16);
iVar3=4;
iVar4=3;
iVar1=140;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P1_E4_4", 16);
iVar3=4;
iVar4=4;
iVar1=145;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P1_E4_5", 16);
iVar3=4;
iVar4=5;
iVar1=135;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P1_E4_6", 16);
iVar3=4;
iVar4=6;
iVar1=138;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P1_E5_0", 16);
iVar3=5;
iVar4=0;
iVar1=110;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P1_E5_1", 16);
iVar3=5;
iVar4=1;
iVar1=112;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P1_E5_2", 16);
iVar3=5;
iVar4=2;
iVar1=115;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P1_E5_3", 16);
iVar3=5;
iVar4=3;
iVar1=118;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P1_E5_4", 16);
iVar3=5;
iVar4=4;
iVar1=120;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P1_E5_5", 16);
iVar3=5;
iVar4=5;
iVar1=125;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P1_E5_6", 16);
iVar3=5;
iVar4=6;
iVar1=128;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P1_E5_7", 16);
iVar3=5;
iVar4=7;
iVar1=138;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P1_E5_8", 16);
iVar3=5;
iVar4=8;
iVar1=140;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "PROPS_P1_E5_9", 16);
iVar3=5;
iVar4=9;
iVar1=155;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "PROPS_P1_E6_0", 16);
iVar3=6;
iVar4=0;
iVar1=55;
iVar5=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P1_E6_1", 16);
iVar3=6;
iVar4=1;
iVar1=55;
iVar5=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P1_E6_2", 16);
iVar3=6;
iVar4=2;
iVar1=58;
iVar5=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P1_E6_3", 16);
iVar3=6;
iVar4=3;
iVar1=58;
iVar5=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P1_E6_4", 16);
iVar3=6;
iVar4=4;
iVar1=60;
iVar5=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P1_E6_5", 16);
iVar3=6;
iVar4=5;
iVar1=62;
iVar5=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P1_E6_6", 16);
iVar3=6;
iVar4=6;
iVar1=65;
iVar5=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P1_E6_7", 16);
iVar3=6;
iVar4=7;
iVar1=68;
iVar5=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P1_E6_8", 16);
iVar3=6;
iVar4=8;
iVar1=68;
iVar5=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P1_E6_9", 16);
iVar3=6;
iVar4=9;
iVar1=72;
iVar5=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P1_E7_0", 16);
iVar3=7;
iVar4=0;
iVar1=145;
iVar5=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P1_E7_1", 16);
iVar3=7;
iVar4=1;
iVar1=149;
iVar5=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P1_E7_2", 16);
iVar3=7;
iVar4=2;
iVar1=139;
iVar5=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P1_E7_3", 16);
iVar3=7;
iVar4=3;
iVar1=149;
iVar5=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P1_E7_4", 16);
iVar3=7;
iVar4=4;
iVar1=135;
iVar5=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P1_E7_5", 16);
iVar3=7;
iVar4=5;
iVar1=138;
iVar5=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P1_E7_6", 16);
iVar3=7;
iVar4=6;
iVar1=140;
iVar5=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P1_E7_7", 16);
iVar3=7;
iVar4=7;
iVar1=145;
iVar5=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P1_E7_8", 16);
iVar3=7;
iVar4=8;
iVar1=159;
iVar5=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P1_E7_9", 16);
iVar3=7;
iVar4=9;
iVar1=155;
iVar5=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P1_E8_0", 16);
iVar3=8;
iVar4=0;
iVar1=198;
iVar5=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P1_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=210;
iVar5=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P1_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=185;
iVar5=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P1_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=220;
iVar5=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P1_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=190;
iVar5=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P1_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=200;
iVar5=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P1_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=208;
iVar5=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P1_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=210;
iVar5=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P1_E9_0", 16);
iVar3=9;
iVar4=0;
iVar1=165;
iVar5=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P1_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=185;
iVar5=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P1_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=190;
iVar5=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P1_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=178;
iVar5=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P1_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=180;
iVar5=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P1_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=168;
iVar5=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P1_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=170;
iVar5=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P1_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=175;
iVar5=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P1_E9_8", 16);
iVar3=9;
iVar4=8;
iVar1=170;
iVar5=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P1_E9_9", 16);
iVar3=9;
iVar4=9;
iVar1=178;
iVar5=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P1_E10_0", 16);
iVar3=10;
iVar4=0;
iVar1=140;
iVar5=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P1_E10_1", 16);
iVar3=10;
iVar4=1;
iVar1=145;
iVar5=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P1_E10_2", 16);
iVar3=10;
iVar4=2;
iVar1=150;
iVar5=10;
break;
case 153:
StringCopy(&Var2, "PROPS_P1_E10_3", 16);
iVar3=10;
iVar4=3;
iVar1=165;
iVar5=10;
break;
case 154:
StringCopy(&Var2, "PROPS_P1_E10_4", 16);
iVar3=10;
iVar4=4;
iVar1=168;
iVar5=10;
break;
case 155:
StringCopy(&Var2, "PROPS_P1_E10_5", 16);
iVar3=10;
iVar4=5;
iVar1=178;
iVar5=10;
break;
case 156:
StringCopy(&Var2, "PROPS_P1_E10_6", 16);
iVar3=10;
iVar4=6;
iVar1=160;
iVar5=10;
break;
case 157:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 10:
StringCopy(&Var2, "PROPS_P1_H0_0", 16);
iVar3=0;
iVar4=0;
iVar1=320;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 13:
StringCopy(&Var2, "PROPS_P1_H3_0", 16);
iVar3=3;
iVar4=0;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=7;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=8;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=8;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=8;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=9;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=9;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=10;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=10;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=11;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=12;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=12;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=13;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=13;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=14;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=14;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=14;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar3=16;
iVar4=0;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar3=16;
iVar4=1;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar3=16;
iVar4=2;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar3=16;
iVar4=3;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar3=16;
iVar4=4;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar3=16;
iVar4=5;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar3=16;
iVar4=6;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar3=16;
iVar4=7;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar3=16;
iVar4=8;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar3=16;
iVar4=9;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar3=16;
iVar4=10;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar3=16;
iVar4=11;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar3=16;
iVar4=12;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar3=16;
iVar4=13;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar3=16;
iVar4=14;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar3=16;
iVar4=15;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=1;
iVar5=0;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=2;
iVar5=0;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=3;
iVar5=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=4;
iVar5=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=5;
iVar5=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
iVar5=0;
break;
case 64:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar3=19;
iVar4=0;
iVar1=30;
iVar5=0;
break;
case 65:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar3=19;
iVar4=1;
iVar1=30;
iVar5=0;
break;
case 66:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar3=19;
iVar4=2;
iVar1=32;
iVar5=0;
break;
case 67:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar3=19;
iVar4=3;
iVar1=35;
iVar5=0;
break;
case 68:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar3=19;
iVar4=4;
iVar1=38;
iVar5=0;
break;
case 69:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar3=19;
iVar4=5;
iVar1=42;
iVar5=0;
break;
case 70:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar3=19;
iVar4=6;
iVar1=42;
iVar5=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar3=19;
iVar4=7;
iVar1=40;
iVar5=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar3=19;
iVar4=8;
iVar1=45;
iVar5=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar3=19;
iVar4=9;
iVar1=48;
iVar5=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar3=19;
iVar4=10;
iVar1=25;
iVar5=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar3=19;
iVar4=11;
iVar1=25;
iVar5=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar3=19;
iVar4=12;
iVar1=28;
iVar5=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar3=19;
iVar4=13;
iVar1=28;
iVar5=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar3=19;
iVar4=14;
iVar1=30;
iVar5=0;
break;
case 79:
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar3=19;
iVar4=15;
iVar1=35;
iVar5=0;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
iVar5=0;
break;
case 81:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
default:
func_164(iVar7, iParam0, 175, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_183(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 9, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_184(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P1_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P1_2", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P1_4", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P1_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P1_11", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P1_12", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P1_13", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P1_15", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P1_16", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P1_17", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P1_18", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P1_19", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P1_20", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P1_21", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P1_22", 16);
iVar3=0;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P1_23", 16);
iVar3=0;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P1_24", 16);
iVar3=0;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P1_25", 16);
iVar3=0;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P1_26", 16);
iVar3=0;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P1_27", 16);
iVar3=0;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P1_28", 16);
iVar3=0;
iVar4=0;
iVar1=4000;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P1_29", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P1_30", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P1_31", 16);
iVar3=0;
iVar4=0;
iVar1=4650;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P1_32", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P1_33", 16);
iVar3=0;
iVar4=0;
iVar1=5000;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P1_34", 16);
iVar3=0;
iVar4=0;
iVar1=4750;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P1_35", 16);
iVar3=0;
iVar4=0;
iVar1=4750;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P1_36", 16);
iVar3=0;
iVar4=0;
iVar1=5200;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P1_37", 16);
iVar3=0;
iVar4=0;
iVar1=5200;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P1_38", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P1_39", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P1_40", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P1_41", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P1_42", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P1_43", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P1_47", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P1_48", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P1_49", 16);
iVar3=0;
iVar4=0;
iVar1=3000;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar3=0;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P1_50", 16);
iVar3=0;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P1_51", 16);
iVar3=0;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P1_52", 16);
iVar3=0;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P1_53", 16);
iVar3=0;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P1_54", 16);
iVar3=0;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 47, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_185(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
break;
case 5:
StringCopy(&Var2, "JBIB_P1_1_0", 16);
iVar3=2;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "JBIB_P1_1_1", 16);
iVar3=2;
iVar4=1;
break;
case 7:
StringCopy(&Var2, "JBIB_P1_1_2", 16);
iVar3=2;
iVar4=2;
break;
case 8:
StringCopy(&Var2, "JBIB_P1_1_3", 16);
iVar3=2;
iVar4=3;
break;
case 9:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar3=3;
iVar4=1;
break;
case 11:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar3=3;
iVar4=2;
break;
case 12:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar3=3;
iVar4=3;
break;
case 13:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar3=3;
iVar4=4;
break;
case 14:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar3=3;
iVar4=5;
break;
case 15:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar3=3;
iVar4=6;
break;
case 16:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar3=3;
iVar4=7;
break;
case 17:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar3=3;
iVar4=8;
break;
case 18:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar3=3;
iVar4=9;
break;
case 19:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar3=3;
iVar4=10;
break;
case 20:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar3=3;
iVar4=11;
break;
case 21:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar3=3;
iVar4=12;
break;
case 22:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar3=3;
iVar4=13;
break;
case 23:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar3=3;
iVar4=14;
break;
case 24:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar3=3;
iVar4=15;
break;
case 25:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar3=4;
iVar4=0;
break;
case 26:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar3=4;
iVar4=1;
break;
case 27:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar3=4;
iVar4=2;
break;
case 28:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar3=4;
iVar4=3;
break;
case 29:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar3=4;
iVar4=4;
break;
case 30:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar3=4;
iVar4=5;
break;
case 31:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar3=4;
iVar4=6;
break;
case 32:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar3=4;
iVar4=7;
break;
case 33:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar3=4;
iVar4=8;
break;
case 34:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar3=4;
iVar4=9;
break;
case 35:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar3=4;
iVar4=10;
break;
case 36:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar3=4;
iVar4=11;
break;
case 37:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar3=4;
iVar4=12;
break;
case 38:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar3=4;
iVar4=13;
break;
case 39:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar3=4;
iVar4=14;
break;
case 40:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar3=4;
iVar4=15;
break;
case 41:
StringCopy(&Var2, "JBIB_P1_5_0", 16);
iVar3=5;
iVar4=0;
break;
case 42:
StringCopy(&Var2, "JBIB_P1_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 43:
StringCopy(&Var2, "JBIB_P1_6_1", 16);
iVar3=6;
iVar4=1;
break;
case 44:
StringCopy(&Var2, "JBIB_P1_7_0", 16);
iVar3=7;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "JBIB_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 46:
StringCopy(&Var2, "JBIB_P1_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 47:
StringCopy(&Var2, "JBIB_P1_10_0", 16);
iVar3=10;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "JBIB_P1_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=48;
break;
case 49:
StringCopy(&Var2, "JBIB_P1_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=35;
break;
case 50:
StringCopy(&Var2, "JBIB_P1_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=32;
break;
case 51:
StringCopy(&Var2, "JBIB_P1_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=35;
break;
case 52:
StringCopy(&Var2, "JBIB_P1_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=48;
break;
case 53:
StringCopy(&Var2, "JBIB_P1_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=52;
break;
case 54:
StringCopy(&Var2, "JBIB_P1_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=38;
break;
case 55:
StringCopy(&Var2, "JBIB_P1_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=42;
break;
case 56:
StringCopy(&Var2, "JBIB_P1_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=38;
break;
case 57:
StringCopy(&Var2, "JBIB_P1_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=35;
break;
case 58:
StringCopy(&Var2, "JBIB_P1_10_11", 16);
iVar3=10;
iVar4=11;
iVar1=48;
break;
case 59:
StringCopy(&Var2, "JBIB_P1_10_12", 16);
iVar3=10;
iVar4=12;
iVar1=42;
break;
case 60:
StringCopy(&Var2, "JBIB_P1_10_13", 16);
iVar3=10;
iVar4=13;
iVar1=45;
break;
case 61:
StringCopy(&Var2, "JBIB_P1_10_14", 16);
iVar3=10;
iVar4=14;
iVar1=45;
break;
case 62:
StringCopy(&Var2, "JBIB_P1_10_15", 16);
iVar3=10;
iVar4=15;
iVar1=49;
break;
default:
func_164(iVar7, iParam0, 63, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_186(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 1, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_187(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P1_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P1_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P1_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P1_4_0", 16);
iVar3=4;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 5, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_188(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=2;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=3;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=4;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=5;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=1;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=2;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=3;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=4;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=5;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=6;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=1;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=2;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=3;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=5;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=6;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=7;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=8;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=9;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=10;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=11;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=12;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=13;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=14;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=15;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=1;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=2;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=3;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=4;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=5;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=6;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=2;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=3;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=4;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=5;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=6;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=7;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 53, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_189(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=5;
iVar4=0;
iVar1=125;
break;
case 6:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=5;
iVar4=1;
iVar1=150;
break;
case 7:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=5;
iVar4=2;
iVar1=175;
break;
case 8:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=5;
iVar4=3;
iVar1=85;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=5;
iVar4=4;
iVar1=150;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=5;
iVar4=5;
iVar1=175;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 12, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_190(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC_P1_9_0", 16);
iVar3=9;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "SPEC_P1_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=195;
break;
case 12:
StringCopy(&Var2, "SPEC_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=195;
break;
case 13:
StringCopy(&Var2, "SPEC_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=195;
break;
case 14:
StringCopy(&Var2, "SPEC_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=250;
break;
case 15:
StringCopy(&Var2, "SPEC_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=250;
break;
case 16:
StringCopy(&Var2, "SPEC_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "SPEC_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=195;
break;
case 18:
StringCopy(&Var2, "SPEC_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=250;
break;
case 19:
StringCopy(&Var2, "SPEC_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=250;
break;
case 20:
StringCopy(&Var2, "SPEC_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=250;
break;
case 21:
StringCopy(&Var2, "SPEC_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=250;
break;
case 22:
StringCopy(&Var2, "SPEC_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=195;
break;
case 23:
StringCopy(&Var2, "SPEC_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=250;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
break;
case 27:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=15;
iVar4=1;
break;
case 29:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=15;
iVar4=2;
break;
case 30:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=15;
iVar4=3;
break;
case 31:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 32:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=15;
iVar4=5;
break;
case 33:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=15;
iVar4=6;
break;
case 34:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=15;
iVar4=7;
break;
case 35:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=15;
iVar4=8;
break;
case 36:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=15;
iVar4=9;
break;
case 37:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=15;
iVar4=10;
break;
case 38:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=15;
iVar4=11;
break;
case 39:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=15;
iVar4=12;
break;
case 40:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=15;
iVar4=13;
break;
case 41:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=15;
iVar4=14;
break;
case 42:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=15;
iVar4=15;
break;
case 43:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=16;
iVar4=0;
break;
case 44:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=16;
iVar4=1;
break;
case 45:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=16;
iVar4=2;
break;
case 46:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=16;
iVar4=3;
break;
case 47:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=16;
iVar4=4;
break;
case 48:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=16;
iVar4=5;
break;
case 49:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=16;
iVar4=6;
break;
case 50:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=16;
iVar4=7;
break;
case 51:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=16;
iVar4=8;
break;
case 52:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=16;
iVar4=9;
break;
case 53:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=16;
iVar4=10;
break;
case 54:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=16;
iVar4=11;
break;
case 55:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=16;
iVar4=12;
break;
case 56:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=16;
iVar4=13;
break;
case 57:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=16;
iVar4=14;
break;
case 58:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=16;
iVar4=15;
break;
case 59:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar3=17;
iVar4=0;
break;
case 60:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar3=17;
iVar4=1;
break;
case 61:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar3=17;
iVar4=2;
break;
case 62:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar3=17;
iVar4=3;
break;
case 63:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar3=17;
iVar4=4;
break;
case 64:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar3=17;
iVar4=5;
break;
case 65:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar3=17;
iVar4=6;
break;
case 66:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar3=17;
iVar4=7;
break;
case 67:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar3=17;
iVar4=8;
break;
case 68:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar3=17;
iVar4=9;
break;
case 69:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar3=17;
iVar4=10;
break;
case 70:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar3=17;
iVar4=11;
break;
case 71:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar3=17;
iVar4=12;
break;
case 72:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar3=17;
iVar4=13;
break;
case 73:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar3=17;
iVar4=14;
break;
case 74:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar3=17;
iVar4=15;
break;
case 75:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 77, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_191(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=1;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 7, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_192(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P1_00_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P1_00_1", 16);
iVar3=0;
iVar4=1;
iVar1=80;
break;
case 2:
StringCopy(&Var2, "FEET_P1_00_2", 16);
iVar3=0;
iVar4=2;
iVar1=80;
break;
case 3:
StringCopy(&Var2, "FEET_P1_00_3", 16);
iVar3=0;
iVar4=3;
iVar1=89;
break;
case 4:
StringCopy(&Var2, "FEET_P1_00_4", 16);
iVar3=0;
iVar4=4;
iVar1=45;
break;
case 5:
StringCopy(&Var2, "FEET_P1_00_5", 16);
iVar3=0;
iVar4=5;
iVar1=35;
break;
case 6:
StringCopy(&Var2, "FEET_P1_00_6", 16);
iVar3=0;
iVar4=6;
iVar1=89;
break;
case 7:
StringCopy(&Var2, "FEET_P1_00_7", 16);
iVar3=0;
iVar4=7;
iVar1=95;
break;
case 8:
StringCopy(&Var2, "FEET_P1_00_8", 16);
iVar3=0;
iVar4=8;
iVar1=115;
break;
case 9:
StringCopy(&Var2, "FEET_P1_00_9", 16);
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "FEET_P1_00_10", 16);
iVar3=0;
iVar4=10;
iVar1=145;
break;
case 11:
StringCopy(&Var2, "FEET_P1_00_11", 16);
iVar3=0;
iVar4=11;
iVar1=145;
break;
case 12:
StringCopy(&Var2, "FEET_P1_01_0", 16);
iVar3=1;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=1;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "FEET_P1_06_0", 16);
iVar3=6;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "FEET_P1_06_1", 16);
iVar3=6;
iVar4=1;
iVar1=180;
break;
case 20:
StringCopy(&Var2, "FEET_P1_06_2", 16);
iVar3=6;
iVar4=2;
iVar1=80;
break;
case 21:
StringCopy(&Var2, "FEET_P1_06_3", 16);
iVar3=6;
iVar4=3;
iVar1=200;
break;
case 22:
StringCopy(&Var2, "FEET_P1_06_4", 16);
iVar3=6;
iVar4=4;
iVar1=220;
break;
case 23:
StringCopy(&Var2, "FEET_P1_06_5", 16);
iVar3=6;
iVar4=5;
iVar1=235;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "FEET_P1_08_0", 16);
iVar3=8;
iVar4=0;
iVar1=870;
break;
case 26:
StringCopy(&Var2, "FEET_P1_08_1", 16);
iVar3=8;
iVar4=1;
iVar1=870;
break;
case 27:
StringCopy(&Var2, "FEET_P1_08_2", 16);
iVar3=8;
iVar4=2;
iVar1=870;
break;
case 28:
StringCopy(&Var2, "FEET_P1_08_3", 16);
iVar3=8;
iVar4=3;
iVar1=1275;
break;
case 29:
StringCopy(&Var2, "FEET_P1_08_4", 16);
iVar3=8;
iVar4=4;
iVar1=1275;
break;
case 30:
StringCopy(&Var2, "FEET_P1_08_5", 16);
iVar3=8;
iVar4=5;
iVar1=1275;
break;
case 31:
StringCopy(&Var2, "FEET_P1_08_6", 16);
iVar3=8;
iVar4=6;
iVar1=1275;
break;
case 32:
StringCopy(&Var2, "FEET_P1_08_7", 16);
iVar3=8;
iVar4=7;
iVar1=1275;
break;
case 33:
StringCopy(&Var2, "FEET_P1_08_8", 16);
iVar3=8;
iVar4=8;
iVar1=1275;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "FEET_P1_10_0", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "FEET_P1_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 37:
StringCopy(&Var2, "FEET_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=50;
break;
case 38:
StringCopy(&Var2, "FEET_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=50;
break;
case 39:
StringCopy(&Var2, "FEET_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=50;
break;
case 40:
StringCopy(&Var2, "FEET_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=50;
break;
case 41:
StringCopy(&Var2, "FEET_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=50;
break;
case 42:
StringCopy(&Var2, "FEET_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=50;
break;
case 43:
StringCopy(&Var2, "FEET_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=50;
break;
case 44:
StringCopy(&Var2, "FEET_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=50;
break;
case 45:
StringCopy(&Var2, "FEET_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=50;
break;
case 46:
StringCopy(&Var2, "FEET_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=50;
break;
case 47:
StringCopy(&Var2, "FEET_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=50;
break;
case 48:
StringCopy(&Var2, "FEET_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=50;
break;
case 49:
StringCopy(&Var2, "FEET_P1_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=50;
break;
case 50:
StringCopy(&Var2, "FEET_P1_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=50;
break;
case 51:
StringCopy(&Var2, "FEET_P1_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=50;
break;
case 52:
StringCopy(&Var2, "FEET_P1_12_0", 16);
iVar3=12;
iVar4=0;
break;
case 53:
StringCopy(&Var2, "FEET_P1_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=25;
break;
case 54:
StringCopy(&Var2, "FEET_P1_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=20;
break;
case 55:
StringCopy(&Var2, "FEET_P1_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=24;
break;
case 56:
StringCopy(&Var2, "FEET_P1_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "FEET_P1_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "FEET_P1_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=29;
break;
case 59:
StringCopy(&Var2, "FEET_P1_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=27;
break;
case 60:
StringCopy(&Var2, "FEET_P1_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=25;
break;
case 61:
StringCopy(&Var2, "FEET_P1_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=30;
break;
case 62:
StringCopy(&Var2, "FEET_P1_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=28;
break;
case 63:
StringCopy(&Var2, "FEET_P1_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=30;
break;
case 64:
StringCopy(&Var2, "FEET_P1_13_0", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "FEET_P1_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=155;
break;
case 66:
StringCopy(&Var2, "FEET_P1_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=155;
break;
case 67:
StringCopy(&Var2, "FEET_P1_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=165;
break;
case 68:
StringCopy(&Var2, "FEET_P1_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=170;
break;
case 69:
StringCopy(&Var2, "FEET_P1_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=160;
break;
case 70:
StringCopy(&Var2, "FEET_P1_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=165;
break;
case 71:
StringCopy(&Var2, "FEET_P1_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=170;
break;
case 72:
StringCopy(&Var2, "FEET_P1_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=160;
break;
case 73:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
break;
case 74:
StringCopy(&Var2, "FEET_P1_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=720;
break;
case 75:
StringCopy(&Var2, "FEET_P1_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=680;
break;
case 76:
StringCopy(&Var2, "FEET_P1_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=650;
break;
case 77:
StringCopy(&Var2, "FEET_P1_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=670;
break;
case 78:
StringCopy(&Var2, "FEET_P1_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=700;
break;
case 79:
StringCopy(&Var2, "FEET_P1_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=680;
break;
case 80:
StringCopy(&Var2, "FEET_P1_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=720;
break;
case 81:
StringCopy(&Var2, "FEET_P1_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=740;
break;
case 82:
StringCopy(&Var2, "FEET_P1_16_8", 16);
iVar3=16;
iVar4=8;
iVar1=760;
break;
case 83:
StringCopy(&Var2, "FEET_P1_16_9", 16);
iVar3=16;
iVar4=9;
iVar1=780;
break;
case 84:
StringCopy(&Var2, "FEET_P1_16_10", 16);
iVar3=16;
iVar4=10;
iVar1=750;
break;
case 85:
StringCopy(&Var2, "FEET_P1_16_11", 16);
iVar3=16;
iVar4=11;
iVar1=700;
break;
case 86:
StringCopy(&Var2, "FEET_P1_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=790;
break;
case 87:
StringCopy(&Var2, "FEET_P1_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
break;
case 88:
StringCopy(&Var2, "FEET_P1_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=860;
break;
case 89:
StringCopy(&Var2, "FEET_P1_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=750;
break;
case 90:
StringCopy(&Var2, "FEET_P1_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=790;
break;
case 91:
StringCopy(&Var2, "FEET_P1_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=840;
break;
case 92:
StringCopy(&Var2, "FEET_P1_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=820;
break;
case 93:
StringCopy(&Var2, "FEET_P1_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=800;
break;
case 94:
StringCopy(&Var2, "FEET_P1_17_8", 16);
iVar3=17;
iVar4=8;
iVar1=850;
break;
case 95:
StringCopy(&Var2, "FEET_P1_17_9", 16);
iVar3=17;
iVar4=9;
iVar1=870;
break;
case 96:
StringCopy(&Var2, "FEET_P1_17_10", 16);
iVar3=17;
iVar4=10;
iVar1=720;
break;
case 97:
StringCopy(&Var2, "FEET_P1_17_11", 16);
iVar3=17;
iVar4=11;
iVar1=740;
break;
case 98:
StringCopy(&Var2, "FEET_P1_17_12", 16);
iVar3=17;
iVar4=12;
iVar1=800;
break;
case 99:
StringCopy(&Var2, "FEET_P1_17_13", 16);
iVar3=17;
iVar4=13;
iVar1=750;
break;
case 100:
StringCopy(&Var2, "FEET_P1_17_14", 16);
iVar3=17;
iVar4=14;
iVar1=770;
break;
case 101:
StringCopy(&Var2, "FEET_P1_17_15", 16);
iVar3=17;
iVar4=15;
iVar1=860;
break;
case 102:
StringCopy(&Var2, "FEET_P1_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=850;
break;
case 103:
StringCopy(&Var2, "FEET_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=800;
break;
case 104:
StringCopy(&Var2, "FEET_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=780;
break;
case 105:
StringCopy(&Var2, "FEET_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=890;
break;
case 106:
StringCopy(&Var2, "FEET_P1_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=820;
break;
case 107:
StringCopy(&Var2, "FEET_P1_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 108:
StringCopy(&Var2, "FEET_P1_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=870;
break;
case 109:
StringCopy(&Var2, "FEET_P1_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=930;
break;
case 110:
StringCopy(&Var2, "FEET_P1_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=880;
break;
case 111:
StringCopy(&Var2, "FEET_P1_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=900;
break;
case 112:
StringCopy(&Var2, "FEET_P1_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=920;
break;
case 113:
StringCopy(&Var2, "FEET_P1_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=970;
break;
case 114:
StringCopy(&Var2, "FEET_P1_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=990;
break;
case 115:
StringCopy(&Var2, "FEET_P1_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=960;
break;
case 116:
StringCopy(&Var2, "FEET_P1_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=980;
break;
case 117:
StringCopy(&Var2, "FEET_P1_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=950;
break;
case 118:
StringCopy(&Var2, "FEET_P1_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=110;
break;
case 119:
StringCopy(&Var2, "FEET_P1_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=115;
break;
case 120:
StringCopy(&Var2, "FEET_P1_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=120;
break;
case 121:
StringCopy(&Var2, "FEET_P1_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=110;
break;
case 122:
StringCopy(&Var2, "FEET_P1_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=125;
break;
case 123:
StringCopy(&Var2, "FEET_P1_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=128;
break;
case 124:
StringCopy(&Var2, "FEET_P1_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=135;
break;
case 125:
StringCopy(&Var2, "FEET_P1_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=130;
break;
case 126:
StringCopy(&Var2, "FEET_P1_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=145;
break;
case 127:
StringCopy(&Var2, "FEET_P1_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "FEET_P1_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=120;
break;
case 129:
StringCopy(&Var2, "FEET_P1_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=150;
break;
case 130:
StringCopy(&Var2, "FEET_P1_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=125;
break;
case 131:
StringCopy(&Var2, "FEET_P1_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=120;
break;
case 132:
StringCopy(&Var2, "FEET_P1_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=130;
break;
case 133:
StringCopy(&Var2, "FEET_P1_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=110;
break;
default:
func_164(iVar7, iParam0, 134, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_193(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P1_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=32;
break;
case 2:
StringCopy(&Var2, "LEGS_P1_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=38;
break;
case 3:
StringCopy(&Var2, "LEGS_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=44;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=4;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=5;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "LEGS_P1_2_0", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "LEGS_P1_6_0", 16);
iVar3=6;
iVar4=0;
break;
case 15:
StringCopy(&Var2, "LEGS_P1_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=690;
break;
case 16:
StringCopy(&Var2, "LEGS_P1_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=720;
break;
case 17:
StringCopy(&Var2, "LEGS_P1_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=850;
break;
case 18:
StringCopy(&Var2, "LEGS_P1_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "LEGS_P1_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=740;
break;
case 20:
StringCopy(&Var2, "LEGS_P1_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=750;
break;
case 21:
StringCopy(&Var2, "LEGS_P1_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=790;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "LEGS_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 25:
StringCopy(&Var2, "LEGS_P1_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=145;
break;
case 26:
StringCopy(&Var2, "LEGS_P1_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=140;
break;
case 27:
StringCopy(&Var2, "LEGS_P1_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=148;
break;
case 28:
StringCopy(&Var2, "LEGS_P1_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 29:
StringCopy(&Var2, "LEGS_P1_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=154;
break;
case 30:
StringCopy(&Var2, "LEGS_P1_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=158;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "LEGS_P1_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=820;
break;
case 34:
StringCopy(&Var2, "LEGS_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=820;
break;
case 35:
StringCopy(&Var2, "LEGS_P1_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=850;
break;
case 36:
StringCopy(&Var2, "LEGS_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=850;
break;
case 37:
StringCopy(&Var2, "LEGS_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=920;
break;
case 38:
StringCopy(&Var2, "LEGS_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=950;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
break;
case 40:
StringCopy(&Var2, "LEGS_P1_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 41:
StringCopy(&Var2, "LEGS_P1_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=45;
break;
case 42:
StringCopy(&Var2, "LEGS_P1_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=48;
break;
case 43:
StringCopy(&Var2, "LEGS_P1_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=45;
break;
case 44:
StringCopy(&Var2, "LEGS_P1_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=48;
break;
case 45:
StringCopy(&Var2, "LEGS_P1_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "LEGS_P1_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=55;
break;
case 47:
StringCopy(&Var2, "LEGS_P1_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=58;
break;
case 48:
StringCopy(&Var2, "LEGS_P1_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=60;
break;
case 49:
StringCopy(&Var2, "LEGS_P1_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "LEGS_P1_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=62;
break;
case 51:
StringCopy(&Var2, "LEGS_P1_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=65;
break;
case 52:
StringCopy(&Var2, "LEGS_P1_14_0", 16);
iVar3=14;
iVar4=0;
break;
case 53:
StringCopy(&Var2, "LEGS_P1_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 54:
StringCopy(&Var2, "LEGS_P1_15_1", 16);
iVar3=15;
iVar4=1;
break;
case 55:
StringCopy(&Var2, "LEGS_P1_15_2", 16);
iVar3=15;
iVar4=2;
break;
case 56:
StringCopy(&Var2, "LEGS_P1_15_3", 16);
iVar3=15;
iVar4=3;
break;
case 57:
StringCopy(&Var2, "LEGS_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 58:
StringCopy(&Var2, "LEGS_P1_15_5", 16);
iVar3=15;
iVar4=5;
break;
case 59:
StringCopy(&Var2, "LEGS_P1_15_6", 16);
iVar3=15;
iVar4=6;
break;
case 60:
StringCopy(&Var2, "LEGS_P1_15_7", 16);
iVar3=15;
iVar4=7;
break;
case 61:
StringCopy(&Var2, "LEGS_P1_15_8", 16);
iVar3=15;
iVar4=8;
break;
case 62:
StringCopy(&Var2, "LEGS_P1_15_9", 16);
iVar3=15;
iVar4=9;
break;
case 63:
StringCopy(&Var2, "LEGS_P1_15_10", 16);
iVar3=15;
iVar4=10;
break;
case 64:
StringCopy(&Var2, "LEGS_P1_15_11", 16);
iVar3=15;
iVar4=11;
break;
case 65:
StringCopy(&Var2, "LEGS_P1_15_12", 16);
iVar3=15;
iVar4=12;
break;
case 66:
StringCopy(&Var2, "LEGS_P1_15_13", 16);
iVar3=15;
iVar4=13;
break;
case 67:
StringCopy(&Var2, "LEGS_P1_15_14", 16);
iVar3=15;
iVar4=14;
break;
case 68:
StringCopy(&Var2, "LEGS_P1_15_15", 16);
iVar3=15;
iVar4=15;
break;
case 69:
StringCopy(&Var2, "LEGS_P1_16_0", 16);
iVar3=16;
iVar4=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=16;
iVar4=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P1_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=160;
break;
case 74:
StringCopy(&Var2, "LEGS_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=180;
break;
case 75:
StringCopy(&Var2, "LEGS_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=180;
break;
case 76:
StringCopy(&Var2, "LEGS_P1_18_4", 16);
iVar3=18;
iVar4=4;
break;
case 77:
StringCopy(&Var2, "LEGS_P1_18_5", 16);
iVar3=18;
iVar4=5;
break;
case 78:
StringCopy(&Var2, "LEGS_P1_19_0", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "LEGS_P1_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=118;
break;
case 80:
StringCopy(&Var2, "LEGS_P1_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=120;
break;
case 81:
StringCopy(&Var2, "LEGS_P1_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=128;
break;
case 82:
StringCopy(&Var2, "LEGS_P1_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=128;
break;
case 83:
StringCopy(&Var2, "LEGS_P1_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=130;
break;
case 84:
StringCopy(&Var2, "LEGS_P1_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=145;
break;
case 85:
StringCopy(&Var2, "LEGS_P1_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=138;
break;
case 86:
StringCopy(&Var2, "LEGS_P1_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=132;
break;
case 87:
StringCopy(&Var2, "LEGS_P1_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=148;
break;
case 88:
StringCopy(&Var2, "LEGS_P1_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=118;
break;
case 89:
StringCopy(&Var2, "LEGS_P1_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=118;
break;
case 90:
StringCopy(&Var2, "LEGS_P1_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=118;
break;
case 91:
StringCopy(&Var2, "LEGS_P1_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=129;
break;
case 92:
StringCopy(&Var2, "LEGS_P1_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=135;
break;
case 93:
StringCopy(&Var2, "LEGS_P1_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=135;
break;
case 94:
StringCopy(&Var2, "LEGS_P1_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=118;
break;
case 95:
StringCopy(&Var2, "LEGS_P1_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=118;
break;
case 96:
StringCopy(&Var2, "LEGS_P1_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=118;
break;
case 97:
StringCopy(&Var2, "LEGS_P1_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=55;
break;
case 98:
StringCopy(&Var2, "LEGS_P1_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=55;
break;
case 99:
StringCopy(&Var2, "LEGS_P1_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=59;
break;
case 100:
StringCopy(&Var2, "LEGS_P1_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=59;
break;
case 101:
StringCopy(&Var2, "LEGS_P1_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=65;
break;
case 102:
StringCopy(&Var2, "LEGS_P1_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=65;
break;
case 103:
StringCopy(&Var2, "LEGS_P1_22_6", 16);
iVar3=22;
iVar4=6;
iVar1=69;
break;
case 104:
StringCopy(&Var2, "LEGS_P1_22_7", 16);
iVar3=22;
iVar4=7;
iVar1=69;
break;
case 105:
StringCopy(&Var2, "LEGS_P1_22_8", 16);
iVar3=22;
iVar4=8;
iVar1=75;
break;
case 106:
StringCopy(&Var2, "LEGS_P1_22_9", 16);
iVar3=22;
iVar4=9;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "LEGS_P1_22_10", 16);
iVar3=22;
iVar4=10;
iVar1=65;
break;
case 108:
StringCopy(&Var2, "LEGS_P1_22_11", 16);
iVar3=22;
iVar4=11;
iVar1=65;
break;
case 109:
StringCopy(&Var2, "LEGS_P1_22_12", 16);
iVar3=22;
iVar4=12;
iVar1=65;
break;
case 110:
StringCopy(&Var2, "LEGS_P1_22_13", 16);
iVar3=22;
iVar4=13;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P1_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=38;
break;
case 112:
StringCopy(&Var2, "LEGS_P1_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=38;
break;
case 113:
StringCopy(&Var2, "LEGS_P1_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=28;
break;
case 114:
StringCopy(&Var2, "LEGS_P1_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=34;
break;
case 115:
StringCopy(&Var2, "LEGS_P1_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=36;
break;
case 116:
StringCopy(&Var2, "LEGS_P1_23_5", 16);
iVar3=23;
iVar4=5;
iVar1=32;
break;
default:
func_164(iVar7, iParam0, 117, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_194(int iParam0){
if(iParam0 < 107){
func_197(iParam0);
}elseif(iParam0 < 227){
func_196(iParam0);
}else{
func_195(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_164(3, iParam0, 318, -1);
}}


void func_195(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 227:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar3=23;
iVar4=0;
iVar6=3;
break;
case 228:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar3=23;
iVar4=1;
iVar6=3;
break;
case 229:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar3=23;
iVar4=2;
iVar6=3;
break;
case 230:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar3=23;
iVar4=3;
iVar6=3;
break;
case 231:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar3=23;
iVar4=4;
iVar6=3;
break;
case 232:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar3=23;
iVar4=5;
iVar6=3;
break;
case 233:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar3=23;
iVar4=6;
iVar6=3;
break;
case 234:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar3=23;
iVar4=7;
iVar6=3;
break;
case 235:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar3=23;
iVar4=8;
iVar6=3;
break;
case 236:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar3=23;
iVar4=9;
iVar6=3;
break;
case 237:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar3=23;
iVar4=10;
iVar6=3;
break;
case 238:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar3=23;
iVar4=11;
iVar6=3;
break;
case 239:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar3=23;
iVar4=12;
iVar6=3;
break;
case 240:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar3=23;
iVar4=13;
iVar6=3;
break;
case 241:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar3=23;
iVar4=14;
iVar6=3;
break;
case 242:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar3=23;
iVar4=15;
iVar6=3;
break;
case 243:
StringCopy(&Var2, "TORSO_P1_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=2200;
iVar6=3;
break;
case 244:
StringCopy(&Var2, "TORSO_P1_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=2200;
iVar6=3;
break;
case 245:
StringCopy(&Var2, "TORSO_P1_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=2200;
iVar6=3;
break;
case 246:
StringCopy(&Var2, "TORSO_P1_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=2200;
iVar6=3;
break;
case 247:
StringCopy(&Var2, "TORSO_P1_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=2200;
iVar6=3;
break;
case 248:
StringCopy(&Var2, "TORSO_P1_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=2200;
iVar6=3;
break;
case 249:
StringCopy(&Var2, "TORSO_P1_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=2200;
iVar6=3;
break;
case 250:
StringCopy(&Var2, "TORSO_P1_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=2200;
iVar6=3;
break;
case 251:
StringCopy(&Var2, "TORSO_P1_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=2200;
iVar6=3;
break;
case 252:
StringCopy(&Var2, "TORSO_P1_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=2200;
iVar6=3;
break;
case 253:
StringCopy(&Var2, "TORSO_P1_24_10", 16);
iVar3=24;
iVar4=10;
iVar1=2200;
iVar6=3;
break;
case 254:
StringCopy(&Var2, "TORSO_P1_24_11", 16);
iVar3=24;
iVar4=11;
iVar1=2200;
iVar6=3;
break;
case 255:
StringCopy(&Var2, "TORSO_P1_24_12", 16);
iVar3=24;
iVar4=12;
iVar1=2200;
iVar6=3;
break;
case 256:
StringCopy(&Var2, "TORSO_P1_24_13", 16);
iVar3=24;
iVar4=13;
iVar1=2200;
iVar6=3;
break;
case 257:
StringCopy(&Var2, "TORSO_P1_24_14", 16);
iVar3=24;
iVar4=14;
iVar1=2200;
iVar6=3;
break;
case 258:
StringCopy(&Var2, "TORSO_P1_24_15", 16);
iVar3=24;
iVar4=15;
iVar1=2200;
iVar6=3;
break;
case 259:
StringCopy(&Var2, "TORSO_P1_25_0", 16);
iVar3=25;
iVar4=0;
bVar0=true;
iVar6=3;
break;
case 260:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
iVar6=1;
break;
case 261:
StringCopy(&Var2, "TORSO_P1_27_0", 16);
iVar3=27;
iVar4=0;
iVar1=150;
break;
case 262:
StringCopy(&Var2, "TORSO_P1_27_1", 16);
iVar3=27;
iVar4=1;
iVar1=160;
break;
case 263:
StringCopy(&Var2, "TORSO_P1_27_2", 16);
iVar3=27;
iVar4=2;
iVar1=150;
break;
case 264:
StringCopy(&Var2, "TORSO_P1_27_3", 16);
iVar3=27;
iVar4=3;
iVar1=150;
break;
case 265:
StringCopy(&Var2, "TORSO_P1_27_4", 16);
iVar3=27;
iVar4=4;
iVar1=160;
break;
case 266:
StringCopy(&Var2, "TORSO_P1_27_5", 16);
iVar3=27;
iVar4=5;
iVar1=160;
break;
case 267:
StringCopy(&Var2, "TORSO_P1_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=88;
break;
case 268:
StringCopy(&Var2, "TORSO_P1_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=60;
break;
case 269:
StringCopy(&Var2, "TORSO_P1_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=70;
break;
case 270:
StringCopy(&Var2, "TORSO_P1_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=80;
break;
case 271:
StringCopy(&Var2, "TORSO_P1_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=90;
break;
case 272:
StringCopy(&Var2, "TORSO_P1_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=80;
break;
case 273:
StringCopy(&Var2, "TORSO_P1_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=70;
break;
case 274:
StringCopy(&Var2, "TORSO_P1_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=95;
break;
case 275:
StringCopy(&Var2, "TORSO_P1_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=105;
break;
case 276:
StringCopy(&Var2, "TORSO_P1_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=95;
break;
case 277:
StringCopy(&Var2, "TORSO_P1_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=110;
break;
case 278:
StringCopy(&Var2, "TORSO_P1_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=98;
break;
case 279:
StringCopy(&Var2, "TORSO_P1_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=88;
break;
case 280:
StringCopy(&Var2, "TORSO_P1_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=98;
break;
case 281:
StringCopy(&Var2, "TORSO_P1_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=110;
break;
case 282:
StringCopy(&Var2, "TORSO_P1_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=98;
break;
case 283:
StringCopy(&Var2, "TORSO_P1_29_0", 16);
iVar3=29;
iVar4=0;
iVar1=250;
break;
case 284:
StringCopy(&Var2, "TORSO_P1_29_1", 16);
iVar3=29;
iVar4=1;
iVar1=270;
break;
case 285:
StringCopy(&Var2, "TORSO_P1_29_2", 16);
iVar3=29;
iVar4=2;
iVar1=280;
break;
case 286:
StringCopy(&Var2, "TORSO_P1_29_3", 16);
iVar3=29;
iVar4=3;
iVar1=275;
break;
case 287:
StringCopy(&Var2, "TORSO_P1_29_4", 16);
iVar3=29;
iVar4=4;
iVar1=290;
break;
case 288:
StringCopy(&Var2, "TORSO_P1_29_5", 16);
iVar3=29;
iVar4=5;
iVar1=35;
break;
case 289:
StringCopy(&Var2, "TORSO_P1_29_6", 16);
iVar3=29;
iVar4=6;
iVar1=35;
break;
case 290:
StringCopy(&Var2, "TORSO_P1_29_7", 16);
iVar3=29;
iVar4=7;
iVar1=35;
break;
case 291:
StringCopy(&Var2, "TORSO_P1_29_8", 16);
iVar3=29;
iVar4=8;
iVar1=295;
break;
case 292:
StringCopy(&Var2, "TORSO_P1_29_9", 16);
iVar3=29;
iVar4=9;
iVar1=35;
break;
case 293:
StringCopy(&Var2, "TORSO_P1_29_10", 16);
iVar3=29;
iVar4=10;
iVar1=35;
break;
case 294:
StringCopy(&Var2, "TORSO_P1_29_11", 16);
iVar3=29;
iVar4=11;
iVar1=35;
break;
case 295:
StringCopy(&Var2, "TORSO_P1_29_12", 16);
iVar3=29;
iVar4=12;
break;
case 296:
StringCopy(&Var2, "TORSO_P1_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=1750;
break;
case 297:
StringCopy(&Var2, "TORSO_P1_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=1920;
break;
case 298:
StringCopy(&Var2, "TORSO_P1_30_2", 16);
iVar3=30;
iVar4=2;
iVar1=1890;
break;
case 299:
StringCopy(&Var2, "TORSO_P1_30_3", 16);
iVar3=30;
iVar4=3;
iVar1=1850;
break;
case 300:
StringCopy(&Var2, "TORSO_P1_30_4", 16);
iVar3=30;
iVar4=4;
iVar1=1750;
break;
case 301:
StringCopy(&Var2, "TORSO_P1_30_5", 16);
iVar3=30;
iVar4=5;
iVar1=1990;
break;
case 302:
StringCopy(&Var2, "TORSO_P1_30_6", 16);
iVar3=30;
iVar4=6;
iVar1=1820;
break;
case 303:
StringCopy(&Var2, "TORSO_P1_30_7", 16);
iVar3=30;
iVar4=7;
iVar1=1990;
break;
case 304:
StringCopy(&Var2, "TORSO_P1_30_8", 16);
iVar3=30;
iVar4=8;
iVar1=1920;
break;
case 305:
StringCopy(&Var2, "TORSO_P1_30_9", 16);
iVar3=30;
iVar4=9;
iVar1=1850;
break;
case 306:
StringCopy(&Var2, "TORSO_P1_30_10", 16);
iVar3=30;
iVar4=10;
iVar1=1990;
break;
case 307:
StringCopy(&Var2, "TORSO_P1_30_11", 16);
iVar3=30;
iVar4=11;
iVar1=1790;
break;
case 308:
StringCopy(&Var2, "TORSO_P1_30_12", 16);
iVar3=30;
iVar4=12;
iVar1=1790;
break;
case 309:
StringCopy(&Var2, "TORSO_P1_31_0", 16);
iVar3=31;
iVar4=0;
iVar1=69;
break;
case 310:
StringCopy(&Var2, "TORSO_P1_31_1", 16);
iVar3=31;
iVar4=1;
iVar1=75;
break;
case 311:
StringCopy(&Var2, "TORSO_P1_31_2", 16);
iVar3=31;
iVar4=2;
iVar1=75;
break;
case 312:
StringCopy(&Var2, "TORSO_P1_31_3", 16);
iVar3=31;
iVar4=3;
iVar1=79;
break;
case 313:
StringCopy(&Var2, "TORSO_P1_31_4", 16);
iVar3=31;
iVar4=4;
iVar1=79;
break;
case 314:
StringCopy(&Var2, "TORSO_P1_31_5", 16);
iVar3=31;
iVar4=5;
iVar1=89;
break;
case 315:
StringCopy(&Var2, "TORSO_P1_31_6", 16);
iVar3=31;
iVar4=6;
iVar1=85;
break;
case 316:
StringCopy(&Var2, "TORSO_P1_31_7", 16);
iVar3=31;
iVar4=7;
iVar1=85;
break;
case 317:
StringCopy(&Var2, "TORSO_P1_31_8", 16);
iVar3=31;
iVar4=8;
break;
default:
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_196(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 107:
StringCopy(&Var2, "TORSO_P1_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=195;
break;
case 108:
StringCopy(&Var2, "TORSO_P1_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=420;
break;
case 109:
StringCopy(&Var2, "TORSO_P1_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=390;
break;
case 110:
StringCopy(&Var2, "TORSO_P1_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=450;
break;
case 111:
StringCopy(&Var2, "TORSO_P1_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=400;
break;
case 112:
StringCopy(&Var2, "TORSO_P1_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=390;
break;
case 113:
StringCopy(&Var2, "TORSO_P1_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=570;
break;
case 114:
StringCopy(&Var2, "TORSO_P1_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=390;
break;
case 115:
StringCopy(&Var2, "TORSO_P1_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=470;
break;
case 116:
StringCopy(&Var2, "TORSO_P1_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=390;
break;
case 117:
StringCopy(&Var2, "TORSO_P1_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=520;
break;
case 118:
StringCopy(&Var2, "TORSO_P1_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=490;
break;
case 119:
StringCopy(&Var2, "TORSO_P1_12_12", 16);
iVar3=12;
iVar4=12;
iVar1=490;
break;
case 120:
StringCopy(&Var2, "TORSO_P1_12_13", 16);
iVar3=12;
iVar4=13;
iVar1=590;
break;
case 121:
StringCopy(&Var2, "TORSO_P1_12_14", 16);
iVar3=12;
iVar4=14;
iVar1=560;
break;
case 122:
StringCopy(&Var2, "TORSO_P1_12_15", 16);
iVar3=12;
iVar4=15;
iVar1=520;
break;
case 123:
StringCopy(&Var2, "TORSO_P1_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 124:
StringCopy(&Var2, "TORSO_P1_13_1", 16);
iVar3=13;
iVar4=1;
break;
case 125:
StringCopy(&Var2, "TORSO_P1_13_2", 16);
iVar3=13;
iVar4=2;
break;
case 126:
StringCopy(&Var2, "TORSO_P1_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=90;
break;
case 127:
StringCopy(&Var2, "TORSO_P1_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=85;
break;
case 128:
StringCopy(&Var2, "TORSO_P1_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "TORSO_P1_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=90;
break;
case 130:
StringCopy(&Var2, "TORSO_P1_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=47;
break;
case 131:
StringCopy(&Var2, "TORSO_P1_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=45;
break;
case 132:
StringCopy(&Var2, "TORSO_P1_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=48;
break;
case 133:
StringCopy(&Var2, "TORSO_P1_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=45;
break;
case 134:
StringCopy(&Var2, "TORSO_P1_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=85;
break;
case 135:
StringCopy(&Var2, "TORSO_P1_13_12", 16);
iVar3=13;
iVar4=12;
iVar1=45;
break;
case 136:
StringCopy(&Var2, "TORSO_P1_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=47;
break;
case 137:
StringCopy(&Var2, "TORSO_P1_13_14", 16);
iVar3=13;
iVar4=14;
iVar1=45;
break;
case 138:
StringCopy(&Var2, "TORSO_P1_13_15", 16);
iVar3=13;
iVar4=15;
iVar1=48;
break;
case 139:
StringCopy(&Var2, "TORSO_P1_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=290;
break;
case 140:
StringCopy(&Var2, "TORSO_P1_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=290;
break;
case 141:
StringCopy(&Var2, "TORSO_P1_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=290;
break;
case 142:
StringCopy(&Var2, "TORSO_P1_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=290;
break;
case 143:
StringCopy(&Var2, "TORSO_P1_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=290;
break;
case 144:
StringCopy(&Var2, "TORSO_P1_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=290;
break;
case 145:
StringCopy(&Var2, "TORSO_P1_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=65;
break;
case 146:
StringCopy(&Var2, "TORSO_P1_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=65;
break;
case 147:
StringCopy(&Var2, "TORSO_P1_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
break;
case 148:
StringCopy(&Var2, "TORSO_P1_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=220;
break;
case 149:
StringCopy(&Var2, "TORSO_P1_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=220;
break;
case 150:
StringCopy(&Var2, "TORSO_P1_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=240;
break;
case 151:
StringCopy(&Var2, "TORSO_P1_15_4", 16);
iVar3=15;
iVar4=4;
break;
case 152:
StringCopy(&Var2, "TORSO_P1_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=250;
break;
case 153:
StringCopy(&Var2, "TORSO_P1_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=260;
break;
case 154:
StringCopy(&Var2, "TORSO_P1_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=40;
break;
case 155:
StringCopy(&Var2, "TORSO_P1_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=50;
break;
case 156:
StringCopy(&Var2, "TORSO_P1_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=45;
break;
case 157:
StringCopy(&Var2, "TORSO_P1_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=40;
break;
case 158:
StringCopy(&Var2, "TORSO_P1_15_11", 16);
iVar3=15;
iVar4=11;
iVar1=55;
break;
case 159:
StringCopy(&Var2, "TORSO_P1_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 160:
StringCopy(&Var2, "TORSO_P1_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=40;
break;
case 161:
StringCopy(&Var2, "TORSO_P1_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=50;
break;
case 162:
StringCopy(&Var2, "TORSO_P1_17_2", 16);
iVar3=17;
iVar4=2;
break;
case 163:
StringCopy(&Var2, "TORSO_P1_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=50;
break;
case 164:
StringCopy(&Var2, "TORSO_P1_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=50;
break;
case 165:
StringCopy(&Var2, "TORSO_P1_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=50;
break;
case 166:
StringCopy(&Var2, "TORSO_P1_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=50;
break;
case 167:
StringCopy(&Var2, "TORSO_P1_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=50;
break;
case 168:
StringCopy(&Var2, "TORSO_P1_17_8", 16);
iVar3=17;
iVar4=8;
iVar1=50;
break;
case 169:
StringCopy(&Var2, "TORSO_P1_17_9", 16);
iVar3=17;
iVar4=9;
iVar1=50;
break;
case 170:
StringCopy(&Var2, "TORSO_P1_17_10", 16);
iVar3=17;
iVar4=10;
iVar1=50;
break;
case 171:
StringCopy(&Var2, "TORSO_P1_17_11", 16);
iVar3=17;
iVar4=11;
iVar1=50;
break;
case 172:
StringCopy(&Var2, "TORSO_P1_17_12", 16);
iVar3=17;
iVar4=12;
iVar1=50;
break;
case 173:
StringCopy(&Var2, "TORSO_P1_17_13", 16);
iVar3=17;
iVar4=13;
iVar1=50;
break;
case 174:
StringCopy(&Var2, "TORSO_P1_17_14", 16);
iVar3=17;
iVar4=14;
iVar1=50;
break;
case 175:
StringCopy(&Var2, "TORSO_P1_17_15", 16);
iVar3=17;
iVar4=15;
iVar1=50;
break;
case 176:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar3=18;
iVar4=0;
iVar6=3;
break;
case 177:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar3=18;
iVar4=1;
iVar6=3;
break;
case 178:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar3=18;
iVar4=2;
iVar6=3;
break;
case 179:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar3=18;
iVar4=3;
iVar6=3;
break;
case 180:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar3=18;
iVar4=4;
iVar6=3;
break;
case 181:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar3=18;
iVar4=5;
iVar6=3;
break;
case 182:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar3=18;
iVar4=6;
iVar6=3;
break;
case 183:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar3=18;
iVar4=7;
iVar6=3;
break;
case 184:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar3=18;
iVar4=8;
iVar6=3;
break;
case 185:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar3=18;
iVar4=9;
iVar6=3;
break;
case 186:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar3=18;
iVar4=10;
iVar6=3;
break;
case 187:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar3=18;
iVar4=11;
iVar6=3;
break;
case 188:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar3=18;
iVar4=12;
iVar6=3;
break;
case 189:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar3=18;
iVar4=13;
iVar6=3;
break;
case 190:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar3=18;
iVar4=14;
iVar6=3;
break;
case 191:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar3=18;
iVar4=15;
iVar6=3;
break;
case 192:
StringCopy(&Var2, "TORSO_P1_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=480;
iVar6=3;
break;
case 193:
StringCopy(&Var2, "TORSO_P1_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=440;
iVar6=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P1_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=440;
iVar6=3;
break;
case 195:
StringCopy(&Var2, "TORSO_P1_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=520;
iVar6=3;
break;
case 196:
StringCopy(&Var2, "TORSO_P1_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=440;
iVar6=3;
break;
case 197:
StringCopy(&Var2, "TORSO_P1_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=440;
iVar6=3;
break;
case 198:
StringCopy(&Var2, "TORSO_P1_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=480;
iVar6=3;
break;
case 199:
StringCopy(&Var2, "TORSO_P1_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=480;
iVar6=3;
break;
case 200:
StringCopy(&Var2, "TORSO_P1_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=480;
iVar6=3;
break;
case 201:
StringCopy(&Var2, "TORSO_P1_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=480;
iVar6=3;
break;
case 202:
StringCopy(&Var2, "TORSO_P1_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=480;
iVar6=3;
break;
case 203:
StringCopy(&Var2, "TORSO_P1_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=480;
iVar6=3;
break;
case 204:
StringCopy(&Var2, "TORSO_P1_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=520;
iVar6=3;
break;
case 205:
StringCopy(&Var2, "TORSO_P1_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=520;
iVar6=3;
break;
case 206:
StringCopy(&Var2, "TORSO_P1_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=520;
iVar6=3;
break;
case 207:
StringCopy(&Var2, "TORSO_P1_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=440;
iVar6=3;
break;
case 208:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 209:
StringCopy(&Var2, "TORSO_P1_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=220;
break;
case 210:
StringCopy(&Var2, "TORSO_P1_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=200;
break;
case 211:
StringCopy(&Var2, "TORSO_P1_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=240;
break;
case 212:
StringCopy(&Var2, "TORSO_P1_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=240;
break;
case 213:
StringCopy(&Var2, "TORSO_P1_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=260;
break;
case 214:
StringCopy(&Var2, "TORSO_P1_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=275;
break;
case 215:
StringCopy(&Var2, "TORSO_P1_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=275;
break;
case 216:
StringCopy(&Var2, "TORSO_P1_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=280;
break;
case 217:
StringCopy(&Var2, "TORSO_P1_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=280;
break;
case 218:
StringCopy(&Var2, "TORSO_P1_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=280;
break;
case 219:
StringCopy(&Var2, "TORSO_P1_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=280;
break;
case 220:
StringCopy(&Var2, "TORSO_P1_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=280;
break;
case 221:
StringCopy(&Var2, "TORSO_P1_21_12", 16);
iVar3=21;
iVar4=12;
iVar1=280;
break;
case 222:
StringCopy(&Var2, "TORSO_P1_21_13", 16);
iVar3=21;
iVar4=13;
iVar1=280;
break;
case 223:
StringCopy(&Var2, "TORSO_P1_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=3100;
iVar6=3;
break;
case 224:
StringCopy(&Var2, "TORSO_P1_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=2800;
iVar6=3;
break;
case 225:
StringCopy(&Var2, "TORSO_P1_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=2500;
iVar6=3;
break;
case 226:
StringCopy(&Var2, "TORSO_P1_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=3000;
iVar6=3;
break;
default:
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_197(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P1_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P1_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=180;
break;
case 3:
StringCopy(&Var2, "TORSO_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=22;
break;
case 4:
StringCopy(&Var2, "TORSO_P1_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=20;
break;
case 5:
StringCopy(&Var2, "TORSO_P1_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=18;
break;
case 6:
StringCopy(&Var2, "TORSO_P1_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=19;
break;
case 7:
StringCopy(&Var2, "TORSO_P1_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P1_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P1_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=19;
break;
case 10:
StringCopy(&Var2, "TORSO_P1_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=19;
break;
case 11:
StringCopy(&Var2, "TORSO_P1_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=18;
break;
case 12:
StringCopy(&Var2, "TORSO_P1_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=20;
break;
case 13:
StringCopy(&Var2, "TORSO_P1_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=22;
break;
case 14:
StringCopy(&Var2, "TORSO_P1_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=19;
break;
case 15:
StringCopy(&Var2, "TORSO_P1_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=22;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
bVar0=true;
iVar6=4;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=2;
bVar0=true;
iVar6=4;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=3;
bVar0=true;
iVar6=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=4;
bVar0=true;
iVar6=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=5;
bVar0=true;
iVar6=4;
break;
case 22:
StringCopy(&Var2, "TORSO_P1_2_0", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar6=3;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar6=1;
break;
case 24:
StringCopy(&Var2, "TORSO_P1_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=20;
iVar6=2;
break;
case 25:
StringCopy(&Var2, "TORSO_P1_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=22;
iVar6=2;
break;
case 26:
StringCopy(&Var2, "TORSO_P1_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=20;
iVar6=2;
break;
case 27:
StringCopy(&Var2, "TORSO_P1_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=25;
iVar6=2;
break;
case 28:
StringCopy(&Var2, "TORSO_P1_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=23;
iVar6=2;
break;
case 29:
StringCopy(&Var2, "TORSO_P1_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=25;
iVar6=2;
break;
case 30:
StringCopy(&Var2, "TORSO_P1_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=28;
iVar6=2;
break;
case 31:
StringCopy(&Var2, "TORSO_P1_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=26;
iVar6=2;
break;
case 32:
StringCopy(&Var2, "TORSO_P1_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=24;
iVar6=2;
break;
case 33:
StringCopy(&Var2, "TORSO_P1_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=27;
iVar6=2;
break;
case 34:
StringCopy(&Var2, "TORSO_P1_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=29;
iVar6=2;
break;
case 35:
StringCopy(&Var2, "TORSO_P1_4_11", 16);
iVar3=4;
iVar4=11;
iVar1=28;
iVar6=2;
break;
case 36:
StringCopy(&Var2, "TORSO_P1_4_12", 16);
iVar3=4;
iVar4=12;
iVar1=25;
iVar6=2;
break;
case 37:
StringCopy(&Var2, "TORSO_P1_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=22;
iVar6=2;
break;
case 38:
StringCopy(&Var2, "TORSO_P1_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=27;
iVar6=2;
break;
case 39:
StringCopy(&Var2, "TORSO_P1_4_15", 16);
iVar3=4;
iVar4=15;
iVar1=29;
iVar6=2;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar6=4;
break;
case 41:
StringCopy(&Var2, "TORSO_P1_6_0", 16);
iVar3=6;
iVar4=0;
iVar6=3;
break;
case 42:
StringCopy(&Var2, "TORSO_P1_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=1270;
iVar6=3;
break;
case 43:
StringCopy(&Var2, "TORSO_P1_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=1270;
iVar6=3;
break;
case 44:
StringCopy(&Var2, "TORSO_P1_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=1270;
iVar6=3;
break;
case 45:
StringCopy(&Var2, "TORSO_P1_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=1090;
iVar6=3;
break;
case 46:
StringCopy(&Var2, "TORSO_P1_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=1090;
iVar6=3;
break;
case 47:
StringCopy(&Var2, "TORSO_P1_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=1120;
iVar6=3;
break;
case 48:
StringCopy(&Var2, "TORSO_P1_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=1120;
iVar6=3;
break;
case 49:
StringCopy(&Var2, "TORSO_P1_6_8", 16);
iVar3=6;
iVar4=8;
iVar1=1290;
iVar6=3;
break;
case 50:
StringCopy(&Var2, "TORSO_P1_6_9", 16);
iVar3=6;
iVar4=9;
iVar1=1290;
iVar6=3;
break;
case 51:
StringCopy(&Var2, "TORSO_P1_6_10", 16);
iVar3=6;
iVar4=10;
iVar1=1320;
iVar6=3;
break;
case 52:
StringCopy(&Var2, "TORSO_P1_6_11", 16);
iVar3=6;
iVar4=11;
iVar1=1320;
iVar6=3;
break;
case 53:
StringCopy(&Var2, "TORSO_P1_6_12", 16);
iVar3=6;
iVar4=12;
iVar1=1590;
iVar6=3;
break;
case 54:
StringCopy(&Var2, "TORSO_P1_6_13", 16);
iVar3=6;
iVar4=13;
iVar1=1590;
iVar6=3;
break;
case 55:
StringCopy(&Var2, "TORSO_P1_6_14", 16);
iVar3=6;
iVar4=14;
iVar1=1590;
iVar6=3;
break;
case 56:
StringCopy(&Var2, "TORSO_P1_6_15", 16);
iVar3=6;
iVar4=15;
iVar1=1320;
iVar6=3;
break;
case 57:
StringCopy(&Var2, "TORSO_P1_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=98;
break;
case 58:
StringCopy(&Var2, "TORSO_P1_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=98;
break;
case 59:
StringCopy(&Var2, "TORSO_P1_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=110;
break;
case 60:
StringCopy(&Var2, "TORSO_P1_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=110;
break;
case 61:
StringCopy(&Var2, "TORSO_P1_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=118;
break;
case 62:
StringCopy(&Var2, "TORSO_P1_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=120;
break;
case 63:
StringCopy(&Var2, "TORSO_P1_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=120;
break;
case 64:
StringCopy(&Var2, "TORSO_P1_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=129;
break;
case 65:
StringCopy(&Var2, "TORSO_P1_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=125;
break;
case 66:
StringCopy(&Var2, "TORSO_P1_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=125;
break;
case 67:
StringCopy(&Var2, "TORSO_P1_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=129;
break;
case 68:
StringCopy(&Var2, "TORSO_P1_7_11", 16);
iVar3=7;
iVar4=11;
iVar1=129;
break;
case 69:
StringCopy(&Var2, "TORSO_P1_7_12", 16);
iVar3=7;
iVar4=12;
iVar1=135;
break;
case 70:
StringCopy(&Var2, "TORSO_P1_7_13", 16);
iVar3=7;
iVar4=13;
iVar1=139;
break;
case 71:
StringCopy(&Var2, "TORSO_P1_7_14", 16);
iVar3=7;
iVar4=14;
iVar1=145;
break;
case 72:
StringCopy(&Var2, "TORSO_P1_7_15", 16);
iVar3=7;
iVar4=15;
iVar1=145;
break;
case 73:
StringCopy(&Var2, "TORSO_P1_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 74:
StringCopy(&Var2, "TORSO_P1_8_1", 16);
iVar3=8;
iVar4=1;
break;
case 75:
StringCopy(&Var2, "TORSO_P1_8_2", 16);
iVar3=8;
iVar4=2;
break;
case 76:
StringCopy(&Var2, "TORSO_P1_8_3", 16);
iVar3=8;
iVar4=3;
break;
case 77:
StringCopy(&Var2, "TORSO_P1_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=30;
break;
case 78:
StringCopy(&Var2, "TORSO_P1_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=38;
break;
case 79:
StringCopy(&Var2, "TORSO_P1_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=32;
break;
case 80:
StringCopy(&Var2, "TORSO_P1_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=30;
break;
case 81:
StringCopy(&Var2, "TORSO_P1_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=33;
break;
case 82:
StringCopy(&Var2, "TORSO_P1_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=35;
break;
case 83:
StringCopy(&Var2, "TORSO_P1_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=35;
break;
case 84:
StringCopy(&Var2, "TORSO_P1_8_11", 16);
iVar3=8;
iVar4=11;
iVar1=38;
break;
case 85:
StringCopy(&Var2, "TORSO_P1_8_12", 16);
iVar3=8;
iVar4=12;
iVar1=33;
break;
case 86:
StringCopy(&Var2, "TORSO_P1_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=35;
break;
case 87:
StringCopy(&Var2, "TORSO_P1_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=38;
break;
case 88:
StringCopy(&Var2, "TORSO_P1_8_15", 16);
iVar3=8;
iVar4=15;
iVar1=32;
break;
case 89:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "TORSO_P1_11_0", 16);
iVar3=11;
iVar4=0;
break;
case 92:
StringCopy(&Var2, "TORSO_P1_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=59;
break;
case 93:
StringCopy(&Var2, "TORSO_P1_11_2", 16);
iVar3=11;
iVar4=2;
break;
case 94:
StringCopy(&Var2, "TORSO_P1_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=25;
break;
case 95:
StringCopy(&Var2, "TORSO_P1_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=29;
break;
case 96:
StringCopy(&Var2, "TORSO_P1_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=27;
break;
case 97:
StringCopy(&Var2, "TORSO_P1_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=25;
break;
case 98:
StringCopy(&Var2, "TORSO_P1_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=27;
break;
case 99:
StringCopy(&Var2, "TORSO_P1_11_8", 16);
iVar3=11;
iVar4=8;
iVar1=28;
break;
case 100:
StringCopy(&Var2, "TORSO_P1_11_9", 16);
iVar3=11;
iVar4=9;
iVar1=30;
break;
case 101:
StringCopy(&Var2, "TORSO_P1_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=29;
break;
case 102:
StringCopy(&Var2, "TORSO_P1_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=27;
break;
case 103:
StringCopy(&Var2, "TORSO_P1_11_12", 16);
iVar3=11;
iVar4=12;
iVar1=29;
break;
case 104:
StringCopy(&Var2, "TORSO_P1_11_13", 16);
iVar3=11;
iVar4=13;
iVar1=32;
break;
case 105:
StringCopy(&Var2, "TORSO_P1_11_14", 16);
iVar3=11;
iVar4=14;
iVar1=30;
break;
case 106:
StringCopy(&Var2, "TORSO_P1_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=28;
break;
default:
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_198(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P1_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P1_0_1", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P1_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "HAIR_P1_0_3", 16);
iVar3=0;
iVar4=3;
iVar6=3;
break;
case 4:
StringCopy(&Var2, "HAIR_P1_0_4", 16);
iVar3=0;
iVar4=4;
iVar6=3;
break;
case 5:
StringCopy(&Var2, "HAIR_P1_0_5", 16);
iVar3=0;
iVar4=5;
iVar6=3;
break;
case 6:
StringCopy(&Var2, "HAIR_P1_0_6", 16);
iVar3=0;
iVar4=6;
iVar6=3;
break;
case 7:
StringCopy(&Var2, "HAIR_P1_0_7", 16);
iVar3=0;
iVar4=7;
iVar6=3;
break;
case 8:
StringCopy(&Var2, "HAIR_P1_0_8", 16);
iVar3=0;
iVar4=8;
iVar6=3;
break;
case 9:
StringCopy(&Var2, "HAIR_P1_0_9", 16);
iVar3=0;
iVar4=9;
iVar6=3;
break;
case 10:
StringCopy(&Var2, "HAIR_P1_0_10", 16);
iVar3=0;
iVar4=10;
iVar6=3;
break;
case 11:
StringCopy(&Var2, "HAIR_P1_0_11", 16);
iVar3=0;
iVar4=11;
iVar6=3;
break;
case 12:
StringCopy(&Var2, "HAIR_P1_0_12", 16);
iVar3=0;
iVar4=12;
iVar6=3;
break;
case 13:
StringCopy(&Var2, "HAIR_P1_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "HAIR_P1_0_14", 16);
iVar3=0;
iVar4=14;
iVar6=3;
break;
case 15:
StringCopy(&Var2, "HAIR_P1_0_15", 16);
iVar3=0;
iVar4=15;
iVar6=3;
break;
case 16:
StringCopy(&Var2, "HAIR_P1_1_0", 16);
iVar3=1;
iVar4=0;
iVar6=3;
break;
case 17:
StringCopy(&Var2, "HAIR_P1_2_0", 16);
iVar3=2;
iVar4=0;
iVar6=3;
break;
case 18:
StringCopy(&Var2, "HAIR_P1_3_0", 16);
iVar3=3;
iVar4=0;
iVar6=3;
break;
case 19:
StringCopy(&Var2, "HAIR_P1_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 21, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_199(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=0;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=9;
break;
default:
func_164(iVar7, iParam0, 10, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_200(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_217(iParam1);
break;
case 2:
func_216(iParam1);
break;
case 3:
func_213(iParam1);
break;
case 4:
func_212(iParam1);
break;
case 6:
func_211(iParam1);
break;
case 5:
func_210(iParam1);
break;
case 8:
func_209(iParam1);
break;
case 9:
func_208(iParam1);
break;
case 10:
func_207(iParam1);
break;
case 1:
func_206(iParam1);
break;
case 7:
func_205(iParam1);
break;
case 11:
func_204(iParam1);
break;
case 12:
func_203(iParam1);
break;
case 13:
func_202(iParam1);
break;
case 14:
func_201(iParam1);
break;
}}


void func_201(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 11:
StringCopy(&Var2, "PROPS_P0_H1", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P0_H2", 16);
iVar3=2;
iVar4=0;
iVar1=320;
iVar5=11;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
iVar5=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
iVar5=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
iVar5=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
iVar5=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
iVar5=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
iVar5=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
iVar5=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=6;
iVar5=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=7;
iVar5=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P0_H12", 16);
iVar3=12;
iVar4=0;
iVar5=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
iVar5=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar3=14;
iVar4=0;
iVar1=270;
iVar5=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar3=14;
iVar4=1;
iVar1=270;
iVar5=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar3=15;
iVar4=0;
iVar1=200;
iVar5=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar3=15;
iVar4=1;
iVar1=200;
iVar5=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar3=16;
iVar4=0;
iVar1=350;
iVar5=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar3=16;
iVar4=1;
iVar1=350;
iVar5=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar3=17;
iVar4=0;
iVar1=450;
iVar5=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar3=18;
iVar4=0;
iVar1=500;
iVar5=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar3=18;
iVar4=1;
iVar1=500;
iVar5=0;
break;
case 40:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar3=19;
iVar4=0;
iVar1=50;
iVar5=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar3=19;
iVar4=1;
iVar1=50;
iVar5=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar3=20;
iVar4=0;
iVar1=99;
iVar5=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar3=20;
iVar4=1;
iVar1=99;
iVar5=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar3=20;
iVar4=2;
iVar1=99;
iVar5=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
iVar5=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
iVar5=0;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
iVar5=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=1;
iVar5=0;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=2;
iVar5=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=3;
iVar5=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=4;
iVar5=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=5;
iVar5=0;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
iVar5=0;
break;
case 54:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
iVar5=0;
break;
case 55:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
iVar5=0;
break;
case 56:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
iVar5=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=28;
iVar4=0;
iVar5=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P0_E0", 16);
iVar3=0;
iVar4=0;
iVar1=45;
iVar5=10;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
iVar5=10;
break;
case 61:
StringCopy(&Var2, "PROPS_P0_E3", 16);
iVar3=3;
iVar4=0;
iVar1=55;
iVar5=10;
break;
case 62:
StringCopy(&Var2, "PROPS_P0_E4", 16);
iVar3=4;
iVar4=0;
iVar1=58;
iVar5=10;
break;
case 63:
StringCopy(&Var2, "PROPS_P0_E4_1", 16);
iVar3=4;
iVar4=1;
iVar1=56;
iVar5=10;
break;
case 64:
StringCopy(&Var2, "PROPS_P0_E4_2", 16);
iVar3=4;
iVar4=2;
iVar1=60;
iVar5=10;
break;
case 65:
StringCopy(&Var2, "PROPS_P0_E4_3", 16);
iVar3=4;
iVar4=3;
iVar1=65;
iVar5=10;
break;
case 66:
StringCopy(&Var2, "PROPS_P0_E4_4", 16);
iVar3=4;
iVar4=4;
iVar1=62;
iVar5=10;
break;
case 67:
StringCopy(&Var2, "PROPS_P0_E4_5", 16);
iVar3=4;
iVar4=5;
iVar1=65;
iVar5=10;
break;
case 68:
StringCopy(&Var2, "PROPS_P0_E4_6", 16);
iVar3=4;
iVar4=6;
iVar1=68;
iVar5=10;
break;
case 69:
StringCopy(&Var2, "PROPS_P0_E4_7", 16);
iVar3=4;
iVar4=7;
iVar1=68;
iVar5=10;
break;
case 70:
StringCopy(&Var2, "PROPS_P0_E5", 16);
iVar3=5;
iVar4=0;
iVar1=65;
iVar5=10;
break;
case 71:
StringCopy(&Var2, "PROPS_P0_E5_1", 16);
iVar3=5;
iVar4=1;
iVar1=69;
iVar5=10;
break;
case 72:
StringCopy(&Var2, "PROPS_P0_E5_2", 16);
iVar3=5;
iVar4=2;
iVar1=72;
iVar5=10;
break;
case 73:
StringCopy(&Var2, "PROPS_P0_E5_3", 16);
iVar3=5;
iVar4=3;
iVar1=70;
iVar5=10;
break;
case 74:
StringCopy(&Var2, "PROPS_P0_E5_4", 16);
iVar3=5;
iVar4=4;
iVar1=74;
iVar5=10;
break;
case 75:
StringCopy(&Var2, "PROPS_P0_E5_5", 16);
iVar3=5;
iVar4=5;
iVar1=78;
iVar5=10;
break;
case 76:
StringCopy(&Var2, "PROPS_P0_E5_6", 16);
iVar3=5;
iVar4=6;
iVar1=82;
iVar5=10;
break;
case 77:
StringCopy(&Var2, "PROPS_P0_E5_7", 16);
iVar3=5;
iVar4=7;
iVar1=85;
iVar5=10;
break;
case 78:
StringCopy(&Var2, "PROPS_P0_E5_8", 16);
iVar3=5;
iVar4=8;
iVar1=85;
iVar5=10;
break;
case 79:
StringCopy(&Var2, "PROPS_P0_E5_9", 16);
iVar3=5;
iVar4=9;
iVar5=10;
break;
case 80:
StringCopy(&Var2, "PROPS_P0_E6", 16);
iVar3=6;
iVar4=0;
iVar1=69;
iVar5=10;
break;
case 81:
StringCopy(&Var2, "PROPS_P0_E6_1", 16);
iVar3=6;
iVar4=1;
iVar1=69;
iVar5=10;
break;
case 82:
StringCopy(&Var2, "PROPS_P0_E6_2", 16);
iVar3=6;
iVar4=2;
iVar1=69;
iVar5=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P0_E6_3", 16);
iVar3=6;
iVar4=3;
iVar1=69;
iVar5=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P0_E6_4", 16);
iVar3=6;
iVar4=4;
iVar1=69;
iVar5=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P0_E6_5", 16);
iVar3=6;
iVar4=5;
iVar1=69;
iVar5=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P0_E6_6", 16);
iVar3=6;
iVar4=6;
iVar1=69;
iVar5=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P0_E6_7", 16);
iVar3=6;
iVar4=7;
iVar1=69;
iVar5=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P0_E6_8", 16);
iVar3=6;
iVar4=8;
iVar1=69;
iVar5=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P0_E6_9", 16);
iVar3=6;
iVar4=9;
iVar1=69;
iVar5=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P0_E7", 16);
iVar3=7;
iVar4=0;
iVar5=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P0_E8", 16);
iVar3=8;
iVar4=0;
iVar1=170;
iVar5=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P0_E8_1", 16);
iVar3=8;
iVar4=1;
iVar1=175;
iVar5=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P0_E8_2", 16);
iVar3=8;
iVar4=2;
iVar1=180;
iVar5=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P0_E8_3", 16);
iVar3=8;
iVar4=3;
iVar1=185;
iVar5=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P0_E8_4", 16);
iVar3=8;
iVar4=4;
iVar1=189;
iVar5=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P0_E8_5", 16);
iVar3=8;
iVar4=5;
iVar1=195;
iVar5=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P0_E8_6", 16);
iVar3=8;
iVar4=6;
iVar1=235;
iVar5=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P0_E8_7", 16);
iVar3=8;
iVar4=7;
iVar1=245;
iVar5=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P0_E8_8", 16);
iVar3=8;
iVar4=8;
iVar1=250;
iVar5=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P0_E8_9", 16);
iVar3=8;
iVar4=9;
iVar1=275;
iVar5=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P0_E8_10", 16);
iVar3=8;
iVar4=10;
iVar1=280;
iVar5=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P0_E8_11", 16);
iVar3=8;
iVar4=11;
iVar1=295;
iVar5=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P0_E9", 16);
iVar3=9;
iVar4=0;
iVar1=179;
iVar5=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P0_E9_1", 16);
iVar3=9;
iVar4=1;
iVar1=159;
iVar5=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P0_E9_2", 16);
iVar3=9;
iVar4=2;
iVar1=165;
iVar5=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P0_E9_3", 16);
iVar3=9;
iVar4=3;
iVar1=155;
iVar5=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P0_E9_4", 16);
iVar3=9;
iVar4=4;
iVar1=175;
iVar5=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P0_E9_5", 16);
iVar3=9;
iVar4=5;
iVar1=185;
iVar5=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P0_E9_6", 16);
iVar3=9;
iVar4=6;
iVar1=189;
iVar5=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P0_E9_7", 16);
iVar3=9;
iVar4=7;
iVar1=225;
iVar5=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
iVar1=100;
iVar5=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
iVar5=2;
break;
default:
func_164(iVar7, iParam0, 113, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_202(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 10, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_203(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P0_0", 16);
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P0_1", 16);
iVar3=0;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P0_4", 16);
iVar3=0;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P0_7", 16);
iVar3=0;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P0_8", 16);
iVar3=0;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P0_9", 16);
iVar3=0;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar3=0;
iVar4=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P0_12", 16);
iVar3=0;
iVar4=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P0_14", 16);
iVar3=0;
iVar4=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar3=0;
iVar4=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P0_18", 16);
iVar3=0;
iVar4=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P0_19", 16);
iVar3=0;
iVar4=0;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P0_20", 16);
iVar3=0;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P0_22", 16);
iVar3=0;
iVar4=0;
iVar1=10000;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P0_23", 16);
iVar3=0;
iVar4=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P0_24", 16);
iVar3=0;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P0_26", 16);
iVar3=0;
iVar4=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P0_28", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P0_29", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P0_30", 16);
iVar3=0;
iVar4=0;
iVar1=105;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P0_31", 16);
iVar3=0;
iVar4=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P0_32", 16);
iVar3=0;
iVar4=0;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P0_33", 16);
iVar3=0;
iVar4=0;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P0_34", 16);
iVar3=0;
iVar4=0;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P0_35", 16);
iVar3=0;
iVar4=0;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar3=0;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P0_36", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P0_37", 16);
iVar3=0;
iVar4=0;
iVar1=840;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P0_38", 16);
iVar3=0;
iVar4=0;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P0_39", 16);
iVar3=0;
iVar4=0;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P0_40", 16);
iVar3=0;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P0_41", 16);
iVar3=0;
iVar4=0;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P0_42", 16);
iVar3=0;
iVar4=0;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P0_43", 16);
iVar3=0;
iVar4=0;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P0_44", 16);
iVar3=0;
iVar4=0;
iVar1=3900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P0_45", 16);
iVar3=0;
iVar4=0;
iVar1=4000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P0_46", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P0_47", 16);
iVar3=0;
iVar4=0;
iVar1=4600;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P0_48", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P0_49", 16);
iVar3=0;
iVar4=0;
iVar1=4400;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P0_50", 16);
iVar3=0;
iVar4=0;
iVar1=4400;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P0_51", 16);
iVar3=0;
iVar4=0;
iVar1=4900;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P0_52", 16);
iVar3=0;
iVar4=0;
iVar1=5500;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P0_53", 16);
iVar3=0;
iVar4=0;
iVar1=4500;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P0_54", 16);
iVar3=0;
iVar4=0;
iVar1=5900;
break;
case 48:
StringCopy(&Var2, "OUTFIT_P0_55", 16);
iVar3=0;
iVar4=0;
break;
case 49:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar3=0;
iVar4=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 53, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_204(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "JBIB_P0_02_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "JBIB_P0_02_1", 16);
iVar3=2;
iVar4=1;
break;
case 4:
StringCopy(&Var2, "JBIB_P0_02_2", 16);
iVar3=2;
iVar4=2;
break;
case 5:
StringCopy(&Var2, "JBIB_P0_02_3", 16);
iVar3=2;
iVar4=3;
break;
case 6:
StringCopy(&Var2, "JBIB_P0_02_4", 16);
iVar3=2;
iVar4=4;
break;
case 7:
StringCopy(&Var2, "JBIB_P0_02_5", 16);
iVar3=2;
iVar4=5;
break;
case 8:
StringCopy(&Var2, "JBIB_P0_03_0", 16);
iVar3=3;
iVar4=0;
iVar1=390;
break;
case 9:
StringCopy(&Var2, "JBIB_P0_03_1", 16);
iVar3=3;
iVar4=1;
iVar1=390;
break;
case 10:
StringCopy(&Var2, "JBIB_P0_03_2", 16);
iVar3=3;
iVar4=2;
iVar1=420;
break;
case 11:
StringCopy(&Var2, "JBIB_P0_03_3", 16);
iVar3=3;
iVar4=3;
iVar1=420;
break;
case 12:
StringCopy(&Var2, "JBIB_P0_03_4", 16);
iVar3=3;
iVar4=4;
iVar1=490;
break;
case 13:
StringCopy(&Var2, "JBIB_P0_03_5", 16);
iVar3=3;
iVar4=5;
iVar1=490;
break;
case 14:
StringCopy(&Var2, "JBIB_P0_03_6", 16);
iVar3=3;
iVar4=6;
iVar1=540;
break;
case 15:
StringCopy(&Var2, "JBIB_P0_03_7", 16);
iVar3=3;
iVar4=7;
iVar1=540;
break;
case 16:
StringCopy(&Var2, "JBIB_P0_03_8", 16);
iVar3=3;
iVar4=8;
iVar1=550;
break;
case 17:
StringCopy(&Var2, "JBIB_P0_03_9", 16);
iVar3=3;
iVar4=9;
iVar1=540;
break;
case 18:
StringCopy(&Var2, "JBIB_P0_04_0", 16);
iVar3=4;
iVar4=0;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "JBIB_P0_04_1", 16);
iVar3=4;
iVar4=1;
iVar1=850;
break;
case 20:
StringCopy(&Var2, "JBIB_P0_04_2", 16);
iVar3=4;
iVar4=2;
iVar1=890;
break;
case 21:
StringCopy(&Var2, "JBIB_P0_04_3", 16);
iVar3=4;
iVar4=3;
iVar1=890;
break;
case 22:
StringCopy(&Var2, "JBIB_P0_04_4", 16);
iVar3=4;
iVar4=4;
iVar1=920;
break;
case 23:
StringCopy(&Var2, "JBIB_P0_04_5", 16);
iVar3=4;
iVar4=5;
iVar1=920;
break;
case 24:
StringCopy(&Var2, "JBIB_P0_04_6", 16);
iVar3=4;
iVar4=6;
iVar1=950;
break;
case 25:
StringCopy(&Var2, "JBIB_P0_04_7", 16);
iVar3=4;
iVar4=7;
iVar1=980;
break;
case 26:
StringCopy(&Var2, "JBIB_P0_04_8", 16);
iVar3=4;
iVar4=8;
iVar1=1050;
break;
case 27:
StringCopy(&Var2, "JBIB_P0_04_9", 16);
iVar3=4;
iVar4=9;
iVar1=1100;
break;
case 28:
StringCopy(&Var2, "JBIB_P0_05_0", 16);
iVar3=5;
iVar4=0;
iVar1=1890;
break;
case 29:
StringCopy(&Var2, "JBIB_P0_05_1", 16);
iVar3=5;
iVar4=1;
iVar1=1820;
break;
case 30:
StringCopy(&Var2, "JBIB_P0_05_2", 16);
iVar3=5;
iVar4=2;
iVar1=1820;
break;
case 31:
StringCopy(&Var2, "JBIB_P0_05_3", 16);
iVar3=5;
iVar4=3;
iVar1=1850;
break;
case 32:
StringCopy(&Var2, "JBIB_P0_05_4", 16);
iVar3=5;
iVar4=4;
iVar1=1850;
break;
case 33:
StringCopy(&Var2, "JBIB_P0_05_5", 16);
iVar3=5;
iVar4=5;
iVar1=1900;
break;
case 34:
StringCopy(&Var2, "JBIB_P0_05_6", 16);
iVar3=5;
iVar4=6;
iVar1=1920;
break;
case 35:
StringCopy(&Var2, "JBIB_P0_05_7", 16);
iVar3=5;
iVar4=7;
iVar1=1980;
break;
case 36:
StringCopy(&Var2, "JBIB_P0_05_8", 16);
iVar3=5;
iVar4=8;
iVar1=2100;
break;
case 37:
StringCopy(&Var2, "JBIB_P0_05_9", 16);
iVar3=5;
iVar4=9;
iVar1=2120;
break;
case 38:
StringCopy(&Var2, "JBIB_P0_05_10", 16);
iVar3=5;
iVar4=10;
iVar1=2000;
break;
case 39:
StringCopy(&Var2, "JBIB_P0_05_11", 16);
iVar3=5;
iVar4=11;
iVar1=2200;
break;
case 40:
StringCopy(&Var2, "JBIB_P0_05_12", 16);
iVar3=5;
iVar4=12;
iVar1=2280;
break;
case 41:
StringCopy(&Var2, "JBIB_P0_05_13", 16);
iVar3=5;
iVar4=13;
iVar1=2300;
break;
case 42:
StringCopy(&Var2, "JBIB_P0_05_14", 16);
iVar3=5;
iVar4=14;
iVar1=2350;
break;
case 43:
StringCopy(&Var2, "JBIB_P0_05_15", 16);
iVar3=5;
iVar4=15;
iVar1=2280;
break;
case 44:
StringCopy(&Var2, "JBIB_P0_06_0", 16);
iVar3=6;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 45, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_205(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 1, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_206(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "BERD_P0_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "BERD_P0_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "BERD_P0_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "BERD_P0_4_0", 16);
iVar3=4;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 5, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_207(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=1;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=2;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=3;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=4;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=5;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=6;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=7;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=1;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=2;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=3;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=5;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=1;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=2;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=3;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=4;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=5;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=6;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=1;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=2;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=3;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=4;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=5;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=6;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=7;
break;
case 36:
StringCopy(&Var2, "DECL_P0_10_8", 16);
iVar3=10;
iVar4=8;
break;
case 37:
StringCopy(&Var2, "DECL_P0_10_9", 16);
iVar3=10;
iVar4=9;
break;
case 38:
StringCopy(&Var2, "DECL_P0_10_10", 16);
iVar3=10;
iVar4=10;
break;
case 39:
StringCopy(&Var2, "DECL_P0_10_11", 16);
iVar3=10;
iVar4=11;
break;
case 40:
StringCopy(&Var2, "DECL_P0_10_12", 16);
iVar3=10;
iVar4=12;
break;
case 41:
StringCopy(&Var2, "DECL_P0_10_13", 16);
iVar3=10;
iVar4=13;
break;
case 42:
StringCopy(&Var2, "DECL_P0_10_14", 16);
iVar3=10;
iVar4=14;
break;
case 43:
StringCopy(&Var2, "DECL_P0_10_15", 16);
iVar3=10;
iVar4=15;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
break;
default:
func_164(iVar7, iParam0, 48, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_208(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar3=8;
iVar4=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar3=8;
iVar4=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar3=8;
iVar4=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar3=8;
iVar4=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar3=8;
iVar4=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=1;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 20, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_209(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "SPEC_P0_10", 16);
iVar3=10;
iVar4=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "SPEC_P0_16", 16);
iVar3=16;
iVar4=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=20;
iVar4=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=21;
iVar4=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=22;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=23;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 24, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_210(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=2;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=3;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=4;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
default:
func_164(iVar7, iParam0, 14, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_211(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "FEET_P0_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=665;
break;
case 2:
StringCopy(&Var2, "FEET_P0_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=620;
break;
case 3:
StringCopy(&Var2, "FEET_P0_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=540;
break;
case 4:
StringCopy(&Var2, "FEET_P0_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=580;
break;
case 5:
StringCopy(&Var2, "FEET_P0_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=650;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=7;
iVar4=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "FEET_P0_13_0", 16);
iVar3=13;
iVar4=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "FEET_P0_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 21:
StringCopy(&Var2, "FEET_P0_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=64;
break;
case 22:
StringCopy(&Var2, "FEET_P0_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=56;
break;
case 23:
StringCopy(&Var2, "FEET_P0_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=69;
break;
case 24:
StringCopy(&Var2, "FEET_P0_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=59;
break;
case 25:
StringCopy(&Var2, "FEET_P0_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=62;
break;
case 26:
StringCopy(&Var2, "FEET_P0_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=74;
break;
case 27:
StringCopy(&Var2, "FEET_P0_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=68;
break;
case 28:
StringCopy(&Var2, "FEET_P0_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=72;
break;
case 29:
StringCopy(&Var2, "FEET_P0_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=70;
break;
case 30:
StringCopy(&Var2, "FEET_P0_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=48;
break;
case 31:
StringCopy(&Var2, "FEET_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=48;
break;
case 32:
StringCopy(&Var2, "FEET_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=55;
break;
case 33:
StringCopy(&Var2, "FEET_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=75;
break;
case 34:
StringCopy(&Var2, "FEET_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=65;
break;
case 35:
StringCopy(&Var2, "FEET_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=68;
break;
case 36:
StringCopy(&Var2, "FEET_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=58;
break;
case 37:
StringCopy(&Var2, "FEET_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=68;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "FEET_P0_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=790;
break;
case 40:
StringCopy(&Var2, "FEET_P0_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=750;
break;
case 41:
StringCopy(&Var2, "FEET_P0_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=860;
break;
case 42:
StringCopy(&Var2, "FEET_P0_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=750;
break;
case 43:
StringCopy(&Var2, "FEET_P0_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=790;
break;
case 44:
StringCopy(&Var2, "FEET_P0_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=840;
break;
case 45:
StringCopy(&Var2, "FEET_P0_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=820;
break;
case 46:
StringCopy(&Var2, "FEET_P0_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=800;
break;
case 47:
StringCopy(&Var2, "FEET_P0_18_8", 16);
iVar3=18;
iVar4=8;
iVar1=850;
break;
case 48:
StringCopy(&Var2, "FEET_P0_18_9", 16);
iVar3=18;
iVar4=9;
iVar1=870;
break;
case 49:
StringCopy(&Var2, "FEET_P0_18_10", 16);
iVar3=18;
iVar4=10;
iVar1=720;
break;
case 50:
StringCopy(&Var2, "FEET_P0_18_11", 16);
iVar3=18;
iVar4=11;
iVar1=740;
break;
case 51:
StringCopy(&Var2, "FEET_P0_18_12", 16);
iVar3=18;
iVar4=12;
iVar1=800;
break;
case 52:
StringCopy(&Var2, "FEET_P0_18_13", 16);
iVar3=18;
iVar4=13;
iVar1=750;
break;
case 53:
StringCopy(&Var2, "FEET_P0_18_14", 16);
iVar3=18;
iVar4=14;
iVar1=770;
break;
case 54:
StringCopy(&Var2, "FEET_P0_18_15", 16);
iVar3=18;
iVar4=15;
iVar1=860;
break;
case 55:
StringCopy(&Var2, "FEET_P0_19_0", 16);
iVar3=19;
iVar4=0;
iVar1=850;
break;
case 56:
StringCopy(&Var2, "FEET_P0_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=800;
break;
case 57:
StringCopy(&Var2, "FEET_P0_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=780;
break;
case 58:
StringCopy(&Var2, "FEET_P0_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=890;
break;
case 59:
StringCopy(&Var2, "FEET_P0_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=820;
break;
case 60:
StringCopy(&Var2, "FEET_P0_19_5", 16);
iVar3=19;
iVar4=5;
iVar1=840;
break;
case 61:
StringCopy(&Var2, "FEET_P0_19_6", 16);
iVar3=19;
iVar4=6;
iVar1=870;
break;
case 62:
StringCopy(&Var2, "FEET_P0_19_7", 16);
iVar3=19;
iVar4=7;
iVar1=930;
break;
case 63:
StringCopy(&Var2, "FEET_P0_19_8", 16);
iVar3=19;
iVar4=8;
iVar1=880;
break;
case 64:
StringCopy(&Var2, "FEET_P0_19_9", 16);
iVar3=19;
iVar4=9;
iVar1=900;
break;
case 65:
StringCopy(&Var2, "FEET_P0_19_10", 16);
iVar3=19;
iVar4=10;
iVar1=920;
break;
case 66:
StringCopy(&Var2, "FEET_P0_19_11", 16);
iVar3=19;
iVar4=11;
iVar1=970;
break;
case 67:
StringCopy(&Var2, "FEET_P0_19_12", 16);
iVar3=19;
iVar4=12;
iVar1=990;
break;
case 68:
StringCopy(&Var2, "FEET_P0_19_13", 16);
iVar3=19;
iVar4=13;
iVar1=960;
break;
case 69:
StringCopy(&Var2, "FEET_P0_19_14", 16);
iVar3=19;
iVar4=14;
iVar1=980;
break;
case 70:
StringCopy(&Var2, "FEET_P0_19_15", 16);
iVar3=19;
iVar4=15;
iVar1=950;
break;
case 71:
StringCopy(&Var2, "FEET_P0_20_0", 16);
iVar3=20;
iVar4=0;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 73:
StringCopy(&Var2, "FEET_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "FEET_P0_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 75:
StringCopy(&Var2, "FEET_P0_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=125;
break;
case 76:
StringCopy(&Var2, "FEET_P0_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=128;
break;
case 77:
StringCopy(&Var2, "FEET_P0_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=135;
break;
case 78:
StringCopy(&Var2, "FEET_P0_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=130;
break;
case 79:
StringCopy(&Var2, "FEET_P0_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=145;
break;
case 80:
StringCopy(&Var2, "FEET_P0_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=110;
break;
case 81:
StringCopy(&Var2, "FEET_P0_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P0_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=150;
break;
case 83:
StringCopy(&Var2, "FEET_P0_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=125;
break;
case 84:
StringCopy(&Var2, "FEET_P0_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=120;
break;
case 85:
StringCopy(&Var2, "FEET_P0_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=130;
break;
case 86:
StringCopy(&Var2, "FEET_P0_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=110;
break;
case 87:
StringCopy(&Var2, "FEET_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=720;
break;
case 88:
StringCopy(&Var2, "FEET_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=680;
break;
case 89:
StringCopy(&Var2, "FEET_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=650;
break;
case 90:
StringCopy(&Var2, "FEET_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=670;
break;
case 91:
StringCopy(&Var2, "FEET_P0_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=700;
break;
case 92:
StringCopy(&Var2, "FEET_P0_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=680;
break;
case 93:
StringCopy(&Var2, "FEET_P0_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=720;
break;
case 94:
StringCopy(&Var2, "FEET_P0_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=740;
break;
case 95:
StringCopy(&Var2, "FEET_P0_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=760;
break;
case 96:
StringCopy(&Var2, "FEET_P0_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=780;
break;
case 97:
StringCopy(&Var2, "FEET_P0_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=750;
break;
case 98:
StringCopy(&Var2, "FEET_P0_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=700;
break;
default:
func_164(iVar7, iParam0, 99, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_212(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "LEGS_P0_0_2", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "LEGS_P0_0_3", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "LEGS_P0_0_4", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "LEGS_P0_0_5", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "LEGS_P0_0_6", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "LEGS_P0_0_7", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "LEGS_P0_0_8", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "LEGS_P0_0_9", 16);
iVar3=0;
iVar4=9;
break;
case 10:
StringCopy(&Var2, "LEGS_P0_0_10", 16);
iVar3=0;
iVar4=10;
break;
case 11:
StringCopy(&Var2, "LEGS_P0_0_11", 16);
iVar3=0;
iVar4=11;
break;
case 12:
StringCopy(&Var2, "LEGS_P0_0_12", 16);
iVar3=0;
iVar4=12;
break;
case 13:
StringCopy(&Var2, "LEGS_P0_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "LEGS_P0_0_14", 16);
iVar3=0;
iVar4=14;
break;
case 15:
StringCopy(&Var2, "LEGS_P0_0_15", 16);
iVar3=0;
iVar4=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "LEGS_P0_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=115;
break;
case 24:
StringCopy(&Var2, "LEGS_P0_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=115;
break;
case 25:
StringCopy(&Var2, "LEGS_P0_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=128;
break;
case 26:
StringCopy(&Var2, "LEGS_P0_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=118;
break;
case 27:
StringCopy(&Var2, "LEGS_P0_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "LEGS_P0_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=128;
break;
case 29:
StringCopy(&Var2, "LEGS_P0_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=128;
break;
case 30:
StringCopy(&Var2, "LEGS_P0_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=125;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=8;
iVar4=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "LEGS_P0_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=68;
break;
case 42:
StringCopy(&Var2, "LEGS_P0_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=68;
break;
case 43:
StringCopy(&Var2, "LEGS_P0_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=68;
break;
case 44:
StringCopy(&Var2, "LEGS_P0_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=68;
break;
case 45:
StringCopy(&Var2, "LEGS_P0_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=68;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=14;
iVar4=0;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "LEGS_P0_15_0", 16);
iVar3=15;
iVar4=0;
break;
case 48:
StringCopy(&Var2, "LEGS_P0_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=550;
break;
case 49:
StringCopy(&Var2, "LEGS_P0_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=650;
break;
case 50:
StringCopy(&Var2, "LEGS_P0_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=875;
break;
case 51:
StringCopy(&Var2, "LEGS_P0_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=820;
break;
case 52:
StringCopy(&Var2, "LEGS_P0_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=720;
break;
case 53:
StringCopy(&Var2, "LEGS_P0_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=750;
break;
case 54:
StringCopy(&Var2, "LEGS_P0_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=850;
break;
case 55:
StringCopy(&Var2, "LEGS_P0_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 56:
StringCopy(&Var2, "LEGS_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=48;
break;
case 57:
StringCopy(&Var2, "LEGS_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=48;
break;
case 58:
StringCopy(&Var2, "LEGS_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=38;
break;
case 59:
StringCopy(&Var2, "LEGS_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=38;
break;
case 60:
StringCopy(&Var2, "LEGS_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=42;
break;
case 61:
StringCopy(&Var2, "LEGS_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=58;
break;
case 62:
StringCopy(&Var2, "LEGS_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=46;
break;
case 63:
StringCopy(&Var2, "LEGS_P0_16_8", 16);
iVar3=16;
iVar4=8;
iVar1=46;
break;
case 64:
StringCopy(&Var2, "LEGS_P0_16_9", 16);
iVar3=16;
iVar4=9;
iVar1=46;
break;
case 65:
StringCopy(&Var2, "LEGS_P0_16_10", 16);
iVar3=16;
iVar4=10;
iVar1=68;
break;
case 66:
StringCopy(&Var2, "LEGS_P0_16_11", 16);
iVar3=16;
iVar4=11;
iVar1=58;
break;
case 67:
StringCopy(&Var2, "LEGS_P0_16_12", 16);
iVar3=16;
iVar4=12;
iVar1=50;
break;
case 68:
StringCopy(&Var2, "LEGS_P0_16_13", 16);
iVar3=16;
iVar4=13;
iVar1=68;
break;
case 69:
StringCopy(&Var2, "LEGS_P0_16_14", 16);
iVar3=16;
iVar4=14;
iVar1=68;
break;
case 70:
StringCopy(&Var2, "LEGS_P0_16_15", 16);
iVar3=16;
iVar4=15;
iVar1=42;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=17;
iVar4=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P0_18_0", 16);
iVar3=18;
iVar4=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P0_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=250;
break;
case 74:
StringCopy(&Var2, "LEGS_P0_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=250;
break;
case 75:
StringCopy(&Var2, "LEGS_P0_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=290;
break;
case 76:
StringCopy(&Var2, "LEGS_P0_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=270;
break;
case 77:
StringCopy(&Var2, "LEGS_P0_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=270;
break;
case 78:
StringCopy(&Var2, "LEGS_P0_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=15;
break;
case 79:
StringCopy(&Var2, "LEGS_P0_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=12;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=19;
iVar4=0;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "LEGS_P0_20_0", 16);
iVar3=20;
iVar4=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=118;
break;
case 83:
StringCopy(&Var2, "LEGS_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=110;
break;
case 84:
StringCopy(&Var2, "LEGS_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=88;
break;
case 85:
StringCopy(&Var2, "LEGS_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=95;
break;
case 86:
StringCopy(&Var2, "LEGS_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=95;
break;
case 87:
StringCopy(&Var2, "LEGS_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=98;
break;
case 88:
StringCopy(&Var2, "LEGS_P0_22_0", 16);
iVar3=22;
iVar4=0;
iVar1=140;
break;
case 89:
StringCopy(&Var2, "LEGS_P0_23_0", 16);
iVar3=23;
iVar4=0;
break;
case 90:
StringCopy(&Var2, "LEGS_P0_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=150;
break;
case 91:
StringCopy(&Var2, "LEGS_P0_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=130;
break;
case 92:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=24;
iVar4=0;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=25;
iVar4=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=26;
iVar4=0;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "LEGS_P0_27_0", 16);
iVar3=27;
iVar4=0;
break;
case 96:
StringCopy(&Var2, "LEGS_P0_28_0", 16);
iVar3=28;
iVar4=0;
iVar1=45;
break;
case 97:
StringCopy(&Var2, "LEGS_P0_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=48;
break;
case 98:
StringCopy(&Var2, "LEGS_P0_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=48;
break;
case 99:
StringCopy(&Var2, "LEGS_P0_28_3", 16);
iVar3=28;
iVar4=3;
iVar1=52;
break;
case 100:
StringCopy(&Var2, "LEGS_P0_28_4", 16);
iVar3=28;
iVar4=4;
iVar1=52;
break;
case 101:
StringCopy(&Var2, "LEGS_P0_28_5", 16);
iVar3=28;
iVar4=5;
iVar1=55;
break;
case 102:
StringCopy(&Var2, "LEGS_P0_28_6", 16);
iVar3=28;
iVar4=6;
iVar1=55;
break;
case 103:
StringCopy(&Var2, "LEGS_P0_28_7", 16);
iVar3=28;
iVar4=7;
iVar1=55;
break;
case 104:
StringCopy(&Var2, "LEGS_P0_28_8", 16);
iVar3=28;
iVar4=8;
iVar1=58;
break;
case 105:
StringCopy(&Var2, "LEGS_P0_28_9", 16);
iVar3=28;
iVar4=9;
iVar1=58;
break;
case 106:
StringCopy(&Var2, "LEGS_P0_28_10", 16);
iVar3=28;
iVar4=10;
iVar1=60;
break;
case 107:
StringCopy(&Var2, "LEGS_P0_28_11", 16);
iVar3=28;
iVar4=11;
iVar1=60;
break;
case 108:
StringCopy(&Var2, "LEGS_P0_28_12", 16);
iVar3=28;
iVar4=12;
iVar1=62;
break;
case 109:
StringCopy(&Var2, "LEGS_P0_28_13", 16);
iVar3=28;
iVar4=13;
iVar1=62;
break;
case 110:
StringCopy(&Var2, "LEGS_P0_28_14", 16);
iVar3=28;
iVar4=14;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P0_28_15", 16);
iVar3=28;
iVar4=15;
iVar1=65;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=29;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 113, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_213(int iParam0){
if(iParam0 < 60){
func_215(iParam0);
}else{
func_214(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_164(3, iParam0, 181, -1);
}}


void func_214(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=9;
iVar4=0;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=10;
iVar4=0;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=11;
iVar4=0;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=1;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=2;
bVar0=true;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=3;
bVar0=true;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=4;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=12;
iVar4=5;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=13;
iVar4=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "TORSO_P0_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "TORSO_P0_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=120;
break;
case 72:
StringCopy(&Var2, "TORSO_P0_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=120;
break;
case 73:
StringCopy(&Var2, "TORSO_P0_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "TORSO_P0_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=120;
break;
case 75:
StringCopy(&Var2, "TORSO_P0_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=120;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=15;
iVar4=0;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "TORSO_P0_16_0", 16);
iVar3=16;
iVar4=0;
break;
case 78:
StringCopy(&Var2, "TORSO_P0_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=20;
break;
case 79:
StringCopy(&Var2, "TORSO_P0_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=24;
break;
case 80:
StringCopy(&Var2, "TORSO_P0_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=22;
break;
case 81:
StringCopy(&Var2, "TORSO_P0_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=25;
break;
case 82:
StringCopy(&Var2, "TORSO_P0_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=25;
break;
case 83:
StringCopy(&Var2, "TORSO_P0_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=22;
break;
case 84:
StringCopy(&Var2, "TORSO_P0_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=27;
break;
case 85:
StringCopy(&Var2, "TORSO_P0_17_0", 16);
iVar3=17;
iVar4=0;
break;
case 86:
StringCopy(&Var2, "TORSO_P0_17_1", 16);
iVar3=17;
iVar4=1;
break;
case 87:
StringCopy(&Var2, "TORSO_P0_17_2", 16);
iVar3=17;
iVar4=2;
break;
case 88:
StringCopy(&Var2, "TORSO_P0_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=48;
break;
case 89:
StringCopy(&Var2, "TORSO_P0_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=40;
break;
case 90:
StringCopy(&Var2, "TORSO_P0_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=45;
break;
case 91:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=18;
iVar4=0;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "TORSO_P0_19_0", 16);
iVar3=19;
iVar4=0;
break;
case 93:
StringCopy(&Var2, "TORSO_P0_19_1", 16);
iVar3=19;
iVar4=1;
iVar1=190;
break;
case 94:
StringCopy(&Var2, "TORSO_P0_19_2", 16);
iVar3=19;
iVar4=2;
iVar1=190;
break;
case 95:
StringCopy(&Var2, "TORSO_P0_19_3", 16);
iVar3=19;
iVar4=3;
iVar1=190;
break;
case 96:
StringCopy(&Var2, "TORSO_P0_19_4", 16);
iVar3=19;
iVar4=4;
iVar1=210;
break;
case 97:
StringCopy(&Var2, "TORSO_P0_20_0", 16);
iVar3=20;
iVar4=0;
break;
case 98:
StringCopy(&Var2, "TORSO_P0_20_1", 16);
iVar3=20;
iVar4=1;
iVar1=115;
break;
case 99:
StringCopy(&Var2, "TORSO_P0_20_2", 16);
iVar3=20;
iVar4=2;
iVar1=55;
break;
case 100:
StringCopy(&Var2, "TORSO_P0_20_3", 16);
iVar3=20;
iVar4=3;
iVar1=110;
break;
case 101:
StringCopy(&Var2, "TORSO_P0_20_4", 16);
iVar3=20;
iVar4=4;
iVar1=99;
break;
case 102:
StringCopy(&Var2, "TORSO_P0_20_5", 16);
iVar3=20;
iVar4=5;
iVar1=49;
break;
case 103:
StringCopy(&Var2, "TORSO_P0_20_6", 16);
iVar3=20;
iVar4=6;
iVar1=120;
break;
case 104:
StringCopy(&Var2, "TORSO_P0_20_7", 16);
iVar3=20;
iVar4=7;
iVar1=45;
break;
case 105:
StringCopy(&Var2, "TORSO_P0_20_8", 16);
iVar3=20;
iVar4=8;
iVar1=115;
break;
case 106:
StringCopy(&Var2, "TORSO_P0_20_9", 16);
iVar3=20;
iVar4=9;
iVar1=105;
break;
case 107:
StringCopy(&Var2, "TORSO_P0_20_10", 16);
iVar3=20;
iVar4=10;
iVar1=90;
break;
case 108:
StringCopy(&Var2, "TORSO_P0_20_11", 16);
iVar3=20;
iVar4=11;
iVar1=95;
break;
case 109:
StringCopy(&Var2, "TORSO_P0_20_12", 16);
iVar3=20;
iVar4=12;
iVar1=39;
break;
case 110:
StringCopy(&Var2, "TORSO_P0_20_13", 16);
iVar3=20;
iVar4=13;
iVar1=95;
break;
case 111:
StringCopy(&Var2, "TORSO_P0_20_14", 16);
iVar3=20;
iVar4=14;
iVar1=35;
break;
case 112:
StringCopy(&Var2, "TORSO_P0_20_15", 16);
iVar3=20;
iVar4=15;
iVar1=95;
break;
case 113:
StringCopy(&Var2, "TORSO_P0_21_0", 16);
iVar3=21;
iVar4=0;
iVar1=88;
break;
case 114:
StringCopy(&Var2, "TORSO_P0_21_1", 16);
iVar3=21;
iVar4=1;
iVar1=60;
break;
case 115:
StringCopy(&Var2, "TORSO_P0_21_2", 16);
iVar3=21;
iVar4=2;
iVar1=70;
break;
case 116:
StringCopy(&Var2, "TORSO_P0_21_3", 16);
iVar3=21;
iVar4=3;
iVar1=80;
break;
case 117:
StringCopy(&Var2, "TORSO_P0_21_4", 16);
iVar3=21;
iVar4=4;
iVar1=90;
break;
case 118:
StringCopy(&Var2, "TORSO_P0_21_5", 16);
iVar3=21;
iVar4=5;
iVar1=80;
break;
case 119:
StringCopy(&Var2, "TORSO_P0_21_6", 16);
iVar3=21;
iVar4=6;
iVar1=70;
break;
case 120:
StringCopy(&Var2, "TORSO_P0_21_7", 16);
iVar3=21;
iVar4=7;
iVar1=95;
break;
case 121:
StringCopy(&Var2, "TORSO_P0_21_8", 16);
iVar3=21;
iVar4=8;
iVar1=105;
break;
case 122:
StringCopy(&Var2, "TORSO_P0_21_9", 16);
iVar3=21;
iVar4=9;
iVar1=95;
break;
case 123:
StringCopy(&Var2, "TORSO_P0_21_10", 16);
iVar3=21;
iVar4=10;
iVar1=110;
break;
case 124:
StringCopy(&Var2, "TORSO_P0_21_11", 16);
iVar3=21;
iVar4=11;
iVar1=98;
break;
case 125:
StringCopy(&Var2, "TORSO_P0_21_12", 16);
iVar3=21;
iVar4=12;
iVar1=88;
break;
case 126:
StringCopy(&Var2, "TORSO_P0_21_13", 16);
iVar3=21;
iVar4=13;
iVar1=98;
break;
case 127:
StringCopy(&Var2, "TORSO_P0_21_14", 16);
iVar3=21;
iVar4=14;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "TORSO_P0_21_15", 16);
iVar3=21;
iVar4=15;
iVar1=98;
break;
case 129:
StringCopy(&Var2, "TORSO_P0_22_0", 16);
iVar3=22;
iVar4=0;
break;
case 130:
StringCopy(&Var2, "TORSO_P0_22_1", 16);
iVar3=22;
iVar4=1;
iVar1=4950;
break;
case 131:
StringCopy(&Var2, "TORSO_P0_22_2", 16);
iVar3=22;
iVar4=2;
iVar1=4195;
break;
case 132:
StringCopy(&Var2, "TORSO_P0_22_3", 16);
iVar3=22;
iVar4=3;
iVar1=3195;
break;
case 133:
StringCopy(&Var2, "TORSO_P0_22_4", 16);
iVar3=22;
iVar4=4;
iVar1=2950;
break;
case 134:
StringCopy(&Var2, "TORSO_P0_22_5", 16);
iVar3=22;
iVar4=5;
iVar1=3950;
break;
case 135:
StringCopy(&Var2, "TORSO_P0_23_0", 16);
iVar3=23;
iVar4=0;
iVar1=3200;
break;
case 136:
StringCopy(&Var2, "TORSO_P0_23_1", 16);
iVar3=23;
iVar4=1;
iVar1=3200;
break;
case 137:
StringCopy(&Var2, "TORSO_P0_23_2", 16);
iVar3=23;
iVar4=2;
iVar1=3200;
break;
case 138:
StringCopy(&Var2, "TORSO_P0_23_3", 16);
iVar3=23;
iVar4=3;
iVar1=3200;
break;
case 139:
StringCopy(&Var2, "TORSO_P0_23_4", 16);
iVar3=23;
iVar4=4;
iVar1=3200;
break;
case 140:
StringCopy(&Var2, "TORSO_P0_23_5", 16);
iVar3=23;
iVar4=5;
iVar1=3200;
break;
case 141:
StringCopy(&Var2, "TORSO_P0_23_6", 16);
iVar3=23;
iVar4=6;
iVar1=3200;
break;
case 142:
StringCopy(&Var2, "TORSO_P0_23_7", 16);
iVar3=23;
iVar4=7;
iVar1=3200;
break;
case 143:
StringCopy(&Var2, "TORSO_P0_23_8", 16);
iVar3=23;
iVar4=8;
iVar1=3200;
break;
case 144:
StringCopy(&Var2, "TORSO_P0_23_9", 16);
iVar3=23;
iVar4=9;
iVar1=3200;
break;
case 145:
StringCopy(&Var2, "TORSO_P0_23_10", 16);
iVar3=23;
iVar4=10;
iVar1=3200;
break;
case 146:
StringCopy(&Var2, "TORSO_P0_23_11", 16);
iVar3=23;
iVar4=11;
iVar1=3200;
break;
case 147:
StringCopy(&Var2, "TORSO_P0_23_12", 16);
iVar3=23;
iVar4=12;
iVar1=3200;
break;
case 148:
StringCopy(&Var2, "TORSO_P0_23_13", 16);
iVar3=23;
iVar4=13;
iVar1=3200;
break;
case 149:
StringCopy(&Var2, "TORSO_P0_23_14", 16);
iVar3=23;
iVar4=14;
iVar1=3200;
break;
case 150:
StringCopy(&Var2, "TORSO_P0_23_15", 16);
iVar3=23;
iVar4=15;
iVar1=3200;
break;
case 151:
StringCopy(&Var2, "TORSO_P0_24_0", 16);
iVar3=24;
iVar4=0;
iVar1=1350;
break;
case 152:
StringCopy(&Var2, "TORSO_P0_24_1", 16);
iVar3=24;
iVar4=1;
iVar1=1400;
break;
case 153:
StringCopy(&Var2, "TORSO_P0_24_2", 16);
iVar3=24;
iVar4=2;
iVar1=1200;
break;
case 154:
StringCopy(&Var2, "TORSO_P0_24_3", 16);
iVar3=24;
iVar4=3;
iVar1=1250;
break;
case 155:
StringCopy(&Var2, "TORSO_P0_24_4", 16);
iVar3=24;
iVar4=4;
iVar1=1350;
break;
case 156:
StringCopy(&Var2, "TORSO_P0_24_5", 16);
iVar3=24;
iVar4=5;
iVar1=1300;
break;
case 157:
StringCopy(&Var2, "TORSO_P0_24_6", 16);
iVar3=24;
iVar4=6;
iVar1=1380;
break;
case 158:
StringCopy(&Var2, "TORSO_P0_24_7", 16);
iVar3=24;
iVar4=7;
iVar1=1340;
break;
case 159:
StringCopy(&Var2, "TORSO_P0_24_8", 16);
iVar3=24;
iVar4=8;
iVar1=1380;
break;
case 160:
StringCopy(&Var2, "TORSO_P0_24_9", 16);
iVar3=24;
iVar4=9;
iVar1=1250;
break;
case 161:
StringCopy(&Var2, "TORSO_P0_25_0", 16);
iVar3=25;
iVar4=0;
iVar1=840;
break;
case 162:
StringCopy(&Var2, "TORSO_P0_25_1", 16);
iVar3=25;
iVar4=1;
iVar1=840;
break;
case 163:
StringCopy(&Var2, "TORSO_P0_25_2", 16);
iVar3=25;
iVar4=2;
iVar1=840;
break;
case 164:
StringCopy(&Var2, "TORSO_P0_25_3", 16);
iVar3=25;
iVar4=3;
iVar1=840;
break;
case 165:
StringCopy(&Var2, "TORSO_P0_25_4", 16);
iVar3=25;
iVar4=4;
iVar1=840;
break;
case 166:
StringCopy(&Var2, "TORSO_P0_25_5", 16);
iVar3=25;
iVar4=5;
iVar1=840;
break;
case 167:
StringCopy(&Var2, "TORSO_P0_25_6", 16);
iVar3=25;
iVar4=6;
iVar1=840;
break;
case 168:
StringCopy(&Var2, "TORSO_P0_25_7", 16);
iVar3=25;
iVar4=7;
iVar1=840;
break;
case 169:
StringCopy(&Var2, "TORSO_P0_26_0", 16);
iVar3=26;
iVar4=0;
break;
case 170:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=27;
iVar4=0;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "TORSO_P0_28_0", 16);
iVar3=28;
iVar4=0;
break;
case 172:
StringCopy(&Var2, "TORSO_P0_28_1", 16);
iVar3=28;
iVar4=1;
iVar1=130;
break;
case 173:
StringCopy(&Var2, "TORSO_P0_28_2", 16);
iVar3=28;
iVar4=2;
iVar1=110;
break;
case 174:
StringCopy(&Var2, "TORSO_P0_29_0", 16);
iVar3=29;
iVar4=0;
bVar0=true;
break;
case 175:
StringCopy(&Var2, "TORSO_P0_30_0", 16);
iVar3=30;
iVar4=0;
iVar1=290;
break;
case 176:
StringCopy(&Var2, "TORSO_P0_30_1", 16);
iVar3=30;
iVar4=1;
iVar1=320;
break;
case 177:
StringCopy(&Var2, "TORSO_P0_31_0", 16);
iVar3=31;
iVar4=0;
iVar1=59;
break;
case 178:
StringCopy(&Var2, "TORSO_P0_31_1", 16);
iVar3=31;
iVar4=1;
iVar1=55;
break;
case 179:
StringCopy(&Var2, "TORSO_P0_31_2", 16);
iVar3=31;
iVar4=2;
iVar1=59;
break;
case 180:
StringCopy(&Var2, "TORSO_P0_31_3", 16);
iVar3=31;
iVar4=3;
iVar1=49;
break;
default:
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_215(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P0_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=3500;
break;
case 3:
StringCopy(&Var2, "TORSO_P0_0_3", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "TORSO_P0_0_4", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "TORSO_P0_0_5", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "TORSO_P0_0_6", 16);
iVar3=0;
iVar4=6;
break;
case 7:
StringCopy(&Var2, "TORSO_P0_0_7", 16);
iVar3=0;
iVar4=7;
break;
case 8:
StringCopy(&Var2, "TORSO_P0_0_8", 16);
iVar3=0;
iVar4=8;
break;
case 9:
StringCopy(&Var2, "TORSO_P0_0_9", 16);
iVar3=0;
iVar4=9;
break;
case 10:
StringCopy(&Var2, "TORSO_P0_0_10", 16);
iVar3=0;
iVar4=10;
break;
case 11:
StringCopy(&Var2, "TORSO_P0_0_11", 16);
iVar3=0;
iVar4=11;
break;
case 12:
StringCopy(&Var2, "TORSO_P0_0_12", 16);
iVar3=0;
iVar4=12;
break;
case 13:
StringCopy(&Var2, "TORSO_P0_0_13", 16);
iVar3=0;
iVar4=13;
break;
case 14:
StringCopy(&Var2, "TORSO_P0_0_14", 16);
iVar3=0;
iVar4=14;
break;
case 15:
StringCopy(&Var2, "TORSO_P0_0_15", 16);
iVar3=0;
iVar4=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=1;
iVar4=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=0;
iVar1=20;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=1;
iVar1=18;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=2;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=2;
iVar4=3;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P0_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=19;
break;
case 22:
StringCopy(&Var2, "TORSO_P0_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=20;
break;
case 23:
StringCopy(&Var2, "TORSO_P0_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=22;
break;
case 24:
StringCopy(&Var2, "TORSO_P0_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=18;
break;
case 25:
StringCopy(&Var2, "TORSO_P0_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=39;
break;
case 26:
StringCopy(&Var2, "TORSO_P0_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=32;
break;
case 27:
StringCopy(&Var2, "TORSO_P0_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=35;
break;
case 28:
StringCopy(&Var2, "TORSO_P0_2_11", 16);
iVar3=2;
iVar4=11;
iVar1=35;
break;
case 29:
StringCopy(&Var2, "TORSO_P0_2_12", 16);
iVar3=2;
iVar4=12;
iVar1=210;
break;
case 30:
StringCopy(&Var2, "TORSO_P0_2_13", 16);
iVar3=2;
iVar4=13;
iVar1=250;
break;
case 31:
StringCopy(&Var2, "TORSO_P0_2_14", 16);
iVar3=2;
iVar4=14;
iVar1=290;
break;
case 32:
StringCopy(&Var2, "TORSO_P0_2_15", 16);
iVar3=2;
iVar4=15;
iVar1=310;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=3;
iVar4=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=6;
iVar4=0;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "TORSO_P0_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=150;
break;
case 39:
StringCopy(&Var2, "TORSO_P0_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=160;
break;
case 40:
StringCopy(&Var2, "TORSO_P0_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=150;
break;
case 41:
StringCopy(&Var2, "TORSO_P0_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=150;
break;
case 42:
StringCopy(&Var2, "TORSO_P0_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=160;
break;
case 43:
StringCopy(&Var2, "TORSO_P0_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=160;
break;
case 44:
StringCopy(&Var2, "TORSO_P0_8_0", 16);
iVar3=8;
iVar4=0;
break;
case 45:
StringCopy(&Var2, "TORSO_P0_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "TORSO_P0_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=52;
break;
case 47:
StringCopy(&Var2, "TORSO_P0_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=55;
break;
case 48:
StringCopy(&Var2, "TORSO_P0_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=55;
break;
case 49:
StringCopy(&Var2, "TORSO_P0_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "TORSO_P0_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=58;
break;
case 51:
StringCopy(&Var2, "TORSO_P0_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=62;
break;
case 52:
StringCopy(&Var2, "TORSO_P0_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=65;
break;
case 53:
StringCopy(&Var2, "TORSO_P0_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=65;
break;
case 54:
StringCopy(&Var2, "TORSO_P0_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=68;
break;
case 55:
StringCopy(&Var2, "TORSO_P0_8_11", 16);
iVar3=8;
iVar4=11;
iVar1=68;
break;
case 56:
StringCopy(&Var2, "TORSO_P0_8_12", 16);
iVar3=8;
iVar4=12;
iVar1=55;
break;
case 57:
StringCopy(&Var2, "TORSO_P0_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=62;
break;
case 58:
StringCopy(&Var2, "TORSO_P0_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=58;
break;
case 59:
StringCopy(&Var2, "TORSO_P0_8_15", 16);
iVar3=8;
iVar4=15;
iVar1=58;
break;
default:
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_216(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P0_0_0", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P0_1_0", 16);
iVar3=1;
iVar4=0;
break;
case 2:
StringCopy(&Var2, "HAIR_P0_2_0", 16);
iVar3=2;
iVar4=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P0_3_0", 16);
iVar3=3;
iVar4=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P0_4_0", 16);
iVar3=4;
iVar4=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=5;
iVar4=0;
break;
default:
func_164(iVar7, iParam0, 6, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_217(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=0;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar3=0;
iVar4=6;
break;
default:
func_164(iVar7, iParam0, 7, -1);
return;
break;
}
func_157(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_218(){
Global_78341[0 /*14*/].f_1=-1;
Global_78341[0 /*14*/].f_2=-1;
Global_78341[0 /*14*/].f_5=-1;
Global_78341[0 /*14*/].f_3=-1;
Global_78341[0 /*14*/].f_4=-1;
Global_78341[0 /*14*/].f_7=0;
Global_78341[0 /*14*/].f_6=0;
Global_78341[0 /*14*/].f_13=-1;
Global_78341[0 /*14*/].f_12=0;
Global_78341[0 /*14*/]=0;
StringCopy(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_219(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
int iVar7;
var uVar8;
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_154(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar5={
func_150(iVar0, iParam2) 
};
iVar2=0;
while (iVar2 <=14){
if((uVar5[iVar2] !=-99 && iVar2 !=12) && iVar2 !=14){
if(!func_219(iParam0, iVar2, uVar5[iVar2])){
if(iVar2==13){
uVar6={
func_147(iVar0, uVar5[iVar2]) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_219(iParam0, 14, uVar6[iVar3])){
iVar4=0;
while (iVar4 <=19){
Global_78341[2 /*14*/]={
func_154(iVar0, 14, iVar4, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar3){
if(func_219(iParam0, 14, iVar4)){
if(!func_109(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}
}
}
iVar4++;
}}
iVar3++;
}}else{
iVar1=func_135(iParam0, iVar2);
Global_78341[2 /*14*/]={
func_154(iVar0, iVar2, iVar1, -1) 
};
if(!func_109(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}}}}
iVar2++;
}
return 1;
}elseif(iParam1==13){
uVar8={
func_147(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 <=8){
if(!func_219(iParam0, 14, uVar8[iVar7])){
return 0;
}
iVar7++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}}elseif(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_146(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_146(iParam1))){
return 1;
}
return 0;
}

int func_220(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_221(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_221(int iParam0){
if(func_223(iParam0)){
return func_222(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__222(int iParam0){
return Global_2028[iParam0 /*29*/];
}


bool func_223(int iParam0){
return iParam0 < 3;
}


void func_224(var uParam0, var uParam1){
STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), uParam0, 1);
if(MISC::IS_BIT_SET(uParam1, 0)){
STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), uParam0, 1);
}
if(MISC::IS_BIT_SET(uParam1, 1)){
STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), uParam0, 1);
}
if(MISC::IS_BIT_SET(uParam1, 2)){
STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), uParam0, 1);
}}

int func_225(){
func_226();
switch (Global_113648.f_2365.f_539.f_4321){
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


void func_226(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_221(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_220(PLAYER::PLAYER_PED_ID());
if(func_223(iVar0) && (!func_162(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_223(Global_113648.f_2365.f_539.f_4321)){
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


struct<2> func_227(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_228(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_228(int iParam0){
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


void func_229(int iParam0, int iParam1){
Global_78827=iParam1;
if(Global_63356){
return;
}
if(Global_63383){
Global_63383=0;
return;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
if(Global_63356){
}
Global_63382=iParam0;
Global_63356=1;
Global_63367=1;
}}


void func_230(int iParam0, int iParam1, int iParam2, int iParam3){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
CAM::SET_WIDESCREEN_BORDERS(0, 0);
MISC::SET_TIME_SCALE(1f);
func_243();
func_242(1, 1);
func_239();
func_237();
func_236(30000);
if(iParam1==1){
func_231(iParam0, iParam2, iParam3);
}
HUD::SET_MISSION_NAME(0, 0);
}


void func_231(int iParam0, int iParam1, int iParam2){
struct<4> Var0;
var uVar1;
if(iParam0 !=-1){
func_233(iParam0, &Var0);
MemCopy(&uVar1,{
func_228(iParam0)
}
, 4);
STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar1, 0, Global_100718, 0);
func_232(&uVar1, Var0.f_3, Global_100718, iParam1, iParam2);
}}


void func_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
return;
}
if(MISC::COMPARE_STRINGS(uParam0, &Global_97751, 0, -1) !=0){
return;
}
STATS::PLAYSTATS_MISSION_OVER(uParam0, uParam1, uParam2, uParam3, uParam4, Global_94858);
StringCopy(&Global_97751, "", 64);
}


void func_233(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_234(uParam1, "Abigail1", func_227(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
break;
case 1:
func_234(uParam1, "Abigail2", func_227(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
break;
case 2:
func_234(uParam1, "Barry1", func_227(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
break;
case 3:
func_234(uParam1, "Barry2", func_227(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
break;
case 4:
func_234(uParam1, "Barry3", func_227(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_235(iParam0), 0, 0);
break;
case 5:
func_234(uParam1, "Barry3A", func_227(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 6:
func_234(uParam1, "Barry3C", func_227(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 7:
func_234(uParam1, "Barry4", func_227(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_235(iParam0), 0, 0);
break;
case 8:
func_234(uParam1, "Dreyfuss1", func_227(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
break;
case 9:
func_234(uParam1, "Epsilon1", func_227(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_235(iParam0), 0, 0);
break;
case 10:
func_234(uParam1, "Epsilon2", func_227(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
break;
case 11:
func_234(uParam1, "Epsilon3", func_227(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_235(iParam0), 0, 0);
break;
case 12:
func_234(uParam1, "Epsilon4", func_227(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_235(iParam0), 0, 0);
break;
case 13:
func_234(uParam1, "Epsilon5", func_227(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
break;
case 14:
func_234(uParam1, "Epsilon6", func_227(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_235(iParam0), 0, 1);
break;
case 15:
func_234(uParam1, "Epsilon7", func_227(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_235(iParam0), 0, 0);
break;
case 16:
func_234(uParam1, "Epsilon8", func_227(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
break;
case 17:
func_234(uParam1, "Extreme1", func_227(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 18:
func_234(uParam1, "Extreme2", func_227(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 19:
func_234(uParam1, "Extreme3", func_227(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 20:
func_234(uParam1, "Extreme4", func_227(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
break;
case 21:
func_234(uParam1, "Fanatic1", func_227(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_235(iParam0), 1, 0);
break;
case 22:
func_234(uParam1, "Fanatic2", func_227(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_235(iParam0), 1, 0);
break;
case 23:
func_234(uParam1, "Fanatic3", func_227(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_235(iParam0), 0, 1);
break;
case 24:
func_234(uParam1, "Hao1", func_227(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_235(iParam0), 0, 1);
break;
case 25:
func_234(uParam1, "Hunting1", func_227(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
break;
case 26:
func_234(uParam1, "Hunting2", func_227(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
break;
case 27:
func_234(uParam1, "Josh1", func_227(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_235(iParam0), 1, 0);
break;
case 28:
func_234(uParam1, "Josh2", func_227(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
break;
case 29:
func_234(uParam1, "Josh3", func_227(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
break;
case 30:
func_234(uParam1, "Josh4", func_227(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_235(iParam0), 1, 0);
break;
case 31:
func_234(uParam1, "Maude1", func_227(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
break;
case 32:
func_234(uParam1, "Minute1", func_227(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
break;
case 33:
func_234(uParam1, "Minute2", func_227(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
break;
case 34:
func_234(uParam1, "Minute3", func_227(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
break;
case 35:
func_234(uParam1, "MrsPhilips1", func_227(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_235(iParam0), 0, 0);
break;
case 36:
func_234(uParam1, "MrsPhilips2", func_227(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_235(iParam0), 0, 0);
break;
case 37:
func_234(uParam1, "Nigel1", func_227(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_235(iParam0), 1, 0);
break;
case 38:
func_234(uParam1, "Nigel1A", func_227(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
break;
case 39:
func_234(uParam1, "Nigel1B", func_227(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_235(iParam0), 1, 1);
break;
case 40:
func_234(uParam1, "Nigel1C", func_227(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_235(iParam0), 1, 1);
break;
case 41:
func_234(uParam1, "Nigel1D", func_227(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_235(iParam0), 1, 1);
break;
case 42:
func_234(uParam1, "Nigel2", func_227(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
break;
case 43:
func_234(uParam1, "Nigel3", func_227(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
break;
case 44:
func_234(uParam1, "Omega1", func_227(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
break;
case 45:
func_234(uParam1, "Omega2", func_227(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
break;
case 46:
func_234(uParam1, "Paparazzo1", func_227(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 47:
func_234(uParam1, "Paparazzo2", func_227(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 48:
func_234(uParam1, "Paparazzo3", func_227(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_235(iParam0), 0, 0);
break;
case 49:
func_234(uParam1, "Paparazzo3A", func_227(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 50:
func_234(uParam1, "Paparazzo3B", func_227(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 51:
func_234(uParam1, "Paparazzo4", func_227(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
break;
case 52:
func_234(uParam1, "Rampage1", func_227(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_235(iParam0), 0, 0);
break;
case 54:
func_234(uParam1, "Rampage3", func_227(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_235(iParam0), 1, 0);
break;
case 55:
func_234(uParam1, "Rampage4", func_227(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_235(iParam0), 1, 0);
break;
case 56:
func_234(uParam1, "Rampage5", func_227(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_235(iParam0), 0, 0);
break;
case 53:
func_234(uParam1, "Rampage2", func_227(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_235(iParam0), 1, 0);
break;
case 57:
func_234(uParam1, "TheLastOne", func_227(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 58:
func_234(uParam1, "Tonya1", func_227(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 59:
func_234(uParam1, "Tonya2", func_227(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 60:
func_234(uParam1, "Tonya3", func_227(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 61:
func_234(uParam1, "Tonya4", func_227(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
case 62:
func_234(uParam1, "Tonya5", func_227(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
break;
default:
break;
}}


void func_234(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
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

int func_235(int iParam0){
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


void func_236(int iParam0){
Global_43808=(MISC::GET_GAME_TIMER() + iParam0);
}


void func_237(){
if(Global_97993){
func_226();
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_238(Global_113648.f_2365.f_539.f_4321));
}else{
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
}}


char* func_238(var uParam0){
uParam0=uParam0;
return "";
}


void func_239(){
char cVar0[24];
if(MISC::IS_XBOX360_VERSION() || func_241()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_240()){
StringCopy(&cVar0, "PRESENCE_0_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
}}


var func__240(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__241(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_242(int iParam0, int iParam1){
Global_97988=iParam0;
Global_97989=iParam1;
}


void func_243(){
if(Global_78813 !=6){}
if(Global_78818){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_78818=0;
Global_23270.f_8892=0;
}
Global_78813=6;
Global_78815=-1;
Global_78814=-1;
}


void func_244(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43219){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
}


void func_245(int iParam0, bool bParam1){
struct<26> Var0;
int iVar1;
bool bVar2;
int iVar3;
struct<6> Var4;
int iVar5;
int iVar6;
struct<6> Var7;
int iVar8;
int iVar9;
func_233(iParam0, &Var0);
if(!MISC::ARE_STRINGS_EQUAL(&(Var0.f_16), "")){
while (!func_273(&(Var0.f_16))){
wait(0);
}}
if(Var0.f_22 !=0){
func_272(Var0.f_22, 0);
}
func_263(iParam0, Global_78828);
if(!bParam1){
iVar1=func_262(iParam0);
if(iVar1 !=0){
if(!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar1)){
AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar1);
}}}
if(Var0.f_24 !=-1){
bVar2=true;
if(Var0.f_5 !=4){
iVar3=0;
while (iVar3 < 63){
iVar5=iVar3;
if(iVar5 !=iParam0){
func_233(iVar5, &Var4);
if(Var4.f_5==Var0.f_5){
if(!MISC::IS_BIT_SET(Global_113648.f_18576[iVar5 /*6*/], 3)){
bVar2=false;
}
if(!MISC::IS_BIT_SET(Global_113648.f_18576[iVar5 /*6*/], 0)){
func_250(iVar5);
}}}
iVar3++;
}}
if(bVar2){
func_250(Var0.f_24);
}}elseif(Var0.f_25 !=4){
iVar6=0;
while (iVar6 < 63){
iVar8=iVar6;
if(iVar8 !=iParam0){
func_233(iVar8, &Var7);
if(Var7.f_5==Var0.f_25){
func_250(iVar8);
}}
iVar6++;
}}
if(!MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3)){
MISC::SET_BIT(&(Global_113648.f_18576[iParam0 /*6*/]), 3);
Global_112735[iParam0 /*10*/].f_5=1;
func_247(iParam0);
iVar9=func_246(iParam0);
if(iVar9 !=322){
func_78(iVar9, 0, 0);
}}}

int func_246(int iParam0){
switch (iParam0){
case 0:
return 109;
break;
case 1:
return 322;
break;
case 2:
return 69;
break;
case 3:
return 70;
break;
case 4:
return 322;
break;
case 5:
return 71;
break;
case 6:
return 71;
break;
case 7:
return 72;
break;
case 8:
return 68;
break;
case 9:
return 73;
break;
case 10:
return 74;
break;
case 11:
return 75;
break;
case 12:
return 76;
break;
case 13:
return 77;
break;
case 14:
return 78;
break;
case 15:
return 79;
break;
case 16:
return 80;
break;
case 17:
return 81;
break;
case 18:
return 82;
break;
case 19:
return 83;
break;
case 20:
return 84;
break;
case 21:
return 85;
break;
case 22:
return 86;
break;
case 23:
return 87;
break;
case 24:
return 106;
break;
case 25:
return 178;
break;
case 26:
return 179;
break;
case 27:
return 88;
break;
case 28:
return 89;
break;
case 29:
return 90;
break;
case 30:
return 91;
break;
case 31:
return 107;
break;
case 32:
return 92;
break;
case 33:
return 93;
break;
case 34:
return 94;
break;
case 35:
return 110;
break;
case 36:
return 111;
break;
case 37:
return 95;
break;
case 38:
return 96;
break;
case 39:
return 97;
break;
case 40:
return 98;
break;
case 41:
return 99;
break;
case 42:
return 100;
break;
case 43:
return 101;
break;
case 44:
return 66;
break;
case 45:
return 67;
break;
case 46:
return 102;
break;
case 47:
return 103;
break;
case 48:
return 322;
break;
case 49:
return 104;
break;
case 50:
return 104;
break;
case 51:
return 105;
break;
case 52:
return 194;
break;
case 53:
return 195;
break;
case 54:
return 196;
break;
case 55:
return 197;
break;
case 56:
return 198;
break;
case 57:
return 108;
break;
case 58:
return 208;
break;
case 59:
return 209;
break;
case 60:
return 210;
break;
case 61:
return 211;
break;
case 62:
return 212;
break;
}
return 322;
}


void func_247(int iParam0){
func_249(iParam0, 1);
Global_113648.f_18576[iParam0 /*6*/].f_3=func_248();
Global_113648.f_18576.f_380++;
}

int func_248(){
return (Global_113648.f_10018.f_21 + Global_113648.f_18576.f_380);
}


void func_249(var uParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=55;
if(bParam1){
iVar1=uParam0;
if(iVar1==46){
iVar0=35;
}elseif(iVar1==49){
iVar0=36;
}elseif(iVar1==50){
iVar0=37;
}elseif(iVar1==8){
iVar0=38;
}elseif(iVar1==16){
iVar0=39;
}elseif(iVar1==38){
iVar0=40;
}elseif(iVar1==39){
iVar0=41;
}elseif(iVar1==40){
iVar0=42;
}elseif(iVar1==41){
iVar0=43;
}elseif(iVar1==42){
iVar0=44;
}elseif(iVar1==43){
iVar0=45;
}elseif(iVar1==20){
iVar0=46;
}}else{
iVar2=uParam0;
if(iVar2==53){
iVar0=0;
}elseif(iVar2==1){
iVar0=1;
}elseif(iVar2==2){
iVar0=2;
}elseif(iVar2==17){
iVar0=3;
}elseif(iVar2==19){
iVar0=4;
}elseif(iVar2==43){
iVar0=5;
}elseif(iVar2==44){
iVar0=6;
}elseif(iVar2==63){
iVar0=8;
}elseif(iVar2==12){
iVar0=9;
}elseif(iVar2==13){
iVar0=10;
}elseif(iVar2==64){
iVar0=11;
}elseif(iVar2==20){
iVar0=12;
}elseif(iVar2==30){
iVar0=13;
}elseif(iVar2==31){
iVar0=14;
}elseif(iVar2==41){
iVar0=15;
}elseif(iVar2==38){
iVar0=16;
}elseif(iVar2==9){
iVar0=18;
}elseif(iVar2==59){
iVar0=19;
}elseif(iVar2==45){
iVar0=20;
}elseif(iVar2==10){
iVar0=21;
}elseif(iVar2==14){
iVar0=22;
}elseif(iVar2==16){
iVar0=24;
}elseif(iVar2==39){
iVar0=25;
}elseif(iVar2==46){
iVar0=26;
}elseif(iVar2==60){
iVar0=27;
}elseif(iVar2==22){
iVar0=28;
}elseif(iVar2==48){
iVar0=30;
}elseif(iVar2==61){
iVar0=31;
}elseif(iVar2==49){
iVar0=32;
}elseif(iVar2==27){
iVar0=34;
}elseif(iVar2==3){
iVar0=47;
}elseif(iVar2==4){
iVar0=48;
}elseif(iVar2==5){
iVar0=49;
}elseif(iVar2==6){
iVar0=50;
}elseif(iVar2==7){
iVar0=51;
}elseif(iVar2==58){
iVar0=53;
}elseif(iVar2==90){
iVar0=7;
}elseif(iVar2==74 || iVar2==75){
iVar0=17;
}elseif(iVar2==93){
iVar0=23;
}elseif(iVar2==69 || iVar2==70){
iVar0=29;
}elseif(iVar2==84 || iVar2==85){
iVar0=33;
}}
if(iVar0 !=55){
Global_113648.f_20566.f_472=iVar0;
}}


void func_250(int iParam0){
if(iParam0==63 || iParam0==-1){
return;
}
func_251(iParam0);
MISC::SET_BIT(&(Global_113648.f_18576[iParam0 /*6*/]), false);
}


void func_251(int iParam0){
switch (iParam0){
case 30:
func_255(22, 1, 0, 1, 0);
break;
case 15:
func_252(37, 0);
break;
default:
break;
}}


void func_252(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_254(iParam0, 0)){
func_253(iParam0, 1, 0);
func_253(iParam0, 2, 0);
func_253(iParam0, 3, 0);
func_253(iParam0, 4, 0);
func_253(iParam0, 0, 1);
Global_77348[iParam0]=1;
}}else{
func_253(iParam0, 0, 0);
}}


void func_253(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}}

int func_254(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}


void func_255(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
if(iParam0 !=198){
if(Global_78558){
Global_42791.f_227[iParam0]=iParam1;
}else{
Global_113648.f_7263.f_227[iParam0]=iParam1;
}
Global_39797[iParam0]=iParam2;
Global_39996[iParam0]=1;
func_258(iParam0, bParam3, iParam4, 0);
func_256(iParam0, iParam1);
}}


void func_256(int iParam0, int iParam1){
switch (iParam0){
case 12:
if(iParam1==0){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
}
break;
case 71:
if(iParam1 !=1){
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
}
break;
case 65:
if(iParam1==1){
func_257(0, 0);
}else{
func_257(0, 1);
}
break;
case 6:
if(iParam1==1){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
}
break;
case 174:
if(iParam1==2){
AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
}
break;
case 37:
if(iParam1==1){
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
}
break;
}}


void func_257(bool bParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_112286, bParam0);
}else{
MISC::CLEAR_BIT(&Global_112286, bParam0);
}
Global_112285=1;
}


bool func_258(int iParam0, bool bParam1, int iParam2, bool bParam3){
bool bVar0;
int iVar1;
int iVar2;
struct<5> Var3;
var uVar4;
bool bVar5;
int iVar6;
Global_1925773=1;
bVar0=false;
Var3.f_4=3;
Var3.f_8=3;
Var3.f_64=3;
Var3.f_75=3;
Var3.f_91=3;
func_261(&Var3, iParam0);
if(func_259()){
iVar1=Global_113648.f_7263.f_227[iParam0];
}else{
iVar1=Global_42791.f_227[iParam0];
}
iVar2=Global_40195[iParam0];
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3){
Global_1925773=1;
}else{
bVar5=true;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=MISC::GET_HASH_KEY("standard_global_reg")){
if(iParam2==0){
if(Global_39797[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3, 1) < 200f){
bVar5=false;
Global_1925773=1;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID())){
if(!CAM::IS_SCREEN_FADED_OUT()){
bVar5=false;
Global_1925773=1;
}}}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() !=5)){
bVar5=false;
Global_1925773=1;
}
if(bVar5){
switch (Var3.f_3){
case 0:
if(iVar1==2){
}else{
if(Var3.f_4[iVar1] !=0){
ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], 0);
}
if(Var3.f_4[iVar2] !=0){
ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
}
Global_41391[iParam0]=1;
}
bVar0=true;
break;
case 1:
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
Global_1925773=1;
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REQUEST_IPL(&(Var3.f_34));
Global_1925773=1;
}
}}elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
}
}}elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
}
}}
Global_41192[iParam0]=1;
Global_41391[iParam0]=1;
bVar0=true;
break;
case 2:
iVar6=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
if(iVar6 !=0){
if(MISC::GET_HASH_KEY(&(Var3.f_50)) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_50))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_50));
}
}
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
}
elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
}
elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
}
if(bParam1){
INTERIOR::REFRESH_INTERIOR(iVar6);
}}
Global_41391[iParam0]=1;
Global_41192[iParam0]=1;
bVar0=true;
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f){
uVar4=OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
if(OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar4)){
if(iVar1==0){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4, 3);
Global_41391[iParam0]=1;
bVar0=true;
}elseif(iVar1==1){
if((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=8){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4, 10);
Global_41391[iParam0]=1;
bVar0=true;
}}elseif(iVar1==2){
bVar0=true;
}
}}
break;
case 4:
if(iVar1==0){
ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
MISC::CLEAR_BIT(&(Global_39543[(iParam0 / 32)]), (iParam0 % 32));
}elseif(iVar1==1){
ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
MISC::SET_BIT(&(Global_39543[(iParam0 / 32)]), (iParam0 % 32));
}
bVar0=true;
break;
}
if(bVar0){
Global_39996[iParam0]=0;
Global_40195[iParam0]=iVar1;
if(!func_259()){
if(!Global_40792[iParam0]){
Global_40792[iParam0]=1;
Global_40991++;
}}}}}
return bVar0;
}

int func_259(){
if((func_80()==-1 || func_80()==999) && !func_260()==0){
return 1;
}
return 0;
}

int func_260(){
return Global_32164;
}

int func_261(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 3){
uParam0->f_4[iVar0]=0;
StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
uParam0->f_64[iVar0]=0;
uParam0->f_75[iVar0]=0;
uParam0->f_91[iVar0]=0;
iVar0++;
}
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0;
uParam0->f_33=0;
StringCopy(&(uParam0->f_34), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
StringCopy(&(uParam0->f_50), "", 32);
uParam0->f_58={
0f, 0f, 0f 
};
uParam0->f_61={
0f, 0f, 0f 
};
uParam0->f_68={
0f, 0f, 0f 
};
uParam0->f_71={
0f, 0f, 0f 
};
uParam0->f_74=0f;
uParam0->f_79={
0f, 0f, 0f 
};
uParam0->f_82={
0f, 0f, 0f 
};
uParam0->f_85={
0f, 0f, 0f 
};
uParam0->f_88={
0f, 0f, 0f 
};
switch (iParam1){
case 3:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
uParam0->f_33=1;
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 4:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 0:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
*uParam0={
-93.4f, 6410.9f, 36.8f 
};
break;
case 1:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
*uParam0={
890.3647f, -2367.289f, 28.10582f 
};
break;
case 2:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
uParam0->f_33=0;
*uParam0={
-1020.5f, 663.41f, 154.75f 
};
uParam0->f_58={
-1018.913f, 603.2904f, 105.6611f 
};
uParam0->f_61={
-1038.913f, 639.2904f, 135.6611f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
break;
case 5:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
break;
case 196:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
break;
case 6:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
break;
case 7:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 8:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 9:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 10:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 11:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
break;
case 12:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
uParam0->f_68={
-162.8918f, -2365.769f, 0f 
};
uParam0->f_71={
190.75f, 31.25f, 21f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 13:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
break;
case 14:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
break;
case 15:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
*uParam0={
-95.2f, 6411.3f, 31.5f 
};
break;
case 16:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 17:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 18:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 19:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 20:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
801.7f, -1810.8f, 23.3f 
};
break;
case 21:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
787.3967f, -1808.858f, 29.8532f 
};
uParam0->f_58={
814f, -1750f, 20f 
};
uParam0->f_61={
790f, -1899f, 35f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
uParam0->f_64[2]=0;
break;
case 22:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
break;
case 23:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
break;
case 24:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
break;
case 25:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
break;
case 26:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
*uParam0={
163.4f, -745.7f, 251f 
};
break;
case 27:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 28:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 29:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_h");
uParam0->f_4[1]=joaat("dt1_05_build1_damage");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 30:
uParam0->f_3=4;
uParam0->f_4[0]=-112041596;
uParam0->f_4[1]=joaat("dt1_05_build1_damage_lod");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 31:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_slod");
uParam0->f_4[1]=joaat("dt1_05_damage_slod");
*uParam0={
178.534f, -668.835f, 37.2113f 
};
break;
case 32:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 33:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 34:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 35:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
*uParam0={
105.4557f, -745.4835f, 44.7548f 
};
break;
case 36:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
*uParam0={
169f, -670.3f, 41.9f 
};
break;
case 37:
uParam0->f_3=1;
*uParam0={
50.2f, 3743.9f, 40.9f 
};
uParam0->f_79={
16.9757f, 3614.307f, 30.0677f 
};
uParam0->f_82={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_85={
16.9757f, 3614.307f, 30.0677f 
};
uParam0->f_88={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
break;
case 38:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 39:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 40:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 41:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 42:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 43:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 44:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 45:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 46:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 47:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 48:
uParam0->f_3=1;
StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
uParam0->f_33=1;
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
uParam0->f_68={
31.134f, 3738.783f, 39.062f 
};
uParam0->f_71={
13.6f, 20f, 8.9f 
};
uParam0->f_74=48f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=1;
break;
case 49:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
break;
case 50:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2450.595f, 4959.929f, 44.2575f 
};
uParam0->f_79={
2383.756f, 4929.988f, 39.52461f 
};
uParam0->f_82={
2505.756f, 5023.988f, 67.52461f 
};
break;
case 55:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2450.595f, 4959.929f, 44.2575f 
};
break;
case 51:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
uParam0->f_33=1;
*uParam0={
2444.8f, 4976.4f, 50.5f 
};
break;
case 52:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 53:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 54:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 56:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 57:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 58:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 59:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 60:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
*uParam0={
889.3f, -2910.9f, 40f 
};
break;
case 61:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
*uParam0={
-1600.619f, 4443.457f, 0.725f 
};
break;
case 62:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
*uParam0={
966.1f, -114.8f, 75.2f 
};
break;
case 63:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
*uParam0={
-3086.428f, 339.2523f, 6.3717f 
};
break;
case 64:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1675.178f, -1143.605f, 12.0175f 
};
break;
case 65:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 66:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 67:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
*uParam0={
131.29f, -631.22f, 261.85f 
};
break;
case 68:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
*uParam0={
233.9f, -1355f, 30.3f 
};
break;
case 69:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
*uParam0={
234.4f, -1355.6f, 40.5f 
};
break;
case 70:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 71:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 72:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 73:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 74:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 75:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 76:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 105:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 106:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
*uParam0={
1861.28f, 2402.11f, 58.53f 
};
break;
case 107:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
*uParam0={
-1327.46f, -274.82f, 54.25f 
};
break;
case 108:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
*uParam0={
2697.32f, 3162.18f, 58.1f 
};
break;
case 109:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
*uParam0={
2119.12f, 3058.21f, 53.25f 
};
break;
case 110:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
*uParam0={
-804.25f, -2276.88f, 23.59f 
};
break;
case 111:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 112:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 77:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
480.9554f, -1321.21f, 28.2037f 
};
uParam0->f_85={
508.3f, -1299.3f, 39.4f 
};
uParam0->f_88={
459.9f, -1363.2f, 21.4f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=0;
break;
case 78:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
*uParam0={
1973f, 3815f, 34f 
};
uParam0->f_33=0;
break;
case 79:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
*uParam0={
-1088.6f, -1650.6f, 6.4f 
};
break;
case 80:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
*uParam0={
-13.83f, -1455.45f, 31.81f 
};
break;
case 113:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
*uParam0={
-1277.629f, -2030.913f, 1.2823f 
};
break;
case 114:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
*uParam0={
2384.969f, 4277.583f, 30.379f 
};
break;
case 115:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
*uParam0={
1577.881f, 3836.107f, 30.7717f 
};
break;
case 87:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-180.5771f, -1016.928f, 28.2893f 
};
break;
case 88:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
*uParam0={
-630.4205f, -236.7843f, 37.057f 
};
uParam0->f_79={
(-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) 
};
uParam0->f_82={
(-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) 
};
break;
case 89:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
*uParam0={
-583.1606f, -282.3967f, 35.394f 
};
break;
case 90:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
*uParam0={
-14.651f, -604.3639f, 25.1823f 
};
break;
case 91:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2773.61f, 2835.327f, 35.1903f 
};
break;
case 94:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
1743.682f, 3286.251f, 40.0875f 
};
break;
case 95:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
1222.9f, 1877.9f, 79.9f 
};
uParam0->f_58={
1206.8f, 1803f, 43.9f 
};
uParam0->f_61={
1329f, 2060.4f, 143.9f 
};
uParam0->f_64[0]=0;
uParam0->f_64[1]=1;
uParam0->f_64[2]=0;
break;
case 104:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
*uParam0={
-351f, -1324f, 44.02f 
};
break;
case 103:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
*uParam0={
391.81f, -962.71f, 41.97f 
};
break;
case 102:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
*uParam0={
424.2f, -1944.31f, 33.09f 
};
break;
case 92:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626.374f, 2949.869f, 39.1409f 
};
break;
case 93:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626.374f, 2949.869f, 39.1409f 
};
break;
case 118:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 116:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 117:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 119:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 120:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 122:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 121:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 123:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 124:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 170:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 171:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
*uParam0={
-810.5301f, 187.7868f, 71.4786f 
};
break;
case 125:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 164:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 165:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 166:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 167:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 168:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 169:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 126:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 127:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 128:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 129:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 130:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 131:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 132:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 133:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 134:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 179:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-30.8793f, -1088.336f, 25.4221f 
};
uParam0->f_68={
-29.3f, -1086.35f, 25.57f 
};
uParam0->f_71={
5.5f, 3f, 2f 
};
uParam0->f_74=-10f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 174:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
StringCopy(&(uParam0->f_50), "csr_inMission", 32);
uParam0->f_33=0;
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 175:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_68={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_71={
2.5f, 3f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 176:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_68={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_71={
3f, 1f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 177:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_68={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_71={
1f, 3f, 2f 
};
uParam0->f_74=-45f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 178:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 173:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 180:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
*uParam0={
23.9346f, -669.7552f, 30.8853f 
};
break;
case 181:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
StringCopy(&(uParam0->f_42), "v_hospital", 32);
uParam0->f_33=0;
*uParam0={
300.9423f, -586.1784f, 42.2919f 
};
break;
case 135:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 136:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 137:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 138:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 139:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 140:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 141:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 142:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 143:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 144:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 145:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 146:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 147:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
uParam0->f_33=0;
*uParam0={
-1150.039f, -1521.761f, 9.6331f 
};
break;
case 148:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
uParam0->f_33=0;
*uParam0={
-1150.039f, -1521.761f, 9.6331f 
};
break;
case 149:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
1856.029f, 3682.998f, 33.2675f 
};
break;
case 150:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-440.5073f, 6018.766f, 30.49f 
};
break;
case 151:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.386f, 793.0532f 
};
break;
case 152:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.386f, 793.0532f 
};
break;
case 153:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 154:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 155:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 172:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
StringCopy(&(uParam0->f_42), "v_strip3", 32);
*uParam0={
96.4811f, -1291.294f, 28.2688f 
};
break;
case 182:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
139.5795f, -3092.962f, 8.64631f 
};
uParam0->f_79={
Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_82={
Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_85={
Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_88={
Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=1;
break;
case 183:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
203.7784f, -3131.767f, 7.041344f 
};
uParam0->f_79={
Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) 
};
uParam0->f_82={
Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) 
};
break;
case 184:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
144.7706f, -2982.659f, 7.952507f 
};
uParam0->f_79={
Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) 
};
uParam0->f_82={
Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) 
};
break;
case 185:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1154.965f, -1520.983f, 9.132731f 
};
uParam0->f_79={
-1154.965f, -1520.983f, 9.132731f 
};
uParam0->f_82={
-1158.965f, -1524.983f, 11.63273f 
};
break;
case 187:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1052.204f, 371.9537f, 67.914f 
};
uParam0->f_79={
-1052.204f, 371.9537f, 67.914f 
};
uParam0->f_82={
-1048.064f, 368.0221f, 70.9128f 
};
break;
case 186:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
1954.984f, 3792.991f, 30.3086f 
};
uParam0->f_79={
1954.984f, 3792.991f, 30.3086f 
};
uParam0->f_82={
1983.45f, 3830.78f, 36.2726f 
};
break;
case 188:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1122.202f, 48.5724f, 51.4652f 
};
uParam0->f_79={
-1122.202f, 48.5724f, 51.4652f 
};
uParam0->f_82={
-1076.233f, 92.1041f, 60.0617f 
};
break;
case 81:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2199.138f, 223.4648f, 181.1118f 
};
break;
case 82:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2242.785f, 263.4779f, 173.6154f 
};
break;
case 83:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
3832.9f, 3665.5f, -23.4f 
};
break;
case 84:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
2814.7f, 4758.5f, 47.9f 
};
break;
case 85:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1096.505f, 4.5754f, 49.8103f 
};
break;
case 86:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-781.6566f, 186.8937f, 71.8352f 
};
break;
case 189:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
uParam0->f_33=0;
*uParam0={
55.7f, -1391.3f, 30.5f 
};
break;
case 190:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
uParam0->f_33=0;
*uParam0={
700.091f, -933.641f, 20.308f 
};
break;
case 191:
uParam0->f_3=1;
*uParam0={
-1096.381f, -836.17f, 36.6755f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 192:
uParam0->f_3=1;
*uParam0={
449.6558f, -980.1375f, 42.6918f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 193:
uParam0->f_3=1;
*uParam0={
363.0175f, -1598.079f, 35.9502f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 194:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
-1601.424f, 2808.213f, 16.2598f 
};
break;
case 97:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
23.7318f, -647.2123f, 37.9549f 
};
break;
case 98:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
*uParam0={
12.9689f, -648.4698f, 9.7693f 
};
break;
case 99:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
*uParam0={
-1459.127f, 486.1281f, 115.2016f 
};
break;
case 100:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
*uParam0={
-248.4916f, -2010.509f, 34.5743f 
};
break;
case 101:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
*uParam0={
-1081.347f, -263.1502f, 38.7152f 
};
break;
case 195:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
*uParam0={
136.1795f, -750.701f, 262.0516f 
};
break;
case 197:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
*uParam0={
2096f, 3168.7f, 42.9f 
};
break;
}
switch (iParam1){
case 156:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 157:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 158:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 163:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 159:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 161:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 162:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 160:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 96:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
*uParam0={
19.0568f, 536.4818f, 169.6277f 
};
break;
}
return 1;
}

int func_262(int iParam0){
switch (iParam0){
case 46:
return 42;
break;
case 47:
return 43;
break;
case 49:
return 44;
break;
case 50:
return 45;
break;
case 8:
if(MISC::IS_BIT_SET(Global_113648.f_18576.f_382, 0)){
return 46;
}
break;
case 16:
return 47;
break;
case 38:
return 48;
break;
case 39:
return 49;
break;
case 40:
return 50;
break;
case 41:
return 51;
break;
case 42:
return 52;
break;
case 43:
if(Global_113648.f_9087.f_99.f_58[101]){
return 53;
}else{
return 54;
}
break;
case 20:
return 55;
break;
}
return 0;
}


void func_263(int iParam0, bool bParam1){
switch (iParam0){
case 46:
func_264(4, bParam1);
break;
case 16:
func_264(6, bParam1);
break;
case 37:
func_264(17, bParam1);
break;
case 31:
func_264(16, bParam1);
break;
}}


void func_264(int iParam0, bool bParam1){
bool bVar0;
bVar0=iParam0;
if(bVar0 >=0 && bVar0 <=31){
if(!func_271(iParam0)){
MISC::SET_BIT(&(Global_113648.f_26436), bVar0);
if(!bParam1){
func_269(func_270(iParam0));
if(!func_268(68)){
func_265("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
}}}}}


void func_265(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_266(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_266(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
func_267();
}}


void func_267(){
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

int func_268(int iParam0){
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


void func_269(var uParam0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}


char* func_270(int iParam0){
switch (iParam0){
case 0:
return "CM_STOMIC";
break;
case 1:
return "CM_STOFRA";
break;
case 2:
return "CM_STOTRE";
break;
case 3:
return "CM_STOAMA";
break;
case 4:
return "CM_STOBEV";
break;
case 5:
return "CM_STOBRA";
break;
case 6:
return "CM_STOCHR";
break;
case 7:
return "CM_STODAV";
break;
case 8:
return "CM_STODEV";
break;
case 9:
return "CM_STODRF";
break;
case 10:
return "CM_STOFAB";
break;
case 11:
return "CM_STOFLO";
break;
case 12:
return "CM_STOJIM";
break;
case 13:
return "CM_STOLAM";
break;
case 14:
return "CM_STOLAZ";
break;
case 15:
return "CM_STOLES";
break;
case 16:
return "CM_STOMAU";
break;
case 17:
return "CM_STOTHO";
break;
case 18:
return "CM_STONER";
break;
case 19:
return "CM_STOPAT";
break;
case 20:
return "CM_STOSIM";
break;
case 21:
return "CM_STOSOL";
break;
case 22:
return "CM_STOSTE";
break;
case 23:
return "CM_STOSTR";
break;
case 24:
return "CM_STOTAN";
break;
case 25:
return "CM_STOTAO";
break;
case 26:
return "CM_STOTRA";
break;
case 27:
return "CM_STOWAD";
break;
}
return "ERROR!";
}

int func_271(int iParam0){
if(iParam0 !=-1 && iParam0 !=28){
return MISC::IS_BIT_SET(Global_113648.f_26436, iParam0);
}
return 0;
}


void func_272(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113648.f_8615[iParam0]=1;
Global_113648.f_8615.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}

int func_273(char* sParam0){
int iVar0;
iVar0=1424;
if(!SCRIPT::DOES_SCRIPT_EXIST(sParam0)){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races")){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 0){
return 1;
}
iVar0=128;
}
SCRIPT::REQUEST_SCRIPT(sParam0);
if(SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
start_new_script(sParam0, iVar0);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
return 1;
}
return 0;
}

int func_274(){
return func_275(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_275(char* sParam0, int iParam1){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar2=MISC::GET_HASH_KEY(sParam0);
iVar3=0;
iVar3=0;
while (iVar3 < 63){
iVar0=iVar3;
func_233(iVar0, &uVar1);
if(MISC::GET_HASH_KEY(uVar1)==iVar2){
return iVar0;
}
iVar3++;
}
if(iParam1==0){}
return -1;
}


void func_276(){
func_361();
func_335();
func_298();
switch (iLocal_56){
case 0:
func_24(0, 1);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_297(&uLocal_58, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
}
func_297(&uLocal_58, 3, 0, "NIGEL", 0, 1);
func_297(&uLocal_58, 4, 0, "MRSTHORNHILL", 0, 1);
iLocal_285=MISC::GET_GAME_TIMER();
iLocal_56=1;
break;
case 1:
if(!iLocal_257){
if(func_296(iLocal_285, 2500)){
if(func_281(&uLocal_58, 64, "NIG1BAU", "NIG1B_OP", 11, 1, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 1);
iLocal_257=1;
}}elseif(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
func_280(5);
}}elseif(!func_3() && !func_279("NULL")){
if(func_278()){
if(func_277()){
iLocal_257=0;
}else{
iLocal_56=2;
}}}
break;
case 2:
func_24(0, 1);
func_280(4);
break;
}}

int func_277(){
if(Global_20368){
return 1;
}
return 0;
}

int func_278(){
if(Global_21725==0){
return 1;
}
return 0;
}

int func_279(char* sParam0){
if(iLocal_316==2 || iLocal_316==4){
if(MISC::ARE_STRINGS_EQUAL(sParam0, "NULL") || MISC::ARE_STRINGS_EQUAL(sParam0, "")){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, &sLocal_451)){
return 1;
}}
return 0;
}


void func_280(int iParam0){
iLocal_54=iParam0;
iLocal_56=0;
}


bool func_281(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_295(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
Global_21773=0;
Global_21732=1;
Global_21739=0;
Global_21734=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_21730=0;
Global_21777=0;
Global_21779=0;
if(iParam5==1){
Global_21737=1;
}else{
Global_21737=0;
}
Global_2883585=0;
return func_282(sParam3, iParam4, bParam8);
}

int func_282(char* sParam0, int iParam1, bool bParam2){
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
func_31();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_294(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_293();
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
MISC::CLEAR_BIT(&Global_8255, false);
if(bParam2){
func_291();
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
if(func_290()){
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
if(func_5()){
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
func_289();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_288();
func_283();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_31();
}
return 0;
}


void func_283(){
if(!func_284()){
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

int func_284(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_287()){
return 0;
}
if(func_285(PLAYER::PLAYER_ID())){
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


bool func_285(int iParam0){
return func_286(iParam0, 20);
}


var func__286(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_287(){
return -1;
}


void func_288(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_289(){
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

int func_290(){
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


void func_291(){
if(func_162(14)){
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
Global_20383=func_292();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}

int func_292(){
func_226();
return Global_113648.f_2365.f_539.f_4321;
}


void func_293(){
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


bool func_294(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_295(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21179={
*uParam0 
};
Global_7569=iParam1;
StringCopy(&Global_21795, sParam2, 24);
Global_22714=iParam5;
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


bool func_296(int iParam0, int iParam1){
return (MISC::GET_GAME_TIMER() - iParam0) > iParam1;
}


void func_297(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(iParam2)){
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


void func_298(){
int iVar0;
if(func_32(Local_296.f_8)){
func_334(Local_296.f_8, &(Local_296.f_13));
switch (iLocal_311){
case 0:
if(AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
if((!PED::IS_PED_BEING_STEALTH_KILLED(Local_296.f_8) && !PED::IS_PED_RAGDOLL(Local_296.f_8)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_296.f_8)){
AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_278, "WHISTLING", Local_296.f_8, "NIGEL_1B_SOUNDSET", 0, 0);
}}elseif((PED::IS_PED_BEING_STEALTH_KILLED(Local_296.f_8) || PED::IS_PED_RAGDOLL(Local_296.f_8)) || AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_296.f_8)){
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}}
if(func_333() || func_332(Local_296.f_8, 1101004800, 1084227584, 1097859072)){
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
if(func_482(Local_296.f_8)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 1)){
iLocal_231=1;
}}
func_21(3, 1);
}elseif(Local_296.f_9==0){
if((func_330(3) || (func_327(0, Local_296.f_13, 0, 0, 1) && iLocal_313==3)) || func_326()){
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
func_21(1, 1);
}elseif(iLocal_312==2 || iLocal_312==3){
if(func_73(Local_296.f_8, Local_468, 4f, 1)){
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
func_21(1, 1);
}}elseif(iLocal_312==4){
if(func_73(Local_296.f_8, Local_468, 2.5f, 1)){
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
func_21(1, 1);
}}elseif(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 1)){
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
func_21(1, 1);
}elseif(iLocal_313==3){
if(!func_3() && !func_279("NULL")){
if(func_296(iLocal_287, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000))){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GBV", 7, 0, 0, 0)){
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
iLocal_287=MISC::GET_GAME_TIMER();
}}
}
else{
iLocal_287=MISC::GET_GAME_TIMER();
}}else{
iLocal_287=MISC::GET_GAME_TIMER();
}}elseif(func_327(1, Local_296.f_13, 1, 1, 1) || func_330(3)){
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
func_21(1, 1);
}
break;
case 1:
if(!iLocal_230){
func_24(0, 0);
if(iLocal_313==3){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSP", 7, 0, 0, 0)){
iLocal_292=MISC::GET_GAME_TIMER();
iLocal_230=1;
}}else{
iLocal_230=1;
}}else{
func_64(0);
if(iLocal_314==0 || iLocal_314==1){
if((!func_322("NIG1B_GSP", 1) || func_319(Local_296.f_8, 1082130432)) || func_296(iLocal_292, 1250)){
func_21(2, 1);
}}elseif(!iLocal_229){
if(!func_322("NIG1B_GSP", 1)){
if(iLocal_313==3){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSP2", 7, 0, 0, 0)){
iLocal_229=1;
}}else{
iLocal_229=1;
}
}
elseif(iLocal_313 !=3){
func_24(1, 0);
}}elseif(!func_322("NIG1B_GSP2", 1)){
func_21(4, 1);
}elseif(iLocal_313 !=3){
func_24(1, 0);
}}
if(func_333() || func_332(Local_296.f_8, 1101004800, 1084227584, 1097859072)){
func_21(3, 1);
}
break;
case 2:
if(Local_296.f_9==38 || Local_296.f_9==39){
if(bLocal_259 || iLocal_314==4){
Local_296.f_9=34;
}}
if(iLocal_314==5 || iLocal_314==6){
if(func_72(Local_296.f_8, 0)){
func_21(3, 1);
}}
if(func_319(Local_296.f_8, 1082130432)){
if(bLocal_228){
if(!func_316("NIG1B_GIC", 1)){
func_21(4, 1);
}}}
if(func_333() || func_332(Local_296.f_8, 1101004800, 1084227584, 1097859072)){
func_21(3, 1);
}
break;
case 3:
func_64(0);
if(!iLocal_231){
if((func_72(Local_296.f_8, 0) && iLocal_314==5) || iLocal_314==6){
iLocal_231=1;
}elseif(iLocal_313==3 || func_73(Local_296.f_8, Local_468, 5f, 1)){
func_24(0, 0);
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSU", 7, 0, 0, 0)){
iLocal_279=MISC::GET_GAME_TIMER();
iLocal_231=1;
}}}
if(func_482(Local_296.f_8)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 1)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_296.f_8);
func_21(4, 1);
}}
break;
case 4:
if(!iLocal_227){
if(func_74(Local_296.f_8, 0)){
if(iLocal_313==3 || func_307(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7)){
if(!func_3() && !func_279("NULL")){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GF", 7, 0, 0, 0)){
iLocal_227=1;
}}
}}}
break;
}
func_301();
if(Local_296.f_9==49 || Local_296.f_9==50){
func_61(&Local_296);
}elseif(iLocal_54==0){
func_300(Local_296.f_8, &Local_296, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}elseif(!bLocal_263){
if(iLocal_313==0 && !func_73(Local_296.f_8, Local_468, 35f, 1)){
func_61(&Local_296);
}else{
func_300(Local_296.f_8, &Local_296, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}}else{
func_300(Local_296.f_8, &Local_296, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}}else{
if(func_482(Local_305[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_305[0 /*9*/])){
ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], 1, 1);
}
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
if(!iLocal_232){
if(iLocal_313==3 && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())){
if(iLocal_311==2 || iLocal_230){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GK", 7, 0, 0, 0)){
iLocal_232=1;
}}else{
iLocal_232=1;
}}else{
iLocal_232=1;
}}
if(iLocal_311 !=5){
if(ENTITY::DOES_ENTITY_EXIST(Local_296.f_8)){
if(PED::WAS_PED_KILLED_BY_STEALTH(Local_296.f_8)){
func_299(787);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 2f, 0);
}elseif(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 1)){
func_299(787);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 2f, 0);
}else{
iVar0=PED::GET_PED_SOURCE_OF_DEATH(Local_296.f_8);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::IS_ENTITY_A_PED(iVar0)){
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)==PLAYER::PLAYER_PED_ID()){
func_299(787);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 2f, 0);
}
}}}}
if(iLocal_311 !=0){
bLocal_263=true;
}
Local_296.f_9=51;
func_61(&Local_296);
iLocal_311=5;
}}}


void func_299(int iParam0){
bool bVar0;
int iVar1;
Global_63363=0;
if(!Global_63587[iParam0 /*13*/]==3){
return;
}
bVar0=false;
iVar1=0;
iVar1=0;
while (iVar1 < Global_75457){
if(Global_75458[iVar1 /*9*/]==iParam0){
bVar0=true;
Global_75458[iVar1 /*9*/].f_1=1;
Global_75458[iVar1 /*9*/].f_2=0f;
if(Global_75458[iVar1 /*9*/].f_3==2){
}}
iVar1++;
}
if(!bVar0){}}

int func_300(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12){
bool bVar0;
if(iParam3==0){
iParam3=PLAYER::GET_PLAYER_INDEX();
}
if(fParam6 < 0f){
fParam6=100f;
}
if(!PED::IS_PED_INJURED(iParam0)){
if(!HUD::DOES_PED_HAVE_AI_BLIP(iParam0)){
bVar0=true;
if(PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && iParam11){
bVar0=false;
}
if(bVar0){
if(iParam8==-1){
HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
}else{
HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, 1, iParam8);
}
uParam1->f_7=iParam0;
HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
if(HUD::DOES_BLIP_EXIST(*uParam1)){
HUD::SET_BLIP_PRIORITY(*uParam1, 7);
}}}
if(!iParam9==-1){
HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
}
HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
*uParam1=HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
if(!iParam9==-1 || iParam12){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
}
HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
}
HUD::SET_BLIP_PRIORITY(*uParam1, 7);
}}
if(!MISC::IS_BIT_SET(uParam1->f_6, 2)){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
MISC::SET_BIT(&(uParam1->f_6), 2);
}}
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
uParam1->f_1=HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
if(!MISC::IS_BIT_SET(uParam1->f_6, 3)){
if(HUD::DOES_BLIP_EXIST(uParam1->f_1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
}
else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
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


void func_301(){
struct<3> Var0;
float fVar1;
struct<3> Var2;
float fVar3;
if(func_32(Local_296.f_8)){
if(!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())){
switch (Local_296.f_9){
case 0:
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 3)){
TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 4f, -8f, -1, 270337, 0, 0, 0, 0);
}
break;
case 32:
if(func_482(Local_305[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8)){
ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], 1, 1);
}
TASK::CLEAR_PED_SECONDARY_TASK(Local_296.f_8);
if(!PED::IS_PED_HEADTRACKING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 3)){
if(!PED::IS_PED_RAGDOLL(Local_296.f_8) && !TASK::IS_PED_GETTING_UP(Local_296.f_8)){
TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "exit_gardener", 8f, -4f, -1, 8192, 0, 0, 0, 0);
}
elseif(func_306(Local_296.f_8, joaat("script_task_synchronized_scene"))){
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_296.f_8, -16f, 1);
}}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
Local_296.f_9=33;
break;
case 33:
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_gardener", 3)){
if(!PED::IS_PED_FACING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 45f)){
if(!func_306(Local_296.f_8, joaat("script_task_turn_ped_to_face_entity"))){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 0);
}
}}else{
ENTITY::SET_ENTITY_ANIM_SPEED(Local_296.f_8, "rcmnigel1b", "exit_gardener", 1.2f);
}
break;
case 34:
TASK::CLEAR_PED_TASKS(Local_296.f_8);
if(!PED::IS_PED_HEADTRACKING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}
if(!PED::IS_PED_FACING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 45f)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 0);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
Local_296.f_11=MISC::GET_GAME_TIMER();
Local_296.f_9=35;
break;
case 35:
if(!func_306(Local_296.f_8, joaat("script_task_play_anim"))){
if(!PED::IS_PED_FACING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 45f)){
if(!func_306(Local_296.f_8, joaat("script_task_turn_ped_to_face_entity"))){
Local_296.f_9=34;
}
}
elseif(func_296(Local_296.f_11, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000))){
if(func_305(&(Local_296.f_8), "react_small_variations_o", 4f, -4f, -1, 0, 0, 0, 0)){
Local_296.f_11=MISC::GET_GAME_TIMER();
}
}}else{
if(!PED::IS_PED_FACING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 170f)){
TASK::CLEAR_PED_TASKS(Local_296.f_8);
}
Local_296.f_11=MISC::GET_GAME_TIMER();
}
break;
case 38:
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_gardener", 3)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
if(!func_73(Local_296.f_8, -1050.359f, 354.0594f, 68.9132f, 3f, 1)){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1050.359f, 354.0594f, 68.9132f, 2f, 20000, 0.25f, 0, 38.0338f);
}
if(func_482(Local_297[0 /*14*/].f_8)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_297[0 /*14*/].f_8, -1);
}
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::TASK_PERFORM_SEQUENCE(Local_296.f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
Local_296.f_9=39;
}
break;
case 39:
if(!func_306(Local_296.f_8, joaat("script_task_perform_sequence"))){
Local_296.f_9=38;
}elseif(func_482(Local_297[0 /*14*/].f_8)){
if(!func_306(Local_296.f_8, joaat("script_task_look_at_entity"))){
TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, Local_297[0 /*14*/].f_8, -1, 0, 2);
}}
break;
case 42:
if(func_482(Local_305[0 /*9*/]) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8)){
ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], 1, 1);
}
TASK::CLEAR_PED_SECONDARY_TASK(Local_296.f_8);
TASK::CLEAR_PED_TASKS(Local_296.f_8);
PED::SET_PED_CAN_RAGDOLL(Local_296.f_8, 1);
if(!PED::IS_PED_RAGDOLL(Local_296.f_8)){
PED::SET_PED_TO_RAGDOLL(Local_296.f_8, 1000, 1000, 0, 1, 1, 0);
}
Local_296.f_9=43;
break;
case 43:
if(!PED::IS_PED_RAGDOLL(Local_296.f_8)){
if(!func_306(Local_296.f_8, joaat("script_task_cower")) && !func_306(Local_296.f_8, joaat("script_task_hands_up"))){
if(((!ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8) && !func_73(Local_296.f_8, Local_472, fLocal_272, 1)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_296.f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)) && !PED::IS_PED_CLIMBING(Local_296.f_8)){
PED::SET_PED_COWER_HASH(Local_296.f_8, "CODE_HUMAN_STAND_COWER");
TASK::TASK_COWER(Local_296.f_8, -1);
}elseif(!func_306(Local_296.f_8, joaat("script_task_follow_nav_mesh_to_coord"))){
TASK::CLEAR_PED_TASKS(Local_296.f_8);
Var0={
Local_471[0 /*3*/] 
};
fVar1=201.7237f;
if(func_304(Local_468, Var0, 1.5f)){
Var0={
Local_471[1 /*3*/] 
};
fVar1=325.0476f;
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_296.f_8, Var0, 1f, 20000, 0.25f, 0, fVar1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
}}
break;
case 44:
if(func_482(Local_305[0 /*9*/])){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8)){
ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], 1, 1);
}
func_54(&(Local_305[0 /*9*/]), 0);
}
if(PED::IS_PED_USING_ANY_SCENARIO(Local_296.f_8)){
PED::SET_PED_PANIC_EXIT_SCENARIO(Local_296.f_8, Local_468);
}
if(ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_296.f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)){
if(!func_306(Local_296.f_8, joaat("script_task_follow_nav_mesh_to_coord"))){
if((!PED::IS_PED_RAGDOLL(Local_296.f_8) && !TASK::IS_PED_GETTING_UP(Local_296.f_8)) && !PED::IS_PED_CLIMBING(Local_296.f_8)){
Var2={
Local_471[0 /*3*/] 
};
fVar3=201.7237f;
if(func_304(Local_468, Var2, 1.5f)){
Var2={
Local_471[1 /*3*/] 
};
fVar3=325.0476f;
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_296.f_8, Var2, 1f, 20000, 0.25f, 0, fVar3);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
}
}}else{
if(!PED::IS_PED_HEADTRACKING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 3)){
if(((!PED::IS_PED_RAGDOLL(Local_296.f_8) && !TASK::IS_PED_GETTING_UP(Local_296.f_8)) && !PED::IS_PED_CLIMBING(Local_296.f_8)) && !PED::IS_PED_BEING_STUNNED(Local_296.f_8, 0)){
TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "exit_panic_gardener", 8f, -4f, -1, 8192, 0, 0, 0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
}elseif(func_306(Local_296.f_8, joaat("script_task_synchronized_scene"))){
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_296.f_8, -16f, 1);
}
}
else{
TASK::TASK_HANDS_UP(Local_296.f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
}
Local_296.f_9=45;
}
break;
case 45:
if(ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_296.f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)){
Local_296.f_9=44;
}else{
if(!PED::IS_PED_HEADTRACKING_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_panic_gardener", 3)){
if(!func_306(Local_296.f_8, joaat("script_task_hands_up"))){
TASK::TASK_HANDS_UP(Local_296.f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
}
if(func_302(Local_296.f_8, 0)){
Local_296.f_9=46;
}
}}
break;
case 46:
if((((ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8) || func_73(Local_296.f_8, Local_472, fLocal_272, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_296.f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)) || PED::IS_PED_CLIMBING(Local_296.f_8)) || PED::IS_PED_RAGDOLL(Local_296.f_8)){
Local_296.f_9=44;
}else{
if(func_482(Local_305[0 /*9*/])){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8)){
ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], 1, 1);
}
func_54(&(Local_305[0 /*9*/]), 0);
}
if(PED::IS_PED_USING_ANY_SCENARIO(Local_296.f_8)){
PED::SET_PED_PANIC_EXIT_SCENARIO(Local_296.f_8, Local_468);
}
TASK::CLEAR_PED_SECONDARY_TASK(Local_296.f_8);
PED::SET_PED_COWER_HASH(Local_296.f_8, "CODE_HUMAN_STAND_COWER");
TASK::TASK_COWER(Local_296.f_8, -1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
Local_296.f_9=47;
}
break;
case 47:
if(!PED::IS_PED_RAGDOLL(Local_296.f_8)){
if(!func_306(Local_296.f_8, joaat("script_task_cower"))){
Local_296.f_9=46;
}
elseif(ENTITY::IS_ENTITY_IN_WATER(Local_296.f_8)){
Local_296.f_9=44;
}}
break;
case 49:
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_panic_gardener", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "exit_gardener", 3)){
PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 64, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 128, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 2, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 8, 1);
PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 1, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 32, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_296.f_8, 4, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_296.f_8, 5, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_296.f_8, 17, 1);
if(func_482(Local_305[0 /*9*/])){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_305[0 /*9*/], Local_296.f_8)){
ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], 1, 1);
}
func_54(&(Local_305[0 /*9*/]), 0);
}
TASK::CLEAR_PED_SECONDARY_TASK(Local_296.f_8);
if(PED::IS_PED_USING_ANY_SCENARIO(Local_296.f_8)){
PED::SET_PED_PANIC_EXIT_SCENARIO(Local_296.f_8, Local_468);
}
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 3)){
TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "exit_panic_gardener", 8f, -4f, -1, 8192, 0, 0, 0, 0);
}
else{
if((!PED::IS_PED_RAGDOLL(Local_296.f_8) && !PED::IS_PED_SWIMMING(Local_296.f_8)) && !PED::IS_PED_CLIMBING(Local_296.f_8)){
TASK::TASK_REACT_AND_FLEE_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID());
}else{
TASK::TASK_SMART_FLEE_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID(), 150f, -1, 1, 0);
}
Local_296.f_9=50;
}}
break;
case 50:
if(!func_306(Local_296.f_8, joaat("script_task_smart_flee_ped")) && !func_306(Local_296.f_8, joaat("script_task_react_and_flee_ped"))){
Local_296.f_9=49;
}
break;
default:
break;
}}}}

int func_302(int iParam0, bool bParam1){
float fVar0;
float fVar1;
struct<3> Var2;
struct<3> Var3;
if(bParam1){
if(!func_482(iParam0)){
return 0;
}}
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(func_303(1, 0, 1)){
fVar0=40f;
if(func_73(iParam0, Local_468, fVar0, 1)){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
return 1;
}}}}
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 4f, 1)){
return 1;
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
return 1;
}
fVar1=15f;
Var2={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
Var3={
Var2 
};
Var2.f_0=(Var2.f_0 - fVar1);
Var2.f_1=(Var2.f_1 - fVar1);
Var2.f_2=(Var2.f_2 - fVar1);
Var3.f_0=(Var3.f_0 + fVar1);
Var3.f_1=(Var3.f_1 + fVar1);
Var3.f_2=(Var3.f_2 + fVar1);
if(MISC::IS_PROJECTILE_IN_AREA(Var2, Var3, 1)){
return 1;
}
return 0;
}

int func_303(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
switch (iVar0){
case joaat("weapon_pistol"):
case joaat("weapon_combatpistol"):
case joaat("weapon_appistol"):
case joaat("weapon_microsmg"):
case joaat("weapon_smg"):
case joaat("weapon_snspistol"):
case joaat("weapon_assaultrifle"):
case joaat("weapon_carbinerifle"):
case joaat("weapon_specialcarbine"):
case joaat("weapon_advancedrifle"):
case joaat("weapon_mg"):
case joaat("weapon_combatmg"):
case joaat("weapon_pumpshotgun"):
case joaat("weapon_sawnoffshotgun"):
case joaat("weapon_assaultshotgun"):
case joaat("weapon_sniperrifle"):
case joaat("weapon_heavysniper"):
case joaat("weapon_remotesniper"):
case joaat("weapon_grenadelauncher"):
case joaat("weapon_rpg"):
case joaat("weapon_minigun"):
return 1;
default:
}
if(bParam0){
switch (iVar0){
case joaat("weapon_grenade"):
case joaat("weapon_stickybomb"):
case joaat("weapon_molotov"):
return 1;
}
default:
}
if(bParam1){
switch (iVar0){
case joaat("weapon_knife"):
case joaat("weapon_hammer"):
case joaat("weapon_crowbar"):
case joaat("weapon_bottle"):
case default:
}}
if(bParam2){
if(iVar0==joaat("weapon_stungun")){
return 1;
}}
return 0;
}


bool func_304(struct<3> Param0, struct<3> Param1, float fParam2){
return vdist2(Param0, Param1) <=(fParam2 * fParam2);
}

int func_305(var uParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
if(func_32(*uParam0)){
STREAMING::REQUEST_ANIM_DICT(&cLocal_425);
if(STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_425)){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
switch (iVar0){
case 0:
sParam1="react_small_variations_k";
break;
case 1:
sParam1="react_small_variations_m";
break;
case 2:
sParam1="react_small_variations_n";
break;
case 3:
sParam1="react_small_variations_o";
break;
}}
TASK::TASK_PLAY_ANIM(*uParam0, &cLocal_425, sParam1, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, iParam8, 0);
return 1;
}}
return 0;
}

int func_306(int iParam0, int iParam1){
if(func_32(iParam0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}}
return 0;
}


bool func_307(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
int iVar2;
iVar2=func_315(iParam0, iParam1);
if(!func_482(iParam0) || !func_482(iParam1)){
if(iVar2 !=-1){
func_314(&(Local_35[iVar2 /*4*/]));
}
return 0;
}
if(!func_311(iParam0, iParam1, fParam2, iParam3)){
return 0;
}
if(iVar2==-1){
iVar2=func_310();
if(iVar2==-1){
return 0;
}
Local_35[iVar2 /*4*/].f_1=iParam0;
Local_35[iVar2 /*4*/].f_2=iParam1;
}
Var1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uVar0=func_308(&(Local_35[iVar2 /*4*/]), Var1, iParam1, &(Local_35[iVar2 /*4*/].f_3), iParam0, iParam5);
return (uVar0 || (MISC::GET_GAME_TIMER() - Local_35[iVar2 /*4*/].f_3) < iParam4);
}

int func_308(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
var uVar2;
int iVar3;
int iVar4;
iVar3=0;
if(!func_482(iParam2)){
*uParam0=0;
return 0;
}
if(*uParam0==0){
Var1={
func_309(iParam2, iParam5) 
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
func_482(iVar3);
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3)==iParam2){
if(bLocal_36){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}
return 0;
}
if(ENTITY::IS_ENTITY_A_VEHICLE(iVar3)){
func_482(iVar3);
if(PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0)){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3)==PED::GET_VEHICLE_PED_IS_IN(iParam2, 0)){
if(bLocal_36){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}}
return 0;
}
return 0;
}


Vector3 func__309(int iParam0, int iParam1){
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

int func_310(){
int iVar0;
iVar0=0;
while (iVar0 < Local_35.f_0){
if((Local_35[iVar0 /*4*/]==0 && Local_35[iVar0 /*4*/].f_1==0) && Local_35[iVar0 /*4*/].f_2==0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_311(int iParam0, int iParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_313(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
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
func_313(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_312(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}


float func_312(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__313(struct<3> Param0){
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


void func_314(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}

int func_315(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Local_35.f_0){
if(Local_35[iVar0 /*4*/].f_1==iParam0 && Local_35[iVar0 /*4*/].f_2==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_316(char* sParam0, bool bParam1){
struct<6> Var0;
if(func_3()){
Var0={
func_318() 
};
if(MISC::ARE_STRINGS_EQUAL(&Var0, sParam0)){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(&Var0, "NULL")){
return 1;
}}
if(bParam1){
if(func_317(sParam0)){
return 1;
}}
return 0;
}

int func_317(char* sParam0){
if(iLocal_316==2 || iLocal_316==4){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &sLocal_451)){
return 1;
}}
return 0;
}


struct<6> func_318(){
struct<6> Var0;
int iVar1;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
iVar1=AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
iVar1=(iVar1 + Global_22735);
if(iVar1 > -1){
return Global_20593[iVar1 /*6*/];
}else{
return Var0;
}}
return Var0;
}

int func_319(int iParam0, float fParam1){
if(func_32(iParam0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
return 1;
}
if(func_321(PLAYER::PLAYER_PED_ID(), iParam0, fParam1, 1)){
if(func_320(iParam0, 1126825984)){
if((PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)){
return 1;
}}}}
return 0;
}


bool func_320(int iParam0, float fParam1){
return func_307(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}


bool func_321(int iParam0, int iParam1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), ENTITY::GET_ENTITY_COORDS(iParam1, iParam3)) <=(fParam2 * fParam2);
}

int func_322(char* sParam0, bool bParam1){
struct<6> Var0;
if(func_3()){
Var0={
func_323() 
};
if(MISC::ARE_STRINGS_EQUAL(&Var0, sParam0)){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(&Var0, "NULL")){
return 1;
}}
if(bParam1){
if(func_279(sParam0)){
return 1;
}}
return 0;
}


struct<6> func_323(){
struct<6> Var0;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
return Global_21344;
}
return Var0;
}

int func_324(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
bool bVar0;
bVar0=false;
if(iParam4==0){
if(MISC::GET_PROFILE_SETTING(203) !=0){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
bVar0=true;
iParam4=1;
}}}
if(func_325(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6)){
if(bVar0){
iLocal_316=3;
}else{
func_25(&sLocal_451, &cLocal_457);
}
return 1;
}
return 0;
}


bool func_325(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6){
func_295(uParam0, 145, sParam1, iParam4, iParam5, uParam6);
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
return func_282(sParam2, iParam3, 0);
}

int func_326(){
float fVar0;
if(iLocal_313==3){
if(func_50(iLocal_490)){
fVar0=VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_490, 2);
if(fVar0 < 0.49f){
return 1;
}}}
return 0;
}

int func_327(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
if(!func_482(Local_296.f_8)){
return 0;
}
if(bParam4){
if(PED::IS_PED_BEING_STEALTH_KILLED(Local_296.f_8)){
if(PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())){
return 0;
}}}
if(bParam0){
if(func_329(Local_296.f_8, 0)){
if(PED::CAN_PED_SEE_HATED_PED(Local_296.f_8, PLAYER::PLAYER_PED_ID())){
if(!func_328(iParam1, 10)){
return 1;
}}}}
if(bParam3){
if(iLocal_312==2 || iLocal_312==3){
if(func_73(Local_296.f_8, Local_468, 7f, 1)){
return 1;
}}}
if(bParam2){
if(iLocal_312==4){
if(func_73(Local_296.f_8, Local_468, 3.5f, 1)){
return 1;
}}}
if(PED::IS_PED_BEING_STUNNED(Local_296.f_8, 0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
if(iVar0==joaat("weapon_stungun")){
return 1;
}}
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_296.f_8, PLAYER::PLAYER_PED_ID())){
return 1;
}
return 0;
}


bool func_328(int iParam0, int iParam1){
return (MISC::GET_FRAME_COUNT() - iParam0) > iParam1;
}

int func_329(int iParam0, bool bParam1){
if(bParam1){
if(!func_482(iParam0)){
return 0;
}}
if(iLocal_312==0 || iLocal_312==1){
PED::SET_PED_SEEING_RANGE(iParam0, 15f);
PED::SET_PED_HEARING_RANGE(iParam0, 0f);
}elseif(iLocal_312==2 || iLocal_312==3){
PED::SET_PED_SEEING_RANGE(iParam0, 22f);
PED::SET_PED_HEARING_RANGE(iParam0, 10f);
}else{
PED::SET_PED_SEEING_RANGE(iParam0, 18f);
PED::SET_PED_HEARING_RANGE(iParam0, 5f);
}
return 1;
}

int func_330(int iParam0){
int iVar0;
if(iLocal_313==iParam0){
if(func_331()==5){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_50(iVar0)){
if(VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0)){
return 1;
}}}}
return 0;
}

int func_331(){
return iLocal_312;
}

int func_332(int iParam0, float fParam1, int iParam2, float fParam3){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
if(func_32(iParam0)){
if(func_303(1, 1, 1)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if(MISC::IS_BULLET_IN_AREA(Var0, iParam2, 1)){
return 1;
}
if(func_321(PLAYER::PLAYER_PED_ID(), iParam0, fParam1, 1)){
if(func_329(iParam0, 0)){
if(PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID())){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
return 1;
}}}}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
return 1;
}}
Var1={
Var0 
};
Var2={
Var1 
};
Var1.f_0=(Var1.f_0 - fParam3);
Var1.f_1=(Var1.f_1 - fParam3);
Var1.f_2=(Var1.f_2 - fParam3);
Var2.f_0=(Var2.f_0 + fParam3);
Var2.f_1=(Var2.f_1 + fParam3);
Var2.f_2=(Var2.f_2 + fParam3);
if(MISC::IS_PROJECTILE_IN_AREA(Var1, Var2, 1)){
return 1;
}}}
return 0;
}

int func_333(){
int iVar0;
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if((iLocal_313==3 || iLocal_313==2) || iLocal_313==1){
if(!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
if(iVar0 !=joaat("weapon_stickybomb")){
if(func_303(1, 0, 0)){
return 1;
}}}}}
return 0;
}


void func_334(int iParam0, var uParam1){
if(func_482(iParam0)){
if(func_307(iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7)){
*uParam1=MISC::GET_FRAME_COUNT();
}}}


void func_335(){
int iVar0;
struct<6> Var1;
struct<6> Var2;
char* sVar3;
int iVar4;
struct<3> Var5;
iVar0=0;
while (iVar0 <=1){
func_334(Local_297[iVar0 /*14*/].f_8, &(Local_297[iVar0 /*14*/].f_13));
iVar0++;
}
if(iLocal_314 !=6){
if(func_360()){
func_17(6, 1);
}}
switch (iLocal_314){
case 0:
if((iLocal_311==2 && func_32(Local_296.f_8)) && func_72(Local_296.f_8, 1)){
iLocal_282=MISC::GET_GAME_TIMER();
func_17(2, 1);
}else{
func_357();
if(iLocal_313==2){
if(!iLocal_239){
if(Local_297[0 /*14*/].f_9 !=0){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_P0", 7, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 0);
iLocal_239=1;
}
}}elseif(Local_297[0 /*14*/].f_9==5){
if(!func_322("NIG1B_P0", 1)){
Local_297[0 /*14*/].f_9=6;
}}elseif(Local_297[0 /*14*/].f_9==10){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_P1", 7, 0, 0, 0)){
Local_297[0 /*14*/].f_9=11;
}}elseif(!iLocal_237){
if(Local_297[0 /*14*/].f_9==12){
if(!func_322("NIG1B_P1", 1)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_P2", 7, 0, 0, 0)){
iLocal_237=1;
}}
}}elseif(Local_297[0 /*14*/].f_9==13 || Local_297[0 /*14*/].f_9==12){
if(!func_322("NIG1B_P2", 1)){
Local_297[0 /*14*/].f_9=14;
}}elseif(!iLocal_235){
if((Local_297[0 /*14*/].f_9==17 || Local_297[0 /*14*/].f_9==18) || Local_297[0 /*14*/].f_9==19){
if(!func_3() && !func_279("NULL")){
if(iLocal_261){
if(func_355(&uLocal_58, "NIG1BAU", "NIG1B_P3", &Local_424, 7, 1, 0)){
iLocal_261=0;
iLocal_235=1;
}}elseif(func_324(&uLocal_58, "NIG1BAU", "NIG1B_P3", 7, 0, 0, 0)){
iLocal_235=1;
}}
}}elseif(!iLocal_236){
if(!func_322("NIG1B_P3", 1)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_IDLE", 7, 0, 0, 0)){
iLocal_283=MISC::GET_GAME_TIMER();
iLocal_236=1;
}
}}elseif(!func_322("NIG1B_IDLE", 1)){
if(iLocal_251){
if(func_296(iLocal_283, 150000000)){
}
}}else{
iLocal_283=MISC::GET_GAME_TIMER();
}}elseif(func_3() && !func_279("NULL")){
Var1={
func_323() 
};
if((((MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P0") || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P1")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P2")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P3")) || MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_IDLE")){
func_24(1, 0);
}elseif(MISC::ARE_STRINGS_EQUAL(&Var1, "NIG1B_P3")){
Var2={
func_354() 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var2)){
iLocal_261=1;
iLocal_235=0;
Local_424={
Var2 
};
func_24(1, 0);
}}}
if(!func_352()){
func_17(3, 1);
}}
if(func_333() || func_351()){
func_17(5, 1);
}
break;
case 1:
if((iLocal_311==2 && func_32(Local_296.f_8)) && func_72(Local_296.f_8, 1)){
func_17(2, 1);
}else{
if(iLocal_313==2){
if(!iLocal_234){
func_24(1, 0);
func_25(&sLocal_451, &cLocal_457);
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_CPT", 7, 0, 0, 0)){
iLocal_234=1;
}}elseif(iLocal_255){
if(!iLocal_238){
func_24(0, 0);
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_CSC", 7, 0, 0, 0)){
iLocal_238=1;
}
}
elseif(!func_3() && !func_279("NULL")){
if(Local_297[0 /*14*/].f_9==22 || Local_297[0 /*14*/].f_9==23){
Local_297[0 /*14*/].f_9=24;
}
}}
if(!func_352()){
func_17(3, 1);
}}
if(func_333() || func_351()){
func_17(5, 1);
}}
break;
case 2:
if(iLocal_313==2){
if(!iLocal_245){
if(!func_296(iLocal_291, 2000)){
if(func_296(iLocal_291, 500)){
func_24(0, 0);
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0)){
iLocal_245=1;
iLocal_291=0;
}
}}elseif((iLocal_311==2 && func_32(Local_296.f_8)) && func_72(Local_296.f_8, 1)){
if(!bLocal_228){
func_24(0, 0);
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GIC", 7, 0, 0, 0)){
iLocal_282=MISC::GET_GAME_TIMER();
bLocal_228=true;
}
}
elseif(!bLocal_241){
if(!func_3() && !func_279("NULL")){
bLocal_241=func_324(&uLocal_58, "NIG1BAU", "NIG1B_SPO", 7, 0, 0, 0);
bLocal_241=true;
}
}
elseif(!func_3() && !func_279("NULL")){
func_17(4, 1);
return;
}}else{
func_17(3, 0);
return;
}}elseif(!func_3() && !func_279("NULL")){
func_17(4, 1);
return;
}}elseif((MISC::GET_GAME_TIMER() - iLocal_282) > 10000){
func_17(4, 1);
bLocal_228=true;
return;
}
if((func_333() || func_351()) || func_350()){
func_17(5, 1);
return;
}
break;
case 3:
if(!iLocal_240){
if(bLocal_241){
iLocal_240=1;
}elseif(iLocal_313==2){
if(func_3()){
func_24(0, 0);
}else{
if(iLocal_277==1){
sVar3="NIG1B_SPI_2";
}
else{
sVar3="NIG1B_SPI_1";
}
if(func_348(&uLocal_58, "NIG1BAU", "NIG1B_SPI", sVar3, 7, 0, 0)){
iLocal_240=1;
}}}}else{
func_64(0);
if(iLocal_313==2){
if(!func_296(iLocal_291, 2000)){
if(!iLocal_245){
if(func_296(iLocal_291, 500)){
func_24(0, 0);
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0)){
iLocal_245=1;
iLocal_291=0;
}}
}}elseif(!bLocal_241){
if(!func_3() && !func_279("NULL")){
bLocal_241=func_324(&uLocal_58, "NIG1BAU", "NIG1B_SPO", 7, 0, 0, 0);
}}elseif(!func_3() && !func_279("NULL")){
iLocal_282=MISC::GET_GAME_TIMER();
func_17(4, 1);
}}else{
iLocal_282=MISC::GET_GAME_TIMER();
func_17(4, 1);
}}
if(func_333() || func_351()){
func_17(5, 1);
return;
}
break;
case 4:
if(!iLocal_233){
if(iLocal_224){
if(iLocal_313==2){
func_24(0, 0);
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_CC", 7, 0, 0, 0)){
iLocal_282=MISC::GET_GAME_TIMER();
iLocal_233=1;
}}elseif((MISC::GET_GAME_TIMER() - iLocal_282) > 4000){
iLocal_282=MISC::GET_GAME_TIMER();
iLocal_233=1;
iLocal_248=0;
}}}else{
if(!bLocal_259){
if(!func_322("NIG1B_CC", 1)){
if(Local_297[0 /*14*/].f_9==28 || Local_297[0 /*14*/].f_9==29){
Local_297[0 /*14*/].f_9=30;
}
if(iLocal_54==0 || iLocal_54==1){
if((MISC::GET_GAME_TIMER() - iLocal_282) > 500){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
bLocal_259=true;
}else{
if(!func_347()){
func_346();
}
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
iLocal_289=MISC::GET_GAME_TIMER();
bLocal_259=true;
}}
}}else{
iLocal_282=MISC::GET_GAME_TIMER();
}}elseif(!iLocal_248){
if(iLocal_313==2){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_CC3", 7, 0, 0, 0)){
iLocal_282=MISC::GET_GAME_TIMER();
iLocal_248=1;
}}}else{
if(!func_322(&Local_447, 1)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_297[0 /*14*/].f_8)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_TBUMP", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_TBUMP", 24);
}
}
elseif(ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_297[1 /*14*/].f_8)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GBUMP", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_GBUMP", 24);
}
}}
if(func_3()){
iLocal_289=MISC::GET_GAME_TIMER();
}elseif(iLocal_313==2){
if(func_296(iLocal_289, 3000)){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 5){
if(func_32(Local_297[0 /*14*/].f_8)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_CC2", 7, 0, 0, 0)){
iLocal_289=MISC::GET_GAME_TIMER();
}}}elseif(func_345()){
iLocal_289=MISC::GET_GAME_TIMER();
}
}}}
if(Local_297[0 /*14*/].f_9==31){
Local_297[0 /*14*/].f_9=32;
}}
if((func_333() || func_351()) || func_350()){
if(iLocal_233 && !func_322("NIG1B_CC", 1)){
bLocal_262=false;
}else{
bLocal_262=true;
}
func_17(5, 1);
return;
}
break;
case 5:
func_64(0);
if(iLocal_313==2){
if(!iLocal_242){
func_24(0, 0);
if(bLocal_262){
StringCopy(&Local_443, "NIG1B_SCC", 24);
if(func_324(&uLocal_58, "NIG1BAU", &Local_443, 7, 0, 0, 0)){
iLocal_242=1;
}}elseif(func_303(1, 0, 0)){
StringCopy(&Local_443, "NIG1B_SUR", 24);
if(func_324(&uLocal_58, "NIG1BAU", &Local_443, 7, 0, 0, 0)){
iLocal_242=1;
}}else{
StringCopy(&Local_443, "NIG1B_SNL", 24);
if(func_324(&uLocal_58, "NIG1BAU", &Local_443, 7, 0, 0, 0)){
iLocal_242=1;
}}
iLocal_279=MISC::GET_GAME_TIMER();
}elseif(!func_322(&Local_443, 1)){
if(!iLocal_245){
if(!func_296(iLocal_291, 2000)){
if(func_296(iLocal_291, 500)){
if(!func_3() && !func_279("NULL")){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_PUP", 7, 0, 0, 0)){
iLocal_291=0;
iLocal_245=1;
}}}
}}
func_344();
}}else{
if(!bLocal_259){
if(!iLocal_246){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
bLocal_259=true;
}
elseif(func_32(Local_297[1 /*14*/].f_8) && func_73(Local_297[1 /*14*/].f_8, Local_468, 50f, 1)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_C1", 7, 0, 0, 0)){
iLocal_282=MISC::GET_GAME_TIMER();
iLocal_246=1;
}
}
else{
iLocal_282=MISC::GET_GAME_TIMER();
iLocal_246=1;
}}elseif(!func_322("NIG1B_C1", 1)){
if(iLocal_54==0 || iLocal_54==1){
if((MISC::GET_GAME_TIMER() - iLocal_282) > 2000){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
bLocal_259=true;
}else{
if(!func_347()){
func_346();
}
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
bLocal_259=true;
}}
}}else{
iLocal_282=MISC::GET_GAME_TIMER();
}}
if(iLocal_313==0){
if(func_296(iLocal_290, 5000)){
func_17(6, 1);
}}else{
iLocal_290=MISC::GET_GAME_TIMER();
}}
iVar0=0;
while (iVar0 <=1){
if(func_482(Local_297[iVar0 /*14*/].f_8)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_297[iVar0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 1)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_297[iVar0 /*14*/].f_8);
func_24(0, 0);
if(iVar0==0){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_THIT", 7, 0, 0, 0)){
}
iLocal_294=0;
}
elseif(iVar0==1){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GHIT", 7, 0, 0, 0)){
}
iLocal_294=1;
}
func_17(6, 1);
return;
}}
iVar0++;
}
break;
case 6:
if(func_3()){
iLocal_288=MISC::GET_GAME_TIMER();
}elseif(iLocal_294 !=-1){
if(iLocal_294==0){
if(vdist2(ENTITY::GET_ENTITY_COORDS(Local_297[0 /*14*/].f_8, 0), Local_468) < (20f * 20f)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_PBU", 7, 0, 0, 0)){
iLocal_294=-1;
}}else{
iLocal_294=-1;
}}elseif(iLocal_294==1){
if(vdist2(ENTITY::GET_ENTITY_COORDS(Local_297[1 /*14*/].f_8, 0), Local_468) < (20f * 20f)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_BEAT", 7, 0, 0, 0)){
iLocal_294=-1;
}}else{
iLocal_294=-1;
}}else{
iLocal_294=-1;
}}elseif(func_296(iLocal_288, 3000)){
iVar4=func_343(Local_468, 20f);
if(iVar4 !=-1){
if(iVar4==0){
StringCopy(&Var5, "NIG1B_CF1", 24);
}elseif(iVar4==1){
StringCopy(&Var5, "NIG1B_CF2", 24);
}
if(func_324(&uLocal_58, "NIG1BAU", &Var5, 7, 0, 0, 0)){
iLocal_288=MISC::GET_GAME_TIMER();
}}}
if(!bLocal_259){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
bLocal_259=true;
}elseif(!iLocal_246){
iLocal_282=MISC::GET_GAME_TIMER();
iLocal_246=1;
}elseif(iLocal_54==0 || iLocal_54==1){
if(func_296(iLocal_282, 8000)){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
bLocal_259=true;
}
else{
if(!func_347()){
func_346();
}
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
bLocal_259=true;
}}}}
break;
}
iVar0=0;
while (iVar0 <=1){
func_336(iVar0);
iVar0++;
}}


void func_336(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
float fVar11;
char[] cVar12[8];
struct<3> Var13;
struct<3> Var14;
float fVar15;
struct<3> Var16;
float fVar17;
if(func_32(Local_297[iParam0 /*14*/].f_8)){
PED::SET_PED_RESET_FLAG(Local_297[iParam0 /*14*/].f_8, 187, 1);
if(!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())){
switch (Local_297[iParam0 /*14*/].f_9){
case 0:
if(iParam0==0){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_stand_still"))){
TASK::TASK_STAND_STILL(Local_297[iParam0 /*14*/].f_8, -1);
}}
break;
case 1:
if(iParam0==0){
if(iLocal_275==1){
iVar0=0;
}
elseif(iLocal_275==0){
iVar0=1;
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_464[iVar0 /*3*/], 2f, 20000, fLocal_268[iVar0], 1056964608);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
Local_297[iParam0 /*14*/].f_9=2;
}
break;
case 2:
if(iParam0==0){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
Local_297[iParam0 /*14*/].f_9=3;
}}
break;
case 3:
if(iParam0==0){
if(iLocal_275==1){
iVar1=1;
}
elseif(iLocal_275==0){
iVar1=0;
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_464[iVar1 /*3*/], 2f, 20000, fLocal_268[iVar1], 1056964608);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
Local_297[iParam0 /*14*/].f_9=4;
}
break;
case 4:
if(iParam0==0){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
Local_297[iParam0 /*14*/].f_9=5;
}}
break;
case 5:
if(iParam0==0){
}
break;
case 6:
if(iParam0==0){
if(func_482(Local_297[1 /*14*/].f_8)){
if(iLocal_275==1){
iVar2=0;
}elseif(iLocal_275==0){
iVar2=1;
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_464[iVar2 /*3*/], 2f, 20000, 1193033728, 1056964608);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=7;
}}
break;
case 7:
if(iParam0==0){
if(iLocal_275==1){
iVar3=0;
}
elseif(iLocal_275==0){
iVar3=1;
}
if(func_482(Local_297[1 /*14*/].f_8)){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
if(func_73(Local_297[iParam0 /*14*/].f_8, Local_464[iVar3 /*3*/], 2.5f, 1)){
Local_297[iParam0 /*14*/].f_9=8;
}else{
Local_297[iParam0 /*14*/].f_9=6;
}}
}}
break;
case 8:
if(iParam0==0){
if(iLocal_275==1){
iVar4=0;
}
elseif(iLocal_275==0){
iVar4=1;
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_469[iVar4 /*3*/], 1f, 20000, fLocal_270[iVar4], 1056964608);
TASK::TASK_CLIMB(0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=9;
}
break;
case 9:
if(iParam0==0){
if(iLocal_275==1){
iVar5=0;
}
elseif(iLocal_275==0){
iVar5=1;
}
if(func_73(Local_297[iParam0 /*14*/].f_8, Local_470[iVar5 /*3*/], fLocal_271, 1)){
if(func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_297[iParam0 /*14*/].f_8);
Local_297[iParam0 /*14*/].f_9=10;
}
}
elseif(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
if(((!ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) && !func_73(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)) && !PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_297[iParam0 /*14*/].f_8);
Local_297[iParam0 /*14*/].f_9=10;
}else{
Local_297[iParam0 /*14*/].f_9=8;
}
}}
break;
case 10:
break;
case 11:
if(iParam0==0){
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_PLAY_ANIM(0, &cLocal_434, "that_had_to_be_tyler", 4f, -4f, -1, 0, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
PED::SET_PED_RESET_FLAG(Local_297[iParam0 /*14*/].f_8, 206, 1);
Local_297[iParam0 /*14*/].f_9=12;
}
break;
case 12:
if(iParam0==0){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
Local_297[iParam0 /*14*/].f_9=13;
}
else{
PED::SET_PED_RESET_FLAG(Local_297[iParam0 /*14*/].f_8, 206, 1);
}}
break;
case 13:
break;
case 14:
if(iParam0==0){
if(iLocal_275==1){
iVar6=0;
}
elseif(iLocal_275==0){
iVar6=1;
}
Var7={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_434, "ENTER", Local_486, Local_487, 0, 2) 
};
Var8={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&cLocal_434, "ENTER", Local_486, Local_487, 0, 2) 
};
TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_297[iParam0 /*14*/].f_8, 1);
TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_297[iParam0 /*14*/].f_8, 0);
PED::SET_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, &cLocal_434, "walk_tyler", 1090519040, 1);
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_471[iVar6 /*3*/], 1f, 20000, 0.25f, 1, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var7, 1f, 20000, 0.25f, 512, Var8.f_2);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=15;
}
break;
case 15:
if(iParam0==0){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
Var9={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(&cLocal_434, "ENTER", Local_486, Local_487, 0, 2) 
};
if(func_73(Local_297[iParam0 /*14*/].f_8, Var9, 1f, 1)){
PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -1056964608);
Local_297[iParam0 /*14*/].f_9=16;
}else{
Local_297[iParam0 /*14*/].f_9=14;
}
}}
break;
case 16:
if(iParam0==0){
func_339(1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=18;
}
break;
case 17:
if(iParam0==0){
if(func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_play_anim"))){
Local_297[iParam0 /*14*/].f_9=18;
}
else{
Local_297[iParam0 /*14*/].f_9=16;
}}
break;
case 18:
if(iParam0==0){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[1])){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[1]) > 0.999f){
func_339(2);
Local_297[iParam0 /*14*/].f_9=19;
Local_297[1 /*14*/].f_9=20;
}
}
else{
func_339(2);
Local_297[iParam0 /*14*/].f_9=19;
Local_297[1 /*14*/].f_9=20;
}}
break;
case 19:
if(iParam0==0){
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[3])){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[2])){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[2]) > 0.999f){
func_339(3);
}}else{
func_339(3);
}
}}
break;
case 20:
break;
case 21:
break;
case 22:
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[3]) && !func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_synchronized_scene"))){
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_471[0 /*3*/], 1f, 20000, 0.25f, 1, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_463, 1f, 20000, 0.25f, 0, 223.4962f);
TASK::TASK_PLAY_ANIM(0, "rcmnigel1b", "wipehead", 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::TASK_STAND_STILL(0, -1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=23;
}
break;
case 23:
if(func_73(Local_297[iParam0 /*14*/].f_8, Local_463, 1.25f, 1)){
iLocal_255=1;
}elseif(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
Local_297[iParam0 /*14*/].f_9=22;
}
break;
case 24:
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1049.915f, 357.2381f, 68.9132f, 1f, 20000, 0.25f, 0, 71.1227f);
TASK::TASK_STAND_STILL(0, 1000);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1048.417f, 364.7032f, 68.9129f, 1f, 20000, 0.25f, 0, 6.9753f);
TASK::TASK_STAND_STILL(0, 2000);
TASK::SET_SEQUENCE_TO_REPEAT(uLocal_318, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=25;
break;
case 25:
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
Local_297[iParam0 /*14*/].f_9=24;
}
break;
case 26:
if((ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) || func_73(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)){
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
Var10={
Local_471[0 /*3*/] 
};
fVar11=201.7237f;
if(func_304(Local_468, Var10, 2.5f)){
Var10={
Local_471[1 /*3*/] 
};
fVar11=325.0476f;
}
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_297[iParam0 /*14*/].f_8, Var10, 1f, 20000, 0.25f, 0, fVar11);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=27;
}else{
Local_297[iParam0 /*14*/].f_9=28;
}
break;
case 27:
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_follow_nav_mesh_to_coord"))){
Local_297[iParam0 /*14*/].f_9=26;
}elseif(!ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8)){
if(!func_73(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)){
if(!PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8)){
if(!func_73(Local_297[iParam0 /*14*/].f_8, -1057.136f, 369.1722f, 69.18319f, 1.25f, 1)){
if(!func_73(Local_297[iParam0 /*14*/].f_8, -1057.108f, 354.7688f, 69.19383f, 1.25f, 1)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, -1051.34f, 358.4045f, 66.91455f, -1051.362f, 365.5106f, 71.91416f, 2.25f, 0, 1, 0)){
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
Local_297[iParam0 /*14*/].f_9=28;
}
}
}}}
}}
break;
case 28:
if(!func_482(Local_301.f_0)){
if(ENTITY::DOES_ENTITY_EXIST(Local_301.f_0)){
OBJECT::DELETE_OBJECT(&Local_301);
}
STREAMING::REQUEST_MODEL(Local_301.f_1);
if(STREAMING::HAS_MODEL_LOADED(Local_301.f_1)){
Local_301.f_0=OBJECT::CREATE_OBJECT(Local_301.f_1, ENTITY::GET_ENTITY_COORDS(Local_297[iParam0 /*14*/].f_8, 1) + Vector(-10f, 0f, 0f), 1, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_301.f_1);
}}else{
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_301.f_0, Local_297[iParam0 /*14*/].f_8)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_301.f_0, Local_297[iParam0 /*14*/].f_8, PED::GET_PED_BONE_INDEX(Local_297[iParam0 /*14*/].f_8, 28422), Local_301.f_2, Local_301.f_5, 1, 1, 0, 0, 2, 1, 0);
}
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 768, 2);
TASK::TASK_USE_MOBILE_PHONE(Local_297[iParam0 /*14*/].f_8, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
iLocal_280=MISC::GET_GAME_TIMER();
Local_297[iParam0 /*14*/].f_9=29;
}
break;
case 29:
if(PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_297[iParam0 /*14*/].f_8)){
if(!PED::IS_PED_HEADTRACKING_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 768, 2);
}
if((MISC::GET_GAME_TIMER() - iLocal_280) > 1500){
iLocal_224=1;
}}else{
iLocal_224=0;
Local_297[iParam0 /*14*/].f_9=28;
}
break;
case 30:
if(PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_297[iParam0 /*14*/].f_8)){
TASK::TASK_USE_MOBILE_PHONE(Local_297[iParam0 /*14*/].f_8, 0, 1);
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
}else{
func_54(&Local_301, 1);
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
Local_297[iParam0 /*14*/].f_9=31;
}
break;
case 31:
break;
case 32:
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", 3)){
TASK::STOP_ANIM_TASK(Local_297[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", -4f);
}
if(iParam0==0){
PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -1056964608);
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_11=MISC::GET_GAME_TIMER();
Local_297[iParam0 /*14*/].f_9=33;
}elseif(iParam0==1){
if(func_338()){
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_11=MISC::GET_GAME_TIMER();
Local_297[iParam0 /*14*/].f_9=33;
}}
break;
case 33:
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_play_anim"))){
if(!PED::IS_PED_FACING_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 45f)){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_turn_ped_to_face_entity"))){
Local_297[iParam0 /*14*/].f_9=32;
}
}
elseif((func_296(Local_297[iParam0 /*14*/].f_11, MISC::GET_RANDOM_INT_IN_RANGE(750, 3000)) && !ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)){
if(iParam0==1){
cVar12="react_small_variations_k";
}elseif(MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5){
cVar12="react_small_variations_m";
}else{
cVar12="react_small_variations_n";
}
if(func_305(&(Local_297[iParam0 /*14*/].f_8), cVar12, 4f, -4f, -1, 0, 0, 0, 0)){
Local_297[iParam0 /*14*/].f_11=MISC::GET_GAME_TIMER();
}
}}else{
if(!PED::IS_PED_FACING_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 170f)){
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
}
Local_297[iParam0 /*14*/].f_11=MISC::GET_GAME_TIMER();
}
if(iParam0==1){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 1)){
Local_297[iParam0 /*14*/].f_9=42;
}}
break;
case 36:
if(func_482(Local_296.f_8) && iLocal_314==2){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", 3)){
TASK::STOP_ANIM_TASK(Local_297[iParam0 /*14*/].f_8, "rcmnigel1b", "wipehead", -4f);
}
if(iParam0==0){
PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -1056964608);
}
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, Local_296.f_8, -1, 0, 2);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_297[iParam0 /*14*/].f_8, Local_296.f_8, -1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=37;
}else{
Local_297[iParam0 /*14*/].f_9=32;
}
break;
case 37:
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_turn_ped_to_face_entity"))){
Local_297[iParam0 /*14*/].f_9=36;
}
if(!func_482(Local_296.f_8) || iLocal_314 !=2){
Local_297[iParam0 /*14*/].f_9=32;
}
if(iParam0==1){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 1)){
Local_297[iParam0 /*14*/].f_9=42;
}}
break;
case 40:
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
if(ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8)){
Var13={
ENTITY::GET_ENTITY_COORDS(Local_297[iParam0 /*14*/].f_8, 1) 
};
if(PATHFIND::GET_SAFE_COORD_FOR_PED(Var13, 1, &Var13, 0)){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var13, 2f, 20000, 0.25f, 0, 1193033728);
}}
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_PERFORM_SEQUENCE(Local_297[iParam0 /*14*/].f_8, uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=41;
break;
case 41:
if(ENTITY::GET_ENTITY_HEALTH(Local_297[iParam0 /*14*/].f_8) < 180){
Local_297[iParam0 /*14*/].f_9=42;
}elseif(!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
}elseif(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_perform_sequence"))){
Local_297[iParam0 /*14*/].f_9=40;
}
break;
case 42:
if(iParam0==0){
if(func_482(Local_301.f_0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_301.f_0, Local_297[iParam0 /*14*/].f_8)){
ENTITY::DETACH_ENTITY(Local_301.f_0, 1, 1);
}
func_54(&Local_301, 0);
}}
PED::SET_PED_CAN_RAGDOLL(Local_297[iParam0 /*14*/].f_8, 1);
if(!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8)){
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
PED::SET_PED_TO_RAGDOLL(Local_297[iParam0 /*14*/].f_8, 1000, 1000, 0, 1, 1, 0);
}
Local_297[iParam0 /*14*/].f_9=43;
break;
case 43:
if(!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8)){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_cower")) && !func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_hands_up"))){
if((ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) || func_73(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_follow_nav_mesh_to_coord"))){
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
Var14={
Local_471[0 /*3*/] 
};
fVar15=201.7237f;
if(func_304(Local_468, Var14, 1.5f)){
Var14={
Local_471[1 /*3*/] 
};
fVar15=325.0476f;
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_297[iParam0 /*14*/].f_8, Var14, 1f, 20000, 0.25f, 0, fVar15);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
}}else{
PED::SET_PED_COWER_HASH(Local_297[iParam0 /*14*/].f_8, "CODE_HUMAN_STAND_COWER");
TASK::TASK_COWER(Local_297[iParam0 /*14*/].f_8, -1);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
}}
break;
case 44:
AUDIO::STOP_PED_SPEAKING(Local_297[iParam0 /*14*/].f_8, 0);
if(iParam0==0){
if(func_482(Local_301.f_0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_301.f_0, Local_297[iParam0 /*14*/].f_8)){
ENTITY::DETACH_ENTITY(Local_301.f_0, 1, 1);
}
func_54(&Local_301, 0);
}
PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -1056964608);
}
if(func_337(iParam0)){
if((!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8) && !TASK::IS_PED_GETTING_UP(Local_297[iParam0 /*14*/].f_8)) && !PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8)){
if((((ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)) || func_73(Local_297[iParam0 /*14*/].f_8, -1057.136f, 369.1722f, 69.18319f, 1.25f, 1)) || func_73(Local_297[iParam0 /*14*/].f_8, -1057.108f, 354.7688f, 69.19383f, 1.25f, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, -1051.34f, 358.4045f, 66.91455f, -1051.362f, 365.5106f, 71.91416f, 2.25f, 0, 1, 0)){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_follow_nav_mesh_to_coord"))){
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
Var16={
Local_471[0 /*3*/] 
};
fVar17=201.7237f;
if(func_304(Local_468, Var16, 1.5f)){
Var16={
Local_471[1 /*3*/] 
};
fVar17=325.0476f;
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_297[iParam0 /*14*/].f_8, Var16, 1f, 20000, 0.25f, 0, fVar17);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
}}else{
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
TASK::TASK_LOOK_AT_ENTITY(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_HANDS_UP(Local_297[iParam0 /*14*/].f_8, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=45;
}
}}
break;
case 45:
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_follow_nav_mesh_to_coord"))){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_hands_up"))){
Local_297[iParam0 /*14*/].f_9=44;
}
elseif(ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)){
Local_297[iParam0 /*14*/].f_9=44;
}}elseif(!ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)){
if(!func_73(Local_297[iParam0 /*14*/].f_8, -1057.136f, 369.1722f, 69.18319f, 1.25f, 1)){
if(!func_73(Local_297[iParam0 /*14*/].f_8, -1057.108f, 354.7688f, 69.19383f, 1.25f, 1)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, -1051.34f, 358.4045f, 66.91455f, -1051.362f, 365.5106f, 71.91416f, 2.25f, 0, 1, 0)){
Local_297[iParam0 /*14*/].f_9=44;
}}
}}
break;
case 46:
if((((ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8) || func_73(Local_297[iParam0 /*14*/].f_8, Local_472, fLocal_272, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iParam0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0)) || PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8)) || PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8)){
Local_297[iParam0 /*14*/].f_9=44;
}else{
TASK::CLEAR_PED_TASKS(Local_297[iParam0 /*14*/].f_8);
PED::SET_PED_COWER_HASH(Local_297[iParam0 /*14*/].f_8, "CODE_HUMAN_STAND_COWER");
TASK::TASK_COWER(Local_297[iParam0 /*14*/].f_8, -1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iParam0 /*14*/].f_8, 1);
Local_297[iParam0 /*14*/].f_9=47;
}
break;
case 47:
if(!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8)){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_cower"))){
Local_297[iParam0 /*14*/].f_9=46;
}
elseif(ENTITY::IS_ENTITY_IN_WATER(Local_297[iParam0 /*14*/].f_8)){
Local_297[iParam0 /*14*/].f_9=44;
}}
break;
case 48:
if(func_337(iParam0)){
if((!PED::IS_PED_RAGDOLL(Local_297[iParam0 /*14*/].f_8) && !PED::IS_PED_SWIMMING(Local_297[iParam0 /*14*/].f_8)) && !PED::IS_PED_CLIMBING(Local_297[iParam0 /*14*/].f_8)){
AUDIO::STOP_PED_SPEAKING(Local_297[iParam0 /*14*/].f_8, 0);
if(iParam0==0){
PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -1056964608);
}
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 64, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 128, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 2, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 8, 1);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 1, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 32, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 4, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 5, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 17, 1);
TASK::TASK_REACT_AND_FLEE_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID());
Local_297[iParam0 /*14*/].f_9=50;
}
else{
Local_297[iParam0 /*14*/].f_9=49;
}}else{
Local_297[iParam0 /*14*/].f_9=49;
}
break;
case 49:
AUDIO::STOP_PED_SPEAKING(Local_297[iParam0 /*14*/].f_8, 0);
if(iParam0==0){
PED::CLEAR_PED_ALTERNATE_WALK_ANIM(Local_297[iParam0 /*14*/].f_8, -1056964608);
}
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 64, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 128, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 2, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 8, 1);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 1, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 32, 0);
PED::SET_PED_FLEE_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 4, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 5, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_297[iParam0 /*14*/].f_8, 17, 1);
if(func_337(iParam0)){
TASK::TASK_SMART_FLEE_PED(Local_297[iParam0 /*14*/].f_8, PLAYER::PLAYER_PED_ID(), 150f, -1, 1, 0);
Local_297[iParam0 /*14*/].f_9=50;
}
break;
case 50:
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_smart_flee_ped")) && !func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_react_and_flee_ped"))){
Local_297[iParam0 /*14*/].f_9=49;
}
break;
default:
break;
}}
if((Local_297[iParam0 /*14*/].f_9==49 || Local_297[iParam0 /*14*/].f_9==48) || Local_297[iParam0 /*14*/].f_9==50){
func_61(&(Local_297[iParam0 /*14*/]));
}elseif(iLocal_54==0){
func_300(Local_297[iParam0 /*14*/].f_8, &(Local_297[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}elseif(iLocal_314==0 || iLocal_314==1){
if(iLocal_313==0 && !func_73(Local_297[iParam0 /*14*/].f_8, Local_468, 35f, 1)){
func_61(&(Local_297[iParam0 /*14*/]));
}else{
func_300(Local_297[iParam0 /*14*/].f_8, &(Local_297[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}}else{
func_300(Local_297[iParam0 /*14*/].f_8, &(Local_297[iParam0 /*14*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}}else{
if(Local_297[iParam0 /*14*/].f_9 !=51){
if(iParam0==0){
if(!MISC::IS_BIT_SET(Global_113648.f_18576.f_382, 3)){
MISC::SET_BIT(&(Global_113648.f_18576.f_382), 3);
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 2f, 0);
}
Local_297[iParam0 /*14*/].f_9=51;
}
func_61(&(Local_297[iParam0 /*14*/]));
}}

int func_337(int iParam0){
if(iParam0==0){
if(func_32(Local_297[0 /*14*/].f_8)){
if(!iLocal_264[0]){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[1])){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[1]) > 0.55f){
func_339(4);
}else{
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[0 /*14*/].f_8, -4f, 1);
PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[1], 1f);
}}elseif(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[3]) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[2])){
func_339(4);
}
iLocal_264[0]=1;
}elseif(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[4])){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_synchronized_scene"))){
return 1;
}}}}elseif(iParam0==1){
if(func_32(Local_297[1 /*14*/].f_8)){
if(!iLocal_264[1]){
if(func_306(Local_297[1 /*14*/].f_8, joaat("script_task_synchronized_scene"))){
func_339(5);
}
iLocal_264[1]=1;
}elseif(func_338()){
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[4]) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[6])){
if(!func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_synchronized_scene"))){
return 1;
}}}}}
return 0;
}

int func_338(){
if(func_32(Local_297[1 /*14*/].f_8)){
if(!iLocal_265){
if(func_306(Local_297[1 /*14*/].f_8, joaat("script_task_synchronized_scene"))){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[5])){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293[5]) > 0.98f){
func_339(6);
iLocal_265=1;
}}else{
func_339(6);
iLocal_265=1;
}}else{
iLocal_265=1;
}}elseif(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[6])){
if(!func_306(Local_297[1 /*14*/].f_8, joaat("script_task_synchronized_scene"))){
return 1;
}}}
return 0;
}


void func_339(int iParam0){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293[iParam0])){
return;
}
iVar1=0;
iVar2=0;
fVar3=8f;
switch (iParam0){
case 0:
iVar1=1;
iVar2=0;
break;
case 1:
iVar1=0;
iVar2=0;
fVar3=4f;
break;
case 2:
iVar1=0;
iVar2=0;
fVar3=4f;
break;
case 3:
iVar1=1;
iVar2=0;
break;
case 4:
iVar1=0;
iVar2=0;
fVar3=4f;
break;
case 5:
iVar1=0;
iVar2=0;
fVar3=4f;
break;
case 6:
iVar1=0;
iVar2=0;
fVar3=4f;
break;
default:
break;
}
iLocal_293[iParam0]=PED::CREATE_SYNCHRONIZED_SCENE(Local_486, Local_487, 2);
PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_293[iParam0], iVar1);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_293[iParam0], iVar2);
iVar0=0;
while (iVar0 <=1){
if((iParam0==0 || iParam0==5) || iParam0==6){
if(iVar0==1){
func_340(iVar0, iLocal_293[iParam0], iParam0, fVar3);
}}elseif(iParam0==1 || iParam0==4){
if(iVar0==0){
func_340(iVar0, iLocal_293[iParam0], iParam0, fVar3);
}}else{
func_340(iVar0, iLocal_293[iParam0], iParam0, fVar3);
}
iVar0++;
}}


void func_340(int iParam0, var uParam1, int iParam2, float fParam3){
struct<6> Var0;
char* sVar1;
if(func_32(Local_297[iParam0 /*14*/].f_8)){
Var0={
func_342(iParam0, iParam2) 
};
sVar1=func_341(&Var0);
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_297[iParam0 /*14*/].f_8, &cLocal_434, sVar1, 3)){
}else{
if(func_306(Local_297[iParam0 /*14*/].f_8, joaat("script_task_synchronized_scene"))){
ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_297[iParam0 /*14*/].f_8, -8f, 0);
}
TASK::TASK_SYNCHRONIZED_SCENE(Local_297[iParam0 /*14*/].f_8, uParam1, &cLocal_434, sVar1, fParam3, -8f, 17, 0, 1148846080, 0);
if(bLocal_252){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_297[iParam0 /*14*/].f_8, 0, 0);
}}}}


var func__341(var uParam0){
return uParam0;
}


struct<6> func_342(int iParam0, int iParam1){
struct<6> Var0;
char cVar1[24];
StringCopy(&Var0, "", 24);
switch (iParam1){
case 0:
StringCopy(&Var0, "BASE_", 24);
break;
case 1:
StringCopy(&Var0, "ENTER", 24);
break;
case 2:
StringCopy(&Var0, "DANCE_INTRO_", 24);
break;
case 3:
StringCopy(&Var0, "DANCE_LOOP_", 24);
break;
case 4:
case 5:
StringCopy(&Var0, "REACT_", 24);
break;
case 6:
StringCopy(&Var0, "OUTRO_", 24);
break;
default:
break;
}
StringCopy(&cVar1, "", 24);
switch (iParam0){
case 0:
StringCopy(&cVar1, "TYLER", 24);
break;
case 1:
StringCopy(&cVar1, "GIRL", 24);
break;
default:
break;
}
StringConCat(&Var0, &cVar1, 24);
if(iParam1==1){
StringCopy(&Var0, "ENTER", 24);
}
return Var0;
}

int func_343(struct<3> Param0, float fParam1){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(func_32(Local_297[iVar0 /*14*/].f_8)){
if(fParam1==-1f){
return iVar0;
}elseif(func_73(Local_297[iVar0 /*14*/].f_8, Param0, fParam1, 1)){
return iVar0;
}}
iVar0=0;
while (iVar0 <=1){
if(func_32(Local_297[iVar0 /*14*/].f_8)){
if(fParam1==-1f){
return iVar0;
}elseif(func_73(Local_297[iVar0 /*14*/].f_8, Param0, fParam1, 1)){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_344(){
if(func_32(Local_297[0 /*14*/].f_8) && func_32(Local_297[1 /*14*/].f_8)){
if(!func_322(&Local_447, 1)){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_297[0 /*14*/].f_8, 1), 3f, 1)){
if(func_303(0, 0, 1) && (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_TREACT", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_TREACT", 24);
return;
}}elseif(func_324(&uLocal_58, "NIG1BAU", "NIG1B_TSHOCK", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_TSHOCK", 24);
return;
}}elseif(MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_297[1 /*14*/].f_8, 1), 3f, 1)){
if(func_303(0, 0, 1) || (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GREACT", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_GREACT", 24);
return;
}}elseif(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSHOCK", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_GSHOCK", 24);
return;
}}elseif(PED::CAN_PED_SEE_HATED_PED(Local_297[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID())){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_TSHOCK", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_TSHOCK", 24);
return;
}}elseif(PED::CAN_PED_SEE_HATED_PED(Local_297[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID())){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GSHOCK", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_GSHOCK", 24);
return;
}}}elseif(PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_297[0 /*14*/].f_8) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_297[0 /*14*/].f_8)){
if(PED::CAN_PED_SEE_HATED_PED(Local_297[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID())){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_TTARG", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_TTARG", 24);
return;
}}}elseif(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_297[1 /*14*/].f_8) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_297[1 /*14*/].f_8)){
if(PED::CAN_PED_SEE_HATED_PED(Local_297[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID())){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GTARG", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_GTARG", 24);
return;
}}}}elseif(ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[0 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_297[0 /*14*/].f_8)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_TBUMP", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_TBUMP", 24);
return;
}}elseif(ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_297[1 /*14*/].f_8, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_297[1 /*14*/].f_8)){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GBUMP", 7, 0, 0, 0)){
StringCopy(&Local_447, "NIG1B_GBUMP", 24);
return;
}}
if(func_3() && !func_279("NULL")){
iLocal_279=MISC::GET_GAME_TIMER();
}elseif(func_296(iLocal_279, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000))){
if(iLocal_313==2){
switch (iLocal_274){
case 0:
if(func_303(0, 0, 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_348(&uLocal_58, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_1", 7, 0, 0)){
iLocal_279=MISC::GET_GAME_TIMER();
iLocal_274++;
}}else{
iLocal_274++;
}
break;
case 1:
if(func_348(&uLocal_58, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_2", 7, 0, 0)){
iLocal_279=MISC::GET_GAME_TIMER();
iLocal_274++;
}
break;
case 2:
if(func_348(&uLocal_58, "NIG1BAU", "NIG1B_SU1", "NIG1B_SU1_3", 7, 0, 0)){
iLocal_279=MISC::GET_GAME_TIMER();
iLocal_274++;
}
break;
default:
if(func_345()){
iLocal_279=MISC::GET_GAME_TIMER();
}
break;
}}}}}}

int func_345(){
int iVar0;
if(!func_3() && !func_279("NULL")){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(iVar0==0){
if(iLocal_245){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_TAMB", 7, 0, 0, 0)){
return 1;
}}elseif(func_324(&uLocal_58, "NIG1BAU", "NIG1B_TAMB2", 7, 0, 0, 0)){
return 1;
}}elseif(iLocal_245){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GAMB", 7, 0, 0, 0)){
return 1;
}}elseif(func_324(&uLocal_58, "NIG1BAU", "NIG1B_GAMB2", 7, 0, 0, 0)){
return 1;
}}
return 0;
}


void func_346(){
STREAMING::REQUEST_MODEL(iLocal_308);
STREAMING::REQUEST_MODEL(iLocal_309);
}

int func_347(){
STREAMING::REQUEST_MODEL(iLocal_308);
STREAMING::REQUEST_MODEL(iLocal_309);
if(STREAMING::HAS_MODEL_LOADED(iLocal_308) && STREAMING::HAS_MODEL_LOADED(iLocal_309)){
return 1;
}
return 0;
}

int func_348(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
bool bVar0;
bVar0=false;
if(iParam5==0){
if(MISC::GET_PROFILE_SETTING(203) !=0){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
bVar0=true;
iParam5=1;
}}}
if(func_349(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6)){
if(bVar0){
iLocal_316=3;
}else{
func_25(&sLocal_451, &cLocal_457);
}
return 1;
}
return 0;
}


bool func_349(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_295(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21732=0;
Global_21739=0;
Global_21734=0;
Global_22716=1;
Global_22718=0;
Global_22722=0;
StringCopy(&Global_22729, sParam3, 24);
Global_2883585=0;
return func_282(sParam2, iParam4, 0);
}

int func_350(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 2){
if(func_319(Local_297[iVar0 /*14*/].f_8, 1082130432)){
return 1;
}
iVar0++;
}
return 0;
}

int func_351(){
int iVar0;
iVar0=0;
while (iVar0 <=1){
if(func_332(Local_297[iVar0 /*14*/].f_8, 1101004800, 1084227584, 1097859072)){
return 1;
}
iVar0++;
}
return 0;
}

int func_352(){
int iVar0;
var uVar1;
if(func_330(2)){
return 0;
}
if(iLocal_313==2){
iVar0=0;
while (iVar0 <=1){
if(iVar0==1){
if(func_353(Local_297[1 /*14*/].f_8, 1, 1, 1, 1, 1)){
iLocal_277=1;
return 0;
}}elseif(func_353(Local_297[iVar0 /*14*/].f_8, 0, 1, 1, 1, 1)){
if((Local_297[iVar0 /*14*/].f_9==2 || Local_297[iVar0 /*14*/].f_9==6) || Local_297[iVar0 /*14*/].f_9==7){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_473, Local_474, fLocal_273, 0, 1, 0)){
iLocal_277=0;
return 0;
}
uVar1=TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Local_297[iVar0 /*14*/].f_8);
if(TASK::IS_MOVE_BLEND_RATIO_SPRINTING(uVar1) || ((TASK::IS_MOVE_BLEND_RATIO_RUNNING(uVar1) && PED::IS_PED_SWIMMING(Local_297[iVar0 /*14*/].f_8)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_297[iVar0 /*14*/].f_8, Local_473, Local_474, fLocal_273, 0, 1, 0))){
}else{
iLocal_277=0;
return 0;
}}else{
iLocal_277=0;
return 0;
}}
iVar0++;
}}
return 1;
}

int func_353(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(bParam1){
if(!func_482(iParam0)){
return 0;
}}
if(bParam5){
if(PED::IS_PED_BEING_STEALTH_KILLED(iParam0)){
if(PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())){
return 0;
}}}
if(bParam2){
if(func_329(iParam0, 0)){
if(PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID())){
return 1;
}}}
if(bParam4){
if(iLocal_312==2 || iLocal_312==3){
if(func_73(iParam0, Local_468, 7f, 1)){
return 1;
}}}
if(bParam3){
if(iLocal_312==4){
if(func_73(iParam0, Local_468, 3.5f, 1)){
return 1;
}}}
if(PED::IS_PED_BEING_STUNNED(iParam0, 0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
if(iVar0==joaat("weapon_stungun")){
return 1;
}}
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID())){
return 1;
}
return 0;
}


struct<6> func_354(){
struct<6> Var0;
int iVar1;
int iVar2;
int iVar3;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
iVar1=AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
iVar1=(iVar1 + Global_22735);
iVar2=iVar1 + 1;
if(iVar2 > -1 && iVar1 > -1){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_20593[iVar2 /*6*/]))){
return Global_20593[iVar2 /*6*/];
}else{
iVar3=iVar2;
while (iVar3 < 70){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_20593[iVar3 /*6*/]))){
return Global_20593[iVar3 /*6*/];
iVar3=70;
}
iVar3++;
}
return Var0;
}
return Global_20593[iVar1 /*6*/];
}else{
return Var0;
}}
return Var0;
}

int func_355(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
bool bVar0;
bVar0=false;
if(iParam5==0){
if(MISC::GET_PROFILE_SETTING(203) !=0){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
bVar0=true;
iParam5=1;
}}}
if(func_356(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6)){
if(bVar0){
iLocal_316=3;
}else{
func_25(&sLocal_451, &cLocal_457);
}
return 1;
}
return 0;
}


bool func_356(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_295(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21732=0;
Global_21739=0;
Global_21734=0;
Global_22716=0;
Global_22718=0;
Global_22722=1;
StringCopy(&Global_22729, sParam3, 24);
Global_2883585=0;
return func_282(sParam2, iParam4, 0);
}


void func_357(){
struct<3> Var0;
float fVar1;
if(Local_297[0 /*14*/].f_9==0){
if(func_32(Local_297[0 /*14*/].f_8)){
if(func_359(Local_297[0 /*14*/].f_8, 0) && iLocal_313==2){
Local_297[0 /*14*/].f_9=1;
}elseif(iLocal_275==1){
Var0={
-1056.294f, 383.0128f, 68.68782f 
};
fVar1=3f;
if(func_358(Local_468, Var0, fVar1)){
iLocal_275=0;
RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_297[0 /*14*/].f_8, Local_464[iLocal_275 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(Local_297[0 /*14*/].f_8, fLocal_269[iLocal_275]);
}}elseif(iLocal_275==0){
Var0={
-1035.078f, 347.5178f, 70.36205f 
};
fVar1=4f;
if(func_358(Local_468, Var0, fVar1)){
iLocal_275=1;
RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_297[0 /*14*/].f_8, Local_464[iLocal_275 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(Local_297[0 /*14*/].f_8, fLocal_269[iLocal_275]);
}}}}}


bool func_358(struct<3> Param0, struct<3> Param1, float fParam2){
struct<3> Var0;
Var0={
Param1 - Param0 
};
return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <=(fParam2 * fParam2);
}

int func_359(int iParam0, bool bParam1){
if(bParam1){
if(!func_482(iParam0)){
return 0;
}}
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
if(!ENTITY::IS_ENTITY_OCCLUDED(iParam0)){
return 1;
}}
return 0;
}

int func_360(){
int iVar0;
iVar0=0;
while (iVar0 <=1){
if(ENTITY::DOES_ENTITY_EXIST(Local_297[iVar0 /*14*/].f_8)){
if(ENTITY::IS_ENTITY_DEAD(Local_297[iVar0 /*14*/].f_8, 0) || PED::IS_PED_INJURED(Local_297[iVar0 /*14*/].f_8)){
return 1;
}}
iVar0++;
}
return 0;
}


void func_361(){
if(iLocal_54 >=1){
if(iLocal_284 > 0 && iLocal_284 < 4){
if(iLocal_284 !=3){
if(iLocal_284==1){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
func_64(1);
}}
if(iLocal_54==1){
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(bLocal_259){
iLocal_284=2;
func_64(2);
}}}elseif(iLocal_54==3){
iLocal_284=2;
func_64(2);
}}elseif(func_296(iLocal_286, 5000)){
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
iLocal_284=4;
}}}}


void func_362(){
struct<3> Var0;
struct<3> Var1;
Local_468={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
func_65();
func_63();
func_361();
func_372(0);
func_335();
func_298();
func_370();
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX")){
if(iLocal_313 !=2 && iLocal_313 !=3){
AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
}}
switch (iLocal_56){
case 0:
iLocal_56=1;
iLocal_226=0;
iLocal_281=MISC::GET_GAME_TIMER();
break;
case 1:
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
iLocal_244=1;
iLocal_56=2;
}elseif(bLocal_223){
if(!iLocal_244){
if(func_296(iLocal_281, 1000)){
Var0={
Local_468 + Vector(-60f, -60f, -60f) 
};
Var1={
Local_468 + Vector(60f, 60f, 60f) 
};
if(VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var0, Var1)){
if(func_369()){
iLocal_244=1;
}elseif(func_324(&uLocal_58, "NIG1BAU", "NIG1B_DC", 7, 0, 0, 0)){
iLocal_244=1;
}
}
elseif(!bLocal_256){
if(func_347()){
bLocal_256=func_368(Local_468, -1038090240, 1109393408);
}
}}}elseif(!iLocal_226){
if(!func_3() && !func_279("NULL")){
if(!func_367("NIG1B_OBJ_04", 0, 0)){
func_366("NIG1B_OBJ_04", 7500, 0);
func_365();
iLocal_226=1;
}}}}elseif(!iLocal_226){
if(!func_367("NIG1B_OBJ_04", 0, 0)){
func_366("NIG1B_OBJ_04", 7500, 0);
func_365();
iLocal_226=1;
}}
break;
case 2:
if(func_367("NIG1B_OBJ_04", 0, 0)){
HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_04");
}
func_364(&uLocal_58, 4);
func_280(3);
break;
}
func_363(&uLocal_58, "NIG1BAU", &sLocal_451, &cLocal_457);
}


void func_363(var uParam0, char* sParam1, char* sParam2, char* sParam3){
switch (iLocal_316){
case 0:
break;
case 1:
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
*sParam2={
func_323() 
};
*sParam3={
func_354() 
};
if(MISC::ARE_STRINGS_EQUAL(sParam3, "") || MISC::ARE_STRINGS_EQUAL(sParam3, "NULL")){
}else{
func_30();
iLocal_316=2;
}}
break;
case 2:
if(!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
if(func_355(uParam0, sParam1, sParam2, sParam3, 8, 1, 0)){
iLocal_316=3;
}}else{
iLocal_316=4;
}}
break;
case 3:
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
*sParam2={
func_323() 
};
*sParam3={
func_354() 
};
if(MISC::ARE_STRINGS_EQUAL(sParam3, "") || MISC::ARE_STRINGS_EQUAL(sParam3, "NULL")){
}else{
func_30();
iLocal_316=4;
}}
break;
case 4:
if(!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && func_355(uParam0, sParam1, sParam2, sParam3, 8, 0, 0)){
iLocal_316=0;
}
break;
}}


void func_364(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}


void func_365(){
if((MISC::GET_PROFILE_SETTING(203) !=0 && iLocal_316 !=1) && func_3()){
iLocal_316=1;
}}


void func_366(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}


bool func_367(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
if(iParam1==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
}
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_368(struct<3> Param0, int iParam1, int iParam2){
bool bVar0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
int iVar4;
int iVar5;
float fVar6;
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, iParam1, 0f) 
};
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(Var1, Param0, 0, &Var2, &fVar3, 1, 1077936128, 0)){
if(!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var2, 7f, 7f, 7f, 0)){
if(ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_308, Var2, 1)){
bVar0=true;
}else{
bVar0=false;
}}else{
bVar0=false;
}}else{
bVar0=false;
}
if(!bVar0){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, iParam2, 0f) 
};
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(Var1, Param0, 0, &Var2, &fVar3, 1, 1077936128, 0)){
if(!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var2, 7f, 7f, 7f, 0)){
if(ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_308, Var2, 1)){
bVar0=true;
}else{
bVar0=false;
}}else{
bVar0=false;
}}else{
bVar0=false;
}}
if(bVar0){
if(!ENTITY::DOES_ENTITY_EXIST(iVar4)){
iVar4=VEHICLE::CREATE_VEHICLE(iLocal_308, Var2, fVar3, 1, 1, 0);
}
if(func_482(iVar4)){
if(!ENTITY::DOES_ENTITY_EXIST(iVar5)){
iVar5=PED::CREATE_PED_INSIDE_VEHICLE(iVar4, 6, iLocal_309, -1, 1, 1);
}
AUDIO::SET_SIREN_WITH_NO_DRIVER(iVar4, 1);
VEHICLE::SET_VEHICLE_SIREN(iVar4, 1);
fVar6=ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
if(fVar6 > 40f){
fVar6=40f;
}
VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar4, fVar6);
if(func_482(iVar5)){
PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar5, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, 0);
WEAPON::GIVE_WEAPON_TO_PED(iVar5, joaat("weapon_pistol"), -1, 1, 1);
WEAPON::SET_CURRENT_PED_WEAPON(iVar5, joaat("weapon_pistol"), 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar5);
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
return 1;
}}
return 0;
}

int func_369(){
int iVar0;
iVar0=0;
while (iVar0 <=1){
if(func_32(Local_297[iVar0 /*14*/].f_8)){
return 0;
}
iVar0++;
}
if(func_32(Local_296.f_8)){
return 0;
}
return 1;
}


void func_370(){
if(!bLocal_225){
if(func_482(Local_305[0 /*9*/])){
if(ENTITY::IS_ENTITY_ATTACHED(Local_305[0 /*9*/])){
if(!func_482(iLocal_490)){
ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], 1, 1);
ENTITY::SET_ENTITY_DYNAMIC(Local_305[0 /*9*/], 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_305[0 /*9*/], 1);
}elseif(!func_371(ENTITY::GET_ENTITY_VELOCITY(iLocal_490), 0f, 0f, 0f, 5f, 0)){
ENTITY::DETACH_ENTITY(Local_305[0 /*9*/], 1, 1);
ENTITY::SET_ENTITY_DYNAMIC(Local_305[0 /*9*/], 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_305[0 /*9*/], 1);
ENTITY::APPLY_FORCE_TO_ENTITY(Local_305[0 /*9*/], 3, 0f, 1.5f, 0.2f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
}}}}}

int func_371(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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


void func_372(bool bParam0){
iLocal_312=func_373(PLAYER::PLAYER_PED_ID(), bParam0);
}

int func_373(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(!func_482(iParam0)){
iVar0=6;
return iVar0;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=5;
}elseif(PED::GET_PED_STEALTH_MOVEMENT(iParam0)){
iVar0=1;
}elseif(PED::IS_PED_IN_COVER(iParam0, 0)){
iVar0=0;
}elseif(TASK::IS_PED_WALKING(iParam0)){
iVar0=4;
}elseif(TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())){
iVar0=2;
}elseif(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
iVar0=3;
}else{
iVar0=6;
}
return iVar0;
}


void func_374(){
Local_468={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
func_65();
func_63();
func_361();
func_372(0);
func_335();
func_298();
func_370();
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX")){
if(iLocal_313 !=2 && iLocal_313 !=3){
AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
}}
switch (iLocal_56){
case 0:
if(iLocal_314 !=0 && iLocal_314 !=1){
sLocal_319="NIG1B_DD";
}elseif(bLocal_263){
sLocal_319="NIG1B_DDG";
}else{
sLocal_319="NIG1B_DS";
func_299(788);
}
iLocal_56=1;
break;
case 1:
if(!MISC::ARE_STRINGS_EQUAL(sLocal_319, "NIG1B_DS")){
if(!(MISC::ARE_STRINGS_EQUAL(sLocal_319, "NIG1B_DDG") && !func_32(Local_296.f_8))){
if(!func_347()){
func_346();
}}}
if(iLocal_243){
if(!func_322(sLocal_319, 1)){
iLocal_56=2;
}}else{
func_24(0, 0);
if(func_324(&uLocal_58, "NIG1BAU", sLocal_319, 7, 0, 0, 0)){
iLocal_243=1;
}}
break;
case 2:
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
iLocal_244=1;
func_280(5);
}elseif(bLocal_259){
func_364(&uLocal_58, 4);
func_280(3);
}elseif(MISC::ARE_STRINGS_EQUAL(sLocal_319, "NIG1B_DS") || (MISC::ARE_STRINGS_EQUAL(sLocal_319, "NIG1B_DDG") && !func_32(Local_296.f_8))){
func_364(&uLocal_58, 4);
func_280(3);
}else{
if(!func_347()){
func_346();
}
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
bLocal_223=true;
func_280(5);
}
break;
}
func_363(&uLocal_58, "NIG1BAU", &sLocal_451, &cLocal_457);
}


void func_375(){
Local_468={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
func_65();
func_63();
func_361();
func_372(0);
func_335();
func_298();
func_370();
switch (iLocal_56){
case 0:
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
iLocal_56=2;
}else{
func_366("NIG1B_OBJ_03", 10000, 0);
func_365();
iLocal_56=1;
}
break;
case 1:
if(!func_304(Local_468, Local_465, 70f) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
iLocal_56=2;
}
break;
case 2:
if(func_367("NIG1B_OBJ_03", 0, 0)){
HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_03");
}
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
func_280(5);
}else{
func_280(2);
}
break;
}
func_363(&uLocal_58, "NIG1BAU", &sLocal_451, &cLocal_457);
}


void func_376(){
Local_468={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
func_65();
func_63();
func_372(0);
func_335();
func_298();
func_370();
func_459();
switch (iLocal_56){
case 0:
func_456();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_297(&uLocal_58, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
}
if(func_482(Local_296.f_8)){
func_297(&uLocal_58, 4, Local_296.f_8, "Nigel1BGardener01", 0, 1);
}
if(func_482(Local_297[0 /*14*/].f_8)){
func_297(&uLocal_58, 5, Local_297[0 /*14*/].f_8, "Nigel1BCelebMale01", 0, 1);
}
if(func_482(Local_297[1 /*14*/].f_8)){
func_297(&uLocal_58, 6, Local_297[1 /*14*/].f_8, "Nigel1BCelebFemale01", 0, 1);
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 1);
func_366("NIG1B_OBJ_01", 7500, 0);
func_365();
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_CLOTHES", 0, -1);
if(bLocal_252){
func_33(800, 0);
}
iLocal_56=1;
break;
case 1:
if(!iLocal_266){
if(func_482(iLocal_490)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo", 3)){
ENTITY::STOP_ENTITY_ANIM(iLocal_490, "idle_speedo", "rcmnigel1b", -2f);
iLocal_266=1;
}}}
if(OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_298.f_0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 1);
if(iLocal_314 !=0 && iLocal_314 !=1){
iLocal_291=MISC::GET_GAME_TIMER();
}
if(iLocal_314==0){
iLocal_251=1;
iLocal_283=MISC::GET_GAME_TIMER();
}
func_23(&(Local_298.f_2));
func_22(&Local_298);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 0);
iLocal_56=2;
}
break;
case 2:
func_23(&(Local_298.f_2));
func_22(&Local_298);
if(func_367("NIG1B_OBJ_01", 0, 0)){
HUD::CLEAR_THIS_PRINT("NIG1B_OBJ_01");
}
if(!iLocal_266){
if(func_482(iLocal_490)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo", 3)){
ENTITY::STOP_ENTITY_ANIM(iLocal_490, "idle_speedo", "rcmnigel1b", -2f);
iLocal_266=1;
}}}
func_377(1, "Leave the area", 1, 0, 0, 1);
Global_100681.f_12[1]=iLocal_311;
Global_100681.f_12[0]=iLocal_314;
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
iLocal_244=1;
func_280(5);
}else{
func_280(1);
}
break;
}
func_363(&uLocal_58, "NIG1BAU", &sLocal_451, &cLocal_457);
}


void func_377(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
int iVar2;
char[] cVar3[8];
int iVar4;
var uVar5;
int iVar6;
if(iParam3==1){
if(!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME())){
}}
iVar0=0;
if(iParam3==1){
if(iParam0 !=Global_100718){
iVar0=1;
}}elseif(iParam0 > Global_100718){
iVar0=1;
}
if(iVar0==1){
func_455(1);
if(iParam0 <=Global_100718){
}
iVar1=func_453(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
if(iVar1 !=-1 && iVar1 !=94){
Global_113648.f_9087.f_330[iVar1 /*6*/].f_1=0;
iVar2=func_451(iVar1);
cVar3={
Global_91469[iVar1 /*34*/].f_8 
};
if(iVar1==90){
switch (Global_113648.f_9087.f_99.f_205[7]){
case 1:
StringConCat(&cVar3, "A", 8);
break;
case 2:
StringConCat(&cVar3, "B", 8);
break;
}}
STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100718, iParam0);
}else{
iVar4=func_275(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
if(iVar4 !=-1){
Global_113648.f_18576[iVar4 /*6*/].f_4=0;
MemCopy(&uVar5,{
func_228(iVar4)
}
, 4);
STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100718, iParam0);
}else{
iVar6=func_450(&(Global_100681.f_3));
if(iVar6 > -1){
Global_113648.f_24988.f_4[iVar6]=0;
}}}
Global_94859=iParam2;
Global_100718=iParam0;
func_378(iParam0, sParam1, iParam4, iParam5);
if(MISC::ARE_STRINGS_EQUAL(sParam1, "")){
}}elseif(iParam0 < Global_100718){}}


void func_378(int iParam0, var uParam1, int iParam2, int iParam3){
func_379(&Global_107196, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}


void func_379(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
*uParam0=func_292();
uParam0->f_1=func_439();
MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_410(&(uParam0->f_2884), 0);
func_409(PLAYER::PLAYER_PED_ID());
func_402(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
if(uParam0->f_2==0 || uParam0->f_2==joaat("object")){
uParam0->f_2=joaat("weapon_unarmed");
}}
iVar1=0;
while (iVar1 < 3){
uParam0->f_17[iVar1]=Global_113648.f_2365.f_539.f_294[iVar1];
if(iVar1==func_401()){
func_397(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
}else{
iVar0=0;
while (iVar0 < 12){
uParam0->f_616[iVar1 /*65*/][iVar0]=Global_100406[iVar1 /*65*/][iVar0];
uParam0->f_616[iVar1 /*65*/].f_13[iVar0]=Global_100406[iVar1 /*65*/].f_13[iVar0];
iVar0++;
}
uParam0->f_616[iVar1 /*65*/].f_59=Global_100406[iVar1 /*65*/].f_59;
uParam0->f_616[iVar1 /*65*/].f_60=Global_100406[iVar1 /*65*/].f_60;
uParam0->f_616[iVar1 /*65*/].f_61=Global_100406[iVar1 /*65*/].f_61;
uParam0->f_616[iVar1 /*65*/].f_62=Global_100406[iVar1 /*65*/].f_62;
uParam0->f_616[iVar1 /*65*/].f_63=Global_100406[iVar1 /*65*/].f_63;
uParam0->f_616[iVar1 /*65*/].f_64=Global_100406[iVar1 /*65*/].f_64;
iVar0=0;
while (iVar0 < 9){
uParam0->f_616[iVar1 /*65*/].f_39[iVar0]=Global_100406[iVar1 /*65*/].f_39[iVar0];
uParam0->f_616[iVar1 /*65*/].f_49[iVar0]=Global_100406[iVar1 /*65*/].f_49[iVar0];
iVar0++;
}}
iVar0=0;
while (iVar0 < 44){
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/]={
Global_113648.f_2365.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]={
Global_113648.f_2365.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] 
};
iVar0++;
}
switch (iVar1){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
}
uParam0->f_9[iVar1]=Global_113648.f_20566.f_233[iVar1 /*69*/].f_1;
uParam0->f_13[iVar1]=Global_60536[iVar1];
uParam0->f_25[0 /*295*/][iVar1 /*98*/]={
Global_113648.f_2365.f_539.f_2407[0 /*295*/][iVar1 /*98*/] 
};
uParam0->f_25[1 /*295*/][iVar1 /*98*/]={
Global_113648.f_2365.f_539.f_2407[1 /*295*/][iVar1 /*98*/] 
};
iVar0=0;
while (iVar0 <=3){
uParam0->f_2838[iVar1 /*15*/][iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/][iVar0];
uParam0->f_2838[iVar1 /*15*/].f_5[iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/].f_5[iVar0];
uParam0->f_2838[iVar1 /*15*/].f_10[iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/].f_10[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
uParam0->f_2345[iVar1 /*164*/][iVar0]=Global_113648.f_2365[iVar1 /*164*/][iVar0];
uParam0->f_2345[iVar1 /*164*/].f_4[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_4[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_8[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_8[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_12[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_12[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_16[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_16[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_20[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_20[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_24[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_24[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_28[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_28[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_32[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_32[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_36[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_36[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_40[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_40[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_44[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_44[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_48[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_48[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_52[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_52[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_56[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_56[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_60[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_60[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_64[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_64[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_68[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_68[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_72[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_72[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_76[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_76[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_80[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_80[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_84[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_84[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_88[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_88[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_92[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_92[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_96[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_96[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_100[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_100[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_104[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_104[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_108[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_108[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_112[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_112[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_116[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_116[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_120[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_120[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_124[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_124[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_128[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_128[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_132[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_132[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_136[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_136[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_140[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_140[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_144[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_144[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_148[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_148[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_152[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_152[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_156[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_156[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_160[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_160[iVar0];
iVar0++;
}
iVar1++;
}
STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
uParam0->f_5=145;
if(iParam4==1){
func_381(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
}
func_380(&(uParam0->f_2980));
uParam3=uParam3;
uParam2=uParam2;
}

int func_380(var uParam0){
*uParam0=Global_96530;
uParam0->f_1=Global_96531;
uParam0->f_2=0;
uParam0->f_3=0;
return 1;
}


void func_381(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(iParam2==0){
iParam2=PLAYER::PLAYER_PED_ID();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam2)){
uParam1->f_5=func_220(iParam2);
}
if(func_394(iParam2, &iVar0, iParam3, iParam5)){
func_382(uParam0, uParam1, iVar0, iParam4);
}elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
func_382(uParam0, uParam1, iVar0, iParam4);
}}}}

int func_382(var uParam0, var uParam1, int iParam2, int iParam3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0)){
func_384(uParam0, iParam2, iParam3);
uParam1->f_4=iParam2;
if(func_383(iParam2)){
uParam1->f_3=1;
}else{
uParam1->f_3=0;
}
return 1;
}
return 0;
}

int func_383(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=6){
if(Global_100681.f_22[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_384(var uParam0, int iParam1, int iParam2){
func_390(iParam1, &(uParam0->f_12));
uParam0->f_7=func_387(iParam1, 145, 0);
uParam0->f_11=func_386(iParam1);
if(!uParam0->f_7){
if(!uParam0->f_10){
uParam0->f_10=func_385(iParam1);
}}
if(iParam2==1){
*uParam0={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
uParam0->f_6=ENTITY::GET_ENTITY_HEADING(iParam1);
uParam0->f_3={
ENTITY::GET_ENTITY_VELOCITY(iParam1) 
};
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0)){
*uParam0={
-1160.095f, -1515.407f, 3.1496f 
};
uParam0->f_6=305.6424f;
}
if(Global_78253==iParam1){
uParam0->f_9=1;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_8=1;
}else{
uParam0->f_8=0;
}}

int func_385(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0])){
if(iParam0==Global_77348.f_484[iVar0]){
return 1;
}}
iVar0++;
}
return 0;
}

int func_386(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
if(Global_98012[iVar0]==iParam0){
return Global_98022[iVar0];
}}
iVar0++;
}
return 145;
}

int func_387(int iParam0, int iParam1, int iParam2){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
if(Global_98012[iVar0]==iParam0){
if(iParam1==145 || iParam1==Global_98022[iVar0]){
if(iParam2==0 || ENTITY::GET_ENTITY_MODEL(iParam0)==func_388(iParam1, iParam2)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_388(int iParam0, int iParam1){
struct<82> Var0;
if(func_223(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_389(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_389(int iParam0, var uParam1, int iParam2){
int iVar0;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (iParam0){
case 0:
iVar0=joaat("tailgater");
if(Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131]){
iVar0=joaat("premier");
}
switch (iVar0){
case joaat("tailgater"):
*uParam1=iVar0;
uParam1->f_2=3f;
uParam1->f_4=0;
uParam1->f_9=1;
uParam1->f_11[0]=1;
StringCopy(&(uParam1->f_27), "5MDS003", 16);
break;
case joaat("premier"):
*uParam1=iVar0;
uParam1->f_2=14.9f;
uParam1->f_5=43;
uParam1->f_6=43;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_9=0;
StringCopy(&(uParam1->f_27), "880HS955", 16);
break;
}
break;
case 2:
iVar0=joaat("bodhi2");
switch (iVar0){
case joaat("bodhi2"):
*uParam1=iVar0;
uParam1->f_2=14f;
uParam1->f_5=32;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "BETTY 32", 16);
if(Global_113648.f_9087.f_99.f_58[119]){
uParam1->f_11[1]=1;
}
break;
}
break;
case 1:
if(iParam2==1){
iVar0=joaat("buffalo2");
}elseif(iParam2==2){
iVar0=joaat("bagger");
}elseif(Global_113648.f_9087.f_99.f_58[118]){
iVar0=joaat("bagger");
}else{
iVar0=joaat("buffalo2");
}
switch (iVar0){
case joaat("bagger"):
*uParam1=iVar0;
uParam1->f_2=6f;
uParam1->f_5=53;
uParam1->f_6=0;
uParam1->f_7=59;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "FC88", 16);
break;
case joaat("buffalo2"):
*uParam1=iVar0;
uParam1->f_2=0f;
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_10=1;
StringCopy(&(uParam1->f_27), "FC1988", 16);
uParam1->f_11[0]=1;
uParam1->f_11[1]=1;
uParam1->f_11[2]=1;
uParam1->f_11[3]=1;
uParam1->f_11[4]=1;
uParam1->f_11[5]=1;
uParam1->f_11[6]=1;
uParam1->f_11[7]=1;
uParam1->f_11[8]=1;
break;
}
break;
default:
break;
}}


void func_390(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_95(uParam1);
uParam1->f_66=ENTITY::GET_ENTITY_MODEL(iParam0);
StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
*uParam1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
uParam1->f_65=VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
uParam1->f_67=VEHICLE::GET_VEHICLE_LIVERY(iParam0);
uParam1->f_69=VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
uParam1->f_70=VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2)){
MISC::SET_BIT(&(uParam1->f_77), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3)){
MISC::SET_BIT(&(uParam1->f_77), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1)){
MISC::SET_BIT(&(uParam1->f_77), 31);
}
if(uParam1->f_65==-1 && !func_393(uParam1->f_66)){
uParam1->f_65=0;
}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
uParam1->f_68=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)){
if(VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0)){
switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0)){
case 3:
case 0:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::SET_BIT(&(uParam1->f_77), 22);
break;
case 4:
case 1:
MISC::CLEAR_BIT(&(uParam1->f_77), 23);
MISC::CLEAR_BIT(&(uParam1->f_77), 22);
break;
case 5:
MISC::SET_BIT(&(uParam1->f_77), 23);
break;
}}else{
MISC::SET_BIT(&(uParam1->f_77), 23);
}}
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 9);
}
if(VEHICLE::IS_VEHICLE_STOLEN(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 10);
}
if(VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 13);
VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
}
if(VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0)){
MISC::SET_BIT(&(uParam1->f_77), 12);
}
func_392(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_391(iVar0 + 1));
}
iVar0++;
}
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0)){
MISC::SET_BIT(&(uParam1->f_77), 11);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 11);
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave")){
MISC::SET_BIT(&(uParam1->f_77), 27);
}else{
MISC::CLEAR_BIT(&(uParam1->f_77), 27);
}}}

int func_391(int iParam0){
switch (iParam0){
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 2;
break;
case 4:
return 3;
break;
case 5:
return 4;
break;
case 6:
return 5;
break;
case 7:
return 6;
break;
case 8:
return 7;
break;
case 9:
return 8;
break;
case 10:
return 24;
break;
case 11:
return 25;
break;
case 12:
return 26;
break;
}
return 0;
}

int func_392(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
(*uParam1)[iVar0]=0;
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
(*uParam1)[iVar0]=1;
}}elseif(iVar1==22){
if(VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1)){
switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0)){
case 255:
(*uParam1)[iVar0]=1;
break;
case 0:
(*uParam1)[iVar0]=2;
break;
case 1:
(*uParam1)[iVar0]=3;
break;
case 2:
(*uParam1)[iVar0]=4;
break;
case 3:
(*uParam1)[iVar0]=5;
break;
case 4:
(*uParam1)[iVar0]=6;
break;
case 5:
(*uParam1)[iVar0]=7;
break;
case 6:
(*uParam1)[iVar0]=8;
break;
case 7:
(*uParam1)[iVar0]=9;
break;
case 8:
(*uParam1)[iVar0]=10;
break;
case 9:
(*uParam1)[iVar0]=11;
break;
case 10:
(*uParam1)[iVar0]=12;
break;
case 11:
(*uParam1)[iVar0]=13;
break;
case 12:
(*uParam1)[iVar0]=14;
break;
case 13:
(*uParam1)[iVar0]=15;
break;
}}else{
(*uParam1)[iVar0]=0;
}}else{
(*uParam1)[iVar0]=VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
if(iVar0==23){
(*uParam2)[0]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}elseif(iVar0==24){
(*uParam2)[1]=VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
}}
iVar0++;
}
return 1;
}

int func_393(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}

int func_394(int iParam0, var uParam1, int iParam2, int iParam3){
char* sVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
*uParam1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
}else{
*uParam1=PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0)){
if(iParam2==0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f){
if(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi"))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) !=iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) !=0){
return 0;
}
}
if(func_395(*uParam1, func_292(), 1)){
sVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere")){
return 0;
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1)){
return 0;
}
}
if(iParam3==1){
if(DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave")){
if(DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave")){
return 0;
}}
}
elseif(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp"))){
return 0;
}
return 1;
}}}}}
return 0;
}

int func_395(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_396(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113648.f_7231[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_396(int iParam0, int iParam1, char* sParam2, var uParam3){
StringCopy(sParam2, "", 32);
switch (iParam0){
case 0:
if(iParam1==0){
StringCopy(sParam2, "Michael - Beverly Hills", 32);
*uParam3=0;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=1;
return 1;
}
break;
case 1:
if(iParam1==0){
StringCopy(sParam2, "Franklin - Aunt", 32);
*uParam3=5;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Franklin - Hills", 32);
*uParam3=6;
return 1;
}
break;
case 2:
if(iParam1==0){
StringCopy(sParam2, "Trevor - Countryside", 32);
*uParam3=2;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - City", 32);
*uParam3=3;
return 1;
}elseif(iParam1==2){
StringCopy(sParam2, "Trevor - Stripclub", 32);
*uParam3=4;
return 1;
}
break;
}
return 0;
}


void func_397(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=func_220(iParam0);
iVar1=0;
while (iVar1 < 12){
func_400(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
iVar1++;
}
iVar1=0;
while (iVar1 < 9){
func_399(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
iVar1++;
}
if(func_223(iVar0)){
uParam1->f_59=Global_113648.f_2365.f_539[iVar0 /*65*/].f_59;
uParam1->f_60=Global_113648.f_2365.f_539[iVar0 /*65*/].f_60;
uParam1->f_61=Global_113648.f_2365.f_539[iVar0 /*65*/].f_61;
uParam1->f_62=Global_113648.f_2365.f_539[iVar0 /*65*/].f_62;
uParam1->f_63=Global_113648.f_2365.f_539[iVar0 /*65*/].f_63;
uParam1->f_64=Global_113648.f_2365.f_539[iVar0 /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_398(161, iParam3)){
uParam1->f_59=func_141(2053, iParam3, 0);
}else{
uParam1->f_59=func_141(753, iParam3, 0);
}
uParam1->f_60=func_141(754, iParam3, 0);
uParam1->f_61=func_141(755, iParam3, 0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
if(func_398(161, iParam3)){
uParam1->f_59=func_141(2053, iParam3, 0);
}else{
uParam1->f_59=func_141(753, iParam3, 0);
}}}}

int func_398(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_140(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_399(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
iVar0=func_220(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
*uParam3=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
}else{
iVar0=iParam5;
}
if(iParam4==0){
return;
}
if(iParam1==0){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
if(iParam0 !=0){
if(PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) !=-1){
*uParam2=PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
*uParam3=PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
}}}}
switch (iVar0){
case 0:
if(iParam1==0){
if(*uParam2==7){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==28){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=14 && *uParam2 <=20){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}elseif(iParam1==1){
if(*uParam2==1){
if(iParam4 & 2 !=0 || iParam4 & 64 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 1:
if(iParam1==0){
if(*uParam2==2){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==4){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 16 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==6){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==17){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==20){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2 >=8 && *uParam2 <=14){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
case 2:
if(iParam1==0){
if(*uParam2==9){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==11){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==12){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==21){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==23){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif(*uParam2==27){
if((iParam4 & 1 !=0 || iParam4 & 2 !=0) || iParam4 & 8 !=0){
*uParam2=-1;
*uParam3=-1;
}}elseif((*uParam2 >=14 && *uParam2 <=20) || *uParam2==2){
if(iParam4 & 2 !=0 || iParam4 & 4 !=0){
*uParam2=-1;
*uParam3=-1;
}}}
break;
}}


void func_400(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
iVar0=func_220(iParam0);
if(iParam0 !=0){
*uParam2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
*uParam3=PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
*uParam4=PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
}else{
iVar0=iParam6;
}
if(iParam5==0){
return;
}
switch (iVar0){
case 0:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==15){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==3 || *uParam2==22){
*uParam2=0;
*uParam3=0;
}}}elseif(iParam1==9){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==8){
*uParam2=0;
*uParam3=0;
}}}
break;
case 1:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==1 || *uParam2==10){
*uParam2=14;
*uParam3=0;
}}
if(iParam5 & 2 !=0 || iParam5 & 64 !=0){
if(*uParam2==19){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
if(*uParam2==5){
*uParam2=0;
*uParam3=0;
}}}
break;
case 2:
if(iParam1==8){
if((iParam5 & 1 !=0 || iParam5 & 2 !=0) || iParam5 & 32 !=0){
if(*uParam2==3){
*uParam2=14;
*uParam3=0;
}}}elseif(iParam1==9){
if(*uParam2 >=5 && *uParam2 <=7){
if(iParam5 & 2 !=0 || iParam5 & 4 !=0){
*uParam2=0;
*uParam3=0;
}}}
break;
}}

int func_401(){
func_226();
return Global_113648.f_2365.f_539.f_4321;
}


void func_402(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=func_220(iParam0);
if(func_223(iVar0) && !PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
func_403(iParam0, &(Global_113648.f_2365.f_539.f_298[iVar0 /*477*/]));
iVar2=0;
while (iVar2 <=(8 - 1)){
Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][iVar0]=HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
if(bParam1){
iVar1=HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
if(Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][iVar0]==iVar1){
Global_113648.f_2365.f_539.f_1763=iVar2;
}}
iVar2++;
}
PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
if(iVar0==0){
STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
}elseif(iVar0==1){
STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
}elseif(iVar0==2){
STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
}}}}


void func_403(int iParam0, var uParam1){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
struct<5> Var4;
int iVar5;
int iVar6;
struct<2> Var7;
struct<4> Var8;
int iVar9;
bool bVar10;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=0;
while (iVar0 <=(44 - 1)){
(uParam1[iVar0 /*5*/])->f_1=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=(44 - 1)){
iVar3=func_408(iVar0);
if(iVar3 !=0){
Var4.f_0=WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_408(iVar0));
Var4.f_1=0;
Var4.f_2=0;
Var4.f_3=0;
Var4.f_4=0;
if(Var4.f_0 !=0 && Var4.f_0 !=joaat("weapon_unarmed")){
Var4.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
if(Var4.f_0==joaat("gadget_parachute")){
Var4.f_1=1;
}
Var4.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
Var4.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
if(Var4.f_1==-1){
if(!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1))){
Var4.f_1=0;
}}
(uParam1[iVar0 /*5*/])->f_1=Var4.f_1;
bVar1=false;
iVar2=func_406(Var4.f_0, bVar1);
while (iVar2 !=0){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2)){
MISC::SET_BIT(&(Var4.f_2), bVar1);
}
bVar1++;
iVar2=func_406(Var4.f_0, bVar1);
}}
*(uParam1[iVar0 /*5*/])={
Var4 
};
}
iVar0++;
}
iVar0=0;
while (iVar0 <=50){
uParam1->f_221[iVar0 /*5*/].f_1=0;
iVar0++;
}
iVar6=FILES::GET_NUM_DLC_WEAPONS_SP();
iVar5=0;
while (iVar5 < iVar6){
if((FILES::GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_405(Var7.f_1)) && iVar9 < 51){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var7.f_0)){
Var4.f_0=Var7.f_1;
Var4.f_1=0;
Var4.f_2=0;
Var4.f_3=0;
Var4.f_4=0;
Var4.f_1=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
if(WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, 0)){
Var4.f_3=WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
Var4.f_4=WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
}
if(Var4.f_1==-1){
if(!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1))){
Var4.f_1=0;
}}
uParam1->f_221[iVar9 /*5*/].f_1=Var4.f_1;
bVar10=false;
bVar1=false;
while (bVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, bVar1, &Var8)){
if(!func_404(Var8.f_3)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3)){
MISC::SET_BIT(&(Var4.f_2), bVar10);
}
bVar10++;
}
}
bVar1++;
}}
if(Var4.f_0 !=0){
if(!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, 0)){
Var4.f_0=0;
Var4.f_1=0;
}}
uParam1->f_221[iVar9 /*5*/]={
Var4 
};
iVar9++;
}
iVar5++;
}}}

int func_404(int iParam0){
switch (iParam0){
case joaat("component_pistol_mk2_camo_slide"):
case joaat("component_pistol_mk2_camo_02_slide"):
case joaat("component_pistol_mk2_camo_03_slide"):
case joaat("component_pistol_mk2_camo_04_slide"):
case joaat("component_pistol_mk2_camo_05_slide"):
case joaat("component_pistol_mk2_camo_06_slide"):
case joaat("component_pistol_mk2_camo_07_slide"):
case joaat("component_pistol_mk2_camo_08_slide"):
case joaat("component_pistol_mk2_camo_09_slide"):
case joaat("component_pistol_mk2_camo_10_slide"):
case joaat("component_pistol_mk2_camo_ind_01_slide"):
case joaat("component_snspistol_mk2_camo_slide"):
case joaat("component_snspistol_mk2_camo_02_slide"):
case joaat("component_snspistol_mk2_camo_03_slide"):
case joaat("component_snspistol_mk2_camo_04_slide"):
case joaat("component_snspistol_mk2_camo_05_slide"):
case joaat("component_snspistol_mk2_camo_06_slide"):
case joaat("component_snspistol_mk2_camo_07_slide"):
case joaat("component_snspistol_mk2_camo_08_slide"):
case joaat("component_snspistol_mk2_camo_09_slide"):
case joaat("component_snspistol_mk2_camo_10_slide"):
case joaat("component_snspistol_mk2_camo_ind_01_slide"):
case joaat("component_pistol_mk2_varmod_xm3_slide"):
return 1;
break;
}
return 0;
}

int func_405(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}else{
switch (iParam0){
case joaat("weapon_pistol50"):
case joaat("weapon_bullpupshotgun"):
case joaat("weapon_assaultsmg"):
return 0;
break;
case joaat("weapon_bottle"):
case joaat("weapon_snspistol"):
case joaat("weapon_gusenberg"):
return 0;
break;
case joaat("weapon_heavypistol"):
case joaat("weapon_specialcarbine"):
return 0;
break;
case joaat("weapon_bullpuprifle"):
return 0;
break;
case joaat("weapon_dagger"):
case joaat("weapon_vintagepistol"):
return 0;
break;
case joaat("weapon_firework"):
case joaat("weapon_musket"):
return 0;
break;
case joaat("weapon_heavyshotgun"):
case joaat("weapon_marksmanrifle"):
return 0;
break;
case joaat("weapon_hominglauncher"):
case joaat("weapon_proxmine"):
return 0;
break;
case joaat("weapon_combatpdw"):
case joaat("weapon_knuckle"):
case joaat("weapon_marksmanpistol"):
return 0;
break;
case joaat("weapon_heavyrifle"):
case -572349828:
case 392730790:
case -1523701417:
case -2112826155:
case -664359727:
case -1887867191:
case -837150131:
case -344484024:
case joaat("weapon_flaregun"):
case joaat("weapon_handcuffs"):
case joaat("weapon_snowball"):
case joaat("weapon_garbagebag"):
case joaat("weapon_flashlight"):
case joaat("weapon_switchblade"):
case joaat("weapon_revolver"):
case joaat("weapon_dbshotgun"):
case joaat("weapon_compactrifle"):
case joaat("weapon_autoshotgun"):
case joaat("weapon_minismg"):
case joaat("weapon_compactlauncher"):
case joaat("weapon_battleaxe"):
case joaat("weapon_pipebomb"):
case joaat("weapon_poolcue"):
case joaat("weapon_wrench"):
case joaat("weapon_doubleaction"):
case joaat("weapon_raycarbine"):
case joaat("weapon_rayminigun"):
case joaat("weapon_raypistol"):
case joaat("weapon_navyrevolver"):
case joaat("weapon_ceramicpistol"):
case joaat("weapon_gadgetpistol"):
case joaat("weapon_militaryrifle"):
case joaat("weapon_combatshotgun"):
case joaat("weapon_emplauncher"):
case joaat("weapon_fertilizercan"):
case joaat("weapon_stungun_mp"):
case joaat("weapon_metaldetector"):
case joaat("weapon_precisionrifle"):
case joaat("weapon_tacticalrifle"):
case joaat("weapon_pistolxm3"):
case joaat("weapon_candycane"):
case joaat("weapon_railgunxm3"):
return 1;
break;
}}
return 0;
}

int func_406(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
struct<4> Var5;
iVar0=0;
switch (iParam0){
case joaat("weapon_pistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_pistol_clip_01");
break;
case 2:
iVar0=joaat("component_pistol_clip_02");
break;
case 3:
iVar0=joaat("component_at_pi_flsh");
break;
case 4:
iVar0=joaat("component_at_pi_supp_02");
break;
case 5:
iVar0=joaat("component_pistol_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_combatpistol_clip_01");
break;
case 1:
iVar0=joaat("component_combatpistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_combatpistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_appistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_appistol_clip_01");
break;
case 1:
iVar0=joaat("component_appistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_appistol_varmod_luxe");
break;
case 5:
iVar0=joaat("component_appistol_varmod_security");
break;
}
break;
case joaat("weapon_microsmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_microsmg_clip_01");
break;
case 1:
iVar0=joaat("component_microsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_microsmg_varmod_luxe");
break;
case 6:
iVar0=joaat("component_microsmg_varmod_security");
break;
}
break;
case joaat("weapon_smg"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_smg_clip_01");
break;
case 2:
iVar0=joaat("component_smg_clip_02");
break;
case 3:
iVar0=joaat("component_smg_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_flsh");
break;
case 5:
iVar0=joaat("component_at_pi_supp");
break;
case 6:
iVar0=joaat("component_at_scope_macro_02");
break;
case 7:
iVar0=joaat("component_at_ar_afgrip");
break;
case 8:
iVar0=joaat("component_smg_varmod_luxe");
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_assaultrifle_clip_01");
break;
case 2:
iVar0=joaat("component_assaultrifle_clip_02");
break;
case 3:
iVar0=joaat("component_assaultrifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_afgrip");
break;
case 5:
iVar0=joaat("component_at_ar_flsh");
break;
case 6:
iVar0=joaat("component_at_scope_macro");
break;
case 7:
iVar0=joaat("component_at_ar_supp_02");
break;
case 8:
iVar0=joaat("component_assaultrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_carbinerifle_clip_01");
break;
case 2:
iVar0=joaat("component_carbinerifle_clip_02");
break;
case 3:
iVar0=joaat("component_carbinerifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_railcover_01");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_at_ar_flsh");
break;
case 7:
iVar0=joaat("component_at_scope_medium");
break;
case 8:
iVar0=joaat("component_at_ar_supp");
break;
case 9:
iVar0=joaat("component_carbinerifle_varmod_luxe");
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_advancedrifle_clip_01");
break;
case 1:
iVar0=joaat("component_advancedrifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_advancedrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_mg"):
switch (bParam1){
case 0:
iVar0=joaat("component_mg_clip_01");
break;
case 1:
iVar0=joaat("component_mg_clip_02");
break;
case 2:
iVar0=joaat("component_at_scope_small_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_mg_varmod_lowrider");
break;
}
break;
case joaat("weapon_combatmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_combatmg_clip_01");
break;
case 2:
iVar0=joaat("component_combatmg_clip_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_combatmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_sr_supp");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_pumpshotgun_varmod_lowrider");
break;
case 3:
iVar0=joaat("component_pumpshotgun_varmod_security");
break;
case 4:
iVar0=joaat("component_pumpshotgun_varmod_xm3");
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_assaultshotgun_clip_01");
break;
case 1:
iVar0=joaat("component_assaultshotgun_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_afgrip");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_sniperrifle_clip_01");
break;
case 1:
iVar0=joaat("component_at_scope_large");
break;
case 2:
iVar0=joaat("component_at_scope_max");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_sniperrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_heavysniper"):
switch (bParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_heavysniper_clip_01");
break;
case 2:
iVar0=joaat("component_at_scope_large");
break;
case 3:
iVar0=joaat("component_at_scope_max");
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_scope_small");
break;
}
break;
case joaat("weapon_minigun"):
switch (bParam1){
case 0:
iVar0=joaat("component_minigun_clip_01");
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (bParam1){
case 0:
iVar0=joaat("component_assaultsmg_clip_01");
break;
case 1:
iVar0=joaat("component_assaultsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_assaultsmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_ar_supp_02");
break;
}
break;
case joaat("weapon_pistol50"):
switch (bParam1){
case 0:
iVar0=joaat("component_pistol50_clip_01");
break;
case 1:
iVar0=joaat("component_pistol50_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_pistol50_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpdw"):
switch (bParam1){
case 0:
iVar0=joaat("component_combatpdw_clip_01");
break;
case 1:
iVar0=joaat("component_combatpdw_clip_02");
break;
case 2:
iVar0=joaat("component_combatpdw_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_small");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (bParam1){
case 0:
iVar0=joaat("component_sawnoffshotgun_varmod_luxe");
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (bParam1){
case 0:
iVar0=joaat("component_bullpuprifle_clip_01");
break;
case 1:
iVar0=joaat("component_bullpuprifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_bullpuprifle_varmod_low");
break;
}
break;
case joaat("weapon_snspistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_snspistol_clip_01");
break;
case 1:
iVar0=joaat("component_snspistol_clip_02");
break;
case 2:
iVar0=joaat("component_snspistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (bParam1){
case 0:
iVar0=joaat("component_specialcarbine_clip_01");
break;
case 1:
iVar0=joaat("component_specialcarbine_clip_02");
break;
case 2:
iVar0=joaat("component_specialcarbine_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_at_ar_supp_02");
break;
case 6:
iVar0=joaat("component_at_ar_afgrip");
break;
case 7:
iVar0=joaat("component_specialcarbine_varmod_lowrider");
break;
}
break;
case joaat("weapon_knuckle"):
switch (bParam1){
case 0:
iVar0=joaat("component_knuckle_varmod_pimp");
break;
case 1:
iVar0=joaat("component_knuckle_varmod_ballas");
break;
case 2:
iVar0=joaat("component_knuckle_varmod_dollar");
break;
case 3:
iVar0=joaat("component_knuckle_varmod_diamond");
break;
case 4:
iVar0=joaat("component_knuckle_varmod_hate");
break;
case 5:
iVar0=joaat("component_knuckle_varmod_love");
break;
case 6:
iVar0=joaat("component_knuckle_varmod_player");
break;
case 7:
iVar0=joaat("component_knuckle_varmod_king");
break;
case 8:
iVar0=joaat("component_knuckle_varmod_vagos");
break;
}
break;
case joaat("weapon_machinepistol"):
switch (bParam1){
case 0:
iVar0=joaat("component_machinepistol_clip_01");
break;
case 1:
iVar0=joaat("component_machinepistol_clip_02");
break;
case 2:
iVar0=joaat("component_machinepistol_clip_03");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
}
break;
case joaat("weapon_switchblade"):
switch (bParam1){
case 0:
iVar0=joaat("component_switchblade_varmod_var1");
break;
case 1:
iVar0=joaat("component_switchblade_varmod_var2");
break;
}
break;
case joaat("weapon_revolver"):
switch (bParam1){
case 0:
iVar0=joaat("component_revolver_clip_01");
break;
case 1:
iVar0=joaat("component_revolver_varmod_boss");
break;
case 2:
iVar0=joaat("component_revolver_varmod_goon");
break;
}
break;
case joaat("weapon_minismg"):
switch (bParam1){
case 0:
iVar0=joaat("component_minismg_clip_01");
break;
case 1:
iVar0=joaat("component_minismg_clip_02");
break;
}
break;
case joaat("weapon_bat"):
switch (bParam1){
case 0:
iVar0=joaat("component_bat_varmod_xm3");
break;
case 1:
iVar0=joaat("component_bat_varmod_xm3_01");
break;
case 2:
iVar0=joaat("component_bat_varmod_xm3_02");
break;
case 3:
iVar0=joaat("component_bat_varmod_xm3_03");
break;
case 4:
iVar0=joaat("component_bat_varmod_xm3_04");
break;
case 5:
iVar0=joaat("component_bat_varmod_xm3_05");
break;
case 6:
iVar0=joaat("component_bat_varmod_xm3_06");
break;
case 7:
iVar0=joaat("component_bat_varmod_xm3_07");
break;
case 8:
iVar0=joaat("component_bat_varmod_xm3_08");
break;
case 9:
iVar0=joaat("component_bat_varmod_xm3_09");
break;
}
break;
default:
if(iParam0 !=0){
iVar1=func_407(iParam0, &uVar4);
if(iVar1 !=-1){
iVar2=0;
while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5)){
if(!func_404(Var5.f_3)){
if(iVar3==bParam1){
return Var5.f_3;
}
iVar3++;
}
}
iVar2++;
}}}
break;
}
return iVar0;
}

int func_407(int iParam0, var uParam1){
int iVar0;
int iVar1;
iVar1=FILES::GET_NUM_DLC_WEAPONS();
iVar0=0;
while (iVar0 < iVar1){
if(FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1)){
if(uParam1->f_1==iParam0){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_408(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 0:
iVar0=1993361168;
break;
case 1:
iVar0=1277010230;
break;
case 2:
iVar0=932043479;
break;
case 3:
iVar0=-690654591;
break;
case 4:
iVar0=-1459198205;
break;
case 5:
iVar0=195782970;
break;
case 6:
iVar0=-438797331;
break;
case 7:
iVar0=896793492;
break;
case 8:
iVar0=495159329;
break;
case 9:
iVar0=-1155528315;
break;
case 10:
iVar0=-515636489;
break;
case 11:
iVar0=-871913299;
break;
case 12:
iVar0=-1352759032;
break;
case 13:
iVar0=-542958961;
break;
case 14:
iVar0=1682645887;
break;
case 15:
iVar0=-859470162;
break;
case 16:
iVar0=-2125426402;
break;
case 17:
iVar0=2067210266;
break;
case 18:
iVar0=-538172856;
break;
case 19:
iVar0=1783244476;
break;
case 20:
iVar0=439844898;
break;
case 21:
iVar0=-24829327;
break;
case 22:
iVar0=1949306232;
break;
case 23:
iVar0=-1941230881;
break;
case 24:
iVar0=-1033554448;
break;
case 25:
iVar0=320513715;
break;
case 26:
iVar0=-695165975;
break;
case 27:
iVar0=-281028447;
break;
case 28:
iVar0=-686713772;
break;
case 29:
iVar0=347509793;
break;
case 30:
iVar0=1769089473;
break;
case 31:
iVar0=189935548;
break;
case 33:
iVar0=248801358;
break;
case 34:
iVar0=386596758;
break;
case 35:
iVar0=-157212362;
break;
case 36:
iVar0=436985596;
break;
case 37:
iVar0=-47957369;
break;
case 38:
iVar0=575938238;
break;
}
return iVar0;
}


void func_409(int iParam0){
int iVar0;
iVar0=func_220(iParam0);
if(func_223(iVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113648.f_2365.f_539.f_294[iVar0]=PED::GET_PED_ARMOUR(iParam0);
}}


void func_410(var uParam0, int iParam1){
int iVar0;
struct<3> Var1;
var uVar2;
int iVar3;
*uParam0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
uParam0->f_3=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
uParam0->f_5=PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
uParam0->f_4=PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
if(vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f){
*uParam0={
301.2162f, 202.1357f, 103.3797f 
};
uParam0->f_3=156.5144f;
}elseif(vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f){
*uParam0={
394.2567f, -713.5439f, 28.2853f 
};
uParam0->f_3=276.6273f;
}elseif(vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f){
*uParam0={
-1423.472f, -214.2539f, 45.5004f 
};
uParam0->f_3=353.8757f;
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0){
*uParam0={
4.2587f, 525.0214f, 173.6281f 
};
uParam0->f_3=203.6746f;
}elseif(MISC::IS_BIT_SET(Global_78807, 4)){
*uParam0={
452.0255f, 5571.85f, 780.1859f 
};
uParam0->f_3=78.9858f;
}elseif(MISC::IS_BIT_SET(Global_78807, 5)){
*uParam0={
-745.4462f, 5595.146f, 40.6594f 
};
uParam0->f_3=261.747f;
}elseif(MISC::IS_BIT_SET(Global_78807, 6)){
*uParam0={
-1675.521f, -1125.59f, 12.091f 
};
uParam0->f_3=271.8208f;
}elseif(MISC::IS_BIT_SET(Global_78807, 7)){
*uParam0={
-1631.219f, -1112.805f, 12.0212f 
};
uParam0->f_3=316.8879f;
}elseif(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters")){
*uParam0={
1276.956f, -1725.189f, 53.6551f 
};
uParam0->f_3=204.1703f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0)){
*uParam0={
-601.59f, 2099.197f, 128.8928f 
};
uParam0->f_3=204.7498f;
}elseif(vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f){
*uParam0={
-1018.376f, -483.9436f, 36.0964f 
};
uParam0->f_3=114.7664f;
}elseif(vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f){
*uParam0={
497.7238f, -1310.932f, 28.2372f 
};
uParam0->f_3=289.3663f;
}elseif(vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f){
*uParam0={
2316.93f, 2594.153f, 45.7199f 
};
uParam0->f_3=348.1325f;
}
if(iParam1==1){
if(func_414(&iVar0)){
if(func_412(iVar0, &Var1, &uVar2)){
Var1.f_2=(Var1.f_2 + 1f);
*uParam0={
Var1 
};
uParam0->f_3=uVar2;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)){
iVar3=func_292();
if(iVar3==0){
*uParam0={
-65.1234f, 81.2517f, 70.5644f 
};
uParam0->f_3=71.6237f;
}elseif(iVar3==1){
*uParam0={
-68.5531f, -1824.377f, 25.9424f 
};
uParam0->f_3=215.8295f;
}elseif(iVar3==2){
*uParam0={
-220.8189f, -1162.302f, 22.0242f 
};
uParam0->f_3=70.2711f;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0)){
*uParam0={
495.4108f, -1306.08f, 29.2883f 
};
uParam0->f_3=213.6273f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0)){
*uParam0={
-1160.095f, -1515.407f, 3.1496f 
};
uParam0->f_3=305.6424f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0)){
*uParam0={
431.8853f, -1013.133f, 28.7907f 
};
uParam0->f_3=186.6814f;
}elseif(func_411(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)){
*uParam0={
279.4137f, -585.8815f, 43.2502f 
};
uParam0->f_3=48.8028f;
}}}

int func_411(struct<3> Param0, char* sParam1, struct<3> Param2){
int iVar0;
int iVar1;
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
iVar0=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
if(!INTERIOR::IS_VALID_INTERIOR(iVar0)){
return 0;
}
iVar1=INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
if(iVar1==iVar0){
return 1;
}}
return 0;
}


bool func_412(int iParam0, var uParam1, var uParam2){
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
switch (iParam0){
case 0:
*uParam1={
-829.842f, -191.7454f, 36.4386f 
};
*uParam2=29.5061f;
break;
case 1:
*uParam1={
129.8484f, -1716.528f, 28.0702f 
};
*uParam2=50.3483f;
break;
case 2:
*uParam1={
-1296.913f, -1120.999f, 5.3951f 
};
*uParam2=0.9933f;
break;
case 3:
*uParam1={
1938.028f, 3718.736f, 31.3154f 
};
*uParam2=118.2305f;
break;
case 4:
*uParam1={
1197.866f, -469.3809f, 65.0885f 
};
*uParam2=346.4477f;
break;
case 5:
*uParam1={
-32.2161f, -135.8212f, 56.0532f 
};
*uParam2=186.0052f;
break;
case 6:
*uParam1={
-287.7696f, 6238.081f, 30.2902f 
};
*uParam2=316.1349f;
break;
case 7:
*uParam1={
99.2876f, -1395.16f, 28.2759f 
};
*uParam2=320.2739f;
break;
case 8:
*uParam1={
1679.445f, 4819.056f, 41.0035f 
};
*uParam2=4.6192f;
break;
case 9:
*uParam1={
411.3063f, -809.1863f, 28.1554f 
};
*uParam2=1.8972f;
break;
case 10:
*uParam1={
-1088.054f, 2699.167f, 19.2748f 
};
*uParam2=129.7382f;
break;
case 11:
*uParam1={
1194.163f, 2695.644f, 36.9225f 
};
*uParam2=1.1454f;
break;
case 12:
*uParam1={
-821.2829f, -1088.027f, 10.0499f 
};
*uParam2=120.5883f;
break;
case 13:
*uParam1={
-3.3416f, 6521.303f, 30.2961f 
};
*uParam2=316.4451f;
break;
case 14:
*uParam1={
-1208.417f, -785.9635f, 16.0139f 
};
*uParam2=36.3181f;
break;
case 15:
*uParam1={
623.1845f, 2739.191f, 40.9588f 
};
*uParam2=3.5411f;
break;
case 16:
*uParam1={
130.9555f, -198.2084f, 53.41f 
};
*uParam2=251.3506f;
break;
case 17:
*uParam1={
-3164.065f, 1067.317f, 19.6778f 
};
*uParam2=101.2229f;
break;
case 18:
*uParam1={
-713.2797f, -174.2767f, 35.8962f 
};
*uParam2=29.8138f;
break;
case 19:
*uParam1={
-147.0616f, -306.4322f, 37.7912f 
};
*uParam2=160.4526f;
break;
case 20:
*uParam1={
-1461.355f, -230.6092f, 48.3064f 
};
*uParam2=318.7851f;
break;
case 21:
*uParam1={
-1347.739f, -1278.573f, 3.8952f 
};
*uParam2=17.9365f;
break;
case 22:
*uParam1={
325.6833f, 164.3263f, 102.4425f 
};
*uParam2=68.6407f;
break;
case 23:
*uParam1={
1858.774f, 3742.393f, 32.0779f 
};
*uParam2=301.2329f;
break;
case 24:
*uParam1={
-286.3272f, 6202.802f, 30.3323f 
};
*uParam2=225.1334f;
break;
case 25:
*uParam1={
-1161.596f, -1417.7f, 3.712f 
};
*uParam2=246.9161f;
break;
case 26:
*uParam1={
1308.952f, -1660.611f, 50.2362f 
};
*uParam2=163.5456f;
break;
case 27:
*uParam1={
-3161.585f, 1074.214f, 19.6847f 
};
*uParam2=98.6092f;
break;
case 28:
*uParam1={
28.423f, -1110.814f, 28.2848f 
};
*uParam2=85.2495f;
break;
case 29:
*uParam1={
1704.966f, 3749.709f, 33.0188f 
};
*uParam2=45.6778f;
break;
case 30:
*uParam1={
223.949f, -38.7894f, 68.6483f 
};
*uParam2=159.4265f;
break;
case 31:
*uParam1={
837.7854f, -1017.963f, 26.3045f 
};
*uParam2=181.0445f;
break;
case 32:
*uParam1={
-313.1914f, 6093.351f, 30.4625f 
};
*uParam2=315.8405f;
break;
case 33:
*uParam1={
-663.4631f, -952.8069f, 20.3143f 
};
*uParam2=92.6796f;
break;
case 34:
*uParam1={
-1323.06f, -392.8577f, 35.4596f 
};
*uParam2=210.7398f;
break;
case 35:
*uParam1={
-1106.102f, 2684.35f, 18.0953f 
};
*uParam2=127.0383f;
break;
case 36:
*uParam1={
-3157.932f, 1081.309f, 19.6953f 
};
*uParam2=100.2942f;
break;
case 37:
*uParam1={
2562.882f, 312.8641f, 107.4612f 
};
*uParam2=179.205f;
break;
case 38:
*uParam1={
822.48f, -2142.875f, 27.8496f 
};
*uParam2=355.0598f;
break;
case 39:
*uParam1={
-1137.053f, -1993.916f, 12.1677f 
};
*uParam2=43.1213f;
break;
case 40:
*uParam1={
717.8107f, -1084.081f, 21.3094f 
};
*uParam2=93.2649f;
break;
case 41:
*uParam1={
-387.6789f, -128.2568f, 37.6796f 
};
*uParam2=119.1085f;
break;
case 42:
*uParam1={
117.8835f, 6599.415f, 31.0134f 
};
*uParam2=90.7225f;
break;
case 43:
*uParam1={
1201.709f, 2664.813f, 36.8102f 
};
*uParam2=133.9002f;
break;
case 44:
*uParam1={
-200.1521f, -1297.502f, 30.296f 
};
*uParam2=269.0687f;
break;
case 45:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 47:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 48:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 49:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 52:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 50:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 51:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 54:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 55:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 56:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 57:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
}
return !func_413(*uParam1, 0f, 0f, 0f, 0);
}


bool func_413(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_414(var uParam0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_438()){
*uParam0=func_419(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, -1, 0, 1, -1);
if(func_418(*uParam0) && !func_415(*uParam0)){
return 1;
}}}
return 0;
}


bool func_415(int iParam0){
return func_416(iParam0, 0, 1);
}

int func_416(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_80()==0){
return MISC::IS_BIT_SET(func_141(func_417(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_417(int iParam0){
switch (iParam0){
case 0:
return 828;
break;
case 1:
return 829;
break;
case 2:
return 830;
break;
case 3:
return 831;
break;
case 4:
return 832;
break;
case 5:
return 833;
break;
case 6:
return 834;
break;
case 7:
return 835;
break;
case 8:
return 836;
break;
case 9:
return 837;
break;
case 10:
return 838;
break;
case 11:
return 839;
break;
case 12:
return 840;
break;
case 13:
return 841;
break;
case 14:
return 842;
break;
case 15:
return 844;
break;
case 16:
return 845;
break;
case 17:
return 846;
break;
case 18:
return 847;
break;
case 19:
return 848;
break;
case 20:
return 849;
break;
case 21:
return 850;
break;
case 22:
return 851;
break;
case 23:
return 852;
break;
case 24:
return 853;
break;
case 25:
return 854;
break;
case 26:
return 855;
break;
case 27:
return 856;
break;
case 28:
return 857;
break;
case 29:
return 858;
break;
case 30:
return 859;
break;
case 31:
return 860;
break;
case 32:
return 861;
break;
case 33:
return 862;
break;
case 34:
return 863;
break;
case 35:
return 864;
break;
case 36:
return 865;
break;
case 37:
return 866;
break;
case 38:
return 867;
break;
case 39:
return 868;
break;
case 40:
return 872;
break;
case 41:
return 873;
break;
case 42:
return 874;
break;
case 43:
return 875;
break;
case 44:
return 12385;
break;
case 45:
return 3811;
break;
case 46:
return 5386;
break;
case 47:
return 6158;
break;
case 48:
return 7235;
break;
case 49:
return 7881;
break;
case 52:
return 8917;
break;
case 50:
return 8268;
break;
case 51:
return 8270;
break;
case 53:
return 9557;
break;
case 54:
return 9633;
break;
case 55:
return 9848;
break;
case 56:
return 9916;
break;
case 57:
return 9918;
break;
case 58:
return 11433;
break;
case 59:
return 11844;
break;
default:
break;
}
return 14192;
}

int func_418(int iParam0){
return func_416(iParam0, 5, 1);
}

int func_419(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=-1;
iVar0=0;
while (iVar0 <=59){
if(iParam1==6 || iParam1==func_437(iVar0)){
if(!bParam3 || func_436(iVar0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_420(iVar0, 0), 1);
if(((fVar1 < fVar2 && (fVar1 <=IntToFloat(iParam2) || iParam2==-1)) && (iParam4 || iVar0 !=21)) && iVar0 !=iParam5){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}


Vector3 func__420(int iParam0, bool bParam1){
switch (iParam0){
case -1:
return 0f, 0f, 0f;
break;
case 0:
return -821.9946f, -187.1776f, 36.5689f;
break;
case 1:
return 133.5702f, -1710.918f, 28.2916f;
break;
case 2:
return -1287.082f, -1116.558f, 5.9901f;
break;
case 3:
return 1933.119f, 3726.079f, 31.8444f;
break;
case 4:
return 1208.333f, -470.917f, 65.208f;
break;
case 5:
return -30.7448f, -148.4921f, 56.0765f;
break;
case 6:
return -280.8165f, 6231.771f, 30.6955f;
break;
case 7:
return 80.665f, -1391.669f, 28.3761f;
break;
case 8:
return 1687.881f, 4820.55f, 41.0096f;
break;
case 9:
return 419.531f, -807.5787f, 28.4896f;
break;
case 10:
return -1094.049f, 2704.171f, 18.0873f;
break;
case 11:
return 1197.972f, 2704.22f, 37.1572f;
break;
case 12:
return -818.6218f, -1077.533f, 10.3282f;
break;
case 13:
return -0.2361f, 6516.045f, 30.8684f;
break;
case 14:
return -1199.809f, -776.6886f, 16.3237f;
break;
case 15:
return 618.1857f, 2752.567f, 41.0881f;
break;
case 16:
return 126.6853f, -212.5027f, 53.5578f;
break;
case 17:
return -3168.966f, 1055.287f, 19.8632f;
break;
case 18:
return -715.3598f, -155.7742f, 36.4105f;
break;
case 19:
return -158.2199f, -304.9663f, 38.735f;
break;
case 20:
return -1455.005f, -233.1862f, 48.7936f;
break;
case 21:
return -1335.973f, -1278.555f, 3.8598f;
break;
case 22:
return 321.6098f, 179.4165f, 102.5865f;
break;
case 23:
return 1861.685f, 3750.08f, 32.0318f;
break;
case 24:
return -290.1603f, 6199.095f, 30.4871f;
break;
case 25:
return -1153.948f, -1425.019f, 3.9544f;
break;
case 26:
return 1322.455f, -1651.125f, 51.1885f;
break;
case 27:
return -3169.42f, 1074.727f, 19.8343f;
break;
case 28:
return 17.6804f, -1114.288f, 28.797f;
break;
case 29:
return 1697.979f, 3753.2f, 33.7053f;
break;
case 30:
return 245.2711f, -45.8126f, 68.941f;
break;
case 31:
return 844.1248f, -1025.571f, 27.1948f;
break;
case 32:
return -325.8904f, 6077.026f, 30.4548f;
break;
case 33:
return -664.2178f, -943.3646f, 20.8292f;
break;
case 34:
return -1313.948f, -390.9637f, 35.592f;
break;
case 35:
return -1111.238f, 2688.463f, 17.6131f;
break;
case 36:
return -3165.231f, 1082.855f, 19.8438f;
break;
case 37:
return 2569.612f, 302.576f, 107.7349f;
break;
case 38:
return 811.8699f, -2149.102f, 28.6363f;
break;
case 39:
return -1147.314f, -1992.434f, 12.1803f;
break;
case 40:
return 724.524f, -1089.081f, 21.1692f;
break;
case 41:
return -354.5272f, -135.4011f, 38.185f;
break;
case 42:
return 113.2615f, 6624.28f, 30.7871f;
break;
case 43:
return 1174.707f, 2644.45f, 36.7552f;
break;
case 44:
if(bParam1){
return -211.5f, -1324.2f, 30.296f;
}else{
return -205.6654f, -1311.113f, 30.296f;
}
break;
case 45:
return func_433(Global_102825);
break;
case 46:
if(Global_1853747 !=func_287()){
if(func_432(Global_1853747)){
return func_425(2, 2);
}elseif(func_424(Global_1853747)){
return func_425(45, 3);
}else{
return 1000000f, 1000000f, 1000000f;
}}else{
return 1000000f, 1000000f, 1000000f;
}
break;
case 47:
return 510.1f, 4749.5f, -69f;
break;
case 48:
return -1422.197f, -3015.803f, -79.1603f;
break;
case 49:
return 203.0799f, 5200.189f, -89.6f;
break;
case 52:
return 2714.547f, -354.2701f, -55.1867f;
break;
case 50:
return Global_1970473;
break;
case 51:
return 1100f, 220f, -50f;
break;
case 53:
return 1560f, 400f, -50f;
break;
case 54:
return -2159.901f, 1075.213f, -25.36174f;
break;
case 55:
return -2194.123f, 1103.805f, -24.2451f;
break;
case 56:
switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7){
case 155:
return 379.4285f, -53.6067f, 111.7088f;
break;
case 156:
return -1029.166f, -426.3766f, 72.2069f;
break;
case 157:
return -581.9924f, -721.3945f, 121.3509f;
break;
case 158:
return -1013.718f, -768.3539f, 69.4942f;
break;
}
return 1000000f, 1000000f, 1000000f;
break;
case 57:
return -1010f, -70f, -100f;
break;
case 58:
return func_421();
break;
case 59:
return 560f, -405f, -69.6591f;
break;
}
return 1000000f, 1000000f, 1000000f;
}


Vector3 func__421(){
if(!func_423(Global_1956117)){
return Global_1956117;
}
switch (func_422()){
case 0:
return -29.532f, 6435.136f, 31.162f;
case 1:
return 1705.214f, 4819.167f, 41.75f;
case 2:
return 1795.522f, 3899.753f, 33.869f;
case 3:
return 1335.536f, 2758.746f, 51.099f;
case 4:
return 795.583f, 1210.78f, 338.962f;
case 5:
return -3192.67f, 1077.205f, 20.594f;
case 6:
return -789.719f, 5400.921f, 33.915f;
case 7:
return -24.384f, 3048.167f, 40.703f;
case 8:
return 2666.786f, 1469.324f, 24.237f;
case 9:
return -1454.966f, 2667.503f, 3.2f;
case 10:
return 2340.418f, 3054.188f, 47.888f;
case 11:
return 1509.183f, -2146.795f, 76.853f;
case 12:
return 1137.404f, -1358.654f, 34.322f;
case 13:
return -57.208f, -2658.793f, 5.737f;
case 14:
return 1905.017f, 565.222f, 175.558f;
case 15:
return 974.484f, -1718.798f, 30.296f;
case 16:
return 779.077f, -3266.297f, 5.719f;
case 17:
return -587.728f, -1637.208f, 19.611f;
case 18:
return 733.99f, -736.803f, 26.165f;
case 19:
return -1694.632f, -454.082f, 40.712f;
case 20:
return -1330.726f, -1163.948f, 4.313f;
case 21:
return -496.618f, 40.231f, 52.316f;
case 22:
return 275.527f, 66.509f, 94.108f;
case 23:
return 260.928f, -763.35f, 30.559f;
case 24:
return -478.025f, -741.45f, 30.299f;
case 25:
return 894.94f, 3603.911f, 32.56f;
case 26:
return -2166.511f, 4289.503f, 48.733f;
case 27:
return 1465.633f, 6553.67f, 13.771f;
case 28:
return 1101.032f, -335.172f, 66.944f;
case 29:
return 149.683f, -1655.674f, 29.028f;
default:
}
return 0f, 0f, 0f;
}

int func_422(){
return Global_2652258.f_2650;
}

int func_423(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_424(int iParam0){
if(iParam0 !=func_287()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}


Vector3 func__425(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
Var1={
1000000f, 1000000f, 1000000f 
};
if(Global_1853747 !=func_287()){
if(iParam1==3){
if(func_426(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(iParam1==2){
if(MISC::IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4)){
if(func_426(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(MISC::IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5)){
if(func_426(iParam0, 2, &Var0, 0, 0)){
Var1={
Var0 
};
}}}}
return Var1;
}

int func_426(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
struct<4> Var0;
struct<3> Var1;
struct<4> Var2;
struct<3> Var3;
if(!func_431(iParam3, &Var0)){
return 0;
}
if(!func_431(iParam1, &Var1)){
return 0;
}
if(!bParam4){
Var2={
func_429(iParam0) 
};
}else{
Var2={
func_428(iParam0) 
};
}
Var3={
Var2 - Var0 
};
Var3={
func_427(Var3, -Var0.f_3.f_2) 
};
Var3={
func_427(Var3, Var1.f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, 0f, Var3) 
};
uParam2->f_3={
Var2.f_3 
};
return 1;
}


Vector3 func__427(struct<3> Param0, float fParam1){
struct<3> Var0;
float fVar1;
float fVar2;
fVar1=sin(fParam1);
fVar2=cos(fParam1);
Var0.f_0=((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
Var0.f_1=((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
Var0.f_2=Param0.f_2;
return Var0;
}


struct<6> func_428(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 1:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 2:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 3:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 4:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 5:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 6:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 7:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 8:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
}
return Var0;
}


struct<6> func_429(int iParam0){
return func_430(iParam0);
}


struct<6> func_430(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1105.22f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 1:
Var0={
1104.105f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 19:
Var0={
1105.22f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 20:
Var0={
1104.105f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 2:
Var0={
1102f, -3011.925f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
1103f, -3010f, -38.125f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
1103.213f, -3013.483f, -39.03f 
};
Var0.f_3={
0f, 0f, 31.32f 
};
break;
case 5:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1101.408f, -3012.32f, -38.45339f 
};
break;
case 6:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1103.037f, -3012.318f, -39.99874f 
};
break;
case 7:
Var0={
1105.645f, -3012.04f, -39.542f 
};
Var0.f_3={
0f, 0f, -86.04f 
};
break;
case 8:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1104.063f, -3012.368f, -39.99875f 
};
break;
case 9:
Var0={
1105.665f, -3012.334f, -38.50835f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 10:
Var0={
1102.504f, -3012.35f, -39.341f 
};
Var0.f_3={
0f, 0f, -96.48f 
};
break;
case 11:
Var0={
1102.928f, -3012.693f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 12:
Var0={
1102.942f, -3011.315f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 61:
Var0={
1101.994f, -3012.878f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 62:
Var0={
1103.152f, -3013.032f, -38.24946f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 13:
Var0={
1102.465f, -3009.515f, -39.341f 
};
Var0.f_3={
0f, 0f, -12.96f 
};
break;
case 14:
Var0={
1102.917f, -3009.525f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 15:
Var0={
1102.922f, -3010.887f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 63:
Var0={
1101.682f, -3009.227f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
1102.453f, -3008.51f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 16:
Var0={
1104.684f, -3009.561f, -39.341f 
};
Var0.f_3={
0f, 0f, 169.56f 
};
break;
case 17:
Var0={
1104.34f, -3008.698f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 18:
Var0={
1104.344f, -3009.618f, -37.98172f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 65:
Var0={
1105.459f, -3009.793f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 66:
Var0={
1104.783f, -3010.433f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 44:
Var0={
1104.025f, -3007.316f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 21:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 22:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 23:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 24:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 25:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 26:
Var0={
1102.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 27:
Var0={
1102.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 28:
Var0={
1105.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 29:
Var0={
1105.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 30:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 31:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 32:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 33:
Var0={
1102.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 34:
Var0={
1102.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 35:
Var0={
1105.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 36:
Var0={
1105.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 37:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 38:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 39:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
case 40:
Var0={
1102.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 41:
Var0={
1102.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 42:
Var0={
1105.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 43:
Var0={
1105.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 45:
Var0={
1101f, -3011.9f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 46:
Var0={
1102f, -3010f, -38.115f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 47:
Var0={
1105.174f, -3004.16f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 48:
Var0={
1105.175f, -3005.818f, -37.91948f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 49:
Var0={
1106.6f, -3000.847f, -39.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 50:
Var0={
1106.601f, -3002.171f, -37.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 51:
Var0={
1101.95f, -3011.9f, -39.2f 
};
Var0.f_3={
0f, 0f, 49.5f 
};
break;
case 52:
Var0={
1101.95f, -3010f, -39.2f 
};
Var0.f_3={
0f, 0f, 130.32f 
};
break;
case 53:
Var0={
1105.16f, -3009.06f, -39.2f 
};
Var0.f_3={
0f, 0f, -44.64f 
};
break;
case 54:
Var0={
1102.476f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 55:
Var0={
1099f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 56:
Var0={
1103.593f, -3008.27f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 57:
Var0={
1103.565f, -3014f, -39.988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 58:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 59:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 60:
Var0={
1103.55f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 67:
Var0={
1103.55f, -3013.762f, -40f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 68:
Var0={
1103.55f, -3006.186f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 71:
case 69:
case 70:
case 73:
case 72:
case 74:
Var0={
1103.6f, -3013.933f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
}
return Var0;
}

int func_431(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1={
1103.562f, -3014f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 1:
*uParam1={
1103.562f, -3006f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 2:
*uParam1={
1103.562f, -2998f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
default:
}
return 0;
}

int func_432(int iParam0){
if(iParam0 !=func_287()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 5)){
return 1;
}}
return 0;
}


Vector3 func__433(int iParam0){
switch (iParam0){
case 1:
return 1060f, -2990f, -35f;
break;
case 2:
return 1060f, -2990f, -35f;
break;
case 3:
return 974.9542f, -3000.091f, -35f;
break;
case 6:
return -1586.36f, -566.6f, 106.17f;
break;
case 7:
return -1389.87f, -465.17f, 82.68f;
break;
case 8:
return -145.81f, -590.2f, 171.13f;
break;
case 9:
return -62.49f, -823.55f, 288.74f;
break;
case 4:
return 1102.515f, -3158.888f, -38.5186f;
break;
case 5:
return 1005.861f, -3156.162f, -39.907f;
break;
case 10:
return 1103.562f, -3000f, -40f;
break;
case 11:
return 938.3077f, -3196.112f, -100f;
break;
case 12:
return -1266.802f, -3014.836f, -49.4895f;
break;
case 13:
return 520.0001f, 4750f, -70f;
break;
case 14:
return 345.0041f, 4842.001f, -59.9997f;
break;
case 15:
return -1604.664f, -3012.583f, -79.9999f;
break;
case 16:
return -1421.015f, -3012.587f, -80f;
break;
case 17:
if(func_434()==0){
return 205f, 5180f, -90f;
}else{
return 170f, 5190f, 10f;
}
break;
case 18:
return -2000f, 1250f, 50f;
break;
case 19:
return -1350f, 160f, -100f;
break;
case 20:
return -1070f, -70f, -100f;
break;
case 21:
return 570f, -415f, -70f;
break;
default:
return 0f, 0f, -200f;
break;
}
return 0f, 0f, -200f;
}

int func_434(){
return func_435(PLAYER::PLAYER_ID());
}


var func__435(int iParam0){
return MISC::GET_BITS_IN_RANGE(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_436(int iParam0){
return func_416(iParam0, 0, 0);
}

int func_437(int iParam0){
switch (iParam0){
case -1:
return 6;
break;
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 0;
break;
case 3:
return 0;
break;
case 4:
return 0;
break;
case 5:
return 0;
break;
case 6:
return 0;
break;
case 50:
return 0;
break;
case 7:
return 1;
break;
case 8:
return 1;
break;
case 9:
return 1;
break;
case 10:
return 1;
break;
case 11:
return 1;
break;
case 12:
return 1;
break;
case 13:
return 1;
break;
case 14:
return 1;
break;
case 15:
return 1;
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
return 2;
break;
case 23:
return 2;
break;
case 24:
return 2;
break;
case 25:
return 2;
break;
case 26:
return 2;
break;
case 27:
return 2;
break;
case 28:
return 3;
break;
case 29:
return 3;
break;
case 30:
return 3;
break;
case 31:
return 3;
break;
case 32:
return 3;
break;
case 33:
return 3;
break;
case 34:
return 3;
break;
case 35:
return 3;
break;
case 36:
return 3;
break;
case 37:
return 3;
break;
case 38:
return 3;
break;
case 39:
return 4;
break;
case 40:
return 4;
break;
case 41:
return 4;
break;
case 42:
return 4;
break;
case 43:
return 4;
break;
case 44:
return 4;
break;
case 45:
return 5;
break;
case 46:
return 3;
break;
case 47:
return 3;
break;
case 48:
return 3;
break;
case 49:
return 3;
break;
case 52:
return 3;
break;
case 51:
return 1;
break;
case 53:
return 3;
break;
case 54:
return 2;
break;
case 55:
return 1;
break;
case 56:
return 3;
break;
case 57:
return 1;
break;
case 58:
return 3;
break;
case 59:
return 3;
break;
}
return 6;
}


bool func_438(){
return Global_100733.f_387 > 0;
}


var func__439(){
var uVar0;
func_449(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_448(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_447(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_442(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_441(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_440(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_440(var uParam0, int iParam1){
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


void func_441(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_442(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_446(*uParam0);
iVar1=func_444(*uParam0);
if(iParam1 < 1 || iParam1 > func_443(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_443(int iParam0, int iParam1){
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


var func__444(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_445(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_445(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_446(var uParam0){
return uParam0 & 15;
}


void func_447(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_448(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_449(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_450(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL("BailBond1", uParam0)){
return 0;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0)){
return 2;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0)){
return 3;
}
return -1;
}

int func_451(int iParam0){
switch (iParam0){
case 69:
case 70:
return func_452(Global_113648.f_9087.f_99.f_205[10]);
break;
case 74:
case 75:
return func_452(Global_113648.f_9087.f_99.f_205[8]);
break;
case 84:
case 85:
return func_452(Global_113648.f_9087.f_99.f_205[11]);
break;
case 90:
return func_452(Global_113648.f_9087.f_99.f_205[7]);
break;
case 93:
return func_452(Global_113648.f_9087.f_99.f_205[9]);
break;
}
return 0;
}

int func_452(int iParam0){
switch (iParam0){
case 1:
case 3:
case 5:
case 6:
case 8:
return 0;
break;
case 2:
case 4:
case 7:
case 9:
return 1;
break;
}
return -1;
}

int func_453(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=MISC::GET_HASH_KEY(sParam0);
iVar1=func_454(iVar0, 1);
if(iVar1==-1 && !bParam1){}
return iVar1;
}

int func_454(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
while (iVar0 < 94){
if(Global_91469[iVar0 /*34*/].f_6==iParam0){
return iVar0;
}
iVar0++;
}
if(!bParam1){}
return -1;
}


void func_455(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 11){
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5=Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_60544[iVar0 /*3*/][0]=Global_113648.f_20566[iVar0];
Global_60544.f_31[iVar0 /*3*/][0]=Global_113648.f_20566.f_11[iVar0];
Global_60544.f_62[iVar0 /*3*/][0]=Global_113648.f_20566.f_22[iVar0];
Global_60544.f_93[iVar0 /*3*/][0]=Global_113648.f_20566.f_33[iVar0];
Global_60544.f_124[iVar0 /*3*/][0]=Global_113648.f_20566.f_44[iVar0];
Global_60544.f_155[iVar0 /*3*/][0]=Global_113648.f_20566.f_55[iVar0];
Global_60544.f_186[iVar0 /*3*/][0]=Global_113648.f_20566.f_66[iVar0];
Global_60544.f_217[iVar0 /*3*/][0]=Global_113648.f_20566.f_77[iVar0];
Global_60544.f_248[iVar0 /*3*/][0]=Global_113648.f_20566.f_88[iVar0];
if(!bParam0){
Global_60544[iVar0 /*3*/][1]=Global_113648.f_20566[iVar0];
Global_60544.f_31[iVar0 /*3*/][1]=Global_113648.f_20566.f_11[iVar0];
Global_60544.f_62[iVar0 /*3*/][1]=Global_113648.f_20566.f_22[iVar0];
Global_60544.f_93[iVar0 /*3*/][1]=Global_113648.f_20566.f_33[iVar0];
Global_60544.f_124[iVar0 /*3*/][1]=Global_113648.f_20566.f_44[iVar0];
Global_60544.f_155[iVar0 /*3*/][1]=Global_113648.f_20566.f_55[iVar0];
Global_60544.f_186[iVar0 /*3*/][1]=Global_113648.f_20566.f_66[iVar0];
Global_60544.f_217[iVar0 /*3*/][1]=Global_113648.f_20566.f_77[iVar0];
Global_60544.f_248[iVar0 /*3*/][1]=Global_113648.f_20566.f_88[iVar0];
}
iVar0++;
}}


void func_456(){
if(!HUD::DOES_BLIP_EXIST(Local_298.f_2)){
if(OBJECT::DOES_PICKUP_EXIST(Local_298.f_0)){
Local_298.f_2=func_457(Local_298.f_0);
}}
if(HUD::DOES_BLIP_EXIST(Local_298.f_2)){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_298.f_2, "NIG1B_CP_BLIP");
}}

int func_457(var uParam0){
var uVar0;
if(!OBJECT::DOES_PICKUP_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_PICKUP(uParam0);
HUD::SET_BLIP_SCALE(uVar0, func_458(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
return uVar0;
}


float func_458(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_459(){
struct<3> Var0;
if(!func_9(0) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(!iLocal_249){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1056.143f, 382.9233f, 67.74586f, -1054.965f, 382.899f, 70.98839f, 1.2f, 0, 1, 0)){
if(PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
if(func_461(5)){
if((!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
if(func_460(PLAYER::PLAYER_PED_ID(), 87.9952f, 90f)){
if(!MISC::IS_AREA_OCCUPIED(-1056.172f, 382.1909f, 68.08848f, -1054.682f, 383.8394f, 70.969f, 0, 1, 0, 0, 0, 0, 0)){
STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
Var0={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION("rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 0, 2) 
};
if(STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b")){
if(!func_306(PLAYER::PLAYER_PED_ID(), joaat("script_task_perform_sequence"))){
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 0, 2), 1f, 20000, Var0.f_2, 1056964608);
TASK::TASK_PLAY_ANIM_ADVANCED(0, "rcmnigel1b", "lockeddoor_tryopen", -1056.171f, 383.577f, 68.688f, 0f, 0f, 97.793f, 4f, -4f, -1, 7680, 0, 2, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_492, 1);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 0);
iLocal_249=1;
}
}}}
}}}}}
if(!iLocal_250){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1040.537f, 383.5369f, 67.96313f, -1041.792f, 383.5614f, 70.99346f, 1.2f, 0, 1, 0)){
if(PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())){
if(func_461(4)){
if((!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
if(func_460(PLAYER::PLAYER_PED_ID(), 277.6446f, 90f)){
if(!MISC::IS_AREA_OCCUPIED(-1042.099f, 382.6709f, 68.07068f, -1040.595f, 384.2608f, 71.07093f, 0, 1, 0, 0, 0, 0, 0)){
STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
Var0={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION("rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 0, 2) 
};
if(STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b")){
if(!func_306(PLAYER::PLAYER_PED_ID(), joaat("script_task_perform_sequence"))){
TASK::OPEN_SEQUENCE_TASK(&uLocal_318);
TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 0, 2), 1f, 20000, Var0.f_2, 1056964608);
TASK::TASK_PLAY_ANIM_ADVANCED(0, "rcmnigel1b", "lockeddoor_tryopen", -1040.55f, 382.85f, 68.85f, 0f, 0f, -90f, 4f, -4f, -1, 7680, 0, 2, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_318);
TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_318);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_318);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_492, 1);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 0);
iLocal_250=1;
}
}}}
}}}}}}
if(iLocal_247[0] && iLocal_247[1]){}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmnigel1b", "lockeddoor_tryopen", 3)){
if(ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "rcmnigel1b", "lockeddoor_tryopen") > 0.568f){
if(!iLocal_247[0]){
if(!func_3() && !func_279("NULL")){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_PTLG1", 7, 0, 0, 0)){
iLocal_247[0]=1;
}}}elseif(!iLocal_247[1]){
if(!func_3() && !func_279("NULL")){
if(func_324(&uLocal_58, "NIG1BAU", "NIG1B_PTLG2", 7, 0, 0, 0)){
iLocal_247[1]=1;
}}}}}
if(ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("interrupt"))){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
if(iLocal_492 !=joaat("weapon_unarmed") && iLocal_492 !=0){
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_492, 0)){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_492, 1);
}
iLocal_492=joaat("weapon_unarmed");
}}}

int func_460(int iParam0, float fParam1, float fParam2){
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

int func_461(int iParam0){
int iVar0;
iVar0=func_462(iParam0);
if(iVar0==1 || iVar0==4){
return 1;
}
return 0;
}


var func__462(int iParam0){
var uVar0;
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0])){
uVar0=OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_276[iParam0]);
}
return uVar0;
}


void func_463(){
if(bLocal_252){
if(iLocal_54 !=6 && iLocal_54 !=4){
func_464();
if(iLocal_267 !=0){
func_280(6);
}}}}


void func_464(){
}


void func_465(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
float fVar0;
int iVar1;
int iVar2;
int iVar3;
struct<2> Var4;
float fVar5;
float fVar6;
int iVar7;
int iVar8;
int iVar9;
var uVar10;
int iVar11;
if(Global_78813 !=6){
if(Global_78815==-1){
if(func_476(1, Param0)){
if(Global_78816==3){
fVar0=1.5f;
}else{
fVar0=2.5f;
}
if(fLocal_21 > fVar0){
Global_78815=MISC::GET_GAME_TIMER();
Local_22={
HUD::GET_HUD_COMPONENT_POSITION(15) 
};
fLocal_21=0f;
}else{
fLocal_21=(fLocal_21 + MISC::GET_FRAME_TIME());
}}else{
fLocal_21=0f;
}}else{
if(!func_476(0, Param0)){
Global_78815=(MISC::GET_GAME_TIMER() - 9000);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
iVar1=(MISC::GET_GAME_TIMER() - Global_78815);
if(iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT()){
iVar2=255;
if(iVar1 < 1000){
iVar2=ceil(((to_float(iVar1) / 1000f) * 255f));
}else{
iVar3=(9000 - iVar1);
if(iVar3 < 1000){
iVar2=ceil(((to_float(iVar3) / 1000f) * 255f));
}}
switch (Global_78813){
case 3:
case 5:
if(iParam1==1){
fVar5=0f;
fVar6=-0.07f;
}
elseif(iParam2==1){
fVar5=0f;
fVar6=-0.077f;
}
elseif(iParam3==1){
fVar5=0f;
fVar6=-0.05f;
}
elseif(iParam4==1){
fVar5=0f;
fVar6=-0.035f;
}
else{
fVar5=0f;
fVar6=-0.014f;
}
break;
default:
fVar5=0f;
fVar6=-0.014f;
break;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
HUD::SET_TEXT_FONT(1);
HUD::SET_TEXT_JUSTIFICATION(2);
iVar11=func_292();
if(Global_78816==1 && Global_78814==62){
iVar11=Global_113648.f_2365.f_539.f_4322;
}
switch (iVar11){
case 0:
HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
break;
case 1:
HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
break;
case 2:
HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
break;
default:
iVar7=240;
iVar8=200;
iVar9=80;
}
HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
HUD::SET_TEXT_DROP_SHADOW();
Var4={
func_467(Global_78814, Global_78816, iParam5) 
};
if(fVar6==-0.014f){
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
HUD::SET_TEXT_SCALE(0.67f, 0.67f);
if(!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF()){
fLocal_24=0.14f;
}else{
fLocal_24=0.17f;
}
if(fVar6==-0.014f){
if(func_466(&Var4) > fLocal_24){
if(HUD::IS_HUD_COMPONENT_ACTIVE(15)){
HUD::SET_HUD_COMPONENT_POSITION(15, Local_22.f_0, (Local_22.f_1 + fLocal_23));
Global_78818=1;
}}}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_78817==1){
func_243();
fLocal_21=0f;
}}else{
func_243();
fLocal_21=0f;
}}}}


float func_466(var uParam0){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(uParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


struct<2> func_467(int iParam0, int iParam1, int iParam2){
struct<2> Var0;
int iVar1;
StringCopy(&Var0, "", 8);
switch (iParam1){
case 1:
Var0={
func_475(iParam0) 
};
break;
case 7:
Var0={
func_227(iParam0) 
};
break;
case 3:
iVar1=iParam0;
switch (iVar1){
case 0:
Var0={
func_474(iParam2) 
};
break;
case 8:
Var0={
func_473(iParam2) 
};
break;
case 7:
Var0={
func_472(iParam2) 
};
break;
case 10:
Var0={
func_471(iParam2) 
};
break;
case 5:
Var0={
func_470(iParam2) 
};
break;
case 4:
Var0={
func_469(iParam2) 
};
break;
default:
StringCopy(&Var0, func_468(iVar1), 8);
break;
}
break;
default:
break;
}
return Var0;
}


char* func_468(int iParam0){
switch (iParam0){
case 0:
return "MG_BJUM";
break;
case 1:
return "MG_DART";
break;
case 2:
return "MG_GOLF";
break;
case 3:
return "MG_HUNT";
break;
case 4:
return "MG_OFFR";
break;
case 5:
return "MG_PILO";
break;
case 6:
return "MG_RMPG";
break;
case 7:
return "MG_SERA";
break;
case 8:
return "MG_SRAC";
break;
case 9:
return "MG_STRP";
break;
case 10:
return "MG_STNT";
break;
case 11:
return "MG_SHTR";
break;
case 12:
return "MG_TAXI";
break;
case 13:
return "MG_TENN";
break;
case 14:
return "MG_TOWI";
break;
case 15:
return "MG_TRFA";
break;
case 16:
return "MG_TRFG";
break;
case 17:
return "MG_TRIA";
break;
case 18:
return "MG_YOGA";
break;
case 19:
return "MG_CRCE";
break;
}
return "INVALID!";
}


struct<2> func_469(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGOR_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_470(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGFS_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_471(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGSP_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_472(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGSR_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_473(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || iParam0==3){}else{
StringCopy(&Var0, "MGCR_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_474(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGBJ_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_475(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "M_", 8);
StringConCat(&Var0, &(Global_91469[iParam0 /*34*/].f_8), 8);
if(iParam0==90){
switch (Global_113648.f_9087.f_99.f_205[7]){
case 1:
StringConCat(&Var0, "A", 8);
break;
case 2:
StringConCat(&Var0, "B", 8);
break;
default:
StringConCat(&Var0, "A", 8);
break;
}}
return Var0;
}

int func_476(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6){
if(((!func_478(0) || Global_78828) || Global_78817==1) || !CAM::IS_SCREEN_FADED_IN()){
return 0;
}
switch (Global_78813){
case 0:
if(MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1)){
Global_78813=3;
}else{
Global_78813=1;
}
break;
case 1:
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
Global_78813=2;
}
break;
case 2:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
Global_78813=4;
return 1;
}elseif(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
Global_78813=3;
}
break;
case 3:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
}else{
Global_78813=5;
return 1;
}
break;
case 4:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 1;
}elseif(iParam0==1){
Global_78813=5;
}
break;
case 5:
if((CUTSCENE::IS_CUTSCENE_PLAYING() || func_9(0)) || func_477(1)){
}else{
return 1;
}
break;
}
return 0;
}


bool func_477(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}

int func_478(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_479(iParam0)){
return 0;
}
return 1;
}


bool func_479(int iParam0){
return func_480(iParam0, Global_43257);
}

int func_480(int iParam0, int iParam1){
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


void func_481(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
if(func_482(iParam0)){
if(bParam3){
Param1.f_2=-200f;
}
ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
if(bParam4){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
}}}

int func_482(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_483(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_484(int iParam0, bool bParam1){
func_492(bParam1, 1);
if(bParam1){
func_485();
}
iLocal_55=iParam0;
bLocal_252=false;
if(func_47()){
iLocal_253=1;
}else{
iLocal_253=0;
}
if(!func_47()){
if(iLocal_55==0){
if(func_482(PLAYER::PLAYER_PED_ID())){
func_481(PLAYER::PLAYER_PED_ID(), Local_488, fLocal_295, 1, 1);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
func_11(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
iLocal_253=1;
}}}
func_1(iLocal_55);
}


void func_485(){
func_486(1, 0);
while (!func_62("NIGEL1B_MISSION_FAIL", 0)){
wait(0);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
if(!func_47()){
func_481(PLAYER::PLAYER_PED_ID(), Local_488, fLocal_295, 1, 1);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}}
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
func_62("NIGEL1B_MISSION_FAIL", 0);
while (func_3()){
func_24(0, 1);
wait(0);
}
func_25(&sLocal_451, &cLocal_457);
wait(0);
func_604();
func_280(0);
}


void func_486(bool bParam0, bool bParam1){
int iVar0;
HUD::CLEAR_PRINTS();
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}
func_24(1, 1);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
func_490(0);
func_6(0, 0);
func_71(0);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
CAM::SET_WIDESCREEN_BORDERS(0, 0);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
func_35(1, 1, 1, 1);
MISC::SET_TIME_SCALE(1f);
MISC::ENABLE_DISPATCH_SERVICE(2, 1);
MISC::ENABLE_DISPATCH_SERVICE(3, 1);
MISC::ENABLE_DISPATCH_SERVICE(4, 1);
MISC::ENABLE_DISPATCH_SERVICE(5, 1);
PED::SET_CREATE_RANDOM_COPS(1);
PED::CLEAR_PED_NON_CREATION_AREA();
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_317, 0);
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_467, Local_466, 1, 1);
if(func_603() || !bLocal_252){
VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_467, Local_466, 0);
MISC::CLEAR_AREA(Local_465, 35f, 1, 0, 0, 0);
MISC::CLEAR_AREA_OF_VEHICLES(Local_465, 27f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_PEDS(Local_465, 27f, 0);
}
iVar0=0;
while (iVar0 <=(6 - 1)){
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iVar0])){
OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_276[iVar0], 0);
}
iVar0++;
}
func_364(&uLocal_58, 2);
func_364(&uLocal_58, 3);
func_364(&uLocal_58, 4);
func_364(&uLocal_58, 5);
func_364(&uLocal_58, 6);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::STOP_CUTSCENE(0);
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1B_MAIN_MIX")){
AUDIO::STOP_AUDIO_SCENE("NIGEL_1B_MAIN_MIX");
}
func_62("NIGEL1B_MISSION_FAIL", 0);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
func_489(1, 1, 1);
PED::REMOVE_RELATIONSHIP_GROUP(iLocal_315);
func_488();
func_60();
func_49(bParam0);
func_487(bParam1);
}


void func_487(bool bParam0){
int iVar0;
STREAMING::REMOVE_ANIM_DICT("rcmnigel1b");
STREAMING::REMOVE_ANIM_DICT(&cLocal_425);
STREAMING::REMOVE_ANIM_DICT(&cLocal_434);
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_278)){
AUDIO::STOP_SOUND(uLocal_278);
}
AUDIO::RELEASE_SOUND_ID(uLocal_278);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
iVar0=0;
iVar0=0;
while (iVar0 < 2){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_306[iVar0 /*9*/].f_1);
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 3){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_305[iVar0 /*9*/].f_1);
iVar0++;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_298.f_1);
iVar0=0;
iVar0=0;
while (iVar0 < 2){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[iVar0 /*14*/].f_10);
iVar0++;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_307);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_310);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_308);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_309);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_296.f_10);
if(bParam0){
HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
}}


void func_488(){
int iVar0;
iVar0=0;
while (iVar0 < Local_35.f_0){
func_314(&(Local_35[iVar0 /*4*/]));
iVar0++;
}}


void func_489(bool bParam0, int iParam1, int iParam2){
bool bVar0;
bVar0=true;
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
while (bVar0){
bVar0=CUTSCENE::IS_CUTSCENE_ACTIVE();
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
CUTSCENE::STOP_CUTSCENE(0);
}
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
CUTSCENE::REMOVE_CUTSCENE();
}
if(CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING()){
bVar0=false;
}
wait(0);
}
if(bParam0){
func_35(iParam1, iParam2, 1, 1);
}}}


void func_490(bool bParam0){
if(bParam0){
func_491();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_9(0)){
func_4(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_491(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_492(bool bParam0, bool bParam1){
if(bParam0){
func_489(0, 1, 1);
}
if(!CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_OUT(0);
}
func_493(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}


void func_493(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10){
int iVar0;
iVar0=PLAYER::GET_PLAYER_INDEX();
if(PLAYER::IS_PLAYER_PLAYING(iVar0)){
func_495(0);
if(bParam7){
PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
}
if(bParam6){
switch (func_292()){
case 0:
if(func_219(PLAYER::PLAYER_PED_ID(), 8, 15)){
func_105(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_219(PLAYER::PLAYER_PED_ID(), 9, 6)){
func_105(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
case 1:
if(func_219(PLAYER::PLAYER_PED_ID(), 8, 1) || func_219(PLAYER::PLAYER_PED_ID(), 8, 10)){
func_105(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
case 2:
if(func_219(PLAYER::PLAYER_PED_ID(), 8, 4)){
func_105(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
}}
if(iParam4==1){
MISC::CLEAR_AREA_OF_PEDS(func_494(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
}
if(iParam5==1){
MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
}
if(bParam8){
FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
}
MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
if(bParam10){
HUD::DISPLAY_RADAR(0);
HUD::DISPLAY_HUD(0);
}
HUD::CLEAR_PRINTS();
if(iParam9==1){
HUD::CLEAR_HELP(1);
}
if(iParam1==1){
CAM::SET_WIDESCREEN_BORDERS(1, 0);
}
if(iParam2==1){
iLocal_34=0;
if(func_482(PLAYER::PLAYER_PED_ID())){
iLocal_34=WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
}}
if(iParam3==1){
func_33(500, 0);
}}}


Vector3 func__494(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


void func_495(bool bParam0){
int iVar0;
iVar0=PLAYER::GET_PLAYER_INDEX();
if(!PLAYER::IS_PLAYER_DEAD(iVar0)){
if(bParam0){
}
PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
}
func_36(1, 1, 0, 0, 0, 0, 0);
}


void func_496(struct<3> Param0, float fParam1, int iParam2, int iParam3){
if(func_603()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::CLEAR_BIT(&(Global_100681.f_20), 2);
MISC::SET_GAME_PAUSED(1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}
Global_100677={
Param0 
};
Global_100680=fParam1;
Global_100676=1;
if(iParam2==1){
MISC::SET_BIT(&(Global_100681.f_20), 14);
}else{
MISC::CLEAR_BIT(&(Global_100681.f_20), 14);
}
if(iParam3==1){
MISC::SET_BIT(&(Global_100681.f_20), 24);
}else{
MISC::CLEAR_BIT(&(Global_100681.f_20), 24);
}
func_46(1);
}}

int func_497(){
if(!Global_100681==10 && !Global_100681==9){
return 0;
}
return Global_100681.f_2;
}


void func_498(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11){
int iVar0;
iVar0=1;
if(!func_603() || !func_602()){
iVar0=0;
}
if(iVar0==1){
if(!func_599(iParam4, iParam5, iParam6, iParam11)){
iVar0=0;
}}
if(iVar0==1){
func_597();
while (!func_596()){
wait(0);
}
*iParam0=func_571(Param1, fParam2);
}elseif(iParam7==1){
if(func_413(Param1, 0f, 0f, 0f, 0)){
Param1={
Global_107196.f_2890 
};
fParam2=Global_107196.f_2890.f_6;
}
MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
func_565(Param1, 5f, 0);
if(func_223(iParam10)){
func_564(iParam10, 0);
while (!func_499(iParam0, iParam10, Param1, fParam2, 1, 0)){
wait(0);
}}else{
STREAMING::REQUEST_MODEL(iParam8);
while (!STREAMING::HAS_MODEL_LOADED(iParam8)){
wait(0);
}
*iParam0=VEHICLE::CREATE_VEHICLE(iParam8, Param1, fParam2, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, 0)){
if(iParam9==0){
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
}elseif(iParam9 > 0){
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam9, iParam9);
}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam8);
}}
if(iParam3==1){
if(((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, 0)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
}}}

int func_499(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5){
var uVar0;
var uVar1;
struct<97> Var2;
int iVar3;
int iVar4;
bool bVar5;
char cVar6[16];
int iVar7;
if(func_223(iParam1)){
Var2.f_11=12;
Var2.f_31=49;
Var2.f_81=2;
func_389(iParam1, &Var2, iParam5);
if(Var2.f_0==0){
return 1;
}
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(ENTITY::GET_ENTITY_MODEL(*iParam0) !=Var2.f_0){
}
return 1;
}
if((iParam1==0 && !Global_113648.f_2365.f_539.f_4316) && Global_113648.f_9087.f_99.f_58[131]){
Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]=0;
}
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]==Var2.f_0){
STREAMING::REQUEST_MODEL(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar3=0;
while (iVar3 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
iVar3++;
}
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
}
if(func_563(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}}}
func_556(iParam0, &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_554(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
}
func_553(*iParam0, iParam1);
return 1;
}}elseif(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]==Var2.f_0){
STREAMING::REQUEST_MODEL(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar4=0;
while (iVar4 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
iVar4++;
}
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
}
if(func_563(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}}}
func_556(iParam0, &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_554(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
}
func_553(*iParam0, iParam1);
return 1;
}}else{
STREAMING::REQUEST_MODEL(Var2.f_0);
if(STREAMING::HAS_MODEL_LOADED(Var2.f_0)){
bVar5=true;
*iParam0=VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar7=0;
while (iVar7 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
iVar7++;
}
if(Var2.f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
}
if(func_563(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
if(Var2.f_26 >=0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var2.f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var2.f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var2.f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var2.f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
}
if(Var2.f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Var2.f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
}}}
func_556(iParam0, &(Var2.f_31), &(Var2.f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==1){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bagger") && !Global_113648.f_9087.f_99.f_58[118]){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
bVar5=false;
}}elseif(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_554(iParam0);
}}elseif(((iParam1==0 && !Global_113648.f_2365.f_539.f_4316) && Global_113648.f_9087.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("tailgater")){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
Global_113648.f_2365.f_539.f_4316=1;
func_500(iParam1, iParam0, 0, 1);
}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
}
if(bVar5){
func_553(*iParam0, iParam1);
}
return 1;
}}}
return 0;
}


void func_500(int iParam0, int iParam1, int iParam2, bool bParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
if((func_223(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0)){
if(iParam2 > Global_113648.f_2365.f_539.f_2407){
return;
}
if(iParam2==0){
}elseif(iParam2==1){
}elseif(iParam2==2){
}elseif(iParam2==3){
func_538(*iParam1, iParam0);
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam1) !=0){
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
}
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/]=ENTITY::GET_ENTITY_MODEL(*iParam1);
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1)){
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1=ENTITY::GET_ENTITY_MODEL(iVar1);
}
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2=VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3=ENTITY::GET_ENTITY_HEALTH(*iParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0)){
iVar2=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
if(iVar2==0 || iVar2==5){
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=1;
}else{
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}}else{
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25=AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
StringCopy(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88=VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87=VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89=VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90=VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}
Global_113648.f_2365.f_539.f_4317[iParam0]=10;
if(VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >=0 && func_504(*iParam1, 0, &uVar0)){
func_392(iParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
if(bParam3){
Global_113648.f_20120[iParam0 /*43*/].f_40=1;
Global_113648.f_20120[iParam0 /*43*/]=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
Global_113648.f_20120[iParam0 /*43*/].f_3=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
Global_113648.f_20120[iParam0 /*43*/].f_4=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
Global_113648.f_20120[iParam0 /*43*/].f_5=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
Global_113648.f_20120[iParam0 /*43*/].f_6=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
Global_113648.f_20120[iParam0 /*43*/].f_10=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
Global_113648.f_20120[iParam0 /*43*/].f_16=!Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
Global_113648.f_20120[iParam0 /*43*/].f_19={
Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 
};
Global_113648.f_20120[iParam0 /*43*/].f_23=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
Global_113648.f_20120[iParam0 /*43*/].f_7=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
Global_113648.f_20120[iParam0 /*43*/].f_8=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
Global_113648.f_20120[iParam0 /*43*/].f_9=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
Global_113648.f_20120[iParam0 /*43*/].f_11=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
Global_113648.f_20120[iParam0 /*43*/].f_12=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
Global_113648.f_20120[iParam0 /*43*/].f_13=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
Global_113648.f_20120[iParam0 /*43*/].f_14=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
Global_113648.f_20120[iParam0 /*43*/].f_15=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
Global_113648.f_20120[iParam0 /*43*/].f_18=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
Global_113648.f_20120[iParam0 /*43*/].f_17=Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
Global_113648.f_20120[iParam0 /*43*/].f_24=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_25=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_26=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_27=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_28=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_29=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_30=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
Global_113648.f_20120[iParam0 /*43*/].f_32=VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
Global_113648.f_20120[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
Global_113648.f_20120[iParam0 /*43*/].f_33[1]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
Global_113648.f_20120[iParam0 /*43*/].f_33[2]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
Global_113648.f_20120[iParam0 /*43*/].f_33[3]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
Global_113648.f_20120[iParam0 /*43*/].f_33[4]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
Global_113648.f_20120[iParam0 /*43*/].f_39=VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
Global_113648.f_20120[iParam0 /*43*/].f_31=func_503(*iParam1);
Global_113648.f_20120[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
if(iVar4==0){
iVar3=0;
}elseif(iVar4==1){
iVar3=1;
}elseif(iVar4==3){
iVar3=2;
}elseif(iVar4==4){
iVar3=3;
}elseif(iVar4==5){
iVar3=4;
}else{
iVar3=-1;
}
func_501(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113648.f_20120[iParam0 /*43*/].f_1));
VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
if(iVar4==0){
iVar3=0;
}elseif(iVar4==1){
iVar3=1;
}elseif(iVar4==3){
iVar3=2;
}elseif(iVar4==4){
iVar3=3;
}elseif(iVar4==5){
iVar3=4;
}else{
iVar3=-1;
}
func_501(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113648.f_20120[iParam0 /*43*/].f_2));
}}}}

int func_501(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
iVar0=0;
while (func_502(iVar0, &sVar2, &iVar1, &iVar3, &iVar4)){
if((iParam0==iVar3 && (!bParam3 || iParam1==iVar4)) && ((iParam2==iVar1 || iParam2==-1) || iParam2==255)){
*uParam4=iVar0;
return 1;
}
iVar0++;
}
iParam0=-1;
iParam1=-1;
*uParam4=-1;
return 0;
}


bool func_502(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4){
*uParam2=-1;
*uParam3=-1;
*uParam4=-1;
switch (iParam0){
case 0:
StringCopy(sParam1, "BR BLACK_STEEL", 16);
*uParam2=3;
*uParam3=118;
*uParam4=3;
break;
case 1:
StringCopy(sParam1, "BLACK_GRAPHITE", 16);
*uParam2=0;
*uParam3=147;
*uParam4=4;
break;
case 2:
StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
*uParam2=1;
*uParam3=96;
*uParam4=0;
break;
case 3:
StringCopy(sParam1, "PURPLE", 16);
*uParam2=0;
*uParam3=71;
*uParam4=145;
break;
case 4:
StringCopy(sParam1, "HOT PINK", 16);
*uParam2=0;
*uParam3=135;
*uParam4=135;
break;
case 5:
StringCopy(sParam1, "FORMULA_RED", 16);
*uParam2=0;
*uParam3=29;
*uParam4=28;
break;
case 6:
StringCopy(sParam1, "BLUE", 16);
*uParam2=0;
*uParam3=64;
*uParam4=68;
break;
case 7:
StringCopy(sParam1, "ULTRA_BLUE", 16);
*uParam2=1;
*uParam3=70;
*uParam4=0;
break;
case 8:
StringCopy(sParam1, "RACING_GREEN", 16);
*uParam2=1;
*uParam3=50;
*uParam4=0;
break;
case 9:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=2;
*uParam3=55;
*uParam4=0;
break;
case 10:
StringCopy(sParam1, "RACE_YELLOW", 16);
*uParam2=1;
*uParam3=89;
*uParam4=0;
break;
case 11:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=1;
*uParam3=38;
*uParam4=0;
break;
case 12:
StringCopy(sParam1, "GOLD", 16);
*uParam2=0;
*uParam3=37;
*uParam4=106;
break;
case 13:
StringCopy(sParam1, "SILVER", 16);
*uParam2=0;
*uParam3=4;
*uParam4=111;
break;
case 14:
StringCopy(sParam1, "CHROME", 16);
*uParam2=4;
*uParam3=120;
*uParam4=0;
break;
case 15:
StringCopy(sParam1, "WHITE", 16);
*uParam2=1;
*uParam3=111;
*uParam4=0;
break;
case 16:
StringCopy(sParam1, "BLACK", 16);
*uParam2=0;
*uParam3=0;
*uParam4=10;
break;
case 17:
StringCopy(sParam1, "GRAPHITE", 16);
*uParam2=0;
*uParam3=1;
*uParam4=5;
break;
case 18:
StringCopy(sParam1, "ANTHR_BLACK", 16);
*uParam2=0;
*uParam3=11;
*uParam4=2;
break;
case 19:
StringCopy(sParam1, "BLACK_STEEL", 16);
*uParam2=0;
*uParam3=2;
*uParam4=5;
break;
case 20:
StringCopy(sParam1, "DARK_SILVER", 16);
*uParam2=0;
*uParam3=3;
*uParam4=6;
break;
case 21:
StringCopy(sParam1, "BLUE_SILVER", 16);
*uParam2=0;
*uParam3=5;
*uParam4=111;
break;
case 22:
StringCopy(sParam1, "ROLLED_STEEL", 16);
*uParam2=0;
*uParam3=6;
*uParam4=4;
break;
case 23:
StringCopy(sParam1, "SHADOW_SILVER", 16);
*uParam2=0;
*uParam3=7;
*uParam4=5;
break;
case 24:
StringCopy(sParam1, "STONE_SILVER", 16);
*uParam2=0;
*uParam3=8;
*uParam4=5;
break;
case 25:
StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
*uParam2=0;
*uParam3=9;
*uParam4=7;
break;
case 26:
StringCopy(sParam1, "CAST_IRON_SIL", 16);
*uParam2=0;
*uParam3=10;
*uParam4=7;
break;
case 27:
StringCopy(sParam1, "RED", 16);
*uParam2=0;
*uParam3=27;
*uParam4=36;
break;
case 28:
StringCopy(sParam1, "TORINO_RED", 16);
*uParam2=0;
*uParam3=28;
*uParam4=28;
break;
case 29:
StringCopy(sParam1, "LAVA_RED", 16);
*uParam2=0;
*uParam3=150;
*uParam4=42;
break;
case 30:
StringCopy(sParam1, "BLAZE_RED", 16);
*uParam2=0;
*uParam3=30;
*uParam4=36;
break;
case 31:
StringCopy(sParam1, "GRACE_RED", 16);
*uParam2=0;
*uParam3=31;
*uParam4=27;
break;
case 32:
StringCopy(sParam1, "GARNET_RED", 16);
*uParam2=0;
*uParam3=32;
*uParam4=25;
break;
case 33:
StringCopy(sParam1, "SUNSET_RED", 16);
*uParam2=0;
*uParam3=33;
*uParam4=47;
break;
case 34:
StringCopy(sParam1, "CABERNET_RED", 16);
*uParam2=0;
*uParam3=34;
*uParam4=47;
break;
case 35:
StringCopy(sParam1, "WINE_RED", 16);
*uParam2=0;
*uParam3=143;
*uParam4=31;
break;
case 36:
StringCopy(sParam1, "CANDY_RED", 16);
*uParam2=0;
*uParam3=35;
*uParam4=25;
break;
case 37:
StringCopy(sParam1, "PINK", 16);
*uParam2=0;
*uParam3=137;
*uParam4=3;
break;
case 38:
StringCopy(sParam1, "SALMON_PINK", 16);
*uParam2=0;
*uParam3=136;
*uParam4=5;
break;
case 39:
StringCopy(sParam1, "SUNRISE_ORANGE", 16);
*uParam2=0;
*uParam3=36;
*uParam4=26;
break;
case 40:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=0;
*uParam3=38;
*uParam4=37;
break;
case 41:
StringCopy(sParam1, "BRIGHT_ORANGE", 16);
*uParam2=0;
*uParam3=138;
*uParam4=89;
break;
case 42:
StringCopy(sParam1, "BRONZE", 16);
*uParam2=0;
*uParam3=90;
*uParam4=102;
break;
case 43:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=0;
*uParam3=88;
*uParam4=88;
break;
case 44:
StringCopy(sParam1, "RACE_YELLOW", 16);
*uParam2=0;
*uParam3=89;
*uParam4=88;
break;
case 45:
StringCopy(sParam1, "FLUR_YELLOW", 16);
*uParam2=0;
*uParam3=91;
*uParam4=91;
break;
case 46:
StringCopy(sParam1, "DARK_GREEN", 16);
*uParam2=0;
*uParam3=49;
*uParam4=52;
break;
case 47:
StringCopy(sParam1, "RACING_GREEN", 16);
*uParam2=0;
*uParam3=50;
*uParam4=53;
break;
case 48:
StringCopy(sParam1, "SEA_GREEN", 16);
*uParam2=0;
*uParam3=51;
*uParam4=66;
break;
case 49:
StringCopy(sParam1, "OLIVE_GREEN", 16);
*uParam2=0;
*uParam3=52;
*uParam4=59;
break;
case 50:
StringCopy(sParam1, "BRIGHT_GREEN", 16);
*uParam2=0;
*uParam3=53;
*uParam4=59;
break;
case 51:
StringCopy(sParam1, "PETROL_GREEN", 16);
*uParam2=0;
*uParam3=54;
*uParam4=60;
break;
case 52:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=0;
*uParam3=92;
*uParam4=92;
break;
case 53:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=0;
*uParam3=141;
*uParam4=73;
break;
case 54:
StringCopy(sParam1, "GALAXY_BLUE", 16);
*uParam2=0;
*uParam3=61;
*uParam4=63;
break;
case 55:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=0;
*uParam3=62;
*uParam4=68;
break;
case 56:
StringCopy(sParam1, "SAXON_BLUE", 16);
*uParam2=0;
*uParam3=63;
*uParam4=87;
break;
case 57:
StringCopy(sParam1, "MARINER_BLUE", 16);
*uParam2=0;
*uParam3=65;
*uParam4=87;
break;
case 58:
StringCopy(sParam1, "HARBOR_BLUE", 16);
*uParam2=0;
*uParam3=66;
*uParam4=60;
break;
case 59:
StringCopy(sParam1, "DIAMOND_BLUE", 16);
*uParam2=0;
*uParam3=67;
*uParam4=67;
break;
case 60:
StringCopy(sParam1, "SURF_BLUE", 16);
*uParam2=0;
*uParam3=68;
*uParam4=68;
break;
case 61:
StringCopy(sParam1, "NAUTICAL_BLUE", 16);
*uParam2=0;
*uParam3=69;
*uParam4=74;
break;
case 62:
StringCopy(sParam1, "RACING_BLUE", 16);
*uParam2=0;
*uParam3=73;
*uParam4=73;
break;
case 63:
StringCopy(sParam1, "ULTRA_BLUE", 16);
*uParam2=0;
*uParam3=70;
*uParam4=70;
break;
case 64:
StringCopy(sParam1, "LIGHT_BLUE", 16);
*uParam2=0;
*uParam3=74;
*uParam4=74;
break;
case 65:
StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
*uParam2=0;
*uParam3=96;
*uParam4=95;
break;
case 66:
StringCopy(sParam1, "BISON_BROWN", 16);
*uParam2=0;
*uParam3=101;
*uParam4=95;
break;
case 67:
StringCopy(sParam1, "CREEK_BROWN", 16);
*uParam2=0;
*uParam3=95;
*uParam4=97;
break;
case 68:
StringCopy(sParam1, "UMBER_BROWN", 16);
*uParam2=0;
*uParam3=94;
*uParam4=104;
break;
case 69:
StringCopy(sParam1, "MAPLE_BROWN", 16);
*uParam2=0;
*uParam3=97;
*uParam4=98;
break;
case 70:
StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
*uParam2=0;
*uParam3=103;
*uParam4=104;
break;
case 71:
StringCopy(sParam1, "SIENNA_BROWN", 16);
*uParam2=0;
*uParam3=104;
*uParam4=104;
break;
case 72:
StringCopy(sParam1, "SADDLE_BROWN", 16);
*uParam2=0;
*uParam3=98;
*uParam4=95;
break;
case 73:
StringCopy(sParam1, "MOSS_BROWN", 16);
*uParam2=0;
*uParam3=100;
*uParam4=100;
break;
case 74:
StringCopy(sParam1, "WOODBEECH_BROWN", 16);
*uParam2=0;
*uParam3=102;
*uParam4=105;
break;
case 75:
StringCopy(sParam1, "STRAW_BROWN", 16);
*uParam2=0;
*uParam3=99;
*uParam4=106;
break;
case 76:
StringCopy(sParam1, "SANDY_BROWN", 16);
*uParam2=0;
*uParam3=105;
*uParam4=105;
break;
case 77:
StringCopy(sParam1, "BLEECHED_BROWN", 16);
*uParam2=0;
*uParam3=106;
*uParam4=106;
break;
case 78:
StringCopy(sParam1, "SPIN_PURPLE", 16);
*uParam2=0;
*uParam3=72;
*uParam4=64;
break;
case 79:
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=0;
*uParam3=146;
*uParam4=145;
break;
case 80:
StringCopy(sParam1, "BRIGHT_PURPLE", 16);
*uParam2=0;
*uParam3=145;
*uParam4=74;
break;
case 81:
StringCopy(sParam1, "CREAM", 16);
*uParam2=0;
*uParam3=107;
*uParam4=107;
break;
case 82:
StringCopy(sParam1, "WHITE", 16);
*uParam2=0;
*uParam3=111;
*uParam4=0;
break;
case 83:
StringCopy(sParam1, "FROST_WHITE", 16);
*uParam2=0;
*uParam3=112;
*uParam4=0;
break;
case 84:
StringCopy(sParam1, "BLACK", 16);
*uParam2=1;
*uParam3=0;
*uParam4=0;
break;
case 85:
StringCopy(sParam1, "BLACK_GRAPHITE", 16);
*uParam2=1;
*uParam3=147;
*uParam4=0;
break;
case 86:
StringCopy(sParam1, "GRAPHITE", 16);
*uParam2=1;
*uParam3=1;
*uParam4=0;
break;
case 87:
StringCopy(sParam1, "ANTHR_BLACK", 16);
*uParam2=1;
*uParam3=11;
*uParam4=0;
break;
case 88:
StringCopy(sParam1, "BLACK_STEEL", 16);
*uParam2=1;
*uParam3=2;
*uParam4=0;
break;
case 89:
StringCopy(sParam1, "DARK_SILVER", 16);
*uParam2=1;
*uParam3=3;
*uParam4=2;
break;
case 90:
StringCopy(sParam1, "SILVER", 16);
*uParam2=1;
*uParam3=4;
*uParam4=4;
break;
case 91:
StringCopy(sParam1, "BLUE_SILVER", 16);
*uParam2=1;
*uParam3=5;
*uParam4=5;
break;
case 92:
StringCopy(sParam1, "ROLLED_STEEL", 16);
*uParam2=1;
*uParam3=6;
*uParam4=0;
break;
case 93:
StringCopy(sParam1, "SHADOW_SILVER", 16);
*uParam2=1;
*uParam3=7;
*uParam4=0;
break;
case 94:
StringCopy(sParam1, "STONE_SILVER", 16);
*uParam2=1;
*uParam3=8;
*uParam4=0;
break;
case 95:
StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
*uParam2=1;
*uParam3=9;
*uParam4=0;
break;
case 96:
StringCopy(sParam1, "CAST_IRON_SIL", 16);
*uParam2=1;
*uParam3=10;
*uParam4=0;
break;
case 97:
StringCopy(sParam1, "RED", 16);
*uParam2=1;
*uParam3=27;
*uParam4=0;
break;
case 98:
StringCopy(sParam1, "TORINO_RED", 16);
*uParam2=1;
*uParam3=28;
*uParam4=0;
break;
case 99:
StringCopy(sParam1, "FORMULA_RED", 16);
*uParam2=1;
*uParam3=29;
*uParam4=0;
break;
case 100:
StringCopy(sParam1, "LAVA_RED", 16);
*uParam2=1;
*uParam3=150;
*uParam4=0;
break;
case 101:
StringCopy(sParam1, "BLAZE_RED", 16);
*uParam2=1;
*uParam3=30;
*uParam4=0;
break;
case 102:
StringCopy(sParam1, "GRACE_RED", 16);
*uParam2=1;
*uParam3=31;
*uParam4=0;
break;
case 103:
StringCopy(sParam1, "GARNET_RED", 16);
*uParam2=1;
*uParam3=32;
*uParam4=0;
break;
case 104:
StringCopy(sParam1, "SUNSET_RED", 16);
*uParam2=1;
*uParam3=33;
*uParam4=0;
break;
case 105:
StringCopy(sParam1, "CABERNET_RED", 16);
*uParam2=1;
*uParam3=34;
*uParam4=0;
break;
case 106:
StringCopy(sParam1, "WINE_RED", 16);
*uParam2=1;
*uParam3=143;
*uParam4=0;
break;
case 107:
StringCopy(sParam1, "CANDY_RED", 16);
*uParam2=1;
*uParam3=35;
*uParam4=0;
break;
case 108:
StringCopy(sParam1, "HOT PINK", 16);
*uParam2=1;
*uParam3=135;
*uParam4=0;
break;
case 109:
StringCopy(sParam1, "PINK", 16);
*uParam2=1;
*uParam3=137;
*uParam4=0;
break;
case 110:
StringCopy(sParam1, "SALMON_PINK", 16);
*uParam2=1;
*uParam3=136;
*uParam4=0;
break;
case 111:
StringCopy(sParam1, "SUNRISE_ORANGE", 16);
*uParam2=1;
*uParam3=36;
*uParam4=0;
break;
case 112:
StringCopy(sParam1, "BRIGHT_ORANGE", 16);
*uParam2=1;
*uParam3=138;
*uParam4=0;
break;
case 113:
StringCopy(sParam1, "GOLD", 16);
*uParam2=1;
*uParam3=99;
*uParam4=99;
break;
case 114:
StringCopy(sParam1, "BRONZE", 16);
*uParam2=1;
*uParam3=90;
*uParam4=102;
break;
case 115:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=1;
*uParam3=88;
*uParam4=0;
break;
case 116:
StringCopy(sParam1, "FLUR_YELLOW", 16);
*uParam2=1;
*uParam3=91;
*uParam4=0;
break;
case 117:
StringCopy(sParam1, "DARK_GREEN", 16);
*uParam2=1;
*uParam3=49;
*uParam4=0;
break;
case 118:
StringCopy(sParam1, "SEA_GREEN", 16);
*uParam2=1;
*uParam3=51;
*uParam4=0;
break;
case 119:
StringCopy(sParam1, "OLIVE_GREEN", 16);
*uParam2=1;
*uParam3=52;
*uParam4=0;
break;
case 120:
StringCopy(sParam1, "BRIGHT_GREEN", 16);
*uParam2=1;
*uParam3=53;
*uParam4=0;
break;
case 121:
StringCopy(sParam1, "PETROL_GREEN", 16);
*uParam2=1;
*uParam3=54;
*uParam4=0;
break;
case 122:
StringCopy(sParam1, "LIME_GREEN", 16);
*uParam2=1;
*uParam3=92;
*uParam4=0;
break;
case 123:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=1;
*uParam3=141;
*uParam4=0;
break;
case 124:
StringCopy(sParam1, "GALAXY_BLUE", 16);
*uParam2=1;
*uParam3=61;
*uParam4=0;
break;
case 125:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=1;
*uParam3=62;
*uParam4=0;
break;
case 126:
StringCopy(sParam1, "SAXON_BLUE", 16);
*uParam2=1;
*uParam3=63;
*uParam4=0;
break;
case 127:
StringCopy(sParam1, "BLUE", 16);
*uParam2=1;
*uParam3=64;
*uParam4=0;
break;
case 128:
StringCopy(sParam1, "MARINER_BLUE", 16);
*uParam2=1;
*uParam3=65;
*uParam4=0;
break;
case 129:
StringCopy(sParam1, "HARBOR_BLUE", 16);
*uParam2=1;
*uParam3=66;
*uParam4=0;
break;
case 130:
StringCopy(sParam1, "DIAMOND_BLUE", 16);
*uParam2=1;
*uParam3=67;
*uParam4=0;
break;
case 131:
StringCopy(sParam1, "SURF_BLUE", 16);
*uParam2=1;
*uParam3=68;
*uParam4=0;
break;
case 132:
StringCopy(sParam1, "NAUTICAL_BLUE", 16);
*uParam2=1;
*uParam3=69;
*uParam4=0;
break;
case 133:
StringCopy(sParam1, "RACING_BLUE", 16);
*uParam2=1;
*uParam3=73;
*uParam4=0;
break;
case 134:
StringCopy(sParam1, "LIGHT_BLUE", 16);
*uParam2=1;
*uParam3=74;
*uParam4=0;
break;
case 135:
StringCopy(sParam1, "BISON_BROWN", 16);
*uParam2=1;
*uParam3=101;
*uParam4=0;
break;
case 136:
StringCopy(sParam1, "CREEK_BROWN", 16);
*uParam2=1;
*uParam3=95;
*uParam4=0;
break;
case 137:
StringCopy(sParam1, "UMBER_BROWN", 16);
*uParam2=1;
*uParam3=94;
*uParam4=0;
break;
case 138:
StringCopy(sParam1, "MAPLE_BROWN", 16);
*uParam2=1;
*uParam3=97;
*uParam4=0;
break;
case 139:
StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
*uParam2=1;
*uParam3=103;
*uParam4=0;
break;
case 140:
StringCopy(sParam1, "SIENNA_BROWN", 16);
*uParam2=1;
*uParam3=104;
*uParam4=0;
break;
case 141:
StringCopy(sParam1, "SADDLE_BROWN", 16);
*uParam2=1;
*uParam3=98;
*uParam4=0;
break;
case 142:
StringCopy(sParam1, "MOSS_BROWN", 16);
*uParam2=1;
*uParam3=100;
*uParam4=0;
break;
case 143:
StringCopy(sParam1, "WOODBEECH_BROWN", 16);
*uParam2=1;
*uParam3=102;
*uParam4=0;
break;
case 144:
StringCopy(sParam1, "STRAW_BROWN", 16);
*uParam2=1;
*uParam3=99;
*uParam4=0;
break;
case 145:
StringCopy(sParam1, "SANDY_BROWN", 16);
*uParam2=1;
*uParam3=105;
*uParam4=0;
break;
case 146:
StringCopy(sParam1, "BLEECHED_BROWN", 16);
*uParam2=1;
*uParam3=106;
*uParam4=0;
break;
case 147:
StringCopy(sParam1, "PURPLE", 16);
*uParam2=1;
*uParam3=71;
*uParam4=0;
break;
case 148:
StringCopy(sParam1, "SPIN_PURPLE", 16);
*uParam2=1;
*uParam3=72;
*uParam4=0;
break;
case 149:
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=1;
*uParam3=142;
*uParam4=0;
break;
case 150:
StringCopy(sParam1, "BRIGHT_PURPLE", 16);
*uParam2=1;
*uParam3=145;
*uParam4=0;
break;
case 151:
StringCopy(sParam1, "CREAM", 16);
*uParam2=1;
*uParam3=107;
*uParam4=0;
break;
case 152:
StringCopy(sParam1, "FROST_WHITE", 16);
*uParam2=1;
*uParam3=112;
*uParam4=0;
break;
case 153:
StringCopy(sParam1, "BLACK", 16);
*uParam2=2;
*uParam3=12;
*uParam4=0;
break;
case 154:
StringCopy(sParam1, "GREY", 16);
*uParam2=2;
*uParam3=13;
*uParam4=0;
break;
case 155:
StringCopy(sParam1, "LIGHT_GREY", 16);
*uParam2=2;
*uParam3=14;
*uParam4=0;
break;
case 156:
StringCopy(sParam1, "WHITE", 16);
*uParam2=2;
*uParam3=131;
*uParam4=0;
break;
case 157:
StringCopy(sParam1, "BLUE", 16);
*uParam2=2;
*uParam3=83;
*uParam4=0;
break;
case 158:
StringCopy(sParam1, "DARK_BLUE", 16);
*uParam2=2;
*uParam3=82;
*uParam4=0;
break;
case 159:
StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
*uParam2=2;
*uParam3=84;
*uParam4=0;
break;
case 160:
StringCopy(sParam1, "MIGHT_PURPLE", 16);
*uParam2=2;
*uParam3=149;
*uParam4=0;
break;
case 161:
StringCopy(sParam1, "Purple", 16);
*uParam2=2;
*uParam3=148;
*uParam4=0;
break;
case 162:
StringCopy(sParam1, "RED", 16);
*uParam2=2;
*uParam3=39;
*uParam4=0;
break;
case 163:
StringCopy(sParam1, "DARK_RED", 16);
*uParam2=2;
*uParam3=40;
*uParam4=0;
break;
case 164:
StringCopy(sParam1, "ORANGE", 16);
*uParam2=2;
*uParam3=41;
*uParam4=0;
break;
case 165:
StringCopy(sParam1, "YELLOW", 16);
*uParam2=2;
*uParam3=42;
*uParam4=0;
break;
case 166:
StringCopy(sParam1, "GREEN", 16);
*uParam2=2;
*uParam3=128;
*uParam4=0;
break;
case 167:
StringCopy(sParam1, "MATTE_FOR", 16);
*uParam2=2;
*uParam3=151;
*uParam4=0;
break;
case 168:
StringCopy(sParam1, "MATTE_FOIL", 16);
*uParam2=2;
*uParam3=155;
*uParam4=0;
break;
case 169:
StringCopy(sParam1, "MATTE_OD", 16);
*uParam2=2;
*uParam3=152;
*uParam4=0;
break;
case 170:
StringCopy(sParam1, "MATTE_DIRT", 16);
*uParam2=2;
*uParam3=153;
*uParam4=0;
break;
case 171:
StringCopy(sParam1, "MATTE_DESERT", 16);
*uParam2=2;
*uParam3=154;
*uParam4=0;
break;
case 172:
StringCopy(sParam1, "BR_STEEL", 16);
*uParam2=3;
*uParam3=117;
*uParam4=18;
break;
case 173:
StringCopy(sParam1, "BR_ALUMINIUM", 16);
*uParam2=3;
*uParam3=119;
*uParam4=5;
break;
case 174:
StringCopy(sParam1, "GOLD_P", 16);
*uParam2=3;
*uParam3=158;
*uParam4=160;
break;
case 175:
StringCopy(sParam1, "GOLD_S", 16);
*uParam2=3;
*uParam3=159;
*uParam4=160;
break;
}
return *uParam2 !=-1;
}


float func_503(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
float fVar6;
iVar0=100000;
iVar1=65000;
iVar2=50000;
iVar3=20000;
iVar4=20000;
iVar5=iVar4;
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >=0){
if(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==3){
iVar5=iVar0;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==1){
iVar5=iVar1;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==2){
iVar5=iVar2;
}elseif(VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0)==0){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
iVar5=iVar3;
}else{
iVar5=iVar4;
}}}
fVar6=(to_float(iVar5) / to_float(iVar4));
return fVar6;
}

int func_504(int iParam0, bool bParam1, var uParam2){
int iVar0;
bool bVar1;
*uParam2=0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((!func_536(iVar0, bParam1, uParam2) && !func_535(PLAYER::PLAYER_ID())) && !func_516(iParam0)){
return 0;
}
if(func_535(PLAYER::PLAYER_ID())){
if(func_514(iVar0)){
return 1;
}else{
return 0;
}}
bVar1=false;
if(func_513(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))){
bVar1=true;
}
if(((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_510(iParam0)) && !bVar1) && !(func_509(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_506(PLAYER::PLAYER_ID()))){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
*uParam2=16;
break;
default:
*uParam2=2;
break;
}
return 0;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((func_505(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("issi2")){
*uParam2=2;
return 0;
}}
return 1;
}

int func_505(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Global_98042[iVar0])){
if(Global_98042[iVar0]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_506(int iParam0){
if(iParam0 !=func_287()){
if(func_508(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_507(Global_2657589[iParam0 /*466*/].f_321.f_7)==11;
}}}
return 0;
}

int func_507(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
break;
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
break;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
break;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
break;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
break;
case 81:
return 5;
break;
case 82:
return 6;
break;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
break;
case 88:
return 8;
break;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
break;
case 101:
return 10;
break;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
break;
case 117:
return 12;
break;
case 122:
return 13;
break;
case 123:
return 14;
break;
case 124:
return 15;
break;
case 125:
return 16;
break;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
break;
case 145:
return 18;
break;
case 146:
return 19;
break;
case 147:
return 20;
break;
case 148:
return 21;
break;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
break;
case 154:
return 23;
break;
case 155:
case 156:
case 157:
case 158:
return 24;
break;
case 159:
return 25;
break;
case 160:
return 26;
break;
case 161:
return 27;
break;
}
return -1;
}

int func_508(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2672505.f_3){
return Global_2672505.f_2;
}elseif(Global_2657589[iVar0 /*466*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}

int func_509(int iParam0){
if(((iParam0==joaat("mule4") || iParam0==joaat("pounder2")) || iParam0==joaat("speedo4")) || iParam0==joaat("terbyte")){
return 1;
}
return 0;
}

int func_510(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("halftrack"):
case joaat("phantom3"):
case joaat("hauler2"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("bruiser"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("bruiser2"):
case joaat("bruiser3"):
return 1;
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(func_512(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("minitank"):
case joaat("burrito2"):
return 1;
case joaat("brickade2"):
if(func_511(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("journey2"):
return 1;
break;
}
return 0;
}

int func_511(int iParam0){
if(iParam0 !=func_287()){
if(func_508(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_507(Global_2657589[iParam0 /*466*/].f_321.f_7)==26;
}}}
return 0;
}

int func_512(int iParam0){
if(iParam0 !=func_287()){
if(func_508(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_507(Global_2657589[iParam0 /*466*/].f_321.f_7)==13;
}}}
return 0;
}

int func_513(int iParam0){
if(iParam0 !=func_287()){
if(func_508(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_507(Global_2657589[iParam0 /*466*/].f_321.f_7)==7;
}}}
return 0;
}

int func_514(int iParam0){
if(iParam0==joaat("oppressor2")){
return 0;
}
if((!func_515(PLAYER::PLAYER_ID()) && iParam0 !=joaat("thruster")) && iParam0 !=joaat("avenger")){
return 0;
}
return 1;
}

int func_515(int iParam0){
if(iParam0 !=func_287()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_307, 2);
}
return 0;
}

int func_516(int iParam0){
if(func_534(PLAYER::PLAYER_ID()) || func_533(PLAYER::PLAYER_ID())){
if(func_517(iParam0)){
return 1;
}}
return 0;
}

int func_517(int iParam0){
if((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 0;
}
if(func_521(iParam0, 0)){
return 1;
}
if(func_520(PLAYER::PLAYER_ID()) && (!func_514(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("thruster")))){
return 0;
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_518(iParam0)){
return 1;
}}}
return 0;
}

int func_518(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_510(iParam0)) || func_519(iVar0)){
return 1;
}
switch (iVar0){
case joaat("slamtruck"):
case joaat("patriot2"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("speedo4"):
return 1;
break;
}}
return 0;
}

int func_519(int iParam0){
switch (iParam0){
case joaat("mule"):
case joaat("mule2"):
case joaat("mule3"):
case joaat("brickade"):
case joaat("dune"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("boxville4"):
case joaat("boxville5"):
return 1;
default:
}
return 0;
}

int func_520(int iParam0){
if(iParam0==func_287()){
return 0;
}
if(func_535(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_521(int iParam0, bool bParam1){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_523(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
if(Global_2793046.f_304==iParam0){
return 1;
}elseif(func_522(iParam0) !=-1 && !bParam1){
return 1;
}}
break;
}
return 0;
}

int func_522(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=0;
while (iVar0 < 32){
if(Global_2672505.f_221[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_523(int iParam0, int iParam1){
if(iParam1==0){
if(func_532(iParam0, 0)){
return 1;
}}
switch (iParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_531();
break;
case joaat("sabregt"):
if(Global_262145.f_14734){
return func_530();
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14735){
return func_530();
}
break;
case joaat("virgo3"):
if(Global_262145.f_14733){
return func_530();
}
break;
case joaat("minivan"):
if(Global_262145.f_14736){
return func_530();
}
break;
case joaat("slamvan"):
if(Global_262145.f_14738){
return func_530();
}
break;
case joaat("sultan"):
case joaat("banshee"):
return func_529();
break;
case joaat("comet2"):
if(Global_262145.f_19141){
return func_528();
}
break;
case joaat("diablous"):
if(Global_262145.f_19143){
return func_528();
}
break;
case joaat("fcr"):
if(Global_262145.f_19147){
return func_528();
}
break;
case joaat("elegy2"):
if(Global_262145.f_19144){
return func_528();
}
break;
case joaat("nero"):
if(Global_262145.f_19151){
return func_528();
}
break;
case joaat("italigtb"):
if(Global_262145.f_19149){
return func_528();
}
break;
case joaat("specter"):
if(Global_262145.f_19154){
return func_528();
}
break;
case joaat("technical"):
if(Global_262145.f_21100){
return func_527();
}
break;
case joaat("insurgent"):
if(Global_262145.f_21101){
return func_527();
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_526();
break;
case joaat("glendale"):
if(func_526() || func_525()){
return 1;
}
break;
case joaat("impaler"):
return func_526();
break;
case joaat("issi3"):
return func_526();
break;
case joaat("gargoyle"):
return func_526();
break;
case joaat("dominator"):
return func_526();
break;
case joaat("dominator2"):
return func_526();
break;
case joaat("imperator"):
return func_526();
break;
case joaat("imperator2"):
return func_526();
break;
case joaat("imperator3"):
return func_526();
break;
case joaat("deathbike"):
return func_526();
break;
case joaat("deathbike2"):
return func_526();
break;
case joaat("deathbike3"):
return func_526();
break;
case joaat("impaler2"):
case joaat("brutus"):
case joaat("bruiser"):
case joaat("slamvan4"):
case joaat("issi4"):
case joaat("monster3"):
case joaat("scarab"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("impaler3"):
case joaat("brutus2"):
case joaat("bruiser2"):
case joaat("slamvan5"):
case joaat("issi5"):
case joaat("monster4"):
case joaat("scarab2"):
case joaat("cerberus2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("impaler4"):
case joaat("brutus3"):
case joaat("bruiser3"):
case joaat("slamvan6"):
case joaat("issi6"):
case joaat("monster5"):
case joaat("scarab3"):
case joaat("cerberus3"):
case joaat("dominator6"):
case joaat("zr3803"):
return func_526();
break;
case joaat("youga2"):
if(Global_262145.f_29332){
return func_525();
}
break;
case joaat("gauntlet3"):
if(Global_262145.f_29682){
return func_525();
}
break;
case joaat("manana"):
if(Global_262145.f_29331){
return func_525();
}
break;
case joaat("peyote"):
if(Global_262145.f_29681){
return func_525();
}
break;
case joaat("yosemite"):
if(Global_262145.f_29680){
return func_525();
}
break;
}
switch (iParam0){
case joaat("tenf"):
if(Global_262145.f_33139){
return func_524();
}
break;
case joaat("weevil"):
if(Global_262145.f_33138){
return func_524();
}
break;
case joaat("brioso2"):
if(Global_262145.f_33131){
return func_524();
}
break;
case joaat("sentinel3"):
if(Global_262145.f_33140){
return func_524();
}
break;
}
return 0;
}


bool func_524(){
return DLC::IS_DLC_PRESENT(1199590110);
}


bool func_525(){
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}


bool func_526(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}


bool func_527(){
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}


bool func_528(){
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}


bool func_529(){
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}


bool func_530(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


bool func_531(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_532(int iParam0, int iParam1){
switch (iParam0){
case joaat("faction2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("moonbeam2"):
case joaat("primo2"):
case joaat("voodoo"):
return 1;
break;
case joaat("tenf2"):
case joaat("weevil2"):
case joaat("brioso3"):
case joaat("sentinel4"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("sabregt2"):
if(!Global_262145.f_14734){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14735){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14733){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14736){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14738){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14737){
return 0;
}else{
return 1;
}
break;
case joaat("sultanrs"):
case joaat("banshee2"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("comet3"):
if(Global_262145.f_19141){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19143){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19147){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19144){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19151){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19149){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19154){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21100){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21101){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("manana2"):
case joaat("peyote3"):
case joaat("glendale2"):
return 1;
break;
}
return 0;
}

int func_533(int iParam0){
if(iParam0 !=func_287()){
if(func_508(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_287()){
return func_507(Global_2657589[iParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_534(int iParam0){
if(iParam0 !=func_287()){
if(func_508(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_287()){
return func_507(Global_2657589[iParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_535(int iParam0){
if(iParam0 !=func_287()){
if(func_508(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_507(Global_2657589[iParam0 /*466*/].f_321.f_7)==9;
}}}
return 0;
}

int func_536(int iParam0, bool bParam1, var uParam2){
bool bVar0;
if(!bParam1){
if((((((((((((((iParam0==joaat("police") || iParam0==joaat("policeold1")) || iParam0==joaat("policeold2")) || iParam0==joaat("police2")) || iParam0==joaat("police3")) || iParam0==joaat("police4")) || iParam0==joaat("fbi")) || iParam0==joaat("fbi2")) || iParam0==joaat("polmav")) || iParam0==joaat("policeb")) || iParam0==joaat("policet")) || iParam0==joaat("riot")) || iParam0==joaat("sheriff")) || iParam0==joaat("pranger")) || iParam0==joaat("sheriff2")){
*uParam2=1;
return 0;
}}
if(((((((iParam0==joaat("ambulance") || iParam0==joaat("firetruk")) || iParam0==joaat("taxi")) || iParam0==joaat("lguard")) || iParam0==joaat("ripley")) || iParam0==joaat("dilettante2")) || iParam0==joaat("airbus")) || iParam0==joaat("airtug")){
*uParam2=2;
return 0;
}
if(((iParam0==joaat("burrito") || iParam0==joaat("rumpo2")) || iParam0==joaat("speedo")) || iParam0==joaat("speedo2")){
*uParam2=2;
return 0;
}
if(((iParam0==joaat("scorcher") || iParam0==joaat("bmx")) || iParam0==joaat("cruiser")) || iParam0==joaat("fixter")){
*uParam2=2;
return 0;
}
if(((((((((((((((((((iParam0==joaat("caddy") || iParam0==joaat("forklift")) || iParam0==joaat("caddy2")) || iParam0==joaat("crusader")) || iParam0==joaat("tribike")) || iParam0==joaat("tribike2")) || iParam0==joaat("tribike3")) || iParam0==joaat("tractor")) || iParam0==joaat("tractor2")) || iParam0==joaat("mower")) || iParam0==joaat("tornado4")) || iParam0==joaat("docktug")) || iParam0==joaat("stretch")) || iParam0==joaat("bison2")) || iParam0==joaat("bison3")) || iParam0==joaat("benson")) || iParam0==joaat("pounder")) || iParam0==joaat("submersible")) || iParam0==joaat("emperor3")) || iParam0==joaat("dune2")){
*uParam2=2;
return 0;
}
bVar0=false;
if(func_513(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))){
bVar0=true;
}
if(((((((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 !=joaat("blazer")) && iParam0 !=joaat("blazer2")) && iParam0 !=joaat("blazer3")) && iParam0 !=joaat("blazer4")) && iParam0 !=joaat("blazer5")) && iParam0 !=joaat("chimera")) && iParam0 !=joaat("trailerlarge")) && iParam0 !=joaat("trailersmall2")) && iParam0 !=joaat("rrocket")) && iParam0 !=joaat("stryder")) && iParam0 !=joaat("verus")) && !bVar0){
*uParam2=2;
return 0;
}
if(iParam0==joaat("monster")){
*uParam2=2;
return 0;
}
if((iParam0==joaat("insurgent") || iParam0==joaat("technical")) || iParam0==joaat("limo2")){
*uParam2=2;
return 0;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_537(iParam0)){
*uParam2=2;
return 0;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==joaat("insurgent") || iParam0==joaat("insurgent2")){
*uParam2=2;
}}
return 1;
}

int func_537(int iParam0){
switch (iParam0){
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("forklift"):
return 1;
break;
}
return 0;
}


void func_538(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_539(iParam0)){
return;
}
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar0=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_zero")){
iParam1=0;
}elseif(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_one")){
iParam1=1;
}elseif(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("player_two")){
iParam1=2;
}}
if((iParam1 !=0 && iParam1 !=1) && iParam1 !=2){
iParam1=Global_113648.f_2365.f_539.f_4321;
}}
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 2){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66=0;
Global_113648.f_32751.f_5592[iVar1]=iVar2;
}}}
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1))){
Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66=0;
}}}
iVar1++;
}
Global_113648.f_32751.f_5590=iParam1;
Global_78253=iParam0;
Global_113648.f_32751.f_5588=1;
func_390(iParam0, &(Global_113648.f_32751.f_5510));
}

int func_539(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_395(iParam0, 0, 0)) || func_395(iParam0, 1, 0)) || func_395(iParam0, 2, 0)) || func_386(iParam0) !=145) || func_552(iParam0)) || func_551(iParam0)) || func_505(iParam0)) || func_550(iParam0)) || !func_540(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_551(iParam0)){
}
if(func_551(iParam0)){
}
if(func_395(iParam0, 0, 0)){
}
if(func_395(iParam0, 1, 0)){
}
if(func_395(iParam0, 2, 0)){
}
if(func_386(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_540(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_541(iParam0, 0, -1)){
return 0;
}
if(((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)){
return 0;
}
switch (iParam0){
case joaat("bus"):
case joaat("stretch"):
case joaat("barracks"):
case joaat("armytanker"):
case joaat("rhino"):
case joaat("armytrailer"):
case joaat("barracks2"):
case joaat("flatbed"):
case joaat("ripley"):
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("airbus"):
case joaat("coach"):
case joaat("rentalbus"):
case joaat("tourbus"):
case joaat("firetruk"):
case joaat("pbus"):
case joaat("trash"):
case joaat("benson"):
case joaat("boattrailer"):
case joaat("biff"):
case joaat("hauler"):
case joaat("docktrailer"):
case joaat("phantom"):
case joaat("pounder"):
case joaat("tractor2"):
case joaat("bulldozer"):
case joaat("handler"):
case joaat("tiptruck"):
case joaat("cutter"):
case joaat("dump"):
case joaat("mixer"):
case joaat("mixer2"):
case joaat("rubble"):
case joaat("scrap"):
case joaat("tiptruck2"):
case joaat("camper"):
case joaat("taco"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("journey"):
case joaat("mule"):
case joaat("mule2"):
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("policeb"):
case joaat("policeold1"):
case joaat("policeold2"):
case joaat("policet"):
case joaat("taxi"):
case joaat("submersible"):
case joaat("submersible2"):
case joaat("monster"):
return 0;
break;
}
return 1;
}

int func_541(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_549()){
return 0;
}}else{
iVar0=0;
while (iVar0 < FILES::GET_NUM_DLC_VEHICLES()){
if(FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1)){
if(iParam0==Var1.f_1){
if(FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
return 0;
}}}
iVar0++;
}}
if(iParam0==joaat("blimp")){
if((((!func_548() && !func_547()) && !func_546()) && !func_545()) && !func_549()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_241() || MISC::IS_PC_VERSION()) || func_240()){
}elseif(!func_546()){
return 0;
}}
if(bParam1){
if(!func_544(iParam0, iParam2)){
return 0;
}}
if(!func_542(iParam0)){
return 0;
}
return 1;
}

int func_542(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_543()){
return 1;
}
NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
if(iVar0==4){
return 1;
}
switch (iParam0){
case joaat("dune4"):
StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
break;
case joaat("voltic2"):
StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
break;
case joaat("ruiner2"):
StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
break;
case joaat("phantom2"):
StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
break;
case joaat("technical2"):
StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
break;
case joaat("boxville5"):
StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
break;
case joaat("wastelander"):
StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
break;
case joaat("blazer5"):
StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
break;
default:
return 1;
break;
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2)){
return 0;
}
return 1;
}

int func_543(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_544(int iParam0, int iParam1){
int iVar0;
int iVar1;
if((!Global_2764244 && iParam1 >=0) && iParam1 <=415){
if(MISC::IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2)){
return 1;
}}
if(Global_2764243){
return 1;
}
iVar0=1;
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0==joaat("btype3")){
if((!Global_262145.f_7059 && !Global_262145.f_13397) && iVar1 < Global_262145.f_13398){
iVar0=0;
}}
if(iParam0==joaat("faction3")){
if(!Global_262145.f_14737 && iVar1 < Global_262145.f_14749){
iVar0=0;
}}elseif(iParam0==joaat("virgo3") || iParam0==joaat("virgo2")){
if(!Global_262145.f_14733 && iVar1 < Global_262145.f_14745){
iVar0=0;
}}elseif(iParam0==joaat("sabregt2")){
if(!Global_262145.f_14734 && iVar1 < Global_262145.f_14746){
iVar0=0;
}}elseif(iParam0==joaat("tornado5")){
if(!Global_262145.f_14735 && iVar1 < Global_262145.f_14747){
iVar0=0;
}}elseif(iParam0==joaat("minivan2")){
if(!Global_262145.f_14736 && iVar1 < Global_262145.f_14748){
iVar0=0;
}}elseif(iParam0==joaat("slamvan3")){
if(!Global_262145.f_14738 && iVar1 < Global_262145.f_14750){
iVar0=0;
}}
if(iParam0==joaat("prototipo")){
if(!Global_262145.f_14739 && iVar1 < Global_262145.f_14742){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_14740 && iVar1 < Global_262145.f_14743){
iVar0=0;
}}elseif(iParam0==joaat("pfister811")){
if(!Global_262145.f_14741 && iVar1 < Global_262145.f_14744){
iVar0=0;
}}
if(iParam0==joaat("bf400")){
if(!Global_262145.f_17313 && iVar1 < Global_262145.f_17278){
iVar0=0;
}}elseif(iParam0==joaat("brioso")){
if(!Global_262145.f_17308 && iVar1 < Global_262145.f_17273){
iVar0=0;
}}elseif(iParam0==joaat("cliffhanger")){
if(!Global_262145.f_17312 && iVar1 < Global_262145.f_17277){
iVar0=0;
}}elseif(iParam0==joaat("contender")){
if(!Global_262145.f_17311 && iVar1 < Global_262145.f_17276){
iVar0=0;
}}elseif(iParam0==joaat("le7b")){
if(!Global_262145.f_17305 && iVar1 < Global_262145.f_17270){
iVar0=0;
}}elseif(iParam0==joaat("omnis")){
if(!Global_262145.f_17306 && iVar1 < Global_262145.f_17271){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck")){
if(!Global_262145.f_17309 && iVar1 < Global_262145.f_17274){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck2")){
if(!Global_262145.f_17310 && iVar1 < Global_262145.f_17275){
iVar0=0;
}}elseif(iParam0==joaat("tropos")){
if(!Global_262145.f_17307 && iVar1 < Global_262145.f_17272){
iVar0=0;
}}elseif(iParam0==joaat("gargoyle")){
if(!Global_262145.f_17315 && iVar1 < Global_262145.f_17280){
iVar0=0;
}}elseif(iParam0==joaat("rallytruck")){
if(!Global_262145.f_17316 && iVar1 < Global_262145.f_17281){
iVar0=0;
}}elseif(iParam0==joaat("tampa2")){
if(!Global_262145.f_17304 && iVar1 < Global_262145.f_17269){
iVar0=0;
}}elseif(iParam0==joaat("tyrus")){
if(!Global_262145.f_17303 && iVar1 < Global_262145.f_17268){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_17302 && iVar1 < Global_262145.f_17267){
iVar0=0;
}}elseif(iParam0==joaat("lynx")){
if(!Global_262145.f_17314 && iVar1 < Global_262145.f_17279){
iVar0=0;
}}elseif(iParam0==joaat("stalion2")){
if(!Global_262145.f_17317 && iVar1 < Global_262145.f_17282){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet2")){
if(!Global_262145.f_17318 && iVar1 < Global_262145.f_17283){
iVar0=0;
}}elseif(iParam0==joaat("dominator2")){
if(!Global_262145.f_17319 && iVar1 < Global_262145.f_17284){
iVar0=0;
}}elseif(iParam0==joaat("buffalo3")){
if(!Global_262145.f_17320 && iVar1 < Global_262145.f_17285){
iVar0=0;
}}
if(iParam0==joaat("defiler")){
if(!Global_262145.f_17474 && iVar1 < Global_262145.f_17496){
iVar0=0;
}}elseif(iParam0==joaat("nightblade")){
if(!Global_262145.f_17475 && iVar1 < Global_262145.f_17497){
iVar0=0;
}}elseif(iParam0==joaat("zombiea")){
if(!Global_262145.f_17476 && iVar1 < Global_262145.f_17498){
iVar0=0;
}}elseif(iParam0==joaat("esskey")){
if(!Global_262145.f_17477 && iVar1 < Global_262145.f_17499){
iVar0=0;
}}elseif(iParam0==joaat("avarus")){
if(!Global_262145.f_17478 && iVar1 < Global_262145.f_17500){
iVar0=0;
}}elseif(iParam0==joaat("zombieb")){
if(!Global_262145.f_17479 && iVar1 < Global_262145.f_17501){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou2")){
if(!Global_262145.f_17481 && iVar1 < Global_262145.f_17502){
iVar0=0;
}}elseif(iParam0==joaat("vortex")){
if(!Global_262145.f_17482 && iVar1 < Global_262145.f_17503){
iVar0=0;
}}elseif(iParam0==joaat("shotaro")){
if(!Global_262145.f_17483 && iVar1 < Global_262145.f_17504){
iVar0=0;
}}elseif(iParam0==joaat("chimera")){
if(!Global_262145.f_17484 && iVar1 < Global_262145.f_17505){
iVar0=0;
}}elseif(iParam0==joaat("raptor")){
if(!Global_262145.f_17485 && iVar1 < Global_262145.f_17506){
iVar0=0;
}}elseif(iParam0==joaat("daemon2")){
if(!Global_262145.f_17486 && iVar1 < Global_262145.f_17507){
iVar0=0;
}}elseif(iParam0==joaat("blazer4")){
if(!Global_262145.f_17487 && iVar1 < Global_262145.f_17508){
iVar0=0;
}}elseif(iParam0==joaat("tornado6")){
if(!Global_262145.f_17493 && iVar1 < Global_262145.f_17515){
iVar0=0;
}}elseif(iParam0==joaat("youga2")){
if(!Global_262145.f_17490 && iVar1 < Global_262145.f_17511){
iVar0=0;
}}elseif(iParam0==joaat("wolfsbane")){
if(!Global_262145.f_17491 && iVar1 < Global_262145.f_17512){
iVar0=0;
}}elseif(iParam0==joaat("faggio3")){
if(!Global_262145.f_17492 && iVar1 < Global_262145.f_17513){
iVar0=0;
}}elseif(iParam0==joaat("faggio")){
if(!Global_262145.f_17480 && iVar1 < Global_262145.f_17514){
iVar0=0;
}}elseif(iParam0==joaat("bagger")){
if(!Global_262145.f_17494 && iVar1 < Global_262145.f_17516){
iVar0=0;
}}elseif(iParam0==joaat("sanctus")){
if(!Global_262145.f_17488 && iVar1 < Global_262145.f_17509){
iVar0=0;
}}elseif(iParam0==joaat("manchez")){
if(!Global_262145.f_17489 && iVar1 < Global_262145.f_17510){
iVar0=0;
}}elseif(iParam0==joaat("ratbike")){
if(!Global_262145.f_17495 && iVar1 < Global_262145.f_17517){
iVar0=0;
}}
if(iParam0==joaat("voltic2")){
if(!Global_262145.f_19131 && iVar1 < Global_262145.f_19228){
iVar0=0;
}}elseif(iParam0==joaat("ruiner2")){
if(!Global_262145.f_19132 && iVar1 < Global_262145.f_19229){
iVar0=0;
}}elseif(iParam0==joaat("dune4")){
if(!Global_262145.f_19133 && iVar1 < Global_262145.f_19230){
iVar0=0;
}}elseif(iParam0==joaat("dune5")){
if(!Global_262145.f_19134 && iVar1 < Global_262145.f_19231){
iVar0=0;
}}elseif(iParam0==joaat("phantom2")){
if(!Global_262145.f_19135 && iVar1 < Global_262145.f_19232){
iVar0=0;
}}elseif(iParam0==joaat("technical2")){
if(!Global_262145.f_19136 && iVar1 < Global_262145.f_19233){
iVar0=0;
}}elseif(iParam0==joaat("boxville5")){
if(!Global_262145.f_19137 && iVar1 < Global_262145.f_19234){
iVar0=0;
}}elseif(iParam0==joaat("wastelander")){
if(!Global_262145.f_19138 && iVar1 < Global_262145.f_19235){
iVar0=0;
}}elseif(iParam0==joaat("blazer5")){
if(!Global_262145.f_19139 && iVar1 < Global_262145.f_19236){
iVar0=0;
}}elseif(iParam0==joaat("comet2")){
if(!Global_262145.f_19140 && iVar1 < Global_262145.f_19237){
iVar0=0;
}}elseif(iParam0==joaat("comet3")){
if(!Global_262145.f_19141 && iVar1 < Global_262145.f_19238){
iVar0=0;
}}elseif(iParam0==joaat("diablous")){
if(!Global_262145.f_19142 && iVar1 < Global_262145.f_19239){
iVar0=0;
}}elseif(iParam0==joaat("diablous2")){
if(!Global_262145.f_19143 && iVar1 < Global_262145.f_19240){
iVar0=0;
}}elseif(iParam0==joaat("elegy")){
if(!Global_262145.f_19144 && iVar1 < Global_262145.f_19241){
iVar0=0;
}}elseif(iParam0==joaat("elegy2")){
if(!Global_262145.f_19145 && iVar1 < Global_262145.f_19242){
iVar0=0;
}}elseif(iParam0==joaat("fcr")){
if(!Global_262145.f_19146 && iVar1 < Global_262145.f_19243){
iVar0=0;
}}elseif(iParam0==joaat("fcr2")){
if(!Global_262145.f_19147 && iVar1 < Global_262145.f_19244){
iVar0=0;
}}elseif(iParam0==joaat("italigtb")){
if(!Global_262145.f_19148 && iVar1 < Global_262145.f_19245){
iVar0=0;
}}elseif(iParam0==joaat("italigtb2")){
if(!Global_262145.f_19149 && iVar1 < Global_262145.f_19246){
iVar0=0;
}}elseif(iParam0==joaat("nero")){
if(!Global_262145.f_19150 && iVar1 < Global_262145.f_19247){
iVar0=0;
}}elseif(iParam0==joaat("nero2")){
if(!Global_262145.f_19151 && iVar1 < Global_262145.f_19248){
iVar0=0;
}}elseif(iParam0==joaat("penetrator")){
if(!Global_262145.f_19152 && iVar1 < Global_262145.f_19249){
iVar0=0;
}}elseif(iParam0==joaat("specter")){
if(!Global_262145.f_19153 && iVar1 < Global_262145.f_19250){
iVar0=0;
}}elseif(iParam0==joaat("specter2")){
if(!Global_262145.f_19154 && iVar1 < Global_262145.f_19251){
iVar0=0;
}}elseif(iParam0==joaat("tempesta")){
if(!Global_262145.f_19155 && iVar1 < Global_262145.f_19252){
iVar0=0;
}}
if(iParam0==joaat("gp1")){
if(!Global_262145.f_20212 && iVar1 < Global_262145.f_20208){
iVar0=0;
}}elseif(iParam0==joaat("infernus2")){
if(!Global_262145.f_20213 && iVar1 < Global_262145.f_20209){
iVar0=0;
}}elseif(iParam0==joaat("ruston")){
if(!Global_262145.f_20214 && iVar1 < Global_262145.f_20210){
iVar0=0;
}}elseif(iParam0==joaat("turismo2")){
if(!Global_262145.f_20215 && iVar1 < Global_262145.f_20211){
iVar0=0;
}}
if(iParam0==joaat("xa21")){
if(!Global_262145.f_21094 && iVar1 < Global_262145.f_21102){
iVar0=0;
}}elseif(iParam0==joaat("cheetah2")){
if(!Global_262145.f_21095 && iVar1 < Global_262145.f_21103){
iVar0=0;
}}elseif(iParam0==joaat("torero")){
if(!Global_262145.f_21096 && iVar1 < Global_262145.f_21104){
iVar0=0;
}}elseif(iParam0==joaat("vagner")){
if(!Global_262145.f_21097 && iVar1 < Global_262145.f_21105){
iVar0=0;
}}elseif(iParam0==joaat("ardent")){
if(!Global_262145.f_21098 && iVar1 < Global_262145.f_21106){
iVar0=0;
}}elseif(iParam0==joaat("nightshark")){
if(!Global_262145.f_21099 && iVar1 < Global_262145.f_21107){
iVar0=0;
}}
if(iParam0==joaat("microlight")){
if(!Global_262145.f_21893 && iVar1 < Global_262145.f_21913){
iVar0=0;
}}elseif(iParam0==joaat("mogul")){
if(!Global_262145.f_21905 && iVar1 < Global_262145.f_21925){
iVar0=0;
}}elseif(iParam0==joaat("rogue")){
if(!Global_262145.f_21896 && iVar1 < Global_262145.f_21916){
iVar0=0;
}}elseif(iParam0==joaat("starling")){
if(!Global_262145.f_21906 && iVar1 < Global_262145.f_21926){
iVar0=0;
}}elseif(iParam0==joaat("seabreeze")){
if(!Global_262145.f_21894 && iVar1 < Global_262145.f_21914){
iVar0=0;
}}elseif(iParam0==joaat("tula")){
if(!Global_262145.f_21910 && iVar1 < Global_262145.f_21930){
iVar0=0;
}}elseif(iParam0==joaat("pyro")){
if(!Global_262145.f_21908 && iVar1 < Global_262145.f_21928){
iVar0=0;
}}elseif(iParam0==joaat("molotok")){
if(!Global_262145.f_21909 && iVar1 < Global_262145.f_21929){
iVar0=0;
}}elseif(iParam0==joaat("nokota")){
if(!Global_262145.f_21904 && iVar1 < Global_262145.f_21924){
iVar0=0;
}}elseif(iParam0==joaat("bombushka")){
if(!Global_262145.f_21911 && iVar1 < Global_262145.f_21931){
iVar0=0;
}}elseif(iParam0==joaat("hunter")){
if(!Global_262145.f_21907 && iVar1 < Global_262145.f_21927){
iVar0=0;
}}elseif(iParam0==joaat("havok")){
if(!Global_262145.f_21903 && iVar1 < Global_262145.f_21923){
iVar0=0;
}}elseif(iParam0==joaat("howard")){
if(!Global_262145.f_21895 && iVar1 < Global_262145.f_21915){
iVar0=0;
}}elseif(iParam0==joaat("alphaz1")){
if(!Global_262145.f_21897 && iVar1 < Global_262145.f_21917){
iVar0=0;
}}elseif(iParam0==joaat("cyclone")){
if(!Global_262145.f_21898 && iVar1 < Global_262145.f_21918){
iVar0=0;
}}elseif(iParam0==joaat("visione")){
if(!Global_262145.f_21899 && iVar1 < Global_262145.f_21919){
iVar0=0;
}}elseif(iParam0==joaat("vigilante")){
if(!Global_262145.f_21900 && iVar1 < Global_262145.f_21920){
iVar0=0;
}}elseif(iParam0==joaat("retinue")){
if(!Global_262145.f_21901 && iVar1 < Global_262145.f_21921){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt3")){
if(!Global_262145.f_21902 && iVar1 < Global_262145.f_21922){
iVar0=0;
}}
if(iParam0==joaat("deluxo")){
if(!Global_262145.f_22861 && iVar1 < Global_262145.f_22889){
iVar0=0;
}}elseif(iParam0==joaat("stromberg")){
if(!Global_262145.f_22862 && iVar1 < Global_262145.f_22890){
iVar0=0;
}}elseif(iParam0==joaat("riot2")){
if(!Global_262145.f_22863 && iVar1 < Global_262145.f_22891){
iVar0=0;
}}elseif(iParam0==joaat("chernobog")){
if(!Global_262145.f_22864 && iVar1 < Global_262145.f_22892){
iVar0=0;
}}elseif(iParam0==joaat("khanjali")){
if(!Global_262145.f_22865 && iVar1 < Global_262145.f_22893){
iVar0=0;
}}elseif(iParam0==joaat("akula")){
if(!Global_262145.f_22866 && iVar1 < Global_262145.f_22894){
iVar0=0;
}}elseif(iParam0==joaat("thruster")){
if(!Global_262145.f_22867 && iVar1 < Global_262145.f_22895){
iVar0=0;
}}elseif(iParam0==joaat("barrage")){
if(!Global_262145.f_22868 && iVar1 < Global_262145.f_22896){
iVar0=0;
}}elseif(iParam0==joaat("volatol")){
if(!Global_262145.f_22869 && iVar1 < Global_262145.f_22897){
iVar0=0;
}}elseif(iParam0==joaat("comet4")){
if(!Global_262145.f_22870 && iVar1 < Global_262145.f_22898){
iVar0=0;
}}elseif(iParam0==joaat("neon")){
if(!Global_262145.f_22871 && iVar1 < Global_262145.f_22899){
iVar0=0;
}}elseif(iParam0==joaat("streiter")){
if(!Global_262145.f_22872 && iVar1 < Global_262145.f_22900){
iVar0=0;
}}elseif(iParam0==joaat("sentinel3")){
if(!Global_262145.f_22873 && iVar1 < Global_262145.f_22901){
iVar0=0;
}}elseif(iParam0==joaat("yosemite")){
if(!Global_262145.f_22874 && iVar1 < Global_262145.f_22902){
iVar0=0;
}}elseif(iParam0==joaat("sc1")){
if(!Global_262145.f_22875 && iVar1 < Global_262145.f_22903){
iVar0=0;
}}elseif(iParam0==joaat("autarch")){
if(!Global_262145.f_22876 && iVar1 < Global_262145.f_22904){
iVar0=0;
}}elseif(iParam0==joaat("gt500")){
if(!Global_262145.f_22877 && iVar1 < Global_262145.f_22905){
iVar0=0;
}}elseif(iParam0==joaat("hustler")){
if(!Global_262145.f_22878 && iVar1 < Global_262145.f_22906){
iVar0=0;
}}elseif(iParam0==joaat("revolter")){
if(!Global_262145.f_22879 && iVar1 < Global_262145.f_22907){
iVar0=0;
}}elseif(iParam0==joaat("pariah")){
if(!Global_262145.f_22880 && iVar1 < Global_262145.f_22908){
iVar0=0;
}}elseif(iParam0==joaat("raiden")){
if(!Global_262145.f_22881 && iVar1 < Global_262145.f_22909){
iVar0=0;
}}elseif(iParam0==joaat("savestra")){
if(!Global_262145.f_22882 && iVar1 < Global_262145.f_22910){
iVar0=0;
}}elseif(iParam0==joaat("riata")){
if(!Global_262145.f_22883 && iVar1 < Global_262145.f_22911){
iVar0=0;
}}elseif(iParam0==joaat("hermes")){
if(!Global_262145.f_22884 && iVar1 < Global_262145.f_22912){
iVar0=0;
}}elseif(iParam0==joaat("comet5")){
if(!Global_262145.f_22885 && iVar1 < Global_262145.f_22913){
iVar0=0;
}}elseif(iParam0==joaat("z190")){
if(!Global_262145.f_22886 && iVar1 < Global_262145.f_22914){
iVar0=0;
}}elseif(iParam0==joaat("viseris")){
if(!Global_262145.f_22887 && iVar1 < Global_262145.f_22915){
iVar0=0;
}}elseif(iParam0==joaat("kamacho")){
if(!Global_262145.f_22888 && iVar1 < Global_262145.f_22916){
iVar0=0;
}}
if(iParam0==joaat("gb200")){
if(!Global_262145.f_24081 && iVar1 < Global_262145.f_24097){
iVar0=0;
}}elseif(iParam0==joaat("fagaloa")){
if(!Global_262145.f_24082 && iVar1 < Global_262145.f_24098){
iVar0=0;
}}elseif(iParam0==joaat("ellie")){
if(!Global_262145.f_24086 && iVar1 < Global_262145.f_24102){
iVar0=0;
}}elseif(iParam0==joaat("issi3")){
if(!Global_262145.f_24089 && iVar1 < Global_262145.f_24105){
iVar0=0;
}}elseif(iParam0==joaat("michelli")){
if(!Global_262145.f_24094 && iVar1 < Global_262145.f_24110){
iVar0=0;
}}elseif(iParam0==joaat("flashgt")){
if(!Global_262145.f_24088 && iVar1 < Global_262145.f_24104){
iVar0=0;
}}elseif(iParam0==joaat("hotring")){
if(!Global_262145.f_24080 && iVar1 < Global_262145.f_24096){
iVar0=0;
}}elseif(iParam0==joaat("tezeract")){
if(!Global_262145.f_24087 && iVar1 < Global_262145.f_24103){
iVar0=0;
}}elseif(iParam0==joaat("tyrant")){
if(!Global_262145.f_24093 && iVar1 < Global_262145.f_24109){
iVar0=0;
}}elseif(iParam0==joaat("dominator3")){
if(!Global_262145.f_24092 && iVar1 < Global_262145.f_24108){
iVar0=0;
}}elseif(iParam0==joaat("taipan")){
if(!Global_262145.f_24083 && iVar1 < Global_262145.f_24099){
iVar0=0;
}}elseif(iParam0==joaat("entity2")){
if(!Global_262145.f_24085 && iVar1 < Global_262145.f_24101){
iVar0=0;
}}elseif(iParam0==joaat("jester3")){
if(!Global_262145.f_24095 && iVar1 < Global_262145.f_24111){
iVar0=0;
}}elseif(iParam0==joaat("cheburek")){
if(!Global_262145.f_24091 && iVar1 < Global_262145.f_24107){
iVar0=0;
}}elseif(iParam0==joaat("caracara")){
if(!Global_262145.f_24084 && iVar1 < Global_262145.f_24100){
iVar0=0;
}}elseif(iParam0==joaat("seasparrow")){
if(!Global_262145.f_24090 && iVar1 < Global_262145.f_24106){
iVar0=0;
}}
if(iParam0==joaat("terbyte")){
if(!Global_262145.f_24171 && iVar1 < Global_262145.f_24158){
iVar0=0;
}}elseif(iParam0==joaat("pbus2")){
if(!Global_262145.f_24172 && iVar1 < Global_262145.f_24159){
iVar0=0;
}}elseif(iParam0==joaat("mule4")){
if(!Global_262145.f_24177 && iVar1 < Global_262145.f_24164){
iVar0=0;
}}elseif(iParam0==joaat("pounder2")){
if(!Global_262145.f_24176 && iVar1 < Global_262145.f_24163){
iVar0=0;
}}elseif(iParam0==joaat("swinger")){
if(!Global_262145.f_24174 && iVar1 < Global_262145.f_24161){
iVar0=0;
}}elseif(iParam0==joaat("menacer")){
if(!Global_262145.f_24180 && iVar1 < Global_262145.f_24167){
iVar0=0;
}}elseif(iParam0==joaat("scramjet")){
if(!Global_262145.f_24182 && iVar1 < Global_262145.f_24169){
iVar0=0;
}}elseif(iParam0==joaat("strikeforce")){
if(!Global_262145.f_24183 && iVar1 < Global_262145.f_24170){
iVar0=0;
}}elseif(iParam0==joaat("oppressor2")){
if(!Global_262145.f_24181 && iVar1 < Global_262145.f_24168){
iVar0=0;
}}elseif(iParam0==joaat("patriot2")){
if(!Global_262145.f_24173 && iVar1 < Global_262145.f_24160){
iVar0=0;
}}elseif(iParam0==joaat("stafford")){
if(!Global_262145.f_24175 && iVar1 < Global_262145.f_24162){
iVar0=0;
}}elseif(iParam0==joaat("freecrawler")){
if(!Global_262145.f_24179 && iVar1 < Global_262145.f_24166){
iVar0=0;
}}elseif(iParam0==joaat("blimp3")){
if(!Global_262145.f_24178 && iVar1 < Global_262145.f_24165){
iVar0=0;
}}
if(iParam0==joaat("monster3")){}elseif(iParam0==joaat("cerberus")){}elseif(iParam0==joaat("cerberus2")){}elseif(iParam0==joaat("cerberus3")){}elseif(iParam0==joaat("brutus")){}elseif(iParam0==joaat("brutus2")){}elseif(iParam0==joaat("brutus3")){}elseif(iParam0==joaat("scarab")){}elseif(iParam0==joaat("scarab2")){}elseif(iParam0==joaat("scarab3")){}elseif(iParam0==joaat("imperator")){}elseif(iParam0==joaat("imperator2")){}elseif(iParam0==joaat("imperator3")){}elseif(iParam0==joaat("zr380")){}elseif(iParam0==joaat("zr3802")){}elseif(iParam0==joaat("zr3803")){}elseif(iParam0==joaat("impaler")){}elseif(iParam0==joaat("deveste")){
if(!Global_262145.f_26768 && iVar1 < Global_262145.f_26770){
iVar0=0;
}}elseif(iParam0==joaat("toros")){
if(!Global_262145.f_25781 && iVar1 < Global_262145.f_25774){
iVar0=0;
}}elseif(iParam0==joaat("clique")){
if(!Global_262145.f_25782 && iVar1 < Global_262145.f_25775){
iVar0=0;
}}elseif(iParam0==joaat("italigto")){
if(!Global_262145.f_25783 && iVar1 < Global_262145.f_25776){
iVar0=0;
}}elseif(iParam0==joaat("deviant")){
if(!Global_262145.f_25784 && iVar1 < Global_262145.f_25777){
iVar0=0;
}}elseif(iParam0==joaat("vamos")){
if(!Global_262145.f_26769 && iVar1 < Global_262145.f_26771){
iVar0=0;
}}elseif(iParam0==joaat("tulip")){
if(!Global_262145.f_25785 && iVar1 < Global_262145.f_25778){
iVar0=0;
}}elseif(iParam0==joaat("schlagen")){
if(!Global_262145.f_25786 && iVar1 < Global_262145.f_25779){
iVar0=0;
}}elseif(iParam0==joaat("rcbandito")){
if(!Global_262145.f_25787 && iVar1 < Global_262145.f_25780){
iVar0=0;
}}elseif(iParam0==joaat("thrax")){
if(!Global_262145.f_25792 && iVar1 < Global_262145.f_25813){
iVar0=0;
}}elseif(iParam0==joaat("drafter")){
if(!Global_262145.f_25793 && iVar1 < Global_262145.f_25814){
iVar0=0;
}}elseif(iParam0==joaat("locust")){
if(!Global_262145.f_25794 && iVar1 < Global_262145.f_25815){
iVar0=0;
}}elseif(iParam0==joaat("novak")){
if(!Global_262145.f_25795 && iVar1 < Global_262145.f_25816){
iVar0=0;
}}elseif(iParam0==joaat("zorrusso")){
if(!Global_262145.f_25796 && iVar1 < Global_262145.f_25817){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet3")){
if(!Global_262145.f_25797 && iVar1 < Global_262145.f_25818){
iVar0=0;
}}elseif(iParam0==joaat("issi7")){
if(!Global_262145.f_25798 && iVar1 < Global_262145.f_25819){
iVar0=0;
}}elseif(iParam0==joaat("zion3")){
if(!Global_262145.f_25799 && iVar1 < Global_262145.f_25820){
iVar0=0;
}}elseif(iParam0==joaat("nebula")){
if(!Global_262145.f_25800 && iVar1 < Global_262145.f_25821){
iVar0=0;
}}elseif(iParam0==joaat("hellion")){
if(!Global_262145.f_25801 && iVar1 < Global_262145.f_25822){
iVar0=0;
}}elseif(iParam0==joaat("dynasty")){
if(!Global_262145.f_25802 && iVar1 < Global_262145.f_25823){
iVar0=0;
}}elseif(iParam0==joaat("rrocket")){
if(!Global_262145.f_25803 && iVar1 < Global_262145.f_25824){
iVar0=0;
}}elseif(iParam0==joaat("peyote2")){
if(!Global_262145.f_25804 && iVar1 < Global_262145.f_25825){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet4")){
if(!Global_262145.f_25805 && iVar1 < Global_262145.f_25826){
iVar0=0;
}}elseif(iParam0==joaat("caracara2")){
if(!Global_262145.f_25806 && iVar1 < Global_262145.f_25827){
iVar0=0;
}}elseif(iParam0==joaat("jugular")){
if(!Global_262145.f_25807 && iVar1 < Global_262145.f_25828){
iVar0=0;
}}elseif(iParam0==joaat("s80")){
if(!Global_262145.f_25808 && iVar1 < Global_262145.f_25829){
iVar0=0;
}}elseif(iParam0==joaat("krieger")){
if(!Global_262145.f_25809 && iVar1 < Global_262145.f_25830){
iVar0=0;
}}elseif(iParam0==joaat("emerus")){
if(!Global_262145.f_25810 && iVar1 < Global_262145.f_25831){
iVar0=0;
}}elseif(iParam0==joaat("neo")){
if(!Global_262145.f_25811 && iVar1 < Global_262145.f_25832){
iVar0=0;
}}elseif(iParam0==joaat("paragon")){
if(!Global_262145.f_25812 && iVar1 < Global_262145.f_25833){
iVar0=0;
}}elseif(iParam0==joaat("asbo")){
if(!Global_262145.f_28613 && iVar1 < Global_262145.f_28634){
iVar0=0;
}}elseif(iParam0==joaat("kanjo")){
if(!Global_262145.f_28614 && iVar1 < Global_262145.f_28635){
iVar0=0;
}}elseif(iParam0==joaat("everon")){
if(!Global_262145.f_28615 && iVar1 < Global_262145.f_28636){
iVar0=0;
}}elseif(iParam0==joaat("retinue2")){
if(!Global_262145.f_28616 && iVar1 < Global_262145.f_28637){
iVar0=0;
}}elseif(iParam0==joaat("yosemite2")){
if(!Global_262145.f_28617 && iVar1 < Global_262145.f_28638){
iVar0=0;
}}elseif(iParam0==joaat("sugoi")){
if(!Global_262145.f_28618 && iVar1 < Global_262145.f_28639){
iVar0=0;
}}elseif(iParam0==joaat("sultan2")){
if(!Global_262145.f_28619 && iVar1 < Global_262145.f_28640){
iVar0=0;
}}elseif(iParam0==joaat("outlaw")){
if(!Global_262145.f_28620 && iVar1 < Global_262145.f_28641){
iVar0=0;
}}elseif(iParam0==joaat("vagrant")){
if(!Global_262145.f_28621 && iVar1 < Global_262145.f_28642){
iVar0=0;
}}elseif(iParam0==joaat("komoda")){
if(!Global_262145.f_28622 && iVar1 < Global_262145.f_28643){
iVar0=0;
}}elseif(iParam0==joaat("stryder")){
if(!Global_262145.f_28623 && iVar1 < Global_262145.f_28644){
iVar0=0;
}}elseif(iParam0==joaat("furia")){
if(!Global_262145.f_28624 && iVar1 < Global_262145.f_28645){
iVar0=0;
}}elseif(iParam0==joaat("zhaba")){
if(!Global_262145.f_28625 && iVar1 < Global_262145.f_28646){
iVar0=0;
}}elseif(iParam0==joaat("jb7002")){
if(!Global_262145.f_28626 && iVar1 < Global_262145.f_28647){
iVar0=0;
}}elseif(iParam0==joaat("firetruk")){
if(!Global_262145.f_28627 && iVar1 < Global_262145.f_28648){
iVar0=0;
}}elseif(iParam0==joaat("burrito2")){
if(!Global_262145.f_28628 && iVar1 < Global_262145.f_28649){
iVar0=0;
}}elseif(iParam0==joaat("boxville")){
if(!Global_262145.f_28629 && iVar1 < Global_262145.f_28650){
iVar0=0;
}}elseif(iParam0==joaat("stockade")){
if(!Global_262145.f_28630 && iVar1 < Global_262145.f_28651){
iVar0=0;
}}elseif(iParam0==joaat("minitank")){
if(!Global_262145.f_28631 && iVar1 < Global_262145.f_28652){
iVar0=0;
}}elseif(iParam0==joaat("lguard")){
if(!Global_262145.f_28632 && iVar1 < Global_262145.f_28653){
iVar0=0;
}}elseif(iParam0==joaat("blazer2")){
if(!Global_262145.f_28633 && iVar1 < Global_262145.f_28654){
iVar0=0;
}}elseif(iParam0==joaat("formula")){
if((!Global_262145.f_28656 && iVar1 < Global_262145.f_28657) && !Global_262145.f_28611){
iVar0=0;
}}elseif(iParam0==joaat("formula2")){
if((!Global_262145.f_28659 && iVar1 < Global_262145.f_28660) && !Global_262145.f_28612){
iVar0=0;
}}elseif(iParam0==joaat("imorgon")){
if(!Global_262145.f_28664 && iVar1 < Global_262145.f_28667){
iVar0=0;
}}elseif(iParam0==joaat("rebla")){
if(!Global_262145.f_28665 && iVar1 < Global_262145.f_28668){
iVar0=0;
}}elseif(iParam0==joaat("vstr")){
if(!Global_262145.f_28666 && iVar1 < Global_262145.f_28669){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet5")){
if(!Global_262145.f_29682 && iVar1 < Global_262145.f_29347){
iVar0=0;
}}elseif(iParam0==joaat("club")){
if(!Global_262145.f_29333 && iVar1 < Global_262145.f_29354){
iVar0=0;
}}elseif(iParam0==joaat("dukes3")){
if(!Global_262145.f_29334 && iVar1 < Global_262145.f_29340){
iVar0=0;
}}elseif(iParam0==joaat("yosemite3")){
if(!Global_262145.f_29680 && iVar1 < Global_262145.f_29348){
iVar0=0;
}}elseif(iParam0==joaat("peyote3")){
if(!Global_262145.f_29681 && iVar1 < Global_262145.f_29349){
iVar0=0;
}}elseif(iParam0==joaat("glendale2")){
if(!Global_262145.f_29327 && iVar1 < Global_262145.f_29346){
iVar0=0;
}}elseif(iParam0==joaat("penumbra2")){
if(!Global_262145.f_29328 && iVar1 < Global_262145.f_29355){
iVar0=0;
}}elseif(iParam0==joaat("landstalker2")){
if(!Global_262145.f_29329 && iVar1 < Global_262145.f_29345){
iVar0=0;
}}elseif(iParam0==joaat("seminole2")){
if(!Global_262145.f_29330 && iVar1 < Global_262145.f_29343){
iVar0=0;
}}elseif(iParam0==joaat("tigon")){
if(!Global_262145.f_29676 && iVar1 < Global_262145.f_29350){
iVar0=0;
}}elseif(iParam0==joaat("openwheel1")){
if(!Global_262145.f_29677 && iVar1 < Global_262145.f_29351){
iVar0=0;
}}elseif(iParam0==joaat("openwheel2")){
if(!Global_262145.f_29678 && iVar1 < Global_262145.f_29352){
iVar0=0;
}}elseif(iParam0==joaat("coquette4")){
if(!Global_262145.f_29679 && iVar1 < Global_262145.f_29353){
iVar0=0;
}}elseif(iParam0==joaat("manana2")){
if(!Global_262145.f_29331 && iVar1 < Global_262145.f_29342){
iVar0=0;
}}elseif(iParam0==joaat("youga3")){
if(!Global_262145.f_29332 && iVar1 < Global_262145.f_29344){
iVar0=0;
}}elseif(iParam0==joaat("toreador")){
if(!Global_262145.f_30141 && iVar1 < Global_262145.f_30124){
iVar0=0;
}}elseif(iParam0==joaat("annihilator2")){
if(!Global_262145.f_30142 && iVar1 < Global_262145.f_30125){
iVar0=0;
}}elseif(iParam0==joaat("alkonost")){
if(!Global_262145.f_30143 && iVar1 < Global_262145.f_30126){
iVar0=0;
}}elseif(iParam0==joaat("patrolboat")){
if(!Global_262145.f_30144 && iVar1 < Global_262145.f_30127){
iVar0=0;
}}elseif(iParam0==joaat("longfin")){
if(!Global_262145.f_30145 && iVar1 < Global_262145.f_30128){
iVar0=0;
}}elseif(iParam0==joaat("winky")){
if(!Global_262145.f_30146 && iVar1 < Global_262145.f_30129){
iVar0=0;
}}elseif(iParam0==joaat("veto")){
if(!Global_262145.f_30147 && iVar1 < Global_262145.f_30130){
iVar0=0;
}}elseif(iParam0==joaat("veto2")){
if(!Global_262145.f_30148 && iVar1 < Global_262145.f_30131){
iVar0=0;
}}elseif(iParam0==joaat("italirsx")){
if(!Global_262145.f_30149 && iVar1 < Global_262145.f_30132){
iVar0=0;
}}elseif(iParam0==joaat("weevil")){
if(Global_262145.f_30158){
}elseif(!Global_262145.f_30150 && iVar1 < Global_262145.f_30133){
iVar0=0;
}}elseif(iParam0==joaat("manchez2")){
if(!Global_262145.f_30151 && iVar1 < Global_262145.f_30134){
iVar0=0;
}}elseif(iParam0==joaat("slamtruck")){
if(!Global_262145.f_30152 && iVar1 < Global_262145.f_30135){
iVar0=0;
}}elseif(iParam0==joaat("vetir")){
if(!Global_262145.f_30153 && iVar1 < Global_262145.f_30136){
iVar0=0;
}}elseif(iParam0==joaat("squaddie")){
if(!Global_262145.f_30154 && iVar1 < Global_262145.f_30137){
iVar0=0;
}}elseif(iParam0==joaat("brioso2")){
if(Global_262145.f_30159){
}elseif(!Global_262145.f_30155 && iVar1 < Global_262145.f_30138){
iVar0=0;
}}elseif(iParam0==joaat("dinghy5")){
if(!Global_262145.f_30156 && iVar1 < Global_262145.f_30139){
iVar0=0;
}}elseif(iParam0==joaat("verus")){
if(!Global_262145.f_30157 && iVar1 < Global_262145.f_30140){
iVar0=0;
}}elseif(iParam0==joaat("tailgater2")){
if(!Global_262145.f_31009 && iVar1 < Global_262145.f_30992){
iVar0=0;
}}elseif(iParam0==joaat("euros")){
if(!Global_262145.f_31010 && iVar1 < Global_262145.f_30993){
iVar0=0;
}}elseif(iParam0==joaat("sultan3")){
if(!Global_262145.f_31011 && iVar1 < Global_262145.f_30994){
iVar0=0;
}}elseif(iParam0==joaat("rt3000")){
if(!Global_262145.f_31012 && iVar1 < Global_262145.f_30995){
iVar0=0;
}}elseif(iParam0==joaat("vectre")){
if(!Global_262145.f_31013 && iVar1 < Global_262145.f_30996){
iVar0=0;
}}elseif(iParam0==joaat("zr350")){
if(!Global_262145.f_31014 && iVar1 < Global_262145.f_30997){
iVar0=0;
}}elseif(iParam0==joaat("warrener2")){
if(!Global_262145.f_31015 && iVar1 < Global_262145.f_30998){
iVar0=0;
}}elseif(iParam0==joaat("calico")){
if(!Global_262145.f_31016 && iVar1 < Global_262145.f_30999){
iVar0=0;
}}elseif(iParam0==joaat("remus")){
if(!Global_262145.f_31017 && iVar1 < Global_262145.f_31000){
iVar0=0;
}}elseif(iParam0==joaat("cypher")){
if(!Global_262145.f_31018 && iVar1 < Global_262145.f_31001){
iVar0=0;
}}elseif(iParam0==joaat("dominator7")){
if(!Global_262145.f_31019 && iVar1 < Global_262145.f_31002){
iVar0=0;
}}elseif(iParam0==joaat("jester4")){
if(!Global_262145.f_31020 && iVar1 < Global_262145.f_31003){
iVar0=0;
}}elseif(iParam0==joaat("futo2")){
if(!Global_262145.f_31021 && iVar1 < Global_262145.f_31004){
iVar0=0;
}}elseif(iParam0==joaat("dominator8")){
if(!Global_262145.f_31022 && iVar1 < Global_262145.f_31005){
iVar0=0;
}}elseif(iParam0==joaat("previon")){
if(!Global_262145.f_31023 && iVar1 < Global_262145.f_31006){
iVar0=0;
}}elseif(iParam0==joaat("growler")){
if(!Global_262145.f_31024 && iVar1 < Global_262145.f_31007){
iVar0=0;
}}elseif(iParam0==joaat("comet6")){
if(!Global_262145.f_31025 && iVar1 < Global_262145.f_31008){
iVar0=0;
}}elseif(iParam0==joaat("champion")){
if(!Global_262145.f_31889 && iVar1 < Global_262145.f_31874){
iVar0=0;
}}elseif(iParam0==joaat("buffalo4")){
if(!Global_262145.f_31890 && iVar1 < Global_262145.f_31875){
iVar0=0;
}}elseif(iParam0==joaat("deity")){
if(!Global_262145.f_31891 && iVar1 < Global_262145.f_31876){
iVar0=0;
}}elseif(iParam0==joaat("jubilee")){
if(!Global_262145.f_31892 && iVar1 < Global_262145.f_31877){
iVar0=0;
}}elseif(iParam0==joaat("ignus")){
if(!Global_262145.f_31893 && iVar1 < Global_262145.f_31878){
iVar0=0;
}}elseif(iParam0==joaat("cinquemila")){
if(!Global_262145.f_31894 && iVar1 < Global_262145.f_31879){
iVar0=0;
}}elseif(iParam0==joaat("astron")){
if(!Global_262145.f_31895 && iVar1 < Global_262145.f_31880){
iVar0=0;
}}elseif(iParam0==joaat("comet7")){
if(!Global_262145.f_31896 && iVar1 < Global_262145.f_31881){
iVar0=0;
}}elseif(iParam0==joaat("zeno")){
if(!Global_262145.f_31897 && iVar1 < Global_262145.f_31882){
iVar0=0;
}}elseif(iParam0==joaat("reever")){
if(!Global_262145.f_31898 && iVar1 < Global_262145.f_31883){
iVar0=0;
}}elseif(iParam0==joaat("iwagen")){
if(!Global_262145.f_31899 && iVar1 < Global_262145.f_31884){
iVar0=0;
}}elseif(iParam0==joaat("granger2")){
if(!Global_262145.f_31900 && iVar1 < Global_262145.f_31885){
iVar0=0;
}}elseif(iParam0==joaat("patriot3")){
if(!Global_262145.f_31901 && iVar1 < Global_262145.f_31886){
iVar0=0;
}}elseif(iParam0==joaat("shinobi")){
if(!Global_262145.f_31902 && iVar1 < Global_262145.f_31887){
iVar0=0;
}}elseif(iParam0==joaat("baller7")){
if(Global_262145.f_31967){
}elseif(!Global_262145.f_31903 && iVar1 < Global_262145.f_31888){
iVar0=0;
}}elseif(iParam0==joaat("brioso3")){
if(!Global_262145.f_33131 && iVar1 < Global_262145.f_33112){
iVar0=0;
}}elseif(iParam0==joaat("corsita")){
if(!Global_262145.f_33125 && iVar1 < Global_262145.f_33106){
iVar0=0;
}}elseif(iParam0==joaat("draugur")){
if(!Global_262145.f_33129 && iVar1 < Global_262145.f_33110){
iVar0=0;
}}elseif(iParam0==joaat("greenwood")){
if(!Global_262145.f_33123 && iVar1 < Global_262145.f_33104){
iVar0=0;
}}elseif(iParam0==joaat("kanjosj")){
if(!Global_262145.f_33134 && iVar1 < Global_262145.f_33115){
iVar0=0;
}}elseif(iParam0==joaat("lm87")){
if(!Global_262145.f_33126 && iVar1 < Global_262145.f_33107){
iVar0=0;
}}elseif(iParam0==joaat("postlude")){
if(!Global_262145.f_33135 && iVar1 < Global_262145.f_33116){
iVar0=0;
}}elseif(iParam0==joaat("rhinehart")){
if(!Global_262145.f_33137 && iVar1 < Global_262145.f_33118){
iVar0=0;
}}elseif(iParam0==joaat("sm722")){
if(!Global_262145.f_33128 && iVar1 < Global_262145.f_33109){
iVar0=0;
}}elseif(iParam0==joaat("tenf")){
if(!Global_262145.f_33136 && iVar1 < Global_262145.f_33117){
iVar0=0;
}}elseif(iParam0==joaat("tenf2")){
if(!Global_262145.f_33139 && iVar1 < Global_262145.f_33120){
iVar0=0;
}}elseif(iParam0==joaat("torero2")){
if(!Global_262145.f_33124 && iVar1 < Global_262145.f_33105){
iVar0=0;
}}elseif(iParam0==joaat("vigero2")){
if(!Global_262145.f_33132 && iVar1 < Global_262145.f_33113){
iVar0=0;
}}elseif(iParam0==joaat("weevil2")){
if(!Global_262145.f_33138 && iVar1 < Global_262145.f_33119){
iVar0=0;
}}elseif(iParam0==joaat("ruiner4")){
if(!Global_262145.f_33130 && iVar1 < Global_262145.f_33111){
iVar0=0;
}}elseif(iParam0==joaat("sentinel4")){
if(!Global_262145.f_33140 && iVar1 < Global_262145.f_33121){
iVar0=0;
}}elseif(iParam0==joaat("conada")){
if(!Global_262145.f_33127 && iVar1 < Global_262145.f_33108){
iVar0=0;
}}elseif(iParam0==joaat("omnisegt")){
if(!Global_262145.f_33122 && iVar1 < Global_262145.f_33103){
iVar0=0;
}}elseif(iParam0==joaat("manchez3")){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("brickade2")){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("eudora")){
if(!Global_262145.f_33971 && iVar1 < Global_262145.f_33954){
iVar0=0;
}}elseif(iParam0==joaat("powersurge")){
if(!Global_262145.f_33965 && iVar1 < Global_262145.f_33949){
iVar0=0;
}}elseif(iParam0==joaat("journey2")){
if(!Global_262145.f_33959 && iVar1 < Global_262145.f_33943){
iVar0=0;
}}elseif(iParam0==joaat("surfer3")){
if(!Global_262145.f_33960 && iVar1 < Global_262145.f_33944){
iVar0=0;
}}elseif(iParam0==joaat("entity3")){
if(!Global_262145.f_33957 && iVar1 < Global_262145.f_33941){
iVar0=0;
}}elseif(iParam0==joaat("panthere")){
if(!Global_262145.f_33968 && iVar1 < Global_262145.f_33952){
iVar0=0;
}}elseif(iParam0==joaat("boor")){
if(!Global_262145.f_33972 && iVar1 < Global_262145.f_33956){
iVar0=0;
}}elseif(iParam0==joaat("everon2")){
if(!Global_262145.f_33969 && iVar1 < Global_262145.f_33953){
iVar0=0;
}}elseif(iParam0==joaat("tulip2")){
if(!Global_262145.f_33958 && iVar1 < Global_262145.f_33942){
iVar0=0;
}}elseif(iParam0==joaat("r300")){
if(!Global_262145.f_33961 && iVar1 < Global_262145.f_33945){
iVar0=0;
}}elseif(iParam0==joaat("virtue")){
if(!Global_262145.f_33970 && iVar1 < Global_262145.f_33955){
iVar0=0;
}}elseif(iParam0==joaat("issi8")){
if(!Global_262145.f_33966 && iVar1 < Global_262145.f_33950){
iVar0=0;
}}elseif(iParam0==joaat("broadway")){
if(!Global_262145.f_33967 && iVar1 < Global_262145.f_33951){
iVar0=0;
}}elseif(iParam0==joaat("tahoma")){
if(!Global_262145.f_33964 && iVar1 < Global_262145.f_33948){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_33963 && iVar1 < Global_262145.f_33947){
iVar0=0;
}}
return iVar0;
}

int func_545(){
return 0;
}

int func_546(){
return 1;
}

int func_547(){
return 1;
}

int func_548(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_549(){
var uVar0;
if(Global_152523==2){
return 1;
}elseif(Global_152523==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
MISC::SET_BIT(&uVar0, 2);
MISC::SET_BIT(&uVar0, 4);
MISC::SET_BIT(&uVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
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

int func_550(int iParam0){
int iVar0;
char* sVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
sVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G ")){
return 1;
}
if(!func_541(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_551(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[iVar0], 0)){
if(Global_98012[iVar0]==iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[iVar0])==ENTITY::GET_ENTITY_MODEL(iParam0)){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_552(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24])){
if(iParam0==Global_77348.f_484[24]){
return 0;
}}
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0])){
if((((((((((((iVar0 !=24 && iVar0 !=21) && iVar0 !=22) && iVar0 !=23) && iVar0 !=27) && iVar0 !=30) && iVar0 !=33) && iVar0 !=28) && iVar0 !=31) && iVar0 !=34) && iVar0 !=26) && iVar0 !=29) && iVar0 !=32){
if(iParam0==Global_77348.f_484[iVar0]){
return 1;
}}}
iVar0++;
}
return 0;
}


void func_553(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(!ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
Global_98012[iVar0]=uParam0;
Global_98022[iVar0]=iParam1;
Global_98032[iVar0]=ENTITY::GET_ENTITY_MODEL(uParam0);
if(VEHICLE::IS_THIS_MODEL_A_CAR(Global_98032[iVar0])){
Global_98060[iParam1 /*3*/][0]=-1;
}else{
Global_98060[iParam1 /*3*/][1]=-1;
}
iVar0=9;
}
if(iVar0==8){
}
iVar0++;
}}


void func_554(var uParam0){
if(!func_555(*uParam0)){
VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113648.f_9087.f_99.f_58[119]);
}}


bool func_555(int iParam0){
return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_556(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*uParam0)==0){
return 0;
}
VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
}elseif(iVar1==22){
if((*uParam1)[iVar0] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, true);
if((*uParam1)[iVar0]==1){
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
}else{
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, ((*uParam1)[iVar0] - 2));
}}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) !=((*uParam1)[iVar0] - 1)){
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
if((*uParam1)[iVar0] > 0){
if(iVar1==23){
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
}elseif(iVar1==24){
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
}elseif(func_561(*uParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_532(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) !=func_559(*uParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_559(*uParam0, ((*uParam1)[38] - 1)), false);
}
func_558(uParam0);
if(func_557(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
}
return 1;
}

int func_557(int iParam0){
int iVar0;
int iVar1;
int iVar2;
char cVar3[32];
if((ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=0;
while (iVar0 < 49){
iVar1=iVar0;
if(((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21) || iVar1==22){
}elseif(VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) !=-1){
StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
iVar2=MISC::GET_HASH_KEY(&cVar3);
if(iVar2 !=0){
if(iVar2==MISC::GET_HASH_KEY("MNU_CAGE") || iVar2==MISC::GET_HASH_KEY("SABRE_CAG")){
return 1;
}}}
iVar0++;
}}
return 0;
}


void func_558(var uParam0){
switch (ENTITY::GET_ENTITY_MODEL(*uParam0)){
case joaat("starling"):
if(VEHICLE::GET_VEHICLE_MOD(*uParam0, 4)==0){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
}else{
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
}
break;
case joaat("slamtruck"):
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
break;
default:
break;
}}

int func_559(int iParam0, int iParam1){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("tornado5"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 4;
break;
}
break;
case joaat("faction3"):
return 3;
break;
}
iVar0=func_560(iParam0, 38) + 1;
iVar1=func_560(iParam0, 24) + 1;
fVar2=(to_float(iParam1 + 1) / to_float(iVar0));
iVar3=(floor((to_float(iVar1) * fVar2)) - 1);
if(iVar3 < 0){
iVar3=0;
}
if(iVar3 >=iVar0){
iVar3=(iVar0 - 1);
}
return iVar3;
}
return 0;
}

int func_560(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(uParam0, Global_152535)) && Global_152536==iParam1){
return Global_152537;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_561(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_561(var uParam0, int iParam1, int iParam2){
if(!func_562() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_562(){
return 0;
}

int func_563(var uParam0, var uParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}elseif(Global_113648.f_20120.f_261){
*uParam0={
Global_113648.f_20120.f_267 
};
*uParam1=Global_113648.f_20120.f_271;
return 1;
}
return 0;
}


void func_564(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
if(iParam0==145 || Global_98022[iVar0]==iParam0){
if(iParam1==0 || ENTITY::GET_ENTITY_MODEL(Global_98012[iVar0])==func_388(iParam0, iParam1)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98012[iVar0], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98012[iVar0], 0, 1);
VEHICLE::DELETE_VEHICLE(&(Global_98012[iVar0]));
Global_98022[iVar0]=145;
}}}}
iVar0++;
}}


void func_565(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_570(&(Global_77348.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77348.f_555[0 /*21*/], iParam2) <=fParam1){
func_566(iVar0);
}}
iVar0++;
}}


void func_566(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_570(&(Global_77348.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0])){
bVar0=true;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_139[iParam0], 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77348.f_139[iParam0], 0)){
bVar0=false;
}}}
if(bVar0){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], 1, 1);
VEHICLE::DELETE_VEHICLE(&(Global_77348.f_139[iParam0]));
}}
Global_77348[iParam0]=1;
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13)){
if(((((iParam0==24 && func_254(iParam0, 0)) && Global_78257.f_66==0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] !=0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3) && (!func_568(0, Global_77348.f_555[0 /*21*/].f_12) || !func_568(1, Global_77348.f_555[0 /*21*/].f_12))){
func_567(&(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]), &Global_78257);
Global_78335=Global_113648.f_32751.f_5591;
}
func_252(iParam0, 0);
}}}


void func_567(var uParam0, var uParam1){
uParam1->f_66=uParam0->f_66;
*uParam1=*uParam0;
uParam1->f_1={
uParam0->f_1 
};
uParam1->f_5=uParam0->f_5;
uParam1->f_6=uParam0->f_6;
uParam1->f_7=uParam0->f_7;
uParam1->f_8=uParam0->f_8;
uParam1->f_9={
uParam0->f_9 
};
uParam1->f_59={
uParam0->f_59 
};
uParam1->f_62=uParam0->f_62;
uParam1->f_63=uParam0->f_63;
uParam1->f_64=uParam0->f_64;
uParam1->f_65=uParam0->f_65;
uParam1->f_77=uParam0->f_77;
uParam1->f_67=uParam0->f_67;
uParam1->f_69=uParam0->f_69;
uParam1->f_68=uParam0->f_68;
uParam1->f_71=uParam0->f_71;
uParam1->f_72=uParam0->f_72;
uParam1->f_73=uParam0->f_73;
uParam1->f_74=uParam0->f_74;
uParam1->f_75=uParam0->f_75;
uParam1->f_76=uParam0->f_76;
}

int func_568(int iParam0, int iParam1){
int iVar0;
switch (iParam1){
case 0:
iVar0=0;
break;
case 1:
iVar0=1;
break;
case 2:
iVar0=2;
break;
}
if(iParam0 < 0 || iParam0 >=func_569(&(Global_113648.f_32751.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_541(Global_113648.f_32751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_569(var uParam0){
return *uParam0;
}

int func_570(var uParam0, int iParam1){
int iVar0;
int iVar1;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
StringCopy(&(uParam0->f_5), "", 16);
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=145;
uParam0->f_13=-1;
uParam0->f_14=0;
uParam0->f_15={
0f, 0f, 0f 
};
uParam0->f_18={
0f, 0f, 0f 
};
switch (iParam1){
case 0:
*uParam0={
-831.8538f, 172.1154f, 69.9058f 
};
uParam0->f_3=157.5705f;
uParam0->f_4=func_388(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 1:
*uParam0={
1970.943f, 3801.684f, 31.1396f 
};
uParam0->f_3=301.3964f;
uParam0->f_4=func_388(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 2:
*uParam0={
-22.6297f, -1439.137f, 29.6549f 
};
uParam0->f_3=180.0808f;
uParam0->f_4=func_388(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 3:
*uParam0={
-22.5229f, -1434.699f, 29.6552f 
};
uParam0->f_3=141.6114f;
uParam0->f_4=func_388(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 4:
*uParam0={
10.9281f, 545.669f, 174.7951f 
};
uParam0->f_3=61.392f;
uParam0->f_4=func_388(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 5:
*uParam0={
6.1093f, 544.9742f, 174.2835f 
};
uParam0->f_3=92.1548f;
uParam0->f_4=func_388(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 6:
*uParam0={
1981.416f, 3808.131f, 31.1384f 
};
uParam0->f_3=117.2557f;
uParam0->f_4=func_388(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 7:
*uParam0={
-1158.488f, -1529.367f, 3.8995f 
};
uParam0->f_3=35.7505f;
uParam0->f_4=func_388(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 8:
*uParam0={
148.2868f, -1270.569f, 28.2252f 
};
uParam0->f_3=208.4685f;
uParam0->f_4=func_388(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 9:
*uParam0={
1459.509f, -1380.45f, 78.3259f 
};
uParam0->f_3=99.6211f;
uParam0->f_4=joaat("scorcher");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 10:
*uParam0={
-1518.947f, -1387.865f, -0.5134f 
};
uParam0->f_3=98.3867f;
uParam0->f_4=joaat("seashark");
iVar0=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 11:
*uParam0={
353.0926f, 3577.593f, 32.351f 
};
uParam0->f_3=16.6205f;
uParam0->f_4=joaat("duster");
iVar0=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 12:
uParam0->f_14=0;
*uParam0={
-1652.004f, -3142.348f, 12.9921f 
};
uParam0->f_3=329.1082f;
uParam0->f_12=0;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 13:
uParam0->f_14=1;
*uParam0={
-1271.649f, -3380.685f, 12.9451f 
};
uParam0->f_3=329.5137f;
uParam0->f_12=1;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 14:
uParam0->f_14=2;
*uParam0={
1735.586f, 3294.531f, 40.1651f 
};
uParam0->f_3=194.9525f;
uParam0->f_12=2;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 15:
uParam0->f_14=3;
*uParam0={
-846.27f, -1363.19f, 0.22f 
};
uParam0->f_3=108.78f;
uParam0->f_12=0;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 16:
uParam0->f_14=4;
*uParam0={
-849.47f, -1354.99f, 0.24f 
};
uParam0->f_3=109.84f;
uParam0->f_12=1;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 17:
uParam0->f_14=5;
*uParam0={
-852.47f, -1346.2f, 0.21f 
};
uParam0->f_3=108.76f;
uParam0->f_12=2;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 18:
uParam0->f_14=6;
*uParam0={
-745.857f, -1433.904f, 4.0005f 
};
uParam0->f_12=0;
uParam0->f_13=360;
uParam0->f_15={
-756.2952f, -1441.609f, 2.9184f 
};
uParam0->f_18={
-738.0606f, -1423.068f, 8.2835f 
};
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 19:
uParam0->f_14=7;
*uParam0={
-761.8486f, -1453.829f, 4.0005f 
};
uParam0->f_12=1;
uParam0->f_13=360;
uParam0->f_15={
-772.8158f, -1459.957f, 3.2894f 
};
uParam0->f_18={
-754.3353f, -1440.836f, 8.3334f 
};
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 20:
uParam0->f_14=8;
*uParam0={
1769.3f, 3244f, 41.1f 
};
uParam0->f_12=2;
uParam0->f_13=360;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 21:
uParam0->f_14=9;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 22:
uParam0->f_14=10;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=1;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 23:
uParam0->f_14=11;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=2;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 26:
case 27:
case 28:
iVar1=(iParam1 - 26);
uParam0->f_14=(12 + iVar1);
*uParam0={
196.2794f, -1020.479f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 29:
case 30:
case 31:
iVar1=(iParam1 - 29);
uParam0->f_14=(15 + iVar1);
*uParam0={
199.8872f, -1020.048f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 32:
case 33:
case 34:
iVar1=(iParam1 - 32);
uParam0->f_14=(18 + iVar1);
*uParam0={
203.6006f, -1019.776f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 24:
uParam0->f_14=21;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
iVar0=1;
break;
case 25:
uParam0->f_14=22;
*uParam0={
723.2515f, -632.0496f, 27.1484f 
};
uParam0->f_3=12.9316f;
uParam0->f_4=joaat("tailgater");
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
iVar0=1;
break;
case 35:
*uParam0={
-51.23f, 3111.9f, 24.95f 
};
uParam0->f_3=46.78f;
uParam0->f_4=joaat("proptrailer");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 36:
*uParam0={
-55.7984f, -1096.586f, 25.4223f 
};
uParam0->f_3=308.0596f;
uParam0->f_4=joaat("bjxl");
uParam0->f_10=126;
uParam0->f_11=126;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 13);
iVar0=1;
break;
case 37:
*uParam0={
-2892.93f, 3192.37f, 11.66f 
};
uParam0->f_3=-132.35f;
uParam0->f_4=joaat("velum");
uParam0->f_10=157;
uParam0->f_11=157;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 13);
iVar0=1;
break;
case 38:
*uParam0={
1744.308f, 3270.673f, 40.2076f 
};
uParam0->f_3=125f;
uParam0->f_4=joaat("cargobob3");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 39:
*uParam0={
1751.44f, 3322.643f, 42.1855f 
};
uParam0->f_3=268.134f;
uParam0->f_4=joaat("submersible");
MISC::SET_BIT(&(uParam0->f_9), 23);
iVar0=1;
break;
case 41:
*uParam0={
1377.104f, -2076.2f, 52f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("towtruck");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 40:
*uParam0={
1380.42f, -2072.77f, 51.7607f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("trash");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 42:
*uParam0={
1359.389f, 3618.441f, 33.8907f 
};
uParam0->f_3=108.2337f;
uParam0->f_4=joaat("barracks");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 43:
*uParam0={
693.1154f, -1018.155f, 21.6387f 
};
uParam0->f_3=177.6454f;
uParam0->f_4=joaat("firetruk");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 44:
*uParam0={
-73.6963f, 495.124f, 143.5226f 
};
uParam0->f_3=155.5994f;
uParam0->f_4=joaat("vacca");
iVar0=1;
break;
case 45:
*uParam0={
-67.6314f, 891.8266f, 234.5348f 
};
uParam0->f_3=294.993f;
uParam0->f_4=joaat("surano");
iVar0=1;
break;
case 46:
*uParam0={
533.9048f, -169.2469f, 53.7005f 
};
uParam0->f_3=1.2998f;
uParam0->f_4=joaat("tornado2");
iVar0=1;
break;
case 47:
*uParam0={
-726.8914f, -408.6952f, 34.0416f 
};
uParam0->f_3=267.7392f;
uParam0->f_4=joaat("superd");
iVar0=1;
break;
case 48:
*uParam0={
-1321.519f, 261.3993f, 61.5709f 
};
uParam0->f_3=350.7697f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 49:
*uParam0={
-1267.999f, 451.6463f, 93.7071f 
};
uParam0->f_3=48.9311f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 50:
*uParam0={
-1062.076f, -226.7637f, 37.157f 
};
uParam0->f_3=234.2767f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 51:
*uParam0={
68.16914f, -1558.958f, 29.46904f 
};
uParam0->f_3=49.90575f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 52:
*uParam0={
589.4399f, 2736.708f, 42.03316f 
};
uParam0->f_3=-175.7105f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 53:
*uParam0={
-488.774f, -344.5721f, 34.36356f 
};
uParam0->f_3=82.4042f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 54:
*uParam0={
288.8808f, -585.4728f, 43.15428f 
};
uParam0->f_3=-20.80707f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 55:
*uParam0={
304.8294f, -1383.674f, 31.67744f 
};
uParam0->f_3=-41.11603f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 56:
*uParam0={
1126.194f, -1481.486f, 34.7016f 
};
uParam0->f_3=-91.43369f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 57:
*uParam0={
-1598.36f, 5252.84f, 0f 
};
uParam0->f_3=28.14f;
uParam0->f_4=joaat("submersible");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 58:
*uParam0={
-1602.62f, 5260.37f, 0.86f 
};
uParam0->f_3=25.32f;
uParam0->f_4=joaat("dinghy");
uParam0->f_13=404;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 59:
*uParam0={
2116.571f, 4763.279f, 40.1596f 
};
uParam0->f_3=198.723f;
uParam0->f_4=joaat("bfinjection");
iVar0=1;
break;
case 60:
*uParam0={
1133.21f, 120.2f, 80.9f 
};
uParam0->f_3=134.4f;
if(func_549()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 61:
*uParam0={
-806.31f, -2679.65f, 13.9f 
};
uParam0->f_3=150.54f;
if(func_549()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 62:
*uParam0={
1985.85f, 3828.96f, 31.98f 
};
uParam0->f_3=-16.58f;
uParam0->f_4=joaat("blazer3");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 63:
*uParam0={
3870.75f, 4464.67f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=joaat("submersible2");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
MISC::SET_BIT(&(uParam0->f_9), 30);
iVar0=1;
break;
case 64:
*uParam0={
1257.729f, -2564.474f, 41.717f 
};
uParam0->f_3=284.5561f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 65:
*uParam0={
643.2823f, 3014.152f, 42.2733f 
};
uParam0->f_3=128.0554f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 66:
*uParam0={
38.9368f, 850.8677f, 196.3f 
};
uParam0->f_3=311.6813f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 67:
*uParam0={
1333.875f, 4262.226f, 30.78f 
};
uParam0->f_3=262.5293f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
}
if(MISC::IS_BIT_SET(uParam0->f_9, 10)){
uParam0->f_4=Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(((((uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra")) || uParam0->f_4==joaat("luxor")) || uParam0->f_4==joaat("shamal")) || uParam0->f_4==joaat("titan")) || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678.8f, 3229.6f, 41.8f 
};
uParam0->f_3=106.0906f;
}}
if(!func_413(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_413(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_413(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_571(struct<3> Param0, float fParam1){
return func_572(&(Global_107196.f_2890), Param0, fParam1, 0);
}

int func_572(var uParam0, struct<3> Param1, float fParam2, bool bParam3){
int iVar0;
struct<3> Var1;
bool bVar2;
var uVar3;
int iVar4;
if(func_595(uParam0)){
if(func_413(Param1, 0f, 0f, 0f, 0)){
Param1={
*uParam0 
};
fParam2=uParam0->f_6;
}
if(uParam0->f_12.f_66==joaat("monster") || uParam0->f_12.f_66==joaat("marshall")){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1)){
Param1={
-850.93f, 158.82f, 65.7f 
};
fParam2=89.5f;
}}
if(func_594(uParam0)){
MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
func_565(Param1, 5f, 0);
iVar0=VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
if(vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <=3f){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
}
func_576(iVar0, &(uParam0->f_12), 0, 1);
bVar2=true;
if(VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66)){
if(!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3)){
bVar2=false;
}}
if(bVar2){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
if(uParam0->f_7==1){
if(bParam3){
if(VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_564(uParam0->f_11, 1);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_564(uParam0->f_11, 2);
}}
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
func_553(iVar0, uParam0->f_11);
}elseif((!func_574(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning")){
iVar4=func_573(iVar0);
if(iVar4==-1){
uParam0->f_10=0;
}else{
func_566(iVar4);
}}
if(((Global_100681 !=13 && Global_100681 !=10) && Global_100681 !=11) && Global_100681 !=12){
if(MISC::GET_HASH_KEY(&(Global_100681.f_3))==Global_78336){
if(uParam0->f_12.f_66==Global_113648.f_32751.f_69[21 /*78*/].f_66){
func_252(24, 0);
func_566(24);
}}}
if(uParam0->f_9==1){
func_538(iVar0, uParam0->f_11);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
}
return iVar0;
}}
return iVar0;
}

int func_573(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=0;
while (iVar0 < 68){
if((ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_77348.f_484[iVar0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[iVar0], 0)){
VEHICLE::GET_VEHICLE_COLOURS(uParam0, &iVar1, &iVar2);
VEHICLE::GET_VEHICLE_COLOURS(Global_77348.f_484[iVar0], &iVar3, &iVar4);
if(((ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(Global_77348.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77348.f_484[iVar0])) && iVar1==iVar2) && iVar3==iVar4){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_574(int iParam0, struct<3> Param1, bool bParam2){
int iVar0;
var uVar1[3];
int iVar2;
int iVar3;
iVar0=ENTITY::GET_ENTITY_MODEL(uParam0);
switch (iVar0){
case joaat("cargobob"):
if(func_575(iParam0, Global_77348.f_139[38], 0)){
func_566(38);
return 1;
}
break;
case joaat("firetruk"):
if(func_575(iParam0, Global_77348.f_139[43], 1)){
func_566(43);
return 1;
}
break;
case joaat("cuban800"):
iVar2=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
iVar3=0;
while (iVar3 <=(iVar2 - 1)){
if(func_575(iParam0, uVar1[iVar3], 1) && func_371(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0)){
if((!bParam2 || func_413(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f){
VEHICLE::DELETE_VEHICLE(&iParam0);
return 1;
}else{
return 0;
}}
iVar3++;
}
break;
case joaat("luxor2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[14], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_77348.f_484[14])==joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77348.f_484[14])){
func_566(14);
return 1;
}}
break;
case joaat("swift2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[20], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_77348.f_484[20])==joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77348.f_484[20])){
func_566(20);
return 1;
}}
break;
}
return 0;
}

int func_575(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if((ENTITY::DOES_ENTITY_EXIST(uParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(bParam2){
VEHICLE::GET_VEHICLE_COLOURS(uParam0, &iVar0, &iVar1);
VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
if(iVar0==iVar2 && iVar1==iVar3){
return 1;
}}else{
return 1;
}}
return 0;
}


void func_576(int iParam0, var uParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(uParam1->f_66 !=0){
}
if(!func_587(iParam0)){
if(MISC::GET_HASH_KEY(&(uParam1->f_1)) !=0){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
}
if(*uParam1 >=0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
}}
if(uParam1->f_66==joaat("sovereign")){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
}elseif(uParam1->f_66==joaat("casco")){
iVar0=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_391(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_391(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_391(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_391(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_391(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_391(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_391(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_391(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_391(iVar6));
}
iVar6++;
}}
if(uParam1->f_66==joaat("nightshark")){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, 0);
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 5) !=-1){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, 1);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 13)){
VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 12)){
VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
}
if(uParam1->f_5 !=-1 && uParam1->f_6 !=-1){
if(func_585(uParam1->f_5) || func_585(uParam1->f_6)){
}else{
VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
}}
if(uParam1->f_7 < 0){
uParam1->f_7=0;
}
if(uParam1->f_8 < 0){
uParam1->f_8=0;
}
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_584(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_583()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_393(uParam1->f_66)){
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
}else{
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 9)){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}
if(bParam2){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
}
VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_77, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_77, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_77, 31));
VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_77, 10));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >=0){
VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
}
if(uParam1->f_69 > -1 && uParam1->f_69 < 255){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(uParam1->f_69==6){
func_582(iParam0, uParam1->f_69);
}}else{
func_582(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_556(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_391(iVar7 + 1))){
if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
}}elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
}
iVar7++;
}}
if((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("le7b")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 0)==-1){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
}}
if(((func_577() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
if(!MISC::IS_BIT_SET(uParam1->f_77, 23)){
if(MISC::IS_BIT_SET(uParam1->f_77, 22)){
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
}}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 27)){
DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
}else{
DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
}}}

int func_577(){
if((((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19) && Global_4718592.f_2==20){
return 0;
}
if(func_580(7)){
if(func_579(Global_2672505.f_4.f_16) || func_578(Global_2672505.f_4.f_16)){
return 0;
}}
return 1;
}

int func_578(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}

int func_579(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_286(iParam0, 9);
}
return 0;
}


bool func_580(int iParam0){
return func_581(&(Global_2672505.f_184), iParam0);
}


var func__581(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}


void func_582(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
iVar1=VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1);
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("peyote2")){
return;
}
if(iVar0==-1){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1==1);
}}}


bool func_583(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_584(int iParam0){
var uVar0;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(uVar0, 4);
}}}
return 0;
}

int func_585(int iParam0){
if(!func_562() && func_586(iParam0)){
return 1;
}
return 0;
}

int func_586(int iParam0){
switch (iParam0){
case 161:
case 164:
case 170:
case 171:
case 183:
case 191:
case 199:
case 209:
case 216:
case 218:
return 1;
break;
}
return 0;
}

int func_587(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_593(PLAYER::PLAYER_ID(), -1)){
uParam0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
if(func_589(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_588(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_588(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_589(int iParam0){
if(func_592(iParam0)==233){
return func_590(iParam0);
}
return -1;
}

int func_590(int iParam0){
if(func_591(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_591(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_592(int iParam0){
if(func_591(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_593(int iParam0, int iParam1){
var uVar0;
if(func_508(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}

int func_594(var uParam0){
if(func_595(uParam0)){
if(STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66)){
return 1;
}else{
return 0;
}
return 1;
}else{
return 0;
}
return 1;
}

int func_595(var uParam0){
if(uParam0->f_12.f_66==0){
return 0;
}
if(!func_541(uParam0->f_12.f_66, 0, -1)){
return 0;
}
if(uParam0->f_12.f_66==joaat("stunt") && func_371(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)){
return 0;
}
return 1;
}


bool func_596(){
return func_594(&(Global_107196.f_2890));
}


void func_597(){
func_598(&(Global_107196.f_2890));
}


void func_598(var uParam0){
if(func_595(uParam0)){
STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
}}

int func_599(int iParam0, int iParam1, int iParam2, int iParam3){
if(VEHICLE::IS_THIS_MODEL_A_BOAT(Global_107196.f_2890.f_12.f_66)){
return 0;
}
if(iParam1==0 && VEHICLE::IS_THIS_MODEL_A_HELI(Global_107196.f_2890.f_12.f_66)){
return 0;
}
if(iParam2==0 && func_601(Global_107196.f_2890.f_12.f_66)){
return 0;
}
if(iParam3==0 && VEHICLE::IS_THIS_MODEL_A_PLANE(Global_107196.f_2890.f_12.f_66)){
return 0;
}
if(iParam0==1){
if(!func_600()){
return 0;
}}
return 1;
}

int func_600(){
float fVar0;
if(!func_602()){
return 0;
}
if((VEHICLE::IS_THIS_MODEL_A_BOAT(Global_107196.f_2890.f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_PLANE(Global_107196.f_2890.f_12.f_66)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_107196.f_2890.f_12.f_66)){
return 0;
}
fVar0=VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Global_107196.f_2890.f_12.f_66);
if(fVar0 < 37f){
return 0;
}
return 1;
}

int func_601(int iParam0){
switch (iParam0){
case joaat("police"):
case joaat("police2"):
case joaat("police3"):
case joaat("police4"):
case joaat("polmav"):
case joaat("policeb"):
case joaat("policet"):
case joaat("policeold2"):
case joaat("policeold1"):
case joaat("sheriff"):
case joaat("sheriff2"):
return 1;
break;
}
return 0;
}


bool func_602(){
return func_595(&(Global_107196.f_2890));
}

int func_603(){
if(Global_100681==10 || Global_100681==9){
return 1;
}
return 0;
}


void func_604(){
func_618();
func_617();
func_616();
func_613();
PED::ADD_RELATIONSHIP_GROUP("N1B_PLAYER_HATE_GROUP", &iLocal_315);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_315, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_315);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_315, joaat("COP"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_315);
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
func_606(64, 2, 0);
MISC::CLEAR_BIT(&(Global_113648.f_18576.f_382), 3);
func_605();
}


void func_605(){
int iVar0;
var uVar1;
if(ENTITY::DOES_ENTITY_EXIST(Local_57.f_35[0])){
iLocal_490=Local_57.f_35[0];
}else{
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_490)){
iLocal_490=VEHICLE::CREATE_VEHICLE(iLocal_310, -1010.97f, 359.91f, 70.65f, 331.46f, 1, 1, 0);
}
if(func_482(iLocal_490)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_490, 1084227584);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_490, 97, 97);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_490, 13.5f);
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_490, 2, 0);
VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_490, 2, 0, 1);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_490, 2, 0, 1f);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_490);
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo", 3)){
STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
if(STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b")){
TASK::TASK_VEHICLE_PLAY_ANIM(iLocal_490, "rcmnigel1b", "idle_speedo");
}}}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_310);
func_56(&(Local_57.f_41[0]));
if(!OBJECT::DOES_PICKUP_EXIST(Local_298.f_0)){
Local_298.f_0=OBJECT::CREATE_PICKUP_ROTATE(Local_298.f_6, Local_298.f_3, Local_298.f_8, Local_298.f_7, -1, 0, 1, Local_298.f_1);
}
if(OBJECT::DOES_PICKUP_EXIST(Local_298.f_0)){
if(OBJECT::DOES_PICKUP_OBJECT_EXIST(Local_298.f_0)){
}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_298.f_1);
if(ENTITY::DOES_ENTITY_EXIST(Local_57.f_28[0])){
Local_297[0 /*14*/].f_8=Local_57.f_28[0];
}else{
if(!ENTITY::DOES_ENTITY_EXIST(Local_297[0 /*14*/].f_8)){
iLocal_275=1;
Local_297[0 /*14*/].f_8=PED::CREATE_PED(26, Local_297[0 /*14*/].f_10, Local_464[iLocal_275 /*3*/], fLocal_269[iLocal_275], 1, 1);
}
if(func_32(Local_297[0 /*14*/].f_8)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_297[0 /*14*/].f_8, Local_464[iLocal_275 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(Local_297[0 /*14*/].f_8, fLocal_269[iLocal_275]);
TASK::TASK_PLAY_ANIM(Local_297[0 /*14*/].f_8, "rcmnigel1b", "Swimming_Idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
}}
if(func_32(Local_297[0 /*14*/].f_8)){
PED::SET_PED_DIES_IN_WATER(Local_297[0 /*14*/].f_8, 0);
PED::SET_PED_LEG_IK_MODE(Local_297[0 /*14*/].f_8, 2);
PED::SET_PED_ALTERNATE_WALK_ANIM(Local_297[0 /*14*/].f_8, &cLocal_434, "walk_tyler", 1090519040, 1);
TASK::TASK_PLAY_ANIM(Local_297[0 /*14*/].f_8, "rcmnigel1b", "Swimming_Idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[0 /*14*/].f_10);
if(ENTITY::DOES_ENTITY_EXIST(Local_57.f_28[1])){
Local_297[1 /*14*/].f_8=Local_57.f_28[1];
}else{
if(!ENTITY::DOES_ENTITY_EXIST(Local_297[1 /*14*/].f_8)){
Local_297[1 /*14*/].f_8=PED::CREATE_PED(26, Local_297[1 /*14*/].f_10, -1058.43f, 362.78f, 69.86f, 130.45f, 1, 1);
}
if(func_32(Local_297[1 /*14*/].f_8)){
PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 3, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_297[1 /*14*/].f_8, 8, 0, 1, 0);
func_339(0);
}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[1 /*14*/].f_10);
iVar0=0;
while (iVar0 <=1){
if(func_32(Local_297[iVar0 /*14*/].f_8)){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_297[iVar0 /*14*/].f_8, 1);
PED::SET_PED_CAN_BE_TARGETTED(Local_297[iVar0 /*14*/].f_8, 1);
PED::SET_PED_DIES_WHEN_INJURED(Local_297[iVar0 /*14*/].f_8, 1);
PED::SET_PED_DIES_IN_WATER(Local_297[iVar0 /*14*/].f_8, 0);
PED::SET_PED_MAX_TIME_UNDERWATER(Local_297[iVar0 /*14*/].f_8, 60f);
TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_297[iVar0 /*14*/].f_8, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_297[iVar0 /*14*/].f_8, 1, 1);
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_297[iVar0 /*14*/].f_8, 1);
AUDIO::STOP_PED_SPEAKING(Local_297[iVar0 /*14*/].f_8, 1);
if(PED::IS_PED_IN_GROUP(Local_297[iVar0 /*14*/].f_8)){
PED::REMOVE_PED_FROM_GROUP(Local_297[iVar0 /*14*/].f_8);
}
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_297[iVar0 /*14*/].f_8, iLocal_315);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_297[iVar0 /*14*/].f_8, 1);
Local_297[iVar0 /*14*/].f_9=0;
Local_297[iVar0 /*14*/].f_13=0;
Local_297[iVar0 /*14*/].f_12=0;
Local_297[iVar0 /*14*/].f_11=0;
}
iVar0++;
}
iVar0=0;
while (iVar0 <=1){
if(!ENTITY::DOES_ENTITY_EXIST(Local_306[iVar0 /*9*/])){
Local_306[iVar0 /*9*/]=OBJECT::CREATE_OBJECT(Local_306[iVar0 /*9*/].f_1, Local_306[iVar0 /*9*/].f_2, 1, 1, 0);
}
if(func_482(Local_306[iVar0 /*9*/])){
if(iVar0==0 || iVar0==1){
ENTITY::SET_ENTITY_ROTATION(Local_306[iVar0 /*9*/], Local_306[iVar0 /*9*/].f_5, 2, 1);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_306[iVar0 /*9*/], Local_306[iVar0 /*9*/].f_2, 0, 0, 1);
}
PHYSICS::ACTIVATE_PHYSICS(Local_306[iVar0 /*9*/]);
}
iVar0++;
}
iVar0=0;
while (iVar0 <=1){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_306[iVar0 /*9*/].f_1);
iVar0++;
}
if(func_482(iLocal_490)){
uVar1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_490, "chassis");
iVar0=0;
while (iVar0 <=2){
if(!ENTITY::DOES_ENTITY_EXIST(Local_305[iVar0 /*9*/])){
Local_305[iVar0 /*9*/]=OBJECT::CREATE_OBJECT(Local_305[iVar0 /*9*/].f_1, Local_305[iVar0 /*9*/].f_2, 1, 1, 0);
}
if(func_482(Local_305[iVar0 /*9*/])){
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_305[iVar0 /*9*/], iLocal_490, uVar1, Local_305[iVar0 /*9*/].f_2, Local_305[iVar0 /*9*/].f_5, 1, 1, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_305[iVar0 /*9*/], 0);
ENTITY::SET_ENTITY_DYNAMIC(Local_305[iVar0 /*9*/], 0);
ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_305[iVar0 /*9*/], 0);
ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_305[iVar0 /*9*/], 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_305[iVar0 /*9*/].f_1);
}
iVar0++;
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_57.f_35[1])){
uLocal_489=Local_57.f_35[1];
}else{
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_489)){
iLocal_489=VEHICLE::CREATE_VEHICLE(iLocal_307, -1018.26f, 357.76f, 70.2f, 339.52f, 1, 1, 0);
}
if(func_482(iLocal_489)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_489, 1084227584);
VEHICLE::SET_VEHICLE_COLOURS(iLocal_489, 27, 27);
}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_307);
if(ENTITY::DOES_ENTITY_EXIST(Local_57.f_28[2])){
Local_296.f_8=Local_57.f_28[2];
}else{
if(!ENTITY::DOES_ENTITY_EXIST(Local_296.f_8)){
Local_296.f_8=PED::CREATE_PED(26, Local_296.f_10, -1012.57f, 357.48f, 70.62f, -28.55f, 1, 1);
}
if(func_32(Local_296.f_8)){
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_296.f_8);
ENTITY::SET_ENTITY_HEALTH(Local_296.f_8, 160, 0);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_296.f_8, -1012.57f, 357.48f, 70.62f, 0, 0, 1);
PED::SET_PED_DIES_WHEN_INJURED(Local_296.f_8, 1);
STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
if(STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b")){
TASK::TASK_PLAY_ANIM(Local_296.f_8, "rcmnigel1b", "idle_gardener", 1000f, -8f, -1, 270337, 0, 0, 0, 0);
}}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_296.f_10);
if(func_32(Local_296.f_8)){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_296.f_8, 1);
PED::SET_PED_CAN_BE_TARGETTED(Local_296.f_8, 1);
PED::SET_PED_DIES_IN_WATER(Local_296.f_8, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_296.f_8, 1, 1);
PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_296.f_8, 1);
AUDIO::STOP_PED_SPEAKING(Local_296.f_8, 1);
PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_296.f_8, 1);
PED::BLOCK_PED_FROM_GENERATING_DEAD_BODY_EVENTS_WHEN_DEAD(Local_296.f_8, 1);
if(PED::IS_PED_IN_GROUP(Local_296.f_8)){
PED::REMOVE_PED_FROM_GROUP(Local_296.f_8);
}
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_296.f_8, iLocal_315);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_296.f_8, 1);
Local_296.f_9=0;
Local_296.f_13=0;
Local_296.f_12=0;
Local_296.f_11=0;
}}


void func_606(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_8939=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
func_291();
if(iParam1==4){
func_612(iParam0, 0, 1);
func_612(iParam0, 1, 1);
func_612(iParam0, 2, 1);
func_611(iParam0, 0, 1);
func_611(iParam0, 1, 1);
func_611(iParam0, 2, 1);
}else{
if(func_610(iParam0, iParam1)==1 && func_609(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_612(iParam0, iVar0, 1);
func_611(iParam0, iVar0, 1);
if(iParam0==172 && !Global_2793046.f_6891){
bParam2=false;
}
if(iParam0==171 && !Global_2793046.f_6890){
bParam2=false;
}
if(iParam0==173 && !Global_2793046.f_6890){
bParam2=false;
}}
if(bParam2){
if(!Global_78558){
if(iParam1 !=4){
if(Global_20383 !=iParam1){
Global_8912[iParam1 /*4*/]={
func_608(iParam0) 
};
Global_8929[iParam1]=1;
Global_8934[iParam1]=iParam0;
}elseif(iParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
func_608(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_607();
}}else{
Global_8863[1 /*6*/]={
func_608(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_607();
}}else{
Global_8863[1 /*6*/]={
func_608(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_607();
}}}}


void func_607(){
char cVar0[64];
char cVar1[64];
char* sVar2;
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
if(Global_8958==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
StringCopy(&cVar1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8863[1 /*6*/])), 64);
sVar2=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8863[1 /*6*/]));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8253, false);
}


struct<4> func_608(int iParam0){
return Global_2028[iParam0 /*29*/].f_3;
}

int func_609(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_610(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_12[iParam1];
}


void func_611(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_612(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}


void func_613(){
STREAMING::REQUEST_MODEL(Local_298.f_1);
STREAMING::REQUEST_MODEL(Local_297[0 /*14*/].f_10);
STREAMING::REQUEST_MODEL(Local_297[1 /*14*/].f_10);
STREAMING::REQUEST_MODEL(Local_296.f_10);
STREAMING::REQUEST_MODEL(iLocal_307);
STREAMING::REQUEST_MODEL(iLocal_310);
STREAMING::REQUEST_ANIM_DICT("rcmnigel1b");
STREAMING::REQUEST_ANIM_DICT(&cLocal_434);
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_WHISTLES", 0, -1);
HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1B", 0);
while (((((((((((!func_615() || !func_614()) || !STREAMING::HAS_MODEL_LOADED(Local_298.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_297[0 /*14*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_297[1 /*14*/].f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_296.f_10)) || !STREAMING::HAS_MODEL_LOADED(iLocal_307)) || !STREAMING::HAS_MODEL_LOADED(iLocal_310)) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel1b")) || !STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_434)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1B_WHISTLES", 0, -1)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
wait(0);
}}

int func_614(){
int iVar0;
iVar0=0;
while (iVar0 <=2){
STREAMING::REQUEST_MODEL(Local_305[iVar0 /*9*/].f_1);
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
if(!STREAMING::HAS_MODEL_LOADED(Local_305[iVar0 /*9*/].f_1)){
return 0;
}
iVar0++;
}
return 1;
}

int func_615(){
int iVar0;
iVar0=0;
while (iVar0 <=1){
STREAMING::REQUEST_MODEL(Local_306[iVar0 /*9*/].f_1);
iVar0++;
}
iVar0=0;
while (iVar0 <=1){
if(!STREAMING::HAS_MODEL_LOADED(Local_306[iVar0 /*9*/].f_1)){
return 0;
}
iVar0++;
}
return 1;
}


void func_616(){
MISC::ENABLE_DISPATCH_SERVICE(2, 0);
MISC::ENABLE_DISPATCH_SERVICE(3, 0);
MISC::ENABLE_DISPATCH_SERVICE(4, 0);
MISC::ENABLE_DISPATCH_SERVICE(5, 0);
PED::SET_CREATE_RANDOM_COPS(0);
PED::SET_PED_NON_CREATION_AREA(Local_467, Local_466);
uLocal_317=PED::ADD_SCENARIO_BLOCKING_AREA(Local_467, Local_466, 0, 1, 1, 1);
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_467, Local_466, 0, 1);
if(((func_603() || func_483(0)) || func_47()) || !bLocal_252){
VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_467, Local_466, 0);
MISC::CLEAR_AREA(Local_465, 35f, 1, 0, 0, 0);
MISC::CLEAR_AREA_OF_VEHICLES(Local_465, 27f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_PEDS(Local_465, 27f, 0);
}
func_19(0, 0f, 0, 0);
func_18(0, 4, 1);
func_19(1, 0f, 0, 0);
func_18(1, 4, 1);
func_19(2, 0f, 0, 0);
func_18(2, 4, 1);
func_19(3, 0f, 0, 0);
func_18(3, 4, 1);
func_19(4, 0f, 0, 0);
func_18(4, 4, 1);
func_19(5, 0f, 0, 0);
func_18(5, 4, 1);
}


void func_617(){
int iVar0;
iVar0=func_274();
if(iVar0==-1){
return;
}
Global_112735[iVar0 /*10*/]=1;
}


void func_618(){
int iVar0;
iVar0=0;
bLocal_223=false;
iLocal_226=0;
iLocal_243=0;
iLocal_245=0;
bLocal_241=false;
iLocal_240=0;
iLocal_233=0;
iLocal_242=0;
iLocal_239=0;
iLocal_244=0;
bLocal_256=false;
iLocal_257=0;
iLocal_258=0;
iLocal_260=0;
bLocal_225=false;
iLocal_230=0;
iLocal_229=0;
iLocal_231=0;
bLocal_228=false;
iLocal_232=0;
iLocal_234=0;
iLocal_238=0;
iLocal_235=0;
iLocal_236=0;
iLocal_237=0;
iLocal_227=0;
iLocal_246=0;
iVar0=0;
while (iVar0 <=1){
iLocal_247[iVar0]=0;
iVar0++;
}
iLocal_248=1;
iLocal_249=0;
iLocal_250=0;
iLocal_251=0;
iLocal_254=0;
iLocal_255=0;
bLocal_259=false;
iLocal_224=0;
bLocal_262=false;
bLocal_263=false;
iVar0=0;
while (iVar0 <=1){
iLocal_264[iVar0]=0;
iVar0++;
}
iLocal_265=0;
iLocal_266=0;
iLocal_261=0;
iLocal_267=0;
iLocal_313=0;
iLocal_311=0;
iLocal_312=6;
iLocal_314=0;
fLocal_269[0]=148.84f;
fLocal_269[1]=23.67f;
fLocal_268[0]=6.24f;
fLocal_268[1]=165.1f;
fLocal_270[0]=-4.8f;
fLocal_270[1]=-170.96f;
fLocal_272=2f;
fLocal_273=5.5f;
fLocal_271=2.4f;
iLocal_274=0;
iLocal_275=1;
iLocal_283=0;
iLocal_282=-1;
iLocal_284=0;
iLocal_286=0;
iLocal_285=0;
iLocal_287=0;
iLocal_288=0;
iLocal_289=0;
iLocal_290=0;
iLocal_291=0;
iLocal_292=0;
iVar0=0;
while (iVar0 <=(7 - 1)){
iLocal_293[iVar0]=-1;
iVar0++;
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_57.f_59)){
iLocal_293[0]=Local_57.f_59;
}
iLocal_294=-1;
iLocal_277=0;
uLocal_278=AUDIO::GET_SOUND_ID();
iLocal_280=0;
iLocal_281=0;
iLocal_279=0;
fLocal_295=40.9431f;
sLocal_319="NULL";
Local_465={
-1035.73f, 365.44f, 68.91f 
};
Local_463={
-1051.564f, 369.6159f, 68.9137f 
};
Local_467={
-1073.19f, 342.05f, 63.32832f 
};
Local_466={
-966.24f, 411.05f, 84.82043f 
};
Local_475={
-1058.74f, 378.36f, 68.97f 
};
Local_476={
-1064.68f, 378.42f, 67f 
};
Local_477={
-1039.15f, 351.76f, 75f 
};
Local_478={
-1041.712f, 348.0622f, 66.91643f 
};
Local_479={
-1036.664f, 347.7731f, 75.36364f 
};
Local_480={
-1047.452f, 347.568f, 66.91404f 
};
Local_481={
-1046.71f, 353.1779f, 73.91792f 
};
Local_482={
-1057.542f, 348.6674f, 66.91409f 
};
Local_483={
-1057.282f, 352.6161f, 73.91387f 
};
Local_484={
-1063.374f, 350.3959f, 66.91391f 
};
Local_485={
-1061.651f, 352.8345f, 73.81593f 
};
Local_464[0 /*3*/]={
-1054.42f, 368.18f, 68.35f 
};
Local_464[1 /*3*/]={
-1054.7f, 355.94f, 68.35f 
};
Local_469[0 /*3*/]={
-1053.947f, 370.4447f, 68.6948f 
};
Local_469[1 /*3*/]={
-1054.26f, 353.4767f, 68.6948f 
};
Local_470[0 /*3*/]={
-1054.092f, 373.472f, 68.9138f 
};
Local_470[1 /*3*/]={
-1054.13f, 350.572f, 68.913f 
};
Local_472={
-1059.451f, 361.9821f, 69.78663f 
};
Local_473={
-1054.633f, 353.7263f, 67.44479f 
};
Local_474={
-1054.807f, 370.0012f, 69.42931f 
};
Local_471[0 /*3*/]={
-1059.845f, 366.6072f, 69.75161f 
};
Local_471[1 /*3*/]={
-1059.642f, 357.378f, 69.75161f 
};
Local_486={
-1059f, 360.976f, 69f 
};
Local_487={
0f, 0f, -1.08f 
};
Local_488={
-1011.885f, 346.9502f, 69.2904f 
};
Local_297[0 /*14*/].f_10=joaat("ig_tylerdix");
Local_297[1 /*14*/].f_10=joaat("a_f_y_beach_01");
Local_296.f_10=joaat("s_m_m_gardener_01");
Local_298.f_3={
-1050.03f, 368.95f, 69.29f 
};
Local_298.f_8={
0f, 0f, -11.27f 
};
Local_298.f_1=joaat("prop_nigel_bag_pickup");
Local_298.f_6=joaat("pickup_custom_script");
Local_298.f_7=0;
MISC::SET_BIT(&(Local_298.f_7), 3);
MISC::SET_BIT(&(Local_298.f_7), 4);
MISC::SET_BIT(&(Local_298.f_7), true);
MISC::SET_BIT(&(Local_298.f_7), 8);
iLocal_307=joaat("comet2");
iLocal_310=joaat("speedo");
Local_306[0 /*9*/].f_1=joaat("prop_beach_ring_01");
Local_306[0 /*9*/].f_2={
-1047.42f, 370.22f, 69.09f 
};
Local_306[0 /*9*/].f_8=38.2398f;
Local_306[0 /*9*/].f_5={
-0.57f, -0.15f, 92.03f 
};
Local_306[1 /*9*/].f_1=joaat("prop_beachball_01");
Local_306[1 /*9*/].f_2={
-1051.157f, 368.6751f, 68.9139f 
};
Local_306[1 /*9*/].f_5={
0f, 0f, 90f 
};
Local_306[1 /*9*/].f_8=53.2741f;
Local_305[0 /*9*/].f_1=joaat("prop_leaf_blower_01");
Local_305[0 /*9*/].f_2={
-0.3f, -2.4f, 0.16f 
};
Local_305[0 /*9*/].f_5={
0f, 0f, 75f 
};
Local_305[1 /*9*/].f_1=joaat("prop_tool_box_01");
Local_305[1 /*9*/].f_2={
0.3f, -0.8f, -0.15f 
};
Local_305[1 /*9*/].f_5={
0f, 0f, 325f 
};
Local_305[2 /*9*/].f_1=joaat("prop_tool_rake");
Local_305[2 /*9*/].f_2={
-0.2f, -0.9f, -0.1f 
};
Local_305[2 /*9*/].f_5={
270f, 180f, 20f 
};
Local_301.f_1=joaat("p_amb_phone_01");
Local_301.f_2={
0f, 0f, 0f 
};
Local_301.f_5={
0f, 0f, 0f 
};
iLocal_308=joaat("police");
iLocal_309=joaat("s_m_y_cop_01");
StringCopy(&Local_424, "", 24);
StringCopy(&cLocal_425, "rcmnigel1b@reactions", 64);
StringCopy(&cLocal_434, "rcmnigel1bnmt_1b", 64);
iLocal_492=joaat("weapon_unarmed");
func_622(0, joaat("prop_lrggate_01_l"), -1011.63f, 367.21f, 72.24f);
func_622(1, joaat("prop_lrggate_01_r"), -1006.89f, 364.48f, 72.24f);
func_622(2, joaat("prop_lrggate_01_l"), -1017.81f, 351.32f, 70.66f);
func_622(3, joaat("prop_lrggate_01_r"), -1012.49f, 352.58f, 70.66f);
func_622(4, joaat("prop_lrggate_03b_ld"), -1040.49f, 384.38f, 69.92f);
func_622(5, joaat("prop_lrggate_03b_ld"), -1056.19f, 382.26f, 69.72f);
func_621(&uLocal_320);
func_620(&uLocal_320, -987.81f, 363.85f, 71.32f);
func_620(&uLocal_320, -988.15f, 352.77f, 71.03f);
func_620(&uLocal_320, -1030.05f, 342.06f, 67.88f);
func_620(&uLocal_320, -1071.7f, 346.33f, 66.21f);
func_620(&uLocal_320, -1070.97f, 379.39f, 67.96f);
func_620(&uLocal_320, -1067.3f, 387.2f, 67.82f);
func_620(&uLocal_320, -1059.75f, 390.57f, 67.96f);
func_620(&uLocal_320, -1030.35f, 392.35f, 69.34f);
func_620(&uLocal_320, -1016.2f, 378.02f, 70.67f);
func_620(&uLocal_320, -1006f, 370.87f, 71.04f);
func_619(&uLocal_320);
func_621(&uLocal_372);
func_620(&uLocal_372, -1025.32f, 380.54f, 70.79f);
func_620(&uLocal_372, -1020.4f, 375.87f, 70.38f);
func_620(&uLocal_372, -1012.08f, 369.8f, 71.1f);
func_620(&uLocal_372, -1011.78f, 367.31f, 71.12f);
func_620(&uLocal_372, -1006.72f, 364.41f, 71.28f);
func_620(&uLocal_372, -1004.07f, 365.51f, 71.78f);
func_620(&uLocal_372, -993.65f, 360.78f, 71.51f);
func_620(&uLocal_372, -993.68f, 355.4f, 71.02f);
func_620(&uLocal_372, -1008.25f, 350.7f, 70f);
func_620(&uLocal_372, -1010.9f, 352.95f, 69.54f);
func_620(&uLocal_372, -1018.94f, 351.08f, 69.9f);
func_620(&uLocal_372, -1020.24f, 349.86f, 69.67f);
func_620(&uLocal_372, -1020.85f, 347.65f, 68.93f);
func_620(&uLocal_372, -1030.98f, 346.06f, 70.4f);
func_620(&uLocal_372, -1036.05f, 346.14f, 70.45f);
func_619(&uLocal_372);
func_488();
}


void func_619(var uParam0){
int iVar0;
float fVar1;
if(uParam0->f_51==0){}
if(uParam0->f_46 < 3){}
iVar0=0;
while (iVar0 < uParam0->f_46){
uParam0->f_47={
uParam0->f_47 + *(uParam0[iVar0 /*3*/]) 
};
iVar0++;
}
uParam0->f_47={
uParam0->f_47 / FtoV(to_float(iVar0)) 
};
iVar0=0;
while (iVar0 < uParam0->f_46){
fVar1=vdist2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
if(fVar1 > uParam0->f_50){
uParam0->f_50=fVar1;
}
iVar0++;
}
uParam0->f_50=sqrt(uParam0->f_50);
uParam0->f_51=0;
}


void func_620(var uParam0, struct<3> Param1){
if(uParam0->f_51==0){}
if(uParam0->f_46 >=15){}
*(uParam0[uParam0->f_46 /*3*/])={
Param1 
};
uParam0->f_46++;
}


void func_621(var uParam0){
if(uParam0->f_51){}
uParam0->f_46=0;
uParam0->f_47={
0f, 0f, 0f 
};
uParam0->f_50=0f;
uParam0->f_51=1;
}


void func_622(int iParam0, int iParam1, struct<3> Param2){
char cVar0[24];
StringCopy(&cVar0, "N1B_", 24);
StringIntConCat(&cVar0, iParam0, 24);
iLocal_276[iParam0]=MISC::GET_HASH_KEY(&cVar0);
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_276[iParam0])){
OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_276[iParam0], iParam1, Param2, 0, 1, 0);
}}


void func_623(){
if(func_631()){
func_486(0, 1);
}
func_624(&Local_57, 1, 0, 0);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_624(var uParam0, int iParam1, bool bParam2, bool bParam3){
func_629(uParam0, iParam1);
func_627(uParam0, bParam2);
func_625(uParam0, bParam3);
}


void func_625(var uParam0, bool bParam1){
func_626(&(uParam0->f_41), bParam1);
}


void func_626(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_56(uParam0[iVar0]);
}else{
func_55(uParam0[iVar0], 0);
}
iVar0++;
}}


void func_627(var uParam0, bool bParam1){
func_628(&(uParam0->f_35), bParam1);
}


void func_628(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_53(uParam0[iVar0]);
}else{
func_52(uParam0[iVar0]);
}
iVar0++;
}}


void func_629(var uParam0, int iParam1){
func_630(&(uParam0->f_28), iParam1);
}


void func_630(var uParam0, int iParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(iParam1==1){
func_16(uParam0[iVar0]);
}else{
func_15(uParam0[iVar0], 0, 1, 0);
}
iVar0++;
}}

int func_631(){
int iVar0;
iVar0=func_274();
if(iVar0==-1){
return 0;
}
if(!Global_112735[iVar0 /*10*/].f_4){
return 0;
}
Global_112735[iVar0 /*10*/].f_4=0;
HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
if(!func_483(0)){
if(Global_112735[iVar0 /*10*/].f_5 && Global_112735[iVar0 /*10*/].f_6){
Global_112735[iVar0 /*10*/].f_6=0;
}
if(!Global_112735[iVar0 /*10*/].f_6 && !Global_112735[iVar0 /*10*/].f_5){
Global_112735[iVar0 /*10*/].f_6=1;
}}
return 1;
}


void func_632(bool bParam0){
int iVar0;
func_645();
if(!func_644()){
iVar0=func_274();
if(iVar0==-1){
return;
}
if(!Global_112735[iVar0 /*10*/].f_4){
return;
}
if(Global_112735[iVar0 /*10*/].f_5){
return;
}
if(Global_112735[iVar0 /*10*/].f_6){
return;
}
if(Global_94856==Global_100718){
Global_113648.f_18576[iVar0 /*6*/].f_4++;
}
Global_94856=Global_100718;
if(bParam0){
func_231(iVar0, 1, 0);
func_633(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
}else{
if(Global_112735[iVar0 /*10*/].f_9==-1){
}else{
func_244(&(Global_112735[iVar0 /*10*/].f_9));
}
func_230(iVar0, 1, 1, 0);
}
Global_112735[iVar0 /*10*/].f_6=1;
}}


void func_633(char* sParam0, int iParam1){
if(Global_100681 !=12){
if(func_634(sParam0, 6, iParam1)){
Global_100681.f_1=iParam1;
}}}

int func_634(char* sParam0, int iParam1, int iParam2){
var uVar0;
struct<32> Var1;
int iVar2;
func_87();
func_643();
Global_100681=0;
StringCopy(&(Global_100681.f_3), sParam0, 32);
Global_100681.f_11=iParam1;
MISC::PAUSE_DEATH_ARREST_RESTART(1);
MISC::SET_FADE_OUT_AFTER_ARREST(0);
MISC::SET_FADE_OUT_AFTER_DEATH(0);
func_4(1);
func_490(1);
func_640(0);
func_639(1);
MISC::CLEAR_BIT(&(Global_100681.f_20), 9);
MISC::CLEAR_BIT(&(Global_100681.f_20), 6);
MISC::CLEAR_BIT(&(Global_100681.f_20), 20);
MISC::CLEAR_BIT(&(Global_100681.f_20), 21);
MISC::CLEAR_BIT(&(Global_100681.f_20), 5);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::IS_ENTITY_UPSIDEDOWN(uVar0)){
MISC::SET_BIT(&(Global_100681.f_20), 5);
}}}}
HUD::CLEAR_HELP(1);
HUD::CLEAR_PRINTS();
func_638(0);
func_90(1);
Global_100681.f_2=Global_100718;
if(func_637()){
if(func_636()){
if(Global_100718 >=func_635()){
if(!MISC::IS_BIT_SET(Global_91469[iParam2 /*34*/].f_15, 16)){
if(Global_113648.f_9087.f_330[iParam2 /*6*/].f_1 >=2){
Global_94857=1;
}}}}elseif(Global_100681.f_11==6){
func_233(iParam2, &Var1);
if(Var1.f_31==1){
if(Global_113648.f_18576[iParam2 /*6*/].f_4 >=2){
Global_94857=1;
}}}else{
iVar2=func_450(SCRIPT::GET_THIS_SCRIPT_NAME());
if(iVar2 > -1){
if(Global_113648.f_24988.f_4[iVar2] >=2){
Global_94857=1;
}}}}
return 1;
}

int func_635(){
int iVar0;
int iVar1;
iVar0=func_453(&(Global_100681.f_3), 0);
iVar1=0;
if(iVar0==53){
iVar1=1;
}
return iVar1;
}

int func_636(){
if((((Global_100681.f_11==0 || Global_100681.f_11==1) || Global_100681.f_11==2) || Global_100681.f_11==3) || Global_100681.f_11==4){
return 1;
}
return 0;
}

int func_637(){
if((((Global_100681.f_11==0 || Global_100681.f_11==1) || Global_100681.f_11==2) || Global_100681.f_11==6) || Global_100681.f_11==3){
return 1;
}
if(Global_100681.f_11==5){
if(func_450(&(Global_100681.f_3)) > -1){
return 1;
}}
return 0;
}


void func_638(int iParam0){
HUD::DISPLAY_HUD(iParam0);
HUD::DISPLAY_RADAR(iParam0);
}


void func_639(int iParam0){
if(iParam0==1){
HUD::THEFEED_PAUSE();
MISC::SET_BIT(&(Global_100681.f_20), 3);
}elseif(MISC::IS_BIT_SET(Global_100681.f_20, 3)){
HUD::THEFEED_RESUME();
MISC::CLEAR_BIT(&(Global_100681.f_20), 3);
}}


void func_640(int iParam0){
if(iParam0==1){
if(MISC::IS_BIT_SET(Global_100681.f_20, 4)){
func_642();
MISC::CLEAR_BIT(&(Global_100681.f_20), 4);
}}else{
func_641();
MISC::SET_BIT(&(Global_100681.f_20), 4);
}}


void func_641(){
Global_23131.f_5=1;
}


void func_642(){
Global_23131.f_5=0;
}


void func_643(){
Global_94857=0;
Global_94858=0;
}

int func_644(){
if(((Global_100681==13 || Global_100681==10) || Global_100681==11) || Global_100681==12){
return 0;
}
return 1;
}


void func_645(){
Global_100716=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (func_292()){
case 0:
StringCopy(&Global_78791, "CMN_MARRE", 16);
break;
case 1:
StringCopy(&Global_78791, "CMN_FARRE", 16);
break;
case 2:
StringCopy(&Global_78791, "CMN_TARRE", 16);
break;
}
StringCopy(&Global_78795, "", 16);
}
Global_100716=0;
}elseif(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (func_292()){
case 0:
StringCopy(&Global_78791, "CMN_MDIED", 16);
break;
case 1:
StringCopy(&Global_78791, "CMN_FDIED", 16);
break;
case 2:
StringCopy(&Global_78791, "CMN_TDIED", 16);
break;
}
StringCopy(&Global_78795, "", 16);
}
Global_100716=0;
MISC::SET_BIT(&(Global_100681.f_20), 25);
}}


void func_646(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){}}


void func_647(var uParam0){
func_648(&(uParam0->f_28));
func_648(&(uParam0->f_35));
func_648(&(uParam0->f_41));
}


void func_648(var uParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], 0, 1);
}
iVar0++;
}}

int func_649(int iParam0){
if(!func_223(iParam0)){
return func_222(iParam0);
}elseif(iParam0 !=145){}
return 0;
}