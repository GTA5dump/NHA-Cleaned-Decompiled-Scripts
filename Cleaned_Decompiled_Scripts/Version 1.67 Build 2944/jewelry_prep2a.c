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
var uLocal_34=0;
var uLocal_35=10;
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
char cLocal_77[16]="";
var uLocal_78=0;
var uLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
struct<3> Local_84={
0, 0, 0 
};
struct<3> Local_85={
0, 0, 0 
};
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
bool bLocal_89=0;
int iLocal_90=0;
bool bLocal_91=0;
var uLocal_92=30;
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
var uLocal_243=10;
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
var uLocal_294=10;
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
var uLocal_365=20;
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
var uLocal_466=20;
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
var uLocal_567=30;
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
var uLocal_748=5;
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
var uLocal_779=7;
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
var uLocal_821=0;
var uLocal_822=0;
var uLocal_823=0;
var uLocal_824=0;
var uLocal_825=0;
var uLocal_826=0;
var uLocal_827=0;
var uLocal_828=0;
var uLocal_829=5;
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
var uLocal_855=3;
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
var uLocal_871=22;
var uLocal_872=0;
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
var uLocal_884=0;
var uLocal_885=0;
var uLocal_886=0;
var uLocal_887=0;
var uLocal_888=0;
var uLocal_889=0;
var uLocal_890=0;
var uLocal_891=0;
var uLocal_892=0;
var uLocal_893=0;
var uLocal_894=0;
var uLocal_895=0;
var uLocal_896=0;
var uLocal_897=0;
var uLocal_898=0;
var uLocal_899=0;
var uLocal_900=0;
var uLocal_901=0;
var uLocal_902=0;
var uLocal_903=0;
var uLocal_904=0;
var uLocal_905=0;
var uLocal_906=0;
var uLocal_907=0;
var uLocal_908=0;
var uLocal_909=0;
var uLocal_910=0;
var uLocal_911=0;
var uLocal_912=0;
var uLocal_913=0;
var uLocal_914=0;
var uLocal_915=0;
var uLocal_916=0;
var uLocal_917=0;
var uLocal_918=0;
var uLocal_919=0;
var uLocal_920=0;
var uLocal_921=0;
var uLocal_922=0;
var uLocal_923=0;
var uLocal_924=0;
var uLocal_925=0;
var uLocal_926=0;
var uLocal_927=0;
var uLocal_928=0;
var uLocal_929=0;
var uLocal_930=0;
var uLocal_931=0;
var uLocal_932=0;
var uLocal_933=0;
var uLocal_934=0;
var uLocal_935=0;
var uLocal_936=0;
var uLocal_937=0;
var uLocal_938=0;
var uLocal_939=0;
var uLocal_940=0;
var uLocal_941=0;
var uLocal_942=0;
var uLocal_943=0;
var uLocal_944=0;
var uLocal_945=0;
var uLocal_946=0;
var uLocal_947=0;
var uLocal_948=0;
var uLocal_949=0;
var uLocal_950=0;
var uLocal_951=0;
var uLocal_952=0;
var uLocal_953=0;
var uLocal_954=0;
var uLocal_955=0;
var uLocal_956=0;
var uLocal_957=0;
var uLocal_958=0;
var uLocal_959=0;
var uLocal_960=0;
var uLocal_961=0;
var uLocal_962=0;
var uLocal_963=0;
var uLocal_964=0;
var uLocal_965=0;
var uLocal_966=0;
var uLocal_967=0;
var uLocal_968=0;
var uLocal_969=0;
var uLocal_970=0;
var uLocal_971=0;
var uLocal_972=0;
var uLocal_973=0;
var uLocal_974=0;
var uLocal_975=0;
var uLocal_976=0;
var uLocal_977=0;
var uLocal_978=0;
var uLocal_979=0;
var uLocal_980=0;
var uLocal_981=0;
var uLocal_982=0;
var uLocal_983=0;
var uLocal_984=0;
var uLocal_985=0;
var uLocal_986=0;
var uLocal_987=0;
var uLocal_988=0;
var uLocal_989=0;
var uLocal_990=0;
var uLocal_991=0;
var uLocal_992=0;
var uLocal_993=0;
var uLocal_994=0;
var uLocal_995=0;
var uLocal_996=0;
var uLocal_997=0;
var uLocal_998=0;
var uLocal_999=0;
var uLocal_1000=0;
var uLocal_1001=10;
var uLocal_1002=0;
var uLocal_1003=0;
var uLocal_1004=0;
var uLocal_1005=0;
var uLocal_1006=0;
var uLocal_1007=0;
var uLocal_1008=0;
var uLocal_1009=0;
var uLocal_1010=0;
var uLocal_1011=0;
var uLocal_1012=0;
var uLocal_1013=0;
var uLocal_1014=0;
var uLocal_1015=0;
var uLocal_1016=0;
var uLocal_1017=0;
var uLocal_1018=0;
var uLocal_1019=0;
var uLocal_1020=0;
var uLocal_1021=0;
var uLocal_1022=0;
var uLocal_1023=0;
var uLocal_1024=0;
var uLocal_1025=0;
var uLocal_1026=0;
var uLocal_1027=0;
var uLocal_1028=0;
var uLocal_1029=0;
var uLocal_1030=0;
var uLocal_1031=0;
var uLocal_1032=0;
var uLocal_1033=0;
var uLocal_1034=0;
var uLocal_1035=0;
var uLocal_1036=0;
var uLocal_1037=0;
var uLocal_1038=0;
var uLocal_1039=0;
var uLocal_1040=0;
var uLocal_1041=0;
var uLocal_1042=0;
var uLocal_1043=0;
var uLocal_1044=0;
var uLocal_1045=0;
var uLocal_1046=0;
var uLocal_1047=0;
var uLocal_1048=0;
var uLocal_1049=0;
var uLocal_1050=0;
var uLocal_1051=0;
var uLocal_1052=5;
var uLocal_1053=0;
var uLocal_1054=0;
var uLocal_1055=0;
var uLocal_1056=0;
var uLocal_1057=0;
var uLocal_1058=0;
var uLocal_1059=0;
var uLocal_1060=0;
var uLocal_1061=0;
var uLocal_1062=0;
var uLocal_1063=0;
var uLocal_1064=0;
var uLocal_1065=0;
var uLocal_1066=0;
var uLocal_1067=0;
var uLocal_1068=0;
var uLocal_1069=0;
var uLocal_1070=0;
var uLocal_1071=0;
var uLocal_1072=0;
var uLocal_1073=0;
var uLocal_1074=0;
var uLocal_1075=0;
var uLocal_1076=0;
var uLocal_1077=0;
var uLocal_1078=5;
var uLocal_1079=0;
var uLocal_1080=0;
var uLocal_1081=0;
var uLocal_1082=0;
var uLocal_1083=0;
var uLocal_1084=0;
var uLocal_1085=0;
var uLocal_1086=0;
var uLocal_1087=0;
var uLocal_1088=0;
var uLocal_1089=0;
var uLocal_1090=0;
var uLocal_1091=0;
var uLocal_1092=0;
var uLocal_1093=0;
var uLocal_1094=0;
var uLocal_1095=0;
var uLocal_1096=0;
var uLocal_1097=0;
var uLocal_1098=0;
var uLocal_1099=0;
var uLocal_1100=0;
var uLocal_1101=0;
var uLocal_1102=0;
var uLocal_1103=0;
var uLocal_1104=0;
var uLocal_1105=0;
var uLocal_1106=0;
struct<8> Local_1107[2];
var uLocal_1108=0;
var uLocal_1109=3;
var uLocal_1110=0;
var uLocal_1111=0;
var uLocal_1112=0;
var uLocal_1113=0;
var uLocal_1114=0;
var uLocal_1115=1092616192;
var uLocal_1116=1101004800;
var uLocal_1117=0;
var uLocal_1118=0;
var uLocal_1119=0;
var uLocal_1120=0;
var uLocal_1121=0;
var uLocal_1122=0;
var uLocal_1123=0;
var uLocal_1124=0;
var uLocal_1125=3;
var uLocal_1126=0;
var uLocal_1127=0;
var uLocal_1128=0;
var uLocal_1129=0;
var uLocal_1130=0;
var uLocal_1131=0;
var uLocal_1132=0;
var uLocal_1133=16;
var uLocal_1134=0;
var uLocal_1135=0;
var uLocal_1136=0;
var uLocal_1137=0;
var uLocal_1138=0;
var uLocal_1139=0;
var uLocal_1140=0;
var uLocal_1141=0;
var uLocal_1142=0;
var uLocal_1143=0;
var uLocal_1144=0;
var uLocal_1145=0;
var uLocal_1146=0;
var uLocal_1147=0;
var uLocal_1148=0;
var uLocal_1149=0;
var uLocal_1150=0;
var uLocal_1151=0;
var uLocal_1152=0;
var uLocal_1153=0;
var uLocal_1154=0;
var uLocal_1155=0;
var uLocal_1156=0;
var uLocal_1157=0;
var uLocal_1158=0;
var uLocal_1159=0;
var uLocal_1160=0;
var uLocal_1161=0;
var uLocal_1162=0;
var uLocal_1163=0;
var uLocal_1164=0;
var uLocal_1165=0;
var uLocal_1166=0;
var uLocal_1167=0;
var uLocal_1168=0;
var uLocal_1169=0;
var uLocal_1170=0;
var uLocal_1171=0;
var uLocal_1172=0;
var uLocal_1173=0;
var uLocal_1174=0;
var uLocal_1175=0;
var uLocal_1176=0;
var uLocal_1177=0;
var uLocal_1178=0;
var uLocal_1179=0;
var uLocal_1180=0;
var uLocal_1181=0;
var uLocal_1182=0;
var uLocal_1183=0;
var uLocal_1184=0;
var uLocal_1185=0;
var uLocal_1186=0;
var uLocal_1187=0;
var uLocal_1188=0;
var uLocal_1189=0;
var uLocal_1190=0;
var uLocal_1191=0;
var uLocal_1192=0;
var uLocal_1193=0;
var uLocal_1194=0;
var uLocal_1195=0;
var uLocal_1196=0;
var uLocal_1197=0;
var uLocal_1198=0;
var uLocal_1199=0;
var uLocal_1200=0;
var uLocal_1201=0;
var uLocal_1202=0;
var uLocal_1203=0;
var uLocal_1204=0;
var uLocal_1205=0;
var uLocal_1206=0;
var uLocal_1207=0;
var uLocal_1208=0;
var uLocal_1209=0;
var uLocal_1210=0;
var uLocal_1211=0;
var uLocal_1212=0;
var uLocal_1213=0;
var uLocal_1214=0;
var uLocal_1215=0;
var uLocal_1216=0;
var uLocal_1217=0;
var uLocal_1218=0;
var uLocal_1219=0;
var uLocal_1220=0;
var uLocal_1221=0;
var uLocal_1222=0;
var uLocal_1223=0;
var uLocal_1224=0;
var uLocal_1225=0;
var uLocal_1226=0;
var uLocal_1227=0;
var uLocal_1228=0;
var uLocal_1229=0;
var uLocal_1230=0;
var uLocal_1231=0;
var uLocal_1232=0;
var uLocal_1233=0;
var uLocal_1234=0;
var uLocal_1235=0;
var uLocal_1236=0;
var uLocal_1237=0;
var uLocal_1238=0;
var uLocal_1239=0;
var uLocal_1240=0;
var uLocal_1241=0;
var uLocal_1242=0;
var uLocal_1243=0;
var uLocal_1244=0;
var uLocal_1245=0;
var uLocal_1246=0;
var uLocal_1247=0;
var uLocal_1248=0;
var uLocal_1249=0;
var uLocal_1250=0;
var uLocal_1251=0;
var uLocal_1252=0;
var uLocal_1253=0;
var uLocal_1254=0;
var uLocal_1255=0;
var uLocal_1256=0;
var uLocal_1257=0;
var uLocal_1258=0;
var uLocal_1259=0;
var uLocal_1260=0;
var uLocal_1261=0;
var uLocal_1262=0;
var uLocal_1263=0;
var uLocal_1264=0;
var uLocal_1265=0;
var uLocal_1266=0;
var uLocal_1267=0;
var uLocal_1268=0;
var uLocal_1269=0;
var uLocal_1270=0;
var uLocal_1271=0;
var uLocal_1272=0;
var uLocal_1273=0;
var uLocal_1274=0;
var uLocal_1275=0;
var uLocal_1276=0;
var uLocal_1277=0;
var uLocal_1278=0;
var uLocal_1279=0;
var uLocal_1280=0;
var uLocal_1281=0;
var uLocal_1282=0;
var uLocal_1283=0;
var uLocal_1284=0;
var uLocal_1285=0;
var uLocal_1286=0;
var uLocal_1287=0;
var uLocal_1288=0;
var uLocal_1289=0;
var uLocal_1290=0;
var uLocal_1291=0;
var uLocal_1292=0;
var uLocal_1293=0;
var uLocal_1294=0;
var uLocal_1295=0;
var uLocal_1296=0;
var uLocal_1297=0;
var uLocal_1298=0;
var uLocal_1299=0;
var uLocal_1300=-1;
var uLocal_1301=0;
var uLocal_1302=0;
var uLocal_1303=0;
var uLocal_1304=0;
var uLocal_1305=0;
var uLocal_1306=0;
var uLocal_1307=1000;
var uLocal_1308=1000;
var uLocal_1309=0;
int iLocal_1310=0;
var uLocal_1311=0;
int iLocal_1312=0;
struct<3> Local_1313={
0, 0, 0 
};
var uLocal_1314=0;
var uLocal_1315=0;
var uLocal_1316=0;
var uLocal_1317=0;
var uLocal_1318=0;
var uLocal_1319=0;
var uLocal_1320=0;
int iLocal_1321=0;
var uLocal_1322=0;
struct<2> Local_1323={
0, 0 
};
int iLocal_1324=0;
var uLocal_1325=0;
struct<2> Local_1326[3];
int iLocal_1327=0;
int iLocal_1328=0;
int iLocal_1329=0;
int iLocal_1330=0;
float fLocal_1331=0f;
int iLocal_1332=0;
int iLocal_1333=0;
int iLocal_1334=0;
int iLocal_1335=0;
int iLocal_1336=0;
char cLocal_1337[24]="";
var uLocal_1338=0;
var uLocal_1339=0;
var uLocal_1340=0;
int iLocal_1341=0;
int iLocal_1342=0;
int iLocal_1343=0;
int iLocal_1344=0;
int iLocal_1345=0;
int iLocal_1346=0;
int iLocal_1347=0;
bool bLocal_1348=0;
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
sLocal_18="NULL";
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
StringCopy(&cLocal_77, "JHP2ADS", 16);
iLocal_80=joaat("s_m_m_armoured_01");
iLocal_81=joaat("boxville3");
iLocal_82=joaat("prop_idol_case_02");
iLocal_83=joaat("prop_yell_plastic_target");
Local_84={
0f, 0.175f, 0f 
};
Local_85={
0f, -3.6f, 0f 
};
iLocal_86=0;
fLocal_1331=0f;
iLocal_1346=-1;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_326(5);
}
MISC::SET_MISSION_FLAG(1);
func_305();
while (true){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_JewelStoreJobPrep2A", 0);
if(bLocal_91){
func_303();
}
func_301(&uLocal_92);
func_210();
func_208();
if(!bLocal_89){
func_204();
func_203(&Local_1107);
func_1();
}
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
wait(0);
}}


void func_1(){
switch (iLocal_86){
case 0:
if(func_23()){
func_22(1);
}
break;
case 1:
func_2();
break;
}}


void func_2(){
AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_STOP");
HUD::CLEAR_PRINTS();
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
func_8(0);
if(func_7(87)){
func_3(0, 1);
}else{
func_3(0, 0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(bool bParam0, int iParam1){
int iVar0;
int iVar1;
var uVar2;
if(!Global_63487){
Global_63487=iParam1;
}
if(bParam0){
if((func_6(0) && Global_78936.f_1==1) && func_5(Global_78936)){
}else{
Global_63485=1;
}}
if(Global_113810.f_9088 || func_6(0)){
iVar0=func_4();
iVar1=Global_91565[iVar0 /*5*/];
uVar2=Global_78960.f_109[iVar1 /*4*/];
if(iVar0==-1){
if(Global_113810.f_9088){
}
return;
}
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 4)){
return;
}
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 5)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 4);
MISC::SET_BIT(&Global_78938, true);
Global_78954=uVar2;
Global_78955=MISC::GET_GAME_TIMER();
}}

int func_4(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 7){
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 2)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_5(int iParam0){
switch (iParam0){
case 71:
return 1;
break;
case 86:
return 1;
break;
case 91:
return 1;
break;
default:
return 0;
break;
}
return 0;
}

int func_6(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}

int func_7(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_330[iParam0 /*6*/];
}


void func_8(bool bParam0){
int iVar0;
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), 0);
PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 0);
if(func_21()){
func_13(0);
}
iLocal_1333=0;
Global_75926=0;
if(bParam0){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
Global_75926=0;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1321)){
if(bParam0){
VEHICLE::DELETE_VEHICLE(&iLocal_1321);
}else{
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1321);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0)){
if(bParam0){
PED::DELETE_PED(&Local_1313);
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1313);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0)){
if(bParam0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
VEHICLE::DELETE_VEHICLE(&Local_1323);
}else{
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1323);
}}
iVar0=0;
while (iVar0 < Local_1326.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_1326[iVar0 /*2*/])){
if(bParam0){
OBJECT::DELETE_OBJECT(&(Local_1326[iVar0 /*2*/]));
}else{
if(ENTITY::IS_ENTITY_ATTACHED(Local_1326[iVar0 /*2*/])){
ENTITY::DETACH_ENTITY(Local_1326[iVar0 /*2*/], 1, 1);
}
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1326[iVar0 /*2*/]));
}}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1327)){
if(bParam0){
OBJECT::DELETE_OBJECT(&iLocal_1327);
}else{
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_1327)){
ENTITY::DETACH_ENTITY(iLocal_1327, 1, 1);
}
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1327);
}}
if(iLocal_1328 !=0){
PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1328, 0);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
}}
func_11(&uLocal_1298, 0, 0);
func_10();
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
}
func_9(6, 0);
}


void func_9(bool bParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_32532, iParam0);
}else{
MISC::CLEAR_BIT(&Global_32532, bParam0);
}}


void func_10(){
Global_96668=0;
}


void func_11(var uParam0, int iParam1, int iParam2){
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
if(func_12(uParam0->f_3)){
HUD::CLEAR_HELP(1);
}}
if(!MISC::IS_STRING_NULL(sVar0)){
if(func_12(sVar0)){
HUD::CLEAR_HELP(1);
}}}


bool func_12(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_13(bool bParam0){
if(bParam0){
func_20();
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
Global_20500.f_1=1;
if(func_19(0)){
func_14(0);
}}elseif(Global_20500.f_1==1){
if(!Global_20500.f_1==0){
Global_20500.f_1=3;
}}}


void func_14(int iParam0){
if(func_18()){
return;
}
if(Global_20704){
if(func_17()){
func_16(1, 1);
}else{
func_16(0, 0);
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
if(!func_15()){
Global_20500.f_1=3;
}}

int func_15(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_16(bool bParam0, bool bParam1){
if(bParam0){
if(func_19(0)){
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


bool func_17(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_18(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}

int func_19(int iParam0){
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


void func_20(){
if(Global_20500.f_1==9 || Global_20500.f_1==10){
Global_21898=0;
Global_21894=1;
}}

int func_21(){
if(Global_20500.f_1==1){
return 1;
}
return 0;
}


void func_22(int iParam0){
if(iParam0==2){}else{
iLocal_87=0;
iLocal_88=0;
iLocal_86=iParam0;
}}

int func_23(){
struct<3> Var0;
struct<3> Var1;
int iVar2;
int iVar3;
int iVar4;
bool bVar5;
int iVar6;
bool bVar7;
int iVar8;
var uVar9;
Var0={
692.8256f, -1012.544f, 21.722f 
};
Var1={
707.15f, -959.66f, 29.4f 
};
if(!iLocal_88){
if(func_202(Local_1323.f_0)){
if(HUD::GET_BLIP_FROM_ENTITY(Local_1323.f_0) !=0){
Local_1323.f_1=HUD::GET_BLIP_FROM_ENTITY(Local_1323.f_0);
}else{
Local_1323.f_1=func_201(Local_1323.f_0, 0, 0);
}
func_200("JHP2A_STEAL", 7500, 1);
func_199("JHP2A_HLP2", 15000);
}elseif(HUD::GET_BLIP_FROM_ENTITY(Local_1323.f_0) !=0){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
iVar3=HUD::GET_BLIP_FROM_ENTITY(Local_1323.f_0);
HUD::REMOVE_BLIP(&iVar3);
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}
AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_START");
func_138(0f, 0f, 0f, 0f, 1, func_194());
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
iLocal_1341=0;
iLocal_88=1;
bLocal_1348=true;
iLocal_87=1;
}
if(iLocal_88){
func_137();
switch (iLocal_87){
case 1:
if((((((iLocal_1310==0 && ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)) && ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0)) && !PED::IS_PED_INJURED(Local_1313.f_0)) && PED::IS_PED_IN_VEHICLE(Local_1313.f_0, Local_1323.f_0, 0)) && func_134(&(Local_1107[0 /*8*/]))){
func_106(&uLocal_1298, Local_1323.f_0, 0, 0, 1, 1, 1);
}else{
func_11(&uLocal_1298, 0, 0);
}
if(iLocal_1310==3 || iLocal_1310==2){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
func_103(&uLocal_1108, 1, 0);
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_12("JHP2A_HLP2")){
HUD::CLEAR_HELP(1);
}
if(!iLocal_1341){
func_200("JHP2A_TAKEBZ", 7500, 1);
}
iLocal_87=2;
}elseif((ENTITY::DOES_ENTITY_EXIST(iLocal_1324) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1324, 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1324, Local_1323.f_0)){
if(HUD::DOES_BLIP_EXIST(Local_1323.f_1)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Local_1323.f_1));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
func_102(705, 0);
}
func_101(&uLocal_1108, Var0, 0.1f, 0.1f, 0.1f, 1, iLocal_1324, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1323.f_0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0)){
VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1324, 5f, -1, 0);
iLocal_87=101;
}}elseif(iLocal_1310==1){
func_103(&uLocal_1108, 1, 0);
if(!HUD::DOES_BLIP_EXIST(Local_1326[0 /*2*/].f_1)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
Local_1326[0 /*2*/].f_1=func_100(Local_1326[0 /*2*/]);
func_200("JHP2A_TAKEBZ", 7500, 1);
iLocal_1341=1;
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1323.f_0, 0);
}}elseif(iLocal_1310==0){
if(HUD::DOES_BLIP_EXIST(Local_1323.f_1)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Local_1323.f_1));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
func_102(705, 0);
}
if(func_98(&uLocal_1108, Var0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1323.f_0, "JHP2A_RTNVAN", "", "", PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 0), 0, 1, -1)){
iLocal_87=101;
}
if(HUD::DOES_BLIP_EXIST(uLocal_1108) && HUD::DOES_BLIP_HAVE_GPS_ROUTE(uLocal_1108)){
HUD::SET_BLIP_ROUTE(uLocal_1108, 0);
}}
break;
case 101:
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 0)){
iVar4=Local_1323.f_0;
}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_1324) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1324, Local_1323.f_0)){
iVar4=iLocal_1324;
}
if(func_96(iVar4, 1093140480, 1, 1056964608, 0, 1, 0)){
if(func_7(87)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
iLocal_87=1000;
}else{
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
iLocal_87++;
}}
break;
case 102:
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
HUD::CLEAR_PRINTS();
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1323.f_0, 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1323.f_0, 1);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1324)){
VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1324, 5f, 1, 0);
}
func_95(0, -1);
if(ENTITY::DOES_ENTITY_EXIST(Local_1326[0 /*2*/])){
OBJECT::DELETE_OBJECT(&(Local_1326[0 /*2*/]));
}
if(ENTITY::DOES_ENTITY_EXIST(Local_1326[1 /*2*/])){
OBJECT::DELETE_OBJECT(&(Local_1326[1 /*2*/]));
}
if(ENTITY::DOES_ENTITY_EXIST(Local_1326[2 /*2*/])){
OBJECT::DELETE_OBJECT(&(Local_1326[2 /*2*/]));
}
return 1;
}
break;
case 2:
if(!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
iVar2=0;
while (iVar2 < Local_1326.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_1326[iVar2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1326[iVar2 /*2*/])){
if(HUD::DOES_BLIP_EXIST(Local_1323.f_1)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Local_1323.f_1));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}
if(!HUD::DOES_BLIP_EXIST(Local_1326[iVar2 /*2*/].f_1)){
Local_1326[iVar2 /*2*/].f_1=func_100(Local_1326[iVar2 /*2*/]);
}
}
iVar2++;
}
iVar2=0;
while (iVar2 < Local_1326.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_1326[iVar2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1326[iVar2 /*2*/])){
if(!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
bVar5=func_94(Local_1326[iVar2 /*2*/]);
if((bVar5 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, 0f, -3f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, 0f, -4.5f, 1f), 1.68f, 0, 1, 1)) || (!bVar5 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1326[iVar2 /*2*/], 1), 0.75f, 0.75f, 4f, 0, 0, 1))){
WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 1, 0, 0);
OBJECT::DELETE_OBJECT(&(Local_1326[iVar2 /*2*/]));
HUD::CLEAR_PRINTS();
AUDIO::PLAY_SOUND_FRONTEND(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
}}
}
iVar2++;
}}else{
func_102(705, 0);
iVar2=0;
while (iVar2 < Local_1326.f_0){
if(HUD::DOES_BLIP_EXIST(Local_1326[iVar2 /*2*/].f_1)){
HUD::REMOVE_BLIP(&(Local_1326[iVar2 /*2*/].f_1));
}
iVar2++;
}
func_48(&uLocal_1108, Var1, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, 1);
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, 0, 1, 0)){
iVar8=1;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, 1, 0)){
bVar7=true;
}
if(bVar7 || ((iVar8 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && bLocal_1348)){
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
if(!func_21()){
func_13(1);
}
if(!PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0) && !func_19(0)){
if(iVar6 !=joaat("weapon_briefcase")){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 1);
}}
}}
if(bVar7){
if(iVar6==joaat("weapon_briefcase")){
if(!func_12("JHP2A_HLP1")){
func_47("JHP2A_HLP1");
}
}
if(PAD::IS_CONTROL_JUST_PRESSED(0, 51) && iVar6==joaat("weapon_briefcase")){
if(func_12("JHP2A_HLP1")){
HUD::CLEAR_HELP(1);
}
uVar9=WEAPON::GET_WEAPON_OBJECT_FROM_PED(PLAYER::PLAYER_PED_ID(), 1);
PHYSICS::ACTIVATE_PHYSICS(uVar9);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Drop_Case", iVar9, "JWL_PREP_2A_SOUNDS", 0, 0);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar9);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
func_95(0, -1);
func_46(706);
func_103(&uLocal_1108, 1, 0);
if(func_7(87)){
if(func_21()){
func_13(0);
}
iLocal_87=2000;
}else{
return 1;
}
}}else{
if(func_21()){
func_13(0);
}
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(func_12("JHP2A_HLP1")){
HUD::CLEAR_HELP(1);
}
}}
bLocal_1348=PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
}
break;
case 1000:
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1323.f_0, 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1323.f_0, 1);
func_45(1);
func_44(1, 0);
if(func_42()){
if(func_26(&uLocal_1133, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
iLocal_87++;
}}
break;
case 1001:
func_44(1, 0);
if(func_25()){
iLocal_87++;
}
break;
case 1002:
func_44(1, 0);
if(!func_25()){
func_24();
return 1;
}
break;
case 2000:
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
Global_75926=1;
func_45(1);
func_44(1, 0);
iLocal_87++;
break;
case 2001:
func_44(1, 0);
if(func_42()){
if(func_26(&uLocal_1133, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0)){
iLocal_87++;
}}
break;
case 2002:
func_44(1, 0);
if(func_25()){
iLocal_87++;
}
break;
case 2003:
func_44(1, 0);
if(!func_25()){
func_24();
return 1;
}
break;
}}
return 0;
}


