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
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=-1;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
struct<22> Local_104={
0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_105=0;
struct<6> Local_106[8];
struct<4> Local_107[8];
struct<3> Local_108[32];
var uLocal_109[1]={
0 
};
var uLocal_110[1]={
0 
};
var uLocal_111[1]={
0 
};
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
struct<5> Local_117={
0, 0, 0, 0, 0 
};
var uLocal_118=0;
struct<3> Local_119={
0, 0, 0 
};
int iLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
var uLocal_123=12;
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
var uLocal_814=0;
var uLocal_815=0;
var uLocal_816=0;
var uLocal_817=0;
var uLocal_818=0;
var uLocal_819=0;
var uLocal_820=0;
var uLocal_821=1065353216;
struct<9> Local_822={
0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<387> Local_823={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_824=0;
var uLocal_825=0;
var uLocal_826=0;
var uLocal_827=0;
var uLocal_828=0;
var uLocal_829=0;
var uLocal_830=0;
var uLocal_831=0;
var uLocal_832=0;
var uLocal_833=0;
var uLocal_834=0;
var uLocal_835=0;
var uLocal_836=0;
var uLocal_837=0;
var uLocal_838=0;
var uLocal_839=0;
var uLocal_840=0;
var uLocal_841=0;
var uLocal_842=0;
var uLocal_843=0;
var uLocal_844=0;
var uLocal_845=0;
var uLocal_846=0;
var uLocal_847=0;
var uLocal_848=0;
var uLocal_849=0;
var uLocal_850=0;
var uLocal_851=0;
var uLocal_852=0;
var uLocal_853=0;
var uLocal_854=0;
var uLocal_855=0;
var uLocal_856=0;
var uLocal_857=0;
var uLocal_858=0;
var uLocal_859=0;
var uLocal_860=0;
var uLocal_861=0;
var uLocal_862=0;
var uLocal_863=0;
var uLocal_864=0;
var uLocal_865=0;
var uLocal_866=0;
var uLocal_867=0;
var uLocal_868=0;
var uLocal_869=0;
var uLocal_870=0;
var uLocal_871=2;
struct<2> Local_872={
0, 10 
};
var uLocal_873=0;
var uLocal_874=0;
var uLocal_875=0;
var uLocal_876=0;
var uLocal_877=0;
var uLocal_878=0;
var uLocal_879=0;
var uLocal_880=0;
var uLocal_881=0;
var uLocal_882=0;
var uLocal_883=0;
struct<3> Local_884={
0, 0, 0 
};
struct<21> Local_885={
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
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_672(PLAYER::PLAYER_ID(), 0, 1)){
if(!func_668(ScriptParam_885)){
func_661();
}}else{
func_661();
}}else{
func_661();
}
while (true){
func_660();
if(func_653()){
func_661();
}
if(func_652(1)){
func_661();
}
func_648();
func_642();
switch (func_641(NETWORK::PARTICIPANT_ID())){
case 0:
if(func_640()==1 && func_639()){
func_638(1);
}
break;
case 1:
switch (func_640()){
case 1:
func_311();
break;
case 2:
func_638(2);
break;
}
break;
case 2:
func_661();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_640()){
case 0:
if(func_59()){
func_58(1);
}
break;
case 1:
func_1();
break;
case 2:
func_661();
break;
}}}}


void func_1(){
if(func_57() > 0){
func_43();
func_40();
func_17();
func_4();
}
switch (func_57()){
case 0:
func_3(1);
break;
case 1:
if(func_2()==0){
}else{
func_3(5);
}
break;
case 5:
func_58(2);
break;
}}

int func_2(){
return Local_104.f_6;
}


void func_3(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_104.f_1=iParam0;
}


void func_4(){
if(func_2() !=0){
return;
}
if(func_16(2)){
func_15(1);
return;
}
if(func_16(1)){
func_15(5);
return;
}
if(!func_12()){
func_15(4);
return;
}
if(func_11()==7){
func_15(2);
return;
}
if(!func_6(func_9())){
if(func_5()==1 && !func_16(7)){
return;
}
func_15(3);
return;
}}

int func_5(){
return Local_104.f_17;
}


bool func_6(int iParam0){
return PED::IS_PED_SITTING_IN_VEHICLE(iParam0, func_7());
}

int func_7(){
return NETWORK::NET_TO_VEH(func_8());
}


var func__8(){
return Local_104.f_15;
}

int func_9(){
return NETWORK::NET_TO_PED(func_10());
}


var func__10(){
return Local_104.f_8;
}

int func_11(){
return Local_104.f_8.f_1;
}


bool func_12(){
return func_13(func_8());
}

int func_13(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_14(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_14(int iParam0){
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


void func_15(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_104.f_6=iParam0;
}


bool func_16(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Local_104.f_2[iVar0], iVar1);
}


void func_17(){
if(!func_39()){
return;
}
switch (func_38()){
case 0:
if(func_22()){
func_21(1);
}
break;
case 1:
if(func_16(5) && func_19(&(Local_104.f_19), 500, 0)){
func_21(2);
}
break;
case 2:
if(func_16(6)){
func_21(3);
}
break;
case 3:
if(func_16(7)){
func_21(4);
}
break;
case 4:
if(func_19(&(Local_104.f_21), 8000, 0)){
func_18(&(Local_104.f_21));
func_21(5);
}
break;
}}


void func_18(var uParam0){
uParam0->f_1=0;
}

int func_19(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_20(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_20(var uParam0, bool bParam1, bool bParam2){
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


void func_21(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_104.f_18=iParam0;
}

int func_22(){
int iVar0;
int iVar1;
if(func_36(1)){
iVar0=0;
while (iVar0 < 7){
iVar1=func_32(func_35(), iVar0);
if(((iVar1 !=func_31() && func_672(iVar1, 0, 1)) && func_29(iVar1)) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar1, func_24(220), func_23())){
return 0;
}
iVar0++;
}}
return 1;
}

int func_23(){
return Local_104.f_7;
}


char* func_24(int iParam0){
switch (iParam0){
case 1:
return "AM_HOLD_UP";
case 32:
return "AM_JOYRIDER";
case 33:
return "AM_PLANE_TAKEDOWN";
case 34:
return "AM_DISTRACT_COPS";
case 35:
return "AM_DESTROY_VEH";
case 36:
return "AM_HOT_TARGET";
case 37:
return "AM_KILL_LIST";
case 38:
return "AM_TIME_TRIAL";
case 39:
return "AM_CP_COLLECTION";
case 40:
return "AM_CHALLENGES";
case 41:
return "AM_PENNED_IN";
case 42:
return "AM_PASS_THE_PARCEL";
case 43:
return "AM_HOT_PROPERTY";
case 44:
return "AM_DEAD_DROP";
case 45:
return "AM_KING_OF_THE_CASTLE";
case 46:
return "AM_CRIMINAL_DAMAGE";
case 47:
return "AM_HUNT_THE_BEAST";
case 48:
return "GB_LIMO_ATTACK";
case 49:
return "GB_DEATHMATCH";
case 50:
return "GB_STEAL_VEH";
case 51:
return "GB_POINT_TO_POINT";
case 52:
return "GB_TERMINATE";
case 53:
return "GB_YACHT_ROB";
case 54:
return "GB_BELLYBEAST";
case 55:
return "GB_FIVESTAR";
case 56:
return "GB_ROB_SHOP";
case 57:
return "GB_COLLECT_MONEY";
case 58:
return "GB_ASSAULT";
case 59:
return "GB_VEH_SURV";
case 60:
return "GB_SIGHTSEER";
case 61:
return "GB_FLYING_IN_STYLE";
case 62:
return "GB_FINDERSKEEPERS";
case 63:
return "GB_HUNT_THE_BOSS";
case 64:
return "GB_CARJACKING";
case 65:
return "GB_HEADHUNTER";
case 66:
return "GB_CONTRABAND_BUY";
case 67:
return "GB_CONTRABAND_SELL";
case 68:
return "GB_CONTRABAND_DEFEND";
case 69:
return "GB_AIRFREIGHT";
case 70:
return "GB_CASHING_OUT";
case 71:
return "GB_SALVAGE";
case 72:
return "GB_FRAGILE_GOODS";
case 211:
return "dont_cross_the_line";
case 214:
return "grid_arcade_cabinet";
case 215:
return "scroll_arcade_cabinet";
case 216:
return "example_arcade";
case 217:
return "road_arcade";
case 222:
return "Degenatron Games";
case 218:
return "gunslinger_arcade";
case 223:
return "ggsm_arcade";
case 219:
return "wizard_arcade";
case 220:
return "AM_CASINO_LIMO";
case 221:
return "AM_CASINO_LUXURY_CAR";
case 224:
return "puzzle";
case 225:
return "camhedz_arcade";
case 73:
case 74:
return "GB_VEHICLE_EXPORT";
case 84:
return "GB_BIKER_JOUST";
case 83:
return "GB_BIKER_RACE_P2P";
case 85:
return "GB_BIKER_UNLOAD_WEAPONS";
case 86:
return "";
case 87:
return "GB_BIKER_BAD_DEAL";
case 88:
return "GB_BIKER_RESCUE_CONTACT";
case 89:
return "GB_BIKER_LAST_RESPECTS";
case 90:
return "GB_BIKER_CONTRACT_KILLING";
case 91:
return "GB_BIKER_CONTRABAND_SELL";
case 92:
return "GB_BIKER_CONTRABAND_DEFEND";
case 93:
return "GB_ILLICIT_GOODS_RESUPPLY";
case 94:
return "GB_BIKER_DRIVEBY_ASSASSIN";
case 102:
return "GB_BIKER_CRIMINAL_MISCHIEF";
case 95:
return "GB_BIKER_RIPPIN_IT_UP";
case 75:
return "GB_PLOUGHED";
case 76:
return "GB_FULLY_LOADED";
case 77:
return "GB_AMPHIBIOUS_ASSAULT";
case 78:
return "GB_TRANSPORTER";
case 79:
return "GB_FORTIFIED";
case 80:
return "GB_VELOCITY";
case 81:
return "GB_RAMPED_UP";
case 82:
return "GB_STOCKPILING";
case 96:
return "GB_BIKER_FREE_PRISONER";
case 97:
return "GB_BIKER_SAFECRACKER";
case 98:
return "GB_BIKER_STEAL_BIKES";
case 99:
return "GB_BIKER_SEARCH_AND_DESTROY";
case 100:
return "AM_PENNED_IN";
case 101:
return "GB_BIKER_STAND_YOUR_GROUND";
case 103:
return "GB_BIKER_DESTROY_VANS";
case 104:
return "GB_BIKER_BURN_ASSETS";
case 105:
return "GB_BIKER_SHUTTLE";
case 106:
return "GB_BIKER_WHEELIE_RIDER";
case 107:
case 108:
return "GB_GUNRUNNING";
case 109:
return "GB_GUNRUNNING_DEFEND";
case 110:
case 111:
case 112:
return "GB_SMUGGLER";
case 113:
return "GB_GANGOPS";
case 114:
return "BUSINESS_BATTLES";
case 115:
return "BUSINESS_BATTLES_SELL";
case 116:
return "BUSINESS_BATTLES_DEFEND";
case 117:
return "GB_SECURITY_VAN";
case 118:
return "GB_TARGET_PURSUIT";
case 119:
return "GB_JEWEL_STORE_GRAB";
case 120:
return "GB_BANK_JOB";
case 121:
return "GB_DATA_HACK";
case 122:
return "GB_INFILTRATION";
case 123:
return "BUSINESS_BATTLES_DEFEND";
case 124:
return "BUSINESS_BATTLES_SELL";
case 125:
return "GB_CASINO";
case 126:
return "GB_CASINO_HEIST";
case 127:
return "fm_content_business_battles";
case 151:
return "fm_content_crime_scene";
case 128:
return "fm_content_drug_vehicle";
case 129:
return "fm_content_movie_props";
case 130:
return "fm_content_island_heist";
case 131:
return "fm_content_island_dj";
case 133:
return "fm_content_golden_gun";
case 3:
return "AM_CR_SELL_DRUGS";
case 12:
return "AM_Safehouse";
case 16:
return "MG_RACE_TO_POINT";
case 18:
return "AM_CRATE_DROP";
case 28:
return "AM_AMMO_DROP";
case 29:
return "AM_VEHICLE_DROP";
case 30:
return "AM_BRU_BOX";
case 31:
return "AM_GA_PICKUPS";
case 26:
return "AM_backup_heli";
case 27:
return "AM_airstrike";
case 17:
return "AM_PI_MENU";
case 180:
return "AM_BOAT_TAXI";
case 181:
return "AM_HELI_TAXI";
case 19:
return "AM_IMP_EXP";
case 22:
return "AM_TAXI";
case 23:
return "AM_TAXI_LAUNCHER";
case 24:
return "AM_GANG_CALL";
case 25:
return "heli_gun";
case 194:
return "am_rollercoaster";
case 195:
return "am_ferriswheel";
case 196:
return "AM_LAUNCHER";
case 197:
return "AM_DAILY_OBJECTIVES";
case 4:
return "AM_STRIPPER";
case 13:
return "AM_Hitchhiker";
case 5:
return "stripclub_mp";
case 6:
return "AM_ArmWrestling";
case 8:
return "AM_Tennis";
case 9:
return "AM_Darts";
case 7:
return "AM_ImportExport";
case 10:
return "AM_FistFight";
case 11:
return "AM_DropOffHooker";
case 15:
return "AM_DOORS";
case 20:
return "FM_INTRO";
case 21:
return "AM_PROSTITUTE";
case 182:
return "fm_hold_up_tut";
case 183:
return "AM_CAR_MOD_TUT";
case 184:
return "AM_CONTACT_REQUESTS";
case 185:
return "am_mission_launch";
case 186:
return "am_npc_invites";
case 187:
return "am_lester_cut";
case 190:
return "AM_VEHICLE_SPAWN";
case 191:
return "am_ronTrevor_Cut";
case 192:
return "AM_ARMYBASE";
case 193:
return "AM_PRISON";
case 198:
return "AM_ArmWrestling";
case 205:
return "fm_Bj_race_controler";
case 199:
return "AM_Darts";
case 206:
return "fm_deathmatch_controler";
case 204:
return "FM_Impromptu_DM_Controler";
case 207:
return "fm_hideout_controler";
case 200:
return "golf_mp";
case 203:
return "Pilot_School_MP";
case 208:
return func_26();
case 209:
return "FM_Race_Controler";
case 201:
return "Range_Modern_MP";
case 210:
if(func_25(Global_4718592.f_171044)){
return "FM_Survival_Controller";
}else{
return "FM_Horde_Controler";
}
break;
case 202:
return "tennis_network_mp";
case 188:
return "am_heist_int";
case 189:
return "am_lowrider_int";
case 212:
return "am_darts_apartment";
case 213:
return "AM_Armwrestling_Apartment";
case 226:
return "SCTV";
case 0:
return "";
}
switch (iParam0){
case 132:
return "AM_ISLAND_BACKUP_HELI";
case 134:
return "fm_content_tuner_robbery";
case 135:
return "fm_content_vehicle_list";
case 136:
return "tuner_sandbox_activity";
case 137:
return "fm_content_auto_shop_delivery";
case 138:
return "fm_content_payphone_hit";
case 139:
return "fm_content_security_contract";
case 140:
return "fm_content_vip_contract_1";
case 141:
return "fm_content_metal_detector";
case 142:
return "am_agency_suv";
case 143:
return "fm_content_phantom_car";
case 144:
return "fm_content_slasher";
case 145:
return "fm_content_sightseeing";
case 146:
return "fm_content_smuggler_trail";
case 148:
return "fm_content_skydive";
case 149:
return "fm_content_cerberus";
case 147:
return "fm_content_smuggler_plane";
case 150:
return "fm_content_parachuter";
case 152:
return "fm_content_bar_resupply";
case 153:
return "fm_content_bike_shop_delivery";
case 154:
return "fm_content_clubhouse_contracts";
case 155:
return "fm_content_cargo";
case 156:
return "fm_content_export_cargo";
case 157:
return "fm_content_ammunation";
case 158:
return "fm_content_gunrunning";
case 159:
return "fm_content_source_research";
case 160:
return "fm_content_club_management";
case 161:
return "fm_content_club_odd_jobs";
case 162:
return "fm_content_club_source";
case 163:
return "fm_content_convoy";
case 164:
return "fm_content_robbery";
case 165:
return "fm_content_acid_lab_setup";
case 166:
return "fm_content_acid_lab_source";
case 167:
return "fm_content_acid_lab_sell";
case 168:
return "fm_content_drug_lab_work";
case 169:
return "fm_content_stash_house";
case 170:
return "fm_content_taxi_driver";
case 171:
return "fm_content_xmas_mugger";
case 172:
return "fm_content_bank_shootout";
case 173:
return "fm_content_armoured_truck";
case 174:
return "fm_content_ghosthunt";
case 175:
return "fm_content_smuggler_sell";
case 176:
return "fm_content_smuggler_resupply";
case 177:
return "fm_content_smuggler_ops";
case 178:
return "fm_content_bicycle_time_trial";
case 179:
return "fm_content_possessed_animals";
default:
}
return "";
}


bool func_25(int iParam0){
return iParam0==998;
}


char* func_26(){
if(func_27()){
return "fm_mission_controller";
}
return "fm_mission_controller_2020";
}

int func_27(){
if(func_28(2)){
return 0;
}
return 1;
}


bool func_28(int iParam0){
return Global_4718592.f_171045 >=iParam0;
}


bool func_29(int iParam0){
return func_30(iParam0, 5);
}


var func__30(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_6, iParam1);
}

int func_31(){
return -1;
}

int func_32(int iParam0, int iParam1){
if(func_33(iParam0)){
if(iParam1 > -1 && iParam1 < 7){
return Global_1895156[iParam0 /*609*/].f_10.f_11[iParam1];
}}
return func_31();
}

int func_33(int iParam0){
if(func_34(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_31()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_34(var uParam0){
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

int func_35(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}


bool func_36(bool bParam0){
return func_37(PLAYER::PLAYER_ID(), bParam0);
}


bool func_37(int iParam0, bool bParam1){
if(!func_34(iParam0)){
return 0;
}
if(!bParam1){
if(func_33(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_31();
}

int func_38(){
return Local_104.f_18;
}

int func_39(){
if(func_5() !=1){
return 0;
}
if(func_38()==5){
return 0;
}
return 1;
}


void func_40(){
if(func_42() > 0){
if(func_42() !=2){
if(!func_12()){
func_41(2);
}}}
switch (func_42()){
case 0:
func_41(1);
break;
case 1:
break;
case 2:
break;
}}


void func_41(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_104.f_15.f_1=iParam0;
}

int func_42(){
return Local_104.f_15.f_1;
}


void func_43(){
var uVar0;
int iVar1;
bool bVar2;
bool bVar3;
uVar0=func_10();
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0)){
iVar1=func_9();
bVar2=true;
bVar3=!PED::IS_PED_INJURED(iVar1);
}
if(func_11() > 0){
if(func_11() !=7){
if(!bVar3){
func_56(7);
}}
if(func_55() && func_52()){
func_56(6);
}}
switch (func_11()){
case 0:
if(bVar2){
switch (func_5()){
case 0:
func_56(1);
break;
case 1:
func_56(3);
break;
}}
break;
case 1:
if((((!func_50(func_51()) && func_12()) && ENTITY::DOES_ENTITY_EXIST(func_49())) && func_6(func_49())) && func_16(4)){
func_56(2);
}
break;
case 2:
if(func_12() && !func_16(4)){
func_56(4);
}elseif(func_48(0)){
func_46(func_47(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
func_56(3);
}
break;
case 4:
if(func_48(1)){
func_56(1);
}
break;
case 3:
switch (func_5()){
case 0:
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), 0, 1)==0){
func_45(2);
}
break;
case 1:
if(func_16(7) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), 0, 1)==0){
func_56(5);
}
break;
}
break;
case 5:
switch (func_5()){
case 1:
if(func_44(iVar1, joaat("script_task_vehicle_drive_wander"), 1)){
func_45(2);
}
break;
}
break;
case 7:
break;
}}

int func_44(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
if(iVar0==1 || iVar0==0){
return 1;
}elseif(!bParam2){
if(iVar0==2 || iVar0==3){
return 1;
}}
return 0;
}


void func_45(int iParam0){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Local_104.f_2[iVar0]), iVar1);
}


void func_46(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6){
struct<9> Var0;
Var0.f_0=-503325966;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_7=iParam6;
Var0.f_4=iParam1;
Var0.f_5=iParam4;
Var0.f_2=fParam2;
Var0.f_3=iParam3;
Var0.f_6=iParam5;
Var0.f_8=MISC::GET_FRAME_COUNT();
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 9, iParam0);
}}

int func_47(int iParam0, int iParam1, bool bParam2, int iParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
iVar1=0;
while (iVar1 < 32){
iVar3=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_672(iVar3, 1, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar3), iParam3)){
if(!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iVar3)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar3), iParam3);
if(iVar2==iParam0){
if(PLAYER::GET_PLAYER_TEAM(iVar3)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2){
if(iVar3 !=PLAYER::PLAYER_ID() || iParam1){
MISC::SET_BIT(&uVar0, bVar1);
}
}}}}}
bVar1++;
}
return uVar0;
}


bool func_48(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Local_104.f_4[iVar0], iVar1);
}

int func_49(){
return PLAYER::GET_PLAYER_PED(func_23());
}

int func_50(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


Vector3 func__51(){
return Local_104.f_8.f_2;
}

int func_52(){
if(!func_12()){
return 1;
}
if(func_53()){
return 1;
}
if(!func_6(func_9())){
return 1;
}
return 0;
}


bool func_53(){
return func_54(func_7());
}

int func_54(int iParam0){
if(((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000)){
return 1;
}
return 0;
}

int func_55(){
if(func_11()==6){
return 0;
}
if(func_5()==1 && !func_16(7)){
return 0;
}
return 1;
}


void func_56(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_104.f_8.f_1=iParam0;
}

int func_57(){
return Local_104.f_1;
}


void func_58(int iParam0){
Local_104.f_0=iParam0;
}

int func_59(){
if(!func_16(0)){
func_310(PLAYER::PLAYER_ID());
func_309();
if(func_29(PLAYER::PLAYER_ID())){
func_308(1);
}else{
func_308(0);
}
func_306();
func_304();
func_45(0);
}
if(!func_66()){
return 0;
}
if(!func_60()){
return 0;
}
return 1;
}

int func_60(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())){
return 1;
}
if(func_64(func_65()) && func_63(&(Local_104.f_8), func_8(), 26, func_65(), -1, 1, 1, 1)){
func_62();
func_61();
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_65());
return 1;
}
return 0;
}


void func_61(){
int iVar0;
iVar0=func_9();
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, 0);
PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837216);
PED::SET_PED_KEEP_TASK(iVar0, 1);
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, 0);
PED::SET_PED_CONFIG_FLAG(iVar0, 251, 1);
PED::SET_DRIVER_ABILITY(iVar0, 1f);
if(func_5()==1){
ENTITY::SET_ENTITY_VISIBLE(iVar0, false, 0);
}}


void func_62(){
var uVar0;
uVar0=func_9();
PED::SET_PED_COMPONENT_VARIATION(uVar0, 0, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uVar0, 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uVar0, 3, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uVar0, 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uVar0, 8, 1, 0, 0);
}

int func_63(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0)){
return 0;
}
*uParam0=NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
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

int func_64(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_65(){
return joaat("s_m_y_waiter_01");
}

int func_66(){
int iVar0;
struct<103> Var1;
int iVar2;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_8())){
return 1;
}
if(func_64(func_303()) && func_156()){
MISC::CLEAR_AREA(Local_117.f_1, 5f, 1, 0, 0, 0);
if(func_153(&(Local_104.f_15), func_303(), Local_117.f_1, Local_117.f_4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
iVar0=func_7();
VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
func_152(iVar0);
ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLE(iVar0, 1);
Var1={
func_151() 
};
func_67(iVar0, &Var1, 0, 1, 1);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset")){
iVar2=DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
}
MISC::SET_BIT(&iVar2, 11);
DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar2);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
DECORATOR::DECOR_SET_INT(iVar0, "Not_Allow_As_Saved_Veh", 1);
}
switch (func_5()){
case 0:
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, 1);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, 1);
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iVar0, 1);
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iVar0, 1, 3);
break;
case 1:
ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
ENTITY::SET_ENTITY_VISIBLE(iVar0, false, 0);
ENTITY::SET_ENTITY_COLLISION(iVar0, false, 0);
ENTITY::SET_ENTITY_INVINCIBLE(iVar0, 1);
break;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_303());
return 1;
}}
return 0;
}


void func_67(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
float fVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(PLAYER::PLAYER_ID() !=func_31()){
uParam1->f_100=PLAYER::PLAYER_ID();
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
func_126(iParam0, uParam1, bParam2, bParam3);
if(uParam1->f_102 !=0){
if(uParam1->f_102==2){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 1);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}elseif(uParam1->f_102==1){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}elseif(uParam1->f_102==3){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 1);
VEHICLE::SET_DRIFT_TYRES(iParam0, 1);
}}
if(func_125(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(uParam1->f_9[44]==2){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, 0, 1);
}else{
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, 1, 1);
}}
if(!uParam1->f_78==-1 && uParam1->f_9[14]==-1){
AUDIO::OVERRIDE_VEH_HORN(iParam0, 1, uParam1->f_78);
}
if(!uParam1->f_79==-1){
AUDIO::SET_VEHICLE_HORN_SOUND_INDE(iParam0, uParam1->f_79);
}
if(func_124(uParam1->f_66, &fVar1) && uParam1->f_80 !=fVar1){
uParam1->f_80=fVar1;
}
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
if(uParam1->f_97 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
}
if(uParam1->f_99 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
}
if(func_123(iParam0)){
func_117(iParam0, func_120(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >=0){
VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
}
if(MISC::IS_BIT_SET(uParam1->f_95, 0)){
func_87(iParam0, &(uParam1->f_81));
}
if((!func_77(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_71(iParam0);
}
if(func_70(iVar0)){
switch (uParam1->f_9[5]){
case 0:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
break;
case 1:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}
break;
case 2:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
}
break;
case 3:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
}
break;
default:
if(uParam1->f_9[5] !=-1){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
}
}
break;
}}
if(func_69(ENTITY::GET_ENTITY_MODEL(iParam0))){
switch (uParam1->f_9[5]){
case 1:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
VEHICLE::SET_VEHICLE_STRONG(iParam0, 1);
if(uParam1->f_9[16]==5){
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21927 + 0.05f));
}
else{
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21927);
}
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, 1);
break;
default:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, 1);
break;
}}
switch (uParam1->f_94){
case 0:
break;
case 1:
if(MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2)){
if(MISC::IS_BIT_SET(uParam1->f_95, 3)){
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
}
break;
case 2:
if(MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3)){
if(func_68(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))){
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
}
else{
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
}}
break;
case 3:
break;
case 4:
break;
}}}}


var func__68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


bool func_69(int iParam0){
return func_125(iParam0);
}

int func_70(int iParam0){
switch (iParam0){
case joaat("pounder2"):
case joaat("mule4"):
case joaat("speedo4"):
case -44799464:
case joaat("imperator"):
case joaat("deathbike"):
case joaat("cerberus"):
case joaat("bruiser"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("issi4"):
case joaat("imperator2"):
case joaat("deathbike2"):
case joaat("cerberus2"):
case joaat("bruiser2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("issi5"):
case joaat("imperator3"):
case joaat("deathbike3"):
case joaat("cerberus3"):
case joaat("bruiser3"):
case joaat("dominator6"):
case joaat("zr3803"):
case joaat("issi6"):
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
return 1;
break;
}
return 0;
}


void func_71(int iParam0){
struct<3> Var0;
if(Global_262145.f_20336){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0)){
Var0.f_0=ENTITY::GET_ENTITY_MODEL(iParam0);
Var0.f_1=MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID")){
Var0.f_2=MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
}else{
Var0.f_2=DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
}}
func_72(Var0);
}}}}


void func_72(struct<3> Param0){
struct<3> Var0;
Var0.f_0=-1251853784;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=Param0.f_0;
Var0.f_2.f_1=Param0.f_1;
Var0.f_2.f_2=Param0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_73(1, 1));
}


var func__73(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_672(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_74(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}


bool func_74(int iParam0, int iParam1){
bool bVar0;
if(!func_34(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_75(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_75(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_76();
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

int func_76(){
return Global_1574918;
}

int func_77(int iParam0){
int iVar0;
if(func_86()){
iVar0=0;
while (iVar0 < 61){
if(func_85(iVar0)==iParam0){
if(func_78(iVar0)){
return 1;
}}
iVar0++;
}}
return 0;
}


bool func_78(int iParam0){
return func_79(iParam0, 6, 1);
}

int func_79(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_84()==0){
return MISC::IS_BIT_SET(func_80(func_83(iParam0), -1), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);
}
return 0;
}

int func_80(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_81(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__81(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_82(uParam1));
}

int func_82(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_76();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_83(int iParam0){
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
return 12514;
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
case 60:
return 11901;
break;
default:
break;
}
return 14385;
}

int func_84(){
return Global_32283;
}

int func_85(int iParam0){
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
case 60:
return 3;
break;
}
return 6;
}


bool func_86(){
return Global_100885.f_394 > 0;
}

int func_87(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(!func_97(iParam0, uParam1)){
return 1;
}
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==0){
if(!func_95(iParam0)){
iVar1=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
if(func_90(&iParam0, iVar1)){
}else{
return 1;
}}else{
return 1;
}}elseif(iVar0 >=3){
return 1;
}elseif(func_88(iParam0)){}
return 0;
}

int func_88(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==1 || iVar0==2){
if(iVar0==1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar1=NETWORK::GET_NETWORK_TIME();
}else{
iVar1=MISC::GET_GAME_TIMER();
}
iVar2=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577932));
iVar3=20000;
if(Global_1836600){
iVar3=2000;
}
if(iVar2 > iVar3){
GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(iParam0);
func_89(iParam0);
return 0;
}}
return 1;
}
return 0;
}


void func_89(int iParam0){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}}}
if(!MISC::IS_BIT_SET(uVar0, 16)){
MISC::SET_BIT(&uVar0, 16);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", uVar0);
}}

int func_90(int iParam0, int iParam1){
func_94();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0)){
Global_1950733.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
if(Global_1950733.f_11 < 0f){
Global_1950733.f_11=0f;
}}
func_92(*iParam0, &Global_1950733, &(Global_1950733.f_1), &(Global_1950733.f_4), &(Global_1950733.f_7), &(Global_1950733.f_10));
Global_1950733.f_1.f_2=(Global_1950733.f_1.f_2 - Global_1950733.f_11);
if(Global_1950733.f_4.f_2 < 0f){
Global_1950733.f_12=1;
}
Global_1950733.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("comet4")){
Global_1950733.f_13=255;
}
if(Global_1950733.f_12){
if(func_91(iParam0, iParam1, Global_1950733, Global_1950733.f_1, Global_1950733.f_4, Global_1950733.f_7, Global_1950733.f_10, 0, Global_1950733.f_13)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577932=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577932=MISC::GET_GAME_TIMER();
}
return 1;
}}else{
Global_1950733.f_14={
Global_1950733.f_1 
};
Global_1950733.f_14=(Global_1950733.f_14 * -1f);
Global_1950733.f_17={
Global_1950733.f_4 
};
Global_1950733.f_17=(Global_1950733.f_17 * -1f);
Global_1950733.f_20={
Global_1950733.f_7 
};
Global_1950733.f_20.f_1=(Global_1950733.f_20.f_1 * -1f);
Global_1950733.f_20.f_2=(Global_1950733.f_20.f_2 * -1f);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0)){
Global_1950733.f_23=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
}else{
Global_1950733.f_23=3;
}
Global_1950733.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1)){
Global_1950733.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
}else{
Global_1950733.f_24=3;
}
if(((Global_1950733.f_23==0 && func_91(iParam0, iParam1, Global_1950733, Global_1950733.f_1, Global_1950733.f_4, Global_1950733.f_7, Global_1950733.f_10, 0, Global_1950733.f_13)) || Global_1950733.f_23 !=0) && ((Global_1950733.f_24==0 && func_91(iParam0, iParam1, Global_1950733, Global_1950733.f_14, Global_1950733.f_17, Global_1950733.f_20, Global_1950733.f_10, 1, Global_1950733.f_13)) || Global_1950733.f_24 !=0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577932=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577932=MISC::GET_GAME_TIMER();
}
return 1;
}}
return 0;
}


bool func_91(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8){
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_92(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
if(((!func_93(Global_1950759, 0f, 0f, 0f, 0) && !func_93(Global_1950762, 0f, 0f, 0f, 0)) && !func_93(Global_1950765, 0f, 0f, 0f, 0)) && !Global_1950768==0f){
*uParam2={
Global_1950759 
};
*uParam3={
Global_1950762 
};
*uParam4={
Global_1950765 
};
*uParam5=Global_1950768;
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("dominator"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("feltzer2"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("adder"):
*uParam2={
0f, 1.54f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("akuma"):
*uParam2={
0f, 0.06f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("asea"):
*uParam2={
0f, 1.5f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("asterope"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bagger"):
*uParam2={
-1f, 0.16f, 0.283f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.09f;
break;
case joaat("baller"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller2"):
*uParam2={
0f, 1.55f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("banshee"):
*uParam2={
0f, 0.94f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("bati"):
*uParam2={
0f, 0.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("bati2"):
*uParam2={
0f, 0.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("bfinjection"):
*uParam2={
-1f, 0.08f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bison"):
*uParam2={
0f, 1.99f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bjxl"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("blista"):
*uParam2={
0f, 1.49f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("bobcatxl"):
*uParam2={
0f, 1.68f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.65f;
break;
case joaat("bodhi2"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buccaneer"):
*uParam2={
0f, 2.01f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("buffalo"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buffalo2"):
*uParam2={
0f, 2.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("bullet"):
*uParam2={
-1.57f, 0.07f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("carbonrs"):
*uParam2={
0f, 0.09f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("carbonizzare"):
*uParam2={
0f, 1.45f, 1f 
};
*uParam3={
0f, -0.11f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cavalcade"):
*uParam2={
0f, 1.51f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.55f;
break;
case joaat("cavalcade2"):
*uParam2={
0f, 1.59f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cheetah"):
*uParam2={
-1.61f, 0.26f, 0.17f 
};
*uParam3={
0.9f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("cogcabrio"):
*uParam2={
0f, 1.42f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("comet2"):
*uParam2={
0f, 1.35f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("coquette"):
*uParam2={
0f, 0.96f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.22f;
break;
case joaat("daemon"):
*uParam2={
0f, 0.06f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("dilettante"):
*uParam2={
0f, 1.59f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dloader"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("double"):
*uParam2={
0f, 0.08f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("dubsta"):
*uParam2={
-1.71f, 0.31f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dubsta2"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.75f;
break;
case joaat("elegy2"):
*uParam2={
0f, 1.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("emperor"):
*uParam2={
0f, 1.31f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("emperor2"):
*uParam2={
0f, 1.31f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("entityxf"):
*uParam2={
-1.52f, 0.41f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("exemplar"):
*uParam2={
0f, 1.32f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("f620"):
*uParam2={
0f, 1.28f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("faggio2"):
*uParam2={
-1f, -0.48f, -0.11f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("felon"):
*uParam2={
0f, 1.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("felon2"):
*uParam2={
0f, 1.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fq2"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("fugitive"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("fusilade"):
*uParam2={
0f, 0.98f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("futo"):
*uParam2={
0f, 1.28f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("gauntlet"):
*uParam2={
0f, 1.735f, 1.05f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("granger"):
*uParam2={
0f, 2.07f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("gresley"):
*uParam2={
0f, 1.75f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("habanero"):
*uParam2={
0f, 1.69f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("hexer"):
*uParam2={
0f, -0.46f, 1f 
};
*uParam3={
0f, 1f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.14f;
break;
case joaat("hotknife"):
*uParam2={
-1.43f, -0.14f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("infernus"):
*uParam2={
-1f, 0.33f, 0.08f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.06f 
};
*uParam5=0.25f;
break;
case joaat("ingot"):
*uParam2={
0f, 1.58f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("intruder"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("issi2"):
*uParam2={
0f, 1.21f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jackal"):
*uParam2={
0f, 1.36f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("jb700"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("khamelion"):
*uParam2={
0f, 1.46f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.475f;
break;
case joaat("landstalker"):
*uParam2={
0f, 1.83f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("manana"):
*uParam2={
0f, 0.86f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("mesa"):
*uParam2={
0f, 1.47f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("mesa3"):
*uParam2={
0f, 1.47f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("minivan"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("monroe"):
*uParam2={
0f, 1.23f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.43f;
break;
case joaat("nemesis"):
*uParam2={
0f, 0.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.1f;
break;
case joaat("ninef"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ninef2"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("oracle"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("oracle2"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("patriot"):
*uParam2={
0f, 1.75f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("pcj"):
*uParam2={
0f, 0.02f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("penumbra"):
*uParam2={
0f, 1.46f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("peyote"):
*uParam2={
-1f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("phoenix"):
*uParam2={
0f, 1.833f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.44f;
break;
case joaat("picador"):
*uParam2={
0f, 1.43f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.425f;
break;
case joaat("prairie"):
*uParam2={
0f, 1.41f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.31f;
break;
case joaat("premier"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("primo"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("radi"):
*uParam2={
0f, 1.74f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rancherxl"):
*uParam2={
0f, 1.54f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rapidgt"):
*uParam2={
0f, 1.263f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rapidgt2"):
*uParam2={
0f, 1.263f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ratloader"):
*uParam2={
-1.78f, 0.52f, 0.52f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("rebel"):
*uParam2={
-1.22f, 0.6f, 0.44f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rebel2"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("regina"):
*uParam2={
0f, 1.473f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rocoto"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("romero"):
*uParam2={
0f, 1.83f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ruffian"):
*uParam2={
0f, -0.02f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.19f;
break;
case joaat("ruiner"):
*uParam2={
0f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sabregt"):
*uParam2={
-1f, 0f, 0.14f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.015f 
};
*uParam5=0.35f;
break;
case joaat("sadler"):
*uParam2={
0f, 2.26f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sandking"):
*uParam2={
0f, 2.496f, 1.55f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sandking2"):
*uParam2={
0f, 2.286f, 1.55f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("schafter2"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schwarzer"):
*uParam2={
0f, 1.43f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("seminole"):
*uParam2={
0f, 1.45f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sentinel"):
*uParam2={
0f, 1.18f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sentinel2"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("serrano"):
*uParam2={
0f, 1.68f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.49f;
break;
case joaat("stanier"):
*uParam2={
0f, 1.55f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("stinger"):
*uParam2={
0f, 1.3f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("stingergt"):
*uParam2={
-1f, -0.17f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("stratum"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sultan"):
*uParam2={
0f, 1.77f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("superd"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("surano"):
*uParam2={
0f, 1.38f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("surfer"):
*uParam2={
0f, 2.48f, 0.26f 
};
*uParam3={
0f, -1f, -0.212f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.32f;
break;
case joaat("surfer2"):
*uParam2={
0f, 2.48f, 0.26f 
};
*uParam3={
0f, -1f, -0.212f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.32f;
break;
case joaat("surge"):
*uParam2={
0f, 1.69f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tailgater"):
*uParam2={
0f, 1.783f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tornado"):
*uParam2={
-1.23f, 0.11f, -0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tornado2"):
*uParam2={
0f, 1.44f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tornado3"):
*uParam2={
0f, 1.44f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("vacca"):
*uParam2={
0f, 1.76f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vader"):
*uParam2={
0f, 0.08f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("vigero"):
*uParam2={
-1f, 0.11f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("voltic"):
*uParam2={
0f, 1.763f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("voodoo2"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("washington"):
*uParam2={
0f, 1.61f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("youga"):
*uParam2={
0f, 2.352f, 1.003f 
};
*uParam3={
0f, -1f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.175f;
break;
case joaat("zion"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zion2"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("ztype"):
*uParam2={
-0.96f, -0.69f, 0.35f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
default:
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, 0f, -1f 
};
*uParam5=0.5f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("kalahari"):
*uParam2={
-1f, 0.18f, 0.1f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("paradise"):
*uParam2={
0f, 2.23f, 1f 
};
*uParam3={
0f, -0.22f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("alpha"):
*uParam2={
-1f, 0.18f, -0.05f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("huntley"):
*uParam2={
0f, 1.52f, 0.99f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("zentorno"):
*uParam2={
-1.24f, 0.3f, -0.07f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester"):
*uParam2={
-1f, 0.17f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.05f 
};
*uParam5=0.33f;
break;
case joaat("massacro"):
*uParam2={
0f, 1.37f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("turismor"):
*uParam2={
-1f, 0.3f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("thrust"):
*uParam2={
-1f, 0.405f, 0.4625f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1625f;
break;
case joaat("btype"):
*uParam2={
0f, 1.143f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.7125f;
break;
case joaat("rhapsody"):
*uParam2={
-1f, -0.47f, -0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2625f;
break;
case joaat("glendale"):
*uParam2={
0f, 1.683f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.775f;
break;
case joaat("warrener"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.775f;
break;
case joaat("blade"):
*uParam2={
-1f, 0.445f, 0.2075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.325f;
break;
case joaat("panto"):
*uParam2={
-1f, 0f, 0.335f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dubsta3"):
*uParam2={
-1f, 0.34f, 0.2975f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("pigalle"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("coquette2"):
*uParam2={
-1f, -0.1775f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("innovation"):
*uParam2={
0f, 0.15f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("hakuchou"):
*uParam2={
0f, 0.27f, 0.845f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.16f;
break;
case joaat("furoregt"):
*uParam2={
-1f, 0f, 0.2075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("ratloader2"):
*uParam2={
-1.78f, 0.52f, 0.52f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("slamvan"):
*uParam2={
-1f, 0.275f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dukes2"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("dukes"):
*uParam2={
-1f, 0f, 0.0375f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3875f;
break;
case joaat("stalion"):
*uParam2={
-1f, 0f, 0.0925f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4375f;
break;
case joaat("blista2"):
*uParam2={
-1f, 0.5325f, 0.245f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2875f;
break;
case joaat("casco"):
*uParam2={
0f, 0.94f, 1.03f 
};
*uParam3={
0f, -0.03f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("enduro"):
*uParam2={
0f, -0.17f, 1f 
};
*uParam3={
0f, 0.34f, -0.786f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("gburrito2"):
*uParam2={
0f, 2.32f, 0.94f 
};
*uParam3={
0f, -0.182f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("guardian"):
*uParam2={
-1.94f, 1.07f, 0.38f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("kuruma"):
case joaat("kuruma2"):
*uParam2={
-1f, 0.2475f, -0.175f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.435f;
break;
case joaat("lectro"):
*uParam2={
0f, 0.3f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.09f;
break;
case joaat("feltzer3"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.597f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("osiris"):
*uParam2={
-1f, 0.27f, -0.03f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("virgo"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("windsor"):
*uParam2={
-1.2f, -0.39f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.55f;
break;
case joaat("brawler"):
*uParam2={
-1f, -0.21f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("chino"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("coquette3"):
*uParam2={
-1f, -0.1775f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("t20"):
*uParam2={
-1f, 0.4f, -0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("vindicator"):
*uParam2={
-1f, 0.21f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("faction"):
*uParam2={
-1f, 0f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("faction2"):
*uParam2={
-1f, 0f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buccaneer2"):
*uParam2={
0f, 2.01f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("chino2"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("moonbeam"):
*uParam2={
0f, 1.713f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("moonbeam2"):
*uParam2={
0f, 1.713f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("primo2"):
*uParam2={
-1f, 0.42f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("voodoo"):
*uParam2={
-1.12f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("faction3"):
*uParam2={
-1f, 0f, 0.5f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sabregt2"):
*uParam2={
-1f, 0f, 0.14f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.015f 
};
*uParam5=0.35f;
break;
case joaat("tornado5"):
*uParam2={
-1f, 0.15f, -0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("virgo2"):
*uParam2={
-1f, 0f, 0.1225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("virgo3"):
*uParam2={
-1f, 0f, 0.1225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("minivan2"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan3"):
*uParam2={
-1f, 0.275f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("btype2"):
*uParam2={
-1f, -0.1f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("lurcher"):
*uParam2={
-1f, 0f, 0.3f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("baller3"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller4"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller5"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller6"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cog55"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cog552"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cognoscenti"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cognoscenti2"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("mamba"):
*uParam2={
-1f, -0.18f, 0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("nightshade"):
*uParam2={
-1f, -0.2f, 0.17f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("schafter3"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter4"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter5"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter6"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("verlierer2"):
*uParam2={
-1f, -0.21f, 0.03f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tampa"):
*uParam2={
-1f, 0f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("banshee2"):
*uParam2={
-1f, -0.4f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sultanrs"):
*uParam2={
0f, 1.77f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("btype3"):
*uParam2={
-1f, -0.1f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bestiagts"):
*uParam2={
-1f, -0.06f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("seven70"):
*uParam2={
-1f, -0.21f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fmj"):
*uParam2={
-1f, -0.06f, 0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("pfister811"):
*uParam2={
-1f, 0.06f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("prototipo"):
*uParam2={
-1f, 0.3f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("reaper"):
*uParam2={
-1f, 0.48f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rumpo3"):
*uParam2={
0f, 2.103f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("windsor2"):
*uParam2={
-1.2f, 0.03f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.55f;
break;
case joaat("xls"):
*uParam2={
-1f, 0.36f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("xls2"):
*uParam2={
-1f, 0.36f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("brioso"):
*uParam2={
-1f, -0.06f, 0.565f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("contender"):
*uParam2={
0f, 2.33f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("le7b"):
*uParam2={
-1f, -0.12f, 0.235f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("omnis"):
*uParam2={
-1f, 0.03f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("tropos"):
*uParam2={
-1f, 0f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("avarus"):
*uParam2={
-1f, 0.27f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("daemon2"):
*uParam2={
-1f, 0.27f, 0.29f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("defiler"):
*uParam2={
-1f, 0f, 0.34f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.125f;
break;
case joaat("esskey"):
*uParam2={
-1f, 0.335f, 0.31f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.09f;
break;
case joaat("hakuchou2"):
*uParam2={
0f, 0.27f, 0.845f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("nightblade"):
*uParam2={
0f, -0.133f, 0.61f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.125f;
break;
case joaat("ratbike"):
*uParam2={
-1f, 0.31f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("shotaro"):
*uParam2={
-1f, 0.06f, 0.325f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("zombiea"):
*uParam2={
-1f, 0.3f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("zombieb"):
*uParam2={
-1f, 0.2f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("vortex"):
*uParam2={
-1f, 0.18f, 0.37f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.095f;
break;
case joaat("tornado6"):
*uParam2={
-1f, -0.03f, -0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("youga2"):
*uParam2={
0f, 2.352f, 0.253f 
};
*uParam3={
0f, -1f, -0.256f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.175f;
break;
case joaat("wolfsbane"):
*uParam2={
-1f, 0.33f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("faggio3"):
*uParam2={
-1f, -0.54f, -0.11f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("faggio"):
*uParam2={
-0.9875f, -0.0175f, -0.01f 
};
*uParam3={
0.8975f, -0.26f, -0.0725f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1625f;
break;
case joaat("comet3"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("diablous"):
*uParam2={
-1f, 0.006f, 0.382f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("diablous2"):
*uParam2={
-1f, 0.225f, 0.541f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("elegy"):
*uParam2={
0f, 1.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fcr"):
*uParam2={
-1f, 0.234f, 0.376f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("fcr2"):
*uParam2={
-1f, 0.234f, 0.376f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("italigtb"):
*uParam2={
-1f, -0.024f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("italigtb2"):
*uParam2={
-1f, -0.024f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("nero"):
*uParam2={
-1f, 0.237f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("nero2"):
*uParam2={
-1f, 0.237f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("penetrator"):
*uParam2={
-1f, 0.153f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("ruiner2"):
*uParam2={
0.363f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("ruiner3"):
*uParam2={
0.363f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("specter"):
*uParam2={
-1f, -0.273f, -0.02f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("specter2"):
*uParam2={
-1f, -0.273f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("technical2"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tempesta"):
*uParam2={
-1f, 0f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("voltic2"):
*uParam2={
0f, 1.763f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("infernus2"):
*uParam2={
-1f, 0.33f, 0.06f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.06f 
};
*uParam5=0.2f;
break;
case joaat("ruston"):
*uParam2={
-1f, -0.273f, 0.084f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("turismo2"):
*uParam2={
-1f, 0.159f, -0.193f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("ardent"):
*uParam2={
-1f, 0.309f, 0.276f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("cheetah2"):
*uParam2={
-1f, 0.159f, -0.127f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("halftrack"):
*uParam2={
-1f, 0.501f, 0.531f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("nightshark"):
*uParam2={
-1.5f, 0.42f, 0.584f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("oppressor"):
*uParam2={
-1f, 0.306f, 0.355f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.08f;
break;
case joaat("tampa3"):
*uParam2={
0f, 1.515f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.275f;
break;
case joaat("technical3"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.43f;
break;
case joaat("torero"):
*uParam2={
-1f, 0.201f, 0.114f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("vagner"):
*uParam2={
-1.5f, 0.906f, 0.071f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("xa21"):
*uParam2={
-1f, 0.441f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("phantom3"):
*uParam2={
-1.3f, 2.045f, 0.802f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("hauler2"):
*uParam2={
-1.627f, 2.456f, 0.745f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cyclone"):
*uParam2={
-1f, 0.186f, 0.382f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("visione"):
*uParam2={
-1f, 0.432f, 0.031f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("vigilante"):
*uParam2={
-1f, 0.232f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.175f;
break;
case joaat("retinue"):
*uParam2={
-1f, -0.018f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rapidgt3"):
*uParam2={
0f, 1.972f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("avenger"):
case -426933872:
*uParam2={
-2.02f, 6.45f, -0.716f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("deluxo"):
*uParam2={
-1f, -0.291f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("stromberg"):
*uParam2={
-1f, 0.23f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("riot2"):
*uParam2={
-1.891f, 2.144f, 0.657f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("chernobog"):
*uParam2={
-2.127f, 5.413f, 1.132f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.34f;
break;
case joaat("khanjali"):
*uParam2={
-0.897f, 1.391f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("barrage"):
*uParam2={
-1.51f, 0.71f, 0.451f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("comet4"):
*uParam2={
-1f, 0.298f, 0.257f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.36f;
break;
case joaat("neon"):
*uParam2={
-1f, 0.181f, -0.066f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("streiter"):
*uParam2={
-1f, 0.301f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sentinel3"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("yosemite"):
*uParam2={
-1f, 0.252f, 0.201f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("sc1"):
*uParam2={
-1f, 0.616f, -0.131f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("autarch"):
*uParam2={
-1f, 0f, 0.116f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("gt500"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("hustler"):
*uParam2={
-1f, -0.228f, 0.321f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("revolter"):
*uParam2={
-1f, 0.203f, 0.126f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("pariah"):
*uParam2={
-1f, -0.126f, 0.208f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("raiden"):
*uParam2={
-1f, 0.252f, -0.095f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("savestra"):
*uParam2={
-1f, 0f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("riata"):
*uParam2={
-1.3f, 0.18f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("hermes"):
*uParam2={
-1f, -0.134f, 0.158f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("comet5"):
*uParam2={
-1f, 0.002f, 0.031f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("z190"):
*uParam2={
-1f, -0.175f, 0.242f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("viseris"):
*uParam2={
-1f, 0f, 0.244f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.275f;
break;
case joaat("kamacho"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("gb200"):
*uParam2={
-1f, 0f, 0.407f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.225f;
break;
case joaat("fagaloa"):
*uParam2={
-1f, 0f, 0.225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("ellie"):
*uParam2={
-1f, 0.441f, -0.128f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi3"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("michelli"):
*uParam2={
-1f, 0f, 0.0805f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("flashgt"):
*uParam2={
0f, 1.592f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case joaat("hotring"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tezeract"):
*uParam2={
-1f, 0.679f, 0.514f 
};
*uParam3={
1f, 0f, -0.75f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.175f;
break;
case joaat("tyrant"):
*uParam2={
-1.588f, 0.315f, 0.337f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("dominator3"):
*uParam2={
-1f, 0f, 0.221f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("taipan"):
*uParam2={
-1f, 0f, 0.219f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("entity2"):
*uParam2={
-1.52f, 0.41f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester3"):
*uParam2={
-1f, 0f, 0.297f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("cheburek"):
*uParam2={
-1f, 0.393f, 0.162f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("caracara"):
*uParam2={
-1f, 1.266f, 0.4115f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("speedo4"):
case -44799464:
*uParam2={
-1.5f, 0.833f, 0.391f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("mule4"):
*uParam2={
-1.125f, 2.691f, 0.318f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("pounder2"):
*uParam2={
-1.5f, 1.853f, 0.779f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.38f;
break;
case joaat("swinger"):
*uParam2={
-1f, 0.195f, 0.105f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("menacer"):
*uParam2={
-1.73f, 0.159f, 0.61f 
};
*uParam3={
1f, 0.12f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("scramjet"):
*uParam2={
-1f, -0.188f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("patriot2"):
*uParam2={
-1.213f, 1.546f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("stafford"):
*uParam2={
-1f, 0.036f, 0.096f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("freecrawler"):
*uParam2={
-1f, 0.249f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("oppressor2"):
*uParam2={
-1f, 0.306f, 0.355f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.08f;
break;
case joaat("terbyte"):
*uParam2={
-1.73f, 3.397f, 0.724f 
};
*uParam3={
1f, 0.12f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("bruiser"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("bruiser2"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("bruiser3"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("brutus"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("brutus2"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("brutus3"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("cerberus"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cerberus2"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cerberus3"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("clique"):
*uParam2={
-1f, 0.167f, 0.159f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("deveste"):
*uParam2={
-1.5f, 1.066f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("deviant"):
*uParam2={
-1f, 0.111f, 0.123f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("dominator4"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dominator5"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dominator6"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("impaler"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler2"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler3"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler4"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("imperator"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("imperator2"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("imperator3"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi4"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi5"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi6"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("italigto"):
*uParam2={
-1f, -0.091f, 0.207f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("monster3"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("monster4"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("monster5"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("schlagen"):
*uParam2={
-1f, -0.105f, 0.262f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("slamvan4"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan5"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan6"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("toros"):
*uParam2={
-1f, 0.415f, 0.394f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tulip"):
*uParam2={
-1f, 0.171f, 0.223f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vamos"):
*uParam2={
-1f, 0f, 0.163f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("zr380"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zr3802"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zr3803"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("caracara2"):
*uParam2={
-1f, 0.687f, 0.4115f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("drafter"):
*uParam2={
-1.045f, 0.15f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dynasty"):
*uParam2={
-1f, 0.12f, 0.334f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("emerus"):
*uParam2={
-1f, 0.372f, 0.439f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("gauntlet3"):
*uParam2={
-1f, 0f, 0.222f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.33f;
break;
case joaat("gauntlet4"):
*uParam2={
-1f, 0f, 0.222f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.33f;
break;
case joaat("hellion"):
*uParam2={
-1f, 0.27f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi7"):
*uParam2={
-1f, 0.195f, -0.063f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("jugular"):
*uParam2={
-1f, 0.213f, 0.213f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("krieger"):
*uParam2={
-1f, 0.576f, -0.123f 
};
*uParam3={
0.997f, -0.105f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("locust"):
*uParam2={
-1f, -0.207f, 0.042f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("nebula"):
*uParam2={
-1f, 0.012f, 0.147f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("neo"):
*uParam2={
-1f, 0.216f, 0.216f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("novak"):
*uParam2={
-1f, 0.24f, 0.255f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("paragon"):
*uParam2={
-1f, 0f, 0.156f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("paragon2"):
*uParam2={
-1f, 0f, 0.156f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("peyote2"):
*uParam2={
-1f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("s80"):
*uParam2={
-1f, 0.357f, 0.256f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("thrax"):
*uParam2={
-1f, 0.426f, 0.339f 
};
*uParam3={
1f, 0.06f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("zion3"):
*uParam2={
-1f, 0.108f, 0.234f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("zorrusso"):
*uParam2={
-1f, 0.273f, -0.06f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("slamvan2"):
*uParam2={
-1f, 0.35f, 0.456f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("rebla"):
*uParam2={
0f, 1.9002f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("asbo"):
*uParam2={
-1f, 0.104f, 0.339f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("sugoi"):
*uParam2={
-1f, 0.104f, 0.223f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("komoda"):
*uParam2={
-1f, 0.104f, 0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("vstr"):
*uParam2={
-1f, 0.104f, 0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sultan2"):
*uParam2={
-1f, 0.313f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("kanjo"):
*uParam2={
-1f, 0.313f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("jb7002"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("yosemite2"):
*uParam2={
-1f, 0.252f, 0.201f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("retinue2"):
*uParam2={
-1f, -0.018f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("furia"):
*uParam2={
-1f, 0.0965f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("everon"):
*uParam2={
0f, 2.019f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("imorgon"):
*uParam2={
-1.5f, 0.42f, -0.2f 
};
*uParam3={
1f, -0.0997f, 0.0415f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zhaba"):
*uParam2={
-1.202f, 0.034f, 0.6635f 
};
*uParam3={
1f, -0.002f, 0f 
};
*uParam4={
0f, -0.7398f, 0f 
};
*uParam5=0.4f;
break;
case joaat("gauntlet5"):
*uParam2={
-1.5f, 0.379f, 0.297f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.24f;
break;
case joaat("dukes3"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("manana2"):
*uParam2={
-1.76f, 0.105f, 0.009f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.22f;
break;
case joaat("club"):
*uParam2={
0f, 1.252f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.31f;
break;
case joaat("glendale2"):
*uParam2={
0f, 2.135f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.205f;
break;
case joaat("youga3"):
*uParam2={
0f, 2.352f, 0.3f 
};
*uParam3={
0f, -1f, -0.256f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.135f;
break;
case joaat("yosemite3"):
*uParam2={
-1f, 0.252f, 0.203f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.21f;
break;
case joaat("seminole2"):
*uParam2={
0f, 1.654f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case joaat("penumbra2"):
*uParam2={
-1.08f, 0.28f, -0.093f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("landstalker2"):
*uParam2={
-1.64f, 0.7f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("coquette4"):
*uParam2={
-1f, -0.021f, 0.273f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("tigon"):
*uParam2={
-1f, 0.156f, 0.099f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("peyote3"):
*uParam2={
-1.5f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("brioso2"):
*uParam2={
-1f, 0.275f, 0.215f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("slamtruck"):
*uParam2={
-1f, 1.454f, 0.485f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("italirsx"):
*uParam2={
-1f, 0.109f, 0.129f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("toreador"):
*uParam2={
-1f, 0.194f, 0.342f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("weevil"):
*uParam2={
-1f, 0.111f, 0.168f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("zr350"):
*uParam2={
0f, 1.632f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.19f;
break;
case joaat("calico"):
*uParam2={
-1f, 0.497f, 0.212f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester4"):
*uParam2={
-1f, 0f, 0.181f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("comet6"):
*uParam2={
-1f, 0.205f, 0.074f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("warrener2"):
*uParam2={
-1f, 0.408f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("remus"):
*uParam2={
-1f, 0.204f, 0.357f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vectre"):
*uParam2={
-1f, 0.249f, 0.164f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("dominator7"):
*uParam2={
-1f, 0.253f, 0.142f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("cypher"):
*uParam2={
-1f, 0.223f, 0.185f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("rt3000"):
*uParam2={
-1f, 0f, 0.189f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("sultan3"):
*uParam2={
-1f, 0.42f, 0.309f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.23f;
break;
case joaat("tailgater2"):
*uParam2={
-1f, 0.337f, 0.283f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("previon"):
*uParam2={
-1f, 0.14f, -0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("dominator8"):
*uParam2={
-1f, 0.153f, -0.006f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("futo2"):
*uParam2={
-1f, 0.318f, -0.013f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("euros"):
*uParam2={
-1f, 0.101f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("growler"):
*uParam2={
-1f, 0.151f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("cinquemila"):
*uParam2={
-1f, 0.533f, 0.197f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("champion"):
*uParam2={
-1f, 0.076f, 0.122f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("granger2"):
*uParam2={
-1f, 0.461f, 0.264f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("deity"):
*uParam2={
-1f, 0.279f, 0.235f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("buffalo4"):
*uParam2={
-1f, 0.251f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("baller7"):
*uParam2={
-1.194f, 0.182f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("zeno"):
*uParam2={
-1.194f, 0.409f, 0.199f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.22f;
break;
case joaat("comet7"):
*uParam2={
-1f, 0.05f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("astron"):
*uParam2={
-1f, 0.249f, 0.39f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("patriot3"):
*uParam2={
-1.2f, 0.474f, 0.335f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.23f;
break;
case joaat("jubilee"):
*uParam2={
-1.037f, 0.438f, 0.31f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("shinobi"):
*uParam2={
0f, 0.306f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.045f;
break;
case joaat("reever"):
*uParam2={
-1f, 0.292f, 0.29f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("iwagen"):
*uParam2={
-1f, 0.387f, 0.209f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("brioso3"):
*uParam2={
-1f, 0.15f, 0.2f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("corsita"):
*uParam2={
-1f, 0.1f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("greenwood"):
*uParam2={
-1f, 0.2f, 0.138f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("kanjosj"):
*uParam2={
-1f, 0.1f, 0.26f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("postlude"):
*uParam2={
-1f, 0f, 0.28f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rhinehart"):
*uParam2={
0f, 1.317f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("tenf"):
*uParam2={
-1f, 0.74f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("tenf2"):
*uParam2={
-1f, 0.74f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("torero2"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("vigero2"):
*uParam2={
-1f, -0.07f, 0.3f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("weevil2"):
*uParam2={
-1f, 0.07f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("draugur"):
*uParam2={
-1f, 0.5f, 0.48f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("ruiner4"):
*uParam2={
-1f, 0.5f, 0.182f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("sentinel4"):
*uParam2={
-1f, 0.147f, 0.239f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sm722"):
*uParam2={
-1f, -0.4f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("omnisegt"):
*uParam2={
0f, 1.462f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("powersurge"):
*uParam2={
-1f, 0.3f, 0.37f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("entity3"):
*uParam2={
-1f, 0.5f, 0.225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("manchez3"):
*uParam2={
-1f, 0.066f, 0.329f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("surfer3"):
*uParam2={
-1f, 1.19f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("boor"):
*uParam2={
-1f, 0.25f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("eudora"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.7f;
break;
case joaat("tulip2"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("r300"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("virtue"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi8"):
*uParam2={
-1f, 0.3f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("broadway"):
*uParam2={
-1f, -0.4f, 0.375f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("panthere"):
*uParam2={
-1f, 0.069f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("tahoma"):
*uParam2={
-1f, -0.253f, 0.39f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("everon2"):
*uParam2={
-1f, 0.101f, 0.227f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.6f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case -1763675285:
*uParam2={
-1f, 0.2f, 0.43f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case -654498607:
*uParam2={
-0.003f, 2.764f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case 1336514315:
*uParam2={
-1.5f, 0.4f, 0.1f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.24f;
break;
case 1447690049:
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case 165968051:
*uParam2={
0f, 1.5f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case -536105557:
*uParam2={
-1f, 0.128f, 0.212f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.42f;
break;
case -979292575:
*uParam2={
-1f, 0.088f, 0.438f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case 610429990:
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case 802856453:
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
}
return 1;
}


bool func_93(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_94(){
Global_1950733=0;
Global_1950733.f_1={
0f, 0f, 0f 
};
Global_1950733.f_4={
0f, 0f, 0f 
};
Global_1950733.f_7={
0f, 0f, 0f 
};
Global_1950733.f_10=0f;
Global_1950733.f_11=0f;
Global_1950733.f_12=0;
Global_1950733.f_13=0;
Global_1950733.f_14={
0f, 0f, 0f 
};
Global_1950733.f_17={
0f, 0f, 0f 
};
Global_1950733.f_20={
0f, 0f, 0f 
};
Global_1950733.f_23=0;
Global_1950733.f_24=0;
}

int func_95(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_96(iParam0)){
return 1;
}}
return 0;
}

int func_96(int iParam0){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
return MISC::IS_BIT_SET(uVar0, 16);
}}}
return 0;
}

int func_97(int iParam0, var uParam1){
int iVar0;
bool bVar1;
int iVar2;
if(NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
iVar0=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
}else{
iVar0=func_31();
}
bVar1=false;
if(iVar0==PLAYER::PLAYER_ID()){
if(func_109(15, 0)){
bVar1=true;
}elseif(func_105(1)){
bVar1=true;
}}else{
bVar1=true;
}
if(((!bVar1 && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) && ((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))){
iVar2=Global_2359296[func_104() /*5568*/].f_681.f_2;
if(iVar2 > -1 && iVar2 < 415){
if(MISC::IS_BIT_SET(Global_1586488[iVar2 /*142*/].f_103, 8)){
bVar1=true;
}}}
if(((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0==func_31()) || !func_672(iVar0, 0, 0)) || !bVar1) || func_98(iParam0)){
return 0;
}
return 1;
}

int func_98(int iParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
if(func_100(PLAYER::PLAYER_ID())==3){
if(func_99(iParam0) !=-1){
return 1;
}}
if(Global_1950758){
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("sanchez"):
case joaat("sanchez2"):
case joaat("blazer"):
case joaat("blazer3"):
case joaat("surfer"):
case joaat("surfer2"):
case joaat("bifta"):
case joaat("sovereign"):
case joaat("hexer"):
case joaat("dune"):
case joaat("dune2"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("insurgent"):
case joaat("insurgent2"):
case joaat("blista3"):
case joaat("stalion2"):
case joaat("gauntlet2"):
case joaat("dominator2"):
case joaat("buffalo3"):
case joaat("massacro2"):
case joaat("jester2"):
case joaat("omnis"):
case joaat("bf400"):
case joaat("tropos"):
case joaat("brioso"):
case joaat("trophytruck"):
case joaat("trophytruck2"):
case joaat("cliffhanger"):
case joaat("tampa2"):
case joaat("gargoyle"):
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
case joaat("le7b"):
case joaat("tyrus"):
case joaat("lynx"):
case joaat("sheava"):
case joaat("chimera"):
case joaat("sanctus"):
case joaat("blazer4"):
case joaat("manchez"):
case joaat("raptor"):
case joaat("blazer5"):
case joaat("stryder"):
case joaat("formula"):
case joaat("formula2"):
case joaat("minitank"):
case joaat("outlaw"):
case joaat("vagrant"):
case joaat("openwheel1"):
case joaat("openwheel2"):
case joaat("manchez2"):
case joaat("squaddie"):
case joaat("winky"):
case joaat("veto"):
case joaat("veto2"):
case joaat("verus"):
case joaat("lm87"):
return 1;
break;
case joaat("youga"):
case joaat("youga2"):
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 7) !=-1){
return 1;
}
break;
case joaat("surano"):
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 5)==1){
return 1;
}
break;
case joaat("gp1"):
return 1;
break;
case joaat("apc"):
case joaat("dune3"):
case joaat("insurgent3"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("phantom3"):
case joaat("hauler2"):
return 1;
break;
case joaat("thruster"):
return 1;
break;
case joaat("terbyte"):
return 1;
break;
case joaat("rcbandito"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("rrocket"):
case joaat("blazer2"):
case joaat("burrito2"):
case joaat("ignus"):
case joaat("draugur"):
case joaat("brickade2"):
case joaat("journey2"):
case -654498607:
case 1447690049:
return 1;
break;
case joaat("club"):
if((VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==7){
return 1;
}
break;
case joaat("yosemite3"):
if((VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==6){
return 1;
}
break;
}
return 0;
}

int func_99(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_100(int iParam0){
if(func_103(iParam0)==233){
return func_101(iParam0);
}
return -1;
}

int func_101(int iParam0){
if(func_102(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_102(int iParam0, int iParam1){
if(func_34(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_103(int iParam0){
if(func_34(iParam0)){
if(func_102(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_104(){
int iVar0;
iVar0=0;
return iVar0;
}


bool func_105(bool bParam0){
return func_106(PLAYER::PLAYER_ID(), bParam0);
}

int func_106(int iParam0, bool bParam1){
return func_107(iParam0, bParam1, 1);
}

int func_107(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_34(iParam0)){
return 0;
}
if(!bParam1){
if(func_108(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_31() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_108(int iParam0, int iParam1){
if(func_34(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_31()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}

int func_109(int iParam0, bool bParam1){
var uVar0;
int iVar1;
if(bParam1){
if(iParam0==15){
return 1;
}}
if(func_114(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return 1;
break;
}}
uVar0=func_111(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_110(iVar1));
}

int func_110(int iParam0){
return (iParam0 % 32);
}


var func__111(int iParam0){
var uVar0;
uVar0=func_80(func_112(iParam0), -1);
return uVar0;
}

int func_112(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_113(iVar0);
switch (iVar1){
case 0:
return 1291;
break;
}
return 1291;
}

int func_113(int iParam0){
return (iParam0 / 32);
}

int func_114(int iParam0){
if(iParam0 !=func_31()){
if(func_115(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_115(int iParam0){
if(iParam0 !=func_31()){
if(func_672(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_116(Global_2657704[iParam0 /*463*/].f_321.f_7)==22;
}}}
return 0;
}

int func_116(int iParam0){
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


void func_117(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_119(iParam1);
func_118(iVar1, &uVar0);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uVar0);
}


bool func_118(int iParam0, var uParam1){
*uParam1=-1;
switch (iParam0){
case 0:
*uParam1=4;
break;
case 1:
*uParam1=5;
break;
case 2:
*uParam1=6;
break;
case 3:
*uParam1=7;
break;
case 4:
*uParam1=111;
break;
case 5:
*uParam1=112;
break;
case 6:
*uParam1=107;
break;
case 7:
*uParam1=104;
break;
case 8:
*uParam1=98;
break;
case 9:
*uParam1=100;
break;
case 10:
*uParam1=102;
break;
case 11:
*uParam1=99;
break;
case 12:
*uParam1=105;
break;
case 13:
*uParam1=106;
break;
case 14:
*uParam1=37;
break;
case 15:
*uParam1=90;
break;
case 16:
*uParam1=88;
break;
case 17:
*uParam1=89;
break;
case 18:
*uParam1=91;
break;
case 19:
*uParam1=38;
break;
case 20:
*uParam1=138;
break;
case 21:
*uParam1=36;
break;
case 22:
*uParam1=27;
break;
case 23:
*uParam1=28;
break;
case 24:
*uParam1=29;
break;
case 25:
*uParam1=150;
break;
case 26:
*uParam1=30;
break;
case 27:
*uParam1=31;
break;
case 28:
*uParam1=32;
break;
case 29:
*uParam1=35;
break;
case 30:
*uParam1=135;
break;
case 31:
*uParam1=137;
break;
case 32:
*uParam1=136;
break;
case 33:
*uParam1=71;
break;
case 34:
*uParam1=145;
break;
case 35:
*uParam1=63;
break;
case 36:
*uParam1=64;
break;
case 37:
*uParam1=65;
break;
case 38:
*uParam1=66;
break;
case 39:
*uParam1=67;
break;
case 40:
*uParam1=68;
break;
case 41:
*uParam1=69;
break;
case 42:
*uParam1=73;
break;
case 43:
*uParam1=70;
break;
case 44:
*uParam1=74;
break;
case 45:
*uParam1=51;
break;
case 46:
*uParam1=53;
break;
case 47:
*uParam1=54;
break;
case 48:
*uParam1=92;
break;
}
return *uParam1 !=-1;
}

int func_119(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return 36;
case 2:
return 35;
case 3:
return 46;
case 4:
return 48;
case 5:
return 16;
case 6:
return 14;
case 7:
return 19;
case 8:
return 22;
case 9:
return 31;
case 10:
return 30;
case 11:
return 33;
case 12:
return 34;
default:
}
return 0;
}

int func_120(int iParam0, int iParam1, int iParam2){
if((iParam0==222 && iParam1==222) && iParam2==255){
return 0;
}
if((iParam0==2 && iParam1==21) && iParam2==255){
return 1;
}
if((iParam0==3 && iParam1==83) && iParam2==255){
return 2;
}
if((iParam0==0 && iParam1==255) && iParam2==140){
return 3;
}
if((iParam0==94 && iParam1==255) && iParam2==1){
return 4;
}
if((iParam0==255 && iParam1==255) && iParam2==0){
return 5;
}
if((iParam0==255 && iParam1==150) && iParam2==5){
return 6;
}
if((iParam0==255 && iParam1==62) && iParam2==0){
return 7;
}
if((iParam0==255 && iParam1==1) && iParam2==1){
return 8;
}
if((iParam0==255 && iParam1==50) && iParam2==100){
return 9;
}
if((iParam0==255 && iParam1==5) && iParam2==190){
return 10;
}
if((iParam0==35 && iParam1==1) && iParam2==255){
return 11;
}
if((iParam0==15 && iParam1==3) && iParam2==255){
return 12;
}
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_121()) && Global_1576219){
if((iParam0==Global_1576220 && iParam1==Global_1576221) && iParam2==Global_1576222){
return 13;
}}
return 0;
}

int func_121(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_122() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_122(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_123(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("deathbike2"):
return 1;
break;
}
return 0;
}


bool func_124(int iParam0, var uParam1){
*uParam1=-1f;
switch (iParam0){
case joaat("dune5"):
*uParam1=1f;
break;
case joaat("boxville5"):
*uParam1=1f;
break;
case joaat("wastelander"):
*uParam1=1f;
break;
case joaat("alphaz1"):
*uParam1=0.2f;
break;
case joaat("bombushka"):
*uParam1=0.15f;
break;
case joaat("howard"):
*uParam1=0.3f;
break;
case joaat("hunter"):
*uParam1=0.5f;
break;
case joaat("microlight"):
*uParam1=0.3f;
break;
case joaat("mogul"):
*uParam1=0.4f;
break;
case joaat("molotok"):
*uParam1=0.3f;
break;
case joaat("nokota"):
*uParam1=0.4f;
break;
case joaat("pyro"):
*uParam1=0.4f;
break;
case joaat("rogue"):
*uParam1=0.4f;
break;
case joaat("seabreeze"):
*uParam1=0.3f;
break;
case joaat("starling"):
*uParam1=0.5f;
break;
case joaat("tula"):
*uParam1=0.15f;
break;
case joaat("khanjali"):
*uParam1=0.6f;
break;
case joaat("bruiser"):
*uParam1=1f;
break;
case joaat("bruiser2"):
*uParam1=1f;
break;
case joaat("bruiser3"):
*uParam1=1f;
break;
case joaat("brutus"):
*uParam1=1f;
break;
case joaat("brutus2"):
*uParam1=1f;
break;
case joaat("brutus3"):
*uParam1=1f;
break;
case joaat("cerberus"):
*uParam1=1f;
break;
case joaat("cerberus2"):
*uParam1=1f;
break;
case joaat("cerberus3"):
*uParam1=1f;
break;
case joaat("deathbike"):
*uParam1=1f;
break;
case joaat("deathbike2"):
*uParam1=1f;
break;
case joaat("deathbike3"):
*uParam1=1f;
break;
case joaat("dominator4"):
*uParam1=1f;
break;
case joaat("dominator5"):
*uParam1=1f;
break;
case joaat("dominator6"):
*uParam1=1f;
break;
case joaat("impaler2"):
*uParam1=1f;
break;
case joaat("impaler3"):
*uParam1=1f;
break;
case joaat("impaler4"):
*uParam1=1f;
break;
case joaat("imperator"):
*uParam1=1f;
break;
case joaat("imperator2"):
*uParam1=1f;
break;
case joaat("imperator3"):
*uParam1=1f;
break;
case joaat("issi4"):
*uParam1=1f;
break;
case joaat("issi5"):
*uParam1=1f;
break;
case joaat("issi6"):
*uParam1=1f;
break;
case joaat("monster3"):
*uParam1=1f;
break;
case joaat("monster4"):
*uParam1=1f;
break;
case joaat("monster5"):
*uParam1=1f;
break;
case joaat("scarab"):
*uParam1=1f;
break;
case joaat("scarab2"):
*uParam1=1f;
break;
case joaat("scarab3"):
*uParam1=1f;
break;
case joaat("slamvan4"):
*uParam1=1f;
break;
case joaat("slamvan5"):
*uParam1=1f;
break;
case joaat("slamvan6"):
*uParam1=1f;
break;
case joaat("zr380"):
*uParam1=1f;
break;
case joaat("zr3802"):
*uParam1=1f;
break;
case joaat("zr3803"):
*uParam1=1f;
break;
}
return *uParam1 !=-1f;
}

int func_125(int iParam0){
switch (iParam0){
case joaat("deity"):
case joaat("granger2"):
case joaat("buffalo4"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("champion"):
case joaat("greenwood"):
case joaat("omnisegt"):
case joaat("virtue"):
case joaat("r300"):
case 1447690049:
case 165968051:
case 610429990:
case 802856453:
return 1;
break;
}
return 0;
}


void func_126(int iParam0, var uParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(uParam1->f_66 !=0){
}
if(!func_149(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_148(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_148(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_148(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_148(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_148(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_148(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_148(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_148(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_148(iVar6));
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
if(func_146(uParam1->f_5) || func_146(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_145(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_144()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_143(uParam1->f_66)){
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
func_142(iParam0, uParam1->f_69);
}}else{
func_142(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_134(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_148(iVar7 + 1))){
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
if((((func_128() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_127(1))){
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

int func_127(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}

int func_128(){
if((((Global_4718592.f_108230==6 || Global_4718592.f_108230==7) || Global_4718592.f_108230==18) || Global_4718592.f_108230==19) && Global_4718592.f_2==20){
return 0;
}
if(func_132(7)){
if(func_130(Global_2672524.f_4.f_16) || func_129(Global_2672524.f_4.f_16)){
return 0;
}}
return 1;
}

int func_129(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890739[iVar0 /*138*/].f_77.f_60 !=0;
}
return 0;
}

int func_130(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_131(iParam0, 9);
}
return 0;
}


var func__131(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


bool func_132(int iParam0){
return func_133(&(Global_2672524.f_184), iParam0);
}


var func__133(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_134(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
}elseif(iVar1==22){
if((*uParam1)[iVar0] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
if((*uParam1)[iVar0]==1){
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
}else{
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
}}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) !=((*uParam1)[iVar0] - 1)){
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
if((*uParam1)[iVar0] > 0){
if(iVar1==23){
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
}elseif(iVar1==24){
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
}elseif(func_140(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_139(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_137(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_137(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_136(iParam0);
if(func_135(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_135(int iParam0){
int iVar0;
int iVar1;
int iVar2;
char cVar3[32];
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
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


void func_136(var uParam0){
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

int func_137(int iParam0, int iParam1){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
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
iVar0=func_138(iParam0, 38) + 1;
iVar1=func_138(iParam0, 24) + 1;
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

int func_138(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152698)) && Global_152699==iParam1){
return Global_152700;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_140(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_139(int iParam0, int iParam1){
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
if(!Global_262145.f_14909){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14910){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14908){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14911){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14913){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14912){
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
if(Global_262145.f_19321){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19323){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19327){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19324){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19331){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19329){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19334){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21280){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21281){
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

int func_140(int iParam0, int iParam1, int iParam2){
if(!func_141() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_141(){
return 0;
}


void func_142(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
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

int func_143(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


var func__144(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_145(int iParam0){
var uVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(uVar0, 4);
}}}
return 0;
}

int func_146(int iParam0){
if(!func_141() && func_147(iParam0)){
return 1;
}
return 0;
}

int func_147(int iParam0){
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

int func_148(int iParam0){
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

int func_149(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_150(PLAYER::PLAYER_ID(), -1)){
iParam0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
if(func_100(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_99(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_150(int iParam0, int iParam1){
int iVar0;
if(func_672(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}
struct<103> func_151(){
struct<103> Var0;
Var0.f_9=49;
Var0.f_59=2;
Var0.f_78=-1;
Var0.f_79=-1;
Var0.f_96=-1;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_100=-1;
switch (Local_117.f_0){
case 0:
Var0.f_66=func_303();
StringCopy(&(Var0.f_1), "DIAMOND1", 16);
Var0.f_0=4;
Var0.f_5=111;
Var0.f_7=112;
Var0.f_8=156;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_98=0;
Var0.f_65=1;
Var0.f_62=255;
Var0.f_63=255;
Var0.f_64=255;
Var0.f_74=255;
Var0.f_76=255;
MISC::SET_BIT(&(Var0.f_77), false);
MISC::SET_BIT(&(Var0.f_77), 26);
MISC::SET_BIT(&(Var0.f_77), 9);
Var0.f_9[22]=1;
break;
case 1:
Var0.f_66=func_303();
StringCopy(&(Var0.f_1), "DIAMOND2", 16);
Var0.f_0=1;
Var0.f_8=156;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_98=0;
Var0.f_65=1;
Var0.f_62=255;
Var0.f_63=255;
Var0.f_64=255;
Var0.f_74=255;
Var0.f_76=255;
MISC::SET_BIT(&(Var0.f_77), false);
MISC::SET_BIT(&(Var0.f_77), 26);
MISC::SET_BIT(&(Var0.f_77), 9);
Var0.f_9[22]=1;
break;
}
return Var0;
}


void func_152(int iParam0){
if(!Global_262145.f_4712){
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
}}

int func_153(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
func_154(Param2, fParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_154(struct<3> Param0, float fParam1, int iParam2, int iParam3){
int iVar0;
if(func_155(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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
Global_2635560.f_3026[1 /*6*/].f_3=fParam1;
Global_2635560.f_3026[1 /*6*/].f_4=iParam2;
Global_2635560.f_3026[1 /*6*/].f_5=iParam3;
}}

int func_155(int iParam0, struct<3> Param1, int iParam2){
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

int func_156(){
if(func_652(0)){
return 1;
}
switch (func_5()){
case 0:
if(func_158(Local_117.f_1, &(Local_117.f_1), &(Local_117.f_4))){
func_157(0);
return 1;
}
break;
case 1:
Local_117.f_1={
917.7092f, 50.4298f, 50f 
};
func_157(0);
return 1;
}
return 0;
}


void func_157(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(uLocal_109[iVar0]), iVar1);
}

int func_158(struct<3> Param0, var uParam1, float fParam2){
struct<31> Var0;
Var0.f_4=1125515264;
Var0.f_5=1;
Var0.f_6=1;
Var0.f_8=1082130432;
Var0.f_9=1176255488;
Var0.f_10=1;
Var0.f_13=1;
Var0.f_15=2;
Var0.f_22=2;
Var0.f_25=1;
Var0.f_26=1;
Var0.f_29=1123024896;
Var0.f_30=1;
Var0.f_0=func_302();
Var0.f_4=1000f;
Var0.f_27=1;
if(func_5()==1){
Var0.f_25=0;
Var0.f_26=0;
if(!func_652(7)){
func_299();
func_157(7);
}}
if(func_160(Param0, 0f, 0f, 0f, func_303(), 1, uParam1, fParam2, &Var0)){
if(func_652(7)){
func_159();
}
return 1;
}
return 0;
}


void func_159(){
int iVar0;
struct<4> Var1;
iVar0=0;
while (iVar0 < 101){
Global_2635560.f_1855[iVar0 /*4*/]={
Var1 
};
iVar0++;
}
Global_2635560.f_1854=0;
}

int func_160(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6){
bool bVar0;
int iVar1;
float fVar2;
float fVar3;
float fVar4;
struct<61> Var5;
struct<61> Var6;
bVar0=false;
if(uParam6->f_14){
if(uParam6->f_25){
uParam6->f_25=0;
}}
if(!func_296()){
return 0;
}
if(func_295() && !Global_2635560.f_680==MISC::GET_FRAME_COUNT()){
if(!Global_2635560.f_676==0){
Global_2635560.f_676=0;
func_294();
func_159();
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_675){
if(!Global_2635560.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_679) < func_293(0)){
return 0;
}else{
Global_2635560.f_676=0;
}}}else{
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_677) > 30000){
Global_2635560.f_676=0;
}
if(!Global_2635560.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_679) > func_293(1)){
Global_2635560.f_676=0;
}}}
if(uParam6->f_6){
if(func_287(Param0)){
if(func_286(&Param0, 1)){
}}}
if(!Global_2635560.f_676==0){
if(vdist(Global_2635560.f_695, Param0) > 50f){
return 0;
}
if(Global_2635560.f_698 !=iParam2){
return 0;
}}
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
if(Global_2635560.f_676==0){
Global_2635560.f_682=0;
Global_2635560.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635560.f_675=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635560.f_695={
Param0 
};
Global_2635560.f_698=iParam2;
Global_2635560.f_681=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_285();
func_294();
if(!uParam6->f_27 || (((((((((func_284(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2794162.f_942) && !Global_2794162.f_930) && !Global_2794162.f_938) && !Global_2794162.f_943) && !Global_2794162.f_960) && !Global_2794162.f_972) && !Global_2794162.f_944) && !Global_2794162.f_994)){
func_264(Param0, iParam2);
}
if(func_250(Param0)){
func_264(Param0, iParam2);
}
Global_2635560.f_676=2;
}
switch (Global_2635560.f_676){
case 2:
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f))){
Global_2635560.f_683={
Param0 
};
Global_2635560.f_686=0f;
if(Global_2794162.f_942){
fVar2=10f;
fVar3=5f;
fVar4=5f;
}else{
fVar2=4f;
fVar3=1f;
fVar4=1f;
}
if(((uParam6->f_3 && func_245(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_243(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0)){
Global_2635560.f_683={
Param0 
};
Global_2635560.f_686=*uParam5;
}else{
Var5.f_6=1082130432;
Var5.f_7=1176255488;
Var5.f_8=1;
Var5.f_10=1;
Var5.f_13=1;
Var5.f_15=1;
Var5.f_16=1;
Var5.f_31=1;
Var5.f_34=joaat("tailgater");
Var5.f_38=2;
Var5.f_45=2;
Var5.f_49=1123024896;
Var5.f_53=999;
Var5.f_54=1176256410;
Var5.f_55=1;
Var5.f_56=1;
Var5.f_57=1;
Var5.f_9=iParam3;
Var5.f_3=7f;
Var5.f_10=uParam6->f_5;
Var5.f_4=*uParam6;
Var5.f_13=uParam6->f_1;
Var5.f_14=uParam6->f_2;
Var5.f_5=uParam6->f_4;
Var5.f_15=uParam6->f_6;
Var5.f_11=uParam6->f_7;
Var5.f_6=uParam6->f_8;
Var5.f_7=uParam6->f_9;
Var5.f_16=uParam6->f_10;
Var5.f_17=uParam6->f_11;
Var5={
Param1 
};
Var5.f_12=1;
Var5.f_34=iParam2;
Var5.f_31=uParam6->f_13;
if(uParam6->f_32 && Global_2635560.f_682 > 0){
Var5.f_30=0;
Var5.f_29=1;
}else{
Var5.f_30=uParam6->f_30;
Var5.f_29=uParam6->f_31;
}
Var5.f_48=uParam6->f_14;
Var5.f_56=uParam6->f_25;
Var5.f_57=uParam6->f_26;
Var5.f_49=uParam6->f_29;
Var5.f_59=uParam6->f_33;
Var5.f_60=uParam6->f_34;
iVar1=0;
while (iVar1 < 2){
Var5.f_38[iVar1 /*3*/]={
uParam6->f_15[iVar1 /*3*/] 
};
Var5.f_45[iVar1]=uParam6->f_22[iVar1];
iVar1++;
}
func_187(&(Global_2635560.f_683), &(Global_2635560.f_686), &Var5);
}
func_185(Global_2635560.f_683, Global_2635560.f_686, iParam2, &(Global_2635560.f_673));
Global_2635560.f_671=0;
Global_2635560.f_672=0;
Global_2635560.f_682++;
Global_2635560.f_678=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635560.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635560.f_676=3;
}
break;
case 3:
if(Global_2635560.f_671){
if(Global_2635560.f_673==Global_2635560.f_674){
if(Global_2635560.f_672){
if(uParam6->f_12 && !uParam6->f_11){
if(func_184(Global_2635560.f_683, Global_2635560.f_686, iParam2, 1, 1036831949)){
Global_2635560.f_676=4;
Global_2635560.f_700=NETWORK::GET_NETWORK_TIME_ACCURATE();
}else{
bVar0=true;
}
}
else{
bVar0=true;
}}else{
func_182(Global_2635560.f_683, 0);
func_181(-1);
}}else{
Global_2635560.f_671=0;
Global_2635560.f_672=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_678) > 3000){
func_181(-1);
}
break;
case 4:
if(uParam6->f_12 && !uParam6->f_11){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_700) < 10000){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635560.f_699)){
if(NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635560.f_699)){
if(!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635560.f_699)){
if(func_180(Global_2635560.f_683, Global_2635560.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || func_162(Global_2635560.f_683, Global_2635560.f_686, iParam2, 1, 0, 0, 0, 1, 0)){
func_182(Global_2635560.f_683, 0);
func_181(-1);
}else{
bVar0=true;
}}else{
func_182(Global_2635560.f_683, 0);
func_181(-1);
}
}}else{
func_181(-1);
}}else{
func_181(1);
}}else{
bVar0=true;
}
break;
case 5:
Global_2635560.f_683={
Param0 
};
Global_2635560.f_686=0f;
Var6.f_6=1082130432;
Var6.f_7=1176255488;
Var6.f_8=1;
Var6.f_10=1;
Var6.f_13=1;
Var6.f_15=1;
Var6.f_16=1;
Var6.f_31=1;
Var6.f_34=joaat("tailgater");
Var6.f_38=2;
Var6.f_45=2;
Var6.f_49=1123024896;
Var6.f_53=999;
Var6.f_54=1176256410;
Var6.f_55=1;
Var6.f_56=1;
Var6.f_57=1;
Var6.f_9=iParam3;
Var6.f_3=3.5f;
Var6.f_10=uParam6->f_5;
Var6.f_4=*uParam6;
Var6.f_12=1;
Var6.f_13=0;
Var6.f_15=uParam6->f_6;
Var6.f_11=uParam6->f_7;
Var6.f_6=uParam6->f_8;
Var6.f_7=uParam6->f_9;
Var6={
Param1 
};
Var6.f_34=iParam2;
Var6.f_31=uParam6->f_13;
Var6.f_30=1;
Var6.f_48=uParam6->f_14;
Var6.f_56=uParam6->f_25;
Var6.f_57=uParam6->f_26;
Var6.f_30=uParam6->f_30;
Var6.f_29=uParam6->f_31;
Var6.f_59=uParam6->f_33;
Var6.f_60=uParam6->f_34;
iVar1=0;
while (iVar1 < 2){
Var6.f_38[iVar1 /*3*/]={
uParam6->f_15[iVar1 /*3*/] 
};
Var6.f_45[iVar1]=uParam6->f_22[iVar1];
iVar1++;
}
Var6.f_49=uParam6->f_29;
func_187(&(Global_2635560.f_683), &(Global_2635560.f_686), &Var6);
Global_2635560.f_676=6;
break;
case 6:
bVar0=true;
break;
}
Global_2635560.f_695={
Param0 
};
Global_2635560.f_698=iParam2;
Global_2635560.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
if(bVar0){
Global_2635560.f_516=0;
*uParam4={
Global_2635560.f_683 
};
*uParam5=Global_2635560.f_686;
func_161(1);
return 1;
}
return 0;
}


void func_161(bool bParam0){
Global_2635560.f_676=0;
func_285();
func_294();
if(bParam0){
func_159();
}}

int func_162(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
int iVar4;
struct<3> Var5;
float fVar6;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam7==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam7==0){
if(func_672(iVar1, bParam3, bParam4)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_179(iVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_174(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
fVar2=0.1f;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0)){
iVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
iVar4=ENTITY::GET_ENTITY_MODEL(iVar3);
Var5={
ENTITY::GET_ENTITY_COORDS(iVar3, 0) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(iVar3);
if(func_173(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_163(func_172(iVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_163(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_171(iParam3, 1008981770)){
func_164(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_164(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_170(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_165(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
Var3={
Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) 
};
Var3.f_2=(Var3.f_2 - ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
Var4={
Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) 
};
Var4.f_2=(Var4.f_2 + ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
*uParam3={
Var3 
};
*uParam4={
Var4 
};
*uParam5=MISC::ABSF((Var2.f_0 - Var1.f_0));
}


void func_165(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_168(iParam0);
if(iVar0 !=0){
func_166(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
return;
}}
if(vmag(*uParam1) <=0.01f || vmag(*uParam2) <=0.01f){
if(iParam0==joaat("kosatka")){
if(fParam4 < 20.7f){
fParam4=20.7f;
}
if(fParam3 < 137.2f){
fParam3=137.2f;
}
if(fParam5 < 21.1f){
fParam5=21.1f;
}}
*uParam1=(0f - (fParam4 * 0.5f));
*uParam2=(0f + (fParam4 * 0.5f));
uParam1->f_1=(0f - (fParam3 * 0.5f));
uParam2->f_1=(0f + (fParam3 * 0.5f));
uParam1->f_2=(0f - (fParam5 * 0.5f));
uParam2->f_2=(0f + (fParam5 * 0.5f));
}}


void func_166(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_167(iParam0, &Global_1578013);
iVar0=0;
while (iVar0 < 2){
if(STREAMING::IS_MODEL_VALID(Global_1578013[iVar0])){
MISC::GET_MODEL_DIMENSIONS(Global_1578013[iVar0], &(Global_1578017[iVar0 /*3*/]), &(Global_1578024[iVar0 /*3*/]));
}
if(vmag(Global_1578017[iVar0 /*3*/]) <=0.01f || vmag(Global_1578024[iVar0 /*3*/]) <=0.01f){
Global_1578017[iVar0 /*3*/]=(0f - (fParam4 * 0.5f));
Global_1578024[iVar0 /*3*/]=(0f + (fParam4 * 0.5f));
Global_1578017[iVar0 /*3*/].f_1=(0f - (fParam3 * 0.5f));
Global_1578024[iVar0 /*3*/].f_1=(0f + (fParam3 * 0.5f));
Global_1578017[iVar0 /*3*/].f_2=(0f - (fParam5 * 0.5f));
Global_1578024[iVar0 /*3*/].f_2=(0f + (fParam5 * 0.5f));
}
Global_1578031[iVar0]=(Global_1578024[iVar0 /*3*/] - Global_1578017[iVar0 /*3*/]);
Global_1578034[iVar0]=(Global_1578024[iVar0 /*3*/].f_1 - Global_1578017[iVar0 /*3*/].f_1);
Global_1578037[iVar0]=(Global_1578024[iVar0 /*3*/].f_2 - Global_1578017[iVar0 /*3*/].f_2);
if(Global_1578031[iVar0] > Global_1578040){
Global_1578040=Global_1578031[iVar0];
}
if(Global_1578037[iVar0] > Global_1578041){
Global_1578041=Global_1578037[iVar0];
}
iVar0++;
}
Global_1578042=(Global_1578040 * -0.5f);
Global_1578045=(Global_1578040 * 0.5f);
Global_1578042.f_1=((((0.5f * Global_1578034[0]) + Global_1578034[1]) + Global_1578013.f_3) * -1f);
Global_1578045.f_1=(0.5f * Global_1578034[0]);
Global_1578042.f_2=(Global_1578037[0] * -0.5f);
Global_1578045.f_2=(Global_1578037[0] * 0.5f);
*uParam1={
Global_1578042 
};
*uParam2={
Global_1578045 
};
}


void func_167(int iParam0, var uParam1){
switch (iParam0){
case 1:
(*uParam1)[0]=joaat("hauler2");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 2:
(*uParam1)[0]=joaat("phantom3");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 3:
(*uParam1)[0]=joaat("nightshark");
(*uParam1)[1]=joaat("trailersmall2");
uParam1->f_3=0.5f;
break;
}}

int func_168(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_169(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_169(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


void func_170(var uParam0, struct<3> Param1){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=cos(Param1.f_0);
fVar1=sin(Param1.f_0);
Var2.f_0=*uParam0;
Var2.f_1=((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
Var2.f_2=((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
*uParam0={
Var2 
};
fVar0=cos(Param1.f_1);
fVar1=sin(Param1.f_1);
Var2.f_0=((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
Var2.f_1=uParam0->f_1;
Var2.f_2=((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
*uParam0={
Var2 
};
fVar0=cos(Param1.f_2);
fVar1=sin(Param1.f_2);
Var2.f_0=((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
Var2.f_1=((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
Var2.f_2=uParam0->f_2;
*uParam0={
Var2 
};
}


float func_171(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_165(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}


Vector3 func__172(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_173(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_163(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_164(Param0, fParam1, iParam2, &Global_1982109, &(Global_1982109.f_3), &(Global_1982109.f_6), 1036831949);
func_164(Param3, fParam4, iParam5, &(Global_1982109.f_7), &(Global_1982109.f_10), &(Global_1982109.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1982109, Global_1982109.f_3, Global_1982109.f_6, Global_1982109.f_7, Global_1982109.f_10, Global_1982109.f_13)){
return 1;
}
return 0;
}

int func_174(int iParam0){
if(func_178(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764376={
func_177(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764376)){
return 1;
}
if(func_175(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_175(int iParam0, int iParam1){
int iVar0;
iVar0=func_176(iParam0);
if(func_34(iVar0)){
if(iVar0==func_176(iParam1)){
return 1;
}}
return 0;
}

int func_176(int iParam0){
if(func_34(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_31();
}
struct<13> func_177(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
return Var0;
}

int func_178(int iParam0, var uParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_177(iParam0) 
};
Global_2764389={
func_177(uParam1) 
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

int func_179(int iParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255){
return 1;
}
return 0;
}

int func_180(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar1=iVar0;
if(func_672(iVar1, 0, 1) && func_672(iParam3, 0, 1)){
if(Global_2648711.f_261[iVar0]){
if(func_163(Global_2648711.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_163(func_172(iVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648711.f_261[iVar0]){
if(func_163(Global_2648711.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_672(iVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(func_163(func_172(iVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_181(int iParam0){
if(Global_2635560.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_681) < 30000){
if(iParam0==-1 || (iParam0 > -1 && Global_2635560.f_682 < iParam0)){
Global_2635560.f_676=2;
}else{
Global_2635560.f_676=5;
}}else{
Global_2635560.f_676=5;
}}


void func_182(struct<3> Param0, int iParam1){
struct<3> Var0;
if(iParam1==0 && func_183(Param0, 0.01f)){
return;
}
if(iParam1 < 30 && vmag(Param0) > 0f){
Var0={
Global_2635560.f_2837[iParam1 /*3*/] 
};
Global_2635560.f_2837[iParam1 /*3*/]={
Param0 
};
func_182(Var0, iParam1 + 1);
}}

int func_183(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if(vdist(Param0, Global_2635560.f_2837[iVar0 /*3*/]) < fParam1){
return 1;
}
iVar0++;
}
return 0;
}

int func_184(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
var uVar2;
int iVar3;
float fVar4;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return 0;
}else{
func_294();
iVar3=0;
while (iVar3 < 3){
if(Global_2635560.f_687[iVar3]==-1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_164(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
if(bParam3){
fVar4=MISC::ABSF((Var0.f_2 - Var1.f_2));
Var0.f_2=(Var0.f_2 + ((fVar4 * 0.5f) - 2f));
Var1.f_2=(Var1.f_2 + (fVar4 * 0.5f));
}
Global_2635560.f_687[iVar3]=NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(Var0, Var1, fParam4);
Global_2635560.f_691[iVar3]=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635560.f_699=Global_2635560.f_687[iVar3];
return 1;
}
iVar3++;
}}
return 0;
}


void func_185(struct<3> Param0, var uParam1, int iParam2, var uParam3){
struct<8> Var0;
*uParam3=func_186(&Param0, &uParam1, &iParam2);
Var0.f_0=323285304;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_5=uParam1;
Var0.f_6=iParam2;
Var0.f_7=*uParam3;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_73(1, 1));
}


var func__186(var uParam0, var uParam1, var uParam2){
char cVar0[64];
var uVar1;
StringCopy(&cVar0, "", 64);
StringIntConCat(&cVar0, round(*uParam0), 64);
StringIntConCat(&cVar0, round(uParam0->f_1), 64);
StringIntConCat(&cVar0, round(uParam0->f_2), 64);
StringIntConCat(&cVar0, round(*uParam1), 64);
StringIntConCat(&cVar0, *uParam2, 64);
uVar1=MISC::GET_HASH_KEY(&cVar0);
return uVar1;
}


void func_187(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635560.f_1854 > 0){
iVar0=0;
while (func_238(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_188(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_188(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<3> Var1;
float fVar2;
int iVar3;
var uVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
bool bVar9;
bool bVar10;
float fVar11;
float fVar12;
int iVar13;
int iVar14;
int iVar15;
bool bVar16;
int iVar17;
bool bVar18;
int iVar19;
float fVar20;
int iVar21;
int iVar22;
float fVar23;
int iVar24;
struct<3> Var25;
var uVar26;
struct<3> Var27;
float fVar28;
bool bVar29;
iVar0=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_234(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_229(uParam0, 1)){
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
iVar3=0;
iVar8=1;
if(uParam2->f_11){
iVar3 +=2;
iVar3++;
iVar8=0;
}elseif(uParam2->f_10==0 || (uParam2->f_33 > 0 && uParam2->f_16)){
iVar3++;
iVar8=0;
}
iVar3 +=4;
fVar11=3f;
fVar12=5f;
switch (uParam2->f_33){
case 0:
fVar11=3f;
fVar12=5f;
break;
case 1:
fVar11=2.75f;
fVar12=7.5f;
break;
default:
fVar11=2.5f;
fVar12=10f;
break;
}
iVar13=0;
Global_2643228.f_162=0;
Global_2643228.f_163=0;
Global_2643228.f_164=-99;
Global_2643228.f_165={
0f, 0f, 0f 
};
iVar14=0;
while (iVar14 < 40){
Global_2643228[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar14]=0f;
iVar14++;
}
iVar15=1;
if(func_168(uParam2->f_34) !=0){
iVar15=3;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
uParam2->f_18=0;
}
while (true){
iVar6=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6)){
PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
bVar10=false;
if(Global_2643228.f_164==iVar6){
bVar10=true;
}
Global_2643228.f_165={
Var1 
};
if(((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6)){
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
if(vdist(Var1, uParam2->f_35) > uParam2->f_4){
if(!func_222(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_219(Var1)){
Var1={
func_214(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_213(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_209(Var1, uParam2)){
if((uParam2->f_48 && !func_229(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_208(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_234(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar17=uParam2->f_31;
bVar18=true;
iVar19=1;
fVar20=uParam2->f_49;
if(!uParam2->f_55){
iVar17=0;
bVar18=false;
iVar19=0;
fVar20=1f;
}
elseif(uParam2->f_17){
iVar17=0;
bVar18=false;
iVar19=0;
if(uParam2->f_33==1){
fVar20=(fVar20 * 0.375f);
}
}
else{
bVar18=true;
iVar19=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar20=(fVar20 * 0.375f);
}
}
}
iVar21=0;
if(!func_207(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_245(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_245(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_162(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_197(Var1, uParam2->f_54, &fVar23);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar22 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar22 < uParam2->f_53){
iVar14=0;
while (iVar14 < Global_2643228.f_162){
Global_2643228[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar14]=0f;
iVar14++;
}
Global_2643228.f_162=0;
uParam2->f_53=iVar22;
}
}
if(uParam2->f_30){
if(Global_2643228.f_162==0){
Global_2643228[0 /*3*/]={
Var1 
};
Global_2643228.f_121[0]=fVar2;
}
else{
iVar14=0;
while (iVar14 < Global_2643228.f_162 + 1){
if(iVar14 < 40){
if(vdist2(Var1, uParam2->f_35) < vdist2(Global_2643228[iVar14 /*3*/], uParam2->f_35)){
func_196(Var1, fVar2, iVar14);
iVar14=Global_2643228.f_162 + 1;
}
}
iVar14++;
}
}
Global_2643228.f_162++;
if(Global_2643228.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643228.f_162==40){
iVar0=100;
}
}
}
else{
Global_2643228[Global_2643228.f_162 /*3*/]={
Var1 
};
Global_2643228.f_121[Global_2643228.f_162]=fVar2;
Global_2643228.f_162++;
if(func_209(Var1, uParam2)){
Global_2643228.f_163++;
}
if(Global_2643228.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643228.f_162==40){
iVar0=100;
}
}
}
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar2;
return 1;
}
}
elseif(bVar16){
iVar0++;
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar2;
return 1;
}
}
}
else{
iVar13++;
}
}
else{
iVar0=100;
}
}
}
else{
iVar0++;
}
}
elseif(!uParam2->f_32){
iVar0=100;
}
}
else{
iVar0++;
}}else{
iVar0++;
}}
}
}
else{
iVar0++;
}}}else{
iVar0++;
}
}
else{
iVar0++;
}}else{
iVar13++;
}}else{
iVar13++;
}}
iVar0++;
if(iVar0 >=(40 + iVar13) || iVar0 >=100){
if(Global_2643228.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >=2)){
if(uParam2->f_30){
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}else{
if(Global_2643228.f_163 > 0 && !Global_2643228.f_163==Global_2643228.f_162){
func_194(0, uParam2);
}
iVar24=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643228.f_162);
if(uParam2->f_18 && uParam2->f_30){
iVar24=0;
}
Var25={
Global_2643228[0 /*3*/] 
};
uVar26=Global_2643228.f_121[0];
Global_2643228[0 /*3*/]={
Global_2643228[iVar24 /*3*/] 
};
Global_2643228.f_121[0]=Global_2643228.f_121[iVar24];
Global_2643228[iVar24 /*3*/]={
Var25 
};
Global_2643228.f_121[iVar24]=uVar26;
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_193(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
Var27={
Var1 
};
fVar28=fVar2;
if(!uParam2->f_50){
bVar29=true;
}
else{
bVar29=false;
}
if(func_234(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_229(&Var27, bVar29)){
if(!uParam2->f_50){
uParam2->f_33=0;
uParam2->f_50=1;
*uParam0={
Var27 
};
*uParam1=fVar28;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
return 0;
}else{
*uParam0={
Var27 
};
*uParam1=fVar28;
return 1;
}
}
else{
*uParam0={
Var27 
};
*uParam1=fVar28;
return 1;
}}}}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_189(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643228.f_164=iVar6;
}
return 0;
}


void func_189(var uParam0, var uParam1, var uParam2, struct<3> Param3){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=1E+09f;
iVar3=-1;
iVar2=0;
while (iVar2 < *uParam0){
fVar1=vdist(*(uParam0[iVar2 /*4*/]), Param3);
if(fVar1 < fVar0){
if(!func_190(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
fVar0=fVar1;
iVar3=iVar2;
}}
iVar2++;
}
if(!iVar3==-1){
*uParam1={
*(uParam0[iVar3 /*4*/]) 
};
*uParam2=(uParam0[iVar3 /*4*/])->f_3;
}}

int func_190(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
if(func_192(Param0, fParam1, iParam2, iParam3, 0) || func_191(Param0, iParam2, iParam4)){
return 1;
}
return 0;
}

int func_191(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam1==iVar0 || iParam2==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(!Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==0){
if(func_163(Param0, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
if(func_672(iVar2, 0, 1) && func_672(iParam1, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_192(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam2==iVar0 || iParam3==1){
iVar1=iVar0;
bVar2=false;
if(bParam4){
if(func_672(iVar1, 0, 1) && func_672(iParam2, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(iParam2)){
bVar2=true;
}}}
if(!bVar2){
if(func_672(iVar1, 0, 1) && func_672(iParam2, 0, 1)){
if(Global_2648711.f_261[iVar0]){
if(vdist(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(vdist(func_172(iVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648711.f_261[iVar0]){
if(vdist(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_672(iVar1, 0, 1)){
if(vdist(func_172(iVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_193(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_214(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_219(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_194(int iParam0, var uParam1){
if(!func_209(Global_2643228[iParam0 /*3*/], uParam1)){
Global_2643228.f_162=(Global_2643228.f_162 - 1);
func_195(iParam0);
if(Global_2643228.f_162 > Global_2643228.f_163){
func_194(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_194(iParam0 + 1, uParam1);
}}


void func_195(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643228[iParam0 /*3*/]={
Global_2643228[iParam0 + 1 /*3*/] 
};
Global_2643228.f_121[iParam0]=Global_2643228.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_196(struct<3> Param0, float fParam1, int iParam2){
struct<3> Var0;
var uVar1;
Var0={
Global_2643228[iParam2 /*3*/] 
};
uVar1=Global_2643228.f_121[iParam2];
Global_2643228[iParam2 /*3*/]={
Param0 
};
Global_2643228.f_121[iParam2]=fParam1;
if(iParam2 <=Global_2643228.f_162 && iParam2 < 39){
if(vmag(Var0) > 0f){
func_196(Var0, uVar1, iParam2 + 1);
}}}

int func_197(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
struct<3> Var1;
int iVar2;
int iVar3;
float fVar4;
float fVar5;
fVar4=99999.9f;
iVar0=0;
while (iVar0 < 32){
iVar3=iVar0;
if(func_198(iVar3)){
Var1={
func_172(iVar3) 
};
fVar5=vdist(Param0, Var1);
if(fVar5 < fParam1){
if(fVar5 < fVar4){
fVar4=fVar5;
}
iVar2++;
}}
iVar0++;
}
*fParam2=fVar4;
return iVar2;
}

int func_198(int iParam0){
if(func_672(iParam0, 0, 1)){
if(!func_205(iParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0)){
if(!PLAYER::GET_PLAYER_TEAM(iParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_202(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_199(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_202(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_174(iParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_199(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_200(iParam0, bVar0, iParam1, bVar1) || !func_200(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_200(iParam0, bVar0, iParam1, bVar1) || !func_200(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_200(iParam0, bVar0, iParam1, bVar1) || !func_200(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_200(iParam0, bVar0, iParam1, bVar1) || !func_200(iParam1, bVar1, iParam0, bVar0)){
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

int func_200(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
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
if(((!func_672(iVar1, 1, 1) || func_74(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_201(iVar1)){
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


var func__201(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

int func_202(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_203(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_203(int iParam0){
return func_204(iParam0);
}


var func__204(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_205(int iParam0){
if(func_74(iParam0, 0)){
return 1;
}
if(func_206()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_206(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_207(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
float fVar4;
iVar0=1;
iVar0 +=2;
iVar0 +=4;
iVar0 +=8;
iVar0 +=16;
iVar0 +=32;
iVar0 +=64;
iVar0=(iVar0 + 131076);
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_173(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
iVar0 +=4096;
iVar0 +=8192;
iVar0 +=16384;
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_173(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_208(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5){
if(func_180(Param0, fParam1, iParam2, iParam3, iParam4) || func_243(Param0, fParam1, iParam2, iParam3, iParam5)){
return 1;
}
return 0;
}

int func_209(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_212(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_210(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
return 1;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1)){
return 1;
}
break;
}
return 0;
}
return 1;
}

int func_210(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_211(&Param1, &Param2);
if(((!Param0.f_0 >=Param1.f_0 || !Param0.f_1 >=Param1.f_1) || !Param0.f_0 <=Param2.f_0) || !Param0.f_1 <=Param2.f_1){
return 0;
}
if(bParam3 && bParam4){
return 1;
}elseif(bParam3){
if(Param0.f_2 >=Param1.f_2){
return 1;
}}elseif(bParam4){
if(Param0.f_2 <=Param2.f_2){
return 1;
}}elseif(Param0.f_2 >=Param1.f_2 && Param0.f_2 <=Param2.f_2){
return 1;
}
return 0;
}


void func_211(var uParam0, var uParam1){
var uVar0;
if(*uParam0 > *uParam1){
uVar0=*uParam1;
*uParam1=*uParam0;
*uParam0=uVar0;
}
if(uParam0->f_1 > uParam1->f_1){
uVar0=uParam1->f_1;
uParam1->f_1=uParam0->f_1;
uParam0->f_1=uVar0;
}
if(uParam0->f_2 > uParam1->f_2){
uVar0=uParam1->f_2;
uParam1->f_2=uParam0->f_2;
uParam0->f_2=uVar0;
}}


bool func_212(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
if(bParam3 && bParam4){
Param0.f_2=0f;
Param1.f_2=0f;
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}elseif(bParam3){
if(Param0.f_2 > Param1.f_2){
Param0.f_2=Param1.f_2;
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}elseif(bParam4){
if(Param0.f_2 < Param1.f_2){
Param0.f_2=Param1.f_2;
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}

int func_213(struct<3> Param0, float fParam1){
int iVar0;
if(func_202(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_42750 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_42750){
if(Global_4980736.f_42751[iVar0 /*160*/].f_7 !=0){
if(func_163(Param0, Global_4980736.f_42751[iVar0 /*160*/], Global_4980736.f_42751[iVar0 /*160*/].f_6, Global_4980736.f_42751[iVar0 /*160*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_6201 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_6201){
if(Global_4980736.f_6204[iVar0 /*546*/].f_15 !=0){
if(func_163(Param0, Global_4980736.f_6204[iVar0 /*546*/], Global_4980736.f_6204[iVar0 /*546*/].f_3, Global_4980736.f_6204[iVar0 /*546*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_91870 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_91870){
if(Global_4980736.f_91874[iVar0 /*529*/].f_12 !=0){
if(func_163(Param0, Global_4980736.f_91874[iVar0 /*529*/], Global_4980736.f_91874[iVar0 /*529*/].f_3, Global_4980736.f_91874[iVar0 /*529*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058071.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058071.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058071.f_233[iVar0], 0)){
if(func_163(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058071.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058071.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058071.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058071.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058071.f_119[iVar0], 0)){
if(func_163(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058071.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058071.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}


Vector3 func__214(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
struct<3> Var0;
var uVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
float fVar6;
float fVar7;
bool bVar8;
bool bVar9;
float fVar10;
struct<3> Var11;
struct<3> Var12;
struct<3> Var13;
if(bParam11){
if(vmag(Param4) > 0f){
if(!func_217(Param0, *uParam1, Param4)){
*uParam1=(*uParam1 + 180f);
}}
return Param0;
}
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
if(uVar2 & 1024==0 && !bParam6){
PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
if(iVar4==iVar5){
*uParam8=1;
}
if(bParam10){
if(!uVar2 & 128==0){
return 0f, 0f, 0f;
}
if(!uVar2 & 256==0){
return 0f, 0f, 0f;
}
if(!uVar2 & 512==0){
return 0f, 0f, 0f;
}
if((iVar4 + iVar5) !=iParam2){
return 0f, 0f, 0f;
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_216(Param0)){
return 0f, 0f, 0f;
}}
if(iParam9 && *uParam8){
*uParam1=(*uParam1 + 180f);
if(*uParam1 > 360f){
*uParam1=(*uParam1 + -360f);
}}
if(*uParam1 <=90f || *uParam1 > 270f){
bVar8=true;
}else{
bVar8=false;
}
bVar9=false;
if(bVar8){
if(iVar4==0){
if(bParam10){
return 0f, 0f, 0f;
}}elseif(iParam2==iVar4){
bVar9=true;
}}elseif(iVar5==0){
if(bParam10){
return 0f, 0f, 0f;
}}elseif(iParam2==iVar5){
bVar9=true;
}
if(fVar6 < 0f){
fVar7=0f;
}else{
if(bVar8){
if(bVar9){
fVar7=(4.2f * (to_float(iVar4) * 0.5f));
}else{
fVar7=(4.2f * to_float(iVar4));
}
if(bVar9){
if(iVar4 > 2){
fVar7=(fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
}}elseif(iVar4 > 1){
fVar7=(fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
}}else{
if(bVar9){
fVar7=(4.2f * (to_float(iVar5) * 0.5f));
}else{
fVar7=(4.2f * to_float(iVar5));
}
if(bVar9){
if(iVar5 > 2){
fVar7=(fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
}}elseif(iVar5 > 1){
fVar7=(fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
}}
if(!uVar2 & 64==0){
fVar7=(fVar7 + (0.95f * fVar6));
}
if(!uVar2 & 4==0 || !uVar2 & 8==0){
fVar7=(fVar7 + -0.5f);
}
if((!uVar2 & 32==0 && uVar2 & 4==0) && uVar2 & 8==0){
fVar7=(fVar7 + -1f);
}
if(!bParam3 || !uVar2 & 8==0){
fVar7=(fVar7 + (4.2f * -0.5f));
}
if(!iParam7==0){
if(uVar2 & 8 !=0){
fVar10=func_215(iParam7, 3.5f);
}else{
fVar10=func_215(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_217(Param0, *uParam1, Param4)){
if((bParam3 || uParam12) || ((uVar2 & 1024 !=0 || Param0.f_2==0f) && bParam6)){
*uParam1=(*uParam1 + 180f);
}elseif(bParam10){
return 0f, 0f, 0f;
}}}
if(fVar7 < 0f){
fVar7=0f;
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *uParam1, fVar7, 0f, 0f) 
};
if(bParam3){
if(PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *uParam1, &Var11)){
Var12={
Var11 - Param0 
};
if(!iParam7==0){
Var13={
Var12 / FtoV(vmag(Var12)) 
};
if(uVar2 & 8 !=0){
fVar10=func_215(iParam7, 3.5f);
}else{
fVar10=func_215(iParam7, 1.5f);
}
Var13={
Var13 * FtoV((fVar10 * 0.5f)) 
};
Var12={
Var12 - Var13 
};
Var11={
Param0 + Var12 
};
}
Var13={
Var0 - Var11 
};
Var0={
Var11 
};
}}
return Var0;
}


float func_215(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_165(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_216(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_217(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_170(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_218(Var1, Var0) >=0f){
return 1;
}
return 0;
}


float func_218(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_219(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_221(Param0);
iVar0=0;
while (iVar0 < Global_2642935[iVar1]){
if(func_220(Param0, &(Global_2642232[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642935[8]){
if(func_220(Param0, &(Global_2642232[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_220(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_221(struct<2> Param0, var uParam1){
if(Param0.f_1 > Global_2642223[0]){
return 0;
}
if(Param0.f_1 > Global_2642223[1]){
if(Param0.f_0 < Global_2642227[0]){
return 1;
}else{
return 2;
}}
if(Param0.f_1 > Global_2642223[2]){
if(Param0.f_0 < Global_2642227[1]){
return 3;
}elseif(Param0.f_0 < Global_2642227[2]){
return 4;
}elseif(Param0.f_0 < Global_2642227[3]){
return 5;
}else{
return 6;
}}
return 7;
}

int func_222(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_228(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_227(&Var1, Global_2635560.f_593, Global_2635560.f_596, 1036831949, 0, fVar2);
if(func_223(Var1, &uVar0) || func_228(Var1)){
Var1={
*uParam0 
};
func_227(&Var1, Global_2635560.f_593, Global_2635560.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_223(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_226()){
return 0;
}
iVar1=func_225();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635560.f_368[iVar0 /*12*/].f_9==1){
if(func_224(Param0, &(Global_2635560.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_224(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_212(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_210(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
break;
case 2:
if(bParam3 && bParam4){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
}elseif(bParam3){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2)){
return 1;
}else{
return 0;
}}elseif(bParam4){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2)){
return 1;
}else{
return 0;
}}else{
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}
break;
}
return 0;
}

int func_225(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 10){
if(Global_2635560.f_368[iVar0 /*12*/].f_9){
iVar1++;
}
iVar0++;
}
return iVar1;
}


bool func_226(){
return Global_1950844.f_529;
}


void func_227(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
struct<3> Var0;
struct<3> Var1;
Var0={
*uParam0 - Param1 
};
Var0.f_2=0f;
if(vmag(Var0) > 0f){
Var0={
Var0 / FtoV(vmag(Var0)) 
};
}else{
Var0={
0f, 1f, 0f 
};
if(fParam5==0f){
func_170(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_170(&Var0, 0f, 0f, fParam5);
}}
Var0={
Var0 * FtoV((fParam2 + fParam3)) 
};
if(!bParam4){
Var1={
Param1 + Var0 
};
}else{
Var1={
Param1 - Var0 
};
}
*uParam0=Var1.f_0;
uParam0->f_1=Var1.f_1;
}

int func_228(struct<3> Param0){
float fVar0;
if(Global_2635560.f_596 > 0f){
fVar0=vdist(Param0, Global_2635560.f_593);
if(fVar0 < Global_2635560.f_596){
return 1;
}}
return 0;
}


bool func_229(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635560.f_26.f_18){
switch (Global_2635560.f_26.f_17){
case 0:
if(func_212(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_210(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, 0, 0)){
bVar0=true;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, Global_2635560.f_26.f_16, 0, 1)){
bVar0=true;
}
break;
}
if(bVar0){
if(bParam1){
*uParam0={
func_230(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, Global_2635560.f_26.f_16, Global_2635560.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}


Vector3 func__230(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_227(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_233(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_231(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_212(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_210(Var1, Param1, Param2, 0, 0)){
return Var1;
}
break;
case 2:
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, 0, 1)){
return Var1;
}
break;
}
iVar0++;
}
return Param0;
}


void func_231(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
struct<3> Var4;
struct<3> Var5;
float fVar6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
struct<3> Var11;
Var0={
Param2 - Param1 
};
Var0.f_2=0f;
Var1={
*uParam0 - Param1 
};
Var1.f_2=0f;
Var2={
func_232(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_218(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_218(Var2, Var1) >=0f){
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) 
};
}else{
Var2={
Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) 
};
}
Var4={
*uParam0 + Var2 
};
fVar6=vdist(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
Var7={
Param1 + Param2 / Vector(2f, 2f, 2f) 
};
Var7.f_2=0f;
Var2={
func_232(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
Var2={
Var2 * FtoV((fParam3 * 0.5f)) 
};
Var8={
Var7 - Var2 
};
Var9={
Var7 + Var2 
};
Var10={
Var9 - Var8 
};
Var10.f_2=0f;
Var11={
*uParam0 - Var8 
};
Var11.f_2=0f;
Var2={
func_232(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_218(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_218(Var2, Var11) >=0f){
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) 
};
}else{
Var2={
Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) 
};
}
Var5={
*uParam0 + Var2 
};
if(vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f)){
*uParam0={
Var4 
};
}else{
*uParam0={
Var5 
};
}}}


Vector3 func__232(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_233(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
struct<3> Var0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
Var0={
*uParam0 
};
fVar1=(*uParam0 - Param1.f_0);
fVar2=(*uParam0 - Param3.f_0);
if(fVar1 < fVar2){
fVar3=fVar1;
}else{
fVar3=fVar2;
}
fVar4=(uParam0->f_1 - Param1.f_1);
fVar5=(uParam0->f_1 - Param3.f_1);
if(fVar4 < fVar5){
fVar6=fVar4;
}else{
fVar6=fVar5;
}
Var0={
*uParam0 
};
if(!bParam6){
if(fVar3 < fVar6){
if(fVar1 < fVar2){
Var0.f_0=(Param1.f_0 - fParam5);
}else{
Var0.f_0=(Param3.f_0 + fParam5);
}}elseif(fVar4 < fVar5){
Var0.f_1=(Param1.f_1 - fParam5);
}else{
Var0.f_1=(Param3.f_1 + fParam5);
}}elseif(fVar3 < fVar6){
if(fVar1 < fVar2){
Var0.f_0=(Param3.f_0 + fParam5);
}else{
Var0.f_0=(Param1.f_0 - fParam5);
}}elseif(fVar4 < fVar5){
Var0.f_1=(Param3.f_1 + fParam5);
}else{
Var0.f_1=(Param1.f_1 - fParam5);
}
*uParam0={
Var0 
};
}

int func_234(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_287(Param0)){
if(func_237(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_235(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_183(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_227(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
}
bVar1=true;
}
iVar0++;
}
if(bVar1){
return 1;
}
return 0;
}

int func_235(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_223(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_236(&Var2, &(Global_2635560.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_223(Var2, &uVar1) || func_228(Var2)){
Var2={
*uParam0 
};
func_236(&Var2, &(Global_2635560.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}


void func_236(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_230(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_230(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_230(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_227(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_233(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_231(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}

int func_237(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640611[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640611[iVar0 /*17*/].f_16)){
if(func_224(*uParam0, &(Global_2640611[iVar0 /*17*/]), 1008981770, bParam4, 0)){
if(bParam1){
if(Global_2640611[iVar0 /*17*/].f_12){
*uParam0={
Global_2640611[iVar0 /*17*/].f_13 
};
}
else{
Var1={
*uParam0 
};
func_236(&Var1, &(Global_2640611[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_237(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_236(&Var1, &(Global_2640611[iVar0 /*17*/]), 1036831949, 1, 0);
}
*uParam0={
Var1 
};
}}
return 1;
}}}
iVar0++;
}
return 0;
}

int func_238(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
int iVar8;
float fVar9;
bool bVar10;
int iVar11;
float fVar12;
struct<3> Var13;
var uVar14;
if(Global_2635560.f_1854 > 0){
iVar1=0;
iVar2=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_234(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_229(uParam0, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
Global_2643228.f_162=0;
Global_2643228.f_163=0;
iVar5=0;
while (iVar5 < 40){
Global_2643228[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar5]=0f;
iVar5++;
}
if(uParam2->f_30){
func_241(*uParam0);
}elseif(uParam2->f_29){
func_240();
}else{
func_239();
}
iVar1=0;
while (iVar1 < Global_2635560.f_1854){
iVar2=Global_2635560.f_2260[iVar1];
if(iVar2 > -1 && iVar2 < 101){
Var3={
Global_2635560.f_1855[iVar2 /*4*/] 
};
fVar4=Global_2635560.f_1855[iVar2 /*4*/].f_3;
if(vmag(Var3) > 0f){
if((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57==0){
if((uParam2->f_5 > 0f && vdist(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f){
if((uParam2->f_12 && !func_208(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_234(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar6=uParam2->f_31;
bVar7=true;
iVar8=1;
fVar9=uParam2->f_49;
if(!uParam2->f_55){
iVar6=0;
bVar7=false;
iVar8=0;
fVar9=1f;
}
elseif(uParam2->f_17){
iVar6=0;
bVar7=false;
iVar8=0;
if(uParam2->f_33==1){
fVar9=(fVar9 * 0.375f);
}
}
else{
bVar7=true;
iVar8=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar9=(fVar9 * 0.375f);
}}
}
bVar10=false;
if(!func_207(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_245(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_245(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_162(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_197(Var3, uParam2->f_54, &fVar12);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar11 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar11 < uParam2->f_53){
iVar5=0;
while (iVar5 < Global_2643228.f_162){
Global_2643228[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643228.f_121[iVar5]=0f;
iVar5++;
}
Global_2643228.f_162=0;
uParam2->f_53=iVar11;
}
}
if(uParam2->f_30){
if(Global_2643228.f_162==0){
Global_2643228[0 /*3*/]={
Var3 
};
Global_2643228.f_121[0]=fVar4;
}
else{
iVar5=0;
while (iVar5 < Global_2643228.f_162 + 1){
if(iVar5 < 40){
if(vdist2(Var3, uParam2->f_35) < vdist2(Global_2643228[iVar5 /*3*/], uParam2->f_35)){
func_196(Var3, fVar4, iVar5);
iVar5=Global_2643228.f_162 + 1;
}
}
iVar5++;
}
}
Global_2643228.f_162++;
if(Global_2643228.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635560.f_1854;
}
elseif(Global_2643228.f_162==40){
iVar1=Global_2635560.f_1854;
}
}
}
else{
Global_2643228[Global_2643228.f_162 /*3*/]={
Var3 
};
Global_2643228.f_121[Global_2643228.f_162]=fVar4;
Global_2643228.f_162++;
if(Global_2643228.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635560.f_1854;
}
elseif(Global_2643228.f_162==40){
iVar1=Global_2635560.f_1854;
}
}
}}}else{
*uParam0={
Var3 
};
*uParam1=fVar4;
return 1;
}
}
}
else{
*uParam0={
Var3 
};
*uParam1=fVar4;
return 1;
}}}
}}}}
iVar1++;
}
if(Global_2643228.f_162 > 0){
if(uParam2->f_30){
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}else{
if(Global_2643228.f_163 > 0 && !Global_2643228.f_163==Global_2643228.f_162){
func_194(0, uParam2);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643228.f_162);
Var13={
Global_2643228[0 /*3*/] 
};
uVar14=Global_2643228.f_121[0];
Global_2643228[0 /*3*/]={
Global_2643228[iVar0 /*3*/] 
};
Global_2643228.f_121[0]=Global_2643228.f_121[iVar0];
Global_2643228[iVar0 /*3*/]={
Var13 
};
Global_2643228.f_121[iVar0]=uVar14;
*uParam0={
Global_2643228[0 /*3*/] 
};
*uParam1=Global_2643228.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 2){
return 0;
}elseif(uParam2->f_59 && Global_2635560.f_1854 > 0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
*uParam0={
Global_2635560.f_1855[iVar0 /*4*/] 
};
*uParam1=Global_2635560.f_1855[iVar0 /*4*/].f_3;
return 1;
}else{
return 0;
}}}
return 0;
}


void func_239(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
Global_2635560.f_2260[iVar0]=iVar0;
iVar0++;
}}


void func_240(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
Global_2635560.f_2260[iVar0]=iVar0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2635560.f_1854){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
uVar3=Global_2635560.f_2260[iVar1];
Global_2635560.f_2260[iVar1]=Global_2635560.f_2260[iVar2];
Global_2635560.f_2260[iVar2]=uVar3;
iVar0++;
}}


void func_241(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635560.f_1854){
uVar1=func_242(Param0, fVar0, &fVar0);
Global_2635560.f_2260[iVar2]=uVar1;
iVar2++;
}}

int func_242(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar0=-1;
fVar1=1E+08f;
iVar3=0;
while (iVar3 < Global_2635560.f_1854){
fVar2=vdist2(Param0, Global_2635560.f_1855[iVar3 /*4*/]);
if(fVar2 < fVar1 && fVar2 > fParam1){
iVar0=iVar3;
fVar1=fVar2;
}
iVar3++;
}
*fParam2=fVar1;
return iVar0;
}

int func_243(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_244(Param0, iParam2, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_173(Param0, fParam1, iParam2, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
if(func_672(iVar2, 0, 1) && func_672(iParam3, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_244(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_171(iParam1, 1008981770);
fVar1=func_171(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_245(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_249(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635560.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_246(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635560.f_2++;
return 1;
}

int func_246(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_672(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_247(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_672(iVar1, 1, 1)){
if(!func_74(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if((func_179(iVar1) || !bParam8) && !Global_2657704[iVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_247(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_247(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}


Vector3 func__247(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_248() && Global_1853988[iVar0 /*867*/].f_834) && !func_50(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_172(iParam0);
}


var func__248(){
return Global_2683883.f_19;
}

int func_249(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_672(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_179(iVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_174(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_172(iVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_250(struct<3> Param0){
var uVar0;
if(Global_2794162.f_942 && func_251(Param0, &uVar0)){
return 1;
}
return 0;
}

int func_251(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
*uParam1=-1;
iVar2=func_263(Param0, 0);
if(!iVar2==-1){
iVar0=83;
while (iVar0 <=87){
iVar1=iVar0;
if(func_252(iVar1)){
if(func_263(Global_1950844.f_543[iVar0 /*3*/], 0)==iVar2){
*uParam1=iVar0 + 1000;
return 1;
}}
iVar0++;
}}
return 0;
}

int func_252(int iParam0){
int iVar0;
int iVar1;
iVar0=func_262(iParam0);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293==iVar0){
return 1;
}
iVar1=Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
if(iVar1 !=func_31()){
if(Global_1853988[iVar1 /*867*/].f_267.f_293==iVar0){
return 1;
}}
if(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7==iParam0){
return 1;
}
if(func_261(PLAYER::PLAYER_ID(), 0) || (func_258(PLAYER::PLAYER_ID()) && func_116(func_257(PLAYER::PLAYER_ID()))==12)){
return 1;
}
if(func_256(PLAYER::PLAYER_ID()) || (func_258(PLAYER::PLAYER_ID()) && func_116(func_257(PLAYER::PLAYER_ID()))==8)){
return 1;
}
if(func_255(PLAYER::PLAYER_ID()) || (func_258(PLAYER::PLAYER_ID()) && func_116(func_257(PLAYER::PLAYER_ID()))==5)){
return 1;
}
if(func_254(PLAYER::PLAYER_ID()) || (func_258(PLAYER::PLAYER_ID()) && func_116(func_257(PLAYER::PLAYER_ID()))==10)){
return 1;
}
if(func_253(PLAYER::PLAYER_ID()) || (func_258(PLAYER::PLAYER_ID()) && func_116(func_257(PLAYER::PLAYER_ID()))==6)){
return 1;
}
return 0;
}

int func_253(int iParam0){
if(iParam0 !=func_31()){
if(func_672(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_116(Global_2657704[iParam0 /*463*/].f_321.f_7)==6;
}}}
return 0;
}

int func_254(int iParam0){
if(iParam0 !=func_31()){
if(func_672(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_116(Global_2657704[iParam0 /*463*/].f_321.f_7)==10;
}}}
return 0;
}

int func_255(int iParam0){
if(iParam0 !=func_31()){
if(func_672(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_31()){
return func_116(Global_2657704[iParam0 /*463*/].f_321.f_7)==5;
}}}
return 0;
}

int func_256(int iParam0){
if(iParam0 !=func_31()){
if(func_672(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_31()){
return func_116(Global_2657704[iParam0 /*463*/].f_321.f_7)==8;
}}}
return 0;
}

int func_257(int iParam0){
if(iParam0 !=func_31() && func_672(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_17;
}
return -1;
}

int func_258(int iParam0){
if(iParam0 !=func_31() && func_672(iParam0, 1, 1)){
if(func_260(iParam0) && !func_259(iParam0)){
return 1;
}}
return 0;
}

int func_259(int iParam0){
if(iParam0 !=func_31() && func_672(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 4);
}
return 0;
}

int func_260(int iParam0){
if(iParam0 !=func_31() && func_672(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 3);
}
return 0;
}

int func_261(int iParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_31()){
if(func_672(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_31()){
return func_116(Global_2657704[iParam0 /*463*/].f_321.f_7)==12;
}}}
return 0;
}

int func_262(int iParam0){
switch (iParam0){
case 83:
return 1;
break;
case 84:
return 2;
break;
case 85:
return 3;
break;
case 86:
return 4;
break;
case 87:
return 5;
break;
}
return 0;
}

int func_263(struct<3> Param0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(Global_2640611[iVar0 /*17*/].f_9==1 || iParam1==0){
if(func_224(Param0, &(Global_2640611[iVar0 /*17*/]), 0.1f, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_264(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2[3];
int iVar3[3];
if(Global_2635560.f_45.f_319){
return;
}
if(!func_283()){
if(iParam1==0){
}
iVar1=func_282(Param0);
if(iVar1 > -1){
func_159();
switch (iVar1){
case 0:
func_281(-1139.678f, -2694.165f, 12.949f, 283.4298f);
func_281(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
func_281(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
func_281(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
func_281(-1110.51f, -2693.236f, 12.9595f, 298.84f);
func_281(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
func_281(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
func_281(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
func_281(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
break;
case 1:
func_281(-1411.731f, -533.6462f, 30.2703f, 215.116f);
func_281(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
func_281(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
func_281(-1438.8f, -584.4678f, 29.595f, 118.1207f);
break;
case 2:
func_281(-780.5905f, 292.8159f, 84.673f, 97.2697f);
func_281(-788.6147f, 291.8073f, 84.72f, 97.7348f);
func_281(-765.572f, 294.4459f, 84.5182f, 93.9327f);
func_281(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
break;
case 3:
func_281(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
func_281(-647.239f, 49.2068f, 40.7135f, 355.9723f);
func_281(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
func_281(-610.5603f, 5.1258f, 41.2404f, 98.696f);
break;
case 4:
func_281(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
func_281(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
func_281(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
func_281(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
break;
case 5:
func_281(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
func_281(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
func_281(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
func_281(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
break;
case 6:
func_281(-58.1347f, -573.486f, 36.5789f, 341.8442f);
func_281(-64.227f, -590.2214f, 35.1654f, 338.972f);
func_281(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
func_281(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
break;
case 7:
func_281(-232.1917f, -978.1431f, 28.166f, 160.2115f);
func_281(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
func_281(-251.993f, -998.3963f, 28.3747f, 249.3297f);
func_281(-262.222f, -994.5226f, 29.23f, 249.4673f);
break;
case 8:
func_281(151.624f, -1309.343f, 28.2023f, 243.201f);
func_281(152.7886f, -1305.608f, 28.2023f, 243.9973f);
func_281(145.8017f, -1287.19f, 28.312f, 120.6275f);
func_281(142.8935f, -1282.286f, 28.3156f, 120.3024f);
break;
case 9:
func_281(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
func_281(-2322.187f, 277.638f, 168.4671f, 23.4249f);
func_281(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
func_281(-2314.396f, 290.9f, 168.4671f, 114.3983f);
func_281(-2316.81f, 296.424f, 168.4671f, 113.6228f);
func_281(-2318.572f, 299.2423f, 168.4671f, 293.83f);
func_281(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
func_281(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
func_281(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
func_281(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
func_281(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
func_281(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
break;
case 10:
func_279(78);
break;
case 11:
func_279(79);
break;
case 12:
func_279(82);
break;
case 13:
func_279(81);
break;
case 14:
func_279(73);
break;
case 15:
func_281(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_281(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_281(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_281(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 16:
func_279(75);
break;
case 17:
func_279(76);
break;
case 18:
func_279(77);
break;
case 19:
func_281(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
func_281(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
func_281(-931.6637f, 703.693f, 151.369f, 87.7447f);
func_281(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
break;
case 20:
func_279(80);
break;
case 21:
case 25:
func_279(87);
break;
case 22:
case 26:
func_279(88);
break;
case 23:
case 27:
func_279(89);
break;
case 24:
case 28:
func_279(90);
break;
case 29:
case 30:
if(func_278(iParam1)){
func_279(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33);
}
break;
case 31:
func_281(-352.53f, -1836.742f, 21.924f, 274.8f);
func_281(-336.412f, -1837.341f, 22.497f, 264.6f);
func_281(-320.707f, -1840.342f, 23.195f, 257.4f);
func_281(-304.646f, -1843.295f, 24.219f, 261.599f);
func_281(-288.991f, -1844.123f, 25.228f, 269.599f);
func_281(-273.031f, -1842.69f, 26.27f, 278.199f);
func_281(-361.271f, -1814.526f, 21.63f, 96.399f);
func_281(-343.939f, -1813.331f, 22.368f, 87.999f);
func_281(-326.881f, -1814.914f, 23.106f, 78.799f);
func_281(-310.941f, -1818.223f, 23.957f, 78.799f);
func_281(-294.16f, -1820.207f, 25.092f, 89.199f);
func_281(-277.392f, -1819.237f, 26.283f, 100.199f);
func_281(-257.213f, -1838.977f, 27.318f, 285.799f);
func_281(-261.286f, -1815.615f, 27.439f, 110.399f);
func_281(-246.086f, -1808.691f, 28.576f, 117.398f);
func_281(-231.901f, -1800.767f, 28.619f, 119.398f);
func_281(-199.77f, -1989.34f, 26.62f, 180.997f);
func_281(-201.159f, -1971.41f, 26.62f, 190.798f);
func_281(-205.571f, -1954.537f, 26.62f, 199.998f);
func_281(-197.879f, -1940.822f, 26.62f, 114.998f);
func_281(-141.311f, -1967.41f, 21.805f, 91.997f);
func_281(-141.145f, -1977.861f, 21.813f, 91.997f);
func_281(-140.565f, -1988.289f, 21.815f, 91.997f);
func_281(-145.045f, -2032.168f, 21.956f, 73.597f);
func_281(-147.923f, -2041.781f, 21.956f, 73.597f);
func_281(-185.791f, -1948.005f, 26.62f, 18.596f);
func_281(-181.155f, -1965.422f, 26.62f, 8.196f);
func_281(-179.172f, -1984.332f, 26.62f, 1.396f);
func_281(-225.88f, -1824.637f, 28.897f, 299.596f);
func_281(-211.722f, -1816.401f, 28.859f, 300.796f);
func_281(-217.99f, -1792.624f, 28.649f, 119.196f);
func_281(-203.828f, -1784.264f, 28.678f, 119.996f);
func_281(-194.254f, -2018.756f, 26.62f, 75f);
func_281(-186.956f, -2031.369f, 26.62f, 338f);
func_281(-194.916f, -2047.94f, 26.62f, 329.8f);
func_281(-205.565f, -2064.553f, 26.62f, 320.2f);
func_281(-218.606f, -2077.97f, 26.62f, 311.2f);
func_281(-233.372f, -2089.601f, 26.62f, 304f);
func_281(-207.822f, -2002.11f, 26.62f, 173.799f);
func_281(-207.567f, -2027.579f, 26.62f, 158.599f);
func_281(-215.235f, -2042.272f, 26.62f, 148.999f);
func_281(-227.643f, -2058.498f, 26.62f, 138.799f);
func_281(-242.977f, -2071.452f, 26.62f, 125.798f);
func_281(-256.624f, -2087.982f, 26.62f, 204.198f);
func_281(-249.549f, -2098.767f, 26.62f, 294.198f);
func_281(-228.998f, -2048.889f, 26.62f, 141.198f);
func_281(-176.963f, -2009.239f, 24.519f, 261.597f);
func_281(-195.128f, -1806.447f, 28.814f, 299.997f);
func_281(-180.02f, -1797.414f, 28.797f, 299.997f);
func_281(-165.796f, -1787.672f, 28.788f, 304.597f);
func_281(-188.124f, -1774.765f, 28.711f, 123.197f);
func_281(-417.428f, -1836.374f, 19.238f, 121.797f);
func_281(-430.967f, -1844.844f, 18.468f, 121.797f);
func_281(-444.94f, -1853.739f, 17.786f, 121.797f);
break;
}}elseif(func_275(Param0, &iVar2, &iVar3) || (func_251(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)))){
func_159();
iVar0=0;
while (iVar0 < iVar2){
if(iVar2[iVar0] > 1000){
iVar2[iVar0]=(iVar2[iVar0] - 1000);
iVar3[iVar0]=1;
}
if(iVar2[iVar0] >=83 && iVar2[iVar0] <=87){
Global_2635560.f_516=1;
}
if(!iVar3[iVar0] && func_274(iVar2[iVar0], -1)){
if(func_278(iParam1)){
func_279(iVar2[iVar0]);
}}elseif(iVar3[iVar0]){
if(((func_273(PLAYER::PLAYER_PED_ID()) || func_271(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)){
if(func_270(iParam1)){
func_269(iVar2[iVar0]);
}
elseif(func_268(iParam1)){
func_267(iVar2[iVar0]);
func_269(iVar2[iVar0]);
}
else{
func_267(iVar2[iVar0]);
func_269(iVar2[iVar0]);
}}else{
func_265(iVar2[iVar0], iParam1);
}}else{
func_279(iVar2[iVar0]);
}
iVar0++;
}}}}


void func_265(int iParam0, int iParam1){
switch (iParam0){
case 23:
func_281(434.1898f, 6535.824f, 27.0084f, 66.9998f);
func_281(434.9146f, 6539.661f, 26.9691f, 66.9998f);
func_281(435.1928f, 6543.298f, 26.889f, 66.9998f);
func_281(429.8495f, 6506.581f, 27.1807f, 59.7997f);
func_281(429.8463f, 6511.11f, 27.0717f, 60.9997f);
func_281(434.2748f, 6581.816f, 26.1303f, 85.1993f);
func_281(443.1016f, 6580.717f, 26.0739f, 85.1993f);
func_281(451.9748f, 6579.937f, 26.0319f, 85.1993f);
break;
case 26:
func_281(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
func_281(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
func_281(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
func_281(-142.1459f, 6342.532f, 30.49f, 44.7982f);
func_281(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
func_281(-151.1909f, 6358.461f, 30.4907f, 223.398f);
func_281(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
func_281(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
break;
case 24:
func_281(60.7522f, 6465.807f, 30.3941f, 213.3973f);
func_281(57.4131f, 6462.55f, 30.3663f, 213.3973f);
func_281(48.0438f, 6452.668f, 30.3245f, 213.3973f);
func_281(40.6765f, 6445.235f, 30.3475f, 213.3973f);
func_281(37.8298f, 6442.521f, 30.3489f, 213.3973f);
func_281(35.0212f, 6439.866f, 30.3332f, 213.3973f);
func_281(32.1837f, 6437.21f, 30.2991f, 213.3973f);
func_281(29.4732f, 6434.526f, 30.3702f, 213.3973f);
break;
case 25:
func_281(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
func_281(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
func_281(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
func_281(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
func_281(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
func_281(-360.983f, 6130.575f, 30.4401f, 45.7965f);
func_281(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
func_281(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
break;
case 22:
func_281(45.2181f, 6341.107f, 30.2296f, 14.3964f);
func_281(41.6057f, 6339.476f, 30.2306f, 14.3964f);
func_281(39.2508f, 6359.469f, 30.2398f, 207.3965f);
func_281(36.3203f, 6356.893f, 30.2398f, 207.3965f);
func_281(51.6043f, 6365.022f, 30.2399f, 33.5965f);
func_281(65.6465f, 6380.626f, 30.2398f, 212.9964f);
func_281(24.8587f, 6366.36f, 30.2286f, 32.7965f);
func_281(19.6254f, 6360.736f, 30.2305f, 32.7965f);
break;
case 28:
func_281(94.0245f, 181.2181f, 103.5566f, 160.3953f);
func_281(91.0039f, 182.2811f, 103.6179f, 160.3953f);
func_281(68.365f, 148.2105f, 103.5812f, 339.9951f);
func_281(62.2104f, 150.5185f, 103.6101f, 339.9951f);
func_281(69.5198f, 186.4278f, 103.9415f, 69.7949f);
func_281(62.59f, 189.0833f, 103.9981f, 69.7949f);
func_281(55.6095f, 191.8089f, 104.2827f, 69.7949f);
func_281(154.7309f, 182.1333f, 104.6903f, 160.1945f);
break;
case 31:
func_281(322.4916f, -714.5293f, 28.1574f, 158.5941f);
func_281(329.5591f, -694.4284f, 28.1656f, 158.5941f);
func_281(324.565f, -684.3934f, 28.3133f, 247.194f);
func_281(326.4054f, -679.9403f, 28.3192f, 247.194f);
func_281(297.1177f, -804.3891f, 28.4859f, 160.594f);
func_281(288.5461f, -814.6994f, 28.1563f, 163.194f);
func_281(286.0127f, -821.7357f, 28.3093f, 163.194f);
func_281(283.6725f, -828.9533f, 28.1247f, 158.994f);
break;
case 29:
func_281(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
func_281(-1454.819f, -359.998f, 42.7885f, 311.3925f);
func_281(-1462.675f, -360.1352f, 42.9255f, 223.392f);
func_281(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
func_281(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
func_281(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
func_281(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
func_281(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
break;
case 30:
func_281(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
func_281(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
func_281(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
func_281(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
func_281(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
func_281(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
func_281(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
func_281(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
break;
case 27:
func_281(1414.237f, -1656.344f, 60.2449f, 332.7893f);
func_281(1416.668f, -1659.933f, 60.6982f, 332.7893f);
func_281(1419.327f, -1663.972f, 61.2382f, 332.7893f);
func_281(1421.557f, -1667.367f, 61.7479f, 332.7893f);
func_281(1423.744f, -1670.853f, 62.3125f, 332.7893f);
func_281(1412.157f, -1652.746f, 59.9105f, 332.7893f);
func_281(1426.201f, -1673.598f, 62.7133f, 330.1893f);
func_281(1435.804f, -1694.73f, 65.0743f, 352.5892f);
break;
case 33:
func_281(2810.787f, 4435.92f, 47.5295f, 20.7996f);
func_281(2808.413f, 4443.922f, 47.3732f, 14.7995f);
func_281(2806.298f, 4451.786f, 47.1865f, 15.3995f);
func_281(2803.925f, 4459.858f, 46.9823f, 15.3995f);
func_281(2801.756f, 4467.755f, 46.8147f, 15.3995f);
func_281(2893.563f, 4430.258f, 47.338f, 105.9994f);
func_281(2903.725f, 4425.854f, 47.3523f, 23.1992f);
func_281(2907.076f, 4418.059f, 47.6301f, 23.1992f);
break;
case 36:
func_281(1680.448f, 4821.131f, 41.0599f, 186.399f);
func_281(1679.76f, 4829.447f, 40.9167f, 186.399f);
func_281(1678.668f, 4838.03f, 41.0221f, 187.7989f);
func_281(1677.612f, 4846.028f, 41.0452f, 187.7989f);
func_281(1675.851f, 4860.434f, 41.0901f, 187.7989f);
func_281(1674.843f, 4868.343f, 41.0684f, 187.7989f);
func_281(1673.543f, 4875.752f, 41.0684f, 186.7986f);
func_281(1672.525f, 4884.972f, 41.0478f, 186.7986f);
break;
case 34:
func_281(422.863f, 3583.901f, 32.2386f, 313.5986f);
func_281(426.6211f, 3583.208f, 32.2386f, 313.5986f);
func_281(430.466f, 3582.042f, 32.2386f, 313.5986f);
func_281(434.2751f, 3580.881f, 32.2386f, 313.5986f);
func_281(438.1525f, 3579.911f, 32.2386f, 313.5986f);
func_281(442.0173f, 3578.948f, 32.2386f, 313.5986f);
func_281(420.2694f, 3572.995f, 32.2385f, 353.7984f);
func_281(424.4825f, 3572.1f, 32.2386f, 348.1984f);
break;
case 35:
func_281(627.005f, 2726.019f, 40.7692f, 4.3984f);
func_281(620.9771f, 2725.759f, 40.7897f, 4.3984f);
func_281(614.8536f, 2725.355f, 40.8321f, 4.3984f);
func_281(611.1158f, 2737.387f, 40.9734f, 185.3984f);
func_281(598.9713f, 2736.261f, 41.0602f, 186.5986f);
func_281(592.6151f, 2735.886f, 41.0602f, 186.5986f);
func_281(586.0421f, 2735.9f, 41.0535f, 186.5986f);
func_281(627.4468f, 2742.742f, 40.8963f, 183.5979f);
break;
case 32:
func_281(214.3318f, 2492.26f, 53.9736f, 312.7978f);
func_281(213.9953f, 2496.666f, 53.8128f, 312.7978f);
func_281(213.7524f, 2501.251f, 53.5958f, 312.7978f);
func_281(213.6645f, 2505.908f, 53.3477f, 312.7978f);
func_281(213.4478f, 2510.734f, 53.1055f, 312.7978f);
func_281(212.9148f, 2515.268f, 52.9376f, 312.7978f);
func_281(211.5983f, 2519.216f, 52.6753f, 312.7978f);
func_281(210.1288f, 2523.187f, 52.3493f, 312.7978f);
break;
case 38:
func_281(153.6785f, -2476.192f, 4.9877f, 178.4004f);
func_281(150.9209f, -2516.979f, 4.9909f, 179.9999f);
func_281(150.9499f, -2524.965f, 4.9905f, 179.9999f);
func_281(153.866f, -2467.242f, 4.9877f, 178.4004f);
func_281(150.8115f, -2533.139f, 4.9895f, 180.0004f);
func_281(153.8647f, -2433.386f, 5.2336f, 170.2002f);
func_281(142.7427f, -2536.147f, 5f, 205.0002f);
func_281(138.8267f, -2535.865f, 5f, 205.0002f);
break;
case 41:
func_281(-341.4255f, -2734.451f, 5.0413f, 314.8f);
func_281(-334.0134f, -2741.43f, 5.0269f, 314.8f);
func_281(-329.7832f, -2745.604f, 5.0196f, 314.8f);
func_281(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
func_281(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
func_281(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
func_281(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
func_281(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
break;
case 39:
func_281(1143.73f, -3105.091f, 4.8989f, 146.1979f);
func_281(1140.009f, -3104.954f, 4.8985f, 146.1979f);
func_281(1136.267f, -3104.69f, 4.8969f, 146.1979f);
func_281(1132.732f, -3104.277f, 4.8944f, 146.1979f);
func_281(1128.724f, -3104.54f, 4.896f, 146.1979f);
func_281(1125.106f, -3104.057f, 4.8942f, 146.1979f);
func_281(1117.8f, -3103.674f, 4.8922f, 146.1979f);
func_281(1114.015f, -3103.448f, 4.8931f, 146.1979f);
break;
case 40:
func_281(653.1188f, -2700.255f, 5.2101f, 24.7971f);
func_281(656.1305f, -2707.245f, 5.214f, 24.7971f);
func_281(659.3307f, -2714.378f, 5.2188f, 22.7968f);
func_281(662.2627f, -2722.228f, 5.2188f, 19.1968f);
func_281(649.2115f, -2728.359f, 5.1124f, 20.5967f);
func_281(646.2606f, -2720.833f, 5.1103f, 21.3967f);
func_281(643.4582f, -2713.846f, 5.1099f, 21.3967f);
func_281(640.3513f, -2706.571f, 5.108f, 21.3967f);
break;
case 37:
func_281(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
func_281(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
func_281(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
func_281(-238.214f, -2614.847f, 5.0502f, 271.5953f);
func_281(-238.013f, -2630.961f, 5.0331f, 271.3949f);
func_281(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
func_281(-253.401f, -2631.108f, 5.0319f, 272.195f);
func_281(-245.5563f, -2631.06f, 5.0323f, 272.195f);
break;
case 83:
func_281(-1190.795f, -3371.393f, 12.945f, 348.399f);
func_281(-1185.634f, -3373.893f, 12.945f, 348.399f);
func_281(-1114.818f, -3414.185f, 12.945f, 314.199f);
func_281(-1110.976f, -3416.37f, 12.945f, 314.199f);
func_281(-1098.621f, -3460.792f, 12.9453f, 329.799f);
func_281(-1093.31f, -3463.464f, 12.9453f, 329.799f);
func_281(-1089.433f, -3443.234f, 12.945f, 329.799f);
func_281(-1084.271f, -3446.31f, 12.945f, 329.799f);
func_281(-1093.808f, -3452.407f, 12.9451f, 329.799f);
func_281(-1088.383f, -3455.466f, 12.9451f, 329.799f);
func_281(-1118.474f, -3411.385f, 12.9451f, 313.199f);
func_281(-1181.003f, -3375.658f, 12.945f, 346.799f);
func_281(-1212.071f, -3382.283f, 12.9451f, 328.999f);
func_281(-1217.708f, -3378.623f, 12.9451f, 328.999f);
func_281(-1216.986f, -3390.396f, 12.9452f, 328.999f);
func_281(-1222.566f, -3386.707f, 12.9452f, 328.999f);
func_281(-1222.06f, -3398.882f, 12.9452f, 328.999f);
func_281(-1227.698f, -3394.946f, 12.9451f, 328.999f);
func_281(-1097.517f, -3472.086f, 12.9453f, 328.999f);
func_281(-1102.951f, -3468.619f, 12.9452f, 328.999f);
func_281(-1227.253f, -3407.38f, 12.9452f, 328.999f);
func_281(-1232.836f, -3403.572f, 12.9452f, 328.999f);
break;
case 84:
func_281(-1364.879f, -3285.201f, 12.945f, 330.2f);
func_281(-1359.229f, -3288.52f, 12.945f, 330.2f);
func_281(-1369.636f, -3293.617f, 12.945f, 330.2f);
func_281(-1363.881f, -3296.796f, 12.945f, 330.2f);
func_281(-1432.898f, -3247.702f, 12.945f, 330.2f);
func_281(-1437.282f, -3255.429f, 12.945f, 330.2f);
func_281(-1441.623f, -3262.969f, 12.945f, 330.2f);
func_281(-1443.954f, -3251.006f, 12.945f, 330.2f);
func_281(-1374.159f, -3301.61f, 12.945f, 330.2f);
func_281(-1368.508f, -3304.924f, 12.945f, 330.2f);
func_281(-1359.905f, -3276.118f, 12.9448f, 330.4f);
func_281(-1354.228f, -3279.63f, 12.9448f, 330.4f);
func_281(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
func_281(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
func_281(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
func_281(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
func_281(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
func_281(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
func_281(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
func_281(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
func_281(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
func_281(-1444.064f, -3273.751f, 12.945f, 330.7996f);
break;
case 85:
func_281(-2060.105f, 3186.159f, 31.81f, 329.599f);
func_281(-2065.521f, 3189.007f, 31.81f, 150.199f);
func_281(-2055.006f, 3194.989f, 31.81f, 329.599f);
func_281(-2060.471f, 3197.816f, 31.81f, 150.199f);
func_281(-2049.611f, 3204.032f, 31.81f, 329.599f);
func_281(-2055.048f, 3206.958f, 31.81f, 150.199f);
func_281(-2049.627f, 3216.253f, 31.81f, 150.199f);
func_281(-2039.024f, 3222.121f, 31.81f, 329.599f);
func_281(-2044.17f, 3213.208f, 31.81f, 329.599f);
func_281(-2044.672f, 3224.638f, 31.81f, 150.199f);
func_281(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
func_281(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
func_281(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
func_281(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
func_281(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
func_281(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
func_281(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
func_281(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
func_281(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
func_281(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
func_281(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
func_281(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
break;
case 86:
func_281(-1843.828f, 3085.094f, 31.81f, 165.8f);
func_281(-1828.571f, 3084.114f, 31.841f, 329.2f);
func_281(-1823.414f, 3092.762f, 31.843f, 330f);
func_281(-1819.045f, 3100.435f, 31.845f, 330f);
func_281(-1833.313f, 3075.722f, 31.838f, 330f);
func_281(-1847.648f, 3076.8f, 31.835f, 165.8f);
func_281(-1838.479f, 3078.576f, 31.863f, 150.599f);
func_281(-1833.605f, 3086.784f, 31.863f, 150.599f);
func_281(-1828.424f, 3095.617f, 31.863f, 150.599f);
func_281(-1823.95f, 3102.821f, 31.862f, 150.599f);
func_281(-1819.284f, 3110.67f, 31.8615f, 150.2f);
func_281(-1814.545f, 3108.229f, 31.8476f, 330.6f);
func_281(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
func_281(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
func_281(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
func_281(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
func_281(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
func_281(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
func_281(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
func_281(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
func_281(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
func_281(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
break;
case 87:
func_281(-2538.561f, 3303.172f, 31.814f, 296.999f);
func_281(-2530.309f, 3307.445f, 31.816f, 296.999f);
func_281(-2521.733f, 3311.833f, 31.817f, 296.999f);
func_281(-2512.881f, 3316.428f, 31.819f, 296.999f);
func_281(-2502.952f, 3321.518f, 31.821f, 296.999f);
func_281(-2542.613f, 3310.728f, 31.814f, 296.999f);
func_281(-2534.195f, 3314.753f, 31.815f, 296.999f);
func_281(-2525.635f, 3318.97f, 31.817f, 296.999f);
func_281(-2516.674f, 3323.545f, 31.819f, 296.999f);
func_281(-2507.153f, 3328.454f, 31.82f, 296.999f);
func_281(-2547.689f, 3298.791f, 31.812f, 296.999f);
func_281(-2551.261f, 3306.304f, 31.8123f, 296.999f);
func_281(-2497.446f, 3333.296f, 31.821f, 296.999f);
func_281(-2494.089f, 3326.065f, 31.8218f, 296.999f);
func_281(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
func_281(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
func_281(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
func_281(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
func_281(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
func_281(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
func_281(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
func_281(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
break;
case 89:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(1284.416f, 2890.299f, 45.0276f, 336.3999f);
func_281(1273.248f, 2901.428f, 45.0426f, 338.3999f);
func_281(1262.945f, 2911.535f, 43.2959f, 341.9999f);
func_281(1272.094f, 2873.387f, 45.3443f, 328.5991f);
func_281(1259.785f, 2892.217f, 45.1126f, 339.9999f);
func_281(1231.279f, 2910.881f, 43.3085f, 12f);
func_281(1306.515f, 2839.475f, 46.8947f, 132.3996f);
func_281(1307.453f, 2825.276f, 45.1566f, 127.1998f);
func_281(1257.029f, 2872.157f, 45.9766f, 338.5992f);
func_281(1225.764f, 2930.095f, 41.6173f, 14.7999f);
}else{
func_281(1265.123f, 2836.949f, 47.1021f, 119.9996f);
func_281(1258.145f, 2831.643f, 46.4503f, 135.7993f);
func_281(1240.847f, 2828.721f, 46.4388f, 39.5992f);
func_281(1236.877f, 2835.49f, 46.3491f, 22.9991f);
func_281(1235.697f, 2843.403f, 46.0231f, 2.7991f);
func_281(1237.686f, 2850.607f, 45.5261f, 335.5991f);
func_281(1241.126f, 2858.816f, 45.0176f, 339.7991f);
func_281(1249.715f, 2810.588f, 47.2648f, 255.1992f);
func_281(1257.696f, 2808.609f, 47.014f, 266.1992f);
func_281(1265.577f, 2808.353f, 46.7598f, 277.199f);
func_281(1273.808f, 2808.484f, 46.3872f, 263.999f);
func_281(1282.535f, 2807.134f, 45.9705f, 250.7989f);
func_281(1290.168f, 2803.745f, 45.8005f, 238.7988f);
func_281(1296.445f, 2798.777f, 46.0903f, 228.9988f);
func_281(1302.041f, 2792.33f, 45.957f, 221.7987f);
func_281(1251.389f, 2825.818f, 45.9856f, 119.1982f);
func_281(1285.48f, 2819.238f, 45.044f, 228.3993f);
func_281(1293.023f, 2814.164f, 44.8859f, 233.399f);
func_281(1242.18f, 2814.153f, 47.7108f, 227.3991f);
func_281(1236.362f, 2819.623f, 47.6845f, 224.399f);
func_281(1231.532f, 2825.855f, 47.4649f, 210.5992f);
func_281(1228.177f, 2833.423f, 47.3171f, 197.5993f);
func_281(1243.095f, 2866.749f, 44.6219f, 353.7992f);
func_281(1307.346f, 2785.787f, 46.1136f, 219.9997f);
func_281(1300.752f, 2808.224f, 44.5688f, 228.9997f);
func_281(1306.571f, 2802.468f, 44.6275f, 224.1992f);
func_281(1244.465f, 2875.697f, 44.5839f, 353.7992f);
func_281(1312.441f, 2795.427f, 45.2701f, 218.5991f);
}
break;
case 90:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(14.4916f, 2660.726f, 79.0178f, 310.1999f);
func_281(3.855f, 2672.388f, 78.437f, 319.2f);
func_281(-7.057f, 2682.247f, 77.472f, 319.2f);
func_281(-14.041f, 2663.43f, 77.4221f, 319.2f);
func_281(41.8086f, 2597.059f, 81.3524f, 301.9997f);
func_281(60.2273f, 2609.745f, 79.5672f, 305.9998f);
func_281(34.0188f, 2659.723f, 78.9894f, 314.2f);
func_281(29.4879f, 2675.34f, 76.0202f, 314.2f);
func_281(19.0088f, 2686.16f, 75.6897f, 314.2f);
func_281(7.6101f, 2697.113f, 76.2923f, 314.2f);
}else{
func_281(50.6405f, 2633.902f, 79.4503f, 305.1998f);
func_281(46.2894f, 2639.951f, 79.9122f, 305.1998f);
func_281(55.3668f, 2627.773f, 79.6363f, 305.1998f);
func_281(59.9522f, 2620.408f, 80.0499f, 305.1998f);
func_281(42.1486f, 2646.073f, 80.108f, 305.1998f);
func_281(68.1481f, 2630.07f, 77.0725f, 305.1998f);
func_281(62.6048f, 2637.014f, 76.1722f, 305.1998f);
func_281(57.3543f, 2643.56f, 75.5301f, 305.1998f);
func_281(52.611f, 2649.698f, 76.1354f, 305.1998f);
func_281(74.5845f, 2640.475f, 72.602f, 305.1998f);
func_281(68.5462f, 2646.784f, 71.6298f, 305.1998f);
func_281(62.426f, 2652.977f, 71.7029f, 305.1998f);
func_281(79.5597f, 2650.835f, 68.668f, 305.1998f);
func_281(72.6035f, 2656.857f, 67.3294f, 305.1998f);
func_281(83.4156f, 2660.237f, 64.3198f, 305.1998f);
func_281(102.851f, 2688.009f, 51.732f, 224f);
func_281(109.815f, 2681.012f, 51.112f, 224f);
func_281(116.355f, 2674.26f, 50.529f, 224f);
func_281(125.138f, 2665.98f, 49.8f, 224f);
func_281(132.228f, 2659.865f, 49.26f, 228.4f);
func_281(139.354f, 2653.536f, 48.737f, 228.4f);
func_281(88.512f, 2702.995f, 53.042f, 224.199f);
func_281(81.565f, 2710.357f, 53.67f, 224.199f);
func_281(75.156f, 2716.981f, 54.223f, 224.199f);
func_281(68.442f, 2723.806f, 54.775f, 226.199f);
func_281(61.449f, 2730.606f, 55.308f, 226.199f);
func_281(53.702f, 2738.167f, 55.855f, 226.199f);
func_281(91.2443f, 2667.262f, 59.9931f, 314.599f);
}
break;
case 91:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(2772.011f, 3889.062f, 42.94f, 145.4f);
func_281(2785.592f, 3880.409f, 43.695f, 146.199f);
func_281(2788.387f, 3898.107f, 45.364f, 140.999f);
func_281(2801.558f, 3912.485f, 44.931f, 131.999f);
func_281(2805.531f, 3892.253f, 47.01f, 106.399f);
func_281(2824.791f, 3894.787f, 47.4293f, 105.3989f);
func_281(2761.739f, 3945.948f, 44.59f, 135.398f);
func_281(2814.589f, 3930.404f, 44.816f, 134.9978f);
func_281(2747.627f, 3930.92f, 43.8497f, 138.3978f);
func_281(2796.312f, 3928.316f, 42.6106f, 134.5979f);
}else{
func_281(2730.174f, 3890.294f, 42.435f, 54.6f);
func_281(2714.633f, 3918.283f, 42.938f, 16f);
func_281(2716.533f, 3910.15f, 42.699f, 19.6f);
func_281(2757.499f, 3874.045f, 42.724f, 64.8f);
func_281(2747.99f, 3878.676f, 42.561f, 62.8f);
func_281(2738.337f, 3884.314f, 42.614f, 57.2f);
func_281(2711.836f, 3926.255f, 42.931f, 21.6f);
func_281(2707.586f, 3934.558f, 42.984f, 27.6f);
func_281(2702.361f, 3943.039f, 42.951f, 30.6f);
func_281(2696.696f, 3951.317f, 43.012f, 34.8f);
func_281(2766.778f, 3868.911f, 42.822f, 59.8f);
func_281(2775.397f, 3863.697f, 43.204f, 54.2f);
func_281(2738.841f, 3869.927f, 42.492f, 242.799f);
func_281(2746.49f, 3865.861f, 42.808f, 239.599f);
func_281(2754.829f, 3861.039f, 42.906f, 240.799f);
func_281(2762.616f, 3856.316f, 42.895f, 240.799f);
func_281(2770.463f, 3851.383f, 43.216f, 233.199f);
func_281(2778.129f, 3844.914f, 43.26f, 229.199f);
func_281(2785.341f, 3837.918f, 43.141f, 224.999f);
func_281(2730.65f, 3875.186f, 42.437f, 231.999f);
func_281(2724.14f, 3880.885f, 42.469f, 224.599f);
func_281(2718.541f, 3887.508f, 42.614f, 217.399f);
func_281(2783.246f, 3857.409f, 43.175f, 45.199f);
func_281(2790.716f, 3850.631f, 43.125f, 45.199f);
func_281(2690.655f, 3959.246f, 43.255f, 40.199f);
func_281(2797.912f, 3842.523f, 43.166f, 40.199f);
func_281(2791.836f, 3830.845f, 43.14f, 221.999f);
func_281(2712.952f, 3894.566f, 42.484f, 14.799f);
}
break;
case 92:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(3374.661f, 5559.709f, 12.3726f, 138.7999f);
func_281(3366.365f, 5569.449f, 13.9704f, 112.8f);
func_281(3358.493f, 5581.463f, 16.1783f, 112.8f);
func_281(3356.705f, 5595.363f, 15.4029f, 112.8f);
func_281(3336.662f, 5552.357f, 19.491f, 249.6f);
func_281(3336.791f, 5567.825f, 20.432f, 249.6f);
func_281(3335.259f, 5599.046f, 22.4606f, 249.6f);
func_281(3336.811f, 5613.029f, 22.2159f, 249.6f);
func_281(3354.696f, 5609.699f, 15.9453f, 111.3999f);
func_281(3354.006f, 5624.206f, 16.018f, 111.3999f);
}else{
func_281(3372.053f, 5506.134f, 20.8174f, 99.5999f);
func_281(3374.923f, 5520.177f, 20.3207f, 86f);
func_281(3350.643f, 5490.432f, 18.8423f, 139.9997f);
func_281(3364.189f, 5502.98f, 19.648f, 125.7999f);
func_281(3354.101f, 5484.773f, 19.619f, 116.399f);
func_281(3365.919f, 5519.949f, 18.8008f, 102.9988f);
func_281(3341.889f, 5506.809f, 19.584f, 161.199f);
func_281(3338.581f, 5497.709f, 19.376f, 161.199f);
func_281(3335.674f, 5489.348f, 19.542f, 161.199f);
func_281(3332.019f, 5479.563f, 19.738f, 150.998f);
func_281(3327.404f, 5470.857f, 19.302f, 159.398f);
func_281(3323.903f, 5461.49f, 18.492f, 156.398f);
func_281(3320.016f, 5452.957f, 17.834f, 153.198f);
func_281(3315.782f, 5444.61f, 17.115f, 150.798f);
func_281(3335.451f, 5455.723f, 18.2323f, 162.1979f);
func_281(3338.788f, 5464.803f, 18.8631f, 163.7977f);
func_281(3362.476f, 5488.211f, 20.4432f, 108.5979f);
func_281(3371.259f, 5491.274f, 21.5286f, 104.9989f);
func_281(3342.201f, 5517.014f, 19.642f, 170.199f);
func_281(3343.267f, 5526.085f, 18.902f, 175.598f);
func_281(3343.531f, 5536.075f, 18.217f, 178.598f);
func_281(3357.257f, 5496.71f, 18.9729f, 132.5977f);
func_281(3342.346f, 5473.345f, 19.1235f, 159.3987f);
func_281(3347.236f, 5480.447f, 19.4672f, 131.199f);
func_281(3357.623f, 5516.9f, 16.9016f, 118.7991f);
func_281(3361.366f, 5545.886f, 15.5532f, 118.7991f);
func_281(3352.612f, 5541.013f, 16.3238f, 131.999f);
func_281(3343.349f, 5546.494f, 17.8738f, 173.9988f);
}
break;
case 93:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(43.848f, 6845.657f, 13.379f, 247.2f);
func_281(50.379f, 6861.146f, 15.105f, 247.2f);
func_281(32.501f, 6871.777f, 13.3283f, 247.2f);
func_281(38.437f, 6885.796f, 13.3627f, 247.2f);
func_281(55.806f, 6875.081f, 14.824f, 247.2f);
func_281(11.616f, 6877.079f, 11.466f, 247.2f);
func_281(18.954f, 6891.633f, 11.37f, 247.2f);
func_281(26.68f, 6907.587f, 11.869f, 247.2f);
func_281(7.479f, 6907.895f, 12.024f, 247.2f);
func_281(44.9981f, 6901.352f, 11.9426f, 247.2f);
}else{
func_281(35.591f, 6836.608f, 13.288f, 274.4f);
func_281(36.028f, 6830.135f, 13.801f, 270.8f);
func_281(35.114f, 6823.884f, 14.527f, 260.8f);
func_281(48.779f, 6838.693f, 14.337f, 273.6f);
func_281(56.738f, 6821.8f, 15.244f, 244.8f);
func_281(48.377f, 6825.895f, 14.656f, 249.8f);
func_281(49.11f, 6831.439f, 13.991f, 274.8f);
func_281(53.544f, 6818.275f, 16.342f, 243f);
func_281(46.162f, 6821.945f, 15.483f, 249.8f);
func_281(60.129f, 6836.8f, 15.605f, 269.6f);
func_281(40.88f, 6802.952f, 20.113f, 242.6f);
func_281(48.203f, 6799.134f, 20.897f, 244.4f);
func_281(70.449f, 6809.271f, 16.846f, 243f);
func_281(61.436f, 6814.266f, 16.71f, 244.2f);
func_281(56.142f, 6793.458f, 19.806f, 242.6f);
func_281(65.759f, 6791.12f, 18.433f, 276.4f);
func_281(77.305f, 6805.391f, 18.558f, 245.6f);
func_281(85.893f, 6800.243f, 18.535f, 249.8f);
func_281(56.85f, 6780.582f, 18.822f, 297.999f);
func_281(65.636f, 6784.669f, 18.789f, 293.799f);
func_281(74.121f, 6788.498f, 18.739f, 293.799f);
func_281(97.779f, 6796.32f, 19.02f, 276.799f);
func_281(106.76f, 6796.983f, 18.914f, 272.599f);
func_281(112.387f, 6802.858f, 18.994f, 210.599f);
func_281(117.58f, 6802.644f, 18.663f, 209.399f);
func_281(122.481f, 6802.693f, 18.468f, 209.399f);
func_281(127.182f, 6802.686f, 18.218f, 209.399f);
func_281(132.429f, 6801.882f, 17.949f, 209.399f);
}
break;
case 94:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
func_281(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
func_281(-2232.397f, 2274.252f, 31.602f, 296.7993f);
func_281(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
func_281(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
func_281(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
func_281(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
func_281(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
func_281(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
func_281(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
}else{
func_281(-2239.671f, 2390.292f, 10.756f, 189.2002f);
func_281(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
func_281(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
func_281(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
func_281(-2238.044f, 2372.67f, 15.07f, 187.4004f);
func_281(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
func_281(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
func_281(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
func_281(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
func_281(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
func_281(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
func_281(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
func_281(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
func_281(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
func_281(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
func_281(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
func_281(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
func_281(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
func_281(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
func_281(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
func_281(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
func_281(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
func_281(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
func_281(-2255.106f, 2285.415f, 31.617f, 130.3999f);
func_281(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
func_281(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
func_281(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
func_281(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
}
break;
case 95:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(4.0332f, 3378.618f, 41.0822f, 247.1989f);
func_281(38.819f, 3321.2f, 37.0283f, 203.999f);
func_281(26.877f, 3309.062f, 37.93f, 191.9991f);
func_281(15.6727f, 3297.846f, 39.0535f, 191.9991f);
func_281(-24.2865f, 3367.527f, 41.4783f, 264.399f);
func_281(-23.1279f, 3352.254f, 40.52f, 280.399f);
func_281(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
func_281(97.4844f, 3335.385f, 34.6164f, 7.9981f);
func_281(20.409f, 3370.839f, 38.8393f, 235.799f);
func_281(48.457f, 3336.586f, 35.8912f, 270.3979f);
}else{
func_281(25.9869f, 3349.706f, 36.0366f, 273.9994f);
func_281(25.0176f, 3356.915f, 36.4258f, 276.9998f);
func_281(36.2443f, 3351.358f, 36.2386f, 272.5997f);
func_281(35.9352f, 3358.816f, 37.0033f, 276.7998f);
func_281(25.9651f, 3342.673f, 36.2157f, 270.7997f);
func_281(30.027f, 3292.351f, 38.604f, 140.199f);
func_281(49.1614f, 3358.589f, 35.9759f, 263.5988f);
func_281(48.288f, 3352.494f, 35.5841f, 261.1988f);
func_281(23.897f, 3283.152f, 39.381f, 145.399f);
func_281(60.9182f, 3356.21f, 35.8814f, 255.3988f);
func_281(18.723f, 3274.025f, 40.054f, 155.799f);
func_281(59.0177f, 3350.004f, 35.3204f, 255.7989f);
func_281(36.958f, 3298.847f, 38.001f, 127.799f);
func_281(54.165f, 3311.582f, 36.517f, 303.799f);
func_281(61.607f, 3317.105f, 35.916f, 306.999f);
func_281(68.994f, 3323.129f, 35.364f, 308.199f);
func_281(76.266f, 3329.467f, 34.805f, 311.399f);
func_281(82.757f, 3335.915f, 34.344f, 316.598f);
func_281(46.5977f, 3306.196f, 37.1628f, 304.9976f);
func_281(14.664f, 3263.688f, 40.931f, 160.398f);
func_281(50.8234f, 3324.118f, 36.2129f, 305.1976f);
func_281(11.7852f, 3256.101f, 41.7031f, 159.198f);
func_281(89.575f, 3343.311f, 33.932f, 318.398f);
func_281(58.4154f, 3329.423f, 35.6197f, 305.5979f);
func_281(65.3201f, 3334.253f, 35.1903f, 306.5977f);
func_281(72.1063f, 3339.793f, 34.8449f, 308.5977f);
func_281(95.6614f, 3349.917f, 33.696f, 316.1977f);
func_281(85.4387f, 3353.183f, 33.8047f, 317.9978f);
}
break;
case 96:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(2135.708f, 1757.503f, 102.073f, 40.999f);
func_281(2148.674f, 1764.557f, 102.75f, 40.999f);
func_281(2160.511f, 1771.173f, 104.149f, 40.999f);
func_281(2172.842f, 1777.391f, 105.369f, 40.999f);
func_281(2127.938f, 1736.353f, 100.835f, 222.199f);
func_281(2141.682f, 1739.865f, 99.833f, 222.199f);
func_281(2152.786f, 1747.776f, 99.785f, 222.199f);
func_281(2166.356f, 1754.682f, 100.07f, 220.399f);
func_281(2090.66f, 1701.805f, 101.681f, 243.199f);
func_281(2066.149f, 1716.735f, 102.112f, 228.2f);
}else{
func_281(2073.044f, 1725.935f, 102.5096f, 225.2f);
func_281(2077.24f, 1730.299f, 102.5247f, 225.2f);
func_281(2081.68f, 1734.742f, 102.5588f, 225.2f);
func_281(2086.052f, 1739.045f, 102.6618f, 225.2f);
func_281(2090.55f, 1743.53f, 102.6058f, 225.2f);
func_281(2095.295f, 1748.274f, 102.3022f, 225.2f);
func_281(2101.779f, 1721.807f, 101.927f, 225.2f);
func_281(2107.08f, 1727.001f, 101.932f, 225.2f);
func_281(2095.867f, 1716.475f, 101.925f, 225.2f);
func_281(2112.387f, 1732.492f, 101.849f, 225.2f);
func_281(2089.718f, 1710.779f, 101.978f, 225.2f);
func_281(2111.639f, 1717.132f, 100.855f, 225.2f);
func_281(2117.297f, 1722.655f, 100.704f, 225.2f);
func_281(2105.821f, 1711.672f, 101.065f, 225.2f);
func_281(2098.759f, 1704.866f, 101.209f, 225.2f);
func_281(2121.208f, 1713.145f, 99.65f, 225.2f);
func_281(2115.34f, 1707.542f, 99.829f, 225.2f);
func_281(2109.211f, 1702.247f, 100.079f, 225.2f);
func_281(2124.167f, 1704.036f, 98.584f, 225.2f);
func_281(2118.181f, 1698.253f, 98.645f, 225.2f);
func_281(2127.253f, 1694.878f, 97.078f, 225.2f);
func_281(2117.786f, 1738.219f, 101.839f, 225.2f);
func_281(2122.34f, 1728.011f, 100.627f, 225.2f);
func_281(2126.288f, 1718.542f, 99.501f, 225.2f);
func_281(2129.762f, 1709.847f, 98.352f, 225.2f);
func_281(2132.765f, 1700.777f, 96.999f, 225.2f);
func_281(2120.399f, 1689.165f, 97.388f, 225.2f);
func_281(2098.994f, 1747.929f, 102.2403f, 225.2f);
}
break;
case 97:
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_59==0){
func_281(1871.691f, 358.5369f, 162.1067f, 153.1979f);
func_281(1858.966f, 351.2935f, 161.7614f, 166.598f);
func_281(1873.611f, 342.6637f, 161.6936f, 142.998f);
func_281(1887.645f, 343.1557f, 162.1659f, 138.5979f);
func_281(1888.644f, 328.0839f, 161.7489f, 139.398f);
func_281(1898.596f, 315.2232f, 161.4418f, 173.7979f);
func_281(1896.729f, 266.5388f, 161.1619f, 113.5978f);
func_281(1900.167f, 281.3884f, 161.7807f, 115.197f);
func_281(1856.286f, 294.624f, 161.442f, 167.9966f);
func_281(1868.622f, 309.7907f, 162.6084f, 155.1968f);
}else{
func_281(1856.378f, 255.9146f, 162.7158f, 147.6202f);
func_281(1837.279f, 227.3696f, 165.2592f, 164.3995f);
func_281(1835.192f, 219.3931f, 167.5468f, 169.9994f);
func_281(1833.557f, 211.859f, 169.864f, 169.9994f);
func_281(1839.534f, 194.4053f, 171.3841f, 172.9989f);
func_281(1838.289f, 185.8157f, 171.2585f, 174.1989f);
func_281(1837.478f, 177.0607f, 170.7063f, 174.1989f);
func_281(1840.463f, 202.6959f, 170.8702f, 174.1989f);
func_281(1836.296f, 168.7307f, 170.5786f, 174.1989f);
func_281(1835.412f, 159.3162f, 170.4163f, 171.1989f);
func_281(1826.91f, 214.9648f, 172.2502f, 18.7986f);
func_281(1823.805f, 223.0288f, 172.0794f, 21.7986f);
func_281(1820.599f, 231.144f, 172.2987f, 21.7986f);
func_281(1817.245f, 239.1232f, 172.0878f, 21.7986f);
func_281(1814.089f, 247.0423f, 171.7386f, 24.9986f);
func_281(1810.879f, 255.6553f, 171.7517f, 19.3986f);
func_281(1807.729f, 265.4899f, 172.2307f, 15.1986f);
func_281(1823.147f, 197.3122f, 172.235f, 192.3984f);
func_281(1824.641f, 184.4241f, 171.5948f, 183.3985f);
func_281(1825.019f, 171.2314f, 170.5843f, 183.3985f);
func_281(1824.748f, 162.8998f, 170.4961f, 173.1985f);
func_281(1817.345f, 214.6964f, 172.5223f, 203.9982f);
func_281(1813.466f, 222.3717f, 172.3316f, 200.9982f);
func_281(1809.114f, 230.8225f, 172.346f, 205.1983f);
func_281(1805.594f, 239.3896f, 172.0033f, 197.9984f);
func_281(1802.515f, 247.4269f, 171.8964f, 197.9984f);
func_281(1833.982f, 150.4025f, 170.411f, 163.7985f);
func_281(1823.079f, 154.5105f, 170.8194f, 163.7985f);
}
break;
case 123:
case 124:
case 125:
func_266(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
func_266(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
func_266(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
func_266(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
func_266(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
func_266(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
func_266(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
func_266(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
func_266(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
func_266(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
func_266(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
func_266(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
func_266(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
func_266(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
func_266(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
func_266(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
func_266(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
func_266(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
func_266(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
func_266(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
func_266(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
func_266(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
func_266(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
func_266(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
func_266(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
func_266(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
func_266(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
func_266(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
func_266(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
func_266(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
func_266(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
func_266(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
break;
default:
break;
}}


void func_266(struct<3> Param0, float fParam1, int iParam2, bool bParam3){
struct<2> Var0;
struct<2> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
if(!iParam2==0){
func_165(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
fVar2=(Var1.f_1 - Var0.f_1);
if(bParam3){
fVar2=(fVar2 * -1f);
}
fVar2=(fVar2 * 0.5f);
Var3={
0f, fVar2, 0f 
};
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var3) 
};
func_281(Var4, fParam1);
}else{
func_281(Param0, fParam1);
}}


void func_267(int iParam0){
switch (iParam0){
case 83:
func_281(-1133.454f, -3371.672f, 12.945f, 329.799f);
func_281(-1119.748f, -3379.991f, 12.945f, 329.799f);
func_281(-1147.602f, -3363.505f, 12.945f, 329.799f);
func_281(-1161.988f, -3354.852f, 12.945f, 329.799f);
func_281(-1116.563f, -3358.99f, 12.945f, 329.799f);
func_281(-1131.23f, -3350.104f, 12.945f, 329.799f);
func_281(-1145.252f, -3341.608f, 12.945f, 329.799f);
func_281(-1115.202f, -3339.265f, 12.945f, 329.799f);
func_281(-1129.559f, -3330.697f, 12.945f, 329.799f);
func_281(-1114.664f, -3320.954f, 12.945f, 329.799f);
func_281(-1199.923f, -3369.502f, 12.945f, 350.399f);
func_281(-1212.069f, -3363.568f, 12.945f, 350.399f);
func_281(-1223.637f, -3356.694f, 12.945f, 350.399f);
func_281(-1102.284f, -3420.613f, 12.945f, 354.599f);
func_281(-1091.131f, -3427.396f, 12.945f, 354.599f);
func_281(-1079.372f, -3434.306f, 12.945f, 354.599f);
func_281(-1067.498f, -3441.878f, 13.114f, 354.599f);
func_281(-1055.714f, -3448.819f, 12.977f, 354.599f);
func_281(-1043.37f, -3455.796f, 13.146f, 354.599f);
func_281(-1017.023f, -3382.777f, 12.8401f, 330.6f);
func_281(-1010.608f, -3386.103f, 12.8401f, 330.6f);
func_281(-1004.658f, -3389.823f, 12.8401f, 330.6f);
func_281(-998.3798f, -3393.644f, 12.8401f, 330.6f);
func_281(-991.5242f, -3397.297f, 12.8401f, 330.6f);
func_281(-985.0826f, -3401.247f, 12.8401f, 330.6f);
func_281(-978.2733f, -3405.031f, 12.8401f, 330.6f);
func_281(-971.724f, -3409.109f, 12.8401f, 330.6f);
func_281(-964.4719f, -3413.202f, 13.1463f, 330.6f);
func_281(-1022.94f, -3392.372f, 12.8401f, 330.6f);
func_281(-1016.219f, -3395.82f, 12.8401f, 330.6f);
func_281(-1009.873f, -3399.143f, 12.8401f, 330.6f);
func_281(-1003.436f, -3402.982f, 12.8401f, 330.6f);
func_281(-997.0872f, -3406.928f, 12.8401f, 330.6f);
func_281(-990.2305f, -3410.548f, 12.8401f, 330.6f);
func_281(-983.4429f, -3414.093f, 12.8401f, 330.6f);
func_281(-976.8809f, -3417.846f, 12.8401f, 330.6f);
func_281(-969.4039f, -3421.727f, 13.1463f, 330.6f);
func_281(-1028.251f, -3401.834f, 12.8401f, 330.6f);
func_281(-1021.631f, -3405.433f, 12.8401f, 330.6f);
func_281(-1015.209f, -3408.563f, 12.8401f, 330.6f);
func_281(-1008.81f, -3412.484f, 12.8401f, 330.6f);
func_281(-1002.277f, -3415.987f, 12.8401f, 330.6f);
func_281(-995.7023f, -3419.97f, 12.8401f, 330.6f);
func_281(-989.1453f, -3423.988f, 12.8401f, 330.6f);
func_281(-982.6298f, -3427.981f, 12.8401f, 330.6f);
func_281(-974.9305f, -3431.833f, 13.1463f, 330.6f);
break;
case 84:
func_281(-1356.991f, -3242.228f, 12.945f, 330f);
func_281(-1369.313f, -3234.758f, 12.945f, 330f);
func_281(-1381.751f, -3227.408f, 12.945f, 330f);
func_281(-1394.302f, -3220.021f, 12.945f, 330f);
func_281(-1354.339f, -3223.129f, 12.945f, 330f);
func_281(-1366.302f, -3215.809f, 12.945f, 330f);
func_281(-1378.492f, -3208.645f, 12.945f, 330f);
func_281(-1350.322f, -3203.405f, 12.945f, 330f);
func_281(-1362.684f, -3196.451f, 12.945f, 330f);
func_281(-1347.089f, -3182.69f, 12.945f, 330f);
func_281(-1452.642f, -3222.367f, 12.945f, 347.799f);
func_281(-1464.229f, -3215.108f, 12.945f, 347.799f);
func_281(-1476.133f, -3207.652f, 12.945f, 347.799f);
func_281(-1488.295f, -3200.033f, 12.945f, 347.799f);
func_281(-1336.877f, -3272.344f, 12.945f, 8.199f);
func_281(-1323.381f, -3279.614f, 12.945f, 8.199f);
func_281(-1309.671f, -3287.749f, 12.945f, 8.199f);
func_281(-1296.963f, -3294.511f, 12.945f, 8.199f);
func_281(-1501.978f, -3193.849f, 12.945f, 350.599f);
func_281(-1344.716f, -3288.333f, 12.9445f, 331.2f);
func_281(-1338.141f, -3290.335f, 12.9445f, 331.2f);
func_281(-1331.473f, -3294.178f, 12.9445f, 331.2f);
func_281(-1324.921f, -3297.998f, 12.9445f, 331.2f);
func_281(-1318.129f, -3301.957f, 12.9445f, 331.2f);
func_281(-1350.466f, -3294.226f, 12.9445f, 331.2f);
func_281(-1343.482f, -3297.576f, 12.9445f, 331.2f);
func_281(-1336.398f, -3302.456f, 12.9445f, 331.2f);
func_281(-1329.82f, -3306.82f, 12.945f, 331.2f);
func_281(-1322.761f, -3310.353f, 12.945f, 331.2f);
func_281(-1316.587f, -3314.556f, 12.945f, 331.2f);
func_281(-1326.538f, -3318.499f, 12.945f, 331.2f);
func_281(-1335.74f, -3313.678f, 12.945f, 331.2f);
func_281(-1350.848f, -3302.619f, 12.9446f, 331.2f);
func_281(-1357.961f, -3306.886f, 12.945f, 331.2f);
func_281(-1335.202f, -3322.428f, 12.9452f, 331.2f);
func_281(-1351.401f, -3311.566f, 12.9452f, 331.2f);
func_281(-1344.255f, -3305.965f, 12.9451f, 331.2f);
func_281(-1299.832f, -3305.573f, 12.945f, 331.2f);
func_281(-1293.414f, -3309.413f, 12.945f, 331.2f);
func_281(-1286.835f, -3313.157f, 12.945f, 331.2f);
func_281(-1303.988f, -3313.1f, 12.945f, 331.2f);
func_281(-1297.402f, -3316.699f, 12.945f, 331.2f);
func_281(-1290.969f, -3320.519f, 12.945f, 331.2f);
func_281(-1308.27f, -3320.612f, 12.945f, 331.2f);
func_281(-1301.968f, -3324.714f, 12.945f, 331.2f);
func_281(-1295.483f, -3328.422f, 12.945f, 331.2f);
break;
case 85:
func_281(-2039.992f, 3132.191f, 31.81f, 149.399f);
func_281(-2025.075f, 3128.63f, 31.81f, 197.599f);
func_281(-2049.589f, 3142.464f, 31.81f, 109.199f);
func_281(-2088.648f, 3081.327f, 31.81f, 150.599f);
func_281(-2070.669f, 3111.575f, 31.81f, 123.399f);
func_281(-2053.385f, 3109.703f, 31.81f, 150.599f);
func_281(-2044.448f, 3094.012f, 31.81f, 181.799f);
func_281(-2071.825f, 3093.477f, 31.81f, 150.599f);
func_281(-2060.579f, 3085.924f, 31.81f, 150.599f);
func_281(-2062.712f, 3066.073f, 31.81f, 150.599f);
func_281(-2094.385f, 3190.445f, 31.81f, 117.799f);
func_281(-2083.056f, 3182.885f, 31.81f, 117.799f);
func_281(-2071.578f, 3175.554f, 31.81f, 117.799f);
func_281(-2120.249f, 3173.97f, 31.81f, 25.199f);
func_281(-2067.547f, 3146.325f, 31.81f, 14.998f);
func_281(-2080.506f, 3154.591f, 31.81f, 15.798f);
func_281(-2093.278f, 3159.793f, 31.81f, 14.798f);
func_281(-2106.614f, 3167.605f, 31.81f, 21.198f);
func_281(-2106.347f, 3196.902f, 31.81f, 117.799f);
func_281(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
func_281(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
func_281(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
func_281(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
func_281(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
func_281(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
func_281(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
func_281(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
func_281(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
func_281(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
func_281(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
func_281(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
func_281(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
func_281(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
func_281(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
func_281(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
func_281(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
func_281(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
func_281(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
func_281(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
func_281(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
func_281(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
func_281(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
func_281(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
func_281(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
func_281(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
func_281(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
break;
case 86:
func_281(-1885.187f, 3095.344f, 31.81f, 150.2f);
func_281(-1898.637f, 3072.816f, 31.811f, 150.2f);
func_281(-1886.469f, 3065.78f, 31.811f, 150.2f);
func_281(-1874.621f, 3058.437f, 31.81f, 150.2f);
func_281(-1862.818f, 3051.244f, 31.81f, 150.2f);
func_281(-1915.317f, 3041.652f, 31.811f, 150.2f);
func_281(-1896.724f, 2997.848f, 31.81f, 150.2f);
func_281(-1932.975f, 3011.781f, 31.81f, 150.2f);
func_281(-1875.668f, 3034.438f, 31.811f, 150.2f);
func_281(-1886.144f, 3016.285f, 31.81f, 150.2f);
func_281(-1913.706f, 3104.196f, 31.81f, 118.599f);
func_281(-1925.44f, 3112.236f, 31.81f, 118.599f);
func_281(-1938.08f, 3119.383f, 31.81f, 118.599f);
func_281(-1927.822f, 3072.679f, 31.81f, 13.399f);
func_281(-1940.575f, 3079.031f, 31.81f, 13.399f);
func_281(-1953.344f, 3084.888f, 31.81f, 13.399f);
func_281(-1965.91f, 3091.929f, 31.81f, 13.399f);
func_281(-1978.86f, 3100.029f, 31.81f, 13.399f);
func_281(-1950.928f, 3126.457f, 31.81f, 118.999f);
func_281(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
func_281(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
func_281(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
func_281(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
func_281(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
func_281(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
func_281(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
func_281(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
func_281(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
func_281(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
func_281(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
func_281(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
func_281(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
func_281(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
func_281(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
func_281(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
func_281(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
func_281(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
func_281(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
func_281(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
func_281(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
func_281(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
func_281(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
func_281(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
func_281(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
func_281(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
func_281(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
break;
case 87:
func_281(-2484.323f, 3249.294f, 31.828f, 151f);
func_281(-2495.313f, 3255.746f, 31.828f, 151f);
func_281(-2472.644f, 3242.684f, 31.828f, 151f);
func_281(-2506.313f, 3262.27f, 31.823f, 151f);
func_281(-2461.494f, 3235.93f, 31.828f, 151f);
func_281(-2505.602f, 3238.049f, 31.828f, 151f);
func_281(-2481.937f, 3224.8f, 31.828f, 151f);
func_281(-2516.813f, 3244.266f, 31.823f, 151f);
func_281(-2470.03f, 3217.899f, 31.828f, 151f);
func_281(-2493.933f, 3231.308f, 31.828f, 151f);
func_281(-2443.467f, 3227.753f, 31.828f, 175.8f);
func_281(-2431.365f, 3220.9f, 31.828f, 175.8f);
func_281(-2419.883f, 3214.708f, 31.828f, 175.8f);
func_281(-2501.903f, 3272.865f, 31.822f, 123.999f);
func_281(-2513.555f, 3280.176f, 31.817f, 123.999f);
func_281(-2524.776f, 3287.276f, 31.973f, 123.999f);
func_281(-2407.718f, 3208.055f, 31.827f, 176.199f);
func_281(-2395.689f, 3201.125f, 31.827f, 176.199f);
func_281(-2383.498f, 3194.211f, 31.833f, 176.199f);
func_281(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
func_281(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
func_281(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
func_281(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
func_281(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
func_281(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
func_281(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
func_281(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
func_281(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
func_281(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
func_281(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
func_281(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
func_281(-2383.986f, 3223.995f, 31.986f, 150.5996f);
func_281(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
func_281(-2370.524f, 3215.946f, 32.002f, 150.5996f);
func_281(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
func_281(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
func_281(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
func_281(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
func_281(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
func_281(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
func_281(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
func_281(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
func_281(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
func_281(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
func_281(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
func_281(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
break;
default:
break;
}}

int func_268(int iParam0){
switch (iParam0){
case joaat("microlight"):
case joaat("havok"):
case joaat("seabreeze"):
case joaat("rogue"):
case joaat("pyro"):
case joaat("buzzard"):
case joaat("frogger"):
case joaat("maverick"):
case joaat("supervolito"):
case joaat("supervolito2"):
case joaat("volatus"):
case joaat("cuban800"):
case joaat("besra"):
case joaat("duster"):
case joaat("stunt"):
case joaat("velum"):
case joaat("velum2"):
case joaat("vestra"):
case joaat("lazer"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("starling"):
case joaat("conada"):
case -1659004814:
return 1;
default:
}
return 0;
}


void func_269(int iParam0){
switch (iParam0){
case 83:
case 84:
func_281(-947.712f, -3367.704f, 12.944f, 60f);
func_281(-904.692f, -3293.072f, 12.944f, 60f);
func_281(-863.71f, -3221.978f, 12.944f, 60f);
func_281(-966.418f, -3162.773f, 12.944f, 60f);
func_281(-1007.435f, -3233.93f, 12.944f, 60f);
func_281(-1050.455f, -3308.559f, 12.944f, 60f);
func_281(-1145.673f, -3253.456f, 12.944f, 60f);
func_281(-1098.386f, -3181.428f, 12.944f, 60f);
func_281(-1060.474f, -3108.903f, 12.944f, 60f);
func_281(-1155.391f, -3053.632f, 12.944f, 60f);
func_281(-1196.114f, -3125.146f, 12.948f, 60f);
func_281(-1235.552f, -3201.86f, 12.944f, 60f);
func_281(-1344.446f, -3139.177f, 12.944f, 60f);
func_281(-1301.308f, -3064.341f, 12.944f, 60f);
func_281(-1260.135f, -2992.912f, 12.944f, 60f);
func_281(-1364.244f, -2932.9f, 12.98f, 60f);
func_281(-1405.284f, -3004.108f, 12.96f, 60f);
func_281(-1448.29f, -3078.72f, 12.95f, 60f);
func_281(-1535.732f, -3028.318f, 12.945f, 60f);
func_281(-1492.639f, -2953.558f, 12.945f, 60f);
func_281(-1451.506f, -2882.2f, 12.944f, 60f);
func_281(-1553.927f, -2823.12f, 13.002f, 60f);
func_281(-1595.097f, -2894.571f, 12.944f, 60f);
func_281(-1637.836f, -2968.714f, 12.945f, 60f);
func_281(-1740.971f, -2911.484f, 12.944f, 330f);
func_281(-1696.293f, -2833.978f, 12.944f, 330f);
func_281(-1651.502f, -2756.273f, 12.945f, 330f);
func_281(-1588.258f, -2647.575f, 12.944f, 330f);
func_281(-1536.862f, -2681.378f, 12.945f, 330f);
func_281(-1529.025f, -2544.485f, 12.944f, 330f);
break;
case 85:
case 86:
case 87:
func_281(-1970.422f, 2825.696f, 31.81f, 60.4f);
func_281(-2033.307f, 2855.526f, 31.83f, 60.4f);
func_281(-2091.018f, 2888.691f, 31.81f, 60.4f);
func_281(-2206.717f, 2955.363f, 31.81f, 60.4f);
func_281(-2268.817f, 2990.846f, 31.81f, 60.4f);
func_281(-2324.039f, 3023.154f, 31.811f, 60.4f);
func_281(-2435.806f, 3087.705f, 31.824f, 60.4f);
func_281(-2543.753f, 3149.909f, 31.821f, 60.4f);
func_281(-1944.848f, 2898.798f, 31.81f, 125.398f);
func_281(-1978.705f, 2924.367f, 31.846f, 151.999f);
func_281(-2064.849f, 2955.153f, 31.867f, 151.199f);
func_281(-2106.165f, 2980.687f, 31.81f, 104.599f);
func_281(-2302.367f, 3088.676f, 31.814f, 150.598f);
func_281(-2152.113f, 2924.162f, 31.81f, 60.198f);
func_281(-2488.232f, 3118.146f, 31.822f, 59.798f);
func_281(-2277.922f, 3133.756f, 31.811f, 120.598f);
func_281(-2604.776f, 3185.186f, 31.812f, 59.998f);
func_281(-2608.107f, 3305.049f, 31.812f, 60.198f);
func_281(-2718.936f, 3323.203f, 31.81f, 201.198f);
func_281(-2658.718f, 3216.499f, 31.812f, 59.998f);
func_281(-2380.372f, 3055.341f, 31.826f, 60.4f);
func_281(-2790.616f, 3286.24f, 31.812f, 240.397f);
func_281(-2770.946f, 3322.605f, 31.812f, 240.397f);
func_281(-2678.805f, 3339.186f, 31.812f, 199.597f);
func_281(-2743.882f, 3224.094f, 31.81f, 303.397f);
func_281(-2701.354f, 3203.092f, 31.994f, 328.397f);
func_281(-2249.816f, 2944.609f, 31.937f, 330.196f);
func_281(-2586.579f, 3137.286f, 31.935f, 330.196f);
func_281(-2134.76f, 2878.728f, 31.81f, 330.196f);
func_281(-1949.075f, 2861.21f, 31.811f, 58.798f);
break;
default:
break;
}}

int func_270(int iParam0){
switch (iParam0){
case joaat("hydra"):
case joaat("dodo"):
case joaat("mammatus"):
case joaat("annihilator"):
case joaat("tula"):
case joaat("hunter"):
case joaat("mogul"):
case joaat("cargobob"):
case joaat("cargobob2"):
case joaat("shamal"):
case joaat("savage"):
case joaat("luxor"):
case joaat("luxor2"):
case joaat("nimbus"):
case joaat("swift"):
case joaat("swift2"):
case joaat("valkyrie"):
case joaat("titan"):
case joaat("skylift"):
case joaat("miljet"):
case joaat("bombushka"):
case joaat("volatol"):
case joaat("alkonost"):
case 191916658:
case 239897677:
return 1;
default:
}
return 0;
}

int func_271(int iParam0){
if(func_272(iParam0)){
return 1;
}
return 0;
}

int func_272(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f){
return 1;
}
return 0;
}

int func_273(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f){
return 1;
}
return 0;
}

int func_274(int iParam0, int iParam1){
if(iParam1==-1){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}elseif(iParam1==91){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 1;
break;
}}elseif(iParam1==97){
switch (iParam0){
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}
return 0;
}

int func_275(struct<2> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
float fVar5;
int iVar6;
iVar2=0;
fVar3=50f;
fVar5=300f;
iVar6=-1;
iVar0=1;
while (iVar0 <=130){
if(iVar2 < *uParam2){
iVar1=0;
iVar1=0;
while (iVar1 < 2){
if(vdist(Param0.f_0, Param0.f_1, 0f, Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3){
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=0;
iVar2++;
iVar1=99;
}
iVar1++;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 162){
fVar3=50f;
if(iVar0 >=83 && iVar0 <=87){
if(func_252(iVar0)){
fVar3=300f;
}else{
fVar3=0f;
}}
if(iVar0 >=89 && iVar0 <=97){
if(func_276(iVar0)){
fVar3=75f;
}else{
fVar3=0f;
}}
if(iVar0 >=123 && iVar0 <=125){
fVar3=150f;
}
if(iVar2 < *uParam2){
fVar4=vdist(Param0.f_0, Param0.f_1, 0f, Global_1950844.f_543[iVar0 /*3*/], Global_1950844.f_543[iVar0 /*3*/].f_1, 0f);
if(fVar4 < fVar3){
if(iVar0 >=83 && iVar0 <=87){
if(fVar4 <=fVar5){
fVar5=fVar4;
if(iVar6 !=-1){
(*uParam2)[iVar6]=iVar0;
}
else{
iVar6=iVar2;
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=1;
iVar2++;
}}}else{
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=1;
iVar2++;
}}}
iVar0++;
}
if(iVar2 > 0){
return 1;
}
return 0;
}

int func_276(int iParam0){
int iVar0;
int iVar1;
iVar0=func_277(iParam0);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_300==iVar0){
return 1;
}
iVar1=Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
if(iVar1 !=func_31()){
if(Global_1853988[iVar1 /*867*/].f_267.f_300==iVar0){
return 1;
}}
if(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7==iParam0){
return 1;
}
return 0;
}

int func_277(int iParam0){
switch (iParam0){
case 89:
return 1;
break;
case 90:
return 2;
break;
case 91:
return 3;
break;
case 92:
return 4;
break;
case 93:
return 5;
break;
case 94:
return 6;
break;
case 95:
return 7;
break;
case 96:
return 8;
break;
case 97:
return 9;
break;
}
return 0;
}

int func_278(int iParam0){
if((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 1;
}
return 0;
}


void func_279(int iParam0){
switch (iParam0){
case 78:
func_281(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
func_281(-612.8933f, 692.116f, 148.7577f, 79.1005f);
func_281(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
func_281(-639.3558f, 696.9992f, 150.5134f, 77.481f);
break;
case 79:
func_281(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_281(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_281(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_281(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 82:
func_281(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_281(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_281(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_281(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 81:
func_281(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
func_281(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
func_281(-1283.894f, 467.2136f, 95.4036f, 95.058f);
func_281(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
break;
case 73:
func_281(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
func_281(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
func_281(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
func_281(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
break;
case 75:
func_281(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_281(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_281(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_281(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 76:
func_281(-668.575f, 668.7567f, 149.4004f, 69.8844f);
func_281(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_281(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_281(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
break;
case 77:
func_281(128.4334f, 578.7522f, 182.2934f, 106.5458f);
func_281(97.7791f, 576.8907f, 181.5599f, 91.3539f);
func_281(83.5896f, 576.4791f, 181.0832f, 89.7262f);
func_281(69.9599f, 575.9902f, 180.5019f, 91.4926f);
break;
case 80:
func_281(-872.1293f, 698.7591f, 148.5084f, 339.673f);
func_281(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
func_281(-907.3458f, 695.8158f, 150.396f, 270.6491f);
func_281(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
break;
case 87:
if(func_280()){
func_281(-1608.297f, -556.875f, 33.406f, 310f);
func_281(-1616.095f, -563.402f, 33.049f, 309.4f);
func_281(-1560.29f, -531.69f, 34.576f, 35.3994f);
func_281(-1555.303f, -538.781f, 34.044f, 35.3994f);
}else{
func_281(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
func_281(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
func_281(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
func_281(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
func_281(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
func_281(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
func_281(-1611.769f, -601.588f, 31.2908f, 50.7362f);
func_281(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
}
break;
case 88:
if(func_280()){
func_281(-1402.362f, -511.396f, 30.888f, 35.4f);
func_281(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
func_281(-1407.634f, -503.839f, 31.35f, 35.4f);
func_281(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
}else{
func_281(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
func_281(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
func_281(-1346.236f, -523.9114f, 30.6f, 124.7302f);
func_281(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
func_281(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
func_281(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
func_281(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
func_281(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
}
break;
case 89:
if(func_280()){
func_281(-102.737f, -597.379f, 35.053f, 160.999f);
func_281(-97.793f, -589.568f, 35.082f, 134.799f);
func_281(-110.357f, -619.402f, 35.055f, 160.599f);
func_281(-112.561f, -627.723f, 35.046f, 165.399f);
}else{
func_281(-108.2604f, -613.6386f, 35.055f, 160.8063f);
func_281(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
func_281(-112.84f, -629.6357f, 35.0662f, 174.9843f);
func_281(-98.7403f, -590.3209f, 35.075f, 139.7632f);
func_281(-98.3748f, -612.642f, 35.137f, 161.1124f);
func_281(-92.595f, -595.4065f, 35.1888f, 161.3083f);
func_281(-104.4742f, -630.1472f, 35.1396f, 161.184f);
func_281(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
}
break;
case 90:
if(func_280()){
func_281(-59.349f, -779.238f, 43.134f, 228.398f);
func_281(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
func_281(-65.212f, -772.66f, 43.151f, 219.398f);
func_281(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
}else{
func_281(-59.684f, -779.4568f, 43.114f, 228.7591f);
func_281(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
func_281(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
func_281(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
func_281(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
func_281(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
func_281(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
func_281(-9.239f, -773.0505f, 43.0788f, 318.0367f);
}
break;
case 91:
func_281(246.5035f, -1798.749f, 26.1131f, 212.5996f);
func_281(247.8968f, -1797.017f, 26.1131f, 212.5996f);
func_281(249.3848f, -1795.374f, 26.1131f, 212.5996f);
func_281(250.8498f, -1793.695f, 26.1131f, 212.5996f);
func_281(262.9285f, -1784.205f, 26.1131f, 164.5991f);
func_281(266.8129f, -1787.476f, 26.1131f, 164.5991f);
func_281(264.814f, -1785.801f, 26.1131f, 164.5991f);
func_281(269.0069f, -1789.16f, 26.1131f, 164.5991f);
break;
case 92:
func_281(-1464.5f, -927.9f, 9f, 296.7991f);
func_281(-1466f, -926.1f, 9f, 296.7991f);
func_281(-1467.9f, -924.7f, 9f, 296.7991f);
func_281(-1469.7f, -923.7f, 9f, 296.7991f);
func_281(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
func_281(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
func_281(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
func_281(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
break;
case 93:
func_281(30.0784f, -1024.16f, 28.4469f, 234.5994f);
func_281(29.1695f, -1026.719f, 28.4453f, 234.5994f);
func_281(28.2538f, -1029.296f, 28.4421f, 234.5994f);
func_281(27.3737f, -1031.767f, 28.3937f, 234.5994f);
func_281(32.6932f, -1017.063f, 28.4531f, 234.5994f);
func_281(33.672f, -1014.399f, 28.4552f, 234.5994f);
func_281(37.488f, -1014.344f, 28.4781f, 175.5986f);
func_281(39.4909f, -1015.097f, 28.484f, 175.5986f);
break;
case 94:
func_281(45.0033f, 2784.392f, 56.8782f, 103.5999f);
func_281(43.316f, 2785.903f, 56.8782f, 103.5999f);
func_281(41.6126f, 2787.36f, 56.8782f, 103.5999f);
func_281(39.9584f, 2788.773f, 56.8782f, 103.5999f);
func_281(35.2347f, 2792.135f, 56.8781f, 208.7997f);
func_281(33.7771f, 2790.379f, 56.8781f, 208.7997f);
func_281(30.7578f, 2786.8f, 56.8781f, 208.7997f);
func_281(29.3121f, 2785.045f, 56.8745f, 208.7997f);
break;
case 95:
func_281(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
func_281(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
func_281(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
func_281(-337.675f, 6074.252f, 30.2727f, 152.9999f);
func_281(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
func_281(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
func_281(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
func_281(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
break;
case 96:
func_281(1738.422f, 3716.779f, 33.0787f, 6.9999f);
func_281(1736.207f, 3715.989f, 33.094f, 6.9999f);
func_281(1748.442f, 3714.17f, 33.0889f, 39.399f);
func_281(1750.475f, 3715.007f, 33.1067f, 39.399f);
func_281(1747.18f, 3721.102f, 33.007f, 95.199f);
func_281(1746.413f, 3723.255f, 32.9738f, 95.199f);
func_281(1740.67f, 3717.613f, 33.0616f, 8.199f);
func_281(1733.937f, 3715.08f, 33.1236f, 8.199f);
break;
case 97:
func_281(947.9371f, -1452.737f, 30.143f, 331.5991f);
func_281(950.2141f, -1452.826f, 30.1364f, 331.5991f);
func_281(952.4588f, -1452.882f, 30.129f, 331.5991f);
func_281(954.6608f, -1452.869f, 30.1303f, 331.5991f);
func_281(935.1006f, -1452.701f, 30.1907f, 316.999f);
func_281(932.5459f, -1452.579f, 30.2194f, 316.999f);
func_281(929.9319f, -1452.567f, 30.2647f, 316.999f);
func_281(927.4857f, -1452.446f, 30.3167f, 316.999f);
break;
case 98:
func_281(186.6051f, 306.8702f, 104.389f, 162.3999f);
func_281(184.3881f, 306.7666f, 104.3845f, 162.3999f);
func_281(182.1681f, 306.6823f, 104.375f, 162.3999f);
func_281(183.3219f, 296.2871f, 104.3707f, 350.7995f);
func_281(180.9933f, 296.3411f, 104.3704f, 350.7995f);
func_281(178.6569f, 296.4709f, 104.3701f, 350.7995f);
func_281(195.1475f, 304.4284f, 104.4644f, 77.3989f);
func_281(195.0814f, 301.8218f, 104.5287f, 77.3989f);
break;
case 99:
func_281(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
func_281(-33.3895f, -199.7716f, 51.355f, 5.3995f);
func_281(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
func_281(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
func_281(-17.9628f, -206.2525f, 51.3702f, 29.399f);
func_281(-14.8043f, -207.5648f, 51.4707f, 29.399f);
func_281(-11.8482f, -208.6405f, 51.5633f, 29.399f);
func_281(-9.1304f, -209.4894f, 51.6472f, 29.399f);
break;
case 100:
func_281(2478.52f, 4082.137f, 36.8208f, 227.5999f);
func_281(2477.557f, 4079.946f, 36.8014f, 227.5999f);
func_281(2465.123f, 4081.35f, 37.0655f, 167.4f);
func_281(2463.017f, 4082.271f, 37.0653f, 167.4f);
func_281(2467.7f, 4080.332f, 37.0649f, 167.4f);
func_281(2469.587f, 4079.538f, 37.061f, 167.4f);
func_281(2481.354f, 4088.553f, 36.9131f, 209.4f);
func_281(2482.442f, 4091.023f, 36.9472f, 209.4f);
break;
case 101:
func_281(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
func_281(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
func_281(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
func_281(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
func_281(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
func_281(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
func_281(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
func_281(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
break;
case 102:
func_281(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
func_281(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
func_281(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
func_281(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
func_281(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
func_281(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
func_281(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
func_281(-1127.039f, -1564.395f, 3.292f, 168.9988f);
break;
default:
break;
}}


bool func_280(){
return Global_2683883.f_17;
}


void func_281(struct<3> Param0, float fParam1){
if(Global_2635560.f_1854 < 101){
if(vmag(Param0) <=0.01f){
return;
}
Global_2635560.f_1855[Global_2635560.f_1854 /*4*/]={
Param0 
};
Global_2635560.f_1855[Global_2635560.f_1854 /*4*/].f_3=fParam1;
Global_2635560.f_1854++;
}}

int func_282(struct<3> Param0){
int iVar0;
if(vdist(Global_2635560.f_3009, Param0) < Global_2635560.f_3017){
return Global_2635560.f_3012;
}
Global_2635560.f_3009={
Param0 
};
iVar0=0;
while (iVar0 < 32){
if(Param0.f_2 <=0f){
Param0.f_2=((Global_2642989[iVar0 /*7*/].f_2 + Global_2642989[iVar0 /*7*/].f_3.f_2) * 0.5f);
}
if(func_220(Param0, &(Global_2642989[iVar0 /*7*/]))){
Global_2635560.f_3012=iVar0;
return iVar0;
}
iVar0++;
}
Global_2635560.f_3012=-1;
return -1;
}

int func_283(){
if(MISC::IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2684820.f_6453){
return 0;
}
return 0;
}

int func_284(struct<2> Param0, var uParam1, bool bParam2, float fParam3){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=0;
iVar0=83;
while (iVar0 <=84 + 1){
if(bParam2){
if(func_252(iVar0)){
fVar1=fParam3;
}else{
fVar1=0f;
}}else{
fVar1=fParam3;
}
fVar2=vdist(Param0.f_0, Param0.f_1, 0f, Global_1950844.f_543[iVar0 /*3*/], Global_1950844.f_543[iVar0 /*3*/].f_1, 0f);
if(fVar2 < fVar1){
iVar3++;
}
iVar0++;
}
if(iVar3 > 0){
return 1;
}
return 0;
}


void func_285(){
int iVar0;
iVar0=0;
while (iVar0 < 30){
Global_2635560.f_2837[iVar0 /*3*/]={
0f, 0f, 0f 
};
iVar0++;
}}

int func_286(var uParam0, bool bParam1){
int iVar0;
struct<3> Var1;
Var1={
*uParam0 
};
iVar0=0;
while (iVar0 < 2){
if(Var1.f_2 <=0f){
Var1.f_2=((Global_2642945[iVar0 /*7*/].f_2 + Global_2642945[iVar0 /*7*/].f_3.f_2) * 0.5f);
}
if(func_220(Var1, &(Global_2642945[iVar0 /*7*/]))){
if(bParam1){
func_231(&Var1, Global_2642945[iVar0 /*7*/], Global_2642945[iVar0 /*7*/].f_3, Global_2642945[iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
return 0;
}

int func_287(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635560.f_515 && !Global_2635560.f_516){
if(!Global_2635560.f_45.f_317){
if(!func_291(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_290(Param0, 1008981770)){
if(!func_237(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_237(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_289(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_288(&(Global_2635560.f_45[iVar0 /*12*/])) 
};
if(!func_237(&Var1, 0, 0, 0, 1)){
if(!func_237(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__288(var uParam0){
switch (uParam0->f_10){
case 0:
return *uParam0;
break;
case 1:
case 2:
return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
break;
}
return *uParam0;
}

int func_289(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635560.f_45[iVar0 /*12*/].f_9){
if(func_224(Param0, &(Global_2635560.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_290(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635560.f_45[iVar0 /*12*/].f_9){
if(func_224(Param0, &(Global_2635560.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_291(int iParam0, bool bParam1){
if(func_84() !=0){
return func_292(iParam0) !=0;
}
return func_202(iParam0, bParam1, 0);
}

int func_292(int iParam0){
if(func_672(iParam0, 0, 1)){
return Global_2657704[iParam0 /*463*/].f_1;
}
return 0;
}

int func_293(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}


void func_294(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_691[iVar0])){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635560.f_691[iVar0]){
if(!Global_2635560.f_687[iVar0]==-1){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635560.f_687[iVar0])){
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635560.f_687[iVar0]);
Global_2635560.f_687[iVar0]=-1;
}else{
Global_2635560.f_687[iVar0]=-1;
}}}}elseif(!Global_2635560.f_687[iVar0]==-1){
Global_2635560.f_687[iVar0]=-1;
}
iVar0++;
}}

int func_295(){
if(!Global_2635560.f_606==0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_611) < func_293(0)){
return 1;
}
return 0;
}

int func_296(){
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE()==5){
return 0;
}}
if(Global_2635560.f_517==MISC::GET_FRAME_COUNT()){
return 0;
}
if(!func_298(PLAYER::PLAYER_ID()) && !func_297(0)){
return 0;
}
return 1;
}


bool func_297(bool bParam0){
if(bParam0){}
return Global_1575038;
}

int func_298(int iParam0){
if(!func_34(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_2672524.f_1, iParam0);
}

int func_299(){
func_159();
switch (func_301()){
case 0:
func_281(func_300(), 148.7996f);
func_281(-1053.594f, -2541.364f, 19.0804f, 149.9996f);
func_281(-1067.801f, -2565.903f, 19.0786f, 149.7995f);
break;
case 1:
func_281(func_300(), 319.5993f);
func_281(-1633.602f, -982.0679f, 12.0174f, 140.1986f);
func_281(-1621.295f, -967.3729f, 12.0176f, 140.1985f);
break;
case 2:
func_281(func_300(), 254.1978f);
func_281(-398.3749f, 1174.289f, 324.6416f, 279.9978f);
func_281(-422.421f, 1181.459f, 324.6416f, 224.7975f);
break;
case 3:
func_281(func_300(), 179.7976f);
func_281(827.0105f, -2963.529f, 4.9008f, 179.7976f);
func_281(827.0532f, -2992.452f, 4.903f, 179.1978f);
break;
case 4:
func_281(func_300(), 249.3976f);
func_281(220.4448f, -852.2534f, 29.1105f, 249.9977f);
func_281(238.0792f, -959.2108f, 28.2027f, 160.1973f);
break;
case 5:
func_281(func_300(), 186.5969f);
func_281(-3200.642f, 910.3599f, 13.3531f, 246.597f);
func_281(-3224.672f, 1084.223f, 9.7721f, 165.9965f);
break;
case 6:
func_281(func_300(), 228.996f);
func_281(-1885.713f, 2019.198f, 139.8078f, 165.3959f);
func_281(-1902.797f, 2041.478f, 139.7425f, 160.9958f);
break;
case 7:
func_281(func_300(), 120.1956f);
func_281(1833.963f, 3656.37f, 33.2724f, 120.1956f);
func_281(1847.383f, 3751.398f, 32.1719f, 29.9954f);
break;
case 8:
func_281(func_300(), 5.7954f);
func_281(1696.236f, 4729.696f, 41.2005f, 20.1947f);
func_281(1661.13f, 4872.803f, 41.043f, 187.7946f);
break;
case 9:
func_281(func_300(), 134.9944f);
func_281(-139.9687f, 6440.638f, 30.3298f, 225.5942f);
func_281(-229.6591f, 6312.966f, 30.2937f, 135.3941f);
break;
}
return 0;
}


Vector3 func__300(){
switch (func_301()){
case 0:
return -1026.925f, -2495.26f, 19.0826f;
case 1:
return -1612.793f, -974.2093f, 12.0174f;
case 2:
return -411.0467f, 1174.991f, 324.6416f;
case 3:
return 826.9172f, -2978.489f, 4.9068f;
case 4:
return 242.5445f, -860.3193f, 28.5547f;
case 5:
return -3232.715f, 967.5353f, 12.0342f;
case 6:
return -1914.514f, 2067.441f, 139.3692f;
case 7:
return 1931.294f, 3713.554f, 31.3825f;
case 8:
return 1678.432f, 4824.156f, 41.0081f;
case 9:
return -318.2824f, 6068.81f, 30.1976f;
default:
}
return 0f, 0f, 0f;
}

int func_301(){
return Global_1895156[func_23() /*609*/].f_10.f_302;
}


float func_302(){
switch (func_5()){
case 1:
return 0f;
default:
}
return 10f;
}

int func_303(){
return joaat("stretch");
}


void func_304(){
func_305(4);
}


void func_305(bool bParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_6), iParam0);
}


void func_306(){
Local_117.f_0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
Local_117.f_1={
func_307() 
};
Local_117.f_4=0f;
}


Vector3 func__307(){
switch (func_5()){
case 1:
return func_300();
default:
}
return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
}


void func_308(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_104.f_17=iParam0;
}


void func_309(){
struct<3> Var0;
if(func_672(func_23(), 0, 1)){
Var0={
func_172(func_23()) 
};
}
Local_884={
Var0 
};
}


void func_310(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_104.f_7=iParam0;
}


void func_311(){
if(func_57() > 0){
func_630();
func_620();
func_608();
func_590();
func_586();
func_583();
func_582();
func_575();
func_552();
func_546();
func_544();
func_539();
func_527();
func_327();
func_317();
}
if(func_316(NETWORK::PARTICIPANT_ID()) !=5 && func_57()==5){
func_315(5);
}
switch (func_316(NETWORK::PARTICIPANT_ID())){
case 0:
if(func_57() > 0){
switch (func_5()){
case 0:
if(func_313()){
func_312(0);
}
func_315(2);
break;
case 1:
if(func_29(PLAYER::PLAYER_ID())){
func_315(4);
}
else{
func_315(2);
}
break;
}}
break;
case 2:
if((func_313() && func_12()) && func_6(PLAYER::PLAYER_PED_ID())){
func_315(3);
}
break;
case 3:
if((func_313() && func_12()) && !func_6(PLAYER::PLAYER_PED_ID())){
func_315(2);
}
break;
case 4:
break;
case 5:
break;
}}


void func_312(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(uLocal_110[iVar0]), iVar1);
}


bool func_313(){
return func_314(PLAYER::PLAYER_ID());
}


var func__314(int iParam0){
return func_30(iParam0, 3);
}


void func_315(int iParam0){
Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1=iParam0;
}

int func_316(int iParam0){
return Local_106[iParam0 /*6*/].f_1;
}


void func_317(){
struct<3> Var0;
float fVar1;
if(!func_326()){
return;
}
if((!func_325(NETWORK::PARTICIPANT_ID(), 3) && !func_16(7)) && func_323(func_8())){
Var0={
func_300() 
};
fVar1=0f;
if(func_158(Var0, &Var0, &fVar1)){
ENTITY::FREEZE_ENTITY_POSITION(func_7(), false);
ENTITY::SET_ENTITY_VISIBLE(func_7(), true, 0);
ENTITY::SET_ENTITY_COLLISION(func_7(), true, 0);
ENTITY::SET_ENTITY_INVINCIBLE(func_7(), 0);
ENTITY::SET_ENTITY_COORDS(func_7(), Var0, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(func_7(), fVar1);
func_154(Var0, fVar1, func_303(), func_7());
func_319();
func_318(3);
}}}


void func_318(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2[iVar0]), iVar1);
}


void func_319(){
struct<3> Var0;
struct<3> Var1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(!func_313()){
return;
}
iVar2=-1;
iVar3=-1;
iVar5=0;
iVar6=0;
switch (func_5()){
case 0:
Var0={
func_322() 
};
iVar4=3;
iVar5=0;
break;
case 1:
Var0={
func_321() 
};
iVar3=func_320(func_301());
iVar4=5;
iVar5=1;
break;
}
if(func_12()){
Var1={
ENTITY::GET_ENTITY_COORDS(func_7(), 0) 
};
}
STATS::PLAYSTATS_FAST_TRVL(iVar2, Var0.f_0, Var0.f_1, Var0.f_2, iVar3, Var1.f_0, Var1.f_1, Var1.f_2, iVar4, iVar5, iVar6);
}

int func_320(int iParam0){
switch (iParam0){
case 0:
return -647792508;
case 1:
return 1809154099;
case 2:
return -651369957;
case 3:
return 953972272;
case 4:
return 1000275699;
case 5:
return -17380631;
case 6:
return -1090059956;
case 7:
return 86559163;
case 8:
return 1026009016;
case 9:
return -1172275392;
default:
}
return -1;
}


Vector3 func__321(){
return 922.0211f, 53.4953f, 79.8984f;
}


Vector3 func__322(){
return Local_884;
}

int func_323(var uParam0){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(func_324(uParam0)){
return 1;
}}
return 0;
}

int func_324(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
}
return 0;
}


bool func_325(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=(iParam1 / 32);
iVar1=(iParam1 % 32);
return MISC::IS_BIT_SET(Local_106[iParam0 /*6*/].f_2[iVar0], iVar1);
}

int func_326(){
if(func_5() !=1){
return 0;
}
if(func_38() !=3){
return 0;
}
return 1;
}


void func_327(){
if(!func_526()){
return;
}
switch (func_38()){
case 0:
break;
case 1:
if(!func_325(NETWORK::PARTICIPANT_ID(), 1)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), func_7(), 20000, func_520(), 1073741824, 16, 0);
func_318(1);
}
break;
case 2:
func_344();
break;
case 3:
break;
case 4:
break;
case 5:
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(0, 0, 1065353216);
CAM::DO_SCREEN_FADE_IN(800);
}elseif(CAM::IS_SCREEN_FADED_IN()){
if(func_343(PLAYER::PLAYER_PED_ID(), func_7()) && !func_44(PLAYER::PLAYER_PED_ID(), joaat("script_task_leave_any_vehicle"), 1)){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}else{
func_332(PLAYER::PLAYER_ID(), 1, 0, 0);
func_330(0);
func_328();
}}
break;
}}


void func_328(){
func_329(5);
}


void func_329(bool bParam0){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_6), iParam0);
}


void func_330(bool bParam0){
if(bParam0){
if(!func_652(9)){
Global_2794162.f_6881=1;
func_157(9);
}}elseif(func_652(9)){
Global_2794162.f_6881=0;
func_331(9);
}}


void func_331(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(uLocal_109[iVar0]), iVar1);
}


void func_332(int iParam0, bool bParam1, int iParam2, int iParam3){
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
int iVar27;
int iVar28;
if(bParam1){
if(SCRIPT::GET_NO_LOADING_SCREEN()){
SCRIPT::SET_NO_LOADING_SCREEN(false);
}}
if(func_342()){
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
if(!func_340()){
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
iVar27=PLAYER::GET_PLAYER_PED(iParam0);
if(!bVar20){
if((bVar19 && bParam1==0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::FADE_OUT_LOCAL_PLAYER(1);
}elseif(bVar14 || ((!func_74(PLAYER::PLAYER_ID(), 0) && !func_206()) && !func_205(PLAYER::PLAYER_ID()))){
ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657704[iParam0 /*463*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_337(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_336(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(iVar27, true, 0);
}}
if(!ENTITY::IS_ENTITY_ATTACHED(iVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, 1);
}elseif(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
}
PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, 0);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27)){
PED::FINALIZE_HEAD_BLEND(iVar27);
}
PED::SET_PED_CAN_RAGDOLL(iVar27, 1);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==0){
func_335();
func_334();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(!bVar23){
}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}
Global_2657704[iParam0 /*463*/].f_255=0;
if(!bVar24){
bVar3=true;
}
if(Global_2635560.f_2781){
Global_2635560.f_2781=0;
}}else{
if(!func_336(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
if(!bVar22){
ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, 0);
}
if(!ENTITY::IS_ENTITY_ATTACHED(iVar27)){
if(!bVar21){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
}
if(!bVar16){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, 1);
}}
if(func_333(Global_4718592.f_171044)){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
}}
if(Global_1575038){
bVar10=false;
}
if(bVar10){
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
}else{
PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
}
PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
if(bVar3){
if(!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, 0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
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


bool func_333(int iParam0){
return iParam0==17;
}


void func_334(){
struct<3> Var0;
Global_2672524.f_1024=0;
Global_2672524.f_1025=0;
Global_2672524.f_1026={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672524.f_1031=-1;
Global_2672524.f_1032=0;
Global_2635560.f_2792={
Var0 
};
}


void func_335(){
Global_2635560.f_702=0;
Global_2635560.f_2835=0;
Global_2635560.f_515=0;
Global_2635560.f_606=0;
Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217=0;
Global_2635560.f_2790=0;
}

int func_336(int iParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_337(int iParam0, int iParam1, int iParam2){
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
func_339();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), true);
}}
if(func_74(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_338(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_338(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_339(){
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

int func_340(){
if(func_341()==0){
return 1;
}
return 0;
}

int func_341(){
return Global_1574632.f_18;
}

int func_342(){
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216==-1){
return 1;
}
return 0;
}

int func_343(int iParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
return 1;
}}}
return 0;
}


void func_344(){
func_519();
if(!func_325(NETWORK::PARTICIPANT_ID(), 2)){
func_518();
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
PAD::DISABLE_CONTROL_ACTION(0, 210, 1);
}else{
PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
}
if(func_345()){
func_318(2);
}}}

int func_345(){
if(!func_652(8)){
if(func_400() && func_399()){
func_389(&Local_823, func_398(), func_397(), func_396(), func_395(), func_394(), func_393(), func_392(), func_391(), func_390(), 0, 2);
func_387(&Local_823, func_388());
MISC::CLEAR_AREA_OF_PROJECTILES(func_396(), 25f, 0);
func_157(8);
}}else{
if(Local_823.f_386){
func_348(&Local_823, 0, 1);
}
if(!Local_823.f_386){
func_347();
func_346(&Local_872);
return 1;
}}
return 0;
}


void func_346(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < iParam0->f_1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0])){
PED::DELETE_PED(&(iParam0->f_1[iVar0]));
}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0->f_12)){
VEHICLE::DELETE_VEHICLE(&(iParam0->f_12));
}
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
VEHICLE::DELETE_VEHICLE(iParam0);
}}


void func_347(){
if(STREAMING::DOES_ANIM_DICT_EXIST(func_394())){
STREAMING::REMOVE_ANIM_DICT(func_394());
}}


void func_348(var uParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
if(!uParam0->f_386){
return;
}
if(uParam0->f_382==0 && !MISC::IS_BIT_SET(uParam0->f_379, uParam0->f_382)){
if(func_386(uParam0->f_1, 32)){
NETWORK::NETWORK_HIDE_PROJECTILE_IN_CUTSCENE();
}
NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(0, func_386(uParam0->f_1, 4));
if(!Global_2672524.f_3542){
func_383(1, 1, func_386(uParam0->f_1, 128), 1);
}
iVar0=0;
if(func_386(uParam0->f_1, 8)){
func_382(&iVar0, 524288);
}
if(func_386(uParam0->f_1, 16)){
func_382(&iVar0, 1048576);
}
if(func_340()){
func_332(PLAYER::PLAYER_ID(), 0, iVar0, 0);
}
uParam0->f_376=MISC::GET_GAME_TIMER();
}
if(uParam0->f_383==0 && !uParam0->f_385){
uParam0->f_384=MISC::GET_GAME_TIMER();
uParam0->f_385=1;
}
if(!MISC::IS_BIT_SET(uParam0->f_379, uParam0->f_382)){
uParam0->f_374=MISC::GET_GAME_TIMER();
if(!CAM::DOES_CAM_EXIST(uParam0->f_387)){
if(MISC::IS_BIT_SET(*uParam0, 0)){
uParam0->f_387=CAM::CREATE_CAMERA(964613260, 1);
}else{
uParam0->f_387=CAM::CREATE_CAMERA(26379945, 1);
}
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}
iVar1=uParam0->f_18[uParam0->f_382 /*36*/];
if(uParam0->f_18[uParam0->f_382 /*36*/].f_26 > 0 && uParam0->f_18[uParam0->f_382 /*36*/].f_26 < uParam0->f_18[uParam0->f_382 /*36*/]){
iVar1=(iVar1 - uParam0->f_18[uParam0->f_382 /*36*/].f_26);
}elseif(uParam0->f_18[uParam0->f_382 /*36*/] < uParam0->f_18[uParam0->f_382 /*36*/].f_26){
}
if(CAM::DOES_CAM_EXIST(uParam0->f_387)){
if(MISC::IS_BIT_SET(*uParam0, 0)){
if(MISC::IS_BIT_SET(*uParam0, 1)){
uParam0->f_394=PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_427, uParam0->f_430, uParam0->f_434);
CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uParam0->f_387, uParam0->f_394, &(uParam0->f_411), &(uParam0->f_395));
MISC::SET_BIT(uParam0, 2);
}else{
CAM::PLAY_CAM_ANIM(uParam0->f_387, &(uParam0->f_411), &(uParam0->f_395), uParam0->f_427, uParam0->f_430, uParam0->f_433, uParam0->f_434);
}}else{
CAM::SET_CAM_PARAMS(uParam0->f_387, uParam0->f_18[uParam0->f_382 /*36*/].f_1, uParam0->f_18[uParam0->f_382 /*36*/].f_7, uParam0->f_18[uParam0->f_382 /*36*/].f_13, 0, 1, 1, 2);
if((!func_50(uParam0->f_18[uParam0->f_382 /*36*/].f_4) && !func_50(uParam0->f_18[uParam0->f_382 /*36*/].f_10)) && uParam0->f_18[uParam0->f_382 /*36*/].f_14 !=0f){
CAM::SET_CAM_PARAMS(uParam0->f_387, uParam0->f_18[uParam0->f_382 /*36*/].f_4, uParam0->f_18[uParam0->f_382 /*36*/].f_10, uParam0->f_18[uParam0->f_382 /*36*/].f_14, iVar1, uParam0->f_18[uParam0->f_382 /*36*/].f_27, uParam0->f_18[uParam0->f_382 /*36*/].f_28, 2);
}
CAM::STOP_CAM_SHAKING(uParam0->f_387, 1);
if(uParam0->f_18[uParam0->f_382 /*36*/].f_15 > 0f){
CAM::SHAKE_CAM(uParam0->f_387, "Hand_shake", uParam0->f_18[uParam0->f_382 /*36*/].f_15);
}}}
if(uParam0->f_18[uParam0->f_382 /*36*/].f_24 > 0){
CAM::DO_SCREEN_FADE_IN(uParam0->f_18[uParam0->f_382 /*36*/].f_24);
}
MISC::SET_BIT(&(uParam0->f_379), uParam0->f_382);
}
if(CAM::DOES_CAM_EXIST(uParam0->f_387)){
if(uParam0->f_18[uParam0->f_382 /*36*/].f_29){
CAM::SET_USE_HI_DOF();
CAM::SET_CAM_USE_SHALLOW_DOF_MODE(uParam0->f_387, 1);
CAM::SET_CAM_DOF_PLANES(uParam0->f_387, uParam0->f_18[uParam0->f_382 /*36*/].f_31, uParam0->f_18[uParam0->f_382 /*36*/].f_33, uParam0->f_18[uParam0->f_382 /*36*/].f_34, uParam0->f_18[uParam0->f_382 /*36*/].f_32);
CAM::SET_CAM_DOF_STRENGTH(uParam0->f_387, uParam0->f_18[uParam0->f_382 /*36*/].f_30);
}else{
CAM::SET_CAM_USE_SHALLOW_DOF_MODE(uParam0->f_387, 0);
CAM::SET_CAM_DOF_STRENGTH(uParam0->f_387, 0f);
}}
if(uParam0->f_18[uParam0->f_382 /*36*/].f_25 > 0){
if(!MISC::IS_BIT_SET(uParam0->f_381, uParam0->f_382)){
if(MISC::GET_GAME_TIMER() >=((uParam0->f_374 + uParam0->f_18[uParam0->f_382 /*36*/]) - uParam0->f_18[uParam0->f_382 /*36*/].f_25)){
CAM::DO_SCREEN_FADE_OUT(uParam0->f_18[uParam0->f_382 /*36*/].f_25);
MISC::SET_BIT(&(uParam0->f_381), uParam0->f_382);
}}}
iVar2=uParam0->f_18[uParam0->f_382 /*36*/];
uParam0->f_375=(MISC::GET_GAME_TIMER() - uParam0->f_374);
uParam0->f_377=(MISC::GET_GAME_TIMER() - uParam0->f_376);
if(uParam0->f_375 >=iVar2){
if(uParam0->f_382==(uParam0->f_372 - 1)){
func_350(uParam0, func_386(uParam0->f_1, 2), bParam1, bParam2, func_386(uParam0->f_1, 64), 1);
}else{
uParam0->f_382++;
uParam0->f_375=0;
}}
if(uParam0->f_386){
if((MISC::GET_GAME_TIMER() - uParam0->f_384) >=uParam0->f_307[uParam0->f_383 /*8*/].f_1){
if(!MISC::IS_BIT_SET(uParam0->f_380, uParam0->f_383)){
MISC::SET_BIT(&(uParam0->f_380), uParam0->f_383);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_307[uParam0->f_383 /*8*/].f_2))){
HUD::CLEAR_HELP(1);
func_349(&(uParam0->f_307[uParam0->f_383 /*8*/].f_2), uParam0->f_307[uParam0->f_383 /*8*/]);
if(uParam0->f_383 + 1 < uParam0->f_373){
uParam0->f_383++;
}}}}}}


void func_349(var uParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_350(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5){
bool bVar0;
if(!uParam0->f_386){
return;
}
if(!bParam2){
func_381(uParam0);
}
if(bParam3){
func_352(1, 0, bParam4, bParam5);
}
bVar0=SCRIPT::GET_NO_LOADING_SCREEN();
if(!bParam1){
func_332(PLAYER::PLAYER_ID(), 1, 524288, 0);
}
if(SCRIPT::GET_NO_LOADING_SCREEN() !=bVar0){
SCRIPT::SET_NO_LOADING_SCREEN(bVar0);
}
func_351(uParam0);
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_534), false);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_534.f_1=0;
}


void func_351(var uParam0){
uParam0->f_379=0;
uParam0->f_380=0;
uParam0->f_382=0;
uParam0->f_383=0;
uParam0->f_386=0;
uParam0->f_374=0;
uParam0->f_384=0;
uParam0->f_381=0;
uParam0->f_385=0;
uParam0->f_377=0;
uParam0->f_375=0;
uParam0->f_1=0;
}


void func_352(bool bParam0, int iParam1, bool bParam2, bool bParam3){
func_379();
if(bParam0){
func_377(1);
HUD::CLEAR_HELP(1);
}
HUD::CLEAR_PRINTS();
func_369();
GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
func_365(0, 1, 1, 0, 0, bParam2, 0);
func_364();
func_363(12, 0, -1);
func_362(1);
CAM::SET_WIDESCREEN_BORDERS(0, -1);
HUD::DISPLAY_RADAR(1);
HUD::DISPLAY_HUD(1);
func_361();
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(bParam3){
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
NETWORK::NETWORK_SET_IN_MP_CUTSCENE(0, 0);
}}}
func_360(0);
if(((((func_359()==0 && func_358()==0) && iParam1) && !func_205(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_340()){
func_332(PLAYER::PLAYER_ID(), 1, 0, 0);
}
Global_2672524.f_3542=0;
func_353();
}


void func_353(){
bool bVar0;
bool bVar1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_357(&Global_2803710)){
if(!func_19(&Global_2803710, 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID())){
if(!func_356()){
if(CAM::IS_SCREEN_FADED_OUT()){
func_355(&Global_2803710, 1, 0);
}elseif(!func_74(PLAYER::PLAYER_ID(), 0)){
if((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_parachute")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_parachute")) !=0) && (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==-1 || Global_2803780)){
NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(1);
NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), 1);
}
ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, 0);
}}else{
func_355(&Global_2803710, 1, 0);
}}else{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
}
func_18(&Global_2803710);
}}
if(Global_2803714 > 0){
bVar0=false;
while (bVar0 < 32){
if(MISC::IS_BIT_SET(Global_2803714, bVar0)){
bVar1=PLAYER::INT_TO_PLAYERINDEX(bVar0);
if(func_672(bVar1, 1, 1)){
func_354(bVar1);
}}
bVar0++;
}}}


void func_354(bool bParam0){
if(MISC::IS_BIT_SET(Global_2803714, bParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_19(&(Global_2803715[bParam0 /*2*/]), 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(bParam0)){
if(!func_356()){
if(CAM::IS_SCREEN_FADED_OUT()){
func_355(&(Global_2803715[bParam0 /*2*/]), 1, 0);
}elseif(!func_74(bParam0, 0)){
NETWORK::SET_PLAYER_VISIBLE_LOCALLY(bParam0, 1);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), 0)){
ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(bParam0), 255, 0);
}}}else{
func_355(&(Global_2803715[bParam0 /*2*/]), 1, 0);
}}else{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), 0)){
ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(bParam0));
}
func_18(&(Global_2803715[bParam0 /*2*/]));
MISC::CLEAR_BIT(&Global_2803714, bParam0);
}}}


void func_355(var uParam0, bool bParam1, bool bParam2){
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

int func_356(){
if(CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
return 1;
}
return 0;
}


var func__357(var uParam0){
return uParam0->f_1;
}

int func_358(){
return MISC::IS_BIT_SET(Global_2683883, 7);
}

int func_359(){
return Global_1575063;
}


void func_360(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 13);
}else{
MISC::CLEAR_BIT(&Global_8370, 13);
}}


void func_361(){
Global_23251.f_5=0;
}


void func_362(int iParam0){
Global_2794162.f_4635=iParam0;
}


void func_363(bool bParam0, bool bParam1, int iParam2){
switch (bParam0){
case 5:
if(iParam2 > -1){
Global_1654054.f_137[iParam2]=bParam1;
}
break;
default:
if(bParam1){
MISC::SET_BIT(&(Global_1654054.f_1046), bParam0);
}else{
MISC::CLEAR_BIT(&(Global_1654054.f_1046), bParam0);
}
break;
}}


void func_364(){
func_362(1);
func_363(4, 0, -1);
func_363(6, 0, -1);
func_363(7, 0, -1);
func_363(3, 0, -1);
func_363(1, 0, -1);
func_363(2, 0, -1);
func_363(11, 0, -1);
func_363(13, 0, -1);
func_363(14, 0, -1);
func_363(16, 0, -1);
}


void func_365(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_360(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20500.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_368()){
Global_20500.f_1=3;
}
Global_21845=5;
}
func_367(1, iParam3, iParam2, 0);
Global_63491=1;
Global_75819=1;
Global_78687=1;
}else{
func_360(0);
HUD::THEFEED_RESUME();
Global_63491=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_367(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_205(PLAYER::PLAYER_ID())) && !func_74(PLAYER::PLAYER_ID(), 0)) && !func_366()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_205(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78687=0;
}}


bool func_366(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_367(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_368(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_369(){
func_370(0);
}


void func_370(bool bParam0){
if(bParam0){
func_376();
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
Global_20500.f_1=1;
if(func_375(0)){
func_371(0);
}}elseif(Global_20500.f_1==1){
if(!Global_20500.f_1==0){
Global_20500.f_1=3;
}}}


void func_371(int iParam0){
if(func_374()){
return;
}
if(Global_20704){
if(func_373()){
func_372(1, 1);
}else{
func_372(0, 0);
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
if(!func_368()){
Global_20500.f_1=3;
}}


void func_372(bool bParam0, bool bParam1){
if(bParam0){
if(func_375(0)){
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


bool func_373(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_374(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}

int func_375(int iParam0){
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


void func_376(){
if(Global_20500.f_1==9 || Global_20500.f_1==10){
Global_21898=0;
Global_21894=1;
}}


void func_377(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_112461){
HUD::CLEAR_FLOATING_HELP(iVar0, iParam0);
func_378(iVar0);
iVar0++;
}}


void func_378(int iParam0){
Global_112461[iParam0 /*28*/].f_21=0;
StringCopy(&(Global_112461[iParam0 /*28*/]), "", 16);
StringCopy(&(Global_112461[iParam0 /*28*/].f_4), "", 64);
Global_112461[iParam0 /*28*/].f_23=0;
Global_112461[iParam0 /*28*/].f_24={
0f, 0f, 0f 
};
Global_112461[iParam0 /*28*/].f_27=0;
Global_112461[iParam0 /*28*/].f_20=0;
Global_112461[iParam0 /*28*/].f_22=0;
}


void func_379(){
if(!Global_1574747){
return;
}
func_380();
}


void func_380(){
Global_1574747=0;
StringCopy(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
}


void func_381(var uParam0){
if(CAM::DOES_CAM_EXIST(uParam0->f_387)){
if(CAM::IS_CAM_ACTIVE(uParam0->f_387)){
CAM::SET_CAM_ACTIVE(uParam0->f_387, 0);
}
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
CAM::STOP_CAM_SHAKING(uParam0->f_387, 1);
CAM::DESTROY_CAM(uParam0->f_387, 0);
}}


void func_382(int iParam0, int iParam1){
*iParam0=(*iParam0 || iParam1);
}


void func_383(bool bParam0, int iParam1, bool bParam2, bool bParam3){
func_385();
func_377(1);
HUD::CLEAR_HELP(1);
HUD::CLEAR_PRINTS();
func_365(1, 1, 1, 0, 0, 0, bParam2);
func_384();
func_363(12, 1, -1);
func_362(0);
if(bParam3){
CAM::SET_WIDESCREEN_BORDERS(1, -1);
}
HUD::DISPLAY_RADAR(0);
HUD::DISPLAY_HUD(0);
func_377(1);
func_360(1);
Global_2672524.f_3542=1;
if(bParam0){
if(!NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
NETWORK::NETWORK_SET_IN_MP_CUTSCENE(1, iParam1);
}}}


void func_384(){
func_362(0);
func_363(4, 1, -1);
func_363(6, 1, -1);
func_363(7, 1, -1);
func_363(3, 1, -1);
func_363(1, 1, -1);
func_363(2, 1, -1);
func_363(11, 1, -1);
func_363(13, 1, -1);
func_363(14, 1, -1);
func_363(16, 1, -1);
}


void func_385(){
Global_1574747=1;
StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574747.f_9=MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}


bool func_386(int iParam0, int iParam1){
return (iParam0 && iParam1) !=0;
}


void func_387(var uParam0, var uParam1){
if(uParam0->f_372 > 0){
if(!uParam0->f_386 && !MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_534, 0)){
func_351(uParam0);
uParam0->f_1=uParam1;
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_534), false);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_534.f_1=MISC::GET_HASH_KEY(&(uParam0->f_2));
uParam0->f_386=1;
}}else{
func_351(uParam0);
}}

int func_388(){
return 90;
}


void func_389(var uParam0, int iParam1, char* sParam2, struct<3> Param3, struct<3> Param4, char* sParam5, char* sParam6, bool bParam7, var uParam8, var uParam9, int iParam10, int iParam11){
if(uParam0->f_372==1){
return;
}
uParam0->f_18[uParam0->f_372 /*36*/]=iParam1;
StringCopy(&(uParam0->f_18[uParam0->f_372 /*36*/].f_16), sParam2, 32);
uParam0->f_18[uParam0->f_372 /*36*/].f_24=uParam8;
uParam0->f_18[uParam0->f_372 /*36*/].f_25=uParam9;
uParam0->f_394=-1;
StringCopy(&(uParam0->f_395), sParam5, 64);
StringCopy(&(uParam0->f_411), sParam6, 64);
uParam0->f_427={
Param3 
};
uParam0->f_430={
Param4 
};
uParam0->f_433=iParam10;
uParam0->f_434=iParam11;
uParam0->f_372++;
uParam0->f_378=(uParam0->f_378 + iParam1);
MISC::SET_BIT(uParam0, false);
if(bParam7){
MISC::SET_BIT(uParam0, true);
}else{
MISC::CLEAR_BIT(uParam0, true);
}}

int func_390(){
return round(800f);
}

int func_391(){
return round(800f);
}

int func_392(){
return 0;
}


char* func_393(){
return "LIMO_SERVICE_Cam";
}


char* func_394(){
return "ANIM@CASINO@ANIMATED_CAMS@";
}


Vector3 func__395(){
return 0f, 0f, 13f;
}


Vector3 func__396(){
return 931.75f, 47.2f, 80.09f;
}


char* func_397(){
return "Limousine (warp)";
}

int func_398(){
return 7000;
}

int func_399(){
if(!STREAMING::DOES_ANIM_DICT_EXIST(func_394())){
return 1;
}
STREAMING::REQUEST_ANIM_DICT(func_394());
if(STREAMING::HAS_ANIM_DICT_LOADED(func_394())){
return 1;
}
return 0;
}

int func_400(){
int iVar0;
iVar0=func_7();
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(func_406(&iVar0, &Local_872, func_517()) && ENTITY::DOES_ENTITY_EXIST(Local_872.f_1[0])){
ENTITY::SET_ENTITY_COLLISION(Local_872.f_0, true, 0);
ENTITY::SET_ENTITY_VISIBLE(Local_872.f_0, true, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Local_872.f_0, 1);
ENTITY::SET_ENTITY_COORDS(Local_872.f_0, func_321(), 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(Local_872.f_0, func_405());
VEHICLE::SET_VEHICLE_ENGINE_ON(Local_872.f_0, 0, 0, 0);
ENTITY::SET_ENTITY_PROOFS(Local_872.f_0, 1, 1, 1, 1, 1, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_872.f_0, 1084227584);
ENTITY::FREEZE_ENTITY_POSITION(Local_872.f_0, false);
func_401();
return 1;
}}
return 0;
}


void func_401(){
if(ENTITY::DOES_ENTITY_EXIST(Local_872.f_1[0]) && !PED::IS_PED_INJURED(Local_872.f_1[0])){
TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_872.f_1[0], Local_872.f_0, func_404(), func_403(), 0, ENTITY::GET_ENTITY_MODEL(Local_872.f_0), func_402(), -1f, -1f);
}}

int func_402(){
return 1076369536;
}


float func_403(){
if(func_48(2)){
return 50f;
}
return 15f;
}


Vector3 func__404(){
return 809.58f, -27.8632f, 79.633f;
}


float func_405(){
return 147.8185f;
}

int func_406(int iParam0, var uParam1, var uParam2){
struct<101> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, 0)){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(func_516(uParam2, 1)){
ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
}
if(!ENTITY::IS_ENTITY_DEAD(*uParam1, 0)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, 1);
}
if(func_516(uParam2, 2)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 1084227584);
}
if(func_516(uParam2, 4)){
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, 0)){
VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1065353216);
}}
return 1;
}elseif(func_514(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
Var0.f_9=49;
Var0.f_59=2;
Var0.f_78=-1;
Var0.f_79=-1;
Var0.f_96=-1;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_100=-1;
func_494(*iParam0, &Var0);
func_67(*uParam1, &Var0, 1, 1, 0);
func_493(*iParam0, uParam1);
ENTITY::SET_ENTITY_COLLISION(*uParam1, false, 0);
ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, 0);
ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, 1);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, 0);
iVar1=ENTITY::GET_ENTITY_MODEL(*uParam1);
if(((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !func_492(iVar1)) && !iVar1==joaat("oppressor")) && !iVar1==joaat("kosatka")){
VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, 0);
}
VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
if(iVar2 !=0){
VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
}
if(iVar3 !=0){
VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, 1);
}
VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, 1, 1, 0);
if(!func_516(uParam2, 32)){
func_408(iParam0, uParam1, &(uParam1->f_1), func_516(uParam2, 16), func_516(uParam2, 128), func_516(uParam2, 64), !func_516(uParam2, 256), 0, 1);
}
if(func_516(uParam2, 4)){
func_407(iParam0, &(uParam1->f_12));
if(func_516(uParam2, 8)){
iVar4=0;
while (iVar4 <=7){
if(VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, 0)){
VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
}
iVar4++;
}}}
if(func_516(uParam2, 8)){
iVar5=0;
while (iVar5 <=7){
if(VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, 0)){
VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
}
iVar5++;
}}}}
return 0;
}

int func_407(var uParam0, var uParam1){
int iVar0;
struct<101> Var1;
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
return 1;
}
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam0, &iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(func_514(uParam1, iVar0, 10f, 10f, 15f, ENTITY::GET_ENTITY_HEADING(iVar0), 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
Var1.f_9=49;
Var1.f_59=2;
Var1.f_78=-1;
Var1.f_79=-1;
Var1.f_96=-1;
Var1.f_97=1;
Var1.f_99=132;
Var1.f_100=-1;
func_494(iVar0, &Var1);
func_67(*uParam1, &Var1, 1, 1, 0);
return 1;
}}}}
return 0;
}

int func_408(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
if(!ENTITY::DOES_ENTITY_EXIST(*uParam1)){
return 0;
}
iVar2=8;
if(bParam7){
iVar2=-1;
}
iVar0=-1;
while (iVar0 <=iVar2){
iVar1=iVar0 + 1;
iVar3=iVar0;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, iVar3, 0)){
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar3, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar4) && (func_491(iVar4) || bParam5)){
if(bParam3 && !PED::IS_PED_A_PLAYER(iVar4)){
}else{
if(!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1])){
func_409(uParam2[iVar1], iVar4, iParam8, bParam6);
}
if(ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (func_491((*uParam2)[iVar1]) || bParam5)){
if(!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1])){
if(bParam4){
return 0;
}
}
iVar5=VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iVar5)){
if(func_491(*uParam1)){
ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
}
}
if(iVar0==7 && ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("insurgent3")){
VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
}}}}}
iVar0++;
}
return 1;
}

int func_409(var uParam0, int iParam1, var uParam2, bool bParam3){
struct<3> Var0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam1)){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
*uParam0=PED::CLONE_PED(iParam1, 0, 0, uParam2);
if(func_491(iParam1)){
ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, 1);
func_490(*uParam0);
if(func_424(iParam1) || func_410(iParam1)){
PED::SET_PED_HELMET(*uParam0, 1);
}else{
PED::SET_PED_HELMET(*uParam0, 0);
PED::REMOVE_PED_HELMET(*uParam0, 1);
PED::CLEAR_PED_PROP(*uParam0, 0, 1);
}
if(bParam3){
Var0={
ENTITY::GET_ENTITY_COORDS(*uParam0, 0) 
};
Var0.f_2=(Var0.f_2 - 10f);
ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 0, 0, 0, 1);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
ENTITY::SET_ENTITY_COLLISION(*uParam0, false, 0);
}
PED::FINALIZE_HEAD_BLEND(*uParam0);
return 1;
}
return 0;
}

int func_410(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar5=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=0;
while (iVar1 <=8){
iVar2=iVar1;
iVar4=func_418(iParam0, iVar2);
if(func_414(iVar5, 14, iVar4, -1)){
return 1;
}
iVar1++;
}
iVar0=0;
while (iVar0 <=14){
iVar3=iVar0;
if((iVar3 !=12 && iVar3 !=13) && iVar3 !=14){
iVar4=func_411(iParam0, iVar3);
if(func_414(iVar5, iVar3, iVar4, -1)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_411(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_413(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_412(iParam0, iVar1, iVar2, iParam1);
}

int func_412(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_413(iParam3);
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

int func_413(int iParam0){
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

int func_414(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_415(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_415(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_415(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_415(iParam0, iParam2, 1, 3), -1842686353, 0));
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
iParam3=func_415(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_415(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_415(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_415(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_415(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_417(iParam0));
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
iVar4=(iParam1 - func_416(iParam0, func_413(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78622.f_26[iParam2] && iParam1==Global_78622[iParam2]) && Global_78622.f_13[iParam2] !=0){
return Global_78622.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_413(iParam2));
if(iVar5 <=iVar4){
return -1;
}
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
Global_78622.f_13[iParam2]=Var3.f_1;
Global_78622[iParam2]=iParam1;
Global_78622.f_26[iParam2]=iParam0;
return Var3.f_1;
}
return -1;
}

int func_416(int iParam0, int iParam1){
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

int func_417(int iParam0){
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

int func_418(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
if(iVar0==-1){
return func_423(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_419(iParam0, iVar0, iVar1, iParam1);
}

int func_419(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_423(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_421(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_421(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
iVar3=(iVar3 + func_420(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_423(iParam3);
}

int func_420(int iParam0, int iParam1){
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

int func_421(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_422(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_417(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_413(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_416(iParam0, func_413(iParam2)) + iVar4);
}}
return -99;
}

int func_422(int iParam0){
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

int func_423(int iParam0){
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

int func_424(int iParam0){
if(!PED::IS_PED_WEARING_HELMET(iParam0) && !func_425(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_426(iParam0, 14, 0), -1)){
return 0;
}
return 1;
}

int func_425(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_415(iParam0, iParam2, 14, 3);
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
iParam3=func_415(iParam0, iParam2, 14, 4);
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

int func_426(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_427(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_427(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_418(iParam0, iParam2);
}}else{
return func_411(iParam0, iParam1);
}}
return -99;
}

int func_427(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
var uVar8;
var uVar9;
int iVar10;
var uVar11;
int iVar12;
int iVar13;
var uVar14;
var uVar15;
int iVar16;
struct<5> Var17;
var uVar18;
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78472[1 /*14*/]={
func_442(iVar0, iParam1, iParam2, -1) 
};
uVar2=Global_2883588;
uVar3=Global_2883589;
if(!MISC::IS_BIT_SET(Global_78472[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar8={
func_438(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 < 7){
switch (iVar7){
case 0:
iVar4=1;
break;
case 1:
iVar4=4;
break;
case 2:
iVar4=6;
break;
case 3:
iVar4=7;
break;
case 4:
iVar4=8;
break;
case 5:
iVar4=11;
break;
case 6:
iVar4=13;
break;
}
if(uVar8[iVar4] !=-99){
if(!func_427(iParam0, iVar4, uVar8[iVar4])){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
if(iVar4==13){
uVar9={
func_435(iVar0, uVar8[iVar4]) 
};
iVar5=0;
while (iVar5 <=8){
if(!func_427(iParam0, 14, uVar9[iVar5])){
iVar6=0;
while (iVar6 <=19){
Global_78472[2 /*14*/]={
func_442(iVar0, 14, iVar6, -1) 
};
if(Global_78472[2 /*14*/].f_12==iVar5){
if(func_427(iParam0, 14, iVar6)){
if(!func_431(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78472[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}
}
}
iVar6++;
}}
iVar5++;
}}else{
iVar1=func_411(iParam0, iVar4);
Global_78472[2 /*14*/]={
func_442(iVar0, iVar4, iVar1, -1) 
};
if(!func_431(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78472[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}}}
iVar7++;
}
if((uVar8[10] !=0 && uVar8[10] !=joaat("0")) && uVar8.f_16){
if(func_80(1759, Global_78469) !=uVar8[10]){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}
Global_2883588=uVar2;
Global_2883589=uVar3;
return 1;
}elseif(iParam1==13){
uVar11={
func_435(iVar0, iParam2) 
};
iVar10=0;
while (iVar10 <=8){
if(!func_427(iParam0, 14, uVar11[iVar10])){
return 0;
}
iVar10++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78472[1 /*14*/].f_12, 1)==Global_78472[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78472[1 /*14*/].f_12)==Global_78472[1 /*14*/].f_4 || Global_78472[1 /*14*/].f_3==-1)){
return 1;
}
if(((Global_78472[1 /*14*/].f_12==0 && MISC::IS_BIT_SET(Global_78472[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("helmet"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0){
iVar16=FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
iVar12=0;
while (iVar12 < iVar16){
FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
if(iVar13 !=0 && iVar13 !=joaat("0")){
FILES::INIT_SHOP_PED_PROP(&Var17);
FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
if(Var17.f_3==PED::GET_PED_PROP_INDEX(iParam0, Global_78472[1 /*14*/].f_12, 1) && Var17.f_4==PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78472[1 /*14*/].f_12)){
return 1;
}}
iVar12++;
}}}else{
if(Global_78472[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_413(iParam1)) && Global_78472[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_413(iParam1))){
return 1;
}
if(iParam1==4){
Global_78471++;
if(Global_78471==1){
if(func_430(iVar0, 11, func_411(iParam0, 11), -1)){
if(func_429(iVar0, 4, iParam2, &uVar18)){
return func_427(iParam0, 4, uVar18);
}}elseif(func_428(iVar0, 4, iParam2, &uVar18)){
return func_427(iParam0, 4, uVar18);
}}
Global_78471=(Global_78471 - 1);
}}
return 0;
}

int func_428(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_415(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_421(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_429(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_415(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_421(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_430(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 11:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_415(iParam0, iParam2, 11, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress"), 0);
}
break;
}
break;
}
return 0;
}

int func_431(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
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
func_435(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_434(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_433(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_432(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_414(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_433(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_432(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_414(iParam0, iParam2, iParam3, -1)){
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
if(func_433(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_432(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_414(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_432(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_415(iParam0, iParam2, 1, 3);
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
iParam3=func_415(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_433(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_415(iParam0, iParam2, 14, 3);
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
iParam3=func_415(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_434(int iParam0, int iParam1, int iParam2){
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


struct<10> func_435(int iParam0, int iParam1){
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
func_437(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_437(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_437(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_437(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_437(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_437(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_437(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_437(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_437(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_437(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_437(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_436(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_437(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_437(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_437(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_437(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_437(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_437(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_437(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_437(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_437(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_437(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_436(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_437(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_437(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_437(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_437(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_437(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_437(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_437(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_437(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_437(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_437(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_436(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_437(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_437(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_437(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_437(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_437(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_437(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_437(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_437(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_437(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_437(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_437(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_437(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_437(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_437(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_437(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_437(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_437(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_437(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_437(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_437(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_437(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_437(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_437(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_437(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_437(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_437(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_436(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_437(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_437(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_437(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_437(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_437(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_437(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_437(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_437(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_437(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_437(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_437(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_437(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_437(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_437(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_437(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_437(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_437(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_437(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_437(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_437(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_437(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_437(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_437(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_437(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_437(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_436(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_436(int iParam0, int iParam1, int iParam2, int iParam3){
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
(*iParam0)[Var2.f_2]=func_421(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}


void func_437(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
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
struct<17> func_438(int iParam0, int iParam1){
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
if(Global_113810.f_9088.f_99.f_58[120]){
func_441(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_441(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_441(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_441(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_441(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_441(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_441(&Var1, -99, -99, Global_113810.f_2366.f_539.f_196[0], Global_113810.f_2366.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_441(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_441(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_441(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_441(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_441(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_441(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_441(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_441(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_441(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_441(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_441(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_441(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_441(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_441(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_441(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_441(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_441(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_441(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_441(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_441(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_441(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_441(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_441(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_441(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_441(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_441(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_441(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_441(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_441(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_441(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_441(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_441(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_441(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_441(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_441(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_441(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_441(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_441(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_441(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_441(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_441(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_441(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_441(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_441(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_441(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_441(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_441(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_439(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_441(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_441(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_441(&Var1, -99, -99, Global_113810.f_2366.f_539.f_196[1], Global_113810.f_2366.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_441(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_441(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_441(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_441(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_441(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_441(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_441(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_441(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_441(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_441(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_441(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_441(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_441(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_441(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_441(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_441(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_441(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_441(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_441(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_441(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_441(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_441(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_441(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_441(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_441(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_441(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_441(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_441(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_441(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_441(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_441(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_441(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_441(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_441(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_441(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_441(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_441(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_441(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_441(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_441(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_441(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_441(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_441(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_441(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_439(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_441(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_441(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_441(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_441(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_441(&Var1, -99, -99, Global_113810.f_2366.f_539.f_196[2], Global_113810.f_2366.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_441(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_441(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_441(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_441(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_441(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_441(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_441(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_441(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_441(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_441(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_441(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_441(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_441(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_441(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_441(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_441(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_441(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_441(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_441(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_441(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_441(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_441(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_441(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_441(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_441(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_441(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_441(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_441(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_441(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_441(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_441(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_441(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_441(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_441(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_441(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_441(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_441(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_441(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_441(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_441(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_441(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_441(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_441(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_439(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_441(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_441(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_441(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_441(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_441(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_441(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_441(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_441(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_441(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_441(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_441(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_441(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_441(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_441(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_441(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_441(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_441(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_441(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_441(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_441(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_441(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_441(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_441(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_441(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_441(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_441(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_439(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_441(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_441(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_441(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_441(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_441(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_441(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_441(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_441(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_441(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_441(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_441(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_441(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_441(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_441(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_441(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_441(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_441(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_441(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_441(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_441(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_441(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_441(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_441(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_441(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_441(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_441(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_441(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_441(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_439(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_439(var uParam0, int iParam1, int iParam2, int iParam3){
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
(*uParam0)[func_440(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_440(Var2.f_2)]=func_421(iParam1, Var2.f_0, func_440(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_440(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_440(int iParam0){
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


void func_441(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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
struct<14> func_442(int iParam0, int iParam1, int iParam2, int iParam3){
func_489();
if(iParam0==joaat("mp_m_freemode_01")){
func_473(iParam1, iParam2, iParam3);
}elseif(iParam0==joaat("mp_f_freemode_01")){
func_443(iParam1, iParam2, iParam3);
}
return Global_78472[0 /*14*/];
}


void func_443(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_472(iParam1, iParam2);
break;
case 11:
func_471(iParam1, iParam2);
break;
case 8:
func_466(iParam1, iParam2);
break;
case 9:
func_465(iParam1, iParam2);
break;
case 3:
func_464(iParam1, iParam2);
break;
case 4:
func_463(iParam1, iParam2);
break;
case 6:
func_462(iParam1, iParam2);
break;
case 1:
func_461(iParam1, iParam2);
break;
case 7:
func_460(iParam1, iParam2);
break;
case 10:
func_459(iParam1, iParam2);
break;
case 14:
func_458(iParam1, iParam2);
break;
case 12:
func_457(iParam1, iParam2);
break;
case 5:
func_456(iParam1, iParam2);
break;
case 0:
func_454(iParam1, iParam2);
break;
case 13:
func_444(iParam1);
break;
}}


void func_444(int iParam0){
bool bVar0;
int iVar1;
char* sVar2;
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
switch (iParam0){
case 31:
iVar3=0;
iVar4=0;
break;
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=0;
iVar4=0;
break;
case 2:
iVar3=0;
iVar4=0;
break;
case 3:
iVar3=0;
iVar4=0;
break;
case 4:
iVar3=0;
iVar4=0;
break;
case 5:
iVar3=0;
iVar4=0;
break;
case 6:
iVar3=0;
iVar4=0;
break;
case 7:
iVar3=0;
iVar4=0;
break;
case 8:
iVar3=0;
iVar4=0;
break;
case 9:
iVar3=0;
iVar4=0;
break;
case 10:
iVar3=0;
iVar4=0;
break;
case 11:
iVar3=0;
iVar4=0;
break;
case 12:
iVar3=0;
iVar4=0;
break;
case 13:
iVar3=0;
iVar4=0;
break;
case 14:
iVar3=0;
iVar4=0;
break;
case 15:
iVar3=0;
iVar4=0;
break;
case 16:
iVar3=0;
iVar4=0;
break;
case 17:
iVar3=0;
iVar4=0;
break;
case 18:
iVar3=0;
iVar4=0;
break;
case 19:
iVar3=0;
iVar4=0;
break;
case 20:
iVar3=0;
iVar4=0;
break;
case 21:
iVar3=0;
iVar4=0;
break;
case 22:
iVar3=0;
iVar4=0;
break;
case 23:
iVar3=0;
iVar4=0;
break;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_445(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
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
uParam0->f_12=func_453(iParam8);
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
if(func_452(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_450(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_450(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_450(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_450(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_450(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_450(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_449(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_449(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_449(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_452(14)){
return;
}
uVar0=func_80(func_448(iParam1, uParam0->f_2), Global_78469);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_80(func_447(iParam1, uParam0->f_2), Global_78469);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_446(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_80(iVar1, Global_78469);
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


bool func_446(int iParam0, int iParam1, var uParam2){
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

int func_447(int iParam0, int iParam1){
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

int func_448(int iParam0, int iParam1){
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

int func_449(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/][iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/][iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/][iParam3], bParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_4[iParam3], bParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_8[iParam3], bParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_12[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_16[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_20[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_24[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_28[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_32[iParam3], bParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_36[iParam3], bParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_40[iParam3], bParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_44[iParam3], bParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_48[iParam3], bParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_52[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_56[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_60[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_64[iParam3], bParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_68[iParam3], bParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_72[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_76[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_80[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_84[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_88[iParam3], bParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_92[iParam3], bParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_96[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_100[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_104[iParam3], bParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_108[iParam3], bParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_112[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_116[iParam3], bParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_120[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_124[iParam3], bParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_128[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_132[iParam3], bParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_136[iParam3], bParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_140[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_144[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_148[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_152[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_156[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113810.f_2366[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113810.f_2366[iParam1 /*164*/].f_160[iParam3], bParam4);
}}
return 0;
}

int func_450(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78469;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_451(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_80(iVar2, iVar0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_451(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
*uParam2=14385;
if((bParam4 && Global_4539490) || (!bParam4 && bParam5)){
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
if(Global_4539490){
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
case 283:
*uParam2=11974;
break;
case 284:
*uParam2=11975;
break;
case 285:
*uParam2=11976;
break;
case 286:
*uParam2=11977;
break;
case 287:
*uParam2=11978;
break;
case 288:
*uParam2=11979;
break;
case 289:
*uParam2=11980;
break;
case 290:
*uParam2=11981;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 291:
*uParam2=11982;
break;
case 292:
*uParam2=11983;
break;
case 293:
*uParam2=11984;
break;
case 294:
*uParam2=11985;
break;
case 295:
*uParam2=11986;
break;
case 296:
*uParam2=11987;
break;
case 297:
*uParam2=11988;
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
case 283:
*uParam2=11989;
break;
case 284:
*uParam2=11990;
break;
case 285:
*uParam2=11991;
break;
case 286:
*uParam2=11992;
break;
case 287:
*uParam2=11993;
break;
case 288:
*uParam2=11994;
break;
case 289:
*uParam2=11995;
break;
case 290:
*uParam2=11996;
break;
}
switch (floor((to_float(iVar0) / 32f))){
case 291:
*uParam2=11997;
break;
case 292:
*uParam2=11998;
break;
case 293:
*uParam2=11999;
break;
case 294:
*uParam2=12000;
break;
case 295:
*uParam2=12001;
break;
case 296:
*uParam2=12002;
break;
case 297:
*uParam2=12003;
break;
}
break;
break;
}
*uParam3=(iVar0 % 32);
return *uParam2 !=14385;
}


bool func_452(int iParam0){
return Global_43377==iParam0;
}

int func_453(int iParam0){
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


void func_454(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78472[0 /*14*/].f_5=4;
func_455(iVar0, iParam0, 0, iParam1);
}


void func_455(int iParam0, int iParam1, int iParam2, int iParam3){
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
uVar1=Global_78472[0 /*14*/].f_5;
if(iParam0==12){
iVar3=(iParam1 - iParam2);
if(iVar3 >=0){
iVar4=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
if(iVar4 > iVar3){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
Global_2883588=Var2.f_1;
Global_2883589=Var2.f_0;
func_445(&(Global_78472[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_445(&(Global_78472[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
func_445(&(Global_78472[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78670){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_445(&(Global_78472[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_413(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_445(&(Global_78472[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}


void func_456(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_457(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S1", 16);
break;
case 2:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S2", 16);
break;
case 3:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S3", 16);
break;
case 4:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S4", 16);
break;
case 5:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S5", 16);
break;
case 6:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S6", 16);
break;
case 7:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S7", 16);
break;
case 8:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S8", 16);
break;
case 9:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P1", 16);
break;
case 10:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P2", 16);
break;
case 11:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P3", 16);
break;
case 12:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P4", 16);
break;
case 13:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P5", 16);
break;
case 14:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P6", 16);
break;
case 15:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P7", 16);
break;
case 16:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P8", 16);
break;
case 17:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P9", 16);
break;
case 18:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P10", 16);
break;
case 19:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B1", 16);
break;
case 20:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B2", 16);
break;
case 21:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B3", 16);
break;
case 22:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B4", 16);
break;
case 23:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B5", 16);
break;
case 24:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B6", 16);
break;
case 25:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B7", 16);
break;
case 26:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B8", 16);
break;
case 27:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B9", 16);
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 28, iParam1);
return;
break;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_458(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
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
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
iVar8=0;
switch (iParam0){
case 0:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "HT_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 11:
StringCopy(&Var2, "HT_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 12:
StringCopy(&Var2, "HT_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 13:
StringCopy(&Var2, "HT_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 14:
StringCopy(&Var2, "HT_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=235;
iVar5=0;
iVar8=1;
break;
case 15:
StringCopy(&Var2, "HT_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=0;
iVar8=1;
break;
case 16:
StringCopy(&Var2, "HT_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 17:
StringCopy(&Var2, "HT_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 18:
StringCopy(&Var2, "HT_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "HT_FMF_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "HT_FMF_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=5000;
iVar5=0;
iVar8=1;
break;
case 21:
StringCopy(&Var2, "HT_FMF_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "HT_FMF_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "HT_FMF_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "HT_FMF_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "HT_FMF_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "HT_FMF_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 27:
StringCopy(&Var2, "HT_FMF_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 28:
StringCopy(&Var2, "HT_FMF_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 29:
StringCopy(&Var2, "HT_FMF_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "HT_FMF_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "HT_FMF_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "HT_FMF_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "HT_FMF_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "HT_FMF_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=120;
iVar5=0;
iVar8=1;
break;
case 35:
StringCopy(&Var2, "HT_FMF_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=400;
iVar5=0;
iVar8=1;
break;
case 36:
StringCopy(&Var2, "HT_FMF_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 37:
StringCopy(&Var2, "HT_FMF_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=375;
iVar5=0;
iVar8=1;
break;
case 38:
StringCopy(&Var2, "HT_FMF_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 39:
StringCopy(&Var2, "HT_FMF_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 40:
StringCopy(&Var2, "HT_FMF_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 41:
StringCopy(&Var2, "HT_FMF_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 42:
StringCopy(&Var2, "HT_FMF_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=325;
iVar5=0;
iVar8=1;
break;
case 43:
StringCopy(&Var2, "HT_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 44:
StringCopy(&Var2, "HT_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 45:
StringCopy(&Var2, "HT_FMF_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 46:
StringCopy(&Var2, "HT_FMF_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 47:
StringCopy(&Var2, "HT_FMF_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 48:
StringCopy(&Var2, "HT_FMF_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 49:
StringCopy(&Var2, "HT_FMF_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 50:
StringCopy(&Var2, "HT_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=255;
iVar5=0;
iVar8=1;
break;
case 51:
StringCopy(&Var2, "HT_FMF_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=360;
iVar5=0;
iVar8=1;
break;
case 52:
StringCopy(&Var2, "HT_FMF_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 53:
StringCopy(&Var2, "HT_FMF_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=3970;
iVar5=0;
iVar8=1;
break;
case 54:
StringCopy(&Var2, "HT_FMF_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=135;
iVar5=0;
iVar8=1;
break;
case 55:
StringCopy(&Var2, "HT_FMF_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=1355;
iVar5=0;
iVar8=1;
break;
case 56:
StringCopy(&Var2, "HT_FMF_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=110;
iVar5=0;
iVar8=1;
break;
case 57:
StringCopy(&Var2, "HT_FMF_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=140;
iVar5=0;
iVar8=1;
break;
case 58:
StringCopy(&Var2, "HT_FMF_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=130;
iVar5=0;
iVar8=1;
break;
case 59:
StringCopy(&Var2, "HT_FMF_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=230;
iVar5=0;
iVar8=1;
break;
case 60:
StringCopy(&Var2, "HT_FMF_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 61:
StringCopy(&Var2, "HT_FMF_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=515;
iVar5=0;
iVar8=1;
break;
case 62:
StringCopy(&Var2, "HT_FMF_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=545;
iVar5=0;
iVar8=1;
break;
case 63:
StringCopy(&Var2, "HT_FMF_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 64:
StringCopy(&Var2, "HT_FMF_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 65:
StringCopy(&Var2, "HT_FMF_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 66:
StringCopy(&Var2, "HT_FMF_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=1440;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 67:
StringCopy(&Var2, "HT_FMF_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "HT_FMF_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "HT_FMF_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "HT_FMF_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "HT_FMF_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "HT_FMF_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "HT_FMF_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "HT_FMF_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "HT_FMF_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 76:
StringCopy(&Var2, "HT_FMF_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 77:
StringCopy(&Var2, "HT_FMF_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 78:
StringCopy(&Var2, "HT_FMF_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 79:
StringCopy(&Var2, "HT_FMF_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=50;
iVar5=0;
iVar8=1;
break;
case 80:
StringCopy(&Var2, "HT_FMF_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 81:
StringCopy(&Var2, "HT_FMF_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=575;
iVar5=0;
iVar8=1;
break;
case 82:
StringCopy(&Var2, "HT_FMF_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=605;
iVar5=0;
iVar8=1;
break;
case 83:
StringCopy(&Var2, "HT_FMF_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "HT_FMF_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "HT_FMF_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "HT_FMF_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "HT_FMF_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "HT_FMF_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "HT_FMF_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "HT_FMF_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=285;
iVar5=0;
iVar8=1;
break;
case 91:
StringCopy(&Var2, "HT_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "HT_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=2125;
iVar5=0;
iVar8=1;
break;
case 93:
StringCopy(&Var2, "HT_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "HT_FMF_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "HT_FMF_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "HT_FMF_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 97:
StringCopy(&Var2, "HT_FMF_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "HT_FMF_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "HT_FMF_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 100:
StringCopy(&Var2, "HT_FMF_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 101:
StringCopy(&Var2, "HT_FMF_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 102:
StringCopy(&Var2, "HT_FMF_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "HT_FMF_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 104:
StringCopy(&Var2, "HT_FMF_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 105:
StringCopy(&Var2, "HT_FMF_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 106:
StringCopy(&Var2, "HT_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=295;
iVar5=0;
iVar8=1;
break;
case 107:
StringCopy(&Var2, "HT_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 108:
StringCopy(&Var2, "HT_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=200;
iVar5=0;
iVar8=1;
break;
case 109:
StringCopy(&Var2, "HT_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 110:
StringCopy(&Var2, "HT_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=855;
iVar5=0;
iVar8=1;
break;
case 111:
StringCopy(&Var2, "HT_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=1615;
iVar5=0;
iVar8=1;
break;
case 112:
StringCopy(&Var2, "HT_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=1130;
iVar5=0;
iVar8=1;
break;
case 113:
StringCopy(&Var2, "HT_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=165;
iVar5=0;
iVar8=1;
break;
case 114:
StringCopy(&Var2, "HT_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=215;
iVar5=0;
iVar8=1;
break;
case 115:
StringCopy(&Var2, "HT_FMF_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=145;
iVar5=0;
iVar8=1;
break;
case 116:
StringCopy(&Var2, "HT_FMF_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=250;
iVar5=0;
iVar8=1;
break;
case 117:
StringCopy(&Var2, "HT_FMF_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=110;
iVar5=0;
iVar8=1;
break;
case 118:
StringCopy(&Var2, "HT_FMF_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=145;
iVar5=0;
iVar8=1;
break;
case 119:
StringCopy(&Var2, "HT_FMF_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=105;
iVar5=0;
iVar8=1;
break;
case 120:
StringCopy(&Var2, "HT_FMF_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=105;
iVar5=0;
iVar8=1;
break;
case 121:
StringCopy(&Var2, "HT_FMF_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=115;
iVar5=0;
iVar8=1;
break;
case 122:
StringCopy(&Var2, "HT_FMF_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=115;
iVar5=0;
iVar8=1;
break;
case 123:
StringCopy(&Var2, "HT_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=390;
iVar5=0;
iVar8=1;
break;
case 124:
StringCopy(&Var2, "HT_FMF_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=395;
iVar5=0;
iVar8=1;
break;
case 125:
StringCopy(&Var2, "HT_FMF_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 126:
StringCopy(&Var2, "HT_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=425;
iVar5=0;
iVar8=1;
break;
case 127:
StringCopy(&Var2, "HT_FMF_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=600;
iVar5=0;
iVar8=1;
break;
case 128:
StringCopy(&Var2, "HT_FMF_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=590;
iVar5=0;
iVar8=1;
break;
case 129:
StringCopy(&Var2, "HT_FMF_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 130:
StringCopy(&Var2, "HT_FMF_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=555;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 131:
StringCopy(&Var2, "HE_FMF_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=1060;
iVar5=0;
iVar8=2;
break;
case 132:
StringCopy(&Var2, "HE_FMF_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=1400;
iVar5=0;
iVar8=2;
break;
case 133:
StringCopy(&Var2, "HE_FMF_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=1315;
iVar5=0;
iVar8=2;
break;
case 134:
StringCopy(&Var2, "HE_FMF_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=1230;
iVar5=0;
iVar8=2;
break;
case 135:
StringCopy(&Var2, "HE_FMF_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=1145;
iVar5=0;
iVar8=2;
break;
case 136:
StringCopy(&Var2, "HE_FMF_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=8450;
iVar5=0;
iVar8=2;
break;
case 137:
StringCopy(&Var2, "HE_FMF_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=675;
iVar5=0;
iVar8=2;
break;
case 138:
StringCopy(&Var2, "HE_FMF_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=8750;
iVar5=0;
iVar8=2;
break;
case 139:
StringCopy(&Var2, "HE_FMF_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=975;
iVar5=0;
iVar8=2;
break;
case 140:
StringCopy(&Var2, "HE_FMF_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
iVar5=0;
iVar8=2;
break;
case 141:
StringCopy(&Var2, "HE_FMF_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=865;
iVar5=0;
iVar8=2;
break;
case 142:
StringCopy(&Var2, "HE_FMF_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=890;
iVar5=0;
iVar8=2;
break;
case 143:
StringCopy(&Var2, "HE_FMF_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=730;
iVar5=0;
iVar8=2;
break;
case 144:
StringCopy(&Var2, "HE_FMF_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=650;
iVar5=0;
iVar8=2;
break;
case 145:
StringCopy(&Var2, "HE_FMF_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=645;
iVar5=0;
iVar8=2;
break;
case 146:
StringCopy(&Var2, "HE_FMF_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=755;
iVar5=0;
iVar8=2;
break;
case 147:
StringCopy(&Var2, "HE_FMF_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=13850;
iVar5=0;
iVar8=2;
break;
case 148:
StringCopy(&Var2, "HE_FMF_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=2900;
iVar5=0;
iVar8=2;
break;
case 149:
StringCopy(&Var2, "HE_FMF_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=2895;
iVar5=0;
iVar8=2;
break;
case 150:
StringCopy(&Var2, "HE_FMF_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=12500;
iVar5=0;
iVar8=2;
break;
case 151:
StringCopy(&Var2, "HE_FMF_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=15000;
iVar5=0;
iVar8=2;
break;
case 152:
StringCopy(&Var2, "HE_FMF_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=14750;
iVar5=0;
iVar8=2;
break;
case 153:
StringCopy(&Var2, "HE_FMF_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=13150;
iVar5=0;
iVar8=2;
break;
case 154:
StringCopy(&Var2, "HE_FMF_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=2925;
iVar5=0;
iVar8=2;
break;
}
switch (iParam0){
case 155:
StringCopy(&Var2, "G_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 156:
StringCopy(&Var2, "G_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 157:
StringCopy(&Var2, "G_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 158:
StringCopy(&Var2, "G_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 159:
StringCopy(&Var2, "G_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 160:
StringCopy(&Var2, "G_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=1;
iVar8=3;
break;
case 161:
StringCopy(&Var2, "G_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 162:
StringCopy(&Var2, "G_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 163:
StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=820;
iVar5=1;
iVar8=3;
break;
case 164:
StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=435;
iVar5=1;
iVar8=3;
break;
case 165:
StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 166:
StringCopy(&Var2, "G_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=160;
iVar5=1;
iVar8=3;
break;
case 167:
StringCopy(&Var2, "G_FMF_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=165;
iVar5=1;
iVar8=3;
break;
case 168:
StringCopy(&Var2, "G_FMF_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=170;
iVar5=1;
iVar8=3;
break;
case 169:
StringCopy(&Var2, "G_FMF_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 170:
StringCopy(&Var2, "G_FMF_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 171:
StringCopy(&Var2, "G_FMF_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 172:
StringCopy(&Var2, "G_FMF_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 173:
StringCopy(&Var2, "G_FMF_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 174:
StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
iVar3=1;
iVar4=8;
iVar1=970;
iVar5=1;
iVar8=3;
break;
case 175:
StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
iVar3=1;
iVar4=9;
iVar1=585;
iVar5=1;
iVar8=3;
break;
case 176:
StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
iVar3=1;
iVar4=10;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 177:
StringCopy(&Var2, "G_FMF_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 178:
StringCopy(&Var2, "G_FMF_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 179:
StringCopy(&Var2, "G_FMF_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 180:
StringCopy(&Var2, "G_FMF_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 181:
StringCopy(&Var2, "G_FMF_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=595;
iVar5=1;
iVar8=3;
break;
case 182:
StringCopy(&Var2, "G_FMF_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=160;
iVar5=1;
iVar8=3;
break;
case 183:
StringCopy(&Var2, "G_FMF_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=545;
iVar5=1;
iVar8=3;
break;
case 184:
StringCopy(&Var2, "G_FMF_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=590;
iVar5=1;
iVar8=3;
break;
case 185:
StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=1125;
iVar5=1;
iVar8=3;
break;
case 186:
StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=740;
iVar5=1;
iVar8=3;
break;
case 187:
StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=805;
iVar5=1;
iVar8=3;
break;
case 188:
StringCopy(&Var2, "G_FMF_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=6250;
iVar5=1;
iVar8=3;
break;
case 189:
StringCopy(&Var2, "G_FMF_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=4065;
iVar5=1;
iVar8=3;
break;
case 190:
StringCopy(&Var2, "G_FMF_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=3585;
iVar5=1;
iVar8=3;
break;
case 191:
StringCopy(&Var2, "G_FMF_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=4075;
iVar5=1;
iVar8=3;
break;
case 192:
StringCopy(&Var2, "G_FMF_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=4935;
iVar5=1;
iVar8=3;
break;
case 193:
StringCopy(&Var2, "G_FMF_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 194:
StringCopy(&Var2, "G_FMF_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=5600;
iVar5=1;
iVar8=3;
break;
case 195:
StringCopy(&Var2, "G_FMF_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=4790;
iVar5=1;
iVar8=3;
break;
case 196:
StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 197:
StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
iVar3=3;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 198:
StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
iVar3=3;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 199:
StringCopy(&Var2, "G_FMF_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=2245;
iVar5=1;
iVar8=3;
break;
case 200:
StringCopy(&Var2, "G_FMF_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=250;
iVar5=1;
iVar8=3;
break;
case 201:
StringCopy(&Var2, "G_FMF_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=210;
iVar5=1;
iVar8=3;
break;
case 202:
StringCopy(&Var2, "G_FMF_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 203:
StringCopy(&Var2, "G_FMF_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=1205;
iVar5=1;
iVar8=3;
break;
case 204:
StringCopy(&Var2, "G_FMF_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 205:
StringCopy(&Var2, "G_FMF_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=2215;
iVar5=1;
iVar8=3;
break;
case 206:
StringCopy(&Var2, "G_FMF_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 207:
StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=2835;
iVar5=1;
iVar8=3;
break;
case 208:
StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=2450;
iVar5=1;
iVar8=3;
break;
case 209:
StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=2515;
iVar5=1;
iVar8=3;
break;
case 210:
StringCopy(&Var2, "G_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 211:
StringCopy(&Var2, "G_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 212:
StringCopy(&Var2, "G_FMF_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 213:
StringCopy(&Var2, "G_FMF_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 214:
StringCopy(&Var2, "G_FMF_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 215:
StringCopy(&Var2, "G_FMF_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 216:
StringCopy(&Var2, "G_FMF_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 217:
StringCopy(&Var2, "G_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 218:
StringCopy(&Var2, "G_FMF_5_8", 16);
iVar3=5;
iVar4=8;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 219:
StringCopy(&Var2, "G_FMF_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 220:
StringCopy(&Var2, "G_FMF_5_10", 16);
iVar3=5;
iVar4=10;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 221:
StringCopy(&Var2, "G_FMF_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=5000;
iVar5=1;
iVar8=3;
break;
case 222:
StringCopy(&Var2, "G_FMF_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "G_FMF_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 224:
StringCopy(&Var2, "G_FMF_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 225:
StringCopy(&Var2, "G_FMF_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 226:
StringCopy(&Var2, "G_FMF_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 227:
StringCopy(&Var2, "G_FMF_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 228:
StringCopy(&Var2, "G_FMF_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 229:
StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
iVar3=6;
iVar4=8;
iVar1=2820;
iVar5=1;
iVar8=3;
break;
case 230:
StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
iVar3=6;
iVar4=9;
iVar1=2435;
iVar5=1;
iVar8=3;
break;
case 231:
StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
iVar3=6;
iVar4=10;
iVar1=2500;
iVar5=1;
iVar8=3;
break;
case 232:
StringCopy(&Var2, "G_FMF_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=4815;
iVar5=1;
iVar8=3;
break;
case 233:
StringCopy(&Var2, "G_FMF_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=4795;
iVar5=1;
iVar8=3;
break;
case 234:
StringCopy(&Var2, "G_FMF_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=4305;
iVar5=1;
iVar8=3;
break;
case 235:
StringCopy(&Var2, "G_FMF_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=4305;
iVar5=1;
iVar8=3;
break;
case 236:
StringCopy(&Var2, "G_FMF_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=4965;
iVar5=1;
iVar8=3;
break;
case 237:
StringCopy(&Var2, "G_FMF_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=480;
iVar5=1;
iVar8=3;
break;
case 238:
StringCopy(&Var2, "G_FMF_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=465;
iVar5=1;
iVar8=3;
break;
case 239:
StringCopy(&Var2, "G_FMF_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=4320;
iVar5=1;
iVar8=3;
break;
case 240:
StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=2390;
iVar5=1;
iVar8=3;
break;
case 241:
StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=2005;
iVar5=1;
iVar8=3;
break;
case 242:
StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=2070;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 243:
StringCopy(&Var2, "G_FMF_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 244:
StringCopy(&Var2, "G_FMF_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 245:
StringCopy(&Var2, "G_FMF_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 246:
StringCopy(&Var2, "G_FMF_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 247:
StringCopy(&Var2, "G_FMF_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 248:
StringCopy(&Var2, "G_FMF_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 249:
StringCopy(&Var2, "G_FMF_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 250:
StringCopy(&Var2, "G_FMF_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 251:
StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 252:
StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 253:
StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 254:
StringCopy(&Var2, "G_FMF_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=70;
iVar5=1;
iVar8=3;
break;
case 255:
StringCopy(&Var2, "G_FMF_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 256:
StringCopy(&Var2, "G_FMF_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 257:
StringCopy(&Var2, "G_FMF_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=570;
iVar5=1;
iVar8=3;
break;
case 258:
StringCopy(&Var2, "G_FMF_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=525;
iVar5=1;
iVar8=3;
break;
case 259:
StringCopy(&Var2, "G_FMF_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 260:
StringCopy(&Var2, "G_FMF_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 261:
StringCopy(&Var2, "G_FMF_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 262:
StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 263:
StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 264:
StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 265:
StringCopy(&Var2, "G_FMF_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=4065;
iVar5=1;
iVar8=3;
break;
case 266:
StringCopy(&Var2, "G_FMF_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 267:
StringCopy(&Var2, "G_FMF_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 268:
StringCopy(&Var2, "G_FMF_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=4275;
iVar5=1;
iVar8=3;
break;
case 269:
StringCopy(&Var2, "G_FMF_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 270:
StringCopy(&Var2, "G_FMF_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=80;
iVar5=1;
iVar8=3;
break;
case 271:
StringCopy(&Var2, "G_FMF_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 272:
StringCopy(&Var2, "G_FMF_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 273:
StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 274:
StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 275:
StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 276:
StringCopy(&Var2, "G_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=3660;
iVar5=1;
iVar8=3;
break;
case 277:
StringCopy(&Var2, "G_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=4165;
iVar5=1;
iVar8=3;
break;
case 278:
StringCopy(&Var2, "G_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=3670;
iVar5=1;
iVar8=3;
break;
case 279:
StringCopy(&Var2, "G_FMF_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 280:
StringCopy(&Var2, "G_FMF_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=3620;
iVar5=1;
iVar8=3;
break;
case 281:
StringCopy(&Var2, "G_FMF_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=3610;
iVar5=1;
iVar8=3;
break;
case 282:
StringCopy(&Var2, "G_FMF_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=4140;
iVar5=1;
iVar8=3;
break;
case 283:
StringCopy(&Var2, "G_FMF_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 284:
StringCopy(&Var2, "G_FMF_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 285:
StringCopy(&Var2, "G_FMF_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 286:
StringCopy(&Var2, "G_FMF_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 287:
StringCopy(&Var2, "G_FMF_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 288:
StringCopy(&Var2, "G_FMF_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 289:
StringCopy(&Var2, "G_FMF_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 290:
StringCopy(&Var2, "G_FMF_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 291:
StringCopy(&Var2, "G_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 292:
StringCopy(&Var2, "G_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 293:
StringCopy(&Var2, "G_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 294:
StringCopy(&Var2, "G_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 295:
StringCopy(&Var2, "G_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 296:
StringCopy(&Var2, "G_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 297:
StringCopy(&Var2, "G_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 298:
StringCopy(&Var2, "G_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 299:
StringCopy(&Var2, "G_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 300:
StringCopy(&Var2, "G_FMF_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 301:
StringCopy(&Var2, "G_FMF_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 302:
StringCopy(&Var2, "G_FMF_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 303:
StringCopy(&Var2, "G_FMF_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 304:
StringCopy(&Var2, "G_FMF_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 305:
StringCopy(&Var2, "G_FMF_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 306:
StringCopy(&Var2, "G_FMF_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 307:
StringCopy(&Var2, "G_FMF_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 308:
StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
iVar3=14;
iVar4=8;
iVar1=1490;
iVar5=1;
iVar8=3;
break;
case 309:
StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
iVar3=14;
iVar4=9;
iVar1=1105;
iVar5=1;
iVar8=3;
break;
case 310:
StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
iVar3=14;
iVar4=10;
iVar1=1170;
iVar5=1;
iVar8=3;
break;
case 311:
StringCopy(&Var2, "G_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 312:
StringCopy(&Var2, "G_FMF_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 313:
StringCopy(&Var2, "G_FMF_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 314:
StringCopy(&Var2, "G_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 315:
StringCopy(&Var2, "G_FMF_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 316:
StringCopy(&Var2, "G_FMF_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 317:
StringCopy(&Var2, "G_FMF_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 318:
StringCopy(&Var2, "G_FMF_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
}
switch (iParam0){
case 319:
StringCopy(&Var2, "W_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 320:
StringCopy(&Var2, "W_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 321:
StringCopy(&Var2, "W_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 322:
StringCopy(&Var2, "W_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 323:
StringCopy(&Var2, "W_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=825;
iVar5=6;
iVar8=4;
break;
case 324:
StringCopy(&Var2, "W_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 325:
StringCopy(&Var2, "W_FMF_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 326:
StringCopy(&Var2, "W_FMF_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
}
if(iVar8==1){
iVar9=(iParam0 - 10);
if(iVar9 >=0 && iVar9 < 121){
if(iVar9 > 8){
iVar9=(iVar9 - 1);
}
iVar1=round(((to_float(iVar1) * Global_262145.f_2054[iVar9]) * Global_297959.f_26));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
iVar1=round(((to_float(iVar1) * Global_262145.f_2175[iVar10]) * Global_297959.f_27));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
iVar1=round(((to_float(iVar1) * Global_262145.f_2200[iVar11]) * Global_297959.f_56));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 10){
iVar1=round(((to_float(iVar1) * Global_262145.f_2329[iVar12]) * Global_297959.f_28));
}}
if(iParam0 >=327){
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 327, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_26));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_56));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_28));
}}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_459(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
StringCopy(&Var2, "D_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=1;
iVar4=0;
iVar1=10000;
break;
case 2:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=2;
iVar4=0;
iVar1=5000;
break;
case 3:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=3;
iVar4=0;
iVar1=10000;
break;
case 4:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=4;
iVar4=0;
iVar1=5000;
break;
case 5:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=5;
iVar4=0;
iVar1=10000;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 6, iParam1);
return;
break;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_460(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
if(Global_262145.f_4151 !=-1){
iVar1=Global_262145.f_4151;
}else{
iVar1=310;
}
break;
case 2:
iVar3=1;
iVar4=1;
if(Global_262145.f_4152 !=-1){
iVar1=Global_262145.f_4152;
}else{
iVar1=125;
}
break;
case 3:
iVar3=1;
iVar4=2;
if(Global_262145.f_4153 !=-1){
iVar1=Global_262145.f_4153;
}else{
iVar1=145;
}
break;
case 4:
iVar3=1;
iVar4=3;
if(Global_262145.f_4154 !=-1){
iVar1=Global_262145.f_4154;
}else{
iVar1=130;
}
break;
case 5:
iVar3=1;
iVar4=4;
if(Global_262145.f_4155 !=-1){
iVar1=Global_262145.f_4155;
}else{
iVar1=265;
}
break;
case 6:
iVar3=1;
iVar4=5;
if(Global_262145.f_4156 !=-1){
iVar1=Global_262145.f_4156;
}else{
iVar1=280;
}
break;
case 7:
iVar3=2;
iVar4=0;
if(Global_262145.f_4157 !=-1){
iVar1=Global_262145.f_4157;
}else{
iVar1=295;
}
break;
case 8:
iVar3=2;
iVar4=1;
if(Global_262145.f_4158 !=-1){
iVar1=Global_262145.f_4158;
}else{
iVar1=95;
}
break;
case 9:
iVar3=2;
iVar4=2;
if(Global_262145.f_4159 !=-1){
iVar1=Global_262145.f_4159;
}else{
iVar1=85;
}
break;
case 10:
iVar3=2;
iVar4=3;
if(Global_262145.f_4160 !=-1){
iVar1=Global_262145.f_4160;
}else{
iVar1=95;
}
break;
case 11:
iVar3=2;
iVar4=4;
if(Global_262145.f_4161 !=-1){
iVar1=Global_262145.f_4161;
}else{
iVar1=105;
}
break;
case 12:
iVar3=2;
iVar4=5;
if(Global_262145.f_4162 !=-1){
iVar1=Global_262145.f_4162;
}else{
iVar1=95;
}
break;
case 13:
iVar3=3;
iVar4=0;
if(Global_262145.f_4163 !=-1){
iVar1=Global_262145.f_4163;
}else{
iVar1=35;
}
break;
case 14:
iVar3=3;
iVar4=1;
if(Global_262145.f_4164 !=-1){
iVar1=Global_262145.f_4164;
}else{
iVar1=35;
}
break;
case 15:
iVar3=3;
iVar4=2;
if(Global_262145.f_4165 !=-1){
iVar1=Global_262145.f_4165;
}else{
iVar1=30;
}
break;
case 16:
iVar3=3;
iVar4=3;
if(Global_262145.f_4166 !=-1){
iVar1=Global_262145.f_4166;
}else{
iVar1=40;
}
break;
case 17:
iVar3=3;
iVar4=4;
if(Global_262145.f_4167 !=-1){
iVar1=Global_262145.f_4167;
}else{
iVar1=35;
}
break;
case 18:
iVar3=3;
iVar4=5;
if(Global_262145.f_4168 !=-1){
iVar1=Global_262145.f_4168;
}else{
iVar1=35;
}
break;
case 19:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 21:
iVar3=4;
iVar4=2;
if(Global_262145.f_4169 !=-1){
iVar1=Global_262145.f_4169;
}else{
iVar1=355;
}
break;
case 22:
iVar3=4;
iVar4=3;
if(Global_262145.f_4170 !=-1){
iVar1=Global_262145.f_4170;
}else{
iVar1=370;
}
break;
case 23:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 24:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 25:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 26:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 28:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=5;
iVar4=4;
if(Global_262145.f_4171 !=-1){
iVar1=Global_262145.f_4171;
}else{
iVar1=110;
}
break;
case 30:
iVar3=5;
iVar4=5;
if(Global_262145.f_4172 !=-1){
iVar1=Global_262145.f_4172;
}else{
iVar1=160;
}
break;
case 31:
iVar3=6;
iVar4=0;
if(Global_262145.f_4173 !=-1){
iVar1=Global_262145.f_4173;
}else{
iVar1=385;
}
break;
case 32:
iVar3=6;
iVar4=1;
if(Global_262145.f_4174 !=-1){
iVar1=Global_262145.f_4174;
}else{
iVar1=190;
}
break;
case 33:
iVar3=6;
iVar4=2;
if(Global_262145.f_4175 !=-1){
iVar1=Global_262145.f_4175;
}else{
iVar1=235;
}
break;
case 34:
iVar3=6;
iVar4=3;
if(Global_262145.f_4176 !=-1){
iVar1=Global_262145.f_4176;
}else{
iVar1=220;
}
break;
case 35:
iVar3=6;
iVar4=4;
if(Global_262145.f_4177 !=-1){
iVar1=Global_262145.f_4177;
}else{
iVar1=250;
}
break;
case 36:
iVar3=6;
iVar4=5;
if(Global_262145.f_4178 !=-1){
iVar1=Global_262145.f_4178;
}else{
iVar1=205;
}
break;
case 37:
iVar3=7;
iVar4=0;
if(Global_262145.f_4179 !=-1){
iVar1=Global_262145.f_4179;
}else{
iVar1=445;
}
break;
case 38:
iVar3=7;
iVar4=1;
if(Global_262145.f_4180 !=-1){
iVar1=Global_262145.f_4180;
}else{
iVar1=175;
}
break;
case 39:
iVar3=7;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=8;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 49:
iVar3=9;
iVar4=0;
if(Global_262145.f_4181 !=-1){
iVar1=Global_262145.f_4181;
}else{
iVar1=340;
}
break;
case 50:
iVar3=9;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 51:
iVar3=9;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 52:
iVar3=9;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 53:
iVar3=9;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=9;
iVar4=5;
iVar1=0;
bVar0=true;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 55, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_58));
}
return;
break;
}
iVar1=round((to_float(iVar1) * Global_297959.f_58));
StringCopy(&Var2, "T_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_461(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=965;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=960;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=9500;
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=975;
break;
case 5:
iVar3=2;
iVar4=0;
iVar1=1185;
break;
case 6:
iVar3=2;
iVar4=1;
iVar1=15000;
break;
case 7:
iVar3=2;
iVar4=2;
iVar1=1115;
break;
case 8:
iVar3=2;
iVar4=3;
iVar1=1105;
break;
case 9:
iVar3=3;
iVar4=0;
iVar1=25000;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=510;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=530;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=5500;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=535;
break;
case 14:
iVar3=5;
iVar4=0;
iVar1=1510;
break;
case 15:
iVar3=5;
iVar4=1;
iVar1=1530;
break;
case 16:
iVar3=5;
iVar4=2;
iVar1=14500;
break;
case 17:
iVar3=5;
iVar4=3;
iVar1=13000;
break;
case 18:
iVar3=6;
iVar4=0;
iVar1=8000;
break;
case 19:
iVar3=6;
iVar4=1;
iVar1=1265;
break;
case 20:
iVar3=6;
iVar4=2;
iVar1=8500;
break;
case 21:
iVar3=6;
iVar4=3;
iVar1=1210;
break;
case 22:
iVar3=7;
iVar4=0;
iVar1=2360;
break;
case 23:
iVar3=7;
iVar4=1;
iVar1=22500;
break;
case 24:
iVar3=7;
iVar4=2;
iVar1=2375;
break;
case 25:
iVar3=7;
iVar4=3;
iVar1=2485;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 26, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_29));
}
return;
break;
}
StringCopy(&Var2, "M_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=(iParam0 - 1);
if(iVar8 >=0 && iVar8 < 26){
iVar1=round(((to_float(iVar1) * Global_262145.f_2027[iVar8]) * Global_297959.f_29));
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_462(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=1765;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=760;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=760;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=765;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=85;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=80;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=90;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=90;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=95;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=100;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=60;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=55;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=100;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=1255;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=65;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=1050;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=1895;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=185;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=190;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=115;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=415;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=115;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=135;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=125;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=105;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=130;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=3530;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=2610;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=1295;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=120;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=160;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=160;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=145;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=105;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=115;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=150;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=540;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=115;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=110;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=120;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=460;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=120;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=120;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=415;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=135;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=140;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=160;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=120;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=1025;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=1560;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=145;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=120;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=365;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=100;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=65;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=85;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=50;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=35;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=50;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=50;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=2395;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=3675;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=320;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=3875;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 112:
iVar3=7;
iVar4=0;
iVar1=2050;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=375;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=2105;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=345;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=380;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=340;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=385;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=4135;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=370;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=375;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=385;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=365;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=325;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=325;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=370;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=1025;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=390;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=400;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=390;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=365;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=410;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=4125;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=4365;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=5365;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=6225;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=3755;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=405;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=4115;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=2240;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=3850;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=3110;
break;
case 144:
iVar3=9;
iVar4=0;
iVar1=1950;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=455;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=405;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=410;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=415;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=4425;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=115;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=65;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=85;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=75;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=0;
iVar1=115;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=360;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=135;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=175;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=675;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=100;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=400;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=340;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=195;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=215;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=120;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=165;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=100;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=1040;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=100;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=120;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=210;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=205;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=200;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=100;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=1420;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=445;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=435;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=420;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=425;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=435;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=425;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=430;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=3215;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=3320;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=440;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=440;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=445;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=450;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=450;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=1255;
break;
case 240:
iVar3=15;
iVar4=0;
iVar1=750;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=165;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=460;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=190;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=195;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=200;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=205;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=210;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=215;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=220;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=455;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=175;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=800;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=790;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=175;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=190;
break;
}
StringCopy(&Var2, "F_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1770[iVar8]) * Global_297959.f_25));
}
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_25));
}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_463(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=270;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=750;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=450;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=4875;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=1760;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=1090;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=2465;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=305;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=290;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=410;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=255;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=255;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=405;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=5000;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=4480;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=4335;
break;
}
switch (iParam0){
case 16:
iVar3=1;
iVar4=0;
iVar1=375;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=265;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=275;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=280;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=300;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=265;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=255;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=250;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=260;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=250;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=225;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=230;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=215;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=650;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=425;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=345;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=115;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=110;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=250;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=290;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=115;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=135;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=125;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=120;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=130;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=110;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=525;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=115;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=535;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=135;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=120;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=130;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=140;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=130;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=520;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=215;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=220;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=225;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=245;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=215;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=630;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=250;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=260;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=200;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=225;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=230;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=725;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=650;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=230;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=230;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=280;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=330;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=320;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=315;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=850;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=535;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=530;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=890;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=440;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=455;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=295;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=180;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=150;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=150;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=155;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=840;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=205;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=150;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=950;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=580;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=200;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=665;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=780;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=615;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=250;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=495;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=435;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=420;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=390;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=485;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=380;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=1295;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=1135;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=1425;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=1645;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=1925;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=2250;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=365;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=360;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=2245;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=2170;
break;
case 160:
iVar3=10;
iVar4=0;
iVar1=50;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=100;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=65;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=275;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=300;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=145;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=150;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=110;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=95;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=155;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=155;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=510;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=165;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=465;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=250;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=110;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=470;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=480;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=155;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=275;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=395;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=285;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=560;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=595;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=295;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=230;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=215;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=270;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=295;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=285;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=215;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=210;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=290;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=230;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=215;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=90;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=105;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=100;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=105;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=230;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=130;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=350;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=335;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
StringCopy(&Var2, "L_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1256[iVar8]) * Global_297959.f_23));
}
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_23));
}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_464(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
case 9:
iVar3=9;
iVar4=0;
break;
case 10:
iVar3=10;
iVar4=0;
break;
case 11:
iVar3=11;
iVar4=0;
break;
case 12:
iVar3=12;
iVar4=0;
break;
case 13:
iVar3=13;
iVar4=0;
break;
case 14:
iVar3=14;
iVar4=0;
break;
case 15:
iVar3=15;
iVar4=0;
break;
}
if(iParam0 >=16){
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 16, iParam1);
return;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_465(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=1;
iVar4=1;
break;
case 3:
iVar3=1;
iVar4=2;
break;
case 4:
iVar3=1;
iVar4=3;
break;
case 5:
iVar3=1;
iVar4=4;
break;
case 6:
iVar3=2;
iVar4=0;
break;
case 7:
iVar3=2;
iVar4=1;
break;
case 8:
iVar3=2;
iVar4=2;
break;
case 9:
iVar3=2;
iVar4=3;
break;
case 10:
iVar3=2;
iVar4=4;
break;
case 11:
iVar3=3;
iVar4=0;
break;
case 12:
iVar3=3;
iVar4=1;
break;
case 13:
iVar3=3;
iVar4=2;
break;
case 14:
iVar3=3;
iVar4=3;
break;
case 15:
iVar3=3;
iVar4=4;
break;
case 16:
iVar3=4;
iVar4=0;
break;
case 17:
iVar3=4;
iVar4=1;
break;
case 18:
iVar3=4;
iVar4=2;
break;
case 19:
iVar3=4;
iVar4=3;
break;
case 20:
iVar3=4;
iVar4=4;
break;
case 21:
iVar3=5;
iVar4=0;
break;
case 22:
iVar3=5;
iVar4=1;
break;
case 23:
iVar3=5;
iVar4=2;
break;
case 24:
iVar3=5;
iVar4=3;
break;
case 25:
iVar3=5;
iVar4=4;
break;
case 26:
iVar3=6;
iVar4=0;
break;
case 27:
iVar3=6;
iVar4=1;
break;
case 28:
iVar3=6;
iVar4=2;
break;
case 29:
iVar3=6;
iVar4=3;
break;
case 30:
iVar3=6;
iVar4=4;
break;
case 31:
iVar3=7;
iVar4=0;
break;
case 32:
iVar3=7;
iVar4=1;
break;
case 33:
iVar3=7;
iVar4=2;
break;
case 34:
iVar3=7;
iVar4=3;
break;
case 35:
iVar3=7;
iVar4=4;
break;
}
if(iParam0 >=36){
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 36, iParam1);
return;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_466(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
switch (iParam0){
case 0:
StringCopy(&Var2, "U_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
StringCopy(&Var2, "U_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=225;
break;
case 2:
StringCopy(&Var2, "U_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
StringCopy(&Var2, "U_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=40;
break;
case 4:
StringCopy(&Var2, "U_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=40;
break;
case 5:
StringCopy(&Var2, "U_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=40;
break;
case 6:
StringCopy(&Var2, "U_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=40;
break;
case 7:
StringCopy(&Var2, "U_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=45;
break;
case 8:
StringCopy(&Var2, "U_FMF_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=40;
break;
case 9:
StringCopy(&Var2, "U_FMF_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "U_FMF_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=135;
break;
case 11:
StringCopy(&Var2, "U_FMF_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=60;
break;
case 12:
StringCopy(&Var2, "U_FMF_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=220;
break;
case 13:
StringCopy(&Var2, "U_FMF_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=45;
break;
case 14:
StringCopy(&Var2, "U_FMF_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=45;
break;
case 15:
StringCopy(&Var2, "U_FMF_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=125;
break;
case 16:
StringCopy(&Var2, "U_FMF_0_0", 16);
iVar3=1;
iVar4=0;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "U_FMF_0_1", 16);
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
StringCopy(&Var2, "U_FMF_0_2", 16);
iVar3=1;
iVar4=2;
iVar1=50;
break;
case 19:
StringCopy(&Var2, "U_FMF_0_3", 16);
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
StringCopy(&Var2, "U_FMF_0_4", 16);
iVar3=1;
iVar4=4;
iVar1=40;
break;
case 21:
StringCopy(&Var2, "U_FMF_0_5", 16);
iVar3=1;
iVar4=5;
iVar1=40;
break;
case 22:
StringCopy(&Var2, "U_FMF_0_6", 16);
iVar3=1;
iVar4=6;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "U_FMF_0_7", 16);
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
StringCopy(&Var2, "U_FMF_0_8", 16);
iVar3=1;
iVar4=8;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "U_FMF_0_9", 16);
iVar3=1;
iVar4=9;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "U_FMF_0_10", 16);
iVar3=1;
iVar4=10;
iVar1=135;
break;
case 27:
StringCopy(&Var2, "U_FMF_0_11", 16);
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
StringCopy(&Var2, "U_FMF_0_12", 16);
iVar3=1;
iVar4=12;
iVar1=220;
break;
case 29:
StringCopy(&Var2, "U_FMF_0_13", 16);
iVar3=1;
iVar4=13;
iVar1=45;
break;
case 30:
StringCopy(&Var2, "U_FMF_0_14", 16);
iVar3=1;
iVar4=14;
iVar1=45;
break;
case 31:
StringCopy(&Var2, "U_FMF_0_15", 16);
iVar3=1;
iVar4=15;
iVar1=125;
break;
case 32:
iVar3=2;
iVar4=0;
break;
case 33:
iVar3=3;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "U_FMF_4_0", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "U_FMF_4_1", 16);
iVar3=4;
iVar4=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "U_FMF_4_2", 16);
iVar3=4;
iVar4=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "U_FMF_4_3", 16);
iVar3=4;
iVar4=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "U_FMF_4_4", 16);
iVar3=4;
iVar4=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "U_FMF_4_5", 16);
iVar3=4;
iVar4=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "U_FMF_4_6", 16);
iVar3=4;
iVar4=6;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "U_FMF_4_7", 16);
iVar3=4;
iVar4=7;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "U_FMF_4_8", 16);
iVar3=4;
iVar4=8;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "U_FMF_4_9", 16);
iVar3=4;
iVar4=9;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "U_FMF_4_10", 16);
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "U_FMF_4_11", 16);
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "U_FMF_4_12", 16);
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "U_FMF_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[77]));
break;
case 48:
StringCopy(&Var2, "U_FMF_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[78]));
break;
case 49:
StringCopy(&Var2, "U_FMF_4_15", 16);
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "U_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[80]));
break;
case 51:
StringCopy(&Var2, "U_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[81]));
break;
case 52:
StringCopy(&Var2, "U_FMF_5_2", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "U_FMF_5_3", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "U_FMF_5_4", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 55:
StringCopy(&Var2, "U_FMF_5_5", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 56:
StringCopy(&Var2, "U_FMF_5_6", 16);
iVar3=5;
iVar4=6;
bVar0=true;
break;
case 57:
StringCopy(&Var2, "U_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[87]));
break;
case 58:
StringCopy(&Var2, "U_FMF_5_8", 16);
iVar3=5;
iVar4=8;
bVar0=true;
break;
case 59:
StringCopy(&Var2, "U_FMF_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=90;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[89]));
break;
case 60:
StringCopy(&Var2, "U_FMF_5_10", 16);
iVar3=5;
iVar4=10;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "U_FMF_5_11", 16);
iVar3=5;
iVar4=11;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "U_FMF_5_12", 16);
iVar3=5;
iVar4=12;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "U_FMF_5_13", 16);
iVar3=5;
iVar4=13;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "U_FMF_5_14", 16);
iVar3=5;
iVar4=14;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "U_FMF_5_15", 16);
iVar3=5;
iVar4=15;
bVar0=true;
break;
case 66:
iVar3=6;
iVar4=0;
break;
case 67:
iVar3=7;
iVar4=0;
break;
case 68:
iVar3=8;
iVar4=0;
break;
case 69:
iVar3=9;
iVar4=0;
break;
case 70:
iVar3=10;
iVar4=0;
break;
case 71:
StringCopy(&Var2, "U_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=90;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[176]));
break;
case 72:
StringCopy(&Var2, "U_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=95;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[177]));
break;
case 73:
StringCopy(&Var2, "U_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=95;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[178]));
break;
case 74:
StringCopy(&Var2, "U_FMF_11_3", 16);
iVar3=11;
iVar4=3;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "U_FMF_11_4", 16);
iVar3=11;
iVar4=4;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "U_FMF_11_5", 16);
iVar3=11;
iVar4=5;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "U_FMF_11_6", 16);
iVar3=11;
iVar4=6;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "U_FMF_11_7", 16);
iVar3=11;
iVar4=7;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "U_FMF_11_8", 16);
iVar3=11;
iVar4=8;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "U_FMF_11_9", 16);
iVar3=11;
iVar4=9;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "U_FMF_11_10", 16);
iVar3=11;
iVar4=10;
iVar1=150;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[186]));
break;
case 82:
StringCopy(&Var2, "U_FMF_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=65;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[187]));
break;
case 83:
StringCopy(&Var2, "U_FMF_11_12", 16);
iVar3=11;
iVar4=12;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "U_FMF_11_13", 16);
iVar3=11;
iVar4=13;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "U_FMF_11_14", 16);
iVar3=11;
iVar4=14;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "U_FMF_11_15", 16);
iVar3=11;
iVar4=15;
iVar1=145;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[191]));
break;
case 87:
StringCopy(&Var2, "U_FMF_12_0", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "U_FMF_12_1", 16);
iVar3=12;
iVar4=1;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "U_FMF_12_2", 16);
iVar3=12;
iVar4=2;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "U_FMF_12_3", 16);
iVar3=12;
iVar4=3;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "U_FMF_12_4", 16);
iVar3=12;
iVar4=4;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "U_FMF_12_5", 16);
iVar3=12;
iVar4=5;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "U_FMF_12_6", 16);
iVar3=12;
iVar4=6;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "U_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=1560;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[199]));
break;
case 95:
StringCopy(&Var2, "U_FMF_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=195;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[200]));
break;
case 96:
StringCopy(&Var2, "U_FMF_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=200;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[201]));
break;
case 97:
StringCopy(&Var2, "U_FMF_12_10", 16);
iVar3=12;
iVar4=10;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "U_FMF_12_11", 16);
iVar3=12;
iVar4=11;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "U_FMF_12_12", 16);
iVar3=12;
iVar4=12;
bVar0=true;
break;
case 100:
StringCopy(&Var2, "U_FMF_12_13", 16);
iVar3=12;
iVar4=13;
bVar0=true;
break;
case 101:
StringCopy(&Var2, "U_FMF_12_14", 16);
iVar3=12;
iVar4=14;
bVar0=true;
break;
case 102:
StringCopy(&Var2, "U_FMF_12_15", 16);
iVar3=12;
iVar4=15;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "U_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=975;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[208]));
break;
case 104:
StringCopy(&Var2, "U_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=2670;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[209]));
break;
case 105:
StringCopy(&Var2, "U_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[210]));
break;
case 106:
StringCopy(&Var2, "U_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=400;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[211]));
break;
case 107:
StringCopy(&Var2, "U_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=2500;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[212]));
break;
case 108:
StringCopy(&Var2, "U_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=2060;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[213]));
break;
case 109:
StringCopy(&Var2, "U_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=2620;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[214]));
break;
case 110:
StringCopy(&Var2, "U_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[215]));
break;
case 111:
StringCopy(&Var2, "U_FMF_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[216]));
break;
case 112:
StringCopy(&Var2, "U_FMF_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=2280;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[217]));
break;
case 113:
StringCopy(&Var2, "U_FMF_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[218]));
break;
case 114:
StringCopy(&Var2, "U_FMF_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=2390;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[219]));
break;
case 115:
StringCopy(&Var2, "U_FMF_13_12", 16);
iVar3=13;
iVar4=12;
iVar1=2610;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[220]));
break;
case 116:
StringCopy(&Var2, "U_FMF_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=1450;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[221]));
break;
case 117:
StringCopy(&Var2, "U_FMF_13_14", 16);
iVar3=13;
iVar4=14;
iVar1=2720;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[222]));
break;
case 118:
StringCopy(&Var2, "U_FMF_13_15", 16);
iVar3=13;
iVar4=15;
iVar1=4995;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[223]));
break;
case 119:
iVar3=14;
iVar4=0;
break;
case 120:
StringCopy(&Var2, "U_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=325;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[240]));
break;
case 121:
StringCopy(&Var2, "U_FMF_15_1", 16);
iVar3=15;
iVar4=1;
bVar0=true;
break;
case 122:
StringCopy(&Var2, "U_FMF_15_2", 16);
iVar3=15;
iVar4=2;
bVar0=true;
break;
case 123:
StringCopy(&Var2, "U_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=130;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[243]));
break;
case 124:
StringCopy(&Var2, "U_FMF_15_4", 16);
iVar3=15;
iVar4=4;
bVar0=true;
break;
case 125:
StringCopy(&Var2, "U_FMF_15_5", 16);
iVar3=15;
iVar4=5;
bVar0=true;
break;
case 126:
StringCopy(&Var2, "U_FMF_15_6", 16);
iVar3=15;
iVar4=6;
bVar0=true;
break;
case 127:
StringCopy(&Var2, "U_FMF_15_7", 16);
iVar3=15;
iVar4=7;
bVar0=true;
break;
case 128:
StringCopy(&Var2, "U_FMF_15_8", 16);
iVar3=15;
iVar4=8;
bVar0=true;
break;
case 129:
StringCopy(&Var2, "U_FMF_15_9", 16);
iVar3=15;
iVar4=9;
bVar0=true;
break;
case 130:
StringCopy(&Var2, "U_FMF_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=450;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[250]));
break;
case 131:
StringCopy(&Var2, "U_FMF_15_11", 16);
iVar3=15;
iVar4=11;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[251]));
break;
case 132:
StringCopy(&Var2, "U_FMF_15_12", 16);
iVar3=15;
iVar4=12;
bVar0=true;
break;
case 133:
StringCopy(&Var2, "U_FMF_15_13", 16);
iVar3=15;
iVar4=13;
bVar0=true;
break;
case 134:
StringCopy(&Var2, "U_FMF_15_14", 16);
iVar3=15;
iVar4=14;
bVar0=true;
break;
case 135:
StringCopy(&Var2, "U_FMF_15_15", 16);
iVar3=15;
iVar4=15;
bVar0=true;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 136, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_24));
}
return;
break;
}
if(iParam0==4 || iParam0==20){
if(func_467(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[4]));
}}elseif(iParam0==7 || iParam0==23){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==9 || iParam0==25){
if(func_467(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round((to_float(500) * Global_262145.f_2988));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[9]));
}}elseif(iParam0 >=0 && iParam0 < 16){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round((to_float(iVar1) * Global_262145.f_1513[iVar8]));
}}elseif(iParam0 >=16 && iParam0 < 32){
iVar9=(iParam0 - 16);
if(iVar9 >=0 && iVar9 < 256){
iVar1=round((to_float(iVar1) * Global_262145.f_1513[iVar9]));
}}
iVar1=round((to_float(iVar1) * Global_297959.f_24));
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

int func_467(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_469(iParam0)==14385){
return 0;
}
uVar0=func_468(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_110(iVar1));
}


var func__468(var uParam0, int iParam1){
var uVar0;
uVar0=func_80(func_469(uParam0), iParam1);
return uVar0;
}

int func_469(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_113(iVar0);
if((func_84()==0 || func_470()==0) || (func_84()==999 && func_470()==999)){
switch (iVar1){
case 0:
return 1039;
break;
case 1:
return 1040;
break;
case 2:
return 1041;
break;
case 3:
return 1042;
break;
case 4:
return 1043;
break;
case 5:
return 1503;
break;
case 6:
return 1758;
break;
case 7:
return 1952;
break;
case 8:
return 1953;
break;
case 9:
return 1954;
break;
case 10:
return 1955;
break;
case 11:
return 1956;
break;
case 12:
return 1957;
break;
case 13:
return 2424;
break;
case 14:
return 2444;
break;
case 15:
return 2447;
break;
case 16:
return 2450;
break;
case 17:
return 2614;
break;
case 18:
return 2617;
break;
case 19:
return 2620;
break;
case 20:
return 3786;
break;
case 21:
return 3789;
break;
case 22:
return 3864;
break;
case 23:
return 3867;
break;
case 24:
return 3870;
break;
case 25:
return 3873;
break;
case 26:
return 5364;
break;
case 27:
return 5367;
break;
case 28:
return 5469;
break;
case 29:
return 5472;
break;
case 30:
return 6431;
break;
case 31:
return 6434;
break;
case 32:
return 7255;
break;
case 33:
return 7258;
break;
case 34:
return 7261;
break;
case 35:
return 7970;
break;
case 36:
return 7973;
break;
case 37:
return 7976;
break;
case 38:
return 7979;
break;
case 39:
return 8501;
break;
case 40:
return 8504;
break;
case 41:
return 8507;
break;
case 42:
return 8510;
break;
case 43:
return 8906;
break;
case 44:
return 8909;
break;
case 45:
return 8912;
break;
case 46:
return 10287;
break;
case 47:
return 10290;
break;
case 48:
return 10413;
break;
case 49:
return 10416;
break;
case 50:
return 11824;
break;
case 51:
return 11827;
break;
}}
return 14385;
}

int func_470(){
return Global_32284;
}


void func_471(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=225;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=40;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=40;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=40;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=40;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=45;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=40;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=135;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=60;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=220;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=45;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=45;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=125;
break;
}
switch (iParam0){
case 16:
iVar3=1;
iVar4=0;
iVar1=390;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=230;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=355;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=5000;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=2725;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=3265;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=3625;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=4220;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=310;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=45;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=210;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=75;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=50;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=60;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=50;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=295;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=80;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=75;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=2250;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=275;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=445;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=50;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=40;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=45;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=470;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=95;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=95;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=360;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=100;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=60;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=295;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=460;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=1980;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=2110;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=95;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=40;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=40;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=45;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=60;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=375;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=90;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=900;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=1000;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=1050;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=1000;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=2975;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=1100;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=1825;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=1750;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=1025;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=1075;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=2805;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=2250;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=495;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=95;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=95;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=525;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=100;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=110;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=100;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=110;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=130;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=560;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=295;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=975;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=160;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=100;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=1700;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=380;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=95;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=95;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=110;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=95;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=90;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=85;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=215;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=90;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=95;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=95;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=150;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=65;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=145;
break;
}
switch (iParam0){
case 192:
iVar3=12;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=1560;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=195;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=200;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=975;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=2670;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=480;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=400;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=2500;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=2060;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=2620;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=475;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=490;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=2280;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=485;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=2390;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=2610;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=1450;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=2720;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=4995;
break;
}
switch (iParam0){
case 224:
iVar3=14;
iVar4=0;
iVar1=265;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=385;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=345;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=330;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=430;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=375;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=375;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=295;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=360;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=325;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=340;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=435;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=300;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=315;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=415;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=420;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=325;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=130;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=450;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=465;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
StringCopy(&Var2, "U_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0==4){
if(func_467(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_297959.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[4]) * Global_297959.f_24));
}}elseif(iParam0==7){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_297959.f_24));
}elseif(iParam0==9){
if(func_467(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_297959.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[9]) * Global_297959.f_24));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1513[iVar8]) * Global_297959.f_24));
}}
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_24));
}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_472(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[0]));
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[1]));
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=495;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[2]));
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[3]));
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[4]));
break;
case 5:
iVar3=1;
iVar4=4;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[5]));
break;
case 6:
iVar3=1;
iVar4=5;
iVar1=0;
break;
case 7:
iVar3=2;
iVar4=0;
iVar1=440;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[6]));
break;
case 8:
iVar3=2;
iVar4=1;
iVar1=435;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[7]));
break;
case 9:
iVar3=2;
iVar4=2;
iVar1=430;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[8]));
break;
case 10:
iVar3=2;
iVar4=3;
iVar1=425;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[9]));
break;
case 11:
iVar3=2;
iVar4=4;
iVar1=420;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[10]));
break;
case 12:
iVar3=2;
iVar4=5;
iVar1=0;
break;
case 13:
iVar3=3;
iVar4=0;
iVar1=190;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[11]));
break;
case 14:
iVar3=3;
iVar4=1;
iVar1=185;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[12]));
break;
case 15:
iVar3=3;
iVar4=2;
iVar1=180;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[13]));
break;
case 16:
iVar3=3;
iVar4=3;
iVar1=175;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[14]));
break;
case 17:
iVar3=3;
iVar4=4;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[15]));
break;
case 18:
iVar3=4;
iVar4=0;
iVar1=295;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[16]));
break;
case 19:
iVar3=4;
iVar4=1;
iVar1=290;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[17]));
break;
case 20:
iVar3=4;
iVar4=2;
iVar1=285;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[18]));
break;
case 21:
iVar3=4;
iVar4=3;
iVar1=280;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[19]));
break;
case 22:
iVar3=4;
iVar4=4;
iVar1=275;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[20]));
break;
case 23:
iVar3=4;
iVar4=5;
iVar1=0;
break;
case 24:
iVar3=5;
iVar4=0;
iVar1=2000;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[21]));
break;
case 25:
iVar3=5;
iVar4=1;
iVar1=1995;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[22]));
break;
case 26:
iVar3=5;
iVar4=2;
iVar1=1990;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[23]));
break;
case 27:
iVar3=5;
iVar4=3;
iVar1=1985;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[24]));
break;
case 28:
iVar3=5;
iVar4=4;
iVar1=1980;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[25]));
break;
case 29:
iVar3=5;
iVar4=5;
iVar1=0;
break;
case 30:
iVar3=6;
iVar4=0;
iVar1=1150;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[26]));
break;
case 31:
iVar3=6;
iVar4=1;
iVar1=1145;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[27]));
break;
case 32:
iVar3=6;
iVar4=2;
iVar1=1140;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[28]));
break;
case 33:
iVar3=6;
iVar4=3;
iVar1=1135;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[29]));
break;
case 34:
iVar3=6;
iVar4=4;
iVar1=1130;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[30]));
break;
case 35:
iVar3=7;
iVar4=0;
iVar1=550;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[31]));
break;
case 36:
iVar3=7;
iVar4=1;
iVar1=545;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[32]));
break;
case 37:
iVar3=7;
iVar4=2;
iVar1=540;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[33]));
break;
case 38:
iVar3=7;
iVar4=3;
iVar1=535;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[34]));
break;
case 39:
iVar3=7;
iVar4=4;
iVar1=530;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[35]));
break;
case 40:
iVar3=7;
iVar4=5;
iVar1=0;
break;
case 41:
iVar3=8;
iVar4=0;
iVar1=580;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[36]));
break;
case 42:
iVar3=8;
iVar4=1;
iVar1=575;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[37]));
break;
case 43:
iVar3=8;
iVar4=2;
iVar1=570;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[38]));
break;
case 44:
iVar3=8;
iVar4=3;
iVar1=565;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[39]));
break;
case 45:
iVar3=8;
iVar4=4;
iVar1=560;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[40]));
break;
case 46:
iVar3=8;
iVar4=5;
iVar1=0;
break;
case 47:
iVar3=9;
iVar4=0;
iVar1=1100;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[41]));
break;
case 48:
iVar3=9;
iVar4=1;
iVar1=1095;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[42]));
break;
case 49:
iVar3=9;
iVar4=2;
iVar1=1090;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[43]));
break;
case 50:
iVar3=9;
iVar4=3;
iVar1=1085;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[44]));
break;
case 51:
iVar3=9;
iVar4=4;
iVar1=1080;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[45]));
break;
case 52:
iVar3=9;
iVar4=5;
iVar1=0;
break;
case 53:
iVar3=10;
iVar4=0;
iVar1=520;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[46]));
break;
case 54:
iVar3=10;
iVar4=1;
iVar1=515;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[47]));
break;
case 55:
iVar3=10;
iVar4=2;
iVar1=510;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[48]));
break;
case 56:
iVar3=10;
iVar4=3;
iVar1=505;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[49]));
break;
case 57:
iVar3=10;
iVar4=4;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[50]));
break;
case 58:
iVar3=10;
iVar4=5;
iVar1=0;
break;
case 59:
iVar3=10;
iVar4=6;
iVar1=0;
break;
case 60:
iVar3=11;
iVar4=0;
iVar1=395;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[51]));
break;
case 61:
iVar3=11;
iVar4=1;
iVar1=390;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[52]));
break;
case 62:
iVar3=11;
iVar4=2;
iVar1=385;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[53]));
break;
case 63:
iVar3=11;
iVar4=3;
iVar1=380;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[54]));
break;
case 64:
iVar3=11;
iVar4=4;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[55]));
break;
case 65:
iVar3=11;
iVar4=5;
iVar1=0;
break;
case 66:
iVar3=11;
iVar4=6;
iVar1=0;
break;
case 67:
iVar3=12;
iVar4=0;
iVar1=1050;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[56]));
break;
case 68:
iVar3=12;
iVar4=1;
iVar1=1045;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[57]));
break;
case 69:
iVar3=12;
iVar4=2;
iVar1=1040;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[58]));
break;
case 70:
iVar3=12;
iVar4=3;
iVar1=1035;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[59]));
break;
case 71:
iVar3=12;
iVar4=4;
iVar1=1030;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[60]));
break;
case 72:
iVar3=12;
iVar4=5;
iVar1=0;
break;
case 73:
iVar3=13;
iVar4=0;
iVar1=1200;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[61]));
break;
case 74:
iVar3=13;
iVar4=1;
iVar1=1195;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[62]));
break;
case 75:
iVar3=13;
iVar4=2;
iVar1=1190;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[63]));
break;
case 76:
iVar3=13;
iVar4=3;
iVar1=1185;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[64]));
break;
case 77:
iVar3=13;
iVar4=4;
iVar1=1180;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[65]));
break;
case 78:
iVar3=13;
iVar4=5;
iVar1=0;
break;
case 79:
iVar3=14;
iVar4=0;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[66]));
break;
case 80:
iVar3=14;
iVar4=1;
iVar1=470;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[67]));
break;
case 81:
iVar3=14;
iVar4=2;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[68]));
break;
case 82:
iVar3=14;
iVar4=3;
iVar1=460;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[69]));
break;
case 83:
iVar3=14;
iVar4=4;
iVar1=455;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[70]));
break;
case 84:
iVar3=14;
iVar4=5;
iVar1=0;
break;
case 85:
iVar3=15;
iVar4=0;
iVar1=950;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[71]));
break;
case 86:
iVar3=15;
iVar4=1;
iVar1=945;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[72]));
break;
case 87:
iVar3=15;
iVar4=2;
iVar1=940;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[73]));
break;
case 88:
iVar3=15;
iVar4=3;
iVar1=935;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[74]));
break;
case 89:
iVar3=15;
iVar4=4;
iVar1=930;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[75]));
break;
case 90:
iVar3=15;
iVar4=5;
iVar1=0;
break;
case 91:
iVar3=15;
iVar4=6;
iVar1=0;
break;
default:
Global_78472[0 /*14*/].f_5=4;
func_455(iVar7, iParam0, 92, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_473(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_488(iParam1, iParam2);
break;
case 11:
func_487(iParam1, iParam2);
break;
case 8:
func_486(iParam1, iParam2);
break;
case 9:
func_485(iParam1, iParam2);
break;
case 3:
func_484(iParam1, iParam2);
break;
case 4:
func_483(iParam1, iParam2);
break;
case 6:
func_482(iParam1, iParam2);
break;
case 1:
func_481(iParam1, iParam2);
break;
case 7:
func_480(iParam1, iParam2);
break;
case 10:
func_479(iParam1, iParam2);
break;
case 14:
func_478(iParam1, iParam2);
break;
case 12:
func_477(iParam1, iParam2);
break;
case 5:
func_476(iParam1, iParam2);
break;
case 0:
func_475(iParam1, iParam2);
break;
case 13:
func_474(iParam1);
break;
}}


void func_474(int iParam0){
bool bVar0;
int iVar1;
char* sVar2;
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
switch (iParam0){
case 31:
iVar3=0;
iVar4=0;
break;
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=0;
iVar4=0;
break;
case 2:
iVar3=0;
iVar4=0;
break;
case 3:
iVar3=0;
iVar4=0;
break;
case 4:
iVar3=0;
iVar4=0;
break;
case 5:
iVar3=0;
iVar4=0;
break;
case 6:
iVar3=0;
iVar4=0;
break;
case 7:
iVar3=0;
iVar4=0;
break;
case 8:
iVar3=0;
iVar4=0;
break;
case 9:
iVar3=0;
iVar4=0;
break;
case 10:
iVar3=0;
iVar4=0;
break;
case 11:
iVar3=0;
iVar4=0;
break;
case 12:
iVar3=0;
iVar4=0;
break;
case 13:
iVar3=0;
iVar4=0;
break;
case 14:
iVar3=0;
iVar4=0;
break;
case 15:
iVar3=0;
iVar4=0;
break;
case 16:
iVar3=0;
iVar4=0;
break;
case 17:
iVar3=0;
iVar4=0;
break;
case 18:
iVar3=0;
iVar4=0;
break;
case 19:
iVar3=0;
iVar4=0;
break;
case 20:
iVar3=0;
iVar4=0;
break;
case 21:
iVar3=0;
iVar4=0;
break;
case 22:
iVar3=0;
iVar4=0;
break;
case 23:
iVar3=0;
iVar4=0;
break;
case 24:
iVar3=0;
iVar4=0;
break;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_475(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78472[0 /*14*/].f_5=3;
func_455(iVar0, iParam0, 0, iParam1);
}


void func_476(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_477(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S1", 16);
break;
case 2:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S2", 16);
break;
case 3:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S3", 16);
break;
case 4:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S4", 16);
break;
case 5:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S5", 16);
break;
case 6:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S6", 16);
break;
case 7:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S7", 16);
break;
case 8:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S8", 16);
break;
case 9:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S9", 16);
break;
case 10:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P1", 16);
break;
case 11:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P2", 16);
break;
case 12:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P3", 16);
break;
case 13:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P4", 16);
break;
case 14:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P5", 16);
break;
case 15:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P6", 16);
break;
case 16:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P7", 16);
break;
case 17:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P8", 16);
break;
case 18:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B1", 16);
break;
case 19:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B2", 16);
break;
case 20:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B3", 16);
break;
case 21:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B4", 16);
break;
case 22:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B5", 16);
break;
case 23:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B6", 16);
break;
case 24:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B7", 16);
break;
case 25:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B8", 16);
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 26, iParam1);
return;
break;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_478(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
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
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
iVar8=0;
switch (iParam0){
case 0:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "HT_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 11:
StringCopy(&Var2, "HT_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 12:
StringCopy(&Var2, "HT_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 13:
StringCopy(&Var2, "HT_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 14:
StringCopy(&Var2, "HT_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=235;
iVar5=0;
iVar8=1;
break;
case 15:
StringCopy(&Var2, "HT_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=0;
iVar8=1;
break;
case 16:
StringCopy(&Var2, "HT_FMM_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 17:
StringCopy(&Var2, "HT_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 18:
StringCopy(&Var2, "HT_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "HT_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 20:
StringCopy(&Var2, "HT_FMM_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 21:
StringCopy(&Var2, "HT_FMM_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 22:
StringCopy(&Var2, "HT_FMM_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=320;
iVar5=0;
iVar8=1;
break;
case 23:
StringCopy(&Var2, "HT_FMM_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=185;
iVar5=0;
iVar8=1;
break;
case 24:
StringCopy(&Var2, "HT_FMM_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=245;
iVar5=0;
iVar8=1;
break;
case 25:
StringCopy(&Var2, "HT_FMM_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 26:
StringCopy(&Var2, "HT_FMM_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 27:
StringCopy(&Var2, "HT_FMM_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 28:
StringCopy(&Var2, "HT_FMM_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=60;
iVar5=0;
iVar8=1;
break;
case 29:
StringCopy(&Var2, "HT_FMM_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 30:
StringCopy(&Var2, "HT_FMM_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "HT_FMM_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "HT_FMM_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "HT_FMM_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "HT_FMM_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "HT_FMM_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=415;
iVar5=0;
iVar8=1;
break;
case 36:
StringCopy(&Var2, "HT_FMM_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=315;
iVar5=0;
iVar8=1;
break;
case 37:
StringCopy(&Var2, "HT_FMM_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "HT_FMM_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "HT_FMM_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "HT_FMM_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "HT_FMM_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "HT_FMM_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "HT_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 44:
StringCopy(&Var2, "HT_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=60;
iVar5=0;
iVar8=1;
break;
case 45:
StringCopy(&Var2, "HT_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "HT_FMM_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "HT_FMM_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "HT_FMM_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "HT_FMM_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "HT_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "HT_FMM_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 52:
StringCopy(&Var2, "HT_FMM_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=265;
iVar5=0;
iVar8=1;
break;
case 53:
StringCopy(&Var2, "HT_FMM_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=170;
iVar5=0;
iVar8=1;
break;
case 54:
StringCopy(&Var2, "HT_FMM_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=135;
iVar5=0;
iVar8=1;
break;
case 55:
StringCopy(&Var2, "HT_FMM_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=570;
iVar5=0;
iVar8=1;
break;
case 56:
StringCopy(&Var2, "HT_FMM_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=560;
iVar5=0;
iVar8=1;
break;
case 57:
StringCopy(&Var2, "HT_FMM_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=140;
iVar5=0;
iVar8=1;
break;
case 58:
StringCopy(&Var2, "HT_FMM_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=130;
iVar5=0;
iVar8=1;
break;
case 59:
StringCopy(&Var2, "HT_FMM_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=260;
iVar5=0;
iVar8=1;
break;
case 60:
StringCopy(&Var2, "HT_FMM_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=215;
iVar5=0;
iVar8=1;
break;
case 61:
StringCopy(&Var2, "HT_FMM_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=430;
iVar5=0;
iVar8=1;
break;
case 62:
StringCopy(&Var2, "HT_FMM_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 63:
StringCopy(&Var2, "HT_FMM_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=200;
iVar5=0;
iVar8=1;
break;
case 64:
StringCopy(&Var2, "HT_FMM_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 65:
StringCopy(&Var2, "HT_FMM_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 66:
StringCopy(&Var2, "HT_FMM_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=165;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 67:
StringCopy(&Var2, "HT_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "HT_FMM_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "HT_FMM_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "HT_FMM_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "HT_FMM_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "HT_FMM_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "HT_FMM_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "HT_FMM_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "HT_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "HT_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "HT_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "HT_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "HT_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "HT_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=100;
iVar5=0;
iVar8=1;
break;
case 81:
StringCopy(&Var2, "HT_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 82:
StringCopy(&Var2, "HT_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 83:
StringCopy(&Var2, "HT_FMM_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "HT_FMM_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "HT_FMM_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "HT_FMM_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "HT_FMM_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "HT_FMM_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 89:
StringCopy(&Var2, "HT_FMM_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "HT_FMM_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 91:
StringCopy(&Var2, "HT_FMM_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "HT_FMM_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "HT_FMM_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "HT_FMM_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "HT_FMM_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "HT_FMM_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 97:
StringCopy(&Var2, "HT_FMM_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "HT_FMM_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "HT_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=1715;
iVar5=0;
iVar8=1;
break;
case 100:
StringCopy(&Var2, "HT_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=3900;
iVar5=0;
iVar8=1;
break;
case 101:
StringCopy(&Var2, "HT_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=1550;
iVar5=0;
iVar8=1;
break;
case 102:
StringCopy(&Var2, "HT_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "HT_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=4250;
iVar5=0;
iVar8=1;
break;
case 104:
StringCopy(&Var2, "HT_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 105:
StringCopy(&Var2, "HT_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=4460;
iVar5=0;
iVar8=1;
break;
case 106:
StringCopy(&Var2, "HT_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=4970;
iVar5=0;
iVar8=1;
break;
case 107:
StringCopy(&Var2, "HT_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=290;
iVar5=0;
iVar8=1;
break;
case 108:
StringCopy(&Var2, "HT_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=305;
iVar5=0;
iVar8=1;
break;
case 109:
StringCopy(&Var2, "HT_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=4170;
iVar5=0;
iVar8=1;
break;
case 110:
StringCopy(&Var2, "HT_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=335;
iVar5=0;
iVar8=1;
break;
case 111:
StringCopy(&Var2, "HT_FMM_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=4940;
iVar5=0;
iVar8=1;
break;
case 112:
StringCopy(&Var2, "HT_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=275;
iVar5=0;
iVar8=1;
break;
case 113:
StringCopy(&Var2, "HT_FMM_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=5000;
iVar5=0;
iVar8=1;
break;
case 114:
StringCopy(&Var2, "HT_FMM_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=3620;
iVar5=0;
iVar8=1;
break;
case 115:
StringCopy(&Var2, "HT_FMM_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 116:
StringCopy(&Var2, "HT_FMM_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 117:
StringCopy(&Var2, "HT_FMM_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 118:
StringCopy(&Var2, "HT_FMM_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 119:
StringCopy(&Var2, "HT_FMM_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 120:
StringCopy(&Var2, "HT_FMM_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 121:
StringCopy(&Var2, "HT_FMM_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=350;
iVar5=0;
iVar8=1;
break;
case 122:
StringCopy(&Var2, "HT_FMM_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 123:
StringCopy(&Var2, "HT_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=365;
iVar5=0;
iVar8=1;
break;
case 124:
StringCopy(&Var2, "HT_FMM_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=380;
iVar5=0;
iVar8=1;
break;
case 125:
StringCopy(&Var2, "HT_FMM_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 126:
StringCopy(&Var2, "HT_FMM_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 127:
StringCopy(&Var2, "HT_FMM_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=600;
iVar5=0;
iVar8=1;
break;
case 128:
StringCopy(&Var2, "HT_FMM_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=590;
iVar5=0;
iVar8=1;
break;
case 129:
StringCopy(&Var2, "HT_FMM_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=395;
iVar5=0;
iVar8=1;
break;
case 130:
StringCopy(&Var2, "HT_FMM_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=555;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 131:
StringCopy(&Var2, "HE_FMM_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=1060;
iVar5=0;
iVar8=2;
break;
case 132:
StringCopy(&Var2, "HE_FMM_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=1400;
iVar5=0;
iVar8=2;
break;
case 133:
StringCopy(&Var2, "HE_FMM_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=1315;
iVar5=0;
iVar8=2;
break;
case 134:
StringCopy(&Var2, "HE_FMM_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=1230;
iVar5=0;
iVar8=2;
break;
case 135:
StringCopy(&Var2, "HE_FMM_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=1145;
iVar5=0;
iVar8=2;
break;
case 136:
StringCopy(&Var2, "HE_FMM_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=8450;
iVar5=0;
iVar8=2;
break;
case 137:
StringCopy(&Var2, "HE_FMM_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=675;
iVar5=0;
iVar8=2;
break;
case 138:
StringCopy(&Var2, "HE_FMM_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=8750;
iVar5=0;
iVar8=2;
break;
case 139:
StringCopy(&Var2, "HE_FMM_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=975;
iVar5=0;
iVar8=2;
break;
case 140:
StringCopy(&Var2, "HE_FMM_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
iVar5=0;
iVar8=2;
break;
case 141:
StringCopy(&Var2, "HE_FMM_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=865;
iVar5=0;
iVar8=2;
break;
case 142:
StringCopy(&Var2, "HE_FMM_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=890;
iVar5=0;
iVar8=2;
break;
case 143:
StringCopy(&Var2, "HE_FMM_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=730;
iVar5=0;
iVar8=2;
break;
case 144:
StringCopy(&Var2, "HE_FMM_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=650;
iVar5=0;
iVar8=2;
break;
case 145:
StringCopy(&Var2, "HE_FMM_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=645;
iVar5=0;
iVar8=2;
break;
case 146:
StringCopy(&Var2, "HE_FMM_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=755;
iVar5=0;
iVar8=2;
break;
case 147:
StringCopy(&Var2, "HE_FMM_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=13850;
iVar5=0;
iVar8=2;
break;
case 148:
StringCopy(&Var2, "HE_FMM_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=2900;
iVar5=0;
iVar8=2;
break;
case 149:
StringCopy(&Var2, "HE_FMM_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=2895;
iVar5=0;
iVar8=2;
break;
case 150:
StringCopy(&Var2, "HE_FMM_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=12500;
iVar5=0;
iVar8=2;
break;
case 151:
StringCopy(&Var2, "HE_FMM_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=15000;
iVar5=0;
iVar8=2;
break;
case 152:
StringCopy(&Var2, "HE_FMM_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=14750;
iVar5=0;
iVar8=2;
break;
case 153:
StringCopy(&Var2, "HE_FMM_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=13150;
iVar5=0;
iVar8=2;
break;
case 154:
StringCopy(&Var2, "HE_FMM_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=2925;
iVar5=0;
iVar8=2;
break;
}
switch (iParam0){
case 155:
StringCopy(&Var2, "G_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 156:
StringCopy(&Var2, "G_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 157:
StringCopy(&Var2, "G_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 158:
StringCopy(&Var2, "G_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 159:
StringCopy(&Var2, "G_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 160:
StringCopy(&Var2, "G_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 161:
StringCopy(&Var2, "G_FMM_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 162:
StringCopy(&Var2, "G_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 163:
StringCopy(&Var2, "G_FMM_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 164:
StringCopy(&Var2, "G_FMM_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 165:
StringCopy(&Var2, "G_FMM_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 166:
StringCopy(&Var2, "G_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 167:
StringCopy(&Var2, "G_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 168:
StringCopy(&Var2, "G_FMM_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 169:
StringCopy(&Var2, "G_FMM_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 170:
StringCopy(&Var2, "G_FMM_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "G_FMM_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 172:
StringCopy(&Var2, "G_FMM_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 173:
StringCopy(&Var2, "G_FMM_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 174:
StringCopy(&Var2, "G_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 175:
StringCopy(&Var2, "G_FMM_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 176:
StringCopy(&Var2, "G_FMM_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=380;
iVar5=1;
iVar8=3;
break;
case 177:
StringCopy(&Var2, "G_FMM_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 178:
StringCopy(&Var2, "G_FMM_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 179:
StringCopy(&Var2, "G_FMM_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 180:
StringCopy(&Var2, "G_FMM_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 181:
StringCopy(&Var2, "G_FMM_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=390;
iVar5=1;
iVar8=3;
break;
case 182:
StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=950;
iVar5=1;
iVar8=3;
break;
case 183:
StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=565;
iVar5=1;
iVar8=3;
break;
case 184:
StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=630;
iVar5=1;
iVar8=3;
break;
case 185:
StringCopy(&Var2, "G_FMM_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=70;
iVar5=1;
iVar8=3;
break;
case 186:
StringCopy(&Var2, "G_FMM_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 187:
StringCopy(&Var2, "G_FMM_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 188:
StringCopy(&Var2, "G_FMM_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=95;
iVar5=1;
iVar8=3;
break;
case 189:
StringCopy(&Var2, "G_FMM_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 190:
StringCopy(&Var2, "G_FMM_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 191:
StringCopy(&Var2, "G_FMM_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 192:
StringCopy(&Var2, "G_FMM_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 193:
StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 194:
StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
iVar3=3;
iVar4=9;
iVar1=265;
iVar5=1;
iVar8=3;
break;
case 195:
StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
iVar3=3;
iVar4=10;
iVar1=330;
iVar5=1;
iVar8=3;
break;
case 196:
StringCopy(&Var2, "G_FMM_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 197:
StringCopy(&Var2, "G_FMM_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=250;
iVar5=1;
iVar8=3;
break;
case 198:
StringCopy(&Var2, "G_FMM_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=210;
iVar5=1;
iVar8=3;
break;
case 199:
StringCopy(&Var2, "G_FMM_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 200:
StringCopy(&Var2, "G_FMM_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 201:
StringCopy(&Var2, "G_FMM_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 202:
StringCopy(&Var2, "G_FMM_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 203:
StringCopy(&Var2, "G_FMM_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 204:
StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=995;
iVar5=1;
iVar8=3;
break;
case 205:
StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=610;
iVar5=1;
iVar8=3;
break;
case 206:
StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=675;
iVar5=1;
iVar8=3;
break;
case 207:
StringCopy(&Var2, "G_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=4050;
iVar5=1;
iVar8=3;
break;
case 208:
StringCopy(&Var2, "G_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=4060;
iVar5=1;
iVar8=3;
break;
case 209:
StringCopy(&Var2, "G_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=170;
iVar5=1;
iVar8=3;
break;
case 210:
StringCopy(&Var2, "G_FMM_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 211:
StringCopy(&Var2, "G_FMM_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 212:
StringCopy(&Var2, "G_FMM_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 213:
StringCopy(&Var2, "G_FMM_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 214:
StringCopy(&Var2, "G_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 215:
StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
iVar3=5;
iVar4=8;
iVar1=1760;
iVar5=1;
iVar8=3;
break;
case 216:
StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=1375;
iVar5=1;
iVar8=3;
break;
case 217:
StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
iVar3=5;
iVar4=10;
iVar1=1440;
iVar5=1;
iVar8=3;
break;
case 218:
StringCopy(&Var2, "G_FMM_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 219:
StringCopy(&Var2, "G_FMM_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 220:
StringCopy(&Var2, "G_FMM_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 221:
StringCopy(&Var2, "G_FMM_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 222:
StringCopy(&Var2, "G_FMM_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "G_FMM_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 224:
StringCopy(&Var2, "G_FMM_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 225:
StringCopy(&Var2, "G_FMM_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 226:
StringCopy(&Var2, "G_FMM_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 227:
StringCopy(&Var2, "G_FMM_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 228:
StringCopy(&Var2, "G_FMM_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 229:
StringCopy(&Var2, "G_FMM_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=220;
iVar5=1;
iVar8=3;
break;
case 230:
StringCopy(&Var2, "G_FMM_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=185;
iVar5=1;
iVar8=3;
break;
case 231:
StringCopy(&Var2, "G_FMM_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=1445;
iVar5=1;
iVar8=3;
break;
case 232:
StringCopy(&Var2, "G_FMM_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=530;
iVar5=1;
iVar8=3;
break;
case 233:
StringCopy(&Var2, "G_FMM_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 234:
StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=1170;
iVar5=1;
iVar8=3;
break;
case 235:
StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=785;
iVar5=1;
iVar8=3;
break;
case 236:
StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=850;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 237:
StringCopy(&Var2, "G_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=4260;
iVar5=1;
iVar8=3;
break;
case 238:
StringCopy(&Var2, "G_FMM_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=4310;
iVar5=1;
iVar8=3;
break;
case 239:
StringCopy(&Var2, "G_FMM_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=4130;
iVar5=1;
iVar8=3;
break;
case 240:
StringCopy(&Var2, "G_FMM_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 241:
StringCopy(&Var2, "G_FMM_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 242:
StringCopy(&Var2, "G_FMM_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 243:
StringCopy(&Var2, "G_FMM_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 244:
StringCopy(&Var2, "G_FMM_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 245:
StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=1885;
iVar5=1;
iVar8=3;
break;
case 246:
StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=1500;
iVar5=1;
iVar8=3;
break;
case 247:
StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=1565;
iVar5=1;
iVar8=3;
break;
case 248:
StringCopy(&Var2, "G_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 249:
StringCopy(&Var2, "G_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 250:
StringCopy(&Var2, "G_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 251:
StringCopy(&Var2, "G_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 252:
StringCopy(&Var2, "G_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 253:
StringCopy(&Var2, "G_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=4290;
iVar5=1;
iVar8=3;
break;
case 254:
StringCopy(&Var2, "G_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=4150;
iVar5=1;
iVar8=3;
break;
case 255:
StringCopy(&Var2, "G_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=4295;
iVar5=1;
iVar8=3;
break;
case 256:
StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 257:
StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 258:
StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 259:
StringCopy(&Var2, "G_FMM_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=6240;
iVar5=1;
iVar8=3;
break;
case 260:
StringCopy(&Var2, "G_FMM_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=4955;
iVar5=1;
iVar8=3;
break;
case 261:
StringCopy(&Var2, "G_FMM_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=5590;
iVar5=1;
iVar8=3;
break;
case 262:
StringCopy(&Var2, "G_FMM_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=4920;
iVar5=1;
iVar8=3;
break;
case 263:
StringCopy(&Var2, "G_FMM_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=4990;
iVar5=1;
iVar8=3;
break;
case 264:
StringCopy(&Var2, "G_FMM_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=4780;
iVar5=1;
iVar8=3;
break;
case 265:
StringCopy(&Var2, "G_FMM_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=4775;
iVar5=1;
iVar8=3;
break;
case 266:
StringCopy(&Var2, "G_FMM_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=4800;
iVar5=1;
iVar8=3;
break;
case 267:
StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=2835;
iVar5=1;
iVar8=3;
break;
case 268:
StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=2450;
iVar5=1;
iVar8=3;
break;
case 269:
StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=2515;
iVar5=1;
iVar8=3;
break;
case 270:
StringCopy(&Var2, "G_FMM_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 271:
StringCopy(&Var2, "G_FMM_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 272:
StringCopy(&Var2, "G_FMM_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 273:
StringCopy(&Var2, "G_FMM_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 274:
StringCopy(&Var2, "G_FMM_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 275:
StringCopy(&Var2, "G_FMM_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 277:
StringCopy(&Var2, "G_FMM_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 278:
StringCopy(&Var2, "G_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=385;
iVar5=1;
iVar8=3;
break;
case 279:
StringCopy(&Var2, "G_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=310;
iVar5=1;
iVar8=3;
break;
case 280:
StringCopy(&Var2, "G_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=3655;
iVar5=1;
iVar8=3;
break;
case 281:
StringCopy(&Var2, "G_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=4055;
iVar5=1;
iVar8=3;
break;
case 282:
StringCopy(&Var2, "G_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=3595;
iVar5=1;
iVar8=3;
break;
case 283:
StringCopy(&Var2, "G_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=3605;
iVar5=1;
iVar8=3;
break;
case 284:
StringCopy(&Var2, "G_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=3645;
iVar5=1;
iVar8=3;
break;
case 285:
StringCopy(&Var2, "G_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=320;
iVar5=1;
iVar8=3;
break;
case 286:
StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=2820;
iVar5=1;
iVar8=3;
break;
case 287:
StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=2435;
iVar5=1;
iVar8=3;
break;
case 288:
StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=2500;
iVar5=1;
iVar8=3;
break;
case 289:
StringCopy(&Var2, "G_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=230;
iVar5=1;
iVar8=3;
break;
case 290:
StringCopy(&Var2, "G_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=1605;
iVar5=1;
iVar8=3;
break;
case 291:
StringCopy(&Var2, "G_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=2230;
iVar5=1;
iVar8=3;
break;
case 292:
StringCopy(&Var2, "G_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=220;
iVar5=1;
iVar8=3;
break;
case 293:
StringCopy(&Var2, "G_FMM_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=185;
iVar5=1;
iVar8=3;
break;
case 294:
StringCopy(&Var2, "G_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=2070;
iVar5=1;
iVar8=3;
break;
case 295:
StringCopy(&Var2, "G_FMM_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=2205;
iVar5=1;
iVar8=3;
break;
case 296:
StringCopy(&Var2, "G_FMM_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=1690;
iVar5=1;
iVar8=3;
break;
case 297:
StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=2715;
iVar5=1;
iVar8=3;
break;
case 298:
StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=2330;
iVar5=1;
iVar8=3;
break;
case 299:
StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=2395;
iVar5=1;
iVar8=3;
break;
case 300:
StringCopy(&Var2, "G_FMM_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 301:
StringCopy(&Var2, "G_FMM_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 302:
StringCopy(&Var2, "G_FMM_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 303:
StringCopy(&Var2, "G_FMM_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 304:
StringCopy(&Var2, "G_FMM_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 305:
StringCopy(&Var2, "G_FMM_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 306:
StringCopy(&Var2, "G_FMM_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 307:
StringCopy(&Var2, "G_FMM_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 308:
StringCopy(&Var2, "G_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=515;
iVar5=1;
iVar8=3;
break;
case 309:
StringCopy(&Var2, "G_FMM_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 310:
StringCopy(&Var2, "G_FMM_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 311:
StringCopy(&Var2, "G_FMM_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=95;
iVar5=1;
iVar8=3;
break;
case 312:
StringCopy(&Var2, "G_FMM_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 313:
StringCopy(&Var2, "G_FMM_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 314:
StringCopy(&Var2, "G_FMM_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=485;
iVar5=1;
iVar8=3;
break;
case 315:
StringCopy(&Var2, "G_FMM_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=545;
iVar5=1;
iVar8=3;
break;
case 316:
StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 317:
StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 318:
StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 319:
StringCopy(&Var2, "W_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=5000;
iVar5=6;
iVar8=4;
break;
case 320:
StringCopy(&Var2, "W_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 321:
StringCopy(&Var2, "W_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 322:
StringCopy(&Var2, "W_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 323:
StringCopy(&Var2, "W_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 324:
StringCopy(&Var2, "W_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=695;
iVar5=6;
iVar8=4;
break;
case 325:
StringCopy(&Var2, "W_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 326:
StringCopy(&Var2, "W_FMM_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
}
if(iVar8==1){
iVar9=(iParam0 - 10);
if(iVar9 >=0 && iVar9 < 121){
if(iVar9 > 8){
iVar9=(iVar9 - 1);
}
iVar1=round(((to_float(iVar1) * Global_262145.f_965[iVar9]) * Global_297959.f_18));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
iVar1=round(((to_float(iVar1) * Global_262145.f_1086[iVar10]) * Global_297959.f_19));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
iVar1=round(((to_float(iVar1) * Global_262145.f_1111[iVar11]) * Global_297959.f_20));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 15){
iVar1=round(((to_float(iVar1) * Global_262145.f_1240[iVar12]) * Global_297959.f_21));
}}
if(iParam0 >=327){
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 327, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_18));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_20));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_21));
}}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_479(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
StringCopy(&Var2, "D_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=5000;
break;
case 2:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=10000;
break;
case 3:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=3;
iVar4=0;
iVar1=5000;
break;
case 4:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=4;
iVar4=0;
iVar1=10000;
break;
case 5:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=5;
iVar4=0;
iVar1=5000;
break;
case 6:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=6;
iVar4=0;
iVar1=10000;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 7, iParam1);
return;
break;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_480(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 4:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=3;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=3;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=3;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 17:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 18:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 19:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 21:
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 22:
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 23:
iVar3=4;
iVar4=13;
bVar0=true;
break;
case 24:
iVar3=4;
iVar4=14;
bVar0=true;
break;
case 25:
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 26:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 28:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 31:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 32:
iVar3=6;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=6;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=7;
iVar4=0;
break;
case 39:
iVar3=8;
iVar4=0;
break;
case 40:
iVar3=9;
iVar4=0;
break;
case 41:
iVar3=10;
iVar4=0;
if(Global_262145.f_4182 !=-1){
iVar1=Global_262145.f_4182;
}else{
iVar1=115;
}
break;
case 42:
iVar3=10;
iVar4=1;
if(Global_262145.f_4183 !=-1){
iVar1=Global_262145.f_4183;
}else{
iVar1=125;
}
break;
case 43:
iVar3=10;
iVar4=2;
if(Global_262145.f_4184 !=-1){
iVar1=Global_262145.f_4184;
}else{
iVar1=130;
}
break;
case 44:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 49:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 50:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 51:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 52:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 53:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 55:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 56:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 57:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 58:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 59:
iVar3=11;
iVar4=2;
if(Global_262145.f_4188 !=-1){
iVar1=Global_262145.f_4188;
}else{
iVar1=725;
}
break;
case 60:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 61:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 62:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 63:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 64:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 65:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 67:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=12;
iVar4=0;
if(Global_262145.f_4185 !=-1){
iVar1=Global_262145.f_4185;
}else{
iVar1=65;
}
break;
case 74:
iVar3=12;
iVar4=1;
if(Global_262145.f_4186 !=-1){
iVar1=Global_262145.f_4186;
}else{
iVar1=65;
}
break;
case 75:
iVar3=12;
iVar4=2;
if(Global_262145.f_4187 !=-1){
iVar1=Global_262145.f_4187;
}else{
iVar1=95;
}
break;
case 76:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=12;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 81:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 82:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=13;
iVar4=0;
break;
case 90:
iVar3=14;
iVar4=0;
break;
case 91:
iVar3=15;
iVar4=0;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 92, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_57));
}
return;
break;
}
iVar1=round((to_float(iVar1) * Global_297959.f_57));
StringCopy(&Var2, "T_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_481(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=965;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=960;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=9500;
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=975;
break;
case 5:
iVar3=2;
iVar4=0;
iVar1=1185;
break;
case 6:
iVar3=2;
iVar4=1;
iVar1=15000;
break;
case 7:
iVar3=2;
iVar4=2;
iVar1=1115;
break;
case 8:
iVar3=2;
iVar4=3;
iVar1=1105;
break;
case 9:
iVar3=3;
iVar4=0;
iVar1=25000;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=510;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=530;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=5500;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=535;
break;
case 14:
iVar3=5;
iVar4=0;
iVar1=1510;
break;
case 15:
iVar3=5;
iVar4=1;
iVar1=1530;
break;
case 16:
iVar3=5;
iVar4=2;
iVar1=14500;
break;
case 17:
iVar3=5;
iVar4=3;
iVar1=13000;
break;
case 18:
iVar3=6;
iVar4=0;
iVar1=8000;
break;
case 19:
iVar3=6;
iVar4=1;
iVar1=1265;
break;
case 20:
iVar3=6;
iVar4=2;
iVar1=8500;
break;
case 21:
iVar3=6;
iVar4=3;
iVar1=1210;
break;
case 22:
iVar3=7;
iVar4=0;
iVar1=2360;
break;
case 23:
iVar3=7;
iVar4=1;
iVar1=22500;
break;
case 24:
iVar3=7;
iVar4=2;
iVar1=2375;
break;
case 25:
iVar3=7;
iVar4=3;
iVar1=2485;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 26, iParam1);
return;
break;
}
StringCopy(&Var2, "M_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=(iParam0 - 1);
if(iVar8 >=0 && iVar8 < 26){
iVar1=round(((to_float(iVar1) * Global_262145.f_938[iVar8]) * Global_297959.f_22));
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_482(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=300;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=285;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=180;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=190;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=190;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=165;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=200;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=480;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=155;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=350;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=290;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=165;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=165;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=170;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=155;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=165;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=165;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=160;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=205;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=560;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=275;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=290;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=300;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=360;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=270;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=265;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=295;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=355;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=340;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=285;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=310;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=350;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=305;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=280;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=320;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=115;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=115;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=110;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=125;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=50;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=35;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=50;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=50;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=65;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=65;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 112:
iVar3=7;
iVar4=0;
iVar1=165;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=165;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=185;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=175;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=185;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=460;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=185;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=190;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=165;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=165;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=185;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=175;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=235;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=445;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=185;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=190;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=175;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=215;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=225;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=230;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=235;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=215;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=205;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=245;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=225;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=215;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=225;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=230;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=235;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=215;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=425;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=245;
break;
case 144:
iVar3=9;
iVar4=0;
iVar1=225;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=135;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=130;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=110;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=140;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=95;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=100;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=110;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=95;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=105;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=105;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=115;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=115;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=115;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=500;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=440;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=1090;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=600;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=1865;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=490;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=470;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=1795;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=1830;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=455;
break;
}
switch (iParam0){
case 192:
iVar3=12;
iVar4=0;
iVar1=455;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=2110;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=380;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=1655;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=2500;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=415;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=730;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=445;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=425;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=410;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=480;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=485;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=480;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=395;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=495;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=2090;
break;
case 208:
iVar3=13;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 224:
iVar3=14;
iVar4=0;
iVar1=450;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=685;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=420;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=365;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=465;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=405;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=400;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=440;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=385;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=435;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=375;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=390;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=475;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=430;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=490;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=490;
break;
case 240:
iVar3=15;
iVar4=0;
iVar1=615;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=315;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=415;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=425;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=435;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=445;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=640;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=460;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=465;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=745;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=845;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=1420;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=475;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=470;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=1000;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=690;
break;
}
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_681[iVar8]) * Global_297959.f_17));
}
StringCopy(&Var2, "F_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_17));
}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_483(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=335;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=460;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=455;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=470;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=650;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=385;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=455;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=2150;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=375;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=2190;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=285;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=295;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=445;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=2240;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=465;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=1740;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=1415;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=325;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=345;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=355;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=395;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=315;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=275;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=265;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=305;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=255;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=235;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=245;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=215;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=1865;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=450;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=415;
break;
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=100;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=55;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=60;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=100;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=65;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=65;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=100;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=100;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=65;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=90;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=75;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=65;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=100;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=100;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=225;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=205;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=215;
break;
case 64:
iVar3=4;
iVar4=0;
iVar1=490;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=485;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=2500;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=485;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=100;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=105;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=80;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=90;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=100;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=95;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=100;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=90;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=85;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=80;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=80;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=100;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=95;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=440;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=380;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=80;
break;
case 96:
iVar3=6;
iVar4=0;
iVar1=115;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=140;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=135;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=255;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=325;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=115;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=135;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=125;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=120;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=130;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=110;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=345;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=745;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=120;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=135;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=345;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=130;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=140;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=130;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=660;
break;
case 128:
iVar3=8;
iVar4=0;
iVar1=150;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=150;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=150;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=150;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=75;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=90;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=145;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=150;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=110;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=95;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=155;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=255;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=165;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=1150;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=1150;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=1210;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=1125;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=1135;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=1145;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=1145;
break;
case 160:
iVar3=10;
iVar4=0;
iVar1=845;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=480;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=475;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=220;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=100;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=65;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=50;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=100;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=460;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=475;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=470;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=50;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=100;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=100;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=100;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=90;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=105;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=100;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=240;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=95;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=95;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=100;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=105;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=100;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=295;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=250;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=285;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=275;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=105;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=100;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=95;
break;
}
StringCopy(&Var2, "L_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_186[iVar8]) * Global_297959.f_15));
}
if(iParam0 >=256){
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 256, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_15));
}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_484(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
case 9:
iVar3=9;
iVar4=0;
break;
case 10:
iVar3=10;
iVar4=0;
break;
case 11:
iVar3=11;
iVar4=0;
break;
case 12:
iVar3=12;
iVar4=0;
break;
case 13:
iVar3=13;
iVar4=0;
break;
case 14:
iVar3=14;
iVar4=0;
break;
case 15:
iVar3=15;
iVar4=0;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 16, iParam1);
return;
break;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_485(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=1;
iVar4=1;
break;
case 3:
iVar3=1;
iVar4=2;
break;
case 4:
iVar3=1;
iVar4=3;
break;
case 5:
iVar3=1;
iVar4=4;
break;
case 6:
iVar3=2;
iVar4=0;
break;
case 7:
iVar3=2;
iVar4=1;
break;
case 8:
iVar3=2;
iVar4=2;
break;
case 9:
iVar3=2;
iVar4=3;
break;
case 10:
iVar3=2;
iVar4=4;
break;
case 11:
iVar3=3;
iVar4=0;
break;
case 12:
iVar3=3;
iVar4=1;
break;
case 13:
iVar3=3;
iVar4=2;
break;
case 14:
iVar3=3;
iVar4=3;
break;
case 15:
iVar3=3;
iVar4=4;
break;
case 16:
iVar3=4;
iVar4=0;
break;
case 17:
iVar3=4;
iVar4=1;
break;
case 18:
iVar3=4;
iVar4=2;
break;
case 19:
iVar3=4;
iVar4=3;
break;
case 20:
iVar3=4;
iVar4=4;
break;
case 21:
iVar3=5;
iVar4=0;
break;
case 22:
iVar3=5;
iVar4=1;
break;
case 23:
iVar3=5;
iVar4=2;
break;
case 24:
iVar3=5;
iVar4=3;
break;
case 25:
iVar3=5;
iVar4=4;
break;
case 26:
iVar3=6;
iVar4=0;
break;
case 27:
iVar3=6;
iVar4=1;
break;
case 28:
iVar3=6;
iVar4=2;
break;
case 29:
iVar3=6;
iVar4=3;
break;
case 30:
iVar3=6;
iVar4=4;
break;
case 31:
iVar3=7;
iVar4=0;
break;
case 32:
iVar3=7;
iVar4=1;
break;
case 33:
iVar3=7;
iVar4=2;
break;
case 34:
iVar3=7;
iVar4=3;
break;
case 35:
iVar3=7;
iVar4=4;
break;
case 36:
iVar3=8;
iVar4=0;
break;
case 37:
iVar3=8;
iVar4=1;
break;
case 38:
iVar3=8;
iVar4=2;
break;
case 39:
iVar3=8;
iVar4=3;
break;
case 40:
iVar3=8;
iVar4=4;
break;
case 41:
iVar3=9;
iVar4=0;
break;
case 42:
iVar3=9;
iVar4=1;
break;
case 43:
iVar3=9;
iVar4=2;
break;
case 44:
iVar3=9;
iVar4=3;
break;
case 45:
iVar3=9;
iVar4=4;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 46, iParam1);
return;
break;
}
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_486(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
switch (iParam0){
case 0:
StringCopy(&Var2, "U_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
StringCopy(&Var2, "U_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=210;
break;
case 2:
StringCopy(&Var2, "U_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
StringCopy(&Var2, "U_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=90;
break;
case 4:
StringCopy(&Var2, "U_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=210;
break;
case 5:
StringCopy(&Var2, "U_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=200;
break;
case 6:
StringCopy(&Var2, "U_FMM_0_6", 16);
iVar3=0;
iVar4=6;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "U_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=130;
break;
case 8:
StringCopy(&Var2, "U_FMM_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=220;
break;
case 9:
StringCopy(&Var2, "U_FMM_0_9", 16);
iVar3=0;
iVar4=9;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "U_FMM_0_10", 16);
iVar3=0;
iVar4=10;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "U_FMM_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=220;
break;
case 12:
StringCopy(&Var2, "U_FMM_0_12", 16);
iVar3=0;
iVar4=12;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "U_FMM_0_13", 16);
iVar3=0;
iVar4=13;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "U_FMM_0_14", 16);
iVar3=0;
iVar4=14;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "U_FMM_0_15", 16);
iVar3=0;
iVar4=15;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "U_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=45;
break;
case 17:
StringCopy(&Var2, "U_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
StringCopy(&Var2, "U_FMM_1_2", 16);
iVar3=1;
iVar4=2;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "U_FMM_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
StringCopy(&Var2, "U_FMM_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=315;
break;
case 21:
StringCopy(&Var2, "U_FMM_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=215;
break;
case 22:
StringCopy(&Var2, "U_FMM_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=265;
break;
case 23:
StringCopy(&Var2, "U_FMM_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
StringCopy(&Var2, "U_FMM_1_8", 16);
iVar3=1;
iVar4=8;
iVar1=205;
break;
case 25:
StringCopy(&Var2, "U_FMM_1_9", 16);
iVar3=1;
iVar4=9;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "U_FMM_1_10", 16);
iVar3=1;
iVar4=10;
bVar0=true;
break;
case 27:
StringCopy(&Var2, "U_FMM_1_11", 16);
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
StringCopy(&Var2, "U_FMM_1_12", 16);
iVar3=1;
iVar4=12;
iVar1=55;
break;
case 29:
StringCopy(&Var2, "U_FMM_1_13", 16);
iVar3=1;
iVar4=13;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "U_FMM_1_14", 16);
iVar3=1;
iVar4=14;
iVar1=170;
break;
case 31:
StringCopy(&Var2, "U_FMM_1_15", 16);
iVar3=1;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 32:
StringCopy(&Var2, "U_FMM_0_0", 16);
iVar3=2;
iVar4=0;
iVar1=250;
break;
case 33:
StringCopy(&Var2, "U_FMM_0_1", 16);
iVar3=2;
iVar4=1;
iVar1=210;
break;
case 34:
StringCopy(&Var2, "U_FMM_0_2", 16);
iVar3=2;
iVar4=2;
iVar1=50;
break;
case 35:
StringCopy(&Var2, "U_FMM_0_3", 16);
iVar3=2;
iVar4=3;
iVar1=90;
break;
case 36:
StringCopy(&Var2, "U_FMM_0_4", 16);
iVar3=2;
iVar4=4;
iVar1=210;
break;
case 37:
StringCopy(&Var2, "U_FMM_0_5", 16);
iVar3=2;
iVar4=5;
iVar1=200;
break;
case 38:
StringCopy(&Var2, "U_FMM_0_6", 16);
iVar3=2;
iVar4=6;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "U_FMM_0_7", 16);
iVar3=2;
iVar4=7;
iVar1=130;
break;
case 40:
StringCopy(&Var2, "U_FMM_0_8", 16);
iVar3=2;
iVar4=8;
iVar1=220;
break;
case 41:
StringCopy(&Var2, "U_FMM_0_9", 16);
iVar3=2;
iVar4=9;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "U_FMM_0_10", 16);
iVar3=2;
iVar4=10;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "U_FMM_0_11", 16);
iVar3=2;
iVar4=11;
iVar1=220;
break;
case 44:
StringCopy(&Var2, "U_FMM_0_12", 16);
iVar3=2;
iVar4=12;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "U_FMM_0_13", 16);
iVar3=2;
iVar4=13;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "U_FMM_0_14", 16);
iVar3=2;
iVar4=14;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "U_FMM_0_15", 16);
iVar3=2;
iVar4=15;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "SP_FMM_3_0", 16);
iVar3=3;
iVar4=0;
if(Global_262145.f_4191 !=-1){
iVar1=Global_262145.f_4191;
}else{
iVar1=165;
}
break;
case 49:
StringCopy(&Var2, "SP_FMM_3_1", 16);
iVar3=3;
iVar4=1;
if(Global_262145.f_4199 !=-1){
iVar1=Global_262145.f_4199;
}else{
iVar1=120;
}
break;
case 50:
StringCopy(&Var2, "SP_FMM_3_2", 16);
iVar3=3;
iVar4=2;
if(Global_262145.f_4194 !=-1){
iVar1=Global_262145.f_4194;
}else{
iVar1=115;
}
break;
case 51:
StringCopy(&Var2, "SP_FMM_3_3", 16);
iVar3=3;
iVar4=3;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "SP_FMM_3_4", 16);
iVar3=3;
iVar4=4;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "SP_FMM_3_5", 16);
iVar3=3;
iVar4=5;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "SP_FMM_3_6", 16);
iVar3=3;
iVar4=6;
bVar0=true;
break;
case 55:
StringCopy(&Var2, "SP_FMM_3_7", 16);
iVar3=3;
iVar4=7;
bVar0=true;
break;
case 56:
StringCopy(&Var2, "SP_FMM_3_8", 16);
iVar3=3;
iVar4=8;
bVar0=true;
break;
case 57:
StringCopy(&Var2, "SP_FMM_3_9", 16);
iVar3=3;
iVar4=9;
bVar0=true;
break;
case 58:
StringCopy(&Var2, "SP_FMM_3_10", 16);
iVar3=3;
iVar4=10;
bVar0=true;
break;
case 59:
StringCopy(&Var2, "SP_FMM_3_11", 16);
iVar3=3;
iVar4=11;
bVar0=true;
break;
case 60:
StringCopy(&Var2, "SP_FMM_3_12", 16);
iVar3=3;
iVar4=12;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "SP_FMM_3_13", 16);
iVar3=3;
iVar4=13;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "SP_FMM_3_14", 16);
iVar3=3;
iVar4=14;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "SP_FMM_3_15", 16);
iVar3=3;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 64:
StringCopy(&Var2, "SP_FMM_3_0", 16);
iVar3=4;
iVar4=0;
if(Global_262145.f_4191 !=-1){
iVar1=Global_262145.f_4191;
}else{
iVar1=165;
}
break;
case 65:
StringCopy(&Var2, "SP_FMM_3_1", 16);
iVar3=4;
iVar4=1;
if(Global_262145.f_4199 !=-1){
iVar1=Global_262145.f_4199;
}else{
iVar1=120;
}
break;
case 66:
StringCopy(&Var2, "SP_FMM_3_2", 16);
iVar3=4;
iVar4=2;
if(Global_262145.f_4194 !=-1){
iVar1=Global_262145.f_4194;
}else{
iVar1=115;
}
break;
case 67:
StringCopy(&Var2, "SP_FMM_3_3", 16);
iVar3=4;
iVar4=3;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "SP_FMM_3_4", 16);
iVar3=4;
iVar4=4;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "SP_FMM_3_5", 16);
iVar3=4;
iVar4=5;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "SP_FMM_3_6", 16);
iVar3=4;
iVar4=6;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "SP_FMM_3_7", 16);
iVar3=4;
iVar4=7;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "SP_FMM_3_8", 16);
iVar3=4;
iVar4=8;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "SP_FMM_3_9", 16);
iVar3=4;
iVar4=9;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "SP_FMM_3_10", 16);
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "SP_FMM_3_11", 16);
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "SP_FMM_3_12", 16);
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "SP_FMM_3_13", 16);
iVar3=4;
iVar4=13;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "SP_FMM_3_14", 16);
iVar3=4;
iVar4=14;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "SP_FMM_3_15", 16);
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "U_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=80;
iVar1=round((to_float(iVar1) * Global_262145.f_443[80]));
break;
case 81:
StringCopy(&Var2, "U_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[81]));
break;
case 82:
StringCopy(&Var2, "U_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=50;
iVar1=round((to_float(iVar1) * Global_262145.f_443[82]));
break;
case 83:
StringCopy(&Var2, "U_FMM_5_3", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "U_FMM_5_4", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "U_FMM_5_5", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "U_FMM_5_6", 16);
iVar3=5;
iVar4=6;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "U_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=50;
iVar1=round((to_float(iVar1) * Global_262145.f_443[87]));
break;
case 88:
StringCopy(&Var2, "U_FMM_5_8", 16);
iVar3=5;
iVar4=8;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "U_FMM_5_9", 16);
iVar3=5;
iVar4=9;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "U_FMM_5_10", 16);
iVar3=5;
iVar4=10;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "U_FMM_5_11", 16);
iVar3=5;
iVar4=11;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "U_FMM_5_12", 16);
iVar3=5;
iVar4=12;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "U_FMM_5_13", 16);
iVar3=5;
iVar4=13;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "U_FMM_5_14", 16);
iVar3=5;
iVar4=14;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "U_FMM_5_15", 16);
iVar3=5;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 96:
StringCopy(&Var2, "SP_FMM_6_0", 16);
iVar3=6;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=420;
}
break;
case 97:
StringCopy(&Var2, "SP_FMM_6_1", 16);
iVar3=6;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=415;
}
break;
case 98:
StringCopy(&Var2, "SP_FMM_6_2", 16);
iVar3=6;
iVar4=2;
if(Global_262145.f_4190 !=-1){
iVar1=Global_262145.f_4190;
}else{
iVar1=440;
}
break;
case 99:
StringCopy(&Var2, "SP_FMM_6_3", 16);
iVar3=6;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=400;
}
break;
case 100:
StringCopy(&Var2, "SP_FMM_6_4", 16);
iVar3=6;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=400;
}
break;
case 101:
StringCopy(&Var2, "SP_FMM_6_5", 16);
iVar3=6;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=410;
}
break;
case 102:
StringCopy(&Var2, "SP_FMM_6_6", 16);
iVar3=6;
iVar4=6;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=435;
}
break;
case 103:
StringCopy(&Var2, "SP_FMM_6_7", 16);
iVar3=6;
iVar4=7;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=425;
}
break;
case 104:
StringCopy(&Var2, "SP_FMM_6_8", 16);
iVar3=6;
iVar4=8;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=435;
}
break;
case 105:
StringCopy(&Var2, "SP_FMM_6_9", 16);
iVar3=6;
iVar4=9;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=420;
}
break;
case 106:
StringCopy(&Var2, "SP_FMM_6_10", 16);
iVar3=6;
iVar4=10;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=425;
}
break;
case 107:
StringCopy(&Var2, "SP_FMM_6_11", 16);
iVar3=6;
iVar4=11;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=425;
}
break;
case 108:
StringCopy(&Var2, "SP_FMM_6_12", 16);
iVar3=6;
iVar4=12;
if(Global_262145.f_4197 !=-1){
iVar1=Global_262145.f_4197;
}else{
iVar1=435;
}
break;
case 109:
StringCopy(&Var2, "SP_FMM_6_13", 16);
iVar3=6;
iVar4=13;
if(Global_262145.f_4192 !=-1){
iVar1=Global_262145.f_4192;
}else{
iVar1=750;
}
break;
case 110:
StringCopy(&Var2, "SP_FMM_6_14", 16);
iVar3=6;
iVar4=14;
if(Global_262145.f_4207 !=-1){
iVar1=Global_262145.f_4207;
}else{
iVar1=400;
}
break;
case 111:
StringCopy(&Var2, "SP_FMM_6_15", 16);
iVar3=6;
iVar4=15;
if(Global_262145.f_4200 !=-1){
iVar1=Global_262145.f_4200;
}else{
iVar1=435;
}
break;
case 112:
StringCopy(&Var2, "SP_FMM_6_0", 16);
iVar3=7;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=420;
}
break;
case 113:
StringCopy(&Var2, "SP_FMM_6_1", 16);
iVar3=7;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=415;
}
break;
case 114:
StringCopy(&Var2, "SP_FMM_6_2", 16);
iVar3=7;
iVar4=2;
if(Global_262145.f_4190 !=-1){
iVar1=Global_262145.f_4190;
}else{
iVar1=440;
}
break;
case 115:
StringCopy(&Var2, "SP_FMM_6_3", 16);
iVar3=7;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=400;
}
break;
case 116:
StringCopy(&Var2, "SP_FMM_6_4", 16);
iVar3=7;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=400;
}
break;
case 117:
StringCopy(&Var2, "SP_FMM_6_5", 16);
iVar3=7;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=410;
}
break;
case 118:
StringCopy(&Var2, "SP_FMM_6_6", 16);
iVar3=7;
iVar4=6;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=435;
}
break;
case 119:
StringCopy(&Var2, "SP_FMM_6_7", 16);
iVar3=7;
iVar4=7;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=425;
}
break;
case 120:
StringCopy(&Var2, "SP_FMM_6_8", 16);
iVar3=7;
iVar4=8;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=435;
}
break;
case 121:
StringCopy(&Var2, "SP_FMM_6_9", 16);
iVar3=7;
iVar4=9;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=420;
}
break;
case 122:
StringCopy(&Var2, "SP_FMM_6_10", 16);
iVar3=7;
iVar4=10;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=425;
}
break;
case 123:
StringCopy(&Var2, "SP_FMM_6_11", 16);
iVar3=7;
iVar4=11;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=425;
}
break;
case 124:
StringCopy(&Var2, "SP_FMM_6_12", 16);
iVar3=7;
iVar4=12;
if(Global_262145.f_4197 !=-1){
iVar1=Global_262145.f_4197;
}else{
iVar1=435;
}
break;
case 125:
StringCopy(&Var2, "SP_FMM_6_13", 16);
iVar3=7;
iVar4=13;
if(Global_262145.f_4192 !=-1){
iVar1=Global_262145.f_4192;
}else{
iVar1=750;
}
break;
case 126:
StringCopy(&Var2, "SP_FMM_6_14", 16);
iVar3=7;
iVar4=14;
if(Global_262145.f_4207 !=-1){
iVar1=Global_262145.f_4207;
}else{
iVar1=400;
}
break;
case 127:
StringCopy(&Var2, "SP_FMM_6_15", 16);
iVar3=7;
iVar4=15;
if(Global_262145.f_4200 !=-1){
iVar1=Global_262145.f_4200;
}else{
iVar1=435;
}
break;
}
switch (iParam0){
case 128:
StringCopy(&Var2, "U_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "U_FMM_8_1", 16);
iVar3=8;
iVar4=1;
bVar0=true;
break;
case 130:
StringCopy(&Var2, "U_FMM_8_2", 16);
iVar3=8;
iVar4=2;
bVar0=true;
break;
case 131:
StringCopy(&Var2, "U_FMM_8_3", 16);
iVar3=8;
iVar4=3;
bVar0=true;
break;
case 132:
StringCopy(&Var2, "U_FMM_8_4", 16);
iVar3=8;
iVar4=4;
bVar0=true;
break;
case 133:
StringCopy(&Var2, "U_FMM_8_5", 16);
iVar3=8;
iVar4=5;
bVar0=true;
break;
case 134:
StringCopy(&Var2, "U_FMM_8_6", 16);
iVar3=8;
iVar4=6;
bVar0=true;
break;
case 135:
StringCopy(&Var2, "U_FMM_8_7", 16);
iVar3=8;
iVar4=7;
bVar0=true;
break;
case 136:
StringCopy(&Var2, "U_FMM_8_8", 16);
iVar3=8;
iVar4=8;
bVar0=true;
break;
case 137:
StringCopy(&Var2, "U_FMM_8_9", 16);
iVar3=8;
iVar4=9;
bVar0=true;
break;
case 138:
StringCopy(&Var2, "U_FMM_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=65;
break;
case 139:
StringCopy(&Var2, "U_FMM_8_11", 16);
iVar3=8;
iVar4=11;
bVar0=true;
break;
case 140:
StringCopy(&Var2, "U_FMM_8_12", 16);
iVar3=8;
iVar4=12;
bVar0=true;
break;
case 141:
StringCopy(&Var2, "U_FMM_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=40;
break;
case 142:
StringCopy(&Var2, "U_FMM_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=45;
break;
case 143:
StringCopy(&Var2, "U_FMM_8_15", 16);
iVar3=8;
iVar4=15;
bVar0=true;
break;
case 144:
StringCopy(&Var2, "U_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=265;
break;
case 145:
StringCopy(&Var2, "U_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=340;
break;
case 146:
StringCopy(&Var2, "U_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=335;
break;
case 147:
StringCopy(&Var2, "U_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=330;
break;
case 148:
StringCopy(&Var2, "U_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=345;
break;
case 149:
StringCopy(&Var2, "U_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=550;
break;
case 150:
StringCopy(&Var2, "U_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=340;
break;
case 151:
StringCopy(&Var2, "U_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=295;
break;
case 152:
StringCopy(&Var2, "U_FMM_9_8", 16);
iVar3=9;
iVar4=8;
bVar0=true;
break;
case 153:
StringCopy(&Var2, "U_FMM_9_9", 16);
iVar3=9;
iVar4=9;
bVar0=true;
break;
case 154:
StringCopy(&Var2, "U_FMM_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=545;
break;
case 155:
StringCopy(&Var2, "U_FMM_9_11", 16);
iVar3=9;
iVar4=11;
iVar1=345;
break;
case 156:
StringCopy(&Var2, "U_FMM_9_12", 16);
iVar3=9;
iVar4=12;
iVar1=315;
break;
case 157:
StringCopy(&Var2, "U_FMM_9_13", 16);
iVar3=9;
iVar4=13;
iVar1=520;
break;
case 158:
StringCopy(&Var2, "U_FMM_9_14", 16);
iVar3=9;
iVar4=14;
iVar1=325;
break;
case 159:
StringCopy(&Var2, "U_FMM_9_15", 16);
iVar3=9;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 160:
StringCopy(&Var2, "SP_FMM_10_0", 16);
iVar3=10;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=405;
}
break;
case 161:
StringCopy(&Var2, "SP_FMM_10_1", 16);
iVar3=10;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=400;
}
break;
case 162:
StringCopy(&Var2, "SP_FMM_10_2", 16);
iVar3=10;
iVar4=2;
if(Global_262145.f_4196 !=-1){
iVar1=Global_262145.f_4196;
}else{
iVar1=425;
}
break;
case 163:
StringCopy(&Var2, "SP_FMM_10_3", 16);
iVar3=10;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=385;
}
break;
case 164:
StringCopy(&Var2, "SP_FMM_10_4", 16);
iVar3=10;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=385;
}
break;
case 165:
StringCopy(&Var2, "SP_FMM_10_5", 16);
iVar3=10;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=395;
}
break;
case 166:
StringCopy(&Var2, "SP_FMM_10_6", 16);
iVar3=10;
iVar4=6;
if(Global_262145.f_4195 !=-1){
iVar1=Global_262145.f_4195;
}else{
iVar1=500;
}
break;
case 167:
StringCopy(&Var2, "SP_FMM_10_7", 16);
iVar3=10;
iVar4=7;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=420;
}
break;
case 168:
StringCopy(&Var2, "SP_FMM_10_8", 16);
iVar3=10;
iVar4=8;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=410;
}
break;
case 169:
StringCopy(&Var2, "SP_FMM_10_9", 16);
iVar3=10;
iVar4=9;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=420;
}
break;
case 170:
StringCopy(&Var2, "SP_FMM_10_10", 16);
iVar3=10;
iVar4=10;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=405;
}
break;
case 171:
StringCopy(&Var2, "SP_FMM_10_11", 16);
iVar3=10;
iVar4=11;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=410;
}
break;
case 172:
StringCopy(&Var2, "SP_FMM_10_12", 16);
iVar3=10;
iVar4=12;
if(Global_262145.f_4193 !=-1){
iVar1=Global_262145.f_4193;
}else{
iVar1=420;
}
break;
case 173:
StringCopy(&Var2, "SP_FMM_10_13", 16);
iVar3=10;
iVar4=13;
if(Global_262145.f_4208 !=-1){
iVar1=Global_262145.f_4208;
}else{
iVar1=420;
}
break;
case 174:
StringCopy(&Var2, "SP_FMM_10_14", 16);
iVar3=10;
iVar4=14;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=410;
}
break;
case 175:
StringCopy(&Var2, "SP_FMM_10_15", 16);
iVar3=10;
iVar4=15;
if(Global_262145.f_4202 !=-1){
iVar1=Global_262145.f_4202;
}else{
iVar1=460;
}
break;
case 176:
StringCopy(&Var2, "SP_FMM_10_0", 16);
iVar3=11;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=405;
}
break;
case 177:
StringCopy(&Var2, "SP_FMM_10_1", 16);
iVar3=11;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=400;
}
break;
case 178:
StringCopy(&Var2, "SP_FMM_10_2", 16);
iVar3=11;
iVar4=2;
if(Global_262145.f_4196 !=-1){
iVar1=Global_262145.f_4196;
}else{
iVar1=425;
}
break;
case 179:
StringCopy(&Var2, "SP_FMM_10_3", 16);
iVar3=11;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=385;
}
break;
case 180:
StringCopy(&Var2, "SP_FMM_10_4", 16);
iVar3=11;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=385;
}
break;
case 181:
StringCopy(&Var2, "SP_FMM_10_5", 16);
iVar3=11;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=395;
}
break;
case 182:
StringCopy(&Var2, "SP_FMM_10_6", 16);
iVar3=11;
iVar4=6;
if(Global_262145.f_4195 !=-1){
iVar1=Global_262145.f_4195;
}else{
iVar1=500;
}
break;
case 183:
StringCopy(&Var2, "SP_FMM_10_7", 16);
iVar3=11;
iVar4=7;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=420;
}
break;
case 184:
StringCopy(&Var2, "SP_FMM_10_8", 16);
iVar3=11;
iVar4=8;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=410;
}
break;
case 185:
StringCopy(&Var2, "SP_FMM_10_9", 16);
iVar3=11;
iVar4=9;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=420;
}
break;
case 186:
StringCopy(&Var2, "SP_FMM_10_10", 16);
iVar3=11;
iVar4=10;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=405;
}
break;
case 187:
StringCopy(&Var2, "SP_FMM_10_11", 16);
iVar3=11;
iVar4=11;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=410;
}
break;
case 188:
StringCopy(&Var2, "SP_FMM_10_12", 16);
iVar3=11;
iVar4=12;
if(Global_262145.f_4193 !=-1){
iVar1=Global_262145.f_4193;
}else{
iVar1=420;
}
break;
case 189:
StringCopy(&Var2, "SP_FMM_10_13", 16);
iVar3=11;
iVar4=13;
if(Global_262145.f_4208 !=-1){
iVar1=Global_262145.f_4208;
}else{
iVar1=420;
}
break;
case 190:
StringCopy(&Var2, "SP_FMM_10_14", 16);
iVar3=11;
iVar4=14;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=410;
}
break;
case 191:
StringCopy(&Var2, "SP_FMM_10_15", 16);
iVar3=11;
iVar4=15;
if(Global_262145.f_4202 !=-1){
iVar1=Global_262145.f_4202;
}else{
iVar1=460;
}
break;
}
switch (iParam0){
case 192:
StringCopy(&Var2, "U_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=420;
break;
case 193:
StringCopy(&Var2, "U_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=415;
break;
case 194:
StringCopy(&Var2, "U_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=695;
break;
case 195:
StringCopy(&Var2, "U_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=385;
break;
case 196:
StringCopy(&Var2, "U_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=330;
break;
case 197:
StringCopy(&Var2, "U_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=345;
break;
case 198:
StringCopy(&Var2, "U_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=340;
break;
case 199:
StringCopy(&Var2, "U_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=450;
break;
case 200:
StringCopy(&Var2, "U_FMM_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=295;
break;
case 201:
StringCopy(&Var2, "U_FMM_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=340;
break;
case 202:
StringCopy(&Var2, "U_FMM_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=1060;
break;
case 203:
StringCopy(&Var2, "U_FMM_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=1040;
break;
case 204:
StringCopy(&Var2, "U_FMM_12_12", 16);
iVar3=12;
iVar4=12;
bVar0=true;
break;
case 205:
StringCopy(&Var2, "U_FMM_12_13", 16);
iVar3=12;
iVar4=13;
bVar0=true;
break;
case 206:
StringCopy(&Var2, "U_FMM_12_14", 16);
iVar3=12;
iVar4=14;
bVar0=true;
break;
case 207:
StringCopy(&Var2, "U_FMM_12_15", 16);
iVar3=12;
iVar4=15;
bVar0=true;
break;
case 208:
StringCopy(&Var2, "U_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=420;
break;
case 209:
StringCopy(&Var2, "U_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=415;
break;
case 210:
StringCopy(&Var2, "U_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=680;
break;
case 211:
StringCopy(&Var2, "U_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=385;
break;
case 212:
StringCopy(&Var2, "U_FMM_13_4", 16);
iVar3=13;
iVar4=4;
bVar0=true;
break;
case 213:
StringCopy(&Var2, "U_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=345;
break;
case 214:
StringCopy(&Var2, "U_FMM_13_6", 16);
iVar3=13;
iVar4=6;
bVar0=true;
break;
case 215:
StringCopy(&Var2, "U_FMM_13_7", 16);
iVar3=13;
iVar4=7;
bVar0=true;
break;
case 216:
StringCopy(&Var2, "U_FMM_13_8", 16);
iVar3=13;
iVar4=8;
bVar0=true;
break;
case 217:
StringCopy(&Var2, "U_FMM_13_9", 16);
iVar3=13;
iVar4=9;
bVar0=true;
break;
case 218:
StringCopy(&Var2, "U_FMM_13_10", 16);
iVar3=13;
iVar4=10;
bVar0=true;
break;
case 219:
StringCopy(&Var2, "U_FMM_13_11", 16);
iVar3=13;
iVar4=11;
bVar0=true;
break;
case 220:
StringCopy(&Var2, "U_FMM_13_12", 16);
iVar3=13;
iVar4=12;
bVar0=true;
break;
case 221:
StringCopy(&Var2, "U_FMM_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=1065;
break;
case 222:
StringCopy(&Var2, "U_FMM_13_14", 16);
iVar3=13;
iVar4=14;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "U_FMM_13_15", 16);
iVar3=13;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 224:
StringCopy(&Var2, "U_FMM_1_0", 16);
iVar3=14;
iVar4=0;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[16]));
break;
case 225:
StringCopy(&Var2, "U_FMM_1_1", 16);
iVar3=14;
iVar4=1;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_443[17]));
break;
case 226:
StringCopy(&Var2, "U_FMM_1_2", 16);
iVar3=14;
iVar4=2;
bVar0=true;
break;
case 227:
StringCopy(&Var2, "U_FMM_1_3", 16);
iVar3=14;
iVar4=3;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_443[19]));
break;
case 228:
StringCopy(&Var2, "U_FMM_1_4", 16);
iVar3=14;
iVar4=4;
iVar1=315;
iVar1=round((to_float(iVar1) * Global_262145.f_443[20]));
break;
case 229:
StringCopy(&Var2, "U_FMM_1_5", 16);
iVar3=14;
iVar4=5;
iVar1=215;
iVar1=round((to_float(iVar1) * Global_262145.f_443[21]));
break;
case 230:
StringCopy(&Var2, "U_FMM_1_6", 16);
iVar3=14;
iVar4=6;
iVar1=265;
iVar1=round((to_float(iVar1) * Global_262145.f_443[22]));
break;
case 231:
StringCopy(&Var2, "U_FMM_1_7", 16);
iVar3=14;
iVar4=7;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[23]));
break;
case 232:
StringCopy(&Var2, "U_FMM_1_8", 16);
iVar3=14;
iVar4=8;
iVar1=205;
iVar1=round((to_float(iVar1) * Global_262145.f_443[24]));
break;
case 233:
StringCopy(&Var2, "U_FMM_1_9", 16);
iVar3=14;
iVar4=9;
bVar0=true;
break;
case 234:
StringCopy(&Var2, "U_FMM_1_10", 16);
iVar3=14;
iVar4=10;
bVar0=true;
break;
case 235:
StringCopy(&Var2, "U_FMM_1_11", 16);
iVar3=14;
iVar4=11;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_443[27]));
break;
case 236:
StringCopy(&Var2, "U_FMM_1_12", 16);
iVar3=14;
iVar4=12;
iVar1=55;
iVar1=round((to_float(iVar1) * Global_262145.f_443[28]));
break;
case 237:
StringCopy(&Var2, "U_FMM_1_13", 16);
iVar3=14;
iVar4=13;
bVar0=true;
break;
case 238:
StringCopy(&Var2, "U_FMM_1_14", 16);
iVar3=14;
iVar4=14;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_443[30]));
break;
case 239:
StringCopy(&Var2, "U_FMM_1_15", 16);
iVar3=14;
iVar4=15;
bVar0=true;
break;
case 240:
StringCopy(&Var2, "U_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=0;
iVar1=round((to_float(iVar1) * Global_262145.f_443[32]));
break;
}
if(iParam0==23 || iParam0==231){
if(func_467(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(45) * Global_262145.f_443[23]));
}}elseif(iParam0==17 || iParam0==225){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==28 || iParam0==236){
if(func_467(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round((to_float(500) * Global_262145.f_2988));
}else{
iVar1=round((to_float(55) * Global_262145.f_443[28]));
}}elseif(iParam0 >=0 && iParam0 < 32){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar8]));
}}elseif(iParam0 >=32 && iParam0 < 48){
iVar9=(iParam0 - 32);
if(iVar9 >=0 && iVar9 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar9]));
}}elseif(iParam0 >=128 && iParam0 < 160){
iVar10=(iParam0 - 160) + 124;
if(iVar10 >=0 && iVar10 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar10]));
}}elseif(iParam0 >=192 && iParam0 < 224){
iVar11=(iParam0 - 160) + 188;
if(iVar11 >=0 && iVar11 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar11]));
}}
iVar1=round((to_float(iVar1) * Global_297959.f_16));
if(iParam0 >=241){
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 241, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_16));
}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_487(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=210;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=90;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=210;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=200;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=130;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=220;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=220;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=45;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=315;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=215;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=265;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=205;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=55;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=170;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=160;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=205;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=110;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=150;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=115;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=115;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=150;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=150;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=115;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=140;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=125;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=115;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=150;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=150;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=275;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=460;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=260;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=965;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=2520;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=350;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=150;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=3125;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=80;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=45;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=50;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=50;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=2485;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=535;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=2945;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=3080;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=2990;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=3750;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=515;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=530;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=2810;
break;
case 108:
iVar3=7;
iVar4=0;
iVar1=150;
break;
case 109:
iVar3=7;
iVar4=1;
iVar1=155;
break;
case 110:
iVar3=7;
iVar4=2;
iVar1=320;
break;
case 111:
iVar3=7;
iVar4=3;
iVar1=140;
break;
case 112:
iVar3=7;
iVar4=4;
iVar1=150;
break;
case 113:
iVar3=7;
iVar4=5;
iVar1=145;
break;
case 114:
iVar3=7;
iVar4=6;
iVar1=150;
break;
case 115:
iVar3=7;
iVar4=7;
iVar1=140;
break;
case 116:
iVar3=7;
iVar4=8;
iVar1=135;
break;
case 117:
iVar3=7;
iVar4=9;
iVar1=130;
break;
case 118:
iVar3=7;
iVar4=10;
iVar1=130;
break;
case 119:
iVar3=7;
iVar4=11;
iVar1=150;
break;
case 120:
iVar3=7;
iVar4=12;
iVar1=145;
break;
case 121:
iVar3=7;
iVar4=13;
iVar1=740;
break;
case 122:
iVar3=7;
iVar4=14;
iVar1=790;
break;
case 123:
iVar3=7;
iVar4=15;
iVar1=130;
break;
}
switch (iParam0){
case 124:
iVar3=8;
iVar4=0;
iVar1=45;
break;
case 125:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 128:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 129:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 130:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 131:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 132:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 133:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=10;
iVar1=65;
break;
case 135:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=13;
iVar1=40;
break;
case 138:
iVar3=8;
iVar4=14;
iVar1=45;
break;
case 139:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=9;
iVar4=0;
iVar1=265;
break;
case 141:
iVar3=9;
iVar4=1;
iVar1=340;
break;
case 142:
iVar3=9;
iVar4=2;
iVar1=335;
break;
case 143:
iVar3=9;
iVar4=3;
iVar1=330;
break;
case 144:
iVar3=9;
iVar4=4;
iVar1=345;
break;
case 145:
iVar3=9;
iVar4=5;
iVar1=550;
break;
case 146:
iVar3=9;
iVar4=6;
iVar1=340;
break;
case 147:
iVar3=9;
iVar4=7;
iVar1=295;
break;
case 148:
iVar3=9;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 149:
iVar3=9;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 150:
iVar3=9;
iVar4=10;
iVar1=545;
break;
case 151:
iVar3=9;
iVar4=11;
iVar1=345;
break;
case 152:
iVar3=9;
iVar4=12;
iVar1=315;
break;
case 153:
iVar3=9;
iVar4=13;
iVar1=520;
break;
case 154:
iVar3=9;
iVar4=14;
iVar1=325;
break;
case 155:
iVar3=9;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 156:
iVar3=10;
iVar4=0;
iVar1=505;
break;
case 157:
iVar3=10;
iVar4=1;
iVar1=470;
break;
case 158:
iVar3=10;
iVar4=2;
iVar1=475;
break;
case 159:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 160:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 161:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 162:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 163:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=11;
iVar4=0;
iVar1=120;
break;
case 173:
iVar3=11;
iVar4=1;
iVar1=360;
break;
case 174:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=7;
iVar1=90;
break;
case 180:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=14;
iVar1=2450;
break;
case 187:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 188:
iVar3=12;
iVar4=0;
iVar1=420;
break;
case 189:
iVar3=12;
iVar4=1;
iVar1=415;
break;
case 190:
iVar3=12;
iVar4=2;
iVar1=695;
break;
case 191:
iVar3=12;
iVar4=3;
iVar1=385;
break;
case 192:
iVar3=12;
iVar4=4;
iVar1=330;
break;
case 193:
iVar3=12;
iVar4=5;
iVar1=345;
break;
case 194:
iVar3=12;
iVar4=6;
iVar1=340;
break;
case 195:
iVar3=12;
iVar4=7;
iVar1=450;
break;
case 196:
iVar3=12;
iVar4=8;
iVar1=295;
break;
case 197:
iVar3=12;
iVar4=9;
iVar1=340;
break;
case 198:
iVar3=12;
iVar4=10;
iVar1=1060;
break;
case 199:
iVar3=12;
iVar4=11;
iVar1=1040;
break;
case 200:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=13;
iVar4=0;
iVar1=420;
break;
case 205:
iVar3=13;
iVar4=1;
iVar1=415;
break;
case 206:
iVar3=13;
iVar4=2;
iVar1=680;
break;
case 207:
iVar3=13;
iVar4=3;
iVar1=385;
break;
case 208:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=5;
iVar1=345;
break;
case 210:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=13;
iVar1=1065;
break;
case 218:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 220:
iVar3=14;
iVar4=0;
iVar1=420;
break;
case 221:
iVar3=14;
iVar4=1;
iVar1=415;
break;
case 222:
iVar3=14;
iVar4=2;
iVar1=440;
break;
case 223:
iVar3=14;
iVar4=3;
iVar1=385;
break;
case 224:
iVar3=14;
iVar4=4;
iVar1=330;
break;
case 225:
iVar3=14;
iVar4=5;
iVar1=445;
break;
case 226:
iVar3=14;
iVar4=6;
iVar1=340;
break;
case 227:
iVar3=14;
iVar4=7;
iVar1=440;
break;
case 228:
iVar3=14;
iVar4=8;
iVar1=295;
break;
case 229:
iVar3=14;
iVar4=9;
iVar1=340;
break;
case 230:
iVar3=14;
iVar4=10;
iVar1=325;
break;
case 231:
iVar3=14;
iVar4=11;
iVar1=435;
break;
case 232:
iVar3=14;
iVar4=12;
iVar1=445;
break;
case 233:
iVar3=14;
iVar4=13;
iVar1=440;
break;
case 234:
iVar3=14;
iVar4=14;
iVar1=325;
break;
case 235:
iVar3=14;
iVar4=15;
iVar1=325;
break;
case 236:
iVar3=15;
iVar4=0;
break;
}
StringCopy(&Var2, "U_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0==23){
if(func_467(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_297959.f_16));
}else{
iVar1=round(((to_float(45) * Global_262145.f_443[23]) * Global_297959.f_16));
}}elseif(iParam0==17){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_297959.f_16));
}elseif(iParam0==28){
if(func_467(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_297959.f_16));
}else{
iVar1=round(((to_float(55) * Global_262145.f_443[28]) * Global_297959.f_16));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 237){
iVar1=round(((to_float(iVar1) * Global_262145.f_443[iVar8]) * Global_297959.f_16));
}}
if(iParam0 >=237){
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 237, iParam1);
if(Global_78472[0 /*14*/].f_7 > 0){
Global_78472[0 /*14*/].f_7=round((to_float(Global_78472[0 /*14*/].f_7) * Global_297959.f_16));
}}else{
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_488(int iParam0, int iParam1){
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
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[0]));
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=190;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[1]));
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=185;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[2]));
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=180;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[3]));
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=175;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[4]));
break;
case 5:
iVar3=1;
iVar4=4;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[5]));
break;
case 6:
iVar3=1;
iVar4=5;
iVar1=0;
break;
case 7:
iVar3=2;
iVar4=0;
iVar1=580;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[6]));
break;
case 8:
iVar3=2;
iVar4=1;
iVar1=575;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[7]));
break;
case 9:
iVar3=2;
iVar4=2;
iVar1=570;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[8]));
break;
case 10:
iVar3=2;
iVar4=3;
iVar1=565;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[9]));
break;
case 11:
iVar3=2;
iVar4=4;
iVar1=560;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[10]));
break;
case 12:
iVar3=2;
iVar4=5;
iVar1=0;
break;
case 13:
iVar3=3;
iVar4=0;
iVar1=1100;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[11]));
break;
case 14:
iVar3=3;
iVar4=1;
iVar1=1095;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[12]));
break;
case 15:
iVar3=3;
iVar4=2;
iVar1=1090;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[13]));
break;
case 16:
iVar3=3;
iVar4=3;
iVar1=1085;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[14]));
break;
case 17:
iVar3=3;
iVar4=4;
iVar1=1080;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[15]));
break;
case 18:
iVar3=3;
iVar4=5;
iVar1=0;
break;
case 19:
iVar3=4;
iVar4=0;
iVar1=520;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[16]));
break;
case 20:
iVar3=4;
iVar4=1;
iVar1=515;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[17]));
break;
case 21:
iVar3=4;
iVar4=2;
iVar1=510;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[18]));
break;
case 22:
iVar3=4;
iVar4=3;
iVar1=505;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[19]));
break;
case 23:
iVar3=4;
iVar4=4;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[20]));
break;
case 24:
iVar3=4;
iVar4=5;
iVar1=0;
break;
case 25:
iVar3=4;
iVar4=6;
iVar1=0;
break;
case 26:
iVar3=5;
iVar4=0;
iVar1=295;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[21]));
break;
case 27:
iVar3=5;
iVar4=1;
iVar1=290;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[22]));
break;
case 28:
iVar3=5;
iVar4=2;
iVar1=285;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[23]));
break;
case 29:
iVar3=5;
iVar4=3;
iVar1=280;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[24]));
break;
case 30:
iVar3=5;
iVar4=4;
iVar1=275;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[25]));
break;
case 31:
iVar3=5;
iVar4=5;
iVar1=0;
break;
case 32:
iVar3=6;
iVar4=0;
iVar1=950;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[26]));
break;
case 33:
iVar3=6;
iVar4=1;
iVar1=945;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[27]));
break;
case 34:
iVar3=6;
iVar4=2;
iVar1=940;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[28]));
break;
case 35:
iVar3=6;
iVar4=3;
iVar1=935;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[29]));
break;
case 36:
iVar3=6;
iVar4=4;
iVar1=930;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[30]));
break;
case 37:
iVar3=6;
iVar4=5;
iVar1=0;
break;
case 38:
iVar3=7;
iVar4=0;
iVar1=440;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[31]));
break;
case 39:
iVar3=7;
iVar4=1;
iVar1=435;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[32]));
break;
case 40:
iVar3=7;
iVar4=2;
iVar1=430;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[33]));
break;
case 41:
iVar3=7;
iVar4=3;
iVar1=425;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[34]));
break;
case 42:
iVar3=7;
iVar4=4;
iVar1=420;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[35]));
break;
case 43:
iVar3=7;
iVar4=5;
iVar1=0;
break;
case 44:
iVar3=7;
iVar4=6;
iVar1=0;
break;
case 45:
iVar3=8;
iVar4=0;
iVar1=1150;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[36]));
break;
case 46:
iVar3=8;
iVar4=1;
iVar1=1145;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[37]));
break;
case 47:
iVar3=8;
iVar4=2;
iVar1=1140;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[38]));
break;
case 48:
iVar3=8;
iVar4=3;
iVar1=1135;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[39]));
break;
case 49:
iVar3=8;
iVar4=4;
iVar1=1130;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[40]));
break;
case 50:
iVar3=9;
iVar4=0;
iVar1=395;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[41]));
break;
case 51:
iVar3=9;
iVar4=1;
iVar1=390;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[42]));
break;
case 52:
iVar3=9;
iVar4=2;
iVar1=385;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[43]));
break;
case 53:
iVar3=9;
iVar4=3;
iVar1=380;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[44]));
break;
case 54:
iVar3=9;
iVar4=4;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[45]));
break;
case 55:
iVar3=9;
iVar4=5;
iVar1=0;
break;
case 56:
iVar3=9;
iVar4=6;
iVar1=0;
break;
case 57:
iVar3=10;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[46]));
break;
case 58:
iVar3=10;
iVar4=1;
iVar1=495;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[47]));
break;
case 59:
iVar3=10;
iVar4=2;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[48]));
break;
case 60:
iVar3=10;
iVar4=3;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[49]));
break;
case 61:
iVar3=10;
iVar4=4;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[50]));
break;
case 62:
iVar3=10;
iVar4=5;
iVar1=0;
break;
case 63:
iVar3=11;
iVar4=0;
iVar1=1050;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[51]));
break;
case 64:
iVar3=11;
iVar4=1;
iVar1=1045;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[52]));
break;
case 65:
iVar3=11;
iVar4=2;
iVar1=1040;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[53]));
break;
case 66:
iVar3=11;
iVar4=3;
iVar1=1035;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[54]));
break;
case 67:
iVar3=11;
iVar4=4;
iVar1=1030;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[55]));
break;
case 68:
iVar3=11;
iVar4=5;
iVar1=0;
break;
case 69:
iVar3=12;
iVar4=0;
iVar1=550;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[56]));
break;
case 70:
iVar3=12;
iVar4=1;
iVar1=545;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[57]));
break;
case 71:
iVar3=12;
iVar4=2;
iVar1=540;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[58]));
break;
case 72:
iVar3=12;
iVar4=3;
iVar1=535;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[59]));
break;
case 73:
iVar3=12;
iVar4=4;
iVar1=530;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[60]));
break;
case 74:
iVar3=13;
iVar4=0;
iVar1=1200;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[61]));
break;
case 75:
iVar3=13;
iVar4=1;
iVar1=1195;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[62]));
break;
case 76:
iVar3=13;
iVar4=2;
iVar1=1190;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[63]));
break;
case 77:
iVar3=13;
iVar4=3;
iVar1=1185;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[64]));
break;
case 78:
iVar3=13;
iVar4=4;
iVar1=1180;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[65]));
break;
case 79:
iVar3=13;
iVar4=5;
iVar1=0;
break;
case 80:
iVar3=14;
iVar4=0;
iVar1=2000;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[66]));
break;
case 81:
iVar3=14;
iVar4=1;
iVar1=1995;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[67]));
break;
case 82:
iVar3=14;
iVar4=2;
iVar1=1990;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[68]));
break;
case 83:
iVar3=14;
iVar4=3;
iVar1=1985;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[69]));
break;
case 84:
iVar3=14;
iVar4=4;
iVar1=1980;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[70]));
break;
case 85:
iVar3=15;
iVar4=0;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[71]));
break;
case 86:
iVar3=15;
iVar4=1;
iVar1=470;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[72]));
break;
case 87:
iVar3=15;
iVar4=2;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[73]));
break;
case 88:
iVar3=15;
iVar4=3;
iVar1=460;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[74]));
break;
case 89:
iVar3=15;
iVar4=4;
iVar1=455;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[75]));
break;
case 90:
iVar3=15;
iVar4=5;
iVar1=0;
break;
default:
Global_78472[0 /*14*/].f_5=3;
func_455(iVar7, iParam0, 91, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_445(&(Global_78472[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_489(){
Global_78472[0 /*14*/].f_1=-1;
Global_78472[0 /*14*/].f_2=-1;
Global_78472[0 /*14*/].f_5=-1;
Global_78472[0 /*14*/].f_3=-1;
Global_78472[0 /*14*/].f_4=-1;
Global_78472[0 /*14*/].f_7=0;
Global_78472[0 /*14*/].f_6=0;
Global_78472[0 /*14*/].f_13=-1;
Global_78472[0 /*14*/].f_12=0;
Global_78472[0 /*14*/]=0;
StringCopy(&(Global_78472[0 /*14*/].f_8), "NO_LABEL", 16);
}


void func_490(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
PED::SET_PED_AS_ENEMY(iParam0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam0, 0);
PED::SET_PED_RESET_FLAG(iParam0, 249, 1);
PED::SET_PED_CONFIG_FLAG(iParam0, 185, 1);
PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iParam0, 1);
PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
PED::SET_PED_CONFIG_FLAG(iParam0, 202, 1);
PED::SET_PED_CAN_RAGDOLL(iParam0, 0);
}}

int func_491(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_492(int iParam0){
if((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || iParam0==joaat("submersible")) || iParam0==joaat("avisa")){
return 1;
}
return 0;
}


void func_493(int iParam0, var uParam1){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0)){}
if(ENTITY::GET_ENTITY_MODEL(iParam0) !=ENTITY::GET_ENTITY_MODEL(*uParam1)){}
iVar0=1;
while (iVar0 <=14){
if(VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0)){
VEHICLE::SET_VEHICLE_EXTRA(*uParam1, iVar0, !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0));
}
iVar0++;
}}


void func_494(int iParam0, var uParam1){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_511(iParam0, uParam1);
MISC::CLEAR_BIT(&(uParam1->f_95), false);
if(MISC::IS_BIT_SET(uParam1->f_77, 11)){
MISC::SET_BIT(&(uParam1->f_95), false);
}
if(func_95(iParam0)){
MISC::SET_BIT(&(uParam1->f_95), false);
}
if(func_88(iParam0)){
MISC::SET_BIT(&(uParam1->f_95), false);
}
if(VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !VEHICLE::GET_DRIFT_TYRES_SET(iParam0)){
uParam1->f_102=2;
}elseif(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0)){
uParam1->f_102=1;
}elseif(VEHICLE::GET_DRIFT_TYRES_SET(iParam0)){
uParam1->f_102=3;
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
uParam1->f_78=AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
uParam1->f_79=AUDIO::GET_VEHICLE_HORN_SOUND_INDEX(iParam0);
uParam1->f_80=VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam0, &(uParam1->f_97));
VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam0, &(uParam1->f_99));
uParam1->f_98=VEHICLE::GET_VEHICLE_LIVERY2(iParam0);
iVar0=func_497(iParam0, &(uParam1->f_94), &(uParam1->f_96));
MISC::CLEAR_BIT(&(uParam1->f_95), 3);
if(!iVar0==func_31()){
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
MISC::SET_BIT(&(uParam1->f_95), true);
}else{
MISC::CLEAR_BIT(&(uParam1->f_95), true);
}
if(iVar0==PLAYER::PLAYER_ID()){
MISC::SET_BIT(&(uParam1->f_95), 2);
if(uParam1->f_94==1){
if(func_496(iParam0)){
MISC::SET_BIT(&(uParam1->f_95), 3);
}}}else{
MISC::CLEAR_BIT(&(uParam1->f_95), 2);
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deathbike2"))){
uParam1->f_99=func_495(func_120(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}}}


var func__495(int iParam0){
var uVar0;
int iVar1;
iVar1=func_119(iParam0);
func_118(iVar1, &uVar0);
return uVar0;
}

int func_496(int iParam0){
if(Global_2794162.f_299==iParam0){
return 1;
}
return 0;
}

int func_497(int iParam0, var uParam1, var uParam2){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_510(iParam0, 1)){
*uParam1=1;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot")){
*uParam2=DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
}}
return func_509(iParam0);
}elseif(func_508(iParam0, 1)){
return func_507(iParam0, 1, 0);
}elseif(func_506(iParam0, 1)){
return func_505(iParam0, 1, 0);
}elseif(func_504(iParam0, 1)){
return func_503(iParam0, 1, 0);
}elseif(func_502(iParam0, 1)){
return func_501(iParam0, 1, 0);
}elseif(func_500(iParam0, 1)){
*uParam1=2;
return func_498(iParam0);
}elseif(!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
*uParam1=3;
return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
}}}}
*uParam1=4;
return PLAYER::PLAYER_ID();
}

int func_498(int iParam0){
int iVar0;
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
return func_499(iVar0, 0, 1, 0);
}

int func_499(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
if(bParam2){
iVar1=0;
while (iVar1 < 32){
iVar0=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_672(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))){
if(iParam0==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0)){
return iVar0;
}}
bVar1++;
}}elseif(func_672(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3))){
if(iParam0==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3)){
return iParam3;
}}
return func_31();
}

int func_500(int iParam0, bool bParam1){
if(Global_78689){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player")){
return 1;
}}}
return 0;
}

int func_501(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_502(iParam0, 1)){
return func_31();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Support_Bike_Vehicle");
return func_499(iVar0, 0, bParam1, iParam2);
}
return func_31();
}

int func_502(int iParam0, bool bParam1){
if(Global_78689){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Support_Bike_Vehicle")){
return 1;
}}}
return 0;
}

int func_503(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_504(iParam0, 1)){
return func_31();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Acid_Lab");
return func_499(iVar0, 0, bParam1, iParam2);
}
return func_31();
}

int func_504(int iParam0, bool bParam1){
if(Global_78689){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Acid_Lab")){
return 1;
}}}
return 0;
}

int func_505(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_506(iParam0, 1)){
return func_31();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
return func_499(iVar0, 0, bParam1, iParam2);
}
return func_31();
}

int func_506(int iParam0, bool bParam1){
if(Global_78689){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck")){
return 1;
}}}
return 0;
}

int func_507(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_508(iParam0, 1)){
return func_31();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
return func_499(iVar0, 0, bParam1, iParam2);
}
return func_31();
}

int func_508(int iParam0, bool bParam1){
if(Global_78689){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck")){
return 1;
}}}
return 0;
}

int func_509(int iParam0){
int iVar0;
if(!func_510(iParam0, 1)){
return func_31();
}
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
return func_499(iVar0, 0, 1, 0);
}

int func_510(int iParam0, bool bParam1){
if(Global_78689){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
return 1;
}}}
return 0;
}


void func_511(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_513(uParam1);
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
if(uParam1->f_65==-1 && !func_143(uParam1->f_66)){
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
func_512(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_148(iVar0 + 1));
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

int func_512(int iParam0, var uParam1, var uParam2){
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


void func_513(var uParam0){
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

int func_514(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
func_515(&Global_1971396);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam1);
func_494(iParam1, &Global_1971396);
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)){
*uParam0=VEHICLE::CREATE_VEHICLE(iVar0, Param2, fParam3, iParam4, iParam5, 0);
func_67(*uParam0, &Global_1971396, 1, 1, 0);
if(((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) && iVar0 !=joaat("kosatka")) && iVar0 !=joaat("avisa")){
iVar1=0;
while (iVar1 <=5){
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, iVar1)){
VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, iVar1, 1);
}
iVar1++;
}
iVar1=0;
while (iVar1 <=3){
if(!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam1, iVar1)){
VEHICLE::REMOVE_VEHICLE_WINDOW(*uParam0, iVar1);
}
iVar1++;
}}
if((!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && iVar0 !=joaat("kosatka")) && iVar0 !=joaat("avisa")){
iVar1=0;
while (iVar1 <=7){
if(VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, iVar1, 1)){
VEHICLE::SET_VEHICLE_TYRE_BURST(*uParam0, iVar1, 1, 1148846080);
}elseif(VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, iVar1, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(*uParam0, iVar1, 0, 1148846080);
}
iVar1++;
}}
VEHICLE::COPY_VEHICLE_DAMAGES(iParam1, *uParam0);
if((iVar0==joaat("dominator4") || iVar0==joaat("dominator5")) || iVar0==joaat("dominator6")){
if(!VEHICLE::GET_DOES_VEHICLE_HAVE_TOMBSTONE(iParam1)){
VEHICLE::HIDE_TOMBSTONE(*uParam0, 1);
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)){
return 1;
}
return 0;
}


void func_515(var uParam0){
func_513(uParam0);
uParam0->f_78=-1;
uParam0->f_80=0f;
uParam0->f_97=1;
uParam0->f_98=0;
uParam0->f_99=132;
uParam0->f_81=0;
uParam0->f_81.f_1=0;
uParam0->f_81.f_2=0;
uParam0->f_81.f_3=0;
uParam0->f_81.f_4=0;
uParam0->f_81.f_5=0;
uParam0->f_81.f_6=0;
uParam0->f_81.f_7=0;
uParam0->f_81.f_8=0;
uParam0->f_81.f_9=0;
uParam0->f_81.f_10=0;
uParam0->f_81.f_11=0;
uParam0->f_81.f_12=0;
uParam0->f_95=0;
uParam0->f_94=0;
uParam0->f_96=-1;
}


bool func_516(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}

int func_517(){
return 1;
}


void func_518(){
Global_2684820.f_4319.f_810=1;
}


void func_519(){
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
}

int func_520(){
int iVar0;
if(func_525() || !func_36(0)){
return 2;
}
iVar0=func_521(func_35(), PLAYER::PLAYER_ID());
switch (iVar0){
case 0:
return 1;
case 1:
return 0;
case 2:
return 3;
case 3:
return 4;
default:
}
return -2;
}

int func_521(int iParam0, int iParam1){
int iVar0;
if(func_33(iParam0)){
if(func_523(iParam1, iParam0, 0) || func_522(iParam1, iParam0)){
iVar0=0;
while (iVar0 < 7){
if(func_32(iParam0, iVar0)==iParam1){
return iVar0;
}
iVar0++;
}}}
return -1;
}

int func_522(int iParam0, int iParam1){
if(iParam1 !=func_31()){
if(Global_1895156[iParam0 /*609*/].f_10.f_26 !=func_31()){
return iParam1==Global_1895156[iParam0 /*609*/].f_10.f_26;
}}
return 0;
}

int func_523(int iParam0, int iParam1, bool bParam2){
if(func_34(iParam1)){
if(!bParam2){
if(func_524(iParam0, iParam1)){
return 0;
}}
if(Global_1895156[iParam0 /*609*/].f_10 !=func_31()){
return iParam1==Global_1895156[iParam0 /*609*/].f_10;
}}
return 0;
}

int func_524(int iParam0, int iParam1){
if(iParam1 !=func_31()){
if(iParam0 !=func_31()){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_31()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


bool func_525(){
return func_33(PLAYER::PLAYER_ID());
}

int func_526(){
if(!func_29(PLAYER::PLAYER_ID())){
return 0;
}
if(func_316(NETWORK::PARTICIPANT_ID()) !=4){
return 0;
}
return 1;
}


void func_527(){
struct<3> Var0;
var uVar1;
if(!func_538()){
return;
}
if(func_535()){
if(!func_534(PLAYER::PLAYER_ID())){
func_533();
}}elseif(func_534(PLAYER::PLAYER_ID())){
func_532();
}
switch (func_531()){
case 0:
if(func_530(PLAYER::PLAYER_ID())){
func_529(1);
}
break;
case 1:
func_46(func_47(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
func_529(2);
break;
case 2:
if((func_323(func_8()) && func_323(func_10())) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), 0, 1)==0){
NETWORK::NETWORK_FADE_OUT_ENTITY(func_7(), 0, 1);
NETWORK::NETWORK_FADE_OUT_ENTITY(func_9(), 0, 1);
func_529(3);
}
break;
case 3:
if(!ENTITY::IS_ENTITY_VISIBLE(func_7()) && !ENTITY::IS_ENTITY_VISIBLE(func_9())){
func_529(4);
}
break;
case 4:
if(func_323(func_8()) && func_158(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Var0, &uVar1)){
ENTITY::SET_ENTITY_COORDS(func_7(), Var0, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(func_7(), uVar1);
NETWORK::NETWORK_FADE_IN_ENTITY(func_7(), 1, 0);
NETWORK::NETWORK_FADE_IN_ENTITY(func_9(), 0, 1);
func_529(5);
}
break;
case 5:
if(!NETWORK::NETWORK_IS_ENTITY_FADING(func_7()) && !NETWORK::NETWORK_IS_ENTITY_FADING(func_9())){
func_528();
func_309();
func_529(0);
}
break;
}}


void func_528(){
func_329(8);
}


void func_529(int iParam0){
uLocal_116=iParam0;
}


bool func_530(int iParam0){
return func_30(iParam0, 8);
}

int func_531(){
return uLocal_116;
}


void func_532(){
func_329(7);
}


void func_533(){
func_305(7);
}


bool func_534(int iParam0){
return func_30(iParam0, 7);
}

int func_535(){
if(func_530(PLAYER::PLAYER_ID())){
return 0;
}
if(!func_12()){
return 0;
}
if(func_537() !=0){
func_536(0);
}
if(func_325(NETWORK::PARTICIPANT_ID(), 5)){
if(func_537()==0){
func_536(1);
}
return 0;
}
if(func_16(8)){
return 0;
}
return 1;
}


void func_536(int iParam0){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_303=iParam0;
}

int func_537(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_303;
}

int func_538(){
if(func_5() !=0){
return 0;
}
if(!func_313()){
return 0;
}
return 1;
}


void func_539(){
if(!func_543()){
return;
}
switch (func_11()){
case 1:
if(func_542(NETWORK::PARTICIPANT_ID(), 2)){
func_541(2);
}
break;
case 2:
if(func_12()){
if(!func_542(NETWORK::PARTICIPANT_ID(), 0)){
if(func_652(6)){
func_540(0);
}}elseif(!func_542(NETWORK::PARTICIPANT_ID(), 1)){
if(VEHICLE::IS_VEHICLE_STOPPED(func_7()) && func_652(6)){
func_319();
func_540(1);
}}}
break;
case 4:
if(!func_542(NETWORK::PARTICIPANT_ID(), 2)){
if(VEHICLE::IS_VEHICLE_STOPPED(func_7())){
func_540(2);
}}
break;
}}


void func_540(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4[iVar0]), iVar1);
}


void func_541(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4[iVar0]), iVar1);
}


bool func_542(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=(iParam1 / 32);
iVar1=(iParam1 % 32);
return MISC::IS_BIT_SET(Local_106[iParam0 /*6*/].f_4[iVar0], iVar1);
}

int func_543(){
if(func_313()){
return 1;
}
return 0;
}


void func_544(){
if(!func_545()){
return;
}
if(!func_652(3)){
if(func_324(func_10()) && func_324(func_8())){
NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_10(), 0);
NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_8(), 0);
func_157(3);
}}}

int func_545(){
if(func_5() !=0){
return 0;
}
if(!func_313()){
return 0;
}
return 1;
}


void func_546(){
if(((!func_50(func_51()) && func_316(NETWORK::PARTICIPANT_ID())==3) && func_12()) && func_548(func_51())){
func_157(6);
if(func_11()==1 && !HUD::IS_PAUSE_MENU_ACTIVE()){
func_312(1);
}}else{
func_331(6);
func_547(1);
}}


void func_547(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(uLocal_110[iVar0]), iVar1);
}

int func_548(struct<3> Param0){
if(!func_50(Param0) && ENTITY::IS_ENTITY_AT_COORD(func_7(), Param0, func_550(), func_550(), func_549(), 0, 1, 0)){
return 1;
}
return 0;
}


float func_549(){
return 20f;
}


float func_550(){
switch (func_551()){
case 1:
return 35f;
default:
}
return 45f;
}

int func_551(){
return Local_104.f_8.f_6;
}


void func_552(){
struct<3> Var0;
struct<3> Var1;
var uVar2;
var uVar3;
if(!func_572()){
return;
}
Var0={
func_570() 
};
if(!func_93(Local_119, Var0, 1)){
if(func_557(Var0, &Var1, &uVar2)){
Local_119={
Var0 
};
uVar3=func_556(Local_119);
func_553(Var1, uVar2, uVar3);
}}}


void func_553(struct<3> Param0, var uParam1, var uParam2){
func_554(Param0, uParam1, uParam2);
}


void func_554(struct<3> Param0, var uParam1, var uParam2){
struct<8> Var0;
int iVar1;
Var0.f_0=-1496300030;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_5=uParam1;
Var0.f_6=uParam2;
Var0.f_7=MISC::GET_FRAME_COUNT();
iVar1=func_555(1);
if(iVar1 !=0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, iVar1);
}}


var func__555(int iParam0){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_672(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, iVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_556(struct<3> Param0){
struct<3> Var0;
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=79.8987f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 939.3043f, 88.76195f, 77.97077f, 890.7938f, 6.552929f, 82.88f, 12.5f, 0, 1)){
return 1;
}
return 0;
}

int func_557(struct<3> Param0, var uParam1, var uParam2){
bool bVar0;
struct<3> Var1;
float fVar2;
int iVar3;
float fVar4;
int iVar5;
int iVar6;
var uVar7;
struct<3> Var8;
struct<3> Var9;
int iVar10;
int iVar11;
float fVar12;
bool bVar13;
bool bVar14;
float fVar15;
int iVar16;
int iVar17;
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 1000f), (Param0.f_1 - 1000f), (Param0.f_0 + 1000f), (Param0.f_1 + 1000f));
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 1000f), (Param0.f_1 - 1000f), (Param0.f_0 + 1000f), (Param0.f_1 + 1000f))){
iVar3=1;
if(!func_569(Param0)){
func_382(&iVar3, 8);
}
fVar4=3f;
if(Param0.f_2==1f){
fVar4=0f;
}
while (!bVar0 && iVar5 < 2){
iVar5++;
iLocal_120++;
iVar6=0;
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iLocal_120, &Var1, &fVar2, &iVar6, iVar3, fVar4, 2.5f)){
uVar7=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Var1, 1, iVar3, 1077936128, 0);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar7)){
Var8={
0f, 0f, 0f 
};
Var9={
0f, 0f, 0f 
};
iVar10=0;
iVar11=0;
fVar12=0f;
if(PATHFIND::GET_CLOSEST_ROAD(Var1, 1f, 1, &Var9, &Var8, &iVar11, &iVar10, &fVar12, 1)){
if(fVar2 < 90f || fVar2 >=270f){
bVar13=true;
}
else{
bVar13=false;
}
if(bVar13){
if(iVar6==iVar11){
bVar14=true;
}
}
elseif(iVar6==iVar10){
bVar14=true;
}
if(fVar12 < 0f){
fVar15=0f;
}
elseif(PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar7) || !PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar7)){
fVar15=0f;
}
else{
if(bVar13){
if(bVar14){
fVar15=((4.5f * IntToFloat(iVar11)) * 0.5f);
}else{
fVar15=(4.5f * IntToFloat(iVar11));
}
if(bVar14){
if(iVar11 > 2){
fVar15=(fVar15 + (IntToFloat((iVar11 - 2)) * 1f));
}}elseif(iVar11 > 1){
fVar15=(fVar15 + (IntToFloat((iVar11 - 1)) * 1f));
}}else{
if(bVar14){
fVar15=((4.5f * to_float(iVar10)) * 0.5f);
}else{
fVar15=(4.5f * to_float(iVar10));
}
if(bVar14){
if(iVar10 > 2){
fVar15=(fVar15 + IntToFloat((iVar10 - 2)));
}}elseif(iVar10 > 1){
fVar15=(fVar15 + IntToFloat((iVar10 - 1)));
}}
iVar16=0;
iVar17=0;
if(PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &iVar16, &iVar17)){
if(func_386(iVar17, 64)){
fVar15=(fVar15 + (0.9f * fVar12));
}
if(func_386(iVar17, 4)){
fVar15=(fVar15 + -0.7f);
}}
}
if(func_568(Param0, Var1) || MISC::ABSF((Param0.f_2 - Var1.f_2)) < 0.5f){
Var1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, fVar2, fVar15, 0f, 0f) 
};
if(!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var1, 3f, 3f, 3f, func_7())){
if(func_558(Var1, &Var1, &fVar2)){
}
bVar0=true;
}
}}}}
if(iLocal_120==50){
Var1={
Param0 
};
bVar0=true;
}}}
if(bVar0){
*uParam1={
Var1 
};
*uParam2=fVar2;
iLocal_120=0;
return 1;
}
return 0;
}

int func_558(struct<3> Param0, var uParam1, float fParam2){
struct<3> Var0;
struct<3> Var1[6];
int iVar2;
float fVar3;
int iVar4;
float fVar5;
bool bVar6;
struct<3> Var7;
float fVar8;
float fVar9;
struct<3> Var10;
float fVar11;
float fVar12;
if(func_566(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f)){
*uParam1={
1261.58f, -3332.685f, 5.4191f 
};
*fParam2=163.87f;
return 1;
}
if(func_566(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f)){
*uParam1={
-1577.16f, 5166.51f, 19.1864f 
};
*fParam2=0f;
return 1;
}
if(func_566(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f)){
*uParam1={
-856.6151f, 163.7361f, 65.093f 
};
*fParam2=355.3355f;
return 1;
}
if(func_566(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f)){
*uParam1={
-15.5181f, -1456.4f, 29.4244f 
};
*fParam2=94.6893f;
return 1;
}
if(func_566(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f)){
*uParam1={
1996.372f, 3818.831f, 31.1612f 
};
*fParam2=170.0221f;
return 1;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1)){
*uParam1={
-63.5854f, -1074.732f, 26.0995f 
};
*fParam2=324.1257f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=28f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1)){
*uParam1={
-211.8546f, -2030.771f, 26.6204f 
};
*fParam2=154.4302f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=159f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1)){
*uParam1={
-623.3622f, 3996f, 120.7669f 
};
*fParam2=37.8784f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=180f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1)){
*uParam1={
-2294.945f, 376.2506f, 173.4669f 
};
*fParam2=296.6963f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=10f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1)){
*uParam1={
-1897.077f, -557.3334f, 10.7279f 
};
*fParam2=228.7709f;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1)){
return 1;
}else{
Var1[0 /*3*/]={
-1962.468f, -503.4229f, 10.8349f 
};
Var1[1 /*3*/]={
-1924.472f, -534.7357f, 10.8181f 
};
Var1[2 /*3*/]={
-1896.324f, -557.768f, 10.7256f 
};
Var1[3 /*3*/]={
-1850.661f, -595.8367f, 10.4649f 
};
Var1[4 /*3*/]={
-1809f, -632.1207f, 10.0016f 
};
Var1[5 /*3*/]={
-1745.043f, -694.4053f, 9.1245f 
};
iVar2=0;
fVar3=vdist2(Var1[0 /*3*/], Var0);
iVar4=1;
while (iVar4 <=5){
fVar5=vdist2(Var1[iVar4 /*3*/], Var0);
if(fVar5 < fVar3){
fVar3=fVar5;
iVar2=iVar4;
}
iVar4++;
}
*uParam1={
Var1[iVar2 /*3*/] 
};
switch (iVar2){
case 0:
*fParam2=234.3999f;
break;
case 1:
*fParam2=232.2255f;
break;
case 2:
*fParam2=228.2855f;
break;
case 3:
*fParam2=231.4914f;
break;
case 4:
*fParam2=230.6703f;
break;
case 5:
*fParam2=228.7709f;
break;
}
return 1;
}}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=330f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1)){
*uParam1={
-411.3629f, 1174.587f, 324.6421f 
};
*fParam2=255.2881f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=20f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
-1380.101f, 95.1566f, 53.5054f 
};
*fParam2=4.555f;
break;
case 1:
*uParam1={
-1379.139f, 84.2472f, 53.0592f 
};
*fParam2=6.9278f;
break;
case 2:
*uParam1={
-1378.427f, 74.5077f, 52.6622f 
};
*fParam2=2.6813f;
break;
case 3:
*uParam1={
-1384.177f, 73.9207f, 52.7438f 
};
*fParam2=5.542f;
break;
case 4:
*uParam1={
-1381.118f, 35.7838f, 52.659f 
};
*fParam2=7.6687f;
break;
case 5:
*uParam1={
-1383.741f, 64.1491f, 52.6647f 
};
*fParam2=2.5572f;
break;
case 6:
*uParam1={
-1382.616f, 49.6876f, 52.6585f 
};
*fParam2=3.0185f;
break;
case 7:
*uParam1={
-1383.299f, 54.4598f, 52.6562f 
};
*fParam2=6.2155f;
break;
}
return 1;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
50.9889f, -1092.525f, 28.2152f 
};
*fParam2=150.8833f;
break;
case 1:
*uParam1={
46.7725f, -1099.751f, 28.1639f 
};
*fParam2=149.4322f;
break;
case 2:
*uParam1={
41.6146f, -1107.742f, 28.1318f 
};
*fParam2=154.1378f;
break;
case 3:
*uParam1={
38.1922f, -1113.394f, 28.1507f 
};
*fParam2=146.3778f;
break;
case 4:
*uParam1={
13.0436f, -1124.767f, 27.7359f 
};
*fParam2=91.163f;
break;
case 5:
*uParam1={
1.4336f, -1125.042f, 27.1705f 
};
*fParam2=91.0578f;
break;
case 6:
*uParam1={
-11.1811f, -1125.811f, 26.3688f 
};
*fParam2=91.866f;
break;
case 7:
*uParam1={
21.9431f, -1124.573f, 27.9417f 
};
*fParam2=91.6961f;
break;
}
return 1;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
-1023.982f, -2489.882f, 19.0755f 
};
*fParam2=148.7004f;
break;
case 1:
*uParam1={
-1029.968f, -2500.438f, 19.0803f 
};
*fParam2=148.7144f;
break;
case 2:
*uParam1={
-1070.546f, -2570.859f, 19.0836f 
};
*fParam2=150.0955f;
break;
case 3:
*uParam1={
-1056.065f, -2545.662f, 19.0809f 
};
*fParam2=149.5649f;
break;
case 4:
*uParam1={
-1050.578f, -2536.219f, 19.0824f 
};
*fParam2=150.7363f;
break;
case 5:
*uParam1={
-1036.032f, -2510.902f, 19.0794f 
};
*fParam2=147.2113f;
break;
case 6:
*uParam1={
-1044.487f, -2525.534f, 19.079f 
};
*fParam2=150.7597f;
break;
case 7:
*uParam1={
-1064.5f, -2560.653f, 19.0905f 
};
*fParam2=150.7081f;
break;
}
return 1;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
-1044.741f, -2528.786f, 12.7568f 
};
*fParam2=150.9439f;
break;
case 1:
*uParam1={
-1050.763f, -2539.498f, 12.7566f 
};
*fParam2=150.851f;
break;
case 2:
*uParam1={
-1054.952f, -2546.86f, 12.7566f 
};
*fParam2=149.9285f;
break;
case 3:
*uParam1={
-1060.397f, -2556.898f, 12.6066f 
};
*fParam2=150.8244f;
break;
case 4:
*uParam1={
-1020.744f, -2490.084f, 12.6396f 
};
*fParam2=148.6134f;
break;
case 5:
*uParam1={
-1076.904f, -2589.179f, 12.6858f 
};
*fParam2=149.0112f;
break;
case 6:
*uParam1={
-1026.387f, -2501.952f, 12.6923f 
};
*fParam2=149.7553f;
break;
case 7:
*uParam1={
-1070.506f, -2578.389f, 12.6932f 
};
*fParam2=148.5232f;
break;
}
return 1;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
-1067.846f, -2708.94f, 19.0588f 
};
*fParam2=230.9025f;
break;
case 1:
*uParam1={
-1058.224f, -2716.217f, 19.06f 
};
*fParam2=237.1285f;
break;
case 2:
*uParam1={
-1004.567f, -2744.797f, 19.0811f 
};
*fParam2=255.6885f;
break;
case 3:
*uParam1={
-1049.509f, -2721.58f, 19.0546f 
};
*fParam2=242.3581f;
break;
case 4:
*uParam1={
-1017.154f, -2740.117f, 19.0525f 
};
*fParam2=243.5798f;
break;
case 5:
*uParam1={
-1042.087f, -2726.077f, 19.0452f 
};
*fParam2=240.2381f;
break;
case 6:
*uParam1={
-1027.353f, -2734.462f, 19.0509f 
};
*fParam2=239.8703f;
break;
case 7:
*uParam1={
-1033.74f, -2730.746f, 19.0521f 
};
*fParam2=239.9237f;
break;
}
return 1;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
-971.9154f, -2749.122f, 12.6069f 
};
*fParam2=265.8022f;
break;
case 1:
*uParam1={
-980.6166f, -2748.535f, 12.757f 
};
*fParam2=263.5472f;
break;
case 2:
*uParam1={
-987.6072f, -2747.273f, 12.6069f 
};
*fParam2=257.2886f;
break;
case 3:
*uParam1={
-1006.815f, -2739.345f, 12.6334f 
};
*fParam2=242.1315f;
break;
case 4:
*uParam1={
-1051.83f, -2713.553f, 12.6333f 
};
*fParam2=239.9312f;
break;
case 5:
*uParam1={
-1041.004f, -2719.647f, 12.6402f 
};
*fParam2=240.1081f;
break;
case 6:
*uParam1={
-1023.832f, -2729.465f, 12.6445f 
};
*fParam2=239.6737f;
break;
case 7:
*uParam1={
-1012.848f, -2735.172f, 12.6656f 
};
*fParam2=237.6545f;
break;
}
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=20f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
868.1039f, -995.9224f, 29.7369f 
};
*fParam2=93.132f;
break;
case 1:
*uParam1={
859.283f, -996.4102f, 28.7865f 
};
*fParam2=92.2581f;
break;
case 2:
*uParam1={
849.4288f, -997.1062f, 27.5347f 
};
*fParam2=92.714f;
break;
case 3:
*uParam1={
841.1268f, -997.4826f, 26.5744f 
};
*fParam2=92.8628f;
break;
case 4:
*uParam1={
831.2605f, -1009.556f, 25.599f 
};
*fParam2=268.6186f;
break;
case 5:
*uParam1={
844.6506f, -1010.09f, 26.9894f 
};
*fParam2=270.076f;
break;
case 6:
*uParam1={
852.2498f, -1010.132f, 27.8091f 
};
*fParam2=269.722f;
break;
case 7:
*uParam1={
861.4028f, -1010.025f, 28.808f 
};
*fParam2=270.7686f;
break;
}
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=20f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
703.2726f, -1067.7f, 21.4765f 
};
*fParam2=181.3629f;
break;
case 1:
*uParam1={
715.2089f, -1070.399f, 21.2708f 
};
*fParam2=175.4362f;
break;
case 2:
*uParam1={
715.2911f, -1059.42f, 21.0876f 
};
*fParam2=181.0347f;
break;
case 3:
*uParam1={
709.6841f, -1086.78f, 21.419f 
};
*fParam2=233.169f;
break;
case 4:
*uParam1={
703.807f, -1057.866f, 21.4152f 
};
*fParam2=170.1609f;
break;
case 5:
*uParam1={
708.1994f, -1048.194f, 21.216f 
};
*fParam2=134.2729f;
break;
case 6:
*uParam1={
711.1124f, -1069.423f, 21.3129f 
};
*fParam2=177.9198f;
break;
case 7:
*uParam1={
703.545f, -1078.718f, 21.3987f 
};
*fParam2=180.5686f;
break;
}
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=31f;
}
if(func_563(3, Var0) && func_562(Var0, 3, 0, 0)){
*uParam1={
-1520.121f, 2731.511f, 16.6437f 
};
*fParam2=48.1572f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=77.2f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1)){
*uParam1={
1540.75f, -2051.49f, 76.85f 
};
*fParam2=255.41f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=51.1739f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1)){
if(func_561(Var0, 1283.326f, -1731.522f, 51.78555f, 17f)){
*uParam1={
1283.326f, -1731.522f, 51.78555f 
};
*fParam2=275.4274f;
return 1;
}
if(func_561(Var0, 1334.386f, -1709.762f, 55.70131f, 41f)){
*uParam1={
1334.386f, -1709.762f, 55.70131f 
};
*fParam2=275.4411f;
return 1;
}
if(func_561(Var0, 1246.166f, -1750.625f, 45.35691f, 28f)){
*uParam1={
1246.166f, -1750.625f, 45.35691f 
};
*fParam2=301.2981f;
return 1;
}
if(func_561(Var0, 1196.272f, -1753.051f, 37.63976f, 32f)){
*uParam1={
1196.272f, -1753.051f, 37.63976f 
};
*fParam2=209.4354f;
return 1;
}
*uParam1={
1283.326f, -1731.522f, 51.78555f 
};
*fParam2=275.4274f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=25f;
}
if(func_561(Var0, -1693.302f, -1109.13f, 17.8977f, 240f)){
if((OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1)){
*uParam1={
-1624.445f, -976.9755f, 12.0175f 
};
*fParam2=141.167f;
return 1;
}}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=10f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1)){
*uParam1={
-1095.63f, -1577.24f, 3.82f 
};
*fParam2=216.12f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=114f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3)){
case 0:
*uParam1={
1369.246f, 1147.653f, 112.7592f 
};
*fParam2=182.0998f;
break;
case 1:
*uParam1={
1360.848f, 1139.121f, 112.7592f 
};
*fParam2=83.3356f;
break;
case 2:
*uParam1={
1364.751f, 1154.367f, 112.7592f 
};
*fParam2=223.2795f;
break;
}
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=40f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1)){
*uParam1={
1782.19f, 3300.076f, 40.4593f 
};
*fParam2=142.426f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=7f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1)){
*uParam1={
-658.2056f, -1388.789f, 9.499f 
};
*fParam2=174.6945f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=325f;
}
if(func_560(Var0, -75.59782f, -818.6082f, 325.1745f, 58f)){
*uParam1={
-142.367f, -895.0251f, 28.191f 
};
*fParam2=71.6555f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=36.1141f;
}
if(func_563(7, Var0) && func_562(Var0, 7, 0, 0)){
*uParam1={
-1012.31f, -465.1634f, 36.1141f 
};
*fParam2=112.1485f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=12.7091f;
}
if(func_563(2, Var0) && func_562(Var0, 2, 0, 0)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8)){
case 0:
*uParam1={
-1023.982f, -2489.882f, 19.0755f 
};
*fParam2=148.7004f;
break;
case 1:
*uParam1={
-1029.968f, -2500.438f, 19.0803f 
};
*fParam2=148.7144f;
break;
case 2:
*uParam1={
-1070.546f, -2570.859f, 19.0836f 
};
*fParam2=150.0955f;
break;
case 3:
*uParam1={
-1056.065f, -2545.662f, 19.0809f 
};
*fParam2=149.5649f;
break;
case 4:
*uParam1={
-1050.578f, -2536.219f, 19.0824f 
};
*fParam2=150.7363f;
break;
case 5:
*uParam1={
-1036.032f, -2510.902f, 19.0794f 
};
*fParam2=147.2113f;
break;
case 6:
*uParam1={
-1044.487f, -2525.534f, 19.079f 
};
*fParam2=150.7597f;
break;
case 7:
*uParam1={
-1064.5f, -2560.653f, 19.0905f 
};
*fParam2=150.7081f;
break;
}
return 1;
}
Var0={
Param0 
};
bVar6=false;
Var7={
-509.5746f, 4938.918f, 146.3271f 
};
fVar8=232.0109f;
fVar9=func_559(Param0, Var7);
Var10={
2450.604f, 5129.224f, 45.9722f 
};
fVar11=241.1957f;
fVar12=func_559(Param0, Var10);
if(Param0.f_2==1f){
Var0.f_2=400f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1)){
bVar6=true;
}
if(Param0.f_2==1f){
Var0.f_2=200f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1)){
bVar6=true;
}
if(bVar6){
*uParam1={
Var7 
};
*fParam2=fVar8;
if(fVar12 < fVar9){
*uParam1={
Var10 
};
*fParam2=fVar11;
}
return 1;
}
bVar6=false;
if(Param0.f_2==1f){
Var0.f_2=700f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1)){
bVar6=true;
}
if(Param0.f_2==1f){
Var0.f_2=300f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1)){
bVar6=true;
}
if(Param0.f_2==1f){
Var0.f_2=100f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1)){
bVar6=true;
}
if(Param0.f_2==1f){
Var0.f_2=65f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1)){
bVar6=true;
}
if(bVar6){
*uParam1={
Var10 
};
*fParam2=fVar11;
if(fVar9 < fVar12){
*uParam1={
Var7 
};
*fParam2=fVar8;
}
return 1;
}
if(Param0.f_2==1f){
Var0.f_2=6f;
}
if(func_560(Var0, -99.68751f, -2448.891f, 5.01731f, 230f)){
if((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
*uParam1={
29.5582f, -2553.587f, 5.0004f 
};
*fParam2=253.9545f;
break;
case 1:
*uParam1={
-189.6824f, -2531.649f, 5.0031f 
};
*fParam2=0.0408f;
break;
}
return 1;
}}
if(Param0.f_2==1f){
Var0.f_2=28.4f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1)){
*uParam1={
445.231f, 6476.948f, 28.4862f 
};
*fParam2=219.4788f;
return 1;
}
if(Param0.f_2==1f){
Var0.f_2=28.2065f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1)){
*uParam1={
498.185f, -1288.535f, 28.1923f 
};
*fParam2=181.3208f;
return 1;
}
if(Param0.f_2==1f){
Var0.f_2=28.2065f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1)){
*uParam1={
504.1738f, -1421.251f, 28.2065f 
};
*fParam2=83.2905f;
return 1;
}
if(Param0.f_2==1f){
Var0.f_2=73f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1)){
*uParam1={
961.3104f, -150.1964f, 73.4016f 
};
*fParam2=58.9938f;
return 1;
}
if(Param0.f_2==1f){
Var0.f_2=52f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1)){
*uParam1={
1118.751f, 262.0209f, 79.8555f 
};
*fParam2=52.3086f;
return 1;
}elseif(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1)){
*uParam1={
1134.053f, 53.1835f, 79.7553f 
};
*fParam2=145.5134f;
return 1;
}
if(Param0.f_2==1f){
Var0.f_2=30.6f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
*uParam1={
182.6361f, -753.5836f, 31.8051f 
};
*fParam2=162.0019f;
break;
case 1:
*uParam1={
81.5318f, -675.4875f, 30.5695f 
};
*fParam2=341.8541f;
break;
}
return 1;
}
if(Param0.f_2==1f){
Var0.f_2=33.5f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1)){
*uParam1={
-88.4f, -660.9f, 35f 
};
*fParam2=-20f;
return 1;
}elseif(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1)){
*uParam1={
61.4f, -653.2f, 32f 
};
*fParam2=160f;
return 1;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1)){
*uParam1={
484.0132f, -3033.162f, 5.0717f 
};
*fParam2=140.7302f;
return 1;
}
Var0={
Param0 
};
if(Param0.f_2==1f){
Var0.f_2=28f;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 400.9871f, -1659.756f, 26.91615f, 437.6566f, -1617.479f, 48.34185f, 45f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
*uParam1={
413.7399f, -1608.911f, 28.161f 
};
*fParam2=238.2568f;
break;
case 1:
*uParam1={
416.8107f, -1666.514f, 28.1758f 
};
*fParam2=144.8478f;
break;
}
return 1;
}
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1)){
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2)){
case 0:
*uParam1={
-1094.492f, -2662.27f, 12.6066f 
};
*fParam2=196.0365f;
break;
case 1:
*uParam1={
-1076.736f, -2684.039f, 12.807f 
};
*fParam2=211.7278f;
break;
}
return 1;
}
return 0;
}


float func_559(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3){
return vdist2(Param0.f_0, Param0.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
}


bool func_560(struct<3> Param0, struct<3> Param1, float fParam2){
return vdist2(Param0, Param1) <=(fParam2 * fParam2);
}


bool func_561(struct<3> Param0, struct<3> Param1, float fParam2){
struct<3> Var0;
Var0={
Param1 - Param0 
};
return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <=(fParam2 * fParam2);
}

int func_562(struct<3> Param0, int iParam1, int iParam2, bool bParam3){
struct<3> Var0[15];
struct<3> Var1[15];
float fVar2[15];
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar5=0;
switch (iParam1){
case 1:
Var0[0 /*3*/]={
-1332.211f, 100.4608f, 40.38437f 
};
Var1[0 /*3*/]={
-1094.238f, 148.4274f, 73f 
};
fVar2[0]=171.25f;
Var0[1 /*3*/]={
-999.7344f, -110.2231f, 25.25706f 
};
Var1[1 /*3*/]={
-1149.494f, 109.2558f, 73f 
};
fVar2[1]=132f;
Var0[2 /*3*/]={
-1035.113f, -84.95885f, 28.2746f 
};
Var1[2 /*3*/]={
-1261.103f, 50.08148f, 73f 
};
fVar2[2]=132f;
iVar3=3;
break;
case 2:
Var0[0 /*3*/]={
-804.3439f, -3346.5f, 10f 
};
Var1[0 /*3*/]={
-1816.954f, -2768.893f, IntToFloat((250 + iParam2)) 
};
fVar2[0]=247f;
Var0[1 /*3*/]={
-1911.488f, -2934.197f, 10f 
};
Var1[1 /*3*/]={
-968.6236f, -3477.748f, IntToFloat((250 + iParam2)) 
};
fVar2[1]=149f;
Var0[2 /*3*/]={
-844.9433f, -2802.785f, 10f 
};
Var1[2 /*3*/]={
-1011.081f, -3086.904f, IntToFloat((250 + iParam2)) 
};
fVar2[2]=185.5f;
Var0[3 /*3*/]={
-1021.086f, -2952.277f, 10f 
};
Var1[3 /*3*/]={
-1599.008f, -2616.271f, IntToFloat((250 + iParam2)) 
};
fVar2[3]=250f;
Var0[4 /*3*/]={
-1027.136f, -2436.457f, 10f 
};
Var1[4 /*3*/]={
-1392.61f, -2226.763f, IntToFloat((250 + iParam2)) 
};
fVar2[4]=193.5f;
Var0[5 /*3*/]={
-1497.549f, -2408.712f, 10f 
};
Var1[5 /*3*/]={
-1136.917f, -2617.955f, IntToFloat((250 + iParam2)) 
};
fVar2[5]=234.5f;
Var0[6 /*3*/]={
-982.7924f, -2831.709f, 12.93313f 
};
Var1[6 /*3*/]={
-966.4677f, -2803.458f, 16.68313f 
};
fVar2[6]=16f;
Var0[7 /*3*/]={
-1110.083f, -3496.806f, 12f 
};
Var1[7 /*3*/]={
-1955.298f, -3010.431f, IntToFloat((250 + iParam2)) 
};
fVar2[7]=80f;
Var0[8 /*3*/]={
-1886.899f, -3193.024f, 12f 
};
Var1[8 /*3*/]={
-1836.143f, -3105.268f, IntToFloat((250 + iParam2)) 
};
fVar2[8]=142f;
Var0[9 /*3*/]={
-1134.337f, -3535.648f, 12f 
};
Var1[9 /*3*/]={
-1259.649f, -3463.486f, IntToFloat((250 + iParam2)) 
};
fVar2[9]=30.75f;
Var0[10 /*3*/]={
-969.1279f, -3463.899f, 12f 
};
Var1[10 /*3*/]={
-896.3734f, -3505.715f, IntToFloat((250 + iParam2)) 
};
fVar2[10]=150f;
Var0[11 /*3*/]={
-1369.491f, -2173.579f, 10f 
};
Var1[11 /*3*/]={
-1685.626f, -2720.364f, IntToFloat((250 + iParam2)) 
};
fVar2[11]=29.25f;
Var0[12 /*3*/]={
-1010.926f, -3550.943f, 10f 
};
Var1[12 /*3*/]={
-1110.198f, -3493.617f, IntToFloat((250 + iParam2)) 
};
fVar2[12]=43f;
iVar3=13;
break;
case 3:
Var0[0 /*3*/]={
-1773.944f, 3287.334f, 30f 
};
Var1[0 /*3*/]={
-2029.776f, 2845.083f, IntToFloat((250 + iParam2)) 
};
fVar2[0]=255f;
Var0[1 /*3*/]={
-2725.889f, 3291.099f, 30f 
};
Var1[1 /*3*/]={
-2009.182f, 2879.835f, IntToFloat((250 + iParam2)) 
};
fVar2[1]=180f;
Var0[2 /*3*/]={
-2442.026f, 3326.699f, 30f 
};
Var1[2 /*3*/]={
-2033.928f, 3089.049f, IntToFloat((250 + iParam2)) 
};
fVar2[2]=205f;
Var0[3 /*3*/]={
-1917.165f, 3374.209f, 30f 
};
Var1[3 /*3*/]={
-2016.791f, 3195.058f, IntToFloat((250 + iParam2)) 
};
fVar2[3]=86.25f;
Var0[4 /*3*/]={
-2192.753f, 3373.278f, 30f 
};
Var1[4 /*3*/]={
-2191.544f, 3150.417f, IntToFloat((250 + iParam2)) 
};
fVar2[4]=150.5f;
Var0[5 /*3*/]={
-2077.663f, 3344.514f, 30f 
};
Var1[5 /*3*/]={
-2191.544f, 3150.417f, IntToFloat((250 + iParam2)) 
};
fVar2[5]=140.5f;
Var0[6 /*3*/]={
-2861.755f, 3352.661f, 30f 
};
Var1[6 /*3*/]={
-2715.871f, 3269.916f, IntToFloat((250 + iParam2)) 
};
fVar2[6]=90f;
Var0[7 /*3*/]={
-2005.574f, 3364.533f, 30f 
};
Var1[7 /*3*/]={
-1977.569f, 3330.888f, IntToFloat((250 + iParam2)) 
};
fVar2[7]=100f;
Var0[8 /*3*/]={
-1682.235f, 3004.285f, 30f 
};
Var1[8 /*3*/]={
-1942.747f, 2947.441f, IntToFloat((250 + iParam2)) 
};
fVar2[8]=248.75f;
Var0[9 /*3*/]={
-2393.295f, 2936.406f, 31.6801f 
};
Var1[9 /*3*/]={
-2453.037f, 3006.863f, 52.31003f 
};
fVar2[9]=128f;
Var0[10 /*3*/]={
-2347.185f, 3023.83f, 31.56573f 
};
Var1[10 /*3*/]={
-2517.33f, 2989.063f, 49.95644f 
};
fVar2[10]=140f;
Var0[11 /*3*/]={
-2259.922f, 3358.04f, 29.99972f 
};
Var1[11 /*3*/]={
-2299.772f, 3385.79f, 38.06014f 
};
fVar2[11]=16f;
Var0[12 /*3*/]={
-2476.309f, 3363.914f, 31.67933f 
};
Var1[12 /*3*/]={
-2431.981f, 3287.669f, 39.97826f 
};
fVar2[12]=214.25f;
Var0[13 /*3*/]={
-2103.081f, 2797.783f, 29.37864f 
};
Var1[13 /*3*/]={
-2096.821f, 2874.423f, 57.80989f 
};
fVar2[13]=65.75f;
if(bParam3){
iVar6=iParam2;
}else{
iVar6=0;
}
Var1[9 /*3*/].f_2=(Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
Var1[10 /*3*/].f_2=(Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
Var1[11 /*3*/].f_2=(Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
Var1[12 /*3*/].f_2=(Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
Var1[13 /*3*/].f_2=(Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
iVar3=14;
break;
case 4:
Var0[0 /*3*/]={
1541.607f, 2527.555f, 40f 
};
Var1[0 /*3*/]={
1815.575f, 2535.06f, IntToFloat((150 + iParam2)) 
};
fVar2[0]=114f;
Var0[1 /*3*/]={
1788.879f, 2445.727f, 40f 
};
Var1[1 /*3*/]={
1716.96f, 2502.957f, IntToFloat((150 + iParam2)) 
};
fVar2[1]=88.5f;
Var0[2 /*3*/]={
1601.157f, 2436.244f, 40f 
};
Var1[2 /*3*/]={
1650.078f, 2515.923f, IntToFloat((150 + iParam2)) 
};
fVar2[2]=133.25f;
Var0[3 /*3*/]={
1706.331f, 2407.597f, 40f 
};
Var1[3 /*3*/]={
1698.555f, 2460.208f, IntToFloat((150 + iParam2)) 
};
fVar2[3]=104.5f;
Var0[4 /*3*/]={
1712.452f, 2756.218f, 40f 
};
Var1[4 /*3*/]={
1718.848f, 2589.162f, IntToFloat((150 + iParam2)) 
};
fVar2[4]=121.75f;
Var0[5 /*3*/]={
1830.228f, 2661.24f, 40f 
};
Var1[5 /*3*/]={
1774.812f, 2679.419f, IntToFloat((150 + iParam2)) 
};
fVar2[5]=84.5f;
Var0[6 /*3*/]={
1559.05f, 2632.22f, 40f 
};
Var1[6 /*3*/]={
1657.208f, 2595.484f, IntToFloat((150 + iParam2)) 
};
fVar2[6]=103.75f;
Var0[7 /*3*/]={
1612.021f, 2716.869f, 40f 
};
Var1[7 /*3*/]={
1657.165f, 2669.721f, IntToFloat((150 + iParam2)) 
};
fVar2[7]=104.25f;
Var0[8 /*3*/]={
1809.872f, 2729.827f, 40f 
};
Var1[8 /*3*/]={
1789.855f, 2705.037f, IntToFloat((150 + iParam2)) 
};
fVar2[8]=91f;
Var0[9 /*3*/]={
1818.789f, 2605.948f, 40f 
};
Var1[9 /*3*/]={
1783.114f, 2606.783f, IntToFloat((150 + iParam2)) 
};
fVar2[9]=51.25f;
iVar3=10;
break;
case 5:
Var0[0 /*3*/]={
3411.002f, 3663.185f, 20f 
};
Var1[0 /*3*/]={
3615.583f, 3626.194f, IntToFloat((40 + iParam2)) 
};
fVar2[0]=45.75f;
Var0[1 /*3*/]={
3426.66f, 3733.078f, 20f 
};
Var1[1 /*3*/]={
3643.801f, 3694.362f, IntToFloat((40 + iParam2)) 
};
fVar2[1]=99f;
Var0[2 /*3*/]={
3446.036f, 3795.688f, 20f 
};
Var1[2 /*3*/]={
3650.914f, 3766.152f, IntToFloat((40 + iParam2)) 
};
fVar2[2]=81.5f;
iVar3=3;
break;
case 6:
Var0[0 /*3*/]={
526.053f, -3391.497f, -10f 
};
Var1[0 /*3*/]={
523.2289f, -3118.678f, IntToFloat((10 + iParam2)) 
};
fVar2[0]=120f;
Var0[1 /*3*/]={
459.4397f, -3199.99f, 4.819676f 
};
Var1[1 /*3*/]={
593.8928f, -3199.998f, 30.06926f 
};
fVar2[1]=170f;
Var0[2 /*3*/]={
552.8467f, -3111.054f, 4.819394f 
};
Var1[2 /*3*/]={
585.3137f, -3111.844f, 17.56923f 
};
fVar2[2]=12.5f;
Var0[3 /*3*/]={
598.4666f, -3140.147f, 4.819257f 
};
Var1[3 /*3*/]={
597.4973f, -3117.063f, 17.31926f 
};
fVar2[3]=9.75f;
iVar3=4;
break;
case 7:
Var0[0 /*3*/]={
-1108.55f, -570.8798f, 20f 
};
Var1[0 /*3*/]={
-1187.811f, -477.5037f, IntToFloat((50 + iParam2)) 
};
fVar2[0]=162f;
Var0[1 /*3*/]={
-1201.378f, -485.9673f, 20f 
};
Var1[1 /*3*/]={
-1215.796f, -464.8281f, IntToFloat((50 + iParam2)) 
};
fVar2[1]=124f;
Var0[2 /*3*/]={
-985.6311f, -525.4233f, 20f 
};
Var1[2 /*3*/]={
-1013.393f, -475.2057f, IntToFloat((50 + iParam2)) 
};
fVar2[2]=55f;
Var0[3 /*3*/]={
-1055.849f, -477.8226f, 20f 
};
Var1[3 /*3*/]={
-1073.333f, -498.717f, IntToFloat((50 + iParam2)) 
};
fVar2[3]=142f;
iVar3=4;
break;
case 8:
Var0[0 /*3*/]={
461.5684f, -984.572f, 29.43951f 
};
Var1[0 /*3*/]={
471.17f, -984.4292f, 40.14212f 
};
fVar2[0]=7.75f;
Var0[1 /*3*/]={
457.3404f, -984.756f, 34.43951f 
};
Var1[1 /*3*/]={
457.2084f, -993.7189f, 29.38958f 
};
fVar2[1]=14.75f;
Var0[2 /*3*/]={
477.6227f, -986.6f, 40.00819f 
};
Var1[2 /*3*/]={
424.8687f, -986.3279f, 48.71241f 
};
fVar2[2]=31.5f;
Var0[3 /*3*/]={
474.3889f, -974.4613f, 39.55761f 
};
Var1[3 /*3*/]={
474.0358f, -1021.972f, 49.10033f 
};
fVar2[3]=30.5f;
Var0[4 /*3*/]={
442.1768f, -974.1888f, 29.68951f 
};
Var1[4 /*3*/]={
442.1855f, -979.8635f, 33.43951f 
};
fVar2[4]=6.75f;
iVar3=5;
break;
}
iVar4=0;
while (iVar4 < iVar3){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1)){
return 1;
}
iVar4++;
}
return 0;
}


bool func_563(int iParam0, struct<3> Param1){
return vdist2(Param1, func_565(iParam0)) < func_564(iParam0);
}


float func_564(int iParam0){
switch (iParam0){
case 1:
return 1000000f;
break;
case 2:
return 1000000f;
break;
case 3:
return 1500000f;
break;
case 4:
return 500000f;
break;
case 5:
return 500000f;
break;
case 6:
return 500000f;
break;
case 7:
return 500000f;
break;
case 8:
return 500000f;
break;
}
return 0f;
}


Vector3 func__565(int iParam0){
switch (iParam0){
case 1:
return -1155.877f, 48.3426f, 52.4985f;
break;
case 2:
return -1245.12f, -2818.38f, 12.94f;
break;
case 3:
return -2176.19f, 3092.07f, 31.81f;
break;
case 4:
return 1701.666f, 2586.261f, 51.4925f;
break;
case 5:
return 3525.058f, 3711.323f, 35.6423f;
break;
case 6:
return 548.1421f, -3157.961f, 5.0696f;
break;
case 7:
return -1142.411f, -526.4487f, 31.6878f;
break;
case 8:
return 456.8879f, -985.2783f, 35.6895f;
break;
}
return 0f, 0f, 0f;
}

int func_566(struct<3> Param0, struct<3> Param1, struct<3> Param2){
if((func_567(Param0, Param1, Param2) && Param0.f_2 >=Param1.f_2) && Param0.f_2 <=Param2.f_2){
return 1;
}
return 0;
}

int func_567(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5){
if((Param0.f_0 >=Param2.f_0 && Param0.f_0 <=Param4.f_0) && (Param0.f_1 >=Param2.f_1 && Param0.f_1 <=Param4.f_1)){
return 1;
}
return 0;
}

int func_568(struct<3> Param0, struct<3> Param1){
float fVar0;
float fVar1;
if(Param0.f_2==1f){
return 1;
}
fVar0=MISC::ABSF((Param1.f_2 - Param0.f_2));
fVar1=(vdist(Param0, Param1) / 1.75f);
if(fVar0 < fVar1){
return 1;
}
return 0;
}

int func_569(struct<3> Param0){
var uVar0;
uVar0=ZONE::GET_NAME_OF_ZONE(Param0);
if(((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd", uVar0) || MISC::ARE_STRINGS_EQUAL("Alamo", uVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB", uVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa", uVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre", uVar0)) || MISC::ARE_STRINGS_EQUAL("BradT", uVar0)) || MISC::ARE_STRINGS_EQUAL("BradP", uVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY", uVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak", uVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH", uVar0)) || MISC::ARE_STRINGS_EQUAL("CHU", uVar0)) || MISC::ARE_STRINGS_EQUAL("COSI", uVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW", uVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre", uVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt", uVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl", uVar0)) || MISC::ARE_STRINGS_EQUAL("Galli", uVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish", uVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo", uVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab", uVar0)) || MISC::ARE_STRINGS_EQUAL("Jail", uVar0)) || MISC::ARE_STRINGS_EQUAL("LAct", uVar0)) || MISC::ARE_STRINGS_EQUAL("LDam", uVar0)) || MISC::ARE_STRINGS_EQUAL("Lago", uVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil", uVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose", uVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo", uVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU", uVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana", uVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow", uVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff", uVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto", uVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov", uVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor", uVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh", uVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK", uVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho", uVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY", uVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH", uVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV", uVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora", uVar0)) || MISC::ARE_STRINGS_EQUAL("Slab", uVar0)) || MISC::ARE_STRINGS_EQUAL("WindF", uVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo", uVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia", uVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR", uVar0)){
return 1;
}
return 0;
}


Vector3 func__570(){
struct<3> Var0;
var uVar1;
uVar1=HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
if(HUD::DOES_BLIP_EXIST(uVar1)){
Var0={
HUD::GET_BLIP_COORDS(uVar1) 
};
}else{
Var0={
func_571() 
};
}
return Var0;
}


Vector3 func__571(){
return 917.7092f, 50.4298f, 79.8987f;
}

int func_572(){
if(func_542(NETWORK::PARTICIPANT_ID(), 0)){
return 0;
}
if(!func_574()){
return 0;
}
if(!func_573()){
return 0;
}
if(!func_12()){
return 0;
}
return 1;
}

int func_573(){
switch (func_11()){
case 1:
case 2:
return 1;
default:
}
return 0;
}

int func_574(){
switch (func_316(NETWORK::PARTICIPANT_ID())){
case 3:
return 1;
default:
}
return 0;
}


void func_575(){
if(!func_581()){
return;
}
if(func_580(PLAYER::PLAYER_PED_ID(), func_7(), 120f, 1)){
if(!func_325(NETWORK::PARTICIPANT_ID(), 5)){
func_318(5);
}}elseif(func_325(NETWORK::PARTICIPANT_ID(), 5)){
func_579(5);
}
if(!func_325(NETWORK::PARTICIPANT_ID(), 4) && func_576()){
func_318(4);
}}

int func_576(){
if(func_313()){
if(!func_580(PLAYER::PLAYER_PED_ID(), func_7(), 1000f, 1)){
return 1;
}
if(func_578(PLAYER::PLAYER_ID(), 1, 1)){
return 1;
}
if(func_577(PLAYER::PLAYER_ID())){
return 1;
}
if(func_260(PLAYER::PLAYER_ID())){
return 1;
}}elseif(!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_23())){
return 1;
}
return 0;
}

int func_577(int iParam0){
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 11)){
return 1;
}
return 0;
}

int func_578(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_31()){
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


void func_579(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2[iVar0]), iVar1);
}


bool func_580(int iParam0, int iParam1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(uParam0, iParam3), ENTITY::GET_ENTITY_COORDS(iParam1, iParam3)) <=(fParam2 * fParam2);
}

int func_581(){
if(func_5()==0 && func_12()){
return 1;
}
return 0;
}


void func_582(){
if(func_12()){
if(func_652(2)){
if(!func_6(PLAYER::PLAYER_PED_ID())){
func_331(2);
}}elseif(func_6(PLAYER::PLAYER_PED_ID())){
func_157(2);
}}
if(func_652(2)){
if(func_652(3)){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 376, 1);
}}elseif(func_325(NETWORK::PARTICIPANT_ID(), 0)){
func_579(0);
}}


void func_583(){
int iVar0;
if(func_525()){
iVar0=1;
}elseif(func_36(0)){
iVar0=2;
}else{
iVar0=0;
}
if(iVar0 !=func_585()){
switch (func_585()){
case 2:
if(!func_652(1) && iVar0==0){
func_157(1);
}
break;
case 0:
if((func_313() && !func_325(NETWORK::PARTICIPANT_ID(), 4)) && iVar0==2){
func_318(4);
}
break;
}
func_584(iVar0);
}}


void func_584(int iParam0){
uLocal_115=iParam0;
}

int func_585(){
return uLocal_115;
}


void func_586(){
if(!func_588()){
return;
}
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(0, 177)){
if(func_325(NETWORK::PARTICIPANT_ID(), 0)){
func_579(0);
}else{
func_318(0);
}
func_587();
}
if(PAD::IS_CONTROL_JUST_PRESSED(0, 176)){
if(!func_542(NETWORK::PARTICIPANT_ID(), 3)){
func_540(3);
func_587();
}}}


void func_587(){
if(!func_652(5)){
func_157(5);
}}

int func_588(){
if(!func_313()){
return 0;
}
if(!func_574()){
return 0;
}
if(!func_12()){
return 0;
}
if(func_542(NETWORK::PARTICIPANT_ID(), 0)){
return 0;
}
if(func_652(6)){
return 0;
}
if(func_589()){
return 0;
}
if(func_375(0)){
return 0;
}
if(!func_340()){
return 0;
}
return 1;
}

int func_589(){
if(Global_2672524.f_947.f_5==-1){
return 0;
}
return 1;
}


void func_590(){
if(!func_607()){
return;
}
if(func_606()){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_121)){
func_312(2);
if(func_605()){
func_604();
Local_822={
func_603() 
};
func_601(&uLocal_122);
if(func_325(NETWORK::PARTICIPANT_ID(), 0)){
func_600(0, 177, "AMLIMO_INS_STOP", &uLocal_122, 0, 363);
if(!func_542(NETWORK::PARTICIPANT_ID(), 3) && !func_48(2)){
func_600(0, 176, "AMLIMO_INS_HRRY", &uLocal_122, 0, 363);
}}else{
func_600(0, 177, "AMLIMO_INS_STRT", &uLocal_122, 0, 363);
}}
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
func_599(1);
func_598(1);
func_591(&uLocal_121, &Local_822, &uLocal_122, func_597(&uLocal_122));
}else{
uLocal_121=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
func_587();
}}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_121)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_121);
}}


void func_591(var uParam0, var uParam1, var uParam2, int iParam3){
bool bVar0;
var uVar1;
var uVar2;
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
func_596(uParam2);
}
if(Global_1577917 < 2){
func_598(1);
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
uVar1=uParam2->f_1[bVar0 /*57*/].f_54;
uVar2=uParam2->f_1[bVar0 /*57*/].f_55;
iVar3=uParam2->f_1[bVar0 /*57*/].f_56;
func_595(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(uVar1, uVar2, 1));
if(iVar3 < 363){
func_595(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(uVar1, iVar3, 1));
}}else{
uVar4=uParam2->f_1[bVar0 /*57*/].f_54;
uVar5=uParam2->f_1[bVar0 /*57*/].f_55;
func_595(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(uVar4, uVar5, 1));
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
func_594(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
func_595(&(uParam2->f_1[bVar0 /*57*/]));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16))){
func_595(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
func_594(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
func_593(*uParam0, uParam1);
}
func_592();
}


void func_592(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}


void func_593(var uParam0, var uParam1){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}


void func_594(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_595(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


void func_596(var uParam0){
uParam0->f_692=0;
}

int func_597(var uParam0){
return uParam0->f_692;
}


void func_598(int iParam0){
Global_1577917=iParam0;
}


void func_599(int iParam0){
Global_1655612.f_1163=iParam0;
}


void func_600(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5){
int iVar0;
if(uParam3->f_693 >=12){
return;
}
iVar0=uParam3->f_693;
StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
MISC::SET_BIT(&(uParam3->f_689), iVar0);
uParam3->f_1[bVar0 /*57*/].f_54=iParam0;
uParam3->f_1[bVar0 /*57*/].f_55=iParam1;
uParam3->f_1[bVar0 /*57*/].f_56=iParam5;
if(bParam4){
MISC::SET_BIT(&(uParam3->f_691), bVar0);
if(iParam5 < 363){
}}
uParam3->f_693++;
}


void func_601(var uParam0){
func_602(uParam0);
uParam0->f_692=1;
}


void func_602(var uParam0){
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


struct<9> func_603(){
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


void func_604(){
if(func_652(5)){
func_331(5);
}}


bool func_605(){
return func_652(5);
}

int func_606(){
if(!func_588()){
return 0;
}
return 1;
}

int func_607(){
if(!func_313()){
return 0;
}
if(func_5() !=0){
return 0;
}
return 1;
}


void func_608(){
int iVar0;
int iVar1;
if(!func_616()){
return;
}
iVar0=0;
while (iVar0 < 3){
iVar1=iVar0;
if(func_614(iVar1)){
func_612(iVar1);
if(func_611(iVar1)){
func_547(iVar1);
}
if(func_610(iVar1)){
func_609(iVar1);
}}else{
iVar0++;
}}}


void func_609(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(uLocal_111[iVar0]), iVar1);
}

int func_610(int iParam0){
switch (iParam0){
case 1:
return 0;
default:
}
return 1;
}

int func_611(int iParam0){
return 0;
}


void func_612(int iParam0){
func_349(func_613(iParam0), -1);
}


char* func_613(int iParam0){
switch (iParam0){
case 0:
return "AMLIMO_HLP_INTR";
case 1:
return "AMLIMO_HLP_CLSE";
case 2:
return "AMLIMO_HLP_CTRL";
default:
}
return "";
}

int func_614(int iParam0){
int iVar0;
int iVar1;
if(func_615(iParam0)){
return 0;
}
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(uLocal_110[iVar0], iVar1);
}


bool func_615(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(uLocal_111[iVar0], iVar1);
}

int func_616(){
if(((((((((func_672(PLAYER::PLAYER_ID(), 1, 1) && !func_619()) && !func_618()) && !func_617()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()){
return 1;
}
return 0;
}


bool func_617(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}


bool func_618(){
return Global_75816;
}


bool func_619(){
return Global_2672524.f_2514[0 /*80*/].f_1 !=0;
}


void func_620(){
if(func_42() > 0){
func_623();
}
switch (func_42()){
case 0:
break;
case 1:
func_621();
break;
case 2:
break;
}}


void func_621(){
if(!func_622()){
return;
}
if(func_652(3)){
switch (VEHICLE::GET_VEHICLE_INDIVIDUAL_DOOR_LOCK_STATUS(func_7(), 1)){
case 3:
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), 0, 1) > 1){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_7(), 1, 1);
}
break;
case 1:
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), 0, 1) < 2){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_7(), 1, 3);
}
break;
}}}

int func_622(){
if(func_5() !=0){
return 0;
}
if(!func_12()){
return 0;
}
return 1;
}


void func_623(){
if(func_629()){
if(!HUD::DOES_BLIP_EXIST(uLocal_118)){
uLocal_118=HUD::ADD_BLIP_FOR_ENTITY(func_7());
HUD::SET_BLIP_SPRITE(uLocal_118, func_628());
func_625(&uLocal_118, func_627());
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_118, func_624());
}
if(HUD::DOES_BLIP_EXIST(uLocal_118)){
HUD::SET_BLIP_ROTATION_WITH_FLOAT(uLocal_118, ENTITY::GET_ENTITY_HEADING(func_7()));
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_118)){
HUD::REMOVE_BLIP(&uLocal_118);
}}


char* func_624(){
return "AMLIMO_BLP_LIMO";
}


void func_625(var uParam0, int iParam1){
var uVar0;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
uVar0=func_626(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, uVar0);
}}

int func_626(int iParam0){
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

int func_627(){
return 9;
}

int func_628(){
return 724;
}

int func_629(){
if(func_5() !=0){
return 0;
}
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_8())){
return 0;
}
if(func_42() !=1){
return 0;
}
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), func_7(), 0)){
return 0;
}
if(!func_12()){
return 0;
}
return 1;
}


void func_630(){
var uVar0;
var uVar1;
bool bVar2;
bool bVar3;
var uVar4;
struct<3> Var5;
uVar0=func_10();
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0)){
uVar1=func_9();
bVar2=true;
bVar3=!PED::IS_PED_INJURED(uVar1);
}
if(bVar2){
func_636();
}
if((func_652(3) && func_16(3)) && func_652(4)){
TASK::CLEAR_PED_TASKS(iVar1);
func_331(4);
func_634(0);
}
switch (func_11()){
case 0:
break;
case 1:
break;
case 2:
if(bVar2 && bVar3){
if((func_652(3) && !func_44(iVar1, joaat("script_task_perform_sequence"), 1)) && func_12()){
TASK::OPEN_SEQUENCE_TASK(&uVar4);
TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, func_7(), func_51(), func_403(), func_633(), func_550());
TASK::TASK_VEHICLE_PARK(0, func_7(), func_51(), func_632(), func_631(), 60f, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar4);
TASK::TASK_PERFORM_SEQUENCE(func_9(), uVar4);
TASK::CLEAR_SEQUENCE_TASK(&uVar4);
}}
break;
case 4:
if(bVar2 && bVar3){
if((func_652(3) && !func_44(iVar1, joaat("script_task_vehicle_mission"), 1)) && func_12()){
TASK::TASK_VEHICLE_MISSION(iVar1, func_7(), func_7(), 22, func_403(), func_633(), -1f, -1f, 1);
}}
break;
case 3:
break;
case 6:
if(bVar2 && bVar3){
if(func_652(3) && !func_44(iVar1, -251125078, 1)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 5, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 17, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 1024, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 32768, 0);
Var5={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
TASK::TASK_SMART_FLEE_COORD(iVar1, Var5, 10000f, -1, 0, 0);
}}
break;
case 5:
if(bVar2 && bVar3){
if((func_323(uVar0) && !func_44(iVar1, joaat("script_task_vehicle_drive_wander"), 1)) && func_12()){
TASK::TASK_VEHICLE_DRIVE_WANDER(iVar1, func_7(), func_403(), func_633());
}}
break;
case 7:
break;
}}

int func_631(){
switch (func_551()){
case 1:
return 0;
default:
}
return 3;
}


var func__632(){
return Local_104.f_8.f_5;
}

int func_633(){
if(func_48(2)){
return 1076631588;
}
return 1076369579;
}


void func_634(int iParam0){
func_635(iParam0);
}


void func_635(var uParam0){
struct<4> Var0;
int iVar1;
Var0.f_0=1399150425;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=uParam0;
Var0.f_3=MISC::GET_FRAME_COUNT();
iVar1=func_555(1);
if(iVar1 !=0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 4, iVar1);
}}


void func_636(){
var uVar0;
bool bVar1;
if(!func_542(NETWORK::PARTICIPANT_ID(), 3)){
if(func_637()){
uVar0=func_9();
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 125)){
bVar1=true;
}
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 126)){
bVar1=true;
}
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 84)){
bVar1=true;
}
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 97)){
bVar1=true;
}
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 116)){
bVar1=true;
}
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 94)){
bVar1=true;
}
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 124)){
bVar1=true;
}
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 29)){
bVar1=true;
}
if(PED::HAS_PED_RECEIVED_EVENT(uVar0, 23)){
bVar1=true;
}
if(bVar1){
func_587();
func_540(3);
}}}elseif(func_11()==1){
func_587();
func_541(3);
}}

int func_637(){
if(func_316(NETWORK::PARTICIPANT_ID()) !=3){
return 0;
}
if(func_11() !=2){
return 0;
}
return 1;
}


void func_638(int iParam0){
Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/]=iParam0;
}

int func_639(){
func_304();
if(func_5()==1){
func_330(1);
}
return 1;
}

int func_640(){
return Local_104.f_0;
}

int func_641(int iParam0){
return Local_106[iParam0 /*6*/];
}


void func_642(){
int iVar0;
int iVar1;
int iVar2;
iVar2=0;
while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
iVar0=SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
switch (iVar0){
case 174:
SCRIPT::GET_EVENT_DATA(1, iVar2, &iVar1, 2);
switch (iVar1){
case -1496300030:
func_645(iVar2);
break;
case 1399150425:
func_643(iVar2);
break;
}
break;
case 186:
break;
}
iVar2++;
}}


void func_643(int iParam0){
struct<3> Var0;
if(SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4)){
if(Var0.f_2){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!func_16(3)){
func_45(3);
}}
if(!func_652(4)){
func_157(4);
}}else{
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_16(3)){
func_644(3);
}}
if(func_652(4)){
func_331(4);
}}}}


void func_644(int iParam0){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Local_104.f_2[iVar0]), iVar1);
}


void func_645(int iParam0){
struct<7> Var0;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8)){
func_647(Var0.f_2, Var0.f_5);
func_646(Var0.f_6);
if(func_11() !=1){
func_634(1);
}}}


void func_646(var uParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_104.f_8.f_6=uParam0;
}


void func_647(struct<3> Param0, var uParam1){
Local_104.f_8.f_2={
Param0 
};
Local_104.f_8.f_5=uParam1;
}


void func_648(){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
bool bVar4;
bool bVar5;
bool bVar6;
bool bVar7;
bool bVar8;
iVar1=0;
while (iVar1 < 8){
Local_108[iVar1 /*3*/]=func_31();
Local_108[iVar1 /*3*/].f_1=-1;
Local_108[iVar1 /*3*/].f_2=0;
MISC::CLEAR_BIT(&uLocal_112, iVar1);
MISC::CLEAR_BIT(&uLocal_114, bVar1);
bVar1++;
}
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
Local_107[iVar0 /*4*/]=func_651();
Local_107[iVar0 /*4*/].f_1=-1;
Local_107[iVar0 /*4*/].f_2=0;
Local_107[iVar0 /*4*/].f_3=0;
MISC::CLEAR_BIT(&uLocal_113, iVar0);
bVar0++;
}
bVar7=true;
bVar8=true;
bVar0=false;
while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(bVar0)){
Local_107[bVar0 /*4*/]=bVar0;
MISC::SET_BIT(&uLocal_113, bVar0);
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(Local_107[bVar0 /*4*/]);
bVar1=iVar2;
if(func_672(iVar2, 0, 1)){
Local_108[bVar1 /*3*/]=iVar2;
Local_107[bVar0 /*4*/].f_1=bVar1;
Local_108[bVar1 /*3*/].f_1=bVar0;
Local_108[bVar1 /*3*/].f_2=PLAYER::GET_PLAYER_PED(iVar2);
MISC::SET_BIT(&uLocal_112, bVar1);
if(ENTITY::IS_ENTITY_DEAD(Local_108[bVar1 /*3*/].f_2, 0)){
MISC::SET_BIT(&uLocal_114, bVar1);
}
if(func_33(Local_108[bVar1 /*3*/])){
Local_107[bVar0 /*4*/].f_2=1;
}elseif(func_37(Local_108[bVar1 /*3*/], 0)){
Local_107[bVar0 /*4*/].f_3=1;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!bVar3){
if(func_325(Local_107[bVar0 /*4*/], 0)){
bVar3=true;
}}
if(!bVar4){
if(func_325(Local_107[bVar0 /*4*/], 5)){
bVar4=true;
}}
if(!func_48(0)){
if(func_542(Local_107[bVar0 /*4*/], 1)){
func_650(0);
}}
if(!bVar5){
if(func_542(Local_107[bVar0 /*4*/], 2)){
bVar5=true;
}}
if(!bVar6){
if(func_542(Local_107[bVar0 /*4*/], 3)){
bVar6=true;
}}
switch (func_38()){
case 1:
if(bVar7){
if(func_29(Local_108[bVar1 /*3*/]) && !func_325(Local_107[bVar0 /*4*/], 1)){
bVar7=false;
}}
break;
case 2:
if(bVar8){
if(func_29(Local_108[bVar1 /*3*/]) && !func_325(Local_107[bVar0 /*4*/], 2)){
bVar8=false;
}}
break;
}
if(!func_16(1)){
if(func_325(Local_107[bVar0 /*4*/], 4)){
func_45(1);
}}
if(!func_16(7)){
if(func_325(Local_107[bVar0 /*4*/], 3)){
func_45(7);
}}}}}
bVar0++;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(bVar3){
if(!func_16(4)){
func_45(4);
func_634(1);
}}elseif(func_16(4)){
func_644(4);
func_634(1);
}
if(bVar4){
if(!func_16(8)){
func_45(8);
}}elseif(func_16(8)){
func_644(8);
}
if(bVar5){
if(!func_48(1)){
func_650(1);
}}elseif(func_48(1)){
func_649(1);
}
if(bVar6){
if(!func_48(2)){
func_650(2);
func_634(1);
}}elseif(func_48(2)){
func_649(2);
func_634(1);
}
if(func_5()==1){
switch (func_38()){
case 1:
if(!func_16(5) && bVar7){
func_45(5);
}
break;
case 2:
if(!func_16(6) && bVar8){
func_45(6);
}
break;
}}}}


void func_649(int iParam0){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Local_104.f_4[iVar0]), iVar1);
}


void func_650(int iParam0){
int iVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Local_104.f_4[iVar0]), iVar1);
}

int func_651(){
return -1;
}


bool func_652(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(uLocal_109[iVar0], iVar1);
}

int func_653(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_659()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_658()){
return 1;
}
if(func_657(159)){
if(!func_656()){
return 1;
}}
if(func_657(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_654() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_654())==0){
return 1;
}}
return 0;
}

int func_654(){
switch (func_84()){
case 0:
return func_655();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_655(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_656(){
return Global_2683883.f_698;
}

int func_657(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_658(){
return Global_2694576;
}


bool func_659(){
return Global_2683883.f_693;
}


void func_660(){
wait(0);
}


void func_661(){
if(func_313()){
func_667();
}
if(func_666(PLAYER::PLAYER_ID())){
func_665();
}
if(func_534(PLAYER::PLAYER_ID())){
func_532();
}
if(func_530(PLAYER::PLAYER_ID())){
func_528();
}
if(func_537() !=0){
func_536(0);
}
if(func_29(PLAYER::PLAYER_ID())){
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
func_328();
}
if(func_5()==1){
if(func_652(7)){
func_159();
func_331(7);
}
if(func_652(9)){
func_330(0);
}}
if(func_652(3)){
if(func_12()){
if(VEHICLE::GET_VEHICLE_INDIVIDUAL_DOOR_LOCK_STATUS(func_7(), 1) !=1){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_7(), 1, 1);
}
NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_8(), 1);
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())){
NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_10(), 1);
}
func_331(3);
}
if((((func_2()==1 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())) && !PED::IS_PED_INJURED(func_9())) && func_12()) && func_323(func_10())){
func_46(func_47(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
}
if(func_2() !=0){
func_664();
func_662();
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_662(){
var uVar0;
var uVar1;
uVar0=func_10();
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uVar0)){
uVar1=func_9();
if(!ENTITY::IS_ENTITY_DEAD(uVar1, 0)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 0);
}}
func_663(&uVar0);
}}


void func_663(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}


void func_664(){
var uVar0;
uVar0=func_8();
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0)){
func_663(&uVar0);
}}


void func_665(){
func_329(4);
}


bool func_666(int iParam0){
return func_30(iParam0, 4);
}


void func_667(){
func_329(3);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_302=-1;
}

int func_668(struct<21> Param0){
func_671(8, Param0);
NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
func_669(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_104, 23, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_106, 49, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
return 1;
}

int func_669(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_670();
}else{
return 0;
}}
if(!func_297(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_670();
}else{
return 0;
}}
if(func_659()){
if(!bParam2){
func_670();
}else{
return 0;
}}
if(func_657(157)){
if(!bParam2){
func_670();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_670();
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
func_670();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_670();
}else{
return 0;
}}
return 1;
}


void func_670(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_671(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_670();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_672(int iParam0, bool bParam1, bool bParam2){
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