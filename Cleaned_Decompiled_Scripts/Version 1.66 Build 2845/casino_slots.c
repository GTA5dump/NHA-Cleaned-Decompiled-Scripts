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
float fLocal_62=0f;
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
var uLocal_87=-1;
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
struct<3> Local_114={
0, 0, 0 
};
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
int iLocal_119=0;
var uLocal_120=12;
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
int iLocal_205=0;
struct<21> Local_206[54];
struct<279> Local_207={
64, 3, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 16, 3, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 
};
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
int iLocal_218=0;
var uLocal_219=0;
var uLocal_220=0;
int iLocal_221=0;
var uLocal_222=0;
int iLocal_223=0;
struct<3> Local_224={
0, 0, 0 
};
struct<3> Local_225={
0, 0, 0 
};
int iLocal_226=0;
int iLocal_227=0;
int iLocal_228=0;
var uLocal_229[2]={
0, 0 
};
struct<2> Local_230[20];
int iLocal_231=0;
int iLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=0;
var uLocal_236=0;
struct<5> Local_237[54];
struct<2> Local_238[54];
int iLocal_239=0;
var uLocal_240=0;
var uLocal_241=0;
struct<6> Local_242={
0, 0, 0, 0, 0, 0 
};
var uLocal_243=3;
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=3;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=0;
var uLocal_251=0;
int iLocal_252=0;
int iLocal_253=0;
int iLocal_254=0;
int iLocal_255=0;
struct<2> Local_256={
0, -1 
};
struct<18> Local_257={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_258=0;
int iLocal_259=0;
int iLocal_260=0;
int iLocal_261=0;
int iLocal_262=0;
int iLocal_263=0;
int iLocal_264=0;
struct<4> Local_265[54];
var uLocal_266[54]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_267[3]={
0, 0, 0 
};
int iLocal_268=0;
struct<116> Local_269={
2, 0, 0, 2, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54 
};
var uLocal_270=3;
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=0;
var uLocal_274=3;
var uLocal_275=0;
var uLocal_276=0;
var uLocal_277=0;
var uLocal_278=3;
var uLocal_279=0;
var uLocal_280=0;
var uLocal_281=0;
var uLocal_282=3;
var uLocal_283=0;
var uLocal_284=0;
var uLocal_285=0;
var uLocal_286=3;
var uLocal_287=0;
var uLocal_288=0;
var uLocal_289=0;
var uLocal_290=3;
var uLocal_291=0;
var uLocal_292=0;
var uLocal_293=0;
var uLocal_294=3;
var uLocal_295=0;
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=3;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=3;
var uLocal_303=0;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=3;
var uLocal_307=0;
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=3;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=0;
var uLocal_314=3;
var uLocal_315=0;
var uLocal_316=0;
var uLocal_317=0;
var uLocal_318=3;
var uLocal_319=0;
var uLocal_320=0;
var uLocal_321=0;
var uLocal_322=3;
var uLocal_323=0;
var uLocal_324=0;
var uLocal_325=0;
var uLocal_326=3;
var uLocal_327=0;
var uLocal_328=0;
var uLocal_329=0;
var uLocal_330=3;
var uLocal_331=0;
var uLocal_332=0;
var uLocal_333=0;
var uLocal_334=3;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=0;
var uLocal_338=3;
var uLocal_339=0;
var uLocal_340=0;
var uLocal_341=0;
var uLocal_342=3;
var uLocal_343=0;
var uLocal_344=0;
var uLocal_345=0;
var uLocal_346=3;
var uLocal_347=0;
var uLocal_348=0;
var uLocal_349=0;
var uLocal_350=3;
var uLocal_351=0;
var uLocal_352=0;
var uLocal_353=0;
var uLocal_354=3;
var uLocal_355=0;
var uLocal_356=0;
var uLocal_357=0;
var uLocal_358=3;
var uLocal_359=0;
var uLocal_360=0;
var uLocal_361=0;
var uLocal_362=3;
var uLocal_363=0;
var uLocal_364=0;
var uLocal_365=0;
var uLocal_366=3;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=3;
var uLocal_371=0;
var uLocal_372=0;
var uLocal_373=0;
var uLocal_374=3;
var uLocal_375=0;
var uLocal_376=0;
var uLocal_377=0;
var uLocal_378=3;
var uLocal_379=0;
var uLocal_380=0;
var uLocal_381=0;
var uLocal_382=3;
var uLocal_383=0;
var uLocal_384=0;
var uLocal_385=0;
var uLocal_386=3;
var uLocal_387=0;
var uLocal_388=0;
var uLocal_389=0;
var uLocal_390=3;
var uLocal_391=0;
var uLocal_392=0;
var uLocal_393=0;
var uLocal_394=3;
var uLocal_395=0;
var uLocal_396=0;
var uLocal_397=0;
var uLocal_398=3;
var uLocal_399=0;
var uLocal_400=0;
var uLocal_401=0;
var uLocal_402=3;
var uLocal_403=0;
var uLocal_404=0;
var uLocal_405=0;
var uLocal_406=3;
var uLocal_407=0;
var uLocal_408=0;
var uLocal_409=0;
var uLocal_410=3;
var uLocal_411=0;
var uLocal_412=0;
var uLocal_413=0;
var uLocal_414=3;
var uLocal_415=0;
var uLocal_416=0;
var uLocal_417=0;
var uLocal_418=3;
var uLocal_419=0;
var uLocal_420=0;
var uLocal_421=0;
var uLocal_422=3;
var uLocal_423=0;
var uLocal_424=0;
var uLocal_425=0;
var uLocal_426=3;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=0;
var uLocal_430=3;
var uLocal_431=0;
var uLocal_432=0;
var uLocal_433=0;
var uLocal_434=3;
var uLocal_435=0;
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=3;
var uLocal_439=0;
var uLocal_440=0;
var uLocal_441=0;
var uLocal_442=3;
var uLocal_443=0;
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=3;
var uLocal_447=0;
var uLocal_448=0;
var uLocal_449=0;
var uLocal_450=3;
var uLocal_451=0;
var uLocal_452=0;
var uLocal_453=0;
var uLocal_454=3;
var uLocal_455=0;
var uLocal_456=0;
var uLocal_457=0;
var uLocal_458=3;
var uLocal_459=0;
var uLocal_460=0;
var uLocal_461=0;
var uLocal_462=3;
var uLocal_463=0;
var uLocal_464=0;
var uLocal_465=0;
var uLocal_466=3;
var uLocal_467=0;
var uLocal_468=0;
var uLocal_469=0;
var uLocal_470=3;
var uLocal_471=0;
var uLocal_472=0;
var uLocal_473=0;
var uLocal_474=3;
var uLocal_475=0;
var uLocal_476=0;
var uLocal_477=0;
var uLocal_478=3;
var uLocal_479=0;
var uLocal_480=0;
var uLocal_481=0;
var uLocal_482=3;
var uLocal_483=0;
var uLocal_484=0;
var uLocal_485=0;
int iLocal_486=0;
struct<657> Local_487={
54, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 54, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2 
};
var uLocal_488=0;
var uLocal_489=0;
var uLocal_490=0;
struct<11> Local_491[32];
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
fLocal_62=((0.05f + 0.275f) - 0.01f);
Local_114={
1140.746f, 258.6841f, -52.4408f 
};
iLocal_119=-1;
iLocal_205=-1;
iLocal_226=-1;
iLocal_227=-1;
iLocal_231=-1;
iLocal_258=-1;
iLocal_259=-1;
iLocal_260=-1;
iLocal_261=-1;
iLocal_262=1;
iLocal_264=-1;
func_365();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_361();
}else{
func_359();
}
func_358(&Local_207, &Local_206);
while (true){
func_357();
func_345();
func_15();
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_1();
}}}


void func_1(){
if(!MISC::IS_BIT_SET(Local_487.f_659, 0)){
func_13();
MISC::SET_BIT(&(Local_487.f_659), false);
}
func_2();
}


void func_2(){
int iVar0;
var uVar1[2];
int iVar2;
iVar0=0;
while (iVar0 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2)){
if(func_12(iVar2, 0, 1)){
if(Local_491[iVar0 /*11*/] >=0){
MISC::SET_BIT(&(uVar1[func_11(Local_491[iVar0 /*11*/])]), func_10(Local_491[iVar0 /*11*/]));
func_4(iVar0);
}}}
iVar0++;
}
iVar0=0;
while (iVar0 < 54){
if(!MISC::IS_BIT_SET(uVar1[func_11(iVar0)], func_10(iVar0))){
if(Local_487.f_598[iVar0] >=0){
Local_487.f_598[iVar0]=-1;
}}elseif(Local_487.f_598[iVar0] >=0){
iVar2=PLAYER::INT_TO_PLAYERINDEX(Local_487.f_598[iVar0]);
if(!func_12(iVar2, 0, 1) && MISC::IS_BIT_SET(Local_487.f_653[func_11(iVar0)], func_10(iVar0))){
MISC::CLEAR_BIT(&(Local_487.f_653[func_11(iVar0)]), func_10(iVar0));
MISC::CLEAR_BIT(&(Local_487.f_656[func_11(iVar0)]), func_10(iVar0));
func_3(&(Local_487.f_489[iVar0 /*2*/]));
Local_487.f_598[iVar0]=-1;
}}
iVar0++;
}}


void func_3(var uParam0){
uParam0->f_1=0;
}


void func_4(int iParam0){
int iVar0;
int iVar1;
iVar0=Local_491[iParam0 /*11*/];
if(Local_487.f_598[iVar0]==-1){
Local_487.f_598[iVar0]=iParam0;
}elseif(Local_487.f_598[iVar0]==iParam0){
if(!MISC::IS_BIT_SET(Local_487.f_653[func_11(iVar0)], func_10(iVar0))){
if(MISC::IS_BIT_SET(Local_491[iParam0 /*11*/].f_10, 0) && !MISC::IS_BIT_SET(Local_491[iParam0 /*11*/].f_10, 2)){
MISC::SET_BIT(&(Local_487.f_653[func_11(iVar0)]), func_10(iVar0));
func_9(&(Local_487.f_489[iVar0 /*2*/]), 0, 0);
}}else{
if(MISC::IS_BIT_SET(Local_491[iParam0 /*11*/].f_10, 1) || !func_12(PLAYER::INT_TO_PLAYERINDEX(iParam0), 0, 1)){
iVar1=0;
while (iVar1 < 3){
Local_487.f_217[iVar0 /*4*/][iVar1]=Local_491[iParam0 /*11*/].f_5[iVar1];
Local_487[iVar0 /*4*/][iVar1]=Local_491[iParam0 /*11*/].f_1[iVar1];
Local_487.f_434[iVar0]=Local_491[iParam0 /*11*/].f_9;
MISC::SET_BIT(&(Local_487.f_656[func_11(iVar0)]), func_10(iVar0));
iVar1++;
}}
if(((MISC::IS_BIT_SET(Local_491[iParam0 /*11*/].f_10, 1) || !func_12(PLAYER::INT_TO_PLAYERINDEX(iParam0), 0, 1)) || MISC::IS_BIT_SET(Local_491[iParam0 /*11*/].f_10, 3)) && ((MISC::IS_BIT_SET(Local_491[iParam0 /*11*/].f_10, 2) || MISC::IS_BIT_SET(Local_491[iParam0 /*11*/].f_10, 3)) || func_5(&(Local_487.f_489[iVar0 /*2*/]), func_7(iVar0) + 10000, 0))){
MISC::CLEAR_BIT(&(Local_487.f_653[func_11(iVar0)]), func_10(iVar0));
MISC::CLEAR_BIT(&(Local_487.f_656[func_11(iVar0)]), func_10(iVar0));
func_3(&(Local_487.f_489[iVar0 /*2*/]));
}}}}

int func_5(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_6(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_6(var uParam0, bool bParam1, bool bParam2){
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

int func_7(int iParam0){
if(func_8(iParam0, &Local_206)){
if((Local_207.f_1[0 /*65*/][Local_487[iParam0 /*4*/][0]]==7 && Local_207.f_1[1 /*65*/][Local_487[iParam0 /*4*/][1]]==7) && Local_207.f_1[2 /*65*/][Local_487[iParam0 /*4*/][2]]==7){
return 11000;
}}
return 5500;
}

int func_8(int iParam0, var uParam1){
switch ((uParam1[iParam0 /*21*/])->f_17){
case 4:
if(Global_262145.f_27037){
return 0;
}
return 1;
break;
case 8:
if(Global_262145.f_27038){
return 0;
}
return 1;
break;
}
return 0;
}


void func_9(var uParam0, bool bParam1, bool bParam2){
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

int func_10(int iParam0){
return (iParam0 - func_11(iParam0) * 32);
}

int func_11(int iParam0){
return floor((to_float(iParam0) / 32f));
}

int func_12(int iParam0, bool bParam1, bool bParam2){
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


void func_13(){
int iVar0;
int iVar1;
struct<9> Var2;
Var2=3;
Var2.f_4=3;
iVar0=0;
while (iVar0 < 54){
func_14(iVar0, &Var2, &Local_207, &Local_206);
iVar1=0;
while (iVar1 < 3){
Local_487.f_217[iVar0 /*4*/][iVar1]=Var2.f_4[iVar1];
Local_487[iVar0 /*4*/][iVar1]=Var2[iVar1];
Local_487.f_434[iVar0]=Var2.f_8;
iVar1++;
}
iVar0++;
}}


void func_14(int iParam0, var uParam1, var uParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=0;
while (iVar0 < 3){
iVar4=0;
iVar2=0;
iVar3=0;
iVar2=MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, *uParam2);
(*uParam1)[iVar0]=iVar2;
if(uParam2->f_1[iVar0 /*65*/][iVar2]==0){
iVar3=MISC::GET_RANDOM_INT_IN_RANGE(0, uParam2->f_225);
uParam1->f_4[iVar0]=(IntToFloat(iVar3) + 0.5f);
}else{
iVar1=0;
while (iVar1 < uParam2->f_225){
if(uParam2->f_226[iVar0 /*17*/][iVar1]==uParam2->f_1[iVar0 /*65*/][iVar2]){
iVar4++;
}
iVar1++;
}
iVar3=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
iVar4=0;
iVar1=0;
iVar1=0;
while (iVar1 < uParam2->f_225){
if(uParam2->f_226[iVar0 /*17*/][iVar1]==uParam2->f_1[iVar0 /*65*/][iVar2]){
if(iVar4==iVar3){
uParam1->f_4[iVar0]=to_float(iVar1);
iVar1=uParam2->f_225;
}
iVar4++;
}
iVar1++;
}}
iVar0++;
}
if(func_8(iParam0, uParam3)){
if((uParam2->f_1[0 /*65*/][(*uParam1)[0]]==7 && uParam2->f_1[1 /*65*/][(*uParam1)[1]]==7) && uParam2->f_1[2 /*65*/][(*uParam1)[2]]==7){
iVar2=MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, 12);
uParam1->f_8=iVar2;
}}}


void func_15(){
struct<3> Var0;
struct<3> Var1;
func_332();
if(iLocal_218 > 0){
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
PAD::SET_INPUT_EXCLUSIVE(0, 200);
PAD::SET_INPUT_EXCLUSIVE(2, 200);
PAD::SET_INPUT_EXCLUSIVE(0, 199);
PAD::SET_INPUT_EXCLUSIVE(2, 199);
PAD::DISABLE_CONTROL_ACTION(2, 210, 1);
PAD::SET_INPUT_EXCLUSIVE(0, 210);
PAD::SET_INPUT_EXCLUSIVE(2, 210);
}
if(func_331(&uLocal_235)){
if(!func_5(&uLocal_235, 5000, 1)){
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.2f);
}}
switch (iLocal_218){
case 0:
if(MISC::IS_BIT_SET(uLocal_219, 18)){
STREAMING::REMOVE_ANIM_DICT(func_330());
MISC::CLEAR_BIT(&uLocal_219, 18);
}
if(func_313()){
iLocal_221=0;
MISC::CLEAR_BIT(&uLocal_219, 21);
MISC::CLEAR_BIT(&uLocal_219, 22);
MISC::CLEAR_BIT(&uLocal_219, 30);
MISC::CLEAR_BIT(&uLocal_219, 31);
MISC::CLEAR_BIT(&uLocal_219, 21);
MISC::CLEAR_BIT(&uLocal_219, 22);
func_312(1);
}
break;
case 1:
func_311(iLocal_261);
Local_256.f_0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("SLOT_MACHINE");
break;
case 3:
func_309();
break;
case 2:
if(!func_308()){
func_312(0);
}
break;
case 4:
func_3(&Local_242);
iLocal_252=0;
iLocal_253=0;
PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
func_301(0);
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_4), 7);
if(func_283()){
func_276(0);
func_312(5);
}
break;
case 5:
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing")){
AUDIO::START_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
}
CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(518572876);
func_230();
PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
func_301(0);
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
func_45();
break;
case 6:
PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
func_301(0);
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
if(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_4, 7)){
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_4), 7);
func_34();
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing")){
AUDIO::STOP_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
}
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==4){
if(func_33() < 0.6f){
CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(518572876);
}}
Var0={
PAD::GET_CONTROL_NORMAL(2, 218), PAD::GET_CONTROL_NORMAL(2, 219), 0f 
};
Var1={
PAD::GET_CONTROL_NORMAL(2, 220), PAD::GET_CONTROL_NORMAL(2, 221), 0f 
};
if((func_33() > 0.99f || func_33() < 0f) || ((vmag(Var0) >=0.24f || vmag(Var1) >=0.24f) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2115798116))){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
func_32();
func_312(0);
if(func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
}
if(MISC::IS_BIT_SET(uLocal_219, 18)){
STREAMING::REMOVE_ANIM_DICT(func_330());
MISC::CLEAR_BIT(&uLocal_219, 18);
}
if(HUD::IS_RADAR_HIDDEN()){
HUD::DISPLAY_RADAR(1);
}
func_9(&uLocal_235, 1, 0);
if(MISC::IS_BIT_SET(uLocal_219, 2)){
func_16(0);
MISC::CLEAR_BIT(&uLocal_219, 2);
}}
break;
}}


void func_16(int iParam0){
Global_1057410=iParam0;
}


void func_17(int iParam0, bool bParam1, int iParam2, int iParam3){
var uVar0;
bool bVar1;
bool bVar2;
bool bVar3;
bool bVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
bool bVar9;
bool bVar10;
bool bVar11;
bool bVar12;
bool bVar13;
bool bVar14;
bool bVar15;
bool bVar16;
bool bVar17;
bool bVar18;
bool bVar19;
bool bVar20;
bool bVar21;
bool bVar22;
bool bVar23;
bool bVar24;
bool bVar25;
bool bVar26;
var uVar27;
int iVar28;
if(bParam1){
if(SCRIPT::GET_NO_LOADING_SCREEN()){
SCRIPT::SET_NO_LOADING_SCREEN(0);
}}
if(func_31()){
if(bParam1){
return;
}else{
iParam3=1;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uVar0=iParam2;
PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
}else{
bVar1=true;
bVar2=iParam2 & 2 !=false;
bVar3=iParam2 & 4 !=false;
bVar4=iParam2 & 8 !=false;
bVar5=iParam2 & 16 !=false;
bVar6=iParam2 & 32 !=false;
bVar7=iParam2 & 64 !=false;
bVar8=iParam2 & 128 !=false;
bVar9=iParam2 & 256 !=false;
bVar10=iParam2 & 512 !=false;
bVar11=iParam2 & 1024 !=false;
bVar12=iParam2 & 2048 !=false;
bVar13=iParam2 & 4096 !=false;
bVar14=iParam2 & 8192 !=false;
bVar15=iParam2 & 16384 !=false;
bVar16=iParam2 & 32768 !=false;
bVar17=iParam2 & 65536 !=false;
bVar18=iParam2 & 131072 !=false;
bVar19=iParam2 & 262144 !=false;
bVar20=iParam2 & 524288 !=false;
bVar21=iParam2 & 1048576 !=false;
bVar22=iParam2 & 2097152 !=false;
bVar23=iParam2 & 4194304 !=false;
bVar24=iParam2 & 8388608 !=false;
bVar25=iParam2 & 16777216 !=false;
if(iParam2 & 33554432 !=0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
bVar1=false;
}
if(!func_29()){
bVar26=false;
if(bParam1==1){
bVar26=true;
}
if(bVar16==0 && !bVar21){
bVar26=true;
}
if(bVar10==1){
bVar26=true;
}
if(bVar26){
return;
}}
if(bVar18){
}
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3==1)){
if(iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0)){
return;
}
uVar27=PLAYER::GET_PLAYER_PED(iParam0);
if(!bVar20){
if((bVar19 && bParam1==0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::FADE_OUT_LOCAL_PLAYER(1);
}elseif(bVar14 || (!func_26(PLAYER::PLAYER_ID(), 0) && !func_25())){
ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657589[iParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_22(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_21(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
}}
if(!ENTITY::IS_ENTITY_ATTACHED(uVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
}elseif(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
}
PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, 0);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uVar27)){
PED::FINALIZE_HEAD_BLEND(uVar27);
}
PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==0){
func_20();
func_19();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(!bVar23){
}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}
Global_2657589[iParam0 /*466*/].f_255=0;
if(!bVar24){
bVar3=true;
}
if(Global_2635559.f_2681){
Global_2635559.f_2681=0;
}}else{
if(!func_21(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
}
if(!ENTITY::IS_ENTITY_ATTACHED(uVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
}
if(!bVar16){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
}}
if(func_18(Global_4718592.f_166301)){
ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
}}
if(Global_1575035){
bVar10=false;
}
if(bVar10){
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
}else{
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
}
PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
if(bVar3){
if(!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
}}}
iVar28=0;
if(bVar2){
iVar28 |=2;
}
if(bVar3){
iVar28 |=4;
}
if(bVar4){
iVar28 |=8;
}
if(bVar5){
iVar28 |=16;
}
if(bVar6){
iVar28 |=32;
}
if(bVar7){
iVar28 |=64;
}
if(bVar8){
iVar28 |=128;
}
if(bVar9){
iVar28 |=256;
}
if(bVar10){
iVar28 |=512;
}
if(bVar11){
iVar28 |=1024;
}
if(bVar12){
iVar28 |=2048;
}
if(bVar13){
iVar28 |=4096;
}
PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
}}}


bool func_18(int iParam0){
return iParam0==17;
}


void func_19(){
struct<3> Var0;
Global_2672505.f_1024=0;
Global_2672505.f_1025=0;
Global_2672505.f_1026={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672505.f_1031=-1;
Global_2672505.f_1032=0;
Global_2635559.f_2692={
Var0 
};
}


void func_20(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}

int func_21(int iParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(uParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_22(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(ENTITY::IS_ENTITY_DEAD(iParam1, 0)){}
if(iParam0==1){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(PED::IS_PED_A_PLAYER(iParam1)){
if(!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1))){
iVar0=1;
}}}}
if(iVar0==0){
if(iParam2==1){
if(iParam0==1){
func_24();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), true);
}}
if(func_26(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_23(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_23(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_24(){
int iVar0;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar0=0;
while (iVar0 < 8){
Global_2621446.f_58[iVar0]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
iVar0++;
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), false);
}}}


bool func_25(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


bool func_26(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_27(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_27(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_28();
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

int func_28(){
return Global_1574918;
}

int func_29(){
if(func_30()==0){
return 1;
}
return 0;
}

int func_30(){
return Global_1574632.f_18;
}

int func_31(){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216==-1){
return 1;
}
return 0;
}


void func_32(){
char cVar0[24];
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_256.f_0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_256);
}
Local_256.f_1=-1;
if(iLocal_260 >=0){
StringCopy(&cVar0, "machine_0", 24);
StringIntConCat(&cVar0, Local_206[iLocal_260 /*21*/].f_17, 24);
StringConCat(&cVar0, "a", 24);
if(HUD::IS_NAMED_RENDERTARGET_REGISTERED(&cVar0)){
HUD::RELEASE_NAMED_RENDERTARGET(&cVar0);
}}
iLocal_260=-1;
}


float func_33(){
var uVar0;
uVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uLocal_222);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0)){
return PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0);
}
return -1f;
}


void func_34(){
int iVar0;
int iVar1;
if(Global_1970497 !=-1){
iVar0=(NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1970479);
iVar1=(NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1970480);
if(Global_1970480==-1){
func_38(iVar0);
}else{
func_38(iVar1);
}
func_37();
func_35();
Global_1970479=-1;
Global_1970480=-1;
Global_1970497=-1;
}}


