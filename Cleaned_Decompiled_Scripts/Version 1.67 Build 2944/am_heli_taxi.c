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
var uLocal_88=-1;
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
int iLocal_112=0;
int iLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
int iLocal_116=0;
int iLocal_117=0;
int iLocal_118=0;
int iLocal_119=0;
int iLocal_120=0;
int iLocal_121[5]={
0, 0, 0, 0, 0 
};
bool bLocal_122=0;
bool bLocal_123=0;
bool bLocal_124=0;
var uLocal_125[5]={
0, 0, 0, 0, 0 
};
int iLocal_126=0;
var uLocal_127=0;
struct<10> Local_128={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<30> Local_129={
0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 
};
var uLocal_130=0;
var uLocal_131=0;
bool bLocal_132=0;
struct<3> Local_133[32];
var uLocal_134=0;
var uLocal_135=0;
int iLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
int iLocal_140=0;
int iLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=12;
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
var uLocal_842=1065353216;
int iLocal_843=0;
int iLocal_844=0;
int iLocal_845=0;
int iLocal_846=0;
int iLocal_847=0;
int iLocal_848=0;
var uLocal_849=16;
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
var uLocal_871=0;
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
var uLocal_1001=0;
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
int iLocal_1020=0;
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
int iLocal_1031=0;
var uLocal_1032=0;
var uLocal_1033=0;
var uLocal_1034=0;
var uLocal_1035=0;
var uLocal_1036=0;
var uLocal_1037=0;
var uLocal_1038=0;
var uLocal_1039=0;
bool bLocal_1040=0;
int iLocal_1041=0;
int iLocal_1042=0;
var uLocal_1043=0;
int iLocal_1044=0;
int iLocal_1045=0;
int iLocal_1046=0;
struct<3> Local_1047={
0, 0, 0 
};
struct<3> Local_1048[1];
var uLocal_1049[1]={
0 
};
var uLocal_1050[1]={
0 
};
int iLocal_1051=0;
int iLocal_1052=0;
int iLocal_1053=0;
int iLocal_1054=0;
int iLocal_1055=0;
struct<21> Local_1056={
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
iLocal_136=6;
iLocal_1031=10000;
func_524();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_520(ScriptParam_1056)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_129.f_24=8;
}
func_514(1);
}}
while (true){
func_513();
if(func_506()){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_129.f_24=8;
}}
func_514(1);
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() !=iLocal_843 && !NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_129.f_24=8;
}
func_514(1);
}
if(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()) !=Local_129.f_5){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_129.f_24=8;
}
func_514(1);
}
NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
iLocal_1054=0;
iLocal_1055=0;
switch (func_505(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if(func_504()==1){
func_503();
func_502();
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=1;
}elseif(func_504()==5){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=3;
}
break;
case 1:
func_482();
if(func_504()==1){
func_362();
}elseif(func_504()==5){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=3;
}
break;
case 3:
func_361(&(Local_129.f_25));
if(func_360(&(Local_129.f_25))){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=5;
}
break;
case 2:
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=5;
case 5:
func_514(1);
break;
}
func_359();
if(func_358()){
func_339();
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_504()){
case 0:
if(func_311()){
func_503();
Local_129.f_0=1;
}
break;
case 1:
func_292();
func_286();
func_161();
if(func_153()){
Local_129.f_0=5;
}
break;
case 4:
func_1();
break;
case 5:
break;
}}}}


void func_1(){
func_147();
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(MISC::IS_BIT_SET(uLocal_134, 6) && !MISC::IS_BIT_SET(uLocal_134, 7)){
if(!func_145(0)){
if(!func_358()){
func_143(13);
func_123(func_139(13), 6, 2, 1);
}else{
func_143(44);
func_123(func_139(44), 6, 2, 1);
}
MISC::SET_BIT(&uLocal_134, 7);
Local_129.f_0=5;
}}
if(MISC::IS_BIT_SET(uLocal_134, 5) && !MISC::IS_BIT_SET(uLocal_134, 6)){
if(func_145(0)){
MISC::SET_BIT(&uLocal_134, 6);
}}
if(!MISC::IS_BIT_SET(uLocal_134, 5)){
if(func_121(&uLocal_1016, 5000, 0)){
if(!func_358()){
func_120(&uLocal_849, 3, 0, "FM_MERRYWEATHER", 0, 1);
if(func_15(&uLocal_849, 85, "CT_AUD", "MPCT_9", 0, 0)){
MISC::SET_BIT(&uLocal_134, 5);
}}else{
func_14(1);
if(func_8(1)){
func_120(&uLocal_849, 3, 0, "EXECPA_MALE", 0, 1);
if(func_15(&uLocal_849, func_2(1), "EXCALAU", "EXCAL_HPROBM", 0, 0)){
MISC::SET_BIT(&uLocal_134, 5);
}}else{
func_120(&uLocal_849, 2, 0, "EXECPA_FEMALE", 0, 1);
if(func_15(&uLocal_849, func_2(1), "EXCALAU", "EXCAL_HPROBF", 0, 0)){
MISC::SET_BIT(&uLocal_134, 5);
}}}}}}}

int func_2(bool bParam0){
if(func_8(bParam0)){
if(bParam0 && func_4()){
func_3(22, Global_20500, 1);
return 22;
}else{
return 75;
}}
if(bParam0 && func_4()){
func_3(22, Global_20500, 1);
return 22;
}
return 74;
}


void func_3(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}

int func_4(){
int iVar0;
iVar0=func_6(PLAYER::PLAYER_ID());
if(((iVar0 !=PLAYER::PLAYER_ID() && iVar0 !=func_5()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 !=-1){
return 1;
}
return 0;
}

int func_5(){
return -1;
}

int func_6(int iParam0){
if(func_7(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_5();
}

int func_7(int iParam0){
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


bool func_8(bool bParam0){
int iVar0;
if(bParam0){
iVar0=func_6(PLAYER::PLAYER_ID());
if(func_4()){
if(func_13(iVar0)){
return 1;
}
return 0;
}}
return func_9(3225, -1) !=0;
}

int func_9(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_10(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__10(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_11(uParam1));
}

int func_11(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_12();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_12(){
return Global_1574918;
}


bool func_13(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 29);
}


void func_14(bool bParam0){
if(bParam0){
Global_1835499=1;
}else{
Global_1835499=0;
}}

int func_15(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5){
char* sVar0;
bool bVar1;
int iVar2;
if(func_118()){
return 0;
}
if(func_117()){
return 0;
}
sVar0=0;
bVar1=false;
iVar2=-99;
return func_16(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_16(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12){
int iVar0;
int iVar1;
int iVar2;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15){
return 0;
}
iVar0=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
iVar1=func_116(sParam2, sParam3);
iVar2=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
iVar2=MISC::GET_HASH_KEY(sParam7);
}
if(func_115(iVar0, iVar1, iVar2)){
return 1;
}
if(!func_110(uParam6)){
return 0;
}
if(func_107(iVar0, iVar1, iVar2)){
if(func_106()){
return 0;
}
func_105();
return func_23(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
}
if(!func_22(iParam4)){
return 0;
}
func_17(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
return 0;
}


void func_17(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6){
Global_1649067.f_40.f_1=iParam0;
Global_1649067.f_40.f_2=iParam1;
Global_1649067.f_40.f_3=iParam2;
StringCopy(&(Global_1649067.f_40.f_4), sParam3, 16);
Global_1649067.f_40.f_8=iParam4;
Global_1649067.f_40.f_9=iParam5;
Global_1649067.f_40.f_14=uParam6;
func_18(iParam4);
func_105();
Global_1649067.f_40.f_13=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}


void func_18(int iParam0){
if(func_21(iParam0)){
func_20();
return;
}
func_19();
}


void func_19(){
Global_1649067.f_40.f_10=0;
}


void func_20(){
Global_1649067.f_40.f_10=1;
}

int func_21(int iParam0){
switch (iParam0){
case 4:
case 5:
return 1;
case 0:
case 1:
case 7:
case 8:
case 2:
case 3:
return 0;
default:
}
return 0;
}


bool func_22(int iParam0){
return iParam0 > Global_1649067.f_40.f_8;
}

int func_23(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12){
struct<2> Var0;
func_104();
if(iParam6==5){
iParam6=0;
}
if(iParam5==8){
return func_101(uParam0, sParam3, sParam4);
}
if(iParam5==4){
StringCopy(&Var0, "CELL_226", 16);
return func_98(uParam0, iParam1, sParam3, sParam4, &Var0);
}
if(iParam5==1 || iParam5==7){
if(iParam6==2){
return func_101(uParam0, sParam3, sParam4);
}
return func_80(uParam0, iParam1, sParam3, sParam4, uParam7);
}
if(iParam5==5){
return func_79(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==2){
return func_67(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==3){
return func_66(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==6){
return func_24(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
}
return 0;
}

int func_24(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
func_65();
bVar0=true;
if(func_26(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8)){
func_25(120000);
return 1;
}
return 0;
}


void func_25(int iParam0){
Global_1649067.f_40.f_11=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
Global_1649067.f_40.f_12=1;
}

int func_26(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
char* sVar4;
var uVar5;
int iVar6;
bool bVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
bool bVar12;
iVar0=func_5();
iVar1=0;
if(iParam0==145){
iVar0=iParam1;
sVar2=PLAYER::GET_PLAYER_NAME(iVar0);
iVar1=func_59(iVar0);
if(iVar1==0){
if(NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649067.f_40.f_13)){
return 0;
}}}else{
sVar2="";
}
iVar3=0;
sVar4=func_58(sParam5, bParam6, &iVar3);
uVar5=func_56(iParam7, &iVar3);
iVar6=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
iVar6++;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
iVar6++;
}}
if(MISC::ARE_STRINGS_EQUAL(sVar4, " ")){
sVar4="";
}
bVar7=true;
iVar8=0;
iVar9=0;
iVar10=1;
iVar11=0;
if(bParam3){
iVar9=1;
iVar10=2;
iVar11=1;
if(MISC::IS_BIT_SET(uParam4, 1)){
iVar8=1;
}}
if(MISC::IS_BIT_SET(uParam4, 2)){
iVar10=2;
}
bVar12=false;
if(!iVar3==0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2)){
bVar12=func_55(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
}else{
bVar12=func_30(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
}
if(!bVar12){
return 0;
}
if(MISC::IS_BIT_SET(uParam4, 0)){
func_29();
}
func_65();
func_28();
func_27();
return 1;
}


void func_27(){
Global_1649067.f_57=0;
Global_1649067.f_57.f_1=0;
}


void func_28(){
Global_1649067.f_40=3;
}


void func_29(){
MISC::SET_BIT(&Global_8370, 8);
}

int func_30(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9){
int iVar0;
char* sVar1;
int iVar2;
char* sVar3;
int iVar4;
char* sVar5;
char* sVar6;
int iVar7;
iVar0=0;
sVar1="NULL";
iVar2=-99;
sVar3="NULL";
iVar4=0;
sVar5="NULL";
sVar6="NULL";
iVar7=3;
if(func_31(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_9077=iParam6;
MISC::SET_BIT(&Global_4542302, 0);
}
return 1;
}
return 0;
}

int func_31(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_48();
iVar0=0;
switch (iParam16){
case 0:
if(Global_20500==0){
iVar0=0;
}else{
iVar0=1;
}
break;
case 2:
if(Global_20500==2){
iVar0=0;
}else{
iVar0=1;
}
break;
case 1:
if(Global_20500==1){
iVar0=0;
}else{
iVar0=1;
}
break;
default:
iVar0=0;
break;
}
if(iVar0==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}}
if(Global_4542287==1){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0){
return 0;
}}
if(func_47()==0){
func_45();
return 0;
}
func_44(Global_4542286);
StringCopy(&(Global_4541037[Global_4542286 /*104*/]), sParam1, 64);
Global_4541037[Global_4542286 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_4541037[Global_4542286 /*104*/].f_24=iParam2;
}
Global_4541037[Global_4542286 /*104*/].f_25=iParam7;
Global_4541037[Global_4542286 /*104*/].f_26=uParam8;
Global_4541037[Global_4542286 /*104*/].f_29=uParam9;
Global_4541037[Global_4542286 /*104*/].f_30=uParam12;
Global_4541037[Global_4542286 /*104*/].f_31=uParam11;
Global_4541037[Global_4542286 /*104*/].f_28=0;
Global_4541037[Global_4542286 /*104*/].f_32=iParam3;
StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_33), sParam4, 64);
Global_4541037[Global_4542286 /*104*/].f_49=iParam6;
StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_50), sParam5, 64);
Global_4541037[Global_4542286 /*104*/].f_66=iParam13;
StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_83), sParam15, 64);
func_48();
switch (iParam16){
case 3:
Global_4541037[Global_4542286 /*104*/].f_99[Global_20500]=1;
break;
case 0:
Global_4541037[Global_4542286 /*104*/].f_99[0]=1;
break;
case 2:
Global_4541037[Global_4542286 /*104*/].f_99[2]=1;
break;
case 1:
Global_4541037[Global_4542286 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20500){
case 0:
func_43(0);
break;
case 1:
func_43(1);
break;
case 2:
func_43(2);
break;
case 3:
func_43(3);
break;
default:
break;
}}
if(iParam7==1){
switch (iParam16){
case 3:
Global_4542287=1;
break;
case 0:
Global_4542287=1;
break;
case 2:
Global_4542287=1;
break;
case 1:
Global_4542287=1;
break;
}}
Global_22914[Global_4542286]=0;
if(bParam10){
func_48();
if(Global_20443){
StringCopy(&Global_20489, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20500){
case 0:
StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
break;
case 2:
StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
break;
case 1:
StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
break;
default:
StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==1){
if(!func_42()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, 1);
}}}
if(!Global_20705){
if(Global_20500.f_1==6){
func_41(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_37(1);
func_41(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20480), -1082130432, -1082130432, -1082130432);
}}
if(Global_1978329 !=-1 && iParam0==Global_1978329){
bVar1=true;
}
func_32(iParam0, sParam1, bVar1, func_36(PLAYER::PLAYER_ID()));
return 1;
}


void func_32(int iParam0, char* sParam1, bool bParam2, var uParam3){
struct<14> Var0;
if(!func_33()){
return;
}
Var0.f_0=iParam0;
Var0.f_1=-1180597171;
Var0.f_2=MISC::GET_HASH_KEY(sParam1);
Var0.f_3=0;
Var0.f_4=bParam2;
Var0.f_5=uParam3;
Var0.f_6=Global_1978312.f_7;
Var0.f_7=Global_1978312.f_8;
Var0.f_8=Global_1978312.f_9;
Var0.f_9=Global_1978312.f_10;
Var0.f_10=Global_1978312.f_11;
Var0.f_11=Global_1978312.f_12;
Var0.f_12=Global_1978312.f_13;
Var0.f_13=Global_1978312.f_14;
STATS::PLAYSTATS_NPC_PHONE(&Var0);
if(bParam2){
Global_1978329=-1;
}}

int func_33(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_5()){
return 0;
}
if(func_34(PLAYER::PLAYER_ID())){
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


bool func_34(int iParam0){
return func_35(iParam0, 20);
}


var func__35(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


var func__36(int iParam0){
return Global_1853988[iParam0 /*867*/].f_205.f_6;
}


void func_37(int iParam0){
bool bVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
int iVar5;
bool bVar6;
bool bVar7;
bool bVar8;
bool bVar9;
Global_22913=0;
Global_8975=iParam0;
bVar0=false;
while (bVar0 < 9){
Global_8939[bVar0]=0;
bVar0++;
}
bVar0=false;
while (bVar0 < 9){
iVar1=0;
if(func_40(14)){
while (iVar1 < 34){
if(iParam0==Global_8377[iVar1 /*15*/].f_11){
if(bVar0==Global_8377[iVar1 /*15*/].f_4){
if(Global_8939[bVar0]==0){
Global_8903[bVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8371, 3)){
bVar2=42;
Global_20708=1;
}else{
bVar2=255;
Global_20708=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_39(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694571){
if(iVar1==14){
func_38(Global_20481, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8939[bVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8377[iVar1 /*15*/].f_11){
if(bVar0==Global_8377[iVar1 /*15*/].f_4){
if(Global_8939[bVar0]==0){
Global_8903[bVar0]=iVar1;
if(iVar1==1){
iVar3=0;
while (iVar3 < 35){
if(Global_113810.f_14144[iVar3 /*104*/].f_24 !=0){
if(Global_113810.f_14144[iVar3 /*104*/].f_28==0){
if(Global_113810.f_14144[iVar3 /*104*/].f_99[Global_20500]==1){
Global_22913++;
}
}
}
iVar3++;
}
func_38(Global_20481, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78689){
bVar4=false;
bVar4=Global_4541036;
iVar5=0;
while (iVar5 < 12){
if(Global_4541037[iVar5 /*104*/].f_24 !=0){
if(Global_4541037[iVar5 /*104*/].f_28==0){
if(Global_4541037[iVar5 /*104*/].f_99[Global_20500]==1){
bVar4++;
}}
}
iVar5++;
}
func_38(Global_20481, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(bVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20500){
case 0:
bVar6=Global_44580;
break;
case 1:
bVar6=Global_44581;
break;
case 2:
bVar6=Global_44582;
break;
default:
break;
}
func_38(Global_20481, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(bVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_38(Global_20481, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_39(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8376);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8371, 6)){
bVar7=42;
}else{
bVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_39(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8371, 3)){
bVar8=42;
Global_20708=1;
}else{
bVar8=255;
Global_20708=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_39(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_39(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8377[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8371, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_39(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8377[iVar1 /*15*/].f_10==57 && iVar1==23){
bVar9=false;
bVar9=Global_1890239.f_1;
func_38(Global_20481, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(bVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_38(Global_20481, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8939[bVar0]=1;
}}}
iVar1++;
}}
bVar0++;
}}


void func_38(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam6));
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
func_39(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_39(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
func_39(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
func_39(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
func_39(sParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_39(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


bool func_40(int iParam0){
return Global_43377==iParam0;
}


void func_41(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam6));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


bool func_42(){
return Global_1575063;
}


void func_43(int iParam0){
var uVar0;
var uVar1;
uVar0=Global_113810.f_14054[iParam0 /*20*/].f_8;
uVar0=uVar0;
uVar1=uVar1;
}


void func_44(int iParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
uVar0=CLOCK::GET_CLOCK_SECONDS();
uVar1=CLOCK::GET_CLOCK_MINUTES();
uVar2=CLOCK::GET_CLOCK_HOURS();
uVar3=CLOCK::GET_CLOCK_DAY_OF_MONTH();
uVar4=CLOCK::GET_CLOCK_MONTH() + 1;
uVar5=CLOCK::GET_CLOCK_YEAR();
Global_4541037[iParam0 /*104*/].f_18=uVar0;
Global_4541037[iParam0 /*104*/].f_18.f_1=uVar1;
Global_4541037[iParam0 /*104*/].f_18.f_2=uVar2;
Global_4541037[iParam0 /*104*/].f_18.f_3=uVar3;
Global_4541037[iParam0 /*104*/].f_18.f_4=uVar4;
Global_4541037[iParam0 /*104*/].f_18.f_5=uVar5;
}


void func_45(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=10;
iVar2=iVar0;
Global_4542286=11;
Global_4541037[Global_4542286 /*104*/].f_18=-1;
Global_4541037[Global_4542286 /*104*/].f_18.f_1=0;
Global_4541037[Global_4542286 /*104*/].f_18.f_2=0;
Global_4541037[Global_4542286 /*104*/].f_18.f_3=0;
Global_4541037[Global_4542286 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(!func_46(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18)){
Global_4542286=iVar2;
}
iVar2++;
}
Global_4541037[Global_4542286 /*104*/].f_24=1;
}

int func_46(struct<6> Param0, struct<6> Param1){
struct<4> Var0;
struct<4> Var1;
int iVar2;
int iVar3;
if(Param0.f_5 < Param1.f_5){
return 0;
}
if(Param0.f_5 > Param1.f_5){
return 1;
}
if(Param0.f_5==Param1.f_5){
if(Param0.f_4 < Param1.f_4){
return 0;
}
if(Param0.f_4 > Param1.f_4){
return 1;
}
if(Param0.f_4==Param1.f_4){
Var0.f_0=Param0.f_0;
Var0.f_1=Param0.f_1 * 60;
Var0.f_2=Param0.f_2 * 3600;
Var0.f_3=(Param0.f_3 * 86400);
iVar2=(((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
Var1.f_0=Param1.f_0;
Var1.f_1=Param1.f_1 * 60;
Var1.f_2=Param1.f_2 * 3600;
Var1.f_3=(Param1.f_3 * 86400);
iVar3=(((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
if(iVar2 > iVar3 || iVar2==iVar3){
return 1;
}else{
return 0;
}}}
return 0;
}

int func_47(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=10;
iVar2=iVar0;
while (iVar2 < iVar1){
if(Global_4541037[iVar2 /*104*/].f_24==0){
Global_4542286=iVar2;
return 1;
}
iVar2++;
}
iVar2=iVar0;
Global_4542286=11;
Global_4541037[Global_4542286 /*104*/].f_18=-1;
Global_4541037[Global_4542286 /*104*/].f_18.f_1=0;
Global_4541037[Global_4542286 /*104*/].f_18.f_2=0;
Global_4541037[Global_4542286 /*104*/].f_18.f_3=0;
Global_4541037[Global_4542286 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(Global_4541037[iVar2 /*104*/].f_24==0 || Global_4541037[iVar2 /*104*/].f_24==1){
if(!func_46(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18)){
Global_4542286=iVar2;
}}
iVar2++;
}
if(Global_4542286==11){
return 0;
}
Global_4541037[Global_4542286 /*104*/].f_99[0]=0;
Global_4541037[Global_4542286 /*104*/].f_99[1]=0;
Global_4541037[Global_4542286 /*104*/].f_99[2]=0;
return 1;
}


void func_48(){
if(func_40(14)){
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
Global_20500=func_49();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


var func__49(){
func_50();
return Global_113810.f_2366.f_539.f_4321;
}


void func_50(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_53(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_52(PLAYER::PLAYER_PED_ID());
if(func_51(iVar0) && (!func_40(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_51(Global_113810.f_2366.f_539.f_4321)){
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


bool func_51(int iParam0){
return iParam0 < 3;
}

int func_52(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_53(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_53(int iParam0){
if(func_51(iParam0)){
return func_54(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__54(int iParam0){
return Global_2058[iParam0 /*29*/];
}

int func_55(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16){
int iVar0;
switch (iParam14){
case 0:
sParam15="NULL";
sParam16="NULL";
break;
case 1:
sParam16="NULL";
break;
case 2:
break;
default:
break;
}
iVar0=3;
if(func_31(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0)==1){
if(bParam11==1){
Global_9077=iParam10;
MISC::SET_BIT(&Global_4542302, 0);
}
return 1;
}
return 0;
}

int func_56(int iParam0, int iParam1){
if(iParam0==-99){
return -99;
}
func_57(2, iParam1);
return iParam0;
}


void func_57(int iParam0, var uParam1){
bool bVar0;
bool bVar1;
if(iParam0==0){
return;
}
bVar0=false;
bVar1=false;
switch (iParam0){
case 1:
bVar0=true;
break;
case 2:
bVar1=true;
break;
default:
return;
}
if(bVar0){
switch (*uParam1){
case 1:
case 3:
break;
case 0:
*uParam1=1;
break;
case 2:
*uParam1=3;
break;
default:
return;
}
return;
}
if(bVar1){
switch (*uParam1){
case 2:
case 3:
break;
case 0:
*uParam1=2;
break;
case 1:
*uParam1=3;
break;
default:
return;
}
return;
}}


var func__58(char* sParam0, bool bParam1, int iParam2){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return sLocal_16;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_16)){
return sLocal_16;
}
func_57(1, iParam2);
if(bParam1){
return sParam0;
}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_59(int iParam0){
int iVar0;
iVar0=func_62(iParam0);
if(iVar0==-1){
func_60(iParam0, 1);
return 0;
}
Global_1666485[iVar0 /*5*/].f_4=1;
return Global_1666485[iVar0 /*5*/].f_2;
}


void func_60(int iParam0, bool bParam1){
if(!func_146(iParam0, 0, 1)){
return;
}
if(func_62(iParam0) !=-1){
return;
}
if(Global_1666648){
if(iParam0==Global_1666648.f_1){
return;
}}
if(func_61(iParam0)){
return;
}
if(Global_1666686 >=32){
return;
}
Global_1666653[Global_1666686]=iParam0;
Global_1666686++;
if(bParam1){}}

int func_61(int iParam0){
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

int func_62(int iParam0){
int iVar0;
if(!func_146(iParam0, 0, 1)){
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
func_63(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_63(int iParam0){
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
func_64(&(Global_1666485[iVar2 /*5*/]));
Global_1666646=(Global_1666646 - 1);
}


void func_64(var uParam0){
*uParam0=0;
uParam0->f_1=func_5();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}


void func_65(){
Global_1649067.f_40.f_9=4;
}

int func_66(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
func_65();
bVar0=false;
return func_26(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_67(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
bVar0=false;
return func_68(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_68(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
char* sVar4;
var uVar5;
int iVar6;
bool bVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
bool bVar12;
iVar0=func_5();
iVar1=0;
if(iParam0==145){
iVar0=iParam1;
sVar2=PLAYER::GET_PLAYER_NAME(iVar0);
iVar1=func_59(iVar0);
if(iVar1==0){
if(NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649067.f_40.f_13)){
return 0;
}}
Global_22906=iVar1;
}else{
sVar2="";
}
iVar3=0;
sVar4=func_58(sParam5, bParam6, &iVar3);
uVar5=func_56(iParam7, &iVar3);
iVar6=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
iVar6++;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
iVar6++;
}}
if(MISC::ARE_STRINGS_EQUAL(sVar4, " ")){
sVar4="";
}
bVar7=true;
iVar8=0;
iVar9=0;
iVar10=1;
iVar11=0;
if(bParam3){
iVar9=1;
iVar10=2;
iVar11=1;
if(MISC::IS_BIT_SET(uParam4, 1)){
iVar8=1;
}}
if(MISC::IS_BIT_SET(uParam4, 2)){
iVar10=2;
}
bVar12=false;
if(!iVar3==0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2)){
bVar12=func_78(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
}else{
bVar12=func_70(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
}
if(!bVar12){
return 0;
}
if(MISC::IS_BIT_SET(uParam4, 0)){
func_29();
}
func_69();
func_28();
func_27();
return 1;
}


void func_69(){
Global_1649067.f_40.f_9=3;
}

int func_70(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9){
int iVar0;
char* sVar1;
int iVar2;
char* sVar3;
int iVar4;
char* sVar5;
char* sVar6;
int iVar7;
MISC::CLEAR_BIT(&Global_8370, 10);
iVar0=0;
sVar1="NULL";
iVar2=-99;
sVar3="NULL";
iVar4=0;
sVar5="NULL";
sVar6="NULL";
iVar7=3;
if(func_72(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_9077=iParam6;
Global_8980[3 /*6*/]={
func_71(iParam0) 
};
Global_9057=iParam0;
MISC::SET_BIT(&Global_8370, 1);
MISC::SET_BIT(&Global_8370, 7);
}
return 1;
}
return 0;
}


struct<4> func_71(int iParam0){
return Global_2058[iParam0 /*29*/].f_3;
}

int func_72(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_48();
iVar0=0;
switch (iParam16){
case 0:
if(Global_20500==0){
iVar0=0;
}else{
iVar0=1;
}
break;
case 2:
if(Global_20500==2){
iVar0=0;
}else{
iVar0=1;
}
break;
case 1:
if(Global_20500==1){
iVar0=0;
}else{
iVar0=1;
}
break;
default:
iVar0=0;
break;
}
if(iVar0==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}}
if(Global_113810.f_14054[Global_20500 /*20*/].f_17==1){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}}
if(func_77()==0){
func_75();
return 0;
}
func_74(Global_22912);
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/]), sParam1, 64);
Global_113810.f_14144[Global_22912 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_113810.f_14144[Global_22912 /*104*/].f_24=iParam2;
}
Global_113810.f_14144[Global_22912 /*104*/].f_25=iParam7;
Global_113810.f_14144[Global_22912 /*104*/].f_26=uParam8;
Global_113810.f_14144[Global_22912 /*104*/].f_29=uParam9;
Global_113810.f_14144[Global_22912 /*104*/].f_30=uParam12;
Global_113810.f_14144[Global_22912 /*104*/].f_31=uParam11;
Global_113810.f_14144[Global_22912 /*104*/].f_28=0;
Global_113810.f_14144[Global_22912 /*104*/].f_32=iParam3;
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_33), sParam4, 64);
Global_113810.f_14144[Global_22912 /*104*/].f_49=iParam6;
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_50), sParam5, 64);
Global_113810.f_14144[Global_22912 /*104*/].f_66=iParam13;
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_83), sParam15, 64);
if(MISC::IS_BIT_SET(Global_8370, 10)){
Global_113810.f_14144[Global_22912 /*104*/].f_99[0]=1;
Global_113810.f_14144[Global_22912 /*104*/].f_99[1]=1;
Global_113810.f_14144[Global_22912 /*104*/].f_99[2]=1;
Global_9076=4;
func_43(0);
func_43(2);
func_43(1);
}else{
func_48();
switch (iParam16){
case 3:
Global_113810.f_14144[Global_22912 /*104*/].f_99[Global_20500]=1;
break;
case 0:
Global_113810.f_14144[Global_22912 /*104*/].f_99[0]=1;
break;
case 2:
Global_113810.f_14144[Global_22912 /*104*/].f_99[2]=1;
break;
case 1:
Global_113810.f_14144[Global_22912 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20500){
case 0:
func_43(0);
Global_9076=0;
break;
case 1:
func_43(1);
Global_9076=1;
break;
case 2:
func_43(2);
Global_9076=2;
break;
case 3:
func_43(3);
Global_9076=3;
break;
default:
Global_9076=4;
break;
}}}
if(iParam7==1){
if(MISC::IS_BIT_SET(Global_8370, 10)){
Global_113810.f_14054[0 /*20*/].f_17=1;
Global_113810.f_14054[1 /*20*/].f_17=1;
Global_113810.f_14054[2 /*20*/].f_17=1;
}else{
switch (iParam16){
case 3:
Global_113810.f_14054[Global_20500 /*20*/].f_17=1;
break;
case 0:
Global_113810.f_14054[0 /*20*/].f_17=1;
break;
case 2:
Global_113810.f_14054[2 /*20*/].f_17=1;
break;
case 1:
Global_113810.f_14054[1 /*20*/].f_17=1;
break;
}}}
Global_22914[Global_22912]=0;
if(bParam10){
func_48();
if(Global_20443){
StringCopy(&Global_20489, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20500){
case 0:
StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
break;
case 2:
StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
break;
case 1:
StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
break;
default:
StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==1){
if(!func_42()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, 1);
}}}
if(!Global_20705){
if(Global_20500.f_1==6){
func_41(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_37(1);
func_41(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20480), -1082130432, -1082130432, -1082130432);
}}
if(Global_1978329 !=-1 && iParam0==Global_1978329){
bVar1=true;
}
func_73(iParam0, sParam1, bVar1, func_36(PLAYER::PLAYER_ID()));
return 1;
}


void func_73(int iParam0, char* sParam1, bool bParam2, var uParam3){
struct<14> Var0;
if(!func_33()){
return;
}
Var0.f_0=iParam0;
Var0.f_1=1654525105;
Var0.f_2=MISC::GET_HASH_KEY(sParam1);
Var0.f_3=0;
Var0.f_4=bParam2;
Var0.f_5=uParam3;
Var0.f_6=Global_1978312.f_7;
Var0.f_7=Global_1978312.f_8;
Var0.f_8=Global_1978312.f_9;
Var0.f_9=Global_1978312.f_10;
Var0.f_10=Global_1978312.f_11;
Var0.f_11=Global_1978312.f_12;
Var0.f_12=Global_1978312.f_13;
Var0.f_13=Global_1978312.f_14;
STATS::PLAYSTATS_NPC_PHONE(&Var0);
if(bParam2){
Global_1978329=-1;
}}


void func_74(int iParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
uVar0=CLOCK::GET_CLOCK_SECONDS();
uVar1=CLOCK::GET_CLOCK_MINUTES();
uVar2=CLOCK::GET_CLOCK_HOURS();
uVar3=CLOCK::GET_CLOCK_DAY_OF_MONTH();
uVar4=CLOCK::GET_CLOCK_MONTH() + 1;
uVar5=CLOCK::GET_CLOCK_YEAR();
Global_113810.f_14144[iParam0 /*104*/].f_18=uVar0;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_1=uVar1;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_2=uVar2;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_3=uVar3;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_4=uVar4;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_5=uVar5;
}


void func_75(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78689){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
Global_22912=34;
Global_113810.f_14144[Global_22912 /*104*/].f_18=-1;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_1=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_2=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_3=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(!func_76(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18)){
Global_22912=iVar2;
}
iVar2++;
}
Global_113810.f_14144[Global_22912 /*104*/].f_24=1;
}

int func_76(struct<6> Param0, struct<6> Param1){
struct<4> Var0;
struct<4> Var1;
int iVar2;
int iVar3;
if(Param0.f_5 < Param1.f_5){
return 0;
}
if(Param0.f_5 > Param1.f_5){
return 1;
}
if(Param0.f_5==Param1.f_5){
if(Param0.f_4 < Param1.f_4){
return 0;
}
if(Param0.f_4 > Param1.f_4){
return 1;
}
if(Param0.f_4==Param1.f_4){
Var0.f_0=Param0.f_0;
Var0.f_1=Param0.f_1 * 60;
Var0.f_2=Param0.f_2 * 3600;
Var0.f_3=(Param0.f_3 * 86400);
iVar2=(((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
Var1.f_0=Param1.f_0;
Var1.f_1=Param1.f_1 * 60;
Var1.f_2=Param1.f_2 * 3600;
Var1.f_3=(Param1.f_3 * 86400);
iVar3=(((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
if(iVar2 > iVar3 || iVar2==iVar3){
return 1;
}else{
return 0;
}}}
return 0;
}

int func_77(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78689){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
while (iVar2 < iVar1){
if(Global_113810.f_14144[iVar2 /*104*/].f_24==0){
Global_22912=iVar2;
return 1;
}
iVar2++;
}
iVar2=iVar0;
Global_22912=34;
Global_113810.f_14144[Global_22912 /*104*/].f_18=-1;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_1=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_2=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_3=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(Global_113810.f_14144[iVar2 /*104*/].f_24==0 || Global_113810.f_14144[iVar2 /*104*/].f_24==1){
if(!func_76(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18)){
Global_22912=iVar2;
}}
if(Global_113810.f_14144[iVar2 /*104*/].f_24==2){
}
iVar2++;
}
if(Global_22912==34){
return 0;
}
Global_113810.f_14144[Global_22912 /*104*/].f_99[0]=0;
Global_113810.f_14144[Global_22912 /*104*/].f_99[1]=0;
Global_113810.f_14144[Global_22912 /*104*/].f_99[2]=0;
return 1;
}

int func_78(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16){
int iVar0;
switch (iParam14){
case 0:
sParam15="NULL";
sParam16="NULL";
break;
case 1:
sParam16="NULL";
break;
case 2:
break;
default:
break;
}
MISC::CLEAR_BIT(&Global_8370, 10);
iVar0=3;
if(func_72(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0)==1){
if(bParam11==1){
Global_9077=iParam10;
Global_8980[3 /*6*/]={
func_71(iParam0) 
};
Global_9057=iParam0;
StringCopy(&Global_9058, sParam5, 64);
MISC::SET_BIT(&Global_8370, 1);
MISC::SET_BIT(&Global_8370, 7);
}
return 1;
}
return 0;
}

int func_79(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
func_69();
bVar0=true;
if(func_68(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8)){
func_25(120000);
return 1;
}
return 0;
}

int func_80(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4){
bool bVar0;
int iVar1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}}
bVar0=false;
iVar1=12;
if(MISC::IS_BIT_SET(uParam4, 7)){
iVar1=9;
}
if(MISC::IS_BIT_SET(uParam4, 4)){
bVar0=func_97(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
}else{
bVar0=func_86(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
}
if(bVar0){
if(MISC::IS_BIT_SET(uParam4, 3)){
func_85(1);
}
if(MISC::IS_BIT_SET(uParam4, 5)){
func_84(1);
}
func_83();
func_28();
func_82();
func_81();
return 1;
}
return 0;
}


void func_81(){
Global_2804285=0;
}


void func_82(){
Global_1649067.f_57=1;
Global_1649067.f_57.f_1=0;
}


void func_83(){
Global_1649067.f_40.f_9=1;
}


void func_84(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8372, 0);
}else{
MISC::CLEAR_BIT(&Global_8372, 0);
}}


void func_85(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 20);
}else{
MISC::CLEAR_BIT(&Global_8370, 20);
}}

int func_86(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
func_96(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
Global_2883585=0;
return func_87(sParam3, iParam4, bParam7);
}

int func_87(char* sParam0, int iParam1, bool bParam2){
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
func_95();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_94(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_93();
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
func_48();
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
if(func_92()){
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
if(func_91()){
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
func_90();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_89();
func_88();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_95();
}
return 0;
}


void func_88(){
if(!func_33()){
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


void func_89(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_90(){
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

int func_91(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_92(){
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


void func_93(){
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


bool func_94(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_95(){
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


void func_96(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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

int func_97(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
func_96(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
Global_21893=1;
Global_21852=1;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_21850=0;
Global_21897=0;
Global_21899=0;
Global_2883585=0;
return func_87(sParam3, iParam4, bParam7);
}

int func_98(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_100(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1)){
func_99();
func_83();
func_28();
func_82();
func_81();
return 1;
}
return 0;
}


void func_99(){
Global_22863=0;
}


bool func_100(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8){
func_96(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
Global_21893=0;
Global_21852=1;
Global_21859=0;
Global_21854=1;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_21850=0;
Global_21897=1;
Global_21899=0;
StringCopy(&Global_21993, sParam5, 24);
Global_2883585=0;
return func_87(sParam3, iParam4, bParam8);
}

int func_101(var uParam0, char* sParam1, char* sParam2){
if(func_103(uParam0, sParam1, sParam2, 12, 0, 0, 0)){
func_102();
func_28();
func_82();
return 1;
}
return 0;
}


void func_102(){
Global_1649067.f_40.f_9=2;
}


bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_96(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_87(sParam2, iParam3, 0);
}


void func_104(){
Global_1649067.f_55=Global_1649067.f_40.f_1;
Global_1649067.f_55.f_1=Global_1649067.f_40.f_10;
}


void func_105(){
Global_1649067.f_40=1;
}


bool func_106(){
return Global_1649067.f_40==1;
}

int func_107(int iParam0, int iParam1, int iParam2){
if(!func_108(iParam0)){
return 0;
}
if(Global_1649067.f_40.f_2 !=iParam1){
return 0;
}
if(iParam2 !=0){
if(Global_1649067.f_40.f_3 !=iParam2){
return 0;
}}
return 1;
}

int func_108(int iParam0){
if(!func_109()){
return 0;
}
if(!Global_1649067.f_40.f_1==iParam0){
return 0;
}
return 1;
}

int func_109(){
if(Global_1649067.f_40==0){
return 0;
}
return 1;
}

int func_110(var uParam0){
if(func_114()){
return 0;
}
if(func_113()){
return 0;
}
if(func_145(0)){
return 0;
}
if(Global_1574632.f_18 !=0){
return 0;
}
if(Global_1935879 || func_112()){
return 0;
}
if(!MISC::IS_BIT_SET(uParam0, 6)){
if(func_111()){
return 0;
}}
return 1;
}


bool func_111(){
return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1665432);
}

int func_112(){
if(Global_4521801.f_943 > -1){
return 1;
}
return 0;
}


bool func_113(){
return Global_1649067.f_40==3;
}


bool func_114(){
return func_91();
}

int func_115(int iParam0, int iParam1, int iParam2){
if(!func_113()){
return 0;
}
return func_107(iParam0, iParam1, iParam2);
}

int func_116(char* sParam0, char* sParam1){
char cVar0[64];
StringCopy(&cVar0, sParam0, 64);
StringConCat(&cVar0, sParam1, 64);
return MISC::GET_HASH_KEY(&cVar0);
}


bool func_117(){
return Global_2801145.f_1;
}

int func_118(){
if(Global_1649255.f_2){
return 1;
}
return func_119();
}


bool func_119(){
return func_114();
}


void func_120(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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

int func_121(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_122(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_122(var uParam0, bool bParam1, bool bParam2){
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


void func_123(int iParam0, int iParam1, int iParam2, bool bParam3){
struct<4> Var0;
struct<8> Var1;
int iVar2;
int iVar3;
StringCopy(&Var0, func_138(iParam1), 16);
StringCopy(&Var1, func_137(iParam2), 32);
switch (iParam1){
case 0:
iVar2=1287308202;
break;
case 1:
iVar2=691372038;
break;
case 2:
iVar2=1480707108;
break;
case 3:
iVar2=1512499951;
break;
case 4:
iVar2=562283735;
break;
case 5:
iVar2=-154732333;
break;
case 6:
iVar2=-1362660491;
break;
case 7:
iVar2=645708827;
break;
case 8:
iVar2=767907967;
break;
case 9:
iVar2=-1970151306;
break;
case 10:
iVar2=718859568;
break;
case 11:
iVar2=-1955564771;
break;
case 12:
iVar2=892388724;
break;
case 13:
iVar2=-1426920838;
break;
case 14:
iVar2=-664597565;
break;
case 15:
iVar2=1864522104;
break;
case 16:
iVar2=215608230;
break;
case 17:
iVar2=-1100963799;
break;
}
if(func_136()){
func_124(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
Global_4535172[iVar3 /*85*/].f_14.f_40={
Var0 
};
Global_4535172[iVar3 /*85*/].f_14.f_44={
Var1 
};
}else{
MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
}}


void func_124(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_136()){
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
func_125(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_125(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_125(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_125(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_125(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_136()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_12()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_132(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_131(1, iParam4);
Global_4536677=0;
}
if(iParam7 & 4 !=0){
func_126(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_126(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
break;
}
if(iParam0 !=-1){
func_127(iParam0);
}}


void func_127(int iParam0){
bool bVar0;
bVar0=false;
if(!func_136()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_130(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_128(&(Global_4535172[iParam0 /*85*/]));
}}


void func_128(var uParam0){
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
func_129(&(uParam0->f_14));
func_129(&(uParam0->f_14.f_13));
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


void func_129(var uParam0){
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

int func_130(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_131(int iParam0, var uParam1){
Global_2697092=uParam1;
Global_2697091=iParam0;
}

int func_132(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_136()){
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
func_133(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_133(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_135(Var0.f_1);
if((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260){
return;
}
if(!iVar1==0){
func_134();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_134(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_135(int iParam0){
var uVar0;
if(func_7(iParam0)){
MISC::SET_BIT(&uVar0, iParam0);
}
return uVar0;
}

int func_136(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


char* func_137(int iParam0){
switch (iParam0){
case 0:
return "NOTREACHTARGET";
break;
case 1:
return "TARGET_ESCAPE";
break;
case 2:
return "DELIVERY_FAIL";
break;
case 3:
return "NOT_USED";
break;
case 4:
return "TEAM_QUIT";
break;
case 5:
return "SERVER_ERROR";
break;
case 6:
return "RECEIVE_LJ_L";
break;
case 8:
return "CHALLENGE_PLAYER_LEFT";
break;
}
return "DEFAULT";
}


char* func_138(int iParam0){
switch (iParam0){
case 0:
return "BACKUP_VAGOS";
case 1:
return "BACKUP_LOST";
case 2:
return "BACKUP_FAMILIES";
case 3:
return "HIRE_MUGGER";
case 4:
return "HIRE_MERCENARY";
case 5:
return "BUY_CARDROPOFF";
case 6:
return "HELI_PICKUP";
case 7:
return "BOAT_PICKUP";
case 8:
return "CLEAR_WANTED";
case 9:
return "HEAD_2_HEAD";
case 10:
return "CHALLENGE";
case 11:
return "SHARE_LAST_JOB";
case 13:
return "REFUNDAPPEA";
case 14:
return "AMMO_DROP_REF";
case 15:
return "ORBITAL_MANUAL";
case 16:
return "ORBITAL_AUTO";
case 17:
return "ARENA_SPEC_BOX";
default:
}
return "DEFAULT";
}

int func_139(int iParam0){
int iVar0;
iVar0=0;
if(func_142(iParam0) >=0){
iVar0=func_142(iParam0);
}else{
iVar0=func_140(iParam0);
}
return iVar0;
}

int func_140(int iParam0){
switch (iParam0){
case 1:
return 1000;
break;
case 10:
return 5000;
break;
case 11:
return 8000;
break;
case 8:
return 1000;
break;
case 0:
return 500;
break;
case 9:
return 250;
break;
case 13:
return 1000;
break;
case 12:
return 7500;
break;
case 2:
return 1000;
break;
case 14:
return 500;
break;
case 20:
if(func_141()){
return 0;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==1){
return 200;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==2){
return 400;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==3){
return 600;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==4){
return 800;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==5){
return 1000;
}
break;
case 6:
return 500;
break;
case 22:
return 200;
break;
case 23:
return 400;
break;
case 24:
return 700;
break;
case 25:
return 100;
break;
case 26:
return 1000;
break;
case 57:
return 700;
break;
case 35:
return 5000;
break;
case 15:
return 0;
break;
case 17:
return 0;
break;
case 18:
return 0;
break;
case 19:
return 0;
break;
case 21:
return 0;
break;
case 36:
return 0;
break;
case 39:
return 200;
break;
case 40:
return 1000;
case 41:
return 750;
case 42:
return 0;
}
return 0;
}


bool func_141(){
return MISC::IS_BIT_SET(func_9(6427, -1), 19);
}

int func_142(int iParam0){
switch (iParam0){
case 1:
return Global_262145.f_7188;
break;
case 10:
return Global_262145.f_4128;
break;
case 11:
return Global_262145.f_4129;
break;
case 8:
return Global_262145.f_4126;
break;
case 0:
return Global_262145.f_4112;
break;
case 9:
return Global_262145.f_4127;
break;
case 13:
return Global_262145.f_4131;
break;
case 12:
return Global_262145.f_4130;
break;
case 2:
return Global_262145.f_4122;
break;
case 14:
return Global_262145.f_4132;
break;
case 20:
if(func_141()){
return 0;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==1){
return Global_262145.f_7195;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==2){
return Global_262145.f_7196;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==3){
return Global_262145.f_7197;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==4){
return Global_262145.f_7198;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==5){
return Global_262145.f_7199;
}
break;
case 6:
return Global_262145.f_4125;
break;
case 22:
return Global_262145.f_4138;
break;
case 23:
return Global_262145.f_4139;
break;
case 24:
return Global_262145.f_4140;
break;
case 25:
return Global_262145.f_4141;
break;
case 26:
return Global_262145.f_4142;
break;
case 35:
return Global_262145.f_7852;
break;
case 15:
return Global_262145.f_7189;
break;
case 17:
return Global_262145.f_7189;
break;
case 18:
return Global_262145.f_7189;
break;
case 19:
return Global_262145.f_7189;
break;
case 21:
return Global_262145.f_7189;
break;
case 36:
return Global_262145.f_8319;
break;
case 39:
return -1;
break;
case 40:
return Global_262145.f_13532;
break;
case 41:
return Global_262145.f_13533;
break;
case 42:
return Global_262145.f_13534;
break;
case 43:
return Global_262145.f_16068;
break;
case 44:
return Global_262145.f_16070;
break;
case 57:
return Global_262145.f_4140;
break;
case 58:
return Global_262145.f_25976;
break;
case 62:
return Global_262145.f_25977;
break;
case 63:
return Global_262145.f_29466;
break;
case 64:
return Global_262145.f_7189;
break;
case 72:
return Global_262145.f_25977;
break;
case 73:
return Global_262145.f_31982;
break;
case 74:
return Global_262145.f_31984;
break;
case 75:
return Global_262145.f_31986;
break;
}
return 0;
}


void func_143(int iParam0){
func_144(&(Global_2684820.f_4319.f_242[iParam0 /*2*/]));
}


void func_144(var uParam0){
uParam0->f_1=0;
}

int func_145(int iParam0){
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

int func_146(int iParam0, bool bParam1, bool bParam2){
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


void func_147(){
bool bVar0;
int iVar1;
if(((ENTITY::DOES_ENTITY_EXIST(iLocal_1051) && !func_152(iLocal_1051)) && !func_151(Local_129.f_4)) && PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0)){
if(!func_149(iLocal_1051, 1, 1, 0, 0, 0, 1, 0, 1)){
bVar0=false;
while (bVar0 < 32){
iVar1=PLAYER::INT_TO_PLAYERINDEX(bVar0);
if(func_146(iVar1, 0, 1)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iLocal_1051, 0)){
func_148(func_135(iVar1), 0, 0f, 0, 0, 0, -1);
}}
bVar0++;
}}elseif(!iLocal_1044){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1051)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_1051);
}else{
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1051, 2);
iLocal_1044=1;
}}}}


void func_148(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6){
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

int func_149(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
if(iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=0;
while (iVar0 < iVar1){
iVar2=func_150(iParam0, (iVar0 - 1), bParam6, iParam7);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(iParam3 && iVar2==PLAYER::PLAYER_PED_ID()){
}elseif(bParam2){
if(PED::IS_PED_A_PLAYER(iVar2)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
if(((!PED::IS_PED_INJURED(iVar2) && iVar3 !=func_5()) && func_146(iVar3, 1, 1)) || iParam8){
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

int func_150(int iParam0, int iParam1, bool bParam2, int iParam3){
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

int func_151(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
}
return 1;
}

int func_152(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 1;
}}else{
return 1;
}
return 0;
}

int func_153(){
if(func_154()){
return 1;
}
return 0;
}

int func_154(){
var uVar0;
var uVar1;
if((Global_1853988[PLAYER::PLAYER_ID() /*867*/]==2 || Global_1853988[PLAYER::PLAYER_ID() /*867*/]==1) || Global_1853988[PLAYER::PLAYER_ID() /*867*/]==3){
return 1;
}
if(!func_146(PLAYER::PLAYER_ID(), 1, 1) && !func_358()){
return 1;
}
if(func_160()){
if(Local_129.f_23 >=0 || Local_129.f_23 <=3){
if(!func_358()){
func_123(func_139(13), 6, 3, 1);
}else{
func_123(func_139(44), 6, 3, 1);
}}
return 1;
}
if((Local_129.f_23 >=0 || Local_129.f_23 <=3) && Local_129.f_23 !=4){
if(func_152(iLocal_1051)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_3)){
if(NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_129.f_3, &uVar0)==PLAYER::PLAYER_ID()){
if(func_159()){
func_158(1, 600000);
}else{
Global_2794162.f_6045=NETWORK::GET_NETWORK_TIME();
}}}
return 1;
}else{
if(func_151(Local_129.f_4)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_4)){
if(NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_129.f_4, &uVar1)==PLAYER::PLAYER_ID()){
if(func_159()){
func_158(1, 600000);
}
else{
Global_2794162.f_6045=NETWORK::GET_NETWORK_TIME();
}}}
return 1;
}elseif(!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0)){
return 1;
}elseif(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 >=1){
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_1051, 1), func_157(), func_157(), func_157(), 0, 1, 0)){
return 1;
}}
if(func_156(PLAYER::PLAYER_ID(), 0)){
return 1;
}
if(func_156(PLAYER::PLAYER_ID(), 7)){
return 1;
}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==13){
return 1;
}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==14){
return 1;
}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==15){
return 1;
}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==12){
return 1;
}
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/]==11){
return 1;
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() !=iLocal_843){
return 1;
}}}
if(Local_129.f_23==4){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1051)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0 || !func_155(PLAYER::GET_PLAYER_PED(Local_129.f_5), iLocal_1051, 0)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1051, 1);
return 1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1051)){
if(func_152(iLocal_1051)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1051, 1);
return 1;
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1051)){
if(func_151(Local_129.f_4) && !Global_2694613.f_26){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1051, 1);
return 1;
}}}
return 0;
}

int func_155(int iParam0, int iParam1, int iParam2){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam1)){
if(PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2)){
return 1;
}}}
return 0;
}


bool func_156(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}


float func_157(){
float fVar0;
fVar0=200f;
if(func_358()){
fVar0=(200f + 600f);
}
return fVar0;
}


void func_158(int iParam0, int iParam1){
if(Global_2672524.f_3686[iParam0] < iParam1){
Global_2672524.f_3686[iParam0]=iParam1;
}
MISC::SET_BIT(&(Global_2672524.f_3685), iParam0);
}

int func_159(){
if(func_358()){
return 0;
}
return 1;
}


bool func_160(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 !=0;
}


void func_161(){
int iVar0;
var uVar1;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
if(Local_129.f_24 !=8 && Local_129.f_24 !=5){
if(func_151(Local_129.f_4) || func_152(iLocal_1051)){
Local_129.f_24=8;
}elseif(!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0)){
Local_129.f_24=8;
}}
if(Local_129.f_24 !=4){
if(MISC::IS_BIT_SET(Local_129.f_1, 14)){
MISC::CLEAR_BIT(&(Local_129.f_1), 14);
}
if(func_285(&uLocal_1023)){
func_144(&uLocal_1023);
}
if(func_285(&uLocal_1025)){
func_144(&uLocal_1025);
}}
if(Local_129.f_24 !=7){
if(func_285(&uLocal_1027)){
func_144(&uLocal_1027);
}}
if(!func_151(Local_129.f_4) && !func_152(iLocal_1051)){
if(Local_129.f_24 !=8){
if((Local_129.f_23==0 || Local_129.f_23==1) || Local_129.f_23==2){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_1051) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(NETWORK::NET_TO_PED(Local_129.f_4))){
if((ENTITY::GET_ENTITY_HEALTH(iLocal_1051) <=500 || ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_129.f_4)) <=150) || VEHICLE::IS_HELI_PART_BROKEN(iLocal_1051, 1, 1, 1)){
Local_129.f_24=8;
}}}}
switch (Local_129.f_24){
case 1:
if(Local_129.f_23==3){
if(!MISC::IS_BIT_SET(Local_129.f_2, 2)){
if(func_281()){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 2);
}}
func_278();
Local_129.f_24=2;
}elseif(Local_129.f_23==6){
Local_129.f_24=8;
}elseif(func_277()==0 && !func_276()){
func_278();
Local_129.f_24=4;
}elseif(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) > 0){
func_278();
Local_129.f_24=4;
}elseif(MISC::IS_BIT_SET(Local_129.f_1, 9)){
func_278();
Local_129.f_24=2;
}elseif(MISC::IS_BIT_SET(uLocal_134, 4) && func_277()){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1051, (func_157() / 2f), (func_157() / 2f), func_157(), 0, 1, 0)){
if(func_275(iLocal_1051)){
if(VEHICLE::IS_HELI_LANDING_AREA_BLOCKED(iLocal_1051)){
if(func_121(&uLocal_1018, func_274(), 0)){
iLocal_845=0;
iLocal_846=0;
iLocal_847=0;
MISC::CLEAR_BIT(&uLocal_134, 4);
if(!MISC::IS_BIT_SET(uLocal_134, 18)){
uLocal_1022=NETWORK::GET_NETWORK_TIME();
}
MISC::SET_BIT(&uLocal_134, 18);
}}elseif(func_285(&uLocal_1018)){
func_144(&uLocal_1018);
}
}}}elseif(!MISC::IS_BIT_SET(uLocal_134, 4)){
if(func_176(&uVar1)){
func_173(Local_129.f_6);
func_172();
}}
if(MISC::IS_BIT_SET(uLocal_134, 18) && Local_129.f_24==1){
iVar0=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_1022));
if(iVar0 > 60000){
Local_129.f_0=4;
}}
if(!MISC::IS_BIT_SET(Local_129.f_2, 0)){
if(func_281()){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_1051, Local_129.f_6, 20f, 20f, 20f, 0, 1, 0)){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HParr", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_APPR", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 0);
}}}
break;
case 2:
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0){
Local_129.f_24=4;
}elseif(ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_PED(Local_129.f_4), Local_129.f_10, 7.5f, 7.5f, 9999.9f, 0, 1, 0)){
HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
Local_129.f_24=3;
bLocal_132=true;
func_144(&uLocal_1034);
func_144(&uLocal_1032);
MISC::CLEAR_BIT(&(Local_129.f_1), 14);
}elseif(!HUD::IS_WAYPOINT_ACTIVE() || func_171(0)){
if(!MISC::IS_BIT_SET(Local_129.f_2, 4) && func_281()){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPcha", 12, 0, 0, 1);
}
else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_CHANGE", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 4);
}
MISC::CLEAR_BIT(&(Local_129.f_1), 9);
MISC::SET_BIT(&(Local_129.f_1), 12);
Local_129.f_24=4;
}
if(!MISC::IS_BIT_SET(Local_129.f_2, 6) && func_281()){
if(ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_PED(Local_129.f_4), Local_129.f_10, (7.5f + 75f), (7.5f + 75f), ((10f * 2f) + 75f), 0, 1, 0)){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPnear", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 6);
}}
func_167();
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <=0){
if(func_121(&uLocal_1029, iLocal_1031, 0)){
if(func_281()){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPfly", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_CHAT", 12, 0, 0, 1);
}
iLocal_1031=MISC::GET_RANDOM_INT_IN_RANGE(15000, 30000);
func_144(&uLocal_1029);
}}}
break;
case 5:
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0 || !func_155(PLAYER::GET_PLAYER_PED(Local_129.f_5), iLocal_1051, 0)){
Local_129.f_24=8;
break;
}
if(!MISC::IS_BIT_SET(Local_129.f_1, 15)){
MISC::SET_BIT(&(Local_129.f_1), 15);
}
break;
case 3:
if(iLocal_844 !=3){
iLocal_844=3;
}
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0 && !VEHICLE::IS_ANY_PED_RAPPELLING_FROM_HELI(iLocal_1051)){
if(!MISC::IS_BIT_SET(Local_129.f_2, 9)){
if(func_281()){
if(VEHICLE::IS_ANY_PED_RAPPELLING_FROM_HELI(iLocal_1051)){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPleav", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 9);
}
}}
Local_129.f_24=8;
}elseif(!HUD::IS_WAYPOINT_ACTIVE() || func_171(0)){
MISC::CLEAR_BIT(&(Local_129.f_1), 9);
MISC::SET_BIT(&(Local_129.f_1), 12);
Local_129.f_24=4;
}
if(!MISC::IS_BIT_SET(Local_129.f_2, 8)){
if(VEHICLE::IS_ANY_PED_RAPPELLING_FROM_HELI(iLocal_1051)){
if(func_281()){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPrap", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_FLIES", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 8);
}}}
break;
case 4:
if(bLocal_132){
if(func_281()){
if(!MISC::IS_BIT_SET(Local_129.f_2, 5)){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPdrop", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_ARRIVE", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 5);
}
elseif(!func_159()){
if(!MISC::IS_BIT_SET(Local_129.f_2, 21)){
if(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1051) > 10f){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_CANJUM", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 21);
}
}}}
if(MISC::IS_BIT_SET(Local_129.f_1, 12)){
if(!VEHICLE::IS_ANY_PED_RAPPELLING_FROM_HELI(iLocal_1051)){
if(HUD::IS_WAYPOINT_ACTIVE()){
if(!MISC::IS_BIT_SET(Local_129.f_2, 2)){
if(func_281()){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
}
else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_GENPOS", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 2);
}}
func_278();
if(!func_166(Local_129.f_10, Local_129.f_13, 0)){
Local_129.f_13={
Local_129.f_10 
};
Local_129.f_24=2;
}
}
elseif(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0){
Local_129.f_24=8;
}}}elseif(MISC::IS_BIT_SET(Local_129.f_1, 9)){
if(!MISC::IS_BIT_SET(Local_129.f_2, 2)){
if(func_281()){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 2);
}}
func_278();
if(!func_166(Local_129.f_10, Local_129.f_13, 0)){
Local_129.f_13={
Local_129.f_10 
};
MISC::SET_BIT(&(Local_129.f_1), 13);
Local_129.f_24=2;
}}elseif(MISC::IS_BIT_SET(Local_129.f_1, 13)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0){
Local_129.f_24=8;
}}
func_167();
if(func_281()){
if(!MISC::IS_BIT_SET(Local_129.f_2, 1)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) > 0){
if(func_285(&uLocal_1025)){
func_144(&uLocal_1025);
}
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPnoW", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_WHERE", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 1);
}}elseif(!MISC::IS_BIT_SET(Local_129.f_2, 2)){
if(!MISC::IS_BIT_SET(Local_129.f_2, 3) && !MISC::IS_BIT_SET(Local_129.f_1, 12)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPex", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 3);
}
}}elseif(!MISC::IS_BIT_SET(Local_129.f_2, 16)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPbail", 12, 0, 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 16);
}}}
if(Local_129.f_24==4){
if(!MISC::IS_BIT_SET(Local_129.f_1, 14)){
if(!bLocal_132){
if(func_121(&uLocal_1023, 120000, 0)){
MISC::SET_BIT(&(Local_129.f_1), 14);
}
}
elseif(func_121(&uLocal_1032, 20000, 0)){
MISC::SET_BIT(&(Local_129.f_1), 14);
}}elseif(!bLocal_132){
if(func_121(&uLocal_1025, 60000, 0)){
Local_129.f_24=7;
}}elseif(func_121(&uLocal_1034, 30000, 0)){
Local_129.f_24=7;
}}
break;
case 7:
if(func_121(&uLocal_1027, 4000, 0)){
Local_129.f_24=8;
if(func_165()){
func_164();
}}
break;
case 8:
func_163(0);
break;
}
func_162();
if(!MISC::IS_BIT_SET(Local_129.f_2, 10)){
if(func_281()){
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1051, PLAYER::PLAYER_PED_ID(), 1)){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPdam", 12, 0, 0, 1);
}
else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_DAMAGE", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 10);
}}}}
if(!func_159()){
if(!MISC::IS_BIT_SET(Local_129.f_2, 26)){
if(func_281()){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_129.f_4)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_129.f_4))){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_AIM", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 26);
}}}elseif(!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_129.f_4)) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_129.f_4))){
MISC::CLEAR_BIT(&(Local_129.f_2), 26);
}}}}


void func_162(){
if(!iLocal_1045){
if(Local_129.f_24==2){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_3)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_129.f_3)){
VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_1051, 1f);
iLocal_1045=1;
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_129.f_3);
}}}}}