void func_24(){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 1);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98182[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(Global_98182[iVar0], 0)){
ENTITY::SET_ENTITY_PROOFS(Global_98182[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Global_98182[iVar0], 0);
}}
iVar0++;
}
if((Global_43377 !=0 && Global_43377 !=3) && Global_43377 !=2){
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}}

int func_25(){
if(Global_20500.f_1==10 || Global_20500.f_1==9){
return 1;
}
return 0;
}


bool func_26(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_41(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
Global_21893=0;
Global_21852=1;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_21850=0;
Global_21897=0;
Global_21899=0;
if(iParam5==1){
Global_21857=1;
}else{
Global_21857=0;
}
Global_2883585=0;
return func_27(sParam3, iParam4, bParam8);
}

int func_27(char* sParam0, int iParam1, bool bParam2){
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
func_40();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_39(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_38();
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
func_36();
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
if(func_35()){
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
if(func_15()){
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
func_34();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_33();
func_28();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_40();
}
return 0;
}


void func_28(){
if(!func_29()){
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

int func_29(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_32()){
return 0;
}
if(func_30(PLAYER::PLAYER_ID())){
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


bool func_30(int iParam0){
return func_31(iParam0, 20);
}


var func__31(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_32(){
return -1;
}


void func_33(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_34(){
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

int func_35(){
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


void func_36(){
if(func_37(14)){
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
Global_20500=func_194();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


bool func_37(int iParam0){
return Global_43377==iParam0;
}


void func_38(){
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


bool func_39(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_40(){
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


void func_41(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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

int func_42(){
if(func_43()){
return 0;
}
if(HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
return 0;
}}
return 1;
}

int func_43(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_44(bool bParam0, bool bParam1){
if(!bParam1){
PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
if(bParam0){
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(bParam1){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
}else{
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
}
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
}
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}}


void func_45(bool bParam0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 0);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
if(bParam0){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
}
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
PLAYER::SET_MAX_WANTED_LEVEL(0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
}


void func_46(int iParam0){
bool bVar0;
int iVar1;
Global_63486=0;
if(!Global_63710[iParam0 /*13*/]==3){
return;
}
bVar0=false;
iVar1=0;
iVar1=0;
while (iVar1 < Global_75580){
if(Global_75581[iVar1 /*9*/]==iParam0){
bVar0=true;
Global_75581[iVar1 /*9*/].f_1=1;
Global_75581[iVar1 /*9*/].f_2=0f;
if(Global_75581[iVar1 /*9*/].f_3==2){
}}
iVar1++;
}
if(!bVar0){}}


void func_47(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_48(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
return func_49(uParam0, Param1, Param2, func_93(), func_93(), iParam3, 3, 0, 0, 0, 0, sParam4, func_92(), func_92(), func_92(), func_92(), func_92(), 0, bParam5, func_92(), 0, 0, bParam6, iParam7, func_92(), func_92(), func_92(), bParam8, 1065353216);
}

int func_49(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, int iParam28){
int iVar0;
bool bVar1;
int iVar2;
struct<3> Var3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
Var3={
Param1 + Vector(1f, 0f, 0f) 
};
uParam0->f_17[0]=iParam7;
uParam0->f_17[1]=iParam8;
uParam0->f_17[2]=iParam9;
uParam0->f_16=iParam7;
func_91(uParam0);
func_90(uParam0);
func_89();
if(func_72(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, uParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18)){
func_71(sParam12);
func_71(sParam13);
func_71(sParam14);
func_71(sParam15);
if(CAM::IS_SCREEN_FADED_IN()){
bVar1=false;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)){
MISC::SET_BIT(&(uParam0->f_13), 3);
if(!MISC::IS_BIT_SET(uParam0->f_13, 9)){
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 23)){
MISC::CLEAR_BIT(&(uParam0->f_13), 23);
}
MISC::SET_BIT(&(uParam0->f_13), 9);
bVar1=true;
}}elseif(iParam6==4 || iParam6==5){
if(func_69(uParam0, iParam21)){
MISC::SET_BIT(&(uParam0->f_13), 3);
if(!MISC::IS_BIT_SET(uParam0->f_13, 9)){
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
MISC::SET_BIT(&(uParam0->f_13), 9);
bVar1=true;
}}else{
bVar1=true;
}
if(bVar1){
func_71(sParam16);
func_71(sParam19);
func_71("MORE_SEATS");
if(bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_71(sParam11);
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
if((!func_66(uParam0, 1) && !func_65(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0)){
if(bParam22){
func_64(uParam0, "LOSE_WANTED", 0);
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_62(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
}
}
MISC::SET_BIT(&(uParam0->f_13), false);
MISC::CLEAR_BIT(&(uParam0->f_13), true);
}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
func_71("LOSE_WANTED");
MISC::CLEAR_BIT(&(uParam0->f_13), false);
MISC::SET_BIT(&(uParam0->f_13), true);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 1)){
if(!func_66(uParam0, 1)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_62(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
}
MISC::CLEAR_BIT(&(uParam0->f_13), true);
}}
if(!HUD::DOES_BLIP_EXIST(uParam0->f_5)){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
uParam0->f_5=func_61(Var3, 0);
if(!iParam23==-1){
HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam23);
}
if(bParam27){
func_60(uParam0->f_5, uParam0);
}}elseif(!func_59(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f, 0)){
HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
if(bParam27){
func_60(uParam0->f_5, uParam0);
}}
if(!func_66(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 2)){
func_64(uParam0, sParam11, 0);
MISC::SET_BIT(&(uParam0->f_13), 2);
}}
if(iParam6==4 || iParam6==5){
if(MISC::IS_BIT_SET(uParam0->f_13, 13)){
iParam5=0;
}}
bVar1=false;
iVar4=0;
iVar5=0;
if((iParam6==1 || iParam6==3) || iParam6==5){
iVar4=1;
}
if(iParam6==2 || iParam6==3){
iVar5=1;
}elseif(iParam6==4 || iParam6==5){
iVar5=2;
}
if(bParam20){
ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, iParam5, iVar4, iVar5);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param3, Param4, iParam28, 0, iVar4, iVar5)){
bVar1=true;
}}elseif(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, iParam5, iVar4, iVar5)){
bVar1=true;
}
if(bVar1){
bVar1=true;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar2])){
if(iParam6==4 || iParam6==5){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0)){
bVar1=false;
}}elseif(iParam10 !=0){
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam10, 0)){
bVar1=false;
}}elseif(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], func_58()) || !func_56(uParam0->f_17[iVar2], 1)){
bVar1=false;
}}
iVar2++;
}
if(bVar1){
if(func_53(uParam0)){
func_71(sParam11);
func_71(sParam16);
func_71(sParam12);
func_71(sParam13);
func_71(sParam14);
func_71(sParam15);
func_71("LOSE_WANTED");
func_71("MORE_SEATS");
func_71(sParam19);
func_103(uParam0, 1, 0);
return 1;
}
}}}}elseif(ENTITY::DOES_ENTITY_EXIST(iParam10)){
if((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22))){
func_71(sParam16);
func_71(sParam19);
if(HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
HUD::REMOVE_BLIP(uParam0);
func_71(sParam11);
}
if((!func_66(uParam0, 1) && !func_65(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0)){
if(bParam22){
func_64(uParam0, "LOSE_WANTED", 0);
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_62(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
}
}
MISC::SET_BIT(&(uParam0->f_13), false);
MISC::CLEAR_BIT(&(uParam0->f_13), true);
}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
func_71("LOSE_WANTED");
MISC::CLEAR_BIT(&(uParam0->f_13), false);
MISC::SET_BIT(&(uParam0->f_13), true);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 1)){
if(!func_66(uParam0, 1)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_62(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
}
MISC::CLEAR_BIT(&(uParam0->f_13), true);
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(!HUD::DOES_BLIP_EXIST(*uParam0)){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_71(sParam11);
}
*uParam0=func_50(iParam10, 0, 0);
HUD::SET_BLIP_DISPLAY(*uParam0, 2);
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_60(*uParam0, uParam0);
}
}
if(!func_66(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_64(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}elseif(MISC::IS_BIT_SET(uParam0->f_13, 9)){
if(!MISC::IS_STRING_NULL(sParam19)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_64(uParam0, sParam19, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_64(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}
if(!MISC::IS_BIT_SET(uParam0->f_13, 23)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_62(uParam0->f_17[0], "GET_IN_CAR", 3);
}
MISC::SET_BIT(&(uParam0->f_13), 23);
}}
}}}}else{
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_71(sParam11);
}
if(iParam6==4 || iParam6==5){
if(iParam21 > 0){
if(!func_66(uParam0, 2)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!MISC::IS_BIT_SET(uParam0->f_13, 13)){
iVar6=0;
iVar7=0;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar2])){
iVar6++;
}
iVar2++;
}
iVar7=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar7])){
func_62(uParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
}
func_64(uParam0, "MORE_SEATS", 0);
MISC::SET_BIT(&(uParam0->f_13), 13);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_64(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
if(MISC::IS_BIT_SET(uParam0->f_13, 9)){
func_64(uParam0, sParam19, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}
}}elseif(!func_66(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_64(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
elseif(MISC::IS_BIT_SET(uParam0->f_13, 9)){
if(!MISC::IS_STRING_NULL(sParam19)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_64(uParam0, sParam19, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_64(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}
}}}}}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
MISC::CLEAR_BIT(&(uParam0->f_13), false);
}
func_71(sParam11);
func_71(sParam16);
func_71(sParam19);
func_71(sParam16);
func_71("LOSE_WANTED");
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}}
MISC::CLEAR_BIT(&(uParam0->f_13), 11);
MISC::CLEAR_BIT(&(uParam0->f_13), 12);
return 0;
}

int func_50(int iParam0, bool bParam1, bool bParam2){
return func_51(iParam0, !bParam1, bParam2);
}

int func_51(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_52(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}

int func_53(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_13, 12)){
if(func_55(PLAYER::PLAYER_PED_ID())){
if(func_54(1, 0, 1) || MISC::IS_BIT_SET(uParam0->f_13, 7)){
return 1;
}}}elseif(func_54(1, 0, 1) || MISC::IS_BIT_SET(uParam0->f_13, 7)){
return 1;
}
return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2){
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

int func_55(int iParam0){
float fVar0;
if(!PED::IS_PED_INJURED(iParam0)){
fVar0=ENTITY::GET_ENTITY_SPEED(iParam0);
if(fVar0 > -0.5f && fVar0 < 0.5f){
return 1;
}}
return 0;
}

int func_56(int iParam0, int iParam1){
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1){
if(func_57(PLAYER::PLAYER_PED_ID(), iParam0)){
PED::SET_GROUP_SEPARATION_RANGE(func_58(), 50f);
return 1;
}}elseif(PED::IS_PED_GROUP_MEMBER(iParam0, func_58())){
PED::SET_GROUP_SEPARATION_RANGE(func_58(), 50f);
return 1;
}}else{
return 1;
}
return 0;
}

int func_57(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(!PED::IS_PED_INJURED(iParam1)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0)){
return 1;
}}}}}
return 0;
}


var func__58(){
return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_59(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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


void func_60(var uParam0, var uParam1){
if(HUD::DOES_BLIP_EXIST(uParam0)){
if(HUD::DOES_BLIP_EXIST(uParam1->f_6)){
HUD::SET_BLIP_ROUTE(uParam1->f_6, 0);
}
HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
HUD::CLEAR_GPS_MULTI_ROUTE();
uParam1->f_6=uParam0;
HUD::SET_BLIP_ROUTE(uParam0, 1);
}}


var func__61(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_52(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


void func_62(int iParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_63(iParam2), 1);
}

int func_63(int iParam0){
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


void func_64(var uParam0, char* sParam1, bool bParam2){
if(!bParam2){
if(!MISC::IS_STRING_NULL(sParam1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "")){
func_200(sParam1, 7500, 1);
}}}
uParam0->f_10=MISC::GET_GAME_TIMER();
}

int func_65(var uParam0){
if(!PED::IS_PED_INJURED(uParam0->f_16)){
if(AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_16)){
return 1;
}}
return 0;
}

int func_66(var uParam0, int iParam1){
if(iParam1 !=1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
return 1;
}
if(func_68(uParam0)){
return 1;
}}
if(iParam1 !=2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_43() && !func_67()){
return 1;
}}
return 0;
}

int func_67(){
if(Global_22856==1){
return 1;
}
return 0;
}

int func_68(var uParam0){
int iVar0;
int iVar1;
iVar1=MISC::GET_GAME_TIMER();
iVar0=(iVar1 - uParam0->f_10);
if(iVar0 < 35){
return 1;
}
return 0;
}

int func_69(var uParam0, int iParam1){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_70(iVar0, uParam0, iParam1)){
return 1;
}}
return 0;
}

int func_70(int iParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
iVar2=0;
while (iVar2 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_17[iVar2])){
iVar0++;
}
iVar2++;
}
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
if(iParam2 > 0){
if(iVar1 >=iParam2){
if(iParam2 > 1){
if(!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1)){
return 1;
}}else{
return 1;
}}}elseif(iVar1 >=iVar0){
if(iVar0 > 1){
if(!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1)){
return 1;
}}else{
return 1;
}}}
return 0;
}


void func_71(char* sParam0){
if(!MISC::IS_STRING_NULL(sParam0)){
HUD::CLEAR_THIS_PRINT(sParam0);
}}

int func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7[3];
bool bVar8;
bool bVar9;
int iVar10;
int iVar11;
var uVar12[3];
var uVar13[3];
bool bVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
struct<3> Var19;
int iVar20;
int iVar21;
iVar4=0;
uParam0->f_17[0]=uParam1;
uParam0->f_17[1]=uParam2;
uParam0->f_17[2]=uParam3;
uParam0->f_16=uParam1;
uVar12[0]=uParam4;
uVar12[1]=uParam5;
uVar12[2]=uParam6;
uVar13[0]=uParam13;
uVar13[1]=uParam14;
uVar13[2]=uParam15;
iVar6=1;
iVar1=0;
iVar2=0;
iVar3=0;
iVar7[0]=0;
iVar7[1]=0;
iVar7[2]=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
iVar3++;
}
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 29) && !MISC::IS_BIT_SET(uParam0->f_13, 28)){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 1, -1, 0);
}
if(iVar0==2){
MISC::SET_BIT(&(uParam0->f_13), 28);
}}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 29) && MISC::IS_BIT_SET(uParam0->f_13, 28)){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
}
if(iVar0==2){
MISC::CLEAR_BIT(&(uParam0->f_13), 28);
}}
iVar0++;
}
if(iVar3==0){
return 1;
}
if(MISC::IS_BIT_SET(uParam0->f_13, 26)){
bVar14=false;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21)){
iVar16=64;
iVar16 |=65536;
iVar16 |=2048;
iVar16 |=1;
iVar16 |=2;
iVar16 |=4;
iVar16 |=32;
iVar16 |=16;
iVar16 |=8;
iVar15=VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar16);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar15, 0)){
uParam0->f_21=iVar15;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, 1)) < 400f){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17){
if(func_70(uParam0->f_21, uParam0, iVar3)){
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}
if(TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"))==7 && !func_88(uParam0->f_17[iVar0], uParam0->f_21)){
if(!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
}
}}
iVar0++;
}
return 1;
}
else{
bVar14=true;
}}else{
bVar14=true;
}}else{
bVar14=true;
}}else{
bVar14=true;
}}else{
bVar14=true;
}
if(bVar14){
MISC::CLEAR_BIT(&(uParam0->f_13), 26);
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
if(func_86(uParam0, uParam0->f_17[iVar0], uParam8, 1)){
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_58());
}}}
iVar0++;
}}}
if(!MISC::IS_BIT_SET(uParam0->f_13, 26)){
if((!func_85(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10)){
iVar10=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 13)){
if(iParam16==4 || iParam16==5){
}
if(!func_66(uParam0, 2)){
iVar17=0;
iVar18=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
iVar17++;
}
iVar0++;
}
iVar18=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar17);
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar18])){
func_62(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
}
func_64(uParam0, "MORE_SEATS", 0);
MISC::SET_BIT(&(uParam0->f_13), 13);
}}
bVar9=true;
}}else{
bVar9=false;
MISC::CLEAR_BIT(&(uParam0->f_13), 13);
func_71("MORE_SEATS");
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam10)){
if((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2])){
if(!MISC::IS_BIT_SET(uParam0->f_13, 31)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_66(uParam0, 2)){
iVar10=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_84(iVar10, uParam0)){
func_64(uParam0, "CMN_VEHSUIT", 0);
MISC::SET_BIT(&(uParam0->f_13), 31);
}}}elseif(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
MISC::CLEAR_BIT(&(uParam0->f_13), 31);
func_71("CMN_VEHSUIT");
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10)){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 75)){
MISC::SET_BIT(&(uParam0->f_13), 21);
}}elseif(MISC::IS_BIT_SET(uParam0->f_13, 21)){
MISC::CLEAR_BIT(&(uParam0->f_13), 21);
}}
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
}else{
PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
}
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar10=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0)){
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
if(!func_85(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!func_83(uParam0->f_17[iVar0])){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}}}
}
if(iVar10 !=iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar10, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar10)){
if(ENTITY::IS_ENTITY_IN_WATER(iVar10) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar10)){
Var19={
ENTITY::GET_ENTITY_COORDS(iVar10, 1) 
};
if(Var19.f_2 < -1f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
}}}
}}
bVar8=true;
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
iVar10=PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar10, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(iVar10 !=iParam10){
if(!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar10)){
if(ENTITY::GET_ENTITY_SPEED(iVar10) > 5f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 4160);
}else{
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
}
bVar8=false;
}
}}else{
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar20=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar20, 0)){
if(iVar10 !=iVar20){
if(ENTITY::GET_ENTITY_SPEED(iVar10) > 5f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 4160);
}else{
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
}
bVar8=false;
}
}}}
}}
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
iVar21=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar21)){
if(func_70(iVar21, uParam0, 0)){
if(func_82(iVar0, uParam0) || !MISC::IS_BIT_SET(uParam0->f_13, 27)){
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
func_81(iVar0, uParam0);
iVar4++;
if(iVar4 >=iVar3){
MISC::SET_BIT(&(uParam0->f_13), 27);
}}}elseif(!func_82(iVar0, uParam0)){
if(ENTITY::GET_ENTITY_MODEL(iVar21)==joaat("sentinel2")){
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
}else{
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
}
func_80(iVar0, uParam0);
}
}}
if((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()) && !func_79(uParam0->f_17[iVar0], iParam10)) && !func_78(uParam0->f_17[iVar0], iParam10)){
if(func_86(uParam0, uParam0->f_17[iVar0], uParam8, bParam11)){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
if(((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])){
iVar11=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar11==7){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_58());
bVar8=false;
}}
}
if(bVar8){
if(!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
uParam0->f_11=MISC::GET_GAME_TIMER();
uParam0->f_1[iVar0]=func_50(uParam0->f_17[iVar0], 0, 0);
HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
if(bParam9){
func_60(uParam0->f_1[iVar0], uParam0);
}}
}
iVar6=0;
}elseif(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
if(((func_56(uParam0->f_17[iVar0], 1) || func_79(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_71(uVar12[iVar0]);
}
}
else{
if(bParam9){
func_60(uParam0->f_1[iVar0], uParam0);
}
iVar6=0;
}}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10)){
if((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !MISC::IS_BIT_SET(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0)){
if(!func_56(uParam0->f_17[iVar0], 1)){
if(func_55(uParam0->f_17[iVar0])){
iVar11=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_leave_vehicle"));
if(iVar11==7){
TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
}}
}
}}else{
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
if((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}
}
iVar11=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar11==7 && !func_88(uParam0->f_17[iVar0], iParam10)){
if(((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_77(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
if(MISC::IS_BIT_SET(uParam0->f_13, 10)){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
}
TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
}
}
elseif(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)){
uParam0->f_1[iVar0]=func_50(uParam0->f_17[iVar0], 0, 0);
HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
iVar6=0;
}}}elseif(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
if(func_86(uParam0, uParam0->f_17[iVar0], uParam8, bParam11)){
if(!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])){
iVar11=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar11==7){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 0);
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_58());
}}}
}
elseif(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10)){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58())){
if(!MISC::IS_BIT_SET(uParam0->f_13, 21)){
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_58());
}}elseif(MISC::IS_BIT_SET(uParam0->f_13, 21)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
MISC::SET_BIT(&(uParam0->f_13), 21);
}
}
elseif(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_58()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}}}elseif(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_71(uVar12[iVar0]);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
iVar7[iVar0]=1;
iVar1++;
}
iVar0++;
}
if(!func_66(uParam0, 2)){
if(iVar1 > 0){
iVar0=0;
while (iVar0 < 3){
if(iVar7[iVar0]){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(func_83(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0)){
iVar1=(iVar1 - 1);
iVar7[iVar0]=0;
}
}}elseif(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_83(uParam0->f_17[iVar0])){
}}
iVar0++;
}}
iVar5=MISC::GET_GAME_TIMER();
if((iVar5 - uParam0->f_11) > 1500 || iVar3==1){
if(iVar1 > 0){
if(uParam0->f_12 < iVar1){
if((iVar1==iVar3 || (iVar2 + iVar1)==iVar3) && iVar3 > 1){
if(!MISC::IS_BIT_SET(uParam0->f_13, 5)){
func_64(uParam0, sParam7, 0);
MISC::SET_BIT(&(uParam0->f_13), 5);
uParam0->f_12=iVar1;
}else{
uParam0->f_12=iVar1;
}
}
else{
iVar0=0;
while (iVar0 < 3){
if(iVar7[iVar0]){
if(!func_76(iVar0, uParam0)){
if(!MISC::IS_STRING_NULL(uVar13[iVar0])){
if(!MISC::ARE_STRINGS_EQUAL(uVar13[iVar0], "")){
func_74(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
func_73(iVar0, uParam0);
uParam0->f_12=iVar1;
}
}
if(!func_76(iVar0, uParam0)){
func_64(uParam0, uVar12[iVar0], 0);
func_73(iVar0, uParam0);
uParam0->f_12=iVar1;
}
}
else{
uParam0->f_12=iVar1;
}}
iVar0++;
}
}}}else{
uParam0->f_12=0;
}}}
MISC::CLEAR_BIT(&(uParam0->f_13), 10);
if(iVar6 && !bVar9){
iVar0=0;
while (iVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_71(uVar12[iVar0]);
}
iVar0++;
}
func_71("MORE_SEATS");
return 1;
}}
return 0;
}


void func_73(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::SET_BIT(&(uParam1->f_13), 14);
break;
case 1:
MISC::SET_BIT(&(uParam1->f_13), 15);
break;
case 2:
MISC::SET_BIT(&(uParam1->f_13), 16);
break;
}}


void func_74(var uParam0, char* sParam1, var uParam2, bool bParam3){
if(!bParam3){
if(!MISC::IS_STRING_NULL(sParam1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "")){
func_75(sParam1, uParam2, 7500, 1);
}}}
uParam0->f_10=MISC::GET_GAME_TIMER();
}


void func_75(char* sParam0, var uParam1, int iParam2, int iParam3){
iParam3=iParam3;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

int func_76(int iParam0, var uParam1){
switch (iParam0){
case 0:
return MISC::IS_BIT_SET(uParam1->f_13, 14);
case 1:
return MISC::IS_BIT_SET(uParam1->f_13, 15);
case 2:
return MISC::IS_BIT_SET(uParam1->f_13, 16);
default:
}
return 0;
}

int func_77(int iParam0, float fParam1){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1){
return 1;
}}}
return 0;
}

int func_78(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(!PED::IS_PED_GROUP_MEMBER(iParam0, func_58())){
iVar0=PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0)){
if(iVar0==iParam1){
return 1;
}}}}}
return 0;
}

int func_79(int iParam0, int iParam1){
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
return 1;
}}}}
return 0;
}


void func_80(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::SET_BIT(&(uParam1->f_13), 17);
break;
case 1:
MISC::SET_BIT(&(uParam1->f_13), 18);
break;
case 2:
MISC::SET_BIT(&(uParam1->f_13), 19);
break;
}}


void func_81(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::CLEAR_BIT(&(uParam1->f_13), 17);
break;
case 1:
MISC::CLEAR_BIT(&(uParam1->f_13), 18);
break;
case 2:
MISC::CLEAR_BIT(&(uParam1->f_13), 19);
break;
}}

int func_82(int iParam0, var uParam1){
switch (iParam0){
case 0:
return MISC::IS_BIT_SET(uParam1->f_13, 17);
case 1:
return MISC::IS_BIT_SET(uParam1->f_13, 18);
case 2:
return MISC::IS_BIT_SET(uParam1->f_13, 19);
default:
}
return 0;
}

int func_83(int iParam0){
int iVar0;
int iVar1;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(!PED::IS_PED_INJURED(iParam0)){
iVar1=PED::GET_VEHICLE_PED_IS_USING(iParam0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)){
if(iVar0==iVar1){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0)){
return 1;
}}}}}}
return 0;
}

int func_84(int iParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("coach")){
iVar0=0;
iVar1=0;
iVar2=0;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam1->f_17[iVar2])){
iVar0++;
}
iVar2++;
}
iVar3=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, 0);
if(!PED::IS_PED_INJURED(iVar3)){
if((iVar3==uParam1->f_17[0] || iVar3==uParam1->f_17[1]) || iVar3==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, 0);
if(!PED::IS_PED_INJURED(iVar4)){
if((iVar4==uParam1->f_17[0] || iVar4==uParam1->f_17[1]) || iVar4==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
iVar5=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, 0);
if(!PED::IS_PED_INJURED(iVar5)){
if((iVar5==uParam1->f_17[0] || iVar5==uParam1->f_17[1]) || iVar5==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
if(iVar1 < iVar0){
return 1;
}}}
return 0;
}

int func_85(var uParam0){
int iVar0;
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_70(iVar0, uParam0, 0)){
return 1;
}}
return 0;
}

int func_86(var uParam0, int iParam1, float fParam2, bool bParam3){
int iVar0;
if(!PED::IS_PED_INJURED(iParam1)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0)){
if(func_85(uParam0)){
return 1;
}}elseif(bParam3){
return 1;
}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, uParam2, uParam2, 3f, 0, 1, 0)){
return 1;
}}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0)){
if(!bParam3){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(func_70(iVar0, uParam0, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(func_87(iVar0)){
return 1;
}
}}}else{
return 1;
}}else{
return 1;
}}}
return 0;
}

int func_87(int iParam0){
float fVar0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
fVar0=ENTITY::GET_ENTITY_SPEED(iParam0);
if(fVar0 > -0.5f && fVar0 < 0.5f){
return 1;
}}
return 0;
}

int func_88(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(iParam0);
if(iVar0==iParam1){
return 1;
}}}
return 0;
}


void func_89(){
int iVar0;
int iVar1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar0=PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
if(!PED::IS_PED_INJURED(iVar1)){
if(iVar1 !=PLAYER::PLAYER_PED_ID()){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)){
if(!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
}}}}}}}


void func_90(var uParam0){
int iVar0;
if(!MISC::IS_BIT_SET(uParam0->f_13, 25)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, 0);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, 1);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, 1);
PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
}}
iVar0++;
}
MISC::SET_BIT(&(uParam0->f_13), 25);
}}


void func_91(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 0);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 0);
}}}
iVar0++;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
}}}}

int func_92(){
var uVar0;
return uVar0;
}


Vector3 func__93(){
struct<3> Var0;
return Var0;
}

int func_94(int iParam0){
struct<3> Var0;
if(ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0)){
return 0;
}
Var0={
MISC::GET_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, Local_84), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, Local_85), 0) 
};
if(vdist2(Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, Local_84)) <=vdist2(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, Local_85), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, Local_84))){
return 1;
}
return 0;
}


