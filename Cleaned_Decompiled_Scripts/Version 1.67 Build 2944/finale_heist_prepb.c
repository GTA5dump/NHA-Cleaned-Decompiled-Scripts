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
int iLocal_26=0;
int iLocal_27=0;
int iLocal_28=0;
int iLocal_29=0;
int iLocal_30=0;
int iLocal_31=0;
int iLocal_32=0;
int iLocal_33[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_34[2]={
0, 0 
};
int iLocal_35=0;
int iLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
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
int iLocal_51=0;
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
int iLocal_58[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
int iLocal_62=0;
int iLocal_63=0;
int iLocal_64=0;
int iLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78[2]={
0, 0 
};
int iLocal_79[2]={
0, 0 
};
int iLocal_80[2]={
0, 0 
};
int iLocal_81[2]={
0, 0 
};
int iLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
int iLocal_89=0;
struct<3> Local_90={
0, 0, 0 
};
struct<3> Local_91={
0, 0, 0 
};
struct<3> Local_92={
0, 0, 0 
};
struct<3> Local_93[2];
struct<3> Local_94={
0, 0, 0 
};
float fLocal_95=0f;
char* sLocal_96=NULL;
var uLocal_97=16;
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
int iLocal_262=0;
int iLocal_263=0;
int iLocal_264=0;
int iLocal_265=0;
int iLocal_266[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_267=0;
int iLocal_268=0;
int iLocal_269=0;
int iLocal_270=0;
int iLocal_271=0;
int iLocal_272=0;
int iLocal_273=0;
int iLocal_274=0;
int iLocal_275[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_276[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_277=0;
int iLocal_278[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_279[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_280[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_281[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_282[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_283[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_284=0;
int iLocal_285=0;
int iLocal_286=0;
int iLocal_287=0;
int iLocal_288=0;
int iLocal_289=0;
int iLocal_290=0;
int iLocal_291=0;
int iLocal_292=0;
int iLocal_293=0;
int iLocal_294=0;
int iLocal_295=0;
int iLocal_296=0;
int iLocal_297=0;
int iLocal_298=0;
int iLocal_299=0;
int iLocal_300=0;
int iLocal_301[2]={
0, 0 
};
int iLocal_302[2]={
0, 0 
};
int iLocal_303=0;
int iLocal_304=0;
int iLocal_305=0;
int iLocal_306=0;
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
int iLocal_317=0;
int iLocal_318=0;
int iLocal_319=0;
int iLocal_320=0;
int iLocal_321=0;
int iLocal_322=0;
int iLocal_323=0;
int iLocal_324=0;
int iLocal_325=0;
int iLocal_326[2]={
0, 0 
};
int iLocal_327[2]={
0, 0 
};
int iLocal_328[2]={
0, 0 
};
int iLocal_329[2]={
0, 0 
};
int iLocal_330[2]={
0, 0 
};
int iLocal_331[2]={
0, 0 
};
int iLocal_332[2]={
0, 0 
};
int iLocal_333=0;
int iLocal_334=0;
int iLocal_335=0;
int iLocal_336=0;
int iLocal_337=0;
int iLocal_338[2]={
0, 0 
};
int iLocal_339[2]={
0, 0 
};
int iLocal_340=0;
int iLocal_341=0;
int iLocal_342=0;
int iLocal_343=0;
int iLocal_344=0;
int iLocal_345=0;
int iLocal_346=0;
int iLocal_347=0;
int iLocal_348=0;
int iLocal_349=0;
int iLocal_350=0;
int iLocal_351=0;
int iLocal_352=0;
int iLocal_353=0;
int iLocal_354=0;
int iLocal_355=0;
int iLocal_356=0;
int iLocal_357=0;
int iLocal_358=0;
int iLocal_359[2]={
0, 0 
};
int iLocal_360=0;
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
Local_90={
27.7189f, -608.7927f, 30.6293f 
};
Local_94={
903.1f, -1548.8f, 29.8f 
};
fLocal_95=0f;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
func_224();
func_223();
}
if(func_222(0)){
HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
}
PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &iLocal_262);
PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &iLocal_263);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 1);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_263, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_263, iLocal_262);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_262, iLocal_263);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_263, joaat("COP"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_263);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_262, joaat("COP"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_262);
while (true){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FINPRB", 0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, 0);
}
func_220();
if(iLocal_270==0){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
func_219(27, 1);
iLocal_270=1;
}}
if(iLocal_293==1){
func_215();
}
func_212();
func_205();
func_197();
func_192();
func_189();
switch (iLocal_26){
case 0:
func_188();
break;
case 1:
func_185();
break;
case 2:
func_161();
break;
case 3:
func_159();
break;
case 4:
func_131();
break;
case 5:
func_21();
break;
case 6:
func_1();
break;
}
wait(0);
}}


void func_1(){
switch (iLocal_51){
case 0:
HUD::CLEAR_PRINTS();
HUD::CLEAR_HELP(1);
AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
switch (iLocal_28){
case 0:
break;
case 4:
sLocal_96="FPB_FAIL1";
break;
case 3:
sLocal_96="FPB_FAIL2";
break;
case 1:
sLocal_96="FPB_FAIL3";
break;
case 2:
sLocal_96="FPB_FAIL10";
break;
case 5:
if(func_14()==0){
sLocal_96="FPB_FAIL7";
}
if(func_14()==2){
sLocal_96="FPB_FAIL8";
}
if(func_14()==1){
sLocal_96="FPB_FAIL9";
}
break;
case 6:
sLocal_96="FPB_FAIL11";
break;
}
if(iLocal_28==0){
func_6(0);
}else{
func_4(sLocal_96);
}
iLocal_51=1;
break;
case 1:
if(func_3()){
if(func_2()){
}
func_223();
}
break;
}}

int func_2(){
if(Global_100833==7){
return 1;
}
return 0;
}

int func_3(){
if(Global_3){
return 1;
}
if(Global_100833==7 || Global_100833==8){
return 1;
}
return 0;
}


void func_4(char* sParam0){
func_5(sParam0);
func_6(0);
}


void func_5(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78922, sParam0, 16);
StringCopy(&Global_78926, "", 16);
if(RECORDING::IS_REPLAY_RECORDING()){
RECORDING::STOP_REPLAY_RECORDING();
}}}}


void func_6(int iParam0){
int iVar0;
if(Global_113810.f_9088 || func_222(0)){
iVar0=func_13();
if(!func_7(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
Global_100869=iParam0;
}}

int func_7(int iParam0){
int iVar0;
int iVar1;
func_12();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::START_FIRING_AMNESTY(5000);
}
iVar0=Global_91565[iParam0 /*5*/];
iVar1=Global_78960.f_109[iVar0 /*4*/];
func_11(iVar1, 1);
PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
func_8(&(Global_113810.f_2366.f_539), iVar1);
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


void func_8(var uParam0, int iParam1){
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
if(!func_10(Global_113810.f_18536[iVar0], &Var2, &fVar3)){
Global_113810.f_18536[iVar0]=318;
func_9(&(uParam0->f_2296[iVar0]));
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


void func_9(var uParam0){
*uParam0=-15;
}

int func_10(int iParam0, var uParam1, float fParam2){
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
return func_10(8, uParam1, fParam2);
break;
case 10:
return func_10(8, uParam1, fParam2);
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


void func_11(int iParam0, bool bParam1){
if(bParam1){
if((iParam0 !=88 && iParam0 !=89) && iParam0 !=92){
Global_94798[iParam0 /*2*/]=1;
}}else{
Global_94798[iParam0 /*2*/]=0;
}}


void func_12(){
Global_100868=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922)){
switch (func_14()){
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
switch (func_14()){
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

int func_13(){
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

int func_14(){
func_15();
return Global_113810.f_2366.f_539.f_4321;
}


void func_15(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_19(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_18(PLAYER::PLAYER_PED_ID());
if(func_17(iVar0) && (!func_16(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_17(Global_113810.f_2366.f_539.f_4321)){
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


bool func_16(int iParam0){
return Global_43377==iParam0;
}


bool func_17(int iParam0){
return iParam0 < 3;
}

int func_18(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_19(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_19(int iParam0){
if(func_17(iParam0)){
return func_20(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__20(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_21(){
func_189();
if(iLocal_51==0){
if(iLocal_264==1){
func_35();
iLocal_264=0;
}
iLocal_271=0;
iLocal_272=0;
iLocal_273=0;
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
if(func_34(iLocal_35, 0)){
if(!func_33(iLocal_35)){
while (!func_32(iLocal_35, 0)){
wait(0);
}}}
if(func_34(iLocal_37, 0)){
if(!func_33(iLocal_37)){
while (!func_32(iLocal_37, 0)){
wait(0);
}}}
if(func_34(iLocal_36, 0)){
if(!func_33(iLocal_36)){
while (!func_32(iLocal_36, 0)){
wait(0);
}}}
if(CAM::IS_SCREEN_FADED_OUT()){
if(!func_31()){
STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}
func_28(iLocal_31, -1, 1);
}
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
iLocal_293=1;
iLocal_51=1;
}
if(iLocal_51==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(func_14()==0){
if(func_34(iLocal_37, 0)){
if(PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_31, 0)){
TASK::CLEAR_PED_TASKS(iLocal_37);
PED::REMOVE_PED_FROM_GROUP(iLocal_37);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
TASK::TASK_LEAVE_VEHICLE(iLocal_37, iLocal_31, 0);
}}
if(func_34(iLocal_36, 0)){
if(PED::IS_PED_IN_VEHICLE(iLocal_36, iLocal_31, 0)){
TASK::CLEAR_PED_TASKS(iLocal_36);
PED::REMOVE_PED_FROM_GROUP(iLocal_36);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, 1);
TASK::TASK_LEAVE_VEHICLE(iLocal_36, iLocal_31, 0);
}}}
if(func_14()==2){
if(func_34(iLocal_35, 0)){
if(PED::IS_PED_IN_VEHICLE(iLocal_35, iLocal_31, 0)){
TASK::CLEAR_PED_TASKS(iLocal_35);
PED::REMOVE_PED_FROM_GROUP(iLocal_35);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35, 1);
TASK::TASK_LEAVE_VEHICLE(iLocal_35, iLocal_31, 0);
}}
if(func_34(iLocal_36, 0)){
if(PED::IS_PED_IN_VEHICLE(iLocal_36, iLocal_31, 0)){
TASK::CLEAR_PED_TASKS(iLocal_36);
PED::REMOVE_PED_FROM_GROUP(iLocal_36);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, 1);
TASK::TASK_LEAVE_VEHICLE(iLocal_36, iLocal_31, 0);
}}}
if(func_14()==1){
if(func_34(iLocal_35, 0)){
if(PED::IS_PED_IN_VEHICLE(iLocal_35, iLocal_31, 0)){
TASK::CLEAR_PED_TASKS(iLocal_35);
PED::REMOVE_PED_FROM_GROUP(iLocal_35);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35, 1);
TASK::TASK_LEAVE_VEHICLE(iLocal_35, iLocal_31, 0);
}}
if(func_34(iLocal_37, 0)){
if(PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_31, 0)){
TASK::CLEAR_PED_TASKS(iLocal_37);
PED::REMOVE_PED_FROM_GROUP(iLocal_37);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
TASK::TASK_LEAVE_VEHICLE(iLocal_37, iLocal_31, 0);
}}}
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0);
}}}
settimerb(0);
iLocal_51=2;
}
if(iLocal_51==2){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(iLocal_273==0){
if(func_14()==0){
if(func_34(iLocal_37, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_31, 0)){
if(func_33(iLocal_37)){
if(func_25(iLocal_37)){
iLocal_273=1;
}}else{
iLocal_273=1;
}}
}
else{
iLocal_271=1;
}
if(func_34(iLocal_36, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_36, iLocal_31, 0)){
if(func_33(iLocal_36)){
if(func_25(iLocal_36)){
iLocal_273=1;
}}else{
iLocal_273=1;
}}
}
else{
iLocal_272=1;
}}
if(func_14()==2){
if(func_34(iLocal_35, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_35, iLocal_31, 0)){
if(func_33(iLocal_35)){
if(func_25(iLocal_35)){
iLocal_273=1;
}}else{
iLocal_273=1;
}}
}
else{
iLocal_271=1;
}
if(func_34(iLocal_36, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_36, iLocal_31, 0)){
if(func_33(iLocal_36)){
if(func_25(iLocal_36)){
iLocal_273=1;
}}else{
iLocal_273=1;
}}
}
else{
iLocal_272=1;
}}
if(func_14()==1){
if(func_34(iLocal_35, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_35, iLocal_31, 0)){
if(func_33(iLocal_35)){
if(func_25(iLocal_35)){
iLocal_273=1;
}}else{
iLocal_273=1;
}}
}
else{
iLocal_271=1;
}
if(func_34(iLocal_37, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_37, iLocal_31, 0)){
if(func_33(iLocal_37)){
if(func_25(iLocal_37)){
iLocal_273=1;
}}else{
iLocal_273=1;
}}
}
else{
iLocal_272=1;
}}
if(iLocal_271==1 && iLocal_272==1){
iLocal_273=1;
}}elseif(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 1)){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
settimerb(0);
iLocal_51=3;
}}}}
if(iLocal_51==3){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_31, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_31, 2);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, 1);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_30)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_30, 1);
}}
iLocal_51=4;
}
if(iLocal_51==4){
func_22();
}}


void func_22(){
func_23(0, 0);
func_223();
}