void func_163(bool bParam0){
bLocal_1040=bParam0;
}


void func_164(){
Global_75819=1;
}


bool func_165(){
return Global_75816;
}


bool func_166(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_167(){
if(!func_159()){
if(!MISC::IS_BIT_SET(Local_129.f_2, 18)){
if(func_281()){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) > 0){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_GREET", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 18);
}}}else{
if(func_281()){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) > 0){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) < iLocal_848 && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1051) > 10f){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
}elseif(!MISC::IS_BIT_SET(Local_129.f_2, 22) && iLocal_1042){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_GENGRE", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 22);
MISC::CLEAR_BIT(&(Local_129.f_2), 23);
}
if(!VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1)==iLocal_848){
iLocal_848=VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1);
}}elseif(!MISC::IS_BIT_SET(Local_129.f_2, 23)){
if(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1051) > 10f){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 23);
MISC::CLEAR_BIT(&(Local_129.f_2), 22);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 23);
MISC::CLEAR_BIT(&(Local_129.f_2), 22);
}}}
if(!iLocal_1042){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1)==0){
iLocal_1042=1;
}}}
if(func_281()){
if(!MISC::IS_BIT_SET(Local_129.f_2, 20)){
if(!func_152(iLocal_1051)){
if(VEHICLE::GET_VEHICLE_HOMING_LOCKEDONTO_STATE(iLocal_1051)==2){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_LOCKS", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 20);
}}}elseif(!func_152(iLocal_1051)){
if(VEHICLE::GET_VEHICLE_HOMING_LOCKEDONTO_STATE(iLocal_1051) !=2){
MISC::CLEAR_BIT(&(Local_129.f_2), 20);
}}}
if(!MISC::IS_BIT_SET(Local_129.f_2, 24)){
if(func_281()){
if(func_168(PLAYER::PLAYER_PED_ID()) >=5){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_DRINKS", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 24);
}}}
if(!MISC::IS_BIT_SET(Local_129.f_2, 25)){
if(func_281()){
if(!func_152(iLocal_1051)){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1051, 2, 0) || !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1051, 1, 0)){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_CHAMP", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 25);
}}}}
if(!MISC::IS_BIT_SET(Local_129.f_2, 19)){
if(func_281()){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_FIRE", 12, 0, 0, 1);
MISC::SET_BIT(&(Local_129.f_2), 19);
}}}}}

