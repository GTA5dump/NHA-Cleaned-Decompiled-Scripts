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
var uLocal_36=0;
var uLocal_37=10;
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
char cLocal_79[16]="";
var uLocal_80=0;
var uLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
struct<3> Local_86={
0, 0, 0 
};
struct<3> Local_87={
0, 0, 0 
};
int iLocal_88=0;
int iLocal_89=0;
int iLocal_90=0;
bool bLocal_91=0;
int iLocal_92=0;
bool bLocal_93=0;
var uLocal_94=30;
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
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=10;
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
var uLocal_296=10;
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
var uLocal_367=20;
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
var uLocal_468=20;
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
var uLocal_569=30;
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
var uLocal_750=5;
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
var uLocal_781=7;
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
var uLocal_829=0;
var uLocal_830=0;
var uLocal_831=5;
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
var uLocal_857=3;
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
var uLocal_871=0;
var uLocal_872=0;
var uLocal_873=22;
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
var uLocal_1001=0;
var uLocal_1002=0;
var uLocal_1003=10;
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
var uLocal_1052=0;
var uLocal_1053=0;
var uLocal_1054=5;
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
var uLocal_1078=0;
var uLocal_1079=0;
var uLocal_1080=5;
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
var uLocal_1107=0;
var uLocal_1108=0;
struct<8> Local_1109[2];
var uLocal_1110=0;
var uLocal_1111=3;
var uLocal_1112=0;
var uLocal_1113=0;
var uLocal_1114=0;
var uLocal_1115=0;
var uLocal_1116=0;
var uLocal_1117=1092616192;
var uLocal_1118=1101004800;
var uLocal_1119=0;
var uLocal_1120=0;
var uLocal_1121=0;
var uLocal_1122=0;
var uLocal_1123=0;
var uLocal_1124=0;
var uLocal_1125=0;
var uLocal_1126=0;
var uLocal_1127=3;
var uLocal_1128=0;
var uLocal_1129=0;
var uLocal_1130=0;
var uLocal_1131=0;
var uLocal_1132=0;
var uLocal_1133=0;
var uLocal_1134=0;
var uLocal_1135=16;
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
var uLocal_1300=0;
var uLocal_1301=0;
var uLocal_1302=-1;
var uLocal_1303=0;
var uLocal_1304=0;
var uLocal_1305=0;
var uLocal_1306=0;
var uLocal_1307=0;
var uLocal_1308=0;
var uLocal_1309=1000;
var uLocal_1310=1000;
var uLocal_1311=0;
int iLocal_1312=0;
var uLocal_1313=0;
int iLocal_1314=0;
struct<3> Local_1315={
0, 0, 0 
};
var uLocal_1316=0;
var uLocal_1317=0;
var uLocal_1318=0;
var uLocal_1319=0;
var uLocal_1320=0;
var uLocal_1321=0;
var uLocal_1322=0;
int iLocal_1323=0;
var uLocal_1324=0;
struct<2> Local_1325={
0, 0 
};
int iLocal_1326=0;
var uLocal_1327=0;
struct<2> Local_1328[3];
int iLocal_1329=0;
int iLocal_1330=0;
int iLocal_1331=0;
int iLocal_1332=0;
float fLocal_1333=0f;
int iLocal_1334=0;
int iLocal_1335=0;
int iLocal_1336=0;
int iLocal_1337=0;
int iLocal_1338=0;
char cLocal_1339[24]="";
var uLocal_1340=0;
var uLocal_1341=0;
var uLocal_1342=0;
int iLocal_1343=0;
int iLocal_1344=0;
int iLocal_1345=0;
int iLocal_1346=0;
int iLocal_1347=0;
int iLocal_1348=0;
int iLocal_1349=0;
bool bLocal_1350=0;
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
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_35=3;
StringCopy(&cLocal_79, "JHP2ADS", 16);
iLocal_82=joaat("s_m_m_armoured_01");
iLocal_83=joaat("boxville3");
iLocal_84=joaat("prop_idol_case_02");
iLocal_85=joaat("prop_yell_plastic_target");
Local_86={
0f, 0.175f, 0f 
};
Local_87={
0f, -3.6f, 0f 
};
iLocal_88=0;
fLocal_1333=0f;
iLocal_1348=-1;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_324(5);
}
MISC::SET_MISSION_FLAG(1);
func_303();
while (true){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_JewelStoreJobPrep2A", 0);
if(bLocal_93){
func_301();
}
func_299(&uLocal_94);
func_209();
func_207();
if(!bLocal_91){
func_203();
func_202(&Local_1109);
func_1();
}
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
wait(0);
}}


void func_1(){
switch (iLocal_88){
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
if(!Global_63364){
Global_63364=iParam1;
}
if(bParam0){
if((func_6(0) && Global_78805.f_1==1) && func_5(Global_78805)){
}else{
Global_63362=1;
}}
if(Global_113648.f_9087 || func_6(0)){
iVar0=func_4();
iVar1=Global_91433[iVar0 /*5*/];
uVar2=Global_78828.f_109[iVar1 /*4*/];
if(iVar0==-1){
if(Global_113648.f_9087){
}
return;
}
if(MISC::IS_BIT_SET(Global_91433[iVar0 /*5*/].f_1, 4)){
return;
}
if(MISC::IS_BIT_SET(Global_91433[iVar0 /*5*/].f_1, 5)){
return;
}
MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 4);
MISC::SET_BIT(&Global_78807, true);
Global_78823=uVar2;
Global_78824=MISC::GET_GAME_TIMER();
}}

int func_4(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 7){
if(MISC::IS_BIT_SET(Global_91433[iVar0 /*5*/].f_1, 2)){
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
return MISC::IS_BIT_SET(Global_78807, 0);
}

int func_7(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


void func_8(bool bParam0){
int iVar0;
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), 0);
PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 0);
if(func_21()){
func_13(0);
}
iLocal_1335=0;
Global_75803=0;
if(bParam0){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
Global_75803=0;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1323)){
if(bParam0){
VEHICLE::DELETE_VEHICLE(&iLocal_1323);
}else{
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1323);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0)){
if(bParam0){
PED::DELETE_PED(&Local_1315);
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1315);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0)){
if(bParam0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
VEHICLE::DELETE_VEHICLE(&Local_1325);
}else{
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1325);
}}
iVar0=0;
while (iVar0 < Local_1328.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_1328[iVar0 /*2*/])){
if(bParam0){
OBJECT::DELETE_OBJECT(&(Local_1328[iVar0 /*2*/]));
}else{
if(ENTITY::IS_ENTITY_ATTACHED(Local_1328[iVar0 /*2*/])){
ENTITY::DETACH_ENTITY(Local_1328[iVar0 /*2*/], 1, 1);
}
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1328[iVar0 /*2*/]));
}}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1329)){
if(bParam0){
OBJECT::DELETE_OBJECT(&iLocal_1329);
}else{
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_1329)){
ENTITY::DETACH_ENTITY(iLocal_1329, 1, 1);
}
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1329);
}}
if(iLocal_1330 !=0){
PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1330, 0);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
}}
func_11(&uLocal_1300, 0, 0);
func_10();
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
}
func_9(6, 0);
}


void func_9(bool bParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_32412, iParam0);
}else{
MISC::CLEAR_BIT(&Global_32412, bParam0);
}}


void func_10(){
Global_96536=0;
}