void func_95(bool bParam0, int iParam1){
int iVar0;
if(Global_63493){}
Global_63493=0;
if(bParam0){
Global_63494=1;
}
iVar0=0;
if(iParam1==-1){
iVar0=0;
while (iVar0 < Global_75580){
if(Global_63710[Global_75581[iVar0 /*9*/] /*13*/]==4){
Global_75581[iVar0 /*9*/].f_5=0;
return;
}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < Global_75580){
if(Global_75581[iVar0 /*9*/] > 0){
if(Global_75581[iVar0 /*9*/]==iParam1){
Global_75581[iVar0 /*9*/].f_5=0;
return;
}}
iVar0++;
}}}

int func_96(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
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
func_97(iParam0);
if((MISC::GET_GAME_TIMER() - Global_29) > 500){
VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
}
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <=fParam3){
return 1;
}}
return 0;
}


void func_97(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


bool func_98(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13){
return func_49(uParam0, Param1, func_99(), Param2, Param3, iParam5, 5, 0, 0, 0, iParam6, sParam7, func_92(), func_92(), func_92(), func_92(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_92(), func_92(), func_92(), 1, iParam4);
}


Vector3 func__99(){
return 0f, 0f, 2f;
}

int func_100(int iParam0){
return func_51(iParam0, 1, 0);
}

int func_101(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11){
return func_49(uParam0, Param1, Param2, func_93(), func_93(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_92(), func_92(), func_92(), func_92(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}


void func_102(int iParam0, bool bParam1){
int iVar0;
Global_63495=iParam0;
if(!Global_63493){
Global_63493=1;
}
if(bParam1){
iVar0=0;
while (iVar0 < Global_75580){
if(Global_75581[iVar0 /*9*/]==iParam0){
Global_75581[iVar0 /*9*/].f_1=0;
}
iVar0++;
}}}


void func_103(var uParam0, bool bParam1, bool bParam2){
bool bVar0;
if(MISC::IS_BIT_SET(uParam0->f_13, 30)){
bParam1=true;
}
func_105(uParam0);
bVar0=false;
while (bVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[bVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[bVar0]));
}
func_104(bVar0, uParam0);
func_81(bVar0, uParam0);
bVar0++;
}
bVar0=false;
while (bVar0 < 31){
if(bVar0 !=8){
MISC::CLEAR_BIT(&(uParam0->f_13), bVar0);
MISC::CLEAR_BIT(&(uParam0->f_14), bVar0);
}
bVar0++;
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
uParam0->f_6=0;
uParam0->f_12=0;
uParam0->f_15=0;
bVar0=false;
while (bVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[bVar0])){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[bVar0], 1);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[bVar0], 1);
if(bParam2){
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[bVar0], 32, 1);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[bVar0], 305, 0);
}
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[bVar0], 268, 0);
if(bParam1){
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[bVar0], func_58()) && uParam0->f_17[bVar0] !=PLAYER::PLAYER_PED_ID()){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[bVar0]);
}}
if(!MISC::IS_BIT_SET(uParam0->f_13, 29)){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[bVar0], 0, -1, 0);
}
uParam0->f_17[bVar0]=0;
}
bVar0++;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(bParam2){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
}}
uParam0->f_21=0;
}


void func_104(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::CLEAR_BIT(&(uParam1->f_13), 14);
break;
case 1:
MISC::CLEAR_BIT(&(uParam1->f_13), 15);
break;
case 2:
MISC::CLEAR_BIT(&(uParam1->f_13), 16);
break;
}}


void func_105(var uParam0){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
}}


void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6){
func_107(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}


void func_107(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7){
func_108(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}


void func_108(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
func_11(uParam0, 0, 0);
}
uParam0->f_6=2;
func_109(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}


void func_109(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7){
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
if(func_12(iVar0)){
func_133();
}
if(func_132(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1)){
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
if(func_127(uParam0, bParam5, bParam7, 0)){
func_123(uParam0, iParam1, Param2, iParam4);
}
if(*uParam0){
*uParam0=0;
}elseif(uParam0->f_6==2){
if(func_113(iVar0)){
if((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6){
if(!func_12(iVar0)){
func_199(iVar0, -1);
uParam0->f_3=iVar0;
if(MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0)){
func_112(1);
}}
}}}}elseif(func_113(iVar0)){
if(MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)){
if(((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6){
if(!func_12(iVar0)){
func_199(iVar0, -1);
uParam0->f_3=iVar0;
if(MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0)){
func_112(1);
}
}}}}}else{
if(!MISC::IS_STRING_NULL(sParam3)){
if(func_12(sParam3)){
HUD::CLEAR_HELP(1);
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3)==4){
func_11(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6)==4){
func_11(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4)==4){
func_11(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5)==4){
func_11(uParam0, iVar0, 1);
}}elseif(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2)==4){
func_11(uParam0, iVar0, 1);
}}elseif(CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE()==4){
func_11(uParam0, iVar0, 1);
}}
if(!func_127(uParam0, bParam5, bParam7, 0)){
if((!*uParam0 && !uParam0->f_1) && !func_111(uParam0)){
func_110(uParam0);
}}}}else{
func_11(uParam0, iVar0, 0);
}}