int func_168(int iParam0){
int iVar0;
int iVar1;
if(iParam0==0){
return 0;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
iVar0=func_170(iParam0);
iVar1=func_169(iVar0);
if(iVar1==-1){
return -1;
}
return Global_44355[iVar1 /*5*/].f_3;
}

int func_169(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(Global_44355[iVar0 /*5*/]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_170(int iParam0){
int iVar0;
if(iParam0==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 16){
if(iParam0==Global_44355[iVar0 /*5*/].f_1){
return Global_44355[iVar0 /*5*/];
}
iVar0++;
}
return -1;
}


var func__171(int iParam0){
return MISC::IS_BIT_SET(Global_2794162.f_282, iParam0);
}


void func_172(){
if(!func_151(Local_129.f_4)){
TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_129.f_4));
}}


void func_173(struct<3> Param0){
Local_129.f_17={
func_174(Param0) 
};
}


Vector3 func__174(struct<3> Param0){
struct<3> Var0;
switch (func_175(Param0)){
case 0:
Var0={
-Param0.f_0, -5000f, Param0.f_2 
};
break;
case 1:
Var0={
-5000f, -Param0.f_1, Param0.f_2 
};
break;
case 2:
Var0={
-Param0.f_0, 8000f, Param0.f_2 
};
break;
case 3:
Var0={
5000f, -Param0.f_1, Param0.f_2 
};
break;
}
return Var0;
}

int func_175(struct<2> Param0, var uParam1){
if(Param0.f_1 >=0f && Param0.f_0 >=0f){
return 0;
}elseif(Param0.f_1 < 0f && Param0.f_0 >=0f){
return 1;
}elseif(Param0.f_1 < 0f && Param0.f_0 < 0f){
return 2;
}elseif(Param0.f_1 >=0f && Param0.f_0 < 0f){
return 3;
}
return -1;
}

int func_176(var uParam0){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
var uVar4;
struct<3> Var5;
*uParam0=0;
if(!MISC::IS_BIT_SET(uLocal_134, 4) && func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 978.076f, 92.7732f, 128.175f, 912.625f, -9.85f, 108.025f, 92.775f, 0, 1, 0)){
Local_129.f_6={
965.8965f, 42.327f, 122.1267f 
};
MISC::SET_BIT(&uLocal_134, 4);
*uParam0=1;
}elseif(func_273(PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(uLocal_134, 18)){
Local_129.f_6={
func_267(func_269(func_270(PLAYER::PLAYER_ID()))) 
};
MISC::SET_BIT(&uLocal_134, 4);
*uParam0=1;
}elseif(func_183(150f, &iVar2, &iVar3) && !MISC::IS_BIT_SET(uLocal_134, 18)){
func_182(iVar2, iVar3, &(Local_129.f_6), &(Local_129.f_9));
*uParam0=1;
MISC::SET_BIT(&uLocal_134, 4);
}elseif((func_358() && func_178(600f)) && !MISC::IS_BIT_SET(uLocal_134, 18)){
Local_129.f_6={
Local_1048[0 /*3*/] 
};
Local_129.f_9=uLocal_1049[0];
*uParam0=1;
MISC::SET_BIT(&uLocal_134, 4);
}elseif(iLocal_845==0){
if(iLocal_847==0){
Local_129.f_6={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (15f / 2f), 1.3f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Local_129.f_6, &(Local_129.f_6.f_2), 0, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
}elseif(iLocal_847==1){
Local_129.f_6={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), (15f / 2f), 0f, 1.3f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Local_129.f_6, &(Local_129.f_6.f_2), 0, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
}elseif(iLocal_847==2){
Local_129.f_6={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), (-15f / 2f), 0f, 1.3f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Local_129.f_6, &(Local_129.f_6.f_2), 0, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
}elseif(iLocal_847==3){
Local_129.f_6={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (-15f / 2f), 1.3f) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Local_129.f_6, &(Local_129.f_6.f_2), 0, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
}elseif(iLocal_847==4){
PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &(Local_129.f_6), 1, 1077936128, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_129.f_6, 75f, 75f, 75f, 0, 1, 0)){
Local_129.f_0=4;
}}elseif(iLocal_847==5){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, &(Local_129.f_6), 1, 1077936128, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_129.f_6, 75f, 75f, 75f, 0, 1, 0)){
Local_129.f_0=4;
}}elseif(iLocal_847==6){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 6, &(Local_129.f_6), 1, 1077936128, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_129.f_6, 75f, 75f, 75f, 0, 1, 0)){
Local_129.f_0=4;
}}elseif(iLocal_847==7){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10, &(Local_129.f_6), 1, 1077936128, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_129.f_6, 75f, 75f, 75f, 0, 1, 0)){
Local_129.f_0=4;
}}elseif(iLocal_847==8){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15, &(Local_129.f_6), 1, 1077936128, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_129.f_6, 75f, 75f, 75f, 0, 1, 0)){
Local_129.f_0=4;
}}elseif(iLocal_847==9){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20, &(Local_129.f_6), 1, 1077936128, 0);
Local_129.f_6.f_2=(Local_129.f_6.f_2 + 1.3f);
}elseif(func_178(100f) && !MISC::IS_BIT_SET(uLocal_134, 18)){
Local_129.f_6={
Local_1048[0 /*3*/] 
};
Local_129.f_9=uLocal_1049[0];
*uParam0=1;
MISC::SET_BIT(&uLocal_134, 4);
return 1;
}else{
Local_129.f_0=4;
}
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_129.f_6, 75f, 75f, 5f, 0, 1, 0) || WATER::TEST_PROBE_AGAINST_WATER(Local_129.f_6 + Vector(2f, 0f, 0f), Local_129.f_6 - Vector(5f, 0f, 0f), &uVar4)){
iLocal_845=0;
iLocal_846=0;
iLocal_847++;
return 0;
}
Var5={
Local_129.f_6 + Vector((50f / 2f), 0f, 0f) 
};
iLocal_845=SHAPETEST::START_SHAPE_TEST_BOX(Var5, 15f, 15f, 50f, 0f, 0f, -1f, 2, 131, PLAYER::PLAYER_PED_ID(), 4);
if(iLocal_845==0){
return 0;
}}elseif(SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_845, &iLocal_846, &uVar0, &uVar0, &uVar1)==2){
iLocal_845=0;
if(iLocal_846==0 && !func_177(Local_129.f_6, 3, 0, 0)){
MISC::SET_BIT(&uLocal_134, 4);
}else{
iLocal_846=0;
iLocal_847++;
}}elseif(SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_845, &iLocal_846, &uVar0, &uVar0, &uVar1)==0){
iLocal_845=0;
}}
return MISC::IS_BIT_SET(uLocal_134, 4);
}

int func_177(struct<3> Param0, int iParam1, int iParam2, bool bParam3){
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

int func_178(float fParam0){
int iVar0;
func_179(func_181(PLAYER::PLAYER_ID()), &Local_1048, &uLocal_1049, &uLocal_1050);
iVar0=0;
while (iVar0 < 1){
if(uLocal_1050[iVar0] < fParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_179(struct<3> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
float fVar1;
struct<3> Var2[1];
var uVar3[1];
float fVar4[1];
int iVar5;
if(vdist(Local_1047, Param0) < 20f){
return;
}
iVar0=0;
while (iVar0 < 1){
fVar4[iVar0]=1E+07f;
iVar0++;
}
iVar5=0;
while (iVar5 < 299){
fVar1=vdist(Param0, Global_2643398[iVar5 /*3*/]);
iVar0=0;
while (iVar0 < 1){
if(fVar1 < fVar4[iVar0]){
func_180(Global_2643398[iVar5 /*3*/], Global_2644296[iVar5], fVar1, iVar0, &Var2, &uVar3, &fVar4);
iVar0=2;
}
iVar0++;
}
iVar5++;
}
iVar0=0;
while (iVar0 < 1){
if(vmag(Var2[iVar0 /*3*/]) > 0f){
*(uParam1[iVar0 /*3*/])={
Var2[iVar0 /*3*/] 
};
(*uParam2)[iVar0]=uVar3[iVar0];
(*uParam3)[iVar0]=fVar4[iVar0];
}
iVar0++;
}
Local_1047={
Param0 
};
}


void func_180(struct<3> Param0, var uParam1, float fParam2, int iParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
var uVar1;
var uVar2;
if(iParam3 < *uParam4){
Var0={
*(uParam4[iParam3 /*3*/]) 
};
uVar1=(*uParam5)[iParam3];
uVar2=(*fParam6)[iParam3];
*(uParam4[iParam3 /*3*/])={
Param0 
};
(*uParam5)[iParam3]=uParam1;
(*fParam6)[iParam3]=fParam2;
func_180(Var0, uVar1, uVar2, iParam3 + 1, uParam4, uParam5, fParam6);
}}


Vector3 func__181(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


void func_182(int iParam0, int iParam1, var uParam2, var uParam3){
switch (iParam1){
case 0:
switch (iParam0){
case 87:
*uParam2={
-1691.356f, -599.7728f, 32.3863f 
};
*uParam3=142.5853f;
break;
case 88:
*uParam2={
-1370.252f, -520.0326f, 29.6825f 
};
*uParam3=125.7171f;
break;
case 89:
*uParam2={
-23.9063f, -566.7811f, 36.7451f 
};
*uParam3=261.5803f;
break;
case 90:
*uParam2={
-8.8891f, -801.2603f, 43.4313f 
};
*uParam3=337.4736f;
break;
default:
break;
}
break;
case 1:
switch (iParam0){
case 1:
*uParam2={
62.9658f, -2526.362f, 5.0021f 
};
*uParam3=312.1262f;
break;
case 2:
*uParam2={
-1011.097f, -1324.951f, 4.7239f 
};
*uParam3=82.0646f;
break;
case 3:
*uParam2={
891.2814f, -1038.218f, 38.9808f 
};
*uParam3=179.4713f;
break;
case 4:
*uParam2={
238.2009f, -1979.512f, 19.9838f 
};
*uParam3=229.0376f;
break;
case 5:
*uParam2={
-445.2993f, 159.6719f, 77.0803f 
};
*uParam3=177.4463f;
break;
case 6:
*uParam2={
-1003.048f, -2074.005f, 11.4279f 
};
*uParam3=312.3971f;
break;
case 7:
*uParam2={
-1302.906f, -790.8793f, 16.5494f 
};
*uParam3=218.4739f;
break;
case 8:
*uParam2={
-839.7902f, -2694.595f, 12.8121f 
};
*uParam3=262.2745f;
break;
case 9:
*uParam2={
242.0532f, -2957.304f, 4.8795f 
};
*uParam3=206.7359f;
break;
case 10:
*uParam2={
1519.096f, -2198.799f, 76.0507f 
};
*uParam3=276.3806f;
break;
case 11:
*uParam2={
-293.2805f, -2718.856f, 5.0003f 
};
*uParam3=314.7322f;
break;
case 12:
*uParam2={
517.1236f, -596.8082f, 23.7995f 
};
*uParam3=196.9468f;
break;
case 13:
*uParam2={
-488.2077f, -1801.373f, 20.2465f 
};
*uParam3=44.8509f;
break;
case 14:
*uParam2={
-345.6657f, -1351.348f, 30.2847f 
};
*uParam3=146.9459f;
break;
case 15:
*uParam2={
292.9702f, 371.4247f, 104.3915f 
};
*uParam3=75.7126f;
break;
case 16:
*uParam2={
905.4782f, -1560.715f, 29.7175f 
};
*uParam3=290.4099f;
break;
case 17:
*uParam2={
711.2572f, -911.7263f, 22.7077f 
};
*uParam3=316.5199f;
break;
case 18:
*uParam2={
1091.211f, -2194.509f, 30.1066f 
};
*uParam3=20.739f;
break;
case 19:
*uParam2={
989.2725f, -2531.751f, 27.302f 
};
*uParam3=319.7745f;
break;
case 20:
*uParam2={
-245.9971f, 108.1838f, 68.557f 
};
*uParam3=28.2604f;
break;
case 21:
*uParam2={
562.0646f, -1949.79f, 23.9592f 
};
*uParam3=6.5821f;
break;
case 22:
*uParam2={
76.4564f, -2200.17f, 0.6006f 
};
*uParam3=183.6653f;
break;
default:
break;
}
break;
}}

int func_183(float fParam0, var uParam1, var uParam2){
float fVar0;
if(func_358()){
func_184(uParam1, &fVar0, uParam2);
if(*uParam1 > -1){
if(fVar0 < fParam0){
return 1;
}}}
return 0;
}


void func_184(var uParam0, var uParam1, var uParam2){
int iVar0[2];
var uVar1[2];
int iVar2;
float fVar3;
int iVar4;
int iVar5;
func_257(&(iVar0[0]), &(uVar1[0]));
func_185(&(iVar0[1]), &(uVar1[1]));
iVar2=-1;
fVar3=999999.9f;
iVar4=-1;
iVar5=0;
while (iVar5 < iVar0){
if(uVar1[iVar5] < fVar3){
fVar3=uVar1[iVar5];
iVar2=iVar0[iVar5];
iVar4=iVar5;
}
iVar5++;
}
*uParam0=iVar2;
*uParam1=fVar3;
*uParam2=iVar4;
}


void func_185(var uParam0, var uParam1){
int iVar0;
float fVar1;
struct<3> Var2;
struct<3> Var3;
float fVar4;
int iVar5;
iVar0=-1;
fVar1=1E+07f;
Var2={
func_189(PLAYER::PLAYER_ID()) 
};
Var2.f_2=0f;
iVar5=0;
while (iVar5 < 23){
if(iVar5 > 0){
if(func_188(iVar5)){
Var3={
func_186(iVar5) 
};
Var3.f_2=0f;
fVar4=vdist(Var2, Var3);
if(fVar4 < fVar1){
fVar1=fVar4;
iVar0=iVar5;
}}}
iVar5++;
}
*uParam0=iVar0;
*uParam1=fVar1;
}


Vector3 func__186(int iParam0){
struct<3> Var0;
Var0={
0f, 0f, 0f 
};
if(!func_187(iParam0)){
return Var0;
}
switch (iParam0){
case 1:
Var0={
50.9205f, -2560.01f, 6f 
};
break;
case 2:
Var0={
-1074.852f, -1257.452f, 5.6938f 
};
break;
case 3:
Var0={
901.936f, -1019.425f, 34.9666f 
};
break;
case 4:
Var0={
253.9006f, -1955.933f, 22.9477f 
};
break;
case 5:
Var0={
-426.279f, 180.9043f, 80.6855f 
};
break;
case 6:
Var0={
-1050.36f, -2023.939f, 12.1616f 
};
break;
case 7:
Var0={
-1275.378f, -815.4295f, 17.1148f 
};
break;
case 8:
Var0={
-883.2906f, -2730.542f, 12.8285f 
};
break;
case 9:
Var0={
269.6765f, -3016.279f, 5.7176f 
};
break;
case 10:
Var0={
1561.402f, -2138.697f, 77.5275f 
};
break;
case 11:
Var0={
-303.7892f, -2698.39f, 6.0003f 
};
break;
case 12:
Var0={
507.2061f, -649.5859f, 24.7512f 
};
break;
case 13:
Var0={
-525.8206f, -1775.87f, 21.3501f 
};
break;
case 14:
Var0={
-291.6372f, -1352.556f, 31.3146f 
};
break;
case 15:
Var0={
348.6436f, 324.428f, 104.3185f 
};
break;
case 16:
Var0={
922.0838f, -1561.299f, 29.7475f 
};
break;
case 17:
Var0={
763.7448f, -885.2086f, 25.0869f 
};
break;
case 18:
Var0={
1043.884f, -2172.603f, 30.471f 
};
break;
case 19:
Var0={
1001.659f, -2511.88f, 28.302f 
};
break;
case 20:
Var0={
-263.138f, 194.3424f, 85.184f 
};
break;
case 21:
Var0={
547.8112f, -1942.514f, 23.9851f 
};
break;
case 22:
Var0={
88.9678f, -2216.882f, 6.0613f 
};
break;
}
return Var0;
}

int func_187(int iParam0){
if(iParam0 < 1 || iParam0 > 22){
return 0;
}
return 1;
}

int func_188(int iParam0){
int iVar0;
if(func_187(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}


Vector3 func__189(int iParam0){
struct<3> Var0;
if(HUD::DOES_BLIP_EXIST(Global_2646835[iParam0])){
Var0={
func_256(Global_2646835[iParam0]) 
};
}elseif(HUD::DOES_BLIP_EXIST(Global_2646835.f_33[iParam0]) && !iParam0==Global_2672524){
Var0={
func_256(Global_2646835.f_33[iParam0]) 
};
}
if(vmag(Var0) > 0f){
return Var0;
}
return func_190(iParam0);
}


Vector3 func__190(int iParam0){
int iVar0;
struct<3> Var1;
int iVar2;
if(Global_2644640){
if(func_255(iParam0)){
Var1={
func_254(iParam0) 
};
if(vmag(Var1) > 0f){
return Var1;
}}
if(Global_2657704[iParam0 /*463*/].f_73.f_11){
if(vmag(Global_2657704[iParam0 /*463*/].f_73.f_12) > 0f){
return Global_2657704[iParam0 /*463*/].f_73.f_12;
}}}
if(Global_1853988[iParam0 /*867*/].f_267.f_33 > 0){
Var1={
func_253(func_269(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33)) 
};
if(vmag(Var1) > 0f){
return Var1;
}}else{
func_251(func_181(iParam0), &iVar0);
if(iVar0 > 0){
Var1={
func_253(func_269(iVar0)) 
};
if(vmag(Var1) > 0f){
return Var1;
}}}
if(func_250(iParam0)){
Var1={
func_193(iParam0) 
};
if(vmag(Var1) > 0f){
return Var1;
}}
if(func_192(iParam0)){
iVar2=func_191(iParam0);
if(iVar2 > -1){
Var1={
Global_1950844.f_543[iVar2 /*3*/] 
};
if(vmag(Var1) > 0f){
return Var1;
}}}
if(!Global_2644640){
if(func_255(iParam0)){
Var1={
func_254(iParam0) 
};
if(vmag(Var1) > 0f){
return Var1;
}}
if(Global_2657704[iParam0 /*463*/].f_73.f_11){
if(vmag(Global_2657704[iParam0 /*463*/].f_73.f_12) > 0f){
return Global_2657704[iParam0 /*463*/].f_73.f_12;
}}}
return func_181(iParam0);
}

int func_191(int iParam0){
if(iParam0 !=func_5()){
return Global_2657704[iParam0 /*463*/].f_321.f_16;
}
return -1;
}

int func_192(int iParam0){
int iVar0;
if(iParam0 !=func_5() && (func_146(iParam0, 1, 1) || Global_2635560.f_2780)){
iVar0=MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 1);
return iVar0;
}
return 0;
}


Vector3 func__193(int iParam0){
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
if(iParam0==func_5()){}
if(func_249(iParam0)){
iVar0=func_248(iParam0);
if(iVar0 !=func_5()){
if(!func_247(iVar0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_254[iVar0 /*3*/][1])){
return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_254[iVar0 /*3*/][1], 0);
}else{
return Global_2657704[func_248(iParam0) /*463*/].f_321.f_12;
}}else{
iVar1=func_244(iVar0);
if(!iVar1==-1){
return Global_1950844.f_543[iVar1 /*3*/];
}}}}elseif(func_243(iParam0)){
iVar2=func_242(iParam0);
if(iVar2 !=func_5()){
if(!func_241(iVar2)){
if(ENTITY::DOES_ENTITY_EXIST(Global_1968944[iVar2])){
return ENTITY::GET_ENTITY_COORDS(Global_1968944[iVar2], 0);
}else{
return Global_2657704[func_248(iParam0) /*463*/].f_321.f_12;
}}else{
iVar3=160;
if(!iVar3==-1){
return Global_1950844.f_543[iVar3 /*3*/];
}}}}elseif(func_240(iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_308)){
return ENTITY::GET_ENTITY_COORDS(Global_2794162.f_308, 0);
}}elseif(func_239(iParam0) && !func_238(iParam0)){
iVar4=Global_2657704[iParam0 /*463*/].f_321.f_10;
if(iVar4 !=func_5()){
iVar5=func_244(iVar4);
if(!iVar5==-1){
return Global_1950844.f_543[iVar5 /*3*/];
}}}elseif(func_237(iParam0) && !func_236(iParam0)){
if(func_250(iParam0) && func_235()){
return Global_1950844.f_543[Global_2657704[iParam0 /*463*/].f_321.f_7 /*3*/];
}
iVar6=Global_2657704[iParam0 /*463*/].f_321.f_10;
if(iVar6 !=func_5()){
if(func_234(iVar6)){
iVar7=func_231(iVar6);
if(iVar7 !=-1){
return Global_1950844.f_543[iVar7 /*3*/];
}}}}elseif(func_230(iParam0)){
iVar8=func_229(iParam0);
if(iVar8 !=func_5()){
if(!func_228(iVar8) && !func_227(iVar8)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_351[iVar8])){
return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_351[iVar8], 0);
}else{
return Global_2657704[func_229(iParam0) /*463*/].f_321.f_20;
}}elseif(func_234(iVar8) && func_228(iVar8)){
iVar9=func_231(iVar8);
if(!iVar9==-1){
return Global_1950844.f_543[iVar9 /*3*/];
}}elseif(func_226(iVar8) && func_227(iVar8)){
iVar10=func_223(iVar8);
if(!iVar10==-1){
return Global_1950844.f_543[iVar10 /*3*/];
}}}}elseif(func_222(iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310)){
return ENTITY::GET_ENTITY_COORDS(Global_2794162.f_310, 0);
}}elseif(func_221(iParam0) && !func_220(iParam0)){
iVar11=Global_2657704[iParam0 /*463*/].f_321.f_10;
if(iVar11 !=func_5()){
if(func_219(iVar11)){
iVar12=func_216(iVar11);
if(iVar12 !=-1){
return func_215(iVar12);
}}}}elseif(func_214(iParam0) && !func_213(iParam0)){
iVar13=Global_2657704[iParam0 /*463*/].f_321.f_10;
if(iVar13 !=func_5()){
if(func_212(iVar13)){
iVar14=func_209(iVar13);
if(iVar14 !=-1){
return Global_1950844.f_543[iVar14 /*3*/];
}}}}elseif(func_208(iParam0, 0)){
iVar15=func_207(iParam0);
if(iVar15 !=func_5()){
if(!func_206(iVar15)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_384[iVar15])){
return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_384[iVar15], 0);
}else{
return Global_1895156[func_207(iParam0) /*609*/].f_591;
}}else{
iVar16=func_209(iVar15);
if(!iVar16==-1){
return Global_1950844.f_543[iVar16 /*3*/];
}}}}elseif(func_205(iParam0)){
return -366.7f, -1909.6f, 20f;
}elseif(func_204(iParam0)){
iVar17=func_200(iParam0);
if(iVar17 !=func_5()){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_417[iVar17])){
return ENTITY::GET_ENTITY_COORDS(Global_2672524.f_417[iVar17], 0);
}else{
return Global_1914706[iVar17 /*299*/].f_51;
}}else{
return 0f, 0f, 0f;
}}
if(func_221(iParam0)){
return func_215(Global_2657704[iParam0 /*463*/].f_321.f_7);
}
if(func_194(iParam0)){
return 965.8165f, 42.25042f, 122.1267f;
}
return Global_1950844.f_543[Global_2657704[iParam0 /*463*/].f_321.f_7 /*3*/];
}

int func_194(int iParam0){
if(((func_199(iParam0) || func_198(iParam0)) || func_197(iParam0)) || func_195(iParam0)){
return 1;
}
return 0;
}

int func_195(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
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

int func_197(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==15;
}}}
return 0;
}

int func_198(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==16;
}}}
return 0;
}

int func_199(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==14;
}}}
return 0;
}

int func_200(int iParam0){
int iVar0;
if(iParam0==func_5()){
return iParam0;
}
if(func_203(iParam0) !=-1){
iVar0=func_196(func_203(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_201(iParam0, 0)){
return func_6(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_5();
}
return Global_2657704[iParam0 /*463*/].f_321.f_10;
}
return func_5();
}


bool func_201(int iParam0, bool bParam1){
if(!func_7(iParam0)){
return 0;
}
if(!bParam1){
if(func_202(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_5();
}

int func_202(int iParam0){
if(func_7(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_203(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7;
}elseif(((Global_1575063 || Global_2635560.f_2780) && iParam0==PLAYER::PLAYER_ID()) && func_146(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7;
}}
return -1;
}

int func_204(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==20;
}}elseif(((Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_1575063) && iParam0==PLAYER::PLAYER_ID()) && func_146(iParam0, 1, 0)){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==20;
}}
return 0;
}

int func_205(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==13;
}}}
return 0;
}

int func_206(int iParam0){
if(iParam0 !=func_5()){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_3, 4);
}
return 0;
}

int func_207(int iParam0){
if(iParam0==func_5()){
return iParam0;
}
return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_208(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_5()){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==12;
}}}
return 0;
}

int func_209(int iParam0){
int iVar0;
if(iParam0 !=func_5()){
iVar0=func_211(iParam0);
if(iVar0 !=0){
return func_210(iVar0);
}}
return -1;
}

int func_210(int iParam0){
switch (iParam0){
case 1:
return 102;
case 2:
return 103;
case 3:
return 104;
case 4:
return 105;
case 5:
return 106;
case 6:
return 107;
case 7:
return 108;
case 8:
return 109;
case 9:
return 110;
case 10:
return 111;
default:
}
return -1;
}

int func_211(int iParam0){
if(iParam0 !=func_5()){
return Global_1853988[iParam0 /*867*/].f_267.f_311;
}
return 0;
}

int func_212(int iParam0){
if(iParam0 !=func_5()){
if(Global_1853988[iParam0 /*867*/].f_267.f_311 !=0){
return 1;
}}
return 0;
}

int func_213(int iParam0){
if(iParam0 !=func_5()){
if(func_214(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_214(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==11;
}}}
return 0;
}


Vector3 func__215(int iParam0){
switch (iParam0){
case 102:
return 750.5f, -1322.3f, 26.2802f;
case 103:
return 331.9f, -974.9f, 30f;
case 104:
return -146f, -1270f, 28.3088f;
case 105:
return -17.7f, 225.7f, 106.7566f;
case 106:
return 894.4f, -2106.4f, 29.4768f;
case 107:
return -668f, -2431.5f, 12.9444f;
case 108:
return 213.4f, -3166.6f, 4.7903f;
case 109:
return 366.6f, 237.6f, 104.9f;
case 110:
return -1275.3f, -666.8f, 25.6332f;
case 111:
return -1188.8f, -1156.9f, 4.6582f;
default:
}
return Global_1950844.f_543[iParam0 /*3*/];
}

int func_216(int iParam0){
int iVar0;
if(iParam0 !=func_5()){
iVar0=func_218(iParam0);
if(iVar0 !=0){
return func_217(iVar0);
}}
return -1;
}

int func_217(int iParam0){
switch (iParam0){
case 1:
return 102;
case 2:
return 103;
case 3:
return 104;
case 4:
return 105;
case 5:
return 106;
case 6:
return 107;
case 7:
return 108;
case 8:
return 109;
case 9:
return 110;
case 10:
return 111;
default:
}
return -1;
}

int func_218(int iParam0){
if(iParam0 !=func_5()){
return Global_1853988[iParam0 /*867*/].f_267.f_354;
}
return 0;
}

int func_219(int iParam0){
if(iParam0 !=func_5()){
return Global_1853988[iParam0 /*867*/].f_267.f_354 !=0;
}
return 0;
}

int func_220(int iParam0){
if(iParam0 !=func_5()){
if(func_221(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_221(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==11;
}}}
return 0;
}

int func_222(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==10;
}}}
return 0;
}

int func_223(int iParam0){
int iVar0;
if(iParam0==func_5()){
return -1;
}
iVar0=func_225(iParam0);
if(!iVar0==0){
return func_224(iVar0);
}
return -1;
}

int func_224(int iParam0){
switch (iParam0){
case 1:
return 83;
break;
case 2:
return 84;
break;
case 3:
return 85;
break;
case 4:
return 86;
break;
case 5:
return 87;
break;
}
return -1;
}

int func_225(int iParam0){
if(iParam0==func_5()){
return 0;
}
return Global_1853988[iParam0 /*867*/].f_267.f_293;
}

int func_226(int iParam0){
if(iParam0 !=func_5()){
return Global_1853988[iParam0 /*867*/].f_267.f_293 !=0;
}
return 0;
}

int func_227(int iParam0){
if(iParam0 !=func_5()){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_6, 16);
}
return 0;
}

int func_228(int iParam0){
if(iParam0 !=func_5()){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_2, 6);
}
return 0;
}

int func_229(int iParam0){
if(iParam0==func_5()){
return iParam0;
}
return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_230(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_5()){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==8;
}}}
return 0;
}

int func_231(int iParam0){
int iVar0;
if(iParam0==func_5()){
return -1;
}
iVar0=func_233(iParam0);
if(!iVar0==0){
return func_232(iVar0);
}
return -1;
}

int func_232(int iParam0){
switch (iParam0){
case 1:
return 89;
break;
case 2:
return 90;
break;
case 3:
return 91;
break;
case 4:
return 92;
break;
case 5:
return 93;
break;
case 6:
return 94;
break;
case 7:
return 95;
break;
case 8:
return 96;
break;
case 9:
return 97;
break;
}
return -1;
}

int func_233(int iParam0){
if(iParam0==func_5()){
return 0;
}
return Global_1853988[iParam0 /*867*/].f_267.f_300;
}

int func_234(int iParam0){
if(iParam0 !=func_5()){
return Global_1853988[iParam0 /*867*/].f_267.f_300 !=0;
}
return 0;
}

int func_235(){
if(MISC::IS_BIT_SET(Global_1950844.f_2, 13) || Global_1950844.f_3348){
return 1;
}
return 0;
}

int func_236(int iParam0){
if(iParam0==func_5()){
return 0;
}
if(func_237(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_237(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==9;
}}}
return 0;
}

int func_238(int iParam0){
if(iParam0==func_5()){
return 0;
}
if(func_239(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_239(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==4;
}}}
return 0;
}

int func_240(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==6;
}}}
return 0;
}

int func_241(int iParam0){
if(iParam0 !=func_5()){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_5, 26);
}
return 0;
}

int func_242(int iParam0){
if(iParam0==func_5()){
return iParam0;
}
return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_243(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_5()){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==25;
}}}
return 0;
}

int func_244(int iParam0){
int iVar0;
if(iParam0==func_5()){
return -1;
}
iVar0=func_246(iParam0);
if(!iVar0==0){
return func_245(iVar0);
}
return -1;
}

int func_245(int iParam0){
switch (iParam0){
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
return 30;
break;
case 10:
return 31;
break;
case 11:
return 32;
break;
case 12:
return 33;
break;
case 13:
return 34;
break;
case 14:
return 35;
break;
case 15:
return 36;
break;
case 16:
return 37;
break;
case 17:
return 38;
break;
case 18:
return 39;
break;
case 19:
return 40;
break;
case 20:
return 41;
break;
case 32:
return 159;
break;
case 21:
return 70;
break;
case 22:
return 71;
break;
case 23:
return 72;
break;
case 24:
return 73;
break;
case 25:
return 74;
break;
case 26:
return 75;
break;
case 27:
return 76;
break;
case 28:
return 77;
break;
case 29:
return 78;
break;
case 30:
return 79;
break;
case 31:
return 80;
break;
}
return -1;
}

int func_246(int iParam0){
if(iParam0==func_5()){
return 0;
}
return Global_1853988[iParam0 /*867*/].f_267.f_193[5 /*13*/];
}

int func_247(int iParam0){
if(iParam0 !=func_5()){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321, 6);
}
return 0;
}

int func_248(int iParam0){
if(iParam0==func_5()){
return iParam0;
}
return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_249(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_5()){
return func_196(Global_2657704[iParam0 /*463*/].f_321.f_7)==5;
}}}
return 0;
}

int func_250(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}elseif((Global_1575063 && iParam0==PLAYER::PLAYER_ID()) && func_146(iParam0, 1, 0)){
return Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1;
}}
return 0;
}


void func_251(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
iVar0=1;
iVar1=7;
while (iVar0 <=iVar1){
if(func_252(Param0, iVar0, 0)){
*uParam1=iVar0;
return;
}
iVar0++;
}
iVar0=34;
iVar1=43;
while (iVar0 <=iVar1){
if(func_252(Param0, iVar0, 0)){
*uParam1=iVar0;
return;
}
iVar0++;
}
iVar0=61;
iVar1=65;
while (iVar0 <=iVar1){
if(func_252(Param0, iVar0, 0)){
*uParam1=iVar0;
return;
}
iVar0++;
}
iVar0=8;
if(func_252(Param0, iVar0, 0)){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33 > 0){
*uParam1=Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33;
}elseif(Global_2635146.f_1 > 0){
*uParam1=Global_2635146.f_1;
}else{
*uParam1=iVar0;
}
return;
}
iVar0=17;
if(func_252(Param0, iVar0, 0)){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33 > 0){
*uParam1=Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33;
}elseif(Global_2635146.f_1 > 0){
*uParam1=Global_2635146.f_1;
}else{
*uParam1=iVar0;
}
return;
}}