void func_35(){
func_36(joaat("mpply_cas_24h_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}


void func_36(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}}


void func_37(){
func_36(joaat("mpply_cas_cur_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}


void func_38(int iParam0){
int iVar0;
iVar0=func_44();
Global_1970488=(Global_1970488 + iParam0);
func_39(iVar0, iParam0);
func_35();
}


void func_39(int iParam0, int iParam1){
int iVar0;
var uVar1[9];
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
var uVar7;
iVar2=(iParam0 + 1 * 12 - 12);
iVar3=1;
if((iVar2 % 32) + 12 > 32){
iVar3=2;
}
iVar4=floor((to_float(iVar2) / 32f));
if(iVar4 < 0){
return;
}
iVar0=0;
while (iVar0 < iVar3){
if((iVar4 + iVar0) >=9){
return;
}
iVar5=func_43((iVar4 + iVar0));
uVar1[(iVar4 + iVar0)]=func_42(iVar5);
iVar0++;
}
iVar6=func_41(&uVar1, iParam0, 12);
iVar6=(iVar6 + iParam1);
func_40(&uVar1, iParam0, 12, iVar6);
iVar0=0;
while (iVar0 < iVar3){
uVar7=func_43((iVar4 + iVar0));
func_36(uVar7, uVar1[(iVar4 + iVar0)]);
iVar0++;
}}


void func_40(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
int iVar7;
int iVar8;
iVar2=(iParam1 + 1 * iParam2);
iVar3=(iVar2 - iParam2);
iVar4=floor((to_float(iVar3) / 32f));
iVar5=ceil((to_float((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
if(((iVar4 - 1) + iVar5) >=*uParam0){
return;
}
bVar6=false;
iVar7=(iVar3 % 32);
iVar0=0;
while (iVar0 < iVar5){
iVar8=(32 - iVar7);
if(iVar8 > (iParam2 - bVar6)){
iVar8=(iParam2 - bVar6);
}
iVar1=iVar7;
while (iVar1 <=((iVar7 + iVar8) - 1)){
if(MISC::IS_BIT_SET(iParam3, bVar6)){
MISC::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
}else{
MISC::CLEAR_BIT(uParam0[(iVar4 + iVar0)], bVar1);
}
bVar6++;
bVar1++;
}
if(iVar7 > 0){
iVar7=0;
}else{
iVar7=(iVar7 + iVar8);
}
iVar0++;
}}

int func_41(var uParam0, int iParam1, int iParam2){
int iVar0;
bool bVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
iVar3=(iParam1 + 1 * iParam2);
iVar4=(iVar3 - iParam2);
iVar5=floor((to_float(iVar4) / 32f));
iVar6=ceil((to_float((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
if(((iVar5 - 1) + iVar6) >=*uParam0){
return 0;
}
iVar7=0;
iVar8=(iVar4 % 32);
iVar0=0;
while (iVar0 < iVar6){
iVar9=(32 - iVar8);
if(iVar9 > (iParam2 - iVar7)){
iVar9=(iParam2 - iVar7);
}
bVar1=iVar8;
while (bVar1 <=((iVar8 + iVar9) - 1)){
if(MISC::IS_BIT_SET((*uParam0)[(iVar5 + iVar0)], bVar1)){
MISC::SET_BIT(&uVar2, iVar7);
}
bVar7++;
bVar1++;
}
if(iVar8 > 0){
iVar8=0;
}else{
iVar8=(iVar8 + iVar9);
}
iVar0++;
}
return uVar2;
}

int func_42(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_43(int iParam0){
char cVar0[24];
StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
if(iParam0 > 0){
StringConCat(&cVar0, "_", 24);
StringIntConCat(&cVar0, iParam0, 24);
}
return MISC::GET_HASH_KEY(&cVar0);
}

int func_44(){
return func_42(joaat("mpply_cas_cur_gmblng_hr"));
}


void func_45(){
bool bVar0;
struct<6> Var1;
int iVar2;
int iVar3;
int iVar4;
bVar0=true;
func_229();
func_228();
if((((((func_227() || func_226()) || NETWORK::IS_COMMERCE_STORE_OPEN()) || HUD::IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN()) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_225(1)) || HUD::IS_WARNING_MESSAGE_ACTIVE()){
bVar0=false;
}
if(MISC::IS_BIT_SET(Local_487.f_653[func_11(iLocal_259)], func_10(iLocal_259)) && !MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 2)){
if(!func_224()){
func_223(1);
MISC::SET_BIT(&uLocal_219, 13);
}}elseif(MISC::IS_BIT_SET(uLocal_219, 13)){
if(func_224()){
func_223(0);
}
MISC::CLEAR_BIT(&uLocal_219, 13);
}
if(bVar0){
if(PAD::IS_CONTROL_JUST_RELEASED(0, 0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 0)){
iLocal_231++;
if(iLocal_231 > 1){
iLocal_231=0;
}
func_221(iLocal_231);
MISC::CLEAR_BIT(&uLocal_219, false);
}
if(MISC::IS_BIT_SET(uLocal_219, 21) || MISC::IS_BIT_SET(uLocal_219, 22)){
if(((PAD::IS_CONTROL_JUST_RELEASED(0, 189) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 189)) || PAD::IS_CONTROL_JUST_RELEASED(0, 190)) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 190)){
if(MISC::IS_BIT_SET(uLocal_219, 21)){
MISC::SET_BIT(&uLocal_219, 22);
MISC::CLEAR_BIT(&uLocal_219, 21);
}elseif(MISC::IS_BIT_SET(uLocal_219, 22)){
MISC::SET_BIT(&uLocal_219, 21);
MISC::CLEAR_BIT(&uLocal_219, 22);
}
MISC::CLEAR_BIT(&uLocal_219, false);
}
if(PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202)){
MISC::CLEAR_BIT(&uLocal_219, 21);
MISC::CLEAR_BIT(&uLocal_219, 22);
MISC::CLEAR_BIT(&uLocal_219, false);
}}elseif(PAD::IS_CONTROL_JUST_RELEASED(0, 210) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 210)){
MISC::SET_BIT(&uLocal_219, 21);
MISC::CLEAR_BIT(&uLocal_219, false);
return;
}}
if(MISC::IS_BIT_SET(uLocal_220, 2)){
if((((iLocal_223==4 || iLocal_223==10) || iLocal_223==11) || iLocal_223==12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
MISC::CLEAR_BIT(&uLocal_219, false);
MISC::CLEAR_BIT(&uLocal_220, 2);
}}
if(Global_262145.f_26834){
if(!func_331(&Local_242)){
func_6(&Local_242, 1, 0);
}elseif(func_5(&Local_242, 120000, 1)){
func_220(1);
}}
if(!iLocal_253){
uLocal_255=NETWORK::GET_NETWORK_TIME();
iLocal_253=1;
}
if(!iLocal_252){
uLocal_254=NETWORK::GET_NETWORK_TIME();
iLocal_252=1;
}
if(!MISC::IS_BIT_SET(uLocal_219, 3)){
if(iLocal_223==4 || iLocal_223==10){
if(!func_200(iLocal_259)){
func_197(27);
return;
}}
if((((bVar0 && (!MISC::IS_BIT_SET(Local_487.f_653[func_11(iLocal_259)], func_10(iLocal_259)) || MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 2))) && !MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 0)) && MISC::IS_BIT_SET(uLocal_219, 0)) && !(MISC::IS_BIT_SET(uLocal_219, 21) || MISC::IS_BIT_SET(uLocal_219, 22))){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 208)){
if(func_196()){
if(iLocal_223==4 || iLocal_223==10){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(func_192()==2){
func_191("CAS_MG_CTIME", -1);
}else{
func_191("CAS_MG_CBAN", -1);
}
MISC::SET_BIT(&uLocal_219, 6);
}
func_197(27);
}}elseif(func_190() >=(Local_206[iLocal_259 /*21*/].f_16 * iLocal_262)){
if((((iLocal_223==4 || iLocal_223==10) || iLocal_223==11) || iLocal_223==12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
MISC::SET_BIT(&uLocal_219, 30);
MISC::CLEAR_BIT(&uLocal_219, 5);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 208)){
func_189();
}
else{
func_188();
}
func_187();
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), true);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), false);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 3);
MISC::CLEAR_BIT(&uLocal_219, 24);
MISC::SET_BIT(&uLocal_219, 3);
MISC::CLEAR_BIT(&uLocal_219, false);
}}elseif(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_191("SLOTS_NOMON", -1);
}}
if(!MISC::IS_BIT_SET(uLocal_219, 3)){
if((((iLocal_223==4 || iLocal_223==10) || iLocal_223==11) || iLocal_223==12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !MISC::IS_BIT_SET(uLocal_219, 27)){
MISC::SET_BIT(&uLocal_219, 30);
func_179(1, -1, -1, -1);
iLocal_262++;
if(iLocal_262 > 5){
iLocal_262=1;
}
func_178((Local_206[iLocal_259 /*21*/].f_16 * iLocal_262));
if((iLocal_223==4 || iLocal_223==10) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
func_177(0);
}
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 5);
func_179(1, -1, -1, -1);
MISC::CLEAR_BIT(&uLocal_219, false);
}elseif(!PAD::IS_CONTROL_JUST_PRESSED(2, 203)){
MISC::CLEAR_BIT(&uLocal_219, 27);
}
if(PAD::IS_CONTROL_JUST_RELEASED(2, 204) && !MISC::IS_BIT_SET(uLocal_219, 28)){
MISC::SET_BIT(&uLocal_219, 30);
func_179(1, -1, -1, -1);
iLocal_262=5;
iVar3=func_190();
if(iVar3 < (Local_206[iLocal_259 /*21*/].f_16 * iLocal_262)){
iLocal_262=floor(to_float((iVar3 / Local_206[iLocal_259 /*21*/].f_16)));
}
if((iLocal_223==4 || iLocal_223==10) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
func_177(1);
}
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 6);
func_178((Local_206[iLocal_259 /*21*/].f_16 * iLocal_262));
MISC::CLEAR_BIT(&uLocal_219, false);
}elseif(!PAD::IS_CONTROL_JUST_PRESSED(2, 204)){
MISC::CLEAR_BIT(&uLocal_219, 28);
}}
if(iLocal_223==4 || iLocal_223==10){
if(PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202)){
func_197(27);
}}}}}else{
if(!MISC::IS_BIT_SET(uLocal_219, 4)){
if(func_172((Local_206[iLocal_259 /*21*/].f_16 * iLocal_262), &iLocal_486, 0, 0)){
if(iLocal_486==2){
MISC::SET_BIT(&uLocal_219, 4);
Local_242.f_5=(Local_242.f_5 + (Local_206[iLocal_259 /*21*/].f_16 * iLocal_262));
}else{
MISC::CLEAR_BIT(&uLocal_219, 3);
MISC::CLEAR_BIT(&uLocal_219, 24);
MISC::CLEAR_BIT(&uLocal_219, 4);
MISC::CLEAR_BIT(&uLocal_219, 5);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), true);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), false);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
MISC::SET_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 3);
MISC::CLEAR_BIT(&uLocal_219, false);
MISC::SET_BIT(&uLocal_220, 2);
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_191("SLOTS_FAILTR", -1);
}
func_169(10);
}
iLocal_486=0;
}}
if(!MISC::IS_BIT_SET(uLocal_219, 5)){
if(!MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 3)){
if(((iLocal_223==8 || iLocal_223==14) || iLocal_223==9) || iLocal_223==15){
if(func_33() > 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2044168827)){
if(MISC::IS_BIT_SET(uLocal_219, 0)){
MISC::CLEAR_BIT(&uLocal_219, false);
}
MISC::SET_BIT(&uLocal_219, 5);
MISC::SET_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), false);
}}else{
if(MISC::IS_BIT_SET(uLocal_219, 0)){
func_168(0, 0);
func_165(1, -1);
MISC::CLEAR_BIT(&uLocal_219, false);
}
MISC::SET_BIT(&uLocal_219, 5);
MISC::SET_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), false);
}}}elseif(!MISC::IS_BIT_SET(uLocal_219, 24)){
if(MISC::IS_BIT_SET(Local_487.f_653[func_11(iLocal_259)], func_10(iLocal_259))){
func_14(iLocal_259, &uLocal_243, &Local_207, &Local_206);
MISC::SET_BIT(&uLocal_219, 24);
}elseif(Local_487.f_598[iLocal_259] !=PLAYER::PLAYER_ID()){
MISC::CLEAR_BIT(&uLocal_219, 3);
MISC::CLEAR_BIT(&uLocal_219, 24);
MISC::CLEAR_BIT(&uLocal_219, 4);
MISC::CLEAR_BIT(&uLocal_219, 5);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), true);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), false);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
MISC::CLEAR_BIT(&uLocal_219, false);
MISC::SET_BIT(&uLocal_220, 2);
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_191("SLOTS_FAILTR", -1);
}
func_169(10);
}}else{
if(!MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 1)){
Local_206[iLocal_259 /*21*/]=func_163(iLocal_259, Local_207.f_1[0 /*65*/][uLocal_243[0]], Local_207.f_1[1 /*65*/][uLocal_243[1]], Local_207.f_1[2 /*65*/][uLocal_243[2]], 0);
Local_206[iLocal_259 /*21*/].f_1=func_161(iLocal_259, Local_207.f_1[0 /*65*/][uLocal_243[0]], Local_207.f_1[1 /*65*/][uLocal_243[1]], Local_207.f_1[2 /*65*/][uLocal_243[2]], uLocal_243.f_8);
if(Local_206[iLocal_259 /*21*/] > 0){
if(func_123(Local_206[iLocal_259 /*21*/], &iLocal_486, 0)){
if(Local_206[iLocal_259 /*21*/].f_1 > 0){
func_68(Local_206[iLocal_259 /*21*/].f_1);
}
iVar2=0;
while (iVar2 < 3){
Local_491[PLAYER::PLAYER_ID() /*11*/].f_5[iVar2]=uLocal_243.f_4[iVar2];
Local_491[PLAYER::PLAYER_ID() /*11*/].f_1[iVar2]=uLocal_243[iVar2];
iVar2++;
}
Local_491[PLAYER::PLAYER_ID() /*11*/].f_9=uLocal_243.f_8;
func_58();
MISC::SET_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), true);
iLocal_486=0;
}}else{
iVar2=0;
while (iVar2 < 3){
Local_491[PLAYER::PLAYER_ID() /*11*/].f_5[iVar2]=uLocal_243.f_4[iVar2];
Local_491[PLAYER::PLAYER_ID() /*11*/].f_1[iVar2]=uLocal_243[iVar2];
iVar2++;
}
Local_491[PLAYER::PLAYER_ID() /*11*/].f_9=uLocal_243.f_8;
MISC::SET_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), true);
func_58();
func_53((Local_206[iLocal_259 /*21*/].f_16 * iLocal_262));
}}
if(!MISC::IS_BIT_SET(Local_487.f_653[func_11(iLocal_259)], func_10(iLocal_259)) || MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 2)){
if(Local_206[iLocal_259 /*21*/] > 0){
if(MISC::IS_BIT_SET(uLocal_219, 16)){
func_169(22);
}elseif(MISC::IS_BIT_SET(uLocal_219, 14)){
if(MISC::IS_BIT_SET(uLocal_219, 29)){
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 4);
}
else{
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 3);
}
func_169(19);
}else{
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 2);
func_169(18);
}
Var1={
func_52(Local_206[iLocal_259 /*21*/].f_17, 1) 
};
func_50(&Var1);
iVar4=func_48(Local_207.f_1[0 /*65*/][uLocal_243[0]], Local_207.f_1[1 /*65*/][uLocal_243[1]], Local_207.f_1[2 /*65*/][uLocal_243[2]]);
if(iVar4==6){
func_47(Local_206[iLocal_259 /*21*/].f_17, Local_206[iLocal_259 /*21*/]);
}
func_179(2, iVar4, Local_206[iLocal_259 /*21*/], Local_206[iLocal_259 /*21*/].f_1);
}else{
if(MISC::IS_BIT_SET(uLocal_219, 15)){
func_169(24);
}else{
func_169(23);
}
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 1);
Var1={
func_52(Local_206[iLocal_259 /*21*/].f_17, 0) 
};
func_50(&Var1);
}
func_46(Local_206[iLocal_259 /*21*/]);
MISC::CLEAR_BIT(&uLocal_219, 3);
MISC::CLEAR_BIT(&uLocal_219, 4);
MISC::CLEAR_BIT(&uLocal_219, 5);
MISC::CLEAR_BIT(&uLocal_219, 24);
}}}}


void func_46(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_256.f_0, "SET_LAST_WIN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_47(int iParam0, int iParam1){
switch (iParam0){
case 1:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 4);
break;
case 2:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 5);
break;
case 3:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 6);
break;
case 4:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 7);
break;
case 5:
if(iParam1 >=1000000){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 3);
}else{
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 10);
}
break;
case 6:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 8);
break;
case 7:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 2);
break;
case 8:
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_828), 9);
break;
}}

int func_48(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==iParam1 && iParam1==iParam2){
return func_49(iParam0, 3);
}else{
if(iParam0==7){
iVar0++;
}
if(iParam1==7){
iVar0++;
}
if(iParam2==7){
iVar0++;
}
if(iVar0 >=1){
return func_49(7, iVar0);
}}
return 0;
}

int func_49(int iParam0, int iParam1){
switch (iParam0){
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 6:
return 6;
case 7:
if(iParam1==3){
return 7;
}elseif(iParam1==2){
return 8;
}elseif(iParam1==1){
return 9;
}
break;
}
return 0;
}