void func_110(var uParam0){
if(func_132(PLAYER::PLAYER_PED_ID())){
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

int func_111(var uParam0){
int iVar0;
if(uParam0->f_2 > 0){
iVar0=(uParam0->f_10 / 2);
if(uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER(){
return 1;
}}
return 0;
}

int func_112(bool bParam0){
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

int func_113(char* sParam0){
if(!func_114(1, 1, 0)){
if((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_12(sParam0)) || func_12("CMN_HINT")){
HUD::CLEAR_HELP(1);
}
return 0;
}
switch (Global_43377){
case 0:
case 3:
if(func_112(0) < 3){
return 1;
}
break;
case 4:
if(func_112(0) < 1){
return 1;
}
break;
case 5:
case 15:
if(func_112(0) < 1){
return 1;
}
break;
default:
break;
}
return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2){
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
if(func_19(0)){
return 0;
}
if(func_122()){
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
if((func_121() || func_120(Global_4718592.f_171044)) || func_119()){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar1=func_118(PLAYER::PLAYER_PED_ID(), 0);
if(((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("apc") && iVar1 !=-1)) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("akula") && iVar1 !=-1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("riot2") && iVar1==0) && func_117(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) !=-1)){
return 0;
}}}
if(Global_1962809){
return 0;
}
if(func_115(PLAYER::PLAYER_ID())){
return 0;
}
return 1;
}

int func_115(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}elseif((Global_1575063 && iParam0==PLAYER::PLAYER_ID()) && func_116(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_116(int iParam0, bool bParam1, bool bParam2){
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

int func_117(int iParam0, int iParam1){
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

int func_118(int iParam0, int iParam1){
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


var func__119(){
return Global_2683883.f_19;
}


bool func_120(int iParam0){
return iParam0==51;
}


var func__121(){
return Global_2683883.f_18;
}


bool func_122(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}


void func_123(var uParam0, int iParam1, struct<3> Param2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(Global_1581988==1){
return;
}
if(ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
func_11(uParam0, 0, 0);
}
if(func_126(Param2, 0f, 0f, 0f, 0)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
iVar0=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
if(!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
if(!func_124()){
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


bool func_124(){
return func_125(PLAYER::PLAYER_ID());
}

int func_125(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}


bool func_126(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_127(var uParam0, bool bParam1, bool bParam2, bool bParam3){
if(uParam0->f_1){
if(MISC::GET_GAME_TIMER() >=(uParam0->f_8 + uParam0->f_9)){
uParam0->f_1=0;
}}
switch (uParam0->f_5){
case 0:
uParam0->f_7=0;
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(func_131(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(func_130(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(uParam0->f_6==1){
if(func_130(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}elseif(uParam0->f_6==2){
if(func_131(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=1;
uParam0->f_7=1;
}}
if(func_111(uParam0)){
uParam0->f_7=1;
uParam0->f_5=4;
}
break;
case 1:
if((MISC::GET_GAME_TIMER() - uParam0->f_4) <=500){
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_131(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(!func_130(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(uParam0->f_6==1){
if(!func_130(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}elseif(uParam0->f_6==2){
if(!func_131(bParam1, bParam2, bParam3)){
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=3;
}}}else{
uParam0->f_5=2;
}
break;
case 2:
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!func_131(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(!func_130(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==1){
if(!func_130(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==2){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)){
uParam0->f_5=0;
}elseif(!func_131(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}
break;
case 3:
if((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500){
if(uParam0->f_6==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(func_129(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(func_128(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_128(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}elseif(uParam0->f_6==2){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)){
uParam0->f_5=0;
}elseif(func_129(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
}}}
break;
case 4:
if(!func_111(uParam0)){
uParam0->f_5=0;
}
break;
}
if(!func_114(bParam1, bParam2, bParam3)){
uParam0->f_5=0;
uParam0->f_7=0;
}
if(uParam0->f_7){
func_133();
return 1;
}else{
return 0;
}
return 0;
}

int func_128(bool bParam0, bool bParam1, bool bParam2){
if(!func_114(bParam0, bParam1, bParam2)){
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

int func_129(bool bParam0, bool bParam1, bool bParam2){
if(!func_114(bParam0, bParam1, bParam2)){
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

int func_130(bool bParam0, bool bParam1, bool bParam2){
if(!func_114(bParam0, bParam1, bParam2)){
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

int func_131(bool bParam0, bool bParam1, bool bParam2){
if(!func_114(bParam0, bParam1, bParam2)){
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

int func_132(int iParam0){
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


void func_133(){
MISC::SET_BIT(&Global_8371, 4);
}

int func_134(var uParam0){
if(func_136(uParam0) && !func_135(uParam0)){
return 1;
}
return 0;
}

int func_135(var uParam0){
if(*uParam0==4){
return 1;
}
return 0;
}

int func_136(var uParam0){
if(*uParam0 !=0 && (*uParam0 !=2 || uParam0->f_1 > 0)){
return 1;
}
return 0;
}


void func_137(){
int iVar0;
if(iLocal_1310==0 || iLocal_1310==1){
if(((ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0) || (ENTITY::DOES_ENTITY_EXIST(Local_1326[0 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1326[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1326[1 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1326[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1326[2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1326[2 /*2*/]))){
iLocal_1310=2;
}}
if(iLocal_1310==2){
if((((!ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)) || (ENTITY::DOES_ENTITY_EXIST(Local_1326[0 /*2*/]) && !func_94(Local_1326[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1326[1 /*2*/]) && !func_94(Local_1326[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1326[2 /*2*/]) && !func_94(Local_1326[2 /*2*/]))){
iLocal_1310=3;
}}
if(iLocal_1310==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("towtruck2")){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, Local_1323.f_0)){
iLocal_1324=iVar0;
}}}}}
if(iLocal_1310==0){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)){
iLocal_1310=1;
}}
if(iLocal_1310==1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 1)){
func_9(6, 1);
}else{
func_9(6, 0);
}}


void func_138(struct<3> Param0, float fParam1, int iParam2, int iParam3){
struct<3> Var0;
var uVar1;
if(ENTITY::DOES_ENTITY_EXIST(Global_104373.f_4)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104373.f_4, 0)){
if(func_193(24) !=Global_104373.f_4){
if(iParam2==1){
if(func_190(ENTITY::GET_ENTITY_COORDS(Global_104373.f_4, 1), iParam3, &Var0, &uVar1)){
Param0={
Var0 
};
fParam1=uVar1;
}}
func_139(Global_104373.f_4, Param0, fParam1, 24, 0);
}}}}


void func_139(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4){
struct<60> Var0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(iParam3 !=24 && iParam3 !=25){
return;
}
if(iParam3==24){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[25], 0)){
if(Global_77479.f_484[25]==iParam0){
return;
}}}
if(!bParam4){
if((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tourbus")){
return;
}}
func_189(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_184(iParam0, &Var0);
if(func_126(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
uParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78467=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_177(iParam3, &Var0, Param1, uParam2, func_183(iParam0));
func_140(iParam3, iParam0, 0);
}}


void func_140(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_173(&(Global_77479.f_555[0 /*21*/]), iParam0)){
return;
}
if(!MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
if(Global_77479.f_555[0 /*21*/].f_4 !=ENTITY::GET_ENTITY_MODEL(iParam1)){
return;
}}
if(Global_78386 !=-1 && Global_78386 !=iParam0){
return;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
}
if(iParam0==24){
Global_113810.f_32752.f_4801=func_162();
}
if(iParam1 !=Global_77479.f_139[iParam0]){
if(iParam0==24){
iVar0=func_193(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_141(iVar0, 145);
}}
Global_78385=iParam1;
Global_78386=iParam0;
Global_78387=iParam2;
}}}}


void func_141(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_142(iParam0)){
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
iParam1=Global_113810.f_2366.f_539.f_4321;
}}
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 2){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66=0;
Global_113810.f_32752.f_5592[iVar1]=iVar2;
}}}
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1))){
Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66=0;
}}}
iVar1++;
}
Global_113810.f_32752.f_5590=iParam1;
Global_78384=iParam0;
Global_113810.f_32752.f_5588=1;
func_184(iParam0, &(Global_113810.f_32752.f_5510));
}

int func_142(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_160(iParam0, 0, 0)) || func_160(iParam0, 1, 0)) || func_160(iParam0, 2, 0)) || func_183(iParam0) !=145) || func_159(iParam0)) || func_158(iParam0)) || func_157(iParam0)) || func_156(iParam0)) || !func_143(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_158(iParam0)){
}
if(func_158(iParam0)){
}
if(func_160(iParam0, 0, 0)){
}
if(func_160(iParam0, 1, 0)){
}
if(func_160(iParam0, 2, 0)){
}
if(func_183(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_143(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_144(iParam0, 0, -1)){
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

int func_144(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_155()){
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
if((((!func_154() && !func_153()) && !func_152()) && !func_151()) && !func_155()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_150() || MISC::IS_PC_VERSION()) || func_149()){
}elseif(!func_152()){
return 0;
}}
if(bParam1){
if(!func_147(iParam0, iParam2)){
return 0;
}}
if(!func_145(iParam0)){
return 0;
}
return 1;
}

int func_145(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_146()){
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

int func_146(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_147(int iParam0, int iParam1){
int iVar0;
int iVar1;
if((!Global_2764417 && iParam1 >=0) && iParam1 <=415){
if(MISC::IS_BIT_SET(Global_1586488[iParam1 /*142*/].f_103, 2)){
return 1;
}}
if(Global_2764416){
return 1;
}
iVar0=1;
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0==joaat("btype3")){
if((!Global_262145.f_7142 && !Global_262145.f_13570) && iVar1 < Global_262145.f_13571){
iVar0=0;
}}
if(iParam0==joaat("faction3")){
if(!Global_262145.f_14912 && iVar1 < Global_262145.f_14924){
iVar0=0;
}}elseif(iParam0==joaat("virgo3") || iParam0==joaat("virgo2")){
if(!Global_262145.f_14908 && iVar1 < Global_262145.f_14920){
iVar0=0;
}}elseif(iParam0==joaat("sabregt2")){
if(!Global_262145.f_14909 && iVar1 < Global_262145.f_14921){
iVar0=0;
}}elseif(iParam0==joaat("tornado5")){
if(!Global_262145.f_14910 && iVar1 < Global_262145.f_14922){
iVar0=0;
}}elseif(iParam0==joaat("minivan2")){
if(!Global_262145.f_14911 && iVar1 < Global_262145.f_14923){
iVar0=0;
}}elseif(iParam0==joaat("slamvan3")){
if(!Global_262145.f_14913 && iVar1 < Global_262145.f_14925){
iVar0=0;
}}
if(iParam0==joaat("prototipo")){
if(!Global_262145.f_14914 && iVar1 < Global_262145.f_14917){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_14915 && iVar1 < Global_262145.f_14918){
iVar0=0;
}}elseif(iParam0==joaat("pfister811")){
if(!Global_262145.f_14916 && iVar1 < Global_262145.f_14919){
iVar0=0;
}}
if(iParam0==joaat("bf400")){
if(!Global_262145.f_17493 && iVar1 < Global_262145.f_17458){
iVar0=0;
}}elseif(iParam0==joaat("brioso")){
if(!Global_262145.f_17488 && iVar1 < Global_262145.f_17453){
iVar0=0;
}}elseif(iParam0==joaat("cliffhanger")){
if(!Global_262145.f_17492 && iVar1 < Global_262145.f_17457){
iVar0=0;
}}elseif(iParam0==joaat("contender")){
if(!Global_262145.f_17491 && iVar1 < Global_262145.f_17456){
iVar0=0;
}}elseif(iParam0==joaat("le7b")){
if(!Global_262145.f_17485 && iVar1 < Global_262145.f_17450){
iVar0=0;
}}elseif(iParam0==joaat("omnis")){
if(!Global_262145.f_17486 && iVar1 < Global_262145.f_17451){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck")){
if(!Global_262145.f_17489 && iVar1 < Global_262145.f_17454){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck2")){
if(!Global_262145.f_17490 && iVar1 < Global_262145.f_17455){
iVar0=0;
}}elseif(iParam0==joaat("tropos")){
if(!Global_262145.f_17487 && iVar1 < Global_262145.f_17452){
iVar0=0;
}}elseif(iParam0==joaat("gargoyle")){
if(!Global_262145.f_17495 && iVar1 < Global_262145.f_17460){
iVar0=0;
}}elseif(iParam0==joaat("rallytruck")){
if(!Global_262145.f_17496 && iVar1 < Global_262145.f_17461){
iVar0=0;
}}elseif(iParam0==joaat("tampa2")){
if(!Global_262145.f_17484 && iVar1 < Global_262145.f_17449){
iVar0=0;
}}elseif(iParam0==joaat("tyrus")){
if(!Global_262145.f_17483 && iVar1 < Global_262145.f_17448){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_17482 && iVar1 < Global_262145.f_17447){
iVar0=0;
}}elseif(iParam0==joaat("lynx")){
if(!Global_262145.f_17494 && iVar1 < Global_262145.f_17459){
iVar0=0;
}}elseif(iParam0==joaat("stalion2")){
if(!Global_262145.f_17497 && iVar1 < Global_262145.f_17462){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet2")){
if(!Global_262145.f_17498 && iVar1 < Global_262145.f_17463){
iVar0=0;
}}elseif(iParam0==joaat("dominator2")){
if(!Global_262145.f_17499 && iVar1 < Global_262145.f_17464){
iVar0=0;
}}elseif(iParam0==joaat("buffalo3")){
if(!Global_262145.f_17500 && iVar1 < Global_262145.f_17465){
iVar0=0;
}}
if(iParam0==joaat("defiler")){
if(!Global_262145.f_17654 && iVar1 < Global_262145.f_17676){
iVar0=0;
}}elseif(iParam0==joaat("nightblade")){
if(!Global_262145.f_17655 && iVar1 < Global_262145.f_17677){
iVar0=0;
}}elseif(iParam0==joaat("zombiea")){
if(!Global_262145.f_17656 && iVar1 < Global_262145.f_17678){
iVar0=0;
}}elseif(iParam0==joaat("esskey")){
if(!Global_262145.f_17657 && iVar1 < Global_262145.f_17679){
iVar0=0;
}}elseif(iParam0==joaat("avarus")){
if(!Global_262145.f_17658 && iVar1 < Global_262145.f_17680){
iVar0=0;
}}elseif(iParam0==joaat("zombieb")){
if(!Global_262145.f_17659 && iVar1 < Global_262145.f_17681){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou2")){
if(!Global_262145.f_17661 && iVar1 < Global_262145.f_17682){
iVar0=0;
}}elseif(iParam0==joaat("vortex")){
if(!Global_262145.f_17662 && iVar1 < Global_262145.f_17683){
iVar0=0;
}}elseif(iParam0==joaat("shotaro")){
if(!Global_262145.f_17663 && iVar1 < Global_262145.f_17684){
iVar0=0;
}}elseif(iParam0==joaat("chimera")){
if(!Global_262145.f_17664 && iVar1 < Global_262145.f_17685){
iVar0=0;
}}elseif(iParam0==joaat("raptor")){
if(!Global_262145.f_17665 && iVar1 < Global_262145.f_17686){
iVar0=0;
}}elseif(iParam0==joaat("daemon2")){
if(!Global_262145.f_17666 && iVar1 < Global_262145.f_17687){
iVar0=0;
}}elseif(iParam0==joaat("blazer4")){
if(!Global_262145.f_17667 && iVar1 < Global_262145.f_17688){
iVar0=0;
}}elseif(iParam0==joaat("tornado6")){
if(!Global_262145.f_17673 && iVar1 < Global_262145.f_17695){
iVar0=0;
}}elseif(iParam0==joaat("youga2")){
if(!Global_262145.f_17670 && iVar1 < Global_262145.f_17691){
iVar0=0;
}}elseif(iParam0==joaat("wolfsbane")){
if(!Global_262145.f_17671 && iVar1 < Global_262145.f_17692){
iVar0=0;
}}elseif(iParam0==joaat("faggio3")){
if(!Global_262145.f_17672 && iVar1 < Global_262145.f_17693){
iVar0=0;
}}elseif(iParam0==joaat("faggio")){
if(!Global_262145.f_17660 && iVar1 < Global_262145.f_17694){
iVar0=0;
}}elseif(iParam0==joaat("bagger")){
if(!Global_262145.f_17674 && iVar1 < Global_262145.f_17696){
iVar0=0;
}}elseif(iParam0==joaat("sanctus")){
if(!Global_262145.f_17668 && iVar1 < Global_262145.f_17689){
iVar0=0;
}}elseif(iParam0==joaat("manchez")){
if(!Global_262145.f_17669 && iVar1 < Global_262145.f_17690){
iVar0=0;
}}elseif(iParam0==joaat("ratbike")){
if(!Global_262145.f_17675 && iVar1 < Global_262145.f_17697){
iVar0=0;
}}
if(iParam0==joaat("voltic2")){
if(!Global_262145.f_19311 && iVar1 < Global_262145.f_19408){
iVar0=0;
}}elseif(iParam0==joaat("ruiner2")){
if(!Global_262145.f_19312 && iVar1 < Global_262145.f_19409){
iVar0=0;
}}elseif(iParam0==joaat("dune4")){
if(!Global_262145.f_19313 && iVar1 < Global_262145.f_19410){
iVar0=0;
}}elseif(iParam0==joaat("dune5")){
if(!Global_262145.f_19314 && iVar1 < Global_262145.f_19411){
iVar0=0;
}}elseif(iParam0==joaat("phantom2")){
if(!Global_262145.f_19315 && iVar1 < Global_262145.f_19412){
iVar0=0;
}}elseif(iParam0==joaat("technical2")){
if(!Global_262145.f_19316 && iVar1 < Global_262145.f_19413){
iVar0=0;
}}elseif(iParam0==joaat("boxville5")){
if(!Global_262145.f_19317 && iVar1 < Global_262145.f_19414){
iVar0=0;
}}elseif(iParam0==joaat("wastelander")){
if(!Global_262145.f_19318 && iVar1 < Global_262145.f_19415){
iVar0=0;
}}elseif(iParam0==joaat("blazer5")){
if(!Global_262145.f_19319 && iVar1 < Global_262145.f_19416){
iVar0=0;
}}elseif(iParam0==joaat("comet2")){
if(!Global_262145.f_19320 && iVar1 < Global_262145.f_19417){
iVar0=0;
}}elseif(iParam0==joaat("comet3")){
if(!Global_262145.f_19321 && iVar1 < Global_262145.f_19418){
iVar0=0;
}}elseif(iParam0==joaat("diablous")){
if(!Global_262145.f_19322 && iVar1 < Global_262145.f_19419){
iVar0=0;
}}elseif(iParam0==joaat("diablous2")){
if(!Global_262145.f_19323 && iVar1 < Global_262145.f_19420){
iVar0=0;
}}elseif(iParam0==joaat("elegy")){
if(!Global_262145.f_19324 && iVar1 < Global_262145.f_19421){
iVar0=0;
}}elseif(iParam0==joaat("elegy2")){
if(!Global_262145.f_19325 && iVar1 < Global_262145.f_19422){
iVar0=0;
}}elseif(iParam0==joaat("fcr")){
if(!Global_262145.f_19326 && iVar1 < Global_262145.f_19423){
iVar0=0;
}}elseif(iParam0==joaat("fcr2")){
if(!Global_262145.f_19327 && iVar1 < Global_262145.f_19424){
iVar0=0;
}}elseif(iParam0==joaat("italigtb")){
if(!Global_262145.f_19328 && iVar1 < Global_262145.f_19425){
iVar0=0;
}}elseif(iParam0==joaat("italigtb2")){
if(!Global_262145.f_19329 && iVar1 < Global_262145.f_19426){
iVar0=0;
}}elseif(iParam0==joaat("nero")){
if(!Global_262145.f_19330 && iVar1 < Global_262145.f_19427){
iVar0=0;
}}elseif(iParam0==joaat("nero2")){
if(!Global_262145.f_19331 && iVar1 < Global_262145.f_19428){
iVar0=0;
}}elseif(iParam0==joaat("penetrator")){
if(!Global_262145.f_19332 && iVar1 < Global_262145.f_19429){
iVar0=0;
}}elseif(iParam0==joaat("specter")){
if(!Global_262145.f_19333 && iVar1 < Global_262145.f_19430){
iVar0=0;
}}elseif(iParam0==joaat("specter2")){
if(!Global_262145.f_19334 && iVar1 < Global_262145.f_19431){
iVar0=0;
}}elseif(iParam0==joaat("tempesta")){
if(!Global_262145.f_19335 && iVar1 < Global_262145.f_19432){
iVar0=0;
}}
if(iParam0==joaat("gp1")){
if(!Global_262145.f_20392 && iVar1 < Global_262145.f_20388){
iVar0=0;
}}elseif(iParam0==joaat("infernus2")){
if(!Global_262145.f_20393 && iVar1 < Global_262145.f_20389){
iVar0=0;
}}elseif(iParam0==joaat("ruston")){
if(!Global_262145.f_20394 && iVar1 < Global_262145.f_20390){
iVar0=0;
}}elseif(iParam0==joaat("turismo2")){
if(!Global_262145.f_20395 && iVar1 < Global_262145.f_20391){
iVar0=0;
}}
if(iParam0==joaat("xa21")){
if(!Global_262145.f_21274 && iVar1 < Global_262145.f_21282){
iVar0=0;
}}elseif(iParam0==joaat("cheetah2")){
if(!Global_262145.f_21275 && iVar1 < Global_262145.f_21283){
iVar0=0;
}}elseif(iParam0==joaat("torero")){
if(!Global_262145.f_21276 && iVar1 < Global_262145.f_21284){
iVar0=0;
}}elseif(iParam0==joaat("vagner")){
if(!Global_262145.f_21277 && iVar1 < Global_262145.f_21285){
iVar0=0;
}}elseif(iParam0==joaat("ardent")){
if(!Global_262145.f_21278 && iVar1 < Global_262145.f_21286){
iVar0=0;
}}elseif(iParam0==joaat("nightshark")){
if(!Global_262145.f_21279 && iVar1 < Global_262145.f_21287){
iVar0=0;
}}
if(iParam0==joaat("microlight")){
if(!Global_262145.f_22073 && iVar1 < Global_262145.f_22093){
iVar0=0;
}}elseif(iParam0==joaat("mogul")){
if(!Global_262145.f_22085 && iVar1 < Global_262145.f_22105){
iVar0=0;
}}elseif(iParam0==joaat("rogue")){
if(!Global_262145.f_22076 && iVar1 < Global_262145.f_22096){
iVar0=0;
}}elseif(iParam0==joaat("starling")){
if(!Global_262145.f_22086 && iVar1 < Global_262145.f_22106){
iVar0=0;
}}elseif(iParam0==joaat("seabreeze")){
if(!Global_262145.f_22074 && iVar1 < Global_262145.f_22094){
iVar0=0;
}}elseif(iParam0==joaat("tula")){
if(!Global_262145.f_22090 && iVar1 < Global_262145.f_22110){
iVar0=0;
}}elseif(iParam0==joaat("pyro")){
if(!Global_262145.f_22088 && iVar1 < Global_262145.f_22108){
iVar0=0;
}}elseif(iParam0==joaat("molotok")){
if(!Global_262145.f_22089 && iVar1 < Global_262145.f_22109){
iVar0=0;
}}elseif(iParam0==joaat("nokota")){
if(!Global_262145.f_22084 && iVar1 < Global_262145.f_22104){
iVar0=0;
}}elseif(iParam0==joaat("bombushka")){
if(!Global_262145.f_22091 && iVar1 < Global_262145.f_22111){
iVar0=0;
}}elseif(iParam0==joaat("hunter")){
if(!Global_262145.f_22087 && iVar1 < Global_262145.f_22107){
iVar0=0;
}}elseif(iParam0==joaat("havok")){
if(!Global_262145.f_22083 && iVar1 < Global_262145.f_22103){
iVar0=0;
}}elseif(iParam0==joaat("howard")){
if(!Global_262145.f_22075 && iVar1 < Global_262145.f_22095){
iVar0=0;
}}elseif(iParam0==joaat("alphaz1")){
if(!Global_262145.f_22077 && iVar1 < Global_262145.f_22097){
iVar0=0;
}}elseif(iParam0==joaat("cyclone")){
if(!Global_262145.f_22078 && iVar1 < Global_262145.f_22098){
iVar0=0;
}}elseif(iParam0==joaat("visione")){
if(!Global_262145.f_22079 && iVar1 < Global_262145.f_22099){
iVar0=0;
}}elseif(iParam0==joaat("vigilante")){
if(!Global_262145.f_22080 && iVar1 < Global_262145.f_22100){
iVar0=0;
}}elseif(iParam0==joaat("retinue")){
if(!Global_262145.f_22081 && iVar1 < Global_262145.f_22101){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt3")){
if(!Global_262145.f_22082 && iVar1 < Global_262145.f_22102){
iVar0=0;
}}
if(iParam0==joaat("deluxo")){
if(!Global_262145.f_23041 && iVar1 < Global_262145.f_23069){
iVar0=0;
}}elseif(iParam0==joaat("stromberg")){
if(!Global_262145.f_23042 && iVar1 < Global_262145.f_23070){
iVar0=0;
}}elseif(iParam0==joaat("riot2")){
if(!Global_262145.f_23043 && iVar1 < Global_262145.f_23071){
iVar0=0;
}}elseif(iParam0==joaat("chernobog")){
if(!Global_262145.f_23044 && iVar1 < Global_262145.f_23072){
iVar0=0;
}}elseif(iParam0==joaat("khanjali")){
if(!Global_262145.f_23045 && iVar1 < Global_262145.f_23073){
iVar0=0;
}}elseif(iParam0==joaat("akula")){
if(!Global_262145.f_23046 && iVar1 < Global_262145.f_23074){
iVar0=0;
}}elseif(iParam0==joaat("thruster")){
if(!Global_262145.f_23047 && iVar1 < Global_262145.f_23075){
iVar0=0;
}}elseif(iParam0==joaat("barrage")){
if(!Global_262145.f_23048 && iVar1 < Global_262145.f_23076){
iVar0=0;
}}elseif(iParam0==joaat("volatol")){
if(!Global_262145.f_23049 && iVar1 < Global_262145.f_23077){
iVar0=0;
}}elseif(iParam0==joaat("comet4")){
if(!Global_262145.f_23050 && iVar1 < Global_262145.f_23078){
iVar0=0;
}}elseif(iParam0==joaat("neon")){
if(!Global_262145.f_23051 && iVar1 < Global_262145.f_23079){
iVar0=0;
}}elseif(iParam0==joaat("streiter")){
if(!Global_262145.f_23052 && iVar1 < Global_262145.f_23080){
iVar0=0;
}}elseif(iParam0==joaat("sentinel3")){
if(!Global_262145.f_23053 && iVar1 < Global_262145.f_23081){
iVar0=0;
}}elseif(iParam0==joaat("yosemite")){
if(!Global_262145.f_23054 && iVar1 < Global_262145.f_23082){
iVar0=0;
}}elseif(iParam0==joaat("sc1")){
if(!Global_262145.f_23055 && iVar1 < Global_262145.f_23083){
iVar0=0;
}}elseif(iParam0==joaat("autarch")){
if(!Global_262145.f_23056 && iVar1 < Global_262145.f_23084){
iVar0=0;
}}elseif(iParam0==joaat("gt500")){
if(!Global_262145.f_23057 && iVar1 < Global_262145.f_23085){
iVar0=0;
}}elseif(iParam0==joaat("hustler")){
if(!Global_262145.f_23058 && iVar1 < Global_262145.f_23086){
iVar0=0;
}}elseif(iParam0==joaat("revolter")){
if(!Global_262145.f_23059 && iVar1 < Global_262145.f_23087){
iVar0=0;
}}elseif(iParam0==joaat("pariah")){
if(!Global_262145.f_23060 && iVar1 < Global_262145.f_23088){
iVar0=0;
}}elseif(iParam0==joaat("raiden")){
if(!Global_262145.f_23061 && iVar1 < Global_262145.f_23089){
iVar0=0;
}}elseif(iParam0==joaat("savestra")){
if(!Global_262145.f_23062 && iVar1 < Global_262145.f_23090){
iVar0=0;
}}elseif(iParam0==joaat("riata")){
if(!Global_262145.f_23063 && iVar1 < Global_262145.f_23091){
iVar0=0;
}}elseif(iParam0==joaat("hermes")){
if(!Global_262145.f_23064 && iVar1 < Global_262145.f_23092){
iVar0=0;
}}elseif(iParam0==joaat("comet5")){
if(!Global_262145.f_23065 && iVar1 < Global_262145.f_23093){
iVar0=0;
}}elseif(iParam0==joaat("z190")){
if(!Global_262145.f_23066 && iVar1 < Global_262145.f_23094){
iVar0=0;
}}elseif(iParam0==joaat("viseris")){
if(!Global_262145.f_23067 && iVar1 < Global_262145.f_23095){
iVar0=0;
}}elseif(iParam0==joaat("kamacho")){
if(!Global_262145.f_23068 && iVar1 < Global_262145.f_23096){
iVar0=0;
}}
if(iParam0==joaat("gb200")){
if(!Global_262145.f_24263 && iVar1 < Global_262145.f_24279){
iVar0=0;
}}elseif(iParam0==joaat("fagaloa")){
if(!Global_262145.f_24264 && iVar1 < Global_262145.f_24280){
iVar0=0;
}}elseif(iParam0==joaat("ellie")){
if(!Global_262145.f_24268 && iVar1 < Global_262145.f_24284){
iVar0=0;
}}elseif(iParam0==joaat("issi3")){
if(!Global_262145.f_24271 && iVar1 < Global_262145.f_24287){
iVar0=0;
}}elseif(iParam0==joaat("michelli")){
if(!Global_262145.f_24276 && iVar1 < Global_262145.f_24292){
iVar0=0;
}}elseif(iParam0==joaat("flashgt")){
if(!Global_262145.f_24270 && iVar1 < Global_262145.f_24286){
iVar0=0;
}}elseif(iParam0==joaat("hotring")){
if(!Global_262145.f_24262 && iVar1 < Global_262145.f_24278){
iVar0=0;
}}elseif(iParam0==joaat("tezeract")){
if(!Global_262145.f_24269 && iVar1 < Global_262145.f_24285){
iVar0=0;
}}elseif(iParam0==joaat("tyrant")){
if(!Global_262145.f_24275 && iVar1 < Global_262145.f_24291){
iVar0=0;
}}elseif(iParam0==joaat("dominator3")){
if(!Global_262145.f_24274 && iVar1 < Global_262145.f_24290){
iVar0=0;
}}elseif(iParam0==joaat("taipan")){
if(!Global_262145.f_24265 && iVar1 < Global_262145.f_24281){
iVar0=0;
}}elseif(iParam0==joaat("entity2")){
if(!Global_262145.f_24267 && iVar1 < Global_262145.f_24283){
iVar0=0;
}}elseif(iParam0==joaat("jester3")){
if(!Global_262145.f_24277 && iVar1 < Global_262145.f_24293){
iVar0=0;
}}elseif(iParam0==joaat("cheburek")){
if(!Global_262145.f_24273 && iVar1 < Global_262145.f_24289){
iVar0=0;
}}elseif(iParam0==joaat("caracara")){
if(!Global_262145.f_24266 && iVar1 < Global_262145.f_24282){
iVar0=0;
}}elseif(iParam0==joaat("seasparrow")){
if(!Global_262145.f_24272 && iVar1 < Global_262145.f_24288){
iVar0=0;
}}
if(iParam0==joaat("terbyte")){
if(!Global_262145.f_24353 && iVar1 < Global_262145.f_24340){
iVar0=0;
}}elseif(iParam0==joaat("pbus2")){
if(!Global_262145.f_24354 && iVar1 < Global_262145.f_24341){
iVar0=0;
}}elseif(iParam0==joaat("mule4")){
if(!Global_262145.f_24359 && iVar1 < Global_262145.f_24346){
iVar0=0;
}}elseif(iParam0==joaat("pounder2")){
if(!Global_262145.f_24358 && iVar1 < Global_262145.f_24345){
iVar0=0;
}}elseif(iParam0==joaat("swinger")){
if(!Global_262145.f_24356 && iVar1 < Global_262145.f_24343){
iVar0=0;
}}elseif(iParam0==joaat("menacer")){
if(!Global_262145.f_24362 && iVar1 < Global_262145.f_24349){
iVar0=0;
}}elseif(iParam0==joaat("scramjet")){
if(!Global_262145.f_24364 && iVar1 < Global_262145.f_24351){
iVar0=0;
}}elseif(iParam0==joaat("strikeforce")){
if(!Global_262145.f_24365 && iVar1 < Global_262145.f_24352){
iVar0=0;
}}elseif(iParam0==joaat("oppressor2")){
if(!Global_262145.f_24363 && iVar1 < Global_262145.f_24350){
iVar0=0;
}}elseif(iParam0==joaat("patriot2")){
if(!Global_262145.f_24355 && iVar1 < Global_262145.f_24342){
iVar0=0;
}}elseif(iParam0==joaat("stafford")){
if(!Global_262145.f_24357 && iVar1 < Global_262145.f_24344){
iVar0=0;
}}elseif(iParam0==joaat("freecrawler")){
if(!Global_262145.f_24361 && iVar1 < Global_262145.f_24348){
iVar0=0;
}}elseif(iParam0==joaat("blimp3")){
if(!Global_262145.f_24360 && iVar1 < Global_262145.f_24347){
iVar0=0;
}}
if(iParam0==joaat("monster3")){}elseif(iParam0==joaat("cerberus")){}elseif(iParam0==joaat("cerberus2")){}elseif(iParam0==joaat("cerberus3")){}elseif(iParam0==joaat("brutus")){}elseif(iParam0==joaat("brutus2")){}elseif(iParam0==joaat("brutus3")){}elseif(iParam0==joaat("scarab")){}elseif(iParam0==joaat("scarab2")){}elseif(iParam0==joaat("scarab3")){}elseif(iParam0==joaat("imperator")){}elseif(iParam0==joaat("imperator2")){}elseif(iParam0==joaat("imperator3")){}elseif(iParam0==joaat("zr380")){}elseif(iParam0==joaat("zr3802")){}elseif(iParam0==joaat("zr3803")){}elseif(iParam0==joaat("impaler")){}elseif(iParam0==joaat("deveste")){
if(!Global_262145.f_26956 && iVar1 < Global_262145.f_26958){
iVar0=0;
}}elseif(iParam0==joaat("toros")){
if(!Global_262145.f_25969 && iVar1 < Global_262145.f_25962){
iVar0=0;
}}elseif(iParam0==joaat("clique")){
if(!Global_262145.f_25970 && iVar1 < Global_262145.f_25963){
iVar0=0;
}}elseif(iParam0==joaat("italigto")){
if(!Global_262145.f_25971 && iVar1 < Global_262145.f_25964){
iVar0=0;
}}elseif(iParam0==joaat("deviant")){
if(!Global_262145.f_25972 && iVar1 < Global_262145.f_25965){
iVar0=0;
}}elseif(iParam0==joaat("vamos")){
if(!Global_262145.f_26957 && iVar1 < Global_262145.f_26959){
iVar0=0;
}}elseif(iParam0==joaat("tulip")){
if(!Global_262145.f_25973 && iVar1 < Global_262145.f_25966){
iVar0=0;
}}elseif(iParam0==joaat("schlagen")){
if(!Global_262145.f_25974 && iVar1 < Global_262145.f_25967){
iVar0=0;
}}elseif(iParam0==joaat("rcbandito")){
if(!Global_262145.f_25975 && iVar1 < Global_262145.f_25968){
iVar0=0;
}}elseif(iParam0==joaat("thrax")){
if(!Global_262145.f_25980 && iVar1 < Global_262145.f_26001){
iVar0=0;
}}elseif(iParam0==joaat("drafter")){
if(!Global_262145.f_25981 && iVar1 < Global_262145.f_26002){
iVar0=0;
}}elseif(iParam0==joaat("locust")){
if(!Global_262145.f_25982 && iVar1 < Global_262145.f_26003){
iVar0=0;
}}elseif(iParam0==joaat("novak")){
if(!Global_262145.f_25983 && iVar1 < Global_262145.f_26004){
iVar0=0;
}}elseif(iParam0==joaat("zorrusso")){
if(!Global_262145.f_25984 && iVar1 < Global_262145.f_26005){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet3")){
if(!Global_262145.f_25985 && iVar1 < Global_262145.f_26006){
iVar0=0;
}}elseif(iParam0==joaat("issi7")){
if(!Global_262145.f_25986 && iVar1 < Global_262145.f_26007){
iVar0=0;
}}elseif(iParam0==joaat("zion3")){
if(!Global_262145.f_25987 && iVar1 < Global_262145.f_26008){
iVar0=0;
}}elseif(iParam0==joaat("nebula")){
if(!Global_262145.f_25988 && iVar1 < Global_262145.f_26009){
iVar0=0;
}}elseif(iParam0==joaat("hellion")){
if(!Global_262145.f_25989 && iVar1 < Global_262145.f_26010){
iVar0=0;
}}elseif(iParam0==joaat("dynasty")){
if(!Global_262145.f_25990 && iVar1 < Global_262145.f_26011){
iVar0=0;
}}elseif(iParam0==joaat("rrocket")){
if(!Global_262145.f_25991 && iVar1 < Global_262145.f_26012){
iVar0=0;
}}elseif(iParam0==joaat("peyote2")){
if(!Global_262145.f_25992 && iVar1 < Global_262145.f_26013){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet4")){
if(!Global_262145.f_25993 && iVar1 < Global_262145.f_26014){
iVar0=0;
}}elseif(iParam0==joaat("caracara2")){
if(!Global_262145.f_25994 && iVar1 < Global_262145.f_26015){
iVar0=0;
}}elseif(iParam0==joaat("jugular")){
if(!Global_262145.f_25995 && iVar1 < Global_262145.f_26016){
iVar0=0;
}}elseif(iParam0==joaat("s80")){
if(!Global_262145.f_25996 && iVar1 < Global_262145.f_26017){
iVar0=0;
}}elseif(iParam0==joaat("krieger")){
if(!Global_262145.f_25997 && iVar1 < Global_262145.f_26018){
iVar0=0;
}}elseif(iParam0==joaat("emerus")){
if(!Global_262145.f_25998 && iVar1 < Global_262145.f_26019){
iVar0=0;
}}elseif(iParam0==joaat("neo")){
if(!Global_262145.f_25999 && iVar1 < Global_262145.f_26020){
iVar0=0;
}}elseif(iParam0==joaat("paragon")){
if(!Global_262145.f_26000 && iVar1 < Global_262145.f_26021){
iVar0=0;
}}elseif(iParam0==joaat("asbo")){
if(!Global_262145.f_28820 && iVar1 < Global_262145.f_28841){
iVar0=0;
}}elseif(iParam0==joaat("kanjo")){
if(!Global_262145.f_28821 && iVar1 < Global_262145.f_28842){
iVar0=0;
}}elseif(iParam0==joaat("everon")){
if(!Global_262145.f_28822 && iVar1 < Global_262145.f_28843){
iVar0=0;
}}elseif(iParam0==joaat("retinue2")){
if(!Global_262145.f_28823 && iVar1 < Global_262145.f_28844){
iVar0=0;
}}elseif(iParam0==joaat("yosemite2")){
if(!Global_262145.f_28824 && iVar1 < Global_262145.f_28845){
iVar0=0;
}}elseif(iParam0==joaat("sugoi")){
if(!Global_262145.f_28825 && iVar1 < Global_262145.f_28846){
iVar0=0;
}}elseif(iParam0==joaat("sultan2")){
if(!Global_262145.f_28826 && iVar1 < Global_262145.f_28847){
iVar0=0;
}}elseif(iParam0==joaat("outlaw")){
if(!Global_262145.f_28827 && iVar1 < Global_262145.f_28848){
iVar0=0;
}}elseif(iParam0==joaat("vagrant")){
if(!Global_262145.f_28828 && iVar1 < Global_262145.f_28849){
iVar0=0;
}}elseif(iParam0==joaat("komoda")){
if(!Global_262145.f_28829 && iVar1 < Global_262145.f_28850){
iVar0=0;
}}elseif(iParam0==joaat("stryder")){
if(!Global_262145.f_28830 && iVar1 < Global_262145.f_28851){
iVar0=0;
}}elseif(iParam0==joaat("furia")){
if(!Global_262145.f_28831 && iVar1 < Global_262145.f_28852){
iVar0=0;
}}elseif(iParam0==joaat("zhaba")){
if(!Global_262145.f_28832 && iVar1 < Global_262145.f_28853){
iVar0=0;
}}elseif(iParam0==joaat("jb7002")){
if(!Global_262145.f_28833 && iVar1 < Global_262145.f_28854){
iVar0=0;
}}elseif(iParam0==joaat("firetruk")){
if(!Global_262145.f_28834 && iVar1 < Global_262145.f_28855){
iVar0=0;
}}elseif(iParam0==joaat("burrito2")){
if(!Global_262145.f_28835 && iVar1 < Global_262145.f_28856){
iVar0=0;
}}elseif(iParam0==joaat("boxville")){
if(!Global_262145.f_28836 && iVar1 < Global_262145.f_28857){
iVar0=0;
}}elseif(iParam0==joaat("stockade")){
if(!Global_262145.f_28837 && iVar1 < Global_262145.f_28858){
iVar0=0;
}}elseif(iParam0==joaat("minitank")){
if(!Global_262145.f_28838 && iVar1 < Global_262145.f_28859){
iVar0=0;
}}elseif(iParam0==joaat("lguard")){
if(!Global_262145.f_28839 && iVar1 < Global_262145.f_28860){
iVar0=0;
}}elseif(iParam0==joaat("blazer2")){
if(!Global_262145.f_28840 && iVar1 < Global_262145.f_28861){
iVar0=0;
}}elseif(iParam0==joaat("formula")){
if((!Global_262145.f_28863 && iVar1 < Global_262145.f_28864) && !Global_262145.f_28818){
iVar0=0;
}}elseif(iParam0==joaat("formula2")){
if((!Global_262145.f_28866 && iVar1 < Global_262145.f_28867) && !Global_262145.f_28819){
iVar0=0;
}}elseif(iParam0==joaat("imorgon")){
if(!Global_262145.f_28871 && iVar1 < Global_262145.f_28874){
iVar0=0;
}}elseif(iParam0==joaat("rebla")){
if(!Global_262145.f_28872 && iVar1 < Global_262145.f_28875){
iVar0=0;
}}elseif(iParam0==joaat("vstr")){
if(!Global_262145.f_28873 && iVar1 < Global_262145.f_28876){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet5")){
if(!Global_262145.f_29889 && iVar1 < Global_262145.f_29554){
iVar0=0;
}}elseif(iParam0==joaat("club")){
if(!Global_262145.f_29540 && iVar1 < Global_262145.f_29561){
iVar0=0;
}}elseif(iParam0==joaat("dukes3")){
if(!Global_262145.f_29541 && iVar1 < Global_262145.f_29547){
iVar0=0;
}}elseif(iParam0==joaat("yosemite3")){
if(!Global_262145.f_29887 && iVar1 < Global_262145.f_29555){
iVar0=0;
}}elseif(iParam0==joaat("peyote3")){
if(!Global_262145.f_29888 && iVar1 < Global_262145.f_29556){
iVar0=0;
}}elseif(iParam0==joaat("glendale2")){
if(!Global_262145.f_29534 && iVar1 < Global_262145.f_29553){
iVar0=0;
}}elseif(iParam0==joaat("penumbra2")){
if(!Global_262145.f_29535 && iVar1 < Global_262145.f_29562){
iVar0=0;
}}elseif(iParam0==joaat("landstalker2")){
if(!Global_262145.f_29536 && iVar1 < Global_262145.f_29552){
iVar0=0;
}}elseif(iParam0==joaat("seminole2")){
if(!Global_262145.f_29537 && iVar1 < Global_262145.f_29550){
iVar0=0;
}}elseif(iParam0==joaat("tigon")){
if(!Global_262145.f_29883 && iVar1 < Global_262145.f_29557){
iVar0=0;
}}elseif(iParam0==joaat("openwheel1")){
if(!Global_262145.f_29884 && iVar1 < Global_262145.f_29558){
iVar0=0;
}}elseif(iParam0==joaat("openwheel2")){
if(!Global_262145.f_29885 && iVar1 < Global_262145.f_29559){
iVar0=0;
}}elseif(iParam0==joaat("coquette4")){
if(!Global_262145.f_29886 && iVar1 < Global_262145.f_29560){
iVar0=0;
}}elseif(iParam0==joaat("manana2")){
if(!Global_262145.f_29538 && iVar1 < Global_262145.f_29549){
iVar0=0;
}}elseif(iParam0==joaat("youga3")){
if(!Global_262145.f_29539 && iVar1 < Global_262145.f_29551){
iVar0=0;
}}elseif(iParam0==joaat("toreador")){
if(!Global_262145.f_30348 && iVar1 < Global_262145.f_30331){
iVar0=0;
}}elseif(iParam0==joaat("annihilator2")){
if(!Global_262145.f_30349 && iVar1 < Global_262145.f_30332){
iVar0=0;
}}elseif(iParam0==joaat("alkonost")){
if(!Global_262145.f_30350 && iVar1 < Global_262145.f_30333){
iVar0=0;
}}elseif(iParam0==joaat("patrolboat")){
if(!Global_262145.f_30351 && iVar1 < Global_262145.f_30334){
iVar0=0;
}}elseif(iParam0==joaat("longfin")){
if(!Global_262145.f_30352 && iVar1 < Global_262145.f_30335){
iVar0=0;
}}elseif(iParam0==joaat("winky")){
if(!Global_262145.f_30353 && iVar1 < Global_262145.f_30336){
iVar0=0;
}}elseif(iParam0==joaat("veto")){
if(!Global_262145.f_30354 && iVar1 < Global_262145.f_30337){
iVar0=0;
}}elseif(iParam0==joaat("veto2")){
if(!Global_262145.f_30355 && iVar1 < Global_262145.f_30338){
iVar0=0;
}}elseif(iParam0==joaat("italirsx")){
if(!Global_262145.f_30356 && iVar1 < Global_262145.f_30339){
iVar0=0;
}}elseif(iParam0==joaat("weevil")){
if(Global_262145.f_30365){
}elseif(!Global_262145.f_30357 && iVar1 < Global_262145.f_30340){
iVar0=0;
}}elseif(iParam0==joaat("manchez2")){
if(!Global_262145.f_30358 && iVar1 < Global_262145.f_30341){
iVar0=0;
}}elseif(iParam0==joaat("slamtruck")){
if(!Global_262145.f_30359 && iVar1 < Global_262145.f_30342){
iVar0=0;
}}elseif(iParam0==joaat("vetir")){
if(!Global_262145.f_30360 && iVar1 < Global_262145.f_30343){
iVar0=0;
}}elseif(iParam0==joaat("squaddie")){
if(!Global_262145.f_30361 && iVar1 < Global_262145.f_30344){
iVar0=0;
}}elseif(iParam0==joaat("brioso2")){
if(Global_262145.f_30366){
}elseif(!Global_262145.f_30362 && iVar1 < Global_262145.f_30345){
iVar0=0;
}}elseif(iParam0==joaat("dinghy5")){
if(!Global_262145.f_30363 && iVar1 < Global_262145.f_30346){
iVar0=0;
}}elseif(iParam0==joaat("verus")){
if(!Global_262145.f_30364 && iVar1 < Global_262145.f_30347){
iVar0=0;
}}elseif(iParam0==joaat("tailgater2")){
if(!Global_262145.f_31216 && iVar1 < Global_262145.f_31199){
iVar0=0;
}}elseif(iParam0==joaat("euros")){
if(!Global_262145.f_31217 && iVar1 < Global_262145.f_31200){
iVar0=0;
}}elseif(iParam0==joaat("sultan3")){
if(!Global_262145.f_31218 && iVar1 < Global_262145.f_31201){
iVar0=0;
}}elseif(iParam0==joaat("rt3000")){
if(!Global_262145.f_31219 && iVar1 < Global_262145.f_31202){
iVar0=0;
}}elseif(iParam0==joaat("vectre")){
if(!Global_262145.f_31220 && iVar1 < Global_262145.f_31203){
iVar0=0;
}}elseif(iParam0==joaat("zr350")){
if(!Global_262145.f_31221 && iVar1 < Global_262145.f_31204){
iVar0=0;
}}elseif(iParam0==joaat("warrener2")){
if(!Global_262145.f_31222 && iVar1 < Global_262145.f_31205){
iVar0=0;
}}elseif(iParam0==joaat("calico")){
if(!Global_262145.f_31223 && iVar1 < Global_262145.f_31206){
iVar0=0;
}}elseif(iParam0==joaat("remus")){
if(!Global_262145.f_31224 && iVar1 < Global_262145.f_31207){
iVar0=0;
}}elseif(iParam0==joaat("cypher")){
if(!Global_262145.f_31225 && iVar1 < Global_262145.f_31208){
iVar0=0;
}}elseif(iParam0==joaat("dominator7")){
if(!Global_262145.f_31226 && iVar1 < Global_262145.f_31209){
iVar0=0;
}}elseif(iParam0==joaat("jester4")){
if(!Global_262145.f_31227 && iVar1 < Global_262145.f_31210){
iVar0=0;
}}elseif(iParam0==joaat("futo2")){
if(!Global_262145.f_31228 && iVar1 < Global_262145.f_31211){
iVar0=0;
}}elseif(iParam0==joaat("dominator8")){
if(!Global_262145.f_31229 && iVar1 < Global_262145.f_31212){
iVar0=0;
}}elseif(iParam0==joaat("previon")){
if(!Global_262145.f_31230 && iVar1 < Global_262145.f_31213){
iVar0=0;
}}elseif(iParam0==joaat("growler")){
if(!Global_262145.f_31231 && iVar1 < Global_262145.f_31214){
iVar0=0;
}}elseif(iParam0==joaat("comet6")){
if(!Global_262145.f_31232 && iVar1 < Global_262145.f_31215){
iVar0=0;
}}elseif(iParam0==joaat("champion")){
if(!Global_262145.f_32099 && iVar1 < Global_262145.f_32084){
iVar0=0;
}}elseif(iParam0==joaat("buffalo4")){
if(!Global_262145.f_32100 && iVar1 < Global_262145.f_32085){
iVar0=0;
}}elseif(iParam0==joaat("deity")){
if(!Global_262145.f_32101 && iVar1 < Global_262145.f_32086){
iVar0=0;
}}elseif(iParam0==joaat("jubilee")){
if(!Global_262145.f_32102 && iVar1 < Global_262145.f_32087){
iVar0=0;
}}elseif(iParam0==joaat("ignus")){
if(!Global_262145.f_32103 && iVar1 < Global_262145.f_32088){
iVar0=0;
}}elseif(iParam0==joaat("cinquemila")){
if(!Global_262145.f_32104 && iVar1 < Global_262145.f_32089){
iVar0=0;
}}elseif(iParam0==joaat("astron")){
if(!Global_262145.f_32105 && iVar1 < Global_262145.f_32090){
iVar0=0;
}}elseif(iParam0==joaat("comet7")){
if(!Global_262145.f_32106 && iVar1 < Global_262145.f_32091){
iVar0=0;
}}elseif(iParam0==joaat("zeno")){
if(!Global_262145.f_32107 && iVar1 < Global_262145.f_32092){
iVar0=0;
}}elseif(iParam0==joaat("reever")){
if(!Global_262145.f_32108 && iVar1 < Global_262145.f_32093){
iVar0=0;
}}elseif(iParam0==joaat("iwagen")){
if(!Global_262145.f_32109 && iVar1 < Global_262145.f_32094){
iVar0=0;
}}elseif(iParam0==joaat("granger2")){
if(!Global_262145.f_32110 && iVar1 < Global_262145.f_32095){
iVar0=0;
}}elseif(iParam0==joaat("patriot3")){
if(!Global_262145.f_32111 && iVar1 < Global_262145.f_32096){
iVar0=0;
}}elseif(iParam0==joaat("shinobi")){
if(!Global_262145.f_32112 && iVar1 < Global_262145.f_32097){
iVar0=0;
}}elseif(iParam0==joaat("baller7")){
if(Global_262145.f_32177){
}elseif(!Global_262145.f_32113 && iVar1 < Global_262145.f_32098){
iVar0=0;
}}elseif(iParam0==joaat("brioso3")){
if(!Global_262145.f_33350 && iVar1 < Global_262145.f_33331){
iVar0=0;
}}elseif(iParam0==joaat("corsita")){
if(!Global_262145.f_33344 && iVar1 < Global_262145.f_33325){
iVar0=0;
}}elseif(iParam0==joaat("draugur")){
if(!Global_262145.f_33348 && iVar1 < Global_262145.f_33329){
iVar0=0;
}}elseif(iParam0==joaat("greenwood")){
if(!Global_262145.f_33342 && iVar1 < Global_262145.f_33323){
iVar0=0;
}}elseif(iParam0==joaat("kanjosj")){
if(!Global_262145.f_33353 && iVar1 < Global_262145.f_33334){
iVar0=0;
}}elseif(iParam0==joaat("lm87")){
if(!Global_262145.f_33345 && iVar1 < Global_262145.f_33326){
iVar0=0;
}}elseif(iParam0==joaat("postlude")){
if(!Global_262145.f_33354 && iVar1 < Global_262145.f_33335){
iVar0=0;
}}elseif(iParam0==joaat("rhinehart")){
if(!Global_262145.f_33356 && iVar1 < Global_262145.f_33337){
iVar0=0;
}}elseif(iParam0==joaat("sm722")){
if(!Global_262145.f_33347 && iVar1 < Global_262145.f_33328){
iVar0=0;
}}elseif(iParam0==joaat("tenf")){
if(!Global_262145.f_33355 && iVar1 < Global_262145.f_33336){
iVar0=0;
}}elseif(iParam0==joaat("tenf2")){
if(!Global_262145.f_33358 && iVar1 < Global_262145.f_33339){
iVar0=0;
}}elseif(iParam0==joaat("torero2")){
if(!Global_262145.f_33343 && iVar1 < Global_262145.f_33324){
iVar0=0;
}}elseif(iParam0==joaat("vigero2")){
if(!Global_262145.f_33351 && iVar1 < Global_262145.f_33332){
iVar0=0;
}}elseif(iParam0==joaat("weevil2")){
if(!Global_262145.f_33357 && iVar1 < Global_262145.f_33338){
iVar0=0;
}}elseif(iParam0==joaat("ruiner4")){
if(!Global_262145.f_33349 && iVar1 < Global_262145.f_33330){
iVar0=0;
}}elseif(iParam0==joaat("sentinel4")){
if(!Global_262145.f_33359 && iVar1 < Global_262145.f_33340){
iVar0=0;
}}elseif(iParam0==joaat("conada")){
if(!Global_262145.f_33346 && iVar1 < Global_262145.f_33327){
iVar0=0;
}}elseif(iParam0==joaat("omnisegt")){
if(!Global_262145.f_33341 && iVar1 < Global_262145.f_33322){
iVar0=0;
}}elseif(iParam0==joaat("manchez3")){
if(!Global_262145.f_34217 && iVar1 < Global_262145.f_34201){
iVar0=0;
}}elseif(iParam0==joaat("brickade2")){
if(!Global_262145.f_34217 && iVar1 < Global_262145.f_34201){
iVar0=0;
}}elseif(iParam0==joaat("eudora")){
if(!Global_262145.f_34226 && iVar1 < Global_262145.f_34209){
iVar0=0;
}}elseif(iParam0==joaat("powersurge")){
if(!Global_262145.f_34220 && iVar1 < Global_262145.f_34204){
iVar0=0;
}}elseif(iParam0==joaat("journey2")){
if(!Global_262145.f_34214 && iVar1 < Global_262145.f_34198){
iVar0=0;
}}elseif(iParam0==joaat("surfer3")){
if(!Global_262145.f_34215 && iVar1 < Global_262145.f_34199){
iVar0=0;
}}elseif(iParam0==joaat("entity3")){
if(!Global_262145.f_34212 && iVar1 < Global_262145.f_34196){
iVar0=0;
}}elseif(iParam0==joaat("panthere")){
if(!Global_262145.f_34223 && iVar1 < Global_262145.f_34207){
iVar0=0;
}}elseif(iParam0==joaat("boor")){
if(!Global_262145.f_34227 && iVar1 < Global_262145.f_34211){
iVar0=0;
}}elseif(iParam0==joaat("everon2")){
if(!Global_262145.f_34224 && iVar1 < Global_262145.f_34208){
iVar0=0;
}}elseif(iParam0==joaat("tulip2")){
if(!Global_262145.f_34213 && iVar1 < Global_262145.f_34197){
iVar0=0;
}}elseif(iParam0==joaat("r300")){
if(!Global_262145.f_34216 && iVar1 < Global_262145.f_34200){
iVar0=0;
}}elseif(iParam0==joaat("virtue")){
if(!Global_262145.f_34225 && iVar1 < Global_262145.f_34210){
iVar0=0;
}}elseif(iParam0==joaat("issi8")){
if(!Global_262145.f_34221 && iVar1 < Global_262145.f_34205){
iVar0=0;
}}elseif(iParam0==joaat("broadway")){
if(!Global_262145.f_34222 && iVar1 < Global_262145.f_34206){
iVar0=0;
}}elseif(iParam0==joaat("tahoma")){
if(!Global_262145.f_34219 && iVar1 < Global_262145.f_34203){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_34218 && iVar1 < Global_262145.f_34202){
iVar0=0;
}}
if(iParam0==joaat("exemplar")){
if(!Global_262145.f_35167 && !Global_262145.f_35168){
iVar0=0;
}}elseif(iParam0==joaat("cogcabrio")){
if(!Global_262145.f_35169 && !Global_262145.f_35170){
iVar0=0;
}}elseif(iParam0==joaat("thrust")){
if(!Global_262145.f_35171 && !Global_262145.f_35172){
iVar0=0;
}}elseif(iParam0==joaat("vindicator")){
if(!Global_262145.f_35173 && !Global_262145.f_35174){
iVar0=0;
}}elseif(iParam0==joaat("coquette3")){
if(!Global_262145.f_35175 && !Global_262145.f_35176){
iVar0=0;
}}elseif(iParam0==joaat("brawler")){
if(!Global_262145.f_35177 && !Global_262145.f_35178){
iVar0=0;
}}elseif(iParam0==joaat("cognoscenti")){
if(!Global_262145.f_35179 && !Global_262145.f_35180){
iVar0=0;
}}elseif(iParam0==joaat("cognoscenti2")){
if(!Global_262145.f_35181 && !Global_262145.f_35182){
iVar0=0;
}}elseif(iParam0==joaat("cog55")){
if(!Global_262145.f_35183 && !Global_262145.f_35184){
iVar0=0;
}}elseif(iParam0==joaat("cog552")){
if(!Global_262145.f_35185 && !Global_262145.f_35186){
iVar0=0;
}}elseif(iParam0==joaat("superd")){
if(!Global_262145.f_35187 && !Global_262145.f_35188){
iVar0=0;
}}elseif(iParam0==joaat("schafter4")){
if(!Global_262145.f_35189 && !Global_262145.f_35190){
iVar0=0;
}}elseif(iParam0==joaat("schafter6")){
if(!Global_262145.f_35191 && !Global_262145.f_35192){
iVar0=0;
}}elseif(iParam0==joaat("alpha")){
if(!Global_262145.f_35193 && !Global_262145.f_35194){
iVar0=0;
}}elseif(iParam0==joaat("feltzer2")){
if(!Global_262145.f_35195 && !Global_262145.f_35196){
iVar0=0;
}}elseif(iParam0==joaat("massacro")){
if(!Global_262145.f_35197 && !Global_262145.f_35198){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt")){
if(!Global_262145.f_35199 && !Global_262145.f_35200){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt2")){
if(!Global_262145.f_35201 && !Global_262145.f_35202){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_35203 && !Global_262145.f_35204){
iVar0=0;
}}elseif(iParam0==joaat("jester")){
if(!Global_262145.f_35205 && !Global_262145.f_35206){
iVar0=0;
}}elseif(iParam0==joaat("bestiagts")){
if(!Global_262145.f_35207 && !Global_262145.f_35208){
iVar0=0;
}}elseif(iParam0==joaat("carbonizzare")){
if(!Global_262145.f_35209 && !Global_262145.f_35210){
iVar0=0;
}}elseif(iParam0==joaat("coquette")){
if(!Global_262145.f_35211 && !Global_262145.f_35212){
iVar0=0;
}}elseif(iParam0==joaat("furoregt")){
if(!Global_262145.f_35213 && !Global_262145.f_35214){
iVar0=0;
}}elseif(iParam0==joaat("ninef")){
if(!Global_262145.f_35215 && !Global_262145.f_35216){
iVar0=0;
}}elseif(iParam0==joaat("ninef2")){
if(!Global_262145.f_35217 && !Global_262145.f_35218){
iVar0=0;
}}elseif(iParam0==joaat("verlierer2")){
if(!Global_262145.f_35219 && !Global_262145.f_35220){
iVar0=0;
}}elseif(iParam0==joaat("btype")){
if(!Global_262145.f_35221 && !Global_262145.f_35222){
iVar0=0;
}}elseif(iParam0==joaat("feltzer3")){
if(!Global_262145.f_35223 && !Global_262145.f_35224){
iVar0=0;
}}elseif(iParam0==joaat("stingergt")){
if(!Global_262145.f_35225 && !Global_262145.f_35226){
iVar0=0;
}}elseif(iParam0==joaat("stinger")){
if(!Global_262145.f_35227 && !Global_262145.f_35228){
iVar0=0;
}}elseif(iParam0==joaat("coquette2")){
if(!Global_262145.f_35229 && !Global_262145.f_35230){
iVar0=0;
}}elseif(iParam0==joaat("jb700")){
if(!Global_262145.f_35231 && !Global_262145.f_35232){
iVar0=0;
}}elseif(iParam0==joaat("mamba")){
if(!Global_262145.f_35233 && !Global_262145.f_35234){
iVar0=0;
}}elseif(iParam0==joaat("monroe")){
if(!Global_262145.f_35235 && !Global_262145.f_35236){
iVar0=0;
}}elseif(iParam0==joaat("btype3")){
if(!Global_262145.f_35237 && !Global_262145.f_35238){
iVar0=0;
}}elseif(iParam0==joaat("ztype")){
if(!Global_262145.f_35239 && !Global_262145.f_35240){
iVar0=0;
}}elseif(iParam0==joaat("voltic")){
if(!Global_262145.f_35241 && !Global_262145.f_35242){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_35243 && !Global_262145.f_35244){
iVar0=0;
}}elseif(iParam0==joaat("cheetah")){
if(!Global_262145.f_35245 && !Global_262145.f_35246){
iVar0=0;
}}elseif(iParam0==joaat("entityxf")){
if(!Global_262145.f_35247 && !Global_262145.f_35248){
iVar0=0;
}}elseif(iParam0==joaat("infernus")){
if(!Global_262145.f_35249 && !Global_262145.f_35250){
iVar0=0;
}}elseif(iParam0==joaat("vacca")){
if(!Global_262145.f_35251 && !Global_262145.f_35252){
iVar0=0;
}}elseif(iParam0==joaat("bullet")){
if(!Global_262145.f_35253 && !Global_262145.f_35254){
iVar0=0;
}}elseif(iParam0==joaat("fmj")){
if(!Global_262145.f_35255 && !Global_262145.f_35256){
iVar0=0;
}}elseif(iParam0==joaat("baller2")){
if(!Global_262145.f_35257 && !Global_262145.f_35258){
iVar0=0;
}}elseif(iParam0==joaat("baller3")){
if(!Global_262145.f_35259 && !Global_262145.f_35260){
iVar0=0;
}}elseif(iParam0==joaat("baller5")){
if(!Global_262145.f_35261 && !Global_262145.f_35262){
iVar0=0;
}}elseif(iParam0==joaat("baller4")){
if(!Global_262145.f_35263 && !Global_262145.f_35264){
iVar0=0;
}}elseif(iParam0==joaat("baller6")){
if(!Global_262145.f_35265 && !Global_262145.f_35266){
iVar0=0;
}}elseif(iParam0==joaat("xls")){
if(!Global_262145.f_35267 && !Global_262145.f_35268){
iVar0=0;
}}elseif(iParam0==joaat("xls2")){
if(!Global_262145.f_35269 && !Global_262145.f_35270){
iVar0=0;
}}elseif(iParam0==joaat("prairie")){
if(!Global_262145.f_35271 && !Global_262145.f_35272){
iVar0=0;
}}elseif(iParam0==joaat("issi2")){
if(!Global_262145.f_35273 && !Global_262145.f_35274){
iVar0=0;
}}elseif(iParam0==joaat("dilettante")){
if(!Global_262145.f_35275 && !Global_262145.f_35276){
iVar0=0;
}}elseif(iParam0==joaat("felon")){
if(!Global_262145.f_35277 && !Global_262145.f_35278){
iVar0=0;
}}elseif(iParam0==joaat("felon2")){
if(!Global_262145.f_35279 && !Global_262145.f_35280){
iVar0=0;
}}elseif(iParam0==joaat("f620")){
if(!Global_262145.f_35281 && !Global_262145.f_35282){
iVar0=0;
}}elseif(iParam0==joaat("jackal")){
if(!Global_262145.f_35283 && !Global_262145.f_35284){
iVar0=0;
}}elseif(iParam0==joaat("oracle2")){
if(!Global_262145.f_35285 && !Global_262145.f_35286){
iVar0=0;
}}elseif(iParam0==joaat("oracle")){
if(!Global_262145.f_35287 && !Global_262145.f_35288){
iVar0=0;
}}elseif(iParam0==joaat("sentinel2")){
if(!Global_262145.f_35289 && !Global_262145.f_35290){
iVar0=0;
}}elseif(iParam0==joaat("zion")){
if(!Global_262145.f_35291 && !Global_262145.f_35292){
iVar0=0;
}}elseif(iParam0==joaat("zion2")){
if(!Global_262145.f_35293 && !Global_262145.f_35294){
iVar0=0;
}}elseif(iParam0==joaat("akuma")){
if(!Global_262145.f_35295 && !Global_262145.f_35296){
iVar0=0;
}}elseif(iParam0==joaat("double")){
if(!Global_262145.f_35297 && !Global_262145.f_35298){
iVar0=0;
}}elseif(iParam0==joaat("enduro")){
if(!Global_262145.f_35299 && !Global_262145.f_35300){
iVar0=0;
}}elseif(iParam0==joaat("hexer")){
if(!Global_262145.f_35301 && !Global_262145.f_35302){
iVar0=0;
}}elseif(iParam0==joaat("innovation")){
if(!Global_262145.f_35303 && !Global_262145.f_35304){
iVar0=0;
}}elseif(iParam0==joaat("sanchez")){
if(!Global_262145.f_35305 && !Global_262145.f_35306){
iVar0=0;
}}elseif(iParam0==joaat("sanchez2")){
if(!Global_262145.f_35307 && !Global_262145.f_35308){
iVar0=0;
}}elseif(iParam0==joaat("bati2")){
if(!Global_262145.f_35309 && !Global_262145.f_35310){
iVar0=0;
}}elseif(iParam0==joaat("faggio2")){
if(!Global_262145.f_35311 && !Global_262145.f_35312){
iVar0=0;
}}elseif(iParam0==joaat("ruffian")){
if(!Global_262145.f_35313 && !Global_262145.f_35314){
iVar0=0;
}}elseif(iParam0==joaat("nemesis")){
if(!Global_262145.f_35315 && !Global_262145.f_35316){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou")){
if(!Global_262145.f_35317 && !Global_262145.f_35318){
iVar0=0;
}}elseif(iParam0==joaat("pcj")){
if(!Global_262145.f_35319 && !Global_262145.f_35320){
iVar0=0;
}}elseif(iParam0==joaat("vader")){
if(!Global_262145.f_35321 && !Global_262145.f_35322){
iVar0=0;
}}elseif(iParam0==joaat("sovereign")){
if(!Global_262145.f_35323 && !Global_262145.f_35324){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet")){
if(!Global_262145.f_35325 && !Global_262145.f_35326){
iVar0=0;
}}elseif(iParam0==joaat("ratloader")){
if(!Global_262145.f_35327 && !Global_262145.f_35328){
iVar0=0;
}}elseif(iParam0==joaat("picador")){
if(!Global_262145.f_35329 && !Global_262145.f_35330){
iVar0=0;
}}elseif(iParam0==joaat("vigero")){
if(!Global_262145.f_35331 && !Global_262145.f_35332){
iVar0=0;
}}elseif(iParam0==joaat("ruiner")){
if(!Global_262145.f_35333 && !Global_262145.f_35334){
iVar0=0;
}}elseif(iParam0==joaat("tampa")){
if(!Global_262145.f_35335 && !Global_262145.f_35336){
iVar0=0;
}}elseif(iParam0==joaat("blade")){
if(!Global_262145.f_35337 && !Global_262145.f_35338){
iVar0=0;
}}elseif(iParam0==joaat("bifta")){
if(!Global_262145.f_35339 && !Global_262145.f_35340){
iVar0=0;
}}elseif(iParam0==joaat("dune")){
if(!Global_262145.f_35341 && !Global_262145.f_35342){
iVar0=0;
}}elseif(iParam0==joaat("bfinjection")){
if(!Global_262145.f_35343 && !Global_262145.f_35344){
iVar0=0;
}}elseif(iParam0==joaat("bodhi2")){
if(!Global_262145.f_35345 && !Global_262145.f_35346){
iVar0=0;
}}elseif(iParam0==joaat("kalahari")){
if(!Global_262145.f_35347 && !Global_262145.f_35348){
iVar0=0;
}}elseif(iParam0==joaat("rancherxl")){
if(!Global_262145.f_35349 && !Global_262145.f_35350){
iVar0=0;
}}elseif(iParam0==joaat("rebel2")){
if(!Global_262145.f_35351 && !Global_262145.f_35352){
iVar0=0;
}}elseif(iParam0==joaat("rebel")){
if(!Global_262145.f_35353 && !Global_262145.f_35354){
iVar0=0;
}}elseif(iParam0==joaat("blazer")){
if(!Global_262145.f_35355 && !Global_262145.f_35356){
iVar0=0;
}}elseif(iParam0==joaat("blazer3")){
if(!Global_262145.f_35357 && !Global_262145.f_35358){
iVar0=0;
}}elseif(iParam0==joaat("sandking2")){
if(!Global_262145.f_35359 && !Global_262145.f_35360){
iVar0=0;
}}elseif(iParam0==joaat("washington")){
if(!Global_262145.f_35361 && !Global_262145.f_35362){
iVar0=0;
}}elseif(iParam0==joaat("schafter2")){
if(!Global_262145.f_35363 && !Global_262145.f_35364){
iVar0=0;
}}elseif(iParam0==joaat("romero")){
if(!Global_262145.f_35365 && !Global_262145.f_35366){
iVar0=0;
}}elseif(iParam0==joaat("fugitive")){
if(!Global_262145.f_35367 && !Global_262145.f_35368){
iVar0=0;
}}elseif(iParam0==joaat("surge")){
if(!Global_262145.f_35369 && !Global_262145.f_35370){
iVar0=0;
}}elseif(iParam0==joaat("asea")){
if(!Global_262145.f_35371 && !Global_262145.f_35372){
iVar0=0;
}}elseif(iParam0==joaat("premier")){
if(!Global_262145.f_35373 && !Global_262145.f_35374){
iVar0=0;
}}elseif(iParam0==joaat("regina")){
if(!Global_262145.f_35375 && !Global_262145.f_35376){
iVar0=0;
}}elseif(iParam0==joaat("asterope")){
if(!Global_262145.f_35377 && !Global_262145.f_35378){
iVar0=0;
}}elseif(iParam0==joaat("intruder")){
if(!Global_262145.f_35379 && !Global_262145.f_35380){
iVar0=0;
}}elseif(iParam0==joaat("tailgater")){
if(!Global_262145.f_35381 && !Global_262145.f_35382){
iVar0=0;
}}elseif(iParam0==joaat("stanier")){
if(!Global_262145.f_35383 && !Global_262145.f_35384){
iVar0=0;
}}elseif(iParam0==joaat("ingot")){
if(!Global_262145.f_35385 && !Global_262145.f_35386){
iVar0=0;
}}elseif(iParam0==joaat("warrener")){
if(!Global_262145.f_35387 && !Global_262145.f_35388){
iVar0=0;
}}elseif(iParam0==joaat("stratum")){
if(!Global_262145.f_35389 && !Global_262145.f_35390){
iVar0=0;
}}elseif(iParam0==joaat("schwarzer")){
if(!Global_262145.f_35391 && !Global_262145.f_35392){
iVar0=0;
}}elseif(iParam0==joaat("surano")){
if(!Global_262145.f_35393 && !Global_262145.f_35394){
iVar0=0;
}}elseif(iParam0==joaat("buffalo")){
if(!Global_262145.f_35395 && !Global_262145.f_35396){
iVar0=0;
}}elseif(iParam0==joaat("buffalo2")){
if(!Global_262145.f_35397 && !Global_262145.f_35398){
iVar0=0;
}}elseif(iParam0==joaat("massacro2")){
if(!Global_262145.f_35399 && !Global_262145.f_35400){
iVar0=0;
}}elseif(iParam0==joaat("jester2")){
if(!Global_262145.f_35401 && !Global_262145.f_35402){
iVar0=0;
}}elseif(iParam0==joaat("futo")){
if(!Global_262145.f_35403 && !Global_262145.f_35404){
iVar0=0;
}}elseif(iParam0==joaat("penumbra")){
if(!Global_262145.f_35405 && !Global_262145.f_35406){
iVar0=0;
}}elseif(iParam0==joaat("fusilade")){
if(!Global_262145.f_35407 && !Global_262145.f_35408){
iVar0=0;
}}elseif(iParam0==joaat("btype2")){
if(!Global_262145.f_35409 && !Global_262145.f_35410){
iVar0=0;
}}elseif(iParam0==joaat("pigalle")){
if(!Global_262145.f_35411 && !Global_262145.f_35412){
iVar0=0;
}}elseif(iParam0==joaat("cavalcade")){
if(!Global_262145.f_35413 && !Global_262145.f_35414){
iVar0=0;
}}elseif(iParam0==joaat("cavalcade2")){
if(!Global_262145.f_35415 && !Global_262145.f_35416){
iVar0=0;
}}elseif(iParam0==joaat("bjxl")){
if(!Global_262145.f_35417 && !Global_262145.f_35418){
iVar0=0;
}}elseif(iParam0==joaat("serrano")){
if(!Global_262145.f_35419 && !Global_262145.f_35420){
iVar0=0;
}}elseif(iParam0==joaat("gresley")){
if(!Global_262145.f_35421 && !Global_262145.f_35422){
iVar0=0;
}}elseif(iParam0==joaat("seminole")){
if(!Global_262145.f_35423 && !Global_262145.f_35424){
iVar0=0;
}}elseif(iParam0==joaat("granger")){
if(!Global_262145.f_35425 && !Global_262145.f_35426){
iVar0=0;
}}elseif(iParam0==joaat("landstalker")){
if(!Global_262145.f_35427 && !Global_262145.f_35428){
iVar0=0;
}}elseif(iParam0==joaat("habanero")){
if(!Global_262145.f_35429 && !Global_262145.f_35430){
iVar0=0;
}}elseif(iParam0==joaat("fq2")){
if(!Global_262145.f_35431 && !Global_262145.f_35432){
iVar0=0;
}}elseif(iParam0==joaat("baller")){
if(!Global_262145.f_35433 && !Global_262145.f_35434){
iVar0=0;
}}elseif(iParam0==joaat("patriot")){
if(!Global_262145.f_35435 && !Global_262145.f_35436){
iVar0=0;
}}elseif(iParam0==joaat("rocoto")){
if(!Global_262145.f_35437 && !Global_262145.f_35438){
iVar0=0;
}}elseif(iParam0==joaat("radi")){
if(!Global_262145.f_35439 && !Global_262145.f_35440){
iVar0=0;
}}elseif(iParam0==joaat("mesa3")){
if(!Global_262145.f_35441 && !Global_262145.f_35442){
iVar0=0;
}}elseif(iParam0==joaat("monster")){
if(!Global_262145.f_35443 && !Global_262145.f_35444){
iVar0=0;
}}elseif(iParam0==1336514315){
if(!Global_262145.f_35473 && iVar1 < Global_262145.f_35460){
iVar0=0;
}}elseif(iParam0==-1659004814){
if(!Global_262145.f_35472 && iVar1 < Global_262145.f_35459){
iVar0=0;
}}elseif(iParam0==-654498607){
if(!Global_262145.f_35474 && iVar1 < Global_262145.f_35461){
iVar0=0;
}}elseif(iParam0==-979292575){
if(!Global_262145.f_35465 && iVar1 < Global_262145.f_35452){
iVar0=0;
}}elseif(iParam0==-1763675285){
if(!Global_262145.f_35462 && iVar1 < Global_262145.f_35449){
iVar0=0;
}}elseif(iParam0==func_148(1)){
iVar0=1;
}elseif(iParam0==-536105557){
if(!Global_262145.f_35463 && iVar1 < Global_262145.f_35450){
iVar0=0;
}}elseif(iParam0==1447690049){
if(!Global_262145.f_35466 && iVar1 < Global_262145.f_35453){
iVar0=0;
}}elseif(iParam0==165968051){
if(!Global_262145.f_35469 && iVar1 < Global_262145.f_35456){
iVar0=0;
}}elseif(iParam0==191916658){
if(!Global_262145.f_35467 && iVar1 < Global_262145.f_35454){
iVar0=0;
}}elseif(iParam0==802856453){
if(!Global_262145.f_35464 && iVar1 < Global_262145.f_35451){
iVar0=0;
}}elseif(iParam0==610429990){
if(!Global_262145.f_35471 && iVar1 < Global_262145.f_35458){
iVar0=0;
}}elseif(iParam0==239897677){
if(!Global_262145.f_35468 && iVar1 < Global_262145.f_35455){
iVar0=0;
}}elseif(iParam0==-897824023){
if(!Global_262145.f_35470 && iVar1 < Global_262145.f_35457){
iVar0=0;
}}elseif(iParam0==-1983622024){
if(!Global_262145.f_35470 && iVar1 < Global_262145.f_35457){
iVar0=0;
}}
return iVar0;
}

int func_148(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}


var func__149(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__150(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_151(){
return 0;
}

int func_152(){
return 1;
}

int func_153(){
return 1;
}

int func_154(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_155(){
var uVar0;
if(Global_152686==2){
return 1;
}elseif(Global_152686==3){
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
uVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar0, false);
STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}

int func_156(int iParam0){
int iVar0;
char* sVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
sVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G ")){
return 1;
}
if(!func_144(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_157(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Global_98174[iVar0])){
if(Global_98174[iVar0]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_158(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar0], 0)){
if(Global_98144[iVar0]==iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0])==ENTITY::GET_ENTITY_MODEL(iParam0)){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_159(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[24])){
if(iParam0==Global_77479.f_484[24]){
return 0;
}}
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0])){
if((((((((((((iVar0 !=24 && iVar0 !=21) && iVar0 !=22) && iVar0 !=23) && iVar0 !=27) && iVar0 !=30) && iVar0 !=33) && iVar0 !=28) && iVar0 !=31) && iVar0 !=34) && iVar0 !=26) && iVar0 !=29) && iVar0 !=32){
if(iParam0==Global_77479.f_484[iVar0]){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_160(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_161(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_161(int iParam0, int iParam1, char* sParam2, var uParam3){
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


var func__162(){
var uVar0;
func_172(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_171(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_170(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_165(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_164(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_163(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_163(var uParam0, int iParam1){
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


void func_164(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_165(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_169(*uParam0);
iVar1=func_167(*uParam0);
if(iParam1 < 1 || iParam1 > func_166(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_166(int iParam0, int iParam1){
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


var func__167(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_168(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_168(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_169(var uParam0){
return uParam0 & 15;
}


void func_170(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_171(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_172(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_173(var uParam0, int iParam1){
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
uParam0->f_4=func_174(0, 1);
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
uParam0->f_4=func_174(0, 1);
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
uParam0->f_4=func_174(1, 1);
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
uParam0->f_4=func_174(1, 2);
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
uParam0->f_4=func_174(1, 1);
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
uParam0->f_4=func_174(1, 2);
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
uParam0->f_4=func_174(2, 1);
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
uParam0->f_4=func_174(2, 1);
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
uParam0->f_4=func_174(2, 1);
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
if(func_155()){
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
if(func_155()){
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
uParam0->f_4=Global_113810.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(((((uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra")) || uParam0->f_4==joaat("luxor")) || uParam0->f_4==joaat("shamal")) || uParam0->f_4==joaat("titan")) || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678.8f, 3229.6f, 41.8f 
};
uParam0->f_3=106.0906f;
}}
if(!func_126(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113810.f_32752.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113810.f_32752.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_126(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_126(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_174(int iParam0, int iParam1){
struct<82> Var0;
if(func_176(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_175(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_175(int iParam0, var uParam1, int iParam2){
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
if(Global_113810.f_9088.f_99.f_58[128] && !Global_113810.f_9088.f_99.f_58[131]){
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
if(Global_113810.f_9088.f_99.f_58[119]){
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
}elseif(Global_113810.f_9088.f_99.f_58[118]){
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


bool func_176(int iParam0){
return iParam0 < 3;
}


void func_177(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4){
if(func_173(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
func_182(iParam0);
func_181(uParam1, &(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]));
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 11)){
Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/]={
Param2 
};
Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14]=uParam3;
}else{
Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/]={
0f, 0f, 0f 
};
Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14]=-1f;
}
Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14]=iParam4 + 1;
func_178(iParam0, 1);
}}}


void func_178(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_180(iParam0, 0)){
func_179(iParam0, 1, 0);
func_179(iParam0, 2, 0);
func_179(iParam0, 3, 0);
func_179(iParam0, 4, 0);
func_179(iParam0, 0, 1);
Global_77479[iParam0]=1;
}}else{
func_179(iParam0, 0, 0);
}}


void func_179(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}}

int func_180(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}


void func_181(var uParam0, var uParam1){
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


void func_182(int iParam0){
if(iParam0==-1){
return;
}
if(func_173(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
func_178(iParam0, 0);
}}}

int func_183(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(Global_98144[iVar0]==iParam0){
return Global_98154[iVar0];
}}
iVar0++;
}
return 145;
}


void func_184(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_188(uParam1);
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
if(uParam1->f_65==-1 && !func_187(uParam1->f_66)){
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
func_186(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_185(iVar0 + 1));
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

int func_185(int iParam0){
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

int func_186(int iParam0, var uParam1, var uParam2){
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

int func_187(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_188(var uParam0){
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


void func_189(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_182(iParam0);
func_178(iParam0, 0);
}

int func_190(struct<3> Param0, int iParam1, var uParam2, var uParam3){
int iVar0;
iVar0=func_191(Param0, iParam1, 1);
switch (iVar0){
case 0:
*uParam2={
-827.351f, 157.785f, 68.2143f 
};
*uParam3=85.1509f;
return 1;
break;
case 1:
case 2:
*uParam2={
1992.523f, 3813.916f, 31.1008f 
};
*uParam3=122.1498f;
return 1;
break;
case 3:
*uParam2={
-1184.258f, -1496.556f, 3.3895f 
};
*uParam3=303.2098f;
return 1;
break;
case 4:
*uParam2={
118.1067f, -1325.906f, 28.3706f 
};
*uParam3=123.5016f;
return 1;
break;
case 5:
*uParam2={
-18.118f, -1455.126f, 29.5004f 
};
*uParam3=273.2822f;
return 1;
break;
case 6:
*uParam2={
1.5947f, 543.4017f, 173.4644f 
};
*uParam3=310.7556f;
return 1;
break;
default:
break;
}
return 0;
}

int func_191(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=10;
iVar0=0;
while (iVar0 <=(10 - 1)){
if(Global_95851[iVar0 /*10*/].f_7 !=263){
if(Global_95851[iVar0 /*10*/].f_9==iParam1 || iParam1==145){
if(func_192(iVar0) || iParam2==0){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95851[iVar0 /*10*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}}
iVar0++;
}
return iVar3;
}


var func__192(int iParam0){
return MISC::IS_BIT_SET(Global_113810.f_7232[iParam0], 0);
}

int func_193(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77479.f_139[iParam0];
}

int func_194(){
func_195();
return Global_113810.f_2366.f_539.f_4321;
}


void func_195(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_197(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_196(PLAYER::PLAYER_PED_ID());
if(func_176(iVar0) && (!func_37(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_176(Global_113810.f_2366.f_539.f_4321)){
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

int func_196(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_197(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_197(int iParam0){
if(func_176(iParam0)){
return func_198(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__198(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_199(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_200(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_201(int iParam0, bool bParam1, bool bParam2){
return func_51(iParam0, !bParam1, bParam2);
}

int func_202(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
switch (ENTITY::GET_ENTITY_TYPE(iParam0)){
case 1:
if(!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))){
return 1;
}
break;
case 2:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0)){
return 1;
}
break;
default:
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}
break;
}}
return 0;
}


void func_203(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
switch ((*uParam0)[iVar0 /*8*/]){
case 1:
Stack.Push(uParam0[iVar0 /*8*/]);
Call_Loc((uParam0[iVar0 /*8*/])->f_7);
break;
case 2:
if((MISC::GET_GAME_TIMER() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6){
(*uParam0)[iVar0 /*8*/]=1;
(uParam0[iVar0 /*8*/])->f_6=0;
}
break;
}
iVar0++;
}}


void func_204(){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!iLocal_1347){
func_207(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
func_206(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
iLocal_1347=1;
}}elseif(iLocal_1347){
func_206(0, -1);
func_207(0, -1);
iLocal_1347=0;
}
if(!iLocal_1345){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 1)){
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
iLocal_1345=1;
}elseif(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
iLocal_1345=1;
}}}
if(iLocal_86==0){
switch (iLocal_1310){
case 0:
if((ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0) && !PED::IS_PED_INJURED(Local_1313.f_0)) && func_134(&(Local_1107[0 /*8*/]))){
if(Local_1107[0 /*8*/].f_1==1){
if(func_205(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 1) > 500f){
func_326(1);
}}elseif(Local_1107[0 /*8*/].f_1==4){
if(func_205(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 1) > 250f){
func_326(1);
}}elseif(func_205(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 1) > 250f){
func_326(2);
}}elseif(func_205(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 1) > 250f){
func_326(2);
}
break;
case 1:
if(func_205(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 1) > 250f){
func_326(2);
}
break;
case 3:
case 2:
if(!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
if(((((ENTITY::DOES_ENTITY_EXIST(Local_1326[0 /*2*/]) && func_205(PLAYER::PLAYER_PED_ID(), Local_1326[0 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1326[1 /*2*/])) && func_205(PLAYER::PLAYER_PED_ID(), Local_1326[1 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1326[2 /*2*/])) && func_205(PLAYER::PLAYER_PED_ID(), Local_1326[2 /*2*/], 1) > 250f){
func_326(3);
}}
break;
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0)){
if((ENTITY::IS_ENTITY_IN_WATER(Local_1323.f_0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
func_326(4);
}}}


float func_205(int iParam0, int iParam1, int iParam2){
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


void func_206(int iParam0, int iParam1){
Global_63496=iParam0;
Global_63497=iParam1;
}


void func_207(int iParam0, int iParam1){
int iVar0;
Global_63498=iParam0;
iVar0=0;
while (iVar0 < Global_75580){
if(iParam1==-1 || Global_75581[iVar0 /*9*/]==iParam1){
if(Global_75581[iVar0 /*9*/].f_6 !=iParam0){
Global_75581[iVar0 /*9*/].f_6=iParam0;
Global_75581[iVar0 /*9*/].f_7=1;
Global_75581[iVar0 /*9*/].f_8=0;
}}
iVar0++;
}}


void func_208(){
if(ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(Local_1313.f_0, 0)){
func_209(Local_1313.f_0, &(Local_1313.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0)){
if(((!func_202(Local_1323.f_0) && ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0)) && iLocal_1342) && func_205(Local_1323.f_0, PLAYER::PLAYER_PED_ID(), 1) > 200f){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1323);
}}}

int func_209(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12){
bool bVar0;
if(iParam3==0){
iParam3=PLAYER::GET_PLAYER_INDEX();
}
if(fParam6 < 0f){
fParam6=100f;
}
if(!PED::IS_PED_INJURED(uParam0)){
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


void func_210(){
struct<3> Var0;
var uVar1;
if(bLocal_89==1){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(1000);
}}else{
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::STOP_CUTSCENE(0);
CUTSCENE::REMOVE_CUTSCENE();
}
iLocal_86=iLocal_90;
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
HUD::CLEAR_PRINTS();
HUD::CLEAR_HELP(1);
func_8(1);
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::REMOVE_CUTSCENE();
}
if(!func_300()){
func_299(iLocal_86, &Var0, &uVar1);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar1);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
func_297(&uLocal_92, Var0, 50f, 0);
}
func_296(&uLocal_92);
switch (iLocal_86){
case 0:
func_295(&uLocal_92, iLocal_80);
func_295(&uLocal_92, iLocal_81);
func_295(&uLocal_92, iLocal_82);
func_294(&uLocal_92, &Global_97675);
break;
case 1:
func_295(&uLocal_92, joaat("burrito2"));
break;
}
while (!func_293(&uLocal_92)){
wait(0);
func_208();
}
switch (iLocal_86){
case 0:
while (!func_286(0)){
wait(0);
}
if(MISC::ARE_STRINGS_EQUAL(&Global_97675, "jhp2a_main")){
while (!func_214(&iLocal_1321, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1)){
wait(0);
MISC::CLEAR_AREA_OF_VEHICLES(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, 0, 0, 0);
}}else{
while (!func_214(&iLocal_1321, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1)){
wait(0);
MISC::CLEAR_AREA_OF_VEHICLES(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, 0, 0, 0);
}}
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1321, 0);
VEHICLE::SET_VEHICLE_EXTRA(iLocal_1321, 1, false);
VEHICLE::SET_VEHICLE_EXTRA(iLocal_1321, 2, true);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1321, 1084227584);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1321, 1, 1, 0);
if(func_300()){
func_211(iLocal_1321, -1, 1);
}else{
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1321, -1);
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
break;
case 1:
if(!func_7(87)){
Local_1323.f_0=VEHICLE::CREATE_VEHICLE(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1, 0);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1323.f_0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1323.f_0, 1084227584);
}
if(func_300()){
func_211(0, -1, 1);
}else{
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
}
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.5735f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
break;
}
if(CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN()){
CAM::DO_SCREEN_FADE_IN(1000);
}
bLocal_89=false;
}}}


void func_211(int iParam0, int iParam1, int iParam2){
if(func_213() && func_300()){
while (Global_100828 !=6){
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
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}}
GRAPHICS::ANIMPOSTFX_STOP_ALL();
func_212(0);
}}


void func_212(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100833.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 13);
}}

int func_213(){
if(Global_100833==10 || Global_100833==9){
return 1;
}
return 0;
}

int func_214(int iParam0, struct<3> Param1, float fParam2, bool bParam3){
struct<67> Var0;
Var0.f_9=49;
Var0.f_59=2;
if(func_213()){
if(func_285()){
func_181(&(Global_107357.f_2890.f_12), &Var0);
}}elseif(func_283()){
func_181(&(Global_104373.f_2890.f_12), &Var0);
}
if(Var0.f_66 !=0){
if(!func_282(0, &Var0)){
if(VEHICLE::IS_THIS_MODEL_A_CAR(Var0.f_66) || VEHICLE::IS_THIS_MODEL_A_BIKE(Var0.f_66)){
STREAMING::REQUEST_MODEL(Var0.f_66);
if(STREAMING::HAS_MODEL_LOADED(Var0.f_66)){
*iParam0=VEHICLE::CREATE_VEHICLE(Var0.f_66, Param1, fParam2, 1, 1, 0);
func_263(*iParam0, &Var0, 0, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_66);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
return 1;
}else{
return 0;
}}}else{
bParam3=true;
}}
if(bParam3){
if(!ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(func_215(iParam0, 0, Param1, fParam2, 1, 0)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_174(0, 0), 1);
return 1;
}}
return 0;
}
return 1;
}

int func_215(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5){
var uVar0;
var uVar1;
struct<97> Var2;
int iVar3;
int iVar4;
bool bVar5;
char cVar6[16];
int iVar7;
if(func_176(iParam1)){
Var2.f_11=12;
Var2.f_31=49;
Var2.f_81=2;
func_175(iParam1, &Var2, iParam5);
if(Var2.f_0==0){
return 1;
}
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(ENTITY::GET_ENTITY_MODEL(*iParam0) !=Var2.f_0){
}
return 1;
}
if((iParam1==0 && !Global_113810.f_2366.f_539.f_4316) && Global_113810.f_9088.f_99.f_58[131]){
Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]=0;
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]==Var2.f_0){
STREAMING::REQUEST_MODEL(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar3=0;
while (iVar3 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
iVar3++;
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
}
if(func_262(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
}}}
func_255(iParam0, &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_253(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
}
func_252(*iParam0, iParam1);
return 1;
}}elseif(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]==Var2.f_0){
STREAMING::REQUEST_MODEL(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
if(STREAMING::HAS_MODEL_LOADED(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/])){
*iParam0=VEHICLE::CREATE_VEHICLE(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
Var2.f_3=1250;
VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
iVar4=0;
while (iVar4 < 12){
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
iVar4++;
}
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24){
VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
}
if(func_262(&uVar1, &uVar0)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
}else{
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >=0 && Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
}}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >=0){
VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
}
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0))){
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90==6){
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}
}
else{
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
}}}
func_255(iParam0, &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_253(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
}
func_252(*iParam0, iParam1);
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
if(func_262(&uVar1, &uVar0)){
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
func_255(iParam0, &(Var2.f_31), &(Var2.f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==1){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bagger") && !Global_113810.f_9088.f_99.f_58[118]){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
bVar5=false;
}}elseif(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_253(iParam0);
}}elseif(((iParam1==0 && !Global_113810.f_2366.f_539.f_4316) && Global_113810.f_9088.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("tailgater")){
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
Global_113810.f_2366.f_539.f_4316=1;
func_216(iParam1, iParam0, 0, 1);
}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
}
if(bVar5){
func_252(*iParam0, iParam1);
}
return 1;
}}}
return 0;
}


void func_216(int iParam0, int iParam1, int iParam2, bool bParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
if((func_176(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0)){
if(iParam2 > Global_113810.f_2366.f_539.f_2407){
return;
}
if(iParam2==0){
}elseif(iParam2==1){
}elseif(iParam2==2){
}elseif(iParam2==3){
func_141(*iParam1, iParam0);
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam1) !=0){
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/]=ENTITY::GET_ENTITY_MODEL(*iParam1);
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1)){
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1=ENTITY::GET_ENTITY_MODEL(iVar1);
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2=VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3=ENTITY::GET_ENTITY_HEALTH(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11]=VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0)){
iVar2=VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
if(iVar2==0 || iVar2==5){
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=1;
}else{
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}}else{
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24=0;
}
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25=AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
StringCopy(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88=VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87=VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89=VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90=VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
}
if(VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1)){
MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
}
Global_113810.f_2366.f_539.f_4317[iParam0]=10;
if(VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >=0 && func_220(*iParam1, 0, &uVar0)){
func_186(iParam1, &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
if(bParam3){
Global_113810.f_20121[iParam0 /*43*/].f_40=1;
Global_113810.f_20121[iParam0 /*43*/]=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
Global_113810.f_20121[iParam0 /*43*/].f_3=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
Global_113810.f_20121[iParam0 /*43*/].f_4=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
Global_113810.f_20121[iParam0 /*43*/].f_5=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
Global_113810.f_20121[iParam0 /*43*/].f_6=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
Global_113810.f_20121[iParam0 /*43*/].f_10=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
Global_113810.f_20121[iParam0 /*43*/].f_16=!Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
Global_113810.f_20121[iParam0 /*43*/].f_19={
Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 
};
Global_113810.f_20121[iParam0 /*43*/].f_23=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
Global_113810.f_20121[iParam0 /*43*/].f_7=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
Global_113810.f_20121[iParam0 /*43*/].f_8=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
Global_113810.f_20121[iParam0 /*43*/].f_9=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
Global_113810.f_20121[iParam0 /*43*/].f_11=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
Global_113810.f_20121[iParam0 /*43*/].f_12=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
Global_113810.f_20121[iParam0 /*43*/].f_13=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
Global_113810.f_20121[iParam0 /*43*/].f_14=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
Global_113810.f_20121[iParam0 /*43*/].f_15=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
Global_113810.f_20121[iParam0 /*43*/].f_18=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
Global_113810.f_20121[iParam0 /*43*/].f_17=Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
Global_113810.f_20121[iParam0 /*43*/].f_24=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_25=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_26=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_27=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_28=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_29=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_30=VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
Global_113810.f_20121[iParam0 /*43*/].f_32=VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[1]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
Global_113810.f_20121[iParam0 /*43*/].f_33[2]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
Global_113810.f_20121[iParam0 /*43*/].f_33[3]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
Global_113810.f_20121[iParam0 /*43*/].f_33[4]=VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
Global_113810.f_20121[iParam0 /*43*/].f_39=VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_31=func_219(*iParam1);
Global_113810.f_20121[iParam0 /*43*/].f_33[0]=AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
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
func_217(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113810.f_20121[iParam0 /*43*/].f_1));
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
func_217(Global_113810.f_2366.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113810.f_20121[iParam0 /*43*/].f_2));
}}}}

int func_217(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
iVar0=0;
while (func_218(iVar0, &sVar2, &iVar1, &iVar3, &iVar4)){
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


bool func_218(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4){
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


float func_219(int iParam0){
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

int func_220(int iParam0, bool bParam1, var uParam2){
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
if((!func_250(iVar0, bParam1, uParam2) && !func_249(PLAYER::PLAYER_ID())) && !func_230(iParam0)){
return 0;
}
if(func_249(PLAYER::PLAYER_ID())){
if(func_228(iVar0)){
return 1;
}else{
return 0;
}}
bVar1=false;
if(func_227(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))){
bVar1=true;
}
if(((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_224(iParam0)) && !bVar1) && !(func_223(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_221(PLAYER::PLAYER_ID()))){
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
if((func_157(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("issi2")){
*uParam2=2;
return 0;
}}
return 1;
}

int func_221(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_222(Global_2657704[iParam0 /*463*/].f_321.f_7)==11;
}}}
return 0;
}

int func_222(int iParam0){
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

int func_223(int iParam0){
if(((iParam0==joaat("mule4") || iParam0==joaat("pounder2")) || iParam0==joaat("speedo4")) || iParam0==joaat("terbyte")){
return 1;
}
return 0;
}

int func_224(int iParam0){
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
if(func_226(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("minitank"):
case joaat("burrito2"):
return 1;
case joaat("brickade2"):
if(func_225(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("journey2"):
return 1;
break;
}
return 0;
}

int func_225(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_222(Global_2657704[iParam0 /*463*/].f_321.f_7)==26;
}}}
return 0;
}

int func_226(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_222(Global_2657704[iParam0 /*463*/].f_321.f_7)==13;
}}}
return 0;
}

int func_227(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_222(Global_2657704[iParam0 /*463*/].f_321.f_7)==7;
}}}
return 0;
}

int func_228(int iParam0){
bool bVar0;
if(iParam0==joaat("oppressor2")){
return 0;
}
bVar0=false;
if((iParam0==joaat("riot2") || iParam0==joaat("chernobog")) || iParam0==joaat("khanjali")){
if(!Global_262145.f_34153){
bVar0=true;
}}
if((((!func_229(PLAYER::PLAYER_ID()) && iParam0 !=joaat("thruster")) && iParam0 !=joaat("avenger")) && iParam0 !=func_148(1)) && !bVar0){
return 0;
}
return 1;
}

int func_229(int iParam0){
if(iParam0 !=func_32()){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_307, 2);
}
return 0;
}

int func_230(int iParam0){
if(func_248(PLAYER::PLAYER_ID()) || func_247(PLAYER::PLAYER_ID())){
if(func_231(iParam0)){
return 1;
}}
return 0;
}

int func_231(int iParam0){
if((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 0;
}
if(func_235(iParam0, 0)){
return 1;
}
if(func_234(PLAYER::PLAYER_ID()) && ((((!func_228(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel1"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula2")))){
return 0;
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("oppressor2"))){
return 0;
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("thruster"))){
return 1;
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_232(iParam0)){
return 1;
}}}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Thruster")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Thruster")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_232(iParam0)){
return 1;
}}}
return 0;
}

int func_232(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_224(iParam0)) || func_233(iVar0)){
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

int func_233(int iParam0){
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

int func_234(int iParam0){
if(iParam0==func_32()){
return 0;
}
if(func_249(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_235(int iParam0, bool bParam1){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_237(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
if(Global_2794162.f_304==iParam0){
return 1;
}elseif(func_236(iParam0) !=-1 && !bParam1){
return 1;
}}
break;
}
return 0;
}

int func_236(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=0;
while (iVar0 < 32){
if(Global_2672524.f_221[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_237(int iParam0, int iParam1){
if(iParam1==0){
if(func_246(iParam0, 0)){
return 1;
}}
switch (iParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_245();
break;
case joaat("sabregt"):
if(Global_262145.f_14909){
return func_244();
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14910){
return func_244();
}
break;
case joaat("virgo3"):
if(Global_262145.f_14908){
return func_244();
}
break;
case joaat("minivan"):
if(Global_262145.f_14911){
return func_244();
}
break;
case joaat("slamvan"):
if(Global_262145.f_14913){
return func_244();
}
break;
case joaat("sultan"):
case joaat("banshee"):
return func_243();
break;
case joaat("comet2"):
if(Global_262145.f_19321){
return func_242();
}
break;
case joaat("diablous"):
if(Global_262145.f_19323){
return func_242();
}
break;
case joaat("fcr"):
if(Global_262145.f_19327){
return func_242();
}
break;
case joaat("elegy2"):
if(Global_262145.f_19324){
return func_242();
}
break;
case joaat("nero"):
if(Global_262145.f_19331){
return func_242();
}
break;
case joaat("italigtb"):
if(Global_262145.f_19329){
return func_242();
}
break;
case joaat("specter"):
if(Global_262145.f_19334){
return func_242();
}
break;
case joaat("technical"):
if(Global_262145.f_21280){
return func_241();
}
break;
case joaat("insurgent"):
if(Global_262145.f_21281){
return func_241();
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_240();
break;
case joaat("glendale"):
if(func_240() || func_239()){
return 1;
}
break;
case joaat("impaler"):
return func_240();
break;
case joaat("issi3"):
return func_240();
break;
case joaat("gargoyle"):
return func_240();
break;
case joaat("dominator"):
return func_240();
break;
case joaat("dominator2"):
return func_240();
break;
case joaat("imperator"):
return func_240();
break;
case joaat("imperator2"):
return func_240();
break;
case joaat("imperator3"):
return func_240();
break;
case joaat("deathbike"):
return func_240();
break;
case joaat("deathbike2"):
return func_240();
break;
case joaat("deathbike3"):
return func_240();
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
return func_240();
break;
case joaat("youga2"):
if(Global_262145.f_29539){
return func_239();
}
break;
case joaat("gauntlet3"):
if(Global_262145.f_29889){
return func_239();
}
break;
case joaat("manana"):
if(Global_262145.f_29538){
return func_239();
}
break;
case joaat("peyote"):
if(Global_262145.f_29888){
return func_239();
}
break;
case joaat("yosemite"):
if(Global_262145.f_29887){
return func_239();
}
break;
}
switch (iParam0){
case joaat("tenf"):
if(Global_262145.f_33358){
return func_238();
}
break;
case joaat("weevil"):
if(Global_262145.f_33357){
return func_238();
}
break;
case joaat("brioso2"):
if(Global_262145.f_33350){
return func_238();
}
break;
case joaat("sentinel3"):
if(Global_262145.f_33359){
return func_238();
}
break;
}
return 0;
}


bool func_238(){
return DLC::IS_DLC_PRESENT(1199590110);
}


bool func_239(){
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}


bool func_240(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}


bool func_241(){
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}


bool func_242(){
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}


bool func_243(){
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}


bool func_244(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


bool func_245(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_246(int iParam0, int iParam1){
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

int func_247(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_32()){
return func_222(Global_2657704[iParam0 /*463*/].f_321.f_7)==5;
}}}
return 0;
}

int func_248(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_32()){
return func_222(Global_2657704[iParam0 /*463*/].f_321.f_7)==8;
}}}
return 0;
}

int func_249(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_222(Global_2657704[iParam0 /*463*/].f_321.f_7)==9;
}}}
return 0;
}

int func_250(int iParam0, bool bParam1, var uParam2){
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
if(((((((((((((((((((((iParam0==joaat("caddy") || iParam0==joaat("forklift")) || iParam0==joaat("caddy2")) || iParam0==joaat("crusader")) || iParam0==joaat("tribike")) || iParam0==joaat("tribike2")) || iParam0==joaat("tribike3")) || iParam0==joaat("tractor")) || iParam0==joaat("tractor2")) || iParam0==joaat("mower")) || iParam0==joaat("tornado4")) || iParam0==joaat("docktug")) || iParam0==joaat("stretch")) || iParam0==joaat("bison2")) || iParam0==joaat("bison3")) || iParam0==joaat("benson")) || iParam0==joaat("pounder")) || iParam0==joaat("submersible")) || iParam0==joaat("emperor3")) || iParam0==joaat("dune2")) || iParam0==-897824023) || iParam0==-1983622024){
*uParam2=2;
return 0;
}
bVar0=false;
if(func_227(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))){
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
if(func_251(iParam0)){
*uParam2=2;
return 0;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==joaat("insurgent") || iParam0==joaat("insurgent2")){
*uParam2=2;
}}
return 1;
}

int func_251(int iParam0){
switch (iParam0){
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("forklift"):
return 1;
break;
}
return 0;
}


void func_252(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(!ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
Global_98144[iVar0]=uParam0;
Global_98154[iVar0]=iParam1;
Global_98164[iVar0]=ENTITY::GET_ENTITY_MODEL(uParam0);
if(VEHICLE::IS_THIS_MODEL_A_CAR(Global_98164[iVar0])){
Global_98192[iParam1 /*3*/][0]=-1;
}else{
Global_98192[iParam1 /*3*/][1]=-1;
}
iVar0=9;
}
if(iVar0==8){
}
iVar0++;
}}


void func_253(var uParam0){
if(!func_254(*uParam0)){
VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113810.f_9088.f_99.f_58[119]);
}}


bool func_254(int iParam0){
return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 5);
}

int func_255(var uParam0, var uParam1, var uParam2){
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
}elseif(func_260(*uParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_246(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) !=func_258(*uParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_258(*uParam0, ((*uParam1)[38] - 1)), false);
}
func_257(uParam0);
if(func_256(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
}
return 1;
}

int func_256(int iParam0){
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


void func_257(var uParam0){
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

int func_258(int iParam0, int iParam1){
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
iVar0=func_259(iParam0, 38) + 1;
iVar1=func_259(iParam0, 24) + 1;
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

int func_259(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(uParam0, Global_152698)) && Global_152699==iParam1){
return Global_152700;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_260(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_260(var uParam0, int iParam1, int iParam2){
if(!func_261() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_261(){
return 0;
}

int func_262(var uParam0, var uParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}elseif(Global_113810.f_20121.f_261){
*uParam0={
Global_113810.f_20121.f_267 
};
*uParam1=Global_113810.f_20121.f_271;
return 1;
}
return 0;
}


void func_263(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_274(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_185(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_185(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_185(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_185(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_185(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_185(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_185(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_185(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_185(iVar6));
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
if(func_272(uParam1->f_5) || func_272(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_271(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_270()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_187(uParam1->f_66)){
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
func_269(iParam0, uParam1->f_69);
}}else{
func_269(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_255(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_185(iVar7 + 1))){
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
if((((func_264() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_148(1))){
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

int func_264(){
if((((Global_4718592.f_108230==6 || Global_4718592.f_108230==7) || Global_4718592.f_108230==18) || Global_4718592.f_108230==19) && Global_4718592.f_2==20){
return 0;
}
if(func_267(7)){
if(func_266(Global_2672524.f_4.f_16) || func_265(Global_2672524.f_4.f_16)){
return 0;
}}
return 1;
}

int func_265(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890739[iVar0 /*138*/].f_77.f_60 !=0;
}
return 0;
}

int func_266(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_31(iParam0, 9);
}
return 0;
}


bool func_267(int iParam0){
return func_268(&(Global_2672524.f_184), iParam0);
}


var func__268(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}


void func_269(int iParam0, int iParam1){
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


bool func_270(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_271(int iParam0){
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

int func_272(int iParam0){
if(!func_261() && func_273(iParam0)){
return 1;
}
return 0;
}

int func_273(int iParam0){
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

int func_274(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_281(PLAYER::PLAYER_ID(), -1)){
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
if(func_276(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_275(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_275(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_276(int iParam0){
if(func_280(iParam0)==233){
return func_277(iParam0);
}
return -1;
}

int func_277(int iParam0){
if(func_278(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_278(int iParam0, int iParam1){
if(func_279(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_279(var uParam0){
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

int func_280(int iParam0){
if(func_279(iParam0)){
if(func_278(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_281(int iParam0, int iParam1){
var uVar0;
if(func_116(uParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(uParam0), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}

int func_282(int iParam0, var uParam1){
struct<82> Var0;
if(!func_176(iParam0)){
return 0;
}
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam0 /*98*/] !=0){
if(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam0 /*98*/]==uParam1->f_66 && MISC::GET_HASH_KEY(&(Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam0 /*98*/].f_27))==MISC::GET_HASH_KEY(&(uParam1->f_1))){
return 1;
}}
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam0 /*98*/] !=0){
if(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam0 /*98*/]==uParam1->f_66 && MISC::GET_HASH_KEY(&(Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam0 /*98*/].f_27))==MISC::GET_HASH_KEY(&(uParam1->f_1))){
return 1;
}}
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_175(iParam0, &Var0, 1);
if(Var0.f_0 !=0){
if(Var0.f_0==uParam1->f_66 && MISC::GET_HASH_KEY(&(Var0.f_27))==MISC::GET_HASH_KEY(&(uParam1->f_1))){
return 1;
}}
func_175(iParam0, &Var0, 2);
if(Var0.f_0 !=0){
if(Var0.f_0==uParam1->f_66 && MISC::GET_HASH_KEY(&(Var0.f_27))==MISC::GET_HASH_KEY(&(uParam1->f_1))){
return 1;
}}
return 0;
}


bool func_283(){
return func_284(&(Global_104373.f_2890));
}

int func_284(var uParam0){
if(uParam0->f_12.f_66==0){
return 0;
}
if(!func_144(uParam0->f_12.f_66, 0, -1)){
return 0;
}
if(uParam0->f_12.f_66==joaat("stunt") && func_59(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)){
return 0;
}
return 1;
}


bool func_285(){
return func_284(&(Global_107357.f_2890));
}

int func_286(bool bParam0){
bool bVar0;
struct<3> Var1;
bVar0=false;
func_294(&uLocal_92, &Global_97675);
func_295(&uLocal_92, joaat("s_m_m_armoured_01"));
func_295(&uLocal_92, iLocal_82);
func_295(&uLocal_92, iLocal_83);
if((STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_armoured_01")) && STREAMING::HAS_MODEL_LOADED(iLocal_82)) && STREAMING::HAS_MODEL_LOADED(iLocal_83)){
if(bParam0){
if(!ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[0], 1, 1);
Local_1323.f_0=Global_97310[0];
}else{
bVar0=false;
}}
if(!ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[0], 1, 1);
Local_1313.f_0=Global_97310.f_9[0];
}else{
bVar0=false;
}}}else{
func_295(&uLocal_92, iLocal_81);
if(STREAMING::HAS_MODEL_LOADED(iLocal_81) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97675)){
if(MISC::ARE_STRINGS_EQUAL(&Global_97675, "jhp2a_main")){
TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97675, 23, &Var1);
MISC::CLEAR_AREA_OF_VEHICLES(Var1, 20f, 0, 0, 0, 0, 0, 0, 0);
Local_1323.f_0=VEHICLE::CREATE_VEHICLE(iLocal_81, Var1, 119.4988f, 1, 1, 0);
Local_1313.f_0=PED::CREATE_PED_INSIDE_VEHICLE(Local_1323.f_0, 26, iLocal_80, -1, 1, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1323.f_0, 1084227584);
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1313.f_0, Local_1323.f_0, &Global_97675, 786475, 23, 16, -1, 12f, 0, 1073741824);
}else{
TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97675, 29, &Var1);
MISC::CLEAR_AREA_OF_VEHICLES(Var1, 20f, 0, 0, 0, 0, 0, 0, 0);
Local_1323.f_0=VEHICLE::CREATE_VEHICLE(iLocal_81, Var1, 134.0011f, 1, 1, 0);
Local_1313.f_0=PED::CREATE_PED_INSIDE_VEHICLE(Local_1323.f_0, 26, iLocal_80, -1, 1, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1323.f_0, 1084227584);
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1313.f_0, Local_1323.f_0, &Global_97675, 786475, 29, 16, -1, 12f, 0, 1073741824);
}}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0)){
func_292(Local_1323.f_0, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)){
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1323.f_0, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1323.f_0, 1, 1);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1323.f_0, 1);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1323.f_0, 1);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0)){
if(!PED::IS_PED_INJURED(Local_1313.f_0)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1313.f_0, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1313.f_0, iLocal_1312);
PED::SET_PED_ACCURACY(Local_1313.f_0, 5);
PED::SET_PED_CAN_BE_TARGETTED(Local_1313.f_0, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_1313.f_0, 1, 0);
WEAPON::GIVE_WEAPON_TO_PED(Local_1313.f_0, joaat("weapon_pistol"), 15, 0, 1);
func_291(&uLocal_1133, 3, Local_1313.f_0, "JHP2A_Driver", 0, 1);
func_290(&(Local_1107[0 /*8*/]), 0, 0, 1);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0)){
func_289();
func_290(&(Local_1107[1 /*8*/]), 0, 0, 1);
func_287(&uLocal_92, joaat("boxville3"));
func_287(&uLocal_92, joaat("s_m_m_armoured_01"));
func_287(&uLocal_92, iLocal_82);
func_287(&uLocal_92, iLocal_83);
return 1;
}elseif(bVar0){
}}
return 0;
}


void func_287(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
if((*uParam0)[iVar0 /*5*/]){
if((uParam0[iVar0 /*5*/])->f_4==iParam1){
if((uParam0[iVar0 /*5*/])->f_1){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
func_288(uParam0[iVar0 /*5*/]);
return;
}else{
(uParam0[iVar0 /*5*/])->f_2=1;
uParam0->f_1012=1;
return;
}}}
iVar0++;
}}


void func_288(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=-1;
}


void func_289(){
struct<3> Var0;
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0)){
if(!ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1327)){
iLocal_1327=OBJECT::CREATE_OBJECT(iLocal_83, ENTITY::GET_ENTITY_COORDS(Local_1323.f_0, 1), 1, 1, 0);
OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1327, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_1327, Local_1323.f_0, -1, -1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1323.f_0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_1323.f_0, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
ENTITY::SET_ENTITY_VISIBLE(iLocal_1327, 0, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_1326[0 /*2*/])){
if(ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
Local_1326[0 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_82, Var0, 1, 1, 0);
}else{
Local_1326[0 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_82, ENTITY::GET_ENTITY_COORDS(Local_1323.f_0, 1), 1, 1, 0);
OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1326[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1326[0 /*2*/], Local_1323.f_0, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1326[0 /*2*/], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(Local_1326[1 /*2*/])){
if(ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
Local_1326[1 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_82, Var0, 1, 1, 0);
}else{
Local_1326[1 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_82, ENTITY::GET_ENTITY_COORDS(Local_1323.f_0, 1), 1, 1, 0);
OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1326[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1326[1 /*2*/], Local_1323.f_0, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1326[1 /*2*/], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(Local_1326[2 /*2*/])){
if(ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
Local_1326[2 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_82, Var0, 1, 1, 0);
}else{
Local_1326[2 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_82, ENTITY::GET_ENTITY_COORDS(Local_1323.f_0, 1), 1, 1, 0);
OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1326[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1326[2 /*2*/], Local_1323.f_0, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1326[2 /*2*/], 1);
}}}}

int func_290(var uParam0, int iParam1, int iParam2, int iParam3){
if(*uParam0==-1){
return 0;
}elseif(*uParam0==1){
return 1;
}elseif(*uParam0==0 || ((*uParam0==2 && uParam0->f_1==1) && iParam2)){
if(iParam1 > 0){
*uParam0=2;
uParam0->f_6=iParam1;
}else{
*uParam0=1;
uParam0->f_6=0;
}
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=MISC::GET_GAME_TIMER();
uParam0->f_1=iParam3;
return 1;
}
return 0;
}


void func_291(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78689){
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


void func_292(var uParam0, int iParam1){
Global_100833.f_22[iParam1]=uParam0;
}

int func_293(var uParam0){
if(func_301(uParam0)){
return 1;
}
return 0;
}

int func_294(var uParam0, char* sParam1){
int iVar0;
int iVar1;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
iVar1=-1;
iVar0=0;
while (iVar0 < uParam0->f_374){
if(uParam0->f_374[iVar0 /*5*/]){
if(MISC::ARE_STRINGS_EQUAL(uParam0->f_374[iVar0 /*5*/].f_4, sParam1)){
uParam0->f_374[iVar0 /*5*/].f_2=0;
if(!uParam0->f_374[iVar0 /*5*/].f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}elseif(iVar1==-1){
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 >=0){
TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
uParam0->f_374[iVar1 /*5*/]=1;
uParam0->f_374[iVar1 /*5*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_374[iVar1 /*5*/].f_4=sParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}

int func_295(var uParam0, int iParam1){
int iVar0;
int iVar1;
if(iParam1==0){
return 0;
}
iVar1=-1;
iVar0=0;
while (iVar0 < *uParam0){
if((*uParam0)[iVar0 /*5*/]){
if((uParam0[iVar0 /*5*/])->f_4==iParam1){
(uParam0[iVar0 /*5*/])->f_2=0;
if(!(uParam0[iVar0 /*5*/])->f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}elseif(iVar1==-1){
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 >=0){
STREAMING::REQUEST_MODEL(iParam1);
(*uParam0)[iVar1 /*5*/]=1;
(uParam0[iVar1 /*5*/])->f_3=MISC::GET_GAME_TIMER();
(uParam0[iVar1 /*5*/])->f_4=iParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}


void func_296(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if((*uParam0)[iVar0 /*5*/]){
(uParam0[iVar0 /*5*/])->f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
if(uParam0->f_151[iVar0 /*5*/]){
uParam0->f_151[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
if(uParam0->f_202[iVar0 /*7*/]){
uParam0->f_202[iVar0 /*7*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 20){
if(uParam0->f_273[iVar0 /*5*/]){
uParam0->f_273[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 20){
if(uParam0->f_374[iVar0 /*5*/]){
uParam0->f_374[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 30){
if(uParam0->f_475[iVar0 /*6*/]){
uParam0->f_475[iVar0 /*6*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(uParam0->f_656[iVar0 /*6*/]){
uParam0->f_656[iVar0 /*6*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 7){
if(uParam0->f_687[iVar0 /*7*/]){
uParam0->f_687[iVar0 /*7*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(uParam0->f_737[iVar0 /*5*/]){
uParam0->f_737[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 3){
if(uParam0->f_763[iVar0 /*5*/]){
uParam0->f_763[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
if(uParam0->f_909[iVar0 /*5*/]){
uParam0->f_909[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(uParam0->f_960[iVar0 /*5*/]){
uParam0->f_960[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 22){
if(uParam0->f_779[iVar0 /*5*/]){
uParam0->f_779[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
if(uParam0->f_898){
uParam0->f_898.f_2=1;
}
if(uParam0->f_890){
uParam0->f_890.f_2=1;
}
if(uParam0->f_894){
uParam0->f_894.f_2=1;
}}

int func_297(var uParam0, struct<3> Param1, float fParam2, int iParam3){
if(func_298(Param1) || fParam2 <=0f){
return 0;
}
if(uParam0->f_898){
if(func_126(uParam0->f_898.f_4, Param1, 0) && uParam0->f_898.f_10==fParam2){
uParam0->f_898.f_2=0;
if(!uParam0->f_898.f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param1, fParam2, iParam3);
uParam0->f_898=1;
uParam0->f_898.f_3=MISC::GET_GAME_TIMER();
uParam0->f_898.f_4={
Param1 
};
uParam0->f_898.f_7={
0f, 0f, 0f 
};
uParam0->f_898.f_10=fParam2;
uParam0->f_1012=1;
return 1;
}

int func_298(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_299(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 0:
*uParam1={
1256.936f, 556.8262f, 79.7001f 
};
*uParam2=134.0936f;
break;
case 1:
*uParam1={
692.2659f, -1004.185f, 21.9451f 
};
*uParam2=3.5976f;
break;
}}


bool func_300(){
return MISC::IS_BIT_SET(Global_100833.f_20, 13);
}

int func_301(var uParam0){
bool bVar0;
int iVar1;
int iVar2;
if(uParam0->f_1012){
bVar0=true;
iVar1=0;
while (iVar1 < 30){
if((*uParam0)[iVar1 /*5*/]){
if(!(uParam0[iVar1 /*5*/])->f_1){
if(STREAMING::HAS_MODEL_LOADED((uParam0[iVar1 /*5*/])->f_4)){
(uParam0[iVar1 /*5*/])->f_1=1;
}else{
bVar0=false;
}}
if((uParam0[iVar1 /*5*/])->f_2){
if((uParam0[iVar1 /*5*/])->f_1){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iVar1 /*5*/])->f_4);
func_288(uParam0[iVar1 /*5*/]);
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 20){
if(uParam0->f_273[iVar1 /*5*/]){
if(!uParam0->f_273[iVar1 /*5*/].f_1){
if(STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_273[iVar1 /*5*/].f_4)){
uParam0->f_273[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_273[iVar1 /*5*/].f_2){
if(uParam0->f_273[iVar1 /*5*/].f_1){
STREAMING::REMOVE_ANIM_DICT(uParam0->f_273[iVar1 /*5*/].f_4);
func_288(&(uParam0->f_273[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 20){
if(uParam0->f_374[iVar1 /*5*/]){
if(!uParam0->f_374[iVar1 /*5*/].f_1){
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_374[iVar1 /*5*/].f_4)){
uParam0->f_374[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_374[iVar1 /*5*/].f_2){
if(uParam0->f_374[iVar1 /*5*/].f_1){
TASK::REMOVE_WAYPOINT_RECORDING(uParam0->f_374[iVar1 /*5*/].f_4);
func_288(&(uParam0->f_374[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 5){
if(uParam0->f_656[iVar1 /*6*/]){
if(!uParam0->f_656[iVar1 /*6*/].f_1){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_656[iVar1 /*6*/].f_5)){
uParam0->f_656[iVar1 /*6*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_656[iVar1 /*6*/].f_2){
if(uParam0->f_656[iVar1 /*6*/].f_1){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_656[iVar1 /*6*/].f_5));
func_288(&(uParam0->f_656[iVar1 /*6*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 30){
if(uParam0->f_475[iVar1 /*6*/]){
if(!uParam0->f_475[iVar1 /*6*/].f_1){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4)){
uParam0->f_475[iVar1 /*6*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_475[iVar1 /*6*/].f_2){
if(uParam0->f_475[iVar1 /*6*/].f_1){
VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
func_288(&(uParam0->f_475[iVar1 /*6*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 10){
if(uParam0->f_202[iVar1 /*7*/]){
if(!uParam0->f_202[iVar1 /*7*/].f_1){
if(WEAPON::HAS_WEAPON_ASSET_LOADED(uParam0->f_202[iVar1 /*7*/].f_4)){
uParam0->f_202[iVar1 /*7*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_202[iVar1 /*7*/].f_2){
if(uParam0->f_202[iVar1 /*7*/].f_1){
WEAPON::REMOVE_WEAPON_ASSET(uParam0->f_202[iVar1 /*7*/].f_4);
func_288(&(uParam0->f_202[iVar1 /*7*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 10){
if(uParam0->f_151[iVar1 /*5*/]){
if(!uParam0->f_151[iVar1 /*5*/].f_1){
if(VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_151[iVar1 /*5*/].f_4)){
uParam0->f_151[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_151[iVar1 /*5*/].f_2){
if(uParam0->f_151[iVar1 /*5*/].f_1){
VEHICLE::REMOVE_VEHICLE_ASSET(uParam0->f_151[iVar1 /*5*/].f_4);
func_288(&(uParam0->f_151[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 5){
if(uParam0->f_737[iVar1 /*5*/]){
if(!uParam0->f_737[iVar1 /*5*/].f_1){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1)){
uParam0->f_737[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_737[iVar1 /*5*/].f_2){
if(uParam0->f_737[iVar1 /*5*/].f_1){
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4);
func_288(&(uParam0->f_737[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(uParam0->f_763[iVar1 /*5*/]){
if(!uParam0->f_763[iVar1 /*5*/].f_1){
if(INTERIOR::IS_INTERIOR_READY(uParam0->f_763[iVar1 /*5*/].f_4)){
uParam0->f_763[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_763[iVar1 /*5*/].f_2){
if(uParam0->f_763[iVar1 /*5*/].f_1){
INTERIOR::UNPIN_INTERIOR(uParam0->f_763[iVar1 /*5*/].f_4);
func_288(&(uParam0->f_763[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 7){
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_687[iVar1 /*7*/].f_4)){
if(uParam0->f_687[iVar1 /*7*/]){
iVar2=GRAPHICS::QUERY_MOVIE_MESH_SET_STATE(uParam0->f_687[iVar1 /*7*/].f_5);
if(!uParam0->f_687[iVar1 /*7*/].f_1){
switch (iVar2){
case 1:
case 2:
uParam0->f_687[iVar1 /*7*/].f_1=1;
break;
case 0:
uParam0->f_687[iVar1 /*7*/].f_1=0;
bVar0=false;
break;
case 3:
uParam0->f_687[iVar1 /*7*/].f_1=0;
func_288(&(uParam0->f_687[iVar1 /*7*/]));
break;
case -1:
uParam0->f_687[iVar1 /*7*/].f_1=0;
GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
uParam0->f_687[iVar1 /*7*/]=0;
bVar0=false;
break;
}}}elseif(INTERIOR::IS_INTERIOR_READY(uParam0->f_687[iVar1 /*7*/].f_6)){
uParam0->f_687[iVar1 /*7*/].f_5=GRAPHICS::LOAD_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_4);
uParam0->f_687[iVar1 /*7*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_687[iVar1 /*7*/]=1;
}else{
bVar0=false;
}
if(uParam0->f_687[iVar1 /*7*/].f_2){
if(uParam0->f_687[iVar1 /*7*/]){
if(uParam0->f_687[iVar1 /*7*/].f_1){
GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
func_288(&(uParam0->f_687[iVar1 /*7*/]));
uParam0->f_687[iVar1 /*7*/].f_4="";
}
else{
bVar0=false;
}}else{
func_288(&(uParam0->f_687[iVar1 /*7*/]));
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 10){
if(uParam0->f_909[iVar1 /*5*/]){
if(!uParam0->f_909[iVar1 /*5*/].f_1){
if(TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(uParam0->f_909[iVar1 /*5*/].f_4)){
uParam0->f_909[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_909[iVar1 /*5*/].f_2){
if(uParam0->f_909[iVar1 /*5*/].f_1){
TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_909[iVar1 /*5*/].f_4);
func_288(&(uParam0->f_909[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 5){
if(uParam0->f_960[iVar1 /*5*/]){
if(!uParam0->f_960[iVar1 /*5*/].f_1){
if(AUDIO::PREPARE_ALARM(uParam0->f_960[iVar1 /*5*/].f_4)){
uParam0->f_960[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_960[iVar1 /*5*/].f_2){
if(uParam0->f_960[iVar1 /*5*/].f_1){
func_288(&(uParam0->f_960[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < uParam0->f_779){
if(uParam0->f_779[iVar1 /*5*/]){
if(!uParam0->f_779[iVar1 /*5*/].f_1){
if(HUD::HAS_ADDITIONAL_TEXT_LOADED(iVar1)){
uParam0->f_779[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_779[iVar1 /*5*/].f_2){
if(uParam0->f_779[iVar1 /*5*/].f_1){
HUD::CLEAR_ADDITIONAL_TEXT(iVar1, 1);
func_288(&(uParam0->f_779[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
if(uParam0->f_890){
if(!uParam0->f_890.f_1){
if(STREAMING::HAS_PTFX_ASSET_LOADED()){
uParam0->f_890.f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_890.f_2){
if(uParam0->f_890.f_1){
STREAMING::REMOVE_PTFX_ASSET();
func_288(&(uParam0->f_890));
}else{
bVar0=false;
}}}
if(uParam0->f_894){
if(!uParam0->f_894.f_1){
if(PHYSICS::ROPE_ARE_TEXTURES_LOADED()){
uParam0->f_894.f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_894.f_2){
if(uParam0->f_894.f_1){
PHYSICS::ROPE_UNLOAD_TEXTURES();
func_288(&(uParam0->f_894));
}else{
bVar0=false;
}}}
if(uParam0->f_898 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(!uParam0->f_898.f_1){
if(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
uParam0->f_898.f_1=1;
if(uParam0->f_1013){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
func_302(uParam0);
uParam0->f_1013=0;
}}else{
bVar0=false;
}}
if(uParam0->f_898.f_2){
STREAMING::NEW_LOAD_SCENE_STOP();
func_288(&(uParam0->f_898));
}}
iVar1=0;
while (iVar1 < 5){
if(uParam0->f_986[iVar1 /*5*/]){
if(!uParam0->f_986[iVar1 /*5*/].f_1){
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_986[iVar1 /*5*/].f_4)){
uParam0->f_986[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_986[iVar1 /*5*/].f_2){
if(uParam0->f_986[iVar1 /*5*/].f_1){
func_288(&(uParam0->f_986[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
if(bVar0){
uParam0->f_1012=0;
return 1;
}else{
return 0;
}}
return 1;
}


void func_302(var uParam0){
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
func_288(&(uParam0->f_898));
}}


void func_303(){
if(bLocal_91 && (func_304() || CAM::IS_SCREEN_FADED_OUT())){
func_8(1);
SCRIPT::TERMINATE_THIS_THREAD();
}}

int func_304(){
if(Global_3){
return 1;
}
if(Global_100833==7 || Global_100833==8){
return 1;
}
return 0;
}


void func_305(){
struct<3> Var0;
var uVar1;
func_312();
PED::ADD_RELATIONSHIP_GROUP("SECDRIVER", &iLocal_1312);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1312, joaat("COP"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1312, -183807561);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1312);
if(func_6(0) || func_213()){
iLocal_90=0;
if(func_213()){
if(Global_94990){
iLocal_90++;
}}
StringCopy(&Global_97675, "jhp2a_alt", 64);
if(func_213()){
func_299(iLocal_90, &Var0, &uVar1);
func_311(Var0, uVar1, 1, 0);
}
bLocal_89=true;
}else{
while (!func_286(1)){
wait(0);
func_310(&uLocal_92);
}}
func_309(&uLocal_92, "JHP2A", 0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
func_307(88);
func_291(&uLocal_1133, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
func_291(&uLocal_1133, 3, 0, "Lester", 0, 1);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), 1);
PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 1);
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
}
func_306();
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97675)){}
iLocal_1328=PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
wait(0);
}
Global_75926=1;
}


void func_306(){
Global_94991=1;
}


void func_307(int iParam0){
Global_96668=0;
switch (iParam0){
case 72:
func_308(2);
func_308(4);
break;
case 73:
func_308(0);
func_308(1);
func_308(7);
break;
case 92:
func_308(10);
func_308(9);
func_308(13);
func_308(6);
break;
case 68:
func_308(11);
break;
case 78:
func_308(14);
break;
case 79:
func_308(3);
break;
default:
break;
}}


void func_308(bool bParam0){
MISC::SET_BIT(&Global_96668, iParam0);
}

int func_309(var uParam0, char* sParam1, int iParam2){
if(uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/]){
if(MISC::ARE_STRINGS_EQUAL(uParam0->f_779[iParam2 /*5*/].f_4, sParam1)){
uParam0->f_779[iParam2 /*5*/].f_2=0;
uParam0->f_1012=1;
return 1;
}else{
return 0;
}}else{
if(iParam2 >=11){
HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(sParam1, iParam2);
}else{
HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
}
uParam0->f_779[iParam2 /*5*/]=1;
uParam0->f_779[iParam2 /*5*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_779[iParam2 /*5*/].f_4=sParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}


void func_310(var uParam0){
func_301(uParam0);
}


void func_311(struct<3> Param0, var uParam1, int iParam2, int iParam3){
if(func_213()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::CLEAR_BIT(&(Global_100833.f_20), 2);
MISC::SET_GAME_PAUSED(1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}
Global_100829={
Param0 
};
Global_100832=uParam1;
Global_100828=1;
if(iParam2==1){
MISC::SET_BIT(&(Global_100833.f_20), 14);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 14);
}
if(iParam3==1){
MISC::SET_BIT(&(Global_100833.f_20), 24);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 24);
}
func_212(1);
}}


void func_312(){
func_320(&(Local_1107[0 /*8*/]), 94152, "Van Driver Manager");
func_320(&(Local_1107[1 /*8*/]), 92799, "Cargo Manager");
}


void func_313(var uParam0){
if(!func_135(uParam0)){
if(ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0)){
func_318(Local_1326[0 /*2*/], 1);
func_318(Local_1326[1 /*2*/], 1);
func_318(Local_1326[2 /*2*/], 1);
iLocal_1342=1;
func_317(uParam0);
}else{
switch (uParam0->f_1){
case 1:
func_316(&uLocal_92, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JWL_HEIST_PREP_2A_SHOOTING_LOCK", 0, -1)){
if((MISC::GET_GAME_TIMER() - iLocal_1334) > 150){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1327, PLAYER::PLAYER_PED_ID(), 0)){
if((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1327, joaat("weapon_molotov"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1327, joaat("weapon_bzgas"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1327, joaat("weapon_knife"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1327, joaat("weapon_unarmed"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1327, joaat("weapon_hit_by_water_cannon"), 0)){
WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_1327);
}else{
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1327);
iLocal_1334=MISC::GET_GAME_TIMER();
iLocal_1333++;
if(iLocal_1333 >=3){
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lock_Destroyed", iLocal_1327, "JWL_PREP_2A_SOUNDS", 0, 0);
}
else{
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lock_Damage", iLocal_1327, "JWL_PREP_2A_SOUNDS", 0, 0);
}}}
}
else{
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1327);
}}
if(((((iLocal_1333 >=3 || ENTITY::IS_ENTITY_DEAD(iLocal_1327, 0)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1323.f_0, 2)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1323.f_0, 3)) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1323.f_0, 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1323.f_0, 3) > 0f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1327)){
OBJECT::DELETE_OBJECT(&iLocal_1327);
}
if(!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1323.f_0, 2)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1323.f_0, 2, 0, 0);
}
if(!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1323.f_0, 3)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1323.f_0, 3, 0, 0);
}
iLocal_1343=0;
iLocal_1344=0;
func_318(Local_1326[0 /*2*/], 0);
func_318(Local_1326[1 /*2*/], 0);
func_318(Local_1326[2 /*2*/], 0);
func_315(uParam0, 2, 0);
}
break;
case 2:
if(func_314(Local_1323.f_0)){
if(MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1323.f_0, 2)) > 0.5f && MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1323.f_0, 3)) > 0.5f){
func_315(uParam0, 3, 0);
}}
break;
case 3:
if(func_314(Local_1323.f_0)){
if(!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1323.f_0, 2)){
if(VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1323.f_0, 2)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1323.f_0, 2, 1, 0);
VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1323.f_0, 2, 0, 0, 1);
iLocal_1343=1;
}
}
else{
iLocal_1343=1;
}
if(!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1323.f_0, 3)){
if(VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1323.f_0, 3)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1323.f_0, 3, 1, 0);
VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1323.f_0, 3, 0, 0, 1);
iLocal_1344=1;
}
}
else{
iLocal_1344=1;
}
if(iLocal_1343 && iLocal_1344){
iLocal_1342=1;
func_315(uParam0, 4, 0);
}}
break;
}}}
if(func_135(uParam0)){}}

int func_314(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}


void func_315(var uParam0, int iParam1, int iParam2){
if(iParam2 > 0){
*uParam0=2;
uParam0->f_5=MISC::GET_GAME_TIMER();
uParam0->f_6=iParam2;
}
uParam0->f_1=iParam1;
}

int func_316(var uParam0, char* sParam1){
int iVar0;
int iVar1;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
iVar1=-1;
iVar0=0;
while (iVar0 < uParam0->f_737){
if(uParam0->f_737[iVar0 /*5*/]){
if(MISC::ARE_STRINGS_EQUAL(uParam0->f_737[iVar0 /*5*/].f_4, sParam1)){
uParam0->f_737[iVar0 /*5*/].f_2=0;
if(!uParam0->f_737[iVar0 /*5*/].f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}elseif(iVar1==-1){
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 >=0){
AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, 0, -1);
uParam0->f_737[iVar1 /*5*/]=1;
uParam0->f_737[iVar1 /*5*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_737[iVar1 /*5*/].f_4=sParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}


void func_317(var uParam0){
if(*uParam0 !=4){
*uParam0=4;
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_6=0;
uParam0->f_1=-1;
}}


void func_318(int iParam0, bool bParam1){
struct<3> Var0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::IS_ENTITY_ATTACHED(iParam0)){
ENTITY::DETACH_ENTITY(iParam0, 1, bParam1);
ENTITY::SET_ENTITY_COLLISION(iParam0, 1, 0);
PHYSICS::ACTIVATE_PHYSICS(iParam0);
}
if(bParam1){
Var0={
func_319(ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f), IntToFloat(-MISC::GET_RANDOM_INT_IN_RANGE(3, 6)), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f))) 
};
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 1, Var0 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.5f)), 0, 1, 1, 0);
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 5, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), 0, 1, 1, 0);
ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, Local_1323.f_0, 1);
}}}


Vector3 func__319(struct<3> Param0){
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

int func_320(var uParam0, int iParam1, char* sParam2){
if(*uParam0 !=-1){
return 0;
}
*uParam0=0;
uParam0->f_3=sParam2;
uParam0->f_7=iParam1;
return 1;
}


void func_321(var uParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
int iVar3;
float fVar4;
if(!func_135(uParam0)){
if(((!ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0) || PED::IS_PED_INJURED(Local_1313.f_0)) || (ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) && func_205(Local_1323.f_0, Local_1313.f_0, 1) > 200f)) || (!PED::IS_PED_IN_ANY_VEHICLE(Local_1313.f_0, 0) && func_205(Local_1323.f_0, Local_1313.f_0, 1) > 200f)){
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)){
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1323.f_0, 0);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1313);
func_317(uParam0);
}else{
if((uParam0->f_1 !=5 && uParam0->f_1 !=3) && ((!ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)) || !PED::IS_PED_IN_VEHICLE(Local_1313.f_0, Local_1323.f_0, 0))){
iLocal_1335=0;
iLocal_1336=0;
StringCopy(&cLocal_1337, "", 24);
func_315(uParam0, 5, 0);
}elseif((uParam0->f_1==1 || uParam0->f_1==2) || uParam0->f_1==4){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_1323.f_0)){
if((!iLocal_1330 && (MISC::GET_GAME_TIMER() - iLocal_1332) > 500) && fLocal_1331 >=4f){
iLocal_1330=1;
iLocal_1329++;
}}elseif(iLocal_1330){
iLocal_1332=MISC::GET_GAME_TIMER();
iLocal_1330=0;
}
Var1={
func_319(ENTITY::GET_ENTITY_COORDS(iVar0, 1) - ENTITY::GET_ENTITY_COORDS(Local_1323.f_0, 1)) 
};
Var2={
ENTITY::GET_ENTITY_VELOCITY(Local_1323.f_0) - ENTITY::GET_ENTITY_VELOCITY(iVar0) 
};
fLocal_1331=func_325(Var2, Var1);
}}
switch (uParam0->f_1){
case 1:
if((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1323.f_0, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1313.f_0, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1313.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1323.f_0)) || iLocal_1329 > 0){
iLocal_1335=0;
iLocal_1336=0;
StringCopy(&cLocal_1337, "", 24);
func_315(uParam0, 4, 0);
}else{
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)){
if((ENTITY::IS_ENTITY_STATIC(PLAYER::PLAYER_PED_ID()) || fLocal_1331 > 0.5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, 0f, 2f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1323.f_0, 0f, 10f, 2f), 4.5f, 0, 1, 0)){
if(!AUDIO::IS_HORN_ACTIVE(Local_1323.f_0)){
if(iLocal_1346==-1){
iLocal_1346=MISC::GET_GAME_TIMER();
}
elseif((MISC::GET_GAME_TIMER() - iLocal_1346) > 5000){
VEHICLE::START_VEHICLE_HORN(Local_1323.f_0, 2000, joaat("normal"), 0);
}}else{
iLocal_1346=-1;
}}
}
if(func_324(Local_1323.f_0, -993.7236f, -2418.757f, 12.9447f, 1) < 20f){
func_294(&uLocal_92, "jhp2a_airport");
}
if(!func_323(Local_1313.f_0, joaat("script_task_vehicle_follow_waypoint_recording"), 1)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1323.f_0, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, 1, 0)){
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED("jhp2a_airport")){
iLocal_1335=0;
iLocal_1336=0;
StringCopy(&cLocal_1337, "", 24);
func_315(uParam0, 2, 0);
}}else{
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1313.f_0, Local_1323.f_0, &Global_97675, 786475, -1, 24, -1, 12f, 0, 1073741824);
}
}}
break;
case 2:
if((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1323.f_0, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1313.f_0, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1313.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1323.f_0)) || iLocal_1329 > 0){
iLocal_1335=0;
iLocal_1336=0;
StringCopy(&cLocal_1337, "", 24);
func_315(uParam0, 5, 0);
}elseif(!func_323(Local_1313.f_0, joaat("script_task_vehicle_follow_waypoint_recording"), 1)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1323.f_0, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, 1, 0)){
iLocal_1335=0;
iLocal_1336=0;
StringCopy(&cLocal_1337, "", 24);
func_315(uParam0, 3, 0);
}
else{
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1313.f_0, Local_1323.f_0, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
}}
break;
case 3:
if(((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1323.f_0, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1313.f_0, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1313.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1323.f_0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1323.f_0, 1)) || iLocal_1329 > 0){
iLocal_1335=0;
iLocal_1336=0;
StringCopy(&cLocal_1337, "", 24);
func_315(uParam0, 5, 0);
}elseif(PED::IS_PED_IN_VEHICLE(Local_1313.f_0, Local_1323.f_0, 1)){
if(!func_323(Local_1313.f_0, joaat("script_task_leave_vehicle"), 1)){
TASK::TASK_LEAVE_VEHICLE(Local_1313.f_0, Local_1323.f_0, 0);
}}else{
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1323.f_0, 2);
if(!func_323(Local_1313.f_0, joaat("script_task_perform_sequence"), 1)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_1311);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_1311);
TASK::TASK_PERFORM_SEQUENCE(Local_1313.f_0, uLocal_1311);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_1311);
}}
break;
case 4:
if(VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1323.f_0, 0, 1)){
iVar3++;
}
if(VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1323.f_0, 1, 1)){
iVar3++;
}
if(VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1323.f_0, 4, 1)){
iVar3++;
}
if(VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1323.f_0, 5, 1)){
iVar3++;
}
if(((((IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_1323.f_0)) <=0f || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1323.f_0) <=250f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1323.f_0) <=400f) || PED::IS_PED_INJURED(Local_1313.f_0)) || iVar3 >=2) || iLocal_1329 > 6){
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1323.f_0, 0)){
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1323.f_0, 0);
}
iLocal_1335=0;
iLocal_1336=0;
StringCopy(&cLocal_1337, "", 24);
func_315(uParam0, 5, 0);
}elseif(!func_323(Local_1313.f_0, joaat("script_task_vehicle_mission"), 1)){
TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_1313.f_0, Local_1323.f_0, PLAYER::PLAYER_PED_ID(), 8, 90f, 786468, 400f, 10f, 0);
}
break;
case 5:
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0)){
if(PED::IS_PED_IN_VEHICLE(Local_1313.f_0, Local_1323.f_0, 0)){
if(!func_87(Local_1323.f_0)){
if(!func_323(Local_1313.f_0, joaat("script_task_vehicle_temp_action"), 1)){
TASK::CLEAR_PED_TASKS(Local_1313.f_0);
TASK::TASK_VEHICLE_TEMP_ACTION(Local_1313.f_0, Local_1323.f_0, 5, -1);
}}elseif(!func_323(Local_1313.f_0, joaat("script_task_leave_vehicle"), 1)){
TASK::TASK_LEAVE_VEHICLE(Local_1313.f_0, Local_1323.f_0, 256);
}
}
elseif(!func_323(Local_1313.f_0, joaat("script_task_combat"), 1)){
PED::SET_PED_CAN_BE_TARGETTED(Local_1313.f_0, 1);
TASK::TASK_COMBAT_PED(Local_1313.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1323.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_1323.f_0, 0)){
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_1323.f_0, 2, 1);
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_1323.f_0, 3, 1);
}
break;
}}
if((ENTITY::DOES_ENTITY_EXIST(Local_1313.f_0) && !PED::IS_PED_INJURED(Local_1313.f_0)) && !PED::IS_CONVERSATION_PED_DEAD(Local_1313.f_0)){
switch (uParam0->f_1){
case 4:
switch (iLocal_1335){
case 0:
if(func_42() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1313.f_0)){
if(PED::IS_PED_BEING_JACKED(Local_1313.f_0)){
func_62(Local_1313.f_0, "JACKED_GENERIC", 10);
}else{
func_62(Local_1313.f_0, "GENERIC_SHOCKED_HIGH", 10);
}
iLocal_1335++;
}
break;
case 1:
if(!PED::IS_PED_IN_VEHICLE(Local_1313.f_0, Local_1323.f_0, 0) || iLocal_1310==3){
if(!PED::IS_PED_IN_VEHICLE(Local_1313.f_0, Local_1323.f_0, 0)){
iLocal_1335=4;
}else{
iLocal_1335++;
}}elseif(func_42() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1313.f_0)){
if(func_322(&uLocal_1133, &cLocal_77, "JS_INIT_M", 8, 0, 0, 0)){
iLocal_1335++;
}}
break;
case 2:
if(func_42() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1313.f_0)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1337)){
fVar4=vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1313.f_0, 1));
if((((((iLocal_1330 || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1313.f_0, 126)) || fVar4 < 49f) && (MISC::GET_GAME_TIMER() - iLocal_1336) > 5000) && fVar4 < 225f){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 2)==0){
StringCopy(&cLocal_1337, "GENERIC_CURSE_HIGH", 24);
}
else{
StringCopy(&cLocal_1337, "JS_ATT_M", 24);
}
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1337)){
if(MISC::ARE_STRINGS_EQUAL(&cLocal_1337, "GENERIC_CURSE_HIGH")){
func_62(Local_1313.f_0, "GENERIC_CURSE_HIGH", 10);
iLocal_1335++;
}
else{
if(func_322(&uLocal_1133, &cLocal_77, &cLocal_1337, 8, 0, 0, 0)){
iLocal_1335++;
}
iLocal_1335++;
}}}
break;
case 3:
if(!func_43() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1313.f_0)){
iLocal_1336=MISC::GET_GAME_TIMER();
StringCopy(&cLocal_1337, "", 24);
iLocal_1335=(iLocal_1335 - 1);
}
break;
}
break;
case 5:
switch (iLocal_1335){
case 0:
if(func_42() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1313.f_0)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1337)){
if((MISC::GET_GAME_TIMER() - iLocal_1336) > 5000 && vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1313.f_0, 1)) < 400f){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 2)==0){
StringCopy(&cLocal_1337, "GENERIC_INSULT_HIGH", 24);
}
else{
StringCopy(&cLocal_1337, "JS_COMB_M", 24);
}
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1337)){
if(MISC::ARE_STRINGS_EQUAL(&cLocal_1337, "GENERIC_INSULT_HIGH")){
func_62(Local_1313.f_0, "GENERIC_INSULT_HIGH", 10);
iLocal_1335++;
}
elseif(func_322(&uLocal_1133, &cLocal_77, &cLocal_1337, 8, 0, 0, 0)){
iLocal_1335++;
}}}
break;
case 1:
if(!func_43() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1313.f_0)){
iLocal_1336=MISC::GET_GAME_TIMER();
StringCopy(&cLocal_1337, "", 24);
iLocal_1335=(iLocal_1335 - 1);
}
break;
}
break;
}}}
if(func_135(uParam0)){}}


bool func_322(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_41(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_27(sParam2, iParam3, 0);
}

int func_323(int iParam0, int iParam1, bool bParam2){
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


float func_324(int iParam0, struct<3> Param1, int iParam2){
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


float func_325(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


void func_326(int iParam0){
struct<2> Var0;
char[] cVar1[8];
AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_FAIL");
if(iParam0==5){
func_338();
func_8(0);
SCRIPT::TERMINATE_THIS_THREAD();
}elseif(!bLocal_91){
switch (iParam0){
case 1:
StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
break;
case 2:
StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
break;
case 4:
StringCopy(&Var0, "JHP2A_FCARGO", 16);
break;
case 3:
StringCopy(&Var0, "JHP2A_FCARGO2", 16);
break;
case 0:
default:
StringCopy(&Var0, "JHP2A_FF", 16);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){
func_336(&Var0);
}else{
func_327(&Var0, &cVar1);
}
bLocal_91=true;
}}


void func_327(char* sParam0, char* sParam1){
func_335(sParam0, sParam1);
func_328(0);
}


void func_328(int iParam0){
int iVar0;
if(Global_113810.f_9088 || func_6(0)){
iVar0=func_4();
if(!func_329(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
Global_100869=iParam0;
}}

int func_329(int iParam0){
int iVar0;
int iVar1;
func_334();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::START_FIRING_AMNESTY(5000);
}
iVar0=Global_91565[iParam0 /*5*/];
iVar1=Global_78960.f_109[iVar0 /*4*/];
func_333(iVar1, 1);
PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
func_330(&(Global_113810.f_2366.f_539), iVar1);
if(Global_94988==Global_100870){
Global_113810.f_9088.f_330[iVar1 /*6*/].f_1++;
}
if(!MISC::IS_BIT_SET(Global_91601[iVar1 /*34*/].f_15, 1)){
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
}}
Global_113810.f_9088.f_330[iVar1 /*6*/].f_2++;
Global_94988=Global_100870;
if(iParam0==-1){
if(Global_113810.f_9088){
}
return 0;
}
if(MISC::IS_BIT_SET(Global_91565[iParam0 /*5*/].f_1, 4)){
return 0;
}
if(MISC::IS_BIT_SET(Global_91565[iParam0 /*5*/].f_1, 5)){
return 0;
}
return 1;
}


void func_330(var uParam0, int iParam1){
int iVar0;
int iVar1;
struct<3> Var2;
float fVar3;
if(iParam1==94){
return;
}
iVar0=0;
while (iVar0 < 3){
iVar1=Global_113810.f_18536[iVar0];
if((((iVar1==8 || iVar1==9) || iVar1==10) || (((iVar1==11 || iVar1==34) || iVar1==72) || iVar1==73)) && !MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[0], 9)){
}else{
Var2={
0f, 0f, 0f 
};
fVar3=0f;
if(!func_332(Global_113810.f_18536[iVar0], &Var2, &fVar3)){
Global_113810.f_18536[iVar0]=318;
func_331(&(uParam0->f_2296[iVar0]));
uParam0->f_2300[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2310[iVar0]=0f;
uParam0->f_2314[iVar0]=0;
uParam0->f_2318[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2328[iVar0]=0;
Global_98203[iVar0 /*29*/]={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_9=0f;
Global_98203[iVar0 /*29*/].f_12=0f;
Global_98203[iVar0 /*29*/].f_3={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_10=0f;
Global_98203[iVar0 /*29*/].f_13=0f;
Global_98203[iVar0 /*29*/].f_6={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_11=0f;
Global_98203[iVar0 /*29*/].f_14=0f;
Global_98203[iVar0 /*29*/].f_17={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_26=0f;
Global_98203[iVar0 /*29*/].f_20={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_27=0f;
Global_98203[iVar0 /*29*/].f_23={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_28=0f;
}}
iVar0++;
}}


void func_331(var uParam0){
*uParam0=-15;
}

int func_332(int iParam0, var uParam1, float fParam2){
switch (iParam0){
case 11:
*uParam1={
115.1569f, -1286.684f, 28.2613f 
};
*fParam2=111f;
return 1;
break;
case 8:
*uParam1={
-90.0089f, -1324.195f, 28.3203f 
};
*fParam2=194.1887f;
return 1;
break;
case 9:
return func_332(8, uParam1, fParam2);
break;
case 10:
return func_332(8, uParam1, fParam2);
break;
case 13:
*uParam1={
-807.2979f, -48.4004f, 36.8173f 
};
*fParam2=201.6328f;
return 1;
break;
case 14:
*uParam1={
1432.34f, -1887.383f, 70.5768f 
};
*fParam2=350.0509f;
return 1;
break;
case 15:
*uParam1={
1666.204f, 1967.25f, 143.3213f 
};
*fParam2=0.7896f;
return 1;
break;
case 12:
*uParam1={
-1440.22f, -127.02f, 50f 
};
*fParam2=42f;
return 1;
break;
case 16:
*uParam1={
135.055f, -1759.64f, 27.8957f 
};
*fParam2=-129f;
return 1;
break;
case 17:
*uParam1={
687.6992f, -1744.03f, 28.3624f 
};
*fParam2=267.1409f;
return 1;
break;
case 18:
*uParam1={
56.5117f, -744.6122f, 43.1356f 
};
*fParam2=340.0526f;
return 1;
break;
case 19:
*uParam1={
506.485f, -1884.967f, 24.764f 
};
*fParam2=22.9566f;
return 1;
break;
case 20:
*uParam1={
1555.958f, 953.6136f, 77.2063f 
};
*fParam2=152.8118f;
return 1;
break;
case 21:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 22:
*uParam1={
220.72f, -64.4177f, 68.2922f 
};
*fParam2=(250.4535f - 360f);
return 1;
break;
case 74:
*uParam1={
2048.07f, 3840.84f, 34.2238f 
};
*fParam2=119.603f;
return 1;
break;
case 23:
*uParam1={
-464.22f, -1592.98f, 38.73f 
};
*fParam2=168f;
return 1;
break;
case 24:
*uParam1={
(744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f 
};
*fParam2=51.7279f;
return 1;
break;
case 67:
*uParam1={
-9f, 508.1f, 173.6278f 
};
*fParam2=151.2504f;
return 1;
break;
case 25:
*uParam1={
72.2278f, -1464.68f, 28.2915f 
};
*fParam2=156.8827f;
return 1;
break;
case 27:
*uParam1={
763f, -906f, 24.2312f 
};
*fParam2=7.2736f;
return 1;
break;
case 26:
*uParam1={
257.9167f, -1120.786f, 28.3684f 
};
*fParam2=97.2736f;
return 1;
break;
case 28:
*uParam1={
422.5858f, -978.6332f, 69.7073f 
};
*fParam2=4f;
return 1;
break;
case 29:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 30:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 31:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 32:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 33:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 34:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 35:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 36:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 37:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 58:
*uParam1={
294.8521f, 882.9366f, 197.8527f 
};
*fParam2=162.693f;
return 1;
break;
case 59:
*uParam1={
-1771.802f, 794.4316f, 138.4211f 
};
*fParam2=128.9946f;
return 1;
break;
case 60:
*uParam1={
1495.595f, -1848.821f, 70.2075f 
};
*fParam2=32.2721f;
return 1;
break;
case 38:
*uParam1={
2897.554f, 4032.241f, 50.1419f 
};
*fParam2=192.8091f;
return 1;
break;
case 39:
*uParam1={
1973.355f, 3818.204f, 32.005f 
};
*fParam2=32f;
return 1;
break;
case 40:
*uParam1={
1973.355f, 3818.204f, 32.005f 
};
*fParam2=32f;
return 1;
break;
case 41:
*uParam1={
1397f, 3725.8f, 33.0673f 
};
*fParam2=-3.7534f;
return 1;
break;
case 42:
*uParam1={
Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) 
};
*fParam2=90f;
return 1;
break;
case 43:
*uParam1={
709.0244f, -2916.479f, 5.0589f 
};
*fParam2=355.326f;
return 1;
break;
case 44:
*uParam1={
643.5248f, -2917.325f, 5.1337f 
};
*fParam2=334.1068f;
return 1;
break;
case 45:
*uParam1={
595.2742f, -2819.183f, 5.0559f 
};
*fParam2=46.8853f;
return 1;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 47:
*uParam1={
314.4171f, 965.207f, 208.4024f 
};
*fParam2=165.9421f;
return 1;
break;
case 49:
*uParam1={
3321.537f, 4975.455f, 25.9097f 
};
*fParam2=221.228f;
return 1;
break;
case 48:
*uParam1={
-111.1318f, 6316.479f, 30.4904f 
};
*fParam2=(42f + 180f);
return 1;
break;
case 50:
*uParam1={
-731.3261f, 106.68f, 54.7169f 
};
*fParam2=98.9764f;
return 1;
break;
case 51:
*uParam1={
-1257.5f, -526.9999f, 30.2361f 
};
*fParam2=220.9554f;
return 1;
break;
case 52:
*uParam1={
736.9869f, -2050.678f, 28.2718f 
};
*fParam2=83.9922f;
return 1;
break;
case 66:
*uParam1={
262.5499f, -2540.15f, 4.8433f 
};
*fParam2=-64.1366f;
return 1;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 55:
*uParam1={
-315.7789f, 6201.355f, 30.4322f 
};
*fParam2=127.7547f;
return 1;
break;
case 56:
*uParam1={
118.0988f, -1264.916f, 32.3637f 
};
*fParam2=-63f;
return 1;
break;
case 57:
*uParam1={
37.5988f, -1351.52f, 28.2954f 
};
*fParam2=90.0339f;
return 1;
break;
case 61:
*uParam1={
-558.2693f, 261.1167f, 82.07f 
};
*fParam2=84.6231f;
return 1;
break;
case 62:
*uParam1={
-196.9999f, 507.9999f, 132.477f 
};
*fParam2=99.6049f;
return 1;
break;
case 63:
*uParam1={
1312.01f, -1645.87f, 51.2f 
};
*fParam2=120f;
return 1;
break;
case 68:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 69:
*uParam1={
-818.7374f, 6.4824f, 41.2432f 
};
*fParam2=211.8223f;
return 1;
break;
case 64:
*uParam1={
2091.258f, 4714.852f, 40.1936f 
};
*fParam2=136.0867f;
return 1;
break;
case 54:
*uParam1={
1762.59f, 3247.212f, 40.735f 
};
*fParam2=27.0648f;
return 1;
break;
case 65:
*uParam1={
1764.013f, 3252.902f, 40.735f 
};
*fParam2=27.0648f;
return 1;
break;
case 70:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 71:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 72:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 73:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
default:
break;
}
return 0;
}


void func_333(int iParam0, bool bParam1){
if(bParam1){
if((iParam0 !=88 && iParam0 !=89) && iParam0 !=92){
Global_94798[iParam0 /*2*/]=1;
}}else{
Global_94798[iParam0 /*2*/]=0;
}}


void func_334(){
Global_100868=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922)){
switch (func_194()){
case 0:
StringCopy(&Global_78922, "CMN_MARRE", 16);
break;
case 1:
StringCopy(&Global_78922, "CMN_FARRE", 16);
break;
case 2:
StringCopy(&Global_78922, "CMN_TARRE", 16);
break;
}
StringCopy(&Global_78926, "", 16);
}
Global_100868=0;
}elseif(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922)){
switch (func_194()){
case 0:
StringCopy(&Global_78922, "CMN_MDIED", 16);
break;
case 1:
StringCopy(&Global_78922, "CMN_FDIED", 16);
break;
case 2:
StringCopy(&Global_78922, "CMN_TDIED", 16);
break;
}
StringCopy(&Global_78926, "", 16);
}
Global_100868=0;
MISC::SET_BIT(&(Global_100833.f_20), 25);
}}


void func_335(char* sParam0, char* sParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1) <=16){
StringCopy(&Global_78922, sParam0, 16);
StringCopy(&Global_78926, sParam1, 16);
}}}}


void func_336(char* sParam0){
func_337(sParam0);
func_328(0);
}


void func_337(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78922, sParam0, 16);
StringCopy(&Global_78926, "", 16);
if(RECORDING::IS_REPLAY_RECORDING()){
RECORDING::STOP_REPLAY_RECORDING();
}}}}


void func_338(){
int iVar0;
if(SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse")){
start_new_script("buddyDeathResponse", 1424);
}
if(Global_113810.f_9088 || func_6(0)){
if(!func_339()){
iVar0=func_4();
if(iVar0 !=-1){
if(!func_329(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
return;
}}else{
func_334();
}}}

int func_339(){
if(((Global_100833==13 || Global_100833==10) || Global_100833==11) || Global_100833==12){
return 0;
}
return 1;
}