int func_252(struct<3> Param0, int iParam1, float fParam2){
int iVar0;
struct<3> Var1[3];
struct<3> Var2[3];
int iVar3;
if(iParam1 !=999){
iVar3=0;
while (iVar3 < 3){
if(Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2){
Var1[iVar3 /*3*/]={
Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] 
};
Var2[iVar3 /*3*/]={
Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 
};
}else{
Var1[iVar3 /*3*/]={
Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 
};
Var2[iVar3 /*3*/]={
Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] 
};
}
Var1[iVar3 /*3*/].f_2=(Var1[iVar3 /*3*/].f_2 + fParam2);
Var2[iVar3 /*3*/].f_2=(Var2[iVar3 /*3*/].f_2 - fParam2);
iVar3++;
}
if(((Global_1312228[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1)) || (Global_1312228[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1312228[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 !=0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1))){
return 1;
}}else{
iVar0=1;
while (iVar0 <=7){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
iVar0=34;
while (iVar0 <=43){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
iVar0=61;
while (iVar0 <=65){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
iVar0=73;
while (iVar0 <=76){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
iVar0=77;
while (iVar0 <=82){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
iVar0=83;
while (iVar0 <=85){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
iVar0=87;
while (iVar0 <=90){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
iVar0=91;
while (iVar0 <=102){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
iVar0=103;
while (iVar0 <=113){
if(func_252(Param0, iVar0, fParam2)){
return 1;
}
iVar0++;
}
if(func_252(Param0, 8, fParam2)){
return 1;
}
if(func_252(Param0, 17, fParam2)){
return 1;
}}
return 0;
}


Vector3 func__253(int iParam0){
struct<3> Var0;
switch (iParam0){
case 1:
Var0={
-773.4775f, 310.6321f, 84.6981f 
};
break;
case 2:
Var0={
-252.5713f, -949.9199f, 30.221f 
};
break;
case 3:
Var0={
-1443.094f, -544.7684f, 33.7424f 
};
break;
case 4:
Var0={
-913.85f, -455.1392f, 38.5999f 
};
break;
case 5:
Var0={
-47.3145f, -585.9766f, 36.9593f 
};
break;
case 6:
Var0={
-932.7474f, -383.9246f, 37.9613f 
};
break;
case 7:
Var0={
-619.1315f, 37.8841f, 42.5883f 
};
break;
case 8:
Var0={
284.9614f, -159.9891f, 63.6221f 
};
break;
case 9:
Var0={
2.8889f, 35.7762f, 70.5349f 
};
break;
case 10:
Var0={
9.74f, 84.6906f, 77.3975f 
};
break;
case 11:
Var0={
-512.1465f, 111.2223f, 62.351f 
};
break;
case 12:
Var0={
-197.3405f, 88.1053f, 68.7422f 
};
break;
case 13:
Var0={
-628.3212f, 165.8364f, 60.1651f 
};
break;
case 14:
Var0={
-973.3757f, -1429.425f, 6.6791f 
};
break;
case 15:
Var0={
-829.1362f, -855.0104f, 18.6297f 
};
break;
case 16:
Var0={
-757.5739f, -755.5591f, 25.5697f 
};
break;
case 17:
Var0={
-45.1289f, -57.0925f, 62.2531f 
};
break;
case 18:
Var0={
-206.7293f, 184.142f, 79.3279f 
};
break;
case 19:
Var0={
-811.7045f, -984.1961f, 13.1538f 
};
break;
case 20:
Var0={
-664.0032f, -853.6744f, 23.4325f 
};
break;
case 21:
Var0={
-1534.025f, -324.5247f, 46.5237f 
};
break;
case 22:
Var0={
-1561.381f, -412.1974f, 41.389f 
};
break;
case 23:
Var0={
-1608.851f, -429.184f, 39.439f 
};
break;
case 24:
Var0={
964.3583f, -1034.199f, 39.8303f 
};
break;
case 25:
Var0={
894.2868f, -885.5679f, 26.1212f 
};
break;
case 26:
Var0={
821.1741f, -924.1658f, 25.1998f 
};
break;
case 27:
Var0={
759.7933f, -759.8209f, 25.759f 
};
break;
case 28:
Var0={
844.7289f, -1164.1f, 24.2681f 
};
break;
case 29:
Var0={
526.2521f, -1604.613f, 28.2625f 
};
break;
case 30:
Var0={
572.0462f, -1570.736f, 27.4904f 
};
break;
case 31:
Var0={
722.2852f, -1190.617f, 23.282f 
};
break;
case 32:
Var0={
497.6212f, -1494.084f, 28.2893f 
};
break;
case 33:
Var0={
480.3127f, -1549.937f, 28.2828f 
};
break;
case 34:
Var0={
-68.702f, 6426.148f, 30.439f 
};
break;
case 35:
Var0={
-247.4374f, 6240.294f, 30.4892f 
};
break;
case 36:
Var0={
2554.165f, 4668.059f, 33.0233f 
};
break;
case 37:
Var0={
2461.22f, 1589.255f, 32.0443f 
};
break;
case 38:
Var0={
-2203.335f, 4244.427f, 47.3305f 
};
break;
case 39:
Var0={
218.0665f, 2601.817f, 44.7668f 
};
break;
case 40:
Var0={
186.1719f, 2786.343f, 45.0144f 
};
break;
case 41:
Var0={
642.0746f, 2791.729f, 40.9795f 
};
break;
case 42:
Var0={
-1130.938f, 2701.133f, 17.8004f 
};
break;
case 43:
Var0={
-10.944f, -1646.76f, 28.3125f 
};
break;
case 44:
Var0={
1024.263f, -2398.404f, 29.1261f 
};
break;
case 45:
Var0={
870.8577f, -2232.323f, 29.5508f 
};
break;
case 46:
Var0={
-663.8541f, -2380.389f, 12.9446f 
};
break;
case 47:
Var0={
-1088.616f, -2235.098f, 12.2182f 
};
break;
case 48:
Var0={
-342.5126f, -1468.675f, 29.6107f 
};
break;
case 49:
Var0={
-1241.54f, -259.8841f, 37.9445f 
};
break;
case 50:
Var0={
899.8448f, -147.528f, 75.5674f 
};
break;
case 51:
Var0={
-1405.411f, 526.8572f, 122.8361f 
};
break;
case 52:
Var0={
1341.552f, -1578.037f, 53.4443f 
};
break;
case 53:
Var0={
-105.7029f, 6528.539f, 29.1719f 
};
break;
case 54:
Var0={
-302.3985f, 6327.434f, 31.8918f 
};
break;
case 55:
Var0={
-15.258f, 6557.378f, 32.2454f 
};
break;
case 56:
Var0={
1899.673f, 3773.178f, 31.8829f 
};
break;
case 57:
Var0={
1662.121f, 4776.317f, 41.0075f 
};
break;
case 58:
Var0={
-178.2278f, 490.886f, 134.0466f 
};
break;
case 59:
Var0={
339.5743f, 439.7083f, 145.5896f 
};
break;
case 60:
Var0={
-764.6163f, 618.3144f, 137.5536f 
};
break;
case 61:
Var0={
-679.5461f, 592.5162f, 139.693f 
};
break;
case 62:
Var0={
124.4571f, 551.8877f, 181.658f 
};
break;
case 63:
Var0={
-563.7349f, 689.099f, 151.6596f 
};
break;
case 64:
Var0={
-743.0927f, 590.0371f, 140.9221f 
};
break;
case 65:
Var0={
-861.252f, 684.8923f, 146.2643f 
};
break;
case 66:
Var0={
-1292.456f, 440.9454f, 93.7572f 
};
break;
case 67:
Var0={
369.5891f, 417.4813f, 136.8344f 
};
break;
case 68:
Var0={
-1581.501f, -558.2578f, 33.9528f 
};
break;
case 69:
Var0={
-1379.546f, -499.1783f, 32.1574f 
};
break;
case 70:
Var0={
-117.5296f, -605.7157f, 35.2857f 
};
break;
case 71:
Var0={
-67.0943f, -802.4415f, 43.2273f 
};
break;
case 72:
Var0={
254.1892f, -1809.183f, 26.1805f 
};
break;
case 73:
Var0={
-1472.278f, -920.0677f, 8.9683f 
};
break;
case 74:
Var0={
38.9478f, -1026.629f, 28.6354f 
};
break;
case 75:
Var0={
46.903f, 2789.825f, 57.1124f 
};
break;
case 76:
Var0={
-342.3246f, 6065.316f, 30.4895f 
};
break;
case 77:
Var0={
1737.878f, 3709.088f, 33.1348f 
};
break;
case 78:
Var0={
939.7161f, -1459.204f, 30.467f 
};
break;
case 79:
Var0={
189.7624f, 309.7488f, 104.4714f 
};
break;
case 80:
Var0={
-21.9593f, -191.3618f, 51.5599f 
};
break;
case 81:
Var0={
2472.22f, 4110.493f, 36.9629f 
};
break;
case 82:
Var0={
-39.3286f, 6420.603f, 30.7017f 
};
break;
case 83:
Var0={
-1134.762f, -1568.848f, 3.4077f 
};
break;
}
return Var0;
}


Vector3 func__254(int iParam0){
return Global_2657704[iParam0 /*463*/].f_73.f_7;
}

int func_255(int iParam0){
if(Global_2657704[iParam0 /*463*/].f_73.f_6 !=-1){
return 1;
}
return 0;
}


Vector3 func__256(var uParam0){
int iVar0;
switch (HUD::GET_BLIP_INFO_ID_TYPE(uParam0)){
case 1:
case 2:
case 3:
iVar0=HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
return ENTITY::GET_ENTITY_COORDS(iVar0, 0);
}
break;
}
return HUD::GET_BLIP_COORDS(uParam0);
}


void func_257(var uParam0, var uParam1){
int iVar0;
float fVar1;
struct<3> Var2;
struct<3> Var3;
float fVar4;
int iVar5;
iVar0=-1;
fVar1=1E+07f;
Var2={
func_189(PLAYER::PLAYER_ID()) 
};
Var2.f_2=0f;
iVar5=-1;
iVar5=87;
while (iVar5 <=90){
if(func_258(iVar5)){
Var3={
Global_1312228[iVar5 /*1951*/].f_3[0 /*3*/] 
};
Var3.f_2=0f;
fVar4=vdist(Var2, Var3);
if(fVar4 < fVar1){
fVar1=fVar4;
iVar0=iVar5;
}}
iVar5++;
}
*uParam0=iVar0;
*uParam1=fVar1;
}

int func_258(int iParam0){
int iVar0;
if(iParam0 > 0){
iVar0=0;
while (iVar0 < 30){
if(func_264(iParam0, iVar0) && func_259(iVar0, -1)==iParam0){
return 1;
}
iVar0++;
}
if(iParam0==func_259(99, -1)){
return 1;
}}
return 0;
}

int func_259(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=iParam1;
if(iParam1==-1){
iVar0=func_12();
}
if(iParam0==7 && !Global_262145.f_17631){
return 0;
}
if(iParam0 >=1000){
iVar1=func_263(iParam0);
if(iVar1==0 && func_9(5396, iParam1) !=0){
return 1234;
}
if(func_262(-1) && iVar1==2){
return 1236;
}
if(func_219(PLAYER::PLAYER_ID()) && iVar1==1){
return 1237;
}
if(func_261(-1) && iVar1==3){
return 1238;
}}
if(iParam0==29){
if(func_260((iParam0 - 1), iVar0) > 0){
return 129;
}else{
return 0;
}}
if(iParam0==0){
return func_9(1279, iVar0);
}elseif(iParam0==99){
return func_9(12553, iVar0);
}elseif(iParam0 >=1){
if(iParam0 >=30){
return 0;
}
return func_260((iParam0 - 1), iVar0);
}
return 0;
}

int func_260(int iParam0, int iParam1){
if(iParam0 > 3){
iParam0++;
}
switch (iParam0){
case 0:
return func_9(1878, iParam1);
case 1:
return func_9(2269, iParam1);
case 2:
return func_9(2932, iParam1);
case 3:
return func_9(3061, iParam1);
case 5:
return func_9(3230, iParam1);
case 6:
return func_9(3233, iParam1);
case 7:
return func_9(3235, iParam1);
case 8:
return func_9(4023, iParam1);
case 9:
return func_9(4026, iParam1);
case 10:
return func_9(4029, iParam1);
case 11:
return func_9(4032, iParam1);
case 12:
return func_9(6113, iParam1);
case 13:
return func_9(6171, iParam1);
case 14:
return func_9(6549, iParam1);
case 15:
return func_9(6562, iParam1);
case 16:
return func_9(6565, iParam1);
case 17:
return func_9(6568, iParam1);
case 18:
return func_9(7286, iParam1);
case 19:
return func_9(7288, iParam1);
case 20:
return func_9(7290, iParam1);
case 21:
return func_9(8013, iParam1);
case 22:
return func_9(8537, iParam1);
case 23:
return func_9(8980, iParam1);
case 24:
return func_9(8983, iParam1);
case 25:
return func_9(9624, iParam1);
case 26:
return func_9(9913, iParam1);
case 27:
return func_9(10441, iParam1);
case 28:
return func_9(10444, iParam1);
case 29:
return func_9(10874, iParam1);
default:
}
return 0;
}


bool func_261(int iParam0){
return func_9(9517, iParam0) !=0;
}


bool func_262(int iParam0){
if(!Global_262145.f_24353){
return 0;
}
return func_9(7210, iParam0) !=0;
}

int func_263(int iParam0){
iParam0=(iParam0 - 1000);
if(iParam0 >=0 && iParam0 <=4){
return iParam0;
}
return -1;
}


bool func_264(int iParam0, int iParam1){
return func_266(iParam0)==func_265(iParam1);
}

int func_265(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 7:
case 23:
case 24:
case 27:
case 28:
return 0;
break;
case 5:
return 2;
break;
case 6:
return 1;
break;
case 8:
case 9:
case 10:
return 3;
break;
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
case 25:
case 26:
case 29:
return 5;
break;
case 99:
return 4;
break;
}
return -1;
}

int func_266(int iParam0){
switch (iParam0){
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
case 84:
case 85:
return 0;
break;
case 86:
return 1;
break;
case 87:
case 88:
case 89:
case 90:
return 2;
break;
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
case 103:
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
case 114:
return 3;
break;
case 115:
case 116:
case 117:
case 118:
case 119:
case 120:
case 121:
case 122:
case 123:
case 124:
case 125:
case 126:
case 127:
case 128:
case 129:
case 130:
case 1234:
case 1235:
case 1236:
case 1237:
case 1238:
case 1239:
return 5;
break;
}
return -1;
}


Vector3 func__267(int iParam0){
if(func_268(iParam0)){
switch (iParam0){
case 68:
return -1582.094f, -569.5358f, 115.3326f;
break;
case 69:
return -1391.652f, -477.7002f, 90.25584f;
break;
case 70:
return -144.5361f, -593.3737f, 210.7752f;
break;
case 71:
return -75.06329f, -818.9553f, 325.1753f;
break;
}}
return 0f, 0f, -1000f;
}

int func_268(int iParam0){
if(((iParam0==68 || iParam0==69) || iParam0==70) || iParam0==71){
return 1;
}
return 0;
}

int func_269(int iParam0){
switch (iParam0){
case 1:
case 2:
case 3:
case 4:
case 61:
case 83:
case 84:
case 85:
return 1;
break;
case 5:
case 6:
return 2;
break;
case 7:
case 34:
case 62:
return 3;
break;
case 35:
case 36:
case 37:
return 4;
break;
case 38:
case 39:
case 65:
return 5;
break;
case 40:
case 41:
case 63:
return 6;
break;
case 42:
case 43:
case 64:
return 7;
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
case 11:
return 11;
break;
case 12:
return 12;
break;
case 13:
return 13;
break;
case 14:
return 14;
break;
case 15:
return 15;
break;
case 16:
return 16;
break;
case 17:
return 17;
break;
case 18:
return 18;
break;
case 19:
return 19;
break;
case 20:
return 20;
break;
case 21:
return 21;
break;
case 22:
return 22;
break;
case 23:
return 23;
break;
case 24:
return 24;
break;
case 25:
return 25;
break;
case 26:
return 26;
break;
case 27:
return 27;
break;
case 28:
return 28;
break;
case 29:
return 29;
break;
case 30:
return 30;
break;
case 31:
return 31;
break;
case 32:
return 32;
break;
case 33:
return 33;
break;
case 44:
return 34;
break;
case 45:
return 35;
break;
case 46:
return 36;
break;
case 47:
return 37;
break;
case 48:
return 38;
break;
case 49:
return 39;
break;
case 50:
return 40;
break;
case 51:
return 41;
break;
case 52:
return 42;
break;
case 53:
return 43;
break;
case 54:
return 44;
break;
case 55:
return 45;
break;
case 56:
return 46;
break;
case 57:
return 47;
break;
case 58:
return 48;
break;
case 59:
return 49;
break;
case 60:
return 50;
break;
case 66:
return 51;
break;
case 67:
return 52;
break;
case 68:
return 53;
break;
case 69:
return 54;
break;
case 70:
return 55;
break;
case 71:
return 56;
break;
case 72:
return 57;
break;
case 73:
return 58;
break;
case 74:
return 59;
break;
case 75:
return 60;
break;
case 76:
return 61;
break;
case 77:
return 62;
break;
case 78:
return 63;
break;
case 79:
return 64;
break;
case 80:
return 65;
break;
case 81:
return 66;
break;
case 82:
return 67;
break;
case 87:
case 103:
case 104:
case 105:
return 68;
break;
case 88:
case 106:
case 107:
case 108:
return 69;
break;
case 89:
case 109:
case 110:
case 111:
return 70;
break;
case 90:
case 112:
case 113:
case 114:
return 71;
break;
case 91:
return 72;
break;
case 92:
return 73;
break;
case 93:
return 74;
break;
case 94:
return 75;
break;
case 95:
return 76;
break;
case 96:
return 77;
break;
case 97:
return 78;
break;
case 98:
return 79;
break;
case 99:
return 80;
break;
case 100:
return 81;
break;
case 101:
return 82;
break;
case 102:
return 83;
break;
}
return 0;
}

int func_270(int iParam0){
if(func_146(iParam0, 0, 1)){
return func_271(func_181(iParam0));
}
return -1;
}

int func_271(struct<3> Param0){
int iVar0;
iVar0=87;
while (iVar0 <=90){
if(func_272(Param0, iVar0)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_272(struct<3> Param0, int iParam1){
switch (iParam1){
case 87:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, 0, 1)){
return 1;
}
break;
case 88:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, 0, 1)){
return 1;
}
break;
case 89:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, 0, 1)){
return 1;
}
break;
case 90:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, 0, 1)){
return 1;
}
break;
}
return 0;
}

int func_273(int iParam0){
int iVar0;
iVar0=func_270(iParam0);
if(iVar0 !=-1){
return 1;
}
return 0;
}

int func_274(){
int iVar0;
iVar0=5000;
if(func_358()){
iVar0=3000;
}
return iVar0;
}

int func_275(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
}}
return 0;
}

int func_276(){
struct<3> Var0;
float fVar1;
if(!ENTITY::IS_ENTITY_DEAD(iLocal_1051, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iLocal_1051, 1) 
};
fVar1=(Var0.f_2 - Local_129.f_6.f_2);
if(fVar1 > 2f){
return 1;
}}
return 0;
}

int func_277(){
int iVar0;
if(iLocal_1020){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1051)){
if(!ENTITY::IS_ENTITY_IN_AIR(iLocal_1051)){
if(VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_1051)){
iVar0=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_1021));
if(iVar0 > 500){
return 0;
}
return 1;
}}}}else{
iLocal_1020=1;
}
uLocal_1021=NETWORK::GET_NETWORK_TIME();
return 1;
}


void func_278(){
float fVar0;
if(HUD::IS_WAYPOINT_ACTIVE()){
Local_129.f_10={
HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) 
};
Local_129.f_10.f_2=PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((Local_129.f_10 - 25f), (Local_129.f_10.f_1 - 25f), (Local_129.f_10 + 25f), (Local_129.f_10.f_1 + 25f));
fVar0=PATHFIND::GET_APPROX_FLOOR_FOR_AREA((Local_129.f_10 - 25f), (Local_129.f_10.f_1 - 25f), (Local_129.f_10 + 25f), (Local_129.f_10.f_1 + 25f));
if((Local_129.f_10.f_2 - fVar0) < 20f){
Local_129.f_10.f_2=(Local_129.f_10.f_2 + 10f);
}elseif((Local_129.f_10.f_2 - fVar0) > 30f && (Local_129.f_10.f_2 - fVar0) < 70f){
Local_129.f_10.f_2=(Local_129.f_10.f_2 + 40f);
}
func_279(0);
func_173(Local_129.f_10);
}}


void func_279(int iParam0){
MISC::CLEAR_BIT(&(Global_2794162.f_282), iParam0);
}

int func_280(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_96(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
Global_2883585=1;
return func_87(sParam2, iParam3, 0);
}

int func_281(){
struct<3> Var0;
if(!func_284()){
if(ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_129.f_4))){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_129.f_4), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_129.f_4), 0) 
};
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 50f, 50f, 150f, 0, 1, 0) && !func_282(PLAYER::PLAYER_ID())){
return 1;
}}}}
return 0;
}

int func_282(int iParam0){
if(func_283(Global_1853988[iParam0 /*867*/].f_267.f_33)){
return 1;
}
return 0;
}

int func_283(int iParam0){
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

int func_284(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


bool func_285(var uParam0){
return uParam0->f_1;
}


void func_286(){
switch (Local_129.f_23){
case 0:
if(MISC::IS_BIT_SET(Local_129.f_1, 8) || (!func_152(iLocal_1051) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051, 0))){
func_289();
Local_129.f_23=1;
}
break;
case 1:
if(!func_152(iLocal_1051)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) > 0){
Local_129.f_23=2;
}}
break;
case 2:
if(MISC::IS_BIT_SET(Local_129.f_1, 12)){
if(HUD::IS_WAYPOINT_ACTIVE()){
Local_129.f_23=3;
func_122(&uLocal_1038, 0, 0);
}}elseif(MISC::IS_BIT_SET(Local_129.f_1, 9)){
Local_129.f_23=3;
func_122(&uLocal_1038, 0, 0);
}elseif(MISC::IS_BIT_SET(Local_129.f_1, 10)){
Local_129.f_23=5;
}
break;
case 3:
if(!func_152(iLocal_1051)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0){
Local_129.f_23=1;
}elseif(MISC::IS_BIT_SET(Local_129.f_1, 10)){
Local_129.f_23=5;
}elseif(!HUD::IS_WAYPOINT_ACTIVE() || func_171(0)){
Local_129.f_10={
0f, 0f, 0f 
};
MISC::CLEAR_BIT(&(Local_129.f_1), 10);
MISC::CLEAR_BIT(&(Local_129.f_1), 9);
Local_129.f_23=2;
}}
break;
case 4:
if(Global_2694613.f_26){
if(func_287()){
func_514(0);
}}
break;
case 5:
if(!func_152(iLocal_1051)){
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) <=0 && !VEHICLE::IS_ANY_PED_RAPPELLING_FROM_HELI(iLocal_1051)){
if(func_146(Local_129.f_5, 1, 1) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::GET_PLAYER_PED(Local_129.f_5))){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(Local_129.f_5), joaat("script_task_rappel_from_heli")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(Local_129.f_5), joaat("script_task_rappel_from_heli")) !=0){
Local_129.f_23=6;
}}}elseif(!HUD::IS_WAYPOINT_ACTIVE() || func_171(0)){
Local_129.f_10={
0f, 0f, 0f 
};
MISC::CLEAR_BIT(&(Local_129.f_1), 10);
MISC::CLEAR_BIT(&(Local_129.f_1), 9);
Local_129.f_23=2;
}}
break;
case 6:
break;
}}

int func_287(){
int iVar0;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return 1;
}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_4)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_129.f_4)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_129.f_4);
}else{
func_288(&(Local_129.f_4));
iVar0=1;
}}else{
iVar0=1;
}
return iVar0;
}


void func_288(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0)){
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&uVar0);
}}


void func_289(){
int iVar0;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
iVar0=func_9(1191, -1);
if(!MISC::IS_BIT_SET(iVar0, 16)){
if(!func_152(iLocal_1051) && !func_151(Local_129.f_4)){
if(PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0) && !PED::IS_PED_BEING_JACKED(NETWORK::NET_TO_PED(Local_129.f_4))){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("HTX_HELPN");
if(func_291()){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(13);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("GB_HELI_BLIP");
}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iLocal_136);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("HTX_HELPB");
}
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, -1);
MISC::SET_BIT(&iVar0, 16);
func_290(1191, iVar0, -1, 1);
}}}}}


void func_290(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_10(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_291(){
if(iLocal_1051==Global_2794162.f_304 || iLocal_1051==Global_2794162.f_6028){
return 1;
}
return 0;
}


void func_292(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
MISC::CLEAR_BIT(&(Local_129.f_1), 9);
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
if(func_146(iVar1, 1, 1)){
if(!func_152(iLocal_1051)){
if(!MISC::IS_BIT_SET(Local_129.f_1, 8)){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_1051, Local_129.f_6, (7.5f * 1.5f), (7.5f * 1.5f), (7.5f * 1.5f), 0, 1, 0) && !func_277()){
MISC::SET_BIT(&(Local_129.f_1), 8);
}}
if(!MISC::IS_BIT_SET(Local_129.f_1, 10)){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_1051, Local_129.f_10, (7.5f * 1.5f), (7.5f * 1.5f), (10f * 2f), 0, 1, 0)){
MISC::SET_BIT(&(Local_129.f_1), 10);
}}
if(!MISC::IS_BIT_SET(Local_129.f_1, 9)){
if(MISC::IS_BIT_SET(Local_133[iVar0 /*3*/].f_1, 6)){
MISC::SET_BIT(&(Local_129.f_1), 9);
MISC::CLEAR_BIT(&(Local_133[iVar0 /*3*/].f_1), 6);
}}
if(Local_129.f_24 !=4){
if(MISC::IS_BIT_SET(Local_133[iVar0 /*3*/].f_1, 5)){
Local_129.f_24=4;
Local_129.f_13={
100000f, 100000f, 100000f 
};
MISC::CLEAR_BIT(&(Local_133[iVar0 /*3*/].f_1), 5);
}}
if(Local_129.f_24 !=5){
if(MISC::IS_BIT_SET(Local_133[iVar0 /*3*/].f_1, 8)){
if(func_310(iVar1) && func_296(iVar1)){
if(iLocal_120==-1){
iVar2=func_269(Global_1853988[iVar1 /*867*/].f_267[5]);
Local_129.f_29={
func_267(iVar2) + Vector(15f, 0f, 0f) 
};
}else{
iVar3=iLocal_120;
func_294(func_295(iVar3), &(Local_129.f_29));
Local_129.f_29={
Local_129.f_29 + Vector(40f, 0f, 0f) 
};
}
Local_129.f_24=5;
Local_129.f_23=4;
Local_129.f_28=iVar1;
func_173(Local_129.f_29);
}elseif(!ENTITY::IS_ENTITY_DEAD(iLocal_1051, 0) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1051)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_1051);
}else{
func_293();
Local_129.f_23=2;
Local_129.f_24=1;
func_172();
MISC::CLEAR_BIT(&(Local_129.f_1), 9);
MISC::CLEAR_BIT(&(Local_129.f_1), 10);
MISC::CLEAR_BIT(&(Local_129.f_1), 12);
if(HUD::IS_WAYPOINT_ACTIVE()){
HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
}}
}}}}}
iVar0++;
}}


void func_293(){
int iVar0;
iVar0=iLocal_1051;
if(ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
return;
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
}}


void func_294(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1={
54.191f, -2569.248f, 5.0046f 
};
break;
case 1:
*uParam1={
-1083.054f, -1261.893f, 4.534f 
};
break;
case 2:
*uParam1={
896.3665f, -1035.749f, 34.1096f 
};
break;
case 3:
*uParam1={
247.473f, -1956.943f, 22.1908f 
};
break;
case 4:
*uParam1={
-424.828f, 185.825f, 79.775f 
};
break;
case 5:
*uParam1={
-1042.482f, -2023.516f, 12.1616f 
};
break;
case 6:
*uParam1={
-1268.119f, -812.2741f, 16.1075f 
};
break;
case 7:
*uParam1={
-873.65f, -2735.948f, 12.9438f 
};
break;
case 8:
*uParam1={
274.5224f, -3015.413f, 4.6993f 
};
break;
case 9:
*uParam1={
1569.69f, -2129.792f, 77.3351f 
};
break;
case 10:
*uParam1={
-315.551f, -2698.654f, 6.5495f 
};
break;
case 11:
*uParam1={
499.81f, -651.982f, 23.909f 
};
break;
case 12:
*uParam1={
-528.5296f, -1784.573f, 20.5853f 
};
break;
case 13:
*uParam1={
-295.8596f, -1353.238f, 30.3138f 
};
break;
case 14:
*uParam1={
349.839f, 328.889f, 103.272f 
};
break;
case 15:
*uParam1={
926.2818f, -1560.311f, 29.7404f 
};
break;
case 16:
*uParam1={
759.566f, -909.466f, 24.244f 
};
break;
case 17:
*uParam1={
1037.813f, -2173.062f, 30.5334f 
};
break;
case 18:
*uParam1={
1019.116f, -2511.69f, 27.302f 
};
break;
case 19:
*uParam1={
-245.3405f, 203.3286f, 82.818f 
};
break;
case 20:
*uParam1={
539.346f, -1945.682f, 23.984f 
};
break;
case 21:
*uParam1={
96.1538f, -2216.4f, 5.1712f 
};
break;
}}

int func_295(int iParam0){
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
}
return -1;
}

int func_296(int iParam0){
if((!func_304(iParam0, 1) && !func_301(iParam0)) && func_297(iParam0)){
return 1;
}
return 0;
}

int func_297(int iParam0){
if(iParam0 !=func_5()){
if(func_146(iParam0, 1, 1)){
if(!MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_514, 6)){
return 0;
}
if(func_301(iParam0) && !func_298(iParam0)){
return 0;
}
if(func_156(iParam0, 21)){
return 0;
}
if(func_156(iParam0, 25)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 4)){
return 0;
}}}
return 1;
}

int func_298(int iParam0){
int iVar0;
iVar0=func_299(iParam0);
switch (iVar0){
case 167:
case 168:
case 190:
case 178:
case 263:
case 264:
case 295:
case 294:
case 293:
return 1;
break;
}
return 0;
}

int func_299(int iParam0){
if(func_7(iParam0)){
if(func_300(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_300(int iParam0, int iParam1){
if(func_7(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_301(int iParam0){
if(func_303(iParam0)){
return 1;
}
if(func_302(iParam0)){
return 1;
}
return 0;
}

int func_302(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_35(iParam0, 9);
}
return 0;
}

int func_303(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 0);
}
return 0;
}


bool func_304(int iParam0, bool bParam1){
if(func_309() !=0){
return func_308(iParam0) !=0;
}
return func_305(iParam0, bParam1, 0);
}

int func_305(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_306(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_306(int iParam0){
return func_307(iParam0);
}


var func__307(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_308(int iParam0){
if(func_146(iParam0, 0, 1)){
return Global_2657704[iParam0 /*463*/].f_1;
}
return 0;
}

int func_309(){
return Global_32283;
}

int func_310(int iParam0){
if(!func_7(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 26);
}

int func_311(){
bool bVar0;
if(func_121(&uLocal_1014, 5000, 0)){
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0)){
if(func_337(func_338()) && func_337(func_336())){
if(func_176(&bVar0)){
if(func_314(bVar0) && func_312()){
func_279(0);
func_173(Local_129.f_6);
Local_129.f_13={
100000f, 100000f, 100000f 
};
return 1;
}}}}}
return 0;
}

int func_312(){
if((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_4) && func_337(func_336())) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_3)){
if(!func_152(iLocal_1051)){
if(func_313(&(Local_129.f_4), Local_129.f_3, 22, func_336(), -1, 1, 1, 1)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_129.f_4), 1);
PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_129.f_4), 0);
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_129.f_4), 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_129.f_4), 17, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_129.f_4), 5, 0);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_129.f_4), 2, 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_129.f_4), 1024, 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_129.f_4), 2048, 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_129.f_4), 32768, 0);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_129.f_4), 251, 1);
PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_129.f_4), 0);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_129.f_4), round((200f * Global_262145.f_165)), 0);
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
}}}}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_4)){
return 0;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_336());
return 1;
}

int func_313(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
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

int func_314(bool bParam0){
struct<3> Var0;
var uVar1;
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_3)){
if(func_337(func_338())){
func_333(&Var0, &uVar1, bParam0);
if(func_320(Var0, 6f, 1f, 1f, 10f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || bParam0){
if(Local_129.f_9 > -1f){
uVar1=Local_129.f_9;
}
if(func_317(&(Local_129.f_3), func_338(), Var0, uVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
iLocal_1051=NETWORK::NET_TO_VEH(Local_129.f_3);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1051, 1, 1, 0);
if(!bParam0){
VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1051, 30f);
}
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_1051);
VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_1051, 0);
VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_1051, 1);
VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_1051, 0f);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("HeliTaxi", 2)){
DECORATOR::DECOR_SET_BOOL(iLocal_1051, "HeliTaxi", 1);
}
func_163(1);
func_315();
if(func_358()){
}}}}}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_3)){
return 0;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_338());
return 1;
}


void func_315(){
func_316(Global_2794162.f_900, iLocal_1051);
}


void func_316(int iParam0, int iParam1){
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 0){
VEHICLE::SET_VEHICLE_LIVERY(iParam1, 0);
if(iParam0==0){
}}}