void func_23(bool bParam0, int iParam1){
int iVar0;
int iVar1;
var uVar2;
if(!Global_63487){
Global_63487=iParam1;
}
if(bParam0){
if((func_222(0) && Global_78936.f_1==1) && func_24(Global_78936)){
}else{
Global_63485=1;
}}
if(Global_113810.f_9088 || func_222(0)){
iVar0=func_13();
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

int func_24(int iParam0){
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

int func_25(int iParam0){
bool bVar0;
return 0;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_18(iParam0);
if(bVar0 > 3){
return 0;
}
if(func_26(bVar0) !=iParam0){
return 0;
}
if(!MISC::IS_BIT_SET(Global_96667, bVar0)){
return 0;
}
MISC::CLEAR_BIT(&Global_96667, bVar0);
return 1;
}
return 0;
}

int func_26(int iParam0){
if(iParam0 > 3){
return 0;
}
if(iParam0==func_14()){
return PLAYER::PLAYER_PED_ID();
}
return Global_98291[func_27(iParam0)];
}

int func_27(int iParam0){
if(iParam0==0){
return 0;
}elseif(iParam0==2){
return 2;
}elseif(iParam0==1){
return 1;
}elseif(iParam0==145){
return 3;
}
return 4;
}


void func_28(int iParam0, int iParam1, int iParam2){
if(func_30() && func_31()){
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
func_29(0);
}}


void func_29(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100833.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 13);
}}

int func_30(){
if(Global_100833==10 || Global_100833==9){
return 1;
}
return 0;
}


bool func_31(){
return MISC::IS_BIT_SET(Global_100833.f_20, 13);
}

int func_32(int iParam0, int iParam1){
bool bVar0;
return 0;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_18(iParam0);
if(bVar0 > 3){
return 0;
}
if(func_26(bVar0) !=iParam0){
return 0;
}
if(MISC::IS_BIT_SET(Global_96667, bVar0)){
return 0;
}
if(iParam1==0){
if(iParam0==PLAYER::PLAYER_PED_ID()){
return 0;
}}
if(MISC::IS_BIT_SET(Global_96666, bVar0)){
WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0, 1);
MISC::SET_BIT(&Global_96667, bVar0);
return 1;
}}
return 0;
}

int func_33(int iParam0){
bool bVar0;
return 0;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_18(iParam0);
if(bVar0 > 3){
return 0;
}
if(func_26(bVar0) !=iParam0){
return 0;
}
if(MISC::IS_BIT_SET(Global_96667, bVar0)){
return 1;
}}
return 0;
}

int func_34(int iParam0, int iParam1){
bool bVar0;
return 0;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_18(iParam0);
if(bVar0 > 3){
return 0;
}
if(func_26(bVar0) !=iParam0){
return 0;
}
if(iParam1==0){
if(iParam0==PLAYER::PLAYER_PED_ID()){
return 0;
}}
if(MISC::IS_BIT_SET(Global_96666, bVar0)){
return 1;
}}
return 0;
}


void func_35(){
iLocal_293=0;
iLocal_335=0;
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
if(!CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_OUT(0);
}
func_129();
HUD::CLEAR_PRINTS();
func_128();
func_127();
func_37();
if(!func_31()){
func_36();
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}


void func_36(){
switch (iLocal_26){
case 2:
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
break;
case 3:
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
break;
case 4:
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, -1);
}}}
break;
case 5:
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, -1);
}}}
break;
}}


void func_37(){
switch (iLocal_26){
case 3:
iLocal_311=0;
iLocal_312=0;
iLocal_313=0;
func_123();
if(func_122() && func_119(7f, 7f, 7f, 1)){
func_117();
while (!func_116()){
wait(0);
}
iLocal_32=func_38(818.8139f, -1610.406f, 30.7951f, 264.412f);
}
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
break;
case 4:
iLocal_311=0;
iLocal_312=0;
iLocal_313=0;
func_123();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_31, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_31, 161.1163f);
}}
MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
break;
case 5:
iLocal_311=1;
iLocal_312=1;
iLocal_313=1;
func_123();
MISC::CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_31, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_31, 70.7778f);
}}
STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))){
wait(0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_38)){
iLocal_38=PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
PED::SET_PED_CONFIG_FLAG(iLocal_38, 324, 1);
}
break;
}}

