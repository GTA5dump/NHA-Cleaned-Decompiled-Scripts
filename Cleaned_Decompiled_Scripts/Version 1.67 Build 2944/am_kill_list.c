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
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
struct<617> Local_94={
0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<12> Local_95={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_96[4]={
0, 0, 0, 0 
};
struct<18> Local_97[32];
var uLocal_98=0;
var uLocal_99=0;
int iLocal_100[5]={
0, 0, 0, 0, 0 
};
bool bLocal_101=0;
bool bLocal_102=0;
int iLocal_103=0;
float fLocal_104=0f;
var uLocal_105[4]={
0, 0, 0, 0 
};
struct<8> Local_106[24];
int iLocal_107=0;
int iLocal_108=0;
int iLocal_109=0;
int iLocal_110[4]={
0, 0, 0, 0 
};
int iLocal_111[4]={
0, 0, 0, 0 
};
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
struct<42> Local_115[32];
struct<104> Local_116={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 
};
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=-1;
var uLocal_123=-1;
var uLocal_124=-1;
var uLocal_125=-1;
var uLocal_126=-1;
var uLocal_127=-1;
var uLocal_128=0;
var uLocal_129=32;
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
var uLocal_225=0;
var uLocal_226=0;
var uLocal_227=0;
var uLocal_228=0;
var uLocal_229=0;
var uLocal_230=0;
var uLocal_231=0;
var uLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
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
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=0;
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
var uLocal_264=0;
var uLocal_265=0;
var uLocal_266=0;
var uLocal_267=0;
var uLocal_268=0;
var uLocal_269=0;
var uLocal_270=0;
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=0;
var uLocal_274=0;
var uLocal_275=0;
var uLocal_276=0;
var uLocal_277=0;
var uLocal_278=0;
var uLocal_279=0;
var uLocal_280=0;
var uLocal_281=0;
var uLocal_282=0;
var uLocal_283=0;
var uLocal_284=0;
var uLocal_285=0;
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
var uLocal_372=0;
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
var uLocal_424=0;
var uLocal_425=0;
var uLocal_426=0;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=0;
var uLocal_430=0;
var uLocal_431=0;
var uLocal_432=0;
var uLocal_433=0;
var uLocal_434=0;
var uLocal_435=0;
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=0;
var uLocal_439=0;
var uLocal_440=0;
var uLocal_441=0;
var uLocal_442=0;
var uLocal_443=0;
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=0;
var uLocal_447=0;
var uLocal_448=0;
var uLocal_449=0;
var uLocal_450=0;
var uLocal_451=0;
var uLocal_452=0;
var uLocal_453=0;
var uLocal_454=0;
var uLocal_455=0;
var uLocal_456=0;
var uLocal_457=0;
var uLocal_458=0;
var uLocal_459=0;
var uLocal_460=0;
var uLocal_461=0;
var uLocal_462=0;
var uLocal_463=0;
var uLocal_464=0;
var uLocal_465=0;
var uLocal_466=0;
var uLocal_467=0;
var uLocal_468=0;
var uLocal_469=0;
var uLocal_470=0;
var uLocal_471=0;
var uLocal_472=0;
var uLocal_473=0;
var uLocal_474=0;
var uLocal_475=0;
var uLocal_476=0;
var uLocal_477=0;
var uLocal_478=0;
var uLocal_479=0;
var uLocal_480=0;
var uLocal_481=0;
var uLocal_482=0;
var uLocal_483=0;
var uLocal_484=0;
var uLocal_485=0;
var uLocal_486=0;
var uLocal_487=0;
var uLocal_488=0;
var uLocal_489=0;
var uLocal_490=0;
var uLocal_491=0;
var uLocal_492=0;
var uLocal_493=0;
var uLocal_494=0;
var uLocal_495=0;
var uLocal_496=0;
var uLocal_497=0;
var uLocal_498=0;
var uLocal_499=0;
var uLocal_500=0;
var uLocal_501=0;
var uLocal_502=0;
var uLocal_503=0;
var uLocal_504=0;
var uLocal_505=0;
var uLocal_506=0;
var uLocal_507=0;
var uLocal_508=0;
var uLocal_509=0;
var uLocal_510=0;
var uLocal_511=0;
var uLocal_512=0;
var uLocal_513=0;
var uLocal_514=0;
var uLocal_515=0;
var uLocal_516=0;
var uLocal_517=0;
var uLocal_518=0;
var uLocal_519=0;
var uLocal_520=0;
var uLocal_521=0;
var uLocal_522=0;
var uLocal_523=0;
var uLocal_524=0;
var uLocal_525=0;
var uLocal_526=0;
var uLocal_527=0;
var uLocal_528=0;
var uLocal_529=0;
var uLocal_530=0;
var uLocal_531=0;
var uLocal_532=0;
var uLocal_533=0;
var uLocal_534=0;
var uLocal_535=0;
var uLocal_536=0;
var uLocal_537=0;
var uLocal_538=0;
var uLocal_539=0;
var uLocal_540=0;
var uLocal_541=0;
var uLocal_542=0;
var uLocal_543=0;
var uLocal_544=0;
var uLocal_545=0;
var uLocal_546=0;
var uLocal_547=0;
var uLocal_548=0;
var uLocal_549=0;
var uLocal_550=0;
var uLocal_551=0;
var uLocal_552=0;
int iLocal_553=0;
int iLocal_554=0;
int iLocal_555=0;
var uLocal_556[4]={
0, 0, 0, 0 
};
var uLocal_557=0;
var uLocal_558=0;
var uLocal_559=0;
var uLocal_560=0;
int iLocal_561=0;
struct<2> Local_562[10];
var uLocal_563=0;
var uLocal_564=0;
var uLocal_565=0;
var uLocal_566=0;
var uLocal_567=0;
var uLocal_568=0;
var uLocal_569=0;
var uLocal_570=0;
var uLocal_571=0;
var uLocal_572=0;
struct<2> Local_573[5];
var uLocal_574=0;
var uLocal_575=0;
var uLocal_576=0;
var uLocal_577=0;
int iLocal_578=0;
struct<3> Local_579={
0, 0, 0 
};
int iLocal_580=0;
var uLocal_581=0;
int iLocal_582=0;
int iLocal_583=0;
int iLocal_584=0;
int iLocal_585[24]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_586=0;
int iLocal_587[5]={
0, 0, 0, 0, 0 
};
bool bLocal_588=0;
var uLocal_589[4]={
0, 0, 0, 0 
};
var uLocal_590[4]={
0, 0, 0, 0 
};
struct<21> Local_591={
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
fLocal_104=-100f;
iLocal_554=-1;
iLocal_555=-1;
iLocal_582=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_876(PLAYER::PLAYER_ID(), 0, 1)){
func_864(ScriptParam_591);
}else{
func_818();
}
while (true){
func_817();
if(func_813()){
func_818();
}elseif(func_810(19)){
func_818();
}
if(func_809()){
func_818();
}
func_784();
switch (func_783(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if((func_782()==1 && Local_94.f_1 !=-1) && Local_94.f_2 !=-1){
func_780();
func_776(129, Local_94.f_1, Local_94.f_2, 0);
if(Global_2794162.f_5155==-1){
if(!func_775()){
Global_2794162.f_5155=0;
}
else{
Global_2794162.f_5155=1;
}}
func_774(Local_94.f_30[0 /*3*/]);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/]=1;
}elseif(func_782()==4){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/]=3;
}
break;
case 1:
if(func_782()==1){
func_769();
func_768();
func_750();
func_435();
func_166();
func_165();
func_164();
}elseif(func_782()==4){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/]=3;
}
break;
case 3:
func_163(&(Local_94.f_320));
if(func_162(&(Local_94.f_320))){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/]=4;
}
break;
case 2:
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/]=4;
case 4:
func_818();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_782()){
case 0:
if(func_147()){
if(func_142()){
func_138(func_140(129, Local_94.f_1, Local_94.f_2, 0));
Local_94.f_0=1;
}}
break;
case 1:
func_129();
func_33();
func_25();
if(func_1()){
Local_94.f_0=4;
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
int iVar0;
int iVar1;
if((MISC::IS_BIT_SET(Local_94.f_3, 0) && MISC::IS_BIT_SET(Local_94.f_3, 1)) && MISC::IS_BIT_SET(Local_94.f_3, 2)){
if(!MISC::IS_BIT_SET(Local_94.f_3, 11)){
return 0;
}}elseif(MISC::IS_BIT_SET(Local_94.f_3, 6)){
if(!MISC::IS_BIT_SET(Local_94.f_3, 11)){
return 0;
}}
if(Local_94.f_241 > 0){
if(Local_94.f_0 !=4){
if(func_24()){
if(Local_94.f_241==3){
if(func_22()){
if(MISC::IS_BIT_SET(Local_94.f_3, 11)){
return 1;
}}}elseif(func_20(&(Local_94.f_322), 3000, 0)){
if(func_22()){
return 1;
}}}}
if(Local_94.f_241 < 3){
iVar0=0;
if(Local_94.f_241 >=1){
iVar0=1;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0)){
if(Local_97[iVar1 /*18*/].f_17 < 2){
iVar0=0;
}
}}
iVar1++;
}}
if(iVar0==1){
if((!((MISC::IS_BIT_SET(Local_94.f_3, 0) && MISC::IS_BIT_SET(Local_94.f_3, 1)) && MISC::IS_BIT_SET(Local_94.f_3, 2)) && !MISC::IS_BIT_SET(Local_94.f_3, 6)) && !MISC::IS_BIT_SET(Local_94.f_3, 14)){
MISC::SET_BIT(&(Local_94.f_3), 15);
}
func_7();
}elseif(Local_94.f_241 < 3){
if(func_3()){
MISC::SET_BIT(&(Local_94.f_3), 16);
MISC::SET_BIT(&(Local_94.f_3), 15);
func_7();
}}}}
return 0;
}

int func_3(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar0])){
if(!func_4(NETWORK::NET_TO_VEH(Local_94.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1)){
return 0;
}}
iVar0++;
}
return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
if(iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=0;
while (iVar0 < iVar1){
iVar2=func_6(iParam0, (iVar0 - 1), bParam6, iParam7);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(iParam3 && iVar2==PLAYER::PLAYER_PED_ID()){
}elseif(bParam2){
if(PED::IS_PED_A_PLAYER(iVar2)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
if(((!PED::IS_PED_INJURED(iVar2) && iVar3 !=func_5()) && func_876(iVar3, 1, 1)) || iParam8){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2))==0){
if(!bParam5){
return 0;
}}else{
return 0;
}
}}}elseif(iParam1==0){
return 0;
}elseif(!PED::IS_PED_INJURED(iVar2)){
return 0;
}}
iVar0++;
}}
return 1;
}

int func_5(){
return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
}
if(bParam2){
if(!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_vehicle"))==1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_any_vehicle"))==1){
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0)) < 10f){
return iVar0;
}}}
iVar0=-1;
}}
return iVar0;
}


void func_7(){
if(Local_94.f_241 !=3){
func_9();
func_8(&(Local_94.f_324), 0, 0);
Local_94.f_241=3;
}}


void func_8(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}


void func_9(){
if(!func_15()){
return;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return;
}
func_10();
}


void func_10(){
func_12();
func_11(0);
}


void func_11(bool bParam0){
bool bVar0;
bVar0=NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
Global_1574757=20;
StringCopy(&(Global_1574757.f_1), "", 32);
Global_1574757.f_9=0;
if(bVar0){
Global_1574757.f_10=NETWORK::GET_NETWORK_TIME();
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}
StringCopy(&(Global_1574757.f_12), "", 16);
StringCopy(&(Global_1574757.f_16), "", 64);
StringCopy(&(Global_1574757.f_32), "", 64);
Global_1574757.f_52=0;
Global_1574757.f_53=0;
Global_1574757.f_54=0;
Global_1574757.f_55=-1;
Global_1574757.f_56=0;
Global_1574757.f_59=0;
if(bParam0){
return;
}}


void func_12(){
if(!func_14()){}
if(func_15()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_13();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_13(){
switch (Global_1574757){
case 20:
return;
case 0:
return;
case 1:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
return;
case 2:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
return;
case 3:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 4:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 5:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 6:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 7:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 8:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 9:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
return;
case 10:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
return;
case 12:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 13:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 11:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
return;
case 14:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 15:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 17:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
return;
case 16:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 19:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 18:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
return;
default:
}}

int func_14(){
if(!func_15()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_13();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_15(){
if(Global_1574757==20){
return 0;
}
return 1;
}


bool func_16(bool bParam0, int iParam1){
bool bVar0;
if(!func_19(bParam0)){
return 0;
}
if(bParam0==PLAYER::PLAYER_ID()){
bVar0=func_17(-1, 0)==8;
}else{
bVar0=Global_1853988[bParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(bParam0)==8;
}}
return bVar0;
}

int func_17(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_18();
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

int func_18(){
return Global_1574918;
}

int func_19(int iParam0){
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

int func_20(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_21(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_21(var uParam0, bool bParam1, bool bParam2){
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

int func_22(){
int iVar0;
if(!func_23(&(Local_94.f_328))){
func_21(&(Local_94.f_328), 0, 0);
}elseif(func_20(&(Local_94.f_328), 20000, 0)){
return 1;
}
iVar0=0;
while (iVar0 < 24){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[iVar0])){
if(Local_94.f_85[iVar0] < 4){
return 0;
}}
iVar0++;
}
return 1;
}


bool func_23(var uParam0){
return uParam0->f_1;
}

int func_24(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_7[iVar0]), 0)){
return 0;
}}
iVar0++;
}
return 1;
}


void func_25(){
int iVar0;
bool bVar1;
bool bVar2;
int iVar3;
int iVar4;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
bVar1=false;
while (bVar1 < 24){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar1])){
if(!func_32(Local_94.f_48[bVar1])){
switch (Local_94.f_85[bVar1]){
case 0:
if(!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[bVar1]), 0)){
Local_94.f_85[bVar1]=1;
}
elseif(PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[bVar1]), 0) && func_31(bVar1)){
Local_94.f_85[bVar1]=1;
}
break;
case 1:
if(Local_94.f_241==1){
if(!func_24()){
if(PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[bVar1]), 0)){
iVar4=PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_94.f_48[bVar1]), 0);
if(func_30(iVar4, 250f)){
Local_94.f_85[bVar1]=2;
}
elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4))){
if((bVar1 % 4)==0){
iVar0=(bVar1 / 4);
if(iVar0 < 5){
if(Local_94.f_110[iVar0]==-1 || !func_29(bVar1)){
bVar2=func_28();
if(bVar2 !=func_5()){
iVar3=PLAYER::GET_PLAYER_PED(bVar2);
if(!PED::IS_PED_INJURED(iVar3)){
if(func_27(iVar4, iVar3, 1) > 250f){
Local_94.f_110[iVar0]=bVar2;
}
}
}}}
}
}}else{
Local_94.f_85[bVar1]=2;
}}else{
Local_94.f_85[bVar1]=3;
}
}
else{
Local_94.f_85[bVar1]=3;
}
break;
case 2:
if(Local_94.f_241==1){
if(func_24()){
Local_94.f_85[bVar1]=3;
}elseif(MISC::IS_BIT_SET(Local_94.f_3, 6)){
Local_94.f_85[bVar1]=3;
}elseif(MISC::IS_BIT_SET(Local_94.f_464, bVar1)){
Local_94.f_85[bVar1]=1;
MISC::CLEAR_BIT(&(Local_94.f_464), bVar1);
}
}
else{
Local_94.f_85[bVar1]=3;
}
break;
case 3:
if(PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_94.f_48[bVar1]))){
func_26(&(Local_94.f_48[bVar1]));
Local_94.f_85[bVar1]=4;
}
break;
}}}
bVar1++;
}}


void func_26(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}


float func_27(int iParam0, int iParam1, int iParam2){
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

int func_28(){
int iVar0;
int iVar1;
iVar0=func_5();
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(iVar0==func_5()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(Local_97[iVar1 /*18*/].f_1 !=0){
if(Local_97[iVar1 /*18*/].f_17==1){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
}}}}
iVar1++;
}
return iVar0;
}

int func_29(int iParam0){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
if((iParam0 % 4)==0){
iVar0=(iParam0 / 4);
if(iVar0 < 5){
if(Local_94.f_110[iVar0] !=-1){
iVar3=Local_94.f_110[iVar0];
bVar1=PLAYER::INT_TO_PLAYERINDEX(iVar3);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1)){
if(func_876(bVar1, 1, 1)){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1)){
iVar2=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar1);
iVar3=iVar2;
if(Local_97[iVar3 /*18*/].f_17 !=1){
return 0;
}
}
else{
return 0;
}}else{
return 0;
}}else{
return 0;
}}}}
return 1;
}

int func_30(var uParam0, float fParam1){
int iVar0;
bool bVar1;
int iVar2;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(Local_97[iVar0 /*18*/].f_1 !=0){
if(Local_97[iVar0 /*18*/].f_17==1){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
iVar2=PLAYER::GET_PLAYER_PED(bVar1);
if(!PED::IS_PED_INJURED(iVar2)){
if(func_27(uParam0, iVar2, 1) < fParam1){
return 1;
}}}}}
iVar0++;
}
return 0;
}

int func_31(int iParam0){
int iVar0;
if(!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[iParam0]), 0)){
return 0;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_94.f_48[iParam0]), 0);
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
return 0;
}
return 1;
}

int func_32(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
}
return 1;
}


void func_33(){
int iVar0;
int iVar1;
struct<14> Var2;
if(Local_94.f_463 > 0){
if(Local_94.f_28 !=Local_94.f_463){
Local_94.f_28=Local_94.f_463;
}}
switch (Local_94.f_241){
case 0:
iVar1=0;
iVar0=0;
while (iVar0 < Local_94.f_28){
if(Local_94.f_17[iVar0]==func_5()){
}else{
iVar1++;
if(MISC::IS_BIT_SET(Local_94.f_3, 4)){
}}
iVar0++;
}
func_126();
func_125();
if(MISC::IS_BIT_SET(Local_94.f_3, 4)){
Local_94.f_463=iVar1;
}
if(func_123()){
func_116();
Local_94.f_241=1;
}elseif(MISC::IS_BIT_SET(Local_94.f_3, 4) && func_113() > 1){
func_112();
func_116();
Local_94.f_241=1;
}
if(!func_775()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[0])){
if(!func_110(Local_94.f_7[0])){
Var2.f_2=1267106989;
func_108(Var2, func_109(NETWORK::NET_TO_VEH(Local_94.f_7[0]), 1, 0));
Local_94.f_241=2;
}}}
if(Local_94.f_241==0){
if(!func_23(&(Local_94.f_330))){
if(!func_23(&(Local_94.f_326))){
func_21(&(Local_94.f_330), 0, 0);
}}elseif(func_23(&(Local_94.f_326))){
func_107(&(Local_94.f_330));
}elseif(func_20(&(Local_94.f_330), func_106(), 0)){
Var2.f_2=1267106989;
func_108(Var2, func_105(1));
MISC::SET_BIT(&(Local_94.f_3), 12);
func_7();
}
if(MISC::IS_BIT_SET(Local_94.f_3, 14)){
func_7();
}}
break;
case 1:
func_36();
func_34();
func_112();
if(MISC::IS_BIT_SET(Local_94.f_3, 6)){
Local_94.f_241=2;
}
break;
case 2:
break;
case 3:
break;
case 4:
break;
}}


void func_34(){
if(!MISC::IS_BIT_SET(Local_94.f_3, 19)){
return;
}
if(!MISC::IS_BIT_SET(Local_94.f_3, 6)){
if(!func_23(&(Local_94.f_332))){
func_21(&(Local_94.f_332), 0, 0);
MISC::SET_BIT(&(Local_94.f_3), 7);
}elseif(func_20(&(Local_94.f_332), func_35(), 0)){
MISC::SET_BIT(&(Local_94.f_3), 6);
}}}

int func_35(){
if(func_775()){
return Global_262145.f_11756;
}
return Global_262145.f_11733;
}


void func_36(){
bool bVar0;
int iVar1;
bool bVar2;
bool bVar3;
int iVar4;
int iVar5;
bool bVar6;
bool bVar7;
bVar2=true;
bVar3=false;
if(Local_94.f_278 > 0){
if(Local_94.f_279 >=Local_94.f_278){
if(Local_94.f_254 >=Local_94.f_255){
MISC::SET_BIT(&(Local_94.f_3), false);
MISC::SET_BIT(&(Local_94.f_3), true);
MISC::SET_BIT(&(Local_94.f_3), 2);
return;
}}}
iVar5=0;
if(bVar2){
if(Local_94.f_278 > 0){
if(Local_94.f_279 >=Local_94.f_278){
if(Local_94.f_256[0] >=0){
iVar5=(iVar5 + Local_94.f_256[0]);
}
if(Local_94.f_256[1] >=0){
iVar5=(iVar5 + Local_94.f_256[1]);
}
if(Local_94.f_256[2] >=0){
iVar5=(iVar5 + Local_94.f_256[2]);
}
if(Local_94.f_256[3] >=0){
iVar5=(iVar5 + Local_94.f_256[3]);
}
if(iVar5 >=Local_94.f_255){
iVar4=0;
iVar4=0;
while (iVar4 < 24){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[iVar4])){
if(!func_32(Local_94.f_48[iVar4])){
bVar3=true;
}
}
iVar4++;
}
if(!bVar3){
MISC::SET_BIT(&(Local_94.f_3), false);
MISC::SET_BIT(&(Local_94.f_3), true);
MISC::SET_BIT(&(Local_94.f_3), 2);
return;
}}
bVar3=false;
iVar4=0;
iVar4=0;
while (iVar4 < 24){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[iVar4])){
if(!func_32(Local_94.f_48[iVar4])){
bVar3=true;
}}
iVar4++;
}
if(!bVar3){
if(!func_23(&(Local_94.f_347))){
func_21(&(Local_94.f_347), 0, 0);
}elseif(func_20(&(Local_94.f_347), 3000, 0)){
MISC::SET_BIT(&(Local_94.f_3), false);
MISC::SET_BIT(&(Local_94.f_3), true);
MISC::SET_BIT(&(Local_94.f_3), 2);
return;
}}}}}
if(!MISC::IS_BIT_SET(Local_94.f_3, 0) || !MISC::IS_BIT_SET(Local_94.f_3, 1)){
if(Local_94.f_249 >=func_104()){
MISC::SET_BIT(&(Local_94.f_3), false);
MISC::SET_BIT(&(Local_94.f_3), true);
}
bVar0=false;
while (bVar0 < Local_94.f_242){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_73[bVar0])){
if(func_103(bVar0)){
if(!MISC::IS_BIT_SET(Local_94.f_245, bVar0)){
if((Local_94.f_27 !=joaat("hydra") && !func_4(NETWORK::NET_TO_VEH(Local_94.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_94.f_27==joaat("hydra")){
MISC::CLEAR_BIT(&(Local_94.f_3), false);
if(func_23(&(Local_573[bVar0 /*2*/]))){
func_107(&(Local_573[bVar0 /*2*/]));
}
}
elseif(func_4(NETWORK::NET_TO_VEH(Local_94.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[bVar0]))==joaat("savage")){
if(MISC::IS_BIT_SET(Local_94.f_3, 0)){
MISC::CLEAR_BIT(&(Local_94.f_3), false);
}
if(!MISC::IS_BIT_SET(Local_94.f_3, 18)){
func_102(func_105(1), bVar0);
MISC::SET_BIT(&(Local_94.f_3), 18);
}
}
elseif(func_101(bVar0) || !func_775()){
if(MISC::IS_BIT_SET(Local_94.f_3, 0)){
MISC::CLEAR_BIT(&(Local_94.f_3), false);
}
if(!MISC::IS_BIT_SET(Local_94.f_303, bVar0)){
func_100(func_105(1), bVar0);
MISC::SET_BIT(&(Local_94.f_303), bVar0);
}
}
else{
func_26(&(Local_94.f_73[bVar0]));
if(!MISC::IS_BIT_SET(Local_94.f_253, bVar0)){
Local_94.f_251=(Local_94.f_251 - 1);
if(func_99() > 1){
if(Local_94.f_252 > 0){
Local_94.f_302++;
func_98(bVar0, func_105(1));
}}
MISC::SET_BIT(&(Local_94.f_253), bVar0);
}
func_107(&(Local_573[bVar0 /*2*/]));
}}}elseif(func_97(bVar0)){
if(!MISC::IS_BIT_SET(Local_94.f_253, bVar0)){
Local_94.f_251=(Local_94.f_251 - 1);
if(func_99() > 1){
if(Local_94.f_252 > 0){
Local_94.f_302++;
func_98(bVar0, func_105(1));
}
}
if(Local_94.f_27==joaat("hydra")){
Local_94.f_254++;
}
MISC::SET_BIT(&(Local_94.f_253), bVar0);
}
if(func_23(&(Local_94.f_336[bVar0 /*2*/]))){
func_107(&(Local_94.f_336[bVar0 /*2*/]));
}
func_26(&(Local_94.f_73[bVar0]));
}else{
if(MISC::IS_BIT_SET(Local_94.f_3, 0)){
MISC::CLEAR_BIT(&(Local_94.f_3), false);
}
if(!MISC::IS_BIT_SET(Local_94.f_271, bVar0)){
if(!func_23(&(Local_94.f_336[bVar0 /*2*/]))){
func_21(&(Local_94.f_336[bVar0 /*2*/]), 0, 0);
}
elseif(func_20(&(Local_94.f_336[bVar0 /*2*/]), 5000, 0)){
MISC::SET_BIT(&(Local_94.f_271), bVar0);
}
elseif(func_20(&(Local_94.f_336[bVar0 /*2*/]), 3000, 0)){
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[bVar0]))==joaat("savage")){
if(!MISC::IS_BIT_SET(Local_94.f_3, 18)){
func_102(func_105(1), bVar0);
MISC::SET_BIT(&(Local_94.f_3), 18);
}}elseif(func_101(bVar0) || !func_775()){
if(!MISC::IS_BIT_SET(Local_94.f_303, bVar0)){
func_100(func_105(1), bVar0);
MISC::SET_BIT(&(Local_94.f_303), bVar0);
}}
}}}}
iVar1=0;
iVar1=0;
while (iVar1 < Local_94.f_116){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_48[(bVar0 * 4 + iVar1)])){
bVar6=(bVar0 * 4 + iVar1);
if(!func_32(Local_94.f_48[(bVar0 * 4 + iVar1)])){
if(PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[(bVar0 * 4 + iVar1)]), 0)){
if(!func_95((bVar0 * 4 + iVar1))){
MISC::CLEAR_BIT(&(Local_94.f_3), false);
}elseif(func_94(bVar6)){
if(!func_20(&(Local_94.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0)){
}
if(HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_94.f_48[(bVar0 * 4 + iVar1)]))){
func_93(&(Local_106[(bVar0 * 4 + iVar1) /*8*/]));
}
func_26(&(Local_94.f_48[(bVar0 * 4 + iVar1)]));
if(MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar6)], func_91(bVar6))){
if(Local_94.f_85[(bVar0 * 4 + iVar1)] > 0){
func_90((bVar0 * 4 + iVar1), func_105(1));
Local_94.f_254++;
}}
Local_94.f_85[(bVar0 * 4 + iVar1)]=0;
if(func_23(&(Local_94.f_364[bVar6 /*2*/]))){
func_107(&(Local_94.f_364[bVar6 /*2*/]));
}
if(MISC::IS_BIT_SET(Local_94.f_275[func_92(bVar6)], func_91(bVar6))){
MISC::CLEAR_BIT(&(Local_94.f_275[func_92(bVar6)]), func_91(bVar6));
}}else{
if(!MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar6)], func_91(bVar6))){
if(!func_23(&(Local_94.f_364[bVar6 /*2*/]))){
func_21(&(Local_94.f_364[bVar6 /*2*/]), 0, 0);
}
elseif(func_20(&(Local_94.f_364[bVar6 /*2*/]), 7000, 0)){
MISC::SET_BIT(&(Local_94.f_272[func_92(bVar6)]), func_91(bVar6));
func_107(&(Local_94.f_364[bVar6 /*2*/]));
}}
if(!MISC::IS_BIT_SET(Local_94.f_275[func_92(bVar6)], func_91(bVar6))){
MISC::SET_BIT(&(Local_94.f_275[func_92(bVar6)]), func_91(bVar6));
}}
}}elseif(MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar6)], func_91(bVar6)) || Local_94.f_27==joaat("hydra")){
if(!func_20(&(Local_94.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0)){
}
func_26(&(Local_94.f_48[(bVar0 * 4 + iVar1)]));
if(MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar6)], func_91(bVar6))){
if(Local_94.f_85[(bVar0 * 4 + iVar1)] > 0){
Local_94.f_254++;
func_90((bVar0 * 4 + iVar1), func_105(1));
}
}
Local_94.f_85[(bVar0 * 4 + iVar1)]=0;
if(MISC::IS_BIT_SET(Local_94.f_275[func_92(bVar6)], func_91(bVar6))){
MISC::CLEAR_BIT(&(Local_94.f_275[func_92(bVar6)]), func_91(bVar6));
}}else{
if(!MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar6)], func_91(bVar6))){
if(!func_23(&(Local_94.f_364[bVar6 /*2*/]))){
func_21(&(Local_94.f_364[bVar6 /*2*/]), 0, 0);
}elseif(func_20(&(Local_94.f_364[bVar6 /*2*/]), 7000, 0)){
MISC::SET_BIT(&(Local_94.f_272[func_92(bVar6)]), func_91(bVar6));
func_107(&(Local_94.f_364[bVar6 /*2*/]));
}
}
if(!MISC::IS_BIT_SET(Local_94.f_275[func_92(bVar6)], func_91(bVar6))){
MISC::SET_BIT(&(Local_94.f_275[func_92(bVar6)]), func_91(bVar6));
}}}
iVar1++;
}
if(Local_94.f_249 < func_104()){
if(func_74(bVar0)){
}
MISC::CLEAR_BIT(&(Local_94.f_3), false);
}
bVar0++;
}}
if(!MISC::IS_BIT_SET(Local_94.f_3, 2)){
if(Local_94.f_247 >=Global_262145.f_10846){
MISC::SET_BIT(&(Local_94.f_3), 2);
}
iVar1=0;
iVar1=0;
while (iVar1 < Local_94.f_243){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_48[(20 + iVar1)])){
bVar7=(20 + iVar1);
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iVar1)]), 0)){
MISC::CLEAR_BIT(&(Local_94.f_3), 2);
}elseif(MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar7)], func_91(bVar7))){
if(!func_20(&(Local_94.f_414[(20 + iVar1) /*2*/]), 5000, 0)){
}
if(func_23(&(Local_94.f_364[bVar7 /*2*/]))){
func_107(&(Local_94.f_364[bVar7 /*2*/]));
}
func_26(&(Local_94.f_48[(20 + iVar1)]));
if(Local_94.f_85[(20 + iVar1)] > 0){
Local_94.f_254++;
if(func_99() > 1){
if(Local_94.f_317 > 0){
Local_94.f_316++;
}
}
func_90((20 + iVar1), func_105(1));
}
Local_94.f_85[(20 + iVar1)]=0;
if(MISC::IS_BIT_SET(Local_94.f_275[func_92(bVar7)], func_91(bVar7))){
MISC::CLEAR_BIT(&(Local_94.f_275[func_92(bVar7)]), func_91(bVar7));
}}else{
if(!MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar7)], func_91(bVar7))){
if(!func_23(&(Local_94.f_364[bVar7 /*2*/]))){
func_21(&(Local_94.f_364[bVar7 /*2*/]), 0, 0);
}
elseif(func_20(&(Local_94.f_364[bVar7 /*2*/]), 7000, 0)){
MISC::SET_BIT(&(Local_94.f_272[func_92(bVar7)]), func_91(bVar7));
func_107(&(Local_94.f_364[bVar7 /*2*/]));
}}
if(!MISC::IS_BIT_SET(Local_94.f_275[func_92(bVar7)], func_91(bVar7))){
MISC::SET_BIT(&(Local_94.f_275[func_92(bVar7)]), func_91(bVar7));
}}}
if(Local_94.f_247 < func_73()){
if(func_52(iVar1)){
}
MISC::CLEAR_BIT(&(Local_94.f_3), 2);
}
iVar1++;
}}
func_37();
}


void func_37(){
int iVar0;
int iVar1;
if(func_99()==1){
return;
}
if(func_99()==2){
if(Local_94.f_252 > 0){
if(Local_94.f_302 > 0){
if(Local_94.f_302 >=(Local_94.f_252 - 1)){
if(func_51() <=func_50()){
if(func_49()==0){
iVar0=Local_94.f_279 + 1;
if(iVar0 < 10){
iVar1=Local_94.f_280[iVar0];
if(iVar1 !=5){
func_48();
Local_94.f_279++;
func_41();
}elseif(Local_94.f_318 >=func_40()){
func_48();
Local_94.f_279++;
func_41();
}}
}}}}}}elseif(func_99()==3){
if(Local_94.f_317 > 0){
if(Local_94.f_316 > 0){
if(Local_94.f_316 >=Local_94.f_317){
if(Local_94.f_317 >=func_39()){
func_48();
Local_94.f_279++;
func_41();
}}}}}elseif(func_99()==4){
if(Local_94.f_316 > 0){
if(Local_94.f_302 > 0){
if(Local_94.f_317 > 0){
if(Local_94.f_316 >=(Local_94.f_317 - 2)){
if(Local_94.f_252 > 0){
if(Local_94.f_302 >=(Local_94.f_252 - 2)){
if(func_51() <=func_50()){
if(func_49() <=func_38()){
iVar0=Local_94.f_279 + 1;
if(iVar0 < 10){
iVar1=Local_94.f_280[iVar0];
if(iVar1 !=5){
func_48();
Local_94.f_279++;
func_41();
}elseif(Local_94.f_318 >=func_40()){
func_48();
Local_94.f_279++;
func_41();
}
}
}}}
}}}}}}elseif(func_99()==5){
if(Local_94.f_252 > 0){
if(Local_94.f_302 > 0){
if(Local_94.f_302 >=(Local_94.f_252 - 1)){
if(func_51() <=func_50()){
if(func_49()==0){
func_48();
Local_94.f_279++;
func_41();
}}}}}}}

int func_38(){
int iVar0;
int iVar1;
iVar0=Local_94.f_279 + 1;
if(iVar0 < 10){
iVar1=Local_94.f_280[iVar0];
switch (iVar1){
case 1:
return 99;
break;
case 2:
return 1;
break;
case 4:
if(func_99()==4){
return 2;
}elseif(func_99()==2){
return 1;
}
break;
case 5:
return 0;
break;
}}else{
return 99;
}
return 99;
}

int func_39(){
return Local_94.f_305[Local_94.f_279];
}

int func_40(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < Local_94.f_278){
iVar0=(iVar0 + Local_94.f_305[iVar1]);
iVar1++;
}
return iVar0;
}


void func_41(){
int iVar0;
if(Local_94.f_29==-1){
iVar0=func_47(Local_94.f_27);
Local_94.f_29=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
if(func_775()){
if(Local_94.f_27==joaat("hydra")){
if(Local_94.f_29==2){
Local_94.f_29=4;
}}elseif(Local_94.f_27==joaat("savage")){
if(Local_94.f_29==0){
Local_94.f_29=1;
}elseif(Local_94.f_29==1){
Local_94.f_29=2;
}elseif(Local_94.f_29==2){
Local_94.f_29=3;
}}elseif(Local_94.f_27==joaat("valkyrie")){
if(Local_94.f_29==2){
Local_94.f_29=3;
}elseif(Local_94.f_29==3){
Local_94.f_29=4;
}}elseif(Local_94.f_27==joaat("buzzard")){
if(Local_94.f_29==0){
Local_94.f_29=1;
}elseif(Local_94.f_29==1){
Local_94.f_29=2;
}elseif(Local_94.f_29==2){
Local_94.f_29=3;
}elseif(Local_94.f_29==3){
Local_94.f_29=4;
}}}elseif(Local_94.f_27==joaat("savage")){
if(Local_94.f_29==0){
Local_94.f_29=1;
}elseif(Local_94.f_29==1){
Local_94.f_29=2;
}elseif(Local_94.f_29==2){
Local_94.f_29=3;
}}}
switch (Local_94.f_27){
case joaat("rhino"):
Local_94.f_280[0]=4;
Local_94.f_291[0]=func_46(4);
Local_94.f_305[0]=func_45(4);
Local_94.f_280[1]=4;
Local_94.f_291[1]=func_46(4);
Local_94.f_305[1]=func_45(4);
Local_94.f_280[2]=4;
Local_94.f_291[2]=func_46(4);
Local_94.f_305[2]=func_45(4);
if(Local_94.f_12 <=2 || !func_775()){
Local_94.f_278=3;
}elseif(Local_94.f_12==3){
Local_94.f_280[3]=4;
Local_94.f_291[3]=func_46(4);
Local_94.f_305[3]=func_45(4);
Local_94.f_278=4;
}else{
Local_94.f_280[3]=4;
Local_94.f_291[3]=func_46(4);
Local_94.f_305[3]=func_45(4);
Local_94.f_280[4]=4;
Local_94.f_291[4]=func_46(4);
Local_94.f_305[4]=func_45(4);
Local_94.f_278=5;
}
Local_94.f_255=func_42();
if(!func_775()){
Local_94.f_1=0;
}else{
Local_94.f_1=5;
}
Local_94.f_2=Local_94.f_29;
switch (Local_94.f_29){
case 0:
Local_94.f_30[0 /*3*/]={
1016.734f, 2360.83f, 50.4559f 
};
Local_94.f_43[0]=269.414f;
Local_94.f_30[1 /*3*/]={
1002.526f, 2390.64f, 50.5438f 
};
Local_94.f_43[1]=3.5491f;
Local_94.f_30[2 /*3*/]={
986.0139f, 2301.592f, 48.8235f 
};
Local_94.f_43[2]=54.4509f;
Local_94.f_30[3 /*3*/]={
977.1004f, 2371.714f, 51.0115f 
};
Local_94.f_43[3]=178.1948f;
Local_94.f_159[0 /*3*/]={
1028.325f, 2436.455f, 44.2365f 
};
Local_94.f_175[0]=270.8322f;
Local_94.f_159[1 /*3*/]={
1166.498f, 2403.021f, 56.662f 
};
Local_94.f_175[1]=177.3506f;
Local_94.f_159[2 /*3*/]={
892.8997f, 2465.881f, 49.7859f 
};
Local_94.f_175[2]=318.1089f;
Local_94.f_159[3 /*3*/]={
1078.988f, 2246.879f, 43.7942f 
};
Local_94.f_175[3]=272.0801f;
Local_94.f_159[4 /*3*/]={
1016.784f, 2259.447f, 43.8512f 
};
Local_94.f_175[4]=104.0591f;
Local_94.f_117[0 /*3*/]={
1042.504f, 2280.497f, 48.6315f 
};
Local_94.f_148[0]=296.4225f;
Local_94.f_117[1 /*3*/]={
991.9136f, 2278.353f, 48.1838f 
};
Local_94.f_148[1]=164.9695f;
Local_94.f_117[2 /*3*/]={
1029.763f, 2447.042f, 44.5979f 
};
Local_94.f_148[2]=136.0596f;
Local_94.f_117[3 /*3*/]={
971.0186f, 2422.765f, 50.6913f 
};
Local_94.f_148[3]=116.379f;
Local_94.f_117[4 /*3*/]={
1017.264f, 2432.009f, 45.2054f 
};
Local_94.f_148[4]=86.6586f;
Local_94.f_117[5 /*3*/]={
1072.751f, 2237.599f, 43.3802f 
};
Local_94.f_148[5]=74.6822f;
Local_94.f_117[6 /*3*/]={
944.4364f, 2407.392f, 50.0925f 
};
Local_94.f_148[6]=206.8863f;
Local_94.f_117[7 /*3*/]={
1059.804f, 2280.784f, 48.5613f 
};
Local_94.f_148[7]=267.8581f;
Local_94.f_117[8 /*3*/]={
1004.272f, 2372.344f, 54.5719f 
};
Local_94.f_148[8]=267.5856f;
Local_94.f_117[9 /*3*/]={
972.3055f, 2235.821f, 53.1094f 
};
Local_94.f_148[9]=325.0964f;
break;
case 1:
Local_94.f_30[0 /*3*/]={
1733.134f, 3302.545f, 40.2235f 
};
Local_94.f_43[0]=194.8062f;
Local_94.f_30[1 /*3*/]={
1761.281f, 3309.879f, 40.1489f 
};
Local_94.f_43[1]=238.9372f;
Local_94.f_30[2 /*3*/]={
1755.753f, 3236.49f, 41.0341f 
};
Local_94.f_43[2]=16.3071f;
Local_94.f_30[3 /*3*/]={
1676.76f, 3279.734f, 39.8901f 
};
Local_94.f_43[3]=209.9883f;
Local_94.f_117[0 /*3*/]={
1758.449f, 3309.247f, 40.1417f 
};
Local_94.f_148[0]=221.3913f;
Local_94.f_117[1 /*3*/]={
1746.445f, 3323.75f, 40.1528f 
};
Local_94.f_148[1]=246.3415f;
Local_94.f_117[2 /*3*/]={
1775.057f, 3332.943f, 40.3398f 
};
Local_94.f_148[2]=213.4087f;
Local_94.f_117[3 /*3*/]={
1713.24f, 3302.458f, 40.1851f 
};
Local_94.f_148[3]=100.5405f;
Local_94.f_117[4 /*3*/]={
1693.817f, 3293.163f, 40.1465f 
};
Local_94.f_148[4]=289.6017f;
Local_94.f_117[5 /*3*/]={
1697.449f, 3176.312f, 44.0261f 
};
Local_94.f_148[5]=285.6456f;
Local_94.f_117[6 /*3*/]={
1710.565f, 3180.909f, 43.2884f 
};
Local_94.f_148[6]=310.9245f;
Local_94.f_117[7 /*3*/]={
1627.436f, 3198.51f, 39.9059f 
};
Local_94.f_148[7]=46.7117f;
Local_94.f_117[8 /*3*/]={
1788.401f, 3208.964f, 43.0201f 
};
Local_94.f_148[8]=35.9192f;
Local_94.f_117[9 /*3*/]={
1698.308f, 3289.254f, 47.8594f 
};
Local_94.f_148[9]=207.53f;
Local_94.f_159[0 /*3*/]={
1669.932f, 3132.549f, 42.2874f 
};
Local_94.f_175[0]=286.6127f;
Local_94.f_159[1 /*3*/]={
1943.321f, 3263.146f, 44.7265f 
};
Local_94.f_175[1]=124.1428f;
Local_94.f_159[2 /*3*/]={
1151.224f, 3172.348f, 40.6704f 
};
Local_94.f_175[2]=275.0147f;
Local_94.f_159[3 /*3*/]={
1134.716f, 3169.23f, 40.6443f 
};
Local_94.f_175[3]=287.91f;
Local_94.f_159[4 /*3*/]={
1311.352f, 2963.962f, 40.0443f 
};
Local_94.f_175[4]=270.287f;
break;
case 2:
Local_94.f_30[0 /*3*/]={
2703.281f, 1576.7f, 23.527f 
};
Local_94.f_43[0]=172.439f;
Local_94.f_30[1 /*3*/]={
2702.781f, 1512.725f, 23.5199f 
};
Local_94.f_43[1]=53.9805f;
Local_94.f_30[2 /*3*/]={
2678.432f, 1518.734f, 23.5295f 
};
Local_94.f_43[2]=303.2142f;
Local_94.f_30[3 /*3*/]={
2677.509f, 1566.525f, 23.501f 
};
Local_94.f_43[3]=218.5974f;
Local_94.f_117[0 /*3*/]={
2621.796f, 1695.869f, 26.5983f 
};
Local_94.f_148[0]=264.5842f;
Local_94.f_117[1 /*3*/]={
2746.846f, 1567.683f, 23.501f 
};
Local_94.f_148[1]=133.7932f;
Local_94.f_117[2 /*3*/]={
2664.273f, 1599.201f, 23.7604f 
};
Local_94.f_148[2]=205.1215f;
Local_94.f_117[3 /*3*/]={
2757.255f, 1576.939f, 23.501f 
};
Local_94.f_148[3]=66.1065f;
Local_94.f_117[4 /*3*/]={
2714.176f, 1480.445f, 23.5007f 
};
Local_94.f_148[4]=7.8064f;
Local_94.f_117[5 /*3*/]={
2713.364f, 1450.272f, 23.6191f 
};
Local_94.f_148[5]=358.7563f;
Local_94.f_117[6 /*3*/]={
2739.862f, 1463.719f, 23.5015f 
};
Local_94.f_148[6]=142.1748f;
Local_94.f_117[7 /*3*/]={
2676.403f, 1589.224f, 26.2548f 
};
Local_94.f_148[7]=247.816f;
Local_94.f_117[8 /*3*/]={
2703.085f, 1685.568f, 23.4887f 
};
Local_94.f_148[8]=124.4666f;
Local_94.f_117[9 /*3*/]={
2665.022f, 1409.433f, 23.538f 
};
Local_94.f_148[9]=348.6588f;
Local_94.f_159[0 /*3*/]={
2737.115f, 1697.578f, 23.6755f 
};
Local_94.f_175[0]=89.8563f;
Local_94.f_159[1 /*3*/]={
2778.598f, 1458.218f, 23.5382f 
};
Local_94.f_175[1]=163.8004f;
Local_94.f_159[2 /*3*/]={
2529.779f, 1641.113f, 27.9752f 
};
Local_94.f_175[2]=270.0754f;
Local_94.f_159[3 /*3*/]={
2665.372f, 1702.379f, 23.4882f 
};
Local_94.f_175[3]=184.9752f;
Local_94.f_159[4 /*3*/]={
2726.623f, 1640.299f, 23.5607f 
};
Local_94.f_175[4]=90.4555f;
break;
case 3:
case 4:
Local_94.f_30[0 /*3*/]={
1088.383f, -3024.919f, 4.901f 
};
Local_94.f_43[0]=0.5044f;
Local_94.f_30[1 /*3*/]={
1086.846f, -2975.534f, 4.9012f 
};
Local_94.f_43[1]=179.2507f;
Local_94.f_30[2 /*3*/]={
986.4979f, -3024.68f, 4.9008f 
};
Local_94.f_43[2]=0.3066f;
Local_94.f_30[3 /*3*/]={
986.1768f, -2972.394f, 4.9012f 
};
Local_94.f_43[3]=180.2973f;
Local_94.f_117[0 /*3*/]={
991.85f, -2969.792f, 4.9008f 
};
Local_94.f_148[0]=336.7541f;
Local_94.f_117[1 /*3*/]={
1178.155f, -3022.33f, 4.9021f 
};
Local_94.f_148[1]=6.0929f;
Local_94.f_117[2 /*3*/]={
1107.679f, -2983.992f, 4.901f 
};
Local_94.f_148[2]=4.2803f;
Local_94.f_117[3 /*3*/]={
1043.869f, -2979.597f, 4.901f 
};
Local_94.f_148[3]=274.985f;
Local_94.f_117[4 /*3*/]={
1042.952f, -3031.76f, 4.901f 
};
Local_94.f_148[4]=267.2555f;
Local_94.f_117[5 /*3*/]={
1095.349f, -3077.492f, 4.8877f 
};
Local_94.f_148[5]=6.5529f;
Local_94.f_117[6 /*3*/]={
1114.924f, -3031.319f, 4.901f 
};
Local_94.f_148[6]=89.1724f;
Local_94.f_117[7 /*3*/]={
1048.021f, -3077.814f, 4.901f 
};
Local_94.f_148[7]=348.279f;
Local_94.f_117[8 /*3*/]={
995.4651f, -3036.897f, 4.9008f 
};
Local_94.f_148[8]=267.8075f;
Local_94.f_117[9 /*3*/]={
1101.347f, -2968.894f, 13.3329f 
};
Local_94.f_148[9]=0.5237f;
Local_94.f_159[0 /*3*/]={
1254.191f, -3126.908f, 4.8012f 
};
Local_94.f_175[0]=357.9713f;
Local_94.f_159[1 /*3*/]={
856.4759f, -3118.969f, 4.9008f 
};
Local_94.f_175[1]=269.3234f;
Local_94.f_159[2 /*3*/]={
838.2247f, -3118.748f, 4.9008f 
};
Local_94.f_175[2]=269.3055f;
Local_94.f_159[3 /*3*/]={
1197.595f, -2983.872f, 4.9021f 
};
Local_94.f_175[3]=359.1497f;
Local_94.f_159[4 /*3*/]={
962.6804f, -3016.159f, 4.9017f 
};
Local_94.f_175[4]=270.0873f;
break;
}
break;
case joaat("savage"):
Local_94.f_240=joaat("insurgent");
Local_94.f_280[0]=2;
Local_94.f_291[0]=func_46(2);
Local_94.f_280[1]=4;
Local_94.f_291[1]=func_46(4);
Local_94.f_305[1]=func_45(4);
Local_94.f_280[2]=2;
Local_94.f_291[2]=func_46(2);
if(Local_94.f_12 <=2 || !func_775()){
Local_94.f_280[3]=5;
Local_94.f_291[3]=func_46(5);
Local_94.f_278=4;
}elseif(Local_94.f_12==3){
Local_94.f_280[3]=4;
Local_94.f_291[3]=func_46(4);
Local_94.f_305[3]=func_45(4);
Local_94.f_280[4]=2;
Local_94.f_291[4]=func_46(2);
Local_94.f_280[5]=5;
Local_94.f_291[5]=func_46(5);
Local_94.f_278=6;
}else{
Local_94.f_280[3]=4;
Local_94.f_291[3]=func_46(4);
Local_94.f_305[3]=func_45(4);
Local_94.f_280[4]=2;
Local_94.f_291[4]=func_46(2);
Local_94.f_280[5]=4;
Local_94.f_291[5]=func_46(4);
Local_94.f_305[5]=func_45(4);
Local_94.f_280[6]=5;
Local_94.f_291[6]=func_46(5);
Local_94.f_278=7;
}
Local_94.f_255=func_42();
if(!func_775()){
Local_94.f_1=2;
}else{
Local_94.f_1=7;
}
Local_94.f_2=Local_94.f_29;
switch (Local_94.f_29){
case 0:
Local_94.f_30[0 /*3*/]={
-1177.65f, -2845.542f, 12.9458f 
};
Local_94.f_43[0]=331.74f;
Local_94.f_30[1 /*3*/]={
-1082.479f, -2900.191f, 12.9478f 
};
Local_94.f_43[1]=327.7335f;
Local_94.f_30[2 /*3*/]={
-1202.019f, -2873.67f, 12.9454f 
};
Local_94.f_43[2]=149.1604f;
Local_94.f_30[3 /*3*/]={
-1126.58f, -2918.416f, 12.9454f 
};
Local_94.f_43[3]=150.6753f;
Local_94.f_117[0 /*3*/]={
-985.8373f, -2942.973f, 12.9451f 
};
Local_94.f_148[0]=147.2177f;
Local_94.f_117[1 /*3*/]={
-1051.412f, -2880.828f, 29.3631f 
};
Local_94.f_148[1]=103.9461f;
Local_94.f_117[2 /*3*/]={
-1154.54f, -2821.091f, 29.3631f 
};
Local_94.f_148[2]=160.822f;
Local_94.f_117[3 /*3*/]={
-1211.898f, -2789.125f, 12.9523f 
};
Local_94.f_148[3]=205.8375f;
Local_94.f_117[4 /*3*/]={
-1199.493f, -2724.709f, 12.9771f 
};
Local_94.f_148[4]=124.7328f;
break;
case 1:
Local_94.f_30[0 /*3*/]={
1930.067f, 4710.339f, 40.1633f 
};
Local_94.f_43[0]=344.2504f;
Local_94.f_30[1 /*3*/]={
1954.56f, 4724.181f, 40.0604f 
};
Local_94.f_43[1]=340.3425f;
Local_94.f_30[2 /*3*/]={
2004.913f, 4748.04f, 40.0604f 
};
Local_94.f_43[2]=351.5693f;
Local_94.f_30[3 /*3*/]={
2027.928f, 4757.387f, 40.0595f 
};
Local_94.f_43[3]=354.2446f;
Local_94.f_117[0 /*3*/]={
1954.209f, 4653.232f, 39.7136f 
};
Local_94.f_148[0]=245.2865f;
Local_94.f_117[1 /*3*/]={
2116.177f, 4761.993f, 40.2281f 
};
Local_94.f_148[1]=74.1185f;
Local_94.f_117[2 /*3*/]={
2123.414f, 4784.407f, 39.9703f 
};
Local_94.f_148[2]=10.2312f;
Local_94.f_117[3 /*3*/]={
1925.159f, 4817.925f, 43.9706f 
};
Local_94.f_148[3]=222.4017f;
Local_94.f_117[4 /*3*/]={
2009.58f, 4802.505f, 41.009f 
};
Local_94.f_148[4]=150.2763f;
Local_94.f_117[5 /*3*/]={
2133.472f, 4834.528f, 40.347f 
};
Local_94.f_148[5]=105.4526f;
Local_94.f_117[6 /*3*/]={
2139.058f, 4792.084f, 39.9703f 
};
Local_94.f_148[6]=88.9429f;
Local_94.f_117[7 /*3*/]={
2014.276f, 4721.062f, 40.6111f 
};
Local_94.f_148[7]=51.1733f;
Local_94.f_117[8 /*3*/]={
2060.417f, 4847.691f, 40.8344f 
};
Local_94.f_148[8]=169.7083f;
Local_94.f_117[9 /*3*/]={
2151.434f, 4789.446f, 39.9594f 
};
Local_94.f_148[9]=29.5849f;
Local_94.f_243=3;
break;
case 2:
if(!func_775()){
Local_94.f_30[0 /*3*/]={
206.2382f, 7031.669f, 1.1068f 
};
Local_94.f_43[0]=319.153f;
}else{
Local_94.f_30[0 /*3*/]={
206.2382f, 7031.669f, 1.1068f 
};
Local_94.f_43[0]=319.153f;
Local_94.f_30[1 /*3*/]={
218.7712f, 7018.654f, 1.0042f 
};
Local_94.f_43[1]=316.7079f;
Local_94.f_30[2 /*3*/]={
230.1561f, 7001.589f, 1.2508f 
};
Local_94.f_43[2]=316.9623f;
Local_94.f_30[3 /*3*/]={
242.3287f, 6987.263f, 1.7354f 
};
Local_94.f_43[3]=314.2003f;
}
Local_94.f_117[0 /*3*/]={
131.5444f, 6956.887f, 12.1839f 
};
Local_94.f_148[0]=326.4292f;
Local_94.f_117[1 /*3*/]={
201.7152f, 6842.864f, 21.2216f 
};
Local_94.f_148[1]=6.8118f;
Local_94.f_117[2 /*3*/]={
66.3015f, 6924.146f, 12.2944f 
};
Local_94.f_148[2]=32.8776f;
Local_94.f_117[3 /*3*/]={
42.4962f, 7055.19f, 1.3986f 
};
Local_94.f_148[3]=8.387f;
Local_94.f_117[4 /*3*/]={
146.7828f, 6849.039f, 17.571f 
};
Local_94.f_148[4]=291.5504f;
Local_94.f_117[5 /*3*/]={
290.266f, 6946.917f, 3.1171f 
};
Local_94.f_148[5]=333.1838f;
Local_94.f_117[6 /*3*/]={
50.5669f, 7102.213f, 2.0034f 
};
Local_94.f_148[6]=203.8353f;
Local_94.f_117[7 /*3*/]={
274.1516f, 6856.506f, 15.8452f 
};
Local_94.f_148[7]=32.2329f;
Local_94.f_117[8 /*3*/]={
88.9963f, 7113.472f, 24.5763f 
};
Local_94.f_148[8]=195.4847f;
Local_94.f_117[9 /*3*/]={
131.6119f, 6956.082f, 12.2413f 
};
Local_94.f_148[9]=327.4941f;
Local_94.f_243=4;
break;
case 3:
if(!func_775()){
Local_94.f_30[0 /*3*/]={
704.1097f, -1579.947f, 8.6915f 
};
Local_94.f_43[0]=156.0209f;
}else{
Local_94.f_30[0 /*3*/]={
704.1097f, -1579.947f, 8.6915f 
};
Local_94.f_43[0]=156.0209f;
Local_94.f_30[1 /*3*/]={
699.7866f, -1637.337f, 8.7086f 
};
Local_94.f_43[1]=41.8571f;
Local_94.f_30[2 /*3*/]={
663.725f, -1634.052f, 8.7086f 
};
Local_94.f_43[2]=305.7411f;
Local_94.f_30[3 /*3*/]={
662.7472f, -1596.468f, 8.7086f 
};
Local_94.f_43[3]=223.2489f;
}
if(func_99()==2 || func_99()==5){
Local_94.f_242=3;
}else{
Local_94.f_242=4;
}
Local_94.f_117[0 /*3*/]={
585.7374f, -1450.264f, 19.043f 
};
Local_94.f_148[0]=197.3456f;
Local_94.f_117[1 /*3*/]={
784.6684f, -1526.172f, 9.5498f 
};
Local_94.f_148[1]=140.7211f;
Local_94.f_117[2 /*3*/]={
790.8864f, -1603.665f, 30.2421f 
};
Local_94.f_148[2]=98.9528f;
Local_94.f_117[3 /*3*/]={
782.042f, -1487.963f, 19.2726f 
};
Local_94.f_148[3]=107.0238f;
Local_94.f_117[4 /*3*/]={
698.9001f, -1443.555f, 21.3382f 
};
Local_94.f_148[4]=202.129f;
Local_94.f_117[5 /*3*/]={
566.2017f, -1506.386f, 27.1027f 
};
Local_94.f_148[5]=230.1207f;
Local_94.f_117[6 /*3*/]={
752.1943f, -1491.94f, 19.4421f 
};
Local_94.f_148[6]=36.194f;
Local_94.f_117[7 /*3*/]={
702.7894f, -1452.929f, 30.3215f 
};
Local_94.f_148[7]=48.2522f;
Local_94.f_117[8 /*3*/]={
592.6577f, -1452.304f, 28.8626f 
};
Local_94.f_148[8]=296.114f;
Local_94.f_117[9 /*3*/]={
794.9213f, -1660.62f, 43.147f 
};
Local_94.f_148[9]=3.1632f;
break;
}
break;
case joaat("hydra"):
Local_94.f_240=joaat("lazer");
Local_94.f_280[0]=2;
Local_94.f_291[0]=func_46(2);
Local_94.f_280[1]=2;
Local_94.f_291[1]=func_46(2);
Local_94.f_280[2]=2;
Local_94.f_291[2]=func_46(2);
if(Local_94.f_12 <=2 || !func_775()){
Local_94.f_278=3;
}elseif(Local_94.f_12==3){
Local_94.f_280[3]=2;
Local_94.f_291[3]=func_46(2);
Local_94.f_280[4]=2;
Local_94.f_291[4]=func_46(2);
Local_94.f_278=5;
}else{
Local_94.f_280[3]=2;
Local_94.f_291[3]=func_46(2);
Local_94.f_280[4]=2;
Local_94.f_291[4]=func_46(2);
Local_94.f_280[5]=2;
Local_94.f_291[5]=func_46(2);
Local_94.f_278=6;
}
Local_94.f_255=func_42();
if(!func_775()){
Local_94.f_1=1;
}else{
Local_94.f_1=6;
}
Local_94.f_2=Local_94.f_29;
switch (Local_94.f_29){
case 0:
if(!func_775()){
Local_94.f_30[0 /*3*/]={
145.8397f, -2790.197f, 5.0002f 
};
Local_94.f_43[0]=197.4435f;
}else{
Local_94.f_30[0 /*3*/]={
145.8397f, -2790.197f, 5.0002f 
};
Local_94.f_43[0]=197.4435f;
Local_94.f_30[1 /*3*/]={
132.5468f, -2805.181f, 5.0002f 
};
Local_94.f_43[1]=197.1133f;
Local_94.f_30[2 /*3*/]={
123.1125f, -2823.665f, 5.0002f 
};
Local_94.f_43[2]=272.2065f;
Local_94.f_30[3 /*3*/]={
163.5494f, -2795.92f, 5.0002f 
};
Local_94.f_43[3]=142.941f;
}
Local_94.f_159[0 /*3*/]={
887.9951f, -3884.45f, 54.3252f 
};
Local_94.f_175[0]=34.149f;
Local_94.f_159[1 /*3*/]={
-255.1527f, -4101.981f, 100.1964f 
};
Local_94.f_175[1]=-26.0182f;
Local_94.f_159[2 /*3*/]={
1271.189f, -3196.243f, 104.9035f 
};
Local_94.f_175[2]=88.3998f;
Local_94.f_159[3 /*3*/]={
-879.6379f, -2210.024f, 245.712f 
};
Local_94.f_175[3]=-141.7949f;
Local_94.f_228[0]=10000;
Local_94.f_228[1]=10000;
Local_94.f_228[2]=10000;
Local_94.f_228[3]=10000;
Local_94.f_117[0 /*3*/]={
546.2563f, -3289.316f, 17.714f 
};
Local_94.f_148[0]=143.4012f;
Local_94.f_117[1 /*3*/]={
596.183f, -3288.174f, 17.714f 
};
Local_94.f_148[1]=212.1136f;
Local_94.f_117[2 /*3*/]={
500.3511f, -3338.894f, 23.591f 
};
Local_94.f_148[2]=95.8248f;
Local_94.f_117[3 /*3*/]={
480.8767f, -3238.414f, 5.0696f 
};
Local_94.f_148[3]=113.3084f;
Local_94.f_117[4 /*3*/]={
444.4339f, -3187.956f, 5.0703f 
};
Local_94.f_148[4]=260.1329f;
Local_94.f_242=4;
break;
case 1:
if(!func_775()){
Local_94.f_30[0 /*3*/]={
-1762.408f, -786.7469f, 8.075f 
};
Local_94.f_43[0]=131.0993f;
}else{
Local_94.f_30[0 /*3*/]={
-1762.408f, -786.7469f, 8.075f 
};
Local_94.f_43[0]=131.0993f;
Local_94.f_30[1 /*3*/]={
-1734.978f, -796.148f, 8.3998f 
};
Local_94.f_43[1]=127.8408f;
Local_94.f_30[2 /*3*/]={
-1762.095f, -758.1465f, 8.6368f 
};
Local_94.f_43[2]=131.1571f;
Local_94.f_30[3 /*3*/]={
-1792.501f, -751.6967f, 8.1782f 
};
Local_94.f_43[3]=132.943f;
}
Local_94.f_159[0 /*3*/]={
-1876.497f, -665.6128f, 109.1172f 
};
Local_94.f_175[0]=316.9068f;
Local_94.f_159[1 /*3*/]={
-1099.297f, 20.5145f, 150.0107f 
};
Local_94.f_175[1]=142.3075f;
Local_94.f_159[2 /*3*/]={
-803.6566f, -866.03f, 137.4505f 
};
Local_94.f_175[2]=93.1231f;
Local_94.f_159[3 /*3*/]={
-1697.535f, -1306.955f, 127.8882f 
};
Local_94.f_175[3]=-9.0334f;
Local_94.f_228[0]=10000;
Local_94.f_228[1]=10000;
Local_94.f_228[2]=10000;
Local_94.f_228[3]=10000;
Local_94.f_117[0 /*3*/]={
-1468.446f, -546.457f, 84.073f 
};
Local_94.f_148[0]=236.3566f;
Local_94.f_117[1 /*3*/]={
-1288.024f, -439.2769f, 102.47f 
};
Local_94.f_148[1]=212.7533f;
Local_94.f_117[2 /*3*/]={
-1556.831f, -589.7376f, 32.9884f 
};
Local_94.f_148[2]=299.3619f;
Local_94.f_117[3 /*3*/]={
-1353.281f, -514.1478f, 22.2694f 
};
Local_94.f_148[3]=115.7556f;
Local_94.f_117[4 /*3*/]={
-1314.693f, -570.6011f, 28.3023f 
};
Local_94.f_148[4]=191.3862f;
Local_94.f_242=4;
break;
case 2:
Local_94.f_30[0 /*3*/]={
737.7632f, 1292.348f, 359.296f 
};
Local_94.f_43[0]=176.244f;
Local_94.f_159[0 /*3*/]={
737.1152f, 1296.363f, 459.296f 
};
Local_94.f_175[0]=93.8354f;
Local_94.f_159[1 /*3*/]={
-425.5261f, 1185.381f, 324.6416f 
};
Local_94.f_175[1]=250.5173f;
Local_94.f_159[2 /*3*/]={
1157.617f, 116.7023f, 180.3293f 
};
Local_94.f_175[2]=337.8961f;
Local_94.f_159[3 /*3*/]={
1604.747f, 2094.859f, 184.1727f 
};
Local_94.f_175[3]=142.1369f;
Local_94.f_228[0]=10000;
Local_94.f_228[1]=10000;
Local_94.f_228[2]=10000;
Local_94.f_228[3]=10000;
Local_94.f_117[0 /*3*/]={
662.439f, 1284.189f, 359.296f 
};
Local_94.f_148[0]=208.2624f;
Local_94.f_117[1 /*3*/]={
782.1017f, 1279.344f, 359.2967f 
};
Local_94.f_148[1]=349.048f;
Local_94.f_117[2 /*3*/]={
769.1426f, 1300.744f, 359.2967f 
};
Local_94.f_148[2]=69.8162f;
Local_94.f_117[3 /*3*/]={
750.6609f, 1209.155f, 326.5541f 
};
Local_94.f_148[3]=286.6181f;
Local_94.f_242=4;
Local_94.f_243=4;
break;
case 3:
Local_94.f_30[0 /*3*/]={
2521.121f, -471.1436f, 91.9971f 
};
Local_94.f_43[0]=292.0822f;
Local_94.f_30[1 /*3*/]={
2510.273f, -473.5832f, 91.9929f 
};
Local_94.f_43[1]=43.3907f;
Local_94.f_30[2 /*3*/]={
2481.39f, -320.2297f, 91.9927f 
};
Local_94.f_43[2]=124.2279f;
Local_94.f_30[3 /*3*/]={
2560.314f, -438.3987f, 91.9926f 
};
Local_94.f_43[3]=129.3366f;
Local_94.f_159[0 /*3*/]={
2870.504f, 368.2049f, 101.6602f 
};
Local_94.f_175[0]=137.5025f;
Local_94.f_159[1 /*3*/]={
1859.596f, 272.0942f, 162.159f 
};
Local_94.f_175[1]=227.9336f;
Local_94.f_159[2 /*3*/]={
2666.033f, -931.6996f, 100.6606f 
};
Local_94.f_175[2]=6.0299f;
Local_94.f_159[3 /*3*/]={
1336.474f, -345.6518f, 424.9653f 
};
Local_94.f_175[3]=-87.5596f;
Local_94.f_228[0]=10000;
Local_94.f_228[1]=10000;
Local_94.f_228[2]=10000;
Local_94.f_228[3]=10000;
Local_94.f_242=4;
Local_94.f_117[0 /*3*/]={
2528.376f, -424.9132f, 113.09f 
};
Local_94.f_148[0]=338.8487f;
Local_94.f_117[1 /*3*/]={
2473.828f, -384.0913f, 108.6521f 
};
Local_94.f_148[1]=272.5443f;
Local_94.f_117[2 /*3*/]={
2535.322f, -335.4323f, 113.0844f 
};
Local_94.f_148[2]=223.0158f;
Local_94.f_117[3 /*3*/]={
2478.752f, -416.0706f, 92.7351f 
};
Local_94.f_148[3]=355.6682f;
Local_94.f_117[4 /*3*/]={
2482.176f, -353.0269f, 92.7351f 
};
Local_94.f_148[4]=179.3658f;
break;
case 4:
if(!func_775()){
Local_94.f_30[0 /*3*/]={
-1822.324f, -3167.588f, 12.9444f 
};
Local_94.f_43[0]=331.7771f;
}else{
Local_94.f_30[0 /*3*/]={
-1822.324f, -3167.588f, 12.9444f 
};
Local_94.f_43[0]=331.7771f;
Local_94.f_30[1 /*3*/]={
-1841.38f, -3156.666f, 12.9444f 
};
Local_94.f_43[1]=324.1843f;
Local_94.f_30[2 /*3*/]={
-1860.858f, -3143.922f, 12.9444f 
};
Local_94.f_43[2]=330.0586f;
Local_94.f_30[3 /*3*/]={
-1885.131f, -3129.948f, 12.9444f 
};
Local_94.f_43[3]=329.5413f;
}
Local_94.f_159[0 /*3*/]={
-1185.202f, -2364.726f, 112.9452f 
};
Local_94.f_175[0]=146.9594f;
Local_94.f_159[1 /*3*/]={
-382.1712f, -2495.05f, 105.0008f 
};
Local_94.f_175[1]=137.6555f;
Local_94.f_159[2 /*3*/]={
-412.0741f, -2847.307f, 105.0004f 
};
Local_94.f_175[2]=114.7478f;
Local_94.f_159[3 /*3*/]={
-2538.447f, -3165.758f, 133.9589f 
};
Local_94.f_175[3]=-84.6269f;
Local_94.f_228[0]=10000;
Local_94.f_228[1]=10000;
Local_94.f_228[2]=10000;
Local_94.f_228[3]=10000;
Local_94.f_242=4;
Local_94.f_117[0 /*3*/]={
-1051.566f, -2880.667f, 29.3631f 
};
Local_94.f_148[0]=153.0449f;
Local_94.f_117[1 /*3*/]={
-1154.167f, -2821.089f, 29.3631f 
};
Local_94.f_148[1]=153.1271f;
Local_94.f_117[2 /*3*/]={
-1441.866f, -3280.676f, 12.9449f 
};
Local_94.f_148[2]=331.3771f;
Local_94.f_117[3 /*3*/]={
-1209.32f, -2789.023f, 12.9523f 
};
Local_94.f_148[3]=183.2579f;
Local_94.f_117[4 /*3*/]={
-1239.188f, -2688.943f, 12.9449f 
};
Local_94.f_148[4]=149.3518f;
break;
case 5:
Local_94.f_30[0 /*3*/]={
-144.0471f, -593.1377f, 210.7752f 
};
Local_94.f_43[0]=184.7817f;
Local_94.f_159[0 /*3*/]={
449.0346f, -981.1837f, 142.6917f 
};
Local_94.f_175[0]=91.7761f;
Local_94.f_159[1 /*3*/]={
-665.604f, -932.722f, 145.3242f 
};
Local_94.f_175[1]=269.7376f;
Local_94.f_159[2 /*3*/]={
-686.7255f, 217.4708f, 136.5301f 
};
Local_94.f_175[1]=211.4614f;
Local_94.f_159[3 /*3*/]={
314.4621f, -130.8896f, 222.2372f 
};
Local_94.f_175[3]=148.9204f;
Local_94.f_228[0]=10000;
Local_94.f_228[1]=10000;
Local_94.f_228[2]=10000;
Local_94.f_228[3]=10000;
Local_94.f_242=4;
Local_94.f_117[0 /*3*/]={
-159.1301f, -600.2693f, 200.7354f 
};
Local_94.f_148[0]=113.298f;
Local_94.f_117[1 /*3*/]={
-145.0832f, -578.3243f, 200.7354f 
};
Local_94.f_148[1]=353.0292f;
Local_94.f_117[2 /*3*/]={
-135.3186f, -606.2405f, 200.7354f 
};
Local_94.f_148[2]=216.1793f;
Local_94.f_117[3 /*3*/]={
-208.5985f, -725.582f, 219.5222f 
};
Local_94.f_148[3]=347.4008f;
Local_94.f_243=4;
break;
}
break;
case joaat("valkyrie"):
Local_94.f_240=joaat("buzzard");
Local_94.f_280[0]=2;
Local_94.f_291[0]=func_46(2);
Local_94.f_305[0]=func_45(4);
Local_94.f_280[1]=4;
Local_94.f_291[1]=func_46(4);
Local_94.f_305[1]=func_45(4);
Local_94.f_280[2]=2;
Local_94.f_291[2]=func_46(2);
Local_94.f_305[2]=func_45(4);
if(Local_94.f_12 <=2 || !func_775()){
Local_94.f_280[3]=5;
Local_94.f_291[3]=func_46(5);
Local_94.f_278=4;
}elseif(Local_94.f_12==3){
Local_94.f_280[3]=4;
Local_94.f_291[3]=func_46(4);
Local_94.f_305[3]=func_45(4);
Local_94.f_280[4]=2;
Local_94.f_291[4]=func_46(2);
Local_94.f_280[5]=5;
Local_94.f_291[5]=func_46(5);
Local_94.f_278=6;
}else{
Local_94.f_280[3]=4;
Local_94.f_291[3]=func_46(4);
Local_94.f_305[3]=func_45(4);
Local_94.f_280[4]=2;
Local_94.f_291[4]=func_46(2);
Local_94.f_280[5]=4;
Local_94.f_291[5]=func_46(4);
Local_94.f_305[5]=func_45(4);
Local_94.f_280[6]=5;
Local_94.f_291[6]=func_46(5);
Local_94.f_278=7;
}
Local_94.f_255=func_42();
if(!func_775()){
Local_94.f_1=3;
}else{
Local_94.f_1=8;
}
Local_94.f_2=Local_94.f_29;
switch (Local_94.f_29){
case 0:
if(!func_775()){
Local_94.f_30[0 /*3*/]={
-758.7451f, -1488.612f, 4.0005f 
};
Local_94.f_43[0]=290.0732f;
}else{
Local_94.f_30[0 /*3*/]={
-758.7451f, -1488.612f, 4.0005f 
};
Local_94.f_43[0]=290.0732f;
Local_94.f_30[1 /*3*/]={
-754.8721f, -1442.684f, 4.0005f 
};
Local_94.f_43[1]=231.5867f;
Local_94.f_30[2 /*3*/]={
-712.4144f, -1459.331f, 4.0005f 
};
Local_94.f_43[2]=49.6234f;
Local_94.f_30[3 /*3*/]={
-729.9052f, -1418.734f, 4.0005f 
};
Local_94.f_43[3]=229.3317f;
}
Local_94.f_117[0 /*3*/]={
-692.5144f, -1384.774f, 4.1503f 
};
Local_94.f_148[0]=230.0049f;
Local_94.f_117[1 /*3*/]={
-724.5416f, -1374.024f, 0.6002f 
};
Local_94.f_148[1]=147.9421f;
Local_94.f_117[2 /*3*/]={
-763.0113f, -1531.637f, 4.4284f 
};
Local_94.f_148[2]=22.3204f;
Local_94.f_117[3 /*3*/]={
-622.6572f, -1346.997f, 10.7793f 
};
Local_94.f_148[3]=80.7676f;
Local_94.f_117[4 /*3*/]={
-650.5557f, -1313.337f, 9.8688f 
};
Local_94.f_148[4]=162.0507f;
Local_94.f_117[5 /*3*/]={
-687.8698f, -1314.519f, 4.1019f 
};
Local_94.f_148[5]=225.9002f;
Local_94.f_117[6 /*3*/]={
-719.8957f, -1300.4f, 4.1019f 
};
Local_94.f_148[6]=140.0515f;
Local_94.f_117[7 /*3*/]={
-661.9195f, -1213.277f, 9.7043f 
};
Local_94.f_148[7]=90.6966f;
Local_94.f_117[8 /*3*/]={
-758.4667f, -1332.722f, 8.6f 
};
Local_94.f_148[8]=226.042f;
Local_94.f_117[9 /*3*/]={
-597.2482f, -1415.324f, 11.0923f 
};
Local_94.f_148[9]=79.7294f;
Local_94.f_243=4;
break;
case 1:
Local_94.f_30[0 /*3*/]={
307.4523f, 2835.238f, 42.4361f 
};
Local_94.f_43[0]=122.9714f;
Local_94.f_30[1 /*3*/]={
358.6979f, 2863.14f, 42.0979f 
};
Local_94.f_43[1]=118.6931f;
Local_94.f_30[2 /*3*/]={
356.6689f, 2806.741f, 52.9669f 
};
Local_94.f_43[2]=26.5272f;
Local_94.f_30[3 /*3*/]={
310.0119f, 2875.712f, 42.5068f 
};
Local_94.f_43[3]=211.0638f;
Local_94.f_117[0 /*3*/]={
346.145f, 2861.565f, 42.4603f 
};
Local_94.f_148[0]=203.4084f;
Local_94.f_117[1 /*3*/]={
264.2803f, 2872.275f, 42.6105f 
};
Local_94.f_148[1]=123.7895f;
Local_94.f_117[2 /*3*/]={
290.4762f, 2853.89f, 42.6424f 
};
Local_94.f_148[2]=115.9053f;
Local_94.f_117[3 /*3*/]={
290.606f, 2810.906f, 47.9461f 
};
Local_94.f_148[3]=330.5807f;
Local_94.f_117[4 /*3*/]={
341.4013f, 2863.181f, 42.4361f 
};
Local_94.f_148[4]=116.311f;
Local_94.f_117[5 /*3*/]={
254.767f, 2880.256f, 42.5168f 
};
Local_94.f_148[5]=145.855f;
Local_94.f_117[6 /*3*/]={
301.125f, 2814.328f, 42.4361f 
};
Local_94.f_148[6]=41.353f;
Local_94.f_117[7 /*3*/]={
306.254f, 2865.798f, 42.5755f 
};
Local_94.f_148[7]=266.0158f;
Local_94.f_117[8 /*3*/]={
195.36f, 2808.636f, 44.3806f 
};
Local_94.f_148[8]=290.3963f;
Local_94.f_117[9 /*3*/]={
269.1239f, 2866.509f, 73.1797f 
};
Local_94.f_148[9]=243.2495f;
Local_94.f_243=4;
break;
case 2:
Local_94.f_30[0 /*3*/]={
714.882f, 4175.296f, 39.7092f 
};
Local_94.f_43[0]=280.2862f;
Local_94.f_30[1 /*3*/]={
765.1945f, 4182.796f, 39.7152f 
};
Local_94.f_43[1]=32.9157f;
Local_94.f_30[2 /*3*/]={
750.664f, 4238.85f, 54.7686f 
};
Local_94.f_43[2]=106.2954f;
Local_94.f_30[3 /*3*/]={
569.2263f, 4178.386f, 37.2124f 
};
Local_94.f_43[3]=272.3807f;
Local_94.f_117[0 /*3*/]={
724.4003f, 4198.888f, 39.7092f 
};
Local_94.f_148[0]=254.5411f;
Local_94.f_117[1 /*3*/]={
792.2949f, 4184.186f, 39.5336f 
};
Local_94.f_148[1]=183.227f;
Local_94.f_117[2 /*3*/]={
754.1003f, 4181.829f, 39.7131f 
};
Local_94.f_148[2]=338.6039f;
Local_94.f_117[3 /*3*/]={
849.6327f, 4224.779f, 49.5859f 
};
Local_94.f_148[3]=71.8258f;
Local_94.f_117[4 /*3*/]={
856.303f, 4257.466f, 49.48f 
};
Local_94.f_148[4]=179.6626f;
Local_94.f_117[5 /*3*/]={
611.6555f, 4222.132f, 52.4756f 
};
Local_94.f_148[5]=272.7491f;
Local_94.f_117[6 /*3*/]={
643.0641f, 4213.754f, 52.6579f 
};
Local_94.f_148[6]=270.8252f;
Local_94.f_117[7 /*3*/]={
665.9061f, 4263.513f, 53.7219f 
};
Local_94.f_148[7]=180.4937f;
Local_94.f_117[8 /*3*/]={
876.0669f, 4247.905f, 48.9739f 
};
Local_94.f_148[8]=107.4297f;
Local_94.f_117[9 /*3*/]={
509.1728f, 4239.358f, 54.4925f 
};
Local_94.f_148[9]=247.5728f;
break;
case 3:
Local_94.f_30[0 /*3*/]={
3279.497f, 5204.456f, 17.3168f 
};
Local_94.f_43[0]=117.7311f;
Local_94.f_30[1 /*3*/]={
3280.456f, 5166.343f, 17.9564f 
};
Local_94.f_43[1]=46.3958f;
Local_94.f_30[2 /*3*/]={
3258.509f, 5225.87f, 17.2293f 
};
Local_94.f_43[2]=189.2091f;
Local_94.f_30[3 /*3*/]={
3302.896f, 5136.244f, 17.3101f 
};
Local_94.f_43[3]=50.0778f;
Local_94.f_117[0 /*3*/]={
3318.215f, 5186.109f, 17.4503f 
};
Local_94.f_148[0]=229.5714f;
Local_94.f_117[1 /*3*/]={
3309.254f, 5167.526f, 17.4491f 
};
Local_94.f_148[1]=136.4963f;
Local_94.f_117[2 /*3*/]={
3372.606f, 5183.914f, 0.4652f 
};
Local_94.f_148[2]=88.3908f;
Local_94.f_117[3 /*3*/]={
3222.684f, 5187.734f, 30.0174f 
};
Local_94.f_148[3]=271.8922f;
Local_94.f_117[4 /*3*/]={
3217.351f, 5145.03f, 18.4178f 
};
Local_94.f_148[4]=316.4374f;
Local_94.f_117[5 /*3*/]={
3155.562f, 5285.246f, 28.0707f 
};
Local_94.f_148[5]=246.1521f;
Local_94.f_117[6 /*3*/]={
3311.935f, 5176.247f, 18.6196f 
};
Local_94.f_148[6]=198.8985f;
Local_94.f_117[7 /*3*/]={
3230.142f, 5200.801f, 22.8278f 
};
Local_94.f_148[7]=257.2332f;
Local_94.f_117[8 /*3*/]={
3420.069f, 5169.133f, 4.8574f 
};
Local_94.f_148[8]=104.7808f;
Local_94.f_117[9 /*3*/]={
3242.868f, 5035.166f, 20.011f 
};
Local_94.f_148[9]=339.2293f;
break;
case 4:
Local_94.f_30[0 /*3*/]={
-1736.989f, 162.0228f, 63.371f 
};
Local_94.f_43[0]=306.7662f;
Local_94.f_30[1 /*3*/]={
-1736.938f, 137.1991f, 63.371f 
};
Local_94.f_43[1]=303.3918f;
Local_94.f_30[2 /*3*/]={
-1756.272f, 172.5584f, 63.3711f 
};
Local_94.f_43[2]=302.365f;
Local_94.f_30[3 /*3*/]={
-1710.748f, 129.7035f, 63.3716f 
};
Local_94.f_43[3]=304.9788f;
Local_94.f_117[0 /*3*/]={
-1674.868f, 141.795f, 62.4627f 
};
Local_94.f_148[0]=30.9787f;
Local_94.f_117[1 /*3*/]={
-1668.265f, 190.8298f, 60.7573f 
};
Local_94.f_148[1]=97.3626f;
Local_94.f_117[2 /*3*/]={
-1661.135f, 236.6263f, 61.391f 
};
Local_94.f_148[2]=218.2636f;
Local_94.f_117[3 /*3*/]={
-1706.443f, 186.8354f, 62.9277f 
};
Local_94.f_148[3]=257.6324f;
Local_94.f_117[4 /*3*/]={
-1722.395f, 227.362f, 60.7408f 
};
Local_94.f_148[4]=244.6777f;
Local_94.f_117[5 /*3*/]={
-1623.344f, 165.8969f, 59.7796f 
};
Local_94.f_148[5]=12.745f;
Local_94.f_117[6 /*3*/]={
-1627.188f, 242.7915f, 58.648f 
};
Local_94.f_148[6]=196.3743f;
Local_94.f_117[7 /*3*/]={
-1796.215f, 150.6246f, 67.7735f 
};
Local_94.f_148[7]=283.2556f;
Local_94.f_117[8 /*3*/]={
-1774.033f, 105.8673f, 69.3384f 
};
Local_94.f_148[8]=243.4268f;
Local_94.f_117[9 /*3*/]={
-1594.717f, 210.4007f, 73.3379f 
};
Local_94.f_148[9]=27.7876f;
break;
}
break;
case joaat("buzzard"):
Local_94.f_240=joaat("buzzard");
Local_94.f_280[0]=2;
Local_94.f_291[0]=func_46(2);
Local_94.f_280[1]=4;
Local_94.f_291[1]=func_46(4);
Local_94.f_305[1]=func_45(4);
Local_94.f_280[2]=2;
Local_94.f_291[2]=func_46(2);
if(Local_94.f_12 <=2 || !func_775()){
Local_94.f_280[3]=5;
Local_94.f_291[3]=func_46(5);
Local_94.f_278=4;
}elseif(Local_94.f_12==3){
Local_94.f_280[3]=4;
Local_94.f_291[3]=func_46(4);
Local_94.f_305[3]=func_45(4);
Local_94.f_280[4]=2;
Local_94.f_291[4]=func_46(2);
Local_94.f_280[5]=5;
Local_94.f_291[5]=func_46(5);
Local_94.f_278=6;
}else{
Local_94.f_280[3]=4;
Local_94.f_291[3]=func_46(4);
Local_94.f_305[3]=func_45(4);
Local_94.f_280[4]=2;
Local_94.f_291[4]=func_46(2);
Local_94.f_280[5]=4;
Local_94.f_291[5]=func_46(4);
Local_94.f_305[5]=func_45(4);
Local_94.f_280[6]=5;
Local_94.f_291[6]=func_46(5);
Local_94.f_278=7;
}
Local_94.f_255=func_42();
if(!func_775()){
Local_94.f_1=4;
}else{
Local_94.f_1=9;
}
Local_94.f_2=Local_94.f_29;
switch (Local_94.f_29){
case 0:
Local_94.f_30[0 /*3*/]={
1139.943f, -1289.195f, 33.6127f 
};
Local_94.f_43[0]=180.7904f;
Local_94.f_30[1 /*3*/]={
1156.358f, -1327.402f, 33.7312f 
};
Local_94.f_43[1]=269.3001f;
Local_94.f_30[2 /*3*/]={
1204.963f, -1265.334f, 34.2267f 
};
Local_94.f_43[2]=180.39f;
Local_94.f_30[3 /*3*/]={
1220.954f, -1214.883f, 34.9485f 
};
Local_94.f_43[3]=276.7351f;
Local_94.f_117[0 /*3*/]={
1195.556f, -1277.914f, 34.3601f 
};
Local_94.f_148[0]=329.9165f;
Local_94.f_117[1 /*3*/]={
1197.899f, -1297.386f, 34.1985f 
};
Local_94.f_148[1]=264.7702f;
Local_94.f_117[2 /*3*/]={
1168.435f, -1382.305f, 33.784f 
};
Local_94.f_148[2]=359.5203f;
Local_94.f_117[3 /*3*/]={
1160.796f, -1253.626f, 33.5659f 
};
Local_94.f_148[3]=111.3101f;
Local_94.f_117[4 /*3*/]={
1178.2f, -1272.399f, 33.8277f 
};
Local_94.f_148[4]=176.3058f;
Local_94.f_117[5 /*3*/]={
1185.282f, -1355.494f, 33.9506f 
};
Local_94.f_148[5]=213.1969f;
Local_94.f_117[6 /*3*/]={
1217.704f, -1381.659f, 34.3114f 
};
Local_94.f_148[6]=275.2275f;
Local_94.f_117[7 /*3*/]={
1193.388f, -1257.564f, 34.2036f 
};
Local_94.f_148[7]=220.0349f;
Local_94.f_117[8 /*3*/]={
1174.833f, -1381.064f, 41.8297f 
};
Local_94.f_148[8]=359.15f;
Local_94.f_117[9 /*3*/]={
1154.647f, -1338.613f, 33.7034f 
};
Local_94.f_148[9]=83.4212f;
break;
case 1:
Local_94.f_30[0 /*3*/]={
129.1966f, -368.0656f, 42.257f 
};
Local_94.f_43[0]=247.4892f;
Local_94.f_30[1 /*3*/]={
147.9662f, -363.0619f, 42.257f 
};
Local_94.f_43[1]=66.129f;
Local_94.f_30[2 /*3*/]={
116.6446f, -436.4488f, 40.1294f 
};
Local_94.f_43[2]=340.0713f;
Local_94.f_30[3 /*3*/]={
90.0879f, -385.0907f, 40.2506f 
};
Local_94.f_43[3]=245.7466f;
Local_94.f_117[0 /*3*/]={
47.0236f, -401.9681f, 38.9218f 
};
Local_94.f_148[0]=252.6017f;
Local_94.f_117[1 /*3*/]={
36.934f, -438.6162f, 38.9206f 
};
Local_94.f_148[1]=245.262f;
Local_94.f_117[2 /*3*/]={
69.7929f, -461.295f, 38.9215f 
};
Local_94.f_148[2]=44.7945f;
Local_94.f_117[3 /*3*/]={
48.4389f, -397.2337f, 54.29f 
};
Local_94.f_148[3]=255.6518f;
Local_94.f_117[4 /*3*/]={
204.0561f, -439.34f, 41.9848f 
};
Local_94.f_148[4]=124.8391f;
Local_94.f_117[5 /*3*/]={
142.2612f, -291.4343f, 45.3084f 
};
Local_94.f_148[5]=188.9979f;
Local_94.f_117[6 /*3*/]={
163.2065f, -291.4264f, 45.1553f 
};
Local_94.f_148[6]=159.3613f;
Local_94.f_117[7 /*3*/]={
115.7637f, -459.3909f, 40.1269f 
};
Local_94.f_148[7]=5.7762f;
Local_94.f_117[8 /*3*/]={
76.8378f, -337.484f, 66.2022f 
};
Local_94.f_148[8]=89.3388f;
Local_94.f_117[9 /*3*/]={
134.533f, -346.3627f, 101.6362f 
};
Local_94.f_148[9]=85.9158f;
break;
case 2:
Local_94.f_30[0 /*3*/]={
-509.9767f, 1186.854f, 323.8415f 
};
Local_94.f_43[0]=310.6241f;
Local_94.f_30[1 /*3*/]={
-398.0129f, 1230.508f, 324.6416f 
};
Local_94.f_43[1]=166.0191f;
Local_94.f_30[2 /*3*/]={
-455.6342f, 1141.998f, 324.9044f 
};
Local_94.f_43[2]=343.1715f;
Local_94.f_30[3 /*3*/]={
-412.4245f, 1133.032f, 324.9044f 
};
Local_94.f_43[3]=342.4984f;
Local_94.f_117[0 /*3*/]={
-426.3299f, 1216.66f, 324.7585f 
};
Local_94.f_148[0]=248.8594f;
Local_94.f_117[1 /*3*/]={
-363.2418f, 1266.761f, 329.8745f 
};
Local_94.f_148[1]=195.7758f;
Local_94.f_117[2 /*3*/]={
-453.9799f, 1074.992f, 326.6897f 
};
Local_94.f_148[2]=28.6127f;
Local_94.f_117[3 /*3*/]={
-392.485f, 1078.562f, 323.2558f 
};
Local_94.f_148[3]=296.7476f;
Local_94.f_117[4 /*3*/]={
-413.6003f, 1086.831f, 326.6821f 
};
Local_94.f_148[4]=240.9422f;
Local_94.f_117[5 /*3*/]={
-381.0179f, 1141.269f, 321.6503f 
};
Local_94.f_148[5]=2.473f;
Local_94.f_117[6 /*3*/]={
-482.3448f, 1118.646f, 319.0963f 
};
Local_94.f_148[6]=343.6776f;
Local_94.f_117[7 /*3*/]={
-397.3531f, 1127.527f, 321.7288f 
};
Local_94.f_148[7]=0.2495f;
Local_94.f_117[8 /*3*/]={
-435.3902f, 1092.162f, 331.5411f 
};
Local_94.f_148[8]=72.7889f;
Local_94.f_117[9 /*3*/]={
-424.5132f, 1225.076f, 324.7585f 
};
Local_94.f_148[9]=238.4196f;
break;
case 3:
Local_94.f_30[0 /*3*/]={
341.0539f, 3569.789f, 32.4743f 
};
Local_94.f_43[0]=351.0324f;
Local_94.f_30[1 /*3*/]={
373.5018f, 3512.322f, 33.1732f 
};
Local_94.f_43[1]=3.5452f;
Local_94.f_30[2 /*3*/]={
353.5068f, 3483.839f, 34.0848f 
};
Local_94.f_43[2]=7.3237f;
Local_94.f_30[3 /*3*/]={
245.8774f, 3580.881f, 32.9612f 
};
Local_94.f_43[3]=332.0844f;
Local_94.f_117[0 /*3*/]={
447.4214f, 3566.317f, 32.2386f 
};
Local_94.f_148[0]=2.6416f;
Local_94.f_117[1 /*3*/]={
445.3309f, 3512.088f, 32.9825f 
};
Local_94.f_148[1]=171.8638f;
Local_94.f_117[2 /*3*/]={
353.2316f, 3396.212f, 35.4033f 
};
Local_94.f_148[2]=257.0332f;
Local_94.f_117[3 /*3*/]={
454.5527f, 3530.242f, 32.4254f 
};
Local_94.f_148[3]=91.7869f;
Local_94.f_117[4 /*3*/]={
395.8559f, 3577.025f, 32.2922f 
};
Local_94.f_148[4]=4.2016f;
Local_94.f_117[5 /*3*/]={
380.2437f, 3560.991f, 32.342f 
};
Local_94.f_148[5]=339.729f;
Local_94.f_117[6 /*3*/]={
408.4627f, 3458.313f, 32.6961f 
};
Local_94.f_148[6]=359.2033f;
Local_94.f_117[7 /*3*/]={
476.5523f, 3557.328f, 32.2386f 
};
Local_94.f_148[7]=333.6298f;
Local_94.f_117[8 /*3*/]={
325.6323f, 3390.666f, 35.4033f 
};
Local_94.f_148[8]=73.2788f;
Local_94.f_117[9 /*3*/]={
461.6116f, 3535.257f, 32.318f 
};
Local_94.f_148[9]=96.8181f;
break;
case 4:
Local_94.f_30[0 /*3*/]={
1493.166f, 1177.555f, 113.2209f 
};
Local_94.f_43[0]=42.1535f;
Local_94.f_30[1 /*3*/]={
1433.476f, 1179.544f, 113.1842f 
};
Local_94.f_43[1]=315.0261f;
Local_94.f_30[2 /*3*/]={
1471.486f, 1108.967f, 113.3343f 
};
Local_94.f_43[2]=1.2527f;
Local_94.f_30[3 /*3*/]={
1448.914f, 1110.622f, 113.3363f 
};
Local_94.f_43[3]=1.9403f;
Local_94.f_117[0 /*3*/]={
1485.622f, 1047.388f, 113.334f 
};
Local_94.f_148[0]=352.9674f;
Local_94.f_117[1 /*3*/]={
1461.541f, 1083.658f, 113.3344f 
};
Local_94.f_148[1]=88.8285f;
Local_94.f_117[2 /*3*/]={
1411.874f, 1126.96f, 113.3341f 
};
Local_94.f_148[2]=177.2297f;
Local_94.f_117[3 /*3*/]={
1442.497f, 1148.469f, 113.3342f 
};
Local_94.f_148[3]=273.1487f;
Local_94.f_117[4 /*3*/]={
1406.476f, 1256.695f, 106.6555f 
};
Local_94.f_148[4]=225.394f;
Local_94.f_117[5 /*3*/]={
1464.077f, 1134.808f, 113.3227f 
};
Local_94.f_148[5]=175.5423f;
Local_94.f_117[6 /*3*/]={
1410.314f, 1162.317f, 113.3342f 
};
Local_94.f_148[6]=191.1842f;
Local_94.f_117[7 /*3*/]={
1487.483f, 1102.243f, 113.3346f 
};
Local_94.f_148[7]=269.6831f;
Local_94.f_117[8 /*3*/]={
1391.034f, 1154.223f, 113.4433f 
};
Local_94.f_148[8]=29.4203f;
Local_94.f_117[9 /*3*/]={
1484.87f, 1039.553f, 113.2318f 
};
Local_94.f_148[9]=287.677f;
break;
}
break;
}}

int func_42(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(Local_94.f_255 !=-1){
return Local_94.f_255;
}
if(Local_94.f_278==0){
return ((4 * Global_262145.f_10845) + Global_262145.f_10846);
}
iVar2=func_99();
iVar3=func_44(iVar2);
iVar4=func_43(iVar3);
switch (Local_94.f_27){
case joaat("rhino"):
case joaat("savage"):
case joaat("hydra"):
case joaat("valkyrie"):
case joaat("buzzard"):
iVar1=0;
while (iVar1 < Local_94.f_278){
iVar0=(iVar0 + ((Local_94.f_291[iVar1] * iVar4) + Local_94.f_305[iVar1]));
iVar1++;
}
break;
}
return iVar0;
}

int func_43(int iParam0){
switch (iParam0){
case joaat("insurgent"):
return 2;
break;
case joaat("lazer"):
return 1;
break;
case joaat("buzzard"):
return 4;
break;
case joaat("mesa3"):
return 4;
break;
case joaat("savage"):
return 4;
break;
}
return 0;
}

int func_44(int iParam0){
int iVar0;
switch (iParam0){
case 2:
if(Local_94.f_27==joaat("hydra")){
iVar0=joaat("lazer");
}else{
iVar0=joaat("buzzard");
}
break;
case 4:
if(Local_94.f_27==joaat("rhino")){
iVar0=joaat("insurgent");
}else{
iVar0=joaat("mesa3");
}
break;
case 5:
iVar0=joaat("savage");
break;
default:
if(Local_94.f_27==joaat("rhino")){
iVar0=joaat("insurgent");
}elseif(Local_94.f_27==joaat("hydra")){
iVar0=joaat("lazer");
}else{
iVar0=joaat("buzzard");
}
break;
}
return iVar0;
}

int func_45(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 4:
case 3:
if(func_775()){
iVar0=Global_262145.f_12029;
}else{
iVar0=Global_262145.f_11749;
}
break;
}
return iVar0;
}

int func_46(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 2:
if(func_775()){
iVar0=Global_262145.f_12030;
}else{
iVar0=Global_262145.f_11750;
}
break;
case 5:
if(func_775()){
iVar0=Global_262145.f_12031;
}else{
iVar0=Global_262145.f_11751;
}
break;
case 4:
if(func_775()){
iVar0=Global_262145.f_12028;
}else{
iVar0=Global_262145.f_11748;
}
break;
}
return iVar0;
}

int func_47(int iParam0){
if(!func_775()){
switch (iParam0){
case joaat("rhino"):
return 4;
case joaat("hydra"):
return 5;
case joaat("savage"):
return 3;
case joaat("valkyrie"):
return 5;
case joaat("buzzard"):
return 5;
default:}}else{
switch (iParam0){
case joaat("rhino"):
return 4;
case joaat("hydra"):
return 3;
case joaat("savage"):
return 3;
case joaat("valkyrie"):
return 4;
case joaat("buzzard"):
return 4;
}
default:
}
return 5;
}


void func_48(){
Local_94.f_252=0;
Local_94.f_302=0;
Local_94.f_317=0;
Local_94.f_316=0;
}

int func_49(){
int iVar0;
int iVar1;
iVar0=20;
iVar0=20;
while (iVar0 <=23){
if(!func_32(Local_94.f_48[iVar0])){
iVar1++;
}
iVar0++;
}
return iVar1;
}

int func_50(){
int iVar0;
int iVar1;
iVar0=Local_94.f_279 + 1;
if(iVar0 < 10){
iVar1=Local_94.f_280[iVar0];
switch (iVar1){
case 1:
return 99;
break;
case 2:
return 1;
break;
case 4:
if(func_99()==4){
return 2;
}elseif(func_99()==2){
return 1;
}
break;
case 5:
return 0;
break;
}}else{
return 99;
}
return 99;
}

int func_51(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 5){
if(func_110(Local_94.f_73[iVar1])){
iVar0++;
}
iVar1++;
}
return iVar0;
}

int func_52(int iParam0){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
int iVar4;
float fVar5;
float fVar6;
bool bVar7;
if(Local_94.f_318==0 || Local_94.f_318==func_40()){
if(func_99()==2 || func_99()==5){
return 0;
}}
if(func_99()==3 || func_99()==4){
if(Local_94.f_317 >=func_39()){
iVar0=Local_94.f_279 + 1;
if(iVar0 < 10){
iVar1=Local_94.f_280[iVar0];
if(iVar1==5){
bVar2=true;
}}
if(!bVar2){
return 0;
}}}elseif(Local_94.f_317==2){
iVar0=Local_94.f_279 + 1;
if(iVar0 < 10){
iVar1=Local_94.f_280[iVar0];
if(iVar1==5){
bVar2=true;
}}
if(!bVar2){
return 0;
}}
if(Local_94.f_318==func_40()){
return 0;
}
if(Local_94.f_318==func_72()){
return 0;
}
if(func_99()==1){
return 0;
}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_48[(20 + iParam0)])){
if(func_71(Local_94.f_239) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0)){
if(func_69(&iVar3)){
if(func_56(Local_94.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
if(func_55(&(Local_94.f_48[(20 + iParam0)]), 22, Local_94.f_239, Local_94.f_117[iVar3 /*3*/], Local_94.f_148[iVar3], 1, 1, 1)){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), iLocal_108);
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 1, 0);
PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 0);
if(iVar3==8 || iVar3==9){
WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
}
else{
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
}
fVar6=(30f * func_54());
PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), round(fVar6));
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 1);
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 2);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 0, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 1);
PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 42, 1);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), round((200f * Global_262145.f_165)), 0);
PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 1);
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 1);
PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), 151, 0);
iVar4=ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]));
fVar5=func_53();
iVar4=round((fVar5 * to_float(iVar4)));
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_94.f_48[(20 + iParam0)]), iVar4, 0);
bVar7=(20 + iParam0);
if(MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar7)], func_91(bVar7))){
MISC::CLEAR_BIT(&(Local_94.f_272[func_92(bVar7)]), func_91(bVar7));
}
Local_94.f_247++;
Local_94.f_317++;
Local_94.f_250++;
Local_94.f_318++;
func_107(&(Local_94.f_414[bVar7 /*2*/]));
func_21(&(Local_94.f_414[bVar7 /*2*/]), 0, 0);
if(func_23(&(Local_94.f_364[bVar7 /*2*/]))){
func_107(&(Local_94.f_364[bVar7 /*2*/]));
}
func_21(&(Local_562[iVar3 /*2*/]), 0, 0);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_94.f_48[bVar7]), 1, iLocal_107);
}}}}}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_48[(20 + iParam0)])){
return 0;
}
return 1;
}


var func__53(){
if(func_775()){
return Global_262145.f_12017;
}
return Global_262145.f_11737;
}


float func_54(){
if(func_775()){
return Global_262145.f_12019;
}
return Global_262145.f_11739;
}

int func_55(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7){
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

int func_56(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_63(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635560.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_57(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635560.f_2++;
return 1;
}

int func_57(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
bool bVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_876(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_876(bVar1, 1, 1)){
if(!func_16(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_58(bVar1) || !bParam8) && !Global_2657704[bVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_58(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657704[bParam0 /*463*/].f_255){
return 1;
}
return 0;
}


Vector3 func__59(bool bParam0){
int iVar0;
iVar0=bParam0;
if((func_62() && Global_1853988[iVar0 /*867*/].f_834) && !func_61(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_60(bParam0);
}


Vector3 func__60(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

int func_61(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


bool func_62(){
return Global_2683883.f_19;
}

int func_63(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam6==0){
if(func_876(bVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_58(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_64(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_60(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_64(bool bParam0){
if(func_68(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
Global_2764376={
func_67(bParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764376)){
return 1;
}
if(func_65(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
return 0;
}

int func_65(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_66(bParam0);
if(func_19(iVar0)){
if(iVar0==func_66(bParam1)){
return 1;
}}
return 0;
}

int func_66(int iParam0){
if(func_19(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_5();
}
struct<13> func_67(bool bParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
return Var0;
}

int func_68(bool bParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_67(bParam0) 
};
Global_2764389={
func_67(iParam1) 
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

int func_69(var uParam0){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
if(!func_70(Local_94.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0)){
if(!func_23(&(Local_562[iVar0 /*2*/])) || (func_23(&(Local_562[iVar0 /*2*/])) && func_20(&(Local_562[iVar0 /*2*/]), 10000, 0))){
*uParam0=iVar0;
return 1;
}}
return 0;
}


bool func_70(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_71(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_72(){
int iVar0;
int iVar1;
if(Local_94.f_279==0){
iVar0=Local_94.f_305[0];
}else{
iVar1=0;
while (iVar1 <=Local_94.f_279){
iVar0=(iVar0 + Local_94.f_305[iVar1]);
iVar1++;
}}
return iVar0;
}

int func_73(){
int iVar0;
int iVar1;
switch (Local_94.f_27){
case joaat("savage"):
case joaat("rhino"):
case joaat("hydra"):
case joaat("valkyrie"):
case joaat("buzzard"):
iVar0=0;
while (iVar0 < 10){
iVar1=(iVar1 + Local_94.f_305[iVar0]);
iVar0++;
}
break;
}
return iVar1;
}

int func_74(bool bParam0){
int iVar0;
int iVar1;
iVar0=4;
if(func_99()==3){
return 0;
}
if(Local_94.f_242 < iVar0){}
if(Local_94.f_251 >=iVar0){
return 0;
}
if(func_99() > 1){
iVar1=func_89();
if(Local_94.f_252 >=iVar1){
return 0;
}}
if(func_71(Local_94.f_240) && func_71(Local_94.f_239)){
if(func_75(bParam0)){
if(MISC::IS_BIT_SET(Local_94.f_245, bParam0)){
Local_94.f_249++;
Local_94.f_251++;
Local_94.f_252++;
MISC::CLEAR_BIT(&(Local_94.f_245), bParam0);
if(!MISC::IS_BIT_SET(Local_94.f_3, 19)){
MISC::SET_BIT(&(Local_94.f_3), 19);
}}
return 1;
}}
return 0;
}

int func_75(bool bParam0){
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0)){
if(func_81(bParam0)){
if(func_76(bParam0)){
return 1;
}}}
return 0;
}

int func_76(bool bParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
int iVar4;
float fVar5;
int iVar6;
bool bVar7;
if(func_110(Local_94.f_73[bParam0]) && MISC::IS_BIT_SET(Local_94.f_245, bParam0)){
if(func_80(Local_94.f_73[bParam0])){
if(Local_94.f_116 <=0){
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]))==joaat("insurgent")){
Local_94.f_116=2;
}else{
Local_94.f_116=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0])) + 1;
if(Local_94.f_116 > 4){
Local_94.f_116=4;
}}}
iVar6=0;
while (iVar6 < Local_94.f_116){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_48[(bParam0 * 4 + iVar6)])){
if(func_71(Local_94.f_239)){
iVar4=(iVar6 - 1);
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]))==joaat("insurgent")){
if(iVar4==0){
iVar4=7;
}
}
if(func_79(&(Local_94.f_48[(bParam0 * 4 + iVar6)]), Local_94.f_73[bParam0], 22, Local_94.f_239, iVar4, 1, 1, 1)){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), iLocal_108);
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1, 0);
PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 0);
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
if(func_78()){
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
}else{
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
}
fVar5=10f;
fVar5=(fVar5 * func_54());
PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), round(fVar5));
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 2, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 3, 0);
PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 2);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 0, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), round((200f * Global_262145.f_165)), 0);
PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 42, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 52, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 53, 1);
PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 151, 0);
if(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0])))){
if(iVar6==0){
PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 299f);
fVar5=3f;
fVar5=(fVar5 * func_77());
PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), round(fVar5));
PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 50);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 52, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 53, 1);
PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), -1857128337);
}
uVar0=Global_262145.f_12001;
uVar1=Global_262145.f_12002;
uVar2=Global_262145.f_12003;
uVar3=Global_262145.f_12004;
PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 23, uVar0);
PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 24, uVar1);
PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 25, uVar2);
PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 26, uVar3);
}elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0])))){
PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 299f);
fVar5=3f;
fVar5=(fVar5 * func_77());
PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), round(fVar5));
PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 50);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 52, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 53, 1);
uVar0=Global_262145.f_12001;
uVar1=Global_262145.f_12002;
uVar2=Global_262145.f_12003;
uVar3=Global_262145.f_12004;
PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 23, uVar0);
PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 24, uVar1);
PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 25, uVar2);
PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 26, uVar3);
}
bVar7=(bParam0 * 4 + iVar6);
if(MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar7)], func_91(bVar7))){
MISC::CLEAR_BIT(&(Local_94.f_272[func_92(bVar7)]), func_91(bVar7));
}
PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), 1, iLocal_107);
Local_94.f_250++;
func_107(&(Local_94.f_414[(bParam0 * 4 + iVar6) /*2*/]));
func_21(&(Local_94.f_414[(bParam0 * 4 + iVar6) /*2*/]), 0, 0);
if(func_23(&(Local_94.f_364[(bParam0 * 4 + iVar6) /*2*/]))){
func_107(&(Local_94.f_364[(bParam0 * 4 + iVar6) /*2*/]));
}
}}}
iVar6++;
}
iVar6=0;
iVar6=0;
while (iVar6 < Local_94.f_116){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_48[(bParam0 * 4 + iVar6)])){
return 0;
}elseif(func_32(Local_94.f_48[(bParam0 * 4 + iVar6)])){
return 0;
}elseif(!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[(bParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]))){
return 0;
}
iVar6++;
}
return 1;
}}
return 0;
}


float func_77(){
if(func_775()){
return Global_262145.f_12020;
}
return Global_262145.f_11740;
}

int func_78(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_79(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
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

int func_80(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
}
return 0;
}

int func_81(bool bParam0){
int iVar0;
float fVar1;
int iVar2;
int iVar3;
struct<3> Var4;
var uVar5;
int iVar6;
float fVar7;
float fVar8;
int iVar9;
struct<3> Var10;
var uVar11;
int iVar12;
iVar0=func_99();
Local_94.f_240=func_44(iVar0);
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_73[bParam0])){
iVar2=0;
while (iVar2 < Local_94.f_116){
iVar3=(bParam0 * 4 + iVar2);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_48[iVar3])){
return 0;
}
iVar2++;
}
if(func_71(Local_94.f_240) && !MISC::IS_BIT_SET(Local_94.f_245, bParam0)){
fVar8=300f;
if(VEHICLE::IS_THIS_MODEL_A_HELI(Local_94.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_240)){
fVar7=300f;
}else{
fVar7=100f;
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_240)){
fVar8=800f;
}
iVar9=0;
while (iVar9 < Local_94.f_242){
if(func_88(iVar9)){
func_87(Local_94.f_240, iVar9, &Var10, &uVar11);
if(!func_70(Var10, 0f, 0f, 0f, 0)){
if(func_56(Var10, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar8, 0, -1, 1, fVar7, 0, 0, 0, 0)){
Var4={
Var10 
};
uVar5=uVar11;
iVar6=1;
func_8(&(Local_94.f_186[iVar9 /*2*/]), 0, 0);
iVar9=Local_94.f_242;
}}}
iVar9++;
}
if(iVar6==1){
iVar12=1;
if(VEHICLE::IS_THIS_MODEL_A_HELI(Local_94.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_240)){
iVar12=0;
}
if(func_86(bParam0)){
if(func_83(&(Local_94.f_73[bParam0]), Local_94.f_240, Var4, uVar5, 1, 1, 1, 0, iVar12, 1, 0, 0, 0, 0)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 2);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 1);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 0, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 2);
VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 1, 1, 0);
VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 0);
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 0);
if(VEHICLE::IS_THIS_MODEL_A_HELI(Local_94.f_240)){
VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]));
ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 1);
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]));
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 0);
}
elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_240)){
VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 3);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 0);
ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 1);
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]));
VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 30f);
VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 1);
VEHICLE::SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 1);
fVar1=500f;
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), round(fVar1), 0);
}
else{
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 1, 1);
}
if(func_99()==5){
fVar1=to_float(func_82());
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), round(fVar1), 0);
ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), round(fVar1));
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), fVar1);
VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), fVar1);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), fVar1);
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 0);
if(fVar1 > 2000f){
fVar1=2000f;
}
VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), fVar1);
VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), fVar1);
}
if(func_23(&(Local_94.f_336[bParam0 /*2*/]))){
func_107(&(Local_94.f_336[bParam0 /*2*/]));
}
MISC::CLEAR_BIT(&(Local_94.f_253), bParam0);
MISC::SET_BIT(&(Local_94.f_245), bParam0);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 1, iLocal_107);
if(MISC::IS_BIT_SET(Local_94.f_271, bParam0)){
MISC::CLEAR_BIT(&(Local_94.f_271), bParam0);
}
if(MISC::IS_BIT_SET(Local_94.f_303, bParam0)){
MISC::CLEAR_BIT(&(Local_94.f_303), bParam0);
}
if(Local_94.f_240==joaat("hydra") || Local_94.f_240==joaat("savage")){
}}}}}}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_73[bParam0])){
return 0;
}
return 1;
}


var func__82(){
if(func_775()){
return Global_262145.f_12018;
}
return Global_262145.f_11738;
}

int func_83(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
func_84(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_84(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_85(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_85(bool bParam0, struct<3> Param1, int iParam2){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=bParam0;
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

int func_86(bool bParam0){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(MISC::IS_BIT_SET(Local_97[iVar0 /*18*/].f_6, bParam0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
return 0;
}}
iVar0++;
}
return 1;
}


void func_87(int iParam0, int iParam1, var uParam2, var uParam3){
bool bVar0;
bVar0=(VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
switch (Local_94.f_27){
case joaat("rhino"):
if(!func_70(Local_94.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0)){
*uParam2={
Local_94.f_159[iParam1 /*3*/] 
};
*uParam3=Local_94.f_175[iParam1];
}
break;
case joaat("hydra"):
if(!func_70(Local_94.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0)){
*uParam2={
Local_94.f_159[iParam1 /*3*/] 
};
*uParam3=Local_94.f_175[iParam1];
}
break;
case joaat("savage"):
switch (Local_94.f_29){
case 0:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
-1292.189f, -2572.868f, 22.9452f 
};
*uParam3=332.6443f;
break;
case 1:
*uParam2={
-1062.843f, -3502.913f, 23.1484f 
};
*uParam3=326.474f;
break;
case 2:
*uParam2={
-1842.189f, -3149.964f, 22.9444f 
};
*uParam3=177.2589f;
break;
case 3:
*uParam2={
-1271.333f, -2267.149f, 12.9454f 
};
*uParam3=243.2036f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
-892.8904f, -2935.942f, 12.9444f 
};
*uParam3=50.7848f;
break;
case 1:
*uParam2={
-1290.713f, -2658.844f, 13.0516f 
};
*uParam3=152.2952f;
break;
case 2:
*uParam2={
-1157.682f, -2725.707f, 12.9534f 
};
*uParam3=187.5114f;
break;
case 3:
*uParam2={
-949.6019f, -3072.991f, 12.9444f 
};
*uParam3=63.8501f;
break;
}}
break;
case 1:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
2884.986f, 4600.043f, 56.9465f 
};
*uParam3=80.1844f;
break;
case 1:
*uParam2={
2259.96f, 5608.534f, 63.366f 
};
*uParam3=171.56f;
break;
case 2:
*uParam2={
1042.117f, 4282.784f, 47.277f 
};
*uParam3=284.7637f;
break;
case 3:
*uParam2={
2884.986f, 4600.043f, 56.9465f 
};
*uParam3=80.1844f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
1914.954f, 4635.857f, 38.7005f 
};
*uParam3=344.9064f;
break;
case 1:
*uParam2={
2439.703f, 4993.831f, 44.9932f 
};
*uParam3=136.377f;
break;
case 2:
*uParam2={
1972.487f, 4843.981f, 43.13f 
};
*uParam3=315.4388f;
break;
case 3:
*uParam2={
1914.954f, 4635.857f, 38.7005f 
};
*uParam3=344.9064f;
break;
}}
break;
case 2:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
-822.0636f, 5744.907f, 16.2672f 
};
*uParam3=305.7653f;
break;
case 1:
*uParam2={
22.328f, 6898.096f, 21.23f 
};
*uParam3=151.4785f;
break;
case 2:
*uParam2={
-596.7572f, 5293.484f, 79.2145f 
};
*uParam3=339.4657f;
break;
case 3:
*uParam2={
-596.7572f, 5293.484f, 79.2145f 
};
*uParam3=339.4657f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
-561.0425f, 5638.178f, 38.9797f 
};
*uParam3=16.7516f;
break;
case 1:
*uParam2={
-38.6174f, 6281.176f, 30.2043f 
};
*uParam3=32.7307f;
break;
case 2:
*uParam2={
-313.5567f, 6436.651f, 11.6953f 
};
*uParam3=129.4952f;
break;
case 3:
*uParam2={
-561.0425f, 5638.178f, 38.9797f 
};
*uParam3=16.7516f;
break;
}}
break;
case 3:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
1490.884f, -1955.97f, 79.7973f 
};
*uParam3=78.8897f;
break;
case 1:
*uParam2={
594.3433f, -1979.466f, 28.9706f 
};
*uParam3=319.8794f;
break;
case 2:
*uParam2={
347.964f, -1427.194f, 85.1742f 
};
*uParam3=230.1411f;
break;
case 3:
*uParam2={
347.964f, -1427.194f, 85.1742f 
};
*uParam3=230.1411f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
983.6414f, -1848.797f, 30.0987f 
};
*uParam3=178.6463f;
break;
case 1:
*uParam2={
992.1669f, -1506.845f, 30.4275f 
};
*uParam3=90.1264f;
break;
case 2:
*uParam2={
771.2441f, -1620.786f, 29.9058f 
};
*uParam3=313.4008f;
break;
case 3:
*uParam2={
840.4948f, -1950.51f, 27.9516f 
};
*uParam3=87.2509f;
break;
}}
break;
}
break;
case joaat("valkyrie"):
switch (Local_94.f_29){
case 0:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
-619.1071f, -1856.811f, 38.0408f 
};
*uParam3=10.5487f;
break;
case 1:
*uParam2={
-273.1338f, -1627.779f, 40.8488f 
};
*uParam3=77.2743f;
break;
case 2:
*uParam2={
-1157.959f, -1697.113f, 40.3479f 
};
*uParam3=299.9692f;
break;
case 3:
*uParam2={
-1150.749f, -1708.635f, 40.2485f 
};
*uParam3=295.9259f;
break;
case 4:
*uParam2={
-1001.754f, -731.3828f, 85.5368f 
};
*uParam3=232.7072f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
-648.1588f, -1632.12f, 23.9175f 
};
*uParam3=145.9387f;
break;
case 1:
*uParam2={
-850.9597f, -1194.948f, 4.7312f 
};
*uParam3=2.3024f;
break;
case 2:
*uParam2={
-513.3444f, -967.2039f, 22.5742f 
};
*uParam3=111.3599f;
break;
case 3:
*uParam2={
-720.752f, -1143.745f, 9.6125f 
};
*uParam3=126.5029f;
break;
}}
break;
case 1:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
1384.463f, 3175.862f, 49.4674f 
};
*uParam3=107.9207f;
break;
case 1:
*uParam2={
848.3471f, 3587.832f, 42.0217f 
};
*uParam3=117.8402f;
break;
case 2:
*uParam2={
-390.1283f, 2557.157f, 99.8288f 
};
*uParam3=292.5476f;
break;
case 3:
*uParam2={
1084.247f, 2367.027f, 53.6989f 
};
*uParam3=53.4222f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
654.4302f, 2752.401f, 40.9669f 
};
*uParam3=192.1139f;
break;
case 1:
*uParam2={
91.7939f, 3432.573f, 38.5904f 
};
*uParam3=246.3809f;
break;
case 2:
*uParam2={
-361.922f, 2954.955f, 24.1579f 
};
*uParam3=273.6807f;
break;
case 3:
*uParam2={
-180.3412f, 2508.928f, 71.8451f 
};
*uParam3=7.1243f;
break;
case 4:
*uParam2={
142.7533f, 2271.567f, 93.6005f 
};
*uParam3=255.3593f;
break;
}}
break;
case 2:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
-394.287f, 4340.043f, 65.1832f 
};
*uParam3=263.3693f;
break;
case 1:
*uParam2={
1002.483f, 3175.867f, 48.6918f 
};
*uParam3=0.497f;
break;
case 2:
*uParam2={
2325.472f, 3922.296f, 45.2575f 
};
*uParam3=57.4066f;
break;
case 3:
*uParam2={
1962.95f, 4785.836f, 51.8872f 
};
*uParam3=134.6506f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
1398.018f, 4520.393f, 52.8047f 
};
*uParam3=105.7989f;
break;
case 1:
*uParam2={
366.9009f, 4432.027f, 61.6888f 
};
*uParam3=204.5592f;
break;
case 2:
*uParam2={
128.2849f, 4454.878f, 80.3457f 
};
*uParam3=226.3244f;
break;
case 3:
*uParam2={
-132.4943f, 4295.465f, 41.7475f 
};
*uParam3=276.3481f;
break;
case 4:
*uParam2={
1908.425f, 4607f, 36.8242f 
};
*uParam3=174.8533f;
break;
}}
break;
case 3:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
3841.898f, 4234.117f, 15.4291f 
};
*uParam3=336.9579f;
break;
case 1:
*uParam2={
2836.958f, 5957.465f, 362.3982f 
};
*uParam3=225.8444f;
break;
case 2:
*uParam2={
2624.236f, 5310.019f, 52.1567f 
};
*uParam3=215.63f;
break;
case 3:
*uParam2={
2780.447f, 4758.9f, 55.0574f 
};
*uParam3=326.934f;
break;
case 4:
*uParam2={
3201.127f, 4657.409f, 190.8286f 
};
*uParam3=359.7683f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
3756.635f, 4434.785f, 11.7586f 
};
*uParam3=138.6266f;
break;
case 1:
*uParam2={
3680.549f, 4492.803f, 23.5887f 
};
*uParam3=113.1337f;
break;
case 2:
*uParam2={
3337.639f, 5482.484f, 19.0418f 
};
*uParam3=157.3183f;
break;
case 3:
*uParam2={
2766.238f, 4974.986f, 32.7262f 
};
*uParam3=225.2302f;
break;
case 4:
*uParam2={
2797.095f, 4923.666f, 33.1334f 
};
*uParam3=34.0949f;
break;
}}
break;
case 4:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
-1988.479f, -219.2565f, 42.6251f 
};
*uParam3=325.2252f;
break;
case 1:
*uParam2={
-1567.165f, -555.6394f, 123.4493f 
};
*uParam3=24.7442f;
break;
case 2:
*uParam2={
-713.2371f, 195.5196f, 149.754f 
};
*uParam3=75.542f;
break;
case 3:
*uParam2={
-509.8761f, 1187.824f, 333.8082f 
};
*uParam3=128.2553f;
break;
case 4:
*uParam2={
-1265.789f, 1493.722f, 203.9673f 
};
*uParam3=187.8592f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
-1570.476f, 1366.453f, 127.6559f 
};
*uParam3=115.4139f;
break;
case 1:
*uParam2={
-1581.127f, 955.6403f, 157.1481f 
};
*uParam3=39.5031f;
break;
case 2:
*uParam2={
-1813.683f, 799.5704f, 137.5134f 
};
*uParam3=188.8774f;
break;
case 3:
*uParam2={
-1912.698f, 509.3147f, 110.6628f 
};
*uParam3=70.3926f;
break;
case 4:
*uParam2={
-2298.497f, 441.8974f, 173.4667f 
};
*uParam3=1.8886f;
break;
}}
break;
}
break;
case joaat("buzzard"):
switch (Local_94.f_29){
case 0:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
1351.441f, -641.5107f, 83.2342f 
};
*uParam3=186.1368f;
break;
case 1:
*uParam2={
636.2282f, -434.6195f, 33.632f 
};
*uParam3=203.6348f;
break;
case 2:
*uParam2={
352.4392f, -590.8399f, 83.1657f 
};
*uParam3=209.917f;
break;
case 3:
*uParam2={
375.2908f, -1020.433f, 66.5363f 
};
*uParam3=271.2396f;
break;
case 4:
*uParam2={
345.1868f, -1426.622f, 85.1742f 
};
*uParam3=284.6382f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
1248.49f, -1131.338f, 37.2874f 
};
*uParam3=153.8083f;
break;
case 1:
*uParam2={
1396.414f, -1518.39f, 56.7703f 
};
*uParam3=134.0967f;
break;
case 2:
*uParam2={
972.8618f, -1464.828f, 30.3558f 
};
*uParam3=0.609f;
break;
case 3:
*uParam2={
935.6596f, -909.6719f, 39.5752f 
};
*uParam3=271.1971f;
break;
case 4:
*uParam2={
1156.687f, -768.8879f, 56.4831f 
};
*uParam3=275.3533f;
break;
}}
break;
case 1:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
-137.5082f, -168.3033f, 102.7024f 
};
*uParam3=160.3978f;
break;
case 1:
*uParam2={
-174.828f, -214.6927f, 156.6312f 
};
*uParam3=258.2675f;
break;
case 2:
*uParam2={
404.7129f, -24.3335f, 169.3952f 
};
*uParam3=95.0683f;
break;
case 3:
*uParam2={
168.3323f, 668.6285f, 215.7082f 
};
*uParam3=172.5901f;
break;
case 4:
*uParam2={
-608.792f, 660.9065f, 165.6164f 
};
*uParam3=207.7868f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
-166.1217f, -214.9006f, 45.8637f 
};
*uParam3=257.5103f;
break;
case 1:
*uParam2={
33.7482f, -95.8814f, 55.3626f 
};
*uParam3=73.0413f;
break;
case 2:
*uParam2={
36.568f, 47.4427f, 71.3139f 
};
*uParam3=158.1279f;
break;
case 3:
*uParam2={
-501.5253f, -67.3569f, 38.6901f 
};
*uParam3=155.0279f;
break;
case 4:
*uParam2={
-430.6903f, -423.6864f, 31.7928f 
};
*uParam3=352.977f;
break;
}}
break;
case 2:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
-468.3117f, 2034.281f, 225.8829f 
};
*uParam3=183.5655f;
break;
case 1:
*uParam2={
-1572.228f, 838.9957f, 193.9097f 
};
*uParam3=278.9509f;
break;
case 2:
*uParam2={
-175.6009f, -162.3506f, 102.7024f 
};
*uParam3=12.7537f;
break;
case 3:
*uParam2={
494.7073f, 706.4063f, 205.6965f 
};
*uParam3=75.8614f;
break;
case 4:
*uParam2={
821.3636f, 1308.909f, 372.5396f 
};
*uParam3=113.467f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
-803.5167f, 1295.326f, 257.4832f 
};
*uParam3=209.5666f;
break;
case 1:
*uParam2={
-925.5961f, 1124.77f, 218.7065f 
};
*uParam3=215.2912f;
break;
case 2:
*uParam2={
-404.5761f, 833.0574f, 224.6128f 
};
*uParam3=218.3907f;
break;
case 3:
*uParam2={
-303.0683f, 1010.302f, 232.2905f 
};
*uParam3=78.2628f;
break;
case 4:
*uParam2={
56.7959f, 1080.651f, 220.6167f 
};
*uParam3=18.8188f;
break;
}}
break;
case 3:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
377.1972f, 4405.938f, 71.4024f 
};
*uParam3=157.1671f;
break;
case 1:
*uParam2={
-210.0587f, 4223.346f, 53.7504f 
};
*uParam3=206.9778f;
break;
case 2:
*uParam2={
-318.9394f, 3790.772f, 77.5459f 
};
*uParam3=258.802f;
break;
case 3:
*uParam2={
-236.0281f, 3088.237f, 47.229f 
};
*uParam3=304.6536f;
break;
case 4:
*uParam2={
312.2873f, 2783.272f, 54.9498f 
};
*uParam3=10.4182f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
1111.445f, 3430.153f, 33.0281f 
};
*uParam3=351.5004f;
break;
case 1:
*uParam2={
940.4324f, 3582.793f, 32.0891f 
};
*uParam3=71.8698f;
break;
case 2:
*uParam2={
-177.7739f, 3695.669f, 43.0132f 
};
*uParam3=195.3546f;
break;
case 3:
*uParam2={
-241.2375f, 3905.453f, 37.3939f 
};
*uParam3=207.658f;
break;
case 4:
*uParam2={
-77.8371f, 3185.706f, 37.1225f 
};
*uParam3=280.9105f;
break;
}}
break;
case 4:
if(bVar0){
switch (iParam1){
case 0:
*uParam2={
815.4335f, 1311.455f, 372.12f 
};
*uParam3=258.8483f;
break;
case 1:
*uParam2={
609.2955f, 205.9871f, 146.2221f 
};
*uParam3=316.1886f;
break;
case 2:
*uParam2={
1150.014f, 130.2795f, 90.7203f 
};
*uParam3=340.2898f;
break;
case 3:
*uParam2={
1876.22f, 285.6447f, 171.779f 
};
*uParam3=18.4441f;
break;
case 4:
*uParam2={
2105.892f, 1586.21f, 99.9212f 
};
*uParam3=107.1124f;
break;
}}else{
switch (iParam1){
case 0:
*uParam2={
1199.866f, 1852.856f, 77.9143f 
};
*uParam3=147.2836f;
break;
case 1:
*uParam2={
1526.959f, 1717.267f, 108.9733f 
};
*uParam3=116.5075f;
break;
case 2:
*uParam2={
1962.413f, 1297.095f, 166.6211f 
};
*uParam3=14.5081f;
break;
case 3:
*uParam2={
958.8857f, 1717.174f, 163.6494f 
};
*uParam3=280.2715f;
break;
case 4:
*uParam2={
703.955f, 777.3345f, 204.8183f 
};
*uParam3=308.1731f;
break;
}}
break;
}
break;
}}

int func_88(int iParam0){
if(Local_94.f_228[iParam0] > 0){
if(!func_23(&(Local_94.f_207[iParam0 /*2*/]))){
func_21(&(Local_94.f_207[iParam0 /*2*/]), 0, 0);
return 0;
}elseif(!func_20(&(Local_94.f_207[iParam0 /*2*/]), Local_94.f_228[iParam0], 0)){
return 0;
}}
if(func_23(&(Local_94.f_186[iParam0 /*2*/]))){
if(!func_20(&(Local_94.f_186[iParam0 /*2*/]), 20000, 0)){
return 0;
}}
return 1;
}


var func__89(){
return Local_94.f_291[Local_94.f_279];
}


void func_90(int iParam0, int iParam1){
struct<3> Var0;
Var0.f_0=-1257215590;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
if(!iParam1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam1);
}}

int func_91(bool bParam0){
if(bParam0 < 31){
return bParam0;
}elseif(bParam0 < 62){
return (bParam0 - 31);
}
return (bParam0 - func_92(bParam0) * 31);
}

int func_92(bool bParam0){
if(bParam0 < 31){
return 0;
}elseif(bParam0 < 62){
return 1;
}
return (bParam0 / 31);
}


void func_93(var uParam0){
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

int func_94(bool bParam0){
if(Local_94.f_27==joaat("hydra")){
return 1;
}
if(MISC::IS_BIT_SET(Local_94.f_272[func_92(bParam0)], func_91(bParam0))){
return 1;
}
return 0;
}


bool func_95(bool bParam0){
return func_96(bParam0);
}

int func_96(int iParam0){
int iVar0;
if(!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[iParam0]), 0)){
return 1;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_94.f_48[iParam0]), 0);
if(ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
return 1;
}
return 0;
}

int func_97(bool bParam0){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]));
if(iVar0==joaat("savage")){
if(MISC::IS_BIT_SET(Local_94.f_271, bParam0)){
return 1;
}}elseif(iVar0==joaat("buzzard")){
if(MISC::IS_BIT_SET(Local_94.f_271, bParam0)){
return 1;
}}else{
if(Local_94.f_27 !=joaat("hydra")){
return 1;
}
if(Local_94.f_27==joaat("hydra")){
if(MISC::IS_BIT_SET(Local_94.f_271, bParam0)){
return 1;
}}}
return 0;
}


void func_98(bool bParam0, int iParam1){
struct<3> Var0;
Var0.f_0=-289807473;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=bParam0;
if(!iParam1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam1);
}}

int func_99(){
return Local_94.f_280[Local_94.f_279];
}


void func_100(int iParam0, bool bParam1){
struct<3> Var0;
Var0.f_0=-1195009211;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=bParam1;
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam0);
}}

int func_101(bool bParam0){
var uVar0;
int iVar1;
int iVar2;
if(bParam0 < 0 || bParam0 >=5){
return 0;
}
iVar2=0;
while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), 0)){
if(NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(iVar1, NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), &uVar0)){
return 1;
}}elseif(NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(iVar1, NETWORK::NET_TO_VEH(Local_94.f_73[bParam0]), &uVar0)){
return 1;
}}
iVar2++;
}
return 0;
}


void func_102(int iParam0, bool bParam1){
struct<3> Var0;
Var0.f_0=-1529273040;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=bParam1;
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam0);
}}


bool func_103(int iParam0){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[iParam0]));
if(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)){
return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_73[iParam0]), 0);
}
return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_73[iParam0]), 0);
}

int func_104(){
int iVar0;
int iVar1;
switch (Local_94.f_27){
case joaat("rhino"):
case joaat("savage"):
case joaat("valkyrie"):
case joaat("buzzard"):
iVar0=0;
while (iVar0 < 10){
iVar1=(iVar1 + Local_94.f_291[iVar0]);
iVar0++;
}
break;
case joaat("hydra"):
iVar0=0;
while (iVar0 < 10){
iVar1=(iVar1 + Local_94.f_291[iVar0]);
iVar0++;
}
break;
}
return iVar1;
}

int func_105(int iParam0){
var uVar0;
int iVar1;
bool bVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_876(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, bVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_106(){
if(func_775()){
return Global_262145.f_12011;
}
return Global_262145.f_11734;
}


void func_107(var uParam0){
uParam0->f_1=0;
}


void func_108(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=-642704387;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_109(int iParam0, int iParam1, bool bParam2){
var uVar0;
bool bVar1;
bool bVar2;
bVar1=false;
while (bVar1 < 32){
bVar2=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_876(bVar2, 1, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), iParam0, 0)){
if(PLAYER::GET_PLAYER_TEAM(bVar2)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam1){
MISC::SET_BIT(&uVar0, bVar1);
}}}}
bVar1++;
}
return uVar0;
}

int func_110(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_111(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_111(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 1;
}}else{
return 1;
}
return 0;
}


void func_112(){
int iVar0;
int iVar1;
if(MISC::IS_BIT_SET(Local_94.f_3, 20)){
return;
}
if(!func_23(&uLocal_576)){
func_21(&uLocal_576, 0, 0);
return;
}
if(!func_20(&uLocal_576, 5000, 0)){
return;
}
iVar0=func_113();
iVar1=0;
iVar1=0;
while (iVar1 < iVar0){
if(func_4(NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1)){
func_26(&(Local_94.f_7[iVar1]));
}
iVar1++;
}
MISC::SET_BIT(&(Local_94.f_3), 20);
}

int func_113(){
int iVar0;
int iVar1;
int iVar2;
if(Local_94.f_12 !=0){
return Local_94.f_12;
}
if(!func_775()){
Local_94.f_12=1;
return Local_94.f_12;
}
iVar0=0;
while (iVar0 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)){
if(!func_16(bVar2, 0)){
iVar1++;
}}
bVar0++;
}
if(iVar1 < func_115()){
Local_94.f_12=2;
}elseif(iVar1 < func_114()){
Local_94.f_12=3;
}else{
Local_94.f_12=4;
}
return Local_94.f_12;
}

int func_114(){
return Global_262145.f_11759;
}

int func_115(){
return Global_262145.f_11758;
}


void func_116(){
int iVar0;
var uVar1;
int iVar2;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar0])){
func_122(iVar0);
func_121(iVar0, Local_94.f_256[iVar0], Local_94.f_22[iVar0]);
}elseif(Local_94.f_594[iVar0 /*4*/].f_1 !=-1){
func_122(iVar0);
}
iVar0++;
}
func_120();
iVar0=0;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
func_119(iVar0);
if(Local_97[iVar0 /*18*/].f_1 !=0){
if(Local_97[iVar0 /*18*/].f_9 > -1){
uVar1=Local_97[iVar0 /*18*/].f_9;
func_118(uVar1, Local_97[iVar0 /*18*/].f_8, iVar2);
}}else{
func_118(-1, -1, iVar2);
}}elseif(Local_94.f_465[iVar0 /*4*/].f_1 !=-1){
func_119(iVar0);
}
iVar0++;
}
func_117();
}


void func_117(){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
var uVar4;
iVar0=31;
while (iVar0 >=0){
iVar1=31;
while (iVar1 >=0){
if((iVar1 - 1) >=0){
if(Local_94.f_465[iVar1 /*4*/].f_1 > Local_94.f_465[(iVar1 - 1) /*4*/].f_1){
uVar2=Local_94.f_465[iVar1 /*4*/].f_1;
uVar3=Local_94.f_465[iVar1 /*4*/];
uVar4=Local_94.f_465[iVar1 /*4*/].f_2;
Local_94.f_465[iVar1 /*4*/].f_1=Local_94.f_465[(iVar1 - 1) /*4*/].f_1;
Local_94.f_465[iVar1 /*4*/]=Local_94.f_465[(iVar1 - 1) /*4*/];
Local_94.f_465[iVar1 /*4*/].f_2=Local_94.f_465[(iVar1 - 1) /*4*/].f_2;
Local_94.f_465[(iVar1 - 1) /*4*/].f_1=uVar2;
Local_94.f_465[(iVar1 - 1) /*4*/]=uVar3;
Local_94.f_465[(iVar1 - 1) /*4*/].f_2=uVar4;
}}
iVar1=(iVar1 + -1);
}
iVar0=(iVar0 + -1);
}}


void func_118(int iParam0, int iParam1, int iParam2){
Local_94.f_465[iParam2 /*4*/]=iParam0;
Local_94.f_465[iParam2 /*4*/].f_1=iParam1;
Local_94.f_465[iParam2 /*4*/].f_2=iParam2;
}


void func_119(int iParam0){
Local_94.f_465[iParam0 /*4*/]=-1;
Local_94.f_465[iParam0 /*4*/].f_2=-1;
Local_94.f_465[iParam0 /*4*/].f_1=-1;
}


void func_120(){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
var uVar4;
iVar0=3;
while (iVar0 >=0){
iVar1=3;
while (iVar1 >=0){
if((iVar1 - 1) >=0){
if(Local_94.f_594[iVar1 /*4*/].f_1 > Local_94.f_594[(iVar1 - 1) /*4*/].f_1){
uVar2=Local_94.f_594[iVar1 /*4*/].f_1;
uVar3=Local_94.f_594[iVar1 /*4*/];
uVar4=Local_94.f_594[iVar1 /*4*/].f_2;
Local_94.f_594[iVar1 /*4*/].f_1=Local_94.f_594[(iVar1 - 1) /*4*/].f_1;
Local_94.f_594[iVar1 /*4*/]=Local_94.f_594[(iVar1 - 1) /*4*/];
Local_94.f_594[iVar1 /*4*/].f_2=Local_94.f_594[(iVar1 - 1) /*4*/].f_2;
Local_94.f_594[(iVar1 - 1) /*4*/].f_1=uVar2;
Local_94.f_594[(iVar1 - 1) /*4*/]=uVar3;
Local_94.f_594[(iVar1 - 1) /*4*/].f_2=uVar4;
}}
iVar1=(iVar1 + -1);
}
iVar0=(iVar0 + -1);
}}


void func_121(int iParam0, var uParam1, var uParam2){
Local_94.f_594[iParam0 /*4*/]=iParam0;
Local_94.f_594[iParam0 /*4*/].f_1=uParam1;
Local_94.f_594[iParam0 /*4*/].f_2=uParam2;
}


void func_122(int iParam0){
Local_94.f_594[iParam0 /*4*/]=-1;
Local_94.f_594[iParam0 /*4*/].f_1=-1;
Local_94.f_594[iParam0 /*4*/].f_2=-1;
}

int func_123(){
int iVar0;
bool bVar1;
iVar0=func_113();
bVar1=false;
bVar1=false;
while (bVar1 < iVar0){
if(!func_124(bVar1)){
func_107(&(Local_94.f_5));
return 0;
}
if(!MISC::IS_BIT_SET(Local_94.f_13, bVar1)){
func_107(&(Local_94.f_5));
return 0;
}elseif(func_4(NETWORK::NET_TO_VEH(Local_94.f_7[bVar1]), 1, 0, 0, 0, 0, 1, 0, 1)){
func_107(&(Local_94.f_5));
return 0;
}
bVar1++;
}
if(!func_23(&(Local_94.f_5))){
func_21(&(Local_94.f_5), 0, 0);
}elseif(func_20(&(Local_94.f_5), 1500, 0)){
return 1;
}
return 0;
}

int func_124(bool bParam0){
if(func_110(Local_94.f_7[bParam0])){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), -1, 0) !=0){
return 1;
}}
return 0;
}


void func_125(){
int iVar0;
int iVar1;
int iVar2;
if(!func_775()){
return;
}
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar0])){
if(func_110(Local_94.f_7[iVar0])){
iVar1++;
iVar2=iVar0;
}}
iVar0++;
}
if(iVar1 < Local_94.f_12){
Local_94.f_12=iVar1;
}
if(Local_94.f_12 <=1){
MISC::CLEAR_BIT(&(Local_94.f_3), 8);
if(!func_110(Local_94.f_7[0])){
if(func_110(Local_94.f_7[iVar2])){
func_26(&(Local_94.f_7[0]));
Local_94.f_7[0]=Local_94.f_7[iVar2];
}}}}


void func_126(){
bool bVar0;
if(!func_775()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[0])){
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[0]))==joaat("valkyrie")){
bVar0=Local_94.f_15 !=false;
}else{
bVar0=Local_94.f_14 !=false;
}}}else{
bVar0=MISC::IS_BIT_SET(Local_94.f_3, 9);
}
if(bVar0){
if(Local_94.f_413==-1){
Local_94.f_413=func_128();
}
if(!func_23(&(Local_94.f_326))){
func_21(&(Local_94.f_326), 0, 0);
}elseif(!MISC::IS_BIT_SET(Local_94.f_3, 4)){
if((Local_94.f_413 - func_127(&(Local_94.f_326), 0, 0)) < 0){
MISC::SET_BIT(&(Local_94.f_3), 4);
}}}elseif(func_23(&(Local_94.f_326))){
func_107(&(Local_94.f_326));
Local_94.f_413=(Local_94.f_413 - func_127(&(Local_94.f_326), 0, 0));
}}

int func_127(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


var func__128(){
if(func_775()){
return Global_262145.f_12021;
}
return Global_262145.f_11741;
}


void func_129(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
bool bVar5;
int iVar6;
bool bVar7;
int iVar8;
int iVar9;
bVar5=false;
bVar0=false;
while (bVar0 < 4){
iLocal_110[bVar0]=0;
iLocal_96[bVar0]=-2;
iLocal_111[bVar0]=0;
bVar0++;
}
bVar0=false;
if(Local_94.f_0 !=4){
bLocal_101=false;
while (bLocal_101 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_101))){
bVar7=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_101));
if(!func_16(bVar7, 0)){
if(Local_97[bLocal_101 /*18*/].f_1 !=0){
iVar2++;
}
iVar1++;
bVar0=false;
while (bVar0 < 4){
func_136(bLocal_101, bVar0, bVar7);
bVar0++;
}
bVar0=false;
bVar0=false;
while (bVar0 < 5){
func_135(bLocal_101, bVar0);
bVar0++;
}
if(!MISC::IS_BIT_SET(Local_94.f_3, 14)){
if(!MISC::IS_BIT_SET(Local_97[bLocal_101 /*18*/].f_2, 9)){
iVar6++;
}}
bVar0=false;
while (bVar0 <=23){
func_134(bLocal_101, bVar0);
bVar0++;
}
if(!bVar5){
if(!MISC::IS_BIT_SET(Local_97[bLocal_101 /*18*/].f_2, 8)){
bVar5=true;
}}
func_132(bLocal_101, bVar7);
if(func_876(bVar7, 1, 1)){
bVar0=false;
bVar0=false;
while (bVar0 < 4){
if(Local_94.f_17[bVar0]==func_5()){
if(MISC::IS_BIT_SET(Local_97[bLocal_101 /*18*/].f_2, (0 + bVar0))){
Local_94.f_17[bVar0]=bVar7;
}}elseif(Local_94.f_17[bVar0]==bVar7 && Local_94.f_241==0){
if(!MISC::IS_BIT_SET(Local_97[bLocal_101 /*18*/].f_2, (0 + bVar0))){
Local_94.f_17[bVar0]=func_5();
}}
bVar0++;
}}}}
bLocal_101++;
}}
bVar0=false;
bVar0=false;
while (bVar0 < 4){
if(!MISC::IS_BIT_SET(Local_94.f_13, bVar0)){
if(iLocal_110[bVar0]==func_131() && func_124(bVar0)){
MISC::SET_BIT(&(Local_94.f_13), bVar0);
}
if(!MISC::IS_BIT_SET(Local_94.f_14, bVar0)){
if(iLocal_110[bVar0] >=1 && func_124(bVar0)){
MISC::SET_BIT(&(Local_94.f_14), bVar0);
}}elseif(iLocal_110[bVar0]==0 || !func_124(bVar0)){
if(MISC::IS_BIT_SET(Local_94.f_14, bVar0)){
MISC::CLEAR_BIT(&(Local_94.f_14), bVar0);
if(iLocal_110[bVar0]==0){
if(Local_94.f_241 >=1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[bVar0])){
func_26(&(Local_94.f_7[bVar0]));
}
}}}}
if(!MISC::IS_BIT_SET(Local_94.f_15, bVar0) && func_124(bVar0)){
if(iLocal_110[bVar0] >=2){
MISC::SET_BIT(&(Local_94.f_15), bVar0);
}}elseif(iLocal_110[bVar0] <=1 || !func_124(bVar0)){
if(MISC::IS_BIT_SET(Local_94.f_15, bVar0)){
MISC::CLEAR_BIT(&(Local_94.f_15), bVar0);
}}}elseif(iLocal_110[bVar0] < func_131() || !func_124(bVar0)){
MISC::CLEAR_BIT(&(Local_94.f_13), bVar0);
}
if(Local_94.f_266[bVar0] !=iLocal_110[bVar0]){
Local_94.f_266[bVar0]=iLocal_110[bVar0];
if(Local_94.f_241==1){
if(Local_94.f_266[bVar0]==0){
if(!MISC::IS_BIT_SET(Local_94.f_616, bVar0)){
MISC::SET_BIT(&(Local_94.f_616), bVar0);
}}}}
if(Local_94.f_241==0){
if(func_775()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[bVar0])){
iVar3=ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]));
if(iLocal_110[bVar0] >=func_130(iVar3) && func_124(bVar0)){
iLocal_111[bVar0]=1;
}}}}
if(Local_94.f_241==1){
if(Local_94.f_256[bVar0] !=iLocal_96[bVar0]){
if(iLocal_96[bVar0] >=0){
if(iLocal_96[bVar0] > Local_94.f_256[bVar0]){
Local_94.f_256[bVar0]=iLocal_96[bVar0];
bVar4=true;
}else{
iVar8=(Local_94.f_256[bVar0] - iLocal_96[bVar0]);
if(Local_94.f_261[bVar0] !=iVar8){
Local_94.f_261[bVar0]=iVar8;
}}}}}
bVar0++;
}
if(bVar4){
func_116();
}
if(!MISC::IS_BIT_SET(Local_94.f_3, 11)){
if(!bVar5){
MISC::SET_BIT(&(Local_94.f_3), 11);
}}
bVar0=false;
iVar9=0;
if(Local_94.f_241==0){
if(func_775()){
bVar0=false;
while (bVar0 < 4){
if(iLocal_111[bVar0]){
iVar9++;
}
bVar0++;
}
if(!MISC::IS_BIT_SET(Local_94.f_3, 9)){
if(iVar9 >=2){
MISC::SET_BIT(&(Local_94.f_3), 9);
}}elseif(iVar9 < 2){
MISC::CLEAR_BIT(&(Local_94.f_3), 9);
}}}
if(Local_94.f_241==0){
if(!func_23(&(Local_94.f_360))){
func_21(&(Local_94.f_360), 0, 0);
}elseif(func_20(&(Local_94.f_360), 5000, 0)){
if(!MISC::IS_BIT_SET(Local_94.f_3, 14)){
if(func_775()){
if(Local_94.f_27==joaat("valkyrie")){
if(iVar6 < 4){
MISC::SET_BIT(&(Local_94.f_3), 14);
}}elseif(iVar6 < 2){
MISC::SET_BIT(&(Local_94.f_3), 14);
}}elseif(Local_94.f_27==joaat("valkyrie")){
if(iVar6 < 2){
MISC::SET_BIT(&(Local_94.f_3), 14);
}}elseif(iVar6 < 1){
MISC::SET_BIT(&(Local_94.f_3), 14);
}}}}
if(iVar1 > Local_94.f_614){
Local_94.f_614=iVar1;
}else{
Local_94.f_613=(Local_94.f_614 - iVar1);
}
if(iVar2 > Local_94.f_615){
Local_94.f_615=iVar2;
}}

int func_130(int iParam0){
switch (iParam0){
case joaat("rhino"):
return 1;
case joaat("hydra"):
return 1;
case joaat("savage"):
return 1;
case joaat("valkyrie"):
return 2;
case joaat("buzzard"):
return 1;
default:
}
return 99;
}

int func_131(){
return Local_94.f_28;
}


void func_132(bool bParam0, bool bParam1){
bool bVar0;
int iVar1;
if(!MISC::IS_BIT_SET(Local_94.f_16, bParam0)){
if(MISC::IS_BIT_SET(Local_97[bParam0 /*18*/].f_2, 12)){
func_133(bParam1, 1);
MISC::SET_BIT(&(Local_94.f_16), bParam0);
}elseif(Local_94.f_241 >=1){
if(Local_97[bParam0 /*18*/].f_1==0){
func_133(bParam1, 1);
MISC::SET_BIT(&(Local_94.f_16), bParam0);
}elseif(Local_97[bParam0 /*18*/].f_17 >=2){
iVar1=0;
while (iVar1 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar1])){
if(func_110(Local_94.f_7[iVar1])){
if(PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bParam1), NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]), 0)){
bVar0=true;
}
}}
iVar1++;
}
if(!bVar0){
func_133(bParam1, 1);
MISC::SET_BIT(&(Local_94.f_16), bParam0);
}}}}elseif(Local_94.f_241 < 1){
if(!MISC::IS_BIT_SET(Local_97[bParam0 /*18*/].f_2, 12)){
func_133(bParam1, 0);
MISC::CLEAR_BIT(&(Local_94.f_16), bParam0);
}}}


void func_133(bool bParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar0])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_94.f_7[iVar0]), bParam0, iParam1);
}
iVar0++;
}}


void func_134(int iParam0, bool bParam1){
if(!MISC::IS_BIT_SET(Local_94.f_272[func_92(bParam1)], func_91(bParam1))){
if(MISC::IS_BIT_SET(Local_97[iParam0 /*18*/].f_3[func_92(bParam1)], func_91(bParam1))){
MISC::SET_BIT(&(Local_94.f_272[func_92(bParam1)]), func_91(bParam1));
if(Local_97[iParam0 /*18*/].f_17 < 2){
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bParam1])){
if(!func_32(Local_94.f_48[bParam1])){
if(!func_95(bParam1)){
MISC::CLEAR_BIT(&(Local_94.f_272[func_92(bParam1)]), func_91(bParam1));
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[bParam1]), 0)){
if(bParam1 >=20){
MISC::CLEAR_BIT(&(Local_94.f_272[func_92(bParam1)]), func_91(bParam1));
}}}}}}}


void func_135(int iParam0, bool bParam1){
if(!MISC::IS_BIT_SET(Local_94.f_271, bParam1)){
if(MISC::IS_BIT_SET(Local_97[iParam0 /*18*/].f_6, bParam1)){
MISC::SET_BIT(&(Local_94.f_271), bParam1);
if(Local_97[iParam0 /*18*/].f_17 < 2){
}
if(MISC::IS_BIT_SET(Local_94.f_303, bParam1)){
if(!MISC::IS_BIT_SET(Local_94.f_253, bParam1)){
Local_94.f_251=(Local_94.f_251 - 1);
if(func_99() > 1){
if(Local_94.f_252 > 0){
Local_94.f_302++;
func_98(bParam1, func_105(1));
}}
MISC::SET_BIT(&(Local_94.f_253), bParam1);
}
if(func_23(&(Local_94.f_336[bParam1 /*2*/]))){
func_107(&(Local_94.f_336[bParam1 /*2*/]));
}
func_26(&(Local_94.f_73[bParam1]));
MISC::CLEAR_BIT(&(Local_94.f_303), bParam1);
}}}}


void func_136(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(MISC::IS_BIT_SET(Local_97[iParam0 /*18*/].f_1, bParam1)){
iLocal_110[bParam1]++;
if(iLocal_96[bParam1] < 0){
if(Local_97[iParam0 /*18*/].f_8 >=0){
if(Local_94.f_261[bParam1] > 0){
iLocal_96[bParam1]=Local_94.f_261[bParam1];
}else{
iLocal_96[bParam1]=0;
}}}
iLocal_96[bParam1]=(iLocal_96[bParam1] + Local_97[iParam0 /*18*/].f_8);
if(Local_94.f_241 >=1){
if(Local_94.f_22[bParam1]==func_5()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[bParam1])){
if(func_110(Local_94.f_7[bParam1])){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[bParam1]), -1, 0);
if(iVar1 !=0){
if(PED::IS_PED_A_PLAYER(iVar1)){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
if(iVar0==bParam2){
Local_94.f_22[bParam1]=bParam2;
func_116();
}}
}}}}}
if(!MISC::IS_BIT_SET(Local_94.f_319, bParam1)){
if(Local_97[iParam0 /*18*/].f_10 > -1){
MISC::SET_BIT(&(Local_94.f_319), bParam1);
func_21(&(Local_94.f_349[bParam1 /*2*/]), 0, 0);
}}}
if(Local_94.f_22[bParam1] !=func_5()){
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_94.f_22[bParam1])){
iVar0=func_137(bParam1, 1);
if(iVar0 !=func_5()){
Local_94.f_22[bParam1]=iVar0;
}else{
Local_94.f_22[bParam1]=func_5();
}}elseif(func_16(Local_94.f_22[bParam1], 0)){
Local_94.f_22[bParam1]=func_5();
func_116();
}else{
iVar1=PLAYER::GET_PLAYER_PED(Local_94.f_22[bParam1]);
if(!PED::IS_PED_INJURED(iVar1)){
if(func_110(Local_94.f_7[bParam1])){
if(!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_94.f_7[bParam1]), 0)){
iVar0=func_137(bParam1, 1);
if(iVar0 !=func_5()){
Local_94.f_22[bParam1]=iVar0;
}
else{
Local_94.f_22[bParam1]=func_5();
}}}}}}}


bool func_137(bool bParam0, bool bParam1){
bool bVar0;
bool bVar1;
int iVar2;
int iVar3;
bVar0=func_5();
if(bParam0 >=0){
iVar3=0;
while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3))){
if(bVar0==func_5()){
if(Local_97[bVar3 /*18*/].f_17==1){
if(MISC::IS_BIT_SET(Local_97[bVar3 /*18*/].f_1, bParam0)){
if(!bParam1){
bVar0=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar3));
}else{
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar3));
if(func_110(Local_94.f_7[bParam0])){
iVar2=PLAYER::GET_PLAYER_PED(bVar1);
if(!PED::IS_PED_INJURED(iVar2)){
if(PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 0)){
bVar0=bVar1;
}
}}}
}}}}
bVar3++;
}}
return bVar0;
}


void func_138(int iParam0){
struct<3> Var0;
int iVar1;
Var0.f_0=1927637822;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
iVar1=func_139(1, 1);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iVar1);
}}


var func__139(int iParam0, bool bParam1){
var uVar0;
bool bVar1;
bool bVar2;
bVar1=false;
while (bVar1 < 32){
bVar2=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_876(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_16(bVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case 136:
case 139:
case 141:
case 133:
case 138:
case 144:
case 236:
case 150:
return iParam1;
case 132:
switch (iParam2){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 4;
case 1:
return 5;
case 2:
return 6;
case 3:
return 7;
default:
}
break;
}
break;
case 131:
switch (iParam3){
case 0:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 5;
case 1:
return 6;
case 2:
return 7;
case 3:
return 8;
case 4:
return 9;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 10;
case 1:
return 11;
case 2:
return 12;
case 3:
return 13;
case 4:
return 14;
default:
}
break;
case 3:
switch (iParam2){
case 0:
return 15;
case 1:
return 16;
case 2:
return 17;
case 3:
return 18;
case 4:
return 19;
default:
}
break;
case 4:
switch (iParam2){
case 0:
return 20;
case 1:
return 21;
case 2:
return 22;
case 3:
return 24;
case 4:
return 25;
default:
}
break;
case 5:
switch (iParam2){
case 0:
return 26;
case 1:
return 27;
case 2:
return 28;
case 3:
return 29;
case 4:
return 30;
default:
}
break;
case 6:
switch (iParam2){
case 0:
return 31;
case 1:
return 32;
case 2:
return 33;
case 3:
return 34;
case 4:
return 35;
default:
}
break;
}
break;
case 1:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 5;
case 1:
return 6;
case 2:
return 7;
case 3:
return 8;
case 4:
return 9;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 10;
case 1:
return 11;
case 2:
return 12;
case 3:
return 13;
case 4:
return 14;
default:
}
break;
}
break;
case 2:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 41;
default:
}
break;
case 1:
switch (iParam2){
case 1:
return 42;
default:
}
break;
case 2:
switch (iParam2){
case 2:
return 43;
default:
}
break;
case 3:
switch (iParam2){
case 3:
return 44;
default:
}
break;
case 4:
switch (iParam2){
case 4:
return 45;
default:
}
break;
}
break;
}
break;
case 129:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 4;
case 1:
return 5;
case 2:
return 6;
case 3:
return 7;
case 4:
return 8;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 9;
case 1:
return 10;
case 2:
return 11;
default:
}
break;
case 3:
switch (iParam2){
case 0:
return 12;
case 1:
return 13;
case 2:
return 14;
case 3:
return 15;
case 4:
return 16;
default:
}
break;
case 4:
switch (iParam2){
case 0:
return 17;
case 1:
return 18;
case 2:
return 19;
case 3:
return 20;
case 4:
return 21;
default:
}
break;
case 5:
switch (iParam2){
case 0:
return 22;
case 1:
return 24;
case 2:
return 25;
case 3:
return 26;
default:
}
break;
case 6:
switch (iParam2){
case 0:
return 27;
case 1:
return 28;
case 2:
return 29;
default:
}
break;
case 7:
switch (iParam2){
case 0:
return 30;
case 1:
return 31;
case 2:
return 32;
default:
}
break;
case 8:
switch (iParam2){
case 0:
return 33;
case 1:
return 34;
case 2:
return 35;
case 3:
return 36;
default:
}
break;
case 9:
switch (iParam2){
case 0:
return 37;
case 1:
return 38;
case 2:
return 39;
case 3:
return 40;
default:
}
break;
}
break;
case 140:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 3;
case 1:
return 4;
case 2:
return 5;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 6;
case 1:
return 7;
case 2:
return 8;
default:
}
break;
case 3:
switch (iParam2){
case 0:
return 9;
case 1:
return 10;
case 2:
return 11;
default:
}
break;
case 4:
switch (iParam2){
case 0:
return 12;
case 1:
return 13;
case 2:
return 14;
default:
}
break;
}
break;
case 146:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 3;
case 1:
return 4;
case 2:
return 5;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 6;
case 1:
return 7;
case 2:
return 8;
default:
}
break;
case 3:
switch (iParam2){
case 0:
return 9;
case 1:
return 10;
case 2:
return 11;
default:
}
break;
}
break;
}
if(func_141(iParam0)==1){
return iParam1;
}
return -1;
}

int func_141(int iParam0){
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

int func_142(){
func_113();
if(func_71(Local_94.f_27)){
if(func_143()){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_94.f_27);
return 1;
}}
return 0;
}

int func_143(){
bool bVar0;
float fVar1;
int iVar2;
int iVar3;
bVar0=false;
while (bVar0 < Local_94.f_12){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[bVar0])){
if(func_71(Local_94.f_27)){
if(!MISC::IS_BIT_SET(Local_94.f_244, bVar0)){
MISC::CLEAR_AREA(Local_94.f_30[bVar0 /*3*/], 5f, 1, 0, 0, 1);
MISC::SET_BIT(&(Local_94.f_244), bVar0);
}
if(func_83(&(Local_94.f_7[bVar0]), Local_94.f_27, Local_94.f_30[bVar0 /*3*/], Local_94.f_43[bVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0)){
NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_94.f_7[bVar0]), 1, 1);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1);
VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0, 0);
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0);
ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1);
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]));
VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1, 1, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1);
VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0);
if(VEHICLE::IS_THIS_MODEL_A_HELI(Local_94.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_27)){
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0);
if(VEHICLE::IS_THIS_MODEL_A_HELI(Local_94.f_27)){
fVar1=to_float(func_146());
}
elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_27)){
fVar1=to_float(func_145());
}
else{
fVar1=to_float(func_144());
}
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), round(fVar1), 0);
ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), round(fVar1));
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), fVar1);
VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), fVar1);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), fVar1);
if(VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_27)){
VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1);
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(Local_94.f_27)){
if(fVar1 > 2000f){
fVar1=2000f;
}
VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), fVar1);
VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), fVar1);
}}else{
if(VEHICLE::IS_THIS_MODEL_A_HELI(Local_94.f_27)){
fVar1=to_float(func_146());
}
elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_27)){
fVar1=to_float(func_145());
}
else{
fVar1=to_float(func_144());
}
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), round(fVar1), 0);
ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), round(fVar1));
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), fVar1);
VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), fVar1);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), fVar1);
}
VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1);
if(Local_94.f_27==joaat("savage")){
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), "Not_Allow_As_Saved_Veh", 1);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), "MPBitset")){
iVar2=DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), "MPBitset");
}
MISC::SET_BIT(&iVar2, 10);
MISC::SET_BIT(&iVar2, 15);
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), "MPBitset", iVar2);
}
ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0, iLocal_107);
iVar3=0;
while (iVar3 < 32){
ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0, Global_1837183[iVar3]);
iVar3++;
}
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0, 0);
VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0);
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), false);
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0);
}}}
bVar0++;
}
bVar0=false;
bVar0=false;
while (bVar0 < Local_94.f_12){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[bVar0])){
return 0;
}
bVar0++;
}
return 1;
}


var func__144(){
if(func_775()){
return Global_262145.f_12015;
}
return Global_262145.f_11754;
}


var func__145(){
if(func_775()){
return Global_262145.f_12016;
}
return Global_262145.f_11755;
}


var func__146(){
if(func_775()){
return Global_262145.f_12014;
}
return Global_262145.f_11753;
}

int func_147(){
int iVar0;
int iVar1;
if(!func_23(&(Local_94.f_362))){
func_21(&(Local_94.f_362), 0, 0);
return 0;
}elseif(!func_20(&(Local_94.f_362), 3000, 0)){
return 0;
}
if(!MISC::IS_BIT_SET(Local_94.f_3, 10)){
if(func_161(&iVar0)){
if(iVar0 < func_160()){
MISC::SET_BIT(&(Local_94.f_3), 10);
}else{
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if((IntToFloat(iVar1) < (50f * Global_262145.f_12009) && !Global_262145.f_12007) || Global_262145.f_12008){
MISC::SET_BIT(&(Local_94.f_3), 8);
MISC::SET_BIT(&(Local_94.f_3), 10);
}else{
MISC::SET_BIT(&(Local_94.f_3), 10);
}}}}
if(MISC::IS_BIT_SET(Local_94.f_3, 10)){
if(Local_94.f_12==0){
func_113();
return 0;
}
if(!MISC::IS_BIT_SET(Local_94.f_3, 13)){
if(func_156()){
if(!func_154(129, Local_94.f_1, Local_94.f_2, 0)){
if(func_148()){
MISC::SET_BIT(&(Local_94.f_3), 13);
}else{
Local_94.f_29=-1;
}}else{
Local_94.f_29=-1;
}}}}
return MISC::IS_BIT_SET(Local_94.f_3, 13);
}

int func_148(){
int iVar0;
int iVar1;
iVar0=func_113();
iVar1=0;
while (iVar1 < iVar0){
if(func_149(Local_94.f_30[iVar1 /*3*/], 1125515264)){
return 0;
}
if(!func_56(Local_94.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0)){
return 0;
}
iVar1++;
}
return 1;
}

int func_149(struct<3> Param0, float fParam1){
int iVar0[32];
int iVar1;
int iVar2;
bool bVar3;
struct<3> Var4;
struct<3> Var5;
int iVar6;
struct<10> Var7;
int iVar8;
if(Global_2656111.f_390.f_225==0){
return 0;
}
iVar1=0;
iVar2=0;
bVar3=true;
while (bVar3){
if(Global_2656111.f_390[iVar2 /*7*/] !=-1){
iVar0[iVar1]=MISC::GET_HASH_KEY(&(Global_2656111.f_390[iVar2 /*7*/].f_1));
iVar1++;
if(iVar1==Global_2656111.f_390.f_225){
bVar3=false;
}}
iVar2++;
if(iVar2 >=32){
bVar3=false;
}}
if(iVar1==0){
return 0;
}
Var4={
0f, 0f, 0f 
};
Var5={
Param0 
};
iVar6=0;
Var7.f_1=-1;
Var7.f_2=-1;
Var7.f_9=-1;
iVar8=0;
iVar2=0;
while (iVar2 < Global_1573885){
if(MISC::IS_BIT_SET(Global_4543629[iVar2 /*26*/].f_12, 11)){
Var4={
Global_4543629[iVar2 /*26*/].f_3 
};
Var5.f_2=Var4.f_2;
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var5, 1) < fParam1){
Var7={
Global_4543629[iVar2 /*26*/].f_15 
};
iVar8=func_150(&Var7);
iVar6=0;
while (iVar6 < iVar1){
if(iVar8==iVar0[iVar6]){
return 1;
}
iVar6++;
}}}
iVar2++;
}
return 0;
}

int func_150(var uParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=func_151(uParam0);
if(iVar1==-1){
return iVar0;
}
switch (uParam0->f_2){
case 63:
return Global_794709.f_133589[iVar1 /*13*/].f_3;
case 62:
return Global_948106.f_28205[iVar1 /*13*/].f_3;
default:
}
return iVar0;
}

int func_151(var uParam0){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3))){
return -1;
}
if(func_153(uParam0->f_1)){
if(func_152(uParam0)){
return 9999;
}
return -1;
}
iVar0=0;
switch (uParam0->f_2){
case 63:
if(MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3))){
return uParam0->f_1;
}}
if(!MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13)){
if(Global_1573131.f_5){
return -1;
}}
iVar0=0;
while (iVar0 < 1518){
if(MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3))){
uParam0->f_1=iVar0;
return iVar0;
}}
iVar0++;
}
return -1;
case 62:
if(MISC::IS_BIT_SET(Global_948106.f_1804[uParam0->f_1 /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&(Global_948106.f_1804[uParam0->f_1 /*88*/]), &(uParam0->f_3))){
return uParam0->f_1;
}}
if(!MISC::IS_BIT_SET(Global_948106.f_1804[uParam0->f_1 /*88*/].f_76, 13)){
if(Global_1573131.f_5){
return -1;
}}
iVar0=0;
while (iVar0 < 300){
if(MISC::IS_BIT_SET(Global_948106.f_1804[iVar0 /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&(Global_948106.f_1804[iVar0 /*88*/]), &(uParam0->f_3))){
uParam0->f_1=iVar0;
return iVar0;
}}
iVar0++;
}
return -1;
case 40:
return uParam0->f_1;
default:
}
if(uParam0->f_2==PLAYER::PLAYER_ID()){
if(MISC::IS_BIT_SET(Global_980531.f_4[uParam0->f_1 /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&(Global_980531.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3))){
return uParam0->f_1;
}}
if(MISC::IS_BIT_SET(Global_980531.f_4[uParam0->f_1 /*88*/].f_76, 13)){
if(Global_1573131.f_5){
return -1;
}}
iVar0=0;
while (iVar0 < 62){
if(MISC::IS_BIT_SET(Global_980531.f_4[iVar0 /*88*/].f_76, 13)){
if(MISC::ARE_STRINGS_EQUAL(&(Global_980531.f_4[iVar0 /*88*/]), &(uParam0->f_3))){
uParam0->f_1=iVar0;
return iVar0;
}}
iVar0++;
}
return -1;
}elseif(uParam0->f_2 < 32){
return -1;
}
return -1;
}

int func_152(var uParam0){
if(Global_2628582){
if(MISC::ARE_STRINGS_EQUAL(&(Global_2628582.f_1), &(uParam0->f_3))){
return 1;
}}
return 0;
}


bool func_153(int iParam0){
return iParam0==9999;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
switch (iParam0){
case 132:
case 144:
case 236:
case 150:
return 0;
default:
}
iVar1=func_155(iParam0);
iVar0=0;
while (iVar0 < 21){
if(iVar0 < Global_262145.f_8749){
if(Global_2756336.f_136[iVar0 /*2*/]==iVar1 && Global_2756336.f_136[iVar0 /*2*/].f_1==func_140(iParam0, iParam1, iParam2, iParam3)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_155(int iParam0){
switch (iParam0){
case 136:
return 12;
case 139:
return 14;
case 141:
return 16;
case 133:
return 9;
case 138:
return 13;
case 144:
return 17;
case 132:
return 8;
case 131:
return 10;
case 146:
return 18;
case 129:
return 11;
case 140:
return 15;
case 236:
return 19;
case 150:
return 20;
default:
}
return -1;
}

int func_156(){
if(func_158(&(Local_94.f_27))){
if(Local_94.f_4){
func_157();
}
func_41();
return 1;
}
return 0;
}


void func_157(){
Global_1945796=1;
if(!MISC::IS_BIT_SET(Global_2803781, 0)){
MISC::SET_BIT(&Global_2803781, false);
MISC::SET_BIT(&Global_1945797, false);
}
if(!MISC::IS_BIT_SET(Global_2803781, 1)){
MISC::SET_BIT(&Global_2803781, true);
MISC::SET_BIT(&Global_1945797, true);
}
if(!MISC::IS_BIT_SET(Global_2803781, 5)){
MISC::SET_BIT(&Global_2803781, 5);
MISC::SET_BIT(&Global_1945797, 5);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, 0, 0);
}}

int func_158(var uParam0){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
switch (iVar0){
case 0:
if(!func_159(joaat("rhino"))){
Local_94.f_28=1;
*uParam0=joaat("rhino");
return 1;
}
break;
case 1:
if(!func_159(joaat("hydra"))){
Local_94.f_28=1;
*uParam0=joaat("hydra");
Local_94.f_4=1;
return 1;
}
break;
case 2:
if(!func_159(joaat("savage"))){
Local_94.f_28=4;
*uParam0=joaat("savage");
Local_94.f_4=1;
return 1;
}
break;
case 3:
if(!func_159(joaat("valkyrie"))){
Local_94.f_28=4;
*uParam0=joaat("valkyrie");
return 1;
}
break;
case 4:
if(!func_159(joaat("buzzard"))){
Local_94.f_28=4;
*uParam0=joaat("buzzard");
return 1;
}
break;
}
return 0;
}

int func_159(int iParam0){
if(!func_775()){
switch (iParam0){
case joaat("rhino"):
return Global_262145.f_11743;
break;
case joaat("hydra"):
return Global_262145.f_11745;
break;
case joaat("savage"):
return Global_262145.f_11744;
break;
case joaat("buzzard"):
return Global_262145.f_11747;
break;
case joaat("valkyrie"):
return Global_262145.f_11746;
break;
}}else{
switch (iParam0){
case joaat("rhino"):
return Global_262145.f_12023;
break;
case joaat("hydra"):
return Global_262145.f_12025;
break;
case joaat("savage"):
return Global_262145.f_12024;
break;
case joaat("buzzard"):
return Global_262145.f_12027;
break;
case joaat("valkyrie"):
return Global_262145.f_12026;
break;
}}
return 0;
}

int func_160(){
return Global_262145.f_11757;
}

int func_161(var uParam0){
int iVar0;
if(!func_23(&(Local_94.f_334))){
func_21(&(Local_94.f_334), 0, 0);
}elseif(func_20(&(Local_94.f_334), 3000, 0)){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)), 0)){
if(!MISC::IS_BIT_SET(Local_97[bVar0 /*18*/].f_2, 7)){
*uParam0++;
}}}
bVar0++;
}
return 1;
}
return 0;
}

int func_162(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_163(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_21(uParam0, 0, 0);
}}}


void func_164(){
struct<3> Var0;
if(iLocal_583 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iLocal_583])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_7[iLocal_583])){
Var0={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[iLocal_583]), 0) 
};
if(Var0.f_2 < -25f){
func_26(&(Local_94.f_7[iLocal_583]));
}}}}
iLocal_583++;
if(iLocal_583 >=4){
iLocal_583=0;
}}


void func_165(){
if(func_16(PLAYER::PLAYER_ID(), 0)){
return;
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17==1){
if(!MISC::IS_BIT_SET(uLocal_99, 13)){
MISC::SET_BIT(&uLocal_99, 13);
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(1, 0);
}}elseif(MISC::IS_BIT_SET(uLocal_99, 13)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(0, 0);
MISC::CLEAR_BIT(&uLocal_99, 13);
}}}}


void func_166(){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
if(!func_16(PLAYER::PLAYER_ID(), 0)){
return;
}
if(func_433()){
func_281(0);
}
iVar0=Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_804;
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1=0;
}
if(iVar0 !=func_5()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0)){
uVar1=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
iVar2=uVar1;
iVar3=Local_97[iVar2 /*18*/].f_17;
switch (iVar3){
case 0:
func_201();
func_198(iVar2);
break;
case 1:
func_197();
func_171();
func_167(1);
break;
case 2:
func_167(0);
break;
}}}}}


void func_167(bool bParam0){
bool bVar0;
int iVar1;
bVar0=false;
while (bVar0 < 24){
if(bParam0){
func_168(Local_94.f_48[bVar0], &(Local_106[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
}else{
func_168(Local_94.f_48[bVar0], &(Local_106[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1, 0, 0);
}
if(HUD::DOES_BLIP_EXIST(Local_106[bVar0 /*8*/])){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_106[bVar0 /*8*/], "UW_BLIP2");
if(bParam0){
}else{
HUD::SET_BLIP_AS_SHORT_RANGE(Local_106[bVar0 /*8*/], 1);
}}
if(HUD::DOES_BLIP_EXIST(Local_106[bVar0 /*8*/].f_1)){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_106[bVar0 /*8*/].f_1, "UW_BLIP2");
if(bParam0){
}else{
HUD::SET_BLIP_AS_SHORT_RANGE(Local_106[bVar0 /*8*/].f_1, 1);
}}
if(Local_94.f_27 !=joaat("hydra")){
if(MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar0)], func_91(bVar0)) || MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar0)], func_91(bVar0))){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar0])){
func_93(&(Local_106[bVar0 /*8*/]));
}}}elseif((bVar0 % 4)==0){
iVar1=(bVar0 / 4);
if(MISC::IS_BIT_SET(Local_94.f_271, iVar1) || MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar0])){
func_93(&(Local_106[bVar0 /*8*/]));
}}}
bVar0++;
}}


void func_168(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
if(func_170(0)){
Global_2672524=PLAYER::PLAYER_ID();
}
if(bParam3){
func_169(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2672524, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
}else{
func_169(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2672524, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
}}elseif(HUD::DOES_BLIP_EXIST(*uParam1)){
func_93(uParam1);
}}

int func_169(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12){
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
if(PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11){
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
HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, uParam4);
HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, uParam5);
*uParam1=HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
if(!iParam9==-1 || uParam12){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
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
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
}
else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
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


bool func_170(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_171(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
char* sVar4[4];
bool bVar5;
int iVar6[4];
var uVar7[4];
int iVar8;
int iVar9;
iVar2=(func_35() - func_127(&(Local_94.f_332), 0, 0));
if(iLocal_561==0){
if(MISC::IS_BIT_SET(uLocal_98, 26)){
if((MISC::IS_BIT_SET(Local_94.f_3, 0) && MISC::IS_BIT_SET(Local_94.f_3, 1)) && MISC::IS_BIT_SET(Local_94.f_3, 2)){
iLocal_561=(func_35() - func_127(&(Local_94.f_332), 0, 0));
iVar2=iLocal_561;
}}}else{
iVar2=iLocal_561;
}
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11)){
return;
}
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10)){
return;
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >=0){
return;
}
if(func_775()){
iVar0=(((Local_94.f_256[0] + Local_94.f_256[1]) + Local_94.f_256[2]) + Local_94.f_256[3]);
}else{
iVar0=Local_94.f_256[0];
}
func_193(iVar2);
if(iVar2 > 30000){
iVar3=1;
}else{
iVar3=6;
}
if(func_775()){
iVar1=0;
while (iVar1 < 4){
iVar9=PLAYER::INT_TO_PLAYERINDEX(Local_94.f_594[iVar1 /*4*/].f_2);
if(iVar9 !=func_5()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9)){
sVar4[iVar1]=PLAYER::GET_PLAYER_NAME(bVar9);
iVar6[iVar1]=Local_94.f_594[iVar1 /*4*/].f_1;
uVar7[iVar1]=Local_94.f_594[iVar1 /*4*/];
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9==uVar7[iVar1]){
iVar8=uVar7[iVar1];
iVar8++;
}
uVar7[iVar1]++;
}else{
sVar4[iVar1]="";
iVar6[iVar1]=-1;
}}else{
sVar4[iVar1]="";
iVar6[iVar1]=-1;
}
iVar1++;
}
if((func_35() - func_127(&(Local_94.f_332), 0, 0)) >=0){
if(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra")){
func_189(sVar4[0], uVar7[0], sVar4[1], uVar7[1], sVar4[2], uVar7[2], sVar4[3], uVar7[3], iVar6[0], iVar6[1], iVar6[2], iVar6[3], iVar2, iVar3, func_190(), iVar8);
}else{
func_187(iVar6[0], uVar7[0], iVar6[1], uVar7[1], iVar6[2], uVar7[2], iVar6[3], uVar7[3], iVar2, iVar3, func_190(), iVar8);
}}}elseif(iVar2 >=0){
if(iVar0 > Local_94.f_255){
iVar0=Local_94.f_255;
}
if(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra")){
func_186(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_94.f_255, iVar2, iVar3, 0, func_190());
}else{
func_172(iVar0, iVar0, Local_94.f_255, iVar2, iVar3, 0, func_190(), 1);
}
if(bVar5){
func_116();
}}}


void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7){
struct<8> Var0;
char* sVar1;
if(func_183(0)==0){
return;
}
func_182();
func_181();
StringCopy(&Var0, "HUD_TEAM", 64);
if(bParam5){
func_178(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
}
func_177(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
sVar1="HUD_COUNTDOWN";
if(!func_176(sParam6)){
sVar1=sParam6;
}
func_173(iParam3, sVar1, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}


void func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17){
bool bVar0;
int iVar1;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_175(7, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655612.f_1=1;
func_174(7, bVar0);
Global_1655612.f_4659[bVar0]=iParam0;
StringCopy(&(Global_1655612.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
Global_1655612.f_4659.f_172[bVar0]=iParam2;
Global_1655612.f_4659.f_216[bVar0]=iParam3;
Global_1655612.f_4659.f_183[bVar0]=iParam4;
Global_1655612.f_4659.f_194[bVar0]=iParam5;
Global_1655612.f_4659.f_249[bVar0]=iParam6;
Global_1655612.f_4659.f_260[bVar0]=iParam7;
Global_1655612.f_4659.f_205[bVar0]=iParam8;
Global_1655612.f_4659.f_314[bVar0]=iParam9;
Global_1655612.f_4659.f_325[bVar0]=iParam10;
Global_1655612.f_4659.f_357[bVar0]=iParam11;
Global_1655612.f_4659.f_238[bVar0]=iParam12;
Global_1655612.f_4659.f_271[bVar0]=iParam13;
Global_1655612.f_4659.f_368[bVar0]=iParam14;
Global_1655612.f_4659.f_379[bVar0]=iParam15;
Global_1655612.f_4659.f_390[bVar0]=iParam16;
Global_1655612.f_4659.f_227[bVar0]=iParam17;
}}


void func_174(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), bParam1);
}

int func_175(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655612.f_7009[iParam0], iParam1);
}

int func_176(char* sParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0")){
return 1;
}
return 0;
}


void func_177(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15){
bool bVar0;
int iVar1;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_175(4, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655612.f_1=1;
func_174(4, bVar0);
Global_1655612.f_3347[bVar0]=iParam0;
Global_1655612.f_3347.f_172[bVar0]=iParam1;
StringCopy(&(Global_1655612.f_3347.f_11[bVar0 /*16*/]), sParam2, 64);
Global_1655612.f_3347.f_183[bVar0]=iParam3;
Global_1655612.f_3347.f_216[bVar0]=iParam5;
Global_1655612.f_3347.f_194[bVar0]=iParam4;
Global_1655612.f_3347.f_227[bVar0]=iParam6;
Global_1655612.f_3347.f_270[bVar0]=iParam7;
Global_1655612.f_3347.f_281[bVar0]=iParam8;
Global_1655612.f_3347.f_292[bVar0]=iParam9;
Global_1655612.f_3347.f_303[bVar0]=iParam10;
Global_1655612.f_3347.f_314[bVar0]=iParam11;
Global_1655612.f_3347.f_325[bVar0]=iParam13;
Global_1655612.f_3347.f_336[bVar0]=iParam14;
Global_1655612.f_3347.f_347[bVar0]=iParam15;
if(((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12){
Global_1655612.f_1172=1;
}}}


void func_178(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_175(6, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655612.f_1=1;
func_174(6, bVar0);
Global_1655612.f_4041[bVar0]=iParam0;
StringCopy(&(Global_1655612.f_4041.f_11[bVar0 /*16*/]), sParam1, 64);
Global_1655612.f_4041.f_183[bVar0]=iParam3;
Global_1655612.f_4041.f_172[bVar0]=iParam2;
Global_1655612.f_4041.f_260[bVar0]=iParam4;
Global_1655612.f_4041.f_271[bVar0]=iParam5;
StringCopy(&(Global_1655612.f_4041.f_282[bVar0 /*16*/]), sParam6, 64);
Global_1655612.f_4041.f_443[bVar0]=iParam7;
Global_1655612.f_4041.f_454[bVar0]=iParam8;
Global_1655612.f_4041.f_497[bVar0]=iParam9;
Global_1655612.f_4041.f_508[bVar0]=iParam10;
Global_1655612.f_4041.f_205[bVar0]=iParam11;
Global_1655612.f_4041.f_216[bVar0]=iParam12;
Global_1655612.f_4041.f_227[bVar0]=iParam13;
Global_1655612.f_4041.f_238[bVar0]=iParam14;
Global_1655612.f_4041.f_249[bVar0]=iParam15;
Global_1655612.f_4041.f_519[bVar0]=iParam16;
Global_1655612.f_4041.f_530[bVar0]=iParam17;
Global_1655612.f_4041.f_541[bVar0]=iParam18;
Global_1655612.f_4041.f_552[bVar0]=iParam19;
Global_1655612.f_4041.f_563[bVar0]=iParam20;
Global_1655612.f_4041.f_574[bVar0]=iParam21;
Global_1655612.f_4041.f_585[bVar0]=iParam22;
Global_1655612.f_4041.f_596[bVar0]=iParam23;
Global_1655612.f_4041.f_607[bVar0]=iParam24;
Global_1655612.f_4041.f_194[bVar0]=iParam25;
if(iParam15==5 && func_180()){
Global_1655612.f_1172=1;
}
if(MISC::IS_PC_VERSION()){
iVar2=0;
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
if(iVar3==1280 && iVar4 >=960){
iVar2=1;
}
if(iParam0 > 99999999){
Global_1655612.f_1176=1;
}elseif(iParam0 > 9999999 || iVar2){
Global_1655612.f_1175=1;
}elseif(iParam0 > 999){
Global_1655612.f_1172=1;
}
if(func_179()){
Global_1655612.f_1176=1;
}}}}

int func_179(){
int iVar0;
var uVar1;
if(MISC::IS_PC_VERSION()){
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
if(iVar0 <=1024){
return 1;
}}
return 0;
}

int func_180(){
if(((LOCALIZATION::GET_CURRENT_LANGUAGE()==8 || LOCALIZATION::GET_CURRENT_LANGUAGE()==9) || LOCALIZATION::GET_CURRENT_LANGUAGE()==10) || LOCALIZATION::GET_CURRENT_LANGUAGE()==12){
return 1;
}
return 0;
}


void func_181(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
Global_2696293=1;
}


void func_182(){
Global_1655612.f_1172=1;
}

int func_183(bool bParam0){
if(func_185()){
return 0;
}
if(func_184()){
return 0;
}
if(!bParam0){
if(func_876(PLAYER::PLAYER_ID(), 1, 1)==0){
return 0;
}}
return 1;
}


bool func_184(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 !=0;
}


bool func_185(){
return MISC::IS_BIT_SET(Global_2621446, 12);
}


void func_186(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7){
char* sVar0;
if(func_183(0)==0){
return;
}
func_181();
func_182();
if(bParam6){
func_178(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
func_177(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
sVar0="HUD_COUNTDOWN";
if(!func_176(sParam7)){
sVar0=sParam7;
}
func_173(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}


void func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11){
struct<16> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
char* sVar5;
if(func_183(0)==0){
return;
}
func_182();
func_181();
if(iParam0 > -1){
Var0={
func_188(iParam1) 
};
iVar1=1;
if(iParam11==iParam1){
iVar1=9;
}
func_178(iParam0, &Var0, -1, iVar1, 7, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
}
if(iParam2 > -1){
Var0={
func_188(iParam3) 
};
iVar2=1;
if(iParam11==iParam3){
iVar2=9;
}
func_178(iParam2, &Var0, -1, iVar2, 6, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
}
if(iParam4 > -1){
Var0={
func_188(iParam5) 
};
iVar3=1;
if(iParam11==iParam5){
iVar3=9;
}
func_178(iParam4, &Var0, -1, iVar3, 5, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
}
if(iParam6 > -1){
Var0={
func_188(iParam7) 
};
iVar4=1;
if(iParam11==iParam7){
iVar4=9;
}
func_178(iParam6, &Var0, -1, iVar4, 4, 1, "", 0, 0, 0, 0, iVar4, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
}
sVar5="HUD_COUNTDOWN";
if(!func_176(sParam10)){
sVar5=sParam10;
}
func_173(iParam8, sVar5, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}
struct<16> func_188(int iParam0){
struct<16> Var0;
StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_TEAM"), 64);
StringConCat(&Var0, " ", 64);
StringIntConCat(&Var0, iParam0, 64);
return Var0;
}


void func_189(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
char* sVar4;
if(func_183(0)==0){
return;
}
func_182();
func_181();
if(iParam8 > -1){
iVar0=1;
if(iParam15==iParam1){
iVar0=9;
}
func_178(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
if(iParam9 > -1){
iVar1=1;
if(iParam15==iParam3){
iVar1=9;
}
func_178(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
if(iParam10 > -1){
iVar2=1;
if(iParam15==iParam5){
iVar2=9;
}
func_178(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
if(iParam11 > -1){
iVar3=1;
if(iParam15==iParam7){
iVar3=9;
}
func_178(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
sVar4="HUD_COUNTDOWN";
if(!func_176(sParam14)){
sVar4=sParam14;
}
func_173(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}


char* func_190(){
return "HUD_COUNTDOWN";
switch (func_192(PLAYER::PLAYER_ID())){
case 131:
return "AET_HOT_TARG";
case 132:
return "AET_CHK_COLL";
case 133:
switch (func_191()){
case 0:
return "AET_CHALL_LJ";
case 1:
return "AET_CHALL_LS";
case 2:
return "AET_CHALL_HS";
case 3:
return "AET_CHALL_LST";
case 4:
return "AET_CHALL_LW";
case 5:
return "AET_CHALL_NC";
case 6:
return "AET_CHALL_LP";
case 7:
return "AET_CHALL_VS";
case 8:
return "AET_CHALL_NM";
case 9:
return "AET_CHALL_RD";
case 10:
return "AET_CHALL_LF";
case 11:
return "AET_CHALL_LFL";
case 12:
return "AET_CHALL_LFI";
case 13:
return "AET_CHALL_LB";
case 14:
return "AET_CHALL_MB";
case 15:
return "AET_CHALL_HSH";
case 16:
return "AET_CHALL_DB";
case 17:
return "AET_CHALL_ML";
case 18:
return "AET_CHALL_LSN";
default:
}
break;
case 136:
return "AET_PENNED";
case 138:
return "AET_PARCEL";
case 139:
return "AET_PROPERTY";
case 140:
return "AET_DDROP";
case 141:
return "AET_KCASTLE";
case 144:
return "AET_BLAST";
case 129:
return "AET_UWARF";
case 146:
return "AET_BEAST";
}
return "";
}

int func_191(){
if(func_192(PLAYER::PLAYER_ID())==133){
return Global_2794162.f_5152;
}
return -1;
}

int func_192(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return Global_1895156[iVar0 /*609*/];
}
return -1;
}


void func_193(int iParam0){
if(func_195(PLAYER::PLAYER_ID()) || func_194(PLAYER::PLAYER_ID())==146){
return;
}
if(IntToFloat(iParam0) < MISC::GET_FRAME_TIME()){
if(MISC::IS_BIT_SET(Global_2794162.f_5068, 0)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2794162.f_5070))){
AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2794162.f_5070));
}
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
if(Global_2794162.f_5078 > -1){
AUDIO::RELEASE_SOUND_ID(Global_2794162.f_5078);
Global_2794162.f_5078=-1;
}
Global_2794162.f_5068=0;
}}elseif(iParam0 < 30000){
if(MISC::IS_BIT_SET(Global_2794162.f_5068, 0)){
if(MISC::IS_BIT_SET(Global_2794162.f_5068, 4)){
if(!MISC::IS_BIT_SET(Global_2794162.f_5068, 2)){
if(AUDIO::DOES_PLAYER_VEH_HAVE_RADIO()){
if((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2794162.f_5070))){
StringCopy(&(Global_2794162.f_5070), "", 32);
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
MISC::SET_BIT(&(Global_2794162.f_5068), 2);
}}}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && MISC::IS_BIT_SET(Global_2794162.f_5068, 5)){
AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
}}elseif(!MISC::IS_BIT_SET(Global_2794162.f_5068, 1)){
if(iParam0 < 10000){
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
}elseif(iParam0 < 20000){
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
}else{
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
}
AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
MISC::SET_BIT(&(Global_2794162.f_5068), true);
}elseif(!MISC::IS_BIT_SET(Global_2794162.f_5068, 4)){
if(iParam0 < 27500){
if(AUDIO::GET_PLAYER_RADIO_STATION_GENRE() !=0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !AUDIO::IS_RADIO_FADED_OUT()){
StringCopy(&(Global_2794162.f_5070), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
}
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
MISC::SET_BIT(&(Global_2794162.f_5068), 4);
}}}
if(iParam0 < 10000){
if(!MISC::IS_BIT_SET(Global_2794162.f_5068, 3)){
Global_2794162.f_5078=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Global_2794162.f_5078, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
MISC::SET_BIT(&(Global_2794162.f_5068), 3);
}}}elseif(iParam0 > 10000){
if(!MISC::IS_BIT_SET(Global_2794162.f_5068, 0)){
Global_2794162.f_5068=0;
Global_2794162.f_5078=-1;
AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
MISC::SET_BIT(&(Global_2794162.f_5068), false);
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || MISC::IS_BIT_SET(Global_2794162.f_5068, 2)){
MISC::SET_BIT(&(Global_2794162.f_5068), 2);
MISC::SET_BIT(&(Global_2794162.f_5068), 5);
}else{
MISC::CLEAR_BIT(&(Global_2794162.f_5068), 5);
MISC::CLEAR_BIT(&(Global_2794162.f_5068), 2);
}}}}elseif(iParam0 < 40000 && iParam0 > 30000){
if(!MISC::IS_BIT_SET(Global_2794162.f_5068, 0)){
Global_2794162.f_5068=0;
Global_2794162.f_5078=-1;
AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
MISC::SET_BIT(&(Global_2794162.f_5068), false);
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
MISC::SET_BIT(&(Global_2794162.f_5068), 2);
MISC::SET_BIT(&(Global_2794162.f_5068), 5);
}else{
MISC::CLEAR_BIT(&(Global_2794162.f_5068), 2);
MISC::CLEAR_BIT(&(Global_2794162.f_5068), 5);
}}}}

int func_194(int iParam0){
if(iParam0 !=func_5() && func_876(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_17;
}
return -1;
}

int func_195(int iParam0){
if(iParam0 !=func_5()){
if(func_876(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==19;
}}}
return 0;
}

int func_196(int iParam0){
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


void func_197(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(HUD::DOES_BLIP_EXIST(uLocal_105[iVar0])){
HUD::REMOVE_BLIP(&(uLocal_105[iVar0]));
}
iVar0++;
}}


void func_198(int iParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
if(!HUD::DOES_BLIP_EXIST(uLocal_105[bVar0])){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[bVar0])){
if(!MISC::IS_BIT_SET(Local_94.f_13, bVar0)){
if(!MISC::IS_BIT_SET(Local_97[iParam0 /*18*/].f_1, bVar0)){
uLocal_105[bVar0]=HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]));
HUD::SET_BLIP_SPRITE(uLocal_105[bVar0], 429);
func_199(&(uLocal_105[bVar0]), 29);
if(func_775()){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_105[bVar0], "UW_BLIPC");
}
else{
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_105[bVar0], "UW_BLIP");
}
HUD::SET_BLIP_PRIORITY(uLocal_105[bVar0], 9);
}elseif(HUD::DOES_BLIP_EXIST(uLocal_105[bVar0])){
HUD::REMOVE_BLIP(&(uLocal_105[bVar0]));
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_105[bVar0])){
HUD::REMOVE_BLIP(&(uLocal_105[bVar0]));
}}}
bVar0++;
}}


void func_199(var uParam0, int iParam1){
var uVar0;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
uVar0=func_200(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, uVar0);
}}

int func_200(int iParam0){
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


void func_201(){
bool bVar0;
bVar0=func_273();
if(bVar0){
if(Local_94.f_413 > -1){
if((Local_94.f_413 - func_127(&(Local_94.f_326), 0, 0)) >=0){
if(!func_205()){
func_204((Local_94.f_413 - func_127(&(Local_94.f_326), 0, 0)));
func_202((Local_94.f_413 - func_127(&(Local_94.f_326), 0, 0)), func_203(-1));
}}else{
if(!func_205()){
func_202(0, func_203(-1));
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
MISC::SET_BIT(&(Local_94.f_3), 4);
}}}}}


void func_202(int iParam0, char* sParam1){
char* sVar0;
if(func_183(0)==0){
return;
}
sVar0="HUD_STARTING";
if(!func_176(sParam1)){
sVar0=sParam1;
}
func_173(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}


char* func_203(int iParam0){
char* sVar0;
sVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
return "HUD_STARTING";
if(MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target")){
return "AST_HOT_TARG";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection")){
return "AST_CHK_COLL";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges")){
switch (iParam0){
case 0:
return "AST_CHALL_LJ";
case 1:
return "AST_CHALL_LS";
case 2:
return "AST_CHALL_HS";
case 3:
return "AST_CHALL_LST";
case 4:
return "AST_CHALL_LW";
case 5:
return "AST_CHALL_NC";
case 6:
return "AST_CHALL_LP";
case 7:
return "AST_CHALL_VS";
case 8:
return "AST_CHALL_NM";
case 9:
return "AST_CHALL_RD";
case 10:
return "AST_CHALL_LF";
case 11:
return "AST_CHALL_LFL";
case 12:
return "AST_CHALL_LFI";
case 13:
return "AST_CHALL_LB";
case 14:
return "AST_CHALL_MB";
case 15:
return "AST_CHALL_HSH";
case 16:
return "AST_CHALL_DB";
case 17:
return "AST_CHALL_ML";
case 18:
return "AST_CHALL_LSN";
default:}}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in")){
return "AST_PENNED";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel")){
return "AST_PARCEL";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property")){
return "AST_PROPERTY";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop")){
return "AST_DDROP";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle")){
return "AST_KCASTLE";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE")){
return "AST_BLAST";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST")){
return "AST_UWARF";
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST")){
return "AST_BEAST";
}
return "";
}


void func_204(int iParam0){
if(IntToFloat(iParam0) < MISC::GET_FRAME_TIME()){
Global_2794162.f_5068=0;
}elseif(iParam0 < 6000){
if(!MISC::IS_BIT_SET(Global_2794162.f_5068, 1)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
Global_2794162.f_5068=0;
MISC::SET_BIT(&(Global_2794162.f_5068), true);
}}}


bool func_205(){
bool bVar0;
var uVar1;
if(func_272(17)){
bVar0=true;
}
if(!func_260(129, 0, 0)){
bVar0=true;
}
if(!func_212(0, 1, 1)){
bVar0=true;
}
if(bVar0){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
uVar1=PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1, 0)){
func_210(0, -1);
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
}}}}elseif(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9)){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
}
if(Global_1935879){
bVar0=true;
}
if(func_209(PLAYER::PLAYER_ID())){
bVar0=true;
}
if(func_208(PLAYER::PLAYER_ID(), 2)){
bVar0=true;
}
if(func_206(PLAYER::PLAYER_ID())){
bVar0=true;
}
return bVar0;
}

int func_206(int iParam0){
if(func_207(iParam0)){
return 1;
}
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 8);
}


bool func_207(int iParam0){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 2);
}


bool func_208(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_209(int iParam0){
if(!func_876(iParam0, 0, 1)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2);
}


void func_210(bool bParam0, int iParam1){
if(bParam0){
if(!Global_1853861){
if(!func_272(func_211(iParam1))){
Global_1853861=1;
}}}elseif(Global_1853861){
Global_1853861=0;
}}

int func_211(int iParam0){
switch (iParam0){
case 132:
return 11;
case 133:
return 12;
case 136:
return 19;
case 138:
return 14;
case 139:
return 15;
case 129:
return 17;
case 141:
return 18;
case 144:
return 13;
case 146:
return 16;
case 236:
return 20;
case 150:
return 20;
default:
}
return Global_262145.f_24324;
}

int func_212(bool bParam0, bool bParam1, bool bParam2){
if(func_259(PLAYER::PLAYER_ID(), 14)){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 21)){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 25)){
return 0;
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
return 0;
}
if(bParam1){
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
return 0;
}}
if(func_257(PLAYER::PLAYER_ID())){
return 0;
}
if(func_256()){
return 0;
}
if(bParam2){
if(func_255(PLAYER::PLAYER_ID())){
return 0;
}}
if(func_254()){
return 0;
}
if(bParam0){
if(func_253(PLAYER::PLAYER_ID())){
return 0;
}}elseif(func_237(PLAYER::PLAYER_ID())==3){
return 0;
}
if(func_236(PLAYER::PLAYER_ID()) !=func_5() && func_236(PLAYER::PLAYER_ID())==func_66(PLAYER::PLAYER_ID())){
return 0;
}
if(func_233(PLAYER::PLAYER_ID(), 3)){
return 0;
}
if(func_231(func_232()) && !func_230(PLAYER::PLAYER_ID())){
return 0;
}
if(func_229()){
return 0;
}
if(func_184()){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
if(func_227(PLAYER::PLAYER_ID())){
return 0;
}
if(!func_225()){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 0) || func_208(PLAYER::PLAYER_ID(), 3)){
return 0;
}
if((func_208(PLAYER::PLAYER_ID(), 12) || func_208(PLAYER::PLAYER_ID(), 14)) || func_208(PLAYER::PLAYER_ID(), 13)){
return 0;
}
if(func_224(PLAYER::PLAYER_ID(), 1, 1)){
if(!func_223() && !Global_2764662){
return 0;
}}
if(func_222(PLAYER::PLAYER_ID())){
return 0;
}
if(func_221()){
return 0;
}
if(Global_1935879){
return 0;
}
if(func_209(PLAYER::PLAYER_ID())){
return 0;
}
if(func_220()){
return 0;
}
if(func_218(PLAYER::PLAYER_ID()) && Global_1853632.f_172){
return 0;
}
if(func_217()){
return 0;
}
if(func_216()){
return 0;
}
if(Global_2793197){
return 0;
}
if(Global_1969131){
return 0;
}
if(func_215(PLAYER::PLAYER_ID())){
return 0;
}
if(!func_214(PLAYER::PLAYER_ID())){
if(func_213(PLAYER::PLAYER_ID())){
return 0;
}}
return 1;
}

int func_213(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1890739[iVar0 /*138*/].f_77.f_60 !=0;
}
return 0;
}

int func_214(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 7);
}
return 0;
}

int func_215(int iParam0){
if(iParam0 !=func_5()){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_5, 4);
}
return 0;
}


bool func_216(){
return Global_2765083;
}


bool func_217(){
return Global_1950844.f_529;
}

int func_218(int iParam0){
if(func_219(Global_1853988[iParam0 /*867*/].f_267.f_33)){
return 1;
}
return 0;
}

int func_219(int iParam0){
switch (iParam0){
case 87:
case 88:
case 89:
case 90:
return 1;
break;
}
return 0;
}

int func_220(){
if(Global_4521801.f_943 > -1){
return 1;
}
return 0;
}


bool func_221(){
return Global_100885.f_394 > 0;
}


bool func_222(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 11);
}


bool func_223(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_224(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_5()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 0)){
return 1;
}
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 1)){
return 1;
}}
if(bParam2){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return 1;
}}
return 0;
}

int func_225(){
if(func_226()==0){
return 1;
}
return 0;
}

int func_226(){
return Global_1574632.f_18;
}


bool func_227(int iParam0){
return func_228(iParam0);
}


var func__228(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}


bool func_229(){
return Global_1575063;
}

int func_230(int iParam0){
if(func_192(iParam0)==236 || func_192(iParam0)==150){
return 1;
}
return 0;
}

int func_231(int iParam0){
switch (iParam0){
case 87:
case 88:
case 89:
case 100:
case 101:
case 102:
case 103:
case 90:
case 110:
return 1;
default:
}
return 0;
}

int func_232(){
return Global_2672524.f_2514[0 /*80*/].f_1;
}

int func_233(int iParam0, int iParam1){
if(func_235(iParam0, 0)){
return func_234(Global_1895156[iParam0 /*609*/].f_10.f_33)==iParam1;
}
return 0;
}

int func_234(int iParam0){
switch (iParam0){
case 153:
case 154:
case 155:
case 162:
case 160:
case 163:
case 167:
case 168:
case 169:
case 171:
case 172:
case 178:
case 190:
case 191:
case 192:
case 189:
case 193:
case 194:
case 199:
case 205:
case 210:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
case 262:
case 263:
case 264:
case 271:
case 277:
case 291:
case 292:
case 293:
case 294:
case 295:
case 296:
case 297:
case 298:
case 299:
case 300:
case 301:
case 304:
case 305:
case 306:
case 307:
case 308:
case 309:
case 312:
case 313:
case 315:
case 316:
case 317:
return 0;
case 276:
case 267:
case 318:
return 3;
case 152:
case 159:
case 142:
case 164:
case 157:
case 166:
case 170:
case 173:
case 180:
case 183:
case 185:
case 182:
case 186:
case 197:
case 200:
case 201:
case 198:
case 195:
case 207:
case 208:
case 209:
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 241:
case 242:
case 244:
case 248:
return 1;
case 148:
case 179:
return 2;
default:
}
return -1;
}

int func_235(int iParam0, int iParam1){
if(func_19(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_236(int iParam0){
return Global_1895156[iParam0 /*609*/].f_10.f_35;
}

int func_237(int iParam0){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
var uVar4;
iVar0=2;
bVar1=((func_252(iParam0) && !func_207(iParam0)) && !MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 8));
bVar2=func_253(iParam0);
bVar3=func_251();
uVar4=func_242();
if((bVar1 && (func_214(iParam0) || func_241(iParam0))) || uVar4){
iVar0=0;
}elseif(bVar3 || ((!bVar2 && !func_240(iParam0)) && !func_238(iParam0))){
iVar0=2;
}else{
iVar0=3;
}
if(Global_2794162.f_5231.f_221 !=iVar0){
Global_2794162.f_5231.f_221=iVar0;
}
return iVar0;
}


bool func_238(int iParam0){
return func_239(iParam0, 19);
}


var func__239(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_240(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_239(iParam0, 9);
}
return 0;
}

int func_241(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 0);
}
return 0;
}

int func_242(){
if((func_239(PLAYER::PLAYER_ID(), 21) || func_239(PLAYER::PLAYER_ID(), 22)) || func_247()){
return 1;
}
if(func_244()){
func_243(22);
return 1;
}
return 0;
}


void func_243(bool bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}

int func_244(){
if(func_235(PLAYER::PLAYER_ID(), 0)){
if(((func_251() && !func_246()) || func_208(PLAYER::PLAYER_ID(), 21)) || func_208(PLAYER::PLAYER_ID(), 25)){
return 1;
}else{
func_245(27);
}}
return 0;
}


void func_245(bool bParam0){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), bParam0);
}


bool func_246(){
return Global_1574582.f_1;
}

int func_247(){
return func_248(424, -1);
}

int func_248(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_249(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__249(var uParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_250(uParam1));
}

int func_250(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_18();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


bool func_251(){
return Global_1574582;
}

int func_252(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1895156[iVar0 /*609*/] !=-1;
}
return 0;
}


bool func_253(int iParam0){
return func_239(iParam0, 20);
}


bool func_254(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/]==5;
}

int func_255(int iParam0){
if(Global_2657704[iParam0 /*463*/].f_272.f_4 !=0 || Global_2657704[iParam0 /*463*/].f_272.f_5){
return 1;
}
return 0;
}


bool func_256(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 0);
}

int func_257(int iParam0){
if(func_258(iParam0, 1, 0)){
if(Global_1853988[iParam0 /*867*/] !=6){
return 1;
}}
return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_227(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_259(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_5, iParam1);
}

int func_260(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(Global_262145.f_8317==1){
if(iParam0==67){
return 1;
}
if(iParam0==74){
return 1;
}
if(func_266(PLAYER::PLAYER_ID(), 85)){
if(((((iParam0==64 || iParam0==77) || iParam0==61) || iParam0==81) || iParam0==63) || iParam0==62){
return 1;
}}
if((((((((((iParam0==66 || iParam0==116) || iParam0==103) || iParam0==104) || iParam0==105) || iParam0==119) || iParam0==88) || iParam0==75) || iParam0==95) || iParam0==65) || iParam0==98){
return 1;
}}
if(iParam0 < 0){
return 0;
}
if(iParam0==31){
if(Global_262145.f_4747==1){
return 1;
}}
if(func_265() || func_264()){
return 1;
}
iVar0=iParam0;
iVar1=(iVar0 / 32);
iVar0=(iVar0 % 32);
if(bParam1){
if(iParam0==3){
if(func_261()){
return 1;
}else{
return 0;
}}}
if(bParam2){
return 0;
}
return MISC::IS_BIT_SET(Global_1836851[iVar1], iVar0);
}

int func_261(){
var uVar0;
if(Global_1574612){
return 1;
}
if(MISC::IS_BIT_SET(Global_2794162.f_1831, 23)){
return 1;
}
if(func_265()){
return 1;
}
if(func_264()){
return 1;
}
uVar0=func_262(1304, -1);
if(MISC::IS_BIT_SET(uVar0, 7)){
MISC::SET_BIT(&(Global_2794162.f_1831), 23);
return 1;
}
return 0;
}

int func_262(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_263(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__263(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_250(uParam1));
}


bool func_264(){
return Global_1575051;
}


bool func_265(){
return Global_1575053;
}

int func_266(int iParam0, int iParam1){
if(!func_270()){
return 0;
}
if(func_269()){
return 0;
}
if(iParam1==86){
return 1;
}
return func_267(&(Global_1853988[iParam0 /*867*/].f_794), func_268(iParam1));
}


var func__267(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_268(int iParam0){
switch (iParam0){
case 86:
return 0;
case 19:
return 1;
case 12:
return 2;
case 31:
return 3;
case 20:
return 4;
case 18:
return 5;
case 2:
return 6;
case 76:
return 7;
case 22:
return 8;
case 53:
return 9;
case 34:
return 10;
case 152:
return 11;
case 85:
return 12;
case 84:
return 13;
case 0:
return 14;
case 1:
return 15;
case 153:
return 16;
case 151:
return 17;
case 14:
return 18;
case 15:
return 19;
case 24:
return 20;
case 30:
return 21;
case 46:
return 22;
case 47:
return 23;
case 54:
return 24;
case 51:
return 25;
case 60:
return 26;
case 62:
return 27;
case 66:
return 28;
case 69:
return 29;
case 154:
return 30;
case 82:
return 31;
case 157:
return 32;
case 167:
return 34;
case 169:
return 35;
case 171:
return 36;
case 172:
return 37;
case 173:
return 38;
case 177:
return 39;
case 182:
return 40;
case 188:
return 41;
case 190:
return 42;
default:
}
return 1;
}


bool func_269(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 3);
}

int func_270(){
if(!func_271()){
return 0;
}
return 1;
}

int func_271(){
if(Global_1574612){
return 1;
}
if(func_265()){
return 1;
}
if(func_264()){
return 1;
}
return func_248(120, -1);
}


bool func_272(int iParam0){
var uVar0;
uVar0=func_262(2483, -1);
return MISC::IS_BIT_SET(uVar0, iParam0);
}


bool func_273(){
bool bVar0;
if(!func_775()){
if(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
return 0;
}}elseif(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
if(func_113()==2){
return 0;
}}
if(!func_775()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[0])){
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[0]))==joaat("valkyrie")){
bVar0=Local_94.f_15 !=false;
}else{
bVar0=Local_94.f_14 !=false;
}}}else{
bVar0=MISC::IS_BIT_SET(Local_94.f_3, 9);
}
if(!func_16(PLAYER::PLAYER_ID(), 0)){
if(bVar0 && !func_205()){
if(func_775()){
if(!func_280("UW_ABTSC")){
func_274("UW_ABTSC", 0);
}}elseif(!func_280("UW_ABTS")){
func_274("UW_ABTS", 0);
}}elseif(func_280("UW_ABTSC") || func_280("UW_ABTS")){
func_9();
}}
return bVar0;
}


void func_274(char* sParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
if(func_278(sParam0)){
return;
}
func_10();
Global_1574757=0;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
func_277();
func_276(bParam1);
func_275();
}


void func_275(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_276(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_277(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


bool func_278(char* sParam0){
if(!func_15()){
return 0;
}
if(Global_1574757==11){
return func_279(uParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_279(char* sParam0){
if(!func_15()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_280(char* sParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(!func_15()){
return 0;
}
if(Global_1574757==11){
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63){
return 0;
}}elseif(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
return func_278(sParam0);
}


void func_281(bool bParam0){
int iVar0;
struct<4> Var1;
bool bVar2;
Var1={
func_432() 
};
bVar2=false;
if(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra")){
bVar2=true;
}
if(bVar2){
iVar0=0;
while (iVar0 < 32){
Local_115[iVar0 /*42*/]=-1;
Local_115[iVar0 /*42*/].f_1=func_5();
Local_115[iVar0 /*42*/].f_7=0;
Local_115[iVar0 /*42*/].f_31=-1;
if(Local_94.f_465[iVar0 /*4*/].f_1 > -1){
Local_115[iVar0 /*42*/].f_1=Local_94.f_465[iVar0 /*4*/].f_2;
Local_115[iVar0 /*42*/].f_7=Local_94.f_465[iVar0 /*4*/].f_1;
}
iVar0++;
}
if(bParam0){
if(!func_431()){
if(Local_116.f_103 !=129){
Local_116.f_103=129;
}else{
func_210(1, 129);
}}}elseif(Local_116.f_103 !=129){
Local_116.f_103=129;
}
func_286(&Local_115, &uLocal_114, 27, &Local_116, &uLocal_129, -1, 0, 0);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17==1){
if(Local_115[0 /*42*/].f_1 !=PLAYER::PLAYER_ID()){
if(Local_94.f_465[0 /*4*/].f_1 > 0){
func_285();
}}}}else{
iVar0=0;
while (iVar0 < 32){
Local_115[iVar0 /*42*/]=-1;
Local_115[iVar0 /*42*/].f_1=func_5();
Local_115[iVar0 /*42*/].f_7=0;
Local_115[iVar0 /*42*/].f_31=-1;
Local_115[iVar0 /*42*/].f_39=-1;
if(Local_94.f_465[iVar0 /*4*/].f_1 > -1){
Local_115[iVar0 /*42*/].f_39=Local_94.f_465[iVar0 /*4*/] + 1;
Local_115[iVar0 /*42*/].f_1=PLAYER::INT_TO_PLAYERINDEX(Local_94.f_465[iVar0 /*4*/].f_2);
Local_115[iVar0 /*42*/].f_40=Local_94.f_465[iVar0 /*4*/].f_1;
Local_115[iVar0 /*42*/].f_7=Local_94.f_465[iVar0 /*4*/].f_1;
Local_115[iVar0 /*42*/].f_2=Local_94.f_465[iVar0 /*4*/];
}
iVar0++;
}
func_282();
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17==1){
if(Local_94.f_594[0 /*4*/] > 0){
if(Local_94.f_594[0 /*4*/] !=Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9){
if(Local_94.f_256[Local_94.f_594[0 /*4*/]] > 0){
func_285();
}}}}
func_286(&Local_115, &uLocal_114, 27, &Local_116, &uLocal_129, -1, 1, 0);
if(bParam0){
if(!func_431()){
if(Local_116.f_103 !=129){
Local_116.f_103=129;
}else{
func_210(1, 129);
}}}elseif(Local_116.f_103 !=129){
Local_116.f_103=129;
}}}


void func_282(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
var uVar7;
var uVar8;
var uVar9;
var uVar10;
int iVar11;
uLocal_589[0]=Local_94.f_594[0 /*4*/];
uLocal_589[1]=Local_94.f_594[1 /*4*/];
uLocal_589[2]=Local_94.f_594[2 /*4*/];
uLocal_589[3]=Local_94.f_594[3 /*4*/];
iVar3=Local_94.f_594[0 /*4*/];
iVar4=Local_94.f_594[1 /*4*/];
iVar5=Local_94.f_594[2 /*4*/];
iVar6=Local_94.f_594[3 /*4*/];
if(iVar3 !=-1){
uVar7=Local_94.f_266[iVar3];
}
if(iVar4 !=-1){
uVar8=Local_94.f_266[iVar4];
}
if(iVar5 !=-1){
uVar9=Local_94.f_266[iVar5];
}
if(iVar6 !=-1){
uVar10=Local_94.f_266[iVar6];
}
uLocal_590[0]=uVar7;
uLocal_590[1]=uVar8;
uLocal_590[2]=uVar9;
uLocal_590[3]=uVar10;
iVar11=0;
while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS()){
iVar2=func_284(uLocal_589[iVar0], iVar11);
if(iVar2 !=-1){
Local_115[iVar2 /*42*/].f_7=Local_94.f_594[iVar0 /*4*/].f_1;
}
func_283(iVar2, iVar11);
iVar1++;
if(iVar1 >=uLocal_590[iVar0]){
iVar0++;
iVar1=0;
}
if(iVar0 >=4){
return;
}
iVar11++;
}}


void func_283(int iParam0, int iParam1){
struct<42> Var0;
if(iParam0==-1 || iParam1==-1){
return;
}
Var0={
Local_115[iParam1 /*42*/] 
};
Local_115[iParam1 /*42*/]={
Local_115[iParam0 /*42*/] 
};
Local_115[iParam0 /*42*/]={
Var0 
};
}

int func_284(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar1=-1;
iVar0=iParam1;
while (iVar0 <=(NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1)){
if(iParam0==Local_115[iVar0 /*42*/].f_2){
iVar1=iVar0;
iVar0=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
}
iVar0++;
}
return iVar1;
}


void func_285(){
MISC::SET_BIT(&(Global_2794162.f_1834), 19);
}


void func_286(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7){
int iVar0;
int iVar1[32];
bool bVar2;
bool bVar3;
bool bVar4;
char* sVar5;
int iVar6;
struct<4> Var7;
int iVar8;
int iVar9;
bool bVar10;
float fVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
int iVar22;
struct<2> Var23;
if(func_430(iParam2)){
return;
}
fVar11=-1f;
iVar12=-1;
iVar13=-1;
iVar15=0;
iVar16=0;
uParam3->f_36=0;
if(func_428() || iParam2==28){
if(func_378(uParam1, iParam2, uParam3, Global_1836371, 0, func_433(), iParam7)){
func_377(1);
if((!func_375() && !func_373()) || MISC::IS_BIT_SET(Global_2794162.f_4694, 1)){
if(func_372()){
func_367();
}else{
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
if(uParam3->f_27==0){
func_366(1);
Global_1836371=0;
iVar20=-1;
if(Global_1836595 !=1){
func_365(uParam1, 0, 0);
if(MISC::IS_BIT_SET(uParam3->f_33, 7)){
MISC::CLEAR_BIT(&(uParam3->f_33), 7);
}
}
if(iParam2==28){
iVar18=0;
while (iVar18 < 32){
iVar1[iVar18]=-1;
iVar18++;
}
iVar18=0;
while (iVar18 < 32){
if(func_876(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(bVar18);
if(!func_16(bVar4, 0)){
if(func_361(bVar4) || func_359(bVar4, bVar3)){
bVar10=bVar4;
if(func_358(bVar4)){
iVar1[bVar10]=iVar21;
iVar21++;
iVar0++;
func_355(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
}
}
}}
bVar18++;
}
}
if(!func_352(PLAYER::PLAYER_ID(), 0) && func_351(PLAYER::PLAYER_ID()) !=188){
bVar2=iVar0 > 0;
}
bVar18=false;
while (bVar18 < 32){
if(func_350()){
if(func_876(PLAYER::INT_TO_PLAYERINDEX(bVar18), 0, 1)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(bVar18);
}else{
bVar4=func_5();
}}else{
bVar4=(iParam0[bVar18 /*42*/])->f_1;
}
if((func_349(bVar4) && func_346(bVar4, iParam2, bVar3)) && func_876(bVar4, 0, 1)){
bVar10=bVar4;
iVar8=Global_1853988[bVar10 /*867*/].f_205.f_6;
Var7={
func_340(bVar4) 
};
if(bVar4==PLAYER::PLAYER_ID()){
uParam3->f_35=iVar19;
}
StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
*(uParam4[bVar18 /*13*/])={
func_67(bVar4) 
};
iVar6=func_334(bVar4);
sVar5="";
if(iVar6 !=0){
sVar5=PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
}
Global_1836371++;
if((iParam0[bVar18 /*42*/])->f_22 !=-1f){
fVar11=(iParam0[bVar18 /*42*/])->f_22;
}
if((iParam0[bVar18 /*42*/])->f_31 !=-1){
iVar12=(iParam0[bVar18 /*42*/])->f_31;
}
if((iParam0[bVar18 /*42*/])->f_41 !=-1){
iVar13=(iParam0[bVar18 /*42*/])->f_41;
}
iVar9=(iParam0[bVar18 /*42*/])->f_7;
if(((iParam0[bVar18 /*42*/])->f_7 !=-1 || (iParam0[bVar18 /*42*/])->f_22 !=-1f) || (iParam0[bVar18 /*42*/])->f_31 !=-1){
if(!func_350()){
iVar16=1;
}}
if(iParam5 !=-1){
func_329(&iVar9, &fVar11, (iParam0[bVar18 /*42*/])->f_7, iParam5);
StringCopy(&(uParam3->f_104), func_328(iParam5, 1, 0, 0), 16);
}
if(bParam6){
iVar14=(iParam0[bVar18 /*42*/])->f_2 + 1;
if(iVar20 !=iVar14){
iVar20=iVar14;
}
else{
iVar14=-2;
}}
iVar17=func_323(bVar4, 0);
if(bVar2){
if(func_322(bVar4, 1) && iVar1[bVar10] !=-1){
iVar19=iVar1[bVar10];
}
else{
iVar19=(iVar0 + iVar22);
iVar22++;
}}
uParam3->f_38[bVar10 /*2*/].f_1=iVar19;
if((iParam0[bVar18 /*42*/])->f_39 !=-1){
StringCopy(&Var23, "UW_TM", 16);
StringIntConCat(&Var23, (iParam0[bVar18 /*42*/])->f_39, 16);
}
if(func_321(iParam5)){
func_320(bVar4, uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (iParam0[bVar18 /*42*/])->f_40, iVar14, bParam6);
}else{
func_320(bVar4, uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (iParam0[bVar18 /*42*/])->f_40, iVar14, bParam6);
}
MISC::SET_BIT(&iVar15, bVar4);
iVar19++;
}
bVar18++;
}
bVar18=false;
while (bVar18 < 32){
bVar4=PLAYER::INT_TO_PLAYERINDEX(bVar18);
if(func_876(bVar4, 0, 1) && !MISC::IS_BIT_SET(iVar15, bVar4)){
bVar4=PLAYER::INT_TO_PLAYERINDEX(bVar18);
}else{
bVar4=func_5();
}
if(func_349(bVar4)){
if(func_876(PLAYER::INT_TO_PLAYERINDEX(bVar18), 0, 1)){
bVar10=bVar4;
iVar8=Global_1853988[bVar10 /*867*/].f_205.f_6;
Var7={
func_340(bVar4) 
};
*(uParam4[bVar18 /*13*/])={
func_67(bVar4) 
};
iVar6=func_334(bVar4);
sVar5="";
if(iVar6 !=0){
sVar5=PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
}
Global_1836371++;
iVar17=func_323(bVar4, 1);
if(bVar2){
if(func_322(bVar4, 1)){
iVar19=iVar1[bVar18];
}
else{
iVar19=(iVar0 + iVar22);
iVar22++;
}
}
uParam3->f_38[bVar10 /*2*/].f_1=iVar19;
func_299(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
iVar19++;
}}
bVar18++;
}
if(MISC::IS_BIT_SET(uParam3->f_33, 11)){
func_296(uParam3, uParam1, iParam2);
}
func_107(&(uParam3->f_21));
func_295();
uParam3->f_27=2;
}
if(uParam3->f_27==2){
if(!MISC::IS_BIT_SET(uParam3->f_33, 7)){
func_294(uParam3, uParam1);
func_293(uParam1, 0, 1);
MISC::SET_BIT(&(uParam3->f_33), 7);
}
func_294(uParam3, uParam1);
if(!MISC::IS_BIT_SET(uParam3->f_33, 11)){
MISC::SET_BIT(&(uParam3->f_33), 11);
}
if(func_289(uParam3)){
Global_1836595=1;
}
func_287(uParam3);
if(Global_1836595==1){
uParam3->f_27=0;
}
if(Global_1836595==2){
uParam3->f_27=0;
}}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}}}else{
uParam3->f_27=0;
func_295();
func_366(0);
if(MISC::IS_BIT_SET(uParam3->f_33, 7)){
MISC::CLEAR_BIT(&(uParam3->f_33), 7);
}
if(MISC::IS_BIT_SET(uParam3->f_33, 10)){
MISC::CLEAR_BIT(&(uParam3->f_33), 10);
}}}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_287(var uParam0){
if(!func_23(&(uParam0->f_21))){
func_21(&(uParam0->f_21), 0, 0);
}elseif(func_20(&(uParam0->f_21), 250, 0)){
func_107(&(uParam0->f_21));
func_288(0);
}}


void func_288(bool bParam0){
if(bParam0){
if(Global_1836595 !=2){
Global_1836595=2;
}}else{
switch (Global_1836595){
case 0:
Global_1836595=1;
break;
case 1:
break;
case 2:
break;
}}}

int func_289(var uParam0){
int iVar0;
int iVar1;
struct<13> Var2;
bool bVar3;
int iVar4;
iVar4=0;
iVar0=uParam0->f_37;
bVar3=PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
if(bVar3 !=func_5() && func_876(bVar3, 0, 1)){
Var2={
func_67(bVar3) 
};
iVar1=func_292(uParam0, uParam0->f_37);
if(func_291(Var2)){
switch (iVar1){
case 0:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(NETWORK::NETWORK_IS_GAMER_TALKING(&Var2)){
iVar4=1;
func_290(uParam0, iVar0, 2);
}}elseif(NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_290(uParam0, iVar0, 1);
}
break;
case 2:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2)){
iVar4=1;
func_290(uParam0, iVar0, 0);
}}else{
iVar4=1;
func_290(uParam0, iVar0, 0);
}
break;
case 1:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_290(uParam0, iVar0, 0);
}}elseif(!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_290(uParam0, iVar0, 0);
}
break;
}}}
uParam0->f_37++;
if(uParam0->f_37 >=32){
uParam0->f_37=0;
}
return iVar4;
}


void func_290(var uParam0, int iParam1, int iParam2){
uParam0->f_38[iParam1 /*2*/]=iParam2;
}


bool func_291(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


var func__292(var uParam0, int iParam1){
return uParam0->f_38[iParam1 /*2*/];
}


void func_293(var uParam0, int iParam1, int iParam2){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(iParam2==1){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW")){
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_294(var uParam0, var uParam1){
if(!MISC::IS_BIT_SET(uParam0->f_33, 10)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_33), 10);
}}


void func_295(){
if(Global_1836595 !=0){
Global_1836595=0;
}}


void func_296(var uParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
bVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(bVar2 !=func_5()){
if(func_876(bVar2, 0, 1)){
if(uParam0->f_38[bVar0 /*2*/].f_1 !=-1){
iVar1=func_298(uParam0->f_38[bVar0 /*2*/], 0, iParam2);
func_297(uParam1, uParam0->f_38[bVar0 /*2*/].f_1, iVar1, Global_1853988[bVar0 /*867*/].f_205.f_6);
}}}
bVar0++;
}}


void func_297(var uParam0, int iParam1, int iParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(iParam2==65){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}

int func_298(int iParam0, bool bParam1, int iParam2){
int iVar0;
iVar0=65;
switch (iParam2){
case 21:
iVar0=0;
break;
}
if(bParam1){
iVar0=116;
}
switch (iParam0){
case 2:
return 47;
case 1:
return 49;
default:
}
return iVar0;
}


void func_299(bool bParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12){
int iVar0;
char* sVar1;
if(iParam4 >=func_319() && iParam4 < func_318()){
iParam4=(iParam4 % 16);
iVar0=iParam4 + 1;
if(Global_1836373){
iVar0 +=16;
}
sVar1="SET_DATA_SLOT";
if(Global_1836595==1){
sVar1="UPDATE_SLOT";
}
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, sVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
if(MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108==6){
func_317("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
}
func_317(sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
if(uParam3->f_108==6){
func_317("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
func_317("");
if(uParam3->f_108==6){
func_317("");
}else{
func_317(&sParam5);
}
func_304(uParam3, bParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
if(func_303(uParam3)){
func_302("DPAD_FRIEND");
}elseif(func_301(uParam3)){
func_302("DPAD_FRIEND");
}elseif(func_300(uParam3)){
func_302("DPAD_CREW");
}else{
func_302("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


bool func_300(var uParam0){
return MISC::IS_BIT_SET(uParam0->f_33, 6);
}


bool func_301(var uParam0){
return MISC::IS_BIT_SET(uParam0->f_33, 5);
}


void func_302(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_303(var uParam0){
if(func_301(uParam0) && func_300(uParam0)){
return 1;
}
return 0;
}


void func_304(var uParam0, int iParam1){
if(func_316(iParam1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
}elseif(func_309(iParam1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
}elseif(((MISC::IS_BIT_SET(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2657704[iParam1 /*463*/].f_433, 0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
}else{
if(func_305()){
uParam0->f_36=0;
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
}}

int func_305(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
if(func_307() || func_306()){
return 1;
}}
return 0;
}


var func__306(){
return Global_2683883.f_17;
}

int func_307(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_306();
}
return func_308(Global_4718592.f_117591);
}

int func_308(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_5025[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_309(int iParam0){
if((func_876(iParam0, 0, 1) && func_313()) && func_310(iParam0, 1)){
return 1;
}
return 0;
}


bool func_310(int iParam0, bool bParam1){
return func_311(iParam0, bParam1, 1);
}

int func_311(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_19(iParam0)){
return 0;
}
if(!bParam1){
if(func_312(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_5() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_312(int iParam0, int iParam1){
if(func_19(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}

int func_313(){
if(func_252(PLAYER::PLAYER_ID()) || func_315()){
if(!func_314(PLAYER::PLAYER_ID())){
return 0;
}}
return 1;
}

int func_314(int iParam0){
if(func_192(iParam0)==236 || func_192(iParam0)==150){
return func_214(iParam0);
}
return 0;
}

int func_315(){
switch (func_351(PLAYER::PLAYER_ID())){
case 193:
case 194:
case 199:
case 205:
case 210:
case 188:
return 1;
default:
}
return 0;
}

int func_316(int iParam0){
if(func_305()){
if(func_876(iParam0, 0, 1)){
return func_358(iParam0);
}}
if((func_876(iParam0, 0, 1) && func_313()) && func_312(iParam0, 0)){
return 1;
}
return 0;
}


void func_317(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_318(){
int iVar0;
if(Global_1836373){
iVar0=32;
}else{
iVar0=16;
}
return iVar0;
}

int func_319(){
int iVar0;
iVar0=0;
if(Global_1836373){
iVar0=16;
}
return iVar0;
}


void func_320(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19){
int iVar0;
char* sVar1;
if(iParam3 >=func_319() && iParam3 < func_318()){
iParam3=(iParam3 % 16);
iVar0=iParam3 + 1;
if(Global_1836373){
iVar0 +=16;
}
if(bParam19){
iVar0=iParam18;
if(iVar0==-2){
iParam10=-1;
}}
sVar1="SET_DATA_SLOT";
if(Global_1836595==1){
sVar1="UPDATE_SLOT";
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1)){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
if(MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108==6){
func_317("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
}
if(uParam2->f_108==6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
func_302(sParam16);
}else{
func_317(&(uParam2->f_1));
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
if(uParam2->f_108==6){
func_317("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
}
if(iParam12==1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
if(func_350()){
func_317("");
}elseif(uParam2->f_108==6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104))){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
if(fParam13 !=-1f){
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
}
if(iParam10 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==9){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(uParam2->f_108==10){
if(iParam10==0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}elseif(iParam15 > -1){
if(iParam15==0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104))){
func_302(&(uParam2->f_104));
}else{
func_317("");
}}elseif(iParam14 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(fParam13 !=-1f){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(iParam10 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
}else{
func_317("");
}
if(uParam2->f_108==6){
func_317("");
}else{
func_317(&sParam4);
}
func_304(uParam2, iParam0);
if(iParam12==1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_317("");
func_317("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
}
if(func_303(uParam2)){
func_302("DPAD_FRIEND");
}elseif(func_301(uParam2)){
func_302("DPAD_FRIEND");
}elseif(func_300(uParam2)){
func_302("DPAD_CREW");
}else{
func_302("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}}

int func_321(int iParam0){
return 0;
switch (iParam0){
case 11:
case 12:
return 1;
default:
}
return 0;
}


bool func_322(bool bParam0, bool bParam1){
if(!func_19(bParam0)){
return 0;
}
if(!bParam1){
if(func_358(bParam0)){
return 0;
}}
return Global_1895156[bParam0 /*609*/].f_10 !=func_5();
}

int func_323(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=116;
if((!bParam1 && func_252(bParam0)) && !func_253(bParam0)){
iVar0=func_327();
}
iVar1=func_326(bParam0);
if(!iVar1==-1){
return func_324(iVar1);
}
return iVar0;
}

int func_324(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_325(iParam0);
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


var func__325(int iParam0){
return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_326(int iParam0){
if(func_19(iParam0)){
if(func_322(iParam0, 1)){
return Global_2648711.f_818.f_11[func_66(iParam0)];
}}
return -1;
}

int func_327(){
return 21;
}


char* func_328(int iParam0, bool bParam1, bool bParam2, int iParam3){
switch (iParam0){
case 0:
case 3:
case 4:
case 5:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(bParam1){
return "AMCH_M_LB";
}elseif(bParam2){
return "AMCH_M";
}else{
return "AMCH_METRES";
}}elseif(bParam1){
return "AMCH_FT_LB";
}elseif(bParam2){
return "AMCH_FT";
}else{
return "AMCH_FEET";
}
break;
case 2:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(bParam1){
return "AMCH_KMH_LB";
}elseif(bParam2){
return "AMCH_KMHN";
}else{
return "AMCH_KMH";
}}elseif(bParam1){
return "AMCH_MPH_LB";
}elseif(bParam2){
return "AMCH_MPHN";
}else{
return "AMCH_MPH";
}
break;
case 7:
if(bParam1 || bParam2){
return "";
}else{
return "AMCH_VEH";
}
break;
case 15:
case 16:
case 17:
case 18:
if(bParam1 || bParam2){
return "";
}elseif(iParam3 !=1){
return "AMCH_KILLS";
}else{
return "AMCH_KILL";
}
break;
}
if(bParam1 || bParam2){
return "";
}
return "AMCH_EMPTY";
}

int func_329(var uParam0, float fParam1, int iParam2, int iParam3){
if(func_333(iParam3)){
*fParam1=(func_330(iParam3, iParam2) / 10f);
return 1;
}
if(func_321(iParam3)){
*fParam1=(func_330(iParam3, iParam2) / 1000f);
return 1;
}
*uParam0=iParam2;
return 0;
}


float func_330(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 3:
case 4:
case 5:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
return to_float(iParam1);
}else{
return func_332(to_float(iParam1));
}
break;
case 2:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
return to_float(iParam1);
}else{
return func_331(to_float(iParam1));
}
break;
}
return to_float(iParam1);
}


float func_331(float fParam0){
return (fParam0 / 1.609344f);
}


float func_332(float fParam0){
return (fParam0 / 0.3048f);
}

int func_333(int iParam0){
switch (iParam0){
case 0:
case 2:
case 3:
case 5:
case 4:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
return 1;
default:
}
return 0;
}

int func_334(bool bParam0){
int iVar0;
iVar0=func_337(bParam0);
if(iVar0==-1){
func_335(bParam0, 1);
return 0;
}
Global_1666485[iVar0 /*5*/].f_4=1;
return Global_1666485[iVar0 /*5*/].f_2;
}


void func_335(int iParam0, bool bParam1){
if(!func_876(iParam0, 0, 1)){
return;
}
if(func_337(iParam0) !=-1){
return;
}
if(Global_1666648){
if(iParam0==Global_1666648.f_1){
return;
}}
if(func_336(iParam0)){
return;
}
if(Global_1666686 >=32){
return;
}
Global_1666653[Global_1666686]=iParam0;
Global_1666686++;
if(bParam1){}}

int func_336(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666686){
if(Global_1666653[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_337(int iParam0){
int iVar0;
if(!func_876(iParam0, 0, 1)){
return -1;
}
if(Global_1666646==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666646){
if(Global_1666485[iVar0 /*5*/].f_1==iParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666485[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666485[iVar0 /*5*/].f_2)){
return iVar0;
}
func_338(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_338(int iParam0){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
if(iParam0 >=Global_1666646){
return;
}
if(PED::IS_PEDHEADSHOT_VALID(Global_1666485[iParam0 /*5*/].f_2)){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
if(Global_1666485[iParam0 /*5*/].f_2 !=0){
StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666485[iParam0 /*5*/].f_2), 64);
HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
}
PED::UNREGISTER_PEDHEADSHOT(Global_1666485[iParam0 /*5*/].f_2);
}
iVar2=iParam0;
iVar3=iVar2 + 1;
while (iVar3 < Global_1666646){
Global_1666485[iVar2 /*5*/]={
Global_1666485[iVar3 /*5*/] 
};
iVar2++;
iVar3++;
}
func_339(&(Global_1666485[iVar2 /*5*/]));
Global_1666646=(Global_1666646 - 1);
}


void func_339(var uParam0){
*uParam0=0;
uParam0->f_1=func_5();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}


struct<4> func_340(bool bParam0){
struct<4> Var0;
if(func_876(bParam0, 0, 1)){
Global_2764376={
func_67(bParam0) 
};
if(func_345()){
if(func_291(Global_2764376)){
if(!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2764376)){
return Var0;
}}}elseif(!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return Var0;
}
if(func_344(&Global_2764376)){
Global_2764306={
func_342(bParam0) 
};
func_341(&Global_2764306, &Var0);
}}
return Var0;
}


void func_341(var uParam0, var uParam1){
NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, uParam1);
}
struct<35> func_342(int iParam0){
struct<13> Var0;
struct<35> Var1;
if(func_343(iParam0)){
return Global_1575095[PLAYER::PLAYER_ID() /*35*/];
}
Var0={
func_67(iParam0) 
};
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
return Var1;
}

int func_343(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}
return 0;
}

int func_344(var uParam0){
if(PLAYER::IS_PLAYER_ONLINE()){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return 1;
}}
return 0;
}


bool func_345(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_346(int iParam0, int iParam1, bool bParam2){
if(iParam1==27){
if((func_207(iParam0) || func_348(iParam0)) || func_206(iParam0)){
return 0;
}}
if(!func_347(iParam0)){
return 0;
}
if(!func_361(iParam0) && !func_359(iParam0, bParam2)){
return 0;
}
return 1;
}


bool func_347(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_139, 22);
}

int func_348(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return (MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 10) || MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 9));
}
return 0;
}

int func_349(bool bParam0){
int iVar0;
if(bParam0==func_5()){
return 0;
}
if(func_16(bParam0, 0)){
return 0;
}
iVar0=bParam0;
if(iVar0 !=-1){
if(MISC::IS_BIT_SET(Global_1853988[iVar0 /*867*/].f_139, 2)){
return 0;
}}
return 1;
}

int func_350(){
switch (func_351(PLAYER::PLAYER_ID())){
case 179:
case 180:
case 182:
case 183:
case 184:
case 185:
case 186:
case 189:
case 190:
case 191:
case 192:
case 195:
case 197:
case 198:
case 200:
case 201:
case 202:
case 203:
case 204:
case 206:
case 207:
case 208:
case 209:
case 211:
return 1;
default:
}
switch (func_192(PLAYER::PLAYER_ID())){
case 131:
case 140:
case 138:
case 146:
return 1;
break;
}
if(func_253(PLAYER::PLAYER_ID())){
switch (func_351(PLAYER::PLAYER_ID())){
case 148:
case 151:
case 152:
case 153:
case 157:
case 159:
case 162:
case 164:
case 142:
return 1;
break;
}}
if(func_314(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_351(int iParam0){
if(func_19(iParam0)){
if(func_235(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_352(int iParam0, int iParam1){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 && func_353(Global_1895156[iParam0 /*609*/].f_10.f_33)){
return 1;
}
if(iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1){
if(func_353(Global_1895156[iParam0 /*609*/].f_10.f_32)){
return 1;
}}
return 0;
}

int func_353(int iParam0){
switch (iParam0){
case 155:
case 160:
case 153:
case 162:
case 154:
case 163:
case 171:
case 172:
case 240:
case 239:
return 1;
default:
}
return func_354(iParam0, 0);
return 0;
}

int func_354(int iParam0, int iParam1){
switch (iParam0){
case 199:
case 205:
case 210:
case 211:
return 1;
default:
}
if(iParam1==0){
switch (iParam0){
case 194:
case 193:
case 189:
case 153:
return 1;
}
default:
}
return 0;
}


void func_355(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
if(func_876(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1)){
iVar1=PLAYER::INT_TO_PLAYERINDEX(bVar0);
if(!func_16(iVar1, 0)){
if(func_361(iVar1) || func_359(iVar1, bParam4)){
if(func_356(iVar1, iParam1, 0)){
(*iParam0)[bVar0]=*iParam2;
*iParam2++;
*iParam3++;
}}}}
bVar0++;
}}

int func_356(int iParam0, int iParam1, bool bParam2){
if(func_19(iParam1)){
if(!bParam2){
if(func_357(iParam0, iParam1)){
return 0;
}}
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
return iParam1==Global_1895156[iParam0 /*609*/].f_10;
}}
return 0;
}

int func_357(int iParam0, int iParam1){
if(iParam1 !=func_5()){
if(iParam0 !=func_5()){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}

int func_358(int iParam0){
if(func_19(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}


bool func_359(int iParam0, bool bParam1){
if(bParam1){
return 0;
}
return (Global_2657704[iParam0 /*463*/].f_246 !=-1 || func_360(iParam0));
}


bool func_360(int iParam0){
return Global_1853988[iParam0 /*867*/].f_192 !=0;
}

int func_361(bool bParam0){
if(!func_876(iParam0, 0, 1)){
return 0;
}
if(!func_876(PLAYER::PLAYER_ID(), 0, 1)){
return 0;
}
if(!func_362(iParam0)){
return 0;
}
if((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iParam0, PLAYER::PLAYER_ID()) || func_351(bParam0)==233) || func_351(bParam0)==271){
return 1;
}
return 0;
}

int func_362(int iParam0){
bool bVar0;
bool bVar1;
bVar0=func_363(PLAYER::PLAYER_ID());
bVar1=func_363(iParam0);
if((bVar0 && !bVar1) || (!bVar0 && bVar1)){
return 0;
}
return 1;
}


var func__363(int iParam0){
return func_364(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}


var func__364(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}


void func_365(var uParam0, int iParam1, int iParam2){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_366(bool bParam0){
if(bParam0){
if(Global_1654051.f_2==0){
Global_1654051.f_2=1;
}}elseif(Global_1654051.f_2==1){
Global_1654051.f_2=0;
}}


void func_367(){
if(MISC::IS_BIT_SET(Global_2794162.f_4694, 1)){
if(func_371()){
func_368();
}}}


void func_368(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672524.f_2514[iVar0 /*80*/].f_2 !=0){
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
func_369(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}


void func_369(var uParam0, int iParam1){
func_370(uParam0, iParam1);
}


void func_370(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_371(){
return Global_2672524.f_2514[0 /*80*/].f_1 !=0;
}

int func_372(){
if(MISC::IS_BIT_SET(Global_2794162.f_4694, 0) && func_371()){
return 1;
}
if(MISC::IS_BIT_SET(Global_2794162.f_4694, 1) && func_371()){
return 1;
}
return 0;
}

int func_373(){
if(func_371()){
if(func_374(Global_2672524.f_2514[0 /*80*/].f_1)){
return 1;
}}
return 0;
}

int func_374(int iParam0){
switch (iParam0){
case 88:
case 87:
case 91:
case 92:
case 86:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 89:
case 100:
case 101:
case 102:
case 103:
case 90:
case 110:
return 1;
default:
}
return 0;
}

int func_375(){
if(func_371()){
if(func_376(Global_2672524.f_2514[0 /*80*/].f_1)){
return 1;
}}
return 0;
}

int func_376(int iParam0){
switch (iParam0){
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
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
case 81:
case 82:
case 83:
return 1;
default:
}
return 0;
}


void func_377(int iParam0){
if(Global_1654051.f_1 !=Global_1654051){
Global_1654051.f_1=Global_1654051;
}
if(Global_1654051 !=iParam0){
Global_1654051=iParam0;
}}

int func_378(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6){
struct<4> Var0;
var uVar1;
bool bVar2;
bool bVar3;
float fVar4;
int iVar5;
char* sVar6;
StringCopy(&Var0, "", 16);
bVar2=iParam1==20;
bVar3=func_427(iParam1);
fVar4=func_426();
iVar5=-1;
if(iParam1==27 || iParam1==28){
if(func_425()){
if(func_424() > 0 && Global_1836373){
HUD::THEFEED_HIDE_THIS_FRAME();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}}}
if(!bParam5){
if(!func_411()){
func_410(uParam0, uParam2, 1);
return 0;
}}
if(MISC::IS_BIT_SET(Global_2794162.f_4697, 26)){
func_410(uParam0, uParam2, 1);
return 0;
}
if(!func_23(&(uParam2->f_19))){
if(func_424()==1){
func_409(bVar3, uParam0, 0);
func_21(&(uParam2->f_19), 0, 0);
func_410(uParam0, uParam2, 0);
MISC::SET_BIT(&(Global_2794162.f_4699), 5);
}}
if(func_23(&(uParam2->f_19)) || bParam5){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
if(func_20(&(uParam2->f_19), 10000, 0) || (func_424()==0 && !bParam5)){
func_410(uParam0, uParam2, 1);
return 0;
}else{
if(bVar2==0){
func_408();
if(iParam1==27 || iParam1==28){
HUD::THEFEED_HIDE_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
}
if(!MISC::IS_BIT_SET(uParam2->f_33, 0)){
if(bVar2==0){
func_408();
if(iParam1==27 || iParam1==28){
HUD::THEFEED_HIDE_THIS_FRAME();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
if(func_409(bVar3, uParam0, 0)){
func_365(uParam0, 0, 0);
uVar1=func_406(iParam1, &(Global_4718592.f_117598), bParam4);
Var0={
func_404(iParam1) 
};
if(bParam4){
func_401(uParam0, uVar1, "", 0, -1, -1, 1);
}elseif(iParam1==27){
func_396(uParam0, func_398(uParam2), func_397(uParam2), -1);
}elseif(iParam1==28){
sVar6=func_389(uParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam6)){
sVar6=sParam6;
}
func_387(uParam0, sVar6, func_388(), -1);
}elseif(func_305()){
uParam2->f_34=Global_1836372;
func_401(uParam0, uVar1, &Var0, 1, -1, Global_1836372, 1);
}elseif(bVar2){
iVar5=func_380(iParam1);
uParam2->f_34=Global_1836372;
func_401(uParam0, uVar1, "", 0, iVar5, func_379(), 1);
}else{
iVar5=func_380(iParam1);
func_401(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
}
MISC::SET_BIT(&(uParam2->f_33), false);
}}
if(MISC::IS_BIT_SET(uParam2->f_33, 0)){
Global_1836371=uParam3;
Global_1836370=1;
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
if(bVar2){
if(uParam2->f_34 !=Global_1836372){
MISC::CLEAR_BIT(&(uParam2->f_33), false);
}}
return 1;
}}}
return 0;
}

int func_379(){
return Global_1836372;
}

int func_380(int iParam0){
int iVar0;
iVar0=-1;
if(func_386()){
iVar0=2;
}
switch (iParam0){
case 40:
iVar0=22;
break;
case 0:
case 31:
case 30:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 41:
case 42:
iVar0=3;
break;
case 2:
iVar0=3;
break;
case 1:
iVar0=6;
break;
case 3:
iVar0=5;
break;
case 26:
iVar0=21;
break;
case 4:
case 5:
case 6:
case 8:
case 9:
case 10:
case 11:
iVar0=4;
break;
case 7:
iVar0=10;
break;
case 12:
case 13:
case 14:
case 17:
case 43:
iVar0=2;
break;
case 15:
iVar0=17;
break;
case 16:
iVar0=18;
break;
case 18:
if(func_385(PLAYER::PLAYER_ID())){
iVar0=20;
}
if(func_384(PLAYER::PLAYER_ID())){
iVar0=19;
}
break;
}
if(func_383(PLAYER::PLAYER_ID())){
iVar0=2;
}
if(func_381()){
iVar0=20;
}
return iVar0;
}


bool func_381(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_62();
}
return func_382(Global_4718592.f_117591);
}

int func_382(int iParam0){
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


bool func_383(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==4;
}


bool func_384(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==7;
}


bool func_385(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==2;
}


bool func_386(){
return Global_4718592.f_1==0;
}


void func_387(var uParam0, char* sParam1, char* sParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
func_302(sParam1);
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
func_302("");
if(iParam3 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


char* func_388(){
switch (func_351(PLAYER::PLAYER_ID())){
case 163:
return "BD_SORT_1";
break;
case 160:
return "BD_SORT_4";
break;
case 154:
return "BD_SORT_3";
break;
case 155:
return "BD_SORT_3";
break;
}
return "";
}


char* func_389(var uParam0){
switch (uParam0->f_112){
case 0:
return "GR_DPD_E";
break;
case 1:
return "GR_DPD_F";
break;
case 2:
return "GR_DPD_S";
break;
}
switch (uParam0->f_110){
case 0:
return "GR_DPD_A";
break;
case 1:
return "GR_DPD_B";
break;
case 2:
return "GR_DPD_C";
break;
case 3:
return "GR_DPD_D";
break;
}
switch (func_351(PLAYER::PLAYER_ID())){
case 233:
return "H2_DPAD_SET";
break;
case 180:
return "GB_BIGUNLOAD_T";
break;
case 182:
return "DEAL_DEALN";
break;
case 194:
return "PI_BIK_13_0";
break;
case 189:
return "PI_BIK_4_1";
break;
case 193:
return "PI_BIK_13_1";
break;
case 205:
return "PI_BIK_13_3";
break;
case 186:
return "CELL_BIKER_CK";
break;
case 207:
return "DV_SH_TITLE";
break;
case 208:
return "BA_SH_TITLE";
break;
case 209:
return "SHU_SH_TITLE";
break;
case 210:
return "PI_BIK_13_4";
break;
case 183:
return "CELL_BIKER_RESC";
break;
case 199:
return "CELL_BIKER_SEAR";
break;
case 201:
return "CELL_BIKER_STAN";
break;
case 142:
return "PIM_MAGM210";
break;
case 163:
return "PIM_MAGM608";
break;
case 160:
return "PIM_MAGM604";
break;
case 154:
return "PIM_MAGM602";
break;
case 155:
return "PIM_MAGM603";
break;
case 148:
if(func_392()){
return "LBD_BKVBK";
}
return "PIM_MAGM201";
break;
case 151:
if(func_391(1)){
return "GB_DPAD_BMFD";
}
return "PIM_MAGM202";
break;
case 152:
return "PIM_MAGM204";
break;
case 153:
if(func_391(1)){
return "PI_BIK_3_2";
}
return "PIM_MAGM601";
break;
case 157:
return "PIM_MAGM207";
break;
case 159:
return "PIM_MAGM206";
break;
case 162:
return "PIM_MAGM607";
break;
case 164:
return "PIM_MAGM212";
break;
case 166:
return "GB_DPAD_HEAD";
case 167:
return "GB_DPAD_BUY";
case 168:
return "GB_DPAD_SELL";
case 169:
return "GB_DPAD_DEF";
case 170:
return "GB_DPAD_AIR";
case 171:
return "GB_DPAD_CASH";
case 172:
return "GB_DPAD_SAL";
case 173:
return "GB_DPAD_FRA";
case 178:
return "VEX_TITLEa";
case 188:
return "VEX_TITLEb";
case 218:
return "FRT_MODE";
case 217:
return "FRT_TRNS";
case 214:
return "MODE_PLW";
case 215:
return "MODE_FUL";
case 216:
return "MODE_AA";
case 219:
return "MODE_VEL";
case 220:
return "MODE_RMP";
case 221:
return "MODE_STK";
case 225:
return "GR_TITLEL";
case 226:
return "GRS_TITLEL";
case 227:
return "GRD_TITLEL";
case 195:
return "GB_STEAL_T";
case 198:
return "SC_MENU_TITLE";
case 190:
return "GB_DPAD_BSEL";
case 191:
return "GB_DPAD_BDEF";
case 185:
return "GB_DPAD_GFH";
case 197:
return "GB_DPAD_JB";
case 179:
return "CELL_JOUST";
case 200:
return "CAG_BLIP";
case 192:
if(func_390(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_182)){
return "GB_DPAD_BSET";
}
return "GB_DPAD_BBUY";
break;
}
return "";
}

int func_390(int iParam0){
switch (iParam0){
case 15:
case 16:
case 17:
case 18:
case 19:
return 1;
default:
}
return 0;
}


bool func_391(bool bParam0){
return func_310(PLAYER::PLAYER_ID(), bParam0);
}


bool func_392(){
return (func_395() && func_393(func_394()));
}

int func_393(int iParam0){
return func_312(iParam0, 1);
}

int func_394(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_35;
}


bool func_395(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/]==148;
}


void func_396(var uParam0, char* sParam1, char* sParam2, int iParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam2)){
func_302(uParam1);
}elseif(func_192(PLAYER::PLAYER_ID())==133){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
func_302("");
if(iParam3 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


char* func_397(var uParam0){
int iVar0;
iVar0=func_192(PLAYER::PLAYER_ID());
if(func_431()){
if(uParam0->f_103 !=-1){
iVar0=uParam0->f_103;
}}
switch (iVar0){
case 131:
return "";
case 132:
return "FM_AE_SORT_5";
case 133:
switch (func_191()){
case 0:
return "FM_AE_SORT_2";
case 1:
return "FM_AE_SORT_2";
case 2:
return "FM_AE_SORT_3";
case 3:
return "FM_AE_SORT_2";
case 4:
return "FM_AE_SORT_2";
case 5:
return "FM_AE_SORT_2";
case 6:
return "FM_AE_SORT_2";
case 7:
return "FM_AE_SORT_13";
case 8:
return "FM_AE_SORT_4";
case 9:
return "FM_AE_SORT_2";
case 10:
return "FM_AE_SORT_2";
case 11:
return "FM_AE_SORT_2";
case 12:
return "FM_AE_SORT_2";
case 13:
return "FM_AE_SORT_2";
case 14:
return "FM_AE_SORT_5";
case 15:
return "FM_AE_SORT_9";
case 16:
return "FM_AE_SORT_9";
case 17:
return "FM_AE_SORT_9";
case 18:
return "FM_AE_SORT_9";
default:
}
break;
case 136:
return "";
case 138:
return "";
case 139:
return "FM_AE_SORT_10";
case 140:
return "";
case 141:
return "FM_AE_SORT_5";
case 144:
return "FM_AE_SORT_1";
case 129:
return "FM_AE_SORT_9";
}
return "";
}


char* func_398(var uParam0){
int iVar0;
iVar0=func_192(PLAYER::PLAYER_ID());
if(func_431()){
if(uParam0->f_103 !=-1){
iVar0=uParam0->f_103;
}}
switch (iVar0){
case 131:
return "PIM_TA9";
case 132:
if(func_400()==0){
return "CPC_TILEL";
}elseif(func_400()==1){
return "CPC_TILELA";
}
return "PIM_TA0";
break;
case 133:
switch (func_191()){
case 0:
return "AMCH_0SLC";
case 1:
return "AMCH_1SLC";
case 2:
return "AMCH_2SLC";
case 3:
return "AMCH_3SLC";
case 4:
return "AMCH_4SLC";
case 5:
return "AMCH_5SLC";
case 6:
return "AMCH_6SLC";
case 7:
return "AMCH_7SLC";
case 8:
return "AMCH_8SLC";
case 9:
return "AMCH_12SLC";
case 10:
return "AMCH_13SLC";
case 11:
return "AMCH_15SLC";
case 12:
return "AMCH_16SLC";
case 13:
return "AMCH_23SLC";
case 14:
return "AMCH_9SLC";
case 15:
return "AMCH_19SLC";
case 16:
return "AMCH_20SLC";
case 17:
return "AMCH_21SLC";
case 18:
return "AMCH_22SLC";
default:
}
break;
case 136:
return "PIM_TA10";
case 138:
return "PIM_TA4";
case 139:
return "PIM_TA5";
case 140:
return "PIM_TA3";
case 141:
return "PIM_TA8";
case 144:
return "PIM_TA2";
case 129:
if(func_399()==1){
return "FM_AE_TITL_12";
}else{
return "PIM_TA7";
}
break;
case 146:
return "PIM_TA6";
}
return "";
}

int func_399(){
return Global_2794162.f_5155;
}

int func_400(){
if(func_192(PLAYER::PLAYER_ID())==132){
return Global_2794162.f_5150;
}
return -1;
}


void func_401(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
if(bParam3){
func_317(uParam1);
}elseif(iParam5 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_302(sParam1);
}
if(func_425() && iParam6){
if(func_403()){
iVar0=2;
iVar1=2;
}else{
iVar0=1;
iVar1=2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_302(sParam2);
}
if(iParam4 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
if(func_402(PLAYER::PLAYER_ID())){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
}elseif(func_62()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_402(int iParam0){
if(func_385(iParam0) || func_384(iParam0)){
return 1;
}
return 0;
}


bool func_403(){
return Global_1836373;
}


struct<4> func_404(int iParam0){
struct<4> Var0;
StringCopy(&Var0, "", 16);
if(func_405(PLAYER::PLAYER_ID()) || func_383(PLAYER::PLAYER_ID())){
return Var0;
}
switch (iParam0){
case 12:
case 13:
case 14:
case 17:
case 15:
case 16:
case 18:
StringCopy(&Var0, "LBD_DIF_", 16);
StringIntConCat(&Var0, Global_4718592.f_1749, 16);
break;
}
if(func_305() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
StringCopy(&Var0, "LBD_DIF_", 16);
StringIntConCat(&Var0, Global_4718592.f_1749, 16);
}
return Var0;
}


bool func_405(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==5;
}


char* func_406(int iParam0, char* sParam1, bool bParam2){
var uVar0;
if(iParam0==20 && (!func_305() || MISC::IS_STRING_NULL_OR_EMPTY(uParam1))){
uVar0=func_407();
return uVar0;
}elseif(bParam2){
return "HUD_LBD_IMP";
}elseif(iParam0==25){
if(Global_1836615==0){
Global_1836615=1;
}
return "HUD_LBD_OVR";
}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
if(Global_1836615==1){
Global_1836615=0;
}
return sParam1;
}else{
if(Global_1836615==0){
Global_1836615=1;
}
switch (iParam0){
case 0:
case 31:
case 42:
return "HUD_LBD_DM";
break;
case 1:
return "HUD_LBD_TDM";
break;
case 5:
return "HUD_LBD_GRCE";
break;
case 4:
case 9:
case 10:
case 6:
case 26:
case 11:
return "HUD_LBD_RCE";
break;
case 7:
return "HUD_LBD_BRCE";
break;
case 18:
case 14:
case 17:
case 15:
case 13:
case 12:
case 16:
case 19:
return "HUD_TITLEMC";
break;
case 3:
return "HUD_LBD_HRD";
break;
case 22:
return "HUD_LBD_SHOO";
break;
}}
return sParam1;
}


char* func_407(){
if(NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS()){
return "HUD_LBD_FMF";
}
if(NETWORK::NETWORK_SESSION_IS_CLOSED_CREW()){
return "HUD_LBD_FMC";
}
if(NETWORK::NETWORK_SESSION_IS_SOLO()){
return "HUD_LBD_FMS";
}
if(NETWORK::NETWORK_SESSION_IS_PRIVATE()){
return "HUD_LBD_FMI";
}
return "HUD_LBD_FMP";
}


void func_408(){
Global_44323=1;
}


bool func_409(bool bParam0, var uParam1, bool bParam2){
if(bParam0){
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
}elseif(bParam2){
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
}else{
*uParam1=GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
}
return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}


void func_410(var uParam0, var uParam1, bool bParam2){
MISC::CLEAR_BIT(&(uParam1->f_33), 7);
Global_1836371=0;
func_295();
Global_1836370=0;
uParam1->f_27=0;
if(bParam2){
if(func_23(&(uParam1->f_19))){
func_107(&(uParam1->f_19));
MISC::CLEAR_BIT(&(Global_2794162.f_4699), 5);
}}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
if(MISC::IS_BIT_SET(uParam1->f_33, 0)){
MISC::CLEAR_BIT(&(uParam1->f_33), false);
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_411(){
if(func_423()){
return 0;
}
if(func_254()){
return 0;
}
if(!func_421()){
return 0;
}
if(!func_225()){
return 0;
}
if(func_420(8, -1)){
return 0;
}
if(func_424()==2){
return 0;
}
if(Global_2794162.f_4649){
return 0;
}
if(func_184()){
return 0;
}elseif(!func_258(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0){
return 0;
}
if(((func_419(1) || func_417(1)) || Global_23251.f_124) || Global_23251){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(func_416() && Global_1970692==2){
return 0;
}
if(func_414(PLAYER::PLAYER_ID()) && !func_416()){
return 0;
}
if(Global_1935879){
return 0;
}
if(Global_1935884){
return 0;
}
if(func_413(0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 4)){
return 0;
}
if(Global_1648760){
return 0;
}
if((Global_1964804.f_718.f_5 || Global_1967630.f_718.f_5) || Global_1963832.f_718.f_5){
return 0;
}
if((Global_1971696.f_724.f_5 || Global_1971696.f_744.f_724.f_5) || Global_1971696.f_1497.f_724.f_5){
return 0;
}
if(Global_1978495.f_726.f_5){
return 0;
}
if(func_412(PLAYER::PLAYER_ID())){
return 0;
}
if((Global_1648802 || Global_1648803) || Global_1648804){
return 0;
}
return 1;
}

int func_412(int iParam0){
if(iParam0==func_5()){
return 0;
}
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_4, 6);
}


bool func_413(int iParam0){
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_48, iParam0);
}

int func_414(int iParam0){
if(func_16(iParam0, 0)){
return 1;
}
if(func_415()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_415(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


bool func_416(){
return (MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1970693, 0));
}

int func_417(bool bParam0){
if(PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_418(PLAYER::PLAYER_PED_ID())){
if(PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68)){
return 0;
}}}}
if(Global_23251.f_130){
return 0;
}
if(PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19))){
return 1;
}
if(MISC::IS_PC_VERSION()){
if(((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169)){
return 1;
}
if(!bParam0){
if(((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169)){
return 1;
}}}
return 0;
}

int func_418(int iParam0){
int iVar0;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(iParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
if(((iVar0==joaat("weapon_sniperrifle") || iVar0==joaat("weapon_heavysniper")) || iVar0==joaat("weapon_marksmanrifle")) || iVar0==joaat("weapon_heavysniper_mk2")){
return 1;
}}}
return 0;
}


bool func_419(bool bParam0){
if(bParam0){
return (Global_23251.f_4 && Global_23251.f_104==4);
}
return Global_23251.f_4;
}


bool func_420(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}

int func_421(){
if(func_422()){
return 1;
}
if(CAM::IS_SCREEN_FADED_OUT()){
return 0;
}
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()){
return 0;
}
if(MISC::IS_FRONTEND_FADING()){
return 0;
}
return 1;
}


bool func_422(){
return Global_1574604;
}


bool func_423(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}

int func_424(){
return Global_1654054.f_68;
}

int func_425(){
if(Global_1836372 > 16){
return 1;
}
return 0;
}


float func_426(){
float fVar0;
float fVar1;
float fVar2;
fVar2=0.6347182f;
fVar1=(1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
fVar0=(1f - (fVar1 - fVar2));
return fVar0;
}

int func_427(int iParam0){
switch (iParam0){
case 20:
case 21:
case 27:
case 28:
case 40:
return 1;
default:
}
return 0;
}

int func_428(){
if(func_433()){
return 1;
}
if(func_206(PLAYER::PLAYER_ID())){
return 0;
}
if(func_431()){
return 1;
}
if(func_252(PLAYER::PLAYER_ID())){
switch (func_192(PLAYER::PLAYER_ID())){
case 131:
case 132:
case 133:
case 136:
case 138:
case 139:
case 141:
case 144:
case 146:
return 1;
break;
case 140:
if(!func_429(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 129:
if(!func_429(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 174:
if(!func_429(PLAYER::PLAYER_ID())){
return 1;
}
break;
case 175:
return 1;
break;
}}
return 0;
}


bool func_429(int iParam0){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 4);
}

int func_430(int iParam0){
if(iParam0==28){
if((func_252(PLAYER::PLAYER_ID()) && !func_253(PLAYER::PLAYER_ID())) && !func_314(PLAYER::PLAYER_ID())){
return 1;
}}
if(iParam0==27){
if(func_235(PLAYER::PLAYER_ID(), 0) && func_253(PLAYER::PLAYER_ID())){
return 1;
}
if(func_237(PLAYER::PLAYER_ID())==3){
return 1;
}}
return 0;
}


bool func_431(){
return Global_1853861;
}


struct<4> func_432(){
struct<4> Var0;
switch (Local_94.f_27){
case joaat("rhino"):
StringCopy(&Var0, "UW_TMRHN", 16);
break;
case joaat("hydra"):
StringCopy(&Var0, "UW_TMHYD", 16);
break;
case joaat("savage"):
StringCopy(&Var0, "UW_TMSAV", 16);
break;
case joaat("valkyrie"):
StringCopy(&Var0, "UW_TMVALK", 16);
break;
case joaat("buzzard"):
StringCopy(&Var0, "UW_TMBUZ", 16);
break;
}
return Var0;
}

int func_433(){
if(func_434(PLAYER::PLAYER_ID())){
return Global_1581969;
}
return 0;
}

int func_434(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_16(iParam0, 0)){
return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
}}
return 0;
}


void func_435(){
struct<2> Var0;
bool bVar1;
var uVar2;
int iVar3;
if(func_16(PLAYER::PLAYER_ID(), 0)){
return;
}
switch (Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17){
case 0:
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1==0){
if(Local_94.f_241==0){
func_780();
}}
if(!MISC::IS_BIT_SET(uLocal_98, 22)){
if(Local_94.f_27==joaat("rhino") && Local_94.f_29==2){
func_749(Local_94.f_30[0 /*3*/], 1120403456);
MISC::SET_BIT(&uLocal_98, 22);
}elseif(!func_70(Local_94.f_30[0 /*3*/], 0f, 0f, 0f, 0)){
func_749(Local_94.f_30[0 /*3*/], 1120403456);
MISC::SET_BIT(&uLocal_98, 22);
}}
func_748();
func_742();
if(Local_94.f_241==0){
func_739(1);
}
func_738(0);
if(Local_94.f_241==0){
if(!Local_94.f_27==joaat("hydra") && !Local_94.f_27==joaat("rhino")){
func_201();
}elseif(func_775()){
func_201();
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(!MISC::IS_BIT_SET(uLocal_99, 1)){
func_737(129);
func_709(1);
MISC::SET_BIT(&uLocal_99, true);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
}
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6)){
if(Local_94.f_28 > 1 || (Local_94.f_28==1 && func_113() > 1)){
if(MISC::IS_BIT_SET(Local_94.f_3, 4)){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1=0;
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
}
}}}elseif(MISC::IS_BIT_SET(uLocal_99, 1)){
MISC::CLEAR_BIT(&uLocal_99, true);
func_708(1);
func_707();
func_709(0);
}}
if(Local_94.f_241==1){
func_706(&bVar1, &uVar2);
iLocal_555=bVar1;
func_705(0);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(!func_704()){
MISC::SET_BIT(&uLocal_99, 19);
}
if(func_280("UW_ABTSC") || func_280("UW_ABTS")){
func_9();
}
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
if((func_703("UW_MINV") || func_703("UW_TIMELA")) || func_703("UW_TIMEL")){
HUD::CLEAR_HELP(1);
}
func_197();
func_692(129, 0f, 0f, 1, 1, 1, 0);
func_681(1);
func_680();
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
iLocal_103=PLAYER::GET_MAX_WANTED_LEVEL();
PLAYER::SET_MAX_WANTED_LEVEL(0);
func_679(1);
func_678(1);
if(Local_94.f_27 !=joaat("rhino")){
func_658(1);
}
iLocal_109=PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_107);
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, 0);
func_657(0);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9=iLocal_555;
if(!func_775()){
func_656(63, "UW_TITLE", "UW_DESC", func_327(), -1, func_327(), 1, 0);
}elseif(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
func_656(63, "UW_TITLEC", "UW_DESCC", func_327(), -1, func_327(), 1, 0);
}else{
bVar1++;
StringCopy(&Var0, "UW_TM", 16);
StringIntConCat(&Var0, bVar1, 16);
func_655(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_327(), func_327(), 0);
}
Local_95.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
func_657(0);
func_653(3, 0, 1);
func_21(&uLocal_569, 0, 0);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=1;
}else{
func_197();
if(func_280("UW_ABTSC") || func_280("UW_ABTS")){
func_9();
}
if(func_650("UW_HELP1", func_652(), func_651(1)) || func_650("UW_HELP1C", func_652(), func_651(1))){
HUD::CLEAR_HELP(1);
}
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=2;
func_657(0);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1==0){
}elseif(!func_649()){
}}}elseif(Local_94.f_241==3){
func_657(0);
if(func_650("UW_HELP1", func_652(), func_651(1)) || func_650("UW_HELP1C", func_652(), func_651(1))){
HUD::CLEAR_HELP(1);
}
if(!func_648()){
}
if(func_280("UW_ABTSC") || func_280("UW_ABTS")){
func_9();
}
func_197();
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=3;
}elseif(Local_94.f_241 > 3){
if(func_280("UW_ABTSC") || func_280("UW_ABTS")){
func_9();
}
func_657(0);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=4;
}else{
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
func_647();
func_646();
if(func_123()){
func_680();
}}
if(func_775()){
if(func_640(2, 0, 1, 0, 0)){
if(func_280("UW_ABTSC") || func_280("UW_ABTS")){
func_9();
}
func_657(0);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=4;
}}elseif(Local_94.f_27==joaat("valkyrie")){
if(func_640(2, 0, 1, 0, 0)){
if(func_280("UW_ABTSC") || func_280("UW_ABTS")){
func_9();
}
func_657(0);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=4;
}}}
break;
case 1:
func_167(1);
func_742();
func_561();
func_171();
func_559();
func_547();
func_281(0);
func_543();
func_540();
func_647();
func_646();
if(!MISC::IS_BIT_SET(uLocal_98, 26)){
if(!func_539(55)){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11)){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10)){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10==-1){
if(!func_775()){
if(!func_280("UW_ATTK")){
func_274("UW_ATTK", 0);
}}elseif(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
if(!func_280("UW_ATTK")){
func_274("UW_ATTK", 0);
}}elseif(!func_280("UW_ATTK")){
func_706(&bVar1, &uVar2);
bVar1++;
StringCopy(&Var0, "UW_TM", 16);
StringIntConCat(&Var0, bVar1, 16);
func_274("UW_ATTK", 0);
}}elseif(func_280("UW_ATTK")){
func_9();
}
}}}}
func_538();
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10==-1){
func_680();
}}
if(!func_876(PLAYER::PLAYER_ID(), 1, 1)){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=2;
func_9();
MISC::SET_BIT(&uLocal_98, 21);
}elseif(func_184()){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=2;
func_9();
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17==1){
if(!func_537()){
MISC::SET_BIT(&uLocal_98, 23);
func_9();
if(iLocal_555 > -1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iLocal_555])){
func_26(&(Local_94.f_7[iLocal_555]));
}}
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=2;
}}
if(Local_94.f_241==3){
func_708(1);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=3;
}elseif(Local_94.f_241 > 3){
func_708(1);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=4;
}elseif(func_775()){
if(func_640(2, 0, 1, 0, 0)){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=4;
}}
break;
case 2:
if(Local_94.f_241==3){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=3;
}elseif(Local_94.f_241 > 3){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=4;
}
func_470();
if(func_648()){
if(func_192(PLAYER::PLAYER_ID())==129){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !HUD::IS_RADAR_HIDDEN()){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, 0);
if(MISC::IS_BIT_SET(uLocal_98, 22)){
func_469();
MISC::CLEAR_BIT(&uLocal_98, 22);
}
func_707();
func_466();
func_464(0);
func_462(0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, 1);
func_709(0);
func_708(1);
}
func_461();
}}elseif(!MISC::IS_BIT_SET(uLocal_99, 8)){
MISC::SET_BIT(&uLocal_99, 8);
}
if(!func_205()){
func_460();
func_559();
func_167(0);
func_547();
func_281(1);
func_543();
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
}}else{
func_459();
}
func_452();
func_451();
func_561();
if(!MISC::IS_BIT_SET(uLocal_99, 7)){
iVar3=0;
while (iVar3 < 24){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[iVar3])){
if(!func_32(Local_94.f_48[iVar3])){
PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_94.f_48[iVar3]), PLAYER::PLAYER_ID(), 0);
}}
iVar3++;
}
iVar3=0;
while (iVar3 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_80[iVar3])){
if(!func_32(Local_94.f_80[iVar3])){
PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_94.f_80[iVar3]), PLAYER::PLAYER_ID(), 0);
}}
iVar3++;
}
MISC::SET_BIT(&uLocal_99, 7);
}elseif(Local_94.f_247 !=iLocal_553){
iLocal_553=Local_94.f_247;
MISC::CLEAR_BIT(&uLocal_99, 7);
}
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11)){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
}
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10)){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
}
if(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID())==iLocal_107){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_109);
}
break;
case 3:
if(!MISC::IS_BIT_SET(uLocal_98, 31)){
if(MISC::IS_BIT_SET(Local_94.f_3, 12)){
func_197();
MISC::SET_BIT(&uLocal_98, 31);
}}
func_538();
func_446();
if(!func_205()){
if(!MISC::IS_BIT_SET(Local_94.f_3, 14) && !MISC::IS_BIT_SET(Local_94.f_3, 12)){
func_281(1);
}
func_547();
func_559();
func_543();
func_437();
}
func_470();
func_451();
func_561();
if(Local_94.f_241 > 3){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=4;
}
break;
case 4:
func_818();
break;
}
func_436();
}


void func_436(){
bool bVar0;
if(iLocal_580 !=Local_94.f_616){
bVar0=false;
while (bVar0 < 4){
if(MISC::IS_BIT_SET(Local_94.f_616, bVar0)){
if(!MISC::IS_BIT_SET(iLocal_580, bVar0)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[bVar0])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_7[bVar0])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 2);
func_26(&(Local_94.f_7[bVar0]));
MISC::SET_BIT(&iLocal_580, bVar0);
}}else{
MISC::SET_BIT(&iLocal_580, bVar0);
}}}
bVar0++;
}}}


void func_437(){
if(MISC::IS_BIT_SET(Local_94.f_3, 14)){
if(!MISC::IS_BIT_SET(uLocal_99, 5)){
if(func_440(0, 1, 1, 1)){
if(func_775()){
func_439("UW_TFEWC", 30000);
}else{
func_439("UW_TFEW", 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_99, 5);
}}}}


void func_438(int iParam0){
HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
if(iParam0 && !func_371()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
}}


void func_439(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_440(bool bParam0, bool bParam1, int iParam2, bool bParam3){
if(iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
return 0;
}
if(func_445()){
return 0;
}
if(!CAM::IS_SCREEN_FADED_IN()){
return 0;
}
if(func_423()){
return 0;
}
if(func_256()){
return 0;
}
if(bParam1){
if(func_258(PLAYER::PLAYER_ID(), 1, 0)){
return 0;
}}
if(bParam0){
if(func_444(PLAYER::PLAYER_ID())){
return 0;
}}
if(func_443()){
return 0;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(bParam3){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return 0;
}}
if(Global_1836370){
return 0;
}
if(func_442()){
return 0;
}
if(func_441()){
return 0;
}
if(func_184()){
return 0;
}
if(Global_75816){
return 0;
}
if(Global_2804769){
return 0;
}
if(func_216()){
return 0;
}
return 1;
}


bool func_441(){
return Global_2683883.f_691;
}


bool func_442(){
return Global_2683883.f_845;
}


bool func_443(){
return Global_2672524.f_2838.f_582;
}

int func_444(int iParam0){
if(Global_2657704[iParam0 /*463*/].f_218==0){
return 0;
}
return 1;
}

int func_445(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_446(){
bool bVar0;
bool bVar1;
int iVar2;
if(!func_280("UW_EXPL") && !func_280("UW_EXPLC")){
func_9();
}
iVar2=0;
while (iVar2 < 4){
if(!MISC::IS_BIT_SET(uLocal_98, (27 + iVar2))){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[iVar2])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_7[iVar2]), 0)){
MISC::SET_BIT(&uLocal_98, (27 + iVar2));
uLocal_556[iVar2]=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_556[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_94.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
AUDIO::SET_VARIABLE_ON_SOUND(uLocal_556[iVar2], "Time", 30f);
}}}
iVar2++;
}
if(!func_775()){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[0])){
if(!MISC::IS_BIT_SET(Local_94.f_319, 0)){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_7[0]), 0)){
if((func_450() - func_127(&(Local_94.f_324), 0, 0)) >=0){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0 || MISC::IS_BIT_SET(Local_94.f_3, 14)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[0]), 50f, 50f, 50f, 0, 1, 0)){
if(!func_205()){
func_449();
func_173((func_450() - func_127(&(Local_94.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
}}
}}else{
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0 || MISC::IS_BIT_SET(Local_94.f_3, 14)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[0]), 50f, 50f, 50f, 0, 1, 0)){
if(!func_205()){
func_449();
func_173(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
}}
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
func_708(1);
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_7[0])){
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_94.f_7[0]), 0);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_94.f_7[0]), true);
if(!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[0])))){
NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_94.f_7[0]), 1, 0, -1);
func_26(&(Local_94.f_7[0]));
}else{
NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_94.f_7[0]), 1, 0, 0);
func_26(&(Local_94.f_7[0]));
}
}}}}}
func_197();
if(!func_205()){
if(!MISC::IS_BIT_SET(uLocal_98, 12)){
if(func_110(Local_94.f_7[0])){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[0]))){
if(!func_775()){
if(!func_280("UW_EXPL")){
func_274("UW_EXPL", 0);
}}elseif(!func_280("UW_EXPLC")){
func_274("UW_EXPLC", 0);
}
MISC::SET_BIT(&uLocal_98, 12);
}}}}elseif(func_280("UW_EXPL") || func_280("UW_EXPLC")){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
func_9();
}}}}}else{
bVar0=false;
while (bVar0 < 4){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[bVar0])){
if(!MISC::IS_BIT_SET(Local_94.f_319, bVar0)){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0)){
if((func_450() - func_127(&(Local_94.f_324), 0, 0)) >=0){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0 || MISC::IS_BIT_SET(Local_94.f_3, 14)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 50f, 50f, 50f, 0, 1, 0)){
if(!func_205()){
if(!bVar1){
func_449();
func_173((func_450() - func_127(&(Local_94.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
bVar1=true;
}
}}}
}
else{
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0 || MISC::IS_BIT_SET(Local_94.f_3, 14)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 50f, 50f, 50f, 0, 1, 0)){
if(!func_205()){
if(!bVar1){
func_449();
func_173(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
bVar1=true;
}
}}}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
func_708(1);
}
if(func_447(Local_94.f_7[bVar0])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_7[bVar0])){
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), true);
if(!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0])))){
NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1, 0, -1);
func_26(&(Local_94.f_7[bVar0]));
}
else{
NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 1, 0, 0);
func_26(&(Local_94.f_7[bVar0]));
}}}
}}}
if(!MISC::IS_BIT_SET(uLocal_98, 12)){
if(func_110(Local_94.f_7[bVar0])){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]))){
if(!func_205()){
if(!func_775()){
if(!func_280("UW_EXPL")){
func_274("UW_EXPL", 0);
}
}
elseif(!func_280("UW_EXPLC")){
func_274("UW_EXPLC", 0);
}
MISC::SET_BIT(&uLocal_98, 12);
}}
}}}elseif(func_280("UW_EXPL") || func_280("UW_EXPLC")){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
func_9();
}}}}
bVar0++;
}}}

int func_447(var uParam0){
if(NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uParam0)){
return 1;
}
if(func_448(uParam0)){
return 1;
}
return 0;
}

int func_448(var uParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return 0;
}
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0)){
return 0;
}
if(func_80(uParam0)){
return 1;
}
return 0;
}


void func_449(){
Global_1655612.f_1173=1;
}

int func_450(){
if(func_775()){
return Global_262145.f_12022;
}
return Global_262145.f_11742;
}


void func_451(){
if(!MISC::IS_BIT_SET(uLocal_99, 4)){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_708(1);
MISC::SET_BIT(&uLocal_99, 4);
}}}}}


void func_452(){
int iVar0;
bool bVar1;
iVar0=PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_102);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1)){
if(bLocal_102 !=NETWORK::PARTICIPANT_ID_TO_INT()){
if(!MISC::IS_BIT_SET(uLocal_581, bLocal_102)){
if(!func_205()){
if(Local_97[bLocal_102 /*18*/].f_17==1){
MISC::SET_BIT(&uLocal_581, bLocal_102);
func_453(bVar1, 55, 1, 0);
}}}elseif(func_205()){
func_453(bVar1, 55, 0, 0);
MISC::CLEAR_BIT(&uLocal_581, bLocal_102);
}elseif(Local_97[bLocal_102 /*18*/].f_17 > 1){
MISC::CLEAR_BIT(&uLocal_581, bLocal_102);
func_453(bVar1, 55, 0, 0);
}}}}
bLocal_102++;
if(bLocal_102 >=NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
bLocal_102=false;
}}


void func_453(bool bParam0, int iParam1, bool bParam2, bool bParam3){
var uVar0;
if(func_455(bParam0)){
return;
}
if(func_454(&(Global_2646835.f_624[bParam0]), &(Global_2646835.f_987[bParam0]), &(Global_2646835.f_389), bParam2, bParam0, bParam3, &uVar0)){
if(bParam2){
Global_2646835.f_459[bParam0]=iParam1;
}}}

int func_454(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6){
if(bParam5){
if(!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){
*uParam1=SCRIPT::GET_ID_OF_THIS_THREAD();
*uParam0=SCRIPT::GET_ID_OF_THIS_THREAD();
}}
if(!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0==SCRIPT::GET_ID_OF_THIS_THREAD()){
if(bParam3){
if(!MISC::IS_BIT_SET(*uParam2, bParam4)){
*uParam6=1;
MISC::SET_BIT(uParam2, bParam4);
}
*uParam0=SCRIPT::GET_ID_OF_THIS_THREAD();
}else{
if(MISC::IS_BIT_SET(*uParam2, bParam4)){
*uParam6=1;
MISC::CLEAR_BIT(uParam2, bParam4);
}
if(*uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){
*uParam1=-1;
}
*uParam0=-1;
}
return 1;
}elseif(SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1==SCRIPT::GET_ID_OF_THIS_THREAD()){}
return 0;
}

int func_455(int iParam0){
if(iParam0==func_5()){
return 1;
}
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==func_456()){
return 1;
}
return 0;
}

int func_456(){
switch (func_458()){
case 0:
return func_457();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_457(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_458(){
return Global_32283;
}


void func_459(){
int iVar0;
iVar0=0;
while (iVar0 < 24){
if(HUD::DOES_BLIP_EXIST(Local_106[iVar0 /*8*/])){
HUD::REMOVE_BLIP(&(Local_106[iVar0 /*8*/]));
}
if(HUD::DOES_BLIP_EXIST(Local_106[iVar0 /*8*/].f_1)){
HUD::REMOVE_BLIP(&(Local_106[iVar0 /*8*/].f_1));
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[iVar0])){
if(!func_32(Local_94.f_48[iVar0])){
if(HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_94.f_48[iVar0]))){
func_93(&(Local_106[iVar0 /*8*/]));
}}}
iVar0++;
}}


void func_460(){
if(!MISC::IS_BIT_SET(uLocal_98, 11)){
if(!MISC::IS_BIT_SET(Local_94.f_3, 6)){
if(!MISC::IS_BIT_SET(uLocal_98, 13)){
if(func_192(PLAYER::PLAYER_ID()) !=129){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(!func_539(65) && !func_539(66)){
if(MISC::IS_BIT_SET(uLocal_99, 11)){
if(!MISC::IS_BIT_SET(uLocal_99, 12)){
if(func_440(0, 1, 1, 1)){
if(func_775()){
func_439("UW_HELIMC", -1);
}
else{
func_439("UW_HELIM", -1);
}
func_438(1);
MISC::SET_BIT(&uLocal_99, 12);
}}}elseif(!(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra"))){
if(func_440(0, 1, 1, 1)){
if(!func_775()){
func_439("UW_TAVAIL", 30000);
}
else{
func_439("UW_TAVAILC", 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_98, 11);
}}
}}}}}}}


void func_461(){
float fVar0;
if(iLocal_578 !=0){
return;
}
if(func_23(&uLocal_569)){
iLocal_578=func_127(&uLocal_569, 0, 0);
}
fVar0=to_float(iLocal_578);
fVar0=(fVar0 / 60000f);
iLocal_578=floor(fVar0);
if(iLocal_578 >=1){}else{
iLocal_578=1;
}
if(iLocal_578 > Global_262145.f_12082){
iLocal_578=Global_262145.f_12082;
}}


void func_462(bool bParam0){
int iVar0;
if(bParam0){
Global_100885.f_8=1;
}else{
Global_100885.f_8=0;
}
iVar0=0;
while (iVar0 < 61){
func_463(iVar0);
iVar0++;
}}


void func_463(int iParam0){
Global_100885.f_205[iParam0]=1;
Global_100885.f_204=1;
}


void func_464(int iParam0){
if(func_465() && iParam0){
return;
}
if(iParam0==Global_4593985){
return;
}
Global_4593985=iParam0;
Global_4593987=0;
Global_4593988=0;
}

int func_465(){
if((((Global_1057409 !=-1 && Global_1057409 !=33) && Global_1057409 !=35) && Global_1057409 !=37) && Global_1057409 !=21){
return 1;
}
return 0;
}


void func_466(){
PLAYER::SET_MAX_WANTED_LEVEL(5);
func_468();
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
MISC::CLEAR_BIT(&(Global_1836866.f_1), 8);
func_467();
}


void func_467(){
if(Global_1945796){
if(MISC::IS_BIT_SET(Global_1945797, 0)){
MISC::CLEAR_BIT(&Global_2803781, false);
}
if(MISC::IS_BIT_SET(Global_1945797, 1)){
MISC::CLEAR_BIT(&Global_2803781, true);
}
if(MISC::IS_BIT_SET(Global_1945797, 5)){
MISC::CLEAR_BIT(&Global_2803781, 5);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, 0, 0);
}
Global_1945797=0;
}
Global_1945796=0;
}


void func_468(){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2794162.f_5227)){
if(!Global_2794162.f_5227==SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2794162.f_5226 < 1f){
return;
}}
Global_2794162.f_5227=-1;
Global_2794162.f_5226=1f;
}


void func_469(){
Global_4593989={
0f, 0f, 0f 
};
Global_4593992=0;
Global_4593993=100f;
}


void func_470(){
bool bVar0;
bool bVar1;
bool bVar2;
bool bVar3;
int iVar4;
var uVar5;
var uVar6;
int iVar7;
if(MISC::IS_BIT_SET(uLocal_98, 13)){
return;
}
bVar0=MISC::IS_BIT_SET(Local_94.f_3, 6);
bVar1=MISC::IS_BIT_SET(uLocal_98, 21);
bVar2=MISC::IS_BIT_SET(uLocal_98, 23);
bVar3=Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 !=-1;
if(bVar3){
bVar1=false;
bVar2=false;
}
if(func_648()){
if(!MISC::IS_BIT_SET(uLocal_99, 17)){
if(func_876(PLAYER::PLAYER_ID(), 1, 1)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || bVar2){
if(!func_205()){
if(!func_775()){
if(bVar0){
func_656(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
}elseif(bVar1){
if(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra")){
func_656(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[0]) && func_110(Local_94.f_7[0])){
MISC::SET_BIT(&uLocal_99, 11);
MISC::SET_BIT(&uLocal_99, 16);
func_656(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1, 0);
}else{
func_656(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
}}elseif(bVar2){
func_656(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
}elseif(bVar3 || MISC::IS_BIT_SET(Local_94.f_3, 16)){
func_656(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
}
}
elseif(bVar0){
func_656(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
}
elseif(bVar1){
if(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra")){
if(func_536()){
MISC::SET_BIT(&uLocal_99, 11);
MISC::SET_BIT(&uLocal_99, 16);
func_656(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
}else{
func_656(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
}}elseif(func_536()){
MISC::SET_BIT(&uLocal_99, 11);
MISC::SET_BIT(&uLocal_99, 16);
func_656(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
}else{
func_656(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
}
}
elseif(bVar2){
if(func_536()){
MISC::SET_BIT(&uLocal_99, 11);
MISC::SET_BIT(&uLocal_99, 16);
func_656(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
}else{
func_656(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
}
}
elseif(bVar3 || MISC::IS_BIT_SET(Local_94.f_3, 16)){
func_656(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
}}
iVar4=func_535(1);
Local_95.f_6=(Local_95.f_6 + iVar4);
if(!Global_262145.f_12149){
if(Local_95.f_6 > 0){
func_533(19, Local_95.f_6);
}}
Global_2696952=iVar4;
if(iVar4 > 0){
if(func_532()){
func_520(210955503, iVar4, &uVar5, 0, 1, 0);
}
else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
}}
iVar7=func_519(1);
Local_95.f_7=(Local_95.f_7 + iVar7);
func_518();
func_471(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar7, 1, -1, 0, 0, 0);
Local_95.f_5=2;
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, 0);
if(!MISC::IS_BIT_SET(uLocal_99, 16)){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
}
MISC::SET_BIT(&uLocal_99, 17);
MISC::SET_BIT(&uLocal_99, 18);
}}}}}

int func_471(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_472(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_472(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
int iVar0;
int iVar1;
iVar0=func_482(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
iVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_478(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
}}}else{
func_473(iParam1, iVar0, sParam8, iParam10);
}
return iVar0;
}


void func_473(int iParam0, int iParam1, char* sParam2, int iParam3){
struct<3> Var0;
Var0={
func_476(iParam0, 1) 
};
if(iParam0==func_475(PLAYER::PLAYER_PED_ID())){
func_474(1);
}
func_478(Var0, iParam1, 0, sParam2, iParam3);
}


void func_474(int iParam0){
Global_2672524.f_1682=iParam0;
}

int func_475(int iParam0){
return iParam0;
}


Vector3 func__476(int iParam0, bool bParam1){
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
if(iParam0==func_477(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
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

int func_477(int iParam0){
return iParam0;
}


void func_478(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4){
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
Global_2672524.f_1081[iVar1 /*30*/].f_4=func_481(Global_2672524.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672524.f_1081[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672524.f_1081[iVar1 /*30*/].f_3=iParam1;
Global_2672524.f_1081[iVar1 /*30*/].f_8=iParam2;
Global_2672524.f_1081[iVar1 /*30*/].f_9=func_480();
Global_2672524.f_1081[iVar1 /*30*/].f_10=func_479();
StringCopy(&(Global_2672524.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
Global_2672524.f_1081[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
}}}

int func_479(){
if(Global_2672524.f_1682){
Global_2672524.f_1682=0;
return 1;
}
Global_2672524.f_1682=0;
return 0;
}


var func__480(){
var uVar0;
uVar0=Global_2672524.f_1684;
Global_2672524.f_1684=1;
return uVar0;
}


float func_481(struct<3> Param0, var uParam1, var uParam2){
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


var func__482(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_483(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_483(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_513();
if(func_176(uParam2)){}
if(func_512()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_510(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_509(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_507(0, &iVar1);
break;
case 3:
func_507(1, &iVar1);
break;
case 1:
func_502(&iVar1);
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
func_501(1165, iVar1, -1);
if(iParam1==0){
func_491((func_500(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 !=-1){
func_501(1166, iVar1, -1);
}
func_488(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_484((func_486(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_484((func_486(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_484(int iParam0){
if(func_512()){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5=iParam0;
func_485(joaat("mpply_globalxp"), iParam0);
}}


void func_485(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}}

int func_486(int iParam0){
if(iParam0 > -1){
if(func_876(iParam0, 0, 1)){
if(iParam0==PLAYER::PLAYER_ID()){
return func_487(joaat("mpply_globalxp"));
}else{
return Global_1853988[iParam0 /*867*/].f_205.f_5;
}}else{
return func_487(joaat("mpply_globalxp"));
}}
return 0;
}

int func_487(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_488(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_67(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_489(func_490(&Var0));
if(iVar1==0){
func_485(joaat("mpply_crew_local_xp_0"), (func_487(joaat("mpply_crew_local_xp_0")) + iParam0));
}elseif(iVar1==1){
func_485(joaat("mpply_crew_local_xp_1"), (func_487(joaat("mpply_crew_local_xp_1")) + iParam0));
}elseif(iVar1==2){
func_485(joaat("mpply_crew_local_xp_2"), (func_487(joaat("mpply_crew_local_xp_2")) + iParam0));
}elseif(iVar1==3){
func_485(joaat("mpply_crew_local_xp_3"), (func_487(joaat("mpply_crew_local_xp_3")) + iParam0));
}elseif(iVar1==4){
func_485(joaat("mpply_crew_local_xp_4"), (func_487(joaat("mpply_crew_local_xp_4")) + iParam0));
}}}}

int func_489(int iParam0){
if(iParam0==func_487(joaat("mpply_crew_0_id"))){
return 0;
}elseif(iParam0==func_487(joaat("mpply_crew_1_id"))){
return 1;
}elseif(iParam0==func_487(joaat("mpply_crew_2_id"))){
return 2;
}elseif(iParam0==func_487(joaat("mpply_crew_3_id"))){
return 3;
}elseif(iParam0==func_487(joaat("mpply_crew_4_id"))){
return 4;
}else{
return -1;
}
return -1;
}

int func_490(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694518;
}}
return Global_2694518;
}


void func_491(int iParam0, int iParam1, int iParam2){
if(func_512()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10242==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < func_262(640, -1)){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==func_262(640, -1)){
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
if(func_499(PLAYER::PLAYER_ID())){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1=iParam0;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6=func_496(iParam0, 1);
}
func_495(640, iParam0, -1, 1);
func_495(641, func_496(iParam0, 1), -1, 1);
func_492(-1109644434, 7, 0);
}}


void func_492(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_494(iParam1, iParam2)){
iVar0=func_493();
Global_2694470[iVar0]=iParam1;
Global_2694481[iVar0]=iParam0;
}}

int func_493(){
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

int func_494(int iParam0, var uParam1){
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


void func_495(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_263(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_496(int iParam0, bool bParam1){
if(bParam1){}
return func_497(iParam0, 0);
}

int func_497(int iParam0, int iParam1){
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
if(func_498(iVar3)==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(func_498(iVar3) < iParam0){
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

int func_498(int iParam0){
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

int func_499(int iParam0){
if(!func_19(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_2672524.f_1, iParam0);
}

int func_500(int iParam0){
if(Global_1574632.f_9==0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return func_262(640, -1);
}elseif(func_499(iParam0)){
return Global_1853988[iParam0 /*867*/].f_205.f_1;
}}}else{
return func_262(640, -1);
}
return 0;
}


void func_501(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_262(iParam0, func_250(iParam2));
iVar0=(iVar0 + iParam1);
func_495(iParam0, iVar0, iParam2, 1);
}


void func_502(int iParam0){
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
if(PLAYER::GET_PLAYER_TEAM(bVar5)==iVar1 || func_504(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1)){
iVar2++;
if(bVar5 !=PLAYER::PLAYER_ID()){
if(func_68(PLAYER::PLAYER_ID(), bVar5)){
bVar3=true;
}}}}}
bVar0++;
}
if(bVar3){
iVar6=round((func_503(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_503(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_503(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}

int func_504(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0)){
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

int func_505(int iParam0, bool bParam1, int iParam2, bool bParam3){
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
if(((!func_876(iVar1, 1, 1) || func_16(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_506(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
uVar2=PLAYER::GET_PLAYER_PED(bVar1);
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


var func__506(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}


void func_507(bool bParam0, int iParam1){
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
if(func_876(iVar4, 0, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_68(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
iVar4=iVar0;
if(func_876(iVar4, 1, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
if(func_508(PLAYER::PLAYER_ID(), iVar4) <=20f){
iVar1++;
if(func_68(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_503(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_503(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_508(int iParam0, int iParam1){
return vdist(func_60(iParam0), func_60(iParam1));
return 0f;
}

int func_509(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_503(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_510(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_500(PLAYER::PLAYER_ID())){
iParam0=-func_500(PLAYER::PLAYER_ID());
}}
if(func_511(8000, 0, 0) > 0){
if(func_511(8000, 0, 0) < (iParam0 + func_500(PLAYER::PLAYER_ID()))){
iParam0=(func_511(8000, 0, 0) - func_500(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_511(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return func_498(iParam0);
}

int func_512(){
return 1;
}

int func_513(){
int iVar0;
if(func_517(PLAYER::PLAYER_ID()) || func_516(PLAYER::PLAYER_ID())){
if(Global_262145.f_10274 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10274;
}}elseif(func_381() || func_514(PLAYER::PLAYER_ID())){
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

int func_514(int iParam0){
return func_515(func_351(iParam0));
}

int func_515(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}


bool func_516(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==2;
}


bool func_517(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==7;
}


void func_518(){
Global_2696289=1;
}

int func_519(bool bParam0){
int iVar0;
if(MISC::IS_BIT_SET(uLocal_99, 18)){
return 0;
}
if(!bParam0){
if(func_775()){
return Global_262145.f_11963;
}else{
return Global_262145.f_11902;
}}
func_461();
if(func_775()){
iVar0=(Global_262145.f_11963 * iLocal_578);
}else{
iVar0=(Global_262145.f_11902 * iLocal_578);
}
return iVar0;
}


void func_520(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_532()){
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
func_521(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_521(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_521(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_521(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_521(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_532()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_528(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_527(1, iParam4);
Global_4536677=0;
}
if(iParam7 & 4 !=0){
func_522(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_522(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_523(iParam0);
}}


void func_523(int iParam0){
bool bVar0;
bVar0=false;
if(!func_532()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_526(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_524(&(Global_4535172[iParam0 /*85*/]));
}}


void func_524(var uParam0){
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
func_525(&(uParam0->f_14));
func_525(&(uParam0->f_14.f_13));
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


void func_525(var uParam0){
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

int func_526(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_527(int iParam0, var uParam1){
Global_2697092=uParam1;
Global_2697091=iParam0;
}

int func_528(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_532()){
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
func_529(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_529(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_531(Var0.f_1);
if((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260){
return;
}
if(!iVar1==0){
func_530();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_530(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__531(bool bParam0){
var uVar0;
if(func_19(bParam0)){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_532(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_533(int iParam0, int iParam1){
if(iParam1 > 0){
if(Global_262145.f_24178 !=-1){
if(func_534()){
Global_2794162.f_283=iParam0;
if(iParam1 > Global_262145.f_7127){
iParam1=Global_262145.f_7127;
}
Global_2794162.f_284=iParam1;
Global_2794162.f_285=0;
}}}}

int func_534(){
if(MISC::IS_PC_VERSION() && Global_1984719==0){
return 0;
}
return 0;
}

int func_535(bool bParam0){
int iVar0;
if(MISC::IS_BIT_SET(uLocal_99, 18)){
return 0;
}
if(!bParam0){
if(func_775()){
return Global_262145.f_11962;
}else{
return Global_262145.f_11901;
}}
func_461();
if(func_775()){
iVar0=(Global_262145.f_11962 * iLocal_578);
}else{
iVar0=(Global_262145.f_11901 * iLocal_578);
}
return iVar0;
}

int func_536(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iLocal_555])){
if(func_110(Local_94.f_7[iLocal_555])){
bVar0=true;
}}
iVar1=0;
while (iVar1 < 4){
if(Local_94.f_256[iVar1] > 0){
iVar2++;
}
iVar1++;
}
iVar3=Local_94.f_256[iLocal_555];
if(!bVar0){
if(Local_94.f_594[0 /*4*/] !=iLocal_555){
return 0;
}elseif(iVar3 > 0){
return 1;
}else{
return 0;
}}elseif(Local_94.f_594[0 /*4*/]==iLocal_555){
return 1;
}else{
iVar4=Local_94.f_256[Local_94.f_594[0 /*4*/]];
iVar5=(iVar4 - iVar3);
iVar6=(Local_94.f_255 - iVar2);
if(iVar5 > iVar6){
return 0;
}else{
return 1;
}}
return 0;
}

int func_537(){
bool bVar0;
var uVar1;
func_706(&bVar0, &uVar1);
if(iLocal_555 > -1){
if(func_110(Local_94.f_7[iLocal_555])){
return 1;
}}
return 0;
}


void func_538(){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
int iVar4;
int iVar5;
if(Local_94.f_241==1){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10==-1){
if(!func_23(&uLocal_567) || (func_23(&uLocal_567) && func_20(&uLocal_567, 5000, 0))){
if(Local_94.f_27==joaat("savage") || Local_94.f_27==joaat("buzzard")){
iVar1=iLocal_555;
if(iVar1 > -1){
if(func_110(Local_94.f_7[iVar1])){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]), -1, 0);
if(iVar0==0){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10=iVar1;
}elseif(PED::IS_PED_INJURED(iVar0)){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10=iVar1;
}elseif(!PED::IS_PED_A_PLAYER(iVar0)){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10=iVar1;
}}
}}elseif(Local_94.f_27==joaat("valkyrie")){
iVar1=iLocal_555;
if(iVar1 > -1){
if(func_110(Local_94.f_7[iVar1])){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]), -1, 0);
if(iVar0==0){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10=iVar1;
}elseif(PED::IS_PED_INJURED(iVar0)){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10=iVar1;
}elseif(!PED::IS_PED_A_PLAYER(iVar0)){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10=iVar1;
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10==-1){
iVar4=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
bVar2=false;
while (bVar2 < iVar4){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]), bVar2, 0);
if(iVar0 !=0){
if(!PED::IS_PED_INJURED(iVar0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
iVar3++;
}}
}
bVar2++;
}
if(iVar3==0){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10=iVar1;
}}}
}}
func_107(&uLocal_567);
func_21(&uLocal_567, 0, 0);
}}}}
bVar2=false;
bVar2=false;
while (bVar2 < 4){
if(MISC::IS_BIT_SET(Local_94.f_319, bVar2)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[bVar2])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_7[bVar2]), 0)){
if((func_450() - func_127(&(Local_94.f_349[bVar2 /*2*/]), 0, 0)) >=0){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[bVar2]), 0)){
if(!func_205()){
func_449();
func_173((func_450() - func_127(&(Local_94.f_349[bVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
}}
}}else{
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[bVar2]), 0)){
if(!func_205()){
func_449();
func_173(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
}}
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_7[bVar2])){
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_94.f_7[bVar2]), 0);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_94.f_7[bVar2]), true);
if(!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[bVar2])))){
NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_94.f_7[bVar2]), 1, 0, -1);
func_26(&(Local_94.f_7[bVar2]));
}else{
NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_94.f_7[bVar2]), 1, 0, 0);
func_26(&(Local_94.f_7[bVar2]));
}
}}}}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10==bVar2){
if(!MISC::IS_BIT_SET(uLocal_99, 6)){
if(func_440(0, 1, 1, 1)){
if(func_775()){
if(!MISC::IS_BIT_SET(uLocal_99, 19)){
func_439("UW_NOPILC", 30000);
}else{
func_439("UW_NOGUN", 30000);
}
}
else{
func_439("UW_NOPIL", 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_99, 6);
}elseif(MISC::IS_BIT_SET(uLocal_99, 19)){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar5=Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar5])){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[iVar5]))){
if(!func_775()){
if(!func_280("UW_EXPL")){
func_274("UW_EXPL", 0);
}}elseif(!func_280("UW_EXPLC")){
func_274("UW_EXPLC", 0);
}
}
elseif(func_280("UW_EXPL") || func_280("UW_EXPLC")){
func_9();
}}elseif(func_280("UW_EXPL") || func_280("UW_EXPLC")){
func_9();
}}}}
bVar2++;
}}


bool func_539(int iParam0){
return Global_2672524.f_2514[0 /*80*/].f_1==iParam0;
}


void func_540(){
float fVar0;
int iVar1;
var uVar2;
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(Local_94.f_27==joaat("rhino")){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11)){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10)){
if(!func_23(&uLocal_563) || (func_23(&uLocal_563) && func_20(&uLocal_563, 5000, 0))){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_70(Local_579, 0f, 0f, 0f, 0)){
Local_579={
Local_94.f_30[0 /*3*/] 
};
}
fVar0=func_542(PLAYER::PLAYER_PED_ID(), Local_579, 1);
if(fVar0 > 750f){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
}
}
func_107(&uLocal_563);
func_21(&uLocal_563, 0, 0);
}}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_280("UW_OOB")){
func_274("UW_OOB", 0);
}
if(!func_23(&uLocal_565)){
uVar2=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(uVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_94.f_7[func_541()]), "GTAO_FM_Events_Soundset", 0, 0);
AUDIO::SET_VARIABLE_ON_SOUND(uVar2, "Time", 30f);
func_21(&uLocal_565, 0, 0);
}
if(func_23(&uLocal_565)){
if((func_450() - func_127(&uLocal_565, 0, 0)) >=0){
func_449();
func_173((func_450() - func_127(&uLocal_565, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
}
else{
func_449();
func_173(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
func_9();
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
}}
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11)){
fVar0=func_542(PLAYER::PLAYER_PED_ID(), Local_94.f_30[0 /*3*/], 1);
if(fVar0 < 750f){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
func_107(&uLocal_565);
AUDIO::STOP_SOUND(uVar2);
}}}}}}
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11)){
func_708(1);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar1=func_541();
if(iVar1 > -1){
if(func_110(Local_94.f_7[iVar1])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_7[iVar1])){
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]), 0);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]), true);
NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]), 1, 0, -1);
func_26(&(Local_94.f_7[iVar1]));
}}}}}}

int func_541(){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < 4){
if(iVar0==-1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar1])){
if(func_110(Local_94.f_7[iVar1])){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[iVar1]))){
iVar0=iVar1;
}}}}}
iVar1++;
}
return iVar0;
}


float func_542(int iParam0, struct<3> Param1, int iParam2){
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


void func_543(){
var uVar0;
bool bVar1;
bVar1=-1;
if(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
return;
}
if(!MISC::IS_BIT_SET(uLocal_98, 24)){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17==1){
func_706(&bVar1, &uVar0);
if(func_546(bVar1)){
if(bVar1 > -1){
if(Local_94.f_22[bVar1] !=func_5()){
fLocal_104=NETWORK::NETWORK_GET_TALKER_PROXIMITY();
NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
func_545(1, bVar1);
MISC::SET_BIT(&uLocal_98, 24);
func_544(1);
}}}else{
MISC::SET_BIT(&uLocal_98, 24);
MISC::SET_BIT(&uLocal_98, 25);
}}}
if(!MISC::IS_BIT_SET(uLocal_98, 25)){
if(MISC::IS_BIT_SET(uLocal_98, 24)){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1){
NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_104);
func_706(&bVar1, &uVar0);
if(bVar1 > -1){
func_545(0, bVar1);
MISC::SET_BIT(&uLocal_98, 25);
func_544(0);
}}}}}


void func_544(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 15);
}else{
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
}}


void func_545(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=0;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
if(func_876(iVar1, 0, 1) && iVar1 !=PLAYER::PLAYER_ID()){
if(MISC::IS_BIT_SET(Local_97[bVar0 /*18*/].f_1, bParam1) || !bParam0){
NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 1);
}elseif(bParam0){
NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 0);
}}}
bVar0++;
}}


bool func_546(bool bParam0){
bool bVar0;
int iVar1;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(!bVar0){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(bVar1 !=NETWORK::PARTICIPANT_ID_TO_INT()){
if(MISC::IS_BIT_SET(Local_97[bVar1 /*18*/].f_1, bParam0)){
bVar0=true;
}}}}
bVar1++;
}
return bVar0;
}


void func_547(){
int iVar0;
int iVar1;
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
return;
}
if(!MISC::IS_BIT_SET(uLocal_98, 15)){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17==2){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1==0){
if(Local_94.f_22[0] !=func_5()){
if(func_440(0, 0, 1, 1)){
if(!func_775()){
if(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra")){
if(!func_775()){
func_558("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_94.f_22[0]), 1, 30000);
}else{
func_558("UW_START1PC", PLAYER::GET_PLAYER_NAME(Local_94.f_22[0]), 1, 30000);
}
func_438(1);
}elseif(MISC::IS_BIT_SET(Local_94.f_15, 0)){
if(!MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 14)){
if(!func_775()){
func_439("UW_STARTM", 30000);
}
else{
func_439("UW_STARTMC", 30000);
}
func_438(1);
}}else{
func_558("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_94.f_22[0]), 1, 30000);
func_438(1);
}
}
elseif(!MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 14)){
if(!func_775()){
func_439("UW_STARTM", 30000);
}else{
func_439("UW_STARTMC", 30000);
}
func_438(1);
}
MISC::SET_BIT(&uLocal_98, 15);
}}}}}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17==2){
if(Local_94.f_241==1){
if(Local_94.f_27 !=joaat("hydra") && Local_94.f_27 !=joaat("rhino")){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(iLocal_555 >=0){
if(!MISC::IS_BIT_SET(uLocal_99, 10)){
if(!MISC::IS_BIT_SET(uLocal_99, 9)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iLocal_555])){
if(func_110(Local_94.f_7[iLocal_555])){
MISC::SET_BIT(&uLocal_99, 9);
}}}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iLocal_555])){
if(!func_110(Local_94.f_7[iLocal_555])){
func_557("UW_TEAMV", 0);
MISC::SET_BIT(&uLocal_99, 10);
}}
}}}}}}
iVar1=0;
if(!func_775()){
iVar1=0;
while (iVar1 < 4){
if(!MISC::IS_BIT_SET(Local_94.f_3, 6)){
if(!MISC::IS_BIT_SET(uLocal_98, (16 + iVar1))){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >=2){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1==0){
if((MISC::IS_BIT_SET(Local_94.f_3, 0) && MISC::IS_BIT_SET(Local_94.f_3, 1)) && MISC::IS_BIT_SET(Local_94.f_3, 2)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[0])){
if(func_110(Local_94.f_7[0])){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[0]), -1, 0) !=0){
iVar0=func_556(iVar1, 0);
if(iVar0 !=func_5()){
func_548("UW_COMP", iVar0, 1, 0, 0, 0, 1, 0);
}
MISC::SET_BIT(&uLocal_98, (16 + iVar1));
}
}}}
}}}}
iVar1++;
}}}

int func_548(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7){
int iVar0;
struct<16> Var1;
int iVar2;
int iVar3;
iVar0=-1;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam4){
if(!bParam3){
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}else{
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_554(&Var1));
if(!bParam5){
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}else{
Global_2764376={
func_67(bParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376)){
iVar2=0;
if(MISC::ARE_STRINGS_EQUAL(&(Global_2764306.f_22), "Leader") && Global_2764306.f_30==0){
iVar2=1;
}
if(Global_2764306.f_21 > 0){
iVar3=0;
}else{
iVar3=1;
}
if(bParam6){
if(bParam7){
Var1={
func_553(&Var1) 
};
}
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, iVar2, 0, Global_2764306, &Var1, Global_1576220, Global_1576221, Global_1576222);
}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, iVar2, 0, Global_2764306, Global_1576220, Global_1576221, Global_1576222);
}}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}
func_549(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_549(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_552() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_16(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_550(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944768.f_5[iVar0 /*53*/]=iParam0;
Global_1944768.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944768.f_5[iVar0 /*53*/].f_2[0]=iParam4;
Global_1944768.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944768.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944768.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944768.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_550(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944768 - 1)){
if(iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1){
func_551(iVar0);
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


void func_551(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944768.f_5[iVar0 /*53*/]={
Global_1944768.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_552(){
return DLC::IS_DLC_PRESENT(-1762644250);
}
struct<16> func_553(char* sParam0){
struct<16> Var0;
StringCopy(&Var0, "<C>", 64);
StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
StringConCat(&Var0, sParam0, 64);
StringConCat(&Var0, "</C>", 64);
return Var0;
}


var func__554(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_555(&cVar0);
}


var func__555(char[4] cParam0){
return cParam0;
}

int func_556(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_5();
iVar2=(iParam0 - 1);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[iParam1])){
if(func_110(Local_94.f_7[iParam1])){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[iParam1]), iVar2, 0);
if(iVar1 !=0){
if(PED::IS_PED_A_PLAYER(iVar1)){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
}}}}
return iVar0;
}

int func_557(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_549(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_558(char* sParam0, char* sParam1, int iParam2, int iParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
if(!iParam2==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}


void func_559(){
if(!MISC::IS_BIT_SET(uLocal_98, 9)){
if(Local_94.f_241==1){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC")){
MISC::SET_BIT(&uLocal_98, 9);
}}}}
if(!MISC::IS_BIT_SET(uLocal_98, 10)){
if(MISC::IS_BIT_SET(uLocal_98, 9)){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL")){
MISC::SET_BIT(&uLocal_98, 10);
}}elseif(AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC")){
MISC::SET_BIT(&uLocal_98, 10);
func_560();
}}}}}}


void func_560(){
if(MISC::IS_BIT_SET(Global_2794162.f_5068, 1)){
MISC::CLEAR_BIT(&(Global_2794162.f_5068), true);
}
if(Global_2794162.f_5068 > 0){
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
Global_2794162.f_5068=0;
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
if(!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu")){
if(Global_2794162.f_5078 > -1){
AUDIO::RELEASE_SOUND_ID(Global_2794162.f_5078);
Global_2794162.f_5078=-1;
}}}}


void func_561(){
struct<2> Var0;
struct<2> Var1;
int iVar2;
int iVar3[2];
int iVar4;
int iVar5;
int iVar6[4];
int iVar7;
int iVar8;
bool bVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
var uVar15;
var uVar16;
var uVar17;
var uVar18;
var uVar19;
var uVar20;
var uVar21;
var uVar22;
var uVar23;
var uVar24;
bool bVar25;
int iVar26;
char* sVar27;
var uVar28;
var uVar29;
var uVar30;
var uVar31;
var uVar32;
iVar8=1;
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8)){
if(!MISC::IS_BIT_SET(uLocal_98, 26)){
if((((MISC::IS_BIT_SET(Local_94.f_3, 0) && MISC::IS_BIT_SET(Local_94.f_3, 1)) && MISC::IS_BIT_SET(Local_94.f_3, 2)) || (func_775() && MISC::IS_BIT_SET(Local_94.f_3, 6))) || (func_775() && MISC::IS_BIT_SET(Local_94.f_3, 15))){
if(!func_23(&uLocal_574)){
func_21(&uLocal_574, 0, 0);
}
if(func_20(&uLocal_574, 1000, 0)){
if(func_280("UW_ATTK")){
func_9();
}
func_639();
if(func_638()){
iVar13=func_535(1);
if(iVar13 > 0){
Local_95.f_6=(Local_95.f_6 + iVar13);
if((!Global_262145.f_12149 && !MISC::IS_BIT_SET(Local_94.f_3, 8)) || (!Global_262145.f_12150 && MISC::IS_BIT_SET(Local_94.f_3, 8))){
if(Local_95.f_6 > 0){
func_533(19, Local_95.f_6);
}}
Global_2696952=iVar13;
if(func_532()){
func_520(210955503, iVar13, &uVar15, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar16);
}}
iVar11=func_519(1);
func_518();
Local_95.f_7=(Local_95.f_7 + iVar11);
func_471(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
Local_95.f_5=2;
func_656(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1, 0);
}
elseif(!func_775()){
iVar13=func_651(0);
func_626(&iVar13, 1);
iVar13=(iVar13 + func_535(1));
if(iVar13 > 0){
Local_95.f_6=(Local_95.f_6 + iVar13);
if(!Global_262145.f_12149){
if(Local_95.f_6 > 0){
func_533(19, Local_95.f_6);
}}
Global_2696952=iVar13;
if(func_532()){
func_520(210955503, iVar13, &uVar17, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar18);
}}
iVar11=func_519(1);
iVar11=(iVar11 + func_625());
Local_95.f_7=(Local_95.f_7 + iVar11);
func_518();
func_471(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
Local_95.f_5=1;
func_655(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
}
elseif(func_624()){
if(!func_623(1)){
if(!func_280("UW_EXPL") && !func_280("UW_EXPLC")){
func_9();
}
iVar13=func_651(0);
func_626(&iVar13, 1);
iVar13=(iVar13 + func_535(1));
Local_95.f_6=(Local_95.f_6 + iVar13);
if(!Global_262145.f_12150){
if(Local_95.f_6 > 0){
func_533(19, Local_95.f_6);
}}
Global_2696952=iVar13;
if(iVar13 > 0){
if(func_532()){
func_520(210955503, iVar13, &uVar19, 0, 1, 0);
}
else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar20);
}}
if(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra")){
func_655(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
}else{
func_655(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
}
Local_95.f_5=1;
iVar11=func_625();
iVar11=(iVar11 + func_519(1));
Local_95.f_7=(Local_95.f_7 + iVar11);
func_518();
func_471(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
}else{
iVar13=func_535(1);
iVar11=func_519(1);
iVar8=0;
iVar10=0;
while (iVar10 <=3){
if(Local_94.f_465[iVar10 /*4*/].f_1==Local_94.f_465[0 /*4*/].f_1){
iVar8++;
iVar6[iVar10]=-1;
if(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
if(Local_94.f_465[iVar10 /*4*/].f_2 > -1){
if(Local_94.f_465[iVar10 /*4*/].f_2 !=PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_94.f_465[iVar10 /*4*/].f_2))){
iVar3[iVar4]=PLAYER::INT_TO_PLAYERINDEX(Local_94.f_465[iVar10 /*4*/].f_2);
iVar4++;
}}}
}
elseif(iLocal_555 > -1){
if(iLocal_555 !=Local_94.f_465[iVar10 /*4*/]){
iVar6[iVar7]=Local_94.f_465[iVar10 /*4*/];
iVar7++;
}
}
}
iVar10++;
}
if(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
if(iVar8 > 2){
bVar9=true;
}
elseif(iVar3[0]==func_5()){
bVar9=true;
}
else{
func_622(68, "UW_DRAWP", PLAYER::GET_PLAYER_NAME(iVar3[0]), 1, 15000, "UW_BIGO", 2);
}}elseif(iVar8 > 2){
bVar9=true;
}elseif(iVar6[0]==-1){
}else{
StringCopy(&Var0, "UW_TM", 16);
StringIntConCat(&Var0, iVar6[0] + 1, 16);
func_655(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2, 0);
}
if(bVar9){
if(!func_775()){
func_656(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
}
else{
func_656(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1, 0);
}}
iVar14=round((to_float(func_651(0)) / to_float(iVar8)));
iVar12=round((to_float(func_625()) / to_float(iVar8)));
func_626(&iVar14, 1);
iVar13=(iVar13 + iVar14);
iVar11=(iVar11 + iVar12);
Local_95.f_6=(Local_95.f_6 + iVar13);
if(!Global_262145.f_12150){
if(Local_95.f_6 > 0){
func_533(19, Local_95.f_6);
}}
Global_2696952=iVar13;
if(iVar13 > 0){
if(func_532()){
func_520(210955503, iVar13, &uVar21, 0, 1, 0);
}
else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar22);
}}
Local_95.f_7=(Local_95.f_7 + iVar11);
func_518();
func_471(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
}
}
else{
func_620(1);
iVar13=func_535(1);
iVar11=func_519(1);
Local_95.f_6=(Local_95.f_6 + iVar13);
if(!Global_262145.f_12150){
if(Local_95.f_6 > 0){
func_533(19, Local_95.f_6);
}}
Global_2696952=iVar13;
if(iVar13 > 0){
if(func_532()){
func_520(210955503, iVar13, &uVar23, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar24);
}}
Local_95.f_7=(Local_95.f_7 + iVar11);
func_518();
func_471(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
if(!func_623(0)){
iVar5=Local_94.f_465[0 /*4*/];
if(!func_280("UW_EXPL") && !func_280("UW_EXPLC")){
func_9();
}
if(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
iVar2=PLAYER::INT_TO_PLAYERINDEX(Local_94.f_465[0 /*4*/].f_2);
if(func_322(iVar2, 1)){
iVar26=func_326(iVar2);
if(iVar26 > -1){
uVar28=func_324(iVar26);
sVar27=func_614(iVar2);
bVar25=true;
}
}
if(iVar2 !=func_5()){
if(!bVar25){
if(!func_775()){
func_622(65, "UW_FWONP", PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF", 2);
}else{
func_622(65, "UW_FWONPC", PLAYER::GET_PLAYER_NAME(bVar2), 6, 15000, "UW_BIGF", 2);
}
}
elseif(!func_775()){
func_612(66, "PEN_OVR", "UW_FWONG", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
}
else{
func_612(66, "PEN_OVR", "UW_FWONGC", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
}
}}else{
StringCopy(&Var0, "UW_TM", 16);
StringIntConCat(&Var0, iVar5 + 1, 16);
if(!func_775()){
func_655(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
}
else{
func_655(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
}}}else{
if(!func_280("UW_EXPL") && !func_280("UW_EXPLC")){
func_9();
}
iVar10=1;
while (iVar10 <=3){
if(Local_94.f_465[iVar10 /*4*/].f_1==Local_94.f_465[0 /*4*/].f_1){
iVar8++;
if(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
if(Local_94.f_465[iVar10 /*4*/].f_2 > -1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_94.f_465[iVar10 /*4*/].f_2))){
iVar3[iVar4]=PLAYER::INT_TO_PLAYERINDEX(Local_94.f_465[iVar10 /*4*/].f_2);
iVar4++;
}}
}
elseif(iLocal_555 > -1){
if(iLocal_555 !=Local_94.f_465[iVar10 /*4*/]){
iVar6[iVar7]=Local_94.f_465[iVar10 /*4*/];
iVar7++;
}
}
}
iVar10++;
}
if(Local_94.f_27==joaat("hydra") || Local_94.f_27==joaat("rhino")){
if(iVar8==2){
if(iVar3[0] !=func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[0])){
if(iVar3[1] !=func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[1])){
func_567(68, func_5(), func_5(), -1, "UW_DRAW2P", "UW_BIGF", func_327(), 15000, func_327(), PLAYER::GET_PLAYER_NAME(iVar3[0]), PLAYER::GET_PLAYER_NAME(iVar3[1]), 0);
}else{
bVar9=true;
}
}
else{
bVar9=true;
}
}
else{
bVar9=true;
}}elseif(iVar8==2){
StringCopy(&Var0, "UW_TM", 16);
StringIntConCat(&Var0, iVar6[0] + 1, 16);
StringCopy(&Var1, "UW_TM", 16);
StringIntConCat(&Var1, iVar6[1] + 1, 16);
func_655(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var1, 1, 2, 0);
bVar9=true;
}else{
bVar9=true;
}
if(bVar9){
func_656(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
}}
}
func_678(0);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=2;
}
MISC::SET_BIT(&uLocal_98, 13);
MISC::SET_BIT(&uLocal_98, 26);
}}elseif(MISC::IS_BIT_SET(Local_94.f_3, 6) || (!func_775() && MISC::IS_BIT_SET(Local_94.f_3, 15))){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 !=-1){
func_656(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
}else{
func_655(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
}
func_678(0);
MISC::SET_BIT(&uLocal_98, 26);
iVar13=func_535(1);
Local_95.f_6=(Local_95.f_6 + iVar13);
if(!Global_262145.f_12149){
if(Local_95.f_6 > 0){
func_533(19, Local_95.f_6);
}}
Global_2696952=iVar13;
if(iVar13 > 0){
if(func_532()){
func_520(210955503, iVar13, &uVar29, 0, 1, 0);
}
else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar30);
}}
iVar11=func_519(1);
Local_95.f_7=(Local_95.f_7 + iVar11);
func_518();
func_471(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
Local_95.f_5=2;
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=2;
}}elseif(MISC::IS_BIT_SET(Local_94.f_3, 14)){
func_678(0);
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=3;
}}elseif(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11)){
func_655(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
func_678(0);
MISC::SET_BIT(&uLocal_98, 26);
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
iVar13=func_535(1);
Local_95.f_6=(Local_95.f_6 + iVar13);
if(!Global_262145.f_12149){
if(Local_95.f_6 > 0){
func_533(19, Local_95.f_6);
}}
Global_2696952=iVar13;
if(iVar13 > 0){
if(func_532()){
func_520(210955503, iVar13, &uVar31, 0, 1, 0);
}
else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar32);
}}
iVar11=func_519(1);
Local_95.f_7=(Local_95.f_7 + iVar11);
func_518();
func_471(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
Local_95.f_5=2;
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17=2;
}}elseif(MISC::IS_BIT_SET(Local_94.f_3, 12)){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
}}
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8)){
if(MISC::IS_BIT_SET(uLocal_98, 26)){
if(func_280("UW_ATTK")){
func_9();
}
if(func_562(&uLocal_546, 1)){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
}
if(!func_280("UW_EXPL") && !func_280("UW_EXPLC")){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_110(Local_94.f_7[Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))){
}
}}}
}}}}}}elseif(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8)){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
}}

int func_562(var uParam0, bool bParam1){
bool bVar0;
if((((*uParam0 > 0 && !func_371()) && !(func_235(PLAYER::PLAYER_ID(), 0) && (func_240(PLAYER::PLAYER_ID()) || func_238(PLAYER::PLAYER_ID())))) && !func_566(PLAYER::PLAYER_ID())) && !func_215(PLAYER::PLAYER_ID())){
func_565();
}
switch (*uParam0){
case 0:
if(!func_23(&(uParam0->f_3))){
func_21(&(uParam0->f_3), 0, 0);
}elseif(func_20(&(uParam0->f_3), 1000, 0)){
MISC::SET_BIT(&(Global_1836866.f_1), 25);
if(bParam1){
MISC::SET_BIT(&(Global_2794162.f_4694), false);
func_21(&(uParam0->f_5), 0, 0);
}
func_21(&(uParam0->f_1), 0, 0);
func_564(uParam0, 1);
}
break;
case 1:
if(func_23(&(uParam0->f_5))){
if(func_20(&(uParam0->f_5), 3000, 0)){
bVar0=true;
}}else{
bVar0=true;
}
if(bVar0){
func_563();
func_564(uParam0, 2);
}
break;
case 2:
func_563();
if(func_20(&(uParam0->f_1), 15000, 0)){
if(func_703("AMEV_LBD_HELP")){
HUD::CLEAR_HELP(1);
}
func_564(uParam0, 3);
}
break;
case 3:
if(func_20(&(uParam0->f_1), 23500, 0)){
MISC::CLEAR_BIT(&(Global_2794162.f_4694), true);
func_564(uParam0, 4);
return 1;
}
break;
case 4:
MISC::CLEAR_BIT(&(Global_2794162.f_4694), true);
return 1;
}
return 0;
}


void func_563(){
if(MISC::IS_BIT_SET(Global_2794162.f_4694, 0)){
if(((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2794162.f_853, 2)) && func_876(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75816) && !Global_60666) && !CAM::IS_SCREEN_FADED_OUT()){
MISC::SET_BIT(&(Global_2794162.f_4694), true);
func_439("AMEV_LBD_HELP", -1);
func_438(1);
MISC::CLEAR_BIT(&(Global_2794162.f_4694), false);
}}}


void func_564(var uParam0, int iParam1){
*uParam0=iParam1;
}


void func_565(){
Global_2696290=1;
}

int func_566(int iParam0){
int iVar0;
if(iParam0 !=func_5()){
if(func_876(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
iVar0=func_196(Global_2657704[iParam0 /*463*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_567(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_611(iParam0, &Var0, iParam3, sParam4, sParam5);
Var0.f_17=iParam1;
Var0.f_18=iParam2;
Var0.f_71=iParam6;
Var0.f_6=iParam7;
Var0.f_72=iParam8;
StringCopy(&(Var0.f_25), sParam9, 64);
StringCopy(&(Var0.f_41), sParam10, 64);
StringCopy(&(Var0.f_57), sParam11, 16);
return func_568(&Var0);
}

int func_568(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672524.f_2836){
return 0;
}}
func_579(uParam0, uParam0->f_17);
func_578(uParam0);
if(func_62()){
func_578(uParam0);
}
if(func_577(uParam0->f_1)){
func_570();
if(Global_2672524.f_2514[0 /*80*/].f_2==0){
Global_2672524.f_2514[0 /*80*/]={
*uParam0 
};
if(func_569(uParam0->f_69, 8192)){
Global_1935885=1;
}
return 1;
}
if(((Global_2672524.f_2514[0 /*80*/].f_1==13 || Global_2672524.f_2514[0 /*80*/].f_1==53) || Global_2672524.f_2514[0 /*80*/].f_1==54) || Global_2672524.f_2514[0 /*80*/].f_1==58){
Global_2672524.f_2514[0 /*80*/].f_2=5;
}
iVar0=2;
while (iVar0 >=1){
Global_2672524.f_2514[iVar0 + 1 /*80*/]={
Global_2672524.f_2514[iVar0 /*80*/] 
};
iVar0=(iVar0 + -1);
}
Global_2672524.f_2514[1 /*80*/]={
*uParam0 
};
return 1;
}
iVar0=0;
while (iVar0 < 4){
if(Global_2672524.f_2514[iVar0 /*80*/].f_2==0){
Global_2672524.f_2514[iVar0 /*80*/]={
*uParam0 
};
if(iVar0==0){
func_570();
}
return 1;
}else{
if(uParam0->f_1==1){
func_369(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_569(uParam0->f_69, 128)){
if(func_374(Global_2672524.f_2514[iVar0 /*80*/].f_1)){
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
func_369(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}


bool func_569(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_570(){
bool bVar0;
if(Global_2672524.f_2837){
return;
}
if(!Global_78958){
Global_78958=1;
bVar0=true;
}elseif(Global_78959){
Global_78959=0;
bVar0=true;
}
func_571();
if(bVar0){
Global_78958=0;
}}


void func_571(){
Global_2672524.f_2838=0;
Global_2672524.f_2838.f_582=0;
func_575(&(Global_2672524.f_2838.f_1));
Global_2672524.f_2838.f_1.f_1=0;
func_572(&(Global_2672524.f_2838.f_1), 1);
}


void func_572(var uParam0, int iParam1){
if(uParam0->f_1 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
uParam0->f_1=0;
}
if((uParam0->f_566 || iParam1) && uParam0->f_4 !=0){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
uParam0->f_4=0;
}
if(uParam0->f_568){
SCRIPT::SET_NO_LOADING_SCREEN(0);
uParam0->f_568=0;
}
if(!Global_78958){
if(!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX())){
if(!Global_78960){
if(CAM::IS_SCREEN_FADED_OUT() && !func_574(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_573(0);
}


void func_573(int iParam0){
Global_78950=iParam0;
Global_78951=iParam0;
}

int func_574(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_575(var uParam0){
func_576(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_576(var uParam0){
uParam0->f_547=1f;
uParam0->f_546=0;
uParam0->f_572=0f;
uParam0->f_562=0;
uParam0->f_30=0f;
uParam0->f_548=0f;
uParam0->f_563=0f;
uParam0->f_564=0f;
uParam0->f_545=0;
uParam0->f_567=0;
uParam0->f_576=0;
uParam0->f_568=0;
uParam0->f_569=0;
uParam0->f_570=0;
*uParam0=0.1125f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_578=0;
uParam0->f_579=0;
uParam0->f_577=1f;
}

int func_577(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_578(var uParam0){
if(func_376(uParam0->f_1)){
uParam0->f_72=func_327();
}}


void func_579(var uParam0, int iParam1){
if(func_376(uParam0->f_1)){
uParam0->f_73=1;
}
if(iParam1==func_5() || !func_876(iParam1, 0, 1)){
return;
}
if(func_374(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_580(iParam1, -2, 0, 0, 0);
}}}

int func_580(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(!func_19(iParam0)){
return 1;
}
if(func_414(iParam0) && !bParam4){
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
if(((func_414(PLAYER::PLAYER_ID()) || (func_610() && func_609())) && !MISC::IS_BIT_SET(Global_2794162.f_4697, 31)) && !bParam4){
uVar1=func_608();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_876(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_606(iParam1, bParam0, 0);
}else{
return func_592(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_592(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_606(iParam1, bParam0, 0);
}else{
return func_581(0, -1, 0);
}}else{
return func_581(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_606(iParam1, bParam0, 0);
}else{
return func_592(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_592(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_581(bool bParam0, int iParam1, bool bParam2){
return func_582(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_582(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_591() || (func_590() && func_588())) && Global_1665516.f_1){
if(bParam1){
return func_587(iParam2, iVar0);
}else{
return func_587(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_504(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_586(1);
}else{
return func_586(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_583(iVar0, iParam2, 1, 4);
}else{
return func_583(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_586(1);
}
return func_586(0);
}

int func_583(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_585(iParam0, iParam1, iParam3);
if(func_584(Global_4718592.f_117591, 1)){
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

int func_584(int iParam0, bool bParam1){
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

int func_585(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_504(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_586(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_587(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_585(iParam1, iParam0, 4);
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

int func_588(){
if(func_589()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_175236, 4);
}


bool func_589(){
return MISC::IS_BIT_SET(Global_4718592.f_164769, 12);
}


bool func_590(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_175236, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_591(){
if(func_589() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_592(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
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
iVar2=bParam0;
if(iVar2 > -1){
if(Global_1853988[iVar2 /*867*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_595()){
iVar3=func_326(bParam0);
if(!iVar3==-1){
return func_324(iVar3);
}}
if((func_594(iParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_504(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_586(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_593(1);
}else{
return func_582(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836600 || Global_1836590) || Global_1853988[bParam0 /*867*/]==0){
if(bParam0==bParam1 || (Global_1836600==1 && Global_1836610==0)){
return func_586(1);
}else{
return func_582(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836594 && Global_1836080.f_14==bParam0){
return 28;
}}
iVar4=func_326(bParam0);
if(!iVar4==-1){
return func_324(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_593(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_594(bool bParam0, bool bParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(iParam1)==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(bParam1);
}else{
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && iParam2==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}

int func_595(){
if(((((((func_306() || func_605()) || func_62()) || func_604()) || func_603()) || func_601()) || func_599()) || func_596()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_596(){
return func_597(Global_4718592.f_117591);
}

int func_597(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_598(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_598(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33923[iParam0];
}
return -1;
}

int func_599(){
return func_600(Global_4718592.f_117591);
}

int func_600(int iParam0){
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

int func_601(){
return func_602(Global_4718592.f_117591);
}

int func_602(int iParam0){
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


var func__603(){
return Global_2683883.f_24;
}


bool func_604(){
return Global_2683883.f_21;
}


var func__605(){
return Global_2683883.f_18;
}

int func_606(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058071.f_14[iParam0];
if(func_595()){
iVar2=func_326(iParam1);
if(!iVar2==-1){
return func_324(iVar2);
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
iVar0=func_582(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_607(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_504(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_593(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_607(int iParam0){
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


var func__608(){
return Global_2621446.f_2;
}


var func__609(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__610(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}


void func_611(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_5();
uParam1->f_18=func_5();
uParam1->f_19=func_5();
uParam1->f_20=func_5();
uParam1->f_1=uParam0;
uParam1->f_2=1;
StringCopy(&(uParam1->f_21), sParam4, 16);
StringCopy(&(uParam1->f_8), sParam3, 32);
uParam1->f_16=1;
uParam1->f_3=iParam2;
uParam1->f_71=1;
uParam1->f_74=1;
uParam1->f_75=1;
uParam1->f_76=0;
uParam1->f_77=0;
uParam1->f_73=0;
StringCopy(&(uParam1->f_25), "", 64);
StringCopy(&(uParam1->f_41), "", 64);
}

int func_612(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_5();
iVar1=func_5();
iVar2=func_5();
return func_613(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_613(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_611(uParam0, &Var0, iParam9, sParam2, sParam1);
Var0.f_4=uParam10;
Var0.f_5=uParam11;
Var0.f_17=iParam5;
Var0.f_18=iParam6;
Var0.f_19=iParam7;
StringCopy(&(Var0.f_25), sParam3, 64);
StringCopy(&(Var0.f_57), sParam8, 16);
Var0.f_73=uParam4;
Var0.f_71=uParam4;
Var0.f_6=uParam13;
Var0.f_72=uParam12;
if(iParam14 !=2){
Var0.f_71=iParam14;
}
func_369(&(Var0.f_69), 4);
return func_568(&Var0);
}


char* func_614(int iParam0){
var uVar0;
int iVar1;
if(!func_19(iParam0)){
uVar0=func_618(iParam0, 0);
return uVar0;
}
if(iParam0==PLAYER::PLAYER_ID()){
uVar0=func_617(&(Global_1895156[iParam0 /*609*/].f_10.f_105));
return uVar0;
}
if(Global_1895156[iParam0 /*609*/].f_10.f_121 !=Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121){
uVar0=func_618(iParam0, 0);
return uVar0;
}
if(((func_239(iParam0, 28) || func_239(PLAYER::PLAYER_ID(), 28)) || func_616(iParam0)) && !func_615(iParam0)){
return func_618(iParam0, 0);
}
iVar1=func_66(iParam0);
if(iVar1 !=func_5()){
if(iVar1 !=PLAYER::PLAYER_ID()){
if(!func_345() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return func_618(iVar1, 0);
}}}
if(iVar1 !=func_5()){
uVar0=func_617(&(Global_1895156[iVar1 /*609*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(uVar0)){
return func_618(iVar1, 0);
}else{
return sVar0;
}}
return "";
}

int func_615(int iParam0){
struct<13> Var0;
Var0={
func_67(iParam0) 
};
if(func_345()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 1;
}}}
return 0;
}

int func_616(int iParam0){
struct<13> Var0;
if(iParam0 !=func_5()){
Var0={
func_67(iParam0) 
};
if((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return 0;
}}elseif(func_345() || MISC::IS_PROSPERO_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 0;
}}}}
return 1;
}


var func__617(var uParam0){
return uParam0;
}


char* func_618(int iParam0, bool bParam1){
if(!bParam1){
if(func_310(iParam0, 1)){
return func_619();
}}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}


char* func_619(){
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}


void func_620(bool bParam0){
if(bParam0){
if(func_621(1)){
MISC::SET_BIT(&Global_1836891, true);
}}elseif(func_621(2)){
MISC::SET_BIT(&Global_1836891, 2);
}}

int func_621(int iParam0){
var uVar0;
uVar0=func_262(2537, -1);
if(iParam0==0){
if((MISC::IS_BIT_SET(uVar0, 0) && MISC::IS_BIT_SET(uVar0, 1)) && MISC::IS_BIT_SET(uVar0, 2)){
return 0;
}}elseif(iParam0==1){
if((MISC::IS_BIT_SET(uVar0, 3) && MISC::IS_BIT_SET(uVar0, 4)) && MISC::IS_BIT_SET(uVar0, 5)){
return 0;
}}elseif(iParam0==2){
if((MISC::IS_BIT_SET(uVar0, 6) && MISC::IS_BIT_SET(uVar0, 7)) && MISC::IS_BIT_SET(uVar0, 8)){
return 0;
}}elseif(iParam0==3){
if((MISC::IS_BIT_SET(uVar0, 9) && MISC::IS_BIT_SET(uVar0, 10)) && MISC::IS_BIT_SET(uVar0, 11)){
return 0;
}}
return 1;
}

int func_622(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_611(iParam0, &Var0, -1, sParam1, sParam5);
StringCopy(&(Var0.f_25), sParam2, 64);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam6;
return func_568(&Var0);
}

int func_623(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
if(bParam0){
func_706(&iVar1, &iVar2);
iVar0=0;
while (iVar0 < 4){
if(iVar0 !=iVar1){
if(Local_94.f_256[iVar0]==iVar2){
return 1;
}}
iVar0++;
}}elseif(Local_94.f_27==joaat("rhino") || Local_94.f_27==joaat("hydra")){
return Local_94.f_465[0 /*4*/].f_1==Local_94.f_465[1 /*4*/].f_1;
}else{
return Local_94.f_594[0 /*4*/].f_1==Local_94.f_594[1 /*4*/].f_1;
}
return 0;
}

int func_624(){
int iVar0;
int iVar1;
int iVar2;
func_706(&iVar1, &iVar2);
iVar0=0;
while (iVar0 < 4){
if(iVar0 !=iVar1){
if(Local_94.f_256[iVar0] > iVar2){
return 0;
}}
iVar0++;
}
return 1;
}

int func_625(){
if(!func_775()){
return round((to_float(Global_262145.f_11898) * Global_262145.f_12088));
}
if((MISC::IS_BIT_SET(Local_94.f_3, 0) && MISC::IS_BIT_SET(Local_94.f_3, 1)) && MISC::IS_BIT_SET(Local_94.f_3, 2)){
return round((to_float(Global_262145.f_11959) * Global_262145.f_12090));
}
if(MISC::IS_BIT_SET(Local_94.f_3, 6)){
return round((to_float(Global_262145.f_11959) * Global_262145.f_12090));
}
return 0;
}


void func_626(int iParam0, int iParam1){
int iVar0;
if(*iParam0 > 0){
if(!func_637()){
if(func_636(0)){
if(!func_391(0)){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_635())){
if(func_634()==100){
iVar0=*iParam0;
*iParam0=0;
}
else{
iVar0=((*iParam0 / 100) * func_634());
*iParam0=(*iParam0 - iVar0);
}
func_632(&iVar0, 0);
if(iParam1==1){
func_631("GB_BCUT_TICK1", func_635(), iVar0, 0, 0, 1);
}
func_630(20);
func_627(func_635(), iVar0, 1);
}}}}}}


void func_627(bool bParam0, int iParam1, int iParam2){
struct<8> Var0;
if(func_876(bParam0, 0, 1)){
Var0.f_0=-1141119736;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam2;
Var0.f_5=func_629(bParam0);
func_628(&(Var0.f_6), &(Var0.f_7));
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_531(bParam0));
}}


void func_628(var uParam0, var uParam1){
*uParam0=Global_1924276.f_9;
*uParam1=Global_1924276.f_10;
}


var func__629(int iParam0){
return Global_1895156[iParam0 /*609*/].f_511;
}


void func_630(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), bVar1);
}

int func_631(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
struct<8> Var1;
iVar0=-1;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5){
if(!bParam4){
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}else{
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_580(bParam1, -2, 1, 0, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_554(&Var1));
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_549(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_632(int iParam0, bool bParam1){
int iVar0;
int iVar1;
if(bParam1){
iVar1=func_633(1);
}else{
iVar1=func_633(0);
}
iVar0=((*iParam0 / 100) * iVar1);
*iParam0=(*iParam0 - iVar0);
}

int func_633(bool bParam0){
if(bParam0){
return round((0.05f * 100f));
}
return Global_262145.f_13038;
}

int func_634(){
return Global_262145.f_13037;
}


bool func_635(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}


bool func_636(bool bParam0){
return func_322(PLAYER::PLAYER_ID(), bParam0);
}


bool func_637(){
return func_358(PLAYER::PLAYER_ID());
}

int func_638(){
int iVar0;
if(!MISC::IS_BIT_SET(Local_94.f_3, 6) && !MISC::IS_BIT_SET(Local_94.f_3, 15)){
return 0;
}
iVar0=0;
while (iVar0 < 4){
if(Local_94.f_256[iVar0] > 0){
return 0;
}
iVar0++;
}
return 1;
}


void func_639(){
int iVar0;
iVar0=0;
while (iVar0 < 5){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_73[iVar0])){
if(!func_110(Local_94.f_73[iVar0])){
func_26(&(Local_94.f_73[iVar0]));
}}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 24){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[iVar0])){
if(func_32(Local_94.f_48[iVar0])){
func_26(&(Local_94.f_48[iVar0]));
}}
iVar0++;
}}

int func_640(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4){
if(func_235(PLAYER::PLAYER_ID(), 0) || func_352(PLAYER::PLAYER_ID(), 0)){
if(func_240(PLAYER::PLAYER_ID()) || func_253(PLAYER::PLAYER_ID())){
bParam2=false;
}}
if(NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0){
if(bParam2){
func_645(sParam3, sParam4, 1);
}
if(func_644(26, -1)){
func_642(26, -1);
}
return 1;
}
if(func_23(&(Global_1836866.f_18))){
if(!func_20(&(Global_1836866.f_18), 7500, 0)){
return 0;
}
func_107(&(Global_1836866.f_18));
}
if(func_641()){
if(bParam2){
func_645(sParam3, sParam4, 0);
}
if(func_644(26, -1)){
func_642(26, -1);
}
return 1;
}
if(iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0){
if(bParam2){
func_645(sParam3, sParam4, 1);
}
if(func_644(26, -1)){
func_642(26, -1);
}
return 1;
}
return 0;
}


bool func_641(){
return MISC::IS_BIT_SET(Global_1836866.f_1, 0);
}


void func_642(bool bParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam1==-1){
iParam1=func_18();
}
switch (bParam0){
case 0:
STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
break;
default:
uVar1=func_643(iParam1);
iVar0=MISC::GET_PROFILE_SETTING(uVar1);
if(MISC::IS_BIT_SET(iVar0, bParam0)){
MISC::CLEAR_BIT(&iVar0, bParam0);
STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
}
break;
}}

int func_643(int iParam0){
int iVar0;
if(iParam0==-1){
iParam0=func_18();
}
switch (iParam0){
case 0:
iVar0=909;
break;
case 1:
iVar0=910;
break;
case 2:
iVar0=911;
break;
case 3:
iVar0=912;
break;
case 4:
iVar0=913;
break;
}
return iVar0;
}


bool func_644(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam1==-1){
iParam1=func_18();
}
uVar0=func_643(iParam1);
uVar1=MISC::GET_PROFILE_SETTING(uVar0);
return MISC::IS_BIT_SET(uVar1, iParam0);
}


void func_645(char* sParam0, char* sParam1, bool bParam2){
if((!MISC::IS_BIT_SET(Global_1836866.f_1, 2) && !func_207(PLAYER::PLAYER_ID())) && !func_206(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
sParam0="FMEVEN_NUM1";
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
if(bParam2){
sParam1="FMEVEN_NUM2";
}else{
sParam1="FMEVEN_NUM3";
}}
func_656(66, sParam0, sParam1, 1, -1, 2, 1, 0);
MISC::SET_BIT(&(Global_1836866.f_1), 2);
}}


void func_646(){
Global_2794162.f_1893.f_56=1;
}


void func_647(){
Global_2794162.f_1893.f_54=1;
}


bool func_648(){
return MISC::IS_BIT_SET(Global_2794162.f_1834, 11);
}

int func_649(){
if(iLocal_555 > -1){
if(func_110(Local_94.f_7[iLocal_555])){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[iLocal_555]))){
return 1;
}}}
return 0;
}


var func__650(char* sParam0, char* sParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_651(bool bParam0){
if(!func_775()){
return round((to_float(Global_262145.f_11897) * Global_262145.f_12087));
}
if(bParam0){
return round((to_float(Global_262145.f_11958) * Global_262145.f_12089));
}
if((MISC::IS_BIT_SET(Local_94.f_3, 0) && MISC::IS_BIT_SET(Local_94.f_3, 1)) && MISC::IS_BIT_SET(Local_94.f_3, 2)){
return round((to_float(Global_262145.f_11958) * Global_262145.f_12089));
}
if(MISC::IS_BIT_SET(Local_94.f_3, 6)){
return round((to_float(Global_262145.f_11958) * Global_262145.f_12089));
}
return 0;
}


char* func_652(){
if(Local_94.f_27==joaat("rhino")){
return "ABLIP_TANK";
}elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(Local_94.f_27)){
return "ABLIP_PLANE";
}
return "ABLIP_HELI";
}


void func_653(int iParam0, int iParam1, bool bParam2){
if(func_251()){
if(iParam1==1){
if(Global_2794162.f_4499==-1){
Global_2794162.f_4499=Global_262145.f_27370;
}
func_8(&(Global_2794162.f_4497), 0, 0);
if(bParam2){
if(Global_2794162.f_4502==-1){
Global_2794162.f_4502=Global_262145.f_27371;
}
func_8(&(Global_2794162.f_4500), 0, 0);
}else{
Global_1574582=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=0;
func_708(1);
}}else{
Global_1574582=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=0;
func_708(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_654()) && !func_257(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}


bool func_654(){
return Global_2683883.f_841;
}

int func_655(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_611(iParam0, &Var0, iParam5, sParam2, sParam3);
StringCopy(&(Var0.f_57), sParam1, 16);
StringCopy(&(Var0.f_61), sParam7, 16);
Var0.f_6=iParam4;
Var0.f_7=iParam6;
Var0.f_71=iParam8;
Var0.f_72=iParam9;
if(iParam10 !=0){
func_369(&(Var0.f_69), iParam10);
}
return func_568(&Var0);
}

int func_656(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_611(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_369(&(Var0.f_69), iParam7);
}
return func_568(&Var0);
}


void func_657(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
}else{
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
}}


void func_658(bool bParam0){
int iVar0;
if(PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) !=0){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
func_676(PLAYER::PLAYER_ID(), func_262(586, -1), 0);
if(func_675(3610, -1)){
}
iVar0=func_262(2042, -1);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_674(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
if(func_636(0)){
func_676(PLAYER::PLAYER_ID(), func_262(586, -1), 0);
}else{
func_676(PLAYER::PLAYER_ID(), func_673(Global_2804094), 0);
}
func_671(PLAYER::PLAYER_ID(), iVar0);
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_664(PLAYER::PLAYER_PED_ID(), iVar0), func_663(PLAYER::PLAYER_PED_ID(), iVar0), 0);
func_662(func_262(2042, -1), 1);
Global_2794162.f_287=1;
func_659(PLAYER::PLAYER_ID(), -1, -1);
if(bParam0){
}}}


void func_659(bool bParam0, int iParam1, int iParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_661();
if(iParam2==-1){
iParam2=func_262(2042, -1);
}
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_664(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_663(PLAYER::GET_PLAYER_PED(bParam0), iParam2), 0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(bParam0, func_674(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(bParam0), 5, func_664(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_663(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_674(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
if(iParam1==-1){
iParam1=func_262(586, -1);
}
if(func_636(1) && func_660(bParam0)){
func_676(bParam0, func_673(Global_2804094), 0);
}else{
func_676(bParam0, iParam1, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_28, 4)){
func_676(bParam0, Global_1836628, 1);
}
func_671(bParam0, iParam2);
PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(bParam0), 177, 1);
}}


var func__660(int iParam0){
return func_239(iParam0, 10);
}


void func_661(){
Global_78661=0;
Global_78662=-1;
Global_78663=-1;
Global_78664=-1;
Global_78665=-1;
Global_78669=-1;
}


void func_662(int iParam0, int iParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_661();
func_495(2042, iParam0, -1, 1);
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_664(PLAYER::PLAYER_PED_ID(), iParam0), func_663(PLAYER::PLAYER_PED_ID(), iParam0), 0);
func_671(PLAYER::PLAYER_ID(), iParam0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_674(PLAYER::PLAYER_PED_ID(), iParam0));
if((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) !=0){
func_659(PLAYER::PLAYER_ID(), -1, -1);
}}}

int func_663(int iParam0, int iParam1){
switch (iParam1){
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
return 9;
break;
case 11:
return 10;
break;
case 12:
return 11;
break;
case 13:
return 12;
break;
case 14:
return 13;
break;
case 15:
return 14;
break;
case 16:
return 15;
break;
case 17:
return 16;
break;
case 18:
return 17;
break;
case 19:
return 18;
break;
case 20:
return 19;
break;
case 21:
return 20;
break;
case 22:
return 21;
break;
case 23:
return 22;
break;
case 24:
return 23;
break;
case 25:
return 24;
break;
case 26:
return 25;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 2;
break;
case 30:
return 3;
break;
case 31:
return 4;
break;
case 32:
return 5;
break;
case 33:
return 6;
break;
case 34:
return 7;
break;
case 35:
return 8;
break;
case 36:
return 9;
break;
case 37:
return 10;
break;
case 38:
return 11;
break;
case 39:
return 12;
break;
case 40:
return 13;
break;
case 41:
return 14;
break;
case 42:
return 15;
break;
case 43:
return 16;
break;
case 44:
return 17;
break;
case 45:
return 18;
break;
case 46:
return 19;
break;
case 47:
return 0;
break;
case 48:
return 1;
break;
case 49:
return 2;
break;
case 50:
return 3;
break;
case 51:
return 4;
break;
case 52:
return 0;
break;
case 53:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 2;
break;
case 56:
return 3;
break;
case 57:
return 4;
break;
case 58:
return 5;
break;
case 59:
return 6;
break;
case 60:
return 7;
break;
case 61:
return 8;
break;
case 62:
return 0;
break;
case 63:
return 1;
break;
case 64:
return 0;
break;
case 65:
return 1;
break;
case 66:
return 2;
break;
case 67:
return 0;
break;
}
return 0;
}


var func__664(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
bVar3=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=false;
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
iVar5=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
iVar6=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
if(((((((bVar3 !=Global_78661 || iParam1 !=Global_78662) || iVar4 !=Global_78663) || iVar5 !=Global_78664) || iVar6 !=Global_78665) || iVar0 !=Global_78666) || iVar1 !=Global_78667) || iVar2 !=Global_78668){
Global_78661=bVar3;
Global_78662=iParam1;
Global_78663=iVar4;
Global_78664=iVar5;
Global_78665=iVar6;
Global_78666=iVar0;
Global_78667=iVar1;
Global_78668=iVar2;
Global_78669=func_665(iParam0, iParam1);
}
return Global_78669;
}

int func_665(int iParam0, int iParam1){
int iVar0;
bool bVar1;
int iVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=0){
bVar1=true;
}
iVar2=ENTITY::GET_ENTITY_MODEL(iParam0);
uVar3=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uVar3, joaat("over_jacket"), 8)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_670(iParam0, iParam1, 1);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)){
return func_670(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_670(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_670(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_670(iParam0, iParam1, 10);
}}else{
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8)){
return func_670(iParam0, iParam1, 6);
}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_670(iParam0, iParam1, 7);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_670(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_670(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_670(iParam0, iParam1, 10);
}}
return func_670(iParam0, iParam1, 9);
}
if(func_669(iParam0)){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}
if(iVar0 > 15){
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0)){
return func_670(iParam0, iParam1, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0)){
return func_670(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0)){
return func_670(iParam0, iParam1, 2);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0)){
return func_670(iParam0, iParam1, 3);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0)){
return func_670(iParam0, iParam1, 4);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0)){
return func_670(iParam0, iParam1, 5);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0)){
return func_670(iParam0, iParam1, 6);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0)){
return func_670(iParam0, iParam1, 7);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0)){
return func_670(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0)){
return func_670(iParam0, iParam1, 9);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0)){
return func_670(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hipster_dress"), 0)){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -405912369, 0)){
return func_670(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)){
if(bVar1){
return func_670(iParam0, iParam1, 5);
}else{
return func_670(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
return func_670(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_gear"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hooded_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
return func_670(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
return func_670(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
return func_670(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
return func_670(iParam0, iParam1, 10);
}elseif(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
iVar5=func_668(iVar4, 0);
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar5){
case 0:
return func_670(iParam0, iParam1, 1);
break;
case 2:
return func_670(iParam0, iParam1, 8);
break;
default:
iVar0=func_667(iVar4);
break;
}}else{
switch (iVar5){
case 2:
return func_670(iParam0, iParam1, 6);
break;
default:
iVar0=func_667(iVar4);
break;
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_gear"), 0)){
iVar6=func_666(iVar4, 0);
switch (iVar6){
case 4:
return func_670(iParam0, iParam1, 7);
break;
case 5:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 7);
}
break;
case 6:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 7);
}
break;
case 7:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 7);
}
break;
case 11:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 7);
}
break;
case 12:
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}
break;
case 13:
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 9);
}
break;
case 14:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 9);
}
break;
default:
iVar0=func_667(iVar4);
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 2);
}}elseif(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}elseif(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 1);
}elseif(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 8);
}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_3"), 0)){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 2);
}}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 1);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_sweat"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_sweat"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 5);
}}elseif(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 8);
}elseif(bVar1){
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}elseif(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 6);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_7"), 0)){
if(iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 1);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 5);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 2);
}}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -872449705, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 144417099, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 2);
}}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}else{
return func_670(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 6);
}}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 2);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_22"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 2);
}}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}elseif(bVar1){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}elseif(bVar1){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}elseif(bVar1){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_13"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_16"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_27"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_28"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_23"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smug_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
iVar0=7;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("assault_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 0);
}else{
return func_670(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 3);
}else{
return func_670(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 9);
}else{
return func_670(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 10);
}else{
return func_670(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("vest_shirt"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tails_jacket"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 7);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)){
return func_670(iParam0, iParam1, 6);
}else{
iVar7=iVar0;
iVar0=func_667(iVar4);
}}
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar0){
case 0:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 2:
if(bVar1){
return func_670(iParam0, iParam1, 6);
}else{
return func_670(iParam0, iParam1, 6);
}
break;
case 3:
if(bVar1){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 2);
}
break;
case 4:
if(bVar1){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 2);
}
break;
case 5:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 1);
}
break;
case 7:
if(bVar1){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 2);
}
break;
case 8:
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 9:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 10:
if(bVar1){
return func_670(iParam0, iParam1, 2);
}else{
return func_670(iParam0, iParam1, 2);
}
break;
case 11:
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 1);
}
break;
case 12:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_670(iParam0, iParam1, 6);
}else{
return func_670(iParam0, iParam1, 1);
}
break;
case 14:
if(bVar1){
return func_670(iParam0, iParam1, 5);
}else{
return func_670(iParam0, iParam1, 5);
}
break;
case 15:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 4);
}
break;
}}else{
switch (iVar0){
case 0:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_670(iParam0, iParam1, 6);
}else{
return func_670(iParam0, iParam1, 6);
}
break;
case 2:
if(bVar1){
return func_670(iParam0, iParam1, 3);
}else{
return func_670(iParam0, iParam1, 2);
}
break;
case 3:
if(bVar1){
return func_670(iParam0, iParam1, 5);
}else{
return func_670(iParam0, iParam1, 4);
}
break;
case 4:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 5:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_670(iParam0, iParam1, 6);
}else{
return func_670(iParam0, iParam1, 6);
}
break;
case 7:
if(bVar1){
return func_670(iParam0, iParam1, 6);
}else{
return func_670(iParam0, iParam1, 6);
}
break;
case 8:
if(bVar1){
return func_670(iParam0, iParam1, 6);
}else{
return func_670(iParam0, iParam1, 6);
}
break;
case 9:
return func_670(iParam0, iParam1, 1);
break;
case 10:
if(bVar1){
return func_670(iParam0, iParam1, 6);
}else{
return func_670(iParam0, iParam1, 6);
}
break;
case 11:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 12:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
case 14:
if(bVar1){
return func_670(iParam0, iParam1, 7);
}else{
return func_670(iParam0, iParam1, 3);
}
break;
case 15:
if(bVar1){
return func_670(iParam0, iParam1, 1);
}else{
return func_670(iParam0, iParam1, 0);
}
break;
}}
return func_670(iParam0, iParam1, 0);
return 0;
}

int func_666(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_3"), iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_4"), iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_5"), iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_6"), iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_7"), iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_8"), iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_9"), iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_11"), iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_12"), iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_13"), iParam1)){
iVar0=13;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_14"), iParam1)){
iVar0=14;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_15"), iParam1)){
iVar0=15;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_16"), iParam1)){
iVar0=16;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_17"), iParam1)){
iVar0=17;
}
return iVar0;
}

int func_667(int iParam0){
int iVar0;
iVar0=-1;
if(iParam0==0){
return iVar0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_0"), 0)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_1"), 0)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_2"), 0)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_3"), 0)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_4"), 0)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_5"), 0)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_6"), 0)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_7"), 0)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_8"), 0)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_9"), 0)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_10"), 0)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_11"), 0)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_12"), 0)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_13"), 0)){
iVar0=13;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_14"), 0)){
iVar0=14;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_15"), 0)){
iVar0=15;
}
return iVar0;
}

int func_668(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uParam0, joaat("luxe_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_3"), iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_4"), iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_5"), iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_6"), iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_7"), iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_8"), iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_9"), iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_11"), iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1)){
iVar0=13;
}
return iVar0;
}

int func_669(int iParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("dungarees"))){
return 1;
}
return 0;
}

int func_670(int iParam0, int iParam1, int iParam2){
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 3;
break;
case 3:
return 4;
break;
case 4:
return 5;
break;
case 5:
return 6;
break;
case 6:
return 7;
break;
case 7:
return 8;
break;
case 8:
return 19;
break;
case 9:
return 48;
break;
case 10:
return 62;
break;
}
break;
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
case 22:
case 23:
case 24:
case 25:
case 26:
switch (iParam2){
case 0:
return 10;
break;
case 1:
return 11;
break;
case 2:
return 12;
break;
case 3:
return 13;
break;
case 4:
return 14;
break;
case 5:
return 15;
break;
case 6:
return 16;
break;
case 7:
return 17;
break;
case 8:
return 18;
break;
case 9:
return 49;
break;
case 10:
return 64;
break;
}
break;
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
case 42:
case 43:
case 44:
case 45:
case 46:
switch (iParam2){
case 0:
return 21;
break;
case 1:
return 22;
break;
case 2:
return 23;
break;
case 3:
return 24;
break;
case 4:
return 25;
break;
case 5:
return 26;
break;
case 6:
return 27;
break;
case 7:
return 28;
break;
case 8:
return 29;
break;
case 9:
return 50;
break;
case 10:
return 65;
break;
}
break;
case 47:
case 48:
case 49:
case 50:
case 51:
switch (iParam2){
case 0:
return 31;
break;
case 1:
return 32;
break;
case 2:
return 33;
break;
case 3:
return 34;
break;
case 4:
return 35;
break;
case 5:
return 36;
break;
case 6:
return 37;
break;
case 7:
return 38;
break;
case 8:
return 39;
break;
case 9:
return 51;
break;
case 10:
return 66;
break;
}
break;
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 60:
case 61:
switch (iParam2){
case 0:
return 52;
break;
case 1:
return 53;
break;
case 2:
return 54;
break;
case 3:
return 55;
break;
case 4:
return 56;
break;
case 5:
return 57;
break;
case 6:
return 58;
break;
case 7:
return 59;
break;
case 8:
return 60;
break;
case 9:
return 61;
break;
case 10:
return 69;
break;
}
break;
case 62:
case 63:
switch (iParam2){
case 0:
return 70;
break;
case 1:
return 71;
break;
case 2:
return 72;
break;
case 3:
return 73;
break;
case 4:
return 74;
break;
case 5:
return 75;
break;
case 6:
return 76;
break;
case 7:
return 77;
break;
case 8:
return 78;
break;
case 9:
return 79;
break;
case 10:
return 80;
break;
}
break;
case 64:
case 65:
case 66:
switch (iParam2){
case 0:
return 89;
break;
case 1:
return 90;
break;
case 2:
return 91;
break;
case 3:
return 92;
break;
case 4:
return 93;
break;
case 5:
return 94;
break;
case 6:
return 95;
break;
case 7:
return 96;
break;
case 8:
return 97;
break;
case 9:
return 98;
break;
case 10:
return 99;
break;
}
break;
case 67:
switch (iParam2){
case 0:
return 100;
break;
case 1:
return 101;
break;
case 2:
return 102;
break;
case 3:
return 103;
break;
case 4:
return 104;
break;
case 5:
return 105;
break;
case 6:
return 106;
break;
case 7:
return 107;
break;
case 8:
return 108;
break;
case 9:
return 109;
break;
case 10:
return 110;
break;
}
break;
}
return 0;
}


void func_671(int iParam0, int iParam1){
int iVar0;
iVar0=func_672(iParam1);
if(iVar0 !=joaat("p_parachute_s")){
PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
}else{
PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
}}

int func_672(int iParam0){
if(iParam0 > 66){
return joaat("reh_p_para_bag_reh_s_01a");
}elseif(iParam0 > 63){
return joaat("p_para_bag_tr_s_01a");
}elseif(iParam0 > 61){
return joaat("vw_p_para_bag_vine_s");
}elseif(iParam0 > 51){
return joaat("lts_p_para_bag_pilot2_s");
}elseif(iParam0 > 46){
return joaat("p_para_bag_xmas_s");
}elseif(iParam0 > 26){
return joaat("lts_p_para_bag_lts_s");
}elseif(iParam0 > 0){
return joaat("lts_p_para_bag_pilot2_s");
}
return joaat("p_parachute_s");
}

int func_673(var uParam0){
int iVar0;
iVar0=uParam0;
switch (iVar0){
case 1:
return 9;
break;
case 2:
return 9;
break;
case 3:
return 3;
break;
case 4:
return 3;
break;
case 5:
return 8;
break;
case 6:
return 8;
break;
case 7:
return 11;
break;
case 8:
return 11;
break;
case 9:
return 6;
break;
case 10:
return 6;
break;
case 11:
return 10;
break;
case 12:
return 10;
break;
}
return 0;
}

int func_674(int iParam0, int iParam1){
return 0;
}


bool func_675(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_18();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}


void func_676(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(func_677(iParam1, iParam2, &uVar0, &uVar1)){
PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, uVar1);
PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, uVar0);
}else{
PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, 0);
PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0);
}}


bool func_677(int iParam0, int iParam1, var uParam2, var uParam3){
*uParam2=0;
*uParam3=0;
switch (iParam1){
case 1:
*uParam2=joaat("xm_prop_x17_para_sp_s");
*uParam3=iParam0;
break;
case 0:
switch (iParam0){
case 0:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=0;
break;
case 1:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=1;
break;
case 2:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=2;
break;
case 3:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=3;
break;
case 4:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=4;
break;
case 5:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=5;
break;
case 6:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=6;
break;
case 7:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=7;
break;
case 8:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=8;
break;
case 9:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=9;
break;
case 10:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=10;
break;
case 11:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=11;
break;
case 12:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=12;
break;
case 13:
*uParam2=joaat("lts_p_para_pilot2_sp_s");
*uParam3=13;
break;
case 14:
*uParam2=joaat("tr_prop_tr_para_sp_s_01a");
*uParam3=1;
break;
case 15:
*uParam2=joaat("tr_prop_tr_para_sp_s_01a");
*uParam3=2;
break;
case 16:
*uParam2=joaat("tr_prop_tr_para_sp_s_01a");
*uParam3=3;
break;
case 17:
*uParam2=joaat("reh_prop_reh_para_sp_s_01a");
*uParam3=1;
break;
}
break;
}
return *uParam2 !=0;
}


void func_678(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_2794162.f_1834, 11)){
MISC::SET_BIT(&(Global_2794162.f_1834), 11);
}}elseif(MISC::IS_BIT_SET(Global_2794162.f_1834, 11)){
MISC::CLEAR_BIT(&(Global_2794162.f_1834), 11);
}}


void func_679(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_2794162.f_1834, 9)){
MISC::SET_BIT(&(Global_2794162.f_1834), 9);
}}elseif(MISC::IS_BIT_SET(Global_2794162.f_1834, 9)){
MISC::CLEAR_BIT(&(Global_2794162.f_1834), 9);
}}


void func_680(){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
}}


void func_681(bool bParam0){
int iVar0;
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7)){
if(((!func_253(PLAYER::PLAYER_ID()) && !func_206(PLAYER::PLAYER_ID())) && !func_691(PLAYER::PLAYER_ID())) && !func_690(PLAYER::PLAYER_ID())){
if(func_251()){
func_653(2, 0, 1);
func_689();
}
if(func_272(func_211(func_192(PLAYER::PLAYER_ID())))){
iVar0=func_262(2483, -1);
MISC::CLEAR_BIT(&iVar0, func_211(func_192(PLAYER::PLAYER_ID())));
func_689();
}
if(func_688()){
func_689();
}
if(func_192(PLAYER::PLAYER_ID()) > -1){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
if(func_230(PLAYER::PLAYER_ID())){
func_687();
}
func_684(func_686(func_192(PLAYER::PLAYER_ID())));
}}}}elseif(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7)){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
func_682();
}}


void func_682(){
if(func_683()){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
}}


bool func_683(){
return MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 17);
}


void func_684(int iParam0){
int iVar0;
if(Global_262145.f_9208){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_685() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_685(){
int iVar0;
iVar0=0;
return iVar0;
}

int func_686(int iParam0){
switch (iParam0){
case 150:
return 67;
case 236:
return 67;
case 133:
return 69;
default:
}
return 68;
}


void func_687(){
if(!func_683()){
Global_2794162.f_6871=NETWORK::GET_NETWORK_TIME();
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
}}

int func_688(){
if(Global_2672524.f_947.f_5==-1){
return 0;
}
return 1;
}


void func_689(){
if(func_688()){
Global_2672524.f_947.f_16=1;
}}

int func_690(bool bParam0){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
return Global_2765083;
}else{
iVar0=PLAYER::GET_PLAYER_PED(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iVar0);
if(iVar1==joaat("mp_m_freemode_01") || iVar1==joaat("mp_f_freemode_01")){
return 0;
}else{
return 1;
}}else{
return 0;
}}
return 0;
}

int func_691(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
if(((func_251() && !func_246()) || func_208(PLAYER::PLAYER_ID(), 21)) || func_208(PLAYER::PLAYER_ID(), 25)){
return 1;
}
if(func_23(&(Global_1836866.f_13))){
if(!func_20(&(Global_1836866.f_13), Global_262145.f_14, 0)){
return 1;
}
func_107(&(Global_1836866.f_13));
}}elseif(MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 10)){
return 1;
}
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 9);
}


void func_692(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6){
bool bVar0;
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
if(iParam0 !=133){
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
}
Global_2794162.f_5078=-1;
bVar0=(func_235(PLAYER::PLAYER_ID(), 0) && func_240(PLAYER::PLAYER_ID()));
if(bParam6){
func_701(func_702(iParam0), 1);
}else{
func_700(iParam0, -1);
if(func_207(PLAYER::PLAYER_ID())){
Global_1836866.f_3=iParam0;
}else{
func_737(iParam0);
}
Global_1836866.f_4=-1;
if(func_207(PLAYER::PLAYER_ID())){
MISC::SET_BIT(&(Global_1836866.f_1), 5);
}
if(((func_251() && !func_246()) || func_208(PLAYER::PLAYER_ID(), 21)) || func_208(PLAYER::PLAYER_ID(), 25)){
MISC::SET_BIT(&(Global_1836866.f_1), 4);
}
MISC::CLEAR_BIT(&(Global_1836866.f_1), 17);
MISC::SET_BIT(&(Global_1836866.f_1), 20);
if(func_699(iParam0)){
func_698();
}}
if(!bVar0){
if(fParam1 !=1f){
func_697(fParam1);
}
if(fParam2 !=1f){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
if(iParam0==146){
PLAYER::SET_MAX_WANTED_LEVEL(0);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}}
if(func_696(iParam0)){
PLAYER::SET_MAX_WANTED_LEVEL(0);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
MISC::SET_BIT(&(Global_1836866.f_1), 8);
}
if(bParam3){
if(!Global_4593985){
func_464(1);
if(func_621(0)){
MISC::SET_BIT(&(Global_1836866.f_1), 9);
}
if(!bParam6){
MISC::SET_BIT(&(Global_1836866.f_1), 14);
}}}
if(bParam4){
func_462(1);
MISC::SET_BIT(&(Global_1836866.f_1), 12);
}
if(bParam5){
func_695();
MISC::SET_BIT(&(Global_1836866.f_1), 12);
}
if(!bParam6){
if(func_693(iParam0)){
MISC::SET_BIT(&(Global_1836866.f_1), 21);
}}}
Global_2764267=1;
}

int func_693(int iParam0){
switch (iParam0){
case 129:
case 131:
case 141:
case 136:
case 138:
case 139:
case 140:
case 144:
case 146:
case 236:
case 150:
return 1;
default:
}
if(func_141(iParam0)==1){
return 1;
}
if(func_694()){
return 1;
}
return 0;
}

int func_694(){
switch (func_191()){
case 15:
case 16:
case 17:
case 18:
return 1;
default:
}
return 0;
}


void func_695(){
MISC::SET_BIT(&(Global_2794162.f_5069), false);
}

int func_696(int iParam0){
switch (iParam0){
case 136:
case 144:
case 129:
return 1;
case 141:
if(func_241(PLAYER::PLAYER_ID())){
return 1;
}
break;
}
return 0;
}


void func_697(float fParam0){
float fVar0;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==func_456()){
return;
}
fVar0=(Global_2794162.f_5226 - fParam0);
if(SCRIPT::IS_THREAD_ACTIVE(Global_2794162.f_5227)){
if(!Global_2794162.f_5227==SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f){
return;
}}
Global_2794162.f_5226=fParam0;
Global_2794162.f_5227=SCRIPT::GET_ID_OF_THIS_THREAD();
}


void func_698(){
Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_210=0;
MISC::CLEAR_BIT(&(Global_2794162.f_4667), true);
}

int func_699(int iParam0){
switch (iParam0){
case 136:
return 1;
default:
}
return 0;
}


void func_700(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=-1 || iParam1 !=-1){
iVar0=iParam0;
if(iVar0==-1){
iVar0=iParam1;
}
if(func_272(func_211(iVar0))){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
}else{
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
}}}


void func_701(bool bParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}

int func_702(int iParam0){
switch (iParam0){
case 134:
return 21;
case 254:
return 25;
default:
}
return 0;
}


bool func_703(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_704(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(Local_94.f_27 !=joaat("valkyrie")){
return 1;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
iVar2=0;
while (iVar2 < iVar1){
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, 0);
if(iVar4 !=0){
if(!PED::IS_PED_INJURED(iVar4)){
if(PED::IS_PED_A_PLAYER(iVar4)){
iVar3++;
}}}
bVar2++;
}
if(iVar3 > 0){
return 1;
}
return 0;
}


void func_705(bool bParam0){
var uVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0)){
ENTITY::SET_ENTITY_INVINCIBLE(uVar0, bParam0);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
}}}


void func_706(bool bParam0, var uParam1){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bVar0)){
*bParam0=bVar0;
*uParam1=Local_94.f_256[bVar0];
}
bVar0++;
}}


void func_707(){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
if(iVar0 !=-1){
Global_1895156[iVar0 /*609*/]=-1;
}}


void func_708(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_251()){
if(func_876(PLAYER::PLAYER_ID(), 1, 0)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
}
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
Global_1574582.f_2=0;
if(bParam0){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(0, 0);
}}}else{
if(func_876(PLAYER::PLAYER_ID(), 1, 1)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(1, 0);
}}
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(1);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
}}}


void func_709(bool bParam0){
int iVar0;
int iVar1;
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 0)){
Global_2696922=func_192(PLAYER::PLAYER_ID());
if(Global_2696922==-1){
Global_2696922=Global_1836866.f_4;
}
if(func_736(Global_2696922)==0){
if(func_735(1) > 0){
func_734(26, -1);
}}
if(func_251()){
func_653(2, 0, 1);
func_689();
}
if(func_272(func_211(func_192(PLAYER::PLAYER_ID())))){
iVar1=func_262(2483, -1);
MISC::CLEAR_BIT(&iVar1, func_211(func_192(PLAYER::PLAYER_ID())));
func_689();
}
if(func_688()){
func_689();
}
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), false);
}}elseif(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 0)){
if((!func_229() && !func_733()) && !func_732()){
Global_2696922=-1;
func_642(26, -1);
}elseif(func_736(Global_2696922)==0){
iVar0=func_711(1);
if(iVar0 > 0){
func_710(joaat("mpply_fmevn_cheat_end"), iVar0);
func_501(1934, 1, -1);
func_710(joaat("mpply_activity_ended"), 1);
}}elseif(func_644(26, -1)){
Global_2696922=-1;
func_642(26, -1);
}
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), false);
}}


void func_710(int iParam0, int iParam1){
int iVar0;
iVar0=func_487(iParam0);
iVar0=(iVar0 + iParam1);
func_485(iParam0, iVar0);
}

int func_711(int iParam0){
int iVar0;
bool bVar1;
iVar0=2;
bVar1=func_724();
if(Global_2695770==0){
return 0;
}
if(func_732()){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_723() || func_721())){
Global_2694580=1;
}}
Global_2695770=0;
if(Global_1577905){
iVar0=1;
}
if(Global_2694580){
iVar0=1;
}
if(Global_2694579){
iVar0=1;
}
if(func_569(Global_112838.f_1, 32)){
iVar0=1;
}
if(Global_2694519){
iVar0=1;
}
if(func_720(512)){
iVar0=1;
}
if(func_719(128)){
iVar0=1;
}
if(Global_1577929==1){
if(bVar1){
iVar0=0;
}else{
iVar0=2;
}}
if(func_170(0)){
iVar0=0;
}
if(Global_2695075){
iVar0=2;
}
if(iParam0==0){
if(!func_717()){
if(Global_4718592.f_118152==0){
iVar0=0;
}}}
if(func_16(PLAYER::PLAYER_ID(), 0)){
iVar0=0;
}
if(func_716()){
iVar0=0;
}
if((Global_2694580 || Global_2694579) || Global_1577905){
if(func_721()){
iVar0=0;
}}
if(Global_1837323){
iVar0=2;
}
Global_2695075=0;
Global_2694579=0;
Global_2694580=0;
Global_1577905=0;
Global_2694519=0;
func_714(&(Global_112838.f_1), 32);
func_713(512);
func_712(128);
Global_1837323=0;
return iVar0;
}


void func_712(int iParam0){
Global_112895=(Global_112895 - (Global_112895 && iParam0));
}


void func_713(int iParam0){
Global_112896=(Global_112896 - (Global_112896 && iParam0));
}


void func_714(var uParam0, int iParam1){
func_715(uParam0, iParam1);
}


void func_715(var uParam0, var uParam1){
*uParam0=(*uParam0 - (*uParam0 && uParam1));
}

int func_716(){
if(((Global_1836618 || Global_1836587) || func_16(PLAYER::PLAYER_ID(), 0)) || func_610()){
return 1;
}
return 0;
}

int func_717(){
switch (func_718()){
case 15:
case 14:
case 11:
case 13:
case 12:
case 122:
return 1;
default:
}
return 0;
}

int func_718(){
return Global_2684820.f_1.f_2822;
}


bool func_719(int iParam0){
return (Global_112895 && iParam0) !=0;
}


bool func_720(int iParam0){
return (Global_112896 && iParam0) !=0;
}

int func_721(){
if(func_736(Global_2696922)){
return 0;
}
if(func_722(PLAYER::PLAYER_ID(), 146)){
return 1;
}
return 0;
}

int func_722(int iParam0, int iParam1){
if(Global_1895156[iParam0 /*609*/]==iParam1){
return func_241(iParam0);
}
return 0;
}

int func_723(){
if(func_736(Global_2696922)){
return 0;
}
if(func_241(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_724(){
if(Global_1577929==1 && (func_730() || func_725())){
return 1;
}
return 0;
}

int func_725(){
if(((((func_603() || func_601()) || func_599()) || func_728(Global_4718592.f_117591)) || func_726(Global_4718592.f_117591)) || func_596()){
return 1;
}
return 0;
}

int func_726(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 11){
if(iParam0==func_727(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_727(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33952[iParam0];
}
return -1;
}

int func_728(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_729(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_729(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33069[iParam0];
}
return -1;
}

int func_730(){
return func_731(Global_4718592.f_117591);
}

int func_731(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(Global_262145.f_31929[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_732(){
return MISC::IS_BIT_SET(Global_1574589, 0);
}


bool func_733(){
return Global_1575030;
}


void func_734(bool bParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam1==-1){
iParam1=func_18();
}
switch (bParam0){
case 0:
STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
break;
default:
uVar1=func_643(iParam1);
iVar0=MISC::GET_PROFILE_SETTING(uVar1);
if(!MISC::IS_BIT_SET(iVar0, bParam0)){
MISC::SET_BIT(&iVar0, bParam0);
STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
}
break;
}}

int func_735(int iParam0){
int iVar0;
bool bVar1;
iVar0=2;
bVar1=func_724();
if(Global_1577929==1){
if(bVar1){
iVar0=0;
}else{
iVar0=2;
}}
if(func_170(0)){
iVar0=0;
}
if(iParam0==0){
if(!func_717()){
if(Global_4718592.f_118152==0){
iVar0=0;
}}}
if(func_16(PLAYER::PLAYER_ID(), 0)){
iVar0=0;
}
if(func_716()){
iVar0=0;
}
Global_2695770=1;
return iVar0;
}

int func_736(int iParam0){
switch (iParam0){
case 131:
if(Global_262145.f_12036){
return 1;
}
break;
case 132:
if(Global_262145.f_12038){
return 1;
}
break;
case 133:
if(Global_262145.f_12035){
return 1;
}
break;
case 136:
if(Global_262145.f_12039){
return 1;
}
break;
case 138:
if(Global_262145.f_12040){
return 1;
}
break;
case 139:
if(Global_262145.f_12041){
return 1;
}
break;
case 129:
if(Global_262145.f_12037){
return 1;
}
break;
case 140:
if(Global_262145.f_12042){
return 1;
}
break;
case 141:
if(Global_262145.f_12043){
return 1;
}
break;
case 144:
if(Global_262145.f_12044){
return 1;
}
break;
case 146:
if(Global_262145.f_12045){
return 1;
}
break;
case 236:
case 150:
break;
}
return 0;
}


void func_737(int iParam0){
Global_1895156[PLAYER::PLAYER_ID() /*609*/]=iParam0;
}


void func_738(int iParam0){
Global_2696010=iParam0;
}


void func_739(int iParam0){
if(func_205()){
return;
}
switch (iParam0){
case 1:
if(!MISC::IS_BIT_SET(uLocal_98, 0)){
if((((func_741(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_423()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_440(0, 1, 1, 1)){
if(!func_775()){
func_740("UW_HELP1", func_652(), func_651(1), 30000);
}else{
func_740("UW_HELP1C", func_652(), func_651(1), 30000);
}
func_438(0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
MISC::SET_BIT(&uLocal_98, false);
}}
break;
}}


void func_740(char* sParam0, char* sParam1, int iParam2, int iParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}


bool func_741(int iParam0){
return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644651, NETWORK::GET_NETWORK_TIME())) > iParam0;
}


void func_742(){
bool bVar0;
MISC::CLEAR_BIT(&uLocal_99, 15);
bVar0=false;
while (bVar0 < 4){
func_743(bVar0);
bVar0++;
}
if(MISC::IS_BIT_SET(uLocal_99, 15)){
if(!MISC::IS_BIT_SET(Global_1836866.f_1, 15)){
MISC::SET_BIT(&(Global_1836866.f_1), 15);
}}elseif(MISC::IS_BIT_SET(Global_1836866.f_1, 15)){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 15);
}}


void func_743(bool bParam0){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
int iVar9;
int iVar10;
bool bVar11;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[bParam0])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 0)){
if(Local_94.f_241==0){
}}
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 0)){
if(!func_205()){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!MISC::IS_BIT_SET(uLocal_99, 15)){
if(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())==NETWORK::NET_TO_VEH(Local_94.f_7[bParam0])){
MISC::SET_BIT(&uLocal_99, 15);
}
}
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 0)){
if(func_747("UW_HELP2", func_652()) || func_747("UW_HELP2C", func_652())){
HUD::CLEAR_HELP(1);
}
if(!func_429(PLAYER::PLAYER_ID())){
func_657(1);
}
iVar0=func_746(PLAYER::PLAYER_PED_ID(), 0);
if(func_650("UW_HELP1", func_652(), func_651(1)) || func_650("UW_HELP1C", func_652(), func_651(1))){
HUD::CLEAR_HELP(1);
}
if(Local_94.f_463 !=-1){
if(iVar0 > (Local_94.f_463 - 2)){
iVar0=(Local_94.f_463 - 2);
if(iVar0 < -1){
iVar0=-1;
}}}
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9=bParam0;
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, 1);
func_197();
iLocal_582=iVar0;
}
elseif(Local_94.f_241==0){
if(!MISC::IS_BIT_SET(uLocal_98, 1)){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 1)) < 2500f){
if(func_440(0, 1, 1, 1)){
if(!func_775()){
func_745("UW_HELP2", func_652(), 30000);
}else{
func_745("UW_HELP2C", func_652(), 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_98, true);
}
}}}
if(!func_251()){
if(MISC::IS_BIT_SET(uLocal_99, 2)){
MISC::CLEAR_BIT(&uLocal_99, 2);
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(!MISC::IS_BIT_SET(uLocal_98, 4)){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12)){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 1)) < 2500f){
if(func_440(0, 1, 1, 1)){
if(!func_775()){
func_439("UW_COPS", 30000);
}
else{
func_439("UW_COPSC", 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_98, 4);
}}
}
}
elseif(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 1)) > 10000f){
MISC::CLEAR_BIT(&uLocal_98, 4);
}}else{
if(MISC::IS_BIT_SET(uLocal_98, 4)){
MISC::CLEAR_BIT(&uLocal_98, 4);
}
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12)){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
}}}else{
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12)){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
}
if(!MISC::IS_BIT_SET(uLocal_99, 2)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 1)) < 2500f){
if(func_440(0, 1, 1, 1)){
if(!func_775()){
func_439("UW_PASSMD", 30000);
}else{
func_439("UW_PASSMD", 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_99, 2);
}
}}}
}}}else{
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 0)){
iVar2=0;
while (iVar2 < Local_94.f_28){
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2))){
func_9();
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
}
iVar2++;
}
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0)){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 !=-1){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9=-1;
}
if(func_703("UW_TIMEL")){
HUD::CLEAR_HELP(1);
}
if(func_703("UW_TIMELA")){
HUD::CLEAR_HELP(1);
}
if(func_429(PLAYER::PLAYER_ID())){
func_657(0);
}
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, 0);
}else{
if(Local_94.f_241==0 && !MISC::IS_BIT_SET(Local_94.f_3, 4)){
iVar0=func_746(PLAYER::PLAYER_PED_ID(), 0);
if(Local_94.f_463 !=-1){
if(iVar0 > (Local_94.f_463 - 2)){
iVar0=(Local_94.f_463 - 2);
}
}
if(iVar0 !=iLocal_582){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_582 + 1));
}}
bVar1=false;
if(func_273()){
if(Local_94.f_413 > -1){
iVar3=(Local_94.f_413 - func_127(&(Local_94.f_326), 0, 0));
if(iVar3 < 2000){
bVar1=true;
}
}}
func_744(bVar1);
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]))==joaat("rhino")){
VEHICLE::DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]));
}
if(!func_23(&uLocal_112)){
func_21(&uLocal_112, 0, 0);
}elseif(func_20(&uLocal_112, 2000, 0)){
if(MISC::IS_BIT_SET(Local_94.f_3, 9) || !func_775()){
if(func_703("UW_MINV")){
}
if(!MISC::IS_BIT_SET(uLocal_98, 5)){
if(Local_94.f_28 > 1 || (Local_94.f_28==1 && func_113() > 1)){
if(func_23(&(Local_94.f_326))){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(func_113() > 1){
func_439("UW_TIMELA", 30000);
}
else{
func_439("UW_TIMEL", 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_98, 5);
}}}
}
}
elseif(func_775()){
if(!MISC::IS_BIT_SET(Local_94.f_3, 9)){
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0])) !=joaat("valkyrie")){
if(!MISC::IS_BIT_SET(uLocal_98, 14)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_439("UW_MINV", 30000);
func_438(1);
MISC::SET_BIT(&uLocal_98, 14);
}}}
}
}}}
}}
if(Local_94.f_241==0){
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]))==joaat("valkyrie")){
if(!func_703("UW_VALK") && !func_703("UW_VALKC")){
HUD::CLEAR_ALL_HELP_MESSAGES();
if(MISC::IS_BIT_SET(uLocal_98, 8)){
MISC::CLEAR_BIT(&uLocal_98, 8);
}}
if(!MISC::IS_BIT_SET(uLocal_98, 8)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
iVar6=0;
iVar4=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0])) + 1;
iVar5=0;
while (iVar5 < iVar4){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), (iVar5 - 1), 0)){
iVar6++;
}
iVar5++;
}
if(iVar6==1){
if(!func_775()){
func_439("UW_VALK", 30000);
}
else{
func_439("UW_VALKC", 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_98, 8);
}
if(!MISC::IS_BIT_SET(uLocal_98, 8)){
if(func_775()){
iVar7=0;
iVar7=0;
while (iVar7 < 4){
if(!bVar8){
if(iVar7 !=bParam0){
iVar5=0;
iVar6=0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar7])){
if(func_110(Local_94.f_7[iVar7])){
iVar5=0;
while (iVar5 < iVar4){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_94.f_7[iVar7]), (iVar5 - 1), 0)){
iVar6++;
}
iVar5++;
}
if(iVar6 > 1){
bVar8=true;
}
}
}
}}
iVar7++;
}
if(!bVar8){
func_439("UW_VALKC", 30000);
func_438(1);
MISC::SET_BIT(&uLocal_98, 8);
}
}
}}}
}}
if(Local_94.f_241==1){
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0)){
if(!MISC::IS_BIT_SET(uLocal_98, 6)){
if(func_110(Local_94.f_7[bParam0])){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]))){
if(!MISC::IS_BIT_SET(uLocal_98, 7)){
if((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75)){
MISC::SET_BIT(&uLocal_98, 7);
}}
if(MISC::IS_BIT_SET(uLocal_98, 7)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(func_775()){
func_439("UW_EXITVC", 30000);
}
else{
func_439("UW_EXITV", 30000);
}
func_438(1);
MISC::SET_BIT(&uLocal_98, 6);
}}
}
}}}
}}}}else{
iVar10=0;
while (iVar10 < 4){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[iVar10])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_94.f_7[iVar10]), 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_94.f_7[iVar10]), 0)){
bVar11=true;
}
}}
iVar10++;
}
if(bVar11){
if(func_272(17)){
iVar9=func_262(2483, -1);
MISC::CLEAR_BIT(&iVar9, 17);
func_495(2483, iVar9, -1, 1);
func_689();
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9)){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
}}}else{
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1=0;
}
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12)){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
}}
if(!MISC::IS_BIT_SET(uLocal_99, 14)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_110(Local_94.f_7[bParam0])){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[bParam0]), 1)) < 2500f){
if(func_440(0, 1, 1, 1)){
if(!func_260(129, 0, 0)){
if(!func_775()){
func_439("UW_TUT", -1);
}
else{
func_439("UW_TUTC", -1);
}
func_438(1);
MISC::SET_BIT(&uLocal_99, 14);
}
else{
if(!func_775()){
func_439("UW_HIDE", -1);
}
else{
func_439("UW_HIDEC", -1);
}
func_438(1);
MISC::SET_BIT(&uLocal_99, 14);
}}}
}}}}
if(func_876(PLAYER::PLAYER_ID(), 1, 1) && Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 !=0){
if(!MISC::IS_BIT_SET(Global_2794162.f_4699, 1)){
MISC::SET_BIT(&(Global_2794162.f_4699), true);
}}elseif(MISC::IS_BIT_SET(Global_2794162.f_4699, 1)){
MISC::CLEAR_BIT(&(Global_2794162.f_4699), true);
}}}}


void func_744(bool bParam0){
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
if(bParam0){
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
PAD::DISABLE_CONTROL_ACTION(0, 65, 1);
PAD::DISABLE_CONTROL_ACTION(0, 105, 1);
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
PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
}


void func_745(char* sParam0, char* sParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam2);
}


bool func_746(int iParam0, int iParam1){
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
return bVar3;
}}
iVar2++;
}}}}
return bVar3;
}


var func__747(char* sParam0, char* sParam1){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_748(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_94.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_7[iVar0])){
iVar1=NETWORK::NET_TO_VEH(Local_94.f_7[iVar0]);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
PHYSICS::SET_USE_KINEMATIC_PHYSICS(iVar1, 1);
}}
iVar0++;
}}


void func_749(struct<3> Param0, int iParam1){
Global_4593989={
Param0 
};
Global_4593992=1;
Global_4593993=iParam1;
}


void func_750(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
iVar1=SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
switch (iVar1){
case 186:
func_766(iVar0);
break;
case 174:
func_751(iVar0);
break;
}
iVar0++;
}}


void func_751(int iParam0){
int iVar0;
SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
switch (iVar0){
case -289807473:
func_765(iParam0);
break;
case -1257215590:
func_764(iParam0);
break;
case -798996443:
func_763(iParam0);
break;
case -1522997624:
func_762(iParam0);
break;
case 677929255:
func_761(iParam0);
break;
case -1529273040:
func_758(iParam0);
break;
case -1195009211:
func_752(iParam0);
break;
}}


void func_752(int iParam0){
struct<3> Var0;
int iVar1;
int iVar2;
var uVar3;
bool bVar4;
int iVar5;
bool bVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
bool bVar12;
if(SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 3)){
bVar4=Var0.f_2;
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_73[bVar4])){
return;
}
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar4)){
if(!MISC::IS_BIT_SET(Local_94.f_271, bVar4)){
if(func_101(bVar4)){
if(bVar4 >=0 && bVar4 < 5){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_73[bVar4]), 0)){
if(NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_94.f_73[bVar4]), &uVar3)){
bVar6=true;
}
}
elseif(NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_94.f_73[bVar4]), &uVar3)){
bVar6=true;
}}}elseif(!func_775()){
if(Local_94.f_465[0 /*4*/].f_1 > 0){
iVar7=PLAYER::INT_TO_PLAYERINDEX(Local_94.f_465[0 /*4*/].f_2);
if(iVar7 !=func_5()){
if(iVar7==PLAYER::PLAYER_ID()){
bVar6=true;
}
}}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[0])){
if(func_110(Local_94.f_7[0])){
iVar9=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[0]), -1, 0);
if(iVar9 !=0){
if(PED::IS_PED_A_PLAYER(iVar9)){
iVar8=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
if(iVar8==PLAYER::PLAYER_ID()){
bVar6=true;
}}}
}}}}}
if(bVar6){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
iVar2=func_757();
if(bVar4 >=0 && bVar4 < 5){
iVar10=ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[bVar4]));
}
iVar5=bVar4 * 4;
if(func_756(iVar10)){
iVar1=func_43(iVar10);
bVar12=iVar5;
while (bVar12 <=(iVar5 + (iVar1 - 1))){
if(bVar12 < 0 || bVar12 >=24){
}
elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar12]) && !MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar12)], func_91(bVar12))){
iVar11++;
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar12)]), func_91(bVar12));
}
bVar12++;
}
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8=(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar11);
iVar2=(iVar2 * iVar11);
}else{
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
}
if(Local_95.f_11==0){
Local_95.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
Local_95.f_7=(Local_95.f_7 + iVar2);
func_754(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
func_753();
}}
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar4);
}}}


void func_753(){
if(!func_23(&uLocal_571) || (func_23(&uLocal_571) && func_20(&uLocal_571, 2000, 0))){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
func_107(&uLocal_571);
func_21(&uLocal_571, 0, 0);
}}


var func__754(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
return func_482(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_755(){
if(func_775()){
return Global_262145.f_11961;
}
return Global_262145.f_11900;
}


bool func_756(int iParam0){
return (((iParam0==joaat("insurgent") || iParam0==joaat("lazer")) || iParam0==joaat("buzzard")) || iParam0==joaat("mesa3"));
}

int func_757(){
if(func_775()){
return Global_262145.f_11960;
}
return Global_262145.f_11899;
}


void func_758(int iParam0){
struct<3> Var0;
int iVar1;
int iVar2;
var uVar3;
bool bVar4;
int iVar5;
bool bVar6;
int iVar7;
int iVar8;
int iVar9;
bool bVar10;
int iVar11;
if(SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 3)){
bVar4=Var0.f_2;
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar4)){
if(!MISC::IS_BIT_SET(Local_94.f_271, bVar4)){
if(func_760(bVar4)){
bVar6=true;
}elseif(!func_759(bVar4)){
if(func_101(bVar4)){
if(bVar4 >=0 && bVar4 < 5){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_94.f_73[bVar4]), 0)){
if(NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_94.f_73[bVar4]), &uVar3)){
bVar6=true;
}}elseif(NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_94.f_73[bVar4]), &uVar3)){
bVar6=true;
}
}}elseif(!func_775()){
if(Local_94.f_465[0 /*4*/].f_1 > 0){
iVar7=PLAYER::INT_TO_PLAYERINDEX(Local_94.f_465[0 /*4*/].f_2);
if(iVar7 !=func_5()){
if(iVar7==PLAYER::PLAYER_ID()){
bVar6=true;
}}
}
elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[0])){
if(func_110(Local_94.f_7[0])){
iVar9=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[0]), -1, 0);
if(iVar9 !=0){
if(PED::IS_PED_A_PLAYER(iVar9)){
iVar8=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
if(iVar8==PLAYER::PLAYER_ID()){
bVar6=true;
}
}}}
}}}
if(bVar6){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
iVar1=func_43(joaat("savage"));
iVar5=bVar4 * 4;
iVar11=0;
bVar10=iVar5;
while (bVar10 <=(iVar5 + (iVar1 - 1))){
if(bVar10 < 0 || bVar10 >=24){
}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar10]) && !MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10)], func_91(bVar10))){
iVar11++;
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10)]), func_91(bVar10));
}
bVar10++;
}
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8=(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar11);
iVar2=(iVar2 * iVar11);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
iVar2=func_757();
iVar2=(iVar2 * iVar1);
Local_95.f_7=(Local_95.f_7 + iVar2);
func_754(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
func_753();
if(Local_95.f_11==0){
Local_95.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}
}
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar4);
}}}}}}

int func_759(bool bParam0){
int iVar0;
if(bParam0 < 0 || bParam0 >=5){
return 0;
}
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(Local_97[bVar0 /*18*/].f_11[bParam0] > 0){
return 1;
}}
bVar0++;
}
return 0;
}

int func_760(bool bParam0){
int iVar0;
if(bParam0 < 0 || bParam0 >=5){
return 1;
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0]==0){
return 0;
}
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(bVar0 !=NETWORK::PARTICIPANT_ID_TO_INT()){
if(Local_97[bVar0 /*18*/].f_11[bParam0] > Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0]){
return 0;
}}}
bVar0++;
}
return 1;
}


void func_761(int iParam0){
struct<3> Var0;
if(SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 3)){
if(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) !=func_5()){
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
MISC::SET_BIT(&(Local_94.f_464), Var0.f_2);
}}}


void func_762(int iParam0){
struct<3> Var0;
if(SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 3)){
MISC::SET_BIT(&uLocal_558, Var0.f_2);
}}


void func_763(int iParam0){
struct<3> Var0;
if(SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 3)){
MISC::SET_BIT(&uLocal_559, Var0.f_2);
}}


void func_764(int iParam0){
struct<3> Var0;
int iVar1;
if(SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 3)){
iVar1=func_92(Var0.f_2);
if(iVar1 >=0 && iVar1 < 2){
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[iVar1], func_91(Var0.f_2))){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[iVar1]), func_91(Var0.f_2));
}}}}


void func_765(int iParam0){
struct<3> Var0;
bool bVar1;
if(SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 3)){
bVar1=Var0.f_2;
if(MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1)){
MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
}}}


void func_766(int iParam0){
struct<6> Var0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
bool bVar10;
int iVar11;
var uVar12;
if(SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13)){
bVar1=false;
while (bVar1 < 5){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1)){
if(!MISC::IS_BIT_SET(Local_94.f_271, bVar1)){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_0)){
if(ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_73[bVar1])){
if(ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_94.f_73[bVar1]))){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0)==NETWORK::NET_TO_VEH(Local_94.f_73[bVar1])){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)==PLAYER::PLAYER_PED_ID()){
if(Var0.f_5){
iVar4=ENTITY::GET_ENTITY_MODEL(Var0.f_0);
if(Local_94.f_27==joaat("hydra")){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
iVar7=func_757();
if(func_756(iVar4)){
iVar2=func_43(iVar4);
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8=(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
iVar7=(iVar7 * iVar2);
}
else{
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
}
if(Local_95.f_11==0){
Local_95.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
Local_95.f_7=(Local_95.f_7 + iVar7);
func_754(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
func_753();
}
}
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
}
elseif(iVar4==joaat("buzzard")){
iVar9=-1;
iVar9=-1;
while (iVar9 <=3){
iVar6=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_73[bVar1]), iVar9, 0);
if(iVar6 !=0){
iVar8=func_767(iVar6);
if(iVar8 > -1){
if(!MISC::IS_BIT_SET(Local_94.f_272[func_92(iVar8)], func_91(iVar8))){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(iVar8)], func_91(iVar8))){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(iVar8)]), func_91(iVar8));
iVar7=func_757();
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
Local_95.f_7=(Local_95.f_7 + iVar7);
func_754(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
func_753();
}
if(HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_94.f_48[iVar8]))){
func_93(&(Local_106[iVar8 /*8*/]));
}
}
}
}
}
bVar9++;
}
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
}
}
elseif(!func_110(Local_94.f_73[bVar1])){
}}elseif(Var0.f_5){
if(PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))){
}}}
}
}}}
}}}}
bVar1++;
}
if(Local_94.f_27 !=joaat("hydra")){
bVar1=false;
while (bVar1 <=19){
if(!MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar1)], func_91(bVar1))){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar1)], func_91(bVar1))){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_0)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_0)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar1])){
if(ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_94.f_48[bVar1]))){
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)==NETWORK::NET_TO_PED(Local_94.f_48[bVar1])){
if(Var0.f_5){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
iVar5=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
if(PED::IS_PED_A_PLAYER(iVar5)){
if(iVar5==PLAYER::PLAYER_PED_ID()){
if(Var0.f_5){
iVar7=func_757();
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
func_754(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
Local_95.f_7=(Local_95.f_7 + iVar7);
func_753();
}
}
if(Local_95.f_11==0){
Local_95.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar1)]), func_91(bVar1));
}
}
}
}}}
}
}}}
}}}
if(bVar1 < 5){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1)){
if(!MISC::IS_BIT_SET(Local_94.f_271, bVar1)){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_0)){
if(ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_73[bVar1])){
if(ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_94.f_73[bVar1]))){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0)==NETWORK::NET_TO_VEH(Local_94.f_73[bVar1])){
if(ENTITY::GET_ENTITY_MODEL(Var0.f_0)==joaat("savage")){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar1)], func_91(bVar1))){
if(Var0.f_5){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
iVar5=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
if(PED::IS_PED_A_PLAYER(iVar5)){
if(iVar5==PLAYER::PLAYER_PED_ID()){
if(Var0.f_5){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
iVar2=func_43(joaat("savage"));
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8=(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
iVar7=func_757();
iVar7=(iVar7 * iVar2);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
func_754(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
Local_95.f_7=(Local_95.f_7 + iVar7);
func_753();
if(Local_95.f_11==0){
Local_95.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}
}
bVar10=bVar1 * 4;
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10)]), func_91(bVar10));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 1)]), func_91(bVar10 + 1));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 2)]), func_91(bVar10 + 2));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 3)]), func_91(bVar10 + 3));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
}
}
}
}
elseif(func_760(bVar1)){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
iVar2=func_43(joaat("savage"));
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8=(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
iVar7=func_757();
iVar7=(iVar7 * iVar2);
Local_95.f_7=(Local_95.f_7 + iVar7);
func_754(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
func_753();
if(Local_95.f_11==0){
Local_95.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}
}
bVar10=bVar1 * 4;
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10)]), func_91(bVar10));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 1)]), func_91(bVar10 + 1));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 2)]), func_91(bVar10 + 2));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 3)]), func_91(bVar10 + 3));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
}
}
elseif(func_759(bVar1)){
}
elseif(NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(iVar11, Var0.f_0, &uVar12)){
if(bVar11==PLAYER::PLAYER_ID()){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
iVar2=func_43(joaat("savage"));
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8=(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
iVar7=func_757();
iVar7=(iVar7 * iVar2);
Local_95.f_7=(Local_95.f_7 + iVar7);
func_754(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
func_753();
if(Local_95.f_11==0){
Local_95.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}
}
bVar10=bVar1 * 4;
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10)]), func_91(bVar10));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 1)]), func_91(bVar10 + 1));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 2)]), func_91(bVar10 + 2));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar10 + 3)]), func_91(bVar10 + 3));
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
}
}
}
}
}
}
else{
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
iVar5=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
if(PED::IS_PED_A_PLAYER(iVar5)){
if(iVar5==PLAYER::PLAYER_PED_ID()){
iVar3=NETWORK::GET_CLOUD_TIME_AS_INT();
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bVar1]=iVar3;
}
}
}
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), 0)){
}
}
}}}
}
}}}
}}}
bVar1++;
}
bVar1=20;
while (bVar1 <=23){
if(!MISC::IS_BIT_SET(Local_94.f_272[func_92(bVar1)], func_91(bVar1))){
if(!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar1)], func_91(bVar1))){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_0)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_0)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar1])){
if(ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_94.f_48[bVar1]))){
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)==NETWORK::NET_TO_PED(Local_94.f_48[bVar1])){
if(Var0.f_5){
if(ENTITY::DOES_ENTITY_EXIST(Var0.f_1)){
if(ENTITY::IS_ENTITY_A_PED(Var0.f_1)){
iVar5=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
if(PED::IS_PED_A_PLAYER(iVar5)){
if(iVar5==PLAYER::PLAYER_PED_ID()){
if(Var0.f_5){
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2){
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
if(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <=func_755()){
iVar7=func_757();
Local_95.f_7=(Local_95.f_7 + iVar7);
if(Local_95.f_11==0){
Local_95.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}
func_754(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
func_753();
}
}
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar1)]), func_91(bVar1));
}
}
}
}}else{
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar1)]), func_91(bVar1));
}}
}
}}}
}}}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar1])){
}
bVar1++;
}}}}

int func_767(int iParam0){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < 24){
if(iVar0==-1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[iVar1])){
if(NETWORK::NET_TO_PED(Local_94.f_48[iVar1])==iParam0){
iVar0=iVar1;
}}}
iVar1++;
}
return iVar0;
}


void func_768(){
int iVar0;
int iVar1;
if(Local_94.f_27 !=joaat("hydra")){
if(iLocal_584==0){
iLocal_584=20;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[iLocal_584])){
if(!func_32(Local_94.f_48[iLocal_584])){
iVar0=NETWORK::NETWORK_ENTITY_GET_OBJECT_ID(NETWORK::NET_TO_PED(Local_94.f_48[iLocal_584]));
if(iLocal_585[iLocal_584] !=iVar0){
iLocal_585[iLocal_584]=iVar0;
NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_94.f_48[iLocal_584], 1);
}}}
iLocal_584++;
if(iLocal_584==23){
iLocal_584=20;
}}
if(Local_94.f_27 !=joaat("hydra") && Local_94.f_27 !=joaat("rhino")){
if(!bLocal_588){
if(func_99()==5){
iVar1=0;
while (iVar1 < 5){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_73[iVar1])){
if(func_110(Local_94.f_73[iVar1])){
if(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_94.f_73[iVar1]))==joaat("savage")){
NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_94.f_73[iVar1], 1);
bLocal_588=true;
}
}}
iVar1++;
}}}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_73[iLocal_586])){
if(func_110(Local_94.f_73[iLocal_586])){
iVar0=NETWORK::NETWORK_ENTITY_GET_OBJECT_ID(NETWORK::NET_TO_PED(Local_94.f_73[iLocal_586]));
if(iLocal_587[iLocal_586] !=iVar0){
iLocal_587[iLocal_586]=iVar0;
if(!bLocal_588){
NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_94.f_73[iLocal_586], 1);
}}}}
iLocal_586++;
if(iLocal_586==5){
iLocal_586=0;
}}


void func_769(){
bool bVar0;
var uVar1;
var uVar2;
struct<3> Var3;
struct<3> Var4;
int iVar5;
var uVar6;
float fVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
iVar9=-1;
bVar0=false;
while (bVar0 < 24){
if(MISC::IS_BIT_SET(uLocal_560, bVar0)){
if(Local_94.f_85[bVar0] !=2){
MISC::CLEAR_BIT(&uLocal_560, bVar0);
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_48[bVar0])){
func_773(bVar0);
if(!func_32(Local_94.f_48[bVar0])){
switch (Local_94.f_85[bVar0]){
case 1:
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_48[bVar0])){
if(PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), 0)){
uVar2=PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), 0);
uVar1=ENTITY::GET_ENTITY_MODEL(uVar2);
if(VEHICLE::IS_THIS_MODEL_A_HELI(uVar1)){
if(TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_vehicle_mission")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_vehicle_mission")) !=0){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0)==NETWORK::NET_TO_PED(Local_94.f_48[bVar0])){
iVar5=func_28();
if(iVar5 !=func_5()){
uVar6=PLAYER::GET_PLAYER_PED(iVar5);
if(!PED::IS_PED_INJURED(uVar6)){
if(func_27(iVar2, iVar6, 1) > 250f){
Var3={
ENTITY::GET_ENTITY_COORDS(iVar6, 1) 
};
TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
}}}
}
}}elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0)==NETWORK::NET_TO_PED(Local_94.f_48[bVar0])){
iVar11=1;
iVar10=(bVar0 / 4);
}
if((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_vehicle_mission")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_vehicle_mission")) !=0) || ((iVar11 && iVar10 < 5) && iLocal_100[iVar10] !=Local_94.f_110[iVar10])){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0)==NETWORK::NET_TO_PED(Local_94.f_48[bVar0])){
iVar9=Local_94.f_110[iVar10];
if(iVar9 > -1){
bVar5=PLAYER::INT_TO_PLAYERINDEX(iVar9);
if(bVar5 !=func_5()){
iVar6=PLAYER::GET_PLAYER_PED(bVar5);
if(!PED::IS_PED_INJURED(iVar6)){
Var3={
ENTITY::GET_ENTITY_COORDS(iVar6, 1) 
};
TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 100, 50, 1);
if(iLocal_100[iVar10] !=Local_94.f_110[iVar10]){
iLocal_100[iVar10]=Local_94.f_110[iVar10];
}
}}}
}
}}elseif(((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_vehicle_mission")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_vehicle_mission")) !=0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_go_to_coord_any_means_extra_params_with_cruise_speed")) !=0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_go_to_coord_any_means_extra_params_with_cruise_speed")) !=1){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0)==NETWORK::NET_TO_PED(Local_94.f_48[bVar0])){
bVar5=func_28();
if(bVar5 !=func_5()){
iVar6=PLAYER::GET_PLAYER_PED(bVar5);
if(!PED::IS_PED_INJURED(iVar6)){
fVar7=func_27(iVar2, iVar6, 1);
if(fVar7 > 500f){
TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), ENTITY::GET_ENTITY_COORDS(iVar6, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
}elseif(fVar7 > 250f){
TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), iVar2, iVar6, 4, 30f, 786469, 5f, 5f, 1);
}}
}
}}}
}
break;
case 2:
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_48[bVar0])){
if(!func_24()){
if(TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_combat_hated_targets_around_ped")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), joaat("script_task_combat_hated_targets_around_ped")) !=0){
if(PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), 0)){
if(!MISC::IS_BIT_SET(uLocal_560, bVar0)){
iVar8=func_772(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), 1133084672);
if(iVar8 > -1){
TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), 299f, 0);
}elseif(!MISC::IS_BIT_SET(uLocal_560, bVar0)){
func_771(bVar0, func_105(1));
MISC::SET_BIT(&uLocal_560, bVar0);
}
}
}
else{
TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), 299f, 0);
}}}
}
break;
case 3:
if(TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), -251125078) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), -251125078) !=0){
Var4={
func_770() 
};
TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), 1);
TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_94.f_48[bVar0]), Var4, 10000f, 999999, 0, 0);
}
break;
}}}
bVar0++;
}}


Vector3 func__770(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar0])){
return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[iVar0]), 0);
}
iVar0++;
}
return Local_94.f_30[0 /*3*/];
}


void func_771(bool bParam0, int iParam1){
struct<3> Var0;
Var0.f_0=677929255;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=bParam0;
if(!iParam1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam1);
}}

int func_772(int iParam0, float fParam1){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
struct<3> Var4;
int iVar5;
iVar0=-1;
fVar1=1E+09f;
iVar3=0;
while (iVar3 < 4){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar3])){
if(func_110(Local_94.f_7[iVar3])){
iVar5=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_94.f_7[iVar3]), -1, 0);
if(!PED::IS_PED_INJURED(iVar5)){
if(PED::IS_PED_A_PLAYER(iVar5)){
Var4={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[iVar3]), 1) 
};
fVar2=func_542(iParam0, Var4, 1);
if(fVar2 < fVar1){
if(fVar2 < fParam1){
fVar1=fVar2;
iVar0=iVar3;
}
}}}}}
iVar3++;
}
return iVar0;
}


void func_773(bool bParam0){
var uVar0;
return;
if(!func_32(Local_94.f_48[bParam0])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_94.f_48[bParam0])){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_94.f_48[bParam0]))){
uVar0=PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_94.f_48[bParam0]), 0);
if(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(uVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_94.f_48[bParam0]), 5, 0);
}}}}}}


void func_774(struct<3> Param0){
Global_1836866.f_6={
Param0 
};
}


bool func_775(){
return MISC::IS_BIT_SET(Local_94.f_3, 8);
}


void func_776(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case 136:
switch (iParam1){
case 0:
func_777("kwUfKUus6EuQyNSL8KpY-w");
func_777("yMTOFLfO2UKwzKrmgPP7kg");
func_777("9mGvlJ1Cxk-HxC2zkAwdQg");
break;
case 2:
func_777("tP5HSeCA0UiHnkRzakdO2Q");
func_777("uEkrqoerQEmQ0uZRtp4rkw");
func_777("xIXaDwts7kKz0sbMnwYlCQ");
break;
case 3:
func_777("UOTaXepxrUOUEU7QtfBvGQ");
break;
case 6:
func_777("734uySYXUk2ej47Ni5jlZw");
break;
}
break;
case 139:
switch (iParam1){
case 1:
func_777("OZ5hEthzqUSuK_x9YuO4uw");
break;
case 2:
func_777("uEkrqoerQEmQ0uZRtp4rkw");
break;
}
break;
case 138:
switch (iParam1){
case 2:
func_777("lyrTwqWnP0SqGuK4GdrgDg");
break;
case 3:
func_777("uEkrqoerQEmQ0uZRtp4rkw");
func_777("92t91kL3Wkqvl2Kc82cNSA");
func_777("43Yoc5jfr0OwGfW9UP5TXA");
break;
case 5:
func_777("WfnWlxu780CwC7LLUrLljw");
break;
case 6:
func_777("lowxnyELLUCxqy_Q1uslIg");
break;
case 7:
func_777("QmlvLMLCwkOvoZlkAstYxw");
break;
}
break;
case 141:
switch (iParam1){
case 0:
func_777("TT4ifq2kgEG6G1fCUYHXSQ");
break;
}
break;
case 134:
switch (iParam1){
case 1:
func_777("QmlvLMLCwkOvoZlkAstYxw");
break;
case 4:
func_777("fOfm7nzMLkav0ldcSCNAzA");
func_777("JMbOeJ2-ak-02KwNLtnOJg");
break;
case 5:
func_777("3AAj-muvN0iHI5IMyGlboA");
break;
case 0:
func_777("lyrTwqWnP0SqGuK4GdrgDg");
break;
case 9:
func_777("Ma78E44OMkGfYPmCPZXUNA");
func_777("Pqz3l_Dhg0ar0yHiz2wMqQ");
break;
case 19:
func_777("ZmoxEY6L60WSR-7I5IUjPg");
break;
case 10:
func_777("gxmtJHj2OUWQDt8nNMy3TQ");
break;
}
break;
case 140:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
func_777("lowxnyELLUCxqy_Q1uslIg");
break;
}
break;
case 1:
switch (iParam2){
case 2:
func_777("dCWpYaU7CU-Bxz5s2qGjaA");
break;
}
break;
case 2:
func_777("QmlvLMLCwkOvoZlkAstYxw");
break;
case 3:
switch (iParam2){
case 1:
func_777("Cl3Gh6-LMkuZ7Z_jPqSE8g");
break;
case 2:
func_777("TT4ifq2kgEG6G1fCUYHXSQ");
break;
}
break;
case 4:
func_777("A0vXbIK2WEmiVSUNYRGpvA");
switch (iParam2){
case 2:
func_777("3AAj-muvN0iHI5IMyGlboA");
break;
}
break;
}
break;
case 129:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
func_777("kXry-nXRbEC6ktiopjDDcg");
break;
case 1:
func_777("JCMcBpPl9UWmcdOYFza0Tg");
break;
case 2:
func_777("ZmoxEY6L60WSR-7I5IUjPg");
break;
case 3:
func_777("fOfm7nzMLkav0ldcSCNAzA");
func_777("JMbOeJ2-ak-02KwNLtnOJg");
break;
}
break;
case 1:
switch (iParam2){
case 0:
func_777("OZ5hEthzqUSuK_x9YuO4uw");
break;
case 1:
func_777("lyrTwqWnP0SqGuK4GdrgDg");
break;
}
break;
case 2:
switch (iParam2){
case 0:
func_777("QmlvLMLCwkOvoZlkAstYxw");
break;
case 2:
func_777("yMTOFLfO2UKwzKrmgPP7kg");
break;
}
break;
case 3:
switch (iParam2){
case 3:
func_777("xIXaDwts7kKz0sbMnwYlCQ");
break;
}
break;
case 4:
switch (iParam2){
case 1:
func_777("gaJhsFMzFkyl3al5SRa6fQ");
break;
}
break;
case 5:
switch (iParam2){
case 1:
func_777("JCMcBpPl9UWmcdOYFza0Tg");
break;
case 2:
func_777("ZmoxEY6L60WSR-7I5IUjPg");
break;
case 3:
func_777("fOfm7nzMLkav0ldcSCNAzA");
func_777("JMbOeJ2-ak-02KwNLtnOJg");
break;
}
break;
case 6:
switch (iParam2){
case 0:
func_777("OZ5hEthzqUSuK_x9YuO4uw");
break;
case 1:
func_777("lyrTwqWnP0SqGuK4GdrgDg");
break;
}
break;
case 7:
switch (iParam2){
case 0:
func_777("QmlvLMLCwkOvoZlkAstYxw");
break;
case 2:
func_777("yMTOFLfO2UKwzKrmgPP7kg");
break;
}
break;
case 8:
switch (iParam2){
case 3:
func_777("xIXaDwts7kKz0sbMnwYlCQ");
break;
}
break;
}
break;
case 131:
switch (iParam3){
case 0:
switch (iParam1){
case 0:
switch (iParam2){
case 1:
func_777("UOTaXepxrUOUEU7QtfBvGQ");
break;
case 2:
func_777("xIXaDwts7kKz0sbMnwYlCQ");
break;
}
break;
case 1:
switch (iParam2){
case 0:
func_777("kXry-nXRbEC6ktiopjDDcg");
break;
case 2:
func_777("QmlvLMLCwkOvoZlkAstYxw");
break;
case 3:
func_777("gxmtJHj2OUWQDt8nNMy3TQ");
break;
case 4:
func_777("A0vXbIK2WEmiVSUNYRGpvA");
break;
}
break;
case 2:
switch (iParam2){
case 0:
func_777("dCWpYaU7CU-Bxz5s2qGjaA");
break;
case 2:
func_777("aGBjo2rKi0yMDLl3a2ATGA");
func_777("yMTOFLfO2UKwzKrmgPP7kg");
break;
case 3:
func_777("lhGatLUmgke_87surSFS5g");
break;
}
break;
case 3:
switch (iParam2){
case 1:
func_777("VmS_SI5wSE2LuL9qItQqbw");
break;
case 4:
func_777("f2lnL6wZPkGWUowu0yLm1Q");
func_777("ZmoxEY6L60WSR-7I5IUjPg");
break;
}
break;
case 4:
switch (iParam2){
case 1:
func_777("Ma78E44OMkGfYPmCPZXUNA");
break;
case 2:
func_777("TT4ifq2kgEG6G1fCUYHXSQ");
break;
}
break;
case 5:
switch (iParam2){
case 0:
func_777("W-OJzHlM-0ym9PsIASYZtw");
func_777("uEkrqoerQEmQ0uZRtp4rkw");
break;
case 1:
func_777("3AAj-muvN0iHI5IMyGlboA");
break;
case 3:
func_777("TjGz31AMYE6bGCjAIitu6w");
func_777("A0vXbIK2WEmiVSUNYRGpvA");
break;
}
break;
case 6:
switch (iParam2){
case 2:
func_777("QmlvLMLCwkOvoZlkAstYxw");
func_777("BktATxH9R0Wp2x0kWSbqjw");
break;
case 3:
func_777("BktATxH9R0Wp2x0kWSbqjw");
func_777("kXry-nXRbEC6ktiopjDDcg");
break;
case 4:
func_777("f2lnL6wZPkGWUowu0yLm1Q");
break;
}
break;
}
break;
case 1:
switch (iParam1){
case 0:
switch (iParam2){
case 1:
func_777("kXry-nXRbEC6ktiopjDDcg");
break;
case 3:
func_777("PY8hdiWoAkudg9SpK8G2xQ");
break;
}
break;
case 1:
switch (iParam2){
case 0:
func_777("TT4ifq2kgEG6G1fCUYHXSQ");
break;
case 1:
func_777("9mGvlJ1Cxk-HxC2zkAwdQg");
break;
case 2:
func_777("tP5HSeCA0UiHnkRzakdO2Q");
break;
case 3:
func_777("kXry-nXRbEC6ktiopjDDcg");
break;
}
break;
case 2:
switch (iParam2){
case 3:
func_777("Cl3Gh6-LMkuZ7Z_jPqSE8g");
break;
}
break;
}
break;
case 2:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
func_777("Pqz3l_Dhg0ar0yHiz2wMqQ");
break;
}
break;
case 4:
switch (iParam2){
case 4:
func_777("W-OJzHlM-0ym9PsIASYZtw");
break;
}
break;
}
break;
}
break;
}}


void func_777(char* sParam0){
int iVar0;
int iVar1;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
iVar0=MISC::GET_HASH_KEY(sParam0);
iVar1=0;
iVar1=0;
while (iVar1 < Global_1573885){
if(MISC::IS_BIT_SET(Global_4543629[iVar1 /*26*/].f_12, 11)){
if(func_778(&(Global_4543629[iVar1 /*26*/].f_15))==iVar0){
if(!MISC::IS_BIT_SET(Global_4543629[iVar1 /*26*/].f_13, 26)){
MISC::SET_BIT(&(Global_4543629[iVar1 /*26*/].f_13), 26);
}
return;
}}
iVar1++;
}}

int func_778(var uParam0){
struct<13> Var0;
int iVar1;
int iVar2;
Var0.f_2=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_12=-1;
iVar1=0;
iVar2=func_151(uParam0);
if(iVar2==-1){
return iVar1;
}
switch (uParam0->f_2){
case 63:
Var0={
func_779(uParam0) 
};
return Var0.f_1;
case 62:
return iVar1;
default:
}
return iVar1;
}
struct<13> func_779(var uParam0){
struct<13> Var0;
int iVar1;
Var0.f_2=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_12=-1;
iVar1=func_151(uParam0);
if(iVar1==-1){
return Var0;
}
switch (uParam0->f_2){
case 63:
return Global_794709.f_133589[iVar1 /*13*/];
case 62:
return Global_948106.f_28205[iVar1 /*13*/];
default:
}
return Var0;
}


void func_780(){
bool bVar0;
struct<3> Var1;
if(MISC::IS_BIT_SET(Local_94.f_3, 12)){
func_197();
}
if(func_775()){
if(iLocal_554 !=Local_94.f_12){
iLocal_554=Local_94.f_12;
func_197();
}}
if(!func_205()){
bVar0=false;
while (bVar0 < 4){
if(!HUD::DOES_BLIP_EXIST(uLocal_105[bVar0])){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[bVar0])){
if(func_110(Local_94.f_7[bVar0])){
Var1={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]), 0) 
};
if(!func_781(bVar0, Var1)){
if(!MISC::IS_BIT_SET(Local_94.f_13, bVar0)){
uLocal_105[bVar0]=HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_94.f_7[bVar0]));
HUD::SET_BLIP_SPRITE(uLocal_105[bVar0], 429);
func_199(&(uLocal_105[bVar0]), 29);
if(!MISC::IS_BIT_SET(uLocal_98, 20)){
HUD::SET_BLIP_FLASHES(uLocal_105[bVar0], 1);
HUD::SET_BLIP_FLASH_TIMER(uLocal_105[bVar0], 7000);
MISC::SET_BIT(&uLocal_98, 20);
}
HUD::SET_BLIP_PRIORITY(uLocal_105[bVar0], 9);
if(func_775()){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_105[bVar0], "UW_BLIPC");
}else{
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_105[bVar0], "UW_BLIP");
}
if(!MISC::IS_BIT_SET(uLocal_99, 3)){
HUD::FLASH_MINIMAP_DISPLAY();
MISC::SET_BIT(&uLocal_99, 3);
}}
}}}}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[bVar0])){
if(!func_110(Local_94.f_7[bVar0])){
HUD::REMOVE_BLIP(&(uLocal_105[bVar0]));
}elseif(MISC::IS_BIT_SET(Local_94.f_13, bVar0)){
HUD::REMOVE_BLIP(&(uLocal_105[bVar0]));
}}else{
HUD::REMOVE_BLIP(&(uLocal_105[bVar0]));
}
bVar0++;
}}else{
func_197();
}}

int func_781(int iParam0, struct<3> Param1){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 4){
if(iVar0 !=iParam0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94.f_7[iVar0])){
Var1={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_94.f_7[iVar0]), 0) 
};
if(func_70(Param1, Var1, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_105[iVar0])){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_782(){
return Local_94.f_0;
}

int func_783(int iParam0){
return Local_97[iParam0 /*18*/];
}


void func_784(){
if(MISC::IS_BIT_SET(Global_1836866.f_1, 6)){
func_466();
MISC::CLEAR_BIT(&(Global_1836866.f_1), 6);
}
if(!MISC::IS_BIT_SET(Global_1836866.f_1, 7)){
if(MISC::IS_BIT_SET(Global_1836866.f_1, 4) || MISC::IS_BIT_SET(Global_1836866.f_1, 16)){
if(((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_371()) && func_876(PLAYER::PLAYER_ID(), 1, 1)){
MISC::SET_BIT(&(Global_1836866.f_1), 7);
func_439("FME_PASINT", 30000);
func_438(1);
}}elseif(MISC::IS_BIT_SET(Global_1836866.f_1, 17)){
if(func_251() && !func_246()){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 17);
MISC::SET_BIT(&(Global_1836866.f_1), 16);
}}}
if(!MISC::IS_BIT_SET(Global_1836866.f_1, 23)){
if(((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2794162.f_853, 2)) && func_876(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75816) && !Global_60666) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(func_807()){
func_439("AMEV_GA_RP", -1);
if(func_351(PLAYER::PLAYER_ID()) !=200){
func_438(1);
}
MISC::SET_BIT(&(Global_1836866.f_1), 23);
}}}
if(HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE()==15){
if(func_241(PLAYER::PLAYER_ID())){
if(!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371)){
HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
}}elseif(HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371)){
HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
}}
if(MISC::IS_BIT_SET(Global_1836866.f_1, 9)){
if(((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_371()) && func_876(PLAYER::PLAYER_ID(), 1, 1)) && !func_208(PLAYER::PLAYER_ID(), 21)) && !func_208(PLAYER::PLAYER_ID(), 25)){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 9);
func_806(0);
func_439("FME_TBL00", -1);
func_438(1);
}}
if(func_252(PLAYER::PLAYER_ID())){
if(!MISC::IS_BIT_SET(Global_1836866.f_1, 18)){
if((func_208(PLAYER::PLAYER_ID(), 21) && MISC::IS_BIT_SET(Global_1836866.f_1, 20)) && !MISC::IS_BIT_SET(Global_1836866.f_1, 19)){
MISC::SET_BIT(&(Global_1836866.f_1), 18);
}}elseif(MISC::IS_BIT_SET(Global_1836866.f_1, 18)){
if(((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_371()) && func_876(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_805()){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 18);
MISC::SET_BIT(&(Global_1836866.f_1), 19);
func_439("AMTT_RPAS", -1);
func_438(1);
}}}
if(((((func_252(PLAYER::PLAYER_ID()) && !func_207(PLAYER::PLAYER_ID())) && func_192(PLAYER::PLAYER_ID()) !=146) && !func_206(PLAYER::PLAYER_ID())) && !func_691(PLAYER::PLAYER_ID())) && !func_795()){
if(func_696(func_192(PLAYER::PLAYER_ID()))){
PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
}
if(!MISC::IS_BIT_SET(Global_1836866.f_1, 22)){
MISC::SET_BIT(&(Global_1836866.f_1), 22);
}
if(func_214(PLAYER::PLAYER_ID()) || func_694()){
if(!MISC::IS_BIT_SET(Global_1836866.f_1, 10)){
if(func_793(func_192(PLAYER::PLAYER_ID()))){
if(func_621(0) && !Global_4593985){
MISC::SET_BIT(&(Global_1836866.f_1), 9);
}
if(!Global_4593985){
func_464(1);
MISC::SET_BIT(&(Global_1836866.f_1), 14);
}}
MISC::SET_BIT(&(Global_1836866.f_1), 10);
}}
if(func_241(PLAYER::PLAYER_ID())){
if(!MISC::IS_BIT_SET(Global_1836866.f_1, 11)){
if(!Global_100885.f_8){
MISC::SET_BIT(&(Global_1836866.f_1), 12);
func_462(1);
}
if(!func_792()){
MISC::SET_BIT(&(Global_1836866.f_1), 13);
func_695();
}
if(!Global_4593985){
MISC::SET_BIT(&(Global_1836866.f_1), 14);
if(func_621(0) && !Global_4593985){
MISC::SET_BIT(&(Global_1836866.f_1), 9);
}
func_464(1);
}
MISC::SET_BIT(&(Global_1836866.f_1), 11);
}}else{
func_790(0);
}}else{
func_790(1);
}
func_785();
if(func_693(func_192(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1836866.f_1, 21)){
MISC::SET_BIT(&(Global_1836866.f_1), 21);
}
if(((func_251() && !func_246()) || func_208(PLAYER::PLAYER_ID(), 21)) || func_208(PLAYER::PLAYER_ID(), 25)){
if(!MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 10)){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
}}elseif(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 10)){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
}}


void func_785(){
int iVar0;
int iVar1;
int iVar2;
if(func_371()){
iVar2=63;
iVar2=0;
while (iVar2 < 83){
if(func_539(iVar2)){
iVar0=iVar2;
if(iVar0==63 || iVar0 >=81){
iVar1=15000;
}else{
iVar1=3000;
}
if(MISC::IS_BIT_SET(Global_1836866.f_1, 26)){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 26);
}
func_786(iVar0, iVar1);
iVar2=83;
}
iVar2++;
}}elseif(!MISC::IS_BIT_SET(Global_1836866.f_1, 26)){
func_107(&(Global_1836866.f_22));
MISC::SET_BIT(&(Global_1836866.f_1), 26);
}}


void func_786(int iParam0, int iParam1){
if(!func_23(&(Global_1836866.f_22))){
func_21(&(Global_1836866.f_22), 0, 0);
}elseif(func_20(&(Global_1836866.f_22), iParam1, 0)){
if(func_424() > 0){
func_789(iParam0);
if(func_703("AMEV_LBD_HELP")){
HUD::CLEAR_HELP(1);
}
func_107(&(Global_1836866.f_22));
}}else{
func_788(0);
func_787();
}}


void func_787(){
Global_2794162.f_4636=0;
}


void func_788(int iParam0){
Global_1654054.f_68=iParam0;
}


void func_789(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672524.f_2514[iVar0 /*80*/].f_1==iParam0){
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
func_369(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}


void func_790(int iParam0){
if((MISC::IS_BIT_SET(Global_1836866.f_1, 11) || (MISC::IS_BIT_SET(Global_1836866.f_1, 10) && iParam0)) || (MISC::IS_BIT_SET(Global_1836866.f_1, 22) && iParam0)){
if(MISC::IS_BIT_SET(Global_1836866.f_1, 12)){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 12);
func_462(0);
}
if(MISC::IS_BIT_SET(Global_1836866.f_1, 13)){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 13);
func_791();
}
if(MISC::IS_BIT_SET(Global_1836866.f_1, 14) && !func_235(PLAYER::PLAYER_ID(), 0)){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 14);
func_464(0);
}
MISC::CLEAR_BIT(&(Global_1836866.f_1), 11);
MISC::CLEAR_BIT(&(Global_1836866.f_1), 10);
MISC::CLEAR_BIT(&(Global_1836866.f_1), 22);
}}


void func_791(){
MISC::CLEAR_BIT(&(Global_2794162.f_5069), false);
}


bool func_792(){
return MISC::IS_BIT_SET(Global_2794162.f_5069, 0);
}

int func_793(int iParam0){
switch (iParam0){
case 129:
case 132:
case 136:
case 138:
case 139:
case 140:
case 141:
return 1;
case 131:
case 146:
return func_241(PLAYER::PLAYER_ID());
case 133:
return (func_694() || func_794(func_191()));
default:
}
return 0;
}

int func_794(int iParam0){
switch (iParam0){
case 1:
case 10:
case 6:
case 12:
case 11:
case 14:
return 1;
default:
}
return 0;
}

int func_795(){
if(((((((((func_804() || func_803()) || func_802()) || func_184()) || (func_801() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_798() && !func_797())) || Global_2625211) || Global_2625211.f_1 !=0) || Global_2625286 !=0) || (func_796()==2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())){
return 1;
}
return 0;
}

int func_796(){
return Global_1057409;
}


bool func_797(){
return MISC::IS_BIT_SET(Global_2683883.f_2, 27);
}

int func_798(){
if(func_800() || func_799()){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_95==8;
}
return 0;
}


var func__799(){
return Global_2683883.f_735;
}


var func__800(){
return MISC::IS_BIT_SET(Global_2683883.f_2, 11);
}


var func__801(){
return MISC::IS_BIT_SET(Global_2683883, 5);
}


var func__802(){
return MISC::IS_BIT_SET(Global_2683883, 2);
}


var func__803(){
return MISC::IS_BIT_SET(Global_2683883, 20);
}


bool func_804(){
return Global_2683883.f_698;
}


bool func_805(){
return Global_2794162.f_5164 !=-1;
}


void func_806(int iParam0){
int iVar0;
iVar0=func_262(2537, -1);
if(iParam0==0){
if(!MISC::IS_BIT_SET(iVar0, 0)){
MISC::SET_BIT(&iVar0, false);
}elseif(!MISC::IS_BIT_SET(iVar0, 1)){
MISC::SET_BIT(&iVar0, true);
}elseif(!MISC::IS_BIT_SET(iVar0, 2)){
MISC::SET_BIT(&iVar0, 2);
}}elseif(iParam0==1){
if(!MISC::IS_BIT_SET(iVar0, 3)){
MISC::SET_BIT(&iVar0, 3);
}elseif(!MISC::IS_BIT_SET(iVar0, 4)){
MISC::SET_BIT(&iVar0, 4);
}elseif(!MISC::IS_BIT_SET(iVar0, 5)){
MISC::SET_BIT(&iVar0, 5);
}}elseif(iParam0==2){
if(!MISC::IS_BIT_SET(iVar0, 6)){
MISC::SET_BIT(&iVar0, 6);
}elseif(!MISC::IS_BIT_SET(iVar0, 7)){
MISC::SET_BIT(&iVar0, 7);
}elseif(!MISC::IS_BIT_SET(iVar0, 8)){
MISC::SET_BIT(&iVar0, 8);
}}elseif(iParam0==3){
if(!MISC::IS_BIT_SET(iVar0, 9)){
MISC::SET_BIT(&iVar0, 9);
}elseif(!MISC::IS_BIT_SET(iVar0, 10)){
MISC::SET_BIT(&iVar0, 10);
}elseif(!MISC::IS_BIT_SET(iVar0, 11)){
MISC::SET_BIT(&iVar0, 11);
}}
func_495(2537, iVar0, -1, 1);
}

int func_807(){
int iVar0;
if(!func_23(&(Global_1836866.f_15))){
func_21(&(Global_1836866.f_15), 0, 0);
Global_1836866.f_17=0;
}elseif(func_20(&(Global_1836866.f_15), 1000, 0)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836866.f_17))){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836866.f_17));
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)){
if(func_876(bVar0, 1, 1) && func_808(bVar0, 6)){
if(vdist(func_60(PLAYER::PLAYER_ID()), func_60(bVar0)) < 80f){
return 1;
}}}}
Global_1836866.f_17++;
if(Global_1836866.f_17 >=32){
Global_1836866.f_17=0;
func_107(&(Global_1836866.f_15));
}}
return 0;
}

int func_808(int iParam0, int iParam1){
int iVar0;
if(func_458() !=0){
return 0;
}
if(!func_499(iParam0)){
return 0;
}
iVar0=iParam0;
if(Global_1853988[iVar0 /*867*/]==iParam1){
return 1;
}
return 0;
}


bool func_809(){
return Global_1836866.f_24;
}


bool func_810(int iParam0){
return !func_811(iParam0);
}

int func_811(int iParam0){
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
if(func_208(PLAYER::PLAYER_ID(), 7)){
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
if(func_208(PLAYER::PLAYER_ID(), 7)){
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
if(func_208(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 15:
if(func_812(4)){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 17:
if(func_812(4)){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 16:
if(func_812(4)){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 7)){
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
if(func_812(4)){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 19:
if(func_812(4)){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 7)){
return 0;
}
break;
case 20:
if(func_812(4)){
return 0;
}
if(func_208(PLAYER::PLAYER_ID(), 7)){
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

int func_812(bool bParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 32){
if(func_876(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1)){
if(MISC::IS_BIT_SET(Global_2657704[bVar0 /*463*/].f_218, bParam0)){
return 1;
}}
bVar0++;
}
return 0;
}

int func_813(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_816()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_815()){
return 1;
}
if(func_814(159)){
if(!func_804()){
return 1;
}}
if(func_814(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_456() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_456())==0){
return 1;
}}
return 0;
}

int func_814(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_815(){
return Global_2694576;
}


bool func_816(){
return Global_2683883.f_693;
}


void func_817(){
wait(0);
}


void func_818(){
int iVar0;
func_197();
if(func_782()==4 && Local_94.f_27 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_94.f_27, 0);
}
MISC::CLEAR_BIT(&(Global_2794162.f_4699), true);
func_701(19, 0);
func_679(0);
if(NETWORK::PARTICIPANT_ID_TO_INT() !=-1){
func_824(129, 0, MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
}
func_823(129);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, 1);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
if(iLocal_103 > 0){
PLAYER::SET_MAX_WANTED_LEVEL(iLocal_103);
}
if(PLAYER::PLAYER_ID() !=-1){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==129){
Global_1853988[PLAYER::PLAYER_ID() /*867*/]=-1;
}}
if(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID())==iLocal_107){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_109);
}
func_822();
func_210(0, 129);
if(MISC::IS_BIT_SET(uLocal_98, 22)){
func_469();
MISC::CLEAR_BIT(&uLocal_98, 22);
}
if(MISC::IS_BIT_SET(uLocal_98, 9)){
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
if(!MISC::IS_BIT_SET(uLocal_98, 10)){
AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
}}
if(fLocal_104 !=-100f){
func_545(0, 0);
NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_104);
}
func_544(0);
if(func_813()){
Local_95.f_5=5;
}elseif(func_640(2, 0, 0, 0, 0)){
Local_95.f_5=6;
}elseif(Local_95.f_5 !=1){
Local_95.f_5=2;
}
AUDIO::STOP_SOUND(uLocal_557);
Local_95.f_0=Local_94.f_611;
Local_95.f_1=Local_94.f_612;
Local_95.f_4=Local_94.f_613;
Local_95.f_3=Local_94.f_615;
if(Local_95.f_9 > 0){
Local_95.f_10=(NETWORK::GET_CLOUD_TIME_AS_INT() - Local_95.f_9);
}
if((!Global_262145.f_12149 && !MISC::IS_BIT_SET(Local_94.f_3, 8)) || (!Global_262145.f_12150 && MISC::IS_BIT_SET(Local_94.f_3, 8))){
if(Local_95.f_6 > 0){
}}
if(MISC::IS_BIT_SET(Local_94.f_3, 8)){
iVar0=1;
}
if(MISC::IS_BIT_SET(uLocal_99, 1)){
func_708(1);
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(0, 0);
}
if(iVar0==0){
func_820(Local_95, Local_94.f_27, Local_94.f_279, iVar0, -1, -1, -1);
}elseif(NETWORK::PARTICIPANT_ID_TO_INT() !=-1){
func_820(Local_95, Local_94.f_279, Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
}
if(func_429(PLAYER::PLAYER_ID())){
func_657(0);
}
func_678(0);
func_738(1);
func_819();
}


void func_819(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_820(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
var uVar0;
struct<13> Var1;
struct<17> Var2;
struct<18> Var3;
struct<14> Var4;
struct<13> Var5;
struct<14> Var6;
struct<14> Var7;
struct<16> Var8;
struct<13> Var9;
struct<14> Var10;
struct<14> Var11;
struct<13> Var12;
uVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(Param0.f_9==0){
Param0.f_10=0;
}
if(Param0.f_8 > Param0.f_9){
Param0.f_8=Param0.f_9;
}
if(Global_78689){
if(MISC::ARE_STRINGS_EQUAL(uVar0, "am_hot_target")){
Var1={
Param0 
};
Var1.f_12=uParam1;
STATS::PLAYSTATS_FM_EVENT_VEHICLETARGET(&Var1);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, func_821())){
Var2={
Param0 
};
Var2.f_12=uParam1;
Var2.f_13=iParam2;
Var2.f_14=iParam3;
Var2.f_15=iParam4;
Var2.f_16=iParam5;
STATS::PLAYSTATS_FM_EVENT_ATOB(&Var2);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection")){
Var3={
Param0 
};
Var3.f_12=uParam1;
Var3.f_13=iParam2;
Var3.f_14=iParam3;
Var3.f_15=iParam4;
Var3.f_16=iParam5;
Var3.f_17=iParam6;
STATS::PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(&Var3);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges")){
Var4={
Param0 
};
Var4.f_12=uParam1;
Var4.f_13=to_float(iParam2);
if(iParam3==1){
Var4.f_13=(Var4.f_13 / 10f);
}
STATS::PLAYSTATS_FM_EVENT_CHALLENGES(&Var4);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in")){
STATS::PLAYSTATS_FM_EVENT_PENNEDIN(&Param0);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel")){
Var5={
Param0 
};
Var5.f_12=uParam1;
STATS::PLAYSTATS_FM_EVENT_PASSTHEPARCEL(&Var5);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property")){
Var6={
Param0 
};
Var6.f_12=uParam1;
Var6.f_13=iParam2;
STATS::PLAYSTATS_FM_EVENT_HOTPROPERTY(&Var6);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop")){
Var7={
Param0 
};
Var7.f_12=uParam1;
Var7.f_13=iParam2;
STATS::PLAYSTATS_FM_EVENT_DEADDROP(&Var7);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle")){
Var8={
Param0 
};
Var8.f_12=uParam1;
Var8.f_13=iParam2;
Var8.f_14=iParam3;
Var8.f_15=iParam4;
STATS::PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(&Var8);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE")){
Var9={
Param0 
};
Var9.f_12=uParam1;
STATS::PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(&Var9);
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST")){
if(iParam3==0){
Var10={
Param0 
};
Var10.f_12=uParam1;
Var10.f_13=iParam2;
STATS::PLAYSTATS_FM_EVENT_URBANWARFARE(&Var10);
}else{
Var11={
Param0 
};
Var11.f_12=uParam1;
Var11.f_13=iParam2;
STATS::PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(&Var11);
}}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast")){
Var12={
Param0 
};
Var12.f_12=uParam1;
STATS::PLAYSTATS_FM_EVENT_HUNTBEAST(&Var12);
}}}


char* func_821(){
switch (Global_2697098){
case 0:
return "freemode";
default:
}
return "freemode";
}


void func_822(){
PED::REMOVE_RELATIONSHIP_GROUP(iLocal_108);
PED::REMOVE_RELATIONSHIP_GROUP(iLocal_107);
}


void func_823(int iParam0){
if(iParam0==iParam0){}}


void func_824(int iParam0, bool bParam1, int iParam2){
var uVar0;
int iVar1;
if(iParam0==0){}
if(PLAYER::PLAYER_ID() !=-1){
if(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 13)){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 13);
}
if(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 14)){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1), 14);
}}
if(MISC::IS_BIT_SET(Global_1836866.f_1, 21)){
MISC::CLEAR_BIT(&(Global_1836866.f_1), 21);
}
func_860();
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
if(bParam1){
uVar0=func_859(func_192(PLAYER::PLAYER_ID()));
func_701(func_702(iParam0), 0);
}else{
if((iParam2 && PLAYER::PLAYER_ID() !=-1) && func_858(PLAYER::PLAYER_ID()) >=12){
func_857(2549, -1);
iVar1=func_262(2549, -1);
if(iVar1==2){
MISC::SET_BIT(&Global_1836892, false);
}elseif(iVar1==4){
MISC::SET_BIT(&Global_1836892, true);
}elseif(iVar1==6){
MISC::SET_BIT(&Global_1836892, 2);
}elseif(iVar1==8){
MISC::SET_BIT(&Global_1836892, 3);
}elseif(iVar1==10){
MISC::SET_BIT(&Global_1836892, 4);
}elseif(iVar1==12){
MISC::SET_BIT(&Global_1836892, 5);
}}
func_707();
func_856();
func_855();
if((!func_240(PLAYER::PLAYER_ID()) && !func_238(PLAYER::PLAYER_ID())) && !func_854()){
func_833();
}
func_832();
if(!MISC::IS_BIT_SET(Global_1948431.f_3, 0) && !MISC::IS_BIT_SET(Global_1948431.f_3, 1)){
func_466();
}
func_831();
MISC::CLEAR_BIT(&(Global_2794162.f_1848), 2);
func_560();
func_830();
}
if(HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371)){
HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
}
if(!bParam1 || uVar0){
if(((PLAYER::PLAYER_ID() !=-1 && !func_208(PLAYER::PLAYER_ID(), 21)) && !func_208(PLAYER::PLAYER_ID(), 25)) && !func_235(PLAYER::PLAYER_ID(), 0)){
func_464(0);
func_462(0);
if(!bParam1){
func_829();
}}}
if(iParam2 && !bParam1){
if(func_644(26, -1)){
Global_2696922=-1;
func_642(26, -1);
}}
if(!func_825()){
Global_2764267=1;
}}

int func_825(){
if(((((((!func_402(PLAYER::PLAYER_ID()) && !func_383(PLAYER::PLAYER_ID())) && func_192(PLAYER::PLAYER_ID()) !=146) && !func_828()) && !func_827()) && !func_826(Global_4718592.f_171044)) && !func_604()) && !MISC::IS_BIT_SET(Global_4718592.f_38, 28)){
return 0;
}
return 1;
}


bool func_826(int iParam0){
return iParam0==57;
}

int func_827(){
if(Global_4718592.f_117591==Global_262145.f_10235){
return 1;
}
return 0;
}

int func_828(){
if((Global_4718592==0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 !=0 || Global_4718592.f_171044 > 0) || MISC::IS_BIT_SET(Global_4718592.f_4, 15)) || MISC::IS_BIT_SET(Global_4718592.f_4, 18)) || MISC::IS_BIT_SET(Global_4718592.f_4, 19)) || MISC::IS_BIT_SET(Global_4718592.f_4, 29)) || MISC::IS_BIT_SET(Global_4718592.f_4, 28)) || MISC::IS_BIT_SET(Global_4718592.f_5, 23))){
return 1;
}
return 0;
}


void func_829(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_1573885){
if(MISC::IS_BIT_SET(Global_4543629[iVar0 /*26*/].f_12, 11)){
if(MISC::IS_BIT_SET(Global_4543629[iVar0 /*26*/].f_13, 26)){
MISC::CLEAR_BIT(&(Global_4543629[iVar0 /*26*/].f_13), 26);
}}
iVar0++;
}}


void func_830(){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_7=0;
}


void func_831(){
struct<25> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_21=-1;
Global_1836866={
Var0 
};
}


void func_832(){
var uVar0;
Global_1581969=uVar0;
}


void func_833(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_24), &Global_2639951, 2);
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_26), &Global_2639953, 19);
func_852();
func_836(1, 1, 0);
func_834();
}


void func_834(){
func_835(0, 0);
}


void func_835(int iParam0, int iParam1){
Global_2635560.f_22=iParam0;
Global_2635560.f_23=iParam1;
}


void func_836(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_45), &Global_2639972, 323);
}else{
Global_2635560.f_45={
Global_2639972 
};
Global_2635560.f_45.f_49={
Global_2639972.f_49 
};
Global_2635560.f_45.f_52=Global_2639972.f_52;
Global_2635560.f_45.f_53=Global_2639972.f_53;
}
if(bParam0){
func_851();
}
if(!bParam2){
func_839(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
}
func_838(0);
func_837();
}


void func_837(){
struct<6> Var0;
if(Global_2635560.f_490.f_1==SCRIPT::GET_ID_OF_THIS_THREAD()){
Global_2635560.f_490={
Var0 
};
}}


void func_838(bool bParam0){
if(bParam0){
Global_2635560.f_713=0;
}else{
Global_2635560.f_713=1;
}}


void func_839(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14){
if(bParam0){
if(func_850()){
func_849();
}
Global_2635560.f_714.f_568=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_714.f_554=iParam1;
Global_2635560.f_714.f_555=iParam2;
Global_2635560.f_714.f_556=iParam10;
func_847();
func_843(8, 0, 0, 0, 0);
Global_2635560.f_714.f_557=iParam11;
Global_2635560.f_714.f_562=iParam3;
Global_2635560.f_714.f_563=iParam4;
Global_2635560.f_714.f_560=iParam5;
Global_2635560.f_714.f_561=iParam6;
Global_2635560.f_714.f_564=iParam7;
Global_2635560.f_714.f_565=iParam8;
Global_2635560.f_714.f_566=iParam9;
Global_2635560.f_714.f_567=iParam14;
Global_2635560.f_714.f_558=iParam12;
Global_2635560.f_714.f_559=iParam13;
Global_2635560.f_1853=1;
}else{
func_840();
}}


void func_840(){
if(func_850() && !func_842()){
func_849();
}
if(func_842()){
func_841();
}else{
func_847();
func_843(0, 0, 0, 0, 0);
Global_2635560.f_1853=0;
Global_2635560.f_1852=0;
}}


void func_841(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_714), &(Global_2635560.f_1283), 569);
Global_2635560.f_490={
Global_2635560.f_496 
};
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_714.f_568){
Global_2635560.f_1852=0;
}}

int func_842(){
if((Global_2635560.f_1852 && !SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_1283.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_1283.f_568)){
return 1;
}
return 0;
}


void func_843(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(Global_2672524.f_1685.f_703.f_16 !=func_5()){
if(MISC::IS_BIT_SET(Global_2657704[Global_2672524.f_1685.f_703.f_16 /*463*/].f_424, 0) && func_844()){
iParam0=23;
}}
if(iParam0 !=18 && iParam0 !=17){
Global_2643396=0;
}
Global_2635560.f_490=iParam0;
Global_2635560.f_490.f_1=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_490.f_2=iParam1;
Global_2635560.f_490.f_3=iParam2;
Global_2635560.f_490.f_4=iParam3;
Global_2635560.f_490.f_5=iParam4;
}

int func_844(){
if((((((func_351(PLAYER::PLAYER_ID())==229 || func_351(PLAYER::PLAYER_ID())==191) || func_846()) || func_854()) || func_216()) || Global_2765084.f_227==1) || (Global_2635560.f_1853 && func_845(PLAYER::PLAYER_ID()))){
return 0;
}
return 1;
}

int func_845(int iParam0){
if(func_214(iParam0)){
return 1;
}
if(func_253(iParam0)){
return 1;
}
return 0;
}

int func_846(){
if(Global_4718592==6){
return 1;
}
return 0;
}


void func_847(){
if(func_850() && !func_842()){
func_849();
}
func_848();
Global_2635560.f_714=0;
Global_2635560.f_714.f_502=0;
}


void func_848(){
int iVar0;
struct<5> Var1;
struct<3> Var2;
Var1.f_4=1065353216;
iVar0=0;
while (iVar0 < 100){
Global_2635560.f_714.f_1[iVar0 /*5*/]={
Var1 
};
iVar0++;
}
Var2=-1;
Var2.f_2=-3;
iVar0=0;
while (iVar0 < 16){
Global_2635560.f_714.f_503[iVar0 /*3*/]={
Var2 
};
iVar0++;
}}


void func_849(){
if(func_842()){
if(Global_2635560.f_714.f_568==Global_2635560.f_1283.f_568){
return;
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_714.f_568){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_1283), &(Global_2635560.f_714), 569);
Global_2635560.f_496={
Global_2635560.f_490 
};
Global_2635560.f_1852=1;
}}

int func_850(){
if((Global_2635560.f_1853 && !SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_714.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_714.f_568)){
return 1;
}
return 0;
}


void func_851(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_368), &Global_2640295, 121);
}


void func_852(){
func_853();
}


void func_853(){
int iVar0;
struct<4> Var1;
iVar0=0;
while (iVar0 < 50){
Global_2635560.f_2363[iVar0 /*4*/]={
Var1 
};
iVar0++;
}
Global_2635560.f_2362=0;
}


bool func_854(){
return Global_1836594;
}


void func_855(){
Global_2794162.f_5069=0;
}


void func_856(){
if(PLAYER::PLAYER_ID() !=-1){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1=0;
}}


void func_857(int iParam0, int iParam1){
int iVar0;
iVar0=func_262(iParam0, func_250(iParam1));
iVar0++;
func_495(iParam0, iVar0, iParam1, 1);
}

int func_858(int iParam0){
return Global_1853988[iParam0 /*867*/].f_205.f_6;
}

int func_859(int iParam0){
switch (iParam0){
case 133:
case 132:
case 138:
case 144:
case 140:
case 139:
case 131:
case 141:
case -1:
return 1;
case 146:
if(func_241(PLAYER::PLAYER_ID())){
return 1;
}
break;
}
return 0;
}


void func_860(){
if(MISC::IS_BIT_SET(Global_2794162.f_1835, 3) || MISC::IS_BIT_SET(Global_2794162.f_1835, 4)){
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_IN(800);
}}
if(MISC::IS_BIT_SET(Global_2794162.f_1835, 5)){
MISC::CLEAR_BIT(&(Global_2794162.f_1835), 5);
}
if(MISC::IS_BIT_SET(Global_2794162.f_1835, 3)){
MISC::CLEAR_BIT(&(Global_2794162.f_1835), 3);
}
if(MISC::IS_BIT_SET(Global_2794162.f_1835, 4)){
MISC::CLEAR_BIT(&(Global_2794162.f_1835), 4);
}
func_863(0);
func_862(0);
func_861(0);
}


void func_861(int iParam0){
if(Global_2794162.f_4624 !=iParam0){
Global_2794162.f_4624=iParam0;
}}


void func_862(bool bParam0){
if(Global_2794162.f_4623 !=bParam0){
if(bParam0){
}
Global_2794162.f_4623=bParam0;
}}


void func_863(int iParam0){
if(Global_2794162.f_4621 !=iParam0){
Global_2794162.f_4621=iParam0;
}}


void func_864(struct<21> Param0){
int iVar0;
func_873(func_874(Param0.f_0), Param0);
NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
func_872(0, -1, 0);
func_870(129);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_94, 617, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_97, 577, 0);
func_869(1);
if(!func_868()){
func_818();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
iVar0=0;
while (iVar0 < 4){
Local_94.f_17[iVar0]=func_5();
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 4){
Local_94.f_22[iVar0]=func_5();
Local_94.f_256[iVar0]=-1;
Local_94.f_110[iVar0]=-1;
iVar0++;
}
STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_94.f_611), &(Local_94.f_612));
}
iVar0=0;
iVar0=0;
while (iVar0 < 4){
iLocal_100[iVar0]=-1;
iVar0++;
}
Local_95.f_2=NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
Local_95.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
func_701(19, 1);
func_865();
if(func_205()){
MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
}
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9=-1;
Global_2794162.f_5155=-1;
Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/]=0;
}else{
func_818();
}}


void func_865(){
int iVar0;
PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_107);
PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_108);
iVar0=0;
while (iVar0 < 32){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837183[iVar0], iLocal_107);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_107, Global_1837183[iVar0]);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837183[iVar0], iLocal_108);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_108, Global_1837183[iVar0]);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_107, joaat("COP"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_107);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_107, Global_1837231[5]);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837231[5], iLocal_107);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_107, Global_1837216);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837216, iLocal_107);
iVar0++;
}
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_107, iLocal_108);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_108, iLocal_107);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, iLocal_108);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_107);
func_867(1, &iLocal_108);
func_866(&iLocal_108);
func_866(&iLocal_107);
}


void func_866(int iParam0){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}


void func_867(int iParam0, int iParam1){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *iParam1);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("COP"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("army"), *iParam1);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("army"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *iParam1);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -183807561);
}

int func_868(){
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
if(func_816()){
return 0;
}
if(func_814(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}


void func_869(bool bParam0){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==func_456()){
return;
}
if(!SCRIPT::IS_THREAD_ACTIVE(Global_2646835.f_1317) || Global_2646835.f_1317==SCRIPT::GET_ID_OF_THIS_THREAD()){
if(bParam0){
Global_2646835.f_1317=SCRIPT::GET_ID_OF_THIS_THREAD();
}else{
Global_2646835.f_1317=-1;
}}}


void func_870(int iParam0){
func_831();
func_871();
func_855();
Global_1836866.f_4=iParam0;
Global_1836866.f_5=iParam0;
func_700(iParam0, -1);
func_8(&(Global_1836866.f_18), 0, 0);
Global_2794162.f_4694=0;
Global_2695780[0]=func_5();
Global_2695780[1]=func_5();
Global_2695780[2]=func_5();
Global_2695780[3]=func_5();
Global_2695780[4]=func_5();
func_830();
if(!func_231(func_232())){
func_368();
}
if(func_251() && !func_246()){
MISC::SET_BIT(&(Global_1836866.f_1), 16);
}else{
MISC::SET_BIT(&(Global_1836866.f_1), 17);
}}


void func_871(){
var uVar0;
Global_1836891=uVar0;
}

int func_872(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_819();
}else{
return 0;
}}
if(!func_170(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_819();
}else{
return 0;
}}
if(func_816()){
if(!bParam2){
func_819();
}else{
return 0;
}}
if(func_814(157)){
if(!bParam2){
func_819();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_819();
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
func_819();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_819();
}else{
return 0;
}}
return 1;
}


void func_873(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_819();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_874(int iParam0){
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
switch (func_141(func_875(iParam0, 1))){
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

int func_875(int iParam0, bool bParam1){
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

int func_876(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(bParam0)){
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