void func_11(var uParam0, int iParam1, int iParam2){
char* sVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_2793046.f_4690, 26)){
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
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_19(0)){
func_14(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_14(int iParam0){
if(func_18()){
return;
}
if(Global_20584){
if(func_17()){
func_16(1, 1);
}else{
func_16(0, 0);
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
if(!func_15()){
Global_20383.f_1=3;
}}

int func_15(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_16(bool bParam0, bool bParam1){
if(bParam0){
if(func_19(0)){
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


bool func_17(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_18(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_19(int iParam0){
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


void func_20(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}

int func_21(){
if(Global_20383.f_1==1){
return 1;
}
return 0;
}


void func_22(int iParam0){
if(iParam0==2){}else{
iLocal_89=0;
iLocal_90=0;
iLocal_88=iParam0;
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
if(!iLocal_90){
if(func_201(Local_1325.f_0)){
if(HUD::GET_BLIP_FROM_ENTITY(Local_1325.f_0) !=0){
Local_1325.f_1=HUD::GET_BLIP_FROM_ENTITY(Local_1325.f_0);
}else{
Local_1325.f_1=func_200(Local_1325.f_0, 0, 0);
}
func_199("JHP2A_STEAL", 7500, 1);
func_198("JHP2A_HLP2", 15000);
}elseif(HUD::GET_BLIP_FROM_ENTITY(Local_1325.f_0) !=0){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
iVar3=HUD::GET_BLIP_FROM_ENTITY(Local_1325.f_0);
HUD::REMOVE_BLIP(&iVar3);
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}
AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_START");
func_138(0f, 0f, 0f, 0f, 1, func_193());
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
iLocal_1343=0;
iLocal_90=1;
bLocal_1350=true;
iLocal_89=1;
}
if(iLocal_90){
func_137();
switch (iLocal_89){
case 1:
if((((((iLocal_1312==0 && ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)) && ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0)) && !PED::IS_PED_INJURED(Local_1315.f_0)) && PED::IS_PED_IN_VEHICLE(Local_1315.f_0, Local_1325.f_0, 0)) && func_134(&(Local_1109[0 /*8*/]))){
func_106(&uLocal_1300, Local_1325.f_0, 0, 0, 1, 1, 1);
}else{
func_11(&uLocal_1300, 0, 0);
}
if(iLocal_1312==3 || iLocal_1312==2){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
func_103(&uLocal_1110, 1, 0);
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_12("JHP2A_HLP2")){
HUD::CLEAR_HELP(1);
}
if(!iLocal_1343){
func_199("JHP2A_TAKEBZ", 7500, 1);
}
iLocal_89=2;
}elseif((ENTITY::DOES_ENTITY_EXIST(iLocal_1326) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1326, 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1326, Local_1325.f_0)){
if(HUD::DOES_BLIP_EXIST(Local_1325.f_1)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Local_1325.f_1));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
func_102(705, 0);
}
func_101(&uLocal_1110, Var0, 0.1f, 0.1f, 0.1f, 1, iLocal_1326, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1325.f_0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0)){
VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1326, 5f, -1, 0);
iLocal_89=101;
}}elseif(iLocal_1312==1){
func_103(&uLocal_1110, 1, 0);
if(!HUD::DOES_BLIP_EXIST(Local_1328[0 /*2*/].f_1)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
Local_1328[0 /*2*/].f_1=func_100(Local_1328[0 /*2*/]);
func_199("JHP2A_TAKEBZ", 7500, 1);
iLocal_1343=1;
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1325.f_0, 0);
}}elseif(iLocal_1312==0){
if(HUD::DOES_BLIP_EXIST(Local_1325.f_1)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Local_1325.f_1));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
func_102(705, 0);
}
if(func_98(&uLocal_1110, Var0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1325.f_0, "JHP2A_RTNVAN", "", "", PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 0), 0, 1, -1)){
iLocal_89=101;
}
if(HUD::DOES_BLIP_EXIST(uLocal_1110) && HUD::DOES_BLIP_HAVE_GPS_ROUTE(uLocal_1110)){
HUD::SET_BLIP_ROUTE(uLocal_1110, 0);
}}
break;
case 101:
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 0)){
iVar4=Local_1325.f_0;
}elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_1326) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1326, Local_1325.f_0)){
iVar4=iLocal_1326;
}
if(func_96(iVar4, 1093140480, 1, 1056964608, 0, 1, 0)){
if(func_7(87)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
iLocal_89=1000;
}else{
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
iLocal_89++;
}}
break;
case 102:
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
HUD::CLEAR_PRINTS();
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1325.f_0, 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1325.f_0, 1);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1326)){
VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1326, 5f, 1, 0);
}
func_95(0, -1);
if(ENTITY::DOES_ENTITY_EXIST(Local_1328[0 /*2*/])){
OBJECT::DELETE_OBJECT(&(Local_1328[0 /*2*/]));
}
if(ENTITY::DOES_ENTITY_EXIST(Local_1328[1 /*2*/])){
OBJECT::DELETE_OBJECT(&(Local_1328[1 /*2*/]));
}
if(ENTITY::DOES_ENTITY_EXIST(Local_1328[2 /*2*/])){
OBJECT::DELETE_OBJECT(&(Local_1328[2 /*2*/]));
}
return 1;
}
break;
case 2:
if(!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
iVar2=0;
while (iVar2 < Local_1328.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_1328[iVar2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1328[iVar2 /*2*/])){
if(HUD::DOES_BLIP_EXIST(Local_1325.f_1)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
HUD::REMOVE_BLIP(&(Local_1325.f_1));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
}
if(!HUD::DOES_BLIP_EXIST(Local_1328[iVar2 /*2*/].f_1)){
Local_1328[iVar2 /*2*/].f_1=func_100(Local_1328[iVar2 /*2*/]);
}
}
iVar2++;
}
iVar2=0;
while (iVar2 < Local_1328.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_1328[iVar2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1328[iVar2 /*2*/])){
if(!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
bVar5=func_94(Local_1328[iVar2 /*2*/]);
if((bVar5 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, 0f, -3f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, 0f, -4.5f, 1f), 1.68f, 0, 1, 1)) || (!bVar5 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1328[iVar2 /*2*/], 1), 0.75f, 0.75f, 4f, 0, 0, 1))){
WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 1, 0, 0);
OBJECT::DELETE_OBJECT(&(Local_1328[iVar2 /*2*/]));
HUD::CLEAR_PRINTS();
AUDIO::PLAY_SOUND_FRONTEND(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
}}
}
iVar2++;
}}else{
func_102(705, 0);
iVar2=0;
while (iVar2 < Local_1328.f_0){
if(HUD::DOES_BLIP_EXIST(Local_1328[iVar2 /*2*/].f_1)){
HUD::REMOVE_BLIP(&(Local_1328[iVar2 /*2*/].f_1));
}
iVar2++;
}
func_48(&uLocal_1110, Var1, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, 1);
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, 0, 1, 0)){
iVar8=1;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, 1, 0)){
bVar7=true;
}
if(bVar7 || ((iVar8 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && bLocal_1350)){
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
func_103(&uLocal_1110, 1, 0);
if(func_7(87)){
if(func_21()){
func_13(0);
}
iLocal_89=2000;
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
bLocal_1350=PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
}
break;
case 1000:
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1325.f_0, 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1325.f_0, 1);
func_45(1);
func_44(1, 0);
if(func_42()){
if(func_26(&uLocal_1135, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
iLocal_89++;
}}
break;
case 1001:
func_44(1, 0);
if(func_25()){
iLocal_89++;
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
Global_75803=1;
func_45(1);
func_44(1, 0);
iLocal_89++;
break;
case 2001:
func_44(1, 0);
if(func_42()){
if(func_26(&uLocal_1135, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0)){
iLocal_89++;
}}
break;
case 2002:
func_44(1, 0);
if(func_25()){
iLocal_89++;
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
if(ENTITY::DOES_ENTITY_EXIST(Global_98050[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(Global_98050[iVar0], 0)){
ENTITY::SET_ENTITY_PROOFS(Global_98050[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Global_98050[iVar0], 0);
}}
iVar0++;
}
if((Global_43257 !=0 && Global_43257 !=3) && Global_43257 !=2){
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}}

int func_25(){
if(Global_20383.f_1==10 || Global_20383.f_1==9){
return 1;
}
return 0;
}


bool func_26(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_41(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
return func_27(sParam3, iParam4, bParam8);
}

int func_27(char* sParam0, int iParam1, bool bParam2){
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
Global_21801={
Global_21795 
};
func_38();
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
func_36();
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
if(func_15()){
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
func_34();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_33();
func_28();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
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
if(Global_21731){
MemCopy(&(Global_1977511.f_1),{
Global_21344
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}}

int func_29(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_32()){
return 0;
}
if(func_30(PLAYER::PLAYER_ID())){
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


bool func_30(int iParam0){
return func_31(iParam0, 20);
}


var func__31(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_32(){
return -1;
}


void func_33(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_34(){
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

int func_35(){
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


void func_36(){
if(func_37(14)){
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
Global_20383=func_193();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


bool func_37(int iParam0){
return Global_43257==iParam0;
}


void func_38(){
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


bool func_39(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_40(){
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


void func_41(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
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
func_199(sParam1, 7500, 1);
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
if(Global_22736==1){
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
if(ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0)){
return 0;
}
Var0={
MISC::GET_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, Local_86), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, Local_87), 0) 
};
if(vdist2(Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, Local_86)) <=vdist2(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, Local_87), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, Local_86))){
return 1;
}
return 0;
}


void func_95(bool bParam0, int iParam1){
int iVar0;
if(Global_63370){}
Global_63370=0;
if(bParam0){
Global_63371=1;
}
iVar0=0;
if(iParam1==-1){
iVar0=0;
while (iVar0 < Global_75457){
if(Global_63587[Global_75458[iVar0 /*9*/] /*13*/]==4){
Global_75458[iVar0 /*9*/].f_5=0;
return;
}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < Global_75457){
if(Global_75458[iVar0 /*9*/] > 0){
if(Global_75458[iVar0 /*9*/]==iParam1){
Global_75458[iVar0 /*9*/].f_5=0;
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
Global_63372=iParam0;
if(!Global_63370){
Global_63370=1;
}
if(bParam1){
iVar0=0;
while (iVar0 < Global_75457){
if(Global_75458[iVar0 /*9*/]==iParam0){
Global_75458[iVar0 /*9*/].f_1=0;
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
func_198(iVar0, -1);
uParam0->f_3=iVar0;
if(MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0)){
func_112(1);
}}
}}}}elseif(func_113(iVar0)){
if(MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)){
if(((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6){
if(!func_12(iVar0)){
func_198(iVar0, -1);
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
switch (Global_43257){
case 0:
case 3:
if(bParam0){
Global_113648.f_10051.f_100++;
}
return Global_113648.f_10051.f_100;
break;
case 4:
if(bParam0){
Global_113648.f_10051.f_101++;
}
return Global_113648.f_10051.f_101;
break;
case 5:
case 15:
if(bParam0){
Global_113648.f_10051.f_102++;
}
return Global_113648.f_10051.f_102;
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
switch (Global_43257){
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
if(Global_75693){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0){
return 0;
}
if(Global_60543){
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
if((func_121() || func_120(Global_4718592.f_166301)) || func_119()){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar1=func_118(PLAYER::PLAYER_PED_ID(), 0);
if(((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("apc") && iVar1 !=-1)) || (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("akula") && iVar1 !=-1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("riot2") && iVar1==0) && func_117(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) !=-1)){
return 0;
}}}
if(Global_1962010){
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
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}elseif((Global_1575060 && iParam0==PLAYER::PLAYER_ID()) && func_116(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
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
if(iVar0==Global_2672505.f_3){
return Global_2672505.f_2;
}elseif(Global_2657589[iVar0 /*466*/] !=4){
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
return Global_2683864.f_19;
}


bool func_120(int iParam0){
return iParam0==51;
}


var func__121(){
return Global_2683864.f_18;
}


bool func_122(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}


void func_123(var uParam0, int iParam1, struct<3> Param2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(Global_1581968==1){
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
MISC::SET_BIT(&Global_8254, 4);
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
if(iLocal_1312==0 || iLocal_1312==1){
if(((ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0) || (ENTITY::DOES_ENTITY_EXIST(Local_1328[0 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1328[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1328[1 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1328[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1328[2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1328[2 /*2*/]))){
iLocal_1312=2;
}}
if(iLocal_1312==2){
if((((!ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)) || (ENTITY::DOES_ENTITY_EXIST(Local_1328[0 /*2*/]) && !func_94(Local_1328[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1328[1 /*2*/]) && !func_94(Local_1328[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1328[2 /*2*/]) && !func_94(Local_1328[2 /*2*/]))){
iLocal_1312=3;
}}
if(iLocal_1312==0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("towtruck2")){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, Local_1325.f_0)){
iLocal_1326=iVar0;
}}}}}
if(iLocal_1312==0){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)){
iLocal_1312=1;
}}
if(iLocal_1312==1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 1)){
func_9(6, 1);
}else{
func_9(6, 0);
}}


void func_138(struct<3> Param0, float fParam1, int iParam2, int iParam3){
struct<3> Var0;
var uVar1;
if(ENTITY::DOES_ENTITY_EXIST(Global_104212.f_4)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104212.f_4, 0)){
if(func_192(24) !=Global_104212.f_4){
if(iParam2==1){
if(func_189(ENTITY::GET_ENTITY_COORDS(Global_104212.f_4, 1), iParam3, &Var0, &uVar1)){
Param0={
Var0 
};
fParam1=uVar1;
}}
func_139(Global_104212.f_4, Param0, fParam1, 24, 0);
}}}}


void func_139(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4){
struct<60> Var0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(iParam3 !=24 && iParam3 !=25){
return;
}
if(iParam3==24){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[25], 0)){
if(Global_77348.f_484[25]==iParam0){
return;
}}}
if(!bParam4){
if((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tourbus")){
return;
}}
func_188(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_183(iParam0, &Var0);
if(func_126(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
uParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78336=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_176(iParam3, &Var0, Param1, uParam2, func_182(iParam0));
func_140(iParam3, iParam0, 0);
}}


void func_140(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_172(&(Global_77348.f_555[0 /*21*/]), iParam0)){
return;
}
if(!MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10)){
if(Global_77348.f_555[0 /*21*/].f_4 !=ENTITY::GET_ENTITY_MODEL(iParam1)){
return;
}}
if(Global_78255 !=-1 && Global_78255 !=iParam0){
return;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
}
if(iParam0==24){
Global_113648.f_32751.f_4801=func_161();
}
if(iParam1 !=Global_77348.f_139[iParam0]){
if(iParam0==24){
iVar0=func_192(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_141(iVar0, 145);
}}
Global_78254=iParam1;
Global_78255=iParam0;
Global_78256=iParam2;
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
func_183(iParam0, &(Global_113648.f_32751.f_5510));
}

int func_142(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_159(iParam0, 0, 0)) || func_159(iParam0, 1, 0)) || func_159(iParam0, 2, 0)) || func_182(iParam0) !=145) || func_158(iParam0)) || func_157(iParam0)) || func_156(iParam0)) || func_155(iParam0)) || !func_143(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_157(iParam0)){
}
if(func_157(iParam0)){
}
if(func_159(iParam0, 0, 0)){
}
if(func_159(iParam0, 1, 0)){
}
if(func_159(iParam0, 2, 0)){
}
if(func_182(iParam0) !=145){
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
if(!func_154()){
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
if((((!func_153() && !func_152()) && !func_151()) && !func_150()) && !func_154()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_149() || MISC::IS_PC_VERSION()) || func_148()){
}elseif(!func_151()){
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


var func__148(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__149(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_150(){
return 0;
}

int func_151(){
return 1;
}

int func_152(){
return 1;
}

int func_153(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_154(){
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

int func_155(int iParam0){
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

int func_156(int iParam0){
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

int func_157(int iParam0){
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

int func_158(int iParam0){
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

int func_159(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_160(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113648.f_7231[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_160(int iParam0, int iParam1, char* sParam2, var uParam3){
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


var func__161(){
var uVar0;
func_171(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_170(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_169(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_164(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_163(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_162(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_162(var uParam0, int iParam1){
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


void func_163(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_164(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_168(*uParam0);
iVar1=func_166(*uParam0);
if(iParam1 < 1 || iParam1 > func_165(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_165(int iParam0, int iParam1){
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


var func__166(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_167(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_167(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_168(var uParam0){
return uParam0 & 15;
}


void func_169(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_170(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_171(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_172(var uParam0, int iParam1){
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
uParam0->f_4=func_173(0, 1);
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
uParam0->f_4=func_173(0, 1);
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
uParam0->f_4=func_173(1, 1);
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
uParam0->f_4=func_173(1, 2);
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
uParam0->f_4=func_173(1, 1);
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
uParam0->f_4=func_173(1, 2);
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
uParam0->f_4=func_173(2, 1);
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
uParam0->f_4=func_173(2, 1);
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
uParam0->f_4=func_173(2, 1);
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
if(func_154()){
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
if(func_154()){
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
if(!func_126(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_126(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_126(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_173(int iParam0, int iParam1){
struct<82> Var0;
if(func_175(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_174(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_174(int iParam0, var uParam1, int iParam2){
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


bool func_175(int iParam0){
return iParam0 < 3;
}


void func_176(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4){
if(func_172(&(Global_77348.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10)){
func_181(iParam0);
func_180(uParam1, &(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]));
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 11)){
Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/]={
Param2 
};
Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14]=uParam3;
}else{
Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/]={
0f, 0f, 0f 
};
Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14]=-1f;
}
Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14]=iParam4 + 1;
func_177(iParam0, 1);
}}}


void func_177(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_179(iParam0, 0)){
func_178(iParam0, 1, 0);
func_178(iParam0, 2, 0);
func_178(iParam0, 3, 0);
func_178(iParam0, 4, 0);
func_178(iParam0, 0, 1);
Global_77348[iParam0]=1;
}}else{
func_178(iParam0, 0, 0);
}}


void func_178(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}}

int func_179(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}


void func_180(var uParam0, var uParam1){
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


void func_181(int iParam0){
if(iParam0==-1){
return;
}
if(func_172(&(Global_77348.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77348.f_139[iParam0]));
Global_77348.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13)){
func_177(iParam0, 0);
}}}

int func_182(int iParam0){
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


void func_183(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_187(uParam1);
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
if(uParam1->f_65==-1 && !func_186(uParam1->f_66)){
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
func_185(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_184(iVar0 + 1));
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

int func_184(int iParam0){
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

int func_185(int iParam0, var uParam1, var uParam2){
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

int func_186(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_187(var uParam0){
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


void func_188(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_181(iParam0);
func_177(iParam0, 0);
}

int func_189(struct<3> Param0, int iParam1, var uParam2, var uParam3){
int iVar0;
iVar0=func_190(Param0, iParam1, 1);
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

int func_190(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=10;
iVar0=0;
while (iVar0 <=(10 - 1)){
if(Global_95719[iVar0 /*10*/].f_7 !=263){
if(Global_95719[iVar0 /*10*/].f_9==iParam1 || iParam1==145){
if(func_191(iVar0) || iParam2==0){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95719[iVar0 /*10*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}}
iVar0++;
}
return iVar3;
}


var func__191(int iParam0){
return MISC::IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

int func_192(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77348.f_139[iParam0];
}

int func_193(){
func_194();
return Global_113648.f_2365.f_539.f_4321;
}


void func_194(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_196(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_195(PLAYER::PLAYER_PED_ID());
if(func_175(iVar0) && (!func_37(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_175(Global_113648.f_2365.f_539.f_4321)){
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

int func_195(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_196(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_196(int iParam0){
if(func_175(iParam0)){
return func_197(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__197(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_198(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_199(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_200(int iParam0, bool bParam1, bool bParam2){
return func_51(iParam0, !bParam1, bParam2);
}

int func_201(int iParam0){
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


void func_202(var uParam0){
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


void func_203(){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!iLocal_1349){
func_206(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
func_205(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
iLocal_1349=1;
}}elseif(iLocal_1349){
func_205(0, -1);
func_206(0, -1);
iLocal_1349=0;
}
if(!iLocal_1347){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 1)){
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
iLocal_1347=1;
}elseif(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
iLocal_1347=1;
}}}
if(iLocal_88==0){
switch (iLocal_1312){
case 0:
if((ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0) && !PED::IS_PED_INJURED(Local_1315.f_0)) && func_134(&(Local_1109[0 /*8*/]))){
if(Local_1109[0 /*8*/].f_1==1){
if(func_204(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 1) > 500f){
func_324(1);
}}elseif(Local_1109[0 /*8*/].f_1==4){
if(func_204(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 1) > 250f){
func_324(1);
}}elseif(func_204(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 1) > 250f){
func_324(2);
}}elseif(func_204(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 1) > 250f){
func_324(2);
}
break;
case 1:
if(func_204(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 1) > 250f){
func_324(2);
}
break;
case 3:
case 2:
if(!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
if(((((ENTITY::DOES_ENTITY_EXIST(Local_1328[0 /*2*/]) && func_204(PLAYER::PLAYER_PED_ID(), Local_1328[0 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1328[1 /*2*/])) && func_204(PLAYER::PLAYER_PED_ID(), Local_1328[1 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1328[2 /*2*/])) && func_204(PLAYER::PLAYER_PED_ID(), Local_1328[2 /*2*/], 1) > 250f){
func_324(3);
}}
break;
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0)){
if((ENTITY::IS_ENTITY_IN_WATER(Local_1325.f_0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
func_324(4);
}}}


float func_204(int iParam0, int iParam1, int iParam2){
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


void func_205(int iParam0, int iParam1){
Global_63373=iParam0;
Global_63374=iParam1;
}


void func_206(int iParam0, int iParam1){
int iVar0;
Global_63375=iParam0;
iVar0=0;
while (iVar0 < Global_75457){
if(iParam1==-1 || Global_75458[iVar0 /*9*/]==iParam1){
if(Global_75458[iVar0 /*9*/].f_6 !=iParam0){
Global_75458[iVar0 /*9*/].f_6=iParam0;
Global_75458[iVar0 /*9*/].f_7=1;
Global_75458[iVar0 /*9*/].f_8=0;
}}
iVar0++;
}}


void func_207(){
if(ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(Local_1315.f_0, 0)){
func_208(Local_1315.f_0, &(Local_1315.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0)){
if(((!func_201(Local_1325.f_0) && ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0)) && iLocal_1344) && func_204(Local_1325.f_0, PLAYER::PLAYER_PED_ID(), 1) > 200f){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1325);
}}}

int func_208(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12){
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


void func_209(){
struct<3> Var0;
var uVar1;
if(bLocal_91==1){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(1000);
}}else{
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::STOP_CUTSCENE(0);
CUTSCENE::REMOVE_CUTSCENE();
}
iLocal_88=iLocal_92;
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
HUD::CLEAR_PRINTS();
HUD::CLEAR_HELP(1);
func_8(1);
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::REMOVE_CUTSCENE();
}
if(!func_298()){
func_297(iLocal_88, &Var0, &uVar1);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar1);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
func_295(&uLocal_94, Var0, 50f, 0);
}
func_294(&uLocal_94);
switch (iLocal_88){
case 0:
func_293(&uLocal_94, iLocal_82);
func_293(&uLocal_94, iLocal_83);
func_293(&uLocal_94, iLocal_84);
func_292(&uLocal_94, &Global_97543);
break;
case 1:
func_293(&uLocal_94, joaat("burrito2"));
break;
}
while (!func_291(&uLocal_94)){
wait(0);
func_207();
}
switch (iLocal_88){
case 0:
while (!func_284(0)){
wait(0);
}
if(MISC::ARE_STRINGS_EQUAL(&Global_97543, "jhp2a_main")){
while (!func_213(&iLocal_1323, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1)){
wait(0);
MISC::CLEAR_AREA_OF_VEHICLES(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, 0, 0, 0);
}}else{
while (!func_213(&iLocal_1323, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1)){
wait(0);
MISC::CLEAR_AREA_OF_VEHICLES(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, 0, 0, 0);
}}
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1323, 0);
VEHICLE::SET_VEHICLE_EXTRA(iLocal_1323, 1, false);
VEHICLE::SET_VEHICLE_EXTRA(iLocal_1323, 2, true);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1323, 1084227584);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1323, 1, 1, 0);
if(func_298()){
func_210(iLocal_1323, -1, 1);
}else{
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1323, -1);
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
break;
case 1:
if(!func_7(87)){
Local_1325.f_0=VEHICLE::CREATE_VEHICLE(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1, 0);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1325.f_0, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1325.f_0, 1084227584);
}
if(func_298()){
func_210(0, -1, 1);
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
bLocal_91=false;
}}}


void func_210(int iParam0, int iParam1, int iParam2){
if(func_212() && func_298()){
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
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}}
GRAPHICS::ANIMPOSTFX_STOP_ALL();
func_211(0);
}}


void func_211(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100681.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100681.f_20), 13);
}}

int func_212(){
if(Global_100681==10 || Global_100681==9){
return 1;
}
return 0;
}

int func_213(int iParam0, struct<3> Param1, float fParam2, bool bParam3){
struct<67> Var0;
Var0.f_9=49;
Var0.f_59=2;
if(func_212()){
if(func_283()){
func_180(&(Global_107196.f_2890.f_12), &Var0);
}}elseif(func_281()){
func_180(&(Global_104212.f_2890.f_12), &Var0);
}
if(Var0.f_66 !=0){
if(!func_280(0, &Var0)){
if(VEHICLE::IS_THIS_MODEL_A_CAR(Var0.f_66) || VEHICLE::IS_THIS_MODEL_A_BIKE(Var0.f_66)){
STREAMING::REQUEST_MODEL(Var0.f_66);
if(STREAMING::HAS_MODEL_LOADED(Var0.f_66)){
*iParam0=VEHICLE::CREATE_VEHICLE(Var0.f_66, Param1, fParam2, 1, 1, 0);
func_262(*iParam0, &Var0, 0, 1);
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
if(func_214(iParam0, 0, Param1, fParam2, 1, 0)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_173(0, 0), 1);
return 1;
}}
return 0;
}
return 1;
}

int func_214(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5){
var uVar0;
var uVar1;
struct<97> Var2;
int iVar3;
int iVar4;
bool bVar5;
char cVar6[16];
int iVar7;
if(func_175(iParam1)){
Var2.f_11=12;
Var2.f_31=49;
Var2.f_81=2;
func_174(iParam1, &Var2, iParam5);
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
if(func_261(&uVar1, &uVar0)){
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
func_254(iParam0, &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_252(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
}
func_251(*iParam0, iParam1);
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
if(func_261(&uVar1, &uVar0)){
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
func_254(iParam0, &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_252(iParam0);
}}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
}
func_251(*iParam0, iParam1);
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
if(func_261(&uVar1, &uVar0)){
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
func_254(iParam0, &(Var2.f_31), &(Var2.f_81));
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
if(iParam1==1){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bagger") && !Global_113648.f_9087.f_99.f_58[118]){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
bVar5=false;
}}elseif(iParam1==2){
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("bodhi2")){
func_252(iParam0);
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
func_215(iParam1, iParam0, 0, 1);
}
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
}
if(bVar5){
func_251(*iParam0, iParam1);
}
return 1;
}}}
return 0;
}


void func_215(int iParam0, int iParam1, int iParam2, bool bParam3){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
if((func_175(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0)){
if(iParam2 > Global_113648.f_2365.f_539.f_2407){
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
if(VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >=0 && func_219(*iParam1, 0, &uVar0)){
func_185(iParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
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
Global_113648.f_20120[iParam0 /*43*/].f_31=func_218(*iParam1);
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
func_216(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113648.f_20120[iParam0 /*43*/].f_1));
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
func_216(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113648.f_20120[iParam0 /*43*/].f_2));
}}}}

int func_216(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
iVar0=0;
while (func_217(iVar0, &sVar2, &iVar1, &iVar3, &iVar4)){
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


bool func_217(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4){
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


float func_218(int iParam0){
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

int func_219(int iParam0, bool bParam1, var uParam2){
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
if((!func_249(iVar0, bParam1, uParam2) && !func_248(PLAYER::PLAYER_ID())) && !func_229(iParam0)){
return 0;
}
if(func_248(PLAYER::PLAYER_ID())){
if(func_227(iVar0)){
return 1;
}else{
return 0;
}}
bVar1=false;
if(func_226(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))){
bVar1=true;
}
if(((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_223(iParam0)) && !bVar1) && !(func_222(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_220(PLAYER::PLAYER_ID()))){
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
if((func_156(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("issi2")){
*uParam2=2;
return 0;
}}
return 1;
}

int func_220(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_221(Global_2657589[iParam0 /*466*/].f_321.f_7)==11;
}}}
return 0;
}

int func_221(int iParam0){
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

int func_222(int iParam0){
if(((iParam0==joaat("mule4") || iParam0==joaat("pounder2")) || iParam0==joaat("speedo4")) || iParam0==joaat("terbyte")){
return 1;
}
return 0;
}

int func_223(int iParam0){
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
if(func_225(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("minitank"):
case joaat("burrito2"):
return 1;
case joaat("brickade2"):
if(func_224(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("journey2"):
return 1;
break;
}
return 0;
}

int func_224(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_221(Global_2657589[iParam0 /*466*/].f_321.f_7)==26;
}}}
return 0;
}

int func_225(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_221(Global_2657589[iParam0 /*466*/].f_321.f_7)==13;
}}}
return 0;
}

int func_226(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_221(Global_2657589[iParam0 /*466*/].f_321.f_7)==7;
}}}
return 0;
}

int func_227(int iParam0){
if(iParam0==joaat("oppressor2")){
return 0;
}
if((!func_228(PLAYER::PLAYER_ID()) && iParam0 !=joaat("thruster")) && iParam0 !=joaat("avenger")){
return 0;
}
return 1;
}

int func_228(int iParam0){
if(iParam0 !=func_32()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_307, 2);
}
return 0;
}

int func_229(int iParam0){
if(func_247(PLAYER::PLAYER_ID()) || func_246(PLAYER::PLAYER_ID())){
if(func_230(iParam0)){
return 1;
}}
return 0;
}

int func_230(int iParam0){
if((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 0;
}
if(func_234(iParam0, 0)){
return 1;
}
if(func_233(PLAYER::PLAYER_ID()) && (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("thruster")))){
return 0;
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_231(iParam0)){
return 1;
}}}
return 0;
}

int func_231(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_223(iParam0)) || func_232(iVar0)){
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

int func_232(int iParam0){
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

int func_233(int iParam0){
if(iParam0==func_32()){
return 0;
}
if(func_248(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_234(int iParam0, bool bParam1){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_236(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
if(Global_2793046.f_304==iParam0){
return 1;
}elseif(func_235(iParam0) !=-1 && !bParam1){
return 1;
}}
break;
}
return 0;
}

int func_235(int iParam0){
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

int func_236(int iParam0, int iParam1){
if(iParam1==0){
if(func_245(iParam0, 0)){
return 1;
}}
switch (iParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_244();
break;
case joaat("sabregt"):
if(Global_262145.f_14734){
return func_243();
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14735){
return func_243();
}
break;
case joaat("virgo3"):
if(Global_262145.f_14733){
return func_243();
}
break;
case joaat("minivan"):
if(Global_262145.f_14736){
return func_243();
}
break;
case joaat("slamvan"):
if(Global_262145.f_14738){
return func_243();
}
break;
case joaat("sultan"):
case joaat("banshee"):
return func_242();
break;
case joaat("comet2"):
if(Global_262145.f_19141){
return func_241();
}
break;
case joaat("diablous"):
if(Global_262145.f_19143){
return func_241();
}
break;
case joaat("fcr"):
if(Global_262145.f_19147){
return func_241();
}
break;
case joaat("elegy2"):
if(Global_262145.f_19144){
return func_241();
}
break;
case joaat("nero"):
if(Global_262145.f_19151){
return func_241();
}
break;
case joaat("italigtb"):
if(Global_262145.f_19149){
return func_241();
}
break;
case joaat("specter"):
if(Global_262145.f_19154){
return func_241();
}
break;
case joaat("technical"):
if(Global_262145.f_21100){
return func_240();
}
break;
case joaat("insurgent"):
if(Global_262145.f_21101){
return func_240();
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_239();
break;
case joaat("glendale"):
if(func_239() || func_238()){
return 1;
}
break;
case joaat("impaler"):
return func_239();
break;
case joaat("issi3"):
return func_239();
break;
case joaat("gargoyle"):
return func_239();
break;
case joaat("dominator"):
return func_239();
break;
case joaat("dominator2"):
return func_239();
break;
case joaat("imperator"):
return func_239();
break;
case joaat("imperator2"):
return func_239();
break;
case joaat("imperator3"):
return func_239();
break;
case joaat("deathbike"):
return func_239();
break;
case joaat("deathbike2"):
return func_239();
break;
case joaat("deathbike3"):
return func_239();
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
return func_239();
break;
case joaat("youga2"):
if(Global_262145.f_29332){
return func_238();
}
break;
case joaat("gauntlet3"):
if(Global_262145.f_29682){
return func_238();
}
break;
case joaat("manana"):
if(Global_262145.f_29331){
return func_238();
}
break;
case joaat("peyote"):
if(Global_262145.f_29681){
return func_238();
}
break;
case joaat("yosemite"):
if(Global_262145.f_29680){
return func_238();
}
break;
}
switch (iParam0){
case joaat("tenf"):
if(Global_262145.f_33139){
return func_237();
}
break;
case joaat("weevil"):
if(Global_262145.f_33138){
return func_237();
}
break;
case joaat("brioso2"):
if(Global_262145.f_33131){
return func_237();
}
break;
case joaat("sentinel3"):
if(Global_262145.f_33140){
return func_237();
}
break;
}
return 0;
}


bool func_237(){
return DLC::IS_DLC_PRESENT(1199590110);
}


bool func_238(){
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}


bool func_239(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}


bool func_240(){
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}


bool func_241(){
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}


bool func_242(){
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}


bool func_243(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


bool func_244(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_245(int iParam0, int iParam1){
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

int func_246(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_32()){
return func_221(Global_2657589[iParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_247(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_32()){
return func_221(Global_2657589[iParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_248(int iParam0){
if(iParam0 !=func_32()){
if(func_116(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_221(Global_2657589[iParam0 /*466*/].f_321.f_7)==9;
}}}
return 0;
}

int func_249(int iParam0, bool bParam1, var uParam2){
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
if(func_226(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))){
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
if(func_250(iParam0)){
*uParam2=2;
return 0;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==joaat("insurgent") || iParam0==joaat("insurgent2")){
*uParam2=2;
}}
return 1;
}

int func_250(int iParam0){
switch (iParam0){
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("forklift"):
return 1;
break;
}
return 0;
}


void func_251(int iParam0, int iParam1){
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


void func_252(var uParam0){
if(!func_253(*uParam0)){
VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113648.f_9087.f_99.f_58[119]);
}}


bool func_253(int iParam0){
return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 5);
}

int func_254(var uParam0, var uParam1, var uParam2){
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
}elseif(func_259(*uParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_245(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) !=func_257(*uParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_257(*uParam0, ((*uParam1)[38] - 1)), false);
}
func_256(uParam0);
if(func_255(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
}
return 1;
}

int func_255(int iParam0){
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


void func_256(var uParam0){
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

int func_257(int iParam0, int iParam1){
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
iVar0=func_258(iParam0, 38) + 1;
iVar1=func_258(iParam0, 24) + 1;
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

int func_258(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(uParam0, Global_152535)) && Global_152536==iParam1){
return Global_152537;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_259(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_259(var uParam0, int iParam1, int iParam2){
if(!func_260() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_260(){
return 0;
}

int func_261(var uParam0, var uParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}elseif(Global_113648.f_20120.f_261){
*uParam0={
Global_113648.f_20120.f_267 
};
*uParam1=Global_113648.f_20120.f_271;
return 1;
}
return 0;
}


void func_262(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_273(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_184(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_184(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_184(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_184(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_184(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_184(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_184(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_184(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_184(iVar6));
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
if(func_271(uParam1->f_5) || func_271(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_270(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_269()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_186(uParam1->f_66)){
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
func_268(iParam0, uParam1->f_69);
}}else{
func_268(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_254(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_184(iVar7 + 1))){
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
if(((func_263() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
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

int func_263(){
if((((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19) && Global_4718592.f_2==20){
return 0;
}
if(func_266(7)){
if(func_265(Global_2672505.f_4.f_16) || func_264(Global_2672505.f_4.f_16)){
return 0;
}}
return 1;
}

int func_264(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}

int func_265(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_31(iParam0, 9);
}
return 0;
}


bool func_266(int iParam0){
return func_267(&(Global_2672505.f_184), iParam0);
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


void func_268(int iParam0, int iParam1){
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


bool func_269(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_270(int iParam0){
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

int func_271(int iParam0){
if(!func_260() && func_272(iParam0)){
return 1;
}
return 0;
}

int func_272(int iParam0){
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

int func_273(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_279(PLAYER::PLAYER_ID(), -1)){
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
if(func_275(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_274(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_274(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_275(int iParam0){
if(func_278(iParam0)==233){
return func_276(iParam0);
}
return -1;
}

int func_276(int iParam0){
if(func_277(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_277(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_278(int iParam0){
if(func_277(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_279(int iParam0, int iParam1){
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

int func_280(int iParam0, var uParam1){
struct<82> Var0;
if(!func_175(iParam0)){
return 0;
}
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam0 /*98*/] !=0){
if(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam0 /*98*/]==uParam1->f_66 && MISC::GET_HASH_KEY(&(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam0 /*98*/].f_27))==MISC::GET_HASH_KEY(&(uParam1->f_1))){
return 1;
}}
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam0 /*98*/] !=0){
if(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam0 /*98*/]==uParam1->f_66 && MISC::GET_HASH_KEY(&(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam0 /*98*/].f_27))==MISC::GET_HASH_KEY(&(uParam1->f_1))){
return 1;
}}
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_174(iParam0, &Var0, 1);
if(Var0.f_0 !=0){
if(Var0.f_0==uParam1->f_66 && MISC::GET_HASH_KEY(&(Var0.f_27))==MISC::GET_HASH_KEY(&(uParam1->f_1))){
return 1;
}}
func_174(iParam0, &Var0, 2);
if(Var0.f_0 !=0){
if(Var0.f_0==uParam1->f_66 && MISC::GET_HASH_KEY(&(Var0.f_27))==MISC::GET_HASH_KEY(&(uParam1->f_1))){
return 1;
}}
return 0;
}


bool func_281(){
return func_282(&(Global_104212.f_2890));
}

int func_282(var uParam0){
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


bool func_283(){
return func_282(&(Global_107196.f_2890));
}

int func_284(bool bParam0){
bool bVar0;
struct<3> Var1;
bVar0=false;
func_292(&uLocal_94, &Global_97543);
func_293(&uLocal_94, joaat("s_m_m_armoured_01"));
func_293(&uLocal_94, iLocal_84);
func_293(&uLocal_94, iLocal_85);
if((STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_armoured_01")) && STREAMING::HAS_MODEL_LOADED(iLocal_84)) && STREAMING::HAS_MODEL_LOADED(iLocal_85)){
if(bParam0){
if(!ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_97178[0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[0], 1, 1);
Local_1325.f_0=Global_97178[0];
}else{
bVar0=false;
}}
if(!ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[0], 1, 1);
Local_1315.f_0=Global_97178.f_9[0];
}else{
bVar0=false;
}}}else{
func_293(&uLocal_94, iLocal_83);
if(STREAMING::HAS_MODEL_LOADED(iLocal_83) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97543)){
if(MISC::ARE_STRINGS_EQUAL(&Global_97543, "jhp2a_main")){
TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97543, 23, &Var1);
MISC::CLEAR_AREA_OF_VEHICLES(Var1, 20f, 0, 0, 0, 0, 0, 0, 0);
Local_1325.f_0=VEHICLE::CREATE_VEHICLE(iLocal_83, Var1, 119.4988f, 1, 1, 0);
Local_1315.f_0=PED::CREATE_PED_INSIDE_VEHICLE(Local_1325.f_0, 26, iLocal_82, -1, 1, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1325.f_0, 1084227584);
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1315.f_0, Local_1325.f_0, &Global_97543, 786475, 23, 16, -1, 12f, 0, 1073741824);
}else{
TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97543, 29, &Var1);
MISC::CLEAR_AREA_OF_VEHICLES(Var1, 20f, 0, 0, 0, 0, 0, 0, 0);
Local_1325.f_0=VEHICLE::CREATE_VEHICLE(iLocal_83, Var1, 134.0011f, 1, 1, 0);
Local_1315.f_0=PED::CREATE_PED_INSIDE_VEHICLE(Local_1325.f_0, 26, iLocal_82, -1, 1, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1325.f_0, 1084227584);
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1315.f_0, Local_1325.f_0, &Global_97543, 786475, 29, 16, -1, 12f, 0, 1073741824);
}}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0)){
func_290(Local_1325.f_0, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)){
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1325.f_0, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1325.f_0, 1, 1);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1325.f_0, 1);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1325.f_0, 1);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0)){
if(!PED::IS_PED_INJURED(Local_1315.f_0)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1315.f_0, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1315.f_0, iLocal_1314);
PED::SET_PED_ACCURACY(Local_1315.f_0, 5);
PED::SET_PED_CAN_BE_TARGETTED(Local_1315.f_0, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_1315.f_0, 1, 0);
WEAPON::GIVE_WEAPON_TO_PED(Local_1315.f_0, joaat("weapon_pistol"), 15, 0, 1);
func_289(&uLocal_1135, 3, Local_1315.f_0, "JHP2A_Driver", 0, 1);
func_288(&(Local_1109[0 /*8*/]), 0, 0, 1);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0)){
func_287();
func_288(&(Local_1109[1 /*8*/]), 0, 0, 1);
func_285(&uLocal_94, joaat("boxville3"));
func_285(&uLocal_94, joaat("s_m_m_armoured_01"));
func_285(&uLocal_94, iLocal_84);
func_285(&uLocal_94, iLocal_85);
return 1;
}elseif(bVar0){
}}
return 0;
}


void func_285(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
if((*uParam0)[iVar0 /*5*/]){
if((uParam0[iVar0 /*5*/])->f_4==iParam1){
if((uParam0[iVar0 /*5*/])->f_1){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
func_286(uParam0[iVar0 /*5*/]);
return;
}else{
(uParam0[iVar0 /*5*/])->f_2=1;
uParam0->f_1012=1;
return;
}}}
iVar0++;
}}


void func_286(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=-1;
}


void func_287(){
struct<3> Var0;
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0)){
if(!ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1329)){
iLocal_1329=OBJECT::CREATE_OBJECT(iLocal_85, ENTITY::GET_ENTITY_COORDS(Local_1325.f_0, 1), 1, 1, 0);
OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1329, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_1329, Local_1325.f_0, -1, -1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1325.f_0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_1325.f_0, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
ENTITY::SET_ENTITY_VISIBLE(iLocal_1329, 0, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_1328[0 /*2*/])){
if(ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
Local_1328[0 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_84, Var0, 1, 1, 0);
}else{
Local_1328[0 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1325.f_0, 1), 1, 1, 0);
OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1328[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1328[0 /*2*/], Local_1325.f_0, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1328[0 /*2*/], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(Local_1328[1 /*2*/])){
if(ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
Local_1328[1 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_84, Var0, 1, 1, 0);
}else{
Local_1328[1 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1325.f_0, 1), 1, 1, 0);
OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1328[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1328[1 /*2*/], Local_1325.f_0, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1328[1 /*2*/], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(Local_1328[2 /*2*/])){
if(ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
Local_1328[2 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_84, Var0, 1, 1, 0);
}else{
Local_1328[2 /*2*/]=OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1325.f_0, 1), 1, 1, 0);
OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1328[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1328[2 /*2*/], Local_1325.f_0, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1, 0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1328[2 /*2*/], 1);
}}}}

int func_288(var uParam0, int iParam1, int iParam2, int iParam3){
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


void func_289(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


void func_290(var uParam0, int iParam1){
Global_100681.f_22[iParam1]=uParam0;
}

int func_291(var uParam0){
if(func_299(uParam0)){
return 1;
}
return 0;
}

int func_292(var uParam0, char* sParam1){
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

int func_293(var uParam0, int iParam1){
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


void func_294(var uParam0){
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

int func_295(var uParam0, struct<3> Param1, float fParam2, int iParam3){
if(func_296(Param1) || fParam2 <=0f){
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

int func_296(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_297(int iParam0, var uParam1, var uParam2){
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


bool func_298(){
return MISC::IS_BIT_SET(Global_100681.f_20, 13);
}

int func_299(var uParam0){
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
func_286(uParam0[iVar1 /*5*/]);
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
func_286(&(uParam0->f_273[iVar1 /*5*/]));
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
func_286(&(uParam0->f_374[iVar1 /*5*/]));
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
func_286(&(uParam0->f_656[iVar1 /*6*/]));
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
func_286(&(uParam0->f_475[iVar1 /*6*/]));
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
func_286(&(uParam0->f_202[iVar1 /*7*/]));
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
func_286(&(uParam0->f_151[iVar1 /*5*/]));
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
func_286(&(uParam0->f_737[iVar1 /*5*/]));
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
func_286(&(uParam0->f_763[iVar1 /*5*/]));
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
func_286(&(uParam0->f_687[iVar1 /*7*/]));
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
func_286(&(uParam0->f_687[iVar1 /*7*/]));
uParam0->f_687[iVar1 /*7*/].f_4="";
}
else{
bVar0=false;
}}else{
func_286(&(uParam0->f_687[iVar1 /*7*/]));
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
func_286(&(uParam0->f_909[iVar1 /*5*/]));
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
func_286(&(uParam0->f_960[iVar1 /*5*/]));
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
func_286(&(uParam0->f_779[iVar1 /*5*/]));
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
func_286(&(uParam0->f_890));
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
func_286(&(uParam0->f_894));
}else{
bVar0=false;
}}}
if(uParam0->f_898 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(!uParam0->f_898.f_1){
if(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
uParam0->f_898.f_1=1;
if(uParam0->f_1013){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
func_300(uParam0);
uParam0->f_1013=0;
}}else{
bVar0=false;
}}
if(uParam0->f_898.f_2){
STREAMING::NEW_LOAD_SCENE_STOP();
func_286(&(uParam0->f_898));
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
func_286(&(uParam0->f_986[iVar1 /*5*/]));
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


void func_300(var uParam0){
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
func_286(&(uParam0->f_898));
}}


void func_301(){
if(bLocal_93 && (func_302() || CAM::IS_SCREEN_FADED_OUT())){
func_8(1);
SCRIPT::TERMINATE_THIS_THREAD();
}}

int func_302(){
if(Global_3){
return 1;
}
if(Global_100681==7 || Global_100681==8){
return 1;
}
return 0;
}


void func_303(){
struct<3> Var0;
var uVar1;
func_310();
PED::ADD_RELATIONSHIP_GROUP("SECDRIVER", &iLocal_1314);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1314, joaat("COP"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1314, -183807561);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1314);
if(func_6(0) || func_212()){
iLocal_92=0;
if(func_212()){
if(Global_94858){
iLocal_92++;
}}
StringCopy(&Global_97543, "jhp2a_alt", 64);
if(func_212()){
func_297(iLocal_92, &Var0, &uVar1);
func_309(Var0, uVar1, 1, 0);
}
bLocal_91=true;
}else{
while (!func_284(1)){
wait(0);
func_308(&uLocal_94);
}}
func_307(&uLocal_94, "JHP2A", 0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
func_305(88);
func_289(&uLocal_1135, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
func_289(&uLocal_1135, 3, 0, "Lester", 0, 1);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), 1);
PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_armoured_01"), 1);
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"), 0)){
WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase"));
}
func_304();
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97543)){}
iLocal_1330=PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
wait(0);
}
Global_75803=1;
}


void func_304(){
Global_94859=1;
}


void func_305(int iParam0){
Global_96536=0;
switch (iParam0){
case 72:
func_306(2);
func_306(4);
break;
case 73:
func_306(0);
func_306(1);
func_306(7);
break;
case 92:
func_306(10);
func_306(9);
func_306(13);
func_306(6);
break;
case 68:
func_306(11);
break;
case 78:
func_306(14);
break;
case 79:
func_306(3);
break;
default:
break;
}}


void func_306(bool bParam0){
MISC::SET_BIT(&Global_96536, iParam0);
}

int func_307(var uParam0, char* sParam1, int iParam2){
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


void func_308(var uParam0){
func_299(uParam0);
}


void func_309(struct<3> Param0, var uParam1, int iParam2, int iParam3){
if(func_212()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::CLEAR_BIT(&(Global_100681.f_20), 2);
MISC::SET_GAME_PAUSED(1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}
Global_100677={
Param0 
};
Global_100680=uParam1;
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
func_211(1);
}}


void func_310(){
func_318(&(Local_1109[0 /*8*/]), 86735, "Van Driver Manager");
func_318(&(Local_1109[1 /*8*/]), 85382, "Cargo Manager");
}


void func_311(var uParam0){
if(!func_135(uParam0)){
if(ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0)){
func_316(Local_1328[0 /*2*/], 1);
func_316(Local_1328[1 /*2*/], 1);
func_316(Local_1328[2 /*2*/], 1);
iLocal_1344=1;
func_315(uParam0);
}else{
switch (uParam0->f_1){
case 1:
func_314(&uLocal_94, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JWL_HEIST_PREP_2A_SHOOTING_LOCK", 0, -1)){
if((MISC::GET_GAME_TIMER() - iLocal_1336) > 150){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1329, PLAYER::PLAYER_PED_ID(), 0)){
if((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1329, joaat("weapon_molotov"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1329, joaat("weapon_bzgas"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1329, joaat("weapon_knife"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1329, joaat("weapon_unarmed"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1329, joaat("weapon_hit_by_water_cannon"), 0)){
WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_1329);
}else{
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1329);
iLocal_1336=MISC::GET_GAME_TIMER();
iLocal_1335++;
if(iLocal_1335 >=3){
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lock_Destroyed", iLocal_1329, "JWL_PREP_2A_SOUNDS", 0, 0);
}
else{
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lock_Damage", iLocal_1329, "JWL_PREP_2A_SOUNDS", 0, 0);
}}}
}
else{
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1329);
}}
if(((((iLocal_1335 >=3 || ENTITY::IS_ENTITY_DEAD(iLocal_1329, 0)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1325.f_0, 2)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1325.f_0, 3)) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1325.f_0, 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1325.f_0, 3) > 0f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1329)){
OBJECT::DELETE_OBJECT(&iLocal_1329);
}
if(!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1325.f_0, 2)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1325.f_0, 2, 0, 0);
}
if(!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1325.f_0, 3)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1325.f_0, 3, 0, 0);
}
iLocal_1345=0;
iLocal_1346=0;
func_316(Local_1328[0 /*2*/], 0);
func_316(Local_1328[1 /*2*/], 0);
func_316(Local_1328[2 /*2*/], 0);
func_313(uParam0, 2, 0);
}
break;
case 2:
if(func_312(Local_1325.f_0)){
if(MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1325.f_0, 2)) > 0.5f && MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1325.f_0, 3)) > 0.5f){
func_313(uParam0, 3, 0);
}}
break;
case 3:
if(func_312(Local_1325.f_0)){
if(!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1325.f_0, 2)){
if(VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1325.f_0, 2)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1325.f_0, 2, 1, 0);
VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1325.f_0, 2, 0, 0, 1);
iLocal_1345=1;
}
}
else{
iLocal_1345=1;
}
if(!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1325.f_0, 3)){
if(VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1325.f_0, 3)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1325.f_0, 3, 1, 0);
VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1325.f_0, 3, 0, 0, 1);
iLocal_1346=1;
}
}
else{
iLocal_1346=1;
}
if(iLocal_1345 && iLocal_1346){
iLocal_1344=1;
func_313(uParam0, 4, 0);
}}
break;
}}}
if(func_135(uParam0)){}}

int func_312(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}


void func_313(var uParam0, int iParam1, int iParam2){
if(iParam2 > 0){
*uParam0=2;
uParam0->f_5=MISC::GET_GAME_TIMER();
uParam0->f_6=iParam2;
}
uParam0->f_1=iParam1;
}

int func_314(var uParam0, char* sParam1){
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


void func_315(var uParam0){
if(*uParam0 !=4){
*uParam0=4;
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_6=0;
uParam0->f_1=-1;
}}


void func_316(int iParam0, bool bParam1){
struct<3> Var0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::IS_ENTITY_ATTACHED(iParam0)){
ENTITY::DETACH_ENTITY(iParam0, 1, bParam1);
ENTITY::SET_ENTITY_COLLISION(iParam0, 1, 0);
PHYSICS::ACTIVATE_PHYSICS(iParam0);
}
if(bParam1){
Var0={
func_317(ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f), IntToFloat(-MISC::GET_RANDOM_INT_IN_RANGE(3, 6)), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f))) 
};
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 1, Var0 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.5f)), 0, 1, 1, 0);
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 5, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), 0, 1, 1, 0);
ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, Local_1325.f_0, 1);
}}}


Vector3 func__317(struct<3> Param0){
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

int func_318(var uParam0, int iParam1, char* sParam2){
if(*uParam0 !=-1){
return 0;
}
*uParam0=0;
uParam0->f_3=sParam2;
uParam0->f_7=iParam1;
return 1;
}


void func_319(var uParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
int iVar3;
float fVar4;
if(!func_135(uParam0)){
if(((!ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0) || PED::IS_PED_INJURED(Local_1315.f_0)) || (ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) && func_204(Local_1325.f_0, Local_1315.f_0, 1) > 200f)) || (!PED::IS_PED_IN_ANY_VEHICLE(Local_1315.f_0, 0) && func_204(Local_1325.f_0, Local_1315.f_0, 1) > 200f)){
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)){
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1325.f_0, 0);
}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1315);
func_315(uParam0);
}else{
if((uParam0->f_1 !=5 && uParam0->f_1 !=3) && ((!ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)) || !PED::IS_PED_IN_VEHICLE(Local_1315.f_0, Local_1325.f_0, 0))){
iLocal_1337=0;
iLocal_1338=0;
StringCopy(&cLocal_1339, "", 24);
func_313(uParam0, 5, 0);
}elseif((uParam0->f_1==1 || uParam0->f_1==2) || uParam0->f_1==4){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_1325.f_0)){
if((!iLocal_1332 && (MISC::GET_GAME_TIMER() - iLocal_1334) > 500) && fLocal_1333 >=4f){
iLocal_1332=1;
iLocal_1331++;
}}elseif(iLocal_1332){
iLocal_1334=MISC::GET_GAME_TIMER();
iLocal_1332=0;
}
Var1={
func_317(ENTITY::GET_ENTITY_COORDS(iVar0, 1) - ENTITY::GET_ENTITY_COORDS(Local_1325.f_0, 1)) 
};
Var2={
ENTITY::GET_ENTITY_VELOCITY(Local_1325.f_0) - ENTITY::GET_ENTITY_VELOCITY(iVar0) 
};
fLocal_1333=func_323(Var2, Var1);
}}
switch (uParam0->f_1){
case 1:
if((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1325.f_0, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1315.f_0, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1315.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1325.f_0)) || iLocal_1331 > 0){
iLocal_1337=0;
iLocal_1338=0;
StringCopy(&cLocal_1339, "", 24);
func_313(uParam0, 4, 0);
}else{
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)){
if((ENTITY::IS_ENTITY_STATIC(PLAYER::PLAYER_PED_ID()) || fLocal_1333 > 0.5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, 0f, 2f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1325.f_0, 0f, 10f, 2f), 4.5f, 0, 1, 0)){
if(!AUDIO::IS_HORN_ACTIVE(Local_1325.f_0)){
if(iLocal_1348==-1){
iLocal_1348=MISC::GET_GAME_TIMER();
}
elseif((MISC::GET_GAME_TIMER() - iLocal_1348) > 5000){
VEHICLE::START_VEHICLE_HORN(Local_1325.f_0, 2000, joaat("normal"), 0);
}}else{
iLocal_1348=-1;
}}
}
if(func_322(Local_1325.f_0, -993.7236f, -2418.757f, 12.9447f, 1) < 20f){
func_292(&uLocal_94, "jhp2a_airport");
}
if(!func_321(Local_1315.f_0, joaat("script_task_vehicle_follow_waypoint_recording"), 1)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1325.f_0, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, 1, 0)){
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED("jhp2a_airport")){
iLocal_1337=0;
iLocal_1338=0;
StringCopy(&cLocal_1339, "", 24);
func_313(uParam0, 2, 0);
}}else{
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1315.f_0, Local_1325.f_0, &Global_97543, 786475, -1, 24, -1, 12f, 0, 1073741824);
}
}}
break;
case 2:
if((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1325.f_0, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1315.f_0, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1315.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1325.f_0)) || iLocal_1331 > 0){
iLocal_1337=0;
iLocal_1338=0;
StringCopy(&cLocal_1339, "", 24);
func_313(uParam0, 5, 0);
}elseif(!func_321(Local_1315.f_0, joaat("script_task_vehicle_follow_waypoint_recording"), 1)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1325.f_0, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, 1, 0)){
iLocal_1337=0;
iLocal_1338=0;
StringCopy(&cLocal_1339, "", 24);
func_313(uParam0, 3, 0);
}
else{
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1315.f_0, Local_1325.f_0, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
}}
break;
case 3:
if(((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1325.f_0, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1315.f_0, PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1315.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1325.f_0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1325.f_0, 1)) || iLocal_1331 > 0){
iLocal_1337=0;
iLocal_1338=0;
StringCopy(&cLocal_1339, "", 24);
func_313(uParam0, 5, 0);
}elseif(PED::IS_PED_IN_VEHICLE(Local_1315.f_0, Local_1325.f_0, 1)){
if(!func_321(Local_1315.f_0, joaat("script_task_leave_vehicle"), 1)){
TASK::TASK_LEAVE_VEHICLE(Local_1315.f_0, Local_1325.f_0, 0);
}}else{
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1325.f_0, 2);
if(!func_321(Local_1315.f_0, joaat("script_task_perform_sequence"), 1)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_1313);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_1313);
TASK::TASK_PERFORM_SEQUENCE(Local_1315.f_0, uLocal_1313);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_1313);
}}
break;
case 4:
if(VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1325.f_0, 0, 1)){
iVar3++;
}
if(VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1325.f_0, 1, 1)){
iVar3++;
}
if(VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1325.f_0, 4, 1)){
iVar3++;
}
if(VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1325.f_0, 5, 1)){
iVar3++;
}
if(((((IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_1325.f_0)) <=0f || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1325.f_0) <=250f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1325.f_0) <=400f) || PED::IS_PED_INJURED(Local_1315.f_0)) || iVar3 >=2) || iLocal_1331 > 6){
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1325.f_0, 0)){
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1325.f_0, 0);
}
iLocal_1337=0;
iLocal_1338=0;
StringCopy(&cLocal_1339, "", 24);
func_313(uParam0, 5, 0);
}elseif(!func_321(Local_1315.f_0, joaat("script_task_vehicle_mission"), 1)){
TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_1315.f_0, Local_1325.f_0, PLAYER::PLAYER_PED_ID(), 8, 90f, 786468, 400f, 10f, 0);
}
break;
case 5:
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0)){
if(PED::IS_PED_IN_VEHICLE(Local_1315.f_0, Local_1325.f_0, 0)){
if(!func_87(Local_1325.f_0)){
if(!func_321(Local_1315.f_0, joaat("script_task_vehicle_temp_action"), 1)){
TASK::CLEAR_PED_TASKS(Local_1315.f_0);
TASK::TASK_VEHICLE_TEMP_ACTION(Local_1315.f_0, Local_1325.f_0, 5, -1);
}}elseif(!func_321(Local_1315.f_0, joaat("script_task_leave_vehicle"), 1)){
TASK::TASK_LEAVE_VEHICLE(Local_1315.f_0, Local_1325.f_0, 256);
}
}
elseif(!func_321(Local_1315.f_0, joaat("script_task_combat"), 1)){
PED::SET_PED_CAN_BE_TARGETTED(Local_1315.f_0, 1);
TASK::TASK_COMBAT_PED(Local_1315.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_1325.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_1325.f_0, 0)){
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_1325.f_0, 2, 1);
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_1325.f_0, 3, 1);
}
break;
}}
if((ENTITY::DOES_ENTITY_EXIST(Local_1315.f_0) && !PED::IS_PED_INJURED(Local_1315.f_0)) && !PED::IS_CONVERSATION_PED_DEAD(Local_1315.f_0)){
switch (uParam0->f_1){
case 4:
switch (iLocal_1337){
case 0:
if(func_42() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1315.f_0)){
if(PED::IS_PED_BEING_JACKED(Local_1315.f_0)){
func_62(Local_1315.f_0, "JACKED_GENERIC", 10);
}else{
func_62(Local_1315.f_0, "GENERIC_SHOCKED_HIGH", 10);
}
iLocal_1337++;
}
break;
case 1:
if(!PED::IS_PED_IN_VEHICLE(Local_1315.f_0, Local_1325.f_0, 0) || iLocal_1312==3){
if(!PED::IS_PED_IN_VEHICLE(Local_1315.f_0, Local_1325.f_0, 0)){
iLocal_1337=4;
}else{
iLocal_1337++;
}}elseif(func_42() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1315.f_0)){
if(func_320(&uLocal_1135, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0)){
iLocal_1337++;
}}
break;
case 2:
if(func_42() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1315.f_0)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1339)){
fVar4=vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1315.f_0, 1));
if((((((iLocal_1332 || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1315.f_0, 126)) || fVar4 < 49f) && (MISC::GET_GAME_TIMER() - iLocal_1338) > 5000) && fVar4 < 225f){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 2)==0){
StringCopy(&cLocal_1339, "GENERIC_CURSE_HIGH", 24);
}
else{
StringCopy(&cLocal_1339, "JS_ATT_M", 24);
}
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1339)){
if(MISC::ARE_STRINGS_EQUAL(&cLocal_1339, "GENERIC_CURSE_HIGH")){
func_62(Local_1315.f_0, "GENERIC_CURSE_HIGH", 10);
iLocal_1337++;
}
else{
if(func_320(&uLocal_1135, &cLocal_79, &cLocal_1339, 8, 0, 0, 0)){
iLocal_1337++;
}
iLocal_1337++;
}}}
break;
case 3:
if(!func_43() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1315.f_0)){
iLocal_1338=MISC::GET_GAME_TIMER();
StringCopy(&cLocal_1339, "", 24);
iLocal_1337=(iLocal_1337 - 1);
}
break;
}
break;
case 5:
switch (iLocal_1337){
case 0:
if(func_42() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1315.f_0)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1339)){
if((MISC::GET_GAME_TIMER() - iLocal_1338) > 5000 && vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1315.f_0, 1)) < 400f){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 2)==0){
StringCopy(&cLocal_1339, "GENERIC_INSULT_HIGH", 24);
}
else{
StringCopy(&cLocal_1339, "JS_COMB_M", 24);
}
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1339)){
if(MISC::ARE_STRINGS_EQUAL(&cLocal_1339, "GENERIC_INSULT_HIGH")){
func_62(Local_1315.f_0, "GENERIC_INSULT_HIGH", 10);
iLocal_1337++;
}
elseif(func_320(&uLocal_1135, &cLocal_79, &cLocal_1339, 8, 0, 0, 0)){
iLocal_1337++;
}}}
break;
case 1:
if(!func_43() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1315.f_0)){
iLocal_1338=MISC::GET_GAME_TIMER();
StringCopy(&cLocal_1339, "", 24);
iLocal_1337=(iLocal_1337 - 1);
}
break;
}
break;
}}}
if(func_135(uParam0)){}}