int func_317(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
func_318(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_318(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_319(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_319(int iParam0, struct<3> Param1, int iParam2){
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

int func_320(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_328(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635560.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_321(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635560.f_2++;
return 1;
}

int func_321(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_325(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_146(iVar1, 1, 1)){
if(!func_323(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if((func_322(iVar1) || !bParam8) && !Global_2657704[iVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_325(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_325(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_322(int iParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255){
return 1;
}
return 0;
}


bool func_323(int iParam0, int iParam1){
bool bVar0;
if(!func_7(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_324(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_324(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_12();
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


Vector3 func__325(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_327() && Global_1853988[iVar0 /*867*/].f_834) && !func_326(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_181(iParam0);
}

int func_326(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


var func__327(){
return Global_2683883.f_19;
}

int func_328(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_146(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_322(iVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_329(iVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_181(iVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_329(int iParam0){
if(func_332(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764376={
func_331(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764376)){
return 1;
}
if(func_330(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_330(int iParam0, int iParam1){
int iVar0;
iVar0=func_6(iParam0);
if(func_7(iVar0)){
if(iVar0==func_6(iParam1)){
return 1;
}}
return 0;
}
struct<13> func_331(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_332(int iParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_331(iParam0) 
};
Global_2764389={
func_331(iParam1) 
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


void func_333(var uParam0, var uParam1, bool bParam2){
float fVar0;
float fVar1;
if(bParam2){
*uParam0={
Local_129.f_6 
};
*uParam1=Local_129.f_9;
fVar0=PATHFIND::GET_APPROX_HEIGHT_FOR_AREA(*uParam0, uParam0->f_1, *uParam0, uParam0->f_1);
if(fVar0 < (Local_129.f_6.f_2 + 100f)){
fVar0=(Local_129.f_6.f_2 + 100f);
}
uParam0->f_2=fVar0;
}else{
*uParam0={
func_334(Local_129.f_6, 140f, 180f, (200f / 2f)) 
};
*uParam1=MISC::GET_HEADING_FROM_VECTOR_2D((Local_129.f_6 - *uParam0), (Local_129.f_6.f_1 - uParam0->f_1));
fVar1=PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((*uParam0 - 180f), (uParam0->f_1 - 180f), (*uParam0 + 180f), (uParam0->f_1 + 180f));
if(fVar1 < (Local_129.f_6.f_2 + 100f)){
fVar1=(Local_129.f_6.f_2 + 100f);
}
uParam0->f_2=fVar1;
}}


Vector3 func__334(struct<3> Param0, float fParam1, float fParam2, float fParam3){
struct<3> Var0;
float fVar1;
Var0={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f 
};
fVar1=(fParam3 / 2f);
Var0={
func_335(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2)) 
};
Var0.f_2=MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1);
return Param0 + Var0;
}


Vector3 func__335(struct<3> Param0, float fParam1){
float fVar0;
if(fParam1==0f){
return 0f, 0f, 0f;
}
fVar0=vmag(Param0);
if(fVar0 !=0f){
return Param0 * FtoV((fParam1 / fVar0));
}
return 0f, 0f, 0f;
}

int func_336(){
if(func_358()){
return joaat("mp_f_helistaff_01");
}
return joaat("s_m_y_pilot_01");
}

int func_337(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_338(){
if(func_358()){
return joaat("supervolito");
}
return joaat("maverick");
}


void func_339(){
if(HUD::DOES_BLIP_EXIST(uLocal_135)){
if(func_342(iLocal_1051, uLocal_135, 1)){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_135, "HTX_BLIP");
iLocal_136=1;
func_340(&uLocal_135, iLocal_136);
}}}


void func_340(var uParam0, int iParam1){
var uVar0;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
uVar0=func_341(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, uVar0);
}}

int func_341(int iParam0){
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

int func_342(int iParam0, var uParam1, bool bParam2){
int iVar0;
iVar0=HUD::GET_BLIP_SPRITE(uParam1);
if(func_357(iParam0, bParam2)){
if(!iVar0==func_356(iVar0)){
HUD::SET_BLIP_SPRITE(uParam1, func_356(iVar0));
return 1;
}elseif(func_344() && iVar0==func_356(iVar0)){
return 1;
}}elseif(!iVar0==func_343(iVar0)){
HUD::SET_BLIP_SPRITE(uParam1, func_343(iVar0));
return 1;
}elseif(func_344() && iVar0==func_343(iVar0)){
return 1;
}
return 0;
}

int func_343(int iParam0){
switch (iParam0){
case 64:
return 422;
break;
case 528:
return 528;
break;
case 529:
return 529;
break;
case 530:
return 530;
break;
case 531:
return 531;
break;
case 532:
return 532;
break;
case 533:
return 533;
break;
case 534:
return 534;
break;
case 512:
return 512;
break;
case 558:
return 558;
break;
case 559:
return 559;
break;
case 560:
return 560;
break;
case 561:
return 561;
break;
case 562:
return 562;
break;
case 563:
return 563;
break;
case 595:
return 595;
break;
case 596:
return 596;
break;
case 597:
return 597;
break;
case 598:
return 598;
break;
case 599:
return 599;
break;
case 600:
return 600;
break;
case 601:
return 601;
break;
case 602:
return 602;
break;
case 603:
return 603;
break;
case 589:
return 589;
break;
case 631:
return 631;
break;
case 632:
return 632;
break;
case 633:
return 633;
break;
case 634:
return 634;
break;
case 635:
return 635;
break;
case 636:
return 636;
break;
case 637:
return 637;
break;
case 640:
return 640;
break;
case 658:
return 658;
break;
case 659:
return 659;
break;
case 660:
return 660;
break;
case 661:
return 661;
break;
case 662:
return 662;
break;
case 663:
return 663;
break;
case 664:
return 664;
break;
case 665:
return 665;
break;
case 666:
return 666;
break;
case 667:
return 667;
break;
case 668:
return 668;
break;
case 669:
return 669;
break;
case 646:
return 646;
break;
case 742:
return 742;
break;
case 746:
return 746;
break;
case 753:
return 753;
break;
case 758:
return 758;
break;
case 348:
return 348;
break;
case 749:
return 749;
break;
case 757:
return 757;
break;
case 754:
return 754;
break;
case 745:
return 745;
break;
case 755:
return 755;
break;
case 759:
return 759;
break;
case 747:
return 747;
break;
case 748:
return 748;
break;
case 750:
return 750;
break;
case 824:
return 824;
break;
case 825:
return 825;
break;
case 823:
return 823;
break;
case 820:
return 820;
break;
case 821:
return 821;
break;
case 818:
return 818;
break;
case 840:
return 840;
break;
case 862:
return 862;
break;
case 861:
return 861;
break;
case 865:
return 865;
break;
}
return iParam0;
}

int func_344(){
if(((((((func_355() || func_354()) || func_327()) || func_353()) || func_352()) || func_350()) || func_348()) || func_345()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_345(){
return func_346(Global_4718592.f_117591);
}

int func_346(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_347(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_347(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33923[iParam0];
}
return -1;
}

int func_348(){
return func_349(Global_4718592.f_117591);
}

int func_349(int iParam0){
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

int func_350(){
return func_351(Global_4718592.f_117591);
}

int func_351(int iParam0){
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


var func__352(){
return Global_2683883.f_24;
}


var func__353(){
return Global_2683883.f_21;
}


var func__354(){
return Global_2683883.f_18;
}


var func__355(){
return Global_2683883.f_17;
}

int func_356(int iParam0){
switch (iParam0){
case 422:
return 64;
break;
case 528:
return 528;
break;
case 529:
return 529;
break;
case 530:
return 530;
break;
case 531:
return 531;
break;
case 532:
return 532;
break;
case 533:
return 533;
break;
case 534:
return 534;
break;
case 512:
return 512;
break;
case 558:
return 558;
break;
case 559:
return 559;
break;
case 560:
return 560;
break;
case 561:
return 561;
break;
case 562:
return 562;
break;
case 563:
return 563;
break;
case 595:
return 595;
break;
case 596:
return 596;
break;
case 597:
return 597;
break;
case 598:
return 598;
break;
case 599:
return 599;
break;
case 600:
return 600;
break;
case 601:
return 601;
break;
case 602:
return 602;
break;
case 603:
return 603;
break;
case 589:
return 589;
break;
case 631:
return 631;
break;
case 632:
return 632;
break;
case 633:
return 633;
break;
case 634:
return 634;
break;
case 635:
return 635;
break;
case 636:
return 636;
break;
case 637:
return 637;
break;
case 640:
return 640;
break;
case 658:
return 658;
break;
case 659:
return 659;
break;
case 660:
return 660;
break;
case 661:
return 661;
break;
case 662:
return 662;
break;
case 663:
return 663;
break;
case 664:
return 664;
break;
case 665:
return 665;
break;
case 666:
return 666;
break;
case 667:
return 667;
break;
case 668:
return 668;
break;
case 669:
return 669;
break;
case 646:
return 646;
break;
case 742:
return 742;
break;
case 746:
return 746;
break;
case 753:
return 753;
break;
case 758:
return 758;
break;
case 348:
return 348;
break;
case 749:
return 749;
break;
case 757:
return 757;
break;
case 754:
return 754;
break;
case 745:
return 745;
break;
case 755:
return 755;
break;
case 759:
return 759;
break;
case 747:
return 747;
break;
case 748:
return 748;
break;
case 750:
return 750;
break;
case 824:
return 824;
break;
case 825:
return 825;
break;
case 823:
return 823;
break;
case 820:
return 820;
break;
case 821:
return 821;
break;
case 818:
return 818;
break;
case 840:
return 840;
break;
case 862:
return 862;
break;
case 861:
return 861;
break;
case 865:
return 865;
break;
}
return iParam0;
}

int func_357(int iParam0, bool bParam1){
if(((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && (!ENTITY::IS_ENTITY_IN_AIR(iParam0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))) && vmag(ENTITY::GET_ENTITY_VELOCITY(iParam0)) < 0.5f) && func_149(iParam0, bParam1, bParam1, 0, 0, 0, 1, 0, 1)){
return 1;
}
return 0;
}

int func_358(){
if(Global_2794162.f_900 > -1){
return 1;
}
return 0;
}


void func_359(){
if(bLocal_1040){
if(!iLocal_1041){
if(func_275(iLocal_1051)){
ENTITY::SET_ENTITY_PROOFS(iLocal_1051, 0, 0, 0, 1, 0, 0, 0, 0);
iLocal_1041=1;
}}}elseif(iLocal_1041){
if(func_275(iLocal_1051)){
ENTITY::SET_ENTITY_PROOFS(iLocal_1051, 0, 0, 0, 0, 0, 0, 0, 0);
iLocal_1041=0;
}}}

int func_360(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_361(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_122(uParam0, 0, 0);
}}}


void func_362(){
int iVar0;
bool bVar1;
int iVar2;
if(Local_129.f_23==6){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=6;
}
iVar0=0;
bVar1=false;
iLocal_117=0;
switch (Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2){
case 0:
if(Local_129.f_23 > 0){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=1;
}
break;
case 1:
if(!func_152(iLocal_1051)){
func_502();
func_480();
func_479();
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051, 0)){
CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
func_478();
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0);
NETWORK::NETWORK_IGNORE_REMOTE_WAYPOINTS();
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=2;
MISC::CLEAR_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
}}}
break;
case 2:
if(!func_152(iLocal_1051)){
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051, 0)){
func_477();
func_476();
NETWORK::NETWORK_IGNORE_REMOTE_WAYPOINTS();
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && func_475(1, 1)){
if(HUD::IS_WAYPOINT_ACTIVE()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 21)){
iVar0=1;
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
iVar0=1;
}
if(iVar0 || MISC::IS_BIT_SET(Local_129.f_1, 12)){
MISC::CLEAR_BIT(&(Local_129.f_1), 12);
MISC::CLEAR_BIT(&(Local_129.f_2), 4);
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=3;
MISC::CLEAR_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 5);
MISC::SET_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 6);
}}
if(MISC::IS_BIT_SET(iLocal_1052, 7) && iLocal_112==0){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 101)){
iLocal_117=1;
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 209)){
iLocal_117=1;
}}
}
if(Local_129.f_23 >=5){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=5;
}
if(Local_129.f_23==4){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=4;
}}else{
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=1;
}}}
break;
case 3:
if(!func_152(iLocal_1051)){
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051, 0)){
func_477();
NETWORK::NETWORK_IGNORE_REMOTE_WAYPOINTS();
if((NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && func_475(1, 1)) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_synchronized_scene")) !=1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 36)){
bVar1=true;
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
bVar1=true;
}
if(bVar1){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=2;
MISC::SET_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 5);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 101)){
iLocal_117=1;
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 209)){
iLocal_117=1;
}
}
if(Local_129.f_23 >=5){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=5;
}
elseif(Local_129.f_23==2){
MISC::CLEAR_BIT(&(Local_129.f_1), 9);
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=2;
}
elseif(Local_129.f_23==4){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=4;
}}else{
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=1;
}}}
break;
case 4:
if((((((func_474("POD_CHAM_CIGAR") || func_474("POD_CHAM_WEB")) || func_474("POD_UNKNOWN")) || func_474("POD_CIGAR")) || func_474("POD_WEB")) || func_474("LUX_VEH_ACT_1ST")) || func_474("LUX_ACT_1ST_SW")){
HUD::CLEAR_HELP(1);
}
if(MISC::IS_BIT_SET(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 8)){
MISC::CLEAR_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 8);
}
if(!func_159()){
if(!MISC::IS_BIT_SET(Local_129.f_2, 17)){
if(func_281()){
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
if(iLocal_120==-1){
func_103(&uLocal_849, "EXHELAU", "EXHEL_OFFICE", 12, 0, 0, 1);
}
else{
func_103(&uLocal_849, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
}
MISC::SET_BIT(&(Local_129.f_2), 17);
}}}
if((Local_129.f_28==PLAYER::PLAYER_ID() && func_473()) && Local_129.f_27){
if(!MISC::IS_BIT_SET(uLocal_134, 16)){
if(!func_152(iLocal_1051)){
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051, 0)){
if(!func_472()){
if(MISC::IS_BIT_SET(Local_129.f_1, 15)){
iVar2=func_471(1);
if(iVar2 > 0){
if(iLocal_120==-1){
func_470(iVar2, PLAYER::PLAYER_ID(), 0, Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267[5]);
}else{
func_470(iVar2, PLAYER::PLAYER_ID(), 1, iLocal_120);
}
MISC::SET_BIT(&uLocal_134, 16);
}
}}}
}}}}elseif(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_514(0);
}
if(Local_129.f_23==2){
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=2;
if(MISC::IS_BIT_SET(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 8)){
MISC::CLEAR_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 8);
}}
break;
case 5:
if(!func_152(iLocal_1051)){
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
func_468();
func_476();
NETWORK::NETWORK_IGNORE_REMOTE_WAYPOINTS();
if(Local_129.f_23==2){
MISC::CLEAR_BIT(&(Local_129.f_1), 9);
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=2;
}}}
break;
case 6:
func_514(1);
break;
}
if(((Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 !=4 && iLocal_118) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) && func_465()){
if(iLocal_120 > -2){
}
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1051)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_1051);
}
MISC::SET_BIT(&uLocal_134, 15);
func_464();
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2=4;
MISC::CLEAR_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 5);
MISC::CLEAR_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 6);
MISC::SET_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 8);
iLocal_118=0;
}elseif(MISC::IS_BIT_SET(iLocal_1052, 7)){
MISC::CLEAR_BIT(&iLocal_1052, 7);
}
func_388();
func_363();
}


void func_363(){
int iVar0;
int iVar1;
struct<9> Var2;
iVar1=1;
if(func_146(PLAYER::PLAYER_ID(), 1, 1) && !func_152(iLocal_1051)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051) && !func_387(PLAYER::PLAYER_PED_ID(), iLocal_1051, -1)){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_142)){
if(func_386() || func_145(0)){
if(!MISC::IS_BIT_SET(uLocal_134, 11)){
MISC::SET_BIT(&uLocal_134, 11);
}}elseif(MISC::IS_BIT_SET(uLocal_134, 11)){
iLocal_1053=0;
MISC::CLEAR_BIT(&uLocal_134, 11);
}
if(func_475(1, 1)){
if((((Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2==1 && MISC::IS_BIT_SET(uLocal_134, 2)) || Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2==2) || Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2==3) || Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2==5){
iLocal_1052=0;
Var2={
func_385() 
};
if(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2==1){
if(((!func_277() && !MISC::IS_BIT_SET(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !func_383(PLAYER::PLAYER_ID())){
MISC::SET_BIT(&iLocal_1052, 0);
}
else{
iVar1=0;
}}elseif(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2==2){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(HUD::IS_WAYPOINT_ACTIVE()){
MISC::SET_BIT(&iLocal_1052, 1);
}else{
MISC::SET_BIT(&iLocal_1052, 2);
}
if(func_465()){
MISC::SET_BIT(&iLocal_1052, 7);
}
}
if(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1051) < 10f){
MISC::SET_BIT(&iLocal_1052, 3);
}
elseif(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_rappel_from_heli")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_rappel_from_heli")) !=0){
MISC::SET_BIT(&iLocal_1052, 4);
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051, 0, 0) !=PLAYER::PLAYER_PED_ID() && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1051) < 40f){
if(func_382()){
MISC::SET_BIT(&iLocal_1052, 5);
iVar0=1;
}}
}
else{
iVar1=0;
}}elseif(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2==3){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
MISC::SET_BIT(&iLocal_1052, 6);
if(func_465()){
MISC::SET_BIT(&iLocal_1052, 7);
}
}
MISC::SET_BIT(&iLocal_1052, 4);
}elseif(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2==5){
if(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1051) < 10f){
MISC::SET_BIT(&iLocal_1052, 3);
}
elseif(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_rappel_from_heli")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_rappel_from_heli")) !=0){
MISC::SET_BIT(&iLocal_1052, 4);
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051, 0, 0) !=PLAYER::PLAYER_PED_ID() && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1051) < 40f){
if(func_382()){
MISC::SET_BIT(&iLocal_1052, 5);
iVar0=1;
}}
}
else{
iVar1=0;
}}else{
iVar1=0;
}
if(func_381()){
iVar1=0;
}
if(iVar1==1){
func_380();
func_379(1);
func_377(1);
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_synchronized_scene")) !=1){
if((iLocal_1052 !=iLocal_1053 || PAD::HAVE_CONTROLS_CHANGED(2)) || Global_63474){
Global_63474=0;
func_375(&uLocal_143);
if(MISC::IS_BIT_SET(iLocal_1052, 0)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 23, 1), "HTX_ENTER", &uLocal_143, 0);
}
if(MISC::IS_BIT_SET(iLocal_1052, 1)){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 21, 1), "HTX_START", &uLocal_143, 0);
}
else{
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 201, 1), "HTX_START", &uLocal_143, 0);
}}
if(MISC::IS_BIT_SET(iLocal_1052, 2)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 199, 1), "HTX_WAYP", &uLocal_143, 0);
}
if(MISC::IS_BIT_SET(iLocal_1052, 3)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 75, 1), "HTX_EXIT1", &uLocal_143, 0);
}
if(MISC::IS_BIT_SET(iLocal_1052, 4)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 75, 1), "HTX_EXIT2", &uLocal_143, 0);
}
if(MISC::IS_BIT_SET(iLocal_1052, 5)){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 22, 1), "HTX_EXIT3", &uLocal_143, 0);
}
else{
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 99, 1), "HTX_EXIT3", &uLocal_143, 0);
}}
if(MISC::IS_BIT_SET(iLocal_1052, 6)){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 36, 1), "HTX_STOP", &uLocal_143, 0);
}
else{
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 202, 1), "HTX_STOP", &uLocal_143, 0);
}}
if(MISC::IS_BIT_SET(iLocal_1052, 7)){
if(func_373() || func_371(PLAYER::PLAYER_ID())){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 101, 1), "HTX_QT_WARP", &uLocal_143, 0);
}
else{
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 209, 1), "HTX_QT_WARP", &uLocal_143, 0);
}
}
elseif(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 101, 1), "HTX_OFF_WARP", &uLocal_143, 0);
}
else{
func_374(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 209, 1), "HTX_OFF_WARP", &uLocal_143, 0);
}}}
func_364(&uLocal_142, &Var2, &uLocal_143, func_370(&uLocal_143));
iLocal_1053=iLocal_1052;
}}}}}else{
uLocal_142=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
}
if(iVar0==1){
PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
}}
Global_2794162.f_260=iVar1;
}


void func_364(var uParam0, var uParam1, var uParam2, int iParam3){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
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
func_369(uParam2);
}
if(Global_1577917 < 2){
func_368(1);
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
func_367(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, 1));
if(iVar3 < 363){
func_367(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, 1));
}}else{
iVar4=uParam2->f_1[bVar0 /*57*/].f_54;
uVar5=uParam2->f_1[bVar0 /*57*/].f_55;
func_367(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, uVar5, 1));
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
func_39(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
func_367(&(uParam2->f_1[bVar0 /*57*/]));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16))){
func_367(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
func_39(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
func_366(*uParam0, uParam1);
}
func_365();
}


void func_365(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}


void func_366(var uParam0, var uParam1){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}


void func_367(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}


void func_368(int iParam0){
Global_1577917=iParam0;
}


void func_369(var uParam0){
uParam0->f_692=0;
}

int func_370(var uParam0){
return uParam0->f_692;
}


bool func_371(int iParam0){
return func_372(iParam0) !=0;
}

int func_372(int iParam0){
if(iParam0==func_5()){
return 0;
}
return Global_1853988[iParam0 /*867*/].f_267.f_144;
}

int func_373(){
int iVar0;
iVar0=0;
while (iVar0 <=4){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_116[iVar0 /*3*/] !=0){
return 1;
}
iVar0++;
}
return 0;
}


void func_374(char* sParam0, char* sParam1, var uParam2, char* sParam3){
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


void func_375(var uParam0){
func_376(uParam0);
uParam0->f_692=1;
}


void func_376(var uParam0){
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


void func_377(bool bParam0){
if(bParam0){
if(func_378()){
Global_2683883.f_41=1;
}}else{
Global_2683883.f_41=0;
}}


bool func_378(){
return MISC::IS_BIT_SET(Global_2683883.f_2, 11);
}


void func_379(int iParam0){
Global_1655612.f_1163=iParam0;
}


void func_380(){
Global_2805862.f_258=1;
}

int func_381(){
if(iLocal_112 > 0 || iLocal_118==1){
return 1;
}
return 0;
}

int func_382(){
if(VEHICLE::DOES_VEHICLE_ALLOW_RAPPEL(iLocal_1051) && !func_358()){
return 1;
}
return 0;
}


bool func_383(int iParam0){
return func_384(iParam0)==joaat("weapon_minigun");
}

int func_384(int iParam0){
return Global_1895156[iParam0 /*609*/].f_586;
}


struct<9> func_385(){
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


bool func_386(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}

int func_387(int iParam0, int iParam1, int iParam2){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, 0)==iParam0){
return 1;
}}}
return 0;
}


void func_388(){
if(iLocal_112==0){
if(iLocal_117){
if(func_373() || func_371(PLAYER::PLAYER_ID())){
iLocal_116=1;
iLocal_112=1;
}else{
iLocal_118=1;
iLocal_120=-1;
iLocal_119=1;
}}}
if(iLocal_112==1){
if(func_465()){
func_392();
}else{
iLocal_119=1;
}}
if(iLocal_119){
func_389(1, -1);
iLocal_112=0;
iLocal_114=0;
iLocal_119=0;
iLocal_117=0;
}}


void func_389(bool bParam0, int iParam1){
int iVar0;
if(!func_391(&iVar0, 0, iParam1)){
return;
}
if(Global_23390.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23390.f_8892=0;
}
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
if(Global_23390.f_6071[iVar0]){
HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
Global_23390.f_6071[iVar0]=0;
}
if(Global_23390.f_6057[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
Global_23390.f_6057[iVar0]=0;
}
if(Global_23390.f_6064[iVar0]){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
Global_23390.f_6064[iVar0]=0;
}
if(bParam0){
func_390(&(Global_23390.f_6103[iVar0 /*10*/]));
Global_23390.f_6164[iVar0]=0;
}else{
Global_23390.f_6164[iVar0]=0;
}}


void func_390(var uParam0){
if(uParam0->f_9 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}
*uParam0=0;
uParam0->f_9=0;
}}

int func_391(var uParam0, bool bParam1, int iParam2){
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
if(Global_23390.f_6164[iVar2]==iVar1){
*uParam0=iVar2;
return 1;
}elseif(Global_23390.f_6164[iVar2]==0){
iVar3=iVar2;
}
iVar2++;
}
if(bParam1){
if(iVar3 !=-1){
Global_23390.f_6164[iVar3]=iVar1;
*uParam0=iVar3;
return 1;
}}
return 0;
}


void func_392(){
int iVar0;
func_454(&Local_128);
if(func_452(0, -1, 0)){
if(iLocal_116){
func_441();
iLocal_116=0;
}else{
func_440(iLocal_114, 1, 1);
}
func_438();
func_436();
func_401(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
if(!bLocal_122){
if(func_400()){
iLocal_116=1;
}}elseif(!func_400()){
iLocal_116=1;
}
if(!bLocal_123){
if(func_396()){
iLocal_116=1;
}}elseif(!func_396()){
iLocal_116=1;
}
iVar0=0;
while (iVar0 < 5){
if(!uLocal_125[iVar0]){
if(func_395(iLocal_121[iVar0])){
iLocal_116=1;
}}elseif(!func_395(iLocal_121[iVar0])){
iLocal_116=1;
}
iVar0++;
}
if(!bLocal_124){
if(func_393()){
iLocal_116=1;
}}elseif(!func_393()){
iLocal_116=1;
}}}

int func_393(){
if(func_371(PLAYER::PLAYER_ID())){
if(vdist(func_181(PLAYER::PLAYER_ID()), Global_1950844.f_543[func_394(func_372(PLAYER::PLAYER_ID())) /*3*/]) > 100f){
return 1;
}}
return 0;
}

int func_394(int iParam0){
switch (iParam0){
case 1:
return 60;
break;
case 2:
return 61;
break;
case 3:
return 62;
break;
case 4:
return 63;
break;
case 5:
return 64;
break;
case 6:
return 65;
break;
case 7:
return 66;
break;
case 8:
return 67;
break;
case 9:
return 68;
break;
case 10:
return 69;
break;
}
return -1;
}

int func_395(int iParam0){
if(iParam0 > 0){
if(vdist(func_181(PLAYER::PLAYER_ID()), func_186(iParam0)) > 100f){
return 1;
}}
return 0;
}

int func_396(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar0=iLocal_1051;
if(ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
return 0;
}
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
iVar2=0;
while (iVar2 < iVar1){
iVar5=(iVar2 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar5, 0)){
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar5, 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar4, 0) && PED::IS_PED_A_PLAYER(iVar4)){
if(!func_399()){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
if(iVar3 !=PLAYER::PLAYER_ID()){
return 0;
}}else{
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
if(iVar3 !=func_5() && func_146(iVar3, 1, 1)){
if(!func_397(iVar3, func_6(PLAYER::PLAYER_ID()), 1)){
return 0;
}}}}}
iVar2++;
}
if(iLocal_126){
if(!func_472()){
iLocal_126=0;
}else{
return 0;
}}
return 1;
}

int func_397(int iParam0, int iParam1, bool bParam2){
if(func_7(iParam1)){
if(!bParam2){
if(func_398(iParam0, iParam1)){
return 0;
}}
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
return iParam1==Global_1895156[iParam0 /*609*/].f_10;
}}
return 0;
}