int func_38(struct<3> Param0, float fParam1){
return func_39(&(Global_104373.f_2890), Param0, fParam1, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam2, bool bParam3){
int iVar0;
struct<3> Var1;
bool bVar2;
var uVar3;
int iVar4;
if(func_115(uParam0)){
if(func_114(Param1, 0f, 0f, 0f, 0)){
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
if(func_113(uParam0)){
MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
func_112(Param1, 5f, 0);
iVar0=VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
if(vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <=3f){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
}
func_83(iVar0, &(uParam0->f_12), 0, 1);
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
func_82(uParam0->f_11, 1);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_82(uParam0->f_11, 2);
}}
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
func_81(iVar0, uParam0->f_11);
}elseif((!func_78(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning")){
iVar4=func_77(iVar0);
if(iVar4==-1){
uParam0->f_10=0;
}else{
func_70(iVar4);
}}
if(((Global_100833 !=13 && Global_100833 !=10) && Global_100833 !=11) && Global_100833 !=12){
if(MISC::GET_HASH_KEY(&(Global_100833.f_3))==Global_78467){
if(uParam0->f_12.f_66==Global_113810.f_32752.f_69[21 /*78*/].f_66){
func_67(24, 0);
func_70(24);
}}}
if(uParam0->f_9==1){
func_40(iVar0, uParam0->f_11);
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


void func_40(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_46(iParam0)){
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
func_41(iParam0, &(Global_113810.f_32752.f_5510));
}


void func_41(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_45(uParam1);
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
if(uParam1->f_65==-1 && !func_44(uParam1->f_66)){
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
func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_42(iVar0 + 1));
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

int func_42(int iParam0){
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

int func_43(int iParam0, var uParam1, var uParam2){
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

int func_44(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_45(var uParam0){
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

int func_46(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_65(iParam0, 0, 0)) || func_65(iParam0, 1, 0)) || func_65(iParam0, 2, 0)) || func_64(iParam0) !=145) || func_63(iParam0)) || func_62(iParam0)) || func_61(iParam0)) || func_60(iParam0)) || !func_47(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_62(iParam0)){
}
if(func_62(iParam0)){
}
if(func_65(iParam0, 0, 0)){
}
if(func_65(iParam0, 1, 0)){
}
if(func_65(iParam0, 2, 0)){
}
if(func_64(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_47(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_48(iParam0, 0, -1)){
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

int func_48(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_59()){
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
if((((!func_58() && !func_57()) && !func_56()) && !func_55()) && !func_59()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_54() || MISC::IS_PC_VERSION()) || func_53()){
}elseif(!func_56()){
return 0;
}}
if(bParam1){
if(!func_51(iParam0, iParam2)){
return 0;
}}
if(!func_49(iParam0)){
return 0;
}
return 1;
}

int func_49(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_50()){
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

int func_50(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_51(int iParam0, int iParam1){
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
}}elseif(iParam0==func_52(1)){
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

int func_52(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}


var func__53(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__54(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_55(){
return 0;
}

int func_56(){
return 1;
}

int func_57(){
return 1;
}

int func_58(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_59(){
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

int func_60(int iParam0){
int iVar0;
var uVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
uVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G ")){
return 1;
}
if(!func_48(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_61(int iParam0){
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

int func_62(int iParam0){
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

int func_63(int iParam0){
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

int func_64(int iParam0){
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

int func_65(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_66(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_66(int iParam0, int iParam1, char* sParam2, var uParam3){
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


void func_67(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_69(iParam0, 0)){
func_68(iParam0, 1, 0);
func_68(iParam0, 2, 0);
func_68(iParam0, 3, 0);
func_68(iParam0, 4, 0);
func_68(iParam0, 0, 1);
Global_77479[iParam0]=1;
}}else{
func_68(iParam0, 0, 0);
}}


void func_68(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}}

int func_69(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}


void func_70(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_74(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
bVar0=true;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_139[iParam0], 0)){
bVar0=false;
}}}
if(bVar0){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
VEHICLE::DELETE_VEHICLE(&(Global_77479.f_139[iParam0]));
}}
Global_77479[iParam0]=1;
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
if(((((iParam0==24 && func_69(iParam0, 0)) && Global_78388.f_66==0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] !=0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] > 3) && (!func_72(0, Global_77479.f_555[0 /*21*/].f_12) || !func_72(1, Global_77479.f_555[0 /*21*/].f_12))){
func_71(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), &Global_78388);
Global_78466=Global_113810.f_32752.f_5591;
}
func_67(iParam0, 0);
}}}


void func_71(var uParam0, var uParam1){
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

int func_72(int iParam0, int iParam1){
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
if(iParam0 < 0 || iParam0 >=func_73(&(Global_113810.f_32752.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_48(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_73(var uParam0){
return *uParam0;
}

int func_74(var uParam0, int iParam1){
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
uParam0->f_4=func_75(0, 1);
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
uParam0->f_4=func_75(0, 1);
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
uParam0->f_4=func_75(1, 1);
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
uParam0->f_4=func_75(1, 2);
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
uParam0->f_4=func_75(1, 1);
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
uParam0->f_4=func_75(1, 2);
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
uParam0->f_4=func_75(2, 1);
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
uParam0->f_4=func_75(2, 1);
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
uParam0->f_4=func_75(2, 1);
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
if(func_59()){
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
if(func_59()){
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
if(!func_114(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113810.f_32752.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113810.f_32752.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_114(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_114(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_75(int iParam0, int iParam1){
struct<82> Var0;
if(func_17(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_76(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_76(int iParam0, var uParam1, int iParam2){
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

int func_77(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=0;
while (iVar0 < 68){
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_77479.f_484[iVar0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[iVar0], 0)){
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
VEHICLE::GET_VEHICLE_COLOURS(Global_77479.f_484[iVar0], &iVar3, &iVar4);
if(((ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[iVar0])) && iVar1==iVar2) && iVar3==iVar4){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_78(int iParam0, struct<3> Param1, bool bParam2){
int iVar0;
var uVar1[3];
int iVar2;
int iVar3;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
switch (iVar0){
case joaat("cargobob"):
if(func_80(iParam0, Global_77479.f_139[38], 0)){
func_70(38);
return 1;
}
break;
case joaat("firetruk"):
if(func_80(iParam0, Global_77479.f_139[43], 1)){
func_70(43);
return 1;
}
break;
case joaat("cuban800"):
iVar2=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
iVar3=0;
while (iVar3 <=(iVar2 - 1)){
if(func_80(iParam0, uVar1[iVar3], 1) && func_79(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0)){
if((!bParam2 || func_114(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f){
VEHICLE::DELETE_VEHICLE(&iParam0);
return 1;
}else{
return 0;
}}
iVar3++;
}
break;
case joaat("luxor2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[14], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[14])==joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[14])){
func_70(14);
return 1;
}}
break;
case joaat("swift2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[20], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[20])==joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[20])){
func_70(20);
return 1;
}}
break;
}
return 0;
}

int func_79(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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

int func_80(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(bParam2){
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
if(iVar0==iVar2 && iVar1==iVar3){
return 1;
}}else{
return 1;
}}
return 0;
}


void func_81(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(!ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
Global_98144[iVar0]=iParam0;
Global_98154[iVar0]=iParam1;
Global_98164[iVar0]=ENTITY::GET_ENTITY_MODEL(iParam0);
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


void func_82(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(iParam0==145 || Global_98154[iVar0]==iParam0){
if(iParam1==0 || ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0])==func_75(iParam0, iParam1)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98144[iVar0], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98144[iVar0], 0, 1);
VEHICLE::DELETE_VEHICLE(&(Global_98144[iVar0]));
Global_98154[iVar0]=145;
}}}}
iVar0++;
}}


void func_83(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_103(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_42(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_42(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_42(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_42(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_42(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_42(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_42(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_42(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_42(iVar6));
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
if(func_101(uParam1->f_5) || func_101(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_100(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_99()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_44(uParam1->f_66)){
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
func_98(iParam0, uParam1->f_69);
}}else{
func_98(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_90(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_42(iVar7 + 1))){
if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, 0);
}}elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, 1);
}
iVar7++;
}}
if((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("le7b")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 0)==-1){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, 0);
}}
if((((func_84() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_52(1))){
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

int func_84(){
if((((Global_4718592.f_108230==6 || Global_4718592.f_108230==7) || Global_4718592.f_108230==18) || Global_4718592.f_108230==19) && Global_4718592.f_2==20){
return 0;
}
if(func_88(7)){
if(func_86(Global_2672524.f_4.f_16) || func_85(Global_2672524.f_4.f_16)){
return 0;
}}
return 1;
}

int func_85(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890739[iVar0 /*138*/].f_77.f_60 !=0;
}
return 0;
}

int func_86(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_87(iParam0, 9);
}
return 0;
}


var func__87(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


bool func_88(int iParam0){
return func_89(&(Global_2672524.f_184), iParam0);
}


var func__89(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_90(int iParam0, var uParam1, var uParam2){
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
}elseif(func_96(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_95(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_93(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_93(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_92(iParam0);
if(func_91(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_91(int iParam0){
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


void func_92(var uParam0){
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

int func_93(int iParam0, int iParam1){
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
iVar0=func_94(iParam0, 38) + 1;
iVar1=func_94(iParam0, 24) + 1;
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

int func_94(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152698)) && Global_152699==iParam1){
return Global_152700;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_96(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_95(int iParam0, int iParam1){
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

int func_96(var uParam0, int iParam1, int iParam2){
if(!func_97() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_97(){
return 0;
}


void func_98(int iParam0, var uParam1){
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


bool func_99(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_100(int iParam0){
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

int func_101(int iParam0){
if(!func_97() && func_102(iParam0)){
return 1;
}
return 0;
}

int func_102(int iParam0){
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

int func_103(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_110(PLAYER::PLAYER_ID(), -1)){
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
if(func_105(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_104(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_104(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_105(int iParam0){
if(func_109(iParam0)==233){
return func_106(iParam0);
}
return -1;
}

int func_106(int iParam0){
if(func_107(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_107(int iParam0, int iParam1){
if(func_108(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_108(var uParam0){
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

int func_109(int iParam0){
if(func_108(iParam0)){
if(func_107(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_110(int iParam0, int iParam1){
int iVar0;
if(func_111(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}

int func_111(int iParam0, bool bParam1, bool bParam2){
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


void func_112(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_74(&(Global_77479.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77479.f_555[0 /*21*/], iParam2) <=fParam1){
func_70(iVar0);
}}
iVar0++;
}}

int func_113(var uParam0){
if(func_115(uParam0)){
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


bool func_114(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_115(var uParam0){
if(uParam0->f_12.f_66==0){
return 0;
}
if(!func_48(uParam0->f_12.f_66, 0, -1)){
return 0;
}
if(uParam0->f_12.f_66==joaat("stunt") && func_79(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)){
return 0;
}
return 1;
}


bool func_116(){
return func_113(&(Global_104373.f_2890));
}


void func_117(){
func_118(&(Global_104373.f_2890));
}


void func_118(var uParam0){
if(func_115(uParam0)){
STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
}}

int func_119(struct<3> Param0, int iParam1){
return func_120(Global_104373.f_2890.f_12.f_66, Param0, iParam1);
}

int func_120(int iParam0, struct<3> Param1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(iParam0==0){
return 0;
}
if(iParam2==1){
Param1={
func_121() 
};
}
MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
if((Var1.f_0 - Var0.f_0) > Param1.f_0){
return 0;
}elseif((Var1.f_1 - Var0.f_1) > Param1.f_1){
return 0;
}elseif((Var1.f_2 - Var0.f_2) > Param1.f_2){
return 0;
}
return 1;
}


Vector3 func__121(){
return 2.55f, 5.665f, 2.55f;
}

int func_122(){
return func_115(&(Global_104373.f_2890));
}


void func_123(){
STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
STREAMING::REQUEST_MODEL(joaat("packer"));
STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
STREAMING::REQUEST_MODEL(joaat("bison2"));
while ((((!STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2")) || !STREAMING::HAS_MODEL_LOADED(joaat("packer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison2"))){
wait(0);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_30)){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[1])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[1], 1, 1);
iLocal_30=Global_97310[1];
VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_30);
}else{
iLocal_30=VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_30);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[2])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[2], 1, 1);
iLocal_31=Global_97310[2];
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_31, 1);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_31, 7);
func_126(iLocal_31, -1);
func_125(iLocal_31, -1);
}else{
iLocal_31=VEHICLE::CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_31, 1);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_31, 7);
func_126(iLocal_31, -1);
func_125(iLocal_31, -1);
}}
VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_31, iLocal_30, 0.5f);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_33[0])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[0], 1, 1);
iLocal_33[0]=Global_97310.f_9[0];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[0], iLocal_262);
func_124(iLocal_33[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], 1);
}else{
iLocal_33[0]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[0], iLocal_262);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], 1);
func_124(iLocal_33[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_33[1])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[1])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[1], 1, 1);
iLocal_33[1]=Global_97310.f_9[1];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[1], iLocal_262);
func_124(iLocal_33[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], 1);
}else{
iLocal_33[1]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[1], iLocal_262);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.401f, 29.9673f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
}
func_124(iLocal_33[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_33[2])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[2])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[2], 1, 1);
iLocal_33[2]=Global_97310.f_9[2];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[2], iLocal_262);
func_124(iLocal_33[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], 1);
}else{
iLocal_33[2]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[2], iLocal_262);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.423f, 29.2516f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
}
func_124(iLocal_33[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_33[3])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[3])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[3], 1, 1);
iLocal_33[3]=Global_97310.f_9[3];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[3], iLocal_262);
func_124(iLocal_33[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], 1);
}else{
iLocal_33[3]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[3], iLocal_262);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.188f, 29.8247f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
}
func_124(iLocal_33[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_33[4])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[4])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[4], 1, 1);
iLocal_33[4]=Global_97310.f_9[4];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[4], iLocal_262);
func_124(iLocal_33[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], 1);
}else{
iLocal_33[4]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[4], iLocal_262);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.02f, 29.8327f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
}
func_124(iLocal_33[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_33[5])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[5])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[5], 1, 1);
iLocal_33[5]=Global_97310.f_9[5];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[5], iLocal_262);
func_124(iLocal_33[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], 1);
}else{
iLocal_33[5]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[5], iLocal_262);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.108f, 29.8125f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
}
func_124(iLocal_33[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_33[6])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[8])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[8], 1, 1);
iLocal_33[6]=Global_97310.f_9[8];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[6], iLocal_262);
func_124(iLocal_33[6], 20f, 5f, 120f, -45f, 45f, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], 1);
}else{
iLocal_33[6]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_33[6], iLocal_262);
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.485f, 29.6539f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_33[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
}
func_124(iLocal_33[6], 20f, 5f, 120f, -45f, 45f, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[6])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[6], 1, 1);
iLocal_34[0]=Global_97310.f_9[6];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[0], iLocal_263);
func_124(iLocal_34[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_34[0], joaat("weapon_pistol"), 100, 0, 0);
AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_34[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
}else{
iLocal_34[0]=PED::CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[0], iLocal_263);
func_124(iLocal_34[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[0], 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_34[0], joaat("weapon_pistol"), 100, 0, 0);
AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_34[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[7])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310.f_9[7], 1, 1);
iLocal_34[1]=Global_97310.f_9[7];
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[1], iLocal_263);
func_124(iLocal_34[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_34[1], joaat("weapon_pistol"), 100, 0, 0);
AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_34[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
}else{
iLocal_34[1]=PED::CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_34[1], iLocal_263);
func_124(iLocal_34[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_34[1], 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_34[1], joaat("weapon_pistol"), 100, 0, 0);
AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_34[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
}}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
}


void func_124(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
if(!PED::IS_PED_INJURED(iParam0)){
PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, iParam2);
PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, iParam4);
PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, iParam5);
PED::SET_PED_ID_RANGE(iParam0, iParam6);
PED::SET_COMBAT_FLOAT(iParam0, 10, iParam7);
}}


void func_125(int iParam0, int iParam1){
Global_63496=iParam0;
Global_63497=iParam1;
}


void func_126(int iParam0, int iParam1){
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


void func_127(){
iLocal_52=0;
while (iLocal_52 <=6){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_52]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_33[iLocal_52], 1)){
PED::DELETE_PED(&(iLocal_33[iLocal_52]));
}
iLocal_52++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_34[0], 1)){
PED::DELETE_PED(&(iLocal_34[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_34[1], 1)){
PED::DELETE_PED(&(iLocal_34[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_35) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_35, 1)){
PED::DELETE_PED(&iLocal_35);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_36) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36, 1)){
PED::DELETE_PED(&iLocal_36);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_37) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, 1)){
PED::DELETE_PED(&iLocal_37);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_38) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, 1)){
PED::DELETE_PED(&iLocal_38);
}
if(!func_31()){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_30) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_30, 1)){
VEHICLE::DELETE_VEHICLE(&iLocal_30);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[3])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[3], 1, 0);
VEHICLE::DELETE_VEHICLE(&(Global_97310[3]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_31, 1)){
VEHICLE::DELETE_VEHICLE(&iLocal_31);
}
STREAMING::REMOVE_ANIM_DICT("cellphone@str");
STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}


void func_128(){
if(HUD::DOES_BLIP_EXIST(uLocal_47)){
HUD::REMOVE_BLIP(&uLocal_47);
}
if(HUD::DOES_BLIP_EXIST(uLocal_48)){
HUD::REMOVE_BLIP(&uLocal_48);
}
if(HUD::DOES_BLIP_EXIST(uLocal_49)){
HUD::REMOVE_BLIP(&uLocal_49);
}
if(HUD::DOES_BLIP_EXIST(uLocal_50)){
HUD::REMOVE_BLIP(&uLocal_50);
}}


void func_129(){
Global_20711=0;
func_130();
}


void func_130(){
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


void func_131(){
func_153();
if(iLocal_51==0){
if(iLocal_264==1){
func_35();
iLocal_264=0;
}
iLocal_265=0;
iLocal_267=0;
iLocal_344=0;
iLocal_83=0;
iLocal_84=0;
PLAYER::SET_MAX_WANTED_LEVEL(5);
STREAMING::REMOVE_ANIM_DICT("cellphone@str");
STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
if(!CAM::IS_SCREEN_FADED_IN()){
STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
CAM::DO_SCREEN_FADE_IN(800);
}
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
iLocal_293=1;
iLocal_51=1;
}
if(iLocal_51==1){
func_152(&uLocal_97, 3, 0, "LESTER", 0, 1);
if(func_14()==0){
func_152(&uLocal_97, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
}
if(func_14()==1){
func_152(&uLocal_97, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
}
if(func_14()==2){
func_152(&uLocal_97, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
}
iLocal_51=2;
}
if(iLocal_51==2){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(func_14()==0){
if(func_138(&uLocal_97, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
settimera(0);
iLocal_51=3;
}}
if(func_14()==1){
if(func_138(&uLocal_97, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
settimera(0);
iLocal_51=3;
}}
if(func_14()==2){
if(func_138(&uLocal_97, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
settimera(0);
iLocal_51=3;
}}}}
if(iLocal_51==3){
if(!HUD::DOES_BLIP_EXIST(uLocal_48)){
if(!func_137()){
if(timera() > 10500){
uLocal_48=func_135(Local_90, 1);
}}}
if(func_137()){
iLocal_51=4;
}}
if(iLocal_51==4){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_31)){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_90, 4f, 4f, 2f, 1, 1, 2)){
if(func_133(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4f, 3, 0.5f, 0, 1, 0)){
AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
if(HUD::DOES_BLIP_EXIST(uLocal_48)){
HUD::REMOVE_BLIP(&uLocal_48);
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
func_132(0, -1);
iLocal_51=0;
iLocal_26=5;
}
}}}}}}}


void func_132(bool bParam0, int iParam1){
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

int func_133(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
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
func_134(iParam0);
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


void func_134(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


var func__135(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_136(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


float func_136(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}

int func_137(){
if(Global_21845==0){
return 1;
}
return 0;
}


bool func_138(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_151(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
return func_139(sParam3, iParam4, bParam8);
}

int func_139(char* sParam0, int iParam1, bool bParam2){
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
func_130();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_150(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_149();
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
func_148();
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
if(func_147()){
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
if(func_146()){
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
func_145();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_144();
func_140();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_130();
}
return 0;
}


void func_140(){
if(!func_141()){
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

int func_141(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_143()){
return 0;
}
if(func_142(PLAYER::PLAYER_ID())){
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


bool func_142(int iParam0){
return func_87(iParam0, 20);
}

int func_143(){
return -1;
}


void func_144(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_145(){
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

int func_146(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_147(){
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


void func_148(){
if(func_16(14)){
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
Global_20500=func_14();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


void func_149(){
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


bool func_150(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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


void func_152(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


void func_153(){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_31)){
if(func_158("HELP_1")){
HUD::CLEAR_HELP(1);
}
if(HUD::DOES_BLIP_EXIST(uLocal_47)){
HUD::REMOVE_BLIP(&uLocal_47);
}
if(HUD::DOES_BLIP_EXIST(uLocal_50)){
if(iLocal_292==1){
if(MISC::GET_GAME_TIMER() < iLocal_83 + 7500){
HUD::CLEAR_PRINTS();
}}
HUD::REMOVE_BLIP(&uLocal_50);
}
if(iLocal_26==4){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(iLocal_344==0){
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
iLocal_344=1;
}
if(iLocal_267==1){
if(MISC::GET_GAME_TIMER() < iLocal_84 + 7500){
HUD::CLEAR_PRINTS();
}
iLocal_267=0;
}
if(iLocal_51 > 3){
if(!HUD::DOES_BLIP_EXIST(uLocal_48)){
uLocal_48=func_135(Local_90, 1);
}
if(iLocal_265==0){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
func_157("GOD_2", 7500, 1);
iLocal_265=1;
}}
}}else{
if(HUD::DOES_BLIP_EXIST(uLocal_48)){
HUD::REMOVE_BLIP(&uLocal_48);
}
if(iLocal_267==0){
HUD::CLEAR_PRINTS();
func_157("GOD_4", 7500, -1);
AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
iLocal_84=MISC::GET_GAME_TIMER();
iLocal_267=1;
iLocal_344=0;
}}}}else{
if(HUD::DOES_BLIP_EXIST(uLocal_47)){
HUD::REMOVE_BLIP(&uLocal_47);
}
if(HUD::DOES_BLIP_EXIST(uLocal_48)){
HUD::REMOVE_BLIP(&uLocal_48);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, 0)){
if(!HUD::DOES_BLIP_EXIST(uLocal_50)){
uLocal_50=func_155(iLocal_30, 0, 0);
HUD::SET_BLIP_AS_FRIENDLY(uLocal_50, 1);
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_PRINTS();
}
if(iLocal_292==0){
func_157("GOD_6", 7500, -1);
iLocal_83=MISC::GET_GAME_TIMER();
iLocal_292=1;
}
if(!func_158("HELP_1")){
func_154("HELP_1");
}}}}}else{
if(HUD::DOES_BLIP_EXIST(uLocal_50)){
HUD::REMOVE_BLIP(&uLocal_50);
}
if(HUD::DOES_BLIP_EXIST(uLocal_48)){
HUD::REMOVE_BLIP(&uLocal_48);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(!HUD::DOES_BLIP_EXIST(uLocal_47)){
uLocal_47=func_155(iLocal_31, 0, 0);
HUD::SET_BLIP_AS_FRIENDLY(uLocal_47, 1);
}}
if(iLocal_268==0){
HUD::CLEAR_PRINTS();
func_157("GOD_5", 7500, -1);
iLocal_268=1;
}}}}


void func_154(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_155(int iParam0, bool bParam1, bool bParam2){
return func_156(iParam0, !bParam1, bParam2);
}

int func_156(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_136(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_136(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_136(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


void func_157(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}


bool func_158(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_159(){
if(iLocal_51 > 1){
func_153();
}
if(iLocal_51==0){
if(iLocal_264==1){
func_35();
iLocal_264=0;
}
iLocal_294=0;
iLocal_295=0;
iLocal_296=0;
iLocal_297=0;
iLocal_298=0;
iLocal_299=0;
iLocal_300=0;
iLocal_301[0]=0;
iLocal_301[1]=0;
iLocal_302[0]=0;
iLocal_302[1]=0;
iLocal_303=0;
iLocal_304=0;
iLocal_305=0;
iLocal_306=0;
iLocal_307=0;
iLocal_308=0;
iLocal_309=0;
iLocal_316=0;
iLocal_317=0;
iLocal_318=0;
iLocal_319=0;
iLocal_320=0;
iLocal_321=0;
iLocal_322=0;
iLocal_323=0;
iLocal_324=0;
iLocal_325=0;
iLocal_326[0]=0;
iLocal_326[1]=0;
iLocal_327[0]=0;
iLocal_327[1]=0;
iLocal_328[0]=0;
iLocal_328[1]=0;
iLocal_329[0]=0;
iLocal_329[1]=0;
iLocal_330[0]=0;
iLocal_330[1]=0;
iLocal_331[0]=0;
iLocal_331[1]=0;
iLocal_332[0]=0;
iLocal_332[1]=0;
iLocal_334=0;
iLocal_337=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_341=0;
iLocal_342=0;
iLocal_343=0;
iLocal_357=0;
iLocal_268=0;
iLocal_269=0;
iLocal_274=0;
iLocal_284=0;
iLocal_285=0;
iLocal_286=0;
iLocal_287=0;
iLocal_288=0;
iLocal_289=0;
iLocal_290=0;
iLocal_291=0;
iLocal_292=0;
iLocal_310=0;
iLocal_340=0;
iLocal_358=0;
iLocal_360=0;
iLocal_333=0;
iLocal_83=0;
iLocal_84=0;
iLocal_52=0;
while (iLocal_52 <=6){
iLocal_266[iLocal_52]=0;
iLocal_280[iLocal_52]=0;
iLocal_282[iLocal_52]=0;
iLocal_283[iLocal_52]=0;
iLocal_281[iLocal_52]=0;
iLocal_52++;
}
STREAMING::REQUEST_ANIM_DICT("cellphone@str");
STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(!HUD::DOES_BLIP_EXIST(uLocal_47)){
uLocal_47=func_155(iLocal_31, 0, 0);
HUD::SET_BLIP_AS_FRIENDLY(uLocal_47, true);
}}
PLAYER::SET_MAX_WANTED_LEVEL(0);
if(CAM::IS_SCREEN_FADED_OUT()){
if(!func_31()){
STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_32)){
func_28(iLocal_32, -1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_32);
}else{
func_28(0, -1, 1);
}}
if(!CAM::IS_SCREEN_FADED_IN()){
CAM::DO_SCREEN_FADE_IN(800);
}
AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
iLocal_293=1;
iLocal_51=1;
}
if(iLocal_51==1){
if(iLocal_340==0){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
func_157("GOD_1", 7500, 1);
iLocal_340=1;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
if(HUD::DOES_BLIP_EXIST(uLocal_47)){
HUD::REMOVE_BLIP(&uLocal_47);
}
func_160(656, 0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
iLocal_51=2;
}}}
if(iLocal_51==2){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_31)){
if(func_158("HELP_1")){
HUD::CLEAR_HELP(1);
}
if(HUD::DOES_BLIP_EXIST(uLocal_47)){
HUD::REMOVE_BLIP(&uLocal_47);
}
if(HUD::DOES_BLIP_EXIST(uLocal_50)){
HUD::REMOVE_BLIP(&uLocal_50);
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_91, Local_94, 1) < 100f){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(iLocal_269==1){
if(MISC::GET_GAME_TIMER() < iLocal_84 + 7500){
HUD::CLEAR_PRINTS();
iLocal_269=0;
}}
if(iLocal_310==0){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
func_157("GOD_7", 7500, -1);
iLocal_310=1;
}
}
elseif(iLocal_269==0){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
iLocal_84=MISC::GET_GAME_TIMER();
func_157("GOD_4", 7500, -1);
iLocal_269=1;
}}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
iLocal_51=0;
iLocal_26=4;
}}else{
if(HUD::DOES_BLIP_EXIST(uLocal_47)){
HUD::REMOVE_BLIP(&uLocal_47);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, 0)){
if(!HUD::DOES_BLIP_EXIST(uLocal_50)){
uLocal_50=func_155(iLocal_30, 0, 0);
HUD::SET_BLIP_AS_FRIENDLY(uLocal_50, true);
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_PRINTS();
}
if(iLocal_292==0){
func_157("GOD_6", 7500, -1);
iLocal_292=1;
}
if(!func_158("HELP_1")){
func_154("HELP_1");
}
}}}}else{
if(HUD::DOES_BLIP_EXIST(uLocal_50)){
HUD::REMOVE_BLIP(&uLocal_50);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(!HUD::DOES_BLIP_EXIST(uLocal_47)){
uLocal_47=func_155(iLocal_31, 0, 0);
HUD::SET_BLIP_AS_FRIENDLY(uLocal_47, true);
}}
if(iLocal_268==0){
HUD::CLEAR_PRINTS();
func_157("GOD_5", 7500, -1);
iLocal_268=1;
}}}}}


void func_160(int iParam0, bool bParam1){
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


void func_161(){
if(iLocal_51==0){
if(iLocal_264==1){
func_35();
iLocal_264=0;
}
func_184();
func_123();
if(!CAM::IS_SCREEN_FADED_IN()){
STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
CAM::DO_SCREEN_FADE_IN(800);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[3])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97310[3], 0)){
if(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_97310[3]))){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[3], 1, 1);
func_163(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
}
if(((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_97310[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_97310[3]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_97310[3]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_97310[3]))){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97310[3], 1, 1);
func_163(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
}}}
func_162(79);
iLocal_293=1;
iLocal_51=1;
}
if(iLocal_51==1){
iLocal_51=0;
iLocal_26=3;
}}


void func_162(int iParam0){
if(Global_97735 !=-1){
if(iParam0==Global_97735){
Global_97739=1;
return;
}}}


void func_163(struct<3> Param0, float fParam1, int iParam2, int iParam3){
struct<3> Var0;
var uVar1;
if(ENTITY::DOES_ENTITY_EXIST(Global_104373.f_4)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104373.f_4, 0)){
if(func_183(24) !=Global_104373.f_4){
if(iParam2==1){
if(func_180(ENTITY::GET_ENTITY_COORDS(Global_104373.f_4, 1), iParam3, &Var0, &uVar1)){
Param0={
Var0 
};
fParam1=uVar1;
}}
func_164(Global_104373.f_4, Param0, fParam1, 24, 0);
}}}}


void func_164(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4){
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
func_179(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_41(iParam0, &Var0);
if(func_114(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
uParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78467=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_177(iParam3, &Var0, Param1, uParam2, func_64(iParam0));
func_165(iParam3, iParam0, 0);
}}


void func_165(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_74(&(Global_77479.f_555[0 /*21*/]), iParam0)){
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
Global_113810.f_32752.f_4801=func_166();
}
if(iParam1 !=Global_77479.f_139[iParam0]){
if(iParam0==24){
iVar0=func_183(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_40(iVar0, 145);
}}
Global_78385=iParam1;
Global_78386=iParam0;
Global_78387=iParam2;
}}}}


var func__166(){
var uVar0;
func_176(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_175(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_174(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_169(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_168(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_167(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_167(var uParam0, int iParam1){
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


void func_168(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_169(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_173(*uParam0);
iVar1=func_171(*uParam0);
if(iParam1 < 1 || iParam1 > func_170(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_170(int iParam0, int iParam1){
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


var func__171(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_172(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_172(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_173(var uParam0){
return uParam0 & 15;
}


void func_174(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_175(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_176(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}


void func_177(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4){
if(func_74(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
func_178(iParam0);
func_71(uParam1, &(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]));
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
func_67(iParam0, 1);
}}}


void func_178(int iParam0){
if(iParam0==-1){
return;
}
if(func_74(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
func_67(iParam0, 0);
}}}


void func_179(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_178(iParam0);
func_67(iParam0, 0);
}

int func_180(struct<3> Param0, int iParam1, var uParam2, var uParam3){
int iVar0;
iVar0=func_181(Param0, iParam1, 1);
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

int func_181(struct<3> Param0, int iParam1, int iParam2){
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
if(func_182(iVar0) || iParam2==0){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95851[iVar0 /*10*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}}
iVar0++;
}
return iVar3;
}


var func__182(int iParam0){
return MISC::IS_BIT_SET(Global_113810.f_7232[iParam0], 0);
}

int func_183(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77479.f_139[iParam0];
}


void func_184(){
Global_94991=1;
}


void func_185(){
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
uLocal_42=PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
uLocal_43=PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
uLocal_44=PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
uLocal_45=PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
uLocal_40=PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
uLocal_41=PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
if(func_30()){
if(Global_94990==1){
func_187(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
iLocal_358=1;
iLocal_264=1;
iLocal_51=0;
iLocal_26=5;
}elseif(func_186()==0){
if(func_122() && func_119(7f, 7f, 7f, 1)){
func_187(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
}else{
func_187(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
}
iLocal_264=1;
iLocal_358=1;
iLocal_51=0;
iLocal_26=3;
}}elseif(func_222(0)){
iLocal_264=1;
iLocal_358=1;
iLocal_51=0;
iLocal_26=3;
}else{
iLocal_51=0;
iLocal_26=2;
}}

int func_186(){
if(!Global_100833==10 && !Global_100833==9){
return 0;
}
return Global_100833.f_2;
}


void func_187(struct<3> Param0, float fParam1, int iParam2, int iParam3){
if(func_30()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::CLEAR_BIT(&(Global_100833.f_20), 2);
MISC::SET_GAME_PAUSED(1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}
Global_100829={
Param0 
};
Global_100832=fParam1;
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
func_29(1);
}}


void func_188(){
if(!func_30()){
iLocal_26=1;
}else{
iLocal_26=1;
}}


void func_189(){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_38)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 150f){
STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
if(STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))){
iLocal_38=PED::CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
PED::SET_PED_CONFIG_FLAG(iLocal_38, 324, 1);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_38)){
if(!PED::IS_PED_INJURED(iLocal_38)){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, 0)){
if(iLocal_335==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_38)){
TASK::CLEAR_PED_TASKS(iLocal_38);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_38);
}
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_38, 65.2f, -617.2f, 31f, 2f, 0);
PED::SET_PED_KEEP_TASK(iLocal_38, 1);
iLocal_87=MISC::GET_GAME_TIMER();
iLocal_335=1;
}elseif(MISC::GET_GAME_TIMER() > iLocal_87 + 5000){
if(!PED::IS_PED_USING_ANY_SCENARIO(iLocal_38)){
iLocal_335=0;
}}}
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_38, 1) < 20f){
if(iLocal_314==0){
TASK::TASK_LOOK_AT_ENTITY(iLocal_38, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
iLocal_314=1;
}}elseif(iLocal_314==1){
TASK::TASK_LOOK_AT_ENTITY(iLocal_38, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
iLocal_314=0;
}}}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 45f, -616.2f, 30.8f, 1) < 50f){
if(iLocal_336==0){
iLocal_88=498972213;
iLocal_89=-512924631;
OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_88, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_89, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
iLocal_336=1;
}
if(iLocal_336==1){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(Local_91.f_0 > 35f){
if(fLocal_95 < 1f){
fLocal_95=(fLocal_95 + 0.02f);
}else{
fLocal_95=1f;
}
if(fLocal_95 <=1f){
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_88, fLocal_95, 0, 1);
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_89, fLocal_95, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_88, 4, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_89, 4, 0, 1);
iLocal_315=0;
}}
if(Local_91.f_0 < 35f){
if(fLocal_95 > 0f){
fLocal_95=(fLocal_95 - 0.02f);
}else{
fLocal_95=0f;
}
if(fLocal_95 >=0f){
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_88, fLocal_95, 0, 1);
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_89, fLocal_95, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_88, 4, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_89, 4, 0, 1);
iLocal_315=0;
}}}elseif(iLocal_315==0){
if(Local_91.f_0 < 35f){
if(fLocal_95 > 0f){
fLocal_95=(fLocal_95 - 0.02f);
}else{
fLocal_95=0f;
}
if(fLocal_95 >=0f){
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_88, fLocal_95, 0, 1);
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_89, fLocal_95, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_88, 4, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_89, 4, 0, 1);
iLocal_315=1;
}}}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_38)){
if(!PED::IS_PED_INJURED(iLocal_38)){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(iLocal_312==0){
if(iLocal_311==0){
func_152(&uLocal_97, 4, iLocal_38, "FHPBSecGuard", 0, 1);
if(func_190(&uLocal_97, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0)){
iLocal_311=1;
}}
}
elseif(iLocal_313==0){
func_152(&uLocal_97, 4, iLocal_38, "FHPBSecGuard", 0, 1);
if(func_190(&uLocal_97, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0)){
iLocal_313=1;
}
}}elseif(iLocal_312==0){
func_152(&uLocal_97, 4, iLocal_38, "FHPBSecGuard", 0, 1);
if(func_190(&uLocal_97, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0)){
iLocal_312=1;
}}}}}}}


bool func_190(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_151(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_139(sParam2, iParam3, 0);
}


float func_191(int iParam0, int iParam1, int iParam2){
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


void func_192(){
int iVar0;
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
if(!func_196() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(iLocal_26==3){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && iLocal_29==0){
if(func_14()==0){
if(iLocal_27==1){
if(iLocal_289==0){
if(func_194() && func_193()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0)){
iLocal_86=MISC::GET_GAME_TIMER();
iLocal_289=1;
}}}
}
if(iLocal_27==1){
if(iLocal_289==1 && MISC::GET_GAME_TIMER() > iLocal_86 + 7000){
if(func_194() && func_193()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0)){
iLocal_86=MISC::GET_GAME_TIMER();
}}}
}}
if(iLocal_27==2){
if(iLocal_323==0){
if(func_194()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0)){
iLocal_77=MISC::GET_GAME_TIMER();
iLocal_323=1;
}}
}}}elseif(iLocal_29==2 && iLocal_27==1){
if(iLocal_334==0){
if(func_194() && func_193()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0)){
iLocal_82=MISC::GET_GAME_TIMER();
iLocal_334=1;
}
}}elseif(MISC::GET_GAME_TIMER() > iLocal_82 + 8000){
if(func_194() && func_193()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0)){
iLocal_82=MISC::GET_GAME_TIMER();
}
}}}
if(iLocal_27==4){
if(iLocal_288==0){
func_129();
if(func_194()){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
if(iVar0 !=joaat("weapon_unarmed") && iVar0 !=0){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0)){
iLocal_59=MISC::GET_GAME_TIMER();
iLocal_284=1;
iLocal_288=1;
}}else{
iLocal_59=MISC::GET_GAME_TIMER();
iLocal_284=1;
iLocal_288=1;
}
}}
if(iLocal_288==1){
if(iLocal_284==0){
iLocal_59=MISC::GET_GAME_TIMER();
iLocal_284=1;
}
if(iLocal_284==1){
if(MISC::GET_GAME_TIMER() > iLocal_59 + 9000){
if(func_194()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0)){
iLocal_284=0;
}}}
}}}
if(iLocal_27==3){
if(iLocal_320==1){
if(iLocal_286==0){
if(iLocal_287==1){
if(func_194()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0)){
iLocal_286=1;
}}}
}}
if(iLocal_285==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
if(func_194()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0)){
iLocal_60=MISC::GET_GAME_TIMER();
iLocal_286=1;
}
}}}
}}
if(MISC::GET_GAME_TIMER() > iLocal_60 + 10000){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 0)){
if(func_194()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0)){
iLocal_60=MISC::GET_GAME_TIMER();
}
}}}
}}
if(iLocal_321==1){
if(iLocal_322==0){
if(func_194()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0)){
iLocal_322=1;
}}
}}}}}}}

int func_193(){
if(func_14()==0){
func_152(&uLocal_97, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
return 1;
}
if(func_14()==1){
func_152(&uLocal_97, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
return 1;
}
if(func_14()==2){
func_152(&uLocal_97, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
return 1;
}
return 0;
}

int func_194(){
int iVar0;
iLocal_55=0;
while (iLocal_55 <=6){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_55])){
if(!PED::IS_PED_INJURED(iLocal_33[iLocal_55])){
iVar0=func_195(PLAYER::PLAYER_PED_ID(), iLocal_262, 0, 0, -1);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!PED::IS_PED_INJURED(iVar0)){
}}
if(iVar0==iLocal_33[iLocal_55] && func_191(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 15f){
func_152(&uLocal_97, 5, iLocal_33[iLocal_55], "CONSTRUCTION3", 0, 1);
return 1;
}}}
iLocal_55++;
}
return 0;
}

int func_195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0[16];
int iVar1;
iVar1=0;
if(!PED::IS_PED_INJURED(iParam0)){
PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
iVar1=0;
while (iVar1 <=(iVar0 - 1)){
if(ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1])){
if(!PED::IS_PED_INJURED(iVar0[iVar1])){
if(PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1])==iParam1){
if(iParam2 <=0){
if(iParam3==1){
if(ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1])){
return iVar0[iVar1];
}}else{
return iVar0[iVar1];
}
}
elseif(iVar1 + iParam2) <=(iVar0 - 1){
if(ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)])){
if(!PED::IS_PED_INJURED(iVar0[(iVar1 + iParam2)])){
if(PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)])==iParam1){
if(iParam3==1){
if(ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)])){
return iVar0[(iVar1 + iParam2)];
}
}
else{
return iVar0[(iVar1 + iParam2)];
}
}}}
}}}}
iVar1++;
}}
return 0;
}

int func_196(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_197(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
}else{
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}}
func_204();
if(iLocal_301[0]){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
if(iLocal_326[0]==0){
TASK::TASK_LOOK_AT_ENTITY(iLocal_34[0], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
iLocal_326[0]=1;
}
if(iLocal_326[0]==1){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], joaat("script_task_look_at_entity")) !=0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[0], joaat("script_task_look_at_entity")) !=1){
iLocal_326[0]=0;
}}}elseif(iLocal_326[0]==1){
TASK::TASK_LOOK_AT_ENTITY(iLocal_34[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
iLocal_326[0]=0;
}}
if(iLocal_301[1]){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
if(iLocal_326[1]==0){
TASK::TASK_LOOK_AT_ENTITY(iLocal_34[1], PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
iLocal_326[1]=1;
}
if(iLocal_326[1]==1){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], joaat("script_task_look_at_entity")) !=0 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_34[1], joaat("script_task_look_at_entity")) !=1){
iLocal_326[1]=0;
}}}elseif(iLocal_326[1]==1){
TASK::TASK_LOOK_AT_ENTITY(iLocal_34[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
iLocal_326[1]=0;
}}
if(iLocal_301[0] && iLocal_301[1]){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1)){
iLocal_296=1;
iLocal_297=0;
}else{
iLocal_296=0;
iLocal_297=1;
}}else{
if(iLocal_301[0] && !iLocal_301[1]){
iLocal_296=1;
iLocal_297=0;
}
if(iLocal_301[1] && !iLocal_301[0]){
iLocal_296=0;
iLocal_297=1;
}}
switch (iLocal_29){
case 0:
if(TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY")){
if(!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY")){
TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 1);
}
if(TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY")){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_34[0])){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.572f, 29.3231f, 5f, 1)){
iLocal_81[0]=MISC::GET_GAME_TIMER();
if(!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_34[0])){
if(iLocal_339[0]==0){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
iLocal_338[0]=0;
iLocal_339[0]=1;
}
}}elseif(MISC::GET_GAME_TIMER() > iLocal_81[0] + 2000){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_34[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f){
if(iLocal_338[0]==0){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_34[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
iLocal_339[0]=0;
iLocal_338[0]=1;
}
}}}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(!PED::IS_PED_BEING_STEALTH_KILLED(iLocal_34[1])){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.877f, 29.3866f, 5f, 1)){
iLocal_81[1]=MISC::GET_GAME_TIMER();
if(!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_34[1])){
if(iLocal_339[1]==0){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_34[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
iLocal_338[1]=0;
iLocal_339[1]=1;
}
}}elseif(MISC::GET_GAME_TIMER() > iLocal_81[1] + 2000){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_34[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f){
if(iLocal_338[1]==0){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_34[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
iLocal_339[1]=0;
iLocal_338[1]=1;
}
}}}
}}}}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f){
if((func_203(PLAYER::PLAYER_PED_ID())==joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_202(0)){
if(PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 100f) || PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0)){
if(iLocal_332[0]==0){
if(!PED::IS_PED_FACING_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID(), 45f)){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
}else{
TASK::CLEAR_PED_TASKS(iLocal_34[0]);
}
TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_34[0], PLAYER::PLAYER_PED_ID(), 5000);
iLocal_80[0]=MISC::GET_GAME_TIMER();
func_201(iLocal_34[0]);
iLocal_332[0]=1;
}
}
if(iLocal_332[0]==1){
if(MISC::GET_GAME_TIMER() > iLocal_80[0] + 5000){
iLocal_332[0]=0;
}
}
if(iLocal_302[0]==0 && iLocal_302[1]==0){
if(iLocal_300==0){
func_199(iLocal_34[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
iLocal_64=MISC::GET_GAME_TIMER();
iLocal_300=1;
}
elseif(MISC::GET_GAME_TIMER() > iLocal_64 + 15000){
func_199(iLocal_34[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
iLocal_64=MISC::GET_GAME_TIMER();
}
}
else{
if(iLocal_302[0]==1){
if(iLocal_303==0){
func_199(iLocal_34[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
iLocal_70=MISC::GET_GAME_TIMER();
iLocal_303=1;
}elseif(MISC::GET_GAME_TIMER() > iLocal_70 + 15000){
func_199(iLocal_34[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
iLocal_70=MISC::GET_GAME_TIMER();
}
}
if(iLocal_302[1]==1){
if(iLocal_304==0){
func_199(iLocal_34[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
iLocal_71=MISC::GET_GAME_TIMER();
iLocal_304=1;
}elseif(MISC::GET_GAME_TIMER() > iLocal_71 + 15000){
func_199(iLocal_34[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
iLocal_71=MISC::GET_GAME_TIMER();
}
}
}}}
}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 15f){
if((func_203(PLAYER::PLAYER_PED_ID())==joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_202(0)){
if(PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 100f)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0)){
if(iLocal_332[1]==0){
if(!PED::IS_PED_FACING_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID(), 45f)){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[1])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[1]);
}else{
TASK::CLEAR_PED_TASKS(iLocal_34[1]);
}
TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_34[1], PLAYER::PLAYER_PED_ID(), 5000);
iLocal_80[1]=MISC::GET_GAME_TIMER();
func_201(iLocal_34[1]);
iLocal_332[1]=1;
}
}
if(iLocal_332[1]==1){
if(MISC::GET_GAME_TIMER() > iLocal_80[1] + 5000){
iLocal_332[1]=0;
}
}
if(iLocal_302[0]==0 && iLocal_302[1]==0){
if(iLocal_300==0){
func_199(iLocal_34[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
iLocal_64=MISC::GET_GAME_TIMER();
iLocal_300=1;
}
elseif(MISC::GET_GAME_TIMER() > iLocal_64 + 15000){
func_199(iLocal_34[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
iLocal_64=MISC::GET_GAME_TIMER();
}
}
else{
if(iLocal_302[1]==1){
if(iLocal_303==0){
func_199(iLocal_34[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
iLocal_70=MISC::GET_GAME_TIMER();
iLocal_303=1;
}elseif(MISC::GET_GAME_TIMER() > iLocal_70 + 15000){
func_199(iLocal_34[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
iLocal_70=MISC::GET_GAME_TIMER();
}
}
if(iLocal_302[0]==1){
if(iLocal_304==0){
func_199(iLocal_34[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
iLocal_71=MISC::GET_GAME_TIMER();
iLocal_304=1;
}elseif(MISC::GET_GAME_TIMER() > iLocal_71 + 15000){
func_199(iLocal_34[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
iLocal_71=MISC::GET_GAME_TIMER();
}
}
}}}
}}}}
break;
case 2:
if(iLocal_358==0){
iLocal_358=1;
}
if(func_198() || iLocal_295==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
iLocal_79[0]=MISC::GET_GAME_TIMER();
iLocal_330[0]=1;
if(iLocal_329[0]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0])){
TASK::CLEAR_PED_TASKS(iLocal_34[0]);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_34[0], 50, 1);
TASK::TASK_COMBAT_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID(), 0, 16);
func_201(iLocal_34[0]);
iLocal_329[0]=1;
}
}
elseif(iLocal_331[0]==0){
if(iLocal_330[0]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0])){
TASK::CLEAR_PED_TASKS(iLocal_34[0]);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_34[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
func_201(iLocal_34[0]);
iLocal_331[0]=1;
}
if(iLocal_330[0]==1){
if(MISC::GET_GAME_TIMER() > iLocal_79[0] + 500){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0])){
TASK::CLEAR_PED_TASKS(iLocal_34[0]);
}
else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_34[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
func_201(iLocal_34[0]);
iLocal_331[0]=1;
}}
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
iLocal_79[1]=MISC::GET_GAME_TIMER();
iLocal_330[1]=1;
if(iLocal_329[1]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[1])){
TASK::CLEAR_PED_TASKS(iLocal_34[1]);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[1]);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_34[1], 50, 1);
TASK::TASK_COMBAT_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID(), 0, 16);
func_201(iLocal_34[1]);
iLocal_329[1]=1;
}
}
elseif(iLocal_331[1]==0){
if(iLocal_330[1]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[1])){
TASK::CLEAR_PED_TASKS(iLocal_34[1]);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[1]);
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_34[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
func_201(iLocal_34[1]);
iLocal_331[1]=1;
}
if(iLocal_330[1]==1){
if(MISC::GET_GAME_TIMER() > iLocal_79[1] + 500){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[1])){
TASK::CLEAR_PED_TASKS(iLocal_34[1]);
}
else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[1]);
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_34[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f, -1, 1048576000, 0, 1193033728);
func_201(iLocal_34[1]);
iLocal_331[1]=1;
}}
}}}
if(func_198()){
if(iLocal_305==0){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2){
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
iLocal_305=1;
}}
if(iLocal_296==1){
if(iLocal_298==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[0])){
func_199(iLocal_34[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
iLocal_69=MISC::GET_GAME_TIMER();
iLocal_298=1;
}}
}
elseif(MISC::GET_GAME_TIMER() > iLocal_69 + 7000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[0])){
func_199(iLocal_34[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
iLocal_69=MISC::GET_GAME_TIMER();
}}
}}
if(iLocal_297==1){
if(iLocal_298==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 20f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[1])){
func_199(iLocal_34[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
iLocal_69=MISC::GET_GAME_TIMER();
iLocal_298=1;
}}
}
elseif(MISC::GET_GAME_TIMER() > iLocal_69 + 7000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 20f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[1])){
func_199(iLocal_34[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
iLocal_69=MISC::GET_GAME_TIMER();
}}
}}}else{
if(iLocal_337==0){
iLocal_39=func_195(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
if(iLocal_39 !=0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_39)){
if(!PED::IS_PED_INJURED(iLocal_39)){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_39, 1) < 35f){
iLocal_337=1;
}}}
}}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_337==0){
if(iLocal_296==1){
if(iLocal_299==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[0])){
func_199(iLocal_34[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
iLocal_68=MISC::GET_GAME_TIMER();
iLocal_299=1;
}}}elseif(MISC::GET_GAME_TIMER() > iLocal_68 + 7000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[0])){
func_199(iLocal_34[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
iLocal_68=MISC::GET_GAME_TIMER();
}}}
}
if(iLocal_297==1){
if(iLocal_299==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 20f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[1])){
func_199(iLocal_34[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
iLocal_68=MISC::GET_GAME_TIMER();
iLocal_299=1;
}}}elseif(MISC::GET_GAME_TIMER() > iLocal_68 + 7000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 20f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[1])){
func_199(iLocal_34[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
iLocal_68=MISC::GET_GAME_TIMER();
}}}
}}}}
if(!func_198()){
if(iLocal_307==0){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 893.2f, -1556.5f, 30f, 1) < 18f){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
iLocal_63=MISC::GET_GAME_TIMER();
iLocal_307=1;
}}
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
iLocal_63=MISC::GET_GAME_TIMER();
iLocal_307=1;
}}
}}}
if(iLocal_295==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) > 4f){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
if(iLocal_327[0]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0])){
TASK::CLEAR_PED_TASKS(iLocal_34[0]);
}
else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
}
TASK::TASK_GO_TO_ENTITY(iLocal_34[0], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
func_201(iLocal_34[0]);
iLocal_327[0]=1;
}
iLocal_78[0]=MISC::GET_GAME_TIMER();
}elseif(MISC::GET_GAME_TIMER() > iLocal_78[0] + 500){
if(iLocal_328[0]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0])){
TASK::CLEAR_PED_TASKS(iLocal_34[0]);
}
else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_34[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 1048576000, 0, 1193033728);
func_201(iLocal_34[0]);
iLocal_328[0]=1;
}}}elseif(iLocal_359[0]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[0])){
TASK::CLEAR_PED_TASKS(iLocal_34[0]);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[0]);
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_46);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_STAND_STILL(0, 2000);
TASK::SET_SEQUENCE_TO_REPEAT(uLocal_46, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_46);
TASK::TASK_PERFORM_SEQUENCE(iLocal_34[0], uLocal_46);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_46);
func_201(iLocal_34[0]);
iLocal_359[0]=1;
}
if(iLocal_333==0){
if(iLocal_324==0 || iLocal_300==1){
if(iLocal_294==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 10f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[0])){
func_199(iLocal_34[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
iLocal_65=MISC::GET_GAME_TIMER();
iLocal_66=MISC::GET_GAME_TIMER();
iLocal_63=MISC::GET_GAME_TIMER();
iLocal_307=1;
iLocal_294=1;
iLocal_302[0]=1;
}
}
}
elseif(MISC::GET_GAME_TIMER() > iLocal_65 + 7000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 10f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[0])){
func_199(iLocal_34[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
iLocal_65=MISC::GET_GAME_TIMER();
}
}
}}elseif(iLocal_300==0){
if(iLocal_325==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 10f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[0])){
func_199(iLocal_34[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
iLocal_294=1;
iLocal_325=1;
}
}
}}}elseif(MISC::GET_GAME_TIMER() > iLocal_66 + 7000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 15f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[0])){
func_199(iLocal_34[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
iLocal_66=MISC::GET_GAME_TIMER();
}}}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) > 4f){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
if(iLocal_327[1]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[1])){
TASK::CLEAR_PED_TASKS(iLocal_34[1]);
}
else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[1]);
}
TASK::TASK_GO_TO_ENTITY(iLocal_34[1], PLAYER::PLAYER_PED_ID(), -1, 0.5f, 2f, 1073741824, 0);
func_201(iLocal_34[1]);
iLocal_327[1]=1;
}
iLocal_78[1]=MISC::GET_GAME_TIMER();
}elseif(MISC::GET_GAME_TIMER() > iLocal_78[1] + 500){
if(iLocal_328[1]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[1])){
TASK::CLEAR_PED_TASKS(iLocal_34[1]);
}
else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[1]);
}
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_34[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f, -1, 1048576000, 0, 1193033728);
func_201(iLocal_34[1]);
iLocal_328[1]=1;
}}}elseif(iLocal_359[1]==0){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_34[1])){
TASK::CLEAR_PED_TASKS(iLocal_34[1]);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_34[1]);
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_46);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_STAND_STILL(0, 2000);
TASK::SET_SEQUENCE_TO_REPEAT(uLocal_46, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_46);
TASK::TASK_PERFORM_SEQUENCE(iLocal_34[1], uLocal_46);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_46);
func_201(iLocal_34[1]);
iLocal_359[1]=1;
}
if(iLocal_333==0){
if(iLocal_324==0 || iLocal_300==1){
if(iLocal_294==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 10f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[1])){
func_199(iLocal_34[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
iLocal_65=MISC::GET_GAME_TIMER();
iLocal_67=MISC::GET_GAME_TIMER();
iLocal_63=MISC::GET_GAME_TIMER();
iLocal_307=1;
iLocal_294=1;
iLocal_302[1]=1;
}
}
}
elseif(MISC::GET_GAME_TIMER() > iLocal_65 + 7000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 10f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[1])){
func_199(iLocal_34[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
iLocal_65=MISC::GET_GAME_TIMER();
}
}
}}elseif(iLocal_300==0){
if(iLocal_325==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 10f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[1])){
func_199(iLocal_34[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
iLocal_294=1;
iLocal_325=1;
}
}
}}}elseif(MISC::GET_GAME_TIMER() > iLocal_67 + 7000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 10f){
if(!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_34[1])){
func_199(iLocal_34[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
iLocal_67=MISC::GET_GAME_TIMER();
}}}
}}
if(iLocal_307==1){
if(iLocal_333==0){
if(MISC::GET_GAME_TIMER() > iLocal_63 + 22000){
iLocal_333=1;
}
}}
if(iLocal_307==1){
if(iLocal_295==0){
if(MISC::GET_GAME_TIMER() > iLocal_63 + 30000){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
iLocal_295=1;
}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 1)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
iLocal_295=1;
}}
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_31, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
iLocal_295=1;
}}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
iLocal_295=1;
}}}
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
iLocal_295=1;
}}}
}}}}
break;
}}

int func_198(){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_62=0;
while (iLocal_62 <=6){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_62])){
if(!PED::IS_PED_INJURED(iLocal_33[iLocal_62])){
if(func_203(PLAYER::PLAYER_PED_ID()) !=joaat("weapon_unarmed") && !func_202(0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_62], PLAYER::PLAYER_PED_ID())){
return 1;
}}}}
iLocal_62++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(func_203(PLAYER::PLAYER_PED_ID()) !=joaat("weapon_unarmed") && !func_202(0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
return 1;
}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(func_203(PLAYER::PLAYER_PED_ID()) !=joaat("weapon_unarmed") && !func_202(0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
return 1;
}}}}}
return 0;
}


void func_199(var uParam0, char* sParam1, char* sParam2, int iParam3){
AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_200(iParam3), 0);
}

int func_200(int iParam0){
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


void func_201(int iParam0){
if(iParam0==iLocal_34[0]){
iLocal_326[0]=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_332[0]=0;
iLocal_329[0]=0;
iLocal_331[0]=0;
iLocal_327[0]=0;
iLocal_328[0]=0;
iLocal_359[0]=0;
}
if(iParam0==iLocal_34[1]){
iLocal_326[1]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_332[1]=0;
iLocal_329[1]=0;
iLocal_331[1]=0;
iLocal_327[1]=0;
iLocal_328[1]=0;
iLocal_359[1]=0;
}}

int func_202(int iParam0){
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

int func_203(int iParam0){
var uVar0;
WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
return uVar0;
}


void func_204(){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Local_91={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
Local_93[0 /*3*/]={
ENTITY::GET_ENTITY_COORDS(iLocal_34[0], 1) 
};
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
Local_93[1 /*3*/]={
ENTITY::GET_ENTITY_COORDS(iLocal_34[1], 1) 
};
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
iLocal_301[0]=1;
}else{
iLocal_301[0]=0;
}}else{
iLocal_301[0]=0;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
iLocal_301[1]=1;
}else{
iLocal_301[1]=0;
}}else{
iLocal_301[1]=0;
}
if(iLocal_29 !=0){
if(iLocal_29==1){
if(iLocal_301[0]==1){
if(iLocal_301[1]==1){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1)){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f){
if(((Local_91.f_0 < Local_93[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0)){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}
}
elseif(Local_91.f_0 < Local_93[0 /*3*/]){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}elseif(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 15f){
if((Local_91.f_0 > Local_93[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0)){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}elseif(Local_91.f_0 > Local_93[1 /*3*/]){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}elseif(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1)){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 15f){
if((Local_91.f_0 < Local_93[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}elseif(Local_91.f_0 < Local_93[0 /*3*/]){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}}elseif(iLocal_301[1]==1){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 15f){
if((Local_91.f_0 > Local_93[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 90f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0)){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}elseif(Local_91.f_0 > Local_93[1 /*3*/]){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}}
if(iLocal_29==2){
if(iLocal_295==0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_91.f_0 > 942f){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(Local_91.f_0 > Local_93[1 /*3*/]){
if(!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 90f)){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}
}}elseif(Local_91.f_0 > 942f){
if(!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 90f)){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_91.f_0 < 860f){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(Local_91.f_0 < Local_93[0 /*3*/]){
if(!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 90f)){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}
}}elseif(Local_91.f_0 < 860f){
if(!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 90f)){
iLocal_29=0;
iLocal_338[0]=0;
iLocal_339[0]=0;
iLocal_338[1]=0;
iLocal_339[1]=0;
iLocal_81[0]=MISC::GET_GAME_TIMER();
iLocal_81[1]=MISC::GET_GAME_TIMER();
}}}}}}
if(iLocal_29 !=1){
if(iLocal_29 !=2){
if(iLocal_301[0]==1){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f){
if((func_203(PLAYER::PLAYER_PED_ID())==joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_202(0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0)){
if(Local_91.f_0 > Local_93[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 90f)){
iLocal_29=1;
}
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0)){
iLocal_29=1;
}}}}
if(iLocal_301[1]==1){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 15f){
if((func_203(PLAYER::PLAYER_PED_ID())==joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || func_202(0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0)){
if(Local_91.f_0 < Local_93[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 90f)){
iLocal_29=1;
}
}}}}}}
if(iLocal_29 !=2){
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f)){
iLocal_29=2;
iLocal_295=1;
}
if(iLocal_357==1){
iLocal_29=2;
iLocal_295=1;
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) !=0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[0])){
if(!PED::IS_PED_INJURED(iLocal_34[0])){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
iLocal_29=2;
iLocal_295=1;
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_34[1])){
if(!PED::IS_PED_INJURED(iLocal_34[1])){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
iLocal_29=2;
iLocal_295=1;
}}}}
if(iLocal_324==0){
if(iLocal_323==1){
if(MISC::GET_GAME_TIMER() > iLocal_77 + 4000){
iLocal_76=0;
while (iLocal_76 <=6){
if(func_196()){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_76])){
if(!PED::IS_PED_INJURED(iLocal_33[iLocal_76])){
if(AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_33[iLocal_76])){
iLocal_29=2;
iLocal_324=1;
}}}
}
iLocal_76++;
}}}}
if((iLocal_27==4 || iLocal_27==3) || iLocal_323==1){
iLocal_29=2;
iLocal_320=1;
iLocal_295=1;
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(iLocal_301[0]==1){
if(func_203(PLAYER::PLAYER_PED_ID()) !=joaat("weapon_unarmed") && !func_202(0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
iLocal_29=2;
}}}
if(iLocal_301[1]==1){
if(func_203(PLAYER::PLAYER_PED_ID()) !=joaat("weapon_unarmed") && !func_202(0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
iLocal_29=2;
}}}}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_91, Local_94, 1) < 36f){
if(iLocal_301[0]==1){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID())){
iLocal_29=2;
}
if(func_191(iLocal_34[0], PLAYER::PLAYER_PED_ID(), 1) < 20f){
if(PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_34[0])){
iLocal_29=2;
}}}
if(iLocal_301[1]==1){
if(Local_91.f_2 < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID())){
iLocal_29=2;
}
if(func_191(iLocal_34[1], PLAYER::PLAYER_PED_ID(), 1) < 20f){
if(PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_34[1])){
iLocal_29=2;
}}}}}
if(iLocal_301[0]==1){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[0], 1) < 20f){
if(Local_91.f_0 > Local_93[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_34[0])){
iLocal_29=2;
}}}}
if(iLocal_301[1]==1){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_34[1], 1) < 20f){
if(Local_91.f_0 < Local_93[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_34[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_34[1])){
iLocal_29=2;
}}}}}}


void func_205(){
iLocal_53=0;
while (iLocal_53 <=6){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_53])){
if(!PED::IS_PED_INJURED(iLocal_33[iLocal_53])){
if(iLocal_276[iLocal_53]==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_53], 1) > 20f){
iLocal_276[iLocal_53]=1;
}}
if(iLocal_276[iLocal_53]==1){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_53], 1) < 20f){
iLocal_276[iLocal_53]=0;
}}}elseif(iLocal_276[iLocal_53]==0){
iLocal_276[iLocal_53]=1;
}}elseif(iLocal_276[iLocal_53]==0){
iLocal_276[iLocal_53]=1;
}
iLocal_53++;
}
if(((((iLocal_276[0]==1 && iLocal_276[1]==1) && iLocal_276[2]==1) && iLocal_276[3]==1) && iLocal_276[4]==1) && iLocal_276[5]==1){
iLocal_277=1;
}else{
iLocal_277=0;
}
iLocal_52=0;
while (iLocal_52 <=6){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_52])){
if(!PED::IS_PED_INJURED(iLocal_33[iLocal_52])){
func_210(iLocal_33[iLocal_52]);
if(iLocal_26==3 || iLocal_26==4){
if(iLocal_29==2 && iLocal_27==0){
func_209(1);
if(iLocal_309==1){
func_129();
}}
if(PED::HAS_PED_RECEIVED_EVENT(iLocal_33[iLocal_52], 18)){
if(iLocal_27 !=4){
func_209(4);
if(iLocal_309==1){
func_207();
}
iLocal_357=1;
}}
if(iLocal_27 !=4){
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f)){
func_209(4);
if(iLocal_309==1){
func_207();
}
}}
if((((((((func_206(iLocal_33[iLocal_52], iLocal_33[0]) || func_206(iLocal_33[iLocal_52], iLocal_33[1])) || func_206(iLocal_33[iLocal_52], iLocal_33[2])) || func_206(iLocal_33[iLocal_52], iLocal_33[3])) || func_206(iLocal_33[iLocal_52], iLocal_33[4])) || func_206(iLocal_33[iLocal_52], iLocal_33[5])) || func_206(iLocal_33[iLocal_52], iLocal_33[6])) || func_206(iLocal_33[iLocal_52], iLocal_34[0])) || func_206(iLocal_33[iLocal_52], iLocal_34[1])){
if(iLocal_27 !=4){
func_209(4);
if(iLocal_309==1){
func_207();
}
iLocal_357=1;
}}
if((func_203(PLAYER::PLAYER_PED_ID())==joaat("weapon_unarmed") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || func_202(0)){
if(iLocal_295==0){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_52], 1) > 20f){
if(iLocal_275[iLocal_52]==1){
iLocal_275[iLocal_52]=0;
}
if(((((iLocal_277==1 && iLocal_27 !=0) && iLocal_27 !=2) && iLocal_27 !=3) && iLocal_27 !=4) && iLocal_29 !=2){
func_209(0);
}}
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_52], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_52], PLAYER::PLAYER_PED_ID())){
if(((iLocal_27 !=1 && iLocal_27 !=2) && iLocal_27 !=3) && iLocal_27 !=4){
if(iLocal_324==0 && iLocal_295==0){
func_209(1);
if(iLocal_309==1){
func_129();
}
}
else{
func_209(3);
if(iLocal_309==1){
func_207();
}
}}}
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_52], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_52], PLAYER::PLAYER_PED_ID())){
if(iLocal_275[iLocal_52]==0){
iLocal_58[iLocal_52]=MISC::GET_GAME_TIMER();
iLocal_275[iLocal_52]=1;
}
if(iLocal_275[iLocal_52]==1){
if(MISC::GET_GAME_TIMER() > iLocal_58[iLocal_52] + 24000){
if((iLocal_27 !=2 && iLocal_27 !=3) && iLocal_27 !=4){
func_209(2);
if(iLocal_309==1){
func_207();
}
}
}}}
}
if(iLocal_295==1){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_52], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_52], PLAYER::PLAYER_PED_ID())){
if(iLocal_27 !=3 && iLocal_27 !=4){
func_209(3);
if(iLocal_309==1){
func_207();
}}}
}
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
if(iLocal_306==0){
iLocal_72=MISC::GET_GAME_TIMER();
iLocal_306=1;
}elseif(MISC::GET_GAME_TIMER() > iLocal_72 + 3000){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_52], 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_52], PLAYER::PLAYER_PED_ID())){
if(iLocal_27 !=3 && iLocal_27 !=4){
func_209(3);
if(iLocal_309==1){
func_207();
}
}}}
}
elseif(iLocal_306==1){
iLocal_306=0;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 1)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_52], PLAYER::PLAYER_PED_ID())){
if(iLocal_27 !=3 && iLocal_27 !=4){
iLocal_287=1;
func_209(3);
if(iLocal_309==1){
func_207();
}
}
}}
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_31, 1) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_52], PLAYER::PLAYER_PED_ID())){
if(iLocal_27 !=3 && iLocal_27 !=4){
iLocal_287=1;
func_209(3);
if(iLocal_309==1){
func_207();
}
}
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[0])){
if(!PED::IS_PED_INJURED(iLocal_33[0])){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_33[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0)){
if(iLocal_27 !=3 && iLocal_27 !=4){
iLocal_287=1;
func_209(3);
if(iLocal_309==1){
func_207();
}
}}}
}
}}}
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[6])){
if(!PED::IS_PED_INJURED(iLocal_33[6])){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[6], 1) < 20f){
if((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_33[6], PLAYER::PLAYER_PED_ID())){
if(Local_91.f_2 > 31f){
if(iLocal_27 !=3 && iLocal_27 !=4){
iLocal_321=1;
func_209(3);
if(iLocal_309==1){
func_207();
}}}elseif(((iLocal_27 !=1 && iLocal_27 !=2) && iLocal_27 !=3) && iLocal_27 !=4){
func_209(1);
if(iLocal_309==1){
func_129();
}}
}
}}}
}}else{
if(iLocal_274==0){
iLocal_57=MISC::GET_GAME_TIMER();
iLocal_274=1;
}
if(iLocal_274==1){
if(MISC::GET_GAME_TIMER() > iLocal_57 + 4000 || iLocal_27==3){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_52], 1) < 20f){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_52], PLAYER::PLAYER_PED_ID())){
if(iLocal_27 !=4){
func_209(4);
if(iLocal_309==1){
func_207();
}
}
}}}
}
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_52], 1) < 40f){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_52], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_33[iLocal_52])){
if(iLocal_27 !=4){
func_209(4);
if(iLocal_309==1){
func_207();
}
}}}
}}}}}
iLocal_52++;
}}