bool func_320(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_41(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_27(sParam2, iParam3, 0);
}

int func_321(int iParam0, int iParam1, bool bParam2){
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


float func_322(int iParam0, struct<3> Param1, int iParam2){
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


float func_323(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


void func_324(int iParam0){
struct<2> Var0;
char[] cVar1[8];
AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_FAIL");
if(iParam0==5){
func_336();
func_8(0);
SCRIPT::TERMINATE_THIS_THREAD();
}elseif(!bLocal_93){
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
func_334(&Var0);
}else{
func_325(&Var0, &cVar1);
}
bLocal_93=true;
}}


void func_325(char* sParam0, char* sParam1){
func_333(sParam0, sParam1);
func_326(0);
}


void func_326(int iParam0){
int iVar0;
if(Global_113648.f_9087 || func_6(0)){
iVar0=func_4();
if(!func_327(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
Global_100717=iParam0;
}}

int func_327(int iParam0){
int iVar0;
int iVar1;
func_332();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::START_FIRING_AMNESTY(5000);
}
iVar0=Global_91433[iParam0 /*5*/];
iVar1=Global_78828.f_109[iVar0 /*4*/];
func_331(iVar1, 1);
PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
func_328(&(Global_113648.f_2365.f_539), iVar1);
if(Global_94856==Global_100718){
Global_113648.f_9087.f_330[iVar1 /*6*/].f_1++;
}
if(!MISC::IS_BIT_SET(Global_91469[iVar1 /*34*/].f_15, 1)){
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
}}
Global_113648.f_9087.f_330[iVar1 /*6*/].f_2++;
Global_94856=Global_100718;
if(iParam0==-1){
if(Global_113648.f_9087){
}
return 0;
}
if(MISC::IS_BIT_SET(Global_91433[iParam0 /*5*/].f_1, 4)){
return 0;
}
if(MISC::IS_BIT_SET(Global_91433[iParam0 /*5*/].f_1, 5)){
return 0;
}
return 1;
}


void func_328(var uParam0, int iParam1){
int iVar0;
int iVar1;
struct<3> Var2;
float fVar3;
if(iParam1==94){
return;
}
iVar0=0;
while (iVar0 < 3){
iVar1=Global_113648.f_18535[iVar0];
if((((iVar1==8 || iVar1==9) || iVar1==10) || (((iVar1==11 || iVar1==34) || iVar1==72) || iVar1==73)) && !MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[0], 9)){
}else{
Var2={
0f, 0f, 0f 
};
fVar3=0f;
if(!func_330(Global_113648.f_18535[iVar0], &Var2, &fVar3)){
Global_113648.f_18535[iVar0]=318;
func_329(&(uParam0->f_2296[iVar0]));
uParam0->f_2300[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2310[iVar0]=0f;
uParam0->f_2314[iVar0]=0;
uParam0->f_2318[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2328[iVar0]=0;
Global_98071[iVar0 /*29*/]={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_9=0f;
Global_98071[iVar0 /*29*/].f_12=0f;
Global_98071[iVar0 /*29*/].f_3={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_10=0f;
Global_98071[iVar0 /*29*/].f_13=0f;
Global_98071[iVar0 /*29*/].f_6={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_11=0f;
Global_98071[iVar0 /*29*/].f_14=0f;
Global_98071[iVar0 /*29*/].f_17={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_26=0f;
Global_98071[iVar0 /*29*/].f_20={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_27=0f;
Global_98071[iVar0 /*29*/].f_23={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_28=0f;
}}
iVar0++;
}}


void func_329(var uParam0){
*uParam0=-15;
}

int func_330(int iParam0, var uParam1, float fParam2){
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
return func_330(8, uParam1, fParam2);
break;
case 10:
return func_330(8, uParam1, fParam2);
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


void func_331(int iParam0, bool bParam1){
if(bParam1){
if((iParam0 !=88 && iParam0 !=89) && iParam0 !=92){
Global_94666[iParam0 /*2*/]=1;
}}else{
Global_94666[iParam0 /*2*/]=0;
}}


void func_332(){
Global_100716=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (func_193()){
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
switch (func_193()){
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


void func_333(char* sParam0, char* sParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1) <=16){
StringCopy(&Global_78791, sParam0, 16);
StringCopy(&Global_78795, sParam1, 16);
}}}}


void func_334(char* sParam0){
func_335(sParam0);
func_326(0);
}


void func_335(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78791, sParam0, 16);
StringCopy(&Global_78795, "", 16);
if(RECORDING::IS_REPLAY_RECORDING()){
RECORDING::STOP_REPLAY_RECORDING();
}}}}


void func_336(){
int iVar0;
if(SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse")){
start_new_script("buddyDeathResponse", 1424);
}
if(Global_113648.f_9087 || func_6(0)){
if(!func_337()){
iVar0=func_4();
if(iVar0 !=-1){
if(!func_327(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
return;
}}else{
func_332();
}}}

int func_337(){
if(((Global_100681==13 || Global_100681==10) || Global_100681==11) || Global_100681==12){
return 0;
}
return 1;
}