void func_50(var uParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_256.f_0, "SET_MESSAGE");
func_51(uParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_51(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


struct<6> func_52(int iParam0, bool bParam1){
struct<6> Var0;
int iVar1;
StringCopy(&Var0, "SLOTS_MES", 24);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 17);
if(bParam1){
StringConCat(&Var0, "P", 24);
}else{
StringConCat(&Var0, "N", 24);
}
StringIntConCat(&Var0, iParam0, 24);
if(iVar1 < 10){
StringConCat(&Var0, "0", 24);
StringIntConCat(&Var0, iVar1, 24);
}else{
StringIntConCat(&Var0, iVar1, 24);
}
return Var0;
}


void func_53(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_57();
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar2=func_56();
if(iVar0==0){
func_55();
}elseif((iVar0 - iVar1) >=Global_262145.f_27188){
func_54();
iVar2=0;
}
if((iVar2 - iParam0) >=Global_262145.f_27189){
func_36(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27189);
func_54();
Global_2694477=1;
}else{
func_36(joaat("mpply_casino_chips_won_gd"), (iVar2 - iParam0));
}}


void func_54(){
func_55();
}


void func_55(){
func_36(joaat("mpply_casino_chips_wontim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_56(){
return func_42(joaat("mpply_casino_chips_won_gd"));
}

int func_57(){
return func_42(joaat("mpply_casino_chips_wontim"));
}


void func_58(){
struct<22> Var0;
if(Global_262145.f_26834){
if(Local_206[iLocal_259 /*21*/] > 0){
Local_242.f_3++;
}else{
Local_242.f_4++;
}
Local_242.f_2=(Local_242.f_2 + (Local_206[iLocal_259 /*21*/] - (iLocal_262 * Local_206[iLocal_259 /*21*/].f_16)));
}
if(Global_262145.f_26828){
Var0.f_0=-1867894674;
Var0.f_1=joaat("standard");
Var0.f_2=iLocal_259;
if(func_196()){
switch (func_192()){
case 0:
Var0.f_4=MISC::GET_HASH_KEY("win cutoff");
break;
case 1:
Var0.f_4=MISC::GET_HASH_KEY("loss cutoff");
break;
case 2:
Var0.f_4=MISC::GET_HASH_KEY("time cutoff");
break;
}}elseif(Local_206[iLocal_259 /*21*/] > 0){
Var0.f_4=joaat("win");
}else{
Var0.f_4=joaat("lose");
}
Var0.f_6=(Local_206[iLocal_259 /*21*/] - (iLocal_262 * Local_206[iLocal_259 /*21*/].f_16));
Var0.f_7=func_190();
Var0.f_10=(MISC::IS_BIT_SET(uLocal_219, 20) || MISC::IS_BIT_SET(uLocal_220, 1));
Var0.f_11=func_67(PLAYER::PLAYER_ID());
Var0.f_12=(iLocal_262 * Local_206[iLocal_259 /*21*/].f_16);
Var0.f_14=Local_206[iLocal_259 /*21*/];
if(iLocal_262==5){
Var0.f_5=1;
}else{
Var0.f_5=0;
}
Var0.f_15=Local_206[iLocal_259 /*21*/] > 0;
Var0.f_17=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uLocal_254, NETWORK::GET_NETWORK_TIME()));
Var0.f_18=NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
if(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() !=func_66()){
Var0.f_19=NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
}
Var0.f_21=Local_206[iLocal_259 /*21*/].f_17;
if(func_67(PLAYER::PLAYER_ID())){
Var0.f_20=1983458449;
}elseif(func_65()){
Var0.f_20=1334658487;
}elseif(func_59()){
Var0.f_20=980726932;
}else{
Var0.f_20=939907746;
}
iLocal_252=0;
STATS::PLAYSTATS_CASINO_SLOT_MACHINE(&Var0);
}}

int func_59(){
int iVar0;
if(func_63(PLAYER::PLAYER_ID(), 0)){
iVar0=func_62();
if(iVar0==func_61()){
return 0;
}else{
return func_60(iVar0);
}}
return 0;
}

int func_60(int iParam0){
if(iParam0==func_61()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_404.f_1, 18);
}

int func_61(){
return -1;
}

int func_62(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


bool func_63(int iParam0, bool bParam1){
if(!bParam1){
if(func_64(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_61();
}

int func_64(int iParam0){
if(iParam0 !=func_61()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_61()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}


bool func_65(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_404.f_1, 18);
}

int func_66(){
return -1;
}

int func_67(int iParam0){
if(iParam0 !=func_61()){
return Global_1853910[iParam0 /*862*/].f_267.f_404 !=0;
}
return 0;
}

int func_68(int iParam0){
var uVar0;
var uVar1;
struct<9> Var2[20];
int iVar3;
int iVar4;
int iVar5;
if(Local_206[iLocal_259 /*21*/].f_17==8){
if(iParam0==12){
WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 25, 0, 0);
}else{
func_122(iParam0, &uVar0, &uVar1);
WEAPON::ADD_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), uVar0, uVar1);
}}elseif(Local_206[iLocal_259 /*21*/].f_17==4){
iLocal_205=-1;
iVar4=0;
while (iVar4 < 36){
func_119(iVar4, &(Var2[iVar3 /*9*/]));
if(Var2[iVar3 /*9*/].f_7==iParam0){
if(!func_118(Var2[iVar3 /*9*/], -1)){
iVar3++;
}}
iVar4++;
}
if(iVar3 > 0){
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
func_117(Var2[iVar5 /*9*/], 1, -1);
iLocal_205=Var2[iVar5 /*9*/].f_8;
}else{
func_69(0, "SLOT MACHINE RP", -1827353931, 1223799452, Global_262145.f_27900, 1, -1, 0);
}}
MISC::SET_BIT(&uLocal_219, 16);
return 1;
}


var func__69(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_70(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_70(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_107();
if(func_106(uParam2)){}
if(func_105()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_103(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_102(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_99(0, &iVar1);
break;
case 3:
func_99(1, &iVar1);
break;
case 1:
func_93(&iVar1);
break;
}}
if(iVar1 > Global_1961999){
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
func_90(1165, iVar1, -1);
if(iParam1==0){
func_79((func_89(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 !=-1){
func_90(1166, iVar1, -1);
}
func_73(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_71((func_72(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_71((func_72(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_71(int iParam0){
if(func_105()){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5=iParam0;
func_36(joaat("mpply_globalxp"), iParam0);
}}

int func_72(int iParam0){
if(iParam0 > -1){
if(func_12(iParam0, 0, 1)){
if(iParam0==PLAYER::PLAYER_ID()){
return func_42(joaat("mpply_globalxp"));
}else{
return Global_1853910[iParam0 /*862*/].f_205.f_5;
}}else{
return func_42(joaat("mpply_globalxp"));
}}
return 0;
}


void func_73(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_78(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_76(func_77(&Var0));
if(iVar1==0){
func_75(&Global_1665493, iParam0);
func_74(joaat("mpply_crew_local_xp_0"), Global_1665493);
}elseif(iVar1==1){
func_75(&Global_1665494, iParam0);
func_74(joaat("mpply_crew_local_xp_1"), Global_1665494);
}elseif(iVar1==2){
func_75(&Global_1665495, iParam0);
func_74(joaat("mpply_crew_local_xp_2"), Global_1665495);
}elseif(iVar1==3){
func_75(&Global_1665496, iParam0);
func_74(joaat("mpply_crew_local_xp_3"), Global_1665496);
}elseif(iVar1==4){
func_75(&Global_1665497, iParam0);
func_74(joaat("mpply_crew_local_xp_4"), Global_1665497);
}}}}


void func_74(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}
switch (iParam0){
case joaat("mpply_crew_0_id"):
Global_1665488=iParam1;
break;
case joaat("mpply_crew_1_id"):
Global_1665490=iParam1;
break;
case joaat("mpply_crew_2_id"):
Global_1665490=iParam1;
break;
case joaat("mpply_crew_3_id"):
Global_1665491=iParam1;
break;
case joaat("mpply_crew_4_id"):
Global_1665492=iParam1;
break;
case joaat("mpply_crew_local_xp_0"):
Global_1665493=iParam1;
break;
case joaat("mpply_crew_local_xp_1"):
Global_1665494=iParam1;
break;
case joaat("mpply_crew_local_xp_2"):
Global_1665495=iParam1;
break;
case joaat("mpply_crew_local_xp_3"):
Global_1665496=iParam1;
break;
case joaat("mpply_crew_local_xp_4"):
Global_1665497=iParam1;
break;
case joaat("mpply_became_cheater_num"):
Global_1665498=iParam1;
break;
case joaat("mpply_friendly"):
Global_1665499=iParam1;
break;
case joaat("mpply_offensive_language"):
Global_1665500=iParam1;
break;
case joaat("mpply_griefing"):
Global_1665501=iParam1;
break;
case joaat("mpply_helpful"):
Global_1665502=iParam1;
break;
case joaat("mpply_offensive_tagplate"):
Global_1665503=iParam1;
break;
case joaat("mpply_offensive_ugc"):
Global_1665504=iParam1;
break;
default:
break;
}}


void func_75(var uParam0, int iParam1){
*uParam0=(*uParam0 + iParam1);
}

int func_76(int iParam0){
if(iParam0==Global_1665488){
return 0;
}elseif(iParam0==Global_1665489){
return 1;
}elseif(iParam0==Global_1665490){
return 2;
}elseif(iParam0==Global_1665491){
return 3;
}elseif(iParam0==Global_1665492){
return 4;
}else{
return -1;
}
return -1;
}

int func_77(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694468;
}}
return Global_2694468;
}
struct<13> func_78(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


void func_79(int iParam0, int iParam1, int iParam2){
if(func_105()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10070==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < Global_1665638[func_88(-1)]){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==Global_1665638[func_88(-1)]){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0==0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
if(iParam2==0){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0 < 0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
return;
}}
if(func_87(PLAYER::PLAYER_ID())){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1=iParam0;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6=func_85(iParam0, 1);
}
func_84(640, iParam0, -1, 1);
func_83(641, func_85(iParam0, 1), -1, 1, 0);
Global_1665638[func_88(-1)]=iParam0;
func_80(-1109644434, 7, 0);
}}


void func_80(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_82(iParam1, iParam2)){
iVar0=func_81();
Global_2694420[iVar0]=iParam1;
Global_2694431[iVar0]=iParam0;
}}

int func_81(){
int iVar0;
int iVar1;
iVar0=9;
iVar1=0;
while (iVar1 <=9){
if(Global_2694420[iVar1]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_82(int iParam0, var uParam1){
if(Global_1575048){
return 0;
}
if(iParam0==22){
return 1;
}
if((((((((uParam1 || !Global_1575060) || iParam0==3) || iParam0==10) || iParam0==11) || iParam0==27) || iParam0==28) || iParam0==29) || iParam0==30){
return 1;
}else{
return 0;
}
return 1;
}


void func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_88(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_84(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_88(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_88(iParam2)]=iParam1;
break;
case 789:
Global_1665572[func_88(iParam2)]=iParam1;
break;
case 790:
Global_1665578[func_88(iParam2)]=iParam1;
break;
case 791:
Global_1665584[func_88(iParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_88(iParam2)]=iParam1;
break;
case 778:
Global_1665536[func_88(iParam2)]=iParam1;
break;
case 779:
Global_1665542[func_88(iParam2)]=iParam1;
break;
case 780:
Global_1665548[func_88(iParam2)]=iParam1;
break;
case 781:
Global_1665554[func_88(iParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_88(iParam2)]=iParam1;
break;
case 768:
Global_1665506[func_88(iParam2)]=iParam1;
break;
case 769:
Global_1665512[func_88(iParam2)]=iParam1;
break;
case 770:
Global_1665518[func_88(iParam2)]=iParam1;
break;
case 771:
Global_1665524[func_88(iParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_88(iParam2)]=iParam1;
break;
case 758:
Global_1665596[func_88(iParam2)]=iParam1;
break;
case 759:
Global_1665602[func_88(iParam2)]=iParam1;
break;
case 760:
Global_1665608[func_88(iParam2)]=iParam1;
break;
case 761:
Global_1665614[func_88(iParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_88(iParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_88(iParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_88(iParam2)]=iParam1;
break;
case 640:
Global_1665638[func_88(iParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_88(iParam2)]=iParam1;
break;
case 1878:
Global_2851325[0 /*3*/][func_88(iParam2)]=iParam1;
break;
case 2269:
Global_2851325[1 /*3*/][func_88(iParam2)]=iParam1;
break;
case 2932:
Global_2851325[2 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3061:
Global_2851325[3 /*3*/][func_88(iParam2)]=iParam1;
break;
case 12424:
Global_2851504[func_88(iParam2)]=iParam1;
break;
case 765:
Global_1665650[func_88(iParam2)]=iParam1;
break;
case 766:
Global_1665656[func_88(iParam2)]=iParam1;
break;
case 767:
Global_1665662[func_88(iParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_88(iParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_88(iParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_88(iParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_88(iParam2)]=iParam1;
break;
case 3056:
Global_2851413[0 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3057:
Global_2851413[1 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3058:
Global_2851413[2 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3059:
Global_2851413[3 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3060:
Global_2851413[4 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3639:
Global_2851507[0 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3640:
Global_2851507[1 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3641:
Global_2851507[2 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3642:
Global_2851507[3 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3643:
Global_2851507[4 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3644:
Global_2851523[0 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3645:
Global_2851523[1 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3646:
Global_2851523[2 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3647:
Global_2851523[3 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3648:
Global_2851523[4 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3224:
Global_2851413[5 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3230:
Global_2851325[4 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3666:
Global_2851539[func_88(iParam2)]=iParam1;
break;
case 3667:
Global_2851548[func_88(iParam2)]=iParam1;
break;
case 3668:
Global_2851542[func_88(iParam2)]=iParam1;
break;
case 3669:
Global_2851551[func_88(iParam2)]=iParam1;
break;
case 3670:
Global_2851545[func_88(iParam2)]=iParam1;
break;
case 3671:
Global_2851554[func_88(iParam2)]=iParam1;
break;
case 3692:
Global_2851557[func_88(iParam2)]=iParam1;
break;
case 3232:
Global_2851413[6 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3233:
Global_2851325[5 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3237:
Global_2851413[7 /*3*/][func_88(iParam2)]=iParam1;
break;
case 3235:
Global_2851325[6 /*3*/][func_88(iParam2)]=iParam1;
break;
case 4022:
Global_2851413[8 /*3*/][func_88(iParam2)]=iParam1;
break;
case 4023:
Global_2851325[7 /*3*/][func_88(iParam2)]=iParam1;
break;
case 4025:
Global_2851413[9 /*3*/][func_88(iParam2)]=iParam1;
break;
case 4026:
Global_2851325[8 /*3*/][func_88(iParam2)]=iParam1;
break;
case 4028:
Global_2851413[10 /*3*/][func_88(iParam2)]=iParam1;
break;
case 4029:
Global_2851325[9 /*3*/][func_88(iParam2)]=iParam1;
break;
case 4031:
Global_2851413[11 /*3*/][func_88(iParam2)]=iParam1;
break;
case 4032:
Global_2851325[10 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6112:
Global_2851413[12 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6113:
Global_2851325[11 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6170:
Global_2851413[13 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6171:
Global_2851325[12 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6548:
Global_2851413[14 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6549:
Global_2851325[13 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6561:
Global_2851413[15 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6562:
Global_2851325[14 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6564:
Global_2851413[16 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6565:
Global_2851325[15 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6567:
Global_2851413[17 /*3*/][func_88(iParam2)]=iParam1;
break;
case 6568:
Global_2851325[16 /*3*/][func_88(iParam2)]=iParam1;
break;
case 7286:
Global_2851325[17 /*3*/][func_88(iParam2)]=iParam1;
break;
case 7288:
Global_2851325[18 /*3*/][func_88(iParam2)]=iParam1;
break;
case 7290:
Global_2851325[19 /*3*/][func_88(iParam2)]=iParam1;
break;
case 8013:
Global_2851325[20 /*3*/][func_88(iParam2)]=iParam1;
break;
case 8285:
Global_2851560[func_88(iParam2)]=iParam1;
break;
case 8286:
Global_2851563[func_88(iParam2)]=iParam1;
break;
case 8287:
Global_2851566[func_88(iParam2)]=iParam1;
break;
case 8288:
Global_2851569[func_88(iParam2)]=iParam1;
break;
case 8289:
Global_2851572[func_88(iParam2)]=iParam1;
break;
case 8290:
Global_2851575[func_88(iParam2)]=iParam1;
break;
case 8291:
Global_2851578[func_88(iParam2)]=iParam1;
break;
case 8292:
Global_2851581[func_88(iParam2)]=iParam1;
break;
case 8293:
Global_2851584[func_88(iParam2)]=iParam1;
break;
case 8294:
Global_2851587[func_88(iParam2)]=iParam1;
break;
case 8295:
Global_2851590[func_88(iParam2)]=iParam1;
break;
case 8296:
Global_2851593[func_88(iParam2)]=iParam1;
break;
case 8297:
Global_2851596[func_88(iParam2)]=iParam1;
break;
case 8905:
Global_2851599[func_88(iParam2)]=iParam1;
break;
case 8537:
Global_2851325[21 /*3*/][func_88(iParam2)]=iParam1;
break;
case 8982:
Global_2851413[23 /*3*/][func_88(iParam2)]=iParam1;
break;
case 8980:
Global_2851325[22 /*3*/][func_88(iParam2)]=iParam1;
break;
case 8985:
Global_2851413[24 /*3*/][func_88(iParam2)]=iParam1;
break;
case 8983:
Global_2851325[23 /*3*/][func_88(iParam2)]=iParam1;
break;
case 9624:
Global_2851325[24 /*3*/][func_88(iParam2)]=iParam1;
break;
case 9913:
Global_2851325[25 /*3*/][func_88(iParam2)]=iParam1;
break;
case 10443:
Global_2851413[27 /*3*/][func_88(iParam2)]=iParam1;
break;
case 10441:
Global_2851325[26 /*3*/][func_88(iParam2)]=iParam1;
break;
case 10446:
Global_2851413[28 /*3*/][func_88(iParam2)]=iParam1;
break;
case 10444:
Global_2851325[27 /*3*/][func_88(iParam2)]=iParam1;
break;
default:
break;
}}

int func_85(int iParam0, bool bParam1){
if(bParam1){}
return func_86(iParam0, 0);
}

int func_86(int iParam0, int iParam1){
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
if(Global_297011[iVar3]==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(Global_297011[iVar3] < iParam0){
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

int func_87(int iParam0){
if(iParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, iParam0);
}
return 1;
}

int func_88(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_28();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_89(int iParam0){
if(Global_1574632.f_9==0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return Global_1665638[func_88(-1)];
}elseif(func_87(iParam0)){
return Global_1853910[iParam0 /*862*/].f_205.f_1;
}}}else{
return Global_1665638[func_88(-1)];
}
return 0;
}


void func_90(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_92(iParam0, func_88(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_91(iParam0)){
func_83(iParam0, iVar0, iParam2, 1, 0);
}else{
func_84(iParam0, iVar0, iParam2, 1);
}}

int func_91(int iParam0){
if(Global_1665487){
switch (iParam0){
case 788:
case 789:
case 790:
case 791:
case 8729:
case 778:
case 779:
case 780:
case 781:
case 8731:
case 768:
case 769:
case 770:
case 771:
case 8733:
case 758:
case 759:
case 760:
case 761:
case 8735:
case 1304:
case 7236:
case 640:
case 1279:
case 765:
case 766:
case 767:
case 8734:
case 9538:
case 11803:
case 1237:
case 1878:
case 2269:
case 2932:
case 3061:
case 12424:
case 3056:
case 3057:
case 3058:
case 3059:
case 3060:
case 3235:
case 3237:
case 3639:
case 3640:
case 3641:
case 3642:
case 3643:
case 3644:
case 3645:
case 3646:
case 3647:
case 3648:
case 3230:
case 3224:
case 3666:
case 3667:
case 3668:
case 3669:
case 3670:
case 3671:
case 3692:
case 3233:
case 3232:
case 4023:
case 4022:
case 4026:
case 4025:
case 4029:
case 4028:
case 4032:
case 4031:
case 6113:
case 6112:
case 6171:
case 6170:
case 6536:
case 6535:
case 6549:
case 6548:
case 6562:
case 6561:
case 6565:
case 6564:
case 6568:
case 6567:
case 7286:
case 7288:
case 7290:
case 8285:
case 8286:
case 8287:
case 8288:
case 8289:
case 8290:
case 8291:
case 8292:
case 8293:
case 8294:
case 8295:
case 8296:
case 8297:
case 8905:
case 8013:
case 8537:
case 8980:
case 8982:
case 8983:
case 8985:
case 9624:
case 9913:
case 10441:
case 10443:
case 10444:
case 10446:
return 1;
break;
}}
return 0;
}

int func_92(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_88(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_93(int iParam0){
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
if(PLAYER::GET_PLAYER_TEAM(iVar5)==iVar1 || func_96(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1)){
iVar2++;
if(iVar5 !=PLAYER::PLAYER_ID()){
if(func_95(PLAYER::PLAYER_ID(), iVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=round((func_94(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_94(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_94(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}

int func_95(int iParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_78(iParam0) 
};
Global_2764216={
func_78(iParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764203)){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764216)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764133, 35, &Global_2764203);
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764168, 35, &Global_2764216);
if(Global_2764133==Global_2764168){
return 1;
}}}}
return 0;
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3){
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
bVar0=Global_1058070.f_14[iParam0];
if(iParam3 !=-1){
bVar0=iParam3;
}
if(bVar0 < 17 && bVar0 > -1){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0)){
bVar1=Global_1058070.f_14[iParam1];
if(bVar1 < 17 && bVar1 > -1){
switch (iParam0){
case 0:
if(!func_97(iParam0, bVar0, iParam1, bVar1) || !func_97(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_97(iParam0, bVar0, iParam1, bVar1) || !func_97(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_97(iParam0, bVar0, iParam1, bVar1) || !func_97(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_97(iParam0, bVar0, iParam1, bVar1) || !func_97(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
}
break;
}}}}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 0);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 1);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 2);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 3);
default:
}
break;
case 1:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 4);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 5);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 6);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 7);
default:
}
break;
case 2:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 8);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 9);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 10);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 11);
default:
}
break;
case 3:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 12);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 13);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 14);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 15);
default:
}
break;
}
return 0;
}

int func_97(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==iParam2){
return 1;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3)){
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
if(((!func_12(iVar1, 1, 1) || func_26(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_98(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
iVar2=PLAYER::GET_PLAYER_PED(iVar1);
if(PED::IS_PED_INJURED(iVar2)){
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


var func__98(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}


void func_99(bool bParam0, int iParam1){
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
if(func_12(iVar4, 0, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_95(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
iVar4=iVar0;
if(func_12(iVar4, 1, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
if(func_100(PLAYER::PLAYER_ID(), iVar4) <=20f){
iVar1++;
if(func_95(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_94(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_94(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_100(int iParam0, int iParam1){
return vdist(func_101(iParam0), func_101(iParam1));
return 0f;
}


Vector3 func__101(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_102(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_94(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_103(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_89(PLAYER::PLAYER_ID())){
iParam0=-func_89(PLAYER::PLAYER_ID());
}}
if(func_104(8000, 0, 0) > 0){
if(func_104(8000, 0, 0) < (iParam0 + func_89(PLAYER::PLAYER_ID()))){
iParam0=(func_104(8000, 0, 0) - func_89(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_104(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return Global_297011[iParam0];
}

int func_105(){
return 1;
}

int func_106(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}

int func_107(){
int iVar0;
if(func_116(PLAYER::PLAYER_ID()) || func_115(PLAYER::PLAYER_ID())){
if(Global_262145.f_10102 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10102;
}}elseif(func_112() || func_108(PLAYER::PLAYER_ID())){
if(Global_262145.f_23282 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_23282;
}}elseif(Global_262145.f_7095 > 30000){
iVar0=30000;
}else{
iVar0=Global_262145.f_7095;
}
return iVar0;
}

int func_108(int iParam0){
return func_109(func_110(iParam0));
}

int func_109(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_110(int iParam0){
if(func_111(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_111(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_112(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_114();
}
return func_113(Global_4718592.f_113724);
}

int func_113(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 16){
if(Global_262145.f_5042[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


var func__114(){
return Global_2683864.f_19;
}


bool func_115(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==2;
}


bool func_116(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==7;
}


void func_117(var uParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_28();
}
STATS::SET_PACKED_STAT_BOOL_CODE(uParam0, iParam1, iParam2);
}


bool func_118(var uParam0, int iParam1){
if(iParam1==-1){
iParam1=func_28();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(uParam0, iParam1);
}


void func_119(int iParam0, var uParam1){
uParam1->f_8=iParam0;
switch (iParam0){
case 0:
*uParam1=27147;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_27", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_27", 24);
}
uParam1->f_7=1;
break;
case 1:
*uParam1=27148;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_28", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_28", 24);
}
uParam1->f_7=1;
break;
case 2:
*uParam1=27149;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_33", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_33", 24);
}
uParam1->f_7=1;
break;
case 3:
*uParam1=27150;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_34", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_34", 24);
}
uParam1->f_7=1;
break;
case 4:
*uParam1=27151;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_35", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_35", 24);
}
uParam1->f_7=1;
break;
case 5:
*uParam1=27152;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_36", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_36", 24);
}
uParam1->f_7=1;
break;
case 6:
*uParam1=27153;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_37", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_37", 24);
}
uParam1->f_7=1;
break;
case 7:
*uParam1=27154;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_38", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_38", 24);
}
uParam1->f_7=1;
break;
case 8:
*uParam1=27155;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_39", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_39", 24);
}
uParam1->f_7=1;
break;
case 9:
*uParam1=27156;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_40", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_40", 24);
}
uParam1->f_7=1;
break;
case 10:
*uParam1=27157;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_41", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_41", 24);
}
uParam1->f_7=1;
break;
case 11:
*uParam1=27158;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_42", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_42", 24);
}
uParam1->f_7=1;
break;
case 12:
*uParam1=27159;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_6", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_6", 24);
}
uParam1->f_7=1;
break;
case 13:
*uParam1=27160;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_7", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_7", 24);
}
uParam1->f_7=1;
break;
case 14:
*uParam1=27161;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_8", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_8", 24);
}
uParam1->f_7=1;
break;
case 15:
*uParam1=27162;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_9", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_9", 24);
}
uParam1->f_7=1;
break;
case 16:
*uParam1=27163;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_U_20_10", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_U_18_10", 24);
}
uParam1->f_7=1;
break;
case 17:
*uParam1=27164;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_116", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_116", 24);
}
uParam1->f_7=2;
break;
case 18:
*uParam1=27165;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_117", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_117", 24);
}
uParam1->f_7=2;
break;
case 19:
*uParam1=27166;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_118", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_118", 24);
}
uParam1->f_7=2;
break;
case 20:
*uParam1=27167;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PEY_119", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PEY_119", 24);
}
uParam1->f_7=2;
break;
case 21:
*uParam1=27168;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_0", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_0", 24);
}
uParam1->f_7=2;
break;
case 22:
*uParam1=27169;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PE_0_1", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PE_0_1", 24);
}
uParam1->f_7=2;
break;
case 23:
*uParam1=27170;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_6", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_6", 24);
}
uParam1->f_7=2;
break;
case 24:
*uParam1=27171;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_7", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_7", 24);
}
uParam1->f_7=2;
break;
case 25:
*uParam1=27172;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_8", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_8", 24);
}
uParam1->f_7=2;
break;
case 26:
*uParam1=27173;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_PW_2_9", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_PW_2_9", 24);
}
uParam1->f_7=2;
break;
case 27:
*uParam1=27174;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_24", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_24", 24);
}
uParam1->f_7=3;
break;
case 28:
*uParam1=27175;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_25", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_25", 24);
}
uParam1->f_7=3;
break;
case 29:
*uParam1=27176;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_26", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_26", 24);
}
uParam1->f_7=3;
break;
case 30:
*uParam1=27177;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_29", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_29", 24);
}
uParam1->f_7=3;
break;
case 31:
*uParam1=27178;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_30", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_30", 24);
}
uParam1->f_7=3;
break;
case 32:
*uParam1=27179;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_31", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_31", 24);
}
uParam1->f_7=3;
break;
case 33:
*uParam1=27180;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_32", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_32", 24);
}
uParam1->f_7=3;
break;
case 34:
*uParam1=27181;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_43", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_43", 24);
}
uParam1->f_7=3;
break;
case 35:
*uParam1=27182;
if(func_120()){
StringCopy(&(uParam1->f_1), "CLO_VWM_DECL_44", 24);
}else{
StringCopy(&(uParam1->f_1), "CLO_VWF_DECL_44", 24);
}
uParam1->f_7=3;
break;
}}


bool func_120(){
return func_121(PLAYER::PLAYER_ID());
}

int func_121(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}


void func_122(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 1:
*uParam1=joaat("AMMO_PISTOL");
*uParam2=1500;
break;
case 2:
*uParam1=joaat("AMMO_PISTOL");
*uParam2=3000;
break;
case 3:
*uParam1=joaat("AMMO_SMG");
*uParam2=2000;
break;
case 4:
*uParam1=joaat("AMMO_SMG");
*uParam2=4000;
break;
case 5:
*uParam1=joaat("AMMO_SHOTGUN");
*uParam2=2000;
break;
case 6:
*uParam1=joaat("AMMO_SHOTGUN");
*uParam2=4000;
break;
case 7:
*uParam1=joaat("AMMO_RIFLE");
*uParam2=2500;
break;
case 8:
*uParam1=joaat("AMMO_RIFLE");
*uParam2=5000;
break;
case 9:
*uParam1=joaat("AMMO_MG");
*uParam2=5500;
break;
case 10:
*uParam1=joaat("AMMO_SNIPER");
*uParam2=1000;
break;
case 11:
*uParam1=joaat("AMMO_MINIGUN");
*uParam2=7000;
break;
}}


bool func_123(int iParam0, int iParam1, int iParam2){
return func_124(iParam0, 3, iParam1, iParam2, -1);
}

int func_124(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
struct<7> Var5;
if(iParam0 <=0){}elseif(!func_160(iParam1)){}else{
iVar0=func_190();
iVar1=(Global_262145.f_27186 - iVar0);
iVar2=0;
if(iParam1==0){
iVar3=func_158();
if(iVar1 > iVar3){
iVar1=iVar3;
}}
if(iParam0 > iVar1){
iVar2=(iVar1 + iVar0);
}else{
iVar2=(iParam0 + iVar0);
}
if(func_139(uParam2, iParam1, (iVar2 - iVar0))){
iVar4=(func_190() - Global_1970467);
func_138(iVar4, 1);
func_136();
func_135();
Global_1970467=(Global_1970467 + iVar4);
if(iParam1==0){
func_129(iVar4);
Global_2694477=1;
}elseif(iParam1==3){
func_128(iVar4);
if(iVar4 >=Global_262145.f_27194){
Global_2694476=1;
}elseif(iVar4 >=Global_262145.f_27193){
Global_2694477=1;
}}
Var5.f_0=func_127(iParam1);
Var5.f_1=func_126(iParam1, iParam3, iParam4);
if(func_125(iParam1)){
Var5.f_2=iVar4;
}else{
Var5.f_2=0;
}
Var5.f_3=iVar4;
Var5.f_4=iParam1;
Var5.f_5=(MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
Var5.f_6=Global_1970467;
STATS::PLAYSTATS_CASINO_CHIP(&Var5);
}else{
return 0;
}}
return 1;
}

int func_125(int iParam0){
switch (iParam0){
case 0:
case 1:
case 10:
return 1;
break;
}
return 0;
}

int func_126(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam1==-1){
switch (iParam0){
case 0:
if(iParam2 > -1){
iVar0=(19 + iParam2);
}else{
iVar0=19;
}
break;
case 1:
iVar0=21;
break;
case 4:
iVar0=22;
break;
case 5:
iVar0=23;
break;
case 6:
iVar0=24;
break;
case 7:
iVar0=25;
break;
case 9:
iVar0=26;
break;
case 10:
if(iParam2 > -1){
iVar0=(27 + iParam2);
}else{
iVar0=27;
}
break;
case 11:
iVar0=29;
break;
}}else{
switch (iParam1){
case 0:
if(iParam0==2){
iVar0=1;
}elseif(iParam0==3){
iVar0=2;
}elseif(iParam0==8){
iVar0=3;
}
break;
case 1:
if(iParam0==2){
iVar0=4;
}elseif(iParam0==3){
iVar0=5;
}elseif(iParam0==8){
iVar0=6;
}
break;
case 2:
if(iParam0==2){
iVar0=7;
}elseif(iParam0==3){
iVar0=8;
}elseif(iParam0==8){
iVar0=9;
}
break;
case 3:
if(iParam0==2){
iVar0=10;
}elseif(iParam0==3){
iVar0=11;
}elseif(iParam0==8){
iVar0=12;
}
break;
case 4:
if(iParam0==2){
iVar0=13;
}elseif(iParam0==3){
iVar0=14;
}elseif(iParam0==8){
iVar0=15;
}
break;
case 5:
if(iParam0==2){
iVar0=16;
}elseif(iParam0==3){
iVar0=17;
}elseif(iParam0==8){
iVar0=18;
}
break;
}}
return iVar0;
}

int func_127(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 0:
iVar0=-2043662707;
break;
case 1:
iVar0=-1612659516;
break;
case 2:
iVar0=-1304782539;
break;
case 3:
iVar0=1196301501;
break;
case 4:
iVar0=-1964607937;
break;
case 5:
iVar0=-2125268726;
break;
case 6:
iVar0=1138851024;
break;
case 11:
iVar0=1138851024;
break;
case 7:
iVar0=1848798713;
break;
case 8:
iVar0=1196301501;
break;
case 9:
iVar0=-1297103179;
break;
case 10:
iVar0=1754365518;
break;
}
return iVar0;
}


void func_128(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_57();
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar2=func_56();
if(iVar0==0){
func_55();
}elseif((iVar0 - iVar1) >=Global_262145.f_27188){
func_54();
iVar2=0;
}
if((iParam0 + iVar2) >=Global_262145.f_27190){
func_36(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27190);
func_54();
Global_2694477=1;
}else{
func_36(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
}}


void func_129(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_134();
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar2=func_133();
if(iVar0==0){
func_132();
}elseif((iVar0 - iVar1) >=Global_262145.f_27187){
func_131();
iVar2=0;
}
if(iParam0 + iVar2) > func_130(){
func_36(joaat("mpply_casino_chips_pur_gd"), func_130());
func_131();
}else{
func_36(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
}}

int func_130(){
if(func_67(PLAYER::PLAYER_ID())){
return Global_262145.f_26982;
}
return Global_262145.f_26981;
}


void func_131(){
func_132();
}


void func_132(){
func_36(joaat("mpply_casino_chips_purtim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_133(){
return func_42(joaat("mpply_casino_chips_pur_gd"));
}

int func_134(){
return func_42(joaat("mpply_casino_chips_purtim"));
}


void func_135(){
if(MISC::IS_BIT_SET(Global_1970540, 6)){
MISC::SET_BIT(&Global_1970540, 9);
func_9(&Global_1970543, 0, 0);
}}


void func_136(){
if(func_137()){
MISC::SET_BIT(&Global_1970540, true);
}}


bool func_137(){
return (MISC::IS_BIT_SET(Global_1970540, 6) || MISC::IS_BIT_SET(Global_1970540, 5));
}


void func_138(int iParam0, int iParam1){
if(iParam0 < 0){
return;
}
MISC::SET_BIT(&Global_1970540, 6);
Global_1970541=iParam0;
Global_1970542=iParam1;
}


bool func_139(var uParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
int iVar4;
int iVar5;
iVar0=iParam2;
iVar1=1;
bVar2=func_125(iParam1);
if(!bVar2){
iVar0=0;
iVar1=0;
}
if(*uParam0==3 || *uParam0==2){
*uParam0=0;
}
if(func_157()){
if(*uParam0==0){
if(func_156() !=-1){
return 0;
}
iVar3=657241867;
iVar4=func_127(iParam1);
iVar5=-22148635;
if(func_160(iParam1)){
iVar5=-126744038;
}
if(func_152(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3)){
if(func_152(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3)){
if(func_147()){
*uParam0=1;
}else{
*uParam0=3;
}}else{
*uParam0=3;
}}else{
*uParam0=3;
}}elseif(*uParam0==1){
if(func_146(func_156())){
if(func_145(func_156())==2){
NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEE(func_144(func_156()));
if(func_160(iParam1)){
MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
}else{
MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
}
*uParam0=2;
}else{
*uParam0=3;
}
func_140(func_156());
}}}elseif(iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0)){
if(func_160(iParam1)){
MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
}else{
MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
}
*uParam0=2;
}else{
*uParam0=3;
}
return *uParam0 !=1;
}


void func_140(int iParam0){
bool bVar0;
bVar0=false;
if(!func_157()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_143(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_141(&(Global_4535172[iParam0 /*85*/]));
}}


void func_141(var uParam0){
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
func_142(&(uParam0->f_14));
func_142(&(uParam0->f_14.f_13));
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


void func_142(var uParam0){
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

int func_143(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}

int func_144(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66;
}
return -1;
}

int func_145(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2;
}
return 0;
}

int func_146(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2 !=1;
}
return 0;
}

int func_147(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
bVar0=false;
if(!func_157()){
bVar0=true;
}
iVar1=1;
iVar2=func_156();
if(iVar2==-1){
return 0;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_28()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
if(func_151(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1)==1){
Global_4536674=1;
}
return 0;
}
if(Global_2695821){
if(Global_4535172[iVar2 /*85*/].f_66.f_6==1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6==-1303831698){
Global_4536675=1;
return 0;
}}}
iVar3=func_144(iVar2);
if(iVar3 !=2147483647){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3)){
Global_4535172[iVar2 /*85*/].f_66.f_13=1;
Global_4535172[iVar2 /*85*/].f_66.f_12=0;
Global_4535172[iVar2 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
if(bVar0){
Global_4535172[iVar2 /*85*/].f_66.f_8=1;
Global_4535172[iVar2 /*85*/].f_66.f_12=1;
}
Global_4535172[iVar2 /*85*/].f_66.f_18=0;
if(bVar0 || iVar1){
func_148(Global_4535172[iVar2 /*85*/], iVar2);
}
Global_4536659=1;
return 1;
}}
return 0;
}


void func_148(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
struct<3> Var0;
int iVar1;
if(iParam19 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=45913685;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam19;
iVar1=func_150(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_149();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_149(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__150(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_151(int iParam0, int iParam1, int iParam2){
if(iParam0==-433440095 || iParam0==1474183246){
switch (iParam1){
case 1940862352:
if(iParam2 >=10000){
return 1;
}else{
return 0;
}
break;
case -31156877:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case -1100963799:
if(iParam2 >=1000){
return 1;
}else{
return 2;
}
break;
case 1982688246:
return 0;
break;
case 1718438689:
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
case 312105838:
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
case -664597565:
case 599804707:
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
case 443347049:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
case 1240683675:
case 1241904665:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case -2017925037:
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
case 1668610896:
case -2032529561:
return 1;
break;
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case 291576838:
case -1276678868:
case 711665950:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 283351220:
case 1108628223:
case -876847842:
case 68030260:
return 2;
break;
default:
return 0;
break;
}
switch (iParam1){
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case -1224479447:
case 1220095570:
case 2050320631:
case 592672421:
case -842062976:
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
return 1;
break;
case 1775876058:
case -518651910:
return 2;
break;
}}elseif((iParam0==-1134853190 || iParam0==925407197) || iParam0==-1589378882){
return 0;
}
return 1;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
bool bVar0;
int iVar1;
struct<4> Var2;
bVar0=false;
if(!func_157()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_28()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695821){
if(iParam1==1067618600 || iParam1==-1303831698){
Global_4536675=1;
return 0;
}}}
if(iParam2==0){
return 0;
}
iVar1=func_156();
if(iVar1==-1){
if(!func_154(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9)){
return 0;
}}
if(iVar1 !=-1){
if(iParam8 !=0 && func_153(iParam1)){
Var2.f_0=iParam8;
Var2.f_1=iParam2;
Var2.f_2=iParam5;
Var2.f_3=iParam6;
}else{
Var2.f_0=iParam2;
Var2.f_1=iParam8;
Var2.f_2=iParam5;
Var2.f_3=iParam6;
}
Global_4535172[iVar1 /*85*/].f_66.f_1=Var2.f_2;
Global_4535172[iVar1 /*85*/].f_66.f_15=Var2.f_0;
Global_4535172[iVar1 /*85*/].f_66.f_16=Var2.f_1;
if(bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4)){
return 1;
}}
return 0;
}

int func_153(int iParam0){
switch (iParam0){
case -221807075:
case -1224924353:
case -2121967344:
case 1394405165:
case -2052814106:
case 1701289268:
case -1796535835:
case -1928802392:
case 581564040:
case 23048035:
case 2117376854:
case -1377881127:
case -504675202:
case 1906937290:
case -1616616027:
case -1799524201:
case 269396419:
case 69656641:
case -103880010:
case -1494913648:
return 1;
break;
}
return 0;
}

int func_154(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5){
bool bVar0;
int iVar1;
bool bVar2;
var uVar3;
bVar0=false;
if(!func_157()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_28()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695821){
if(iParam2==1067618600 || iParam2==-1303831698){
Global_4536675=1;
return 0;
}}}
bVar2=false;
iVar1=0;
while (iVar1 < 15){
if(Global_4535172[iVar1 /*85*/].f_66.f_2==0){
bVar2=true;
}elseif(Global_4535172[iVar1 /*85*/].f_66.f_5==1){
return 0;
}
iVar1++;
}
if(!bVar2){
return 0;
}
*iParam0=0;
if(!bVar0){
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE()){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}
if(bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, uParam3, uParam4)){
*iParam0=func_155(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
return 1;
}
return 0;
}

int func_155(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_157()){
uParam0=iVar0 + 900;
}
Global_4535172[iVar0 /*85*/].f_66.f_2=1;
Global_4535172[iVar0 /*85*/].f_66.f_1=iParam5;
Global_4535172[iVar0 /*85*/].f_66.f_3=iParam1;
Global_4535172[iVar0 /*85*/].f_66.f_4=iParam2;
Global_4535172[iVar0 /*85*/].f_66.f_7=uParam3;
Global_4535172[iVar0 /*85*/].f_66.f_5=0;
Global_4535172[iVar0 /*85*/].f_66=uParam0;
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
if(iParam1==-1135378931 && bParam10){
func_148(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}

int func_156(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(func_144(iVar0) !=2147483647){
if(func_143(iVar0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_157(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_158(){
int iVar0;
int iVar1;
int iVar2;
iVar0=(func_130() - func_133());
iVar1=(Global_262145.f_27186 - func_190());
iVar2=func_159();
if(iVar0 > iVar1){
iVar0=iVar1;
}
if(iVar0 > iVar2){
iVar0=iVar2;
}
return iVar0;
}

int func_159(){
int iVar0;
int iVar1;
iVar0=func_130();
if(iVar0 <=0){
return 0;
}
if(MONEY::NETWORK_CASINO_CAN_BUY_CHIPS_PVC()){
if(MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0)){
iVar1=iVar0;
}else{
iVar1=(MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
}}elseif(MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 1)){
iVar1=iVar0;
}else{
iVar1=MONEY::NETWORK_GET_EVC_BALANCE();
}
return iVar1;
}

int func_160(int iParam0){
if((iParam0==1 || iParam0==2) || iParam0==10){
return 0;
}
return 1;
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(iParam4 >=0 && func_8(iParam0, &Local_206)){
if((iParam1==7 && iParam2==7) && iParam3==7){
return func_162(Local_206[iParam0 /*21*/].f_17, iParam4);
}}
return 0;
}

int func_162(int iParam0, int iParam1){
switch (iParam0){
case 8:
switch (iParam1){
case 0:
return 3;
break;
case 1:
return 5;
break;
case 2:
return 12;
break;
case 3:
return 8;
break;
case 4:
return 11;
break;
case 5:
return 1;
break;
case 6:
return 4;
break;
case 7:
return 6;
break;
case 8:
return 9;
break;
case 9:
return 7;
break;
case 10:
return 10;
break;
case 11:
return 2;
break;
}
break;
case 4:
switch (iParam1){
case 0:
case 3:
case 6:
case 9:
return 1;
break;
case 1:
case 4:
case 7:
case 10:
return 2;
break;
case 2:
case 5:
case 8:
case 11:
return 3;
break;
}
break;
default:
break;
}
return 0;
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
if(bParam4){}
MISC::CLEAR_BIT(&uLocal_219, 14);
MISC::CLEAR_BIT(&uLocal_219, 15);
MISC::CLEAR_BIT(&uLocal_219, 16);
MISC::CLEAR_BIT(&uLocal_219, 29);
MISC::CLEAR_BIT(&uLocal_220, false);
if(iParam1==iParam2 && iParam2==iParam3){
iVar1=func_164(iParam1, 3);
iVar1=(iVar1 * (iLocal_262 * Local_206[iParam0 /*21*/].f_16));
if(iParam1 >=5){
MISC::SET_BIT(&uLocal_219, 14);
if(iParam1==6){
MISC::SET_BIT(&uLocal_219, 29);
}}elseif(iParam1 >=2){
MISC::SET_BIT(&uLocal_220, false);
}
return iVar1;
}else{
if(iParam1==7){
iVar0++;
}
if(iParam2==7){
iVar0++;
}
if(iParam3==7){
iVar0++;
}
if(iVar0 >=1){
if(bParam4){
}
iVar1=func_164(7, iVar0);
iVar1=(iVar1 * (iLocal_262 * Local_206[iParam0 /*21*/].f_16));
return iVar1;
}}
if(iParam1==iParam2 && iParam1 >=5){
MISC::SET_BIT(&uLocal_219, 15);
}
return 0;
}

int func_164(int iParam0, int iParam1){
switch (iParam0){
case 1:
return Local_207.f_278[1];
case 2:
return Local_207.f_278[2];
case 3:
return Local_207.f_278[3];
case 4:
return Local_207.f_278[4];
case 5:
return Local_207.f_278[5];
case 6:
return Local_207.f_278[6];
case 7:
if(iParam1==3){
return Local_207.f_278[7];
}elseif(iParam1==2){
return Local_207.f_278[8];
}elseif(iParam1==1){
return Local_207.f_278[9];
}
break;
}
return 0;
}


void func_165(bool bParam0, int iParam1){
int iVar0;
if(!func_167(&iVar0, 0, iParam1)){
return;
}
if(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23270.f_6071[iVar0]){
HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
Global_23270.f_6071[iVar0]=0;
}
if(Global_23270.f_6057[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23270.f_6057[iVar0]=0;
}
if(Global_23270.f_6064[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23270.f_6064[iVar0]=0;
}
if(bParam0){
func_166(&(Global_23270.f_6103[iVar0 /*10*/]));
Global_23270.f_6164[iVar0]=0;
}else{
Global_23270.f_6164[iVar0]=0;
}}


void func_166(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_167(var uParam0, bool bParam1, int iParam2){
char cVar0[64];
int iVar1;
int iVar2;
int iVar3;
if(iParam2==-1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
iParam2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
}}
StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
StringIntConCat(&cVar0, iParam2, 64);
iVar1=MISC::GET_HASH_KEY(&cVar0);
iVar3=-1;
iVar2=0;
while (iVar2 < 6){
if(Global_23270.f_6164[iVar2]==iVar1){
*uParam0=iVar2;
return 1;
}elseif(Global_23270.f_6164[iVar2]==0){
iVar3=iVar2;
}
iVar2++;
}
if(bParam1){
if(iVar3 !=-1){
Global_23270.f_6164[iVar3]=iVar1;
*uParam0=iVar3;
return 1;
}}
return 0;
}


void func_168(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
float fVar2;
iVar0=0;
while (iVar0 < 256){
StringCopy(&(Global_23270.f_79[iVar0 /*6*/]), "", 24);
iVar1=0;
while (iVar1 < 4){
Global_23270.f_2387[iVar0 /*5*/][iVar1]=0;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 40){
StringCopy(&(Global_2695072[iVar0 /*16*/]), "", 64);
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23270.f_4309[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23270.f_4566[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23270.f_4824[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23270.f_5532[iVar0]=0;
Global_23270.f_5670[iVar0]=0;
Global_23270.f_5799[iVar0]=0;
Global_23270.f_6322[iVar0]=0f;
Global_23270.f_5928[iVar0]=0;
Global_23270.f_6188[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
Global_23270.f_5499[iVar0]=0;
Global_23270.f_5511[iVar0]=0f;
Global_23270.f_5505[iVar0]=-1f;
Global_23270.f_5518[iVar0]=0;
Global_23270.f_5526[iVar0]=1;
iVar0++;
}
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
Global_23270.f_5450[iVar0]=-1;
Global_23270.f_5465[iVar0]=363;
Global_23270.f_5480[iVar0]=32;
iVar0++;
}
iVar0=0;
while (iVar0 < 64){
StringCopy(&(Global_23270.f_6463[iVar0 /*16*/]), "", 64);
StringCopy(&(Global_23270.f_7488[iVar0 /*16*/]), "", 64);
iVar0++;
}
if(bParam1){
iVar0=0;
while (iVar0 < 256){
Global_23270.f_1616[iVar0]=0;
iVar0++;
}}
StringCopy(&(Global_4540953.f_16), "", 16);
Global_4540953.f_20=-1;
Global_23270=0;
Global_23270.f_5661=0;
Global_23270.f_5662=0;
Global_23270.f_5663=0;
Global_23270.f_5665=0;
Global_23270.f_5666=0;
Global_23270.f_5667=0;
Global_23270.f_5664=0;
Global_23270.f_6317=0;
Global_23270.f_6457=0;
Global_23270.f_6182=0;
Global_23270.f_6181=0;
Global_23270.f_6183=0;
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5159=0;
Global_23270.f_5160=0;
Global_23270.f_5161=0;
Global_23270.f_5162=0;
Global_23270.f_5163=0;
Global_23270.f_5164=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5093[iVar0]=0;
iVar0++;
}
Global_23270.f_5165=0;
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_61=0;
Global_4540953.f_62=0;
Global_4540953.f_63=0;
Global_4540953.f_64=0;
Global_4540953.f_65=0;
Global_4540953.f_66=0;
iVar0=0;
while (iVar0 < 4){
Global_4540953.f_25[iVar0]=0;
iVar0++;
}
Global_4540953.f_67=0;
StringCopy(&(Global_23270.f_1), "", 16);
Global_23270.f_5517=0f;
Global_23270.f_74=0;
Global_23270.f_75=0;
Global_23270.f_76=0;
Global_23270.f_77=0;
Global_23270.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5[iVar0]=0;
iVar0++;
}
Global_23270.f_6187=0;
Global_23270.f_6186=0;
Global_23270.f_6184=0;
Global_23270.f_6185=0;
Global_23270.f_5166=0;
Global_23270.f_5167=0;
Global_23270.f_5668=10;
Global_23270.f_5669=0;
Global_23270.f_6319=0f;
Global_23270.f_6320=0f;
Global_23270.f_6171=0;
Global_23270.f_6172=0;
Global_23270.f_6173=0f;
Global_23270.f_6174=0;
Global_23270.f_6176=0;
Global_23270.f_6175=0;
Global_23270.f_6177=0;
Global_23270.f_6178=0;
Global_23270.f_6179=0;
Global_23270.f_6180=0;
Global_23270.f_8888=0;
iVar0=0;
while (iVar0 < 2){
Global_23270.f_6451[iVar0]=-1;
Global_23270.f_6454[iVar0]=-1;
iVar0++;
}
Global_23270.f_5524=0f;
Global_23270.f_5495=0;
Global_23270.f_5525=0;
iVar0=0;
while (iVar0 < Global_23270.f_6458){
Global_23270.f_6458[iVar0]=0;
iVar0++;
}
Global_23270.f_8867=0;
Global_23270.f_8862=0;
Global_23270.f_8872=0;
Global_23270.f_8877=0;
Global_23270.f_8882=0;
Global_23270.f_8884=0;
Global_23270.f_8890=0;
Global_23267=0.05f;
Global_23268=0.05f;
Global_23269=0.225f;
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(bParam0){
Global_23269=(0.225f * (1.777778f / fVar2));
}elseif(fVar2 < 1.77777f){
Global_23269=(0.225f * (1.777778f / fVar2));
}else{
Global_23269=0.225f;
}}


void func_169(int iParam0){
char cVar0[24];
int iVar1;
func_170(iParam0, &Local_257);
uLocal_222=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_224, Local_225, 2, Local_257.f_17, Local_257.f_16, 1065353216, 0, 1065353216);
if(iParam0==5 || iParam0==6){
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_222, func_330(), &Local_257, 4f, -8f, 13, 16, 1148846080, 0);
}elseif(iParam0==11 || iParam0==12){
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_222, func_330(), &Local_257, 8f, -8f, 13, 16, 1148846080, 0);
}elseif(iParam0==8 || iParam0==14){
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_222, func_330(), &Local_257, 8f, -4f, 13, 16, 1148846080, 0);
}elseif(((iParam0==0 || iParam0==1) || iParam0==2) || iParam0==3){
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_222, func_330(), &Local_257, 2f, -1.5f, 13, 16, 2f, 0);
}else{
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_222, func_330(), &Local_257, 2f, -1.5f, 13, 16, 1148846080, 0);
if(iParam0==15 || iParam0==9){
StringCopy(&cVar0, "vw_prop_casino_slot_0", 24);
StringIntConCat(&cVar0, Local_206[iLocal_259 /*21*/].f_17, 24);
StringConCat(&cVar0, "a", 24);
iVar1=MISC::GET_HASH_KEY(&cVar0);
StringConCat(&Local_257, "_SLOTMACHINE", 64);
NETWORK::NETWORK_ADD_MAP_ENTITY_TO_SYNCHRONISED_SCENE(uLocal_222, iVar1, Local_224, func_330(), &Local_257, 2f, -1.5f, 13);
}}
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_222);
iLocal_223=iParam0;
}


void func_170(int iParam0, char* sParam1){
struct<8> Var0;
sParam1->f_17=1;
sParam1->f_16=0;
switch (iParam0){
case 0:
StringCopy(sParam1, "enter_left", 64);
break;
case 2:
StringCopy(sParam1, "enter_right", 64);
break;
case 1:
StringCopy(sParam1, "enter_left_short", 64);
break;
case 3:
StringCopy(sParam1, "enter_right_short", 64);
break;
case 4:
StringCopy(sParam1, "base_idle", 64);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==4){
func_171(4, &Var0, 1, 0);
}else{
func_171(4, &Var0, 5, 0);
}
StringConCat(sParam1, &Var0, 64);
break;
case 5:
StringCopy(sParam1, "press_betone_a", 64);
break;
case 6:
StringCopy(sParam1, "press_betmax_a", 64);
break;
case 7:
StringCopy(sParam1, "press_autospin", 64);
break;
case 8:
StringCopy(sParam1, "press_spin", 64);
func_171(8, &Var0, 2, 0);
StringConCat(sParam1, &Var0, 64);
break;
case 9:
StringCopy(sParam1, "pull_spin", 64);
func_171(8, &Var0, 2, 0);
StringConCat(sParam1, &Var0, 64);
break;
case 10:
StringCopy(sParam1, "betidle_idle", 64);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==4){
func_171(10, &Var0, 1, 0);
}else{
func_171(10, &Var0, 3, 0);
}
StringConCat(sParam1, &Var0, 64);
break;
case 11:
StringCopy(sParam1, "betidle_press_betone", 64);
func_171(11, &Var0, 3, 0);
StringConCat(sParam1, &Var0, 64);
break;
case 12:
StringCopy(sParam1, "betidle_press_betmax", 64);
func_171(12, &Var0, 3, 0);
StringConCat(sParam1, &Var0, 64);
break;
case 13:
StringCopy(sParam1, "betidle_press_autospin", 64);
break;
case 14:
StringCopy(sParam1, "betidle_press_spin", 64);
func_171(14, &Var0, 3, 0);
StringConCat(sParam1, &Var0, 64);
break;
case 15:
StringCopy(sParam1, "betidle_pull_spin", 64);
func_171(15, &Var0, 2, 0);
StringConCat(sParam1, &Var0, 64);
break;
case 16:
StringCopy(sParam1, "betidle_to_base_transition", 64);
break;
case 17:
StringCopy(sParam1, "spinning", 64);
func_171(17, &Var0, 3, 0);
StringConCat(sParam1, &Var0, 64);
sParam1->f_16=1;
sParam1->f_17=0;
break;
case 18:
StringCopy(sParam1, "win", 64);
if(MISC::IS_BIT_SET(uLocal_220, 0)){
func_171(18, &Var0, 4, 0);
}else{
func_171(18, &Var0, 7, 4);
}
StringConCat(sParam1, &Var0, 64);
break;
case 19:
StringCopy(sParam1, "win_big", 64);
func_171(19, &Var0, 3, 0);
StringConCat(sParam1, &Var0, 64);
break;
case 20:
StringCopy(sParam1, "win_to_spinning_wheel", 64);
break;
case 21:
StringCopy(sParam1, "spinning_wheel", 64);
sParam1->f_16=1;
sParam1->f_17=0;
break;
case 22:
StringCopy(sParam1, "win_spinning_wheel", 64);
break;
case 23:
StringCopy(sParam1, "lose", 64);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
if(iVar1 >=9){
func_171(23, &Var0, 6, 3);
}else{
func_171(23, &Var0, 3, 0);
}
StringConCat(sParam1, &Var0, 64);
break;
case 24:
StringCopy(sParam1, "lose_cruel", 64);
func_171(24, &Var0, 2, 0);
StringConCat(sParam1, &Var0, 64);
break;
case 25:
StringCopy(sParam1, "exit_left", 64);
sParam1->f_16=0;
sParam1->f_17=0;
break;
case 26:
StringCopy(sParam1, "betidle_left", 64);
sParam1->f_16=0;
sParam1->f_17=0;
break;
case 27:
StringCopy(sParam1, "exit_right", 64);
sParam1->f_16=0;
sParam1->f_17=0;
break;
case 28:
StringCopy(sParam1, "betidle_right", 64);
sParam1->f_16=0;
sParam1->f_17=0;
break;
}}


void func_171(int iParam0, char* sParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
iVar1=-1;
if(iParam2 > 1){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
if(iParam0==4){
iVar1=iLocal_226;
}elseif(iParam0==10){
iVar1=iLocal_227;
}
if(iVar0==iVar1){
iVar0++;
if(iVar0 >=iParam2){
iVar0=0;
}}}
switch (iVar0){
case 0:
StringCopy(sParam1, "_a", 4);
break;
case 1:
StringCopy(sParam1, "_b", 4);
break;
case 2:
StringCopy(sParam1, "_c", 4);
break;
case 3:
StringCopy(sParam1, "_d", 4);
break;
case 4:
StringCopy(sParam1, "_e", 4);
break;
case 5:
StringCopy(sParam1, "_f", 4);
break;
case 6:
StringCopy(sParam1, "_g", 4);
break;
}
if(iParam0==4){
iLocal_226=iVar0;
}elseif(iParam0==10){
iLocal_227=iVar0;
}}

int func_172(int iParam0, var uParam1, int iParam2, bool bParam3){
if(func_157() && *uParam1==1){
bParam3=false;
}
if(!bParam3 || func_174(iParam0)){
return func_173(iParam0, 2, uParam1, iParam2, -1, -1);
}else{
*uParam1=3;
}
return 1;
}

int func_173(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
int iVar2;
struct<8> Var3;
if(iParam0 <=0){}elseif(func_160(iParam1)){}else{
iVar0=func_190();
iVar1=(iVar0 - iParam0);
if(iVar1 < 0 && (!func_157() || *uParam2 !=1)){
iVar1=iVar0;
iParam0=iVar0;
}
if(func_139(uParam2, iParam1, iParam0)){
iVar2=(Global_1970467 - func_190());
if(iParam1==1){
Global_2694476=1;
}elseif(iVar2 >=Global_262145.f_27195){
Global_2694477=1;
}
func_138(iVar2, 0);
func_136();
func_135();
Global_1970467=(Global_1970467 - iVar2);
Var3.f_0=func_127(iParam1);
Var3.f_1=func_126(iParam1, iParam3, iParam4);
if(func_125(iParam1)){
Var3.f_2=iVar2;
}else{
Var3.f_2=0;
}
Var3.f_3=iVar2;
Var3.f_4=iParam1;
Var3.f_5=(MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
Var3.f_6=Global_1970467;
Var3.f_7=iParam5;
STATS::PLAYSTATS_CASINO_CHIP(&Var3);
}else{
return 0;
}}
return 1;
}

int func_174(int iParam0){
int iVar0;
if(func_196()){
return 0;
}
iVar0=func_190();
if(iVar0 < iParam0){
return 0;
}
return 1;
}


void func_175(int iParam0, int iParam1, int iParam2){
var uVar0;
uVar0=func_176(iParam1);
switch (iParam2){
case 1:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "no_win", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 2:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "small_win", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 3:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "big_win", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 4:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "jackpot", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 5:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "place_bet", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 6:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "place_max_bet", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 7:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spinning", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 8:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "start_spin", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 9:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "wheel_stop_clunk", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 10:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "wheel_stop_on_prize", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 11:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "welcome_stinger", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 12:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spin_wheel", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
case 13:
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spin_wheel_win", PLAYER::GET_PLAYER_PED(iParam0), uVar0, 1, 20);
break;
}}


char* func_176(int iParam0){
switch (iParam0){
case 1:
return "dlc_vw_casino_slot_machine_ak_player_sounds";
case 2:
return "dlc_vw_casino_slot_machine_ir_player_sounds";
case 3:
return "dlc_vw_casino_slot_machine_rsr_player_sounds";
case 4:
return "dlc_vw_casino_slot_machine_fs_player_sounds";
case 5:
return "dlc_vw_casino_slot_machine_ds_player_sounds";
case 6:
return "dlc_vw_casino_slot_machine_kd_player_sounds";
case 7:
return "dlc_vw_casino_slot_machine_td_player_sounds";
case 8:
return "dlc_vw_casino_slot_machine_hz_player_sounds";
default:
}
return "";
}


void func_177(int iParam0){
if(iParam0==0){
if(iLocal_223==4 || (iLocal_223==16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))){
func_169(5);
}elseif(iLocal_223==10 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
func_169(11);
}}elseif(iParam0==1){
if(iLocal_223==4 || (iLocal_223==16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))){
func_169(6);
}elseif(iLocal_223==10 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
func_169(12);
}}}


void func_178(int iParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_256.f_0, "SET_BET");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_179(int iParam0, int iParam1, int iParam2, int iParam3){
bool bVar0;
struct<2> Var1;
char cVar2[24];
int iVar3;
int iVar4;
int iVar5;
if(iLocal_239 !=iParam0){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}
switch (iParam0){
case 1:
func_186("SLOTS_HELPB", Local_206[iLocal_259 /*21*/].f_16, Local_206[iLocal_259 /*21*/].f_16 * 5);
break;
case 2:
case 3:
if(iParam1==1 && Local_206[iLocal_259 /*21*/].f_17==8){
StringCopy(&cVar2, "SLOTS_HELPW1b", 24);
}else{
StringCopy(&cVar2, "SLOTS_HELPW", 24);
if(iParam1 >=0){
StringIntConCat(&cVar2, iParam1, 24);
}
if((iParam1==9 || iParam1==8) || iParam1==7){
StringIntConCat(&cVar2, Local_206[iLocal_259 /*21*/].f_17, 24);
}}
if(func_8(iLocal_259, &Local_206)){
if(iParam1==7 && iParam3 > 0){
if(Local_206[iLocal_259 /*21*/].f_17==8){
if(iParam3 !=12){
func_122(iParam3, &iVar3, &iVar4);
WEAPON::GET_MAX_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar3, &iVar5);
if(iVar5 < iVar4){
if(iVar3==joaat("AMMO_PISTOL")){
StringIntConCat(&cVar2, 1, 24);
}
elseif(iVar3==joaat("AMMO_SMG")){
StringIntConCat(&cVar2, 3, 24);
}
elseif(iVar3==joaat("AMMO_SHOTGUN")){
StringIntConCat(&cVar2, 5, 24);
}
elseif(iVar3==joaat("AMMO_RIFLE")){
StringIntConCat(&cVar2, 7, 24);
}
else{
StringIntConCat(&cVar2, iParam3, 24);
}
StringConCat(&cVar2, "a", 24);
}else{
StringIntConCat(&cVar2, iParam3, 24);
StringConCat(&cVar2, "b", 24);
}}else{
StringIntConCat(&cVar2, iParam3, 24);
}
}
elseif(Local_206[iLocal_259 /*21*/].f_17==4){
bVar0=true;
if(iLocal_205==-1){
StringCopy(&cVar2, "SLOTS_HELPW74b", 24);
func_185(&cVar2, Global_262145.f_27900);
}else{
func_119(iLocal_205, &Var1);
StringCopy(&cVar2, "SLOTS_HELPW74a", 24);
func_180(&cVar2, &(Var1.f_1), iParam2);
}
}}}
if(!bVar0){
func_185(&cVar2, iParam2);
}
func_9(&uLocal_240, 1, 0);
break;
}
iLocal_239=iParam0;
}}

int func_180(char* sParam0, char* sParam1, int iParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_181(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_181(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_184() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_26(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_182(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944061.f_5[iVar0 /*53*/]=iParam0;
Global_1944061.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944061.f_5[iVar0 /*53*/].f_2[0]=uParam4;
Global_1944061.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944061.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944061.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944061.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_182(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_183(iVar0);
return iVar0;
}
iVar0++;
}
Global_1944061++;
if(Global_1944061 > 5){
Global_1944061=5;
return Global_1944061;
}
return (Global_1944061 - 1);
}


void func_183(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_184(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_185(char[4] cParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}


void func_186(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}


void func_187(){
if(iLocal_239 !=0){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}
iLocal_239=0;
}}


void func_188(){
if(iLocal_223==4 || (iLocal_223==16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))){
func_169(8);
}elseif(((iLocal_223==10 || iLocal_223==11) || iLocal_223==12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
func_169(14);
}}


void func_189(){
if(iLocal_223==4 || (iLocal_223==16 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))){
func_169(9);
}elseif(((iLocal_223==10 || iLocal_223==11) || iLocal_223==12) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
func_169(15);
}}

int func_190(){
return func_92(8251, -1, 0);
}


void func_191(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_192(){
if(func_195() <=0){
return 0;
}
if(func_194() <=0){
return 1;
}
if(func_193()){
return 2;
}
return 3;
}


bool func_193(){
return Global_1970486 !=0;
}

int func_194(){
return (Global_262145.f_27189 + func_56());
}

int func_195(){
return (Global_262145.f_27190 - func_56());
}


bool func_196(){
return func_192() !=3;
}


void func_197(int iParam0){
struct<8> Var0;
func_220(0);
if(iLocal_259 !=-1){
if(MISC::IS_BIT_SET(uLocal_219, 23)){
Var0={
func_199(Local_206[iLocal_259 /*21*/].f_17) 
};
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
MISC::CLEAR_BIT(&uLocal_219, 23);
}}
func_198(-1);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), false);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), true);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 3);
MISC::CLEAR_BIT(&uLocal_219, 3);
MISC::CLEAR_BIT(&uLocal_219, 4);
MISC::CLEAR_BIT(&uLocal_219, 5);
MISC::CLEAR_BIT(&uLocal_219, 24);
MISC::CLEAR_BIT(&uLocal_219, 21);
MISC::CLEAR_BIT(&uLocal_219, 22);
iLocal_262=1;
func_312(6);
func_169(iParam0);
func_187();
}


void func_198(int iParam0){
if(iParam0 >=0){
iLocal_260=iParam0;
}
iLocal_259=iParam0;
Local_491[PLAYER::PLAYER_ID() /*11*/]=iParam0;
iLocal_261=-1;
}


struct<8> func_199(int iParam0){
struct<8> Var0;
switch (iParam0){
case 1:
StringCopy(&Var0, "CasinoUI_Slots_Angel", 32);
break;
case 2:
StringCopy(&Var0, "CasinoUI_Slots_Impotent", 32);
break;
case 3:
StringCopy(&Var0, "CasinoUI_Slots_Ranger", 32);
break;
case 4:
StringCopy(&Var0, "CasinoUI_Slots_Fame", 32);
break;
case 5:
StringCopy(&Var0, "CasinoUI_Slots_Deity", 32);
break;
case 6:
StringCopy(&Var0, "CasinoUI_Slots_Knife", 32);
break;
case 7:
StringCopy(&Var0, "CasinoUI_Slots_Diamond", 32);
break;
case 8:
StringCopy(&Var0, "CasinoUI_Slots_Evacuator", 32);
break;
}
return Var0;
}

int func_200(int iParam0){
struct<3> Var0;
bool bVar1;
var uVar2;
if(func_219()){
return 0;
}
if(func_218(0, &uVar2)){
StringCopy(&Var0, "SLOTS_REGBAN", 24);
bVar1=true;
}elseif(func_196()){
if(func_192()==2){
StringCopy(&Var0, "CAS_MG_CTIME", 24);
bVar1=true;
}else{
StringCopy(&Var0, "CAS_MG_CBAN", 24);
bVar1=true;
}}elseif(!func_65() && !func_59()){
StringCopy(&Var0, "CAS_MG_MEMB2", 24);
bVar1=true;
}elseif(func_190() <=0){
StringCopy(&Var0, "CAS_MG_NOCHIPS1", 24);
bVar1=true;
}elseif(func_190() < Local_206[iParam0 /*21*/].f_16){
StringCopy(&Var0, "CAS_MG_LOWCHIPS1", 24);
bVar1=true;
}elseif((((((((Global_262145.f_26962 || (Global_262145.f_26969 && Local_206[iParam0 /*21*/].f_17==1)) || (Global_262145.f_26967 && Local_206[iParam0 /*21*/].f_17==2)) || (Global_262145.f_26964 && Local_206[iParam0 /*21*/].f_17==3)) || (Global_262145.f_26965 && Local_206[iParam0 /*21*/].f_17==4)) || (Global_262145.f_26968 && Local_206[iParam0 /*21*/].f_17==5)) || (Global_262145.f_26966 && Local_206[iParam0 /*21*/].f_17==6)) || (Global_262145.f_26963 && Local_206[iParam0 /*21*/].f_17==7)) || (Global_262145.f_26970 && Local_206[iParam0 /*21*/].f_17==8)){
StringCopy(&Var0, "SLOTS_ENTERB", 24);
bVar1=true;
}elseif(func_216()){
StringCopy(&Var0, "SLOTS_ENTERB", 24);
bVar1=true;
}
if((((func_215() || func_214()) || func_213()) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT()){
bVar1=true;
MISC::SET_BIT(&uLocal_219, 6);
}
if(func_207()){
bVar1=true;
MISC::SET_BIT(&uLocal_219, 6);
}
if(bVar1){
if(MISC::ARE_STRINGS_EQUAL(&Var0, "CAS_MG_MEMB2")){
if(!func_205("CAS_MG_MEMB2", func_206(1))){
func_204("CAS_MG_MEMB2", func_206(1));
}
MISC::SET_BIT(&uLocal_219, 6);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 52)){
HUD::CLEAR_HELP(1);
func_203();
func_312(2);
}}elseif(!MISC::IS_BIT_SET(uLocal_219, 6)){
func_187();
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_191(&Var0, -1);
MISC::SET_BIT(&uLocal_219, 6);
}}
if(iLocal_258 !=-1){
func_201(&iLocal_258);
}
return 0;
}
return 1;
}