int func_206(int iParam0, int iParam1){
if(((func_191(iParam0, iParam1, 1) < 20f && PED::IS_PED_FACING_PED(iParam0, iParam1, 90f)) && !PED::IS_PED_INJURED(iParam0)) && PED::IS_PED_INJURED(iParam1)){
return 1;
}
return 0;
}


void func_207(){
Global_20711=0;
func_208();
}


void func_208(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}


void func_209(int iParam0){
iLocal_27=iParam0;
iLocal_56=0;
}


void func_210(int iParam0){
iLocal_54=0;
while (iLocal_54 <=6){
if(iParam0==iLocal_33[iLocal_54]){
if(func_191(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID())){
if(iLocal_278[iLocal_54]==0){
TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
iLocal_278[iLocal_54]=1;
}}elseif(iLocal_278[iLocal_54]==1){
TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1072, 3);
iLocal_278[iLocal_54]=0;
}}
iLocal_54++;
}
switch (iLocal_27){
case 0:
if(iLocal_56==0){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
if(iParam0==iLocal_33[0]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
}}}
if(iParam0==iLocal_33[1]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
}}}
if(iParam0==iLocal_33[2]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
}}}
if(iParam0==iLocal_33[3]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
}}}
if(iParam0==iLocal_33[4]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[4], 904f, -1575f, 30f, 20f, 0);
}}}
if(iParam0==iLocal_33[5]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
}}}
if(iParam0==iLocal_33[6]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
}}}
iLocal_56++;
}
if(iLocal_56==1){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[4])){
if(!PED::IS_PED_INJURED(iLocal_33[4])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[5])){
if(!PED::IS_PED_INJURED(iLocal_33[5])){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[4], 1) < 25f){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_91.f_1 > -1573f){
if(iLocal_309==0){
func_152(&uLocal_97, 3, iLocal_33[4], "CONSTRUCTION2", 0, 1);
func_152(&uLocal_97, 5, iLocal_33[5], "CONSTRUCTION3", 0, 1);
TASK::TASK_LOOK_AT_ENTITY(iLocal_33[4], iLocal_33[5], -1, 0, 2);
TASK::TASK_LOOK_AT_ENTITY(iLocal_33[5], iLocal_33[4], -1, 0, 2);
if(!func_196()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0)){
iLocal_309=1;
}}}
}
}}
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1)){
if(iLocal_316==0){
iLocal_74=MISC::GET_GAME_TIMER();
iLocal_316=1;
}
if(iLocal_316==1){
if(MISC::GET_GAME_TIMER() > iLocal_74 + 4000){
if(iLocal_309==0){
func_152(&uLocal_97, 3, iLocal_33[4], "CONSTRUCTION2", 0, 1);
func_152(&uLocal_97, 5, iLocal_33[5], "CONSTRUCTION3", 0, 1);
TASK::TASK_LOOK_AT_ENTITY(iLocal_33[4], iLocal_33[5], -1, 0, 2);
TASK::TASK_LOOK_AT_ENTITY(iLocal_33[5], iLocal_33[4], -1, 0, 2);
if(!func_196()){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_190(&uLocal_97, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0)){
iLocal_309=1;
}
}}}
}
}}
if(iLocal_309==1 && !func_196()){
if(iLocal_308==0){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, 0)){
TASK::TASK_CLEAR_LOOK_AT(iLocal_33[4]);
TASK::TASK_CLEAR_LOOK_AT(iLocal_33[5]);
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_33[4], 865f, -1558.1f, 29.5f, 3f, 0);
iLocal_308=1;
}
}}}
}}}
if(iParam0==iLocal_33[6]){
if(iLocal_317==0){
if(iLocal_318==0){
iLocal_75=MISC::GET_GAME_TIMER();
iLocal_318=1;
}
if(MISC::GET_GAME_TIMER() > iLocal_75 + 30000){
if(iLocal_317==0){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_33[6], 925f, -1561f, 30f, 3f, 0);
iLocal_317=1;
iLocal_318=0;
}}
}}
if(iLocal_317==1){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_33[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0)){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[6], 1) < 15f && Local_91.f_2 < 40f){
if(iLocal_319==0){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, 0)){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 909.5f, -1515.5f, 30f, 50f, 0);
iLocal_319=1;
}}}
}}}}
break;
case 1:
if(iLocal_56==0){
iLocal_54=0;
while (iLocal_54 <=6){
if(iLocal_29==0){
if(iParam0==iLocal_33[iLocal_54]){
if(func_191(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f){
if(iLocal_279[iLocal_54]==0){
if(PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0)){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS(iParam0);
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_46);
TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_46);
TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_46);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_46);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
iLocal_278[iLocal_54]=0;
iLocal_279[iLocal_54]=1;
}}
if(iLocal_279[iLocal_54]==1){
if(!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
iLocal_279[iLocal_54]=0;
}}}else{
if(iLocal_279[iLocal_54]==1){
iLocal_279[iLocal_54]=0;
}
if(iParam0==iLocal_33[0]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], 1);
}
}}
if(iParam0==iLocal_33[1]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], 1);
}
}}
if(iParam0==iLocal_33[2]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], 1);
}
}}
if(iParam0==iLocal_33[3]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], 1);
}
}}
if(iParam0==iLocal_33[4]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[4], 904f, -1575f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], 1);
}
}}
if(iParam0==iLocal_33[5]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], 1);
}
}}
if(iParam0==iLocal_33[6]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], 1);
}
}}}
}}elseif(iParam0==iLocal_33[iLocal_54]){
if(func_191(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 20f){
if(iLocal_279[iLocal_54]==0){
if(PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0)){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS(iParam0);
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_46);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1072, 3);
TASK::CLOSE_SEQUENCE_TASK(uLocal_46);
TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_46);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_46);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
iLocal_278[iLocal_54]=0;
iLocal_279[iLocal_54]=1;
}}
if(iLocal_279[iLocal_54]==1){
if(!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
iLocal_279[iLocal_54]=0;
}}
}
else{
if(iLocal_279[iLocal_54]==1){
iLocal_279[iLocal_54]=0;
}
if(iParam0==iLocal_33[0]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], 1);
}}}
if(iParam0==iLocal_33[1]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], 1);
}}}
if(iParam0==iLocal_33[2]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], 1);
}}}
if(iParam0==iLocal_33[3]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], 1);
}}}
if(iParam0==iLocal_33[4]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[4], 904f, -1575f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], 1);
}}}
if(iParam0==iLocal_33[5]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], 1);
}}}
if(iParam0==iLocal_33[6]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], 1);
}}}
}}
iLocal_54++;
}}
break;
case 2:
if(iLocal_358==0){
iLocal_358=1;
}
if(iLocal_56==0){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, joaat("player"));
iLocal_56++;
}
if(iLocal_56==1){
iLocal_54=0;
while (iLocal_54 <=6){
if(iParam0==iLocal_33[iLocal_54]){
if(func_191(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 15f){
if(func_191(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 3f){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_perform_sequence")) !=0 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_perform_sequence")) !=1){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS(iParam0);
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_46);
TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 1073741824, 0);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_46);
TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_46);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_46);
iLocal_278[iLocal_54]=0;
}}
}
else{
if(iParam0==iLocal_33[0]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], 1);
}}}
if(iParam0==iLocal_33[1]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[1], 1);
}}}
if(iParam0==iLocal_33[2]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[2], 1);
}}}
if(iParam0==iLocal_33[3]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[3], 1);
}}}
if(iParam0==iLocal_33[4]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[4], 904f, -1575f, 30f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[4], 1);
}}}
if(iParam0==iLocal_33[5]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[5], 1);
}}}
if(iParam0==iLocal_33[6]){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_to_pos")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) !=1){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[6], 1);
}}}
}}
iLocal_54++;
}}
break;
case 3:
if(iLocal_358==0){
iLocal_358=1;
}
if(iLocal_290==0){
if(iLocal_291==0){
iLocal_61=MISC::GET_GAME_TIMER();
iLocal_291=1;
}
if(iLocal_291==1){
if(MISC::GET_GAME_TIMER() > iLocal_61 + 9000){
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
iLocal_290=1;
}}}
if(iLocal_56==0){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, joaat("player"));
iLocal_56++;
}
if(iLocal_56==1){
if(iLocal_26==3){
iLocal_54=0;
while (iLocal_54 <=6){
if(iParam0==iLocal_33[iLocal_54]){
if(func_191(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 100f){
if(iLocal_280[iLocal_54]==0){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
iLocal_280[iLocal_54]=1;
}
if(iLocal_281[iLocal_54]==0){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS(iParam0);
}
TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
iLocal_278[iLocal_54]=0;
iLocal_281[iLocal_54]=1;
}}
}
iLocal_54++;
}
if(iLocal_343==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[0])){
if(!PED::IS_PED_INJURED(iLocal_33[0])){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_31, 1) && ENTITY::IS_ENTITY_AT_COORD(iLocal_31, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0)){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[0])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_33[0]);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[0])){
TASK::CLEAR_PED_TASKS(iLocal_33[0]);
}
TASK::OPEN_SEQUENCE_TASK(&uLocal_46);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_46);
TASK::TASK_PERFORM_SEQUENCE(iLocal_33[0], uLocal_46);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_46);
iLocal_343=1;
}
}}}
}}
if(iLocal_343==1 && iLocal_360==0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[0])){
if(!PED::IS_PED_INJURED(iLocal_33[0])){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_33[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0)){
func_152(&uLocal_97, 3, iLocal_33[0], "FHPrepBWorker", 0, 1);
func_199(iLocal_33[0], "FHPB_BBAA", "FHPrepBWorker", 4);
iLocal_360=1;
}}
}}
if(iLocal_342==0){
if(MISC::GET_GAME_TIMER() > iLocal_61 + 3000){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[5])){
if(!PED::IS_PED_INJURED(iLocal_33[5])){
TASK::TASK_PLAY_ANIM(iLocal_33[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
iLocal_85=MISC::GET_GAME_TIMER();
iLocal_342=1;
}}
}}elseif(iLocal_341==0){
if(MISC::GET_GAME_TIMER() > iLocal_85 + 5000){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[5])){
if(!PED::IS_PED_INJURED(iLocal_33[5])){
TASK::CLEAR_PED_TASKS(iLocal_33[5]);
TASK::TASK_COMBAT_PED(iLocal_33[5], PLAYER::PLAYER_PED_ID(), 0, 16);
iLocal_341=1;
}}
}}}
iLocal_54=0;
while (iLocal_54 <=6){
if(iLocal_266[iLocal_54]==0){
if(iParam0==iLocal_33[iLocal_54]){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
if(func_191(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 200f){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS(iParam0);
}
TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
iLocal_266[iLocal_54]=1;
}
}
elseif(func_191(iParam0, PLAYER::PLAYER_PED_ID(), 1) > 100f){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS(iParam0);
}
TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
iLocal_266[iLocal_54]=1;
}}}
}}
iLocal_54++;
}}
if(iLocal_26==4){
iLocal_54=0;
while (iLocal_54 <=6){
if(iLocal_266[iLocal_54]==0){
if(iParam0==iLocal_33[iLocal_54]){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
TASK::CLEAR_PED_TASKS(iParam0);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
PED::SET_PED_KEEP_TASK(iParam0, 1);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
iLocal_266[iLocal_54]=1;
}}
}}
iLocal_54++;
}}
break;
case 4:
if(iLocal_358==0){
iLocal_358=1;
}
if(iLocal_290==0){
if(iLocal_291==0){
iLocal_61=MISC::GET_GAME_TIMER();
iLocal_291=1;
}
if(iLocal_291==1){
if(MISC::GET_GAME_TIMER() > iLocal_61 + 6000){
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
iLocal_290=1;
}}}
if(iLocal_56==0){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, joaat("player"));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
iLocal_56++;
}
if(iLocal_56==1){
iLocal_54=0;
while (iLocal_54 <=6){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_54])){
if(!PED::IS_PED_INJURED(iLocal_33[iLocal_54])){
if(func_191(PLAYER::PLAYER_PED_ID(), iLocal_33[iLocal_54], 1) < 15f){
if(func_211(iLocal_33[iLocal_54], 6)){
if(PED::CAN_PED_SEE_HATED_PED(iLocal_33[iLocal_54], PLAYER::PLAYER_PED_ID())){
if(iLocal_283[iLocal_54]==0){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_54])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_33[iLocal_54]);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_54])){
TASK::CLEAR_PED_TASKS(iLocal_33[iLocal_54]);
}
TASK::TASK_HANDS_UP(iLocal_33[iLocal_54], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
iLocal_283[iLocal_54]=1;
iLocal_282[iLocal_54]=0;
iLocal_278[iLocal_54]=0;
iLocal_73=MISC::GET_GAME_TIMER();
}
}
elseif(MISC::GET_GAME_TIMER() > iLocal_73 + 300){
iLocal_282[iLocal_54]=0;
}}elseif(iLocal_282[iLocal_54]==0){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_54])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_33[iLocal_54]);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_54])){
TASK::CLEAR_PED_TASKS(iLocal_33[iLocal_54]);
}
TASK::TASK_SMART_FLEE_PED(iLocal_33[iLocal_54], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
iLocal_282[iLocal_54]=1;
iLocal_283[iLocal_54]=0;
}}elseif(iLocal_282[iLocal_54]==0){
if(!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_54])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_33[iLocal_54]);
}
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_33[iLocal_54])){
TASK::CLEAR_PED_TASKS(iLocal_33[iLocal_54]);
}
TASK::TASK_SMART_FLEE_PED(iLocal_33[iLocal_54], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
iLocal_282[iLocal_54]=1;
iLocal_283[iLocal_54]=0;
}
}}
iLocal_54++;
}}
break;
}}