int func_398(int iParam0, int iParam1){
if(iParam1 !=func_5()){
if(iParam0 !=func_5()){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_5()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


bool func_399(){
return func_202(PLAYER::PLAYER_ID());
}

int func_400(){
if(vdist(func_181(PLAYER::PLAYER_ID()), func_267(func_269(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267[5]))) > 200f){
return 1;
}
return 0;
}


void func_401(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8){
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
if(!func_391(&iVar0, 0, iParam1)){
return;
}
if(iVar0==-1){}
if(!func_434(0, bParam6)){
return;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar55=0f;
if(Global_23390){
if(func_432(29, 1, 1, &fVar36, &fVar37, bParam7)){
fVar56=(fVar37 / fVar36);
}else{
Global_23390=0;
}}
if(fParam5==-1f){
fParam5=Global_23389;
}
fVar55=(fParam5 * fVar56);
if(MISC::GET_HASH_KEY(&(Global_23390.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar57=Global_23388;
}else{
fVar57=(((Global_23388 + fVar55) + 0.034722f) + 0f);
}
fVar60=1f;
func_430(bParam7, &uVar58, &uVar59, &fVar60);
if(bParam3){
if(Global_23390.f_5661 <=1){
func_426(Global_23390.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
Global_23390.f_6457=1;
}}
iVar5=0;
while (iVar5 < 2){
if(iVar5==1 && Global_23390.f_6171){
if(MISC::GET_HASH_KEY(&(Global_23390.f_1))==MISC::GET_HASH_KEY("HIDE")){
fVar49=Global_23388;
}else{
if(Global_23390){
StringCopy(&cVar61, func_425(29), 64);
StringCopy(&cVar62, func_423(29, 1), 64);
if(MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/]))==joaat("crew_logo")){
func_422(Global_23387, Global_23388, fParam5, fVar55, 0, 0, 0, 255);
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}else{
GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
}}
if(Global_23390.f_8862){
iVar1=Global_23390.f_8858;
iVar2=Global_23390.f_8859;
iVar3=Global_23390.f_8860;
iVar4=Global_23390.f_8861;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}
func_422(Global_23387, (Global_23388 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
fVar49=(((Global_23388 + fVar55) + 0.034722f) + 0f);
if(MISC::GET_HASH_KEY(&(Global_23390.f_1)) !=0){
func_421();
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_1));
iVar15=0;
iVar16=0;
iVar17=0;
iVar18=0;
iVar14=0;
while (iVar14 < Global_23390.f_74){
if(Global_23390.f_5[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_10[iVar15]);
iVar15++;
}
elseif(Global_23390.f_5[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_14[iVar16], Global_23390.f_18[iVar16]);
iVar16++;
}
elseif(Global_23390.f_5[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23390.f_5[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
iVar17++;
}
elseif(Global_23390.f_5[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23390.f_5[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23390.f_5[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
iVar18++;
}
elseif(Global_23390.f_5[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
iVar18++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23387 + 0.00390625f), ((Global_23388 + fVar55) + 0.00416664f), 0);
}
if(Global_23390.f_6178){
func_421();
func_419((((Global_23387 + fParam5) - 0.00390625f) - func_420("CM_ITEM_COUNT", Global_23390.f_6179, Global_23390.f_6180)), ((Global_23388 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23390.f_6179, Global_23390.f_6180);
}elseif(Global_23390.f_6174 > Global_23390.f_5668){
if(Global_23390.f_6177 !=0){
func_421();
func_419((((Global_23387 + fParam5) - 0.00390625f) - func_420("CM_ITEM_COUNT", Global_23390.f_6177, Global_23390.f_6176)), ((Global_23388 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23390.f_6177, Global_23390.f_6176);
}}}
iVar6=Global_23390.f_6181;
iVar9=0;
fVar63=fVar49;
if(Global_23390.f_8872){
iVar1=Global_23390.f_8868;
iVar2=Global_23390.f_8869;
iVar3=Global_23390.f_8870;
iVar4=Global_23390.f_8871;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
while (iVar9 < Global_23390.f_5668 && iVar6 <=Global_23390.f_5661){
if(iVar6 >=0){
if(Global_23390.f_5928[iVar6]){
if(Global_23390.f_5799[iVar6] && iVar6 !=Global_23390.f_6181){
fVar49=(fVar49 + 0.00277776f);
}
fVar54=0.034722f;
if(Global_23390.f_6188[iVar6] !=0f){
fVar54=Global_23390.f_6188[iVar6];
}
fVar49=(fVar49 + fVar54);
iVar9++;
}}
iVar6++;
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
if(Global_23390.f_6174 > Global_23390.f_5668){
if(Global_23390.f_8877){
iVar1=Global_23390.f_8873;
iVar2=Global_23390.f_8874;
iVar3=Global_23390.f_8875;
iVar4=Global_23390.f_8876;
}else{
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=204;
}
func_422(Global_23387, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
Var38={
GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") 
};
Var38.f_0=(Var38.f_0 * (0.5f / fVar60));
Var38.f_1=(Var38.f_1 * (0.5f / fVar60));
if(Global_23390.f_8890){
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=255;
}else{
HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
fVar49=(fVar49 + (0f + 0.034722f));
}
if(MISC::GET_HASH_KEY(&(Global_23390.f_5081)) !=0 && Global_23390.f_5163 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23387 + 0.0046875f);
if(Global_23390.f_5165 !=0){
func_432(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_418(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23390.f_5159){
if(Global_23390.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
iVar15++;
}elseif(Global_23390.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
iVar16++;
}elseif(Global_23390.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_422(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_418(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5081));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23390.f_5159){
if(Global_23390.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
iVar15++;
}elseif(Global_23390.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
iVar16++;
}elseif(Global_23390.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_23390.f_5165 !=0){
func_432(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
func_417(Global_23390.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_425(Global_23390.f_5165), func_423(Global_23390.f_5165, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087))){
fVar49=(fVar49 + (0.00138888f * 6f));
func_418(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_422(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_418(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
}
if(Global_23390.f_5163 > 0){
if((MISC::GET_GAME_TIMER() - Global_23390.f_5164) > Global_23390.f_5163){
StringCopy(&(Global_23390.f_5081), "", 24);
Global_23390.f_5163=-1;
}}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087))){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23387 + 0.0046875f);
func_418(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_23390.f_5159){
if(Global_23390.f_5093[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
iVar15++;
}elseif(Global_23390.f_5093[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
iVar16++;
}elseif(Global_23390.f_5093[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}elseif(Global_23390.f_5093[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_422(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_418(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
}
if(MISC::GET_HASH_KEY(&(Global_4540958.f_21)) !=0 && Global_4540958.f_65 !=-1){
fVar49=(fVar49 + (0.00277776f * 2f));
fVar40=(Global_23387 + 0.0046875f);
if(Global_4540958.f_67 !=0){
func_432(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
fVar40=(((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
}
func_418(fVar40);
HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540958.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540958.f_61){
if(Global_4540958.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
iVar15++;
}elseif(Global_4540958.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
iVar16++;
}elseif(Global_4540958.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
iVar6=HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
func_422(Global_23387, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
if(Global_23390.f_8882){
iVar1=Global_23390.f_8878;
iVar2=Global_23390.f_8879;
iVar3=Global_23390.f_8880;
iVar4=Global_23390.f_8881;
}else{
HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
func_418(fVar40);
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540958.f_21));
iVar15=0;
iVar16=0;
iVar17=0;
iVar14=0;
while (iVar14 < Global_4540958.f_61){
if(Global_4540958.f_25[iVar14]==2){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
iVar15++;
}elseif(Global_4540958.f_25[iVar14]==3){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
iVar16++;
}elseif(Global_4540958.f_25[iVar14]==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==8){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==6){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==7){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}elseif(Global_4540958.f_25[iVar14]==9){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
iVar17++;
}
iVar14++;
}
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
if(Global_4540958.f_67 !=0){
func_432(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
func_417(Global_4540958.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_425(Global_4540958.f_67), func_423(Global_4540958.f_67, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
fVar49=(fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
if(Global_4540958.f_65 > 0){
if((MISC::GET_GAME_TIMER() - Global_4540958.f_66) > Global_4540958.f_65){
StringCopy(&(Global_4540958.f_21), "", 16);
Global_4540958.f_65=-1;
}}}
func_414(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
}
if(iVar5==1 || !Global_23390.f_6171){
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
iVar64=Global_23390.f_5661;
if(Global_23390.f_6172){
iVar64=(Global_23390.f_6175 - 1);
}
fVar65=0f;
fVar66=0f;
iVar7=0;
while (iVar7 <=iVar64){
fVar54=0.034722f;
if(Global_23390.f_6188[iVar6] !=0f){
fVar54=Global_23390.f_6188[iVar6];
}
if(Global_23390.f_6172){
iVar6=Global_23390.f_8513[iVar7];
}else{
iVar6=iVar7;
}
iVar12=iVar13;
bVar33=false;
if(iVar6 >=Global_23390.f_6181 && iVar9 < Global_23390.f_5668){
bVar33=true;
if(Global_23390.f_6182==iVar6){
fVar66=fVar65;
}
if(Global_23390.f_5799[iVar6]){
iVar12++;
}
fVar35=(((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
}
Global_23390.f_6322[iVar6]=fVar35;
fVar34=(Global_23387 + 0.0046875f);
bVar39=false;
bVar32=Global_23390.f_6182==iVar6;
if((bVar32 && iVar5==1) && bVar33){
iVar68=255;
iVar69=255;
iVar70=255;
iVar71=255;
if(Global_23390.f_8884){
HUD::GET_HUD_COLOUR(Global_23390.f_8883, &iVar68, &iVar69, &iVar70, &iVar71);
}else{
HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
}
GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23387 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, 0, 0);
Global_23390.f_6320=fVar35;
}
iVar8=0;
while (iVar8 < Global_23390.f_5669){
if(MISC::IS_BIT_SET(Global_23390.f_5532[iVar6], iVar8) || Global_23390.f_5499[iVar8]==5){
if(Global_23390.f_6172){
iVar19=Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)];
iVar20=Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)];
iVar21=Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)];
iVar22=Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)];
iVar23=Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)];
}
else{
Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar19;
Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar20;
Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar21;
Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar22;
Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)]=iVar23;
}
iVar72=0;
bVar53=false;
if(Global_23390.f_6454[0] !=-1){
if((iVar6 * 5 + iVar8)==Global_23390.f_6451[0]){
bVar53=true;
iVar72=0;
}
}
if(Global_23390.f_6454[1] !=-1){
if((iVar6 * 5 + iVar8)==Global_23390.f_6451[1]){
bVar53=true;
iVar72=1;
}
}
if(Global_23390.f_5505[iVar8] !=-1f){
fVar34=((Global_23387 + 0.0046875f) + Global_23390.f_5505[iVar8]);
}
if((iVar8 < 4 && Global_23390.f_5505[iVar8 + 1] !=-1f) && fVar34 < Global_23390.f_5505[iVar8 + 1]){
fVar44=(Global_23390.f_5505[iVar8 + 1] - fVar34);
}
else{
fVar44=(((Global_23387 + Global_23389) - 0.0046875f) - fVar34);
}
if((Global_23390.f_5518[iVar8] && Global_23390.f_6317) && bVar32){
bVar52=true;
}
else{
bVar52=false;
}
switch (Global_23390.f_5499[iVar8]){
case 0:
break;
case 1:
iVar24=iVar19;
if(bVar33){
if(!Global_23390.f_6172){
fVar41=0f;
fVar42=0f;
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23390.f_2130[iVar24]){
bVar51=true;
}
func_412(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
}}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==4){
iVar28++;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0){
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}
if(iVar28 > 0){
iVar14=0;
while (iVar14 < iVar28){
if(func_432(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar42=(fVar42 + fVar36);
if(iVar14 > 0){
fVar42=(fVar42 - (0.00078125f * 4f));
}
if((Global_23390.f_4824[(iVar22 + iVar14)]==2 || Global_23390.f_4824[(iVar22 + iVar14)]==52) || Global_23390.f_4824[(iVar22 + iVar14)]==62){
fVar42=(fVar42 - (0.00078125f * 5f));
}}
iVar14++;
}
}
fVar40=0f;
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
}
elseif(Global_23390.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
}
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar40;
Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar41;
Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar42;
if(Global_23390.f_5526[iVar8]==2){
iVar67=(iVar8 - 1);
while (iVar67 >=0){
if(Global_23390.f_5526[iVar67]==2){
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar67)]=(Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar67)] - Global_23390.f_5511[iVar8]);
}
iVar67=(iVar67 + -1);
}
}
}
else{
fVar40=Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar41=Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar42=Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
}
if(bVar52){
if(func_432(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_432(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_417(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_425(26), func_423(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_432(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_432(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_417(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_425(27), func_423(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
iVar25=0;
iVar26=0;
iVar27=0;
iVar28=0;
iVar29=0;
iVar31=0;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
bVar50=false;
bVar51=false;
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5 || Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
bVar51=true;
}elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
bVar50=true;
}
iVar14++;
}
if(Global_23390.f_2130[iVar24]){
bVar51=true;
}
func_412(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_411(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
}
iVar14=0;
while (iVar14 < 4){
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==1){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=1;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
iVar25++;
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
}
iVar31=8;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=5;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==6){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=6;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==7){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=7;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
}
iVar29++;
iVar31=9;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==2){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
}
iVar26++;
iVar31=2;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==3){
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
}
iVar27++;
iVar31=3;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==4){
if((Global_23390.f_4824[(iVar22 + iVar28)]==2 || Global_23390.f_4824[(iVar22 + iVar28)]==52) || Global_23390.f_4824[(iVar22 + iVar28)]==62){
if(func_432(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(func_432(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_417(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
if(Global_23390.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_425(Global_23390.f_4824[(iVar22 + iVar28)]), func_423(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_425(Global_23390.f_4824[(iVar22 + iVar28)]), func_423(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
}
fVar40=(fVar40 + (0.00078125f * 3f));
}}}
iVar28++;
iVar31=4;
}
iVar14++;
}
if(MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) !=0 && iVar5==1){
if(iVar31==4 && Global_23390.f_5526[iVar8]==2){
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
}
else{
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
if(func_410() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0){
if(iVar8==0){
if(Global_23390.f_2130[iVar24]){
bVar51=true;
}
func_412(0, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
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
HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23390.f_6181 + iVar30));
HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
iVar30++;
}}
}
}
if(iVar28 > 0){
fVar40=(fVar40 + (6f * 0.00078125f));
iVar14=0;
while (iVar14 < iVar28){
if((Global_23390.f_4824[(iVar22 + iVar14)] !=2 && Global_23390.f_4824[(iVar22 + iVar14)] !=52) && Global_23390.f_4824[(iVar22 + iVar14)] !=62){
if(func_432(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + (fVar36 * 0.5f));
if(iVar5==1){
if(func_432(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_417(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
if(Global_23390.f_4824[(iVar22 + iVar14)]==30){
GRAPHICS::DRAW_SPRITE(func_425(Global_23390.f_4824[(iVar22 + iVar14)]), func_423(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (Global_23387 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
elseif(Global_23390.f_5526[iVar8]==2){
GRAPHICS::DRAW_SPRITE(func_425(Global_23390.f_4824[(iVar22 + iVar14)]), func_423(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}
else{
GRAPHICS::DRAW_SPRITE(func_425(Global_23390.f_4824[(iVar22 + iVar14)]), func_423(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(Global_23390.f_2387[iVar24 /*5*/][iVar14]==1){
iVar19++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==8){
iVar19++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==2){
iVar20++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==3){
iVar21++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==4){
iVar22++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==5){
iVar23++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==6){
iVar23++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==7){
iVar23++;
}
elseif(Global_23390.f_2387[iVar24 /*5*/][iVar14]==9){
iVar23++;
}
iVar14++;
}
break;
case 2:
if(bVar33){
if(!Global_23390.f_6172){
func_412(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_411(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[iVar20]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23390.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar40;
Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar41=Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
}
if(bVar52){
if(func_432(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_432(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_417(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_425(26), func_423(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_432(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_432(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_417(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_425(27), func_423(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
if(iVar5==1){
func_412(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
func_409((fVar34 + fVar40), fVar35, "NUMBER", Global_23390.f_4309[iVar20], 0);
}}
bVar39=true;
iVar20++;
break;
case 3:
if(bVar33){
if(!Global_23390.f_6172){
func_412(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
if(Global_23390.f_8888 && Global_23390.f_8889==iVar6){
func_411(bVar32);
}
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
fVar41=HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
fVar40=0f;
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
}
elseif(Global_23390.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
}
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar40;
Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar41;
}
else{
fVar40=Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar41=Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
}
if(bVar52){
if(func_432(26, 1, 0, &fVar36, &fVar37, 0)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_432(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_417(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_425(26), func_423(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
if(func_432(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_432(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_417(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_425(27), func_423(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}
}
}
func_412(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar53, 0, 0, 0);
func_408((fVar34 + fVar40), fVar35, "NUMBER", Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
}
bVar39=true;
iVar21++;
break;
case 4:
if(bVar33){
if(func_432(Global_23390.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7)){
if(!Global_23390.f_6172){
fVar42=fVar36;
fVar40=0f;
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
}elseif(Global_23390.f_5526[iVar8]==0){
fVar40=(fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
}
Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar40;
Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)]=fVar42;
}
else{
fVar40=Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
fVar42=Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
}
if(bVar52){
if(func_432(26, 1, 0, &fVar36, &fVar37, bParam7)){
if(Global_23390.f_5526[iVar8]==2){
fVar40=(fVar40 - (fVar36 * 2f));
}
fVar43=(fVar36 * 0.5f);
if(func_432(26, 1, 1, &fVar36, &fVar37, bParam7)){
func_417(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_425(26), func_423(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
if(func_432(27, 1, 0, &fVar36, &fVar37, bParam7)){
fVar40=(fVar40 + fVar36);
fVar43=(fVar36 * 0.5f);
if(func_432(27, 1, 1, &fVar36, &fVar37, bParam7)){
func_417(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
if(iVar5==1){
GRAPHICS::DRAW_SPRITE(func_425(27), func_423(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
}}}
}
if(iVar5==1){
if(func_432(Global_23390.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7)){
func_417(Global_23390.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
GRAPHICS::DRAW_SPRITE(func_425(Global_23390.f_4824[iVar22]), func_423(Global_23390.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_407(Global_23390.f_4824[iVar22])), (fVar37 * func_407(Global_23390.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
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
if(Global_23390.f_5499[iVar8]==5){
if(Global_23390.f_5511[iVar8] > 0.05f){
fVar34=(fVar34 + Global_23390.f_5511[iVar8]);
}else{
fVar34=(fVar34 + 0.05f);
}
}
else{
fVar34=(fVar34 + Global_23390.f_5511[iVar8]);
if(Global_23390.f_5518[iVar8]){
if(func_432(26, 1, 1, &fVar36, &fVar37, bParam7)){
fVar34=(fVar34 - fVar36);
}}
}}else{
fVar34=(fVar34 + Global_23390.f_5511[iVar8]);
}
iVar8++;
}
if(bVar39){
if(bVar33){
Global_23390.f_8513[iVar9]=iVar6;
Global_23390.f_6183=iVar6;
iVar9++;
if(Global_23390.f_5799[iVar6]){
iVar13++;
}
if(Global_23390.f_6188[iVar6] !=0f){
fVar65=(fVar65 + Global_23390.f_6188[iVar6]);
}
else{
fVar65=(fVar65 + 0.034722f);
}}
if(!Global_23390.f_6171){
Global_23390.f_5928[iVar6]=1;
if(Global_23390.f_5670[iVar6]){
if(bVar32){
Global_23390.f_6177=0;
}
}
else{
iVar11++;
if(bVar32){
Global_23390.f_6177=iVar11;
}
}
iVar10++;
}}
iVar7++;
}
if(!Global_23390.f_6171){
Global_23390.f_6173=((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
Global_23390.f_6176=iVar11;
Global_23390.f_6174=iVar10;
Global_23390.f_6171=1;
}}
if(!Global_23390.f_6172){
Global_23390.f_6175=iVar9;
Global_23390.f_6172=1;
}
iVar5++;
}
Global_23390.f_6319=fVar49;
Global_23390.f_6321=MISC::GET_GAME_TIMER();
HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23390.f_6319);
if(!Global_23390.f_8857){
func_402(0);
}
Global_23390.f_8857=0;
if(bParam2){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
if(bParam0){
func_379(1);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_402(int iParam0){
if(func_406()){
return;
}
if(!Global_20500.f_1==1){
if(func_145(0)){
func_403(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_403(int iParam0){
if(func_406()){
return;
}
if(Global_20704){
if(func_405()){
func_404(1, 1);
}else{
func_404(0, 0);
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
if(!func_91()){
Global_20500.f_1=3;
}}


void func_404(bool bParam0, bool bParam1){
if(bParam0){
if(func_145(0)){
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


bool func_405(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_406(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


float func_407(int iParam0){
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


void func_408(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


void func_409(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}


var func__410(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_411(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(bParam0){
HUD::GET_HUD_COLOUR(Global_23390.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
}else{
HUD::GET_HUD_COLOUR(Global_23390.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
}
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}


void func_412(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(bParam2){
if(bParam3){
func_413(Global_23390.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
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


void func_413(int iParam0, var uParam1, var uParam2, var uParam3){
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


void func_414(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!func_391(&iVar0, 0, iParam1)){
return;
}
uParam0=uParam0;
if(iParam3 && !func_434(bParam4, bParam8)){
return;
}
if(func_415()){
return;
}
if(NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}
if(iParam7==0){
if(func_323(PLAYER::PLAYER_ID(), 0)){
return;
}}
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
return;
}}
if(Global_23390.f_5166 !=0){
if(PAD::HAVE_CONTROLS_CHANGED(2)){
iVar1=0;
while (iVar1 < Global_23390.f_5166){
if(Global_23390.f_5465[iVar1] !=363){
StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23390.f_5465[iVar1], 1), 64);
}elseif(Global_23390.f_5480[iVar1] !=32){
StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23390.f_5480[iVar1], 1), 64);
}
iVar1++;
}
Global_23390.f_5167=0;
}
if(!Global_23390.f_5167){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23390.f_5524 / 100f)));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar1=0;
while (iVar1 < Global_23390.f_5166){
if(MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar1 /*4*/])) !=MISC::GET_HASH_KEY("PREV")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_367(&(Global_23390.f_5168[bVar1 /*16*/]));
iVar2=bVar1 + 1;
while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/]))==MISC::GET_HASH_KEY("PREV")){
func_367(&(Global_23390.f_5168[iVar2 /*16*/]));
iVar2++;
}
if(Global_23390.f_5450[bVar1]==-1){
func_39(&(Global_23390.f_5393[bVar1 /*4*/]));
}else{
iVar3=Global_23390.f_5450[bVar1];
if(iParam2 >=0){
iVar3=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[bVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
if(MISC::IS_PC_VERSION()){
if(Global_23390.f_5465[bVar1] !=363 && MISC::IS_BIT_SET(Global_23390.f_5495, bVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5465[bVar1]);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
bVar1++;
}
if(MISC::GET_HASH_KEY(&(Global_4540958.f_16)) !=MISC::GET_HASH_KEY("")){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5166);
func_367(&Global_4540958);
if(Global_4540958.f_20==-1){
func_39(&(Global_4540958.f_16));
}else{
iVar4=Global_23390.f_5450[bVar1];
if(iParam2 >=0){
iVar4=iParam2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
if(Global_23390.f_5525){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_23390.f_5167=1;
}
bVar1=false;
while (bVar1 < Global_23390.f_5166){
if(Global_23390.f_5450[bVar1] !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[bVar1 /*4*/]));
if(bParam5){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
}else{
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
bVar1++;
}
if(Global_4540958.f_20 !=-1){
if(iParam2 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
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
if(!Global_23390.f_8892){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
Global_23390.f_8892=1;
}}elseif(Global_23390.f_8892){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_23390.f_8892=0;
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_23390.f_5498){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23390.f_6103[iVar0 /*10*/], Global_23390.f_5496, Global_23390.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23390.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
}}}

int func_415(){
struct<3> Var0;
if(Global_20500.f_1 > 3){
return 1;
}
if(func_416()){
Var0={
0f, -500f, 0f 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20445==0){
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

int func_416(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}


void func_417(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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


void func_418(float fParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_LEADING(2);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP(fParam0, ((Global_23387 + Global_23389) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_419(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


float func_420(char* sParam0, int iParam1, int iParam2){
if(!MISC::IS_STRING_NULL(sParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_421();
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_421(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
if(Global_23390.f_8867){
iVar0=Global_23390.f_8863;
iVar1=Global_23390.f_8864;
iVar2=Global_23390.f_8865;
iVar3=Global_23390.f_8866;
}
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_SCALE(0f, 0.35f);
HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
HUD::SET_TEXT_WRAP((Global_23387 + 0.0046875f), ((Global_23387 + Global_23389) - 0.0046875f));
HUD::SET_TEXT_CENTRE(0);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}


void func_422(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


var func__423(int iParam0, bool bParam1){
char* sVar0[2];
var uVar1;
struct<13> Var2;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_7488[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23390.f_7488[iParam0 /*16*/]))==joaat("crew_logo")){
Var2={
func_331(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1)){
return func_424(&uVar1);
}}else{
return func_424(&(Global_23390.f_7488[iParam0 /*16*/]));
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


var func__424(var uParam0){
return uParam0;
}


char* func_425(int iParam0){
var uVar0;
struct<13> Var1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6463[iParam0 /*16*/]))){
if(MISC::GET_HASH_KEY(&(Global_23390.f_6463[iParam0 /*16*/]))==joaat("crew_logo")){
Var1={
func_331(PLAYER::PLAYER_ID()) 
};
NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
return func_424(&uVar0);
}else{
return func_424(&(Global_23390.f_6463[iParam0 /*16*/]));
}}
if(iParam0==52){
return "MPShopSale";
}
return "CommonMenu";
}


void func_426(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6){
int iVar0;
float fVar1;
float fVar2;
var uVar3;
float fVar4;
if(Global_23390.f_5661 > iParam0){
return;
}
if(Global_23390.f_5661 >=128){
return;
}
if(Global_23390.f_5663 >=256){
return;
}
if(Global_23390.f_6186 < Global_23390.f_6184){
return;
}
if(Global_23390.f_5661 !=iParam0){
Global_23390.f_5661=iParam0;
Global_23390.f_5662=0;
}
iVar0=Global_23390.f_5499[Global_23390.f_5662];
if(iVar0 !=1){
while (Global_23390.f_5662 < 4 && iVar0 !=1){
Global_23390.f_5662++;
iVar0=Global_23390.f_5499[Global_23390.f_5662];
}
if(iVar0 !=1){
return;
}}
StringCopy(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]), sParam1, 24);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1)){}
Global_23390.f_1616[Global_23390.f_5663]=bParam3;
Global_23390.f_1873[Global_23390.f_5663]=iParam4;
Global_23390.f_2130[Global_23390.f_5663]=iParam6;
Global_23390.f_5663++;
if(!bParam3){
func_429(Global_23390.f_5661, 1);
}else{
func_429(Global_23390.f_5661, 0);
}
if(iParam2==0){
fVar1=func_428(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
if(Global_23390.f_5518[Global_23390.f_5662]){
func_432(26, 1, 0, &fVar2, &uVar3, 0);
fVar1=(fVar1 + (fVar2 * 2f));
}
if(fVar1 > Global_23390.f_5511[Global_23390.f_5662]){
Global_23390.f_5511[Global_23390.f_5662]=fVar1;
}}
if(bParam5){
if(iParam2==0){
fVar4=func_427(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
if(fVar4 > Global_23390.f_6188[iParam0]){
Global_23390.f_6188[iParam0]=fVar4;
}}}
MISC::SET_BIT(&(Global_23390.f_5532[iParam0]), Global_23390.f_5662);
Global_23390.f_5662++;
Global_23390.f_6187=1;
Global_23390.f_6185=(Global_23390.f_5663 - 1);
Global_23390.f_6186=0;
Global_23390.f_6184=iParam2;
}


float func_427(char* sParam0){
if(!HUD::DOES_TEXT_LABEL_EXIST(sParam0)){}
return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}


float func_428(char* sParam0){
if(!MISC::IS_STRING_NULL(uParam0)){
if(MISC::GET_HASH_KEY(sParam0)==0){
return 0f;
}}else{
return 0f;
}
func_412(0, 1, 0, 0, 0, 0, 0);
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


void func_429(bool bParam0, bool bParam1){
int iVar0;
iVar0=floor((to_float(iParam0) / 32f));
if(bParam1){
MISC::SET_BIT(&(Global_23390.f_6458[iVar0]), (bParam0 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(&(Global_23390.f_6458[iVar0]), (bParam0 - iVar0 * 32));
}}


void func_430(bool bParam0, var uParam1, var uParam2, float fParam3){
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
if(func_431(*uParam1, *uParam2)){
*fParam3=1f;
*uParam1=round((fVar1 * fVar2));
*uParam2=round(fVar1);
return;
}
*fParam3=((fVar0 / fVar1) / fVar2);
*uParam1=round((fVar0 / *fParam3));
*uParam2=round((fVar1 / *fParam3));
}


bool func_431(bool bParam0, bool bParam1){
return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}

int func_432(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
float fVar4;
struct<3> Var5;
float fVar6;
StringCopy(&cVar0, func_425(iParam0), 64);
StringCopy(&cVar1, func_423(iParam0, bParam1), 64);
if(MISC::GET_HASH_KEY(&cVar1) !=0){
fVar4=1f;
func_430(bParam5, &iVar2, &iVar3, &fVar4);
Var5={
GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) 
};
fVar6=(func_433(iParam0) / fVar4);
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
if(iParam0==29 && MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/]))==joaat("crew_logo")){
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
if(*fParam3 > Global_23389){
*fParam4=(*fParam4 * (Global_23389 / *fParam3));
*fParam3=Global_23389;
}}
return 1;
}
return 0;
}


float func_433(int iParam0){
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

int func_434(bool bParam0, bool bParam1){
if(Global_2672524.f_1685.f_701 !=0){
return 1;
}
if((((((((!CAM::IS_SCREEN_FADED_IN() || (func_94(8, -1) && func_435() !=65)) || (HUD::GET_PAUSE_MENU_STATE() !=0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482){
return 0;
}
return 1;
}

int func_435(){
return Global_1574996;
}


void func_436(){
if(iLocal_114==0){
if(!bLocal_122){
func_437("PAH_QUICK_D1", 0, 0);
}}elseif(iLocal_114==iLocal_115){
if(!bLocal_123){
func_437("PAH_QUICK_D2", 0, 0);
}elseif(!bLocal_124){
func_437("PAH_QUICK_D3", 0, 0);
}}elseif(!bLocal_123){
func_437("PAH_QUICK_D2", 0, 0);
}elseif(!uLocal_125[(iLocal_114 - 1)]){
func_437("PAH_QUICK_D3", 0, 0);
}}


void func_437(char* sParam0, int iParam1, int iParam2){
int iVar0;
StringCopy(&(Global_23390.f_5081), sParam0, 24);
Global_23390.f_5159=0;
Global_23390.f_5160=0;
Global_23390.f_5161=0;
Global_23390.f_5162=0;
Global_23390.f_5163=iParam1;
Global_23390.f_5164=MISC::GET_GAME_TIMER();
Global_23390.f_5165=iParam2;
iVar0=0;
while (iVar0 < 4){
Global_23390.f_5093[iVar0]=0;
iVar0++;
}}


void func_438(){
bool bVar0;
bVar0=true;
if((((HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) || Global_100885.f_1482){
bVar0=false;
}
if((bVar0 && PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || (bVar0 && Local_128.f_6)){
if(!func_472()){
if(iLocal_114==0){
if(func_400()){
iLocal_120=-1;
iLocal_119=1;
iLocal_118=1;
}}elseif(iLocal_114==iLocal_115){
if(func_396()){
if(func_393()){
iLocal_120=50;
iLocal_119=1;
iLocal_118=1;
}}}elseif(func_396()){
if(func_395(iLocal_121[(iLocal_114 - 1)])){
iLocal_119=1;
iLocal_118=1;
iLocal_120=iLocal_121[(iLocal_114 - 1)];
}}}else{
iLocal_126=1;
}}elseif(!bVar0){}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 202) || Local_128.f_7){
iLocal_119=1;
}elseif((PAD::IS_CONTROL_JUST_PRESSED(2, 188) && func_439(&uLocal_127, &(Local_128.f_4), 1)) || (Local_128.f_8 && func_439(&uLocal_127, &(Local_128.f_4), 1))){
if(Local_128.f_4 > 0){
iLocal_114=(iLocal_114 - 1);
if(iLocal_114 < 0){
iLocal_114=(iLocal_113 - 1);
}
func_440(iLocal_114, 1, 1);
}}elseif((PAD::IS_CONTROL_JUST_PRESSED(2, 187) && func_439(&uLocal_127, &(Local_128.f_4), 1)) || (Local_128.f_9 && func_439(&uLocal_127, &(Local_128.f_4), 1))){
if(Local_128.f_4 < 0){
iLocal_114++;
if(iLocal_114 > (iLocal_113 - 1)){
iLocal_114=0;
}
func_440(iLocal_114, 1, 1);
}}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

int func_439(var uParam0, var uParam1, bool bParam2){
int iVar0;
int iVar1;
iVar1=150;
if(bParam2){
if(((PAD::IS_DISABLED_CONTROL_PRESSED(2, 188) || PAD::GET_CONTROL_NORMAL(2, 219) < -0.3f) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241)) || PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, 241)){
iVar1=100;
}
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1){
*uParam0=NETWORK::GET_NETWORK_TIME();
iVar0=1;
*uParam1=1;
}}
if(((PAD::IS_DISABLED_CONTROL_PRESSED(2, 187) || PAD::GET_CONTROL_NORMAL(2, 219) > 0.3f) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242)) || PAD::IS_CONTROL_JUST_PRESSED(2, 187)){
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, 242)){
iVar1=100;
}
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1){
*uParam0=NETWORK::GET_NETWORK_TIME();
iVar0=1;
*uParam1=-1;
}}}else{
if((PAD::IS_DISABLED_CONTROL_PRESSED(2, 190) || PAD::GET_CONTROL_NORMAL(2, 218) > 0.3f) || PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1){
*uParam0=NETWORK::GET_NETWORK_TIME();
iVar0=1;
*uParam1=1;
}}
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, 189) || PAD::GET_CONTROL_NORMAL(2, 218) < -0.3f){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1){
*uParam0=NETWORK::GET_NETWORK_TIME();
iVar0=1;
*uParam1=-1;
}}}
return iVar0;
}


void func_440(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
Global_23390.f_6182=iParam0;
Global_23390.f_6317=iParam2;
if(Global_23390.f_6182 < Global_23390.f_6181){
Global_23390.f_6181=Global_23390.f_6182;
}elseif((Global_23390.f_6172 && Global_23390.f_6182 > Global_23390.f_6183) || (!Global_23390.f_6172 && Global_23390.f_6182 >=(Global_23390.f_6181 + Global_23390.f_5668))){
iVar0=Global_23390.f_6181;
while (iVar0 <=Global_23390.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23390.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}
while (iVar1 > Global_23390.f_5668 && Global_23390.f_6181 < 128){
Global_23390.f_6181++;
iVar1=0;
iVar0=Global_23390.f_6181;
while (iVar0 <=Global_23390.f_6182){
if(iVar0 >=0 && iVar0 < 127){
if(Global_23390.f_5532[iVar0] !=0){
iVar1++;
}}
iVar0++;
}}}
Global_23390.f_6171=0;
Global_23390.f_6172=0;
if(bParam1){
StringCopy(&(Global_23390.f_5081), "", 24);
StringCopy(&(Global_4540958.f_21), "", 16);
}}


void func_441(){
struct<4> Var0;
char* sVar1;
int iVar2;
bool bVar3;
func_451(0, 0);
func_450("PAH_QUICK_1");
func_449(1, 2, 1, 1, 1);
func_448(1, 1, 0, 0, 0);
iLocal_113=0;
Var0={
func_447(func_259(5, -1)) 
};
sVar1=func_446(&Var0);
bLocal_122=func_400();
bLocal_123=func_396();
func_426(iLocal_113, sVar1, 0, bLocal_122, 0, 0, 0);
iLocal_113++;
iVar2=0;
while (iVar2 < 5){
if(func_445(iVar2) > 0){
if(func_188(func_445(iVar2))){
iLocal_121[iVar2]=func_445(iVar2);
uLocal_125[iVar2]=func_395(iLocal_121[iVar2]);
if(bLocal_123){
bVar3=uLocal_125[iVar2];
}else{
bVar3=false;
}
func_426(iLocal_113, func_444(iLocal_121[iVar2]), 0, bVar3, 0, 0, 0);
iLocal_113++;
}}
iVar2++;
}
bLocal_124=(func_393() && bLocal_123);
if(func_371(PLAYER::PLAYER_ID())){
func_426(iLocal_113, func_443(func_372(PLAYER::PLAYER_ID())), 0, bLocal_124, 0, 0, 0);
iLocal_115=iLocal_113;
iLocal_113++;
}
func_442(201, "ITEM_SELECT", -1, 0);
func_442(202, "ITEM_BACK", -1, 0);
func_440(iLocal_114, 1, 1);
}


void func_442(int iParam0, char* sParam1, int iParam2, bool bParam3){
char* sVar0;
sVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, 1);
if(Global_23390.f_5166 >=14){
StringCopy(&Global_4540958, sVar0, 64);
StringCopy(&(Global_4540958.f_16), sParam1, 16);
Global_4540958.f_20=iParam2;
return;
return;
}
if(!bParam3){
MISC::SET_BIT(&(Global_23390.f_5495), Global_23390.f_5166);
}
StringCopy(&(Global_23390.f_5168[Global_23390.f_5166 /*16*/]), sVar0, 64);
StringCopy(&(Global_23390.f_5393[Global_23390.f_5166 /*4*/]), sParam1, 16);
Global_23390.f_5450[Global_23390.f_5166]=iParam2;
Global_23390.f_5465[Global_23390.f_5166]=iParam0;
Global_23390.f_5480[Global_23390.f_5166]=32;
Global_23390.f_5166++;
}


char* func_443(int iParam0){
switch (iParam0){
case 1:
return "MP_WAREHOUSE_1";
case 2:
return "MP_WAREHOUSE_2";
case 3:
return "MP_WAREHOUSE_3";
case 4:
return "MP_WAREHOUSE_4";
case 5:
return "MP_WAREHOUSE_5";
case 6:
return "MP_WAREHOUSE_6";
case 7:
return "MP_WAREHOUSE_7";
case 8:
return "MP_WAREHOUSE_8";
case 9:
return "MP_WAREHOUSE_9";
case 10:
return "MP_WAREHOUSE_10";
default:
}
return "";
}


char* func_444(int iParam0){
switch (iParam0){
case 1:
return "MP_WHOUSE_0";
break;
case 2:
return "MP_WHOUSE_1";
break;
case 3:
return "MP_WHOUSE_2";
break;
case 4:
return "MP_WHOUSE_3";
break;
case 5:
return "MP_WHOUSE_4";
break;
case 6:
return "MP_WHOUSE_5";
break;
case 7:
return "MP_WHOUSE_6";
break;
case 8:
return "MP_WHOUSE_7";
break;
case 9:
return "MP_WHOUSE_8";
break;
case 10:
return "MP_WHOUSE_9";
break;
case 11:
return "MP_WHOUSE_10";
break;
case 12:
return "MP_WHOUSE_11";
break;
case 13:
return "MP_WHOUSE_12";
break;
case 14:
return "MP_WHOUSE_13";
break;
case 15:
return "MP_WHOUSE_14";
break;
case 16:
return "MP_WHOUSE_15";
break;
case 17:
return "MP_WHOUSE_16";
break;
case 18:
return "MP_WHOUSE_17";
break;
case 19:
return "MP_WHOUSE_18";
break;
case 20:
return "MP_WHOUSE_19";
break;
case 21:
return "MP_WHOUSE_20";
break;
case 22:
return "MP_WHOUSE_21";
break;
}
return "";
}

int func_445(int iParam0){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_116[iParam0 /*3*/] !=0){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_116[iParam0 /*3*/];
}
return 0;
}


var func__446(var uParam0){
return uParam0;
}


struct<4> func_447(int iParam0){
struct<4> Var0;
switch (iParam0){
case 1:
StringCopy(&Var0, "MP_PROP_1", 16);
break;
case 2:
StringCopy(&Var0, "MP_PROP_2", 16);
break;
case 3:
StringCopy(&Var0, "MP_PROP_3", 16);
break;
case 4:
StringCopy(&Var0, "MP_PROP_4", 16);
break;
case 5:
StringCopy(&Var0, "MP_PROP_5", 16);
break;
case 6:
StringCopy(&Var0, "MP_PROP_6", 16);
break;
case 7:
StringCopy(&Var0, "MP_PROP_7", 16);
break;
case 8:
StringCopy(&Var0, "MP_PROP_8", 16);
break;
case 9:
StringCopy(&Var0, "MP_PROP_9", 16);
break;
case 10:
StringCopy(&Var0, "MP_PROP_10", 16);
break;
case 11:
StringCopy(&Var0, "MP_PROP_11", 16);
break;
case 12:
StringCopy(&Var0, "MP_PROP_12", 16);
break;
case 13:
StringCopy(&Var0, "MP_PROP_13", 16);
break;
case 14:
StringCopy(&Var0, "MP_PROP_14", 16);
break;
case 15:
StringCopy(&Var0, "MP_PROP_15", 16);
break;
case 16:
StringCopy(&Var0, "MP_PROP_16", 16);
break;
case 17:
StringCopy(&Var0, "MP_PROP_17", 16);
break;
case 18:
StringCopy(&Var0, "MP_PROP_18", 16);
break;
case 19:
StringCopy(&Var0, "MP_PROP_19", 16);
break;
case 20:
StringCopy(&Var0, "MP_PROP_20", 16);
break;
case 21:
StringCopy(&Var0, "MP_PROP_21", 16);
break;
case 22:
StringCopy(&Var0, "MP_PROP_22", 16);
break;
case 23:
StringCopy(&Var0, "MP_PROP_23", 16);
break;
case 24:
StringCopy(&Var0, "MP_PROP_24", 16);
break;
case 25:
StringCopy(&Var0, "MP_PROP_25", 16);
break;
case 26:
StringCopy(&Var0, "MP_PROP_26", 16);
break;
case 27:
StringCopy(&Var0, "MP_PROP_27", 16);
break;
case 28:
StringCopy(&Var0, "MP_PROP_28", 16);
break;
case 29:
StringCopy(&Var0, "MP_PROP_29", 16);
break;
case 30:
StringCopy(&Var0, "MP_PROP_30", 16);
break;
case 31:
StringCopy(&Var0, "MP_PROP_31", 16);
break;
case 32:
StringCopy(&Var0, "MP_PROP_32", 16);
break;
case 33:
StringCopy(&Var0, "MP_PROP_33", 16);
break;
case 34:
StringCopy(&Var0, "MP_PROP_34", 16);
break;
case 35:
StringCopy(&Var0, "MP_PROP_35", 16);
break;
case 36:
StringCopy(&Var0, "MP_PROP_36", 16);
break;
case 37:
StringCopy(&Var0, "MP_PROP_37", 16);
break;
case 38:
StringCopy(&Var0, "MP_PROP_38", 16);
break;
case 39:
StringCopy(&Var0, "MP_PROP_39", 16);
break;
case 40:
StringCopy(&Var0, "MP_PROP_40", 16);
break;
case 41:
StringCopy(&Var0, "MP_PROP_41", 16);
break;
case 42:
StringCopy(&Var0, "MP_PROP_42", 16);
break;
case 43:
StringCopy(&Var0, "MP_PROP_43", 16);
break;
case 44:
StringCopy(&Var0, "MP_PROP_44", 16);
break;
case 45:
StringCopy(&Var0, "MP_PROP_45", 16);
break;
case 46:
StringCopy(&Var0, "MP_PROP_46", 16);
break;
case 47:
StringCopy(&Var0, "MP_PROP_48", 16);
break;
case 48:
StringCopy(&Var0, "MP_PROP_49", 16);
break;
case 49:
StringCopy(&Var0, "MP_PROP_50", 16);
break;
case 50:
StringCopy(&Var0, "MP_PROP_51", 16);
break;
case 51:
StringCopy(&Var0, "MP_PROP_52", 16);
break;
case 52:
StringCopy(&Var0, "MP_PROP_57", 16);
break;
case 53:
StringCopy(&Var0, "MP_PROP_59", 16);
break;
case 54:
StringCopy(&Var0, "MP_PROP_60", 16);
break;
case 55:
StringCopy(&Var0, "MP_PROP_61", 16);
break;
case 56:
StringCopy(&Var0, "MP_PROP_62", 16);
break;
case 57:
StringCopy(&Var0, "MP_PROP_63", 16);
break;
case 58:
StringCopy(&Var0, "MP_PROP_64", 16);
break;
case 59:
StringCopy(&Var0, "MP_PROP_65", 16);
break;
case 60:
StringCopy(&Var0, "MP_PROP_66", 16);
break;
case 61:
StringCopy(&Var0, "MP_PROP_67", 16);
break;
case 62:
StringCopy(&Var0, "MP_PROP_68", 16);
break;
case 63:
StringCopy(&Var0, "MP_PROP_69", 16);
break;
case 64:
StringCopy(&Var0, "MP_PROP_70", 16);
break;
case 65:
StringCopy(&Var0, "MP_PROP_71", 16);
break;
case 66:
StringCopy(&Var0, "MP_PROP_72", 16);
break;
case 67:
StringCopy(&Var0, "MP_PROP_73", 16);
break;
case 68:
StringCopy(&Var0, "MP_PROP_74", 16);
break;
case 69:
StringCopy(&Var0, "MP_PROP_75", 16);
break;
case 70:
StringCopy(&Var0, "MP_PROP_76", 16);
break;
case 71:
StringCopy(&Var0, "MP_PROP_77", 16);
break;
case 72:
StringCopy(&Var0, "MP_PROP_78", 16);
break;
case 83:
StringCopy(&Var0, "MP_PROP_79", 16);
break;
case 84:
StringCopy(&Var0, "MP_PROP_80", 16);
break;
case 85:
StringCopy(&Var0, "MP_PROP_81", 16);
break;
case 73:
StringCopy(&Var0, "MP_PROP_83", 16);
break;
case 74:
StringCopy(&Var0, "MP_PROP_84", 16);
break;
case 75:
StringCopy(&Var0, "MP_PROP_85", 16);
break;
case 76:
StringCopy(&Var0, "MP_PROP_86", 16);
break;
case 77:
StringCopy(&Var0, "MP_PROP_87", 16);
break;
case 78:
StringCopy(&Var0, "MP_PROP_89", 16);
break;
case 79:
StringCopy(&Var0, "MP_PROP_90", 16);
break;
case 80:
StringCopy(&Var0, "MP_PROP_92", 16);
break;
case 81:
StringCopy(&Var0, "MP_PROP_94", 16);
break;
case 82:
StringCopy(&Var0, "MP_PROP_95", 16);
break;
case 86:
StringCopy(&Var0, "PM_SPAWN_Y", 16);
break;
case 87:
StringCopy(&Var0, "MP_PROP_OFF1", 16);
break;
case 88:
StringCopy(&Var0, "MP_PROP_OFF2", 16);
break;
case 89:
StringCopy(&Var0, "MP_PROP_OFF3", 16);
break;
case 90:
StringCopy(&Var0, "MP_PROP_OFF4", 16);
break;
case 91:
StringCopy(&Var0, "MP_PROP_CLUBH1", 16);
break;
case 92:
StringCopy(&Var0, "MP_PROP_CLUBH2", 16);
break;
case 93:
StringCopy(&Var0, "MP_PROP_CLUBH3", 16);
break;
case 94:
StringCopy(&Var0, "MP_PROP_CLUBH4", 16);
break;
case 95:
StringCopy(&Var0, "MP_PROP_CLUBH5", 16);
break;
case 96:
StringCopy(&Var0, "MP_PROP_CLUBH6", 16);
break;
case 97:
StringCopy(&Var0, "MP_PROP_CLUBH7", 16);
break;
case 98:
StringCopy(&Var0, "MP_PROP_CLUBH8", 16);
break;
case 99:
StringCopy(&Var0, "MP_PROP_CLUBH9", 16);
break;
case 100:
StringCopy(&Var0, "MP_PROP_CLUBH10", 16);
break;
case 101:
StringCopy(&Var0, "MP_PROP_CLUBH11", 16);
break;
case 102:
StringCopy(&Var0, "MP_PROP_CLUBH12", 16);
break;
case 103:
case 106:
case 109:
case 112:
StringCopy(&Var0, "MP_PROP_OFFG1", 16);
break;
case 104:
case 107:
case 110:
case 113:
StringCopy(&Var0, "MP_PROP_OFFG2", 16);
break;
case 105:
case 108:
case 111:
case 114:
StringCopy(&Var0, "MP_PROP_OFFG3", 16);
break;
case 115:
StringCopy(&Var0, "IE_WARE_1", 16);
break;
}
return Var0;
}


void func_448(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23390.f_5499[0]=iParam0;
Global_23390.f_5499[1]=iParam1;
Global_23390.f_5499[2]=iParam2;
Global_23390.f_5499[3]=iParam3;
Global_23390.f_5499[4]=iParam4;
Global_23390.f_5669=0;
if(iParam0 !=0){
Global_23390.f_5669++;
}
if(iParam1 !=0){
Global_23390.f_5669++;
}
if(iParam2 !=0){
Global_23390.f_5669++;
}
if(iParam3 !=0){
Global_23390.f_5669++;
}
if(iParam4 !=0){
Global_23390.f_5669++;
}}


void func_449(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
Global_23390.f_5526[0]=iParam0;
Global_23390.f_5526[1]=iParam1;
Global_23390.f_5526[2]=iParam2;
Global_23390.f_5526[3]=iParam3;
Global_23390.f_5526[4]=iParam4;
}


void func_450(char* sParam0){
int iVar0;
StringCopy(&(Global_23390.f_1), sParam0, 16);
Global_23390.f_74=0;
Global_23390.f_75=0;
Global_23390.f_76=0;
Global_23390.f_77=0;
Global_23390.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23390.f_5[iVar0]=0;
iVar0++;
}}


void func_451(bool bParam0, bool bParam1){
int iVar0;
int iVar1;
float fVar2;
iVar0=0;
while (iVar0 < 256){
StringCopy(&(Global_23390.f_79[iVar0 /*6*/]), "", 24);
iVar1=0;
while (iVar1 < 4){
Global_23390.f_2387[iVar0 /*5*/][iVar1]=0;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 40){
StringCopy(&(Global_2695123[iVar0 /*16*/]), "", 64);
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23390.f_4309[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23390.f_4566[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 256){
Global_23390.f_4824[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 128){
Global_23390.f_5532[iVar0]=0;
Global_23390.f_5670[iVar0]=0;
Global_23390.f_5799[iVar0]=0;
Global_23390.f_6322[iVar0]=0f;
Global_23390.f_5928[iVar0]=0;
Global_23390.f_6188[iVar0]=0f;
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
Global_23390.f_5499[iVar0]=0;
Global_23390.f_5511[iVar0]=0f;
Global_23390.f_5505[iVar0]=-1f;
Global_23390.f_5518[iVar0]=0;
Global_23390.f_5526[iVar0]=1;
iVar0++;
}
iVar0=0;
while (iVar0 < 14){
StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
Global_23390.f_5450[iVar0]=-1;
Global_23390.f_5465[iVar0]=363;
Global_23390.f_5480[iVar0]=32;
iVar0++;
}
iVar0=0;
while (iVar0 < 64){
StringCopy(&(Global_23390.f_6463[iVar0 /*16*/]), "", 64);
StringCopy(&(Global_23390.f_7488[iVar0 /*16*/]), "", 64);
iVar0++;
}
if(bParam1){
iVar0=0;
while (iVar0 < 256){
Global_23390.f_1616[iVar0]=0;
iVar0++;
}}
StringCopy(&(Global_4540958.f_16), "", 16);
Global_4540958.f_20=-1;
Global_23390=0;
Global_23390.f_5661=0;
Global_23390.f_5662=0;
Global_23390.f_5663=0;
Global_23390.f_5665=0;
Global_23390.f_5666=0;
Global_23390.f_5667=0;
Global_23390.f_5664=0;
Global_23390.f_6317=0;
Global_23390.f_6457=0;
Global_23390.f_6182=0;
Global_23390.f_6181=0;
Global_23390.f_6183=0;
StringCopy(&(Global_23390.f_5081), "", 24);
Global_23390.f_5159=0;
Global_23390.f_5160=0;
Global_23390.f_5161=0;
Global_23390.f_5162=0;
Global_23390.f_5163=0;
Global_23390.f_5164=0;
iVar0=0;
while (iVar0 < 4){
Global_23390.f_5093[iVar0]=0;
iVar0++;
}
Global_23390.f_5165=0;
StringCopy(&(Global_4540958.f_21), "", 16);
Global_4540958.f_61=0;
Global_4540958.f_62=0;
Global_4540958.f_63=0;
Global_4540958.f_64=0;
Global_4540958.f_65=0;
Global_4540958.f_66=0;
iVar0=0;
while (iVar0 < 4){
Global_4540958.f_25[iVar0]=0;
iVar0++;
}
Global_4540958.f_67=0;
StringCopy(&(Global_23390.f_1), "", 16);
Global_23390.f_5517=0f;
Global_23390.f_74=0;
Global_23390.f_75=0;
Global_23390.f_76=0;
Global_23390.f_77=0;
Global_23390.f_78=0;
iVar0=0;
while (iVar0 < 4){
Global_23390.f_5[iVar0]=0;
iVar0++;
}
Global_23390.f_6187=0;
Global_23390.f_6186=0;
Global_23390.f_6184=0;
Global_23390.f_6185=0;
Global_23390.f_5166=0;
Global_23390.f_5167=0;
Global_23390.f_5668=10;
Global_23390.f_5669=0;
Global_23390.f_6319=0f;
Global_23390.f_6320=0f;
Global_23390.f_6171=0;
Global_23390.f_6172=0;
Global_23390.f_6173=0f;
Global_23390.f_6174=0;
Global_23390.f_6176=0;
Global_23390.f_6175=0;
Global_23390.f_6177=0;
Global_23390.f_6178=0;
Global_23390.f_6179=0;
Global_23390.f_6180=0;
Global_23390.f_8888=0;
iVar0=0;
while (iVar0 < 2){
Global_23390.f_6451[iVar0]=-1;
Global_23390.f_6454[iVar0]=-1;
iVar0++;
}
Global_23390.f_5524=0f;
Global_23390.f_5495=0;
Global_23390.f_5525=0;
iVar0=0;
while (iVar0 < Global_23390.f_6458){
Global_23390.f_6458[iVar0]=0;
iVar0++;
}
Global_23390.f_8867=0;
Global_23390.f_8862=0;
Global_23390.f_8872=0;
Global_23390.f_8877=0;
Global_23390.f_8882=0;
Global_23390.f_8884=0;
Global_23390.f_8890=0;
Global_23387=0.05f;
Global_23388=0.05f;
Global_23389=0.225f;
fVar2=GRAPHICS::GET_ASPECT_RATIO(0);
if(bParam0){
Global_23389=(0.225f * (1.777778f / fVar2));
}elseif(fVar2 < 1.77777f){
Global_23389=(0.225f * (1.777778f / fVar2));
}else{
Global_23389=0.225f;
}}


bool func_452(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_391(&iVar0, 1, iParam1)){
return 0;
}
bVar1=true;
StringCopy(&(Global_23390.f_6078[iVar0 /*4*/]), sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6078[iVar0 /*4*/]))){
HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23390.f_6078[iVar0 /*4*/]), 9);
Global_23390.f_6071[iVar0]=1;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23390.f_6078[iVar0 /*4*/]), 9)){
bVar1=false;
}}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
Global_23390.f_6057[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
bVar1=false;
}
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
Global_23390.f_6064[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")){
bVar1=false;
}}
bVar2=false;
StringCopy(&(Global_23390.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
bVar2=func_453(&(Global_23390.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_453(var uParam0){
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


void func_454(var uParam0){
func_463(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
uParam0->f_6=(PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201));
uParam0->f_7=(PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202));
uParam0->f_8=(uParam0->f_1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188));
uParam0->f_9=(uParam0->f_1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187));
if(((((func_452(0, -1, 0) && HUD::GET_PAUSE_MENU_STATE()==0) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !Global_100885.f_1482){
if(MISC::IS_PC_VERSION() && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
if(PAD::IS_USING_CURSOR(2)){
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
if((Global_4541034==-1 || Global_4541034==-4) || Global_4541034==-6){
PAD::ENABLE_CONTROL_ACTION(1, 1, 1);
PAD::ENABLE_CONTROL_ACTION(1, 2, 1);
}else{
PAD::DISABLE_CONTROL_ACTION(1, 1, 1);
PAD::DISABLE_CONTROL_ACTION(1, 2, 1);
}
func_460(0, 0, 0, 1);
func_459(0, -1, 1);
}
if(func_458()){
if(Global_4541034==iLocal_114){
uParam0->f_6=1;
}else{
iLocal_114=Global_4541034;
func_440(iLocal_114, 1, 1);
}}
if(func_457()){
uParam0->f_7=1;
}
if(func_456(0, 0, 0)){
uParam0->f_8=1;
}
if(func_455(0, 0, 0)){
uParam0->f_9=1;
}}}}

int func_455(int iParam0, int iParam1, int iParam2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541034==-3){
if((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}
if(iParam2==0){
if(PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && iParam1)){
return 1;
}}}
return 0;
}

int func_456(int iParam0, int iParam1, int iParam2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541034==-2){
if((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}
if(iParam2==0){
if(PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && iParam1)){
return 1;
}}}
return 0;
}

int func_457(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 238)){
return 1;
}}
return 0;
}

int func_458(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(Global_4541034 > -1){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}}}
return 0;
}

int func_459(int iParam0, int iParam1, bool bParam2){
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}
if(bParam2){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
}
if(Global_4541034==-6){
HUD::SET_MOUSE_CURSOR_STYLE(4);
if(iParam0 && PAD::IS_CONTROL_PRESSED(2, 237)){
return 1;
}else{
Global_4541034=-1;
return 0;
}}
if(((Global_4541034 > -1 || Global_4541034==-3) || Global_4541034==-2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS()){
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}
if(Global_4541034==-1 && iParam0){
if(PAD::IS_CONTROL_PRESSED(2, 237)){
HUD::SET_MOUSE_CURSOR_STYLE(4);
Global_4541034=-6;
return 1;
}else{
HUD::SET_MOUSE_CURSOR_STYLE(3);
return 0;
}}
HUD::SET_MOUSE_CURSOR_STYLE(1);
return 0;
}


void func_460(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
fVar6=(0.034722f / 2f);
iVar13=-1;
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
Global_4541034=-1;
return;
}
PAD::SET_USE_ADJUSTED_MOUSE_COORDS(1);
fVar0=Global_23387;
fVar2=(fVar0 + Global_23389);
fVar3=Global_23390.f_6173;
fVar1=(Global_23390.f_6173 - (IntToFloat(Global_23390.f_6175) * 0.034722f));
if(bParam2){
fVar3=(fVar3 + 0.034722f);
fVar1=(fVar1 + 0.034722f);
}
if(Global_23390.f_6175 < 1){
fVar1=(Global_23390.f_6173 - 0.034722f);
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
fVar4=fVar0;
fVar5=fVar1;
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
func_462();
if(Global_4541034==-6){
return;
}
Global_4541034=-1;
fVar7=Global_4541028;
fVar8=Global_4541029;
if(Global_23390.f_6176 > Global_23390.f_6175){
if(((Global_4541028 >=fVar0 && Global_4541028 <=fVar2) && Global_4541029 >=fVar3) && Global_4541029 < (fVar3 + fVar6)){
Global_4541034=-2;
if(bParam3){
func_461(0);
}
return;
}
if(((Global_4541028 >=fVar0 && Global_4541028 <=fVar2) && Global_4541029 >=(fVar3 + fVar6)) && Global_4541029 < (fVar3 + 0.034722f)){
Global_4541034=-3;
if(bParam3){
func_461(0);
}
return;
}}
if(((fVar7 >=fVar0 && fVar7 <=fVar2) && fVar8 >=fVar1) && fVar8 <=fVar3){
fVar9=(fVar8 - fVar1);
iVar13=floor((fVar9 / 0.034722f));
if(Global_23390.f_6176==-1){
Global_4541034=0;
iVar13=0;
return;
}
iVar11=148;
iVar12=(iVar11 / Global_23390.f_6175);
iVar10=(32 + (iVar11 - (iVar12 * iVar13)));
if(bParam3){
if(!bParam1 || iVar13 !=0){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
func_422(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23389, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}}
Global_4541034=Global_23390.f_8513[iVar13];
return;
}
if(!bParam0){
if(fVar7 < fVar2){
Global_4541034=-4;
return;
}
if(fVar8 > 0.9f){
Global_4541034=-5;
return;
}}elseif(fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f)){
Global_4541034=-4;
return;
}
Global_4541034=-1;
}


void func_461(bool bParam0){
float fVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=(0.034722f / 2f);
if(bParam0){
iVar3=48;
}else{
iVar3=210;
}
fVar0=Global_23387;
fVar1=Global_23390.f_6173;
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
if(Global_4541034==-2){
func_422(fVar0, fVar1, Global_23389, fVar2, 255, 255, 255, iVar3);
}elseif(Global_4541034==-3){
func_422(fVar0, (fVar1 + fVar2), Global_23389, fVar2, 255, 255, 255, iVar3);
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_462(){
Global_4541030=Global_4541028;
Global_4541031=Global_4541029;
Global_4541028=PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
Global_4541029=PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
Global_4541032=(Global_4541028 - Global_4541030);
Global_4541033=(Global_4541029 - Global_4541031);
}


void func_463(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4){
*uParam0=floor((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
*uParam1=floor((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
*uParam2=floor((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
*uParam3=floor((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
if(bParam4){
if(IntToFloat(*uParam0)==0f && IntToFloat(*uParam1)==0f){
*uParam0=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
*uParam1=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
}
if(IntToFloat(*uParam2)==0f && IntToFloat(*uParam3)==0f){
*uParam2=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
*uParam3=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
}}}


void func_464(){
int iVar0;
iVar0=iLocal_1051;
if(ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
return;
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)){
VEHICLE::SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(iVar0, 0);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, 1);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 4);
if(VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iVar0) !=0 && VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iVar0) !=1){
MISC::CLEAR_BIT(&uLocal_134, 15);
}}}

int func_465(){
if(((((Local_129.f_27 && func_473()) && (!func_467(1) || func_399())) && ((func_373() || func_371(PLAYER::PLAYER_ID())) || func_400())) && func_466()) && (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_synchronized_scene")) !=1)){
return 1;
}
return 0;
}

int func_466(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
struct<3> Var6;
float fVar7;
if(iLocal_1054){
return iLocal_1055;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1051) && !ENTITY::IS_ENTITY_DEAD(iLocal_1051, 0)){
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_1051) + 1;
iVar0=0;
while (iVar0 < iVar1){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1051, (iVar0 - 1), 0)){
iVar2=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051, (iVar0 - 1), 0);
if(!PED::IS_PED_INJURED(iVar2)){
if(PED::IS_PED_A_PLAYER(iVar2)){
if(!func_296(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2))){
iLocal_1055=0;
iLocal_1054=1;
return 0;
}}elseif(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2)){
if(!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, 1)){
return 0;
}}}}
iVar0++;
}
iVar3=0;
while (iVar3 < 32){
iVar4=iVar3;
if(!iVar4==PLAYER::PLAYER_ID()){
if(func_146(iVar4, 1, 1)){
iVar5=PLAYER::GET_PLAYER_PED(iVar4);
if(ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5, 0)){
Var6={
func_181(iVar4) 
};
fVar7=vdist(Var6, ENTITY::GET_ENTITY_COORDS(iLocal_1051, 1));
if(fVar7 < 20f){
if(PED::GET_VEHICLE_PED_IS_USING(iVar5)==iLocal_1051){
if(!func_296(iVar4)){
iLocal_1055=0;
iLocal_1054=1;
return 0;
}}
}}}}
iVar3++;
}}
iLocal_1055=1;
iLocal_1054=1;
return 1;
}


bool func_467(bool bParam0){
return func_201(PLAYER::PLAYER_ID(), bParam0);
}


void func_468(){
int iVar0;
if(!MISC::IS_BIT_SET(uLocal_134, 13)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
iVar0=func_9(1191, -1);
if(!MISC::IS_BIT_SET(iVar0, 22) || !MISC::IS_BIT_SET(iVar0, 23)){
func_469("HTX_HELP2", -1);
if(!MISC::IS_BIT_SET(iVar0, 22)){
MISC::SET_BIT(&iVar0, 22);
}else{
MISC::SET_BIT(&iVar0, 23);
}
func_290(1191, iVar0, -1, 1);
MISC::SET_BIT(&uLocal_134, 13);
}else{
MISC::SET_BIT(&uLocal_134, 13);
}}}}


void func_469(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_470(int iParam0, int iParam1, int iParam2, int iParam3){
struct<6> Var0;
Var0.f_0=-1253241415;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam3;
Var0.f_5=iParam0;
Var0.f_3=iParam2;
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 6, iParam0);
}}

int func_471(int iParam0){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar1=iLocal_1051;
if(ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
return 0;
}
iVar2=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar1));
iVar3=0;
while (iVar3 < iVar2){
iVar5=(iVar3 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, iVar5, 0)){
iVar4=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, iVar5, 0));
if(iVar4 !=func_5() && func_146(iVar4, 1, 1)){
if(!Local_129.f_28==iVar4 || iParam0){
MISC::SET_BIT(&uVar0, iVar4);
}}}
iVar3++;
}
return uVar0;
}

int func_472(){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
struct<3> Var4;
struct<3> Var5;
iVar3=iLocal_1051;
if(ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
return 0;
}
Var4={
ENTITY::GET_ENTITY_COORDS(iVar3, 1) 
};
bVar2=false;
while (bVar2 < 32){
iVar0=PLAYER::INT_TO_PLAYERINDEX(bVar2);
if(func_146(iVar0, 1, 1)){
iVar1=PLAYER::GET_PLAYER_PED(iVar0);
if(!ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
Var5={
ENTITY::GET_ENTITY_COORDS(iVar1, 1) 
};
if(vdist(Var5, Var4) < 30f){
if(PED::IS_PED_IN_VEHICLE(iVar1, iVar3, 1)){
if(!PED::IS_PED_SITTING_IN_VEHICLE(iVar1, iVar3)){
return 1;
}}}}}
bVar2++;
}
return 0;
}


bool func_473(){
return func_259(5, -1) > 0;
}


var func__474(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_475(int iParam0, int iParam1){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(iParam0==1){
if(func_386()){
return 0;
}}
if(func_160()){
return 0;
}
if(iParam1==1){
if(func_145(0)){
return 0;
}}
if(func_94(8, -1)){
return 0;
}
if(PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
return 0;
}
if(func_42()){
return 0;
}
if(Global_60666){
return 0;
}
if(Global_75816){
return 0;
}
if(HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}
if(Global_1574964){
return 0;
}
if(Global_1836377){
return 0;
}
return 1;
}


void func_476(){
bool bVar0;
if(!MISC::IS_BIT_SET(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 7)){
bVar0=false;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(PAD::IS_DISABLED_CONTROL_PRESSED(0, 22)){
bVar0=true;
}}elseif(PAD::IS_DISABLED_CONTROL_PRESSED(0, 99) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 100)){
bVar0=true;
}
if(bVar0){
if(!func_382()){
bVar0=false;
}}
if(bVar0){
if(((((((!func_152(iLocal_1051) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051, 0, 0) !=PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(iLocal_1051) < 10f) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_rappel_from_heli")) !=1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_rappel_from_heli")) !=0) && func_475(1, 1)) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_1051) < 40f){
if(func_121(&uLocal_1036, 275, 0)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
TASK::TASK_RAPPEL_FROM_HELI(PLAYER::PLAYER_PED_ID(), 1092616192);
MISC::SET_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 7);
}}elseif(func_285(&uLocal_1036)){
func_144(&uLocal_1036);
}}elseif(func_285(&uLocal_1036)){
func_144(&uLocal_1036);
}}}


void func_477(){
if(!MISC::IS_BIT_SET(uLocal_134, 12)){
Global_1836158=1;
MISC::SET_BIT(&uLocal_134, 12);
}}


void func_478(){
if(HUD::DOES_BLIP_EXIST(uLocal_135)){
HUD::REMOVE_BLIP(&uLocal_135);
}}


void func_479(){
if(MISC::IS_BIT_SET(uLocal_134, 12)){
Global_1836158=0;
MISC::CLEAR_BIT(&uLocal_134, 12);
}}


void func_480(){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
if(((((func_146(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1051, 15f, 15f, 5f, 0, 1, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && ENTITY::GET_ENTITY_SPEED(iLocal_1051) < 5f) && !func_481(iLocal_1051, 0)) && func_475(1, 0)){
MISC::SET_BIT(&uLocal_134, 2);
if(MISC::IS_BIT_SET(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0)){
func_463(&iVar0, &iVar1, &uVar2, &uVar3, 0);
if(((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28){
if(iLocal_140==0){
settimera(0);
iLocal_140=1;
}}else{
iLocal_140=0;
}
if(iLocal_140==1){
if(timera() > 275){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
MISC::CLEAR_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
iLocal_140=0;
}}}}else{
MISC::SET_BIT(&uLocal_134, 2);
}}else{
MISC::CLEAR_BIT(&uLocal_134, 2);
if(MISC::IS_BIT_SET(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
iLocal_140=0;
}
MISC::CLEAR_BIT(&(Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
}}}

int func_481(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
iVar0=0;
while (iVar0 < iVar1){
if(VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0)){
return 0;
}elseif(!bParam1){
iVar2=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), 0);
if(PED::IS_PED_INJURED(iVar2)){
return 0;
}}
iVar0++;
}}
return 1;
}


void func_482(){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
int iVar4;
if(Local_129.f_24 !=4){
if(MISC::IS_BIT_SET(uLocal_134, 8)){
MISC::CLEAR_BIT(&uLocal_134, 8);
}}
if(!func_151(Local_129.f_4) && !func_152(iLocal_1051)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_129.f_4) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_129.f_4) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
func_501();
func_500();
switch (Local_129.f_24){
case 0:
break;
case 1:
if(TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission")) !=0){
if(MISC::IS_BIT_SET(uLocal_134, 4)){
TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0, 0, Local_129.f_6, 19, 30f, 7.5f, Local_129.f_9, round(10f), round(10f), -1082130432, 8225);
MISC::CLEAR_BIT(&uLocal_134, 17);
}}elseif(!MISC::IS_BIT_SET(uLocal_134, 4)){
func_172();
}elseif(TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission"))==1){
if(Local_129.f_9 > -1f){
if(ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_PED(Local_129.f_4), Local_129.f_6, (7.5f + 5f), (7.5f + 5f), 50f, 0, 1, 0)){
fVar0=ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_129.f_4));
fVar1=(fVar0 - Local_129.f_9);
if(fVar1 < 0f){
fVar1=(fVar1 + 360f);
}
if(fVar1 > 180f){
fVar1=(360f - fVar1);
}}
}}
break;
case 2:
if(iLocal_844 !=2){
func_172();
iLocal_844=2;
}
if(TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission")) !=0){
TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0, 0, Local_129.f_10, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
}
break;
case 3:
break;
case 4:
if(iLocal_844 !=4){
if(iLocal_844 !=3){
func_172();
}
if(iLocal_844==3){
Local_129.f_20={
ENTITY::GET_ENTITY_COORDS(iLocal_1051, 1) 
};
}
else{
Local_129.f_20={
0f, 0f, 0f 
};
}
iLocal_844=4;
}elseif(vmag(Local_129.f_20) > 0f){
if(vdist(ENTITY::GET_ENTITY_COORDS(iLocal_1051, 1), Local_129.f_20) > 10f){
if(TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission")) !=0){
TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0, 0, Local_129.f_20, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
}
}}
if(!MISC::IS_BIT_SET(uLocal_134, 8) && MISC::IS_BIT_SET(Local_129.f_1, 14)){
if(func_281()){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
if(!bLocal_132){
func_280(&uLocal_849, "CT_AUD", "MPCT_HPidle", 12, 0, 0, 1);
}else{
func_499(&uLocal_849, "CT_AUD", "MPCT_HPidle", "MPCT_HPidle_06", 12, 0, 0);
}}else{
func_14(1);
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
if(!bLocal_132){
func_103(&uLocal_849, "EXHELAU", "EXHEL_IDLE", 12, 0, 0, 1);
}else{
func_498(&uLocal_849, "EXHELAU", "EXHEL_IDLE", "EXHEL_IDLE_02", 12, 0, 0);
}}
MISC::SET_BIT(&uLocal_134, 8);
}}
break;
case 5:
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1051)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_1051);
}
if(MISC::IS_BIT_SET(uLocal_134, 15)){
func_464();
}
if(!MISC::IS_BIT_SET(uLocal_134, 14)){
if(iLocal_844 !=5){
func_172();
iLocal_844=5;
}
if(TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_129.f_4), joaat("script_task_vehicle_mission")) !=0){
TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0, 0, Local_129.f_29, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
}
if(func_497() && MISC::IS_BIT_SET(Local_129.f_1, 15)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_1051)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051, 1);
func_172();
if(iLocal_120==-1){
if(MISC::IS_BIT_SET(uLocal_134, 19)){
iVar2=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_1043);
if(iVar2 > 10000){
PLAYER::STOP_PLAYER_TELEPORT();
uLocal_1043=NETWORK::GET_NETWORK_TIME();
}
}
else{
uLocal_1043=NETWORK::GET_NETWORK_TIME();
MISC::SET_BIT(&uLocal_134, 19);
}
if(func_485(Local_129.f_29, 0f, 1, 0, 0, 0, 1, 0, 1, 0, 0)){
MISC::SET_BIT(&uLocal_134, 14);
MISC::CLEAR_BIT(&uLocal_134, 19);
if(iLocal_120==-1 && !func_297(Local_129.f_5)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051, 0);
ENTITY::SET_ENTITY_COLLISION(iLocal_1051, 1, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1051, 1);
Local_129.f_23=5;
func_172();
}
}}elseif(iLocal_120 > -1){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_1051, 0);
ENTITY::SET_ENTITY_COLLISION(iLocal_1051, 1, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1051, 1);
Local_129.f_23=5;
func_172();
}}
}}
break;
case 7:
func_147();
if(!MISC::IS_BIT_SET(uLocal_134, 9)){
if(func_281()){
if(func_159()){
func_120(&uLocal_849, 3, NETWORK::NET_TO_PED(Local_129.f_4), "FM_Pilot", 0, 1);
func_280(&uLocal_849, "CT_AUD", "MPCT_HPwrn2", 12, 0, 0, 1);
}else{
func_120(&uLocal_849, 2, NETWORK::NET_TO_PED(Local_129.f_4), "EXEC_PILOT", 0, 1);
func_103(&uLocal_849, "EXHELAU", "EXHEL_FORCED", 12, 0, 0, 1);
}
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1051, 2);
MISC::SET_BIT(&uLocal_134, 9);
}}
break;
case 8:
if(!VEHICLE::IS_ANY_PED_RAPPELLING_FROM_HELI(iLocal_1051)){
func_147();
if(VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iLocal_1051, 0, 1) > 0){
if(!func_151(Local_129.f_4)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_1051, 0)){
if(!func_277()){
TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_129.f_4), uLocal_137);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_3)){
func_484(&(Local_129.f_3));
}
if(func_291()){
func_483(0);
}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_4)){
func_484(&(Local_129.f_4));
}
}}}
}
elseif(!func_151(Local_129.f_4)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_1051, 0)){
TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_129.f_4), uLocal_138);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_129.f_4), 1);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_3)){
func_484(&(Local_129.f_3));
}
if(func_291()){
func_483(0);
}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_4)){
func_484(&(Local_129.f_4));
}}
}}
return;
}}
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051, 0)){
switch (Local_129.f_24){
case 7:
if(!MISC::IS_BIT_SET(uLocal_134, 10)){
iVar3=0;
while (iVar3 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_1051) + 1){
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1051, (iVar3 - 1), 0);
if(iVar4 !=0){
if(!PED::IS_PED_INJURED(iVar4)){
if(PED::IS_PED_A_PLAYER(iVar4)){
func_148(func_135(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4)), 0, 0f, 0, 0, 0, -1);
}
}}
iVar3++;
}
MISC::SET_BIT(&uLocal_134, 10);
}
break;
}}}}}


void func_483(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_304)){
Global_2794162.f_6029=1;
Global_2794162.f_6030=iParam0;
}}


void func_484(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}

int func_485(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10){
int iVar0;
struct<3> Var1;
float fVar2;
Global_23251.f_6=1;
if(Global_2672524.f_1024 && Global_2672524.f_1032){
func_493(0, bParam7);
return 1;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam7){
if(Global_2672524.f_1024){
func_493(0, bParam7);
}
return 0;
}
if((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam7) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
return 0;
}
if(!func_492(0)){
if(func_491(PLAYER::PLAYER_ID(), 1, 0) && !(func_490() || func_489())){
if(((bParam7 && func_146(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_232==1){
}elseif(func_435()==28){
}else{
return 0;
}}}
if(fParam1 < 0f){
fParam1=(fParam1 + 360f);
}
if(fParam1 >=360f){
fParam1=(fParam1 + -360f);
}
if(!Global_2672524.f_1024 && !bParam9){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
if((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f){
fVar2=(fParam1 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
if(fVar2 > 180f){
fVar2=(fVar2 + -360f);
}
if(fVar2 < -180f){
fVar2=(fVar2 + 360f);
}
if(MISC::ABSF(fVar2) < 1f){
Global_2672524.f_1024=0;
Global_2672524.f_1025=0;
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
return 1;
}}}
if(((!Param0.f_0==Global_2672524.f_1026 || !Param0.f_1==Global_2672524.f_1026.f_1) || !Param0.f_2==Global_2672524.f_1026.f_2) || !fParam1==Global_2672524.f_1029){
if(Global_2672524.f_1024==1){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2672524.f_1030) < func_488(0)){
return 0;
}
PLAYER::STOP_PLAYER_TELEPORT();
Global_2672524.f_1025=1;
}else{
Global_2672524.f_1025=0;
}
Global_2672524.f_1026={
Param0 
};
Global_2672524.f_1029=fParam1;
Global_2672524.f_1024=0;
}
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("kosatka")){
bParam2=false;
}}}
if(!Global_2672524.f_1024 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(bParam2){
bParam3=false;
}
bParam5=bParam5;
if(bParam5){
}
if(bParam3){
}
if(bParam6){
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!MISC::IS_BIT_SET(Global_100885.f_1414[44], 16)){
func_487(0);
}
if(!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2635560.f_502))){
Global_2635560.f_502=0;
}}
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0)){
Global_2672524.f_1031=0;
}}}
if(Global_2672524.f_1031 > -1){
Global_2672524.f_1030=NETWORK::GET_NETWORK_TIME();
Global_2672524.f_1024=1;
}else{
if(bParam7){
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Param0, 0, 1, 1, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
if(fParam10 !=0f){
ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
}
}
else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
}}else{
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 0, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
}}else{
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 0, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
}
func_493(bParam4, bParam7);
return 1;
}else{
STREAMING::CLEAR_FOCUS();
PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam1, bParam2, iParam8, 0);
}
Global_2672524.f_1030=NETWORK::GET_NETWORK_TIME();
Global_2672524.f_1024=1;
}}
if(Global_2672524.f_1024){
Global_23251.f_6=1;
Global_2672524.f_1030=NETWORK::GET_NETWORK_TIME();
if(Global_2672524.f_1031 > -1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
}
if(func_486(&(Global_2672524.f_1031), Param0, fParam1, iVar0)){
func_493(bParam4, bParam7);
return 1;
}}else{
if(bParam7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_2672524.f_1026) < 2f){
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
func_493(bParam4, bParam7);
return 1;
}}
if(!PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(fParam10 !=0f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
Global_2672524.f_1032=1;
return 0;
}}
func_493(bParam4, bParam7);
return 1;
}}}
return 0;
}

int func_486(var uParam0, struct<3> Param1, float fParam2, int iParam3){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_1033) && !ENTITY::IS_ENTITY_DEAD(Global_2672524.f_1033, 0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672524.f_1033);
}
switch (*uParam0){
case 0:
Global_2672524.f_1033=iParam3;
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672524.f_1033);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2672524.f_1033)){
if(!ENTITY::IS_ENTITY_DEAD(Global_2672524.f_1033, 0)){
ENTITY::SET_ENTITY_HEADING(Global_2672524.f_1033, fParam2);
ENTITY::SET_ENTITY_COORDS(Global_2672524.f_1033, Param1, 0, 1, 1, 1);
return 1;
}}
break;
}
return 0;
}


void func_487(int iParam0){
int iVar0;
iVar0=Global_2635560.f_2791;
if((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635560.f_2789==0) && iParam0==0){
iVar0=255;
}
if(!iVar0==Global_2635560.f_2788){
if(!AUDIO::IS_RADIO_RETUNING()){
Global_2635560.f_2788=iVar0;
}}}

int func_488(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}


bool func_489(){
return ((MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1970693, 12)) && Global_1970692==8);
}


var func__490(){
return (MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1970693, 0));
}

int func_491(int iParam0, bool bParam1, int iParam2){
if(Global_2657704[iParam0 /*463*/].f_232==99){
if((iParam2 && Global_2657704[iParam0 /*463*/].f_235==0) || iParam2==0){
return 0;
}}
if(bParam1){
if(Global_2657704[iParam0 /*463*/].f_232==13){
return 0;
}}
return 1;
}


bool func_492(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_493(bool bParam0, bool bParam1){
if(!bParam0){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
}
if(!bParam1){
STREAMING::CLEAR_FOCUS();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
func_496();
if(!MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 14) && !func_495()){
func_494();
}}


void func_494(){
Global_2803912.f_92=1;
}

int func_495(){
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_492(0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_179188[0 /*24*/].f_17, 0)){
return 1;
}
return 0;
}


void func_496(){
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

int func_497(){
bool bVar0;
var uVar1;
int iVar2;
if(!(Global_2694613.f_10 || MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_514, 4))){
return 0;
}
uVar1=Global_2694613.f_21;
bVar0=false;
while (bVar0 < 32){
if(MISC::IS_BIT_SET(uVar1, bVar0)){
iVar2=PLAYER::INT_TO_PLAYERINDEX(bVar0);
if(func_146(iVar2, 1, 1)){
if(!MISC::IS_BIT_SET(Global_1895156[bVar0 /*609*/].f_514, 4)){
return 0;
}}}
bVar0++;
}
return 1;
}

int func_498(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_96(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21852=0;
Global_21859=0;
Global_21854=0;
Global_22836=1;
Global_22838=0;
Global_22842=0;
StringCopy(&Global_22849, sParam3, 24);
Global_2883585=0;
return func_87(sParam2, iParam4, 0);
}

int func_499(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_96(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21852=0;
Global_21859=0;
Global_21854=0;
Global_22836=1;
Global_22838=0;
Global_22842=0;
StringCopy(&Global_22849, sParam3, 24);
Global_2883585=1;
return func_87(sParam2, iParam4, 0);
}


void func_500(){
if(iLocal_141==0){
iLocal_141=1;
}}


void func_501(){
AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 0);
if(!func_358()){
if(func_146(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1051) && !func_387(PLAYER::PLAYER_PED_ID(), iLocal_1051, -1)){
AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 1);
}}}}


void func_502(){
if(func_291()){
return;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!HUD::DOES_BLIP_EXIST(uLocal_135)){
if(!func_152(iLocal_1051)){
uLocal_135=HUD::ADD_BLIP_FOR_ENTITY(iLocal_1051);
if(HUD::DOES_BLIP_EXIST(uLocal_135)){
HUD::SET_BLIP_SPRITE(uLocal_135, 422);
HUD::SHOW_HEIGHT_ON_BLIP(uLocal_135, 0);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_135, "HTX_BLIP");
iLocal_136=1;
func_340(&uLocal_135, iLocal_136);
}}}}}


void func_503(){
int iVar0;
iVar0=round(10f);
if(!func_152(iLocal_1051)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_139);
TASK::TASK_HELI_MISSION(0, iLocal_1051, 0, 0, Local_129.f_10, 9, 30f, 7.5f, -1f, iVar0, iVar0, -1082130432, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_139);
TASK::OPEN_SEQUENCE_TASK(&uLocal_138);
TASK::TASK_HELI_MISSION(0, iLocal_1051, 0, 0, Local_129.f_17, 9, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, -1082130432, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_138);
TASK::OPEN_SEQUENCE_TASK(&uLocal_137);
TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}else{
TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
}
TASK::CLOSE_SEQUENCE_TASK(uLocal_137);
}}

int func_504(){
return Local_129.f_0;
}

int func_505(int iParam0){
return Local_133[iParam0 /*3*/];
}

int func_506(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_512()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_511()){
return 1;
}
if(func_510(159)){
if(!func_509()){
return 1;
}}
if(func_510(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_507() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_507())==0){
return 1;
}}
return 0;
}

int func_507(){
switch (func_309()){
case 0:
return func_508();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_508(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_509(){
return Global_2683883.f_698;
}

int func_510(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_511(){
return Global_2694576;
}


bool func_512(){
return Global_2683883.f_693;
}


void func_513(){
wait(0);
}


void func_514(bool bParam0){
var uVar0;
var uVar1;
if(func_165()){
func_164();
}
if(bParam0){
func_478();
}
func_479();
func_279(0);
if(func_291()){
if(func_519("HTX_HELPN", "GB_HELI_BLIP")){
HUD::CLEAR_HELP(1);
uVar0=func_9(1191, -1);
MISC::CLEAR_BIT(&uVar0, 16);
func_290(1191, uVar0, -1, 1);
}
func_14(0);
}elseif(func_519("HTX_HELPN", "HTX_HELPB")){
HUD::CLEAR_HELP(1);
uVar1=func_9(1191, -1);
MISC::CLEAR_BIT(&uVar1, 16);
func_290(1191, uVar1, -1, 1);
}
if(bParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_4) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_129.f_4)){
if(func_291()){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_129.f_4), 0)){
if(!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_129.f_4), iLocal_1051, 0)){
func_288(&(Local_129.f_4));
}}}
if(!func_152(iLocal_1051)){
if(!func_151(Local_129.f_4)){
func_503();
TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_129.f_4), uLocal_138);
}}}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(bParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_3)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_129.f_3)){
if(!func_152(iLocal_1051)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1051, 1);
}
func_484(&(Local_129.f_3));
}}
if(func_291()){
}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_129.f_4)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_129.f_4)){
if(!func_151(Local_129.f_4)){
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_129.f_4), 251, 0);
}
func_484(&(Local_129.f_4));
}}}
if(!func_358()){
func_517(func_518(1, 1), 13, func_5());
}else{
func_517(func_518(1, 1), 44, func_5());
}}
func_516();
if(iLocal_141==1){
iLocal_141=0;
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_142);
CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
MISC::CLEAR_BIT(&(Global_2794162.f_894), 0);
Global_2794162.f_260=0;
func_515();
}


void func_515(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_516(){
TASK::CLEAR_SEQUENCE_TASK(&uLocal_137);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_138);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_139);
}


void func_517(int iParam0, int iParam1, var uParam2){
struct<4> Var0;
Var0.f_0=-836944817;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_3=iParam1;
Var0.f_2=uParam2;
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 6, iParam0);
}}

int func_518(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_146(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_323(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}


bool func_519(char* sParam0, char* sParam1){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_520(struct<21> Param0){
func_523(32, Param0);
NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
func_522(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_129, 32, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_133, 97, 0);
if(!func_521()){
return 0;
}
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Local_129.f_5=PLAYER::PLAYER_ID();
Local_129.f_6={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 15f, 0f) 
};
Local_129.f_10={
-346.4007f, 1151.507f, 324.7254f 
};
Local_129.f_27=func_358();
Local_129.f_28=func_5();
MISC::SET_BIT(&(Global_2794162.f_894), false);
}
Global_2694613.f_26=0;
Global_2694613.f_25=0;
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_514), 4);
iLocal_843=NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
Local_133[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]=0;
return 1;
}

int func_521(){
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
if(func_512()){
return 0;
}
if(func_510(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_522(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_515();
}else{
return 0;
}}
if(!func_492(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_515();
}else{
return 0;
}}
if(func_512()){
if(!bParam2){
func_515();
}else{
return 0;
}}
if(func_510(157)){
if(!bParam2){
func_515();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_515();
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
func_515();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_515();
}else{
return 0;
}}
return 1;
}


void func_523(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_515();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}


void func_524(){
iLocal_1046=0;
func_525(-243.828f, -1461.281f, 30.99f, 279.3385f);
func_525(139.284f, 311.0571f, 111.1386f, 45.1942f);
func_525(634.8535f, 141.8226f, 94.2749f, 26.968f);
func_525(383.2168f, 16.5927f, 90.2992f, 40.5093f);
func_525(67.2551f, 51.4397f, 72.5151f, 38.4162f);
func_525(294.1833f, 575.2105f, 152.623f, 304.9259f);
func_525(933.0354f, 492.7919f, 120.4651f, 3.1259f);
func_525(-336.8088f, 454.2572f, 110.9638f, 58.2889f);
func_525(-135.9225f, 615.1293f, 204.3637f, 240.0636f);
func_525(139.3762f, -250.2123f, 50.426f, 276.1187f);
func_525(-139.5668f, -443.9992f, 33.1041f, 112.657f);
func_525(-491.7431f, -144.9858f, 37.8309f, 98.1814f);
func_525(-645.7263f, 406.0965f, 100.2678f, 272.8684f);
func_525(-957.0592f, 295.3116f, 68.9958f, 58.8505f);
func_525(-820.9876f, 876.1653f, 202.1549f, 196.4736f);
func_525(-1443.188f, 455.4925f, 110.7514f, 296.894f);
func_525(-1481.404f, 863.1016f, 181.577f, 38.349f);
func_525(-1646.419f, -195.0848f, 54.2692f, 160.7423f);
func_525(-1099.93f, -192.9011f, 37.3214f, 299.6116f);
func_525(-604.6443f, -599.9016f, 33.6806f, 270.5396f);
func_525(-1471.802f, -853.1879f, 13.2503f, 302.8094f);
func_525(-2011.161f, -526.2204f, 10.7096f, 28.1469f);
func_525(-2212.737f, 537.3901f, 164.4195f, 348.0596f);
func_525(-3025.405f, 338.3629f, 13.6245f, 14.9527f);
func_525(-1054.36f, -1398.452f, 5.3278f, 253.1757f);
func_525(-567.387f, -1258.005f, 12.8623f, 8.386f);
func_525(-964.4938f, -727.4775f, 18.794f, 344.527f);
func_525(-2429.193f, 1045.141f, 193.7864f, 263.1876f);
func_525(-3136.545f, 1191.168f, 19.0974f, 220.8899f);
func_525(-2692.456f, -62.2375f, 15.234f, 39.5592f);
func_525(-355.8293f, -990.3766f, 28.4949f, 125.2948f);
func_525(243.7049f, -881.4253f, 29.4921f, 297.8129f);
func_525(453.4193f, -380.5279f, 45.6676f, 357.5639f);
func_525(936.8099f, -553.545f, 58.3693f, 263.5811f);
func_525(770.1622f, -233.1951f, 65.1145f, 243.3845f);
func_525(1134.113f, 353.7328f, 90.4476f, 351.5361f);
func_525(1864.741f, 259.8708f, 162.1022f, 225.713f);
func_525(1558.889f, 879.5532f, 76.4596f, 359.376f);
func_525(337.4946f, 985.814f, 209.7682f, 69.9473f);
func_525(870.984f, 968.8524f, 238.3209f, 35.1108f);
func_525(2599.014f, 415.1773f, 107.7289f, 186.8054f);
func_525(2547.611f, -579.5625f, 64.2137f, 161.9321f);
func_525(1886.246f, -741.1049f, 82.6813f, 287.8844f);
func_525(1455.893f, -1498.703f, 63.6557f, 173.4564f);
func_525(1161.785f, -1076.126f, 40.4823f, 247.4221f);
func_525(1394.804f, -734.3683f, 66.2226f, 115.9829f);
func_525(1167.93f, -150.3837f, 55.5932f, 167.958f);
func_525(2455.5f, 1014.216f, 83.1307f, 14.3078f);
func_525(2530.339f, 1633.237f, 28.3235f, 234.752f);
func_525(1951.904f, 1645.648f, 71.2406f, 260.0168f);
func_525(2806.778f, -815.1143f, 5.7198f, 81.9638f);
func_525(1806.947f, -1290.593f, 95.0351f, 331.8087f);
func_525(1678.681f, -1952.281f, 111.666f, 80.8951f);
func_525(1292.103f, -3186.505f, 4.9064f, 359.7118f);
func_525(740.4905f, -3028.477f, 7.562f, 312.5958f);
func_525(559.4196f, -2593.408f, 5.0368f, 291.8598f);
func_525(877.3129f, -2437.455f, 27.3458f, 83.4984f);
func_525(1212.66f, -2098.225f, 43.5962f, 332.4854f);
func_525(797.2423f, -1599.807f, 30.2847f, 164.9429f);
func_525(827.6533f, -1980.338f, 28.299f, 10.749f);
func_525(373.2801f, -2133.071f, 15.2922f, 150.4032f);
func_525(617.6802f, -1064.3f, 9.3075f, 179.8157f);
func_525(296.5454f, -1341.473f, 42.7533f, 230.0817f);
func_525(-174.3653f, -2548.709f, 5.0163f, 198.7499f);
func_525(215.9285f, -2903.652f, 6.6886f, 151.951f);
func_525(314.6187f, -1679.352f, 28.1261f, 72.5752f);
func_525(1408.015f, -2623.801f, 45.1502f, 312.7456f);
func_525(-379.9112f, -1774.544f, 20.0649f, 13.9162f);
func_525(96.5893f, -2001.965f, 18.844f, 147.396f);
func_525(-729.8096f, -1777.493f, 28.0263f, 61.8742f);
func_525(-971.1151f, -1868.092f, 18.9378f, 33.2574f);
func_525(-720.1935f, -2557.545f, 12.9387f, 18.6712f);
func_525(-1335.482f, -2677.121f, 12.9449f, 187.4991f);
func_525(-878.3446f, -2968.556f, 12.9471f, 331.5428f);
func_525(-1005.327f, -2232.398f, 8.0032f, 92.8891f);
func_525(-401.2441f, -2284.453f, 6.6082f, 2.3971f);
func_525(-1454.813f, -1471.849f, 1.1336f, 242.0199f);
func_525(821.5599f, 1298.328f, 362.9729f, 262.7468f);
func_525(-449.7726f, 1586.159f, 358.0207f, 239.931f);
func_525(-348.6263f, 1156.363f, 324.5158f, 54.5644f);
func_525(-827.162f, 1686.859f, 194.2108f, 236.4414f);
func_525(-184.5484f, 1923.192f, 196.6049f, 206.5246f);
func_525(296.1962f, 1771.646f, 227.0542f, 310.265f);
func_525(1052.903f, 1495.316f, 174.8349f, 205.154f);
func_525(-1532.131f, 1396.502f, 122.7763f, 352.1764f);
func_525(-2604.194f, 1675.818f, 138.9021f, 166.6577f);
func_525(-1513.824f, 2166.168f, 54.0724f, 251.5786f);
func_525(-1697.408f, 2456.897f, 29.418f, 101.049f);
func_525(-2819.858f, 2253.055f, 28.6358f, 169.9338f);
func_525(-3043.554f, 1477.634f, 27.3241f, 179.9691f);
func_525(-2381.452f, 2830.405f, 2.372f, 76.3996f);
func_525(-2993.669f, 3335.124f, 9.2207f, 46.6226f);
func_525(-1789.875f, 2675.004f, 2.4478f, 318.05f);
func_525(-1596.024f, 2950.032f, 32.0914f, 221.481f);
func_525(-1099.969f, 2850.755f, 12.8854f, 317.9454f);
func_525(55.8239f, 3338.571f, 35.6469f, 165.2648f);
func_525(173.2043f, 2293.298f, 92.1495f, 208.7343f);
func_525(-468.6477f, 2994.032f, 26.1288f, 96.4423f);
func_525(-1212.968f, 2599.15f, 14.572f, 277.3627f);
func_525(-177.6004f, 2945.426f, 29.6345f, 344.5758f);
func_525(-270.1975f, 2661.462f, 59.8035f, 190.3861f);
func_525(-767.441f, 2284.18f, 76.413f, 331.6507f);
func_525(578.2679f, 2798.182f, 41.1427f, 308.8694f);
func_525(388.2008f, 3525.706f, 32.9f, 242.16f);
func_525(1228.046f, 3612.758f, 32.4634f, 303.8293f);
func_525(1060.165f, 3042.599f, 40.6158f, 329.9008f);
func_525(845.1221f, 2207.164f, 49.9157f, 40.9634f);
func_525(1281.185f, 2665.227f, 36.6537f, 44.0714f);
func_525(2137.185f, 2961.237f, 45.9129f, 273.7183f);
func_525(2052.815f, 3319.029f, 44.7859f, 127.0919f);
func_525(1959.709f, 3775.369f, 31.2029f, 88.7083f);
func_525(2500.937f, 4153.028f, 37.2878f, 204.7804f);
func_525(2730.682f, 3415.967f, 55.7151f, 278.4684f);
func_525(2936.23f, 4437.92f, 47.4218f, 323.2516f);
func_525(3636.311f, 3765.969f, 27.5157f, 51.549f);
func_525(2532.664f, 2686.917f, 40.7205f, 249.7434f);
func_525(2157.111f, 1974.473f, 93.7061f, 22.0171f);
func_525(1499.479f, 1827.166f, 106.4998f, 42.618f);
func_525(2895.405f, 3888.189f, 52.0109f, 213.3904f);
func_525(1639.252f, 3852.798f, 33.7036f, 277.8739f);
func_525(16.3756f, 3623.829f, 39.0889f, 138.8624f);
func_525(-202.3551f, 4176.263f, 42.1762f, 357.9106f);
func_525(378.6819f, 4405.726f, 61.3992f, 2.2521f);
func_525(763.3045f, 4180.816f, 39.6263f, 313.7911f);
func_525(1410.916f, 4363.65f, 41.6243f, 351.9106f);
func_525(2474.189f, 4460.482f, 34.2448f, 338.6556f);
func_525(2787.091f, 4896.004f, 35.5118f, 346.5345f);
func_525(3787.385f, 4446.902f, 3.6951f, 322.4305f);
func_525(3283.627f, 5161.83f, 17.7122f, 120.0761f);
func_525(2444.642f, 5016.759f, 45.2854f, 256.7558f);
func_525(2071.367f, 4807.796f, 40.6377f, 147.898f);
func_525(2012.781f, 5129.742f, 44.5825f, 92.6079f);
func_525(1710.641f, 4657.467f, 42.4848f, 108.8281f);
func_525(2498.991f, 5641.692f, 45.6963f, 48.9642f);
func_525(2250.176f, 5968.912f, 49.0116f, 15.0599f);
func_525(1853.773f, 6404.851f, 45.2075f, 116.4965f);
func_525(866.8867f, 6512.98f, 20.7883f, 248.893f);
func_525(205.2754f, 7012.687f, 1.0453f, 196.8449f);
func_525(-212.0001f, 6565.548f, 9.8635f, 152.7291f);
func_525(-573.4517f, 6167.307f, 5.3904f, 302.589f);
func_525(206.7901f, 6402.567f, 30.3805f, 81.5939f);
func_525(-731.3629f, 5800.728f, 16.5887f, 196.4081f);
func_525(-664.7944f, 5460.415f, 49.6868f, 157.5173f);
func_525(-601.0768f, 5294.568f, 69.2145f, 27.8272f);
func_525(-532.1605f, 4971.026f, 146.1112f, 172.7688f);
func_525(-1546.969f, 5010.706f, 64.4016f, 255.285f);
func_525(-2170.899f, 4459.51f, 61.8337f, 141.4564f);
func_525(-2504.334f, 3627.644f, 12.7211f, 175.0945f);
func_525(-1216.204f, 4457.368f, 29.5562f, 16.7363f);
func_525(797.6583f, 5704.728f, 697.4423f, 102.9245f);
func_525(159.5193f, 5212.952f, 572.7617f, 303.589f);
func_525(2867.312f, 5944.487f, 356.7372f, 56.172f);
func_525(10.6515f, 6334.516f, 30.2366f, 336.7196f);
func_525(1472.189f, 6359.462f, 22.7034f, 289.4279f);
func_525(-618.1378f, 3993.369f, 120.0915f, 212.0991f);
func_525(-885.1862f, 4428.847f, 19.9719f, 90.7754f);
func_525(215.323f, 7381.881f, 13.4278f, 203.1559f);
func_525(3635.046f, 5669.953f, 7.7871f, 32.6794f);
func_525(3646.407f, 4997.506f, 11.2006f, 19.0908f);
func_525(3546.356f, 2523.698f, 5.4951f, 29.0676f);
func_525(2193.448f, 5574.355f, 52.7895f, 268.6339f);
func_525(-2165.357f, 5170.346f, 13.5525f, 39.8589f);
func_525(-1606.75f, 4742.162f, 52.9203f, 53.6989f);
func_525(-945.4f, 4611.085f, 237.932f, 276.5363f);
func_525(-2415.631f, 4221.8f, 8.7558f, 303.5893f);
func_525(809.2775f, 3227.627f, 37.6705f, 234.2991f);
func_525(1101.399f, 3436.295f, 32.8756f, 310.4154f);
func_525(1691.926f, 3486.635f, 35.8127f, 339.3695f);
func_525(2407.986f, 3537.302f, 72.5395f, 355.4901f);
func_525(3051.449f, 2725.313f, 62.3978f, 331.4178f);
func_525(2527.302f, 2009.074f, 18.9235f, 346.0563f);
func_525(1840.181f, 2499.208f, 44.7693f, 301.6813f);
func_525(1787.824f, 3067.684f, 61.2278f, 70.872f);
func_525(1382.367f, 3003.334f, 39.7661f, 340.408f);
func_525(244.4017f, 2637.836f, 44.6054f, 240.1419f);
func_525(-251.8209f, 2205.487f, 128.884f, 195.6026f);
func_525(-541.051f, 2005.346f, 202.3307f, 274.6922f);
func_525(-2039.825f, 1960.994f, 187.7879f, 312.9809f);
func_525(-1603.197f, 237.8279f, 58.3225f, 263.857f);
func_525(-1724.508f, -2970.292f, 13.1465f, 4.1473f);
func_525(1192.917f, 1839.359f, 77.4385f, 170.34f);
func_525(3300.137f, -99.0274f, 11.6522f, 185.3741f);
func_525(2849.717f, -1461.166f, 12.5068f, 52.3716f);
func_525(2306.17f, -2118.141f, 2.322f, 18.5464f);
func_525(2163.642f, 135.7375f, 226.6112f, 117.1583f);
func_525(2527.796f, -90.4654f, 93.1274f, 110.8862f);
func_525(1774.983f, 1676.629f, 78.209f, 142.8201f);
func_525(1623.241f, 1265.085f, 86.7423f, 134.636f);
func_525(1732.167f, 2169.269f, 82.2189f, 350.0135f);
func_525(2167.046f, 1339.68f, 74.7227f, 32.7734f);
func_525(712.9243f, 1727.998f, 182.7801f, 68.4225f);
func_525(151.0186f, 1429.878f, 259.7057f, 36.1885f);
func_525(-1662.585f, 4284.667f, 80.2819f, 23.3258f);
func_525(-1323.416f, 5349.778f, 2.3383f, 79.3172f);
func_525(-2294.521f, 2342.52f, 0.2262f, 44.7661f);
func_525(-892.6975f, 5271.815f, 84.9171f, 112.4479f);
func_525(470.1919f, 3115.264f, 40.5447f, 77.6964f);
func_525(-2673.124f, 2957.395f, 7.3939f, 285.1781f);
func_525(-3192.201f, 815.0291f, 2.7957f, 260.1565f);
func_525(945.9874f, -3277.793f, 4.8982f, 266.6732f);
func_525(126.3235f, -1658.512f, 32.9414f, 28.4566f);
func_525(1144.835f, -1688.646f, 35.1291f, 6.0452f);
func_525(944.4474f, -1369.549f, 12.3266f, 314.3879f);
func_525(937.8714f, -896.6146f, 49.0496f, 179.602f);
func_525(-50.8218f, -894.3738f, 40.4824f, 157.0664f);
func_525(-1159.234f, -1111.134f, 8.7345f, 300.7512f);
func_525(-1729.466f, -972.845f, 5.2263f, 14.1883f);
func_525(-251.1976f, 310.9189f, 96.5312f, 177.6596f);
func_525(-261.0635f, 192.8841f, 84.9561f, 104.3934f);
func_525(-769.5164f, -1996.682f, 7.8903f, 136.2945f);
func_525(-1345.348f, -2123.383f, 12.9441f, 145.1976f);
func_525(576.7401f, -657.0758f, 12.5207f, 347.7486f);
func_525(2640.831f, 3200.896f, 52.1493f, 273.1668f);
func_525(1995.588f, -925.1763f, 78.0824f, 77.8221f);
func_525(-500.2817f, -2111.103f, 8.9576f, 132.9903f);
func_525(-725.0269f, -2355.187f, 14.8438f, 227.8691f);
func_525(-980.7766f, -2488.198f, 14.0523f, 150.2897f);
func_525(-1127.178f, -1696.759f, 4.2742f, 29.4122f);
func_525(-1212.316f, -1338.762f, 4.4687f, 109.8316f);
func_525(-1373.831f, -1274.4f, 4.6296f, 28.0177f);
func_525(-1531.726f, -1037.846f, 5.8012f, 226.8082f);
func_525(-1243.753f, -963.8779f, 3.2555f, 82.051f);
func_525(-1161.864f, -725.671f, 20.534f, 37.0823f);
func_525(-1071.658f, -863.8865f, 4.7704f, 302.8431f);
func_525(-869.8373f, -894.2067f, 15.7782f, 195.2182f);
func_525(-847.3995f, -1198.361f, 5.8987f, 224.6693f);
func_525(-59.1982f, 1031.608f, 233.5404f, 342.8009f);
func_525(-498.3894f, -950.4281f, 23.8303f, 170.6251f);
func_525(-668.458f, -451.6636f, 35.9803f, 263.7879f);
func_525(-538.0801f, -255.6042f, 36.4835f, 28.044f);
func_525(-674.919f, -35.9837f, 39.1f, 107.0653f);
func_525(-957.8153f, -347.7798f, 38.5257f, 296.3945f);
func_525(-1399.278f, 122.7592f, 54.9624f, 179.943f);
func_525(-1259.903f, 600.5897f, 139.911f, 307.5361f);
func_525(-1161.234f, 931.7809f, 198.3958f, 312.1524f);
func_525(-929.2317f, 1127.948f, 220.3745f, 192.5778f);
func_525(-625.6737f, 979.0534f, 241.17f, 105.5179f);
func_525(-281.6504f, 736.922f, 208.7457f, 201.0901f);
func_525(-799.7258f, 575.9078f, 125.8626f, 200.7426f);
func_525(-111.9565f, 1361.998f, 311.2291f, 309.7981f);
func_525(161.9947f, 742.2007f, 207.3627f, 24.4887f);
func_525(-591.4622f, -1443.56f, 11.0649f, 55.8083f);
func_525(48.3094f, -1466.97f, 34.0209f, 46.3598f);
func_525(573.138f, -903.282f, 10.653f, 359.9055f);
func_525(444.6478f, -584.4781f, 28.4022f, 263.8702f);
func_525(590.5396f, -128.7431f, 72.7058f, 324.8725f);
func_525(633.0765f, -1477.419f, 9.6378f, 13.7451f);
func_525(567.5936f, -2316.353f, 5.8157f, 358.2805f);
func_525(154.683f, -2406.677f, 5.9026f, 356.73f);
func_525(-407.8167f, -2742.427f, 6.6763f, 192.47f);
func_525(77.3055f, -2723.974f, 5.9071f, 269.1819f);
func_525(664.1844f, -2986.192f, 5.9477f, 169.3143f);
func_525(1015.701f, -2310.8f, 30.4119f, 351.451f);
func_525(1105.497f, -1903.685f, 37.37f, 141.7318f);
func_525(1397.402f, -2375.49f, 63.0531f, 356.6557f);
func_525(1675.434f, -1547.791f, 112.5916f, 343.2593f);
func_525(1454.21f, -1000.43f, 48.8159f, 85.0815f);
func_525(2183.739f, -582.2708f, 96.7788f, 309.7693f);
func_525(2543.149f, 142.0665f, 99.4934f, 165.3156f);
func_525(2596.192f, 751.3882f, 91.457f, 196.0535f);
func_525(2603.688f, 1235.993f, 44.3592f, 176.2542f);
func_525(2122.656f, 2778.532f, 50.0208f, 309.4357f);
func_525(2396.602f, 3264.547f, 48.7285f, 214.5686f);
func_525(2322.511f, 3893.286f, 34.9455f, 312.4513f);
func_525(581.2474f, 778.2208f, 201.9709f, 228.6589f);
func_525(1118.769f, 790.2458f, 149.7879f, 327.737f);
func_525(1312.517f, 1248.61f, 106.7748f, 356.9769f);
func_525(1309.661f, 1537.113f, 96.2337f, 6.4865f);
func_525(1062.127f, 2084.489f, 52.5033f, 26.2563f);
func_525(1521.927f, 2010.445f, 99.3948f, 355.0577f);
func_525(1370.713f, 2313.501f, 79.9254f, 33.3623f);
func_525(907.667f, 2678.261f, 40.7875f, 261.5676f);
func_525(699.3987f, 2441.128f, 61.3254f, 209.2828f);
func_525(436.9572f, 2382.852f, 50.022f, 322.7864f);
func_525(439.7385f, 2086.472f, 100.9622f, 336.0373f);
func_525(-628.1458f, 2815.875f, 36.9998f, 300.3421f);
func_525(-1374.838f, 2402.95f, 30.041f, 288.2213f);
func_525(-1845.524f, -708.1555f, 9.1302f, 227.8206f);
func_525(-2441.261f, -319.8737f, 3.6674f, 231.7609f);
func_525(-2994.104f, 21.4889f, 7.8942f, 241.8965f);
func_525(-2825.43f, 1423.209f, 100.6655f, 175.2131f);
func_525(-3091.066f, 1757.376f, 35.0735f, 174.5508f);
func_525(-3007.828f, 2099.017f, 40.1434f, 332.562f);
func_525(-1966.473f, 2473.978f, 1.1161f, 204.7869f);
func_525(-2281.606f, 3412.213f, 32.0105f, 341.204f);
func_525(456.3445f, 6699.446f, 7.8774f, 230.5219f);
func_525(1191.518f, 6560.621f, 2.9303f, 86.2098f);
func_525(2595.129f, 5402.892f, 41.7871f, 10.6124f);
func_525(644.2881f, -1840.464f, 9.0907f, 354.3967f);
func_525(-679.2219f, -1828.494f, 27.7167f, 242.8403f);
func_525(1054.276f, -1785.81f, 34.5576f, 331.6062f);
func_525(-86.9453f, -1710.444f, 28.4542f, 178.6759f);
func_525(81.025f, -1283.182f, 28.2867f, 109.4532f);
func_525(1276.439f, -1275.396f, 41.116f, 130.9274f);
func_525(716.5391f, -2255.983f, 28.2272f, 277.8256f);
func_525(1719.191f, -1655.754f, 111.5146f, 219.6488f);
func_525(121.7027f, -2965.721f, 6.0714f, 214.9908f);
func_525(-500.846f, -2111.083f, 8.0609f, 188.9715f);
func_525(-1196.347f, -2169.974f, 12.195f, 192.0654f);
}


void func_525(struct<3> Param0, float fParam1){
Global_2643398[iLocal_1046 /*3*/]={
Param0 
};
Global_2644296[iLocal_1046]=fParam1;
iLocal_1046++;
}