void func_201(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_202(*iParam0);
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

int func_202(int iParam0){
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


void func_203(){
if(!MONEY::NETWORK_CAN_SPEND_MONEY(func_206(0), 0, 1, 0, -1, 0)){
func_191("MAITRD_M_D0E", -1);
}elseif(func_60(PLAYER::PLAYER_ID())){}elseif(MISC::IS_BIT_SET(Global_1950108.f_5, 31)){}elseif(Global_4536666 !=0){}else{
MISC::SET_BIT(&(Global_1950108.f_5), 30);
}}


void func_204(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


bool func_205(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_206(bool bParam0){
if(bParam0){
return 500;
}
return 500;
}

int func_207(){
int iVar0;
if(func_63(PLAYER::PLAYER_ID(), 1)){
iVar0=func_62();
if(func_12(iVar0, 1, 1) && MISC::IS_BIT_SET(Global_1853910[iVar0 /*862*/].f_267.f_404.f_3, 6)){
return 1;
}
if((func_111(PLAYER::PLAYER_ID(), 0) && func_211(PLAYER::PLAYER_ID())) || func_208(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}

int func_208(int iParam0){
if(func_210(iParam0) !=func_61()){
return func_210(iParam0)==func_209(iParam0);
}
return 0;
}

int func_209(int iParam0){
if(iParam0 !=func_61()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_61();
}

int func_210(int iParam0){
return Global_1894573[iParam0 /*608*/].f_10.f_35;
}

int func_211(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_212(iParam0, 9);
}
return 0;
}


var func__212(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


bool func_213(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 11);
}


var func__214(){
return MISC::IS_BIT_SET(Global_2683864, 20);
}


bool func_215(){
return Global_2683864.f_691;
}

int func_216(){
if(((func_217() !=-1 && func_217() !=28) && func_217() !=17) && func_217() !=12){
return 1;
}
return 0;
}

int func_217(){
return Global_1057409;
}

int func_218(int iParam0, var uParam1){
int iVar0;
*uParam1=-1;
switch (iParam0){
case 0:
iVar0=-850297695;
break;
case 1:
iVar0=1316161270;
break;
case 2:
iVar0=1023703758;
break;
case 5:
iVar0=1045499606;
break;
case 3:
iVar0=1697066635;
break;
case 4:
iVar0=1144169546;
break;
}
if(!MONEY::NETWORK_CASINO_CAN_BET(iVar0)){
return 1;
}
return 0;
}


bool func_219(){
return Global_2793046.f_6880;
}


void func_220(bool bParam0){
struct<17> Var0;
if(Global_262145.f_26834){
Var0.f_0=joaat("standard");
Var0.f_1=iLocal_259;
if(func_196()){
switch (func_192()){
case 0:
Var0.f_2=MISC::GET_HASH_KEY("win cutoff");
break;
case 1:
Var0.f_2=MISC::GET_HASH_KEY("loss cutoff");
break;
case 2:
Var0.f_2=MISC::GET_HASH_KEY("time cutoff");
break;
}}elseif(bParam0){
Var0.f_2=joaat("normal");
}else{
Var0.f_2=joaat("QUIT");
}
Var0.f_3=Local_242.f_2;
Var0.f_4=func_190();
if(bParam0){
Var0.f_5=120000;
}elseif(iLocal_253){
Var0.f_5=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uLocal_255, NETWORK::GET_NETWORK_TIME()));
}
Var0.f_6=(MISC::IS_BIT_SET(uLocal_219, 20) || MISC::IS_BIT_SET(uLocal_220, 1));
Var0.f_7=Local_242.f_5;
Var0.f_10=NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
if(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() !=func_66()){
Var0.f_11=NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
}
Var0.f_12=(Local_242.f_3 + Local_242.f_4);
Var0.f_13=Local_242.f_3;
Var0.f_14=Local_242.f_4;
Var0.f_16=Local_206[iLocal_259 /*21*/].f_17;
if(func_67(PLAYER::PLAYER_ID())){
Var0.f_15=1983458449;
}elseif(func_65()){
Var0.f_15=1334658487;
}elseif(func_59()){
Var0.f_15=980726932;
}else{
Var0.f_15=939907746;
}
STATS::PLAYSTATS_CASINO_SLOT_MACHINE_LIGHT(&Var0);
func_3(&Local_242);
Local_242.f_2=0;
Local_242.f_3=0;
Local_242.f_4=0;
Local_242.f_5=0;
iLocal_253=0;
}}


void func_221(int iParam0){
var uVar0;
float fVar1;
func_222(iLocal_259, &uVar0, &fVar1);
switch (iParam0){
case 0:
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) !=4){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
}
break;
case 1:
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) !=0){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
}
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
break;
}
iLocal_231=iParam0;
}


void func_222(int iParam0, var uParam1, float fParam2){
switch (iParam0){
case 0:
*uParam1={
1100.483f, 230.4082f, -50.8409f 
};
*fParam2=45f;
break;
case 1:
*uParam1={
1100.939f, 231.0017f, -50.8409f 
};
*fParam2=60f;
break;
case 2:
*uParam1={
1101.221f, 231.6943f, -50.8409f 
};
*fParam2=75f;
break;
case 3:
*uParam1={
1101.323f, 232.4321f, -50.8409f 
};
*fParam2=90f;
break;
case 4:
*uParam1={
1101.229f, 233.1719f, -50.8409f 
};
*fParam2=105f;
break;
case 5:
*uParam1={
1108.938f, 239.4797f, -50.8409f 
};
*fParam2=-45f;
break;
case 6:
*uParam1={
1109.536f, 239.0278f, -50.8409f 
};
*fParam2=-30f;
break;
case 7:
*uParam1={
1110.229f, 238.7428f, -50.8409f 
};
*fParam2=-15f;
break;
case 8:
*uParam1={
1110.974f, 238.642f, -50.8409f 
};
*fParam2=0f;
break;
case 9:
*uParam1={
1111.716f, 238.7384f, -50.8409f 
};
*fParam2=15f;
break;
case 10:
*uParam1={
1112.407f, 239.0216f, -50.8409f 
};
*fParam2=30f;
break;
case 11:
*uParam1={
1112.999f, 239.4742f, -50.8409f 
};
*fParam2=45f;
break;
case 12:
*uParam1={
1120.853f, 233.1621f, -50.8409f 
};
*fParam2=-105f;
break;
case 13:
*uParam1={
1120.753f, 232.4272f, -50.8409f 
};
*fParam2=-90f;
break;
case 14:
*uParam1={
1120.853f, 231.6886f, -50.8409f 
};
*fParam2=-75f;
break;
case 15:
*uParam1={
1121.135f, 230.9999f, -50.8409f 
};
*fParam2=-60f;
break;
case 16:
*uParam1={
1121.592f, 230.4106f, -50.8409f 
};
*fParam2=-45f;
break;
case 17:
*uParam1={
1104.572f, 229.4451f, -50.8409f 
};
*fParam2=-36f;
break;
case 18:
*uParam1={
1104.302f, 230.3183f, -50.8409f 
};
*fParam2=-108f;
break;
case 19:
*uParam1={
1105.049f, 230.845f, -50.8409f 
};
*fParam2=180f;
break;
case 20:
*uParam1={
1105.781f, 230.2973f, -50.8409f 
};
*fParam2=108f;
break;
case 21:
*uParam1={
1105.486f, 229.4322f, -50.8409f 
};
*fParam2=36f;
break;
case 22:
*uParam1={
1108.005f, 233.9177f, -50.8409f 
};
*fParam2=-36f;
break;
case 23:
*uParam1={
1107.735f, 234.7909f, -50.8409f 
};
*fParam2=-108f;
break;
case 24:
*uParam1={
1108.482f, 235.3176f, -50.8409f 
};
*fParam2=180f;
break;
case 25:
*uParam1={
1109.214f, 234.7699f, -50.8409f 
};
*fParam2=108f;
break;
case 26:
*uParam1={
1108.919f, 233.9048f, -50.8409f 
};
*fParam2=36f;
break;
case 27:
*uParam1={
1113.64f, 233.6755f, -50.8409f 
};
*fParam2=-36f;
break;
case 28:
*uParam1={
1113.37f, 234.5486f, -50.8409f 
};
*fParam2=-108f;
break;
case 29:
*uParam1={
1114.117f, 235.0753f, -50.8409f 
};
*fParam2=180f;
break;
case 30:
*uParam1={
1114.848f, 234.5277f, -50.8409f 
};
*fParam2=108f;
break;
case 31:
*uParam1={
1114.554f, 233.6625f, -50.8409f 
};
*fParam2=36f;
break;
case 32:
*uParam1={
1116.662f, 228.8896f, -50.8409f 
};
*fParam2=-36f;
break;
case 33:
*uParam1={
1116.392f, 229.7628f, -50.8409f 
};
*fParam2=-108f;
break;
case 34:
*uParam1={
1117.139f, 230.2895f, -50.8409f 
};
*fParam2=180f;
break;
case 35:
*uParam1={
1117.871f, 229.7419f, -50.8409f 
};
*fParam2=108f;
break;
case 36:
*uParam1={
1117.576f, 228.8767f, -50.8409f 
};
*fParam2=36f;
break;
case 37:
*uParam1={
1129.64f, 250.451f, -52.0409f 
};
*fParam2=180f;
break;
case 38:
*uParam1={
1130.376f, 250.3577f, -52.0409f 
};
*fParam2=165f;
break;
case 39:
*uParam1={
1131.062f, 250.0776f, -52.0409f 
};
*fParam2=150f;
break;
case 40:
*uParam1={
1131.655f, 249.6264f, -52.0409f 
};
*fParam2=135f;
break;
case 41:
*uParam1={
1132.109f, 249.0355f, -52.0409f 
};
*fParam2=120f;
break;
case 42:
*uParam1={
1132.396f, 248.3382f, -52.0409f 
};
*fParam2=105f;
break;
case 43:
*uParam1={
1132.492f, 247.5984f, -52.0409f 
};
*fParam2=90f;
break;
case 44:
*uParam1={
1133.952f, 256.1037f, -52.0409f 
};
*fParam2=-45f;
break;
case 45:
*uParam1={
1133.827f, 256.9098f, -52.0409f 
};
*fParam2=-117f;
break;
case 46:
*uParam1={
1134.556f, 257.2778f, -52.0409f 
};
*fParam2=171f;
break;
case 47:
*uParam1={
1135.132f, 256.699f, -52.0409f 
};
*fParam2=99f;
break;
case 48:
*uParam1={
1134.759f, 255.9734f, -52.0409f 
};
*fParam2=27f;
break;
case 49:
*uParam1={
1138.195f, 251.8611f, -52.0409f 
};
*fParam2=-45f;
break;
case 50:
*uParam1={
1138.07f, 252.6677f, -52.0409f 
};
*fParam2=-117f;
break;
case 51:
*uParam1={
1138.799f, 253.0363f, -52.0409f 
};
*fParam2=171f;
break;
case 52:
*uParam1={
1139.372f, 252.4563f, -52.0409f 
};
*fParam2=99f;
break;
case 53:
*uParam1={
1139f, 251.7306f, -52.0409f 
};
*fParam2=27f;
break;
}}


void func_223(bool bParam0){
if(bParam0){
MISC::SET_BIT(&Global_1970540, 2);
}else{
MISC::CLEAR_BIT(&Global_1970540, 2);
}}


bool func_224(){
return MISC::IS_BIT_SET(Global_1970540, 2);
}


bool func_225(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}


bool func_226(){
return Global_75693;
}


bool func_227(){
return HUD::GET_PAUSE_MENU_STATE() !=0;
}


void func_228(){
if(iLocal_231==0 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==4){}}


void func_229(){
var uVar0;
bool bVar1;
if(iLocal_223==10){
if(!func_331(&uLocal_233)){
func_6(&uLocal_233, 1, 0);
}elseif(func_5(&uLocal_233, 10000, 1)){
MISC::CLEAR_BIT(&uLocal_219, false);
func_169(16);
return;
}}else{
func_3(&uLocal_233);
}
uVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uLocal_222);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >=0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))){
bVar1=true;
}}else{
bVar1=true;
}
if(bVar1){
if(iLocal_223==4 || iLocal_223==16){
func_169(4);
}elseif(iLocal_223==10){
func_169(10);
}elseif(((((iLocal_223==5 || iLocal_223==6) || iLocal_223==7) || iLocal_223==11) || iLocal_223==12) || iLocal_223==13){
MISC::CLEAR_BIT(&uLocal_219, false);
func_169(10);
}elseif((((iLocal_223==18 || iLocal_223==19) || iLocal_223==23) || iLocal_223==24) || iLocal_223==22){
func_169(10);
}elseif(iLocal_223==20){
func_169(21);
}elseif(((iLocal_223==8 || iLocal_223==9) || iLocal_223==14) || iLocal_223==15){
func_169(17);
}}}


void func_230(){
struct<3> Var0;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(!iLocal_232){
MISC::CLEAR_BIT(&uLocal_219, false);
}
iLocal_232=1;
}else{
if(iLocal_232){
MISC::CLEAR_BIT(&uLocal_219, false);
}
iLocal_232=0;
}
if(!MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 0)){
if(((iLocal_223==4 || iLocal_223==10) || iLocal_223==11) || iLocal_223==12){
if(MISC::IS_BIT_SET(uLocal_219, 25)){
MISC::CLEAR_BIT(&uLocal_219, false);
}}}else{
MISC::SET_BIT(&uLocal_219, 25);
}
if(iLocal_259 >=0 && (iLocal_218==5 || MISC::IS_BIT_SET(uLocal_219, 31))){
func_275();
if((!MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 0) && !MISC::IS_BIT_SET(uLocal_219, 3)) && (((iLocal_223==4 || iLocal_223==10) || iLocal_223==11) || iLocal_223==12)){
if(!func_331(&uLocal_240) || func_5(&uLocal_240, 5000, 1)){
func_179(1, -1, -1, -1);
}}
if(!MISC::IS_BIT_SET(uLocal_219, 0)){
if(MISC::IS_BIT_SET(uLocal_219, 21) || MISC::IS_BIT_SET(uLocal_219, 22)){
MemCopy(&Var0,{
func_199(Local_206[iLocal_259 /*21*/].f_17)
}
, 6);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Var0, 0);
MISC::SET_BIT(&uLocal_219, 23);
if(func_273(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Var0)){
func_168(0, 0);
func_271(1, &Var0, &Var0);
func_270(-1, 1, 1);
if(MISC::IS_BIT_SET(uLocal_219, 21)){
func_269("SLOTS_RULEaT");
StringCopy(&Var0, "SLOTS_RULEa", 24);
StringIntConCat(&Var0, Local_206[iLocal_259 /*21*/].f_17, 24);
func_268(&Var0, 0, 0);
}elseif(MISC::IS_BIT_SET(uLocal_219, 22)){
func_269("SLOTS_RULEbT");
func_268("SLOTS_RULEb", 0, 0);
func_267(Local_206[iLocal_259 /*21*/].f_16);
func_267(Local_206[iLocal_259 /*21*/].f_16 * 5);
}
if(MISC::IS_BIT_SET(uLocal_219, 21)){
func_266(1, 1, 2);
}else{
func_266(1, 2, 2);
}
func_265(202, "SLOTS_RULEBK", -1);
func_264(8, "SLOTS_RULENEXT", -1);
MISC::SET_BIT(&uLocal_219, false);
func_240(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
func_239(1);
}}elseif(func_273(0, -1, 0)){
func_168(0, 0);
if(!MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 0) && (((((iLocal_223==4 || iLocal_223==10) || iLocal_223==11) || iLocal_223==12) || MISC::IS_BIT_SET(uLocal_219, 31)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898))){
func_265(202, "SLOTS_EXIT", -1);
func_238("SLOTS_SPIN", PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 208, 1), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 201, 1), 0, 0);
func_265(203, "SLOTS_BET", -1);
if(iLocal_262 < 5){
func_265(204, "SLOTS_BETM", -1);
}}
func_265(210, "SLOTS_RULEIN", -1);
MISC::SET_BIT(&uLocal_219, false);
func_231(0, -1, -1, 1, 0, 0, 1, 1, 0);
func_239(1);
}}else{
if(MISC::IS_BIT_SET(uLocal_219, 21) || MISC::IS_BIT_SET(uLocal_219, 22)){
func_240(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
}else{
func_231(0, -1, -1, 1, 0, 0, 1, 1, 0);
}
func_239(1);
}}elseif(MISC::IS_BIT_SET(uLocal_219, 0)){
func_168(0, 0);
func_165(1, -1);
MISC::CLEAR_BIT(&uLocal_219, false);
}}


void func_231(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_167(&iVar0, 0, iParam1)){
return;
}
iParam0=iParam0;
if(iParam3 && !func_235(bParam4, bParam8)){
return;
}
if(func_233()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_26(PLAYER::PLAYER_ID(), 0)){
return;
}}
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}}
if(Global_23270.f_5166 !=0){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5465[iVar1] !=363){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5465[iVar1], 1), 64);
}elseif(Global_23270.f_5480[iVar1] !=32){
StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23270.f_5480[iVar1], 1), 64);
}
iVar1++;
}
Global_23270.f_5167=0;
}
if(!Global_23270.f_5167){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23270.f_5524 / 100f)));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar1 /*4*/])) !=MISC::GET_HASH_KEY("PREV")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_232(&(Global_23270.f_5168[iVar1 /*16*/]));
iVar2=iVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23270.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_232(&(Global_23270.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23270.f_5450[iVar1]==-1){
func_51(&(Global_23270.f_5393[iVar1 /*4*/]));
}else{
iVar3=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar3=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23270.f_5465[iVar1] !=363 && MISC::IS_BIT_SET(Global_23270.f_5495, iVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5465[iVar1]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1++;
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_16)) !=MISC::GET_HASH_KEY("")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5166);
func_232(&Global_4540953);
if(Global_4540953.f_20==-1){
func_51(&(Global_4540953.f_16));
}else{
iVar4=Global_23270.f_5450[iVar1];
if(iParam2 >=0){
iVar4=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23270.f_5525){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23270.f_5167=1;
}
iVar1=0;
while (iVar1 < Global_23270.f_5166){
if(Global_23270.f_5450[iVar1] !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23270.f_5393[iVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
iVar1++;
}
if(Global_4540953.f_20 !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
if(bParam6){
if(!Global_23270.f_8892){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
Global_23270.f_8892=1;
}}elseif(Global_23270.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23270.f_8892=0;
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_23270.f_5498){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
}}}


void func_232(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_233(){
struct<3> Var0;
if(Global_20383.f_1 > 3){
return 1;
}
if(func_234()){
Var0={
0f, -500f, 0f 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20328==0){
if(Var0.f_1 > -119f){
return 1;
}else{
return 0;
}}elseif(Var0.f_1 > -101f){
return 1;
}else{
return 0;
}}
return 0;
}

int func_234(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}

int func_235(bool bParam0, bool bParam1){
if(Global_2672505.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_237(8, -1) && func_236() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78819) || Global_23270.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100733.f_1474){
return 0;
}
return 1;
}

int func_236(){
return Global_1574993;
}


var func__237(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_238(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4){
if(Global_23270.f_5166 >=14){
return;
}
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sParam1, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam0, 16);
Global_23270.f_5166++;
if(Global_23270.f_5166 >=14){
return;
}
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sParam2, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), "PREV", 16);
Global_23270.f_5166++;
if(Global_23270.f_5166 >=14){
return;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sParam3, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), "PREV", 16);
Global_23270.f_5166++;
}
if(Global_23270.f_5166 >=14){
return;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sParam4, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), "PREV", 16);
Global_23270.f_5166++;
}}


void func_239(int iParam0){
Global_1655472.f_1163=iParam0;
}


void func_240(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
int iVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
bool bVar32;
bool bVar33;
float fVar34;
float fVar35;
float fVar36;
float fVar37;
struct<3> Var38;
bool bVar39;
float fVar40;
float fVar41;
float fVar42;
float fVar43;
float fVar44;
int iVar45;
int iVar46;
int iVar47;
int iVar48;
float fVar49;
bool bVar50;
bool bVar51;
bool bVar52;
bool bVar53;
float fVar54;
float fVar55;
float fVar56;
float fVar57;
var uVar58;
var uVar59;
float fVar60;
char cVar61[64];
char cVar62[64];
float fVar63;
int iVar64;
float fVar65;
float fVar66;
int iVar67;
int iVar68;
int iVar69;
int iVar70;
int iVar71;
int iVar72;
char cVar73[16];
float fVar74;
float fVar75;
float fVar76;
float fVar77;
float fVar78;
if(!func_167(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_235(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar55=0f;
if(Global_23270){
if(func_262(29, 1, 1, &fVar36, &fVar37, bParam7)){
fVar56=(fVar37 / fVar36);
}else{
Global_23270=0;
}}
if(fParam5==-1f){
fParam5=Global_23269;
}
fVar55=(fParam5 * fVar56);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar57=Global_23268;
}else{
fVar57=(((Global_23268 + fVar55) + 0.034722f) + 0f);
}
fVar60=1f;
func_260(bParam7, &uVar58, &uVar59, &fVar60);
if(bParam3){
if(Global_23270.f_5661 <=1){
func_256(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23270.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23270.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23270.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar49=Global_23268;
}else{
if(Global_23270){
StringCopy(&cVar61, func_255(29), 64);
StringCopy(&cVar62, func_253(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_252(Global_23267, Global_23268, fParam5, fVar55, 0, 0, 0, 255);
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}else{
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}}
if(Global_23270.f_8862){
iVar1=Global_23270.f_8858;
iVar2=Global_23270.f_8859;
iVar3=Global_23270.f_8860;
iVar4=Global_23270.f_8861;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}
func_252(Global_23267, (Global_23268 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar49=(((Global_23268 + fVar55) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23270.f_1)) !=0){
func_251();
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_1));
iVar15=0;
iVar16=0;
iVar17=0;
iVar18=0;
iVar14=0;
while (iVar14 < Global_23270.f_74){
if(Global_23270.f_5[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_10[iVar15]);
iVar15++;
}
elseif(Global_23270.f_5[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
iVar16++;
}
elseif(Global_23270.f_5[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23270.f_5[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23270.f_5[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_41[iVar18 /*16*/]));
iVar18++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23267 + 0.00390625f), ((Global_23268 + fVar55) + 0.00416664f), 0);
}
if(Global_23270.f_6178){
func_251();
func_249((((Global_23267 + fParam5) - 0.00390625f) - func_250("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
}elseif(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_6177 !=0){
func_251();
func_249((((Global_23267 + fParam5) - 0.00390625f) - func_250("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
}}}
iVar6=Global_23270.f_6181;
iVar9=0;
fVar63=fVar49;
if(Global_23270.f_8872){
iVar1=Global_23270.f_8868;
iVar2=Global_23270.f_8869;
iVar3=Global_23270.f_8870;
iVar4=Global_23270.f_8871;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
while (iVar9 < Global_23270.f_5668 && iVar6 <=Global_23270.f_5661){
if(iVar6 >=0){
if(Global_23270.f_5928[iVar6]){
if(Global_23270.f_5799[iVar6] && iVar6 !=Global_23270.f_6181){
fVar49=(fVar49 + 0.00277776f);
}
fVar54=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar54=Global_23270.f_6188[iVar6];
}
fVar49=(fVar49 + fVar54);
iVar9++;
}}
iVar6++;
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
if(Global_23270.f_6174 > Global_23270.f_5668){
if(Global_23270.f_8877){
iVar1=Global_23270.f_8873;
iVar2=Global_23270.f_8874;
iVar3=Global_23270.f_8875;
iVar4=Global_23270.f_8876;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=204;
}
func_252(Global_23267, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
Var38={
GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") 
};
Var38.f_0=(Var38.f_0 * (0.5f / fVar60));
Var38.f_1=(Var38.f_1 * (0.5f / fVar60));
if(Global_23270.f_8890){
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}else{
HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
fVar49=(fVar49 + (0f + 0.034722f));
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_5081)) !=0 && Global_23270.f_5163 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
if(Global_23270.f_5165 !=0){
func_262(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_248(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_252(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_248(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_23270.f_5165 !=0){
func_262(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_247(Global_23270.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_255(Global_23270.f_5165), func_253(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar49=(fVar49 + (0.00138888f * 6f));
func_248(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_252(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_248(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
}
if(Global_23270.f_5163 > 0){
if((MISC::GET_GAME_TIMER() - Global_23270.f_5164) > Global_23270.f_5163){
StringCopy(&(Global_23270.f_5081), "", 24);
Global_23270.f_5163=-1;
}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087))){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
func_248(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23270.f_5159){
if(Global_23270.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[iVar15]);
iVar15++;
}elseif(Global_23270.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
iVar16++;
}elseif(Global_23270.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23270.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23270.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_252(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_248(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540953.f_21)) !=0 && Global_4540953.f_65 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23267 + 0.0046875f);
if(Global_4540953.f_67 !=0){
func_262(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_248(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_252(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23270.f_8882){
iVar1=Global_23270.f_8878;
iVar2=Global_23270.f_8879;
iVar3=Global_23270.f_8880;
iVar4=Global_23270.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_248(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540953.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540953.f_61){
if(Global_4540953.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[iVar15]);
iVar15++;
}elseif(Global_4540953.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
iVar16++;
}elseif(Global_4540953.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540953.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540953.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_4540953.f_67 !=0){
func_262(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_247(Global_4540953.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_255(Global_4540953.f_67), func_253(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540953.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540953.f_66) > Global_4540953.f_65){
StringCopy(&(Global_4540953.f_21), "", 16);
Global_4540953.f_65=-1;
}}}
func_231(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
}
if(iVar5==1 || !Global_23270.f_6171){
iVar19=0;
iVar23=0;
iVar20=0;
iVar21=0;
iVar22=0;
iVar9=0;
iVar10=0;
iVar11=0;
iVar12=0;
iVar13=0;
iVar64=Global_23270.f_5661;
if(Global_23270.f_6172){
iVar64=(Global_23270.f_6175 - 1);
}
fVar65=0f;
fVar66=0f;
iVar7=0;
while (iVar7 <=iVar64){
fVar54=0.034722f;
if(Global_23270.f_6188[iVar6] !=0f){
fVar54=Global_23270.f_6188[iVar6];
}
if(Global_23270.f_6172){
iVar6=Global_23270.f_8513[iVar7];
}else{
iVar6=iVar7;
}
iVar12=iVar13;
bVar33=false;
if(iVar6 >=Global_23270.f_6181 && iVar9 < Global_23270.f_5668){
bVar33=true;
if(Global_23270.f_6182==iVar6){
fVar66=fVar65;
}
if(Global_23270.f_5799[iVar6]){
iVar12++;
}
fVar35=(((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
}
Global_23270.f_6322[iVar6]=fVar35;
fVar34=(Global_23267 + 0.0046875f);
bVar39=false;
bVar32=Global_23270.f_6182==iVar6;
if((bVar32 && iVar5==1) && bVar33){
iVar68=255;
iVar69=255;
iVar70=255;
iVar71=255;
if(Global_23270.f_8884){
HUD::GET_HUD_COLOUR(Global_23270.f_8883, &iVar68, &iVar69, &iVar70, &iVar71);
}else{
HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, 0, 0);
Global_23270.f_6320=fVar35;
}
iVar8=0;
while (iVar8 < Global_23270.f_5669){
if(MISC::IS_BIT_SET(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_6172){
iVar19=Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar20=Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar21=Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar22=Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
iVar23=Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
}
else{
Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar19;
Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar20;
Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar21;
Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar22;
Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)]=iVar23;
}
iVar72=0;
bVar53=false;
if(Global_23270.f_6454[0] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[0]){
bVar53=true;
iVar72=0;
}
}
if(Global_23270.f_6454[1] !=-1){
if((iVar6 * 5 + iVar8)==Global_23270.f_6451[1]){
bVar53=true;
iVar72=1;
}
}
if(Global_23270.f_5505[iVar8] !=-1f){
fVar34=((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
}
if((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] !=-1f) && fVar34 < Global_23270.f_5505[iVar8 + 1]){
fVar44=(Global_23270.f_5505[iVar8 + 1] - fVar34);
}
else{
fVar44=(((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
}
if((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32){
bVar52=true;
}
else{
bVar52=false;
}
switch (Global_23270.f_5499[iVar8]){
case 0:
break;
case 1:
iVar24=iVar19;
if(bVar33){
if(!Global_23270.f_6172){
fVar41=0f;
fVar42=0f;
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_245(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar28++;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0){
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
if(iVar28 > 0){
iVar14=0;
while (iVar14 < iVar28){
if(func_262(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
if(iVar14 > 0){
fVar42=(fVar42 - (0.00078125f * 4f));
}
if((Global_23270.f_4824[(iVar22 + iVar14)]==2 || Global_23270.f_4824[(iVar22 + iVar14)]==52) || Global_23270.f_4824[(iVar22 + iVar14)]==62){
fVar42=(fVar42 - (0.00078125f * 5f));
}}
iVar14++;
}
}
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
if(Global_23270.f_5526[iVar8]==2){
iVar67=(iVar8 - 1);
while (iVar67 >=0){
if(Global_23270.f_5526[iVar67]==2){
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar67)]=(Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar67)] - Global_23270.f_5511[iVar8]);
}
iVar67=(iVar67 + -1);
}
}
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar42=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_262(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_262(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_247(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_255(26), func_253(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_262(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_262(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_247(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_255(27), func_253(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
iVar31=0;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_245(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_244(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=1;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=8;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=5;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=6;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=7;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=9;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
iVar31=2;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
iVar31=3;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
if((Global_23270.f_4824[(iVar22 + iVar28)]==2 || Global_23270.f_4824[(iVar22 + iVar28)]==52) || Global_23270.f_4824[(iVar22 + iVar28)]==62){
if(func_262(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(func_262(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_247(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
if(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_255(Global_23270.f_4824[(iVar22 + iVar28)]), func_253(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_255(Global_23270.f_4824[(iVar22 + iVar28)]), func_253(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
fVar40=(fVar40 + (0.00078125f * 3f));
}}}
iVar28++;
iVar31=4;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23270.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
if(iVar31==4 && Global_23270.f_5526[iVar8]==2){
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
}
else{
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
if(func_184() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23270.f_2130[iVar24]){
bVar51=true;
}
func_245(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
StringCopy(&cVar73, "TEST_LABEL", 16);
fVar74=0f;
fVar75=55f;
fVar76=0.0185f;
fVar77=0.004f;
fVar78=0.02f;
HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
GRAPHICS::DRAW_RECT((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, floor(fVar74), floor(fVar74), floor(fVar74), floor(fVar75), 0);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar73);
HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23270.f_6181 + iVar30));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
iVar30++;
}}
}
}
if(iVar28 > 0){
fVar40=(fVar40 + (6f * 0.00078125f));
iVar14=0;
while (iVar14 < iVar28){
if((Global_23270.f_4824[(iVar22 + iVar14)] !=2 && Global_23270.f_4824[(iVar22 + iVar14)] !=52) && Global_23270.f_4824[(iVar22 + iVar14)] !=62){
if(func_262(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_262(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_247(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(Global_23270.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_255(Global_23270.f_4824[(iVar22 + iVar14)]), func_253(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
elseif(Global_23270.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_255(Global_23270.f_4824[(iVar22 + iVar14)]), func_253(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_255(Global_23270.f_4824[(iVar22 + iVar14)]), func_253(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
}
fVar40=(fVar40 + (12f * 0.00078125f));
}}
iVar14++;
}
}}
bVar39=true;
iVar19++;
iVar14=0;
while (iVar14 < 4){
if(Global_23270.f_2387[iVar24 /*5*/][iVar14]==1){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==8){
iVar19++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==2){
iVar20++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==3){
iVar21++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==4){
iVar22++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==5){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==6){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==7){
iVar23++;
}
elseif(Global_23270.f_2387[iVar24 /*5*/][iVar14]==9){
iVar23++;
}
iVar14++;
}
break;
case 2:
if(bVar33){
if(!Global_23270.f_6172){
func_245(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_244(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[iVar20]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_262(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_262(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_247(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_255(26), func_253(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_262(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_262(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_247(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_255(27), func_253(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
if(iVar5==1){
func_245(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
func_243((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
}}
bVar39=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23270.f_6172){
func_245(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23270.f_8888 && Global_23270.f_8889==iVar6){
func_244(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar41=Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_262(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_262(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_247(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_255(26), func_253(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_262(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_262(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_247(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_255(27), func_253(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
func_245(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
func_242((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
}
bVar39=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_262(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
if(!Global_23270.f_6172){
fVar42=fVar36;
fVar40=0f;
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
}elseif(Global_23270.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
}
Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar40;
Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)]=fVar42;
}
else{
fVar40=Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
fVar42=Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
}
if(bVar52){
if(func_262(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23270.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_262(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_247(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_255(26), func_253(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
if(func_262(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_262(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_247(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_255(27), func_253(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
}
if(iVar5==1){
if(func_262(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_247(Global_23270.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_255(Global_23270.f_4824[iVar22]), func_253(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_241(Global_23270.f_4824[iVar22])), (fVar37 * func_241(Global_23270.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
}}
bVar39=true;
iVar22++;
break;
case 5:
bVar39=true;
break;
}
if(Global_23270.f_5499[iVar8]==5){
if(Global_23270.f_5511[iVar8] > 0.05f){
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}else{
fVar34=(fVar34 + 0.05f);
}
}
else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
if(Global_23270.f_5518[iVar8]){
if(func_262(26, 1, 1, &fVar36, &fVar37, bParam7)){
fVar34=(fVar34 - fVar36);
}}
}}else{
fVar34=(fVar34 + Global_23270.f_5511[iVar8]);
}
iVar8++;
}
if(bVar39){
if(bVar33){
Global_23270.f_8513[iVar9]=iVar6;
Global_23270.f_6183=iVar6;
iVar9++;
if(Global_23270.f_5799[iVar6]){
iVar13++;
}
if(Global_23270.f_6188[iVar6] !=0f){
fVar65=(fVar65 + Global_23270.f_6188[iVar6]);
}
else{
fVar65=(fVar65 + 0.034722f);
}}
if(!Global_23270.f_6171){
Global_23270.f_5928[iVar6]=1;
if(Global_23270.f_5670[iVar6]){
if(bVar32){
Global_23270.f_6177=0;
}
}
else{
iVar11++;
if(bVar32){
Global_23270.f_6177=iVar11;
}
}
iVar10++;
}}
iVar7++;
}
if(!Global_23270.f_6171){
Global_23270.f_6173=((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
Global_23270.f_6176=iVar11;
Global_23270.f_6174=iVar10;
Global_23270.f_6171=1;
}}
if(!Global_23270.f_6172){
Global_23270.f_6175=iVar9;
Global_23270.f_6172=1;
}
iVar5++;
}
Global_23270.f_6319=fVar49;
Global_23270.f_6321=MISC::GET_GAME_TIMER();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23270.f_6319);
if(!Global_23270.f_8857){
func_301(0);
}
Global_23270.f_8857=0;
if(bParam2){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
if(bParam0){
func_239(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


float func_241(int iParam0){
switch (iParam0){
case 35:
case 34:
case 49:
case 48:
case 42:
case 36:
case 37:
case 39:
case 40:
case 38:
case 54:
case 45:
case 46:
case 47:
return 0.85f;
break;
}
return 1f;
}


void func_242(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_243(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


void func_244(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(bParam0){
HUD::GET_HUD_COLOUR(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
}else{
HUD::GET_HUD_COLOUR(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}


void func_245(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_246(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
if((iVar0 < 20 && iVar1 < 20) && iVar2 < 20){
if(bParam0==0){
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
}}elseif((iVar0 > 230 && iVar1 > 230) && iVar2 > 230){
if(bParam0){
iVar0=0;
iVar1=0;
iVar2=0;
}}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}elseif(bParam1){
if(bParam0){
HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}else{
HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}}elseif(bParam0){
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}else{
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}}elseif(bParam1){
if(bParam0){
HUD::SET_TEXT_COLOUR(0, 0, 0, floor((255f * 0.8f)));
}else{
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
}}elseif(bParam0){
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}else{
HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
}
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_JUSTIFICATION(1);
if(bParam5){
HUD::SET_TEXT_SCALE(0f, 0.425f);
HUD::SET_TEXT_FONT(4);
}elseif(bParam6){
HUD::SET_TEXT_SCALE(0f, 0.425f);
HUD::SET_TEXT_FONT(6);
}else{
HUD::SET_TEXT_FONT(0);
}
HUD::SET_TEXT_WRAP(0f, 1f);
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_246(int iParam0, var uParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
*uParam1=8;
*uParam2=8;
*uParam3=8;
break;
case 1:
*uParam1=37;
*uParam2=37;
*uParam3=39;
break;
case 22:
*uParam1=140;
*uParam2=146;
*uParam3=154;
break;
case 23:
*uParam1=91;
*uParam2=93;
*uParam3=94;
break;
case 6:
*uParam1=81;
*uParam2=84;
*uParam3=89;
break;
case 111:
*uParam1=240;
*uParam2=240;
*uParam3=240;
break;
case 28:
*uParam1=150;
*uParam2=8;
*uParam3=0;
break;
case 34:
*uParam1=38;
*uParam2=3;
*uParam3=6;
break;
case 88:
*uParam1=245;
*uParam2=137;
*uParam3=15;
break;
case 45:
*uParam1=74;
*uParam2=22;
*uParam3=7;
break;
case 56:
*uParam1=45;
*uParam2=58;
*uParam3=53;
break;
case 58:
*uParam1=71;
*uParam2=120;
*uParam3=60;
break;
case 54:
*uParam1=77;
*uParam2=98;
*uParam3=104;
break;
case 73:
*uParam1=14;
*uParam2=49;
*uParam3=109;
break;
case 68:
*uParam1=22;
*uParam2=34;
*uParam3=72;
break;
case 140:
*uParam1=0;
*uParam2=174;
*uParam3=239;
break;
case 131:
*uParam1=255;
*uParam2=183;
*uParam3=0;
break;
case 90:
*uParam1=142;
*uParam2=140;
*uParam3=70;
break;
case 97:
*uParam1=156;
*uParam2=141;
*uParam3=113;
break;
case 89:
*uParam1=145;
*uParam2=115;
*uParam3=71;
break;
case 105:
*uParam1=98;
*uParam2=68;
*uParam3=40;
break;
case 100:
*uParam1=124;
*uParam2=27;
*uParam3=68;
break;
case 99:
*uParam1=114;
*uParam2=42;
*uParam3=63;
break;
case 136:
*uParam1=246;
*uParam2=151;
*uParam3=153;
break;
case 49:
*uParam1=32;
*uParam2=32;
*uParam3=44;
break;
case 146:
*uParam1=26;
*uParam2=1;
*uParam3=23;
break;
default:
*uParam1=255;
*uParam2=255;
*uParam3=255;
break;
}}


void func_247(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
*iParam5=255;
switch (iParam0){
case 28:
*iParam2=194;
*iParam3=80;
*iParam4=80;
break;
case 15:
case 4:
case 16:
case 26:
case 27:
case 35:
case 34:
case 49:
case 48:
case 42:
case 36:
case 37:
case 54:
case 39:
case 40:
case 38:
case 44:
case 43:
case 45:
case 46:
case 47:
case 53:
case 57:
case 58:
case 59:
case 60:
if(bParam1){
*iParam2=0;
*iParam3=0;
*iParam4=0;
}
break;
case 55:
*iParam5=100;
break;
case 63:
*iParam5=100;
break;
case 56:
HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
*iParam5=255;
break;
}}


void func_248(float fParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_LEADING(2);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_249(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_250(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_251();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_251(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
if(Global_23270.f_8867){
iVar0=Global_23270.f_8863;
iVar1=Global_23270.f_8864;
iVar2=Global_23270.f_8865;
iVar3=Global_23270.f_8866;
}
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_252(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


var func__253(int iParam0, bool bParam1){
char* sVar0[2];
var uVar1;
struct<13> Var2;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var2={
func_78(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1)){
return func_254(&uVar1);
}}else{
return func_254(&(Global_23270.f_7488[iParam0 /*16*/]));
}}
switch (iParam0){
case 3:
sVar0[0]="MP_hostCrown";
sVar0[1]="MP_hostCrown";
break;
case 21:
sVar0[0]="MP_SpecItem_Coke";
sVar0[1]="MP_SpecItem_Coke";
break;
case 22:
sVar0[0]="MP_SpecItem_Heroin";
sVar0[1]="MP_SpecItem_Heroin";
break;
case 23:
sVar0[0]="MP_SpecItem_Weed";
sVar0[1]="MP_SpecItem_Weed";
break;
case 24:
sVar0[0]="MP_SpecItem_Meth";
sVar0[1]="MP_SpecItem_Meth";
break;
case 25:
sVar0[0]="MP_SpecItem_Cash";
sVar0[1]="MP_SpecItem_Cash";
break;
case 1:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 2:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 4:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 6:
sVar0[0]="Shop_Box_CrossB";
sVar0[1]="Shop_Box_Cross";
break;
case 7:
sVar0[0]="Shop_Box_BlankB";
sVar0[1]="Shop_Box_Blank";
break;
case 5:
sVar0[0]="Shop_Box_TickB";
sVar0[1]="Shop_Box_Tick";
break;
case 8:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 9:
sVar0[0]="Shop_Clothing_Icon_B";
sVar0[1]="Shop_Clothing_Icon_A";
break;
case 10:
sVar0[0]="Shop_GunClub_Icon_B";
sVar0[1]="Shop_GunClub_Icon_A";
break;
case 17:
sVar0[0]="Shop_Ammo_Icon_B";
sVar0[1]="Shop_Ammo_Icon_A";
break;
case 18:
sVar0[0]="Shop_Armour_Icon_B";
sVar0[1]="Shop_Armour_Icon_A";
break;
case 19:
sVar0[0]="Shop_Health_Icon_B";
sVar0[1]="Shop_Health_Icon_A";
break;
case 20:
sVar0[0]="Shop_MakeUp_Icon_B";
sVar0[1]="Shop_MakeUp_Icon_A";
break;
case 11:
sVar0[0]="Shop_Tattoos_Icon_B";
sVar0[1]="Shop_Tattoos_Icon_A";
break;
case 12:
sVar0[0]="Shop_Garage_Icon_B";
sVar0[1]="Shop_Garage_Icon_A";
break;
case 13:
sVar0[0]="Shop_Garage_Bike_Icon_B";
sVar0[1]="Shop_Garage_Bike_Icon_A";
break;
case 14:
sVar0[0]="Shop_Barber_Icon_B";
sVar0[1]="Shop_Barber_Icon_A";
break;
case 15:
sVar0[0]="shop_Lock";
sVar0[1]="shop_Lock";
break;
case 16:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 26:
sVar0[0]="arrowleft";
sVar0[1]="arrowleft";
break;
case 27:
sVar0[0]="arrowright";
sVar0[1]="arrowright";
break;
case 28:
sVar0[0]="MP_AlertTriangle";
sVar0[1]="MP_AlertTriangle";
break;
case 29:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 31:
sVar0[0]="Shop_Michael_Icon_B";
sVar0[1]="Shop_Michael_Icon_A";
break;
case 32:
sVar0[0]="Shop_Franklin_Icon_B";
sVar0[1]="Shop_Franklin_Icon_A";
break;
case 33:
sVar0[0]="Shop_Trevor_Icon_B";
sVar0[1]="Shop_Trevor_Icon_A";
break;
case 52:
sVar0[0]="SaleIcon";
sVar0[1]="SaleIcon";
break;
case 53:
sVar0[0]="Shop_Tick_Icon";
sVar0[1]="Shop_Tick_Icon";
break;
case 55:
sVar0[0]="shop_NEW_Star";
sVar0[1]="shop_NEW_Star";
break;
case 56:
sVar0[0]="Shop_Lock_Arena";
sVar0[1]="Shop_Lock_Arena";
break;
case 57:
sVar0[0]="Card_Suit_Clubs";
sVar0[1]="Card_Suit_Clubs";
break;
case 58:
sVar0[0]="Card_Suit_Hearts";
sVar0[1]="Card_Suit_Hearts";
break;
case 59:
sVar0[0]="Card_Suit_Spades";
sVar0[1]="Card_Suit_Spades";
break;
case 60:
sVar0[0]="Card_Suit_Diamonds";
sVar0[1]="Card_Suit_Diamonds";
break;
case 61:
sVar0[0]="Shop_Art_Icon_B";
sVar0[1]="Shop_Art_Icon_A";
break;
case 63:
sVar0[0]="Shop_Art_Icon_B";
sVar0[1]="Shop_Art_Icon_A";
break;
case 62:
sVar0[0]="Shop_Chips_A";
sVar0[1]="Shop_Chips_B";
break;
case 0:
sVar0[0]="";
sVar0[1]="";
break;
}
if(bParam1){
return sVar0[0];
}
return sVar0[1];
}


var func__254(var uParam0){
return uParam0;
}


char* func_255(int iParam0){
var uVar0;
struct<13> Var1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23270.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var1={
func_78(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
return func_254(&uVar0);
}else{
return func_254(&(Global_23270.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_256(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23270.f_5661 > iParam0){
return;
}
if(Global_23270.f_5661 >=128){
return;
}
if(Global_23270.f_5663 >=256){
return;
}
if(Global_23270.f_6186 < Global_23270.f_6184){
return;
}
if(Global_23270.f_5661 !=iParam0){
Global_23270.f_5661=iParam0;
Global_23270.f_5662=0;
}
iVar0=Global_23270.f_5499[Global_23270.f_5662];
if(iVar0 !=1){
while (Global_23270.f_5662 < 4 && iVar0 !=1){
Global_23270.f_5662++;
iVar0=Global_23270.f_5499[Global_23270.f_5662];
}
if(iVar0 !=1){
return;
}}
StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1)){}
Global_23270.f_1616[Global_23270.f_5663]=bParam3;
Global_23270.f_1873[Global_23270.f_5663]=iParam4;
Global_23270.f_2130[Global_23270.f_5663]=iParam6;
Global_23270.f_5663++;
if(!bParam3){
func_259(Global_23270.f_5661, 1);
}else{
func_259(Global_23270.f_5661, 0);
}
if(iParam2==0){
fVar1=func_258(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(Global_23270.f_5518[Global_23270.f_5662]){
func_262(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23270.f_5511[Global_23270.f_5662]){
Global_23270.f_5511[Global_23270.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_257(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
if(fVar4 > Global_23270.f_6188[iParam0]){
Global_23270.f_6188[iParam0]=fVar4;
}}}
MISC::SET_BIT(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
Global_23270.f_5662++;
Global_23270.f_6187=1;
Global_23270.f_6185=(Global_23270.f_5663 - 1);
Global_23270.f_6186=0;
Global_23270.f_6184=iParam2;
}


float func_257(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_258(char* sParam0){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_245(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_259(int iParam0, bool bParam1){
int iVar0;
iVar0=floor((to_float(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
}}


void func_260(bool bParam0, var uParam1, var uParam2, float fParam3){
float fVar0;
float fVar1;
float fVar2;
if(!bParam0){
GRAPHICS::GET_SCREEN_RESOLUTION(uParam1, uParam2);
return;
}
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(uParam1, uParam2);
fVar0=to_float(*uParam1);
fVar1=to_float(*uParam2);
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(func_261(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=round((fVar1 * fVar2));
*uParam2=round(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=round((fVar0 / *fParam3));
*uParam2=round((fVar1 / *fParam3));
}


bool func_261(int iParam0, int iParam1){
return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}

int func_262(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
float fVar4;
struct<3> Var5;
float fVar6;
StringCopy(&cVar0, func_255(iParam0), 64);
StringCopy(&cVar1, func_253(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar1) !=0){
fVar4=1f;
func_260(bParam5, &iVar2, &iVar3, &fVar4);
Var5={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) 
};
fVar6=(func_263(iParam0) / fVar4);
Var5={
Var5 * Vector(fVar6, fVar6, fVar6) 
};
if(!bParam2){
Var5.f_0=(Var5.f_0 - 2f);
Var5.f_1=(Var5.f_1 - 2f);
}
if(iParam0==30){
Var5.f_0=288f;
Var5.f_1=106f;
}
if(iParam0==29 && MISC::GET_HASH_KEY(&(Global_23270.f_7488[29 /*16*/]))==joaat("crew_logo")){
Var5.f_0=106f;
Var5.f_1=106f;
}
*fParam3=((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
*fParam4=(((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
if(!bParam5){
if(!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 !=30){
*fParam3=(*fParam3 * 1.33f);
}}
if(iParam0==29){
if(*fParam3 > Global_23269){
*fParam4=(*fParam4 * (Global_23269 / *fParam3));
*fParam3=Global_23269;
}}
return 1;
}
return 0;
}


float func_263(int iParam0){
switch (iParam0){
case 33:
case 4:
case 11:
case 31:
case 20:
case 15:
case 10:
case 12:
case 13:
case 32:
case 9:
case 5:
case 6:
case 7:
case 14:
case 18:
case 19:
case 17:
case 28:
case 26:
case 27:
case 53:
case 57:
case 58:
case 59:
case 60:
case 61:
case 63:
return 0.5f;
break;
case 62:
return 0.8f;
break;
}
return 1f;
}


void func_264(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
MISC::CLEAR_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=363;
Global_23270.f_5480[Global_23270.f_5166]=iParam0;
Global_23270.f_5166++;
}


void func_265(int iParam0, char* sParam1, int iParam2){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23270.f_5166 >=14){
StringCopy(&Global_4540953, sVar0, 64);
StringCopy(&(Global_4540953.f_16), sParam1, 16);
Global_4540953.f_20=iParam2;
return;
return;
}
MISC::CLEAR_BIT(&(Global_23270.f_5495), Global_23270.f_5166);
StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
Global_23270.f_5450[Global_23270.f_5166]=iParam2;
Global_23270.f_5465[Global_23270.f_5166]=iParam0;
Global_23270.f_5480[Global_23270.f_5166]=32;
Global_23270.f_5166++;
}


void func_266(int iParam0, int iParam1, int iParam2){
Global_23270.f_6178=iParam0;
Global_23270.f_6179=iParam1;
Global_23270.f_6180=iParam2;
}


void func_267(var uParam0){
if(Global_23270.f_5160 >=3 || Global_23270.f_5159 >=4){
return;
}
Global_23270.f_5093[Global_23270.f_5159]=2;
Global_23270.f_5159++;
Global_23270.f_5098[Global_23270.f_5160]=uParam0;
Global_23270.f_5160++;
}


void func_268(char* sParam0, int iParam1, int iParam2){
int iVar0;
StringCopy(&(Global_23270.f_5081), sParam0, 24);
Global_23270.f_5159=0;
Global_23270.f_5160=0;
Global_23270.f_5161=0;
Global_23270.f_5162=0;
Global_23270.f_5163=iParam1;
Global_23270.f_5164=MISC::GET_GAME_TIMER();
Global_23270.f_5165=iParam2;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5093[iVar0]=0;
iVar0++;
}}


void func_269(char* sParam0){
int iVar0;
StringCopy(&(Global_23270.f_1), sParam0, 16);
Global_23270.f_74=0;
Global_23270.f_75=0;
Global_23270.f_76=0;
Global_23270.f_77=0;
Global_23270.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23270.f_5[iVar0]=0;
iVar0++;
}}


void func_270(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
Global_23270.f_6182=iParam0;
Global_23270.f_6317=iParam2;
if(Global_23270.f_6182 < Global_23270.f_6181){
Global_23270.f_6181=Global_23270.f_6182;
}elseif((Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183) || (!Global_23270.f_6172 && Global_23270.f_6182 >=(Global_23270.f_6181 + Global_23270.f_5668))){
iVar0=Global_23270.f_6181;
while (iVar0 <=Global_23270.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23270.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}
while (iVar1 > Global_23270.f_5668 && Global_23270.f_6181 < 128){
Global_23270.f_6181++;
iVar1=0;
iVar0=Global_23270.f_6181;
while (iVar0 <=Global_23270.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23270.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}}}
Global_23270.f_6171=0;
Global_23270.f_6172=0;
if(bParam1){
StringCopy(&(Global_23270.f_5081), "", 24);
StringCopy(&(Global_4540953.f_21), "", 16);
}}


void func_271(int iParam0, char* sParam1, char* sParam2){
Global_23270=iParam0;
func_272(29, sParam1, sParam2);
}


void func_272(int iParam0, char* sParam1, char* sParam2){
StringCopy(&(Global_23270.f_6463[iParam0 /*16*/]), sParam1, 64);
StringCopy(&(Global_23270.f_7488[iParam0 /*16*/]), sParam2, 64);
}


bool func_273(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_167(&iVar0, 1, iParam1)){
return 0;
}
bVar1=true;
StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6078[iVar0 /*4*/]))){
HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
Global_23270.f_6071[iVar0]=1;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23270.f_6078[iVar0 /*4*/]), 9)){
bVar1=false;
}}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
Global_23270.f_6057[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
bVar1=false;
}
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
Global_23270.f_6064[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")){
bVar1=false;
}}
bVar2=false;
StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
bVar2=func_274(&(Global_23270.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_274(var uParam0){
switch (uParam0->f_9){
case 0:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
uParam0->f_9=1;
if(uParam0->f_7){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}}}else{
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 1:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 2:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_9=0;
}
break;
}
return uParam0->f_9==2;
}


void func_275(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_256.f_0)){
GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(Local_256.f_0, 1);
HUD::SET_TEXT_RENDER_ID(Local_256.f_1);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Local_256.f_0, 0.401f, 0.09f, 0.805f, 0.195f, 255, 255, 255, 255, 0);
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}}


void func_276(int iParam0){
Global_1970479=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1970497=iParam0;
if(!func_282()){
func_280();
}
if(!func_279()){
func_277();
}}


void func_277(){
func_36(joaat("mpply_cas_gmblng_l24_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
func_278();
func_35();
Global_1970493=1;
Global_1970488=0;
}


void func_278(){
func_36(joaat("mpply_cas_gmblng_l24"), 0);
func_36(joaat("mpply_cas_gmblng_l24_1"), 0);
func_36(joaat("mpply_cas_gmblng_l24_2"), 0);
func_36(joaat("mpply_cas_gmblng_l24_3"), 0);
func_36(joaat("mpply_cas_gmblng_l24_4"), 0);
func_36(joaat("mpply_cas_gmblng_l24_5"), 0);
func_36(joaat("mpply_cas_gmblng_l24_6"), 0);
func_36(joaat("mpply_cas_gmblng_l24_7"), 0);
func_36(joaat("mpply_cas_gmblng_l24_8"), 0);
func_36(joaat("mpply_cas_cur_gmblng_hr"), 0);
func_36(joaat("mpply_cas_24h_gmblng_px"), 0);
}


bool func_279(){
return Global_1970493;
}


void func_280(){
func_36(joaat("mpply_casino_gmblng_gd"), NETWORK::GET_CLOUD_TIME_AS_INT());
func_37();
func_281((NETWORK::GET_CLOUD_TIME_AS_INT() + 86400));
Global_1970492=1;
}


void func_281(int iParam0){
Global_1970487=iParam0;
}


bool func_282(){
return func_42(joaat("mpply_casino_gmblng_gd")) !=0;
}

int func_283(){
var uVar0;
struct<6> Var1;
int iVar2;
switch (iLocal_221){
case 0:
if(func_300()){
if(func_299()){
func_178((Local_206[iLocal_259 /*21*/].f_16 * iLocal_262));
func_46(0);
Var1={
func_52(Local_206[iLocal_259 /*21*/].f_17, 1) 
};
func_50(&Var1);
func_298(Local_206[iLocal_259 /*21*/].f_17);
func_297(iLocal_259, &Local_224, &Local_225);
iLocal_228=func_286();
MISC::CLEAR_BIT(&uLocal_219, 26);
MISC::SET_BIT(&uLocal_219, 26);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_285(iLocal_228), 1f, 7000, 0.05f, 0, func_284(iLocal_228));
MISC::CLEAR_BIT(&uLocal_219, 30);
MISC::CLEAR_BIT(&uLocal_219, 31);
iLocal_221++;
}}
break;
case 1:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_101(PLAYER::PLAYER_ID()), func_285(iLocal_228), 0) <=0.25f){
MISC::SET_BIT(&uLocal_219, 26);
}
if((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_follow_nav_mesh_to_coord")) !=1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_follow_nav_mesh_to_coord")) !=0) && !TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID())) || (MISC::IS_BIT_SET(uLocal_219, 26) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_follow_nav_mesh_to_coord")) !=0)){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==2){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
}
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0)==4){
CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(518572876);
}
func_169(iLocal_228);
iLocal_221++;
}
break;
case 2:
uVar0=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uLocal_222);
CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(518572876);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar0)){
if(ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -278874898)){
MISC::SET_BIT(&uLocal_219, 31);
func_45();
if(MISC::IS_BIT_SET(uLocal_219, 30)){
MISC::CLEAR_BIT(&uLocal_219, 30);
MISC::CLEAR_BIT(&uLocal_219, 31);
return 1;
}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >=0.99f){
iVar2=0;
while (iVar2 < 4){
if(Local_230[iVar2 /*2*/].f_1 !=-1){
if(Local_487.f_598[Local_230[iVar2 /*2*/]]==PLAYER::PLAYER_ID()){
AUDIO::STOP_SOUND(Local_230[iVar2 /*2*/].f_1);
AUDIO::RELEASE_SOUND_ID(Local_230[iVar2 /*2*/].f_1);
Local_230[iVar2 /*2*/].f_1=-1;
}
}
iVar2++;
}
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 11);
func_169(4);
iLocal_221++;
}}
break;
case 3:
CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(518572876);
MISC::CLEAR_BIT(&uLocal_219, 30);
MISC::CLEAR_BIT(&uLocal_219, 31);
return 1;
break;
}
return 0;
}


var func__284(int iParam0){
struct<3> Var0;
func_170(iParam0, &Local_257);
Var0={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_330(), &Local_257, Local_224, Local_225, 0.01f, 2) 
};
return Var0.f_2;
}


Vector3 func__285(int iParam0){
func_170(iParam0, &Local_257);
return PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_330(), &Local_257, Local_224, Local_225, 0.01f, 2);
}

int func_286(){
float fVar0;
int iVar1;
int iVar2;
fVar0=100f;
if(2f > 0f){}
iVar2=0;
while (iVar2 < 4){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_101(PLAYER::PLAYER_ID()), func_285((0 + iVar2)), 1) < fVar0 && MISC::GET_DISTANCE_BETWEEN_COORDS(func_287(), func_285((0 + iVar2)), 1) > 0.2f){
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(func_101(PLAYER::PLAYER_ID()), func_285((0 + iVar2)), 1);
iVar1=(0 + iVar2);
}
iVar2++;
}
return iVar1;
}


Vector3 func__287(){
struct<3> Var0;
int iVar1;
int iVar2;
bool bVar3;
Var0={
0f, 0f, 0f 
};
iVar1=Global_2765639;
iVar2=Global_2765563;
bVar3=func_296(iVar2);
if(bVar3){
switch (iVar1){
case 83:
Var0={
0.3f, -0.85f, 0f 
};
break;
case 84:
Var0={
0.1f, -0.9f, 0f 
};
break;
case 85:
Var0={
0.1f, -0.9f, 0f 
};
break;
case 86:
Var0={
0.45f, -0.4f, 0f 
};
break;
case 88:
Var0={
-0.55f, -0.54f, 0f 
};
break;
case 87:
Var0={
-0.15f, -0.6f, 0f 
};
break;
case 181:
Var0={
-0.5f, -0.65f, 0f 
};
break;
}}else{
switch (iVar1){
case 83:
Var0={
-0.3f, -0.65f, 0f 
};
break;
case 84:
Var0={
-0.3f, -0.65f, 0f 
};
break;
case 85:
Var0={
0.6f, -0.6f, 0f 
};
break;
case 86:
Var0={
0f, -0.8f, 0f 
};
break;
case 88:
Var0={
0.5f, -0.45f, 0f 
};
break;
case 87:
Var0={
-0.65f, -0.45f, 0f 
};
break;
}}
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_292(Global_2765561, 0), func_288(Global_2765561), Var0);
}


float func_288(int iParam0){
int iVar0;
iVar0=func_290(iParam0);
return func_289(iVar0);
}


float func_289(int iParam0){
switch (iParam0){
case 0:
return 45f;
case 1:
return 60f;
case 2:
return 75f;
case 3:
return 90f;
case 4:
return 105f;
case 5:
return -45f;
case 6:
return -30f;
case 7:
return -15f;
case 8:
return 0f;
case 9:
return 15f;
case 10:
return 30f;
case 11:
return 45f;
case 12:
return -105f;
case 13:
return -90f;
case 14:
return -75f;
case 15:
return -60f;
case 16:
return -45f;
case 17:
return -36f;
case 18:
return -108f;
case 19:
return 180f;
case 20:
return 108f;
case 21:
return 36f;
case 22:
return -36f;
case 23:
return -108f;
case 24:
return 180f;
case 25:
return 108f;
case 26:
return 36f;
case 27:
return -36f;
case 28:
return -108f;
case 29:
return 180f;
case 30:
return 108f;
case 31:
return 36f;
case 32:
return -36f;
case 33:
return -108f;
case 34:
return 180f;
case 35:
return 108f;
case 36:
return 36f;
case 37:
return 180f;
case 38:
return 165f;
case 39:
return 150f;
case 40:
return 135f;
case 41:
return 120f;
case 42:
return 105f;
case 43:
return 90f;
case 44:
return -45f;
case 45:
return -117f;
case 46:
return 171f;
case 47:
return 99f;
case 48:
return 27f;
case 49:
return -45f;
case 50:
return -117f;
case 51:
return 171f;
case 52:
return 99f;
case 53:
return 27f;
default:
}
return 0f;
}

int func_290(int iParam0){
int iVar0;
bool bVar1;
int iVar2;
iVar0=func_291(iParam0);
iVar2=1;
bVar1=false;
while (bVar1 < 54){
if(bVar1 < 32){
if(MISC::IS_BIT_SET(Global_2765555, bVar1)){
if(iVar2==iVar0){
return bVar1;
}else{
iVar2++;
}}}elseif(MISC::IS_BIT_SET(Global_2765556, (bVar1 - 32))){
if(iVar2==iVar0){
return bVar1;
}else{
iVar2++;
}}
bVar1++;
}
return -1;
}

int func_291(int iParam0){
int iVar0;
iVar0=-1;
switch (iParam0){
case 79:
iVar0=1;
break;
case 5:
iVar0=2;
break;
case 4:
iVar0=3;
break;
case 6:
iVar0=4;
break;
case 77:
iVar0=5;
break;
case 78:
iVar0=6;
break;
case 80:
iVar0=7;
break;
case 7:
iVar0=8;
break;
case 36:
iVar0=9;
break;
case 35:
iVar0=10;
break;
}
return iVar0;
}


Vector3 func__292(int iParam0, int iParam1){
int iVar0;
iVar0=func_290(iParam0);
return func_293(iVar0, iParam1);
}


Vector3 func__293(int iParam0, int iParam1){
struct<3> Var0;
Var0={
0f, 0f, 0f 
};
switch (iParam0){
case 0:
Var0={
1101.01f, 229.876f, -50.8409f 
};
break;
case 1:
Var0={
1101.59f, 230.626f, -50.8409f 
};
break;
case 2:
Var0={
1101.95f, 231.501f, -50.8409f 
};
break;
case 3:
Var0={
1102.08f, 232.433f, -50.8409f 
};
break;
case 4:
Var0={
1101.96f, 233.367f, -50.8409f 
};
break;
case 5:
Var0={
1108.41f, 238.946f, -50.8409f 
};
break;
case 6:
Var0={
1109.16f, 238.376f, -50.8409f 
};
break;
case 7:
Var0={
1110.03f, 238.016f, -50.8409f 
};
break;
case 8:
Var0={
1110.97f, 237.89f, -50.8409f 
};
break;
case 9:
Var0={
1111.91f, 238.012f, -50.8409f 
};
break;
case 10:
Var0={
1112.78f, 238.371f, -50.8409f 
};
break;
case 11:
Var0={
1113.53f, 238.943f, -50.8409f 
};
break;
case 12:
Var0={
1120.13f, 233.355f, -50.8409f 
};
break;
case 13:
Var0={
1120f, 232.427f, -50.8409f 
};
break;
case 14:
Var0={
1120.13f, 231.494f, -50.8409f 
};
break;
case 15:
Var0={
1120.48f, 230.624f, -50.8409f 
};
break;
case 16:
Var0={
1121.06f, 229.878f, -50.8409f 
};
break;
case 17:
Var0={
1104.13f, 228.836f, -50.8409f 
};
break;
case 18:
Var0={
1103.59f, 230.55f, -50.8409f 
};
break;
case 19:
Var0={
1105.05f, 231.597f, -50.8409f 
};
break;
case 20:
Var0={
1106.5f, 230.53f, -50.8409f 
};
break;
case 21:
Var0={
1105.93f, 228.823f, -50.8409f 
};
break;
case 22:
Var0={
1107.56f, 233.308f, -50.8409f 
};
break;
case 23:
Var0={
1107.02f, 235.023f, -50.8409f 
};
break;
case 24:
Var0={
1108.48f, 236.07f, -50.8409f 
};
break;
case 25:
Var0={
1109.93f, 235.003f, -50.8409f 
};
break;
case 26:
Var0={
1109.36f, 233.297f, -50.8409f 
};
break;
case 27:
Var0={
1113.2f, 233.067f, -50.8409f 
};
break;
case 28:
Var0={
1112.65f, 234.78f, -50.8409f 
};
break;
case 29:
Var0={
1114.11f, 235.828f, -50.8409f 
};
break;
case 30:
Var0={
1115.56f, 234.76f, -50.8409f 
};
break;
case 31:
Var0={
1115f, 233.054f, -50.8409f 
};
break;
case 32:
Var0={
1116.22f, 228.28f, -50.8409f 
};
break;
case 33:
Var0={
1115.68f, 229.995f, -50.8409f 
};
break;
case 34:
Var0={
1117.14f, 231.042f, -50.8409f 
};
break;
case 35:
Var0={
1118.59f, 229.975f, -50.8409f 
};
break;
case 36:
Var0={
1118.02f, 228.269f, -50.8409f 
};
break;
case 37:
Var0={
1129.64f, 251.203f, -52.0409f 
};
break;
case 38:
Var0={
1130.57f, 251.085f, -52.0409f 
};
break;
case 39:
Var0={
1131.44f, 250.73f, -52.0409f 
};
break;
case 40:
Var0={
1132.19f, 250.159f, -52.0409f 
};
break;
case 41:
Var0={
1132.76f, 249.412f, -52.0409f 
};
break;
case 42:
Var0={
1133.12f, 248.533f, -52.0409f 
};
break;
case 43:
Var0={
1133.24f, 247.598f, -52.0409f 
};
break;
case 44:
Var0={
1133.42f, 255.572f, -52.0409f 
};
break;
case 45:
Var0={
1133.16f, 257.251f, -52.0409f 
};
break;
case 46:
Var0={
1134.67f, 258.021f, -52.0409f 
};
break;
case 47:
Var0={
1135.87f, 256.819f, -52.0409f 
};
break;
case 48:
Var0={
1135.1f, 255.303f, -52.0409f 
};
break;
case 49:
Var0={
1137.66f, 251.328f, -52.0409f 
};
break;
case 50:
Var0={
1137.4f, 253.008f, -52.0409f 
};
break;
case 51:
Var0={
1138.92f, 253.779f, -52.0409f 
};
break;
case 52:
Var0={
1140.12f, 252.574f, -52.0409f 
};
break;
case 53:
Var0={
1139.34f, 251.061f, -52.0409f 
};
break;
}
if(!func_295(Var0, 0f, 0f, 0f, 0)){
Var0={
Var0 + Vector(1f, 0f, 0f) 
};
if(func_294(iParam1) && iParam1 !=38){
Var0={
Var0 + Vector(0.0191f, 0f, 0f) 
};
}}
return Var0;
}

int func_294(int iParam0){
switch (iParam0){
case 3:
case 2:
case 33:
case 34:
case 35:
case 36:
case 38:
return 1;
default:
}
return 0;
}


bool func_295(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_296(int iParam0){
switch (iParam0){
case 3:
case 2:
case 21:
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 33:
case 34:
case 35:
case 36:
case 38:
return 1;
default:
}
return 0;
}


void func_297(int iParam0, var uParam1, var uParam2){
float fVar0;
func_222(iParam0, uParam1, &fVar0);
*uParam2={
0f, 0f, fVar0 
};
}


void func_298(int iParam0){
int iVar0;
switch (iParam0){
case 1:
iVar0=6;
break;
case 2:
iVar0=2;
break;
case 3:
iVar0=3;
break;
case 4:
iVar0=7;
break;
case 5:
iVar0=4;
break;
case 6:
iVar0=5;
break;
case 7:
iVar0=1;
break;
case 8:
iVar0=8;
break;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_256.f_0, "SET_THEME");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_299(){
char cVar0[24];
int iVar1;
StringCopy(&cVar0, "vw_Prop_Casino_Slot_0", 24);
StringIntConCat(&cVar0, Local_206[iLocal_259 /*21*/].f_17, 24);
StringConCat(&cVar0, "A", 24);
iVar1=MISC::GET_HASH_KEY(&cVar0);
StringCopy(&cVar0, "machine_0", 24);
StringIntConCat(&cVar0, Local_206[iLocal_259 /*21*/].f_17, 24);
StringConCat(&cVar0, "a", 24);
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_256.f_0)){
if(!HUD::IS_NAMED_RENDERTARGET_REGISTERED(&cVar0)){
HUD::REGISTER_NAMED_RENDERTARGET(&cVar0, 0);
if(!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar1)){
HUD::LINK_NAMED_RENDERTARGET(iVar1);
if(Local_256.f_1==-1){
Local_256.f_1=HUD::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
}
return 1;
}else{
if(Local_256.f_1==-1){
Local_256.f_1=HUD::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
}
return 1;
}}elseif(!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar1)){
HUD::LINK_NAMED_RENDERTARGET(iVar1);
if(Local_256.f_1==-1){
Local_256.f_1=HUD::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
}
return 1;
}else{
if(Local_256.f_1==-1){
Local_256.f_1=HUD::GET_NAMED_RENDERTARGET_RENDER_ID(&cVar0);
}
return 1;
}}
return 0;
}

int func_300(){
MISC::SET_BIT(&uLocal_219, 18);
STREAMING::REQUEST_ANIM_DICT(func_330());
if(STREAMING::HAS_ANIM_DICT_LOADED(func_330())){
return 1;
}
return 0;
}


void func_301(int iParam0){
if(func_307()){
return;
}
if(!Global_20383.f_1==1){
if(func_306(0)){
func_302(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_302(int iParam0){
if(func_307()){
return;
}
if(Global_20584){
if(func_305()){
func_304(1, 1);
}else{
func_304(0, 0);
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
if(!func_303()){
Global_20383.f_1=3;
}}

int func_303(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_304(bool bParam0, bool bParam1){
if(bParam0){
if(func_306(0)){
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


bool func_305(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_306(int iParam0){
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


bool func_307(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


bool func_308(){
return Global_4536666==1;
}


void func_309(){
char[] cVar0[8];
struct<3> Var1;
MemCopy(&cVar0,{
func_199(Local_206[iLocal_259 /*21*/].f_17)
}
, 6);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, 0);
MISC::SET_BIT(&uLocal_219, 23);
if(func_273(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0)){
if(!MISC::IS_BIT_SET(uLocal_219, 19)){
func_168(0, 0);
func_271(1, &cVar0, &cVar0);
StringCopy(&Var1, "SLOTS_TITLE", 24);
StringIntConCat(&Var1, Local_206[iLocal_259 /*21*/].f_17, 24);
func_269(&Var1);
func_270(-1, 1, 1);
func_268("SLOTS_DIS", 0, 0);
StringCopy(&Var1, "SLOTS_DIS1", 24);
StringIntConCat(&Var1, Local_206[iLocal_259 /*21*/].f_17, 24);
func_310(&Var1);
func_310("SLOTS_DIS2");
func_310("SLOTS_DIS3");
func_265(202, "SLOTS_EXIT", -1);
func_265(201, "SLOTS_ACC", -1);
MISC::SET_BIT(&uLocal_219, 19);
AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
}
func_239(1);
func_240(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
if(PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202)){
iLocal_261=-1;
func_198(-1);
if(MISC::IS_BIT_SET(uLocal_219, 2)){
if((func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && func_29()){
func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
}
if(HUD::IS_RADAR_HIDDEN()){
HUD::DISPLAY_RADAR(1);
}
func_16(0);
MISC::CLEAR_BIT(&uLocal_219, 2);
}
func_168(0, 0);
func_165(1, -1);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
MISC::CLEAR_BIT(&uLocal_219, 23);
MISC::CLEAR_BIT(&uLocal_219, 19);
AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
func_312(0);
}
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201)){
func_168(0, 0);
func_165(1, -1);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar0);
MISC::CLEAR_BIT(&uLocal_219, 19);
MISC::CLEAR_BIT(&uLocal_219, 23);
if(func_8(iLocal_259, &Local_206)){
MISC::SET_BIT(&uLocal_220, true);
}else{
MISC::SET_BIT(&uLocal_219, 20);
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
func_312(4);
}}}


void func_310(char* sParam0){
if(Global_23270.f_5162 >=3 || Global_23270.f_5159 >=4){
return;
}
Global_23270.f_5093[Global_23270.f_5159]=1;
Global_23270.f_5159++;
StringCopy(&(Global_23270.f_5110[Global_23270.f_5162 /*16*/]), sParam0, 64);
Global_23270.f_5162++;
}


void func_311(int iParam0){
Local_491[PLAYER::PLAYER_ID() /*11*/]=iParam0;
if(Local_487.f_598[iParam0] !=-1){
if(Local_487.f_598[iParam0]==PLAYER::PLAYER_ID()){
func_198(iParam0);
if(func_8(iParam0, &Local_206) && MISC::IS_BIT_SET(uLocal_220, 1)){
func_312(4);
}elseif(!func_8(iParam0, &Local_206) && MISC::IS_BIT_SET(uLocal_219, 20)){
func_312(4);
}else{
func_312(3);
}}else{
if(!MISC::IS_BIT_SET(uLocal_219, 1) && !func_219()){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_191("SLOTS_USED", -1);
MISC::SET_BIT(&uLocal_219, true);
}}
iLocal_261=-1;
func_198(-1);
if(MISC::IS_BIT_SET(uLocal_219, 2)){
if(func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
}
if(HUD::IS_RADAR_HIDDEN()){
HUD::DISPLAY_RADAR(1);
}
func_16(0);
MISC::CLEAR_BIT(&uLocal_219, 2);
}
func_312(0);
}}}


void func_312(int iParam0){
iLocal_218=iParam0;
}

int func_313(){
struct<3> Var0[2];
struct<3> Var1;
struct<3> Var2;
int iVar3;
struct<3> Var4;
struct<3> Var5;
float fVar6;
int iVar7;
if((((((((((((((((func_12(PLAYER::PLAYER_ID(), 1, 1) && func_327(PLAYER::PLAYER_PED_ID()) <=9) && !Global_2635559.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !MISC::IS_BIT_SET(Global_1950108.f_4, 2)) && !func_226()) && !NETWORK::IS_COMMERCE_STORE_OPEN()) && !HUD::IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !func_225(1)) && !func_227()) && !func_215()) && !func_213()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !Global_2694562.f_12) && Global_1950102 !=33){
if(iLocal_264 < 0){
iVar3=0;
while (iVar3 < 8){
func_222(iLocal_263, &Var5, &fVar6);
Var0[0 /*3*/]={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0.0579063f, -0.256112f, -0.197113f) 
};
Var0[1 /*3*/]={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0.0289372f, -1.85613f, 2.75002f) 
};
Var1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0f, -0.4f, 1f) 
};
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0f, -0.6f, 1f) 
};
fVar6=func_326(func_101(PLAYER::PLAYER_ID()), Var5, 1);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], 1.25f, 0, 1, 0)){
if((func_325(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar6, 45f) || func_321(PLAYER::PLAYER_PED_ID(), Var1, 45f)) || func_321(PLAYER::PLAYER_PED_ID(), Var2, 45f)){
iLocal_264=iLocal_263;
}}
iLocal_263++;
if(iLocal_263 >=54){
iLocal_263=0;
}
iVar3++;
}}else{
func_222(iLocal_264, &Var5, &fVar6);
Var0[0 /*3*/]={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0.0579063f, -0.256112f, -0.197113f) 
};
Var0[1 /*3*/]={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0.0289372f, -1.85613f, 2.75002f) 
};
Var1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0f, -0.4f, 1f) 
};
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0f, -0.6f, 1f) 
};
fVar6=func_326(func_101(PLAYER::PLAYER_ID()), Var5, 1);
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], 1.25f, 0, 1, 0) || ((!func_325(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar6, 45f) && !func_321(PLAYER::PLAYER_PED_ID(), Var1, 45f)) && !func_321(PLAYER::PLAYER_PED_ID(), Var2, 45f))){
iLocal_264=-1;
}}
if(iLocal_264 >=0){
func_222(iLocal_264, &Var5, &fVar6);
Var0[0 /*3*/]={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, 0f, -0.5f, 0.77f) 
};
if(Local_487.f_598[iLocal_264]==-1 && !func_320(iLocal_264)){
if(MISC::IS_BIT_SET(uLocal_219, 1)){
MISC::CLEAR_BIT(&uLocal_219, true);
}
if(func_200(iLocal_264)){
if(iLocal_258==-1){
StringCopy(&Var4, "SLOTS_ENTER", 24);
StringIntConCat(&Var4, Local_206[iLocal_264 /*21*/].f_17, 24);
if(!func_65()){
if(func_63(PLAYER::PLAYER_ID(), 0)){
iVar7=func_62();
if(func_60(iVar7)){
if(func_319(iVar7)==1){
StringConCat(&Var4, "c", 24);
}
elseif(func_318(iVar7)){
StringConCat(&Var4, "a", 24);
}
else{
StringConCat(&Var4, "b", 24);
}}}
}
func_317(&iLocal_258, 3, &Var4, 0, 0, 0, 0);
}
if(func_316(iLocal_258, 1)){
if(iLocal_258 !=-1){
func_201(&iLocal_258);
}
iLocal_261=iLocal_264;
func_17(PLAYER::PLAYER_ID(), 0, 256, 0);
HUD::DISPLAY_RADAR(0);
func_16(1);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
PAD::SET_INPUT_EXCLUSIVE(0, 200);
PAD::SET_INPUT_EXCLUSIVE(2, 200);
PAD::SET_INPUT_EXCLUSIVE(0, 199);
PAD::SET_INPUT_EXCLUSIVE(2, 199);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
if(!MISC::IS_BIT_SET(uLocal_219, 2)){
MISC::SET_BIT(&uLocal_219, 2);
}
return 1;
}}}elseif(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(Local_487.f_598[iLocal_264] !=PLAYER::PLAYER_ID()){
if(!MISC::IS_BIT_SET(uLocal_219, 1) && !func_219()){
func_191("SLOTS_USED", -1);
MISC::SET_BIT(&uLocal_219, true);
}}}}else{
if(func_314()){
HUD::CLEAR_HELP(1);
}
if(MISC::IS_BIT_SET(uLocal_219, 1)){
MISC::CLEAR_BIT(&uLocal_219, true);
}
if(MISC::IS_BIT_SET(uLocal_219, 6)){
MISC::CLEAR_BIT(&uLocal_219, 6);
}
if(iLocal_258 !=-1){
func_201(&iLocal_258);
}}}else{
if(func_314()){
HUD::CLEAR_HELP(1);
}
if(MISC::IS_BIT_SET(uLocal_219, 1)){
MISC::CLEAR_BIT(&uLocal_219, true);
}
if(MISC::IS_BIT_SET(uLocal_219, 6)){
MISC::CLEAR_BIT(&uLocal_219, 6);
}
if(iLocal_258 !=-1){
func_201(&iLocal_258);
}}
return 0;
}

int func_314(){
if((func_315("SLOTS_NOMON") || func_315("SLOTS_FAILTR")) || func_315("SLOTS_USED")){
return 1;
}
if(MISC::IS_BIT_SET(uLocal_219, 6)){
if(((((func_315("CAS_MG_CBAN") || func_315("CAS_MG_CTIME")) || func_315("CAS_MG_LOWCHIPS1")) || func_315("CAS_MG_NOCHIPS1")) || func_205("CAS_MG_MEMB2", func_206(1))) || func_315("SLOTS_REGBAN")){
return 1;
}}
return 0;
}


var func__315(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_316(int iParam0, bool bParam1){
int iVar0;
iVar0=func_202(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_306(0)){
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


void func_317(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_201(iParam0);
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

int func_318(int iParam0){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 26);
}

int func_319(int iParam0){
if(func_63(iParam0, 1)){
return Global_1894573[func_62() /*608*/].f_10.f_428;
}
return -1;
}

int func_320(int iParam0){
if(iParam0 < 32){
return MISC::IS_BIT_SET(Global_2765555, iParam0);
}else{
iParam0=(iParam0 - 32);
return MISC::IS_BIT_SET(Global_2765556, iParam0);
}
return 0;
}


bool func_321(int iParam0, struct<3> Param1, float fParam2){
return func_322(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam2);
}


bool func_322(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3){
struct<3> Var0;
var uVar1;
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(0f, 0f, 0f, fParam1, 0f, 1f, 0f) 
};
uVar1=func_323(func_324(Var0), func_324(Param2 - Param0));
return MISC::ACOS(uVar1) <=fParam3;
}


float func_323(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__324(struct<3> Param0){
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

int func_325(float fParam0, float fParam1, float fParam2){
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
if(fVar0 < 0f){
fVar0=(fVar0 + 360f);
}
if(fVar0 > fVar1){
if(fParam0 < fVar0 && fParam0 > fVar1){
return 1;
}}elseif(fParam0 < fVar0 || fParam0 > fVar1){
return 1;
}
return 0;
}


float func_326(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4){
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

int func_327(int iParam0){
int iVar0;
int iVar1;
if(iParam0==0){
return 0;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
iVar0=func_329(iParam0);
iVar1=func_328(iVar0);
if(iVar1==-1){
return -1;
}
return Global_44232[iVar1 /*5*/].f_3;
}

int func_328(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(Global_44232[iVar0 /*5*/]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_329(int iParam0){
int iVar0;
if(iParam0==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(iParam0==Global_44232[iVar0 /*5*/].f_1){
return Global_44232[iVar0 /*5*/];
}
iVar0++;
}
return -1;
}


char* func_330(){
if(func_120()){
return "anim_casino_a@amb@casino@games@slots@female";
}
return "anim_casino_a@amb@casino@games@slots@male";
}


bool func_331(var uParam0){
return uParam0->f_1;
}


void func_332(){
func_343();
func_230();
func_341();
func_339();
func_334();
func_333();
}


void func_333(){
}


void func_334(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
var uVar4;
int iVar5[3];
int iVar6[3];
struct<5> Var7;
float fVar8;
Var7=3;
Var7.f_4=3;
iVar0=0;
while (iVar0 < 10){
if(Global_1970429[iVar0 /*3*/].f_1 >=0){
if(!MISC::IS_BIT_SET(Local_269[func_11(Global_1970429[iVar0 /*3*/].f_1)], func_10(Global_1970429[iVar0 /*3*/].f_1)) && func_320(Global_1970429[iVar0 /*3*/].f_1)){
MISC::SET_BIT(&(Local_269[func_11(Global_1970429[iVar0 /*3*/].f_1)]), func_10(Global_1970429[iVar0 /*3*/].f_1));
}
if(Global_1970429[iVar0 /*3*/]){
if(!MISC::IS_BIT_SET(Local_269.f_3[func_11(Global_1970429[iVar0 /*3*/].f_1)], func_10(Global_1970429[iVar0 /*3*/].f_1))){
func_338(&Var7, Global_1970429[iVar0 /*3*/].f_2);
func_9(&(Local_269.f_6[Global_1970429[iVar0 /*3*/].f_1 /*2*/]), 0, 0);
iVar1=0;
while (iVar1 < 3){
Local_269.f_115[Global_1970429[iVar0 /*3*/].f_1 /*4*/][iVar1]=Var7.f_4[iVar1];
iVar1++;
}
MISC::SET_BIT(&(Local_269.f_3[func_11(Global_1970429[iVar0 /*3*/].f_1)]), func_10(Global_1970429[iVar0 /*3*/].f_1));
}}}
iVar0++;
}
iVar1=0;
while (iVar1 < 54){
if(MISC::IS_BIT_SET(Local_269.f_3[func_11(iVar1)], func_10(iVar1))){
func_222(iVar1, &uVar3, &uVar4);
iVar0=0;
while (iVar0 < 3){
iVar5[iVar0]=0;
iVar6[iVar0]=0;
if(func_331(&(Local_269.f_6[iVar1 /*2*/]))){
if(func_5(&(Local_269.f_6[iVar1 /*2*/]), (2000 + (750 * iVar0)), 0)){
if(iVar0 > 0){
if(iVar6[(iVar0 - 1)]){
if(func_331(&(Local_237[iVar1 /*5*/][(iVar0 - 1) /*2*/]))){
if(func_5(&(Local_237[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 150, 0)){
iVar5[iVar0]=1;
if(Local_206[iVar1 /*21*/].f_10[iVar0]==-1f){
Local_206[iVar1 /*21*/].f_10[iVar0]=((Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(floor((Local_206[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
}
}}else{
func_6(&(Local_237[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 0, 0);
}}
}
else{
iVar5[iVar0]=1;
if(Local_206[iVar1 /*21*/].f_10[iVar0]==-1f){
Local_206[iVar1 /*21*/].f_10[iVar0]=((Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(floor((Local_206[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
}
}}}
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0])){
if(Local_206[iVar1 /*21*/].f_6[iVar0] !=Local_206[iVar1 /*21*/].f_2[iVar0]){
if(!iVar5[iVar0]){
func_337(iVar1, iVar0);
}
ENTITY::SET_ENTITY_ROTATION(Local_265[iVar1 /*4*/][iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
Local_206[iVar1 /*21*/].f_6[iVar0]=Local_206[iVar1 /*21*/].f_2[iVar0];
}}
if(iVar5[iVar0]){
fVar8=((Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f) - (Local_206[iVar1 /*21*/].f_2[iVar0] % 360f));
if(MISC::ABSF(fVar8) <=20f || (Local_206[iVar1 /*21*/].f_10[iVar0] !=-1f && Local_206[iVar1 /*21*/].f_2[iVar0] >=Local_206[iVar1 /*21*/].f_10[iVar0])){
if(Local_206[iVar1 /*21*/].f_2[iVar0] !=(Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f)){
func_335(iVar1, 9);
if(Local_269.f_115[iVar1 /*4*/][iVar0]==6f){
func_335(iVar1, 10);
}
}
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f);
iVar6[iVar0]=1;
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0])){
ENTITY::SET_ENTITY_ROTATION(Local_265[iVar1 /*4*/][iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
}}else{
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_206[iVar1 /*21*/].f_2[iVar0] + (600f * timestep()));
}}else{
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_206[iVar1 /*21*/].f_2[iVar0] + (600f * timestep()));
}
iVar0++;
}
if(!MISC::IS_BIT_SET(uLocal_229[func_11(iVar1)], func_10(iVar1))){
func_335(iVar1, 7);
func_335(iVar1, 8);
MISC::SET_BIT(&(uLocal_229[func_11(iVar1)]), func_10(iVar1));
}
if(iVar6[2]){
iVar2=0;
while (iVar2 < 10){
if(Global_1970429[iVar2 /*3*/].f_1==iVar1){
MISC::CLEAR_BIT(&(uLocal_229[func_11(iVar1)]), func_10(iVar1));
Local_206[iVar1 /*21*/].f_15=-1f;
iVar0=0;
while (iVar0 < 3){
Local_206[iVar1 /*21*/].f_10[iVar0]=-1f;
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0])){
if(Local_206[iVar1 /*21*/].f_2[iVar0] !=(Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f)){
func_222(iVar1, &uVar3, &uVar4);
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f);
ENTITY::SET_ENTITY_ROTATION(Local_265[iVar1 /*4*/][iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
}}else{
Local_206[iVar1 /*21*/].f_2[iVar0]=0f;
}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar1])){
Local_206[iVar1 /*21*/].f_14=0f;
ENTITY::SET_ENTITY_ROTATION(uLocal_266[iVar1], 0f, 0f, uVar4, 2, 1);
}
func_3(&(Local_237[iVar1 /*5*/][0 /*2*/]));
func_3(&(Local_237[iVar1 /*5*/][1 /*2*/]));
func_3(&(Local_238[iVar1 /*2*/]));
Global_1970429[iVar2 /*3*/]=0;
func_3(&(Local_269.f_6[Global_1970429[iVar2 /*3*/].f_1 /*2*/]));
MISC::CLEAR_BIT(&(Local_269.f_3[func_11(Global_1970429[iVar2 /*3*/].f_1)]), func_10(Global_1970429[iVar2 /*3*/].f_1));
}
iVar2++;
}}}else{
iVar2=0;
while (iVar2 < 10){
if(Global_1970429[iVar2 /*3*/].f_1==iVar1){
MISC::CLEAR_BIT(&(uLocal_229[func_11(iVar1)]), func_10(iVar1));
Local_206[iVar1 /*21*/].f_15=-1f;
iVar0=0;
while (iVar0 < 3){
Local_206[iVar1 /*21*/].f_10[iVar0]=-1f;
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0])){
if(Local_206[iVar1 /*21*/].f_2[iVar0] !=(Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f)){
func_222(iVar1, &uVar3, &uVar4);
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_269.f_115[iVar1 /*4*/][iVar0] * 22.5f);
ENTITY::SET_ENTITY_ROTATION(Local_265[iVar1 /*4*/][iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
}
}
else{
Local_206[iVar1 /*21*/].f_2[iVar0]=0f;
}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar1])){
Local_206[iVar1 /*21*/].f_14=0f;
ENTITY::SET_ENTITY_ROTATION(uLocal_266[iVar1], 0f, 0f, uVar4, 2, 1);
}
func_3(&(Local_237[iVar1 /*5*/][0 /*2*/]));
func_3(&(Local_237[iVar1 /*5*/][1 /*2*/]));
func_3(&(Local_238[iVar1 /*2*/]));
func_3(&(Local_269.f_6[Global_1970429[iVar2 /*3*/].f_1 /*2*/]));
MISC::CLEAR_BIT(&(Local_269.f_3[func_11(Global_1970429[iVar2 /*3*/].f_1)]), func_10(Global_1970429[iVar2 /*3*/].f_1));
}
iVar2++;
}}
iVar1++;
}}


void func_335(int iParam0, int iParam1){
var uVar0;
struct<3> Var1;
var uVar2;
uVar0=func_336(Local_206[iParam0 /*21*/].f_17);
func_222(iParam0, &Var1, &uVar2);
Var1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, uVar2, 0f, -0.4f, 1f) 
};
switch (iParam1){
case 1:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "no_win", Var1, uVar0, 0, 20, 0);
break;
case 2:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "small_win", Var1, uVar0, 0, 20, 0);
break;
case 3:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "big_win", Var1, uVar0, 0, 20, 0);
break;
case 4:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "jackpot", Var1, uVar0, 0, 20, 0);
break;
case 5:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "place_bet", Var1, uVar0, 0, 20, 0);
break;
case 6:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "place_max_bet", Var1, uVar0, 0, 20, 0);
break;
case 7:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "spinning", Var1, uVar0, 0, 20, 0);
break;
case 8:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "start_spin", Var1, uVar0, 0, 20, 0);
break;
case 9:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "wheel_stop_clunk", Var1, uVar0, 0, 20, 0);
break;
case 10:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "wheel_stop_on_prize", Var1, uVar0, 0, 20, 0);
break;
case 11:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "welcome_stinger", Var1, uVar0, 0, 20, 0);
break;
case 12:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "spin_wheel", Var1, uVar0, 0, 20, 0);
break;
case 13:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "spin_wheel_win", Var1, uVar0, 0, 20, 0);
break;
}}


char* func_336(int iParam0){
switch (iParam0){
case 1:
return "dlc_vw_casino_slot_machine_ak_npc_sounds";
case 2:
return "dlc_vw_casino_slot_machine_ir_npc_sounds";
case 3:
return "dlc_vw_casino_slot_machine_rsr_npc_sounds";
case 4:
return "dlc_vw_casino_slot_machine_fs_npc_sounds";
case 5:
return "dlc_vw_casino_slot_machine_ds_npc_sounds";
case 6:
return "dlc_vw_casino_slot_machine_kd_npc_sounds";
case 7:
return "dlc_vw_casino_slot_machine_td_npc_sounds";
case 8:
return "dlc_vw_casino_slot_machine_hz_npc_sounds";
default:
}
return "";
}


void func_337(int iParam0, int iParam1){
float fVar0;
float fVar1;
if(Local_206[iParam0 /*21*/].f_6[iParam1] !=0f){
fVar0=(Local_206[iParam0 /*21*/].f_2[iParam1] - Local_206[iParam0 /*21*/].f_6[iParam1]);
fVar1=(fVar0 % 22.5f);
if(MISC::ABSF(fVar1) <=2.5f){
if(fVar1 < 0f){
Local_206[iParam0 /*21*/].f_2[iParam1]=(Local_206[iParam0 /*21*/].f_2[iParam1] - IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(3, 8)));
}else{
Local_206[iParam0 /*21*/].f_2[iParam1]=(Local_206[iParam0 /*21*/].f_2[iParam1] + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(3, 8)));
}}}}


void func_338(var uParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4[8];
int iVar5;
int iVar6[3];
uParam0->f_4[0]=0f;
uParam0->f_4[1]=0f;
uParam0->f_4[2]=0f;
switch (iParam1){
case 1:
case 2:
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
iVar6[0]=iVar2;
iVar6[1]=iVar2;
iVar5=0;
iVar0=0;
while (iVar0 < 8){
if(iVar0 !=iVar6[0] && iVar0 !=7){
iVar4[iVar5]=iVar0;
iVar5++;
}
iVar0++;
}
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
iVar6[2]=iVar4[iVar2];
break;
case 3:
case 4:
case 5:
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
iVar6[0]=iVar2;
iVar5=0;
iVar0=0;
while (iVar0 < 6){
if(iVar0 !=iVar6[0] || iVar6[0]==0){
iVar4[iVar5]=iVar0;
iVar5++;
}
iVar0++;
}
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
iVar6[1]=iVar4[iVar2];
iVar5=0;
iVar0=0;
while (iVar0 < 6){
if(iVar0 !=iVar6[1] || iVar6[1]==0){
iVar4[iVar5]=iVar0;
iVar5++;
}
iVar0++;
}
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
iVar6[2]=iVar4[iVar2];
break;
case 6:
case 7:
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
iVar6[0]=iVar2;
iVar6[1]=iVar2;
iVar6[2]=iVar2;
break;
case 9:
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(5, 6);
iVar6[0]=iVar2;
iVar6[1]=iVar2;
iVar6[2]=0;
break;
case 8:
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(4, 5);
iVar6[0]=iVar2;
iVar6[1]=iVar2;
iVar6[2]=iVar2;
break;
}
iVar0=0;
while (iVar0 < 3){
iVar2=0;
if(iVar6[iVar0]==0){
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Local_207.f_225);
uParam0->f_4[iVar0]=(IntToFloat(iVar2) + 0.5f);
}else{
iVar1=0;
while (iVar1 < Local_207.f_225){
if(Local_207.f_226[iVar0 /*17*/][iVar1]==iVar6[iVar0]){
iVar3++;
}
iVar1++;
}
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
iVar3=0;
iVar1=0;
iVar1=0;
while (iVar1 < Local_207.f_225){
if(Local_207.f_226[iVar0 /*17*/][iVar1]==iVar6[iVar0]){
if(iVar3==iVar2){
uParam0->f_4[iVar0]=to_float(iVar1);
iVar1=Local_207.f_225;
}
iVar3++;
}
iVar1++;
}}
iVar0++;
}}


void func_339(){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
var uVar4;
int iVar5[3];
int iVar6[3];
bool bVar7;
float fVar8;
float fVar9;
iVar1=0;
while (iVar1 < 54){
if(MISC::IS_BIT_SET(Local_269[func_11(iVar1)], func_10(iVar1))){
}elseif(MISC::IS_BIT_SET(Local_487.f_653[func_11(iVar1)], func_10(iVar1)) || ((iVar1==iLocal_259 && MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 0)) && !MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 2))){
if(iVar1==iLocal_259 && MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 2)){
}else{
iVar0=0;
while (iVar0 < 3){
iVar5[iVar0]=0;
iVar6[iVar0]=0;
if(func_331(&(Local_487.f_489[iVar1 /*2*/]))){
if(func_5(&(Local_487.f_489[iVar1 /*2*/]), (2000 + (750 * iVar0)), 0)){
if(MISC::IS_BIT_SET(Local_487.f_656[func_11(iVar1)], func_10(iVar1))){
if(iVar0 > 0){
if(iVar6[(iVar0 - 1)]){
if(func_331(&(Local_237[iVar1 /*5*/][(iVar0 - 1) /*2*/]))){
if(func_5(&(Local_237[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 150, 0)){
iVar5[iVar0]=1;
if(Local_206[iVar1 /*21*/].f_10[iVar0]==-1f){
Local_206[iVar1 /*21*/].f_10[iVar0]=((Local_487.f_217[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(floor((Local_206[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
}}
}
else{
func_6(&(Local_237[iVar1 /*5*/][(iVar0 - 1) /*2*/]), 0, 0);
}
}}else{
iVar5[iVar0]=1;
if(Local_206[iVar1 /*21*/].f_10[iVar0]==-1f){
Local_206[iVar1 /*21*/].f_10[iVar0]=((Local_487.f_217[iVar1 /*4*/][iVar0] * 22.5f) + IntToFloat(floor((Local_206[iVar1 /*21*/].f_2[iVar0] / 360f)) * 360));
}}}
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0])){
if(!iVar5[iVar0]){
func_337(iVar1, iVar0);
}
if(iLocal_259==iVar1){
if(!iVar5[iVar0]){
if(!MISC::IS_BIT_SET(uLocal_219, (8 + iVar0))){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_265[iVar1 /*4*/][iVar0], 1) 
};
Var3.f_2=(Var3.f_2 - 10f);
ENTITY::SET_ENTITY_COORDS(Local_265[iVar1 /*4*/][iVar0], Var3, 1, 0, 0, 1);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_267[iVar0])){
Var3={
ENTITY::GET_ENTITY_COORDS(uLocal_267[iVar0], 1) 
};
Var3.f_2=(Var3.f_2 + 10f);
ENTITY::SET_ENTITY_COORDS(uLocal_267[iVar0], Var3, 1, 0, 0, 1);
INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_267[iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
MISC::SET_BIT(&uLocal_219, (8 + iVar0));
}}}
}
func_222(iVar1, &Var3, &uVar4);
ENTITY::SET_ENTITY_ROTATION(Local_265[iVar1 /*4*/][iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
if(iLocal_259==iVar1 && ENTITY::DOES_ENTITY_EXIST(uLocal_267[iVar0])){
ENTITY::SET_ENTITY_ROTATION(uLocal_267[iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
}
Local_206[iVar1 /*21*/].f_6[iVar0]=Local_206[iVar1 /*21*/].f_2[iVar0];
}
if(iVar5[iVar0]){
fVar8=((Local_487.f_217[iVar1 /*4*/][iVar0] * 22.5f) - (Local_206[iVar1 /*21*/].f_2[iVar0] % 360f));
if(MISC::ABSF(fVar8) <=20f || (Local_206[iVar1 /*21*/].f_10[iVar0] !=-1f && Local_206[iVar1 /*21*/].f_2[iVar0] >=Local_206[iVar1 /*21*/].f_10[iVar0])){
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_487.f_217[iVar1 /*4*/][iVar0] * 22.5f);
if(iLocal_259==iVar1){
if(MISC::IS_BIT_SET(uLocal_219, (8 + iVar0))){
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_267[iVar0])){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_265[iVar1 /*4*/][iVar0], 1) 
};
Var3.f_2=(Var3.f_2 + 10f);
ENTITY::SET_ENTITY_COORDS(Local_265[iVar1 /*4*/][iVar0], Var3, 1, 0, 0, 1);
INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_265[iVar1 /*4*/][iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
Var3={
ENTITY::GET_ENTITY_COORDS(uLocal_267[iVar0], 1) 
};
Var3.f_2=(Var3.f_2 - 10f);
ENTITY::SET_ENTITY_COORDS(uLocal_267[iVar0], Var3, 1, 0, 0, 1);
MISC::CLEAR_BIT(&uLocal_219, (8 + iVar0));
}
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 9);
if(Local_207.f_1[0 /*65*/][uLocal_243[0]]==6){
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 10);
}}}
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0])){
iVar6[iVar0]=1;
ENTITY::SET_ENTITY_ROTATION(Local_265[iVar1 /*4*/][iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
if(iLocal_259==iVar1 && ENTITY::DOES_ENTITY_EXIST(uLocal_267[iVar0])){
ENTITY::SET_ENTITY_ROTATION(uLocal_267[iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
}}
}
else{
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_206[iVar1 /*21*/].f_2[iVar0] + (600f * timestep()));
}}else{
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_206[iVar1 /*21*/].f_2[iVar0] + (600f * timestep()));
}
iVar0++;
}
if(iVar1==iLocal_259){
if(!MISC::IS_BIT_SET(uLocal_229[func_11(iVar1)], func_10(iVar1))){
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 7);
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 8);
MISC::SET_BIT(&(uLocal_229[func_11(iVar1)]), func_10(iVar1));
}}
if(func_340(iVar1, iVar6[2])){
if(!func_331(&(Local_238[iVar1 /*2*/]))){
func_6(&(Local_238[iVar1 /*2*/]), 1, 0);
}elseif(func_5(&(Local_238[iVar1 /*2*/]), 1000, 1) && !MISC::IS_BIT_SET(uLocal_219, 12)){
if(iLocal_259==iVar1){
if(iLocal_223==17){
iVar2=func_48(Local_207.f_1[0 /*65*/][uLocal_243[0]], Local_207.f_1[1 /*65*/][uLocal_243[1]], Local_207.f_1[2 /*65*/][uLocal_243[2]]);
func_179(3, iVar2, Local_206[iLocal_259 /*21*/], -1);
func_169(20);
}
if(!MISC::IS_BIT_SET(uLocal_219, 12)){
MISC::SET_BIT(&uLocal_219, 12);
}
}}elseif(func_5(&(Local_238[iVar1 /*2*/]), 1250, 1)){
if(!func_5(&(Local_487.f_489[iVar1 /*2*/]), func_7(iVar1), 0)){
if(func_5(&(Local_487.f_489[iVar1 /*2*/]), (func_7(iVar1) - 2000), 0)){
bVar7=true;
if(Local_206[iVar1 /*21*/].f_15==-1f){
Local_206[iVar1 /*21*/].f_15=(to_float(Local_487.f_434[iVar1] * 30) + IntToFloat(floor((Local_206[iVar1 /*21*/].f_14 / 360f)) * 360));
}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar1])){
if(iLocal_259==iVar1){
if(!bVar7){
if(!MISC::IS_BIT_SET(uLocal_219, 11)){
Var3={
ENTITY::GET_ENTITY_COORDS(uLocal_266[iVar1], 1) 
};
Var3.f_2=(Var3.f_2 - 10f);
ENTITY::SET_ENTITY_COORDS(uLocal_266[iVar1], Var3, 1, 0, 0, 1);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_268)){
Var3={
ENTITY::GET_ENTITY_COORDS(iLocal_268, 1) 
};
Var3.f_2=(Var3.f_2 + 10f);
ENTITY::SET_ENTITY_COORDS(iLocal_268, Var3, 1, 0, 0, 1);
INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_268, INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
MISC::SET_BIT(&uLocal_219, 11);
}
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 12);
}
}}
func_222(iVar1, &Var3, &uVar4);
ENTITY::SET_ENTITY_ROTATION(uLocal_266[iVar1], 0f, Local_206[iVar1 /*21*/].f_14, uVar4, 2, 1);
if(iLocal_259==iVar1 && ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
ENTITY::SET_ENTITY_ROTATION(iLocal_268, 0f, Local_206[iVar1 /*21*/].f_14, uVar4, 2, 1);
}}
if(bVar7){
fVar9=(to_float(Local_487.f_434[iVar1] * 30) - (Local_206[iVar1 /*21*/].f_14 % 360f));
if(MISC::ABSF(fVar9) <=20f || (Local_206[iVar1 /*21*/].f_15 !=-1f && Local_206[iVar1 /*21*/].f_14 >=Local_206[iVar1 /*21*/].f_15)){
Local_206[iVar1 /*21*/].f_14=to_float(Local_487.f_434[iVar1] * 30);
if(iLocal_259==iVar1){
if(MISC::IS_BIT_SET(uLocal_219, 11)){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
Var3={
ENTITY::GET_ENTITY_COORDS(uLocal_266[iVar1], 1) 
};
Var3.f_2=(Var3.f_2 + 10f);
ENTITY::SET_ENTITY_COORDS(uLocal_266[iVar1], Var3, 1, 0, 0, 1);
INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_266[iVar1], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
Var3={
ENTITY::GET_ENTITY_COORDS(iLocal_268, 1) 
};
Var3.f_2=(Var3.f_2 - 10f);
ENTITY::SET_ENTITY_COORDS(iLocal_268, Var3, 1, 0, 0, 1);
MISC::CLEAR_BIT(&uLocal_219, 11);
}
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar1])){
ENTITY::SET_ENTITY_ROTATION(uLocal_266[iVar1], 0f, Local_206[iVar1 /*21*/].f_14, uVar4, 2, 1);
}
if(iLocal_259==iVar1 && ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
ENTITY::SET_ENTITY_ROTATION(iLocal_268, 0f, Local_206[iVar1 /*21*/].f_14, uVar4, 2, 1);
}
func_175(PLAYER::PLAYER_ID(), Local_206[iLocal_259 /*21*/].f_17, 13);
MISC::SET_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
}}else{
Local_206[iVar1 /*21*/].f_14=(Local_206[iVar1 /*21*/].f_14 + (300f * timestep()));
}}else{
Local_206[iVar1 /*21*/].f_14=(Local_206[iVar1 /*21*/].f_14 + (300f * timestep()));
}
}}}elseif(iLocal_259==iVar1 && iVar6[2]){
if(func_8(iVar1, &Local_206)){
if((Local_207.f_1[0 /*65*/][Local_487[iVar1 /*4*/][0]]==7 && Local_207.f_1[1 /*65*/][Local_487[iVar1 /*4*/][1]]==7) && Local_207.f_1[2 /*65*/][Local_487[iVar1 /*4*/][2]]==7){
}
else{
MISC::SET_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
}}else{
MISC::SET_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
}}}}else{
MISC::CLEAR_BIT(&(uLocal_229[func_11(iVar1)]), func_10(iVar1));
Local_206[iVar1 /*21*/].f_15=-1f;
iVar0=0;
while (iVar0 < 3){
Local_206[iVar1 /*21*/].f_10[iVar0]=-1f;
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0])){
if(Local_206[iVar1 /*21*/].f_2[iVar0] !=(Local_487.f_217[iVar1 /*4*/][iVar0] * 22.5f)){
func_222(iVar1, &Var3, &uVar4);
Local_206[iVar1 /*21*/].f_2[iVar0]=(Local_487.f_217[iVar1 /*4*/][iVar0] * 22.5f);
ENTITY::SET_ENTITY_ROTATION(Local_265[iVar1 /*4*/][iVar0], Local_206[iVar1 /*21*/].f_2[iVar0], 0f, uVar4, 2, 1);
}}else{
Local_206[iVar1 /*21*/].f_2[iVar0]=0f;
}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar1])){
if(Local_206[iVar1 /*21*/].f_14 !=to_float(Local_487.f_434[iVar1] * 30)){
func_222(iVar1, &Var3, &uVar4);
Local_206[iVar1 /*21*/].f_14=to_float(Local_487.f_434[iVar1] * 30);
ENTITY::SET_ENTITY_ROTATION(uLocal_266[iVar1], 0f, Local_206[iVar1 /*21*/].f_14, uVar4, 2, 1);
}}else{
Local_206[iVar1 /*21*/].f_14=0f;
}
if(iLocal_259==iVar1){
if(MISC::IS_BIT_SET(uLocal_219, 12)){
MISC::CLEAR_BIT(&uLocal_219, 12);
}
if(MISC::IS_BIT_SET(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10, 2) && !MISC::IS_BIT_SET(uLocal_219, 3)){
func_3(&(Local_237[iVar1 /*5*/][0 /*2*/]));
func_3(&(Local_237[iVar1 /*5*/][1 /*2*/]));
func_3(&(Local_238[iVar1 /*2*/]));
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), 2);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), false);
MISC::CLEAR_BIT(&(Local_491[PLAYER::PLAYER_ID() /*11*/].f_10), true);
MISC::CLEAR_BIT(&uLocal_219, false);
MISC::SET_BIT(&uLocal_220, 2);
}
if(MISC::IS_BIT_SET(uLocal_219, 11)){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar1])){
Var3={
ENTITY::GET_ENTITY_COORDS(uLocal_266[iVar1], 1) 
};
Var3.f_2=(Var3.f_2 + 10f);
ENTITY::SET_ENTITY_COORDS(uLocal_266[iVar1], Var3, 1, 0, 0, 1);
INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_266[iVar1], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
Var3={
ENTITY::GET_ENTITY_COORDS(iLocal_268, 1) 
};
Var3.f_2=(Var3.f_2 - 10f);
ENTITY::SET_ENTITY_COORDS(iLocal_268, Var3, 1, 0, 0, 1);
}
MISC::CLEAR_BIT(&uLocal_219, 11);
}
iVar0=0;
while (iVar0 < 3){
if(MISC::IS_BIT_SET(uLocal_219, (8 + iVar0))){
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar1 /*4*/][iVar0])){
Var3={
ENTITY::GET_ENTITY_COORDS(Local_265[iVar1 /*4*/][iVar0], 1) 
};
Var3.f_2=(Var3.f_2 + 10f);
ENTITY::SET_ENTITY_COORDS(Local_265[iVar1 /*4*/][iVar0], Var3, 1, 0, 0, 1);
INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_265[iVar1 /*4*/][iVar0], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()));
Var3={
ENTITY::GET_ENTITY_COORDS(uLocal_267[iVar0], 1) 
};
Var3.f_2=(Var3.f_2 - 10f);
ENTITY::SET_ENTITY_COORDS(uLocal_267[iVar0], Var3, 1, 0, 0, 1);
}
MISC::CLEAR_BIT(&uLocal_219, (8 + iVar0));
}
iVar0++;
}}else{
func_3(&(Local_237[iVar1 /*5*/][0 /*2*/]));
func_3(&(Local_237[iVar1 /*5*/][1 /*2*/]));
func_3(&(Local_238[iVar1 /*2*/]));
}}
iVar1++;
}}

int func_340(int iParam0, var uParam1){
if(((func_8(iParam0, &Local_206) && Local_207.f_1[0 /*65*/][Local_487[iParam0 /*4*/][0]]==7) && Local_207.f_1[1 /*65*/][Local_487[iParam0 /*4*/][1]]==7) && Local_207.f_1[2 /*65*/][Local_487[iParam0 /*4*/][2]]==7){
if(func_331(&(Local_487.f_489[iParam0 /*2*/]))){
if(uParam1 || func_5(&(Local_487.f_489[iParam0 /*2*/]), 6500, 0)){
return 1;
}}}
return 0;
}


void func_341(){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
var uVar4;
char cVar5[64];
iVar2=0;
while (iVar2 < 54){
if(func_342(iVar2)){
if(func_8(iVar2, &Local_206)){
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar2])){
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0)){
StringCopy(&cVar5, "vw_Prop_vw_slot_wheel_0", 64);
StringIntConCat(&cVar5, Local_206[iVar2 /*21*/].f_17, 64);
StringConCat(&cVar5, "a", 64);
iVar0=MISC::GET_HASH_KEY(&cVar5);
STREAMING::REQUEST_MODEL(iVar0);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
func_222(iVar2, &Var3, &uVar4);
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, uVar4, 0f, -0.12f, 1.6f) 
};
uLocal_266[iVar2]=OBJECT::CREATE_OBJECT(iVar0, Var3, 0, 0, 1);
ENTITY::FREEZE_ENTITY_POSITION(uLocal_266[iVar2], true);
ENTITY::SET_ENTITY_ROTATION(uLocal_266[iVar2], 0f, 0f, fVar4, 2, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}}}}
iVar1=0;
while (iVar1 < 3){
if(!ENTITY::DOES_ENTITY_EXIST(Local_265[iVar2 /*4*/][iVar1])){
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0)){
StringCopy(&cVar5, "vw_Prop_Casino_Slot_0", 64);
StringIntConCat(&cVar5, Local_206[iVar2 /*21*/].f_17, 64);
StringConCat(&cVar5, "a_reels", 64);
iVar0=MISC::GET_HASH_KEY(&cVar5);
STREAMING::REQUEST_MODEL(iVar0);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
func_222(iVar2, &Var3, &fVar4);
if(iVar1==0){
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, -0.115f, 0.047f, 0.906f) 
};
}elseif(iVar1==1){
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0.005f, 0.047f, 0.906f) 
};
}elseif(iVar1==2){
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0.125f, 0.047f, 0.906f) 
};
}
Local_265[iVar2 /*4*/][iVar1]=OBJECT::CREATE_OBJECT(iVar0, Var3, 0, 0, 1);
ENTITY::FREEZE_ENTITY_POSITION(Local_265[iVar2 /*4*/][iVar1], true);
ENTITY::SET_ENTITY_COLLISION(Local_265[iVar2 /*4*/][iVar1], false, 0);
ENTITY::SET_ENTITY_ROTATION(Local_265[iVar2 /*4*/][iVar1], 0f, 0f, fVar4, 2, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}}}
iVar1++;
}}else{
iVar1=0;
while (iVar1 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar2 /*4*/][iVar1])){
OBJECT::DELETE_OBJECT(&(Local_265[iVar2 /*4*/][iVar1]));
}
iVar1++;
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar2])){
OBJECT::DELETE_OBJECT(&(uLocal_266[iVar2]));
}}
iVar2++;
}
if(iLocal_259 >=0){
iVar1=0;
while (iVar1 < 3){
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_267[iVar1])){
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0)){
StringCopy(&cVar5, "Vw_prop_casino_slot_0", 64);
StringIntConCat(&cVar5, Local_206[iLocal_259 /*21*/].f_17, 64);
StringConCat(&cVar5, "b_reels", 64);
iVar0=MISC::GET_HASH_KEY(&cVar5);
STREAMING::REQUEST_MODEL(iVar0);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
func_222(iLocal_259, &Var3, &fVar4);
if(iVar1==0){
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, -0.115f, 0.047f, 0.906f) 
};
}
elseif(iVar1==1){
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0.005f, 0.047f, 0.906f) 
};
}
elseif(iVar1==2){
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0.125f, 0.047f, 0.906f) 
};
}
Var3.f_2=(Var3.f_2 - 10f);
uLocal_267[iVar1]=OBJECT::CREATE_OBJECT(iVar0, Var3, 0, 0, 1);
ENTITY::FREEZE_ENTITY_POSITION(uLocal_267[iVar1], true);
ENTITY::SET_ENTITY_ROTATION(uLocal_267[iVar1], 0f, 0f, fVar4, 2, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}}}
iVar1++;
}
if(func_8(iLocal_259, &Local_206)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0)){
StringCopy(&cVar5, "vw_prop_vw_slot_wheel_0", 64);
StringIntConCat(&cVar5, Local_206[iLocal_259 /*21*/].f_17, 64);
StringConCat(&cVar5, "b", 64);
iVar0=MISC::GET_HASH_KEY(&cVar5);
STREAMING::REQUEST_MODEL(iVar0);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
func_222(iLocal_259, &Var3, &fVar4);
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0f, -0.12f, 1.6f) 
};
Var3.f_2=(Var3.f_2 - 10f);
iLocal_268=OBJECT::CREATE_OBJECT(iVar0, Var3, 0, 0, 1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_268, true);
ENTITY::SET_ENTITY_ROTATION(iLocal_268, 0f, 0f, fVar4, 2, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}}}}}else{
iVar1=0;
while (iVar1 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_267[iVar1])){
OBJECT::DELETE_OBJECT(&(uLocal_267[iVar1]));
}
iVar1++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
OBJECT::DELETE_OBJECT(&iLocal_268);
}}}

int func_342(int iParam0){
struct<3> Var0;
var uVar1;
func_222(iParam0, &Var0, &uVar1);
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_101(PLAYER::PLAYER_ID()), Var0, 1) <=10f){
return 1;
}
return 0;
}


void func_343(){
int iVar0;
int iVar1;
struct<3> Var2;
var uVar3;
var uVar4;
iVar0=0;
while (iVar0 < 4){
if(Local_230[iVar0 /*2*/].f_1==-1){
iVar1=func_344(Local_230[iVar0 /*2*/], iVar0);
if(iVar1 !=-1){
Local_230[iVar0 /*2*/]=iVar1;
Local_230[iVar0 /*2*/].f_1=AUDIO::GET_SOUND_ID();
func_222(iVar1, &Var2, &uVar3);
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, uVar3, 0f, -0.2f, 1f) 
};
uVar4=func_176(Local_206[iVar1 /*21*/].f_17);
AUDIO::PLAY_SOUND_FROM_COORD(Local_230[iVar0 /*2*/].f_1, "attract_loop", Var2, uVar4, 0, 0, 0);
}}elseif(func_320(Local_230[iVar0 /*2*/]) || Local_487.f_598[Local_230[iVar0 /*2*/]] !=-1){
if(Local_487.f_598[Local_230[iVar0 /*2*/]] !=PLAYER::PLAYER_ID()){
AUDIO::STOP_SOUND(Local_230[iVar0 /*2*/].f_1);
AUDIO::RELEASE_SOUND_ID(Local_230[iVar0 /*2*/].f_1);
Local_230[iVar0 /*2*/].f_1=-1;
}}elseif(AUDIO::HAS_SOUND_FINISHED(Local_230[iVar0 /*2*/].f_1)){
AUDIO::RELEASE_SOUND_ID(Local_230[iVar0 /*2*/].f_1);
Local_230[iVar0 /*2*/].f_1=-1;
}
iVar0++;
}}

int func_344(int iParam0, int iParam1){
int iVar0[36];
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
int iVar7;
if(iParam1 < 2){
iVar4=0;
iVar5=35;
}else{
iVar4=36;
iVar5=53;
}
iVar2=iVar4;
while (iVar2 <=iVar5){
if(Local_487.f_598[iVar2]==-1 && !func_320(iVar2)){
bVar6=false;
iVar3=0;
while (iVar3 < 4){
if(Local_230[iVar3 /*2*/]==iVar2){
bVar6=true;
iVar3=4;
}
iVar3++;
}
if(!bVar6){
iVar0[iVar1]=iVar2;
iVar1++;
}}
iVar2++;
}
iVar7=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
iVar2=0;
while (iVar2 < iVar1){
if(iParam0 !=-1 && (iVar0[iVar7]==iParam0 || Local_206[iVar0[iVar7] /*21*/].f_17==Local_206[iParam0 /*21*/].f_17)){
iVar7++;
if(iVar7 >=iVar1){
iVar7=0;
}}else{
return iVar0[iVar7];
}
iVar2++;
}
return -1;
}


void func_345(){
if(func_349()){
func_359();
}
if(Global_1970463){
Global_1970463=0;
func_359();
}
if(Global_2635559.f_2681 && Global_2639783 !=0){
if(Global_2639783 !=6){
func_359();
}}
if(!func_347(PLAYER::PLAYER_ID())){
func_359();
}
if((func_346() && Global_1950108.f_3683 !=123) && CAM::IS_SCREEN_FADED_OUT()){
func_359();
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !MISC::IS_BIT_SET(Global_4718592.f_34, 9)){
func_359();
}}


var func__346(){
return MISC::IS_BIT_SET(Global_1950108.f_3, 2);
}

int func_347(int iParam0){
if(iParam0 !=func_61()){
if(func_12(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_348(Global_2657589[iParam0 /*466*/].f_321.f_7)==14;
}}}
return 0;
}

int func_348(int iParam0){
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

int func_349(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_356()){
return 1;
}
if(Global_2696917){
return 1;
}
if(func_355()){
return 1;
}
if(func_354(159)){
if(!func_353()){
return 1;
}}
if(func_354(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_350() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_350())==0){
return 1;
}}
return 0;
}

int func_350(){
switch (func_352()){
case 0:
return func_351();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_351(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_352(){
return Global_32163;
}


bool func_353(){
return Global_2683864.f_698;
}

int func_354(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_355(){
return Global_2694526;
}


bool func_356(){
return Global_2683864.f_693;
}


void func_357(){
wait(0);
}


void func_358(var uParam0, var uParam1){
int iVar0;
int iVar1;
uParam0->f_1[0 /*65*/][0]=0;
uParam0->f_1[0 /*65*/][1]=6;
uParam0->f_1[0 /*65*/][2]=1;
uParam0->f_1[0 /*65*/][3]=2;
uParam0->f_1[0 /*65*/][4]=3;
uParam0->f_1[0 /*65*/][5]=4;
uParam0->f_1[0 /*65*/][6]=7;
uParam0->f_1[0 /*65*/][7]=2;
uParam0->f_1[0 /*65*/][8]=1;
uParam0->f_1[0 /*65*/][9]=3;
uParam0->f_1[0 /*65*/][10]=4;
uParam0->f_1[0 /*65*/][11]=1;
uParam0->f_1[0 /*65*/][12]=0;
uParam0->f_1[0 /*65*/][13]=5;
uParam0->f_1[0 /*65*/][14]=1;
uParam0->f_1[0 /*65*/][15]=0;
uParam0->f_1[0 /*65*/][16]=3;
uParam0->f_1[0 /*65*/][17]=0;
uParam0->f_1[0 /*65*/][18]=4;
uParam0->f_1[0 /*65*/][19]=2;
uParam0->f_1[0 /*65*/][20]=1;
uParam0->f_1[0 /*65*/][21]=2;
uParam0->f_1[0 /*65*/][22]=1;
uParam0->f_1[0 /*65*/][23]=1;
uParam0->f_1[0 /*65*/][24]=7;
uParam0->f_1[0 /*65*/][25]=3;
uParam0->f_1[0 /*65*/][26]=1;
uParam0->f_1[0 /*65*/][27]=2;
uParam0->f_1[0 /*65*/][28]=4;
uParam0->f_1[0 /*65*/][29]=5;
uParam0->f_1[0 /*65*/][30]=7;
uParam0->f_1[0 /*65*/][31]=3;
uParam0->f_1[0 /*65*/][32]=0;
uParam0->f_1[0 /*65*/][33]=4;
uParam0->f_1[0 /*65*/][34]=6;
uParam0->f_1[0 /*65*/][35]=1;
uParam0->f_1[0 /*65*/][36]=2;
uParam0->f_1[0 /*65*/][37]=0;
uParam0->f_1[0 /*65*/][38]=2;
uParam0->f_1[0 /*65*/][39]=0;
uParam0->f_1[0 /*65*/][40]=3;
uParam0->f_1[0 /*65*/][41]=5;
uParam0->f_1[0 /*65*/][42]=3;
uParam0->f_1[0 /*65*/][43]=4;
uParam0->f_1[0 /*65*/][44]=2;
uParam0->f_1[0 /*65*/][45]=1;
uParam0->f_1[0 /*65*/][46]=2;
uParam0->f_1[0 /*65*/][47]=1;
uParam0->f_1[0 /*65*/][48]=6;
uParam0->f_1[0 /*65*/][49]=1;
uParam0->f_1[0 /*65*/][50]=7;
uParam0->f_1[0 /*65*/][51]=5;
uParam0->f_1[0 /*65*/][52]=7;
uParam0->f_1[0 /*65*/][53]=1;
uParam0->f_1[0 /*65*/][54]=2;
uParam0->f_1[0 /*65*/][55]=4;
uParam0->f_1[0 /*65*/][56]=1;
uParam0->f_1[0 /*65*/][57]=2;
uParam0->f_1[0 /*65*/][58]=3;
uParam0->f_1[0 /*65*/][59]=5;
uParam0->f_1[0 /*65*/][60]=7;
uParam0->f_1[0 /*65*/][61]=4;
uParam0->f_1[0 /*65*/][62]=0;
uParam0->f_1[0 /*65*/][63]=6;
uParam0->f_1[1 /*65*/][0]=3;
uParam0->f_1[1 /*65*/][1]=0;
uParam0->f_1[1 /*65*/][2]=1;
uParam0->f_1[1 /*65*/][3]=6;
uParam0->f_1[1 /*65*/][4]=3;
uParam0->f_1[1 /*65*/][5]=1;
uParam0->f_1[1 /*65*/][6]=0;
uParam0->f_1[1 /*65*/][7]=3;
uParam0->f_1[1 /*65*/][8]=2;
uParam0->f_1[1 /*65*/][9]=7;
uParam0->f_1[1 /*65*/][10]=5;
uParam0->f_1[1 /*65*/][11]=0;
uParam0->f_1[1 /*65*/][12]=1;
uParam0->f_1[1 /*65*/][13]=7;
uParam0->f_1[1 /*65*/][14]=4;
uParam0->f_1[1 /*65*/][15]=0;
uParam0->f_1[1 /*65*/][16]=1;
uParam0->f_1[1 /*65*/][17]=1;
uParam0->f_1[1 /*65*/][18]=0;
uParam0->f_1[1 /*65*/][19]=2;
uParam0->f_1[1 /*65*/][20]=5;
uParam0->f_1[1 /*65*/][21]=1;
uParam0->f_1[1 /*65*/][22]=4;
uParam0->f_1[1 /*65*/][23]=0;
uParam0->f_1[1 /*65*/][24]=3;
uParam0->f_1[1 /*65*/][25]=0;
uParam0->f_1[1 /*65*/][26]=3;
uParam0->f_1[1 /*65*/][27]=0;
uParam0->f_1[1 /*65*/][28]=1;
uParam0->f_1[1 /*65*/][29]=0;
uParam0->f_1[1 /*65*/][30]=6;
uParam0->f_1[1 /*65*/][31]=0;
uParam0->f_1[1 /*65*/][32]=0;
uParam0->f_1[1 /*65*/][33]=1;
uParam0->f_1[1 /*65*/][34]=0;
uParam0->f_1[1 /*65*/][35]=3;
uParam0->f_1[1 /*65*/][36]=0;
uParam0->f_1[1 /*65*/][37]=1;
uParam0->f_1[1 /*65*/][38]=0;
uParam0->f_1[1 /*65*/][39]=2;
uParam0->f_1[1 /*65*/][40]=2;
uParam0->f_1[1 /*65*/][41]=4;
uParam0->f_1[1 /*65*/][42]=0;
uParam0->f_1[1 /*65*/][43]=0;
uParam0->f_1[1 /*65*/][44]=0;
uParam0->f_1[1 /*65*/][45]=7;
uParam0->f_1[1 /*65*/][46]=0;
uParam0->f_1[1 /*65*/][47]=2;
uParam0->f_1[1 /*65*/][48]=7;
uParam0->f_1[1 /*65*/][49]=5;
uParam0->f_1[1 /*65*/][50]=0;
uParam0->f_1[1 /*65*/][51]=1;
uParam0->f_1[1 /*65*/][52]=0;
uParam0->f_1[1 /*65*/][53]=0;
uParam0->f_1[1 /*65*/][54]=0;
uParam0->f_1[1 /*65*/][55]=1;
uParam0->f_1[1 /*65*/][56]=5;
uParam0->f_1[1 /*65*/][57]=5;
uParam0->f_1[1 /*65*/][58]=0;
uParam0->f_1[1 /*65*/][59]=7;
uParam0->f_1[1 /*65*/][60]=0;
uParam0->f_1[1 /*65*/][61]=0;
uParam0->f_1[1 /*65*/][62]=1;
uParam0->f_1[1 /*65*/][63]=6;
uParam0->f_1[2 /*65*/][0]=0;
uParam0->f_1[2 /*65*/][1]=1;
uParam0->f_1[2 /*65*/][2]=7;
uParam0->f_1[2 /*65*/][3]=6;
uParam0->f_1[2 /*65*/][4]=0;
uParam0->f_1[2 /*65*/][5]=2;
uParam0->f_1[2 /*65*/][6]=2;
uParam0->f_1[2 /*65*/][7]=4;
uParam0->f_1[2 /*65*/][8]=0;
uParam0->f_1[2 /*65*/][9]=1;
uParam0->f_1[2 /*65*/][10]=0;
uParam0->f_1[2 /*65*/][11]=5;
uParam0->f_1[2 /*65*/][12]=0;
uParam0->f_1[2 /*65*/][13]=2;
uParam0->f_1[2 /*65*/][14]=5;
uParam0->f_1[2 /*65*/][15]=0;
uParam0->f_1[2 /*65*/][16]=0;
uParam0->f_1[2 /*65*/][17]=3;
uParam0->f_1[2 /*65*/][18]=0;
uParam0->f_1[2 /*65*/][19]=1;
uParam0->f_1[2 /*65*/][20]=0;
uParam0->f_1[2 /*65*/][21]=0;
uParam0->f_1[2 /*65*/][22]=0;
uParam0->f_1[2 /*65*/][23]=2;
uParam0->f_1[2 /*65*/][24]=1;
uParam0->f_1[2 /*65*/][25]=0;
uParam0->f_1[2 /*65*/][26]=1;
uParam0->f_1[2 /*65*/][27]=0;
uParam0->f_1[2 /*65*/][28]=0;
uParam0->f_1[2 /*65*/][29]=2;
uParam0->f_1[2 /*65*/][30]=0;
uParam0->f_1[2 /*65*/][31]=1;
uParam0->f_1[2 /*65*/][32]=0;
uParam0->f_1[2 /*65*/][33]=4;
uParam0->f_1[2 /*65*/][34]=0;
uParam0->f_1[2 /*65*/][35]=4;
uParam0->f_1[2 /*65*/][36]=0;
uParam0->f_1[2 /*65*/][37]=0;
uParam0->f_1[2 /*65*/][38]=0;
uParam0->f_1[2 /*65*/][39]=3;
uParam0->f_1[2 /*65*/][40]=0;
uParam0->f_1[2 /*65*/][41]=4;
uParam0->f_1[2 /*65*/][42]=0;
uParam0->f_1[2 /*65*/][43]=0;
uParam0->f_1[2 /*65*/][44]=7;
uParam0->f_1[2 /*65*/][45]=0;
uParam0->f_1[2 /*65*/][46]=2;
uParam0->f_1[2 /*65*/][47]=0;
uParam0->f_1[2 /*65*/][48]=5;
uParam0->f_1[2 /*65*/][49]=4;
uParam0->f_1[2 /*65*/][50]=0;
uParam0->f_1[2 /*65*/][51]=3;
uParam0->f_1[2 /*65*/][52]=0;
uParam0->f_1[2 /*65*/][53]=0;
uParam0->f_1[2 /*65*/][54]=0;
uParam0->f_1[2 /*65*/][55]=3;
uParam0->f_1[2 /*65*/][56]=0;
uParam0->f_1[2 /*65*/][57]=3;
uParam0->f_1[2 /*65*/][58]=0;
uParam0->f_1[2 /*65*/][59]=2;
uParam0->f_1[2 /*65*/][60]=4;
uParam0->f_1[2 /*65*/][61]=0;
uParam0->f_1[2 /*65*/][62]=0;
uParam0->f_1[2 /*65*/][63]=6;
uParam0->f_278[0]=0;
uParam0->f_278[1]=25;
uParam0->f_278[2]=50;
uParam0->f_278[3]=75;
uParam0->f_278[4]=100;
uParam0->f_278[5]=250;
uParam0->f_278[6]=1000;
uParam0->f_278[7]=500;
uParam0->f_278[8]=5;
uParam0->f_278[9]=2;
uParam0->f_226[0 /*17*/][0]=5;
uParam0->f_226[0 /*17*/][1]=2;
uParam0->f_226[0 /*17*/][2]=1;
uParam0->f_226[0 /*17*/][3]=3;
uParam0->f_226[0 /*17*/][4]=7;
uParam0->f_226[0 /*17*/][5]=6;
uParam0->f_226[0 /*17*/][6]=1;
uParam0->f_226[0 /*17*/][7]=4;
uParam0->f_226[0 /*17*/][8]=5;
uParam0->f_226[0 /*17*/][9]=2;
uParam0->f_226[0 /*17*/][10]=3;
uParam0->f_226[0 /*17*/][11]=7;
uParam0->f_226[0 /*17*/][12]=2;
uParam0->f_226[0 /*17*/][13]=4;
uParam0->f_226[0 /*17*/][14]=1;
uParam0->f_226[0 /*17*/][15]=7;
uParam0->f_226[1 /*17*/][0]=5;
uParam0->f_226[1 /*17*/][1]=2;
uParam0->f_226[1 /*17*/][2]=1;
uParam0->f_226[1 /*17*/][3]=3;
uParam0->f_226[1 /*17*/][4]=7;
uParam0->f_226[1 /*17*/][5]=6;
uParam0->f_226[1 /*17*/][6]=1;
uParam0->f_226[1 /*17*/][7]=4;
uParam0->f_226[1 /*17*/][8]=5;
uParam0->f_226[1 /*17*/][9]=2;
uParam0->f_226[1 /*17*/][10]=3;
uParam0->f_226[1 /*17*/][11]=7;
uParam0->f_226[1 /*17*/][12]=2;
uParam0->f_226[1 /*17*/][13]=4;
uParam0->f_226[1 /*17*/][14]=1;
uParam0->f_226[1 /*17*/][15]=7;
uParam0->f_226[2 /*17*/][0]=5;
uParam0->f_226[2 /*17*/][1]=2;
uParam0->f_226[2 /*17*/][2]=1;
uParam0->f_226[2 /*17*/][3]=3;
uParam0->f_226[2 /*17*/][4]=7;
uParam0->f_226[2 /*17*/][5]=6;
uParam0->f_226[2 /*17*/][6]=1;
uParam0->f_226[2 /*17*/][7]=4;
uParam0->f_226[2 /*17*/][8]=5;
uParam0->f_226[2 /*17*/][9]=2;
uParam0->f_226[2 /*17*/][10]=3;
uParam0->f_226[2 /*17*/][11]=7;
uParam0->f_226[2 /*17*/][12]=2;
uParam0->f_226[2 /*17*/][13]=4;
uParam0->f_226[2 /*17*/][14]=1;
uParam0->f_226[2 /*17*/][15]=7;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < *uParam0){
uParam0->f_197[iVar0 /*9*/][uParam0->f_1[iVar0 /*65*/][iVar1]]++;
iVar1++;
}
iVar0++;
}
(uParam1[0 /*21*/])->f_17=4;
(uParam1[1 /*21*/])->f_17=5;
(uParam1[2 /*21*/])->f_17=6;
(uParam1[3 /*21*/])->f_17=7;
(uParam1[4 /*21*/])->f_17=8;
(uParam1[5 /*21*/])->f_17=1;
(uParam1[6 /*21*/])->f_17=2;
(uParam1[7 /*21*/])->f_17=3;
(uParam1[8 /*21*/])->f_17=4;
(uParam1[9 /*21*/])->f_17=5;
(uParam1[10 /*21*/])->f_17=6;
(uParam1[11 /*21*/])->f_17=7;
(uParam1[12 /*21*/])->f_17=1;
(uParam1[13 /*21*/])->f_17=2;
(uParam1[14 /*21*/])->f_17=3;
(uParam1[15 /*21*/])->f_17=4;
(uParam1[16 /*21*/])->f_17=5;
(uParam1[17 /*21*/])->f_17=4;
(uParam1[18 /*21*/])->f_17=5;
(uParam1[19 /*21*/])->f_17=1;
(uParam1[20 /*21*/])->f_17=2;
(uParam1[21 /*21*/])->f_17=3;
(uParam1[22 /*21*/])->f_17=7;
(uParam1[23 /*21*/])->f_17=8;
(uParam1[24 /*21*/])->f_17=4;
(uParam1[25 /*21*/])->f_17=5;
(uParam1[26 /*21*/])->f_17=6;
(uParam1[27 /*21*/])->f_17=4;
(uParam1[28 /*21*/])->f_17=5;
(uParam1[29 /*21*/])->f_17=1;
(uParam1[30 /*21*/])->f_17=2;
(uParam1[31 /*21*/])->f_17=3;
(uParam1[32 /*21*/])->f_17=7;
(uParam1[33 /*21*/])->f_17=8;
(uParam1[34 /*21*/])->f_17=4;
(uParam1[35 /*21*/])->f_17=5;
(uParam1[36 /*21*/])->f_17=6;
(uParam1[37 /*21*/])->f_17=8;
(uParam1[38 /*21*/])->f_17=7;
(uParam1[39 /*21*/])->f_17=6;
(uParam1[40 /*21*/])->f_17=5;
(uParam1[41 /*21*/])->f_17=4;
(uParam1[42 /*21*/])->f_17=3;
(uParam1[43 /*21*/])->f_17=2;
(uParam1[44 /*21*/])->f_17=3;
(uParam1[45 /*21*/])->f_17=4;
(uParam1[46 /*21*/])->f_17=5;
(uParam1[47 /*21*/])->f_17=1;
(uParam1[48 /*21*/])->f_17=2;
(uParam1[49 /*21*/])->f_17=6;
(uParam1[50 /*21*/])->f_17=7;
(uParam1[51 /*21*/])->f_17=8;
(uParam1[52 /*21*/])->f_17=4;
(uParam1[53 /*21*/])->f_17=5;
iVar0=0;
while (iVar0 < 54){
switch ((uParam1[iVar0 /*21*/])->f_17){
case 1:
case 6:
(uParam1[iVar0 /*21*/])->f_16=100;
break;
case 2:
case 3:
(uParam1[iVar0 /*21*/])->f_16=25;
break;
case 4:
case 8:
(uParam1[iVar0 /*21*/])->f_16=5;
break;
case 5:
case 7:
(uParam1[iVar0 /*21*/])->f_16=500;
break;
}
iVar0++;
}}


void func_359(){
struct<8> Var0;
int iVar1;
int iVar2;
if(iLocal_258 !=-1){
func_201(&iLocal_258);
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_casino_slot_machines_playing")){
AUDIO::STOP_AUDIO_SCENE("dlc_vw_casino_slot_machines_playing");
}
if(iLocal_259 !=-1){
if(MISC::IS_BIT_SET(uLocal_219, 23)){
Var0={
func_199(Local_206[iLocal_259 /*21*/].f_17) 
};
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
MISC::CLEAR_BIT(&uLocal_219, 23);
}
if(MISC::IS_BIT_SET(uLocal_219, 19)){
func_168(0, 0);
func_165(1, -1);
MISC::CLEAR_BIT(&uLocal_219, 19);
}
func_220(0);
}
func_187();
func_32();
if(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_4, 7)){
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_4), 7);
func_34();
}
if(MISC::IS_BIT_SET(uLocal_219, 13)){
if(func_224()){
func_223(0);
}
MISC::CLEAR_BIT(&uLocal_219, 13);
}
if(MISC::IS_BIT_SET(uLocal_219, 18)){
STREAMING::REMOVE_ANIM_DICT(func_330());
MISC::CLEAR_BIT(&uLocal_219, 18);
}
iVar2=0;
while (iVar2 < 54){
iVar1=0;
while (iVar1 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Local_265[iVar2 /*4*/][iVar1])){
OBJECT::DELETE_OBJECT(&(Local_265[iVar2 /*4*/][iVar1]));
}
iVar1++;
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_266[iVar2])){
OBJECT::DELETE_OBJECT(&(uLocal_266[iVar2]));
}
iVar2++;
}
iVar1=0;
while (iVar1 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_267[iVar1])){
OBJECT::DELETE_OBJECT(&(uLocal_267[iVar1]));
}
iVar1++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_268)){
OBJECT::DELETE_OBJECT(&iLocal_268);
}
if(MISC::IS_BIT_SET(uLocal_219, 2)){
if(func_12(PLAYER::PLAYER_ID(), 1, 1) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
func_17(PLAYER::PLAYER_ID(), 1, 0, 0);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}
if(HUD::IS_RADAR_HIDDEN()){
HUD::DISPLAY_RADAR(1);
}
func_16(0);
MISC::CLEAR_BIT(&uLocal_219, 2);
}
func_168(0, 0);
func_165(1, -1);
func_360();
}


void func_360(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_361(){
if(Global_1970463){
Global_1970463=0;
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
func_363(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_487, 660, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_491, 353, 0);
if(!func_362()){
func_359();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
}else{
func_359();
}}

int func_362(){
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
if(func_356()){
return 0;
}
if(func_354(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_363(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_360();
}else{
return 0;
}}
if(!func_364(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_360();
}else{
return 0;
}}
if(func_356()){
if(!bParam2){
func_360();
}else{
return 0;
}}
if(func_354(157)){
if(!bParam2){
func_360();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_360();
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
func_360();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_360();
}else{
return 0;
}}
return 1;
}


bool func_364(bool bParam0){
if(bParam0){}
return Global_1575035;
}


void func_365(){
int iVar0;
iVar0=0;
while (iVar0 < 54){
Local_487.f_598[iVar0]=-1;
iVar0++;
}
iVar0=0;
while (iVar0 < 4){
Local_230[iVar0 /*2*/].f_1=-1;
Local_230[iVar0 /*2*/]=-1;
iVar0++;
}}