int func_211(int iParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1)){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}}}
return 0;
}


void func_212(){
iLocal_35=func_26(0);
iLocal_36=func_26(1);
iLocal_37=func_26(2);
if(func_34(iLocal_35, 0)){
if(!PED::IS_PED_INJURED(iLocal_35)){
if(!func_33(iLocal_35)){
if(!func_214()){
if(func_213(iLocal_35)){
if(func_32(iLocal_35, 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_35, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35, 1);
TASK::CLEAR_PED_TASKS(iLocal_35);
iLocal_348=0;
iLocal_351=0;
iLocal_354=0;
}}}}else{
if(iLocal_348==0){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_348=1;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(iLocal_35, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_35, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
iLocal_348=1;
}}}
if(iLocal_348==0){
if(func_214()){
iLocal_348=1;
}}
if(iLocal_345==1){
if((func_213(iLocal_35) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_35, 1)) && iLocal_348==0){
Local_92={
ENTITY::GET_ENTITY_COORDS(iLocal_35, 1) 
};
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1);
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(iLocal_351==0){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1)){
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_35, PED::GET_VEHICLE_PED_IS_IN(iLocal_35, 0), Local_90, 4, 30f, 786468, 3f, 15f, 0);
iLocal_354=0;
iLocal_351=1;
}}
}
elseif(ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_92, 200f, joaat("police3"), 32768))){
if(iLocal_354==0){
TASK::TASK_VEHICLE_MISSION(iLocal_35, PED::GET_VEHICLE_PED_IS_IN(iLocal_35, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_92, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
iLocal_351=0;
iLocal_354=1;
}
}
elseif(iLocal_351==0){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1)){
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_35, PED::GET_VEHICLE_PED_IS_IN(iLocal_35, 0), Local_90, 4, 30f, 786468, 3f, 15f, 0);
iLocal_354=0;
iLocal_351=1;
}
}}else{
iLocal_348=1;
}}
if(iLocal_348==1){
if(func_25(iLocal_35)){
iLocal_348=0;
}}}}}
if(func_34(iLocal_37, 0)){
if(!PED::IS_PED_INJURED(iLocal_37)){
if(!func_33(iLocal_37)){
if(!func_214()){
if(func_213(iLocal_37)){
if(func_32(iLocal_37, 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_37, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
TASK::CLEAR_PED_TASKS(iLocal_37);
iLocal_350=0;
iLocal_352=0;
iLocal_355=0;
}}}}else{
if(iLocal_350==0){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_350=1;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(iLocal_37, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
iLocal_350=1;
}}}
if(iLocal_350==0){
if(func_214()){
iLocal_350=1;
}}
if(iLocal_346==1){
if((func_213(iLocal_37) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, 1)) && iLocal_350==0){
Local_92={
ENTITY::GET_ENTITY_COORDS(iLocal_37, 1) 
};
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1);
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(iLocal_352==0){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1)){
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), Local_90, 4, 30f, 786468, 3f, 15f, 0);
iLocal_355=0;
iLocal_352=1;
}}
}
elseif(ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_92, 200f, joaat("police3"), 32768))){
if(iLocal_355==0){
TASK::TASK_VEHICLE_MISSION(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_92, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
iLocal_352=0;
iLocal_355=1;
}
}
elseif(iLocal_352==0){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1)){
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, PED::GET_VEHICLE_PED_IS_IN(iLocal_37, 0), Local_90, 4, 30f, 786468, 3f, 15f, 0);
iLocal_355=0;
iLocal_352=1;
}
}}else{
iLocal_350=1;
}}
if(iLocal_350==1){
if(func_25(iLocal_37)){
iLocal_350=0;
}}}}}
if(func_34(iLocal_36, 0)){
if(!PED::IS_PED_INJURED(iLocal_36)){
if(!func_33(iLocal_36)){
if(!func_214()){
if(func_213(iLocal_36)){
if(func_32(iLocal_36, 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_36, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, 1);
TASK::CLEAR_PED_TASKS(iLocal_36);
iLocal_349=0;
iLocal_353=0;
iLocal_356=0;
}}}}else{
if(iLocal_349==0){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_349=1;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(iLocal_36, 0)){
if(!PED::IS_PED_IN_VEHICLE(iLocal_36, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
iLocal_349=1;
}}}
if(iLocal_349==0){
if(func_214()){
iLocal_349=1;
}}
if(iLocal_347==1){
if((func_213(iLocal_36) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36, 1)) && iLocal_349==0){
Local_92={
ENTITY::GET_ENTITY_COORDS(iLocal_36, 1) 
};
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1);
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(iLocal_353==0){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1)){
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_36, PED::GET_VEHICLE_PED_IS_IN(iLocal_36, 0), Local_90, 4, 30f, 786468, 3f, 15f, 0);
iLocal_356=0;
iLocal_353=1;
}}
}
elseif(ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(Local_92, 200f, joaat("police3"), 32768))){
if(iLocal_356==0){
TASK::TASK_VEHICLE_MISSION(iLocal_36, PED::GET_VEHICLE_PED_IS_IN(iLocal_36, 0), VEHICLE::GET_CLOSEST_VEHICLE(Local_92, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
iLocal_353=0;
iLocal_356=1;
}
}
elseif(iLocal_353==0){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_92.f_0, Local_92.f_1, Local_90.f_0, Local_90.f_1)){
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_36, PED::GET_VEHICLE_PED_IS_IN(iLocal_36, 0), Local_90, 4, 30f, 786468, 3f, 15f, 0);
iLocal_356=0;
iLocal_353=1;
}
}}else{
iLocal_349=1;
}}
if(iLocal_349==1){
if(func_25(iLocal_36)){
iLocal_349=0;
}}}}}}

int func_213(int iParam0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1, 0)==iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
if((PED::IS_PED_IN_VEHICLE(iParam0, iLocal_31, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_31, -1, 0)==iParam0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_31, Local_90, 3f, 3f, 3f, 0, 1, 0)){
if(iParam0==iLocal_35){
iLocal_345=1;
}
if(iParam0==iLocal_37){
iLocal_346=1;
}
if(iParam0==iLocal_36){
iLocal_347=1;
}
return 1;
}}}}}}
if(iParam0==iLocal_35){
iLocal_345=0;
}
if(iParam0==iLocal_37){
iLocal_346=0;
}
if(iParam0==iLocal_36){
iLocal_347=0;
}
return 0;
}


bool func_214(){
return Global_23249;
}


void func_215(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_31)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_31, 0)){
func_218(3);
return;
}else{
if(func_217(&iLocal_31)){
func_218(2);
return;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_30)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, 0)){
func_218(1);
return;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, 0)){
if(!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_31)){
if((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_30) || func_216(iLocal_30)) || func_217(&iLocal_30)){
func_218(1);
return;
}}}}}}
if(iLocal_26==3 || iLocal_26==4){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_30)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_30, 0)){
if(func_191(iLocal_30, PLAYER::PLAYER_PED_ID(), 1) > 600f){
func_218(5);
return;
}}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_38)){
if(PED::IS_PED_INJURED(iLocal_38)){
func_218(6);
return;
}}}

int func_216(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}else{
return 1;
}
return 0;
}

int func_217(var uParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)){
if(((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000)){
return 1;
}}
return 0;
}


void func_218(int iParam0){
iLocal_28=iParam0;
if(iLocal_26 !=6){
iLocal_26=6;
iLocal_51=0;
}}


void func_219(int iParam0, int iParam1){
if(iParam0==146 || iParam0==-1){
return;
}
if(Global_113810.f_9088.f_99.f_58[iParam0]==iParam1){
return;
}
Global_113810.f_9088.f_99.f_58[iParam0]=iParam1;
}


void func_220(){
if(iLocal_26==5){
if(iLocal_358==0){
func_221(657);
}}}


void func_221(int iParam0){
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

int func_222(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_223(){
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 0);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), 0);
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_40, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_41, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_42, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_43, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_44, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_45, 0);
if(TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY")){
if(TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY")){
TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 0);
}}
PLAYER::SET_MAX_WANTED_LEVEL(5);
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_88)){
OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_88, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_89)){
OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_89, 0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_224(){
int iVar0;
if(SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse")){
start_new_script("buddyDeathResponse", 1424);
}
if(Global_113810.f_9088 || func_222(0)){
if(!func_225()){
iVar0=func_13();
if(iVar0 !=-1){
if(!func_7(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
return;
}}else{
func_12();
}}}

int func_225(){
if(((Global_100833==13 || Global_100833==10) || Global_100833==11) || Global_100833==12){
return 0;
}
return 1;
}