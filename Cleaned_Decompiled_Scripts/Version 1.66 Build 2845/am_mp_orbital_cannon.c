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
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
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
struct<20> Local_111={
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0 
};
var uLocal_112=10;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=12;
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
var uLocal_553=0;
var uLocal_554=0;
var uLocal_555=0;
var uLocal_556=0;
var uLocal_557=0;
var uLocal_558=0;
var uLocal_559=0;
var uLocal_560=0;
var uLocal_561=0;
var uLocal_562=0;
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
var uLocal_573=0;
var uLocal_574=0;
var uLocal_575=0;
var uLocal_576=0;
var uLocal_577=0;
var uLocal_578=0;
var uLocal_579=0;
var uLocal_580=0;
var uLocal_581=0;
var uLocal_582=0;
var uLocal_583=0;
var uLocal_584=0;
var uLocal_585=0;
var uLocal_586=0;
var uLocal_587=0;
var uLocal_588=0;
var uLocal_589=0;
var uLocal_590=0;
var uLocal_591=0;
var uLocal_592=0;
var uLocal_593=0;
var uLocal_594=0;
var uLocal_595=0;
var uLocal_596=0;
var uLocal_597=0;
var uLocal_598=0;
var uLocal_599=0;
var uLocal_600=0;
var uLocal_601=0;
var uLocal_602=0;
var uLocal_603=0;
var uLocal_604=0;
var uLocal_605=0;
var uLocal_606=0;
var uLocal_607=0;
var uLocal_608=0;
var uLocal_609=0;
var uLocal_610=0;
var uLocal_611=0;
var uLocal_612=0;
var uLocal_613=0;
var uLocal_614=0;
var uLocal_615=0;
var uLocal_616=0;
var uLocal_617=0;
var uLocal_618=0;
var uLocal_619=0;
var uLocal_620=0;
var uLocal_621=0;
var uLocal_622=0;
var uLocal_623=0;
var uLocal_624=0;
var uLocal_625=0;
var uLocal_626=0;
var uLocal_627=0;
var uLocal_628=0;
var uLocal_629=0;
var uLocal_630=0;
var uLocal_631=0;
var uLocal_632=0;
var uLocal_633=0;
var uLocal_634=0;
var uLocal_635=0;
var uLocal_636=0;
var uLocal_637=0;
var uLocal_638=0;
var uLocal_639=0;
var uLocal_640=0;
var uLocal_641=0;
var uLocal_642=0;
var uLocal_643=0;
var uLocal_644=0;
var uLocal_645=0;
var uLocal_646=0;
var uLocal_647=0;
var uLocal_648=0;
var uLocal_649=0;
var uLocal_650=0;
var uLocal_651=0;
var uLocal_652=0;
var uLocal_653=0;
var uLocal_654=0;
var uLocal_655=0;
var uLocal_656=0;
var uLocal_657=0;
var uLocal_658=0;
var uLocal_659=0;
var uLocal_660=0;
var uLocal_661=0;
var uLocal_662=0;
var uLocal_663=0;
var uLocal_664=0;
var uLocal_665=0;
var uLocal_666=0;
var uLocal_667=0;
var uLocal_668=0;
var uLocal_669=0;
var uLocal_670=0;
var uLocal_671=0;
var uLocal_672=0;
var uLocal_673=0;
var uLocal_674=0;
var uLocal_675=0;
var uLocal_676=0;
var uLocal_677=0;
var uLocal_678=0;
var uLocal_679=0;
var uLocal_680=0;
var uLocal_681=0;
var uLocal_682=0;
var uLocal_683=0;
var uLocal_684=0;
var uLocal_685=0;
var uLocal_686=0;
var uLocal_687=0;
var uLocal_688=0;
var uLocal_689=0;
var uLocal_690=0;
var uLocal_691=0;
var uLocal_692=0;
var uLocal_693=0;
var uLocal_694=0;
var uLocal_695=0;
var uLocal_696=0;
var uLocal_697=0;
var uLocal_698=0;
var uLocal_699=0;
var uLocal_700=0;
var uLocal_701=0;
var uLocal_702=0;
var uLocal_703=0;
var uLocal_704=0;
var uLocal_705=0;
var uLocal_706=0;
var uLocal_707=0;
var uLocal_708=0;
var uLocal_709=0;
var uLocal_710=0;
var uLocal_711=0;
var uLocal_712=0;
var uLocal_713=0;
var uLocal_714=0;
var uLocal_715=0;
var uLocal_716=0;
var uLocal_717=0;
var uLocal_718=0;
var uLocal_719=0;
var uLocal_720=0;
var uLocal_721=0;
var uLocal_722=0;
var uLocal_723=0;
var uLocal_724=0;
var uLocal_725=0;
var uLocal_726=0;
var uLocal_727=0;
var uLocal_728=0;
var uLocal_729=0;
var uLocal_730=0;
var uLocal_731=0;
var uLocal_732=0;
var uLocal_733=0;
var uLocal_734=0;
var uLocal_735=0;
var uLocal_736=0;
var uLocal_737=0;
var uLocal_738=0;
var uLocal_739=0;
var uLocal_740=0;
var uLocal_741=0;
var uLocal_742=0;
var uLocal_743=0;
var uLocal_744=0;
var uLocal_745=0;
var uLocal_746=0;
var uLocal_747=0;
var uLocal_748=0;
var uLocal_749=0;
var uLocal_750=0;
var uLocal_751=0;
var uLocal_752=0;
var uLocal_753=0;
var uLocal_754=0;
var uLocal_755=0;
var uLocal_756=0;
var uLocal_757=0;
var uLocal_758=0;
var uLocal_759=0;
var uLocal_760=0;
var uLocal_761=0;
var uLocal_762=0;
var uLocal_763=0;
var uLocal_764=0;
var uLocal_765=0;
var uLocal_766=0;
var uLocal_767=0;
var uLocal_768=0;
var uLocal_769=0;
var uLocal_770=0;
var uLocal_771=0;
var uLocal_772=0;
var uLocal_773=0;
var uLocal_774=0;
var uLocal_775=0;
var uLocal_776=0;
var uLocal_777=0;
var uLocal_778=0;
var uLocal_779=0;
var uLocal_780=0;
var uLocal_781=0;
var uLocal_782=0;
var uLocal_783=0;
var uLocal_784=0;
var uLocal_785=0;
var uLocal_786=0;
var uLocal_787=0;
var uLocal_788=0;
var uLocal_789=0;
var uLocal_790=0;
var uLocal_791=0;
var uLocal_792=0;
var uLocal_793=0;
var uLocal_794=0;
var uLocal_795=0;
var uLocal_796=0;
var uLocal_797=0;
var uLocal_798=0;
var uLocal_799=0;
var uLocal_800=0;
var uLocal_801=0;
var uLocal_802=0;
var uLocal_803=0;
var uLocal_804=0;
var uLocal_805=0;
var uLocal_806=0;
var uLocal_807=0;
var uLocal_808=0;
var uLocal_809=0;
var uLocal_810=0;
var uLocal_811=0;
var uLocal_812=0;
var uLocal_813=0;
var uLocal_814=1065353216;
var uLocal_815=0;
var uLocal_816=0;
var uLocal_817=0;
var uLocal_818=0;
var uLocal_819=0;
var uLocal_820=0;
var uLocal_821=0;
var uLocal_822=0;
var uLocal_823=0;
var uLocal_824=0;
var uLocal_825=0;
var uLocal_826=0;
var uLocal_827=0;
var uLocal_828=0;
var uLocal_829=0;
var uLocal_830=0;
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
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
fLocal_28=0f;
fLocal_32=-0.0375f;
fLocal_33=0.17f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
func_243();
while (true){
wait(0);
func_51(&Local_111);
if(((func_50() || func_49()) || func_48()) || func_47()){
if(Local_111.f_19==3){
func_5(&Local_111, 0);
}}else{
func_51(&Local_111);
}
if(func_3()){
func_5(&Local_111, 1);
func_1();
}}}


void func_1(){
func_2();
}


void func_2(){
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3(){
if((!Global_2764566 || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_4(0))) || (!NETWORK::NETWORK_IS_SESSION_ACTIVE() && !func_4(0))){
return 1;
}
return 0;
}


bool func_4(bool bParam0){
if(bParam0){}
return Global_1575035;
}


void func_5(var uParam0, bool bParam1){
func_12(uParam0, bParam1);
if(MISC::IS_BIT_SET(uParam0->f_5, 0)){
func_11();
MISC::CLEAR_BIT(&(uParam0->f_5), 0);
}
if(MISC::IS_BIT_SET(uParam0->f_5, 1)){
func_10();
MISC::CLEAR_BIT(&(uParam0->f_5), 1);
}
if(uParam0->f_18 !=-1){
func_8(&(uParam0->f_18));
}
func_7(uParam0, 10);
uParam0->f_5=0;
uParam0->f_10=0;
func_6(uParam0, 0);
}


void func_6(var uParam0, int iParam1){
uParam0->f_19=iParam1;
}


void func_7(var uParam0, int iParam1){
uParam0->f_20=iParam1;
}


void func_8(var uParam0){
int iVar0;
if(*uParam0==-1){
return;
}
iVar0=func_9(*uParam0);
if(iVar0==-1){
*uParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44000[iVar0 /*32*/]){
Global_44000[iVar0 /*32*/].f_7=1;
*uParam0=-1;
return;
}}
*uParam0=-1;
}

int func_9(int iParam0){
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


void func_10(){
if(Global_2672505.f_947.f_10){
Global_2672505.f_947.f_10=0;
}}


void func_11(){
Global_2672505.f_947.f_9=0;
}


void func_12(var uParam0, bool bParam1){
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_427), 0);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterhud");
func_46(uParam0);
func_45(uParam0);
func_44(uParam0);
func_43(uParam0);
func_42(uParam0);
func_41(uParam0);
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_ION_CANNON");
AUDIO::STOP_AUDIO_SCENE("dlc_xm_orbital_cannon_camera_active_scene");
func_40(&(uParam0->f_731));
uParam0->f_2=0;
uParam0->f_3=0;
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_OrbitalCannon")){
GRAPHICS::ANIMPOSTFX_STOP("MP_OrbitalCannon");
}
uParam0->f_9=0;
if(MISC::IS_BIT_SET(uParam0->f_5, 3)){
STREAMING::CLEAR_FOCUS();
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
MISC::CLEAR_BIT(&(uParam0->f_5), 3);
}
MISC::CLEAR_BIT(&(uParam0->f_5), 15);
MISC::CLEAR_BIT(&(uParam0->f_5), 16);
MISC::CLEAR_BIT(&(uParam0->f_5), 17);
func_40(&(uParam0->f_725));
func_38();
func_29();
if(MISC::IS_BIT_SET(uParam0->f_8, 1)){
GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(0);
}
if(MISC::IS_BIT_SET(uParam0->f_8, 0)){
MISC::CLEAR_OVERRIDE_WEATHER();
}
HUD::DISPLAY_CASH(1);
if(CAM::DOES_CAM_EXIST(uParam0->f_4)){
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}
if(CAM::DOES_CAM_EXIST(uParam0->f_4)){
CAM::DESTROY_CAM(uParam0->f_4, 0);
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_22));
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 0);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
}
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_IN(1000);
}
STREAMING::CLEAR_FOCUS();
Global_2764567=-1;
if(bParam1){
if(func_28(PLAYER::PLAYER_ID(), 1, 1) && MISC::IS_BIT_SET(uParam0->f_8, 3)){
func_13(PLAYER::PLAYER_ID(), 1, 524288, 0);
}}
uParam0->f_8=0;
}


void func_13(int iParam0, bool bParam1, int iParam2, int iParam3){
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
if(func_27()){
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
if(!func_25()){
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
}elseif(bVar14 || (!func_22(PLAYER::PLAYER_ID(), 0) && !func_21())){
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
func_18(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_17(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
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
func_16();
func_15();
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
if(!func_17(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
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
if(func_14(Global_4718592.f_166301)){
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


bool func_14(int iParam0){
return iParam0==17;
}


void func_15(){
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


void func_16(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}

int func_17(var uParam0){
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


void func_18(int iParam0, int iParam1, int iParam2){
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
func_20();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), 1);
}}
if(func_22(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_19(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_19(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_20(){
int iVar0;
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
if(!MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar0=0;
while (iVar0 < 8){
Global_2621446.f_58[iVar0]=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
iVar0++;
}
MISC::SET_BIT(&(Global_2621446.f_67), 2);
MISC::SET_BIT(&(Global_2621446.f_67), 0);
}}}


bool func_21(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


bool func_22(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_23(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_23(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_24();
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

int func_24(){
return Global_1574918;
}

int func_25(){
if(func_26()==0){
return 1;
}
return 0;
}

int func_26(){
return Global_1574632.f_18;
}

int func_27(){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216==-1){
return 1;
}
return 0;
}

int func_28(int iParam0, bool bParam1, bool bParam2){
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


void func_29(){
func_30(0);
}


void func_30(bool bParam0){
if(bParam0){
func_37();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_36(0)){
func_31(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_31(int iParam0){
if(func_35()){
return;
}
if(Global_20584){
if(func_34()){
func_33(1, 1);
}else{
func_33(0, 0);
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
if(!func_32()){
Global_20383.f_1=3;
}}

int func_32(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_33(bool bParam0, bool bParam1){
if(bParam0){
if(func_36(0)){
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


bool func_34(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_35(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_36(int iParam0){
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


void func_37(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_38(){
func_39(PLAYER::PLAYER_ID(), 0);
}


void func_39(int iParam0, int iParam1){
Global_2657589[iParam0 /*466*/].f_68.f_3=iParam1;
}


void func_40(var uParam0){
uParam0->f_1=0;
}


void func_41(var uParam0){
if(uParam0->f_16 !=-1){
AUDIO::STOP_SOUND(uParam0->f_16);
AUDIO::RELEASE_SOUND_ID(uParam0->f_16);
uParam0->f_16=-1;
}}


void func_42(var uParam0){
if(uParam0->f_15 !=-1){
AUDIO::STOP_SOUND(uParam0->f_15);
AUDIO::RELEASE_SOUND_ID(uParam0->f_15);
uParam0->f_15=-1;
}}


void func_43(var uParam0){
if(uParam0->f_12 !=-1){
AUDIO::STOP_SOUND(uParam0->f_12);
AUDIO::RELEASE_SOUND_ID(uParam0->f_12);
uParam0->f_12=-1;
}}


void func_44(var uParam0){
if(uParam0->f_13 !=-1){
AUDIO::STOP_SOUND(uParam0->f_13);
AUDIO::RELEASE_SOUND_ID(uParam0->f_13);
uParam0->f_13=-1;
}}


void func_45(var uParam0){
if(uParam0->f_14 !=-1){
AUDIO::STOP_SOUND(uParam0->f_14);
AUDIO::RELEASE_SOUND_ID(uParam0->f_14);
uParam0->f_14=-1;
}}


void func_46(var uParam0){
if(uParam0->f_6 !=-1){
AUDIO::STOP_SOUND(uParam0->f_6);
AUDIO::RELEASE_SOUND_ID(uParam0->f_6);
uParam0->f_6=-1;
}}

int func_47(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0){
return 1;
}
return 0;
}


bool func_48(){
return Global_1575060;
}

int func_49(){
if(func_26()==3 || func_26()==2){
return 1;
}
return 0;
}

int func_50(){
if(func_26()==1 || func_26()==4){
return 1;
}
return 0;
}


void func_51(var uParam0){
switch (uParam0->f_19){
case 0:
func_6(uParam0, 1);
break;
case 1:
if(MISC::IS_BIT_SET(uParam0->f_5, 0)){
func_11();
MISC::CLEAR_BIT(&(uParam0->f_5), 0);
}
if(MISC::IS_BIT_SET(uParam0->f_5, 1)){
func_10();
MISC::CLEAR_BIT(&(uParam0->f_5), 1);
}
if(func_224(uParam0)){
HUD::DISPLAY_CASH(0);
uParam0->f_11=0;
func_7(uParam0, 0);
MISC::CLEAR_BIT(&(uParam0->f_10), 2);
MISC::CLEAR_BIT(&(uParam0->f_10), 3);
MISC::SET_BIT(&(uParam0->f_5), 13);
MISC::SET_BIT(&(uParam0->f_10), 2);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
func_6(uParam0, 3);
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_427), 0);
}
break;
case 3:
func_223();
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
func_13(PLAYER::PLAYER_ID(), 0, 524288, 0);
MISC::SET_BIT(&(uParam0->f_8), 3);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 1);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
}}
if(!func_222()){
func_221();
MISC::SET_BIT(&(uParam0->f_5), 0);
}
if(!func_220()){
func_219();
MISC::SET_BIT(&(uParam0->f_5), 1);
}
STREAMING::SUPPRESS_HD_MAP_STREAMING_THIS_FRAME();
STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(1, 1);
PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
if(func_160(0, 1, 0)){
if(func_58(uParam0)){
func_12(uParam0, 1);
func_6(uParam0, 1);
}}
func_56(1);
break;
}
if(uParam0->f_19==3){
STREAMING::SUPPRESS_HD_MAP_STREAMING_THIS_FRAME();
STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(1, 1);
PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
if(!uParam0->f_3){
if(!func_55(&(uParam0->f_731), 5000, 0)){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_ION_CANNON", 0, -1)){
uParam0->f_3=1;
}elseif(!func_54(&(uParam0->f_731))){
func_53(&(uParam0->f_731), 0, 0);
}}}
func_52();
func_56(1);
}}


void func_52(){
MISC::SET_BIT(&Global_8254, 4);
}


void func_53(var uParam0, bool bParam1, bool bParam2){
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


bool func_54(var uParam0){
return uParam0->f_1;
}

int func_55(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_53(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_56(bool bParam0){
if(bParam0){
if(func_57()){
Global_2683864.f_41=1;
}}else{
Global_2683864.f_41=0;
}}


bool func_57(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 11);
}

int func_58(var uParam0){
func_159();
HUD::DISPLAY_AMMO_THIS_FRAME(0);
HUD::HUD_FORCE_WEAPON_WHEEL(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
func_56(1);
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
func_158();
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
func_157(0);
if(!MISC::IS_BIT_SET(uParam0->f_5, 2)){
if(func_125(uParam0)){
if(func_60(uParam0)){
if(MISC::IS_BIT_SET(uParam0->f_8, 0)){
MISC::CLEAR_OVERRIDE_WEATHER();
MISC::CLEAR_BIT(&(uParam0->f_8), 0);
}
uParam0->f_11=0;
func_7(uParam0, 0);
MISC::CLEAR_BIT(&(uParam0->f_10), 2);
MISC::CLEAR_BIT(&(uParam0->f_10), 3);
MISC::SET_BIT(&(uParam0->f_5), 13);
MISC::SET_BIT(&(uParam0->f_10), 3);
MISC::SET_BIT(&(uParam0->f_5), 2);
}}}elseif(func_125(uParam0)){
func_59(uParam0);
MISC::CLEAR_BIT(&(uParam0->f_5), 2);
return 1;
}
return 0;
}

int func_59(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_5, 3)){
STREAMING::CLEAR_FOCUS();
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
MISC::CLEAR_BIT(&(uParam0->f_5), 3);
}
MISC::SET_BIT(&(uParam0->f_5), 13);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
return 1;
}

int func_60(var uParam0){
struct<3> Var0;
bool bVar1;
if(func_54(&(uParam0->f_729)) && func_55(&(uParam0->f_729), 5000, 0)){
MISC::CLEAR_BIT(&(uParam0->f_5), 8);
MISC::CLEAR_BIT(&(uParam0->f_5), 10);
MISC::CLEAR_BIT(&(uParam0->f_5), 9);
func_40(&(uParam0->f_723));
func_40(&(uParam0->f_729));
}
if(func_54(&(uParam0->f_727))){
if(func_55(&(uParam0->f_727), 3000, 0)){
func_44(uParam0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "cannon_active", "dlc_xm_orbital_cannon_sounds", 1);
func_40(&(uParam0->f_727));
MISC::SET_BIT(&(uParam0->f_5), 13);
}}
if((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_36(0)) && !func_124()) && !func_48()) && func_123(uParam0)==10){
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
if(((((PAD::IS_DISABLED_CONTROL_PRESSED(2, 24) && !MISC::IS_BIT_SET(uParam0->f_5, 8)) && !func_54(&(uParam0->f_727))) && !MISC::IS_BIT_SET(uParam0->f_5, 15)) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && CAM::DOES_CAM_EXIST(uParam0->f_4)){
uParam0->f_1=1;
if(!func_54(&(uParam0->f_723))){
func_53(&(uParam0->f_723), 0, 0);
func_122(uParam0);
PAD::SET_CONTROL_SHAKE(0, 1000, 50);
if(!MISC::IS_BIT_SET(uParam0->f_5, 19)){
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_6, "Firing", 0f);
MISC::SET_BIT(&(uParam0->f_5), 19);
}}elseif(func_55(&(uParam0->f_723), 3000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_5, 8)){
Var0={
CAM::GET_CAM_COORD(uParam0->f_4) 
};
AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_6, "Firing", 1f);
func_70(Var0);
PAD::SET_CONTROL_SHAKE(0, 500, 256);
CAM::SHAKE_CAM(uParam0->f_4, "GAMEPLAY_EXPLOSION_SHAKE", 1.5f);
func_53(&(uParam0->f_729), 0, 0);
MISC::SET_BIT(&(uParam0->f_5), 8);
MISC::SET_BIT(&(uParam0->f_5), 13);
*uParam0=1;
}}elseif(func_55(&(uParam0->f_723), 2000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_5, 10)){
MISC::SET_BIT(&(uParam0->f_5), 10);
PAD::SET_CONTROL_SHAKE(0, 1000, 50);
}}elseif(func_55(&(uParam0->f_723), 1000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_5, 9)){
MISC::SET_BIT(&(uParam0->f_5), 9);
PAD::SET_CONTROL_SHAKE(0, 1000, 50);
}}}else{
bVar1=false;
if((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 24) && !MISC::IS_BIT_SET(uParam0->f_5, 15)) && !HUD::IS_WARNING_MESSAGE_ACTIVE()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "inactive_fire_fail", "dlc_xm_orbital_cannon_sounds", 1);
}
uParam0->f_1=0;
func_46(uParam0);
if(MISC::IS_BIT_SET(uParam0->f_5, 19)){
MISC::CLEAR_BIT(&(uParam0->f_5), 19);
}
if(!MISC::IS_BIT_SET(uParam0->f_5, 8)){
func_69(uParam0);
}
if((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202) && !MISC::IS_BIT_SET(uParam0->f_5, 15)) && !bVar1){
func_43(uParam0);
func_42(uParam0);
func_41(uParam0);
func_69(uParam0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
MISC::SET_BIT(&(uParam0->f_5), 13);
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_436), 1);
return 1;
}
if(PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 203)){
func_69(uParam0);
uParam0->f_11=0;
func_7(uParam0, 0);
MISC::CLEAR_BIT(&(uParam0->f_10), 2);
MISC::CLEAR_BIT(&(uParam0->f_10), 3);
MISC::SET_BIT(&(uParam0->f_5), 13);
MISC::SET_BIT(&(uParam0->f_10), 2);
func_6(uParam0, 3);
}}
if(!CAM::IS_CAM_SHAKING(uParam0->f_4)){
func_61(uParam0);
}}
return 0;
}


void func_61(var uParam0){
float fVar0;
bool bVar1;
bool bVar2;
var uVar3;
float fVar4;
float fVar5;
float fVar6;
struct<3> Var7;
float fVar8;
float fVar9;
float fVar10;
struct<3> Var11;
float fVar12;
fVar0=PAD::GET_CONTROL_NORMAL(2, 221);
if(MISC::IS_BIT_SET(uParam0->f_5, 5)){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(fVar0==0f){
MISC::CLEAR_BIT(&(uParam0->f_5), 5);
}}elseif(!PAD::IS_CONTROL_PRESSED(2, 242) && !PAD::IS_CONTROL_PRESSED(2, 241)){
MISC::CLEAR_BIT(&(uParam0->f_5), 5);
}}
if(CAM::DOES_CAM_EXIST(uParam0->f_4)){
bVar1=false;
bVar2=false;
uVar3=CAM::GET_CAM_FOV(uParam0->f_4);
fVar4=(35f + func_68(uParam0->f_7));
fVar5=PAD::GET_CONTROL_NORMAL(2, 218);
fVar6=PAD::GET_CONTROL_NORMAL(2, 219);
Var7={
CAM::GET_CAM_COORD(uParam0->f_4) 
};
if(uParam0->f_1){
fVar4=50f;
}
if(fVar5 > 0.1f){
if((Var7.f_0 + (MISC::ABSF((fVar4 * fVar5)) * timestep())) <=4000f){
bVar1=true;
Var7.f_0=(Var7.f_0 + (MISC::ABSF((fVar4 * fVar5)) * timestep()));
}}elseif(fVar5 < -0.1f){
if((Var7.f_0 - (MISC::ABSF((fVar4 * fVar5)) * timestep())) >=-4000f){
bVar1=true;
Var7.f_0=(Var7.f_0 - (MISC::ABSF((fVar4 * fVar5)) * timestep()));
}}
if(fVar6 > 0.1f){
if((Var7.f_1 - (MISC::ABSF((fVar4 * fVar6)) * timestep())) >=-4000f){
bVar1=true;
Var7.f_1=(Var7.f_1 - (MISC::ABSF((fVar4 * fVar6)) * timestep()));
}}elseif(fVar6 < -0.1f){
if((Var7.f_1 + (MISC::ABSF((fVar4 * fVar6)) * timestep())) <=8000f){
bVar1=true;
Var7.f_1=(Var7.f_1 + (MISC::ABSF((fVar4 * fVar6)) * timestep()));
}}
fVar8=func_67(Var7);
if(Var7.f_2 !=fVar8){
if(Var7.f_2 < fVar8){
Var7.f_2=(Var7.f_2 + (MISC::ABSF(fVar4) * timestep()));
if(Var7.f_2 > fVar8){
Var7.f_2=fVar8;
}}elseif(Var7.f_2 > fVar8){
Var7.f_2=(Var7.f_2 - (MISC::ABSF(fVar4) * timestep()));
if(Var7.f_2 < fVar8){
Var7.f_2=fVar8;
}}
bVar1=true;
}
if(!MISC::IS_BIT_SET(uParam0->f_5, 5)){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(fVar0 > 0.3f){
if((!MISC::IS_BIT_SET(uParam0->f_5, 7) && !MISC::IS_BIT_SET(uParam0->f_5, 6)) && uParam0->f_7 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_66(uParam0, 1));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_5), 7);
MISC::SET_BIT(&(uParam0->f_5), 5);
}}elseif(fVar0 < -0.3f){
if((!MISC::IS_BIT_SET(uParam0->f_5, 6) && !MISC::IS_BIT_SET(uParam0->f_5, 7)) && uParam0->f_7 < 4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_66(uParam0, 0));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_5), 6);
MISC::SET_BIT(&(uParam0->f_5), 5);
}}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 242)){
if((!MISC::IS_BIT_SET(uParam0->f_5, 7) && !MISC::IS_BIT_SET(uParam0->f_5, 6)) && uParam0->f_7 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_66(uParam0, 1));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_5), 7);
MISC::SET_BIT(&(uParam0->f_5), 5);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 241)){
if((!MISC::IS_BIT_SET(uParam0->f_5, 6) && !MISC::IS_BIT_SET(uParam0->f_5, 7)) && uParam0->f_7 < 4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_66(uParam0, 0));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_5), 6);
MISC::SET_BIT(&(uParam0->f_5), 5);
}}}
if(MISC::IS_BIT_SET(uParam0->f_5, 6) || MISC::IS_BIT_SET(uParam0->f_5, 7)){
bVar2=true;
}
fVar9=0f;
fVar10=0f;
Var11={
CAM::GET_CAM_COORD(uParam0->f_4) 
};
if(Var11.f_0 < Var7.f_0){
fVar9=50f;
}elseif(Var11.f_0 > Var7.f_0){
fVar9=-50f;
}
if(Var11.f_1 < Var7.f_1){
fVar10=50f;
}elseif(Var11.f_1 > Var7.f_1){
fVar10=-50f;
}
if(bVar1 || bVar2){
if(func_123(uParam0)==10){
if(bVar1){
func_65(uParam0);
}else{
func_43(uParam0);
func_42(uParam0);
func_41(uParam0);
}
if(bVar2){
if(MISC::IS_BIT_SET(uParam0->f_5, 6)){
func_64(uParam0);
}elseif(MISC::IS_BIT_SET(uParam0->f_5, 7)){
func_63(uParam0);
}}else{
func_42(uParam0);
func_41(uParam0);
}}
func_62(uParam0, &uVar3);
CAM::SET_CAM_FOV(uParam0->f_4, uVar3);
CAM::SET_CAM_COORD(uParam0->f_4, Var7);
}else{
func_43(uParam0);
func_42(uParam0);
func_41(uParam0);
}
MISC::GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(Var7, &fVar12, 1, 0);
STREAMING::SET_FOCUS_POS_AND_VEL((Var7.f_0 + fVar9), (Var7.f_1 + fVar10), (fVar12 + 50f), -90f, 0f, 0f);
}}


void func_62(var uParam0, var uParam1){
float fVar0;
fVar0=125f;
if(MISC::IS_BIT_SET(uParam0->f_5, 7)){
*uParam1=(*uParam1 + (fVar0 * timestep()));
switch (uParam0->f_7){
case 1:
if(*uParam1 > 100f){
*uParam1=100f;
uParam0->f_7=0;
MISC::CLEAR_BIT(&(uParam0->f_5), 7);
}
break;
case 2:
if(*uParam1 > 80f){
*uParam1=80f;
uParam0->f_7=1;
MISC::CLEAR_BIT(&(uParam0->f_5), 7);
}
break;
case 3:
if(*uParam1 > 60f){
*uParam1=60f;
uParam0->f_7=2;
MISC::CLEAR_BIT(&(uParam0->f_5), 7);
}
break;
case 4:
if(*uParam1 > 40f){
*uParam1=40f;
uParam0->f_7=3;
MISC::CLEAR_BIT(&(uParam0->f_5), 7);
}
break;
}}elseif(MISC::IS_BIT_SET(uParam0->f_5, 6)){
*uParam1=(*uParam1 - (fVar0 * timestep()));
switch (uParam0->f_7){
case 0:
if(*uParam1 < 80f){
*uParam1=80f;
uParam0->f_7=1;
MISC::CLEAR_BIT(&(uParam0->f_5), 6);
}
break;
case 1:
if(*uParam1 < 60f){
*uParam1=60f;
uParam0->f_7=2;
MISC::CLEAR_BIT(&(uParam0->f_5), 6);
}
break;
case 2:
if(*uParam1 < 40f){
*uParam1=40f;
uParam0->f_7=3;
MISC::CLEAR_BIT(&(uParam0->f_5), 6);
}
break;
case 3:
if(*uParam1 < 20f){
*uParam1=20f;
uParam0->f_7=4;
MISC::CLEAR_BIT(&(uParam0->f_5), 6);
}
break;
}}}


void func_63(var uParam0){
if(uParam0->f_16==-1){
uParam0->f_16=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_16, "zoom_out_loop", "dlc_xm_orbital_cannon_sounds", 1);
}}


void func_64(var uParam0){
if(uParam0->f_15==-1){
uParam0->f_15=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_15, "zoom_out_loop", "dlc_xm_orbital_cannon_sounds", 1);
}}


void func_65(var uParam0){
if(uParam0->f_12==-1){
uParam0->f_12=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_12, "pan_loop", "dlc_xm_orbital_cannon_sounds", 1);
}}


float func_66(var uParam0, bool bParam1){
if(!bParam1){
switch (uParam0->f_7){
case 0:
return 0.25f;
break;
case 1:
return 0.5f;
break;
case 2:
return 0.75f;
break;
case 3:
return 1f;
break;
}}else{
switch (uParam0->f_7){
case 1:
return 0f;
break;
case 2:
return 0.25f;
break;
case 3:
return 0.5f;
break;
case 4:
return 0.75f;
break;
}}
return 0f;
}


float func_67(struct<2> Param0, var uParam1){
if(((Param0.f_1 >=1000f && Param0.f_1 <=1700f) && Param0.f_0 >=-700f) && Param0.f_0 <=1100f){
return 500f;
}
if(((Param0.f_1 >=3600f && Param0.f_1 <=4100f) && Param0.f_0 >=-1700f) && Param0.f_0 <=-700f){
return 550f;
}
if(((Param0.f_1 >=4880f && Param0.f_1 <=6150f) && Param0.f_0 >=-500f) && Param0.f_0 <=1900f){
return 850f;
}
return 400f;
}


float func_68(int iParam0){
float fVar0;
fVar0=100f;
switch (iParam0){
case 0:
fVar0=90f;
break;
case 1:
fVar0=60f;
break;
case 2:
fVar0=50f;
break;
case 3:
fVar0=25f;
break;
case 4:
fVar0=10f;
break;
}
return fVar0;
}


void func_69(var uParam0){
uParam0->f_1=0;
if(CAM::IS_CAM_SHAKING(uParam0->f_4)){
CAM::STOP_CAM_SHAKING(uParam0->f_4, 0);
}
PAD::STOP_CONTROL_SHAKE(0);
MISC::CLEAR_BIT(&(uParam0->f_5), 8);
MISC::CLEAR_BIT(&(uParam0->f_5), 10);
MISC::CLEAR_BIT(&(uParam0->f_5), 9);
func_40(&(uParam0->f_723));
}


void func_70(struct<3> Param0){
var uVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2), 0, 0);
MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(Param0, &uVar0, &Var1);
iVar6=0;
while (iVar6 < 32){
iVar5=PLAYER::INT_TO_PLAYERINDEX(iVar6);
if(func_75(iVar5, 0, 0)){
uVar4=PLAYER::GET_PLAYER_PED(iVar5);
if(ENTITY::DOES_ENTITY_EXIST(uVar4)){
Var2={
ENTITY::GET_ENTITY_COORDS(iVar4, 0) 
};
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var2, 0) < 15f && Var2.f_2 >=(Param0.f_2 - 15f)){
FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Var2, 59, 1f, 1, 0, 1065353216);
}}}
iVar6++;
}
iVar7=VEHICLE::GET_ALL_VEHICLES(&Global_1578029);
iVar8=0;
while (iVar8 < iVar7){
if(ENTITY::DOES_ENTITY_EXIST(Global_1578029[iVar8])){
if(((func_74(Global_1578029[iVar8], 0) || func_73(Global_1578029[iVar8], 0)) || func_72(Global_1578029[iVar8], 0)) || func_71(Global_1578029[iVar8], 0)){
Var3={
ENTITY::GET_ENTITY_COORDS(Global_1578029[iVar8], 0) 
};
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 0) < 15f && Var3.f_2 >=(Param0.f_2 - 15f)){
FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Var3, 59, 1f, 1, 0, 1065353216);
}}}
iVar8++;
}
FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Param0, 59, 1f, 1, 0, 1065353216);
GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xm_orbital");
GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_xm_orbital_blast", Param0, Var1, 1065353216, 0, 0, 0, 1);
if(!Global_1968311){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "DLC_XM_Explosions_Orbital_Cannon", Param0, 0, 1, 0, 0);
}}}

int func_71(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck")){
return 1;
}}}
return 0;
}

int func_72(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck")){
return 1;
}}}
return 0;
}

int func_73(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Avenger")){
return 1;
}}}
return 0;
}

int func_74(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
return 1;
}}}
return 0;
}

int func_75(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=iParam0;
if(iParam0 !=func_121() && func_28(iParam0, 1, 1)){
if((func_120(iParam0) && (((func_119(iParam0)==88 || func_119(iParam0)==81) || func_119(iParam0)==117) || func_119(iParam0)==147)) || ((((((func_115(iParam0) || func_112(iParam0)) || func_108(iParam0)) || func_107(iParam0)) && !func_106(iParam0)) && !func_105(iParam0)) && !func_103(iParam0))){
if(((!func_102(iParam0) && !func_101(iParam0)) && !func_98(iParam0, func_100(), 1)) && !func_97(iParam0)){
if(iParam1 && func_96(iParam0)){
return 0;
}
if(iParam2 && (((Global_2657589[iVar0 /*466*/].f_210 || Global_2657589[iVar0 /*466*/].f_211) || Global_2657589[iVar0 /*466*/].f_212) || NETWORK::IS_ENTITY_A_GHOST(PLAYER::GET_PLAYER_PED(iParam0)))){
return 0;
}
return 1;
}}}
if((((((((((((((((((((((((((iParam0 !=func_121() && func_28(iParam0, 1, 1)) && !func_95(iParam0, 1, 1)) && !func_120(iParam0)) && !func_94(iParam0)) && !func_102(iParam0)) && !func_101(iParam0)) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iParam0)) && !NETWORK::IS_PLAYER_IN_CUTSCENE(iParam0)) && !func_93(iParam0)) && !MISC::IS_BIT_SET(Global_2657589[iVar0 /*466*/].f_427, 2)) && !MISC::IS_BIT_SET(Global_2657589[iVar0 /*466*/].f_427, 3)) && !func_98(iParam0, func_100(), 1)) && !func_97(iParam0)) && !func_22(iParam0, 0)) && !MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 14)) && !func_92(iParam0)) && !func_91(iParam0)) && (func_90(PLAYER::PLAYER_ID())==0 || !func_85(iParam0))) && MISC::IS_BIT_SET(Global_1853910[iVar0 /*862*/].f_139, 22)) && !MISC::IS_BIT_SET(Global_2657589[iVar0 /*466*/].f_427, 1)) && !MISC::IS_BIT_SET(Global_2657589[iVar0 /*466*/].f_321.f_1, 31)) && func_84(iParam0) !=136) && !(func_80(iParam0) && func_78(iParam0)==164)) && !MISC::IS_BIT_SET(Global_1853910[iVar0 /*862*/].f_861, 15)) && !MISC::IS_BIT_SET(Global_1853910[iVar0 /*862*/].f_861, 14)) && !func_76(iParam0)){
if(iParam1 && func_96(iParam0)){
return 0;
}
if(iParam2 && (((Global_2657589[iVar0 /*466*/].f_210 || Global_2657589[iVar0 /*466*/].f_211) || Global_2657589[iVar0 /*466*/].f_212) || NETWORK::IS_ENTITY_A_GHOST(PLAYER::GET_PLAYER_PED(iParam0)))){
return 0;
}
return 1;
}
return 0;
}


bool func_76(int iParam0){
return func_77(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}


var func__77(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}

int func_78(int iParam0){
if(func_79(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_79(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_80(int iParam0){
if(func_83(iParam0)){
if(func_81(iParam0)){
return 1;
}}
return 0;
}

int func_81(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_82(iParam0, 9);
}
return 0;
}


var func__82(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_83(int iParam0){
if(iParam0 !=func_121()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_121()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_84(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/];
}
return -1;
}


bool func_85(int iParam0){
return func_86(func_90(iParam0), 10);
}


bool func_86(int iParam0, int iParam1){
return func_87(iParam0)==iParam1;
}

int func_87(int iParam0){
switch (iParam0){
case 3:
return 7;
case 1:
return 7;
case 32:
return 7;
case 33:
return 7;
case 34:
return 7;
case 35:
return 7;
case 36:
return 7;
case 37:
return 7;
case 38:
return 7;
case 39:
return 7;
case 40:
return 7;
case 41:
return 7;
case 42:
return 7;
case 43:
return 7;
case 44:
return 7;
case 45:
return 7;
case 46:
return 7;
case 47:
return 7;
case 48:
return 6;
case 49:
return 6;
case 50:
return 6;
case 51:
return 6;
case 52:
return 6;
case 53:
return 6;
case 54:
return 6;
case 55:
return 6;
case 56:
return 6;
case 57:
return 6;
case 58:
return 6;
case 59:
return 6;
case 60:
return 6;
case 61:
return 6;
case 62:
return 6;
case 63:
return 6;
case 64:
return 6;
case 65:
return 6;
case 66:
return 6;
case 67:
return 6;
case 68:
return 6;
case 69:
return 6;
case 70:
return 6;
case 71:
return 6;
case 72:
return 6;
case 204:
return 6;
case 207:
return 6;
case 208:
return 6;
case 209:
return 6;
case 215:
return 6;
case 211:
return 6;
case 216:
return 6;
case 212:
return 6;
case 210:
return 6;
case 213:
return 6;
case 214:
return 6;
case 217:
return 6;
case 218:
return 6;
case 142:
return 6;
case 73:
case 74:
return 6;
case 75:
return 6;
case 76:
return 6;
case 77:
return 6;
case 78:
return 6;
case 79:
return 6;
case 80:
return 6;
case 81:
return 6;
case 82:
return 6;
case 84:
return 6;
case 83:
return 6;
case 85:
return 6;
case 86:
return 6;
case 87:
return 6;
case 88:
return 6;
case 89:
return 6;
case 90:
return 6;
case 91:
return 6;
case 92:
return 6;
case 93:
return 6;
case 94:
return 6;
case 102:
return 6;
case 95:
return 6;
case 96:
return 6;
case 97:
return 6;
case 98:
return 6;
case 99:
return 6;
case 100:
return 6;
case 101:
return 6;
case 103:
return 6;
case 104:
return 6;
case 105:
return 6;
case 106:
return 6;
case 107:
return 6;
case 108:
return 6;
case 109:
return 6;
case 110:
return 6;
case 111:
return 6;
case 112:
return 6;
case 113:
return 6;
case 114:
return 7;
case 115:
return 6;
case 116:
return 6;
case 117:
return 6;
case 118:
return 6;
case 119:
return 6;
case 120:
return 6;
case 121:
return 6;
case 122:
return 6;
case 123:
return 6;
case 124:
return 6;
case 125:
return 6;
case 126:
return 6;
case 16:
return 6;
case 18:
return 6;
case 28:
return 6;
case 26:
return 6;
case 27:
return 6;
case 29:
return 6;
case 30:
return 6;
case 31:
return 6;
case 17:
return 6;
case 173:
return 6;
case 174:
return 6;
case 19:
return 6;
case 22:
return 6;
case 23:
return 6;
case 24:
return 6;
case 25:
return 6;
case 177:
return 6;
case 187:
return 6;
case 188:
return 6;
case 189:
return 6;
case 190:
return 6;
case 12:
return 6;
case 4:
return 6;
case 13:
return 6;
case 5:
return 6;
case 6:
return 6;
case 8:
return 6;
case 9:
return 6;
case 7:
return 6;
case 10:
return 6;
case 11:
return 6;
case 15:
return 6;
case 21:
return 6;
case 185:
return 6;
case 186:
return 6;
case 175:
return 6;
case 178:
return 6;
case 179:
return 6;
case 176:
return 6;
case 180:
return 6;
case 183:
return 6;
case 184:
return 6;
case 191:
return 6;
case 198:
return 0;
case 192:
return 6;
case 199:
return 0;
case 197:
return 0;
case 200:
return 0;
case 193:
return 6;
case 201:
return 0;
case 196:
return 6;
case 202:
return 0;
case 194:
return 6;
case 203:
return 0;
case 195:
return 6;
case 181:
return 6;
case 182:
return 6;
case 219:
return 6;
case 205:
return 6;
case 206:
return 6;
default:
}
switch (func_88(func_89(iParam0, 1))){
case 0:
return 6;
case 1:
return 6;
case 2:
return 6;
default:
}
return 11;
}

int func_88(int iParam0){
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
default:
}
return -1;
}

int func_89(int iParam0, bool bParam1){
switch (iParam0){
case 191:
return 15;
case 198:
return 8;
case 192:
return 14;
case 196:
return 122;
case 199:
return 1;
case 197:
return 5;
case 200:
return 6;
case 193:
return 11;
case 201:
return 0;
case 202:
return 2;
case 194:
return 13;
case 203:
return 3;
case 195:
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
default:
}
if(bParam1){}
return 312;
}

int func_90(int iParam0){
if(func_28(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}


bool func_91(int iParam0){
return func_82(iParam0, 24);
}


bool func_92(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 6);
}


bool func_93(int iParam0){
return MISC::IS_BIT_SET(Global_1890444[iParam0 /*129*/].f_29, 0);
}

int func_94(int iParam0){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 11)){
return 1;
}
return 0;
}

int func_95(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_121()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 0)){
return 1;
}
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 1)){
return 1;
}}
if(bParam2){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return 1;
}}
return 0;
}

int func_96(int iParam0){
if(func_84(iParam0)==146){
if(iParam0==Global_2793046.f_5150){
return 1;
}}
return 0;
}

int func_97(int iParam0){
if(func_22(iParam0, 0)){
return 1;
}
if(func_21()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}

int func_98(int iParam0, int iParam1, bool bParam2){
if(iParam1 !=func_121()){
if(!bParam2){
if(func_99(iParam0, iParam1)){
return 0;
}}
if(Global_1894573[iParam0 /*608*/].f_10 !=func_121()){
return iParam1==Global_1894573[iParam0 /*608*/].f_10;
}}
return 0;
}

int func_99(int iParam0, int iParam1){
if(iParam1 !=func_121()){
if(iParam0 !=func_121()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_121()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}

int func_100(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


bool func_101(int iParam0){
return Global_1853910[iParam0 /*862*/].f_192 !=0;
}

int func_102(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(Global_1894573[iVar0 /*608*/].f_8){
return 1;
}}
return 0;
}

int func_103(int iParam0){
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==11;
}}}
return 0;
}

int func_104(int iParam0){
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

int func_105(int iParam0){
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==4;
}}}
return 0;
}

int func_106(int iParam0){
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==9;
}}}
return 0;
}

int func_107(int iParam0){
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_121()){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==20;
}}}
return 0;
}

int func_108(int iParam0){
int iVar0;
if(func_111(iParam0, 0)){
iVar0=Global_2657589[iParam0 /*466*/].f_321.f_10;
if(iVar0 !=func_121()){
if(!func_110(iVar0)){
return 1;
}}}
if(func_109(iParam0)){
return 1;
}
return 0;
}

int func_109(int iParam0){
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==6;
}}}
return 0;
}

int func_110(int iParam0){
if(iParam0 !=func_121()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
}
return 0;
}

int func_111(int iParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_121()){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_112(int iParam0){
int iVar0;
if(func_114(iParam0)){
iVar0=Global_2657589[iParam0 /*466*/].f_321.f_10;
if(iVar0 !=func_121()){
if(!func_113(iVar0)){
return 1;
}}}
if(func_109(iParam0)){
return 1;
}
return 0;
}

int func_113(int iParam0){
if(iParam0 !=func_121()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 6);
}
return 0;
}

int func_114(int iParam0){
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_121()){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_115(int iParam0){
int iVar0;
if(func_118(iParam0)){
iVar0=Global_2657589[iParam0 /*466*/].f_321.f_10;
if(iVar0 !=func_121()){
if(!func_117(iVar0)){
return 1;
}}}
if(func_116(iParam0)){
return 1;
}
return 0;
}

int func_116(int iParam0){
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==10;
}}}
return 0;
}

int func_117(int iParam0){
if(iParam0 !=func_121()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
}
return 0;
}

int func_118(int iParam0){
if(iParam0 !=func_121()){
if(func_28(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_121()){
return func_104(Global_2657589[iParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_119(int iParam0){
if(iParam0 !=func_121() && func_28(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_120(int iParam0){
if(iParam0 !=func_121() && func_28(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 3);
}
return 0;
}

int func_121(){
return -1;
}


void func_122(var uParam0){
if(uParam0->f_6==-1){
uParam0->f_6=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_6, "cannon_charge_fire_loop", "dlc_xm_orbital_cannon_sounds", 1);
}}

int func_123(var uParam0){
return uParam0->f_20;
}


bool func_124(){
return Global_75693;
}

int func_125(var uParam0){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
struct<7> Var4;
struct<9> Var5;
bVar0=false;
iVar1=0;
iVar2=221;
iVar3=221;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar2=241;
iVar3=242;
}
switch (func_123(uParam0)){
case 0:
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
if(MISC::IS_BIT_SET(uParam0->f_10, 2)){
CAM::DO_SCREEN_FADE_OUT(500);
}else{
CAM::DO_SCREEN_FADE_OUT(0);
}}}else{
uParam0->f_11=MISC::GET_GAME_TIMER();
CAM::DO_SCREEN_FADE_OUT(250);
func_7(uParam0, 1);
}
break;
case 1:
if(CAM::IS_SCREEN_FADED_OUT()){
if(MISC::IS_BIT_SET(uParam0->f_10, 3)){
MISC::CLEAR_BIT(&(uParam0->f_5), 4);
}
func_45(uParam0);
MISC::SET_BIT(&(uParam0->f_5), 14);
func_152(1, 2);
func_7(uParam0, 2);
}
break;
case 2:
if(!MISC::IS_BIT_SET(uParam0->f_10, 3)){
GRAPHICS::ANIMPOSTFX_PLAY("MP_OrbitalCannon", 0, 1);
uParam0->f_7=0;
MISC::CLEAR_BIT(&(uParam0->f_5), 6);
MISC::CLEAR_BIT(&(uParam0->f_5), 7);
MISC::CLEAR_BIT(&(uParam0->f_5), 5);
HUD::CLEAR_HELP(1);
MISC::SET_OVERRIDE_WEATHER("Clear");
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(1);
MISC::SET_BIT(&(uParam0->f_8), 0);
MISC::SET_BIT(&(uParam0->f_8), 1);
func_151(uParam0);
func_53(&(uParam0->f_727), 0, 0);
}else{
GRAPHICS::ANIMPOSTFX_STOP("MP_OrbitalCannon");
if(MISC::IS_BIT_SET(uParam0->f_8, 1)){
GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(0);
MISC::CLEAR_BIT(&(uParam0->f_8), 1);
}
HUD::CLEAR_HELP(1);
if(MISC::IS_BIT_SET(uParam0->f_8, 0)){
MISC::CLEAR_OVERRIDE_WEATHER();
MISC::CLEAR_BIT(&(uParam0->f_8), 0);
}}
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(uParam0->f_4)){
CAM::DESTROY_CAM(uParam0->f_4, 0);
}
if(MISC::IS_BIT_SET(uParam0->f_5, 3)){
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(0);
MISC::CLEAR_BIT(&(uParam0->f_5), 3);
}
func_7(uParam0, 3);
break;
case 3:
if(MISC::IS_BIT_SET(uParam0->f_10, 3)){
MISC::SET_BIT(&(uParam0->f_10), 0);
MISC::CLEAR_BIT(&(uParam0->f_5), 4);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_22));
uParam0->f_736={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
uParam0->f_733={
CAM::GET_GAMEPLAY_CAM_ROT(2) 
};
bVar0=true;
}else{
if(!uParam0->f_2){
AUDIO::START_AUDIO_SCENE("dlc_xm_orbital_cannon_camera_active_scene");
}
uParam0->f_2=1;
uParam0->f_22=GRAPHICS::REQUEST_SCALEFORM_MOVIE("ORBITAL_CANNON_CAM");
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_22)){
Var4={
func_150() 
};
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_ZOOM_LEVEL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(((Var4.f_1 !=0f && Var4.f_1.f_1 !=0f) && Var4.f_1.f_2 !=0f) && Var4.f_0 !=0f){
if(CAM::DOES_CAM_EXIST(uParam0->f_4)){
CAM::DESTROY_CAM(uParam0->f_4, 0);
}
MISC::SET_BIT(&(uParam0->f_10), 0);
MISC::SET_BIT(&(uParam0->f_5), 4);
uParam0->f_4=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
uParam0->f_736={
Var4.f_1 
};
CAM::SET_CAM_COORD(uParam0->f_4, Var4.f_1);
CAM::SET_CAM_ROT(uParam0->f_4, Var4.f_4, 2);
CAM::SET_CAM_FOV(uParam0->f_4, Var4.f_0);
CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
bVar0=true;
}}}
if(bVar0){
func_7(uParam0, 7);
}
break;
case 7:
if((MISC::GET_GAME_TIMER() - uParam0->f_11) > 200){
func_7(uParam0, 4);
}
break;
case 4:
if(MISC::IS_BIT_SET(uParam0->f_10, 1)){
STREAMING::NEW_LOAD_SCENE_STOP();
}
if((uParam0->f_733==0f && uParam0->f_733.f_1==0f) && uParam0->f_733.f_2==0f){
STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_736, 300f, 0);
}else{
STREAMING::NEW_LOAD_SCENE_START(uParam0->f_736, uParam0->f_733, 300f, 0);
}
MISC::SET_BIT(&(uParam0->f_10), 1);
STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_736, -90f, 0f, 0f);
NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(1);
MISC::SET_BIT(&(uParam0->f_5), 3);
uParam0->f_11=MISC::GET_GAME_TIMER();
func_7(uParam0, 5);
break;
case 5:
if(!func_54(&(uParam0->f_725))){
if(STREAMING::IS_NEW_LOAD_SCENE_LOADED() || (MISC::GET_GAME_TIMER() - uParam0->f_11) > 10000){
if(MISC::IS_BIT_SET(uParam0->f_10, 1)){
STREAMING::NEW_LOAD_SCENE_STOP();
MISC::CLEAR_BIT(&(uParam0->f_10), 1);
}
func_53(&(uParam0->f_725), 0, 0);
}}elseif(func_55(&(uParam0->f_725), 2000, 0)){
func_40(&(uParam0->f_725));
func_7(uParam0, 6);
}
break;
case 6:
MISC::CLEAR_BIT(&(uParam0->f_10), 0);
MISC::CLEAR_BIT(&(uParam0->f_5), 14);
uParam0->f_736={
0f, 0f, 0f 
};
uParam0->f_733={
0f, 0f, 0f 
};
GRAPHICS::RESET_ADAPTATION(6);
if(!MISC::IS_BIT_SET(uParam0->f_10, 3)){
func_149(uParam0);
}
func_7(uParam0, 8);
break;
case 8:
if(Global_1950102==7 || Global_2764566){
if(!CAM::IS_SCREEN_FADED_IN()){
if(!CAM::IS_SCREEN_FADING_IN()){
func_141(1, 0);
CAM::DO_SCREEN_FADE_IN(500);
}}else{
func_7(uParam0, 9);
}}
break;
case 9:
MISC::CLEAR_BIT(&(uParam0->f_10), 0);
uParam0->f_736={
0f, 0f, 0f 
};
uParam0->f_733={
0f, 0f, 0f 
};
MISC::SET_BIT(&(uParam0->f_5), 13);
func_7(uParam0, 10);
break;
case 10:
if(!MISC::IS_BIT_SET(uParam0->f_10, 3)){
STREAMING::FORCE_ALLOW_TIME_BASED_FADING_THIS_FRAME();
}
iVar1=1;
break;
}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(MISC::IS_BIT_SET(uParam0->f_5, 4) && !MISC::IS_BIT_SET(uParam0->f_5, 15)){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_22)){
if(!MISC::IS_BIT_SET(uParam0->f_9, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_STATE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_9), 6);
}
if(func_54(&(uParam0->f_723))){
if(!func_55(&(uParam0->f_723), 1000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_9, 5)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::CLEAR_BIT(&(uParam0->f_9), 2);
MISC::CLEAR_BIT(&(uParam0->f_9), 3);
MISC::CLEAR_BIT(&(uParam0->f_9), 4);
MISC::SET_BIT(&(uParam0->f_9), 5);
}}elseif(!func_55(&(uParam0->f_723), 2000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_9, 4)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::CLEAR_BIT(&(uParam0->f_9), 2);
MISC::CLEAR_BIT(&(uParam0->f_9), 3);
MISC::SET_BIT(&(uParam0->f_9), 4);
MISC::CLEAR_BIT(&(uParam0->f_9), 5);
}}elseif(!func_55(&(uParam0->f_723), 3000, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_9, 3)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::CLEAR_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 3);
MISC::CLEAR_BIT(&(uParam0->f_9), 4);
MISC::CLEAR_BIT(&(uParam0->f_9), 5);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_9, 2)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::CLEAR_BIT(&(uParam0->f_9), 3);
MISC::CLEAR_BIT(&(uParam0->f_9), 4);
MISC::CLEAR_BIT(&(uParam0->f_9), 5);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_9, 2)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_COUNTDOWN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::CLEAR_BIT(&(uParam0->f_9), 3);
MISC::CLEAR_BIT(&(uParam0->f_9), 4);
MISC::CLEAR_BIT(&(uParam0->f_9), 5);
}
if(func_54(&(uParam0->f_727))){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_CHARGING_LEVEL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((IntToFloat(func_140(&(uParam0->f_727), 0, 0)) / 3000f));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_BIT_SET(uParam0->f_9, 0)){
MISC::CLEAR_BIT(&(uParam0->f_9), 0);
}
if(MISC::IS_BIT_SET(uParam0->f_9, 1)){
MISC::CLEAR_BIT(&(uParam0->f_9), 1);
}}elseif(func_123(uParam0)==10){
if(!MISC::IS_BIT_SET(uParam0->f_9, 0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_22, "SET_CHARGING_LEVEL");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&(uParam0->f_9), 0);
if(MISC::IS_BIT_SET(uParam0->f_9, 1)){
MISC::CLEAR_BIT(&(uParam0->f_9), 1);
}}}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_22, 255, 255, 255, 0, 1);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(MISC::IS_BIT_SET(uParam0->f_5, 13) || PAD::HAVE_CONTROLS_CHANGED(0)){
func_138(&(uParam0->f_23));
func_137(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 202, 1), "HUD_INPUT3", &(uParam0->f_23), 0);
func_137(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 203, 1), "ORB_CAN_RE", &(uParam0->f_23), 0);
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_137(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iVar3, 1), "ORB_CAN_ZOOMO", &(uParam0->f_23), 0);
func_137(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iVar2, 1), "ORB_CAN_ZOOMI", &(uParam0->f_23), 0);
}else{
func_137(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iVar2, 1), "ORB_CAN_ZOOM", &(uParam0->f_23), 0);
}
func_137(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 24, 1), "ORB_CAN_FIRE", &(uParam0->f_23), 0);
MISC::CLEAR_BIT(&(uParam0->f_5), 13);
}
Var5={
func_136() 
};
func_135(&(uParam0->f_23), 1f);
func_127(&(uParam0->f_21), &Var5, &(uParam0->f_23), func_134(&(uParam0->f_23)));
func_126(1);
}}}
return iVar1;
}


void func_126(int iParam0){
Global_1655472.f_1163=iParam0;
}


void func_127(var uParam0, var uParam1, var uParam2, int iParam3){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
var uVar5;
if(iParam3==1 || PAD::HAVE_CONTROLS_CHANGED(2)){
*uParam2=0;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
func_133(uParam2);
}
if(Global_1577898 < 2){
func_132(1);
}
if(*uParam2==0){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
bVar0=false;
bVar0=false;
while (bVar0 < uParam2->f_693){
if(MISC::IS_BIT_SET(uParam2->f_689, bVar0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
if(!MISC::IS_BIT_SET(uParam2->f_690, bVar0)){
iVar1=uParam2->f_1[bVar0 /*57*/].f_54;
iVar2=uParam2->f_1[bVar0 /*57*/].f_55;
iVar3=uParam2->f_1[bVar0 /*57*/].f_56;
func_131(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, 1));
if(iVar3 < 363){
func_131(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, 1));
}}else{
uVar4=uParam2->f_1[bVar0 /*57*/].f_54;
uVar5=uParam2->f_1[bVar0 /*57*/].f_55;
func_131(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(uVar4, uVar5, 1));
}
if(MISC::IS_BIT_SET(uParam2->f_686, bVar0)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
if(uParam2->f_694==bVar0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
if(MISC::IS_BIT_SET(uParam2->f_687, bVar0)){
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
}
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(MISC::IS_BIT_SET(uParam2->f_688, bVar0)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_130(&(uParam2->f_1[bVar0 /*57*/].f_32));
}
if(MISC::IS_PC_VERSION()){
if(MISC::IS_BIT_SET(uParam2->f_691, bVar0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
func_131(&(uParam2->f_1[bVar0 /*57*/]));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16))){
func_131(&(uParam2->f_1[bVar0 /*57*/].f_16));
}
if(MISC::IS_BIT_SET(uParam2->f_686, bVar0)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
if(uParam2->f_694==bVar0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
if(MISC::IS_BIT_SET(uParam2->f_687, bVar0)){
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
}
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(MISC::IS_BIT_SET(uParam2->f_688, bVar0)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_130(&(uParam2->f_1[bVar0 /*57*/].f_32));
}
if(MISC::IS_PC_VERSION()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
bVar0++;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*uParam2=1;
}}
uParam2->f_695=0.05f;
uParam2->f_696=0.045f;
uParam2->f_697=0f;
uParam2->f_698=0f;
if(*uParam2==1){
func_129(*uParam0, uParam1);
}
func_128();
}


void func_128(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}


void func_129(var uParam0, var uParam1){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}


void func_130(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_131(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}


void func_132(int iParam0){
Global_1577898=iParam0;
}


void func_133(var uParam0){
uParam0->f_692=0;
}

int func_134(var uParam0){
return uParam0->f_692;
}


void func_135(var uParam0, float fParam1){
uParam0->f_699=fParam1;
}


struct<9> func_136(){
struct<9> Var0;
Var0.f_0=0.5f;
Var0.f_1=0.5f;
Var0.f_2=1f;
Var0.f_3=1f;
Var0.f_4=255;
Var0.f_5=255;
Var0.f_6=255;
Var0.f_7=200;
Var0.f_8=0f;
return Var0;
}


void func_137(char* sParam0, char* sParam1, var uParam2, char* sParam3){
int iVar0;
if(uParam2->f_693 >=12){
return;
}
iVar0=uParam2->f_693;
StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
uParam2->f_693++;
}


void func_138(var uParam0){
func_139(uParam0);
uParam0->f_692=1;
}


void func_139(var uParam0){
int iVar0;
*uParam0=0;
iVar0=0;
iVar0=0;
while (iVar0 < 12){
StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
uParam0->f_1[iVar0 /*57*/].f_36=0;
uParam0->f_1[iVar0 /*57*/].f_37=0;
StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
uParam0->f_1[iVar0 /*57*/].f_54=2;
uParam0->f_1[iVar0 /*57*/].f_55=363;
uParam0->f_1[iVar0 /*57*/].f_56=363;
iVar0++;
}
uParam0->f_686=0;
uParam0->f_687=0;
uParam0->f_688=0;
uParam0->f_689=0;
uParam0->f_691=0;
uParam0->f_690=0;
uParam0->f_692=0;
uParam0->f_693=0;
uParam0->f_695=0f;
uParam0->f_696=0f;
uParam0->f_697=0f;
uParam0->f_698=0f;
uParam0->f_699=1f;
}

int func_140(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


void func_141(bool bParam0, int iParam1){
if(bParam0){
func_146(1, 0, 1);
}else{
func_142(iParam1);
}}


void func_142(int iParam0){
func_145();
if(iParam0==0){
if(LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()){
return;
}}
if(func_144()==0 || HUD::IS_PAUSE_MENU_ACTIVE()){
func_143(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
}}


void func_143(int iParam0){
if(Global_1574632.f_20 !=iParam0){
Global_1574632.f_20=iParam0;
}}

int func_144(){
return Global_1574632.f_20;
}


void func_145(){
Global_2696217=1;
}


void func_146(int iParam0, bool bParam1, bool bParam2){
if(func_147()){
return;
}
if((func_144()==1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0){
func_143(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
if(!bParam1){
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
}
if(bParam2){
GRAPHICS::RESET_PAUSED_RENDERPHASES();
}}}

int func_147(){
if(func_148()){
return Global_2694453;
}
return 0;
}

int func_148(){
if(Global_2694446){
return Global_2694445;
}
return 0;
}


void func_149(var uParam0){
if(uParam0->f_14==-1){
uParam0->f_14=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_14, "background_loop", "dlc_xm_orbital_cannon_sounds", 1);
}}


struct<7> func_150(){
struct<7> Var0;
Var0.f_1={
-8.8511f, 6835.003f, 400f 
};
Var0.f_4={
-90f, 0f, 0f 
};
Var0.f_0=100f;
if(Global_2764567 > -1){
Var0.f_1=Global_4980736.f_5994[Global_2764567 /*492*/];
Var0.f_1.f_1=Global_4980736.f_5994[Global_2764567 /*492*/].f_1;
}
return Var0;
}


void func_151(var uParam0){
if(uParam0->f_13==-1){
uParam0->f_13=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_13, "cannon_activating_loop", "dlc_xm_orbital_cannon_sounds", 1);
}}


void func_152(int iParam0, int iParam1){
bool bVar0;
bool bVar1;
bool bVar2;
bVar0=iParam0 !=true;
bVar1=iParam1 !=2;
if(bVar0==1){
bVar2=false;
if(!iParam0==3){
if(GRAPHICS::GET_USINGSEETHROUGH()){
GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(Global_1934457);
Global_1934457=-1f;
GRAPHICS::SET_SEETHROUGH(false);
bVar2=true;
}
GRAPHICS::SET_NIGHTVISION(bVar0);
MISC::SET_BIT(&(Global_1928088[PLAYER::PLAYER_ID() /*199*/].f_198), 0);
}else{
if(GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION()){
GRAPHICS::SET_NIGHTVISION(false);
bVar2=true;
}
GRAPHICS::SET_SEETHROUGH(bVar0);
Global_1934457=GRAPHICS::SEETHROUGH_GET_MAX_THICKNESS();
GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(0.5f);
MISC::SET_BIT(&(Global_1928088[PLAYER::PLAYER_ID() /*199*/].f_198), 2);
}
if(iParam1==1 || bVar1){
if(Global_1934458==-1){
Global_1934458=AUDIO::GET_SOUND_ID();
}
if(!Global_1934458==-1 && AUDIO::HAS_SOUND_FINISHED(Global_1934458)){
if(iParam1==1){
if(!bVar2){
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "On", "GTAO_Vision_Modes_SoundSet", 0);
}else{
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
}}elseif(bVar1){
if(!bVar2){
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "On", "GTAO_Vision_Modes_SoundSet", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
}}}}}else{
if(GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION()){
GRAPHICS::SET_NIGHTVISION(bVar0);
MISC::CLEAR_BIT(&(Global_1928088[PLAYER::PLAYER_ID() /*199*/].f_198), 0);
}
if(GRAPHICS::GET_USINGSEETHROUGH()){
GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(Global_1934457);
Global_1934457=-1f;
GRAPHICS::SET_SEETHROUGH(bVar0);
MISC::CLEAR_BIT(&(Global_1928088[PLAYER::PLAYER_ID() /*199*/].f_198), 2);
}
if(iParam1==1 || bVar1){
if(Global_1934458==-1){
Global_1934458=AUDIO::GET_SOUND_ID();
}
if(!Global_1934458==-1 && AUDIO::HAS_SOUND_FINISHED(Global_1934458)){
if(iParam1==1){
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "Off", "GTAO_Vision_Modes_SoundSet", 0);
}elseif(bVar1){
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "Off", "GTAO_Vision_Modes_SoundSet", 1);
}}}}
func_153(!bVar0);
}


void func_153(bool bParam0){
func_154(370, bParam0, -1, 1);
}


void func_154(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_156()){
iVar0=Global_2848282[iParam0 /*3*/][func_155(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, uParam1, iParam3);
}}}

int func_155(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_24();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_156(){
return 1;
return 0;
}


void func_157(int iParam0){
if(func_35()){
return;
}
if(!Global_20383.f_1==1){
if(func_36(0)){
func_31(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_158(){
Global_23131.f_6=1;
}


void func_159(){
Global_2793046.f_4629=0;
}

int func_160(int iParam0, bool bParam1, bool bParam2){
bool bVar0;
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
int iVar11;
if(func_57() || (func_218() && iParam0)){
if(func_216(PLAYER::PLAYER_ID())){
func_215(0);
}
if(((!func_214() && !func_213()) && !func_212()) || func_211()){
if(!func_210(bParam2)){
return 0;
}}
if(!func_209()){
func_208(0);
}
bVar0=func_207();
bVar1=func_206();
bVar2=func_205();
bVar3=func_204();
bVar4=func_203();
bVar5=func_202();
bVar6=func_201();
bVar7=func_200();
bVar8=func_199();
bVar9=func_198();
bVar10=func_197();
iVar11=func_195();
func_176(0);
func_175();
if(!bParam1){
if(bVar0){
func_174();
}
if(bVar1){
func_173();
}
if(bVar2){
func_172();
}
if(bVar3){
func_171();
}
if(bVar4){
func_170();
}
if(bVar5){
func_169();
}
if(bVar6){
func_168();
}
if(bVar7){
func_167();
}
if(bVar8){
func_166();
}
if(bVar9){
func_165();
}
if(bVar10){
func_164();
}
if(iVar11 !=func_163()){
func_162(iVar11);
}}
func_161(0);
Global_2684801.f_1.f_2802=0;
}
return 1;
}


void func_161(int iParam0){
Global_2683864.f_889=iParam0;
}


void func_162(int iParam0){
Global_2683864.f_42=iParam0;
}

int func_163(){
if(Global_2691796){
return 32;
}
return (32 - Global_2691797);
}


void func_164(){
MISC::SET_BIT(&(Global_2683864.f_3), 12);
}


void func_165(){
MISC::SET_BIT(&(Global_2683864.f_3), 9);
}


void func_166(){
MISC::SET_BIT(&(Global_2683864.f_3), 6);
}


void func_167(){
MISC::SET_BIT(&(Global_2683864.f_3), 3);
}


void func_168(){
MISC::SET_BIT(&(Global_2683864.f_3), 1);
}


void func_169(){
MISC::SET_BIT(&(Global_2683864.f_2), 30);
}


void func_170(){
MISC::SET_BIT(&(Global_2683864.f_2), 29);
}


void func_171(){
MISC::SET_BIT(&(Global_2683864.f_2), 9);
}


void func_172(){
MISC::SET_BIT(&(Global_2683864.f_3), 5);
}


void func_173(){
MISC::SET_BIT(&(Global_2683864.f_2), 26);
}


void func_174(){
MISC::SET_BIT(&(Global_2683864.f_2), 21);
}


void func_175(){
MISC::SET_BIT(&(Global_2683864.f_2), 12);
}


void func_176(bool bParam0){
var uVar0;
if(func_193() && !func_211()){
func_192();
func_191();
}else{
uVar0=func_190();
func_189();
func_187(1);
func_186();
func_185();
func_184();
if(uVar0 && !bParam0){
func_183();
}}
if(Global_2692735.f_8){
func_182();
}
func_181();
func_180();
func_179();
func_178();
if(!func_209()){
func_177();
func_208(0);
}
func_191();
func_161(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::NETWORK_REMAIN_IN_GAME_CHAT(0);
}}


void func_177(){
Global_2683864.f_9=-1;
}


void func_178(){
Global_2683864.f_42=func_163();
}


void func_179(){
Global_2683864.f_735=0;
}


void func_180(){
Global_2683864.f_717=0;
}


void func_181(){
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18), 15);
}


void func_182(){
Global_2692735.f_8=0;
Global_2692735.f_7=0;
}


void func_183(){
MISC::SET_BIT(&(Global_2683864.f_3), 2);
}


void func_184(){
MISC::CLEAR_BIT(&Global_2683864, 7);
}


void func_185(){
MISC::CLEAR_BIT(&Global_2683864, 6);
}


void func_186(){
Global_2683864=0;
Global_2683864.f_2=0;
Global_2683864.f_3=0;
}


void func_187(bool bParam0){
int iVar0;
struct<57> Var1;
int iVar2;
Global_2684801.f_1.f_2798=0;
Global_2684801.f_1.f_2799=0;
Global_2684801.f_1.f_2824=0;
Global_2684801.f_1.f_2805=0;
Global_2684801.f_1.f_2806=0;
Global_2684801.f_1.f_2809=0;
Global_2684801.f_1.f_2810=0;
Global_2684801.f_1.f_2808=-1;
Global_2684801.f_1.f_2811=-1;
iVar0=0;
while (iVar0 < 8){
Global_2684801.f_1.f_2813[iVar0]=0;
iVar0++;
}
Global_2684801.f_1.f_2825=-1;
if(bParam0){
Global_2684801.f_1.f_2822=-1;
Global_2684801.f_1.f_2823=-1;
}
Global_2684801.f_1.f_2844=0;
func_188();
Var1.f_33=2;
Var1.f_36=7;
iVar2=0;
while (iVar2 <=31){
Global_2684801.f_1.f_845[iVar2 /*57*/]={
Var1 
};
iVar2++;
}
Global_2680249.f_33=-1;
Global_2680249.f_34=-1;
}


void func_188(){
Global_2680249.f_32=0;
}


void func_189(){
struct<13> Var0;
int iVar1;
iVar1=0;
while (iVar1 < 32){
Global_2681617[iVar1 /*37*/]={
Var0 
};
StringCopy(&(Global_2681617[iVar1 /*37*/].f_13), "", 64);
StringCopy(&(Global_2681617[iVar1 /*37*/].f_29), "", 16);
Global_2681617[iVar1 /*37*/].f_33=0;
Global_2681617[iVar1 /*37*/].f_34=0;
Global_2681617[iVar1 /*37*/].f_35=0;
iVar1++;
}
Global_2681617.f_1185=0;
Global_2681617.f_1186=0;
}


var func__190(){
return MISC::IS_BIT_SET(Global_2683864.f_3, 2);
}


void func_191(){
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18), 5);
}


void func_192(){
MISC::CLEAR_BIT(&(Global_2683864.f_2), 11);
}

int func_193(){
if(((func_214() || func_213()) || func_212()) || func_194()){
return 1;
}
return 0;
}


var func__194(){
return MISC::IS_BIT_SET(Global_2683864, 1);
}

int func_195(){
if(func_196()){
return 1;
}
return Global_2683864.f_42;
}


bool func_196(){
return Global_1575018==10;
}


var func__197(){
return MISC::IS_BIT_SET(Global_2683864.f_3, 12);
}


var func__198(){
return MISC::IS_BIT_SET(Global_2683864.f_3, 9);
}


var func__199(){
return MISC::IS_BIT_SET(Global_2683864.f_3, 6);
}


var func__200(){
return MISC::IS_BIT_SET(Global_2683864.f_3, 3);
}


var func__201(){
return MISC::IS_BIT_SET(Global_2683864.f_3, 1);
}


var func__202(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 30);
}


var func__203(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 29);
}


var func__204(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 9);
}


var func__205(){
return MISC::IS_BIT_SET(Global_2683864.f_3, 5);
}


var func__206(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 26);
}


var func__207(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 21);
}


void func_208(int iParam0){
if(iParam0==-1){
Global_2683864.f_890++;
}else{
Global_2683864.f_890=iParam0;
}}


bool func_209(){
return Global_2683864.f_737;
}

int func_210(bool bParam0){
if((((NETWORK::NETWORK_IS_IN_TRANSITION() || NETWORK::NETWORK_IS_TRANSITION_STARTED()) || NETWORK::NETWORK_IS_TRANSITION_BUSY()) || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING()) || NETWORK::NETWORK_IS_TRANSITION_LEAVE_POSTPONED()){
if(bParam0){
NETWORK::NETWORK_BAIL_TRANSITION(43, 0, 0);
return 1;
}
if(NETWORK::NETWORK_IS_TRANSITION_BUSY() || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING()){
return 0;
}elseif(NETWORK::NETWORK_IS_TRANSITION_STARTED()){
if(Global_2684801.f_1.f_2802==0){
NETWORK::NETWORK_LEAVE_TRANSITION();
Global_2684801.f_1.f_2802=1;
}
return 0;
}else{
return 0;
}
return 0;
}
return 1;
}


bool func_211(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 27);
}


bool func_212(){
return MISC::IS_BIT_SET(Global_2683864, 2);
}


bool func_213(){
return MISC::IS_BIT_SET(Global_2683864, 20);
}


bool func_214(){
return Global_2683864.f_698;
}


void func_215(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_11.f_1), 0);
}else{
MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_11.f_1), 0);
}}


bool func_216(int iParam0){
return func_217(iParam0);
}


var func__217(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


var func__218(){
return Global_2683864.f_756;
}


void func_219(){
if(!Global_2672505.f_947.f_10){
Global_2672505.f_947.f_10=1;
}}


bool func_220(){
return Global_2672505.f_947.f_10;
}


void func_221(){
Global_2672505.f_947.f_9=1;
}


bool func_222(){
return Global_2672505.f_947.f_9;
}


void func_223(){
Global_2804741.f_258=1;
}

int func_224(var uParam0){
int iVar0;
iVar0=0;
if(((((func_28(PLAYER::PLAYER_ID(), 1, 1) && !MISC::IS_BIT_SET(Global_2672505.f_990.f_4, 0)) && !MISC::IS_BIT_SET(Global_2621446, 15)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_242()) && !func_241()){
if((func_240(uParam0) && func_234(uParam0)) && func_231(uParam0)){
iVar0=1;
}}
if(PAD::HAVE_CONTROLS_CHANGED(2)){
func_8(&(uParam0->f_18));
uParam0->f_18=-1;
}
if(iVar0 && !PAD::IS_CONTROL_PRESSED(0, 19)){
if(uParam0->f_18==-1){
func_230(&(uParam0->f_18), 4, "ORB_CAN_START", 0, 0, 0, 0);
}elseif(func_229(uParam0->f_18, 1)){
func_226();
func_225();
func_8(&(uParam0->f_18));
if(!MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_436, 1)){
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_436), 1);
}
return 1;
}}else{
func_8(&(uParam0->f_18));
}
return 0;
}


void func_225(){
if(Global_2672505.f_2514[0 /*80*/].f_2 !=0){
Global_2672505.f_2514[0 /*80*/].f_2=5;
}}


void func_226(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672505.f_2514[iVar0 /*80*/].f_2 !=0){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_227(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}


void func_227(var uParam0, int iParam1){
func_228(uParam0, iParam1);
}


void func_228(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}

int func_229(int iParam0, bool bParam1){
int iVar0;
iVar0=func_9(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_36(0)){
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


void func_230(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*uParam0==-1){
func_8(uParam0);
}
return;
}
if(!*uParam0==-1){
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
*uParam0=Global_44000[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_231(var uParam0){
float fVar0;
struct<3> Var1;
struct<3> Var2;
var uVar3;
struct<3> Var4;
int iVar5;
int iVar6;
fVar0=0f;
Var1={
0f, 0f, 0f 
};
Var2={
0f, 0f, 0f 
};
switch (uParam0->f_17){
case 0:
fVar0=1.5f;
Var1={
252.0321f, 6126.419f, -160.3706f 
};
Var2={
253.1175f, 6126.419f, -158.369f 
};
break;
case 1:
fVar0=1.5f;
Var1={
254.3575f, 6126.419f, -160.3894f 
};
Var2={
255.5235f, 6126.419f, -158.3873f 
};
break;
case 2:
fVar0=1.5f;
Var1={
260.6575f, 6126.419f, -160.3736f 
};
Var2={
262.075f, 6126.419f, -158.3827f 
};
break;
case 3:
fVar0=1.5f;
Var1={
263.2076f, 6126.419f, -160.3984f 
};
Var2={
264.5398f, 6126.419f, -158.3723f 
};
break;
}
Var4={
func_233(&uVar3) 
};
iVar5=0;
while (iVar5 < 32){
iVar6=PLAYER::INT_TO_PLAYERINDEX(iVar5);
if((iVar6 !=func_121() && iVar6 !=PLAYER::PLAYER_ID()) && func_28(iVar6, 1, 1)){
if(func_232(Var4)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iVar6), Var1, Var2, fVar0, 0, 1, 0)){
return 0;
}}elseif(ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar6), Var4, 1f, 1f, 1f, 0, 1, 0)){
return 0;
}}
iVar5++;
}
return 1;
}

int func_232(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


Vector3 func__233(var uParam0){
bool bVar0;
if(Global_2764567==-1){
bVar0=false;
while (bVar0 < 32){
if(MISC::IS_BIT_SET(Global_2764565, bVar0)){
if(Global_4980736.f_5994[bVar0 /*492*/].f_299 > -1 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Global_4980736.f_5994[bVar0 /*492*/], 1.5f, 1.5f, 1.5f, 0, 1, 0)){
*uParam0=Global_4980736.f_5994[bVar0 /*492*/].f_299;
Global_2764567=bVar0;
return Global_4980736.f_5994[bVar0 /*492*/];
}}
bVar0++;
}}elseif(MISC::IS_BIT_SET(Global_2764565, Global_2764567)){
if(Global_4980736.f_5994[Global_2764567 /*492*/].f_299 > -1 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Global_4980736.f_5994[Global_2764567 /*492*/], 1.5f, 1.5f, 1.5f, 0, 1, 0)){
*uParam0=Global_4980736.f_5994[Global_2764567 /*492*/].f_299;
return Global_4980736.f_5994[Global_2764567 /*492*/];
}}
Global_2764567=-1;
*uParam0=-1;
return 0f, 0f, 0f;
}

int func_234(var uParam0){
float fVar0;
int iVar1;
fVar0=0f;
switch (uParam0->f_17){
case 0:
fVar0=0f;
break;
case 1:
fVar0=0f;
break;
case 2:
fVar0=0f;
break;
case 3:
fVar0=0f;
break;
}
if(!func_232(func_233(&iVar1))){
if(func_236(PLAYER::PLAYER_PED_ID(), func_233(&iVar1), 45f)){
if(iVar1 > -1){
return 1;
}}else{
return 0;
}}
if(func_235(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar0, 45f)){
return 1;
}
return 0;
}

int func_235(float fParam0, float fParam1, float fParam2){
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


bool func_236(int iParam0, struct<3> Param1, float fParam2){
return func_237(ENTITY::GET_ENTITY_COORDS(uParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam2);
}


bool func_237(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3){
struct<3> Var0;
var uVar1;
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(0f, 0f, 0f, uParam1, 0f, 1f, 0f) 
};
uVar1=func_238(func_239(Var0), func_239(Param2 - Param0));
return MISC::ACOS(uVar1) <=fParam3;
}


float func_238(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__239(struct<3> Param0){
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

int func_240(var uParam0){
int iVar0;
if(!func_232(func_233(&iVar0))){
if(iVar0 > -1){
uParam0->f_17=iVar0;
return 1;
}}
return 0;
}


bool func_241(){
return HUD::GET_PAUSE_MENU_STATE() !=0;
}

int func_242(){
if(Global_4521801.f_910==1){
return 1;
}
return 0;
}


void func_243(){
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
func_244(0, -1, 0);
}

int func_244(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_2();
}else{
return 0;
}}
if(!func_4(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_2();
}else{
return 0;
}}
if(func_246()){
if(!bParam2){
func_2();
}else{
return 0;
}}
if(func_245(157)){
if(!bParam2){
func_2();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_2();
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
func_2();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_2();
}else{
return 0;
}}
return 1;
}

int func_245(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_246(){
return Global_2683864.f_693;
}