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
int iLocal_26=0;
float fLocal_27=0f;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
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
float fLocal_59=0f;
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
struct<14> Local_86={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_87=0;
bool bLocal_88=0;
bool bLocal_89=0;
int iLocal_90=0;
bool bLocal_91=0;
bool bLocal_92=0;
bool bLocal_93=0;
bool bLocal_94=0;
bool bLocal_95=0;
bool bLocal_96=0;
bool bLocal_97=0;
bool bLocal_98=0;
bool bLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
int iLocal_103=0;
int iLocal_104=0;
bool bLocal_105=0;
bool bLocal_106=0;
int iLocal_107=0;
bool bLocal_108=0;
bool bLocal_109=0;
int iLocal_110=0;
int iLocal_111=0;
int iLocal_112=0;
int iLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=16;
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
int iLocal_285=0;
var uLocal_286=0;
var uLocal_287=0;
int iLocal_288[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_289=0;
bool bLocal_290=0;
bool bLocal_291=0;
bool bLocal_292=0;
int iLocal_293=0;
int iLocal_294=0;
int iLocal_295=0;
int iLocal_296=0;
int iLocal_297=0;
int iLocal_298=0;
float fLocal_299=0f;
float fLocal_300=0f;
int iLocal_301=0;
int iLocal_302=0;
int iLocal_303=0;
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
int iLocal_320=0;
var uLocal_321=0;
var uLocal_322=0;
int iLocal_323=0;
int iLocal_324=0;
int iLocal_325=0;
int iLocal_326[4]={
0, 0, 0, 0 
};
int iLocal_327=0;
int iLocal_328=0;
int iLocal_329=0;
int iLocal_330=0;
int iLocal_331[12]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<12> Local_332={
5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 
};
struct<70> Local_333={
5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=0;
var uLocal_338=0;
var uLocal_339=0;
struct<4> Local_340[32];
var uLocal_341=0;
var uLocal_342=0;
int iLocal_343=0;
char* sLocal_344=NULL;
int iLocal_345=0;
int iLocal_346=0;
var uLocal_347=0;
var uLocal_348=0;
struct<21> Local_349={
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
iLocal_26=3;
fLocal_27=0f;
fLocal_31=-0.0375f;
fLocal_32=0.17f;
iLocal_37=1;
iLocal_38=65;
iLocal_39=49;
iLocal_40=64;
fLocal_59=((0.05f + 0.275f) - 0.01f);
iLocal_104=1;
bLocal_106=true;
bLocal_108=true;
iLocal_113=-1;
bLocal_291=true;
bLocal_292=true;
iLocal_295=-1;
iLocal_296=-1;
iLocal_320=-1;
iLocal_323=-1;
if(!func_558(ScriptParam_349)){
func_554();
}
iLocal_331[0]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-891.3f, 807.9f, 188.1f));
iLocal_331[1]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-276.5f, -206.3f, 38.4f));
iLocal_331[2]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1485.5f, -644.5f, 30.1f));
iLocal_331[3]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1746.3f, -939.5f, 7.7f));
iLocal_331[4]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-2106.4f, -345.3f, 13f));
iLocal_331[5]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1520f, 74.4f, 61.3f));
iLocal_331[6]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1333f, -286f, 40.3f));
iLocal_331[7]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1178.1f, 54.8f, 53.9f));
iLocal_331[8]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1298.7f, -359.4f, 36.7f));
iLocal_331[9]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-355.2f, 147.5f, 75.8f));
iLocal_331[10]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-982.1f, -1064.7f, 2.2f));
iLocal_331[11]=ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1313.1f, -1560.2f, 4.3f));
while (true){
func_553();
bLocal_89=false;
bLocal_91=false;
bLocal_94=false;
bLocal_97=false;
bLocal_99=false;
Global_2794162.f_1787=0;
if(func_546() || func_545()){
func_554();
}
if(func_537()){
if(!func_536()){
if(!func_535()){
if(func_533()){
if(!iLocal_87){
func_529();
func_528(&Local_332, 5);
func_527();
bLocal_108=true;
bLocal_109=true;
if(MISC::IS_BIT_SET(uLocal_341, 1)){
MISC::CLEAR_BIT(&uLocal_341, true);
}
iLocal_87=1;
iLocal_323=-999;
}}}}elseif(!func_535()){
if(!bLocal_109){
if(!func_526(&uLocal_286)){
func_525(&uLocal_286, 0, 0);
}elseif(func_524(&uLocal_286, 100, 0)){
if(!MISC::IS_BIT_SET(uLocal_341, 1)){
if(func_533()){
func_514(&Local_332, 5, Global_2359296[func_523() /*5568*/].f_681.f_37);
bLocal_108=false;
bLocal_109=true;
iLocal_87=1;
iLocal_323=-999;
}
}}}}
func_417();
func_413();
func_397();
func_390();
func_280();
func_181();
}
func_177();
func_143();
func_77();
func_74();
if(!iLocal_111){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f){
ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
iLocal_111=1;
}}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_1();
}}}


void func_1(){
int iVar0;
int iVar1;
if(!bLocal_106){}else{
if(iLocal_107 >=32){
iLocal_107=0;
MISC::CLEAR_BIT(&uLocal_341, 10);
MISC::CLEAR_BIT(&(Local_333.f_23), 7);
MISC::CLEAR_BIT(&uLocal_341, 11);
MISC::CLEAR_BIT(&uLocal_341, 23);
if(MISC::IS_BIT_SET(Local_333.f_23, 0)){
MISC::SET_BIT(&(Local_333.f_23), true);
MISC::CLEAR_BIT(&(Local_333.f_23), 3);
}}
iVar0=iLocal_107;
if(Local_340[iVar0 /*4*/].f_1==2){
iVar1=0;
while (iVar1 < 5){
if(!Local_333[iVar1]==-1){
if(!Local_333.f_6[iVar1]){
if(Local_333[iVar1]==Local_340[iVar0 /*4*/]){
if(Local_333[iVar1]==Local_333.f_28){
func_73();
}
Local_333.f_33=0;
Local_333.f_32++;
}}}
iVar1++;
}}
if(MISC::IS_BIT_SET(Local_333.f_23, 0)){
if(!MISC::IS_BIT_SET(Local_333.f_23, 7)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(Local_340[iVar0 /*4*/].f_3 > 0 || func_72(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 6)){
if(Local_340[iVar0 /*4*/].f_3 < 3){
MISC::SET_BIT(&(Local_333.f_23), 7);
}}}}}
if(MISC::IS_BIT_SET(Local_333.f_23, 0)){
if(!MISC::IS_BIT_SET(uLocal_341, 11)){
if(MISC::IS_BIT_SET(Local_340[iVar0 /*4*/].f_2, 2)){
MISC::SET_BIT(&uLocal_341, 11);
}}
if(!MISC::IS_BIT_SET(uLocal_341, 21)){
if(!MISC::IS_BIT_SET(uLocal_341, 3)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(MISC::IS_BIT_SET(Local_340[iVar0 /*4*/].f_2, 3)){
MISC::SET_BIT(&uLocal_341, 21);
}}}}}
iLocal_107++;
if(iLocal_107 >=32){
MISC::SET_BIT(&uLocal_341, 10);
if(MISC::IS_BIT_SET(Local_333.f_23, 7) || MISC::IS_BIT_SET(uLocal_341, 23)){
MISC::CLEAR_BIT(&(Local_333.f_23), true);
}
if(MISC::IS_BIT_SET(uLocal_341, 11)){
MISC::SET_BIT(&(Local_333.f_23), 3);
}
if(MISC::IS_BIT_SET(uLocal_341, 21)){
MISC::SET_BIT(&(Local_333.f_23), 6);
}}}
if(func_71()){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_333.f_29) > 180000){
func_70();
}}
switch (Local_333.f_20){
case 0:
func_67();
Local_333.f_32++;
Local_333.f_20=1;
func_66();
break;
case 1:
if(func_65()){
uLocal_319=NETWORK::GET_NETWORK_TIME();
Local_333.f_20=2;
}elseif(Local_333.f_28==-1){
func_73();
}
break;
case 2:
if(!Local_333.f_17 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_319) > Global_262145.f_12116){
Local_333.f_20=0;
}
break;
case 3:
break;
}
func_2();
}


void func_2(){
struct<3> Var0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
switch (Local_333.f_26){
case 0:
if(!MISC::IS_BIT_SET(Local_333.f_23, 0)){
if(bLocal_291){
if(bLocal_292){
if(Global_2794162.f_1760){
MISC::CLEAR_BIT(&(Local_333.f_23), 2);
MISC::CLEAR_BIT(&(Local_333.f_23), 6);
MISC::CLEAR_BIT(&uLocal_341, 21);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
Local_333.f_34=0;
MISC::SET_BIT(&(Local_333.f_23), false);
Global_2794162.f_1760=0;
}}elseif(Local_333.f_27==-15){
MISC::CLEAR_BIT(&(Local_333.f_23), 2);
MISC::CLEAR_BIT(&(Local_333.f_23), 6);
MISC::CLEAR_BIT(&uLocal_341, 21);
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
Local_333.f_34=0;
iVar2=func_64();
func_50(&(Local_333.f_27), func_63(iVar2), func_62(iVar2), func_61(iVar2), func_60(iVar2), func_59(iVar2), func_57(iVar2));
func_49(&(Local_333.f_27), 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 60), MISC::GET_RANDOM_INT_IN_RANGE(0, 8), 1, 0, 0);
}elseif(!func_48(6)){
if(!func_526(&uLocal_308)){
func_525(&uLocal_308, 0, 0);
}
elseif(func_524(&uLocal_308, 10000, 0)){
func_47(&uLocal_308);
if(func_43(Local_333.f_27)){
MISC::SET_BIT(&(Local_333.f_23), false);
}
}}}}elseif(Local_333.f_67==0){
if(func_37(1, 1, 1)){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_333.f_24)){
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_333.f_24);
}
Local_333.f_24=-1;
iLocal_294=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
iVar3=func_34();
if(iVar3 !=0){
Local_333.f_67=iVar3;
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
Local_333.f_34=1;
}}}elseif(NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)){
if(func_33(Local_333.f_67)){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_333.f_22)){
if(func_22(&Var0, &uVar1)){
if(func_19(&(Local_333.f_22), Local_333.f_67, Var0, uVar1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_333.f_22), "MPBitset")){
iVar4=DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_333.f_22), "MPBitset");
}
MISC::SET_BIT(&iVar4, 5);
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_333.f_22), "MPBitset", iVar4);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_333.f_22), "MPBitset")){
iVar5=DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_333.f_22), "MPBitset");
}
MISC::SET_BIT(&iVar5, 10);
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_333.f_22), "MPBitset", iVar5);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_333.f_22), "Not_Allow_As_Saved_Veh", 1);
}
MISC::SET_BIT(&(Local_333.f_23), false);
MISC::CLEAR_BIT(&(Local_333.f_23), 2);
MISC::CLEAR_BIT(&(Local_333.f_23), 4);
MISC::CLEAR_BIT(&(Local_333.f_23), 3);
MISC::CLEAR_BIT(&uLocal_341, 11);
MISC::CLEAR_BIT(&(Local_333.f_23), 6);
MISC::SET_BIT(&uLocal_341, 23);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_333.f_67);
Local_333.f_26=1;
func_47(&(Local_333.f_30));
func_525(&(Local_333.f_30), 0, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_333.f_22), 7);
VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(NETWORK::NET_TO_VEH(Local_333.f_22), 1);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_333.f_67, 1);
NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(Local_333.f_22, 1);
}
}}}}
break;
case 1:
if(!MISC::IS_BIT_SET(Local_333.f_23, 2)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_333.f_22), 0)){
Local_86.f_2=-1117941225;
func_17(Local_86, func_18(1));
MISC::SET_BIT(&(Local_333.f_23), 2);
}}}
if(MISC::IS_BIT_SET(uLocal_341, 3) || (MISC::IS_BIT_SET(uLocal_341, 10) && MISC::IS_BIT_SET(Local_333.f_23, 1))){
if(!MISC::IS_BIT_SET(uLocal_341, 3)){
if(!MISC::IS_BIT_SET(Local_333.f_23, 2)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_333.f_22), 0)){
Local_86.f_2=-1117941225;
func_17(Local_86, func_18(1));
MISC::SET_BIT(&(Local_333.f_23), 2);
}
}}}
Local_333.f_26=2;
}
if(func_16(NETWORK::NET_TO_VEH(Local_333.f_22))){
Local_333.f_26=2;
Local_86.f_2=-267741801;
func_17(Local_86, func_18(1));
}
if(!MISC::IS_BIT_SET(Local_333.f_23, 4)){
if(func_524(&(Local_333.f_30), 360000, 0)){
MISC::SET_BIT(&(Local_333.f_23), 4);
func_47(&(Local_333.f_30));
func_525(&(Local_333.f_30), 0, 0);
}}elseif(MISC::IS_BIT_SET(uLocal_341, 10)){
if(!MISC::IS_BIT_SET(Local_333.f_23, 3)){
if(func_526(&(Local_333.f_30))){
if(func_524(&(Local_333.f_30), 120000, 0)){
Local_333.f_26=2;
Local_86.f_2=-267741801;
func_17(Local_86, func_18(1));
}}else{
func_525(&(Local_333.f_30), 0, 0);
}}elseif(func_526(&(Local_333.f_30))){
func_47(&(Local_333.f_30));
}}
if(MISC::IS_BIT_SET(Local_333.f_23, 6)){
if(!MISC::IS_BIT_SET(uLocal_341, 3)){
if(Local_333.f_26==1){
Local_333.f_26=2;
}}}
if(func_12(6)){
if(Local_333.f_26==1){
Local_333.f_26=2;
}}
break;
case 2:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_11(Local_333.f_22)){
func_10(&(Local_333.f_22));
Local_333.f_26=3;
}}else{
Local_333.f_26=3;
}
break;
case 3:
if(MISC::IS_BIT_SET(uLocal_341, 10)){
if(MISC::IS_BIT_SET(Local_333.f_23, 1)){
Local_333.f_26=0;
MISC::CLEAR_BIT(&(Local_333.f_23), false);
Local_333.f_27=-15;
if(Local_333.f_67 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_333.f_67, 0);
}
Local_333.f_67=0;
if(bLocal_292){
func_7(func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_LAUNCHER", -1, 0)), 0);
}}}
break;
}
func_3();
}


void func_3(){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (Local_333.f_69){
case 0:
if(MISC::IS_BIT_SET(Local_333.f_23, 8)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(!func_6()){
if(ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_VEH(Local_333.f_22))){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_333.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0)){
if(!MISC::IS_BIT_SET(Local_333.f_23, 9)){
MISC::SET_BIT(&(Local_333.f_23), 9);
}}}
}
elseif(MISC::IS_BIT_SET(Local_333.f_23, 9)){
MISC::CLEAR_BIT(&(Local_333.f_23), 9);
}}}
break;
}}
if(MISC::IS_BIT_SET(Local_333.f_23, 9)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_333.f_22)){
ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_VEH(Local_333.f_22), true, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_333.f_22), 1);
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_333.f_22), false);
NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_333.f_22), 1, 1);
MISC::CLEAR_BIT(&(Local_333.f_23), 9);
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_333.f_22);
}}else{
MISC::CLEAR_BIT(&(Local_333.f_23), 9);
}}else{
MISC::CLEAR_BIT(&(Local_333.f_23), 9);
}}}

int func_4(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_5(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_5(int iParam0){
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

int func_6(){
int iVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_333.f_22), -1, 0);
if(iVar0 !=0){
return 1;
}}}
return 0;
}


void func_7(int iParam0, int iParam1){
struct<3> Var0;
Var0.f_0=-390379542;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iParam0);
}}

int func_8(bool bParam0){
var uVar0;
if(func_9(bParam0)){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_9(int iParam0){
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


void func_10(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}

int func_11(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
}
return 0;
}


bool func_12(int iParam0){
return !func_13(iParam0);
}

int func_13(int iParam0){
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
if(func_72(PLAYER::PLAYER_ID(), 7)){
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
if(func_72(PLAYER::PLAYER_ID(), 7)){
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
if(func_72(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 15:
if(func_14(4)){
return 0;
}
if(func_72(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 17:
if(func_14(4)){
return 0;
}
if(func_72(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 16:
if(func_14(4)){
return 0;
}
if(func_72(PLAYER::PLAYER_ID(), 7)){
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
if(func_14(4)){
return 0;
}
if(func_72(PLAYER::PLAYER_ID(), 7)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1)){
return 0;
}
break;
case 19:
if(func_14(4)){
return 0;
}
if(func_72(PLAYER::PLAYER_ID(), 7)){
return 0;
}
break;
case 20:
if(func_14(4)){
return 0;
}
if(func_72(PLAYER::PLAYER_ID(), 7)){
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

int func_14(bool bParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 32){
if(func_15(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1)){
if(MISC::IS_BIT_SET(Global_2657704[iVar0 /*463*/].f_218, bParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_15(int iParam0, bool bParam1, bool bParam2){
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

int func_16(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1")){
return 1;
}}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec")){
return 1;
}}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "bombowner")){
return 1;
}}}
return 0;
}


void func_17(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=-642704387;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_18(int iParam0){
var uVar0;
int iVar1;
bool bVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_15(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, bVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_19(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
func_20(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_20(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_21(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_21(int iParam0, struct<3> Param1, int iParam2){
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

int func_22(var uParam0, var uParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(!func_32(*uParam0, 0f, 0f, 0f, 0)){
return 1;
}
switch (iLocal_294){
case 0:
Var0={
-810.8889f, -126.9419f, 33f 
};
Var1={
-807.2521f, -116.098f, 38f 
};
Var2={
-809.0935f, -121.9038f, 36.504f 
};
fVar3=240.8011f;
break;
case 1:
Var0={
-804.004f, -1317.293f, 0.0005f 
};
Var1={
-797.881f, -1310.998f, 7.0005f 
};
Var2={
-801.6295f, -1313.865f, 4.0005f 
};
fVar3=350.3062f;
break;
case 2:
Var0={
-194.8607f, -1955.005f, 25.6205f 
};
Var1={
-189.4078f, -1945.248f, 28.6205f 
};
Var2={
-191.5592f, -1950.239f, 26.6205f 
};
fVar3=288.8187f;
break;
case 3:
Var0={
-2966.875f, 459.3981f, 13.4644f 
};
Var1={
-2961.456f, 466.0484f, 16.1725f 
};
Var2={
-2963.887f, 462.7986f, 14.2156f 
};
fVar3=30.4415f;
break;
case 4:
Var0={
-420.6335f, 1217.742f, 322.7591f 
};
Var1={
-411.9892f, 1220.346f, 326.6421f 
};
Var2={
-416.0102f, 1219.771f, 324.6421f 
};
fVar3=230.4509f;
break;
case 5:
Var0={
-1634.708f, -890.849f, 6.97f 
};
Var1={
-1633.903f, -879.869f, 9.1264f 
};
Var2={
-1634.006f, -885.3531f, 8.0518f 
};
fVar3=321.31f;
break;
case 6:
Var0={
-338.4312f, -947.4233f, 28.0788f 
};
Var1={
-331.5926f, -944.408f, 32.0788f 
};
Var2={
-334.8547f, -945.2789f, 30.0788f 
};
fVar3=69.0442f;
break;
case 7:
Var0={
1093.925f, 245.6548f, 77.9908f 
};
Var1={
1094.243f, 255.0715f, 82.8556f 
};
Var2={
1093.686f, 250.4772f, 79.8556f 
};
fVar3=328.5602f;
break;
case 8:
Var0={
-1407.823f, 58.1796f, 50.8018f 
};
Var1={
-1400.19f, 63.9074f, 54.3222f 
};
Var2={
-1404.459f, 62.1459f, 52.0258f 
};
fVar3=241.2814f;
break;
case 9:
Var0={
-1230.324f, -1656.814f, 2.0412f 
};
Var1={
-1226.429f, -1648.143f, 4.1986f 
};
Var2={
-1228.901f, -1652.397f, 3.1204f 
};
fVar3=305.0972f;
break;
}
if(!func_32(Var0, 0f, 0f, 0f, 0)){
if(iLocal_294 < 10){
if(Local_333.f_24==-1){
Local_333.f_24=NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var1);
}elseif(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_333.f_24)){
if(NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Local_333.f_24)){
if(!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_333.f_24)){
if(!func_23(Var2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0)){
*uParam0={
Var2 
};
*uParam1=fVar3;
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_333.f_24);
Local_333.f_24=-1;
return 1;
}
else{
iLocal_294++;
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_333.f_24);
Local_333.f_24=-1;
}}else{
iLocal_294++;
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_333.f_24);
Local_333.f_24=-1;
}}}}else{
iLocal_294=0;
}}
return 0;
}

int func_23(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_15(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_28(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_15(iVar1, 1, 1)){
if(!func_25(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && iVar1 !=PLAYER::PLAYER_ID())){
if((func_24(iVar1) || !bParam8) && !Global_2657704[iVar1 /*463*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(iVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_28(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_28(iVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_24(int iParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255){
return 1;
}
return 0;
}


bool func_25(int iParam0, int iParam1){
bool bVar0;
if(!func_9(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_26(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_26(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_27();
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

int func_27(){
return Global_1574918;
}


Vector3 func__28(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_31() && Global_1853988[iVar0 /*867*/].f_834) && !func_30(Global_1853988[iVar0 /*867*/].f_835)){
return Global_1853988[iVar0 /*867*/].f_835;
}
return func_29(iParam0);
}


Vector3 func__29(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_30(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


var func__31(){
return Global_2683883.f_19;
}


bool func_32(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_33(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_34(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
if(Global_262145.f_2345 !=0){
iVar1=Global_262145.f_2345;
if(STREAMING::IS_MODEL_IN_CDIMAGE(iVar1)){
if(STREAMING::IS_MODEL_A_VEHICLE(iVar1)){
iVar0=iVar1;
}}}
if(iVar0==0){
iVar2=func_36(&Local_333);
iVar0=func_35(iVar2);
}
return iVar0;
}

int func_35(int iParam0){
switch (iParam0){
case 0:
return joaat("zion");
case 1:
return joaat("serrano");
case 2:
return joaat("jackal");
case 3:
return joaat("schafter2");
case 4:
return joaat("dubsta");
case 5:
return joaat("f620");
case 6:
return joaat("schwarzer");
case 7:
return joaat("rocoto");
case 8:
return joaat("sentinel2");
case 9:
return joaat("felon2");
case 10:
return joaat("comet2");
case 11:
return joaat("banshee");
case 12:
return joaat("surano");
case 13:
return joaat("coquette");
case 14:
return joaat("carbonizzare");
case 15:
return joaat("exemplar");
case 16:
return joaat("feltzer2");
case 17:
return joaat("bullet");
case 18:
return joaat("superd");
case 19:
return joaat("infernus");
default:
}
return 0;
}

int func_36(var uParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
iVar1=0;
while (iVar1 < 5){
iVar2=(iVar1 + iVar0);
if(iVar2 >=5){
iVar2=(iVar2 - 5);
}
if(!(*uParam0)[iVar2]==-1){
if(uParam0->f_6[iVar2]==0){
return (*uParam0)[iVar2];
}}
iVar1++;
}
return -1;
}


bool func_37(int iParam0, bool bParam1, bool bParam2){
return func_38(1, iParam0, 1, bParam1, bParam2);
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(Global_1666708, 0)){
return 0;
}
if((bParam2 && !bParam3) && iParam1 <=(func_42(iParam0) - func_41(iParam0, 0))){
return 1;
}else{
if(bParam3){
if(bParam2){
iVar0=(iParam1 - func_41(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_42(iParam0) - func_40(iParam0));
}else{
if(bParam2){
iVar0=(iParam1 - func_41(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_42(iParam0) - func_41(iParam0, 1));
}
if(!bParam4 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=3){
iVar1=(iVar1 - func_39(iParam0));
}
if(iVar0 < iVar1){
return 1;
}}
return 0;
}

int func_39(int iParam0){
switch (iParam0){
case 0:
return 10;
break;
case 1:
return 10;
break;
case 2:
return 10;
break;
}
return 0;
}

int func_40(int iParam0){
switch (iParam0){
case 0:
return Global_1666708.f_1;
break;
case 1:
return Global_1666708.f_2;
break;
case 2:
return Global_1666708.f_3;
break;
}
return 0;
}

int func_41(int iParam0, bool bParam1){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
switch (iParam0){
case 0:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_219;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
}
break;
case 1:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_220;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
}
break;
case 2:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_221;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
}
break;
}
return 0;
}

int func_42(int iParam0){
switch (iParam0){
case 0:
return Global_1666716;
break;
case 1:
return Global_1666717;
break;
case 2:
return Global_1666718;
break;
}
return 0;
}


bool func_43(int iParam0){
return func_44(func_64(), iParam0);
}

int func_44(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_45(iParam1) || !func_45(iParam0)){
return 1;
}
iVar0=func_57(iParam0);
iVar1=func_57(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_59(iParam0);
iVar1=func_59(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_60(iParam0);
iVar1=func_60(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_61(iParam0);
iVar1=func_61(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_62(iParam0);
iVar1=func_62(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_63(iParam0);
iVar1=func_63(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_45(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_63(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_62(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_61(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_57(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_59(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_60(iParam0);
if(iVar5 < 1 || iVar5 > func_46(iVar4, iVar3)){
return 0;
}
return 1;
}

int func_46(int iParam0, int iParam1){
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


void func_47(var uParam0){
uParam0->f_1=0;
}


bool func_48(int iParam0){
return !func_13(iParam0);
}


void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_57(*uParam0);
iVar1=func_59(*uParam0);
iVar2=func_60(*uParam0);
iVar3=func_61(*uParam0);
iVar4=func_62(*uParam0);
iVar5=func_63(*uParam0);
if(((((iParam6==0 && iParam5==0) && iParam4==0) && iParam3==0) && iParam2==0) && iParam1==0){
return;
}
if(iParam1 < 0){
return;
}
if(iParam2 < 0){
return;
}
if(iParam3 < 0){
return;
}
if(iParam4 < 0){
return;
}
if(iParam5 < 0){
return;
}
if(iParam6 < 0){
return;
}
iVar5=(iVar5 + iParam1);
while (iVar5 >=60){
iParam2++;
iVar5=(iVar5 - 60);
}
iVar4=(iVar4 + iParam2);
while (iVar4 >=60){
iParam3++;
iVar4=(iVar4 - 60);
}
iVar3=(iVar3 + iParam3);
while (iVar3 >=24){
iParam4++;
iVar3=(iVar3 - 24);
}
iVar2=(iVar2 + iParam4);
iVar6=func_46(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_46(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_50(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_50(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_56(uParam0, iParam1);
func_55(uParam0, iParam2);
func_54(uParam0, iParam3);
func_53(uParam0, iParam5);
func_52(uParam0, iParam4);
func_51(uParam0, iParam6);
}


void func_51(var uParam0, int iParam1){
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


void func_52(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_59(*uParam0);
iVar1=func_57(*uParam0);
if(iParam1 < 1 || iParam1 > func_46(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}


void func_53(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_54(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_55(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_56(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_57(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_58(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_58(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_59(int iParam0){
return iParam0 & 15;
}

int func_60(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_61(int iParam0){
return shift_right(iParam0, 9) & 31;
}

int func_62(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_63(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_64(){
var uVar0;
func_56(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_55(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_54(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_52(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_53(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_51(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}

int func_65(){
int iVar0;
iVar0=0;
while (iVar0 < 5){
if(!Local_333.f_6[iVar0]){
return 0;
}
iVar0++;
}
return 1;
}


void func_66(){
int iVar0;
if(!MISC::IS_BIT_SET(Local_333.f_23, 5)){
iVar0=0;
while (iVar0 < 10){
Local_333.f_35[iVar0]=-1;
iVar0++;
}
MISC::SET_BIT(&(Local_333.f_23), 5);
}}


void func_67(){
int iVar0;
func_528(&Local_333, 5);
iVar0=0;
while (iVar0 < 4){
Local_333.f_12[iVar0]=func_68();
iVar0++;
}
Local_333.f_33=1;
}

int func_68(){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
while (func_69(iVar0)){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
}
return iVar0;
}

int func_69(int iParam0){
int iVar0;
if(!iParam0==-1){
iVar0=0;
while (iVar0 < 4){
if(Local_333.f_12[iVar0]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}


void func_70(){
int iVar0;
iVar0=func_36(&Local_333);
if(iVar0 !=Local_333.f_28){
Local_333.f_28=iVar0;
Local_333.f_29=NETWORK::GET_NETWORK_TIME();
}}

int func_71(){
if(Local_333.f_20 > 0){
if(Local_333[0] !=Local_333[1]){
return 1;
}}
return 0;
}


bool func_72(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}


void func_73(){
Local_333.f_29=0;
}


void func_74(){
int iVar0;
if(func_71()){
if(Global_2794162.f_4488==0 || MISC::IS_BIT_SET(Global_2794162.f_4489, 0)){
if(!func_526(&uLocal_314) || func_524(&uLocal_314, 2000, 0)){
iVar0=func_36(&Local_332);
if(iVar0 > -1){
Global_2794162.f_4488=func_35(iVar0);
func_47(&uLocal_312);
func_525(&uLocal_312, 0, 0);
if(MISC::IS_BIT_SET(Global_2794162.f_4489, 0)){
MISC::CLEAR_BIT(&(Global_2794162.f_4489), false);
}}else{
func_47(&uLocal_314);
func_525(&uLocal_314, 0, 0);
}}}elseif(Global_2794162.f_4488 !=0){
if(func_524(&uLocal_312, 20000, 0)){
if(!func_75(&Local_332, Global_2794162.f_4488)){
Global_2794162.f_4488=0;
}
func_47(&uLocal_312);
func_525(&uLocal_312, 0, 0);
}}}}

int func_75(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_76(iParam1);
if(!iVar0==-1){
iVar1=0;
while (iVar1 < 5){
if(!(*uParam0)[iVar1]==-1){
if(!uParam0->f_6[iVar1]){
if((*uParam0)[iVar1]==iVar0){
return 1;
}}}
iVar1++;
}}
return 0;
}

int func_76(int iParam0){
switch (iParam0){
case joaat("zion"):
return 0;
case joaat("serrano"):
return 1;
case joaat("jackal"):
return 2;
case joaat("schafter2"):
return 3;
case joaat("dubsta"):
return 4;
case joaat("f620"):
return 5;
case joaat("schwarzer"):
return 6;
case joaat("rocoto"):
return 7;
case joaat("sentinel2"):
return 8;
case joaat("felon2"):
return 9;
case joaat("comet2"):
return 10;
case joaat("banshee"):
return 11;
case joaat("surano"):
return 12;
case joaat("coquette"):
return 13;
case joaat("carbonizzare"):
return 14;
case joaat("exemplar"):
return 15;
case joaat("feltzer2"):
return 16;
case joaat("bullet"):
return 17;
case joaat("superd"):
return 18;
case joaat("infernus"):
return 19;
default:
}
return -1;
}


void func_77(){
int iVar0;
if(((((bLocal_93 || bLocal_94) || bLocal_95) || bLocal_97) || bLocal_96) || bLocal_98){
if(((((Global_2794162.f_28.f_41 || func_140(PLAYER::PLAYER_ID(), 1, 0)) || func_139(PLAYER::PLAYER_ID())) || !func_137()) || func_125()) || func_120()){
bLocal_93=false;
bLocal_95=false;
bLocal_94=false;
bLocal_97=false;
bLocal_96=false;
func_119();
}}
if((func_118("FM_CTUT_RSP") || func_118("FM_CTUT_REP")) || func_118("FM_CTUT_LLS")){
if(!func_117() || func_120()){
func_119();
}}
if(bLocal_98){
if(!func_118("FM_IHELP_LCP")){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
if(func_100()){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(func_99()){
func_93("FM_IHELP_LCP", 0);
}}}}}}elseif(!MISC::IS_BIT_SET(uLocal_341, 18)){
if(func_118("FM_IHELP_LCP")){
func_86("FM_IHELP_LCP");
}}
if(bLocal_93){
if(!func_118("FM_CTUT_MOD")){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
if(func_100()){
if(MISC::IS_BIT_SET(uLocal_318, 2)){
if(func_99()){
func_93("FM_CTUT_MOD", 0);
}}}}}}elseif(!MISC::IS_BIT_SET(uLocal_341, 18)){
if(func_118("FM_CTUT_MOD")){
func_86("FM_CTUT_MOD");
}}
if(bLocal_95){
if(!func_118("FM_CTUT_RSP")){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
if(CAM::IS_SCREEN_FADED_IN()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_140(PLAYER::PLAYER_ID(), 1, 0)){
if(func_99()){
if(func_117()){
func_93("FM_CTUT_RSP", 0);
}}
}}}}}}elseif(!MISC::IS_BIT_SET(uLocal_341, 18)){
if(func_118("FM_CTUT_RSP")){
func_86("FM_CTUT_RSP");
}}
if(bLocal_96){
if(!func_118("FM_CTUT_RSP")){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
if(CAM::IS_SCREEN_FADED_IN()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_140(PLAYER::PLAYER_ID(), 1, 0)){
if(func_99()){
if(func_117()){
func_93("FM_CTUT_REP", 0);
}}
}}}}}}elseif(!MISC::IS_BIT_SET(uLocal_341, 18)){
if(func_118("FM_CTUT_REP")){
func_86("FM_CTUT_REP");
}}
if(bLocal_97){
if(!func_118("FM_CTUT_LLS")){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
if(func_100() || func_78()){
if(func_99()){
if(func_117()){
}}}}}}elseif(!MISC::IS_BIT_SET(uLocal_341, 18)){
if(func_118("FM_CTUT_LLS")){
func_86("FM_CTUT_LLS");
}}
if(bLocal_94){
if(!func_118("FM_IMP_SIM")){
if(!HUD::IS_MESSAGE_BEING_DISPLAYED()){
if(func_100() || func_78()){
if(MISC::IS_BIT_SET(uLocal_318, 3)){
if(!iLocal_100){
if(func_99()){
func_93("FM_IMP_SIM", 0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iLocal_329=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}}}
}
elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(iVar0 !=iLocal_329){
iLocal_100=0;
func_47(&uLocal_316);
}}
}}}}}elseif(!func_526(&uLocal_316)){
func_525(&uLocal_316, 0, 0);
}elseif(func_524(&uLocal_316, 20000, 0)){
func_119();
iLocal_100=1;
}}elseif(!MISC::IS_BIT_SET(uLocal_341, 18)){
if(func_118("FM_IMP_SIM")){
func_86("FM_IMP_SIM");
}}}


bool func_78(){
return (((((func_79(39) || func_79(40)) || func_79(41)) || func_79(42)) || func_79(43)) || func_79(44));
}

int func_79(int iParam0){
return func_80(iParam0, 6, 1);
}

int func_80(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_85()==0){
return MISC::IS_BIT_SET(func_81(func_84(iParam0), -1), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);
}
return 0;
}

int func_81(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_82(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__82(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_83(uParam1));
}

int func_83(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_27();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_84(int iParam0){
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

int func_85(){
return Global_32283;
}


void func_86(char* sParam0){
bool bVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
bVar0=false;
if(func_92()){
if(Global_1574757==11){
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63){
return;
}
bVar0=MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}else{
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
bVar0=MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}}
if(!bVar0){
return;
}
func_87();
}


void func_87(){
func_89();
func_88(0);
}


void func_88(bool bParam0){
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


void func_89(){
if(!func_91()){}
if(func_92()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_90();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_90(){
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

int func_91(){
if(!func_92()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_90();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_92(){
if(Global_1574757==20){
return 0;
}
return 1;
}


void func_93(char* sParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
if(func_97(sParam0)){
return;
}
func_87();
Global_1574757=0;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
func_96();
func_95(bParam1);
func_94();
}


void func_94(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_95(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_96(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


bool func_97(char* sParam0){
if(!func_92()){
return 0;
}
if(Global_1574757==11){
return func_98(sParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_98(char* sParam0){
if(!func_92()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}


bool func_99(){
bool bVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22))){
}}}}
if(!MISC::IS_BIT_SET(uLocal_342, 0)){
if(!MISC::IS_BIT_SET(uLocal_342, 1)){
bVar0=true;
}elseif(!MISC::IS_BIT_SET(uLocal_342, 2)){
bVar0=true;
}elseif(!MISC::IS_BIT_SET(uLocal_342, 3)){
bVar0=true;
}
if(!bVar0){
MISC::SET_BIT(&uLocal_342, false);
}}
return bVar0;
}

int func_100(){
if((((((((((((((((((!func_15(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_116(8, -1)) || func_116(15, -1)) || func_115()) || func_116(3, -1)) || func_140(PLAYER::PLAYER_ID(), 1, 0)) || func_114()) || func_117()) || func_113()) || func_112()) || func_110()) || func_109()) || HUD::IS_MESSAGE_BEING_DISPLAYED()) || func_108() > 0) || !func_137()) || func_101()) || func_120()){
return 0;
}
return 1;
}

int func_101(){
if(func_72(PLAYER::PLAYER_ID(), 8)){
return 1;
}
if(func_72(PLAYER::PLAYER_ID(), 10)){
return 1;
}
if(func_72(PLAYER::PLAYER_ID(), 12)){
return 1;
}
if(func_72(PLAYER::PLAYER_ID(), 14)){
return 1;
}
if(func_72(PLAYER::PLAYER_ID(), 13)){
return 1;
}
if(func_107()){
return 1;
}
if(func_106()){
return 1;
}
if(!func_105() && !func_104()){
if(!func_103()){
if(!func_102()){
return 1;
}}}
return 0;
}

int func_102(){
int iVar0;
if(MISC::IS_BIT_SET(Global_2794162.f_1831, 7)){
return 1;
}
iVar0=func_81(1304, -1);
if(MISC::IS_BIT_SET(iVar0, 6)){
MISC::SET_BIT(&(Global_2794162.f_1831), 7);
return 1;
}
if(func_105()){
return 1;
}
if(func_104()){
return 1;
}
return 0;
}


bool func_103(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 2);
}


bool func_104(){
return Global_1575051;
}


bool func_105(){
return Global_1575053;
}

int func_106(){
if(MISC::IS_BIT_SET(Global_2794162.f_1831, 28) && !MISC::IS_BIT_SET(Global_2794162.f_1831, 29)){
return 1;
}
return 0;
}


bool func_107(){
return MISC::IS_BIT_SET(Global_2794162.f_1832, 3);
}

int func_108(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_193;
}

int func_109(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


bool func_110(){
return func_111();
}


bool func_111(){
return Global_1649067.f_40==3;
}


bool func_112(){
return Global_2672524.f_2838.f_582;
}


bool func_113(){
return Global_100885.f_394 > 0;
}


bool func_114(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 0);
}


var func__115(){
return Global_2625288;
}


bool func_116(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


bool func_117(){
return MISC::GET_GAME_TIMER() <=Global_23390.f_6321 + 100;
}

int func_118(char* sParam0){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(!func_92()){
return 0;
}
if(Global_1574757==11){
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63){
return 0;
}}elseif(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
return func_97(sParam0);
}


void func_119(){
if(!func_92()){
return;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return;
}
func_87();
}

int func_120(){
if(func_124(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(func_121(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_121(int iParam0){
if(iParam0 !=func_123()){
if(func_15(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_122(Global_2657704[iParam0 /*463*/].f_321.f_7)==14;
}}}
return 0;
}

int func_122(int iParam0){
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

int func_123(){
return -1;
}

int func_124(int iParam0, int iParam1){
if(func_9(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_125(){
if(func_129()){
return 1;
}
if(func_126(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(func_124(PLAYER::PLAYER_ID(), 1)){
return 1;
}
return 0;
}

int func_126(int iParam0, int iParam1){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 && func_127(Global_1895156[iParam0 /*609*/].f_10.f_33)){
return 1;
}
if(iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1){
if(func_127(Global_1895156[iParam0 /*609*/].f_10.f_32)){
return 1;
}}
return 0;
}

int func_127(int iParam0){
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
return func_128(iParam0, 0);
return 0;
}

int func_128(int iParam0, int iParam1){
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

int func_129(){
if(!func_136(PLAYER::PLAYER_ID())){
if(func_132(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID()) !=-1){
return 1;
}
if(func_130(PLAYER::PLAYER_ID()) && Global_1836866.f_4==133){
return 1;
}}
return 0;
}


var func__130(int iParam0){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 4);
}

int func_131(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1895156[iVar0 /*609*/];
}
return -1;
}

int func_132(int iParam0){
if(func_135(iParam0)){
return 1;
}
if(func_133(iParam0)){
return 1;
}
return 0;
}

int func_133(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_134(iParam0, 9);
}
return 0;
}


var func__134(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_135(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 0);
}
return 0;
}


bool func_136(int iParam0){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_1, 2);
}

int func_137(){
if(func_138()==0){
return 1;
}
return 0;
}

int func_138(){
return Global_1574632.f_18;
}

int func_139(int iParam0){
if(!func_15(iParam0, 0, 1)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2);
}

int func_140(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_141(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_141(int iParam0){
return func_142(iParam0);
}


var func__142(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}


void func_143(){
if(bLocal_91){
if(!HUD::DOES_BLIP_EXIST(Global_1935839)){
Global_1935839=HUD::ADD_BLIP_FOR_COORD(Global_1935840);
HUD::SET_BLIP_SPRITE(Global_1935839, 293);
HUD::SET_BLIP_SCALE(Global_1935839, 1f);
HUD::SET_BLIP_AS_SHORT_RANGE(Global_1935839, 0);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1935839, "IMPEX_BLIP_FM");
if(func_176()){
HUD::SET_BLIP_FLASHES(Global_1935839, 1);
}}}elseif(HUD::DOES_BLIP_EXIST(Global_1935839)){
HUD::REMOVE_BLIP(&Global_1935839);
if(bLocal_290){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!func_171(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_321, 0, 500, 1, 0)){
if(func_120()){
func_170("IMPEX_HIPR_DAM", -1);
}}}}}}
if(bLocal_92){
if(iLocal_113==-1){
iLocal_113=func_150(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, -1);
if(iLocal_113 !=-1){
func_144(iLocal_113, 1);
}}}elseif(iLocal_113 !=-1){
func_144(iLocal_113, 0);
iLocal_113=-1;
}}


void func_144(int iParam0, bool bParam1){
switch (iParam0){
case 39:
func_145(39, bParam1);
break;
case 40:
func_145(40, bParam1);
break;
case 41:
func_145(41, bParam1);
break;
case 42:
func_145(42, bParam1);
break;
case 43:
func_145(43, bParam1);
break;
case 44:
func_145(44, bParam1);
break;
default:
break;
}}


void func_145(int iParam0, bool bParam1){
if(bParam1){
if(!func_80(iParam0, 8, 0)){
func_149(iParam0, 8, 0);
func_148(iParam0);
}}elseif(func_80(iParam0, 8, 0)){
func_146(iParam0, 8, 0);
func_148(iParam0);
}}


void func_146(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::CLEAR_BIT(&(Global_100885.f_1414[iParam0]), bParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_85()==0){
uVar0=func_81(func_84(iParam0), -1);
MISC::CLEAR_BIT(&uVar0, bParam1);
func_147(func_84(iParam0), uVar0, -1, 1);
}}else{
MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), bParam1);
}}


void func_147(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_82(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_148(int iParam0){
Global_100885.f_205[iParam0]=1;
Global_100885.f_204=1;
}


void func_149(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_100885.f_1414[iParam0]), bParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_85()==0){
uVar0=func_81(func_84(iParam0), -1);
MISC::SET_BIT(&uVar0, bParam1);
func_147(func_84(iParam0), uVar0, -1, 1);
}}else{
MISC::SET_BIT(&(Global_113810.f_668[iParam0]), bParam1);
}}

int func_150(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
int iVar4;
fVar2=1000000f;
iVar3=-1;
iVar0=0;
while (iVar0 <=60){
if(iParam1==6 || iParam1==func_169(iVar0)){
iVar4=iVar0;
if(func_168(iVar4)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_151(iVar0, 0), 1);
if(fVar1 < fVar2 && (fVar1 <=IntToFloat(iParam2) || iParam2==-1)){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}


Vector3 func__151(int iParam0, bool bParam1){
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
return func_165(Global_102986);
break;
case 46:
if(Global_1853823 !=func_123()){
if(func_164(Global_1853823)){
return func_157(2, 2);
}elseif(func_156(Global_1853823)){
return func_157(45, 3);
}else{
return 1000000f, 1000000f, 1000000f;
}}else{
return 1000000f, 1000000f, 1000000f;
}
break;
case 47:
return func_154(-9.9f, -0.5f, 1f);
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
return Global_1971274;
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
switch (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7){
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
return func_152();
break;
case 59:
return 560f, -405f, -69.6591f;
break;
case 60:
return -1299.691f, -3017.165f, -48.2612f;
break;
}
return 1000000f, 1000000f, 1000000f;
}


Vector3 func__152(){
if(!func_30(Global_1956855)){
return Global_1956855;
}
switch (func_153()){
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

int func_153(){
return Global_2652364.f_2650;
}


Vector3 func__154(struct<3> Param0){
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_155(), 0f, Param0);
}


Vector3 func__155(){
return -880f, -2770f, -50f;
}

int func_156(int iParam0){
if(iParam0 !=func_123()){
if((MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 0) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}


Vector3 func__157(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
Var1={
1000000f, 1000000f, 1000000f 
};
if(Global_1853823 !=func_123()){
if(iParam1==3){
if(func_158(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(iParam1==2){
if(MISC::IS_BIT_SET(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 4)){
if(func_158(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(MISC::IS_BIT_SET(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 5)){
if(func_158(iParam0, 2, &Var0, 0, 0)){
Var1={
Var0 
};
}}}}
return Var1;
}

int func_158(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
struct<4> Var0;
struct<3> Var1;
struct<4> Var2;
struct<3> Var3;
if(!func_163(iParam3, &Var0)){
return 0;
}
if(!func_163(iParam1, &Var1)){
return 0;
}
if(!bParam4){
Var2={
func_161(iParam0) 
};
}else{
Var2={
func_160(iParam0) 
};
}
Var3={
Var2 - Var0 
};
Var3={
func_159(Var3, -Var0.f_3.f_2) 
};
Var3={
func_159(Var3, Var1.f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, 0f, Var3) 
};
uParam2->f_3={
Var2.f_3 
};
return 1;
}


Vector3 func__159(struct<3> Param0, float fParam1){
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


struct<6> func_160(int iParam0){
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


struct<6> func_161(int iParam0){
return func_162(iParam0);
}


struct<6> func_162(int iParam0){
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

int func_163(int iParam0, var uParam1){
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

int func_164(int iParam0){
if(iParam0 !=func_123()){
if((MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 3) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 4)) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_288, 5)){
return 1;
}}
return 0;
}


Vector3 func__165(int iParam0){
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
return func_155();
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
if(func_166()==0){
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

int func_166(){
return func_167(PLAYER::PLAYER_ID());
}


var func__167(int iParam0){
return MISC::GET_BITS_IN_RANGE(Global_2657704[iParam0 /*463*/].f_321.f_3, 28, 31);
}


bool func_168(int iParam0){
bool bVar0;
switch (iParam0){
case 39:
bVar0=HUD::DOES_BLIP_EXIST(Global_100885.f_267[39]);
break;
case 40:
bVar0=HUD::DOES_BLIP_EXIST(Global_100885.f_267[40]);
break;
case 41:
bVar0=HUD::DOES_BLIP_EXIST(Global_100885.f_267[41]);
break;
case 42:
bVar0=HUD::DOES_BLIP_EXIST(Global_100885.f_267[42]);
break;
case 43:
bVar0=HUD::DOES_BLIP_EXIST(Global_100885.f_267[43]);
break;
case 44:
bVar0=HUD::DOES_BLIP_EXIST(Global_100885.f_267[44]);
break;
}
return bVar0;
}

int func_169(int iParam0){
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


void func_170(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_171(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6){
if(!func_526(uParam2)){
func_525(uParam2, 0, 0);
}
fParam3=0f;
if(func_172(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6)){
return 1;
}
return 0;
}

int func_172(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7){
var uVar0;
var uVar1;
var uVar2;
struct<8> Var3;
if(!func_526(uParam3)){
func_525(uParam3, 0, 0);
}
func_175(&Var3, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(func_173(iParam0, iParam1, 30)){
if(ENTITY::IS_ENTITY_A_PED(iParam0)){
uVar0=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
if(!PED::IS_PED_INJURED(uVar0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
uVar2=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
if(bParam2){
if(OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, uVar2, fParam4, -1)){
if(uParam7 || (!OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 2) && !(Var3.f_7 !=0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 3)))){
if(bParam6){
return 1;
}
elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}
else{
return 0;
}
}}}elseif(OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, uVar2, fParam4, -1)){
if(bParam6){
return 1;
}elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}else{
return 0;
}}elseif(OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 2)){
if(bParam6){
return 1;
}elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}else{
return 0;
}}elseif(Var3.f_7 !=0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 3)){
if(bParam6){
return 1;
}elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}else{
return 0;
}}
}
elseif(PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
uVar1=PED::GET_VEHICLE_PED_IS_IN(iVar0, 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(bParam2){
if(OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1)){
if(uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2) && !(Var3.f_7 !=0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3)))){
if(bParam6){
return 1;
}elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}else{
return 0;
}
}
}}elseif(OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1)){
if(bParam6){
return 1;
}
elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}
else{
return 0;
}}elseif(OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2)){
if(bParam6){
return 1;
}
elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}
else{
return 0;
}}elseif(Var3.f_7 !=0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3)){
if(bParam6){
return 1;
}
elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}
else{
return 0;
}}}
}
elseif(bParam2){
if(OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1)){
if(uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 !=0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3)))){
if(bParam6){
return 1;
}
elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}
else{
return 0;
}}}
}
elseif(OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1)){
if(bParam6){
return 1;
}elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}else{
return 0;
}
}
elseif(OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2)){
if(bParam6){
return 1;
}elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}else{
return 0;
}
}
elseif(Var3.f_7 !=0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3)){
if(bParam6){
return 1;
}elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}else{
return 0;
}
}}}elseif(ENTITY::IS_ENTITY_A_VEHICLE(iParam0) || ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
if(bParam2){
if(OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1)){
if(uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 !=0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3)))){
if(bParam6){
return 1;
}elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}else{
return 0;
}}
}}elseif(OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1)){
if(bParam6){
return 1;
}
elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}
else{
return 0;
}}elseif(OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2)){
if(bParam6){
return 1;
}
elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}
else{
return 0;
}}elseif(Var3.f_7 !=0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3)){
if(bParam6){
return 1;
}
elseif(iParam5 <=0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >=iParam5){
return 1;
}
else{
return 0;
}}}}}}
func_47(uParam3);
return 0;
}

int func_173(int iParam0, int iParam1, int iParam2){
if(iParam1 !=-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), func_174(iParam1), 1) <=IntToFloat(iParam2)){
return 1;
}}
return 0;
}


Vector3 func__174(int iParam0){
switch (iParam0){
case 1215605247:
return 1204.429f, -3110.847f, 4.3988f;
break;
case -1710530912:
return 725.1831f, -1089.349f, 21.1692f;
break;
case 1131590004:
return -1164.887f, -2011.105f, 12.25371f;
break;
case 916723671:
return -330.44f, -143.39f, 39.33f;
break;
case 1340820069:
return 106.28f, 6620.01f, 32.12f;
break;
case -866958545:
return 1182.65f, 2641.9f, 38.05f;
break;
}
return 0f, 0f, 0f;
}


void func_175(var uParam0, int iParam1){
switch (iParam1){
case 0:
case 1215605247:
*uParam0=99;
uParam0->f_1=1215605247;
uParam0->f_2=0;
uParam0->f_3={
1204.429f, -3110.847f, 4.3988f 
};
uParam0->f_6=-247372382;
uParam0->f_7=0;
uParam0->f_8="MP_GAR_SIMEON";
uParam0->f_9.f_1={
1210.884f, -3122.402f, 5.2118f 
};
uParam0->f_9.f_4={
4.0534f, 0f, 32.6363f 
};
uParam0->f_9.f_7=32.498f;
uParam0->f_9.f_8={
1210.884f, -3122.402f, 5.2118f 
};
uParam0->f_9.f_11={
4.0534f, 0f, 32.6363f 
};
uParam0->f_9.f_14=32.498f;
uParam0->f_27={
1204.157f, -3122.599f, 3.795331f 
};
uParam0->f_27.f_3={
1204.24f, -3099.772f, 8.400777f 
};
uParam0->f_27.f_6=7f;
return;
break;
case 1:
case -1710530912:
*uParam0=99;
uParam0->f_1=-1710530912;
uParam0->f_2=1;
uParam0->f_3={
725.1831f, -1089.349f, 21.1692f 
};
uParam0->f_7=0;
uParam0->f_8="MP_GAR_PNS_2";
uParam0->f_9.f_1={
734.3793f, -1078.791f, 23.4305f 
};
uParam0->f_9.f_4={
-16.432f, 0f, -19.7978f 
};
uParam0->f_9.f_7=60.0199f;
uParam0->f_9.f_8={
734.3027f, -1079.004f, 23.4973f 
};
uParam0->f_9.f_11={
-16.432f, 0f, -19.7978f 
};
uParam0->f_9.f_14=60.0199f;
uParam0->f_27={
738.8857f, -1088.516f, 20.55957f 
};
uParam0->f_27.f_3={
718.613f, -1088.78f, 24.83263f 
};
uParam0->f_27.f_6=7f;
return;
break;
case 2:
case 1131590004:
*uParam0=99;
uParam0->f_1=1131590004;
uParam0->f_2=2;
uParam0->f_3={
-1164.887f, -2011.105f, 12.25371f 
};
uParam0->f_7=0;
uParam0->f_8="MP_GAR_NEUT_PNS_3";
uParam0->f_9.f_1={
-1161.774f, -2010.27f, 14.2468f 
};
uParam0->f_9.f_4={
-17.3415f, 0f, 113.6889f 
};
uParam0->f_9.f_7=64.5334f;
uParam0->f_9.f_8={
-1161.639f, -2010.211f, 14.2928f 
};
uParam0->f_9.f_11={
-17.3415f, 0f, 113.6889f 
};
uParam0->f_9.f_14=64.5334f;
uParam0->f_27={
-1169.723f, -2015.923f, 11.50441f 
};
uParam0->f_27.f_3={
-1160.558f, -2007.005f, 15.68027f 
};
uParam0->f_27.f_6=5.5f;
return;
break;
case 3:
case 916723671:
*uParam0=99;
uParam0->f_1=916723671;
uParam0->f_2=3;
uParam0->f_3={
-330.44f, -143.39f, 39.33f 
};
uParam0->f_7=0;
uParam0->f_8="MP_GAR_PNS_4";
uParam0->f_9.f_1={
-332.1567f, -141.0546f, 40.2864f 
};
uParam0->f_9.f_4={
-20.6629f, 0f, -134.7887f 
};
uParam0->f_9.f_7=60.0241f;
uParam0->f_9.f_8={
-332.3621f, -140.8507f, 40.3956f 
};
uParam0->f_9.f_11={
-20.6629f, 0f, -134.7887f 
};
uParam0->f_9.f_14=60.0241f;
uParam0->f_27={
-323.7998f, -146.2539f, 37.81492f 
};
uParam0->f_27.f_3={
-334.3432f, -141.7261f, 40.75964f 
};
uParam0->f_27.f_6=5.5f;
return;
break;
case 4:
case 1340820069:
*uParam0=99;
uParam0->f_1=1340820069;
uParam0->f_2=4;
uParam0->f_3={
106.28f, 6620.01f, 32.12f 
};
uParam0->f_7=0;
uParam0->f_8="MP_GAR_PNS_5";
uParam0->f_9.f_1={
106.688f, 6617.322f, 32.5026f 
};
uParam0->f_9.f_4={
-10.7437f, 0f, 21.7154f 
};
uParam0->f_9.f_7=67.562f;
uParam0->f_9.f_8={
106.7971f, 6617.048f, 32.5586f 
};
uParam0->f_9.f_11={
-10.7437f, 0f, 21.7154f 
};
uParam0->f_9.f_14=67.562f;
uParam0->f_27={
100.9759f, 6625.046f, 30.60301f 
};
uParam0->f_27.f_3={
111.2522f, 6615.657f, 33.62929f 
};
uParam0->f_27.f_6=5.5f;
return;
break;
case 5:
case -866958545:
*uParam0=99;
uParam0->f_1=-866958545;
uParam0->f_2=5;
uParam0->f_3={
1182.65f, 2641.9f, 38.05f 
};
uParam0->f_7=0;
uParam0->f_9.f_1={
1184.206f, 2644.004f, 38.7458f 
};
uParam0->f_9.f_4={
-15.4014f, 0f, 161.4493f 
};
uParam0->f_9.f_7=67.3374f;
uParam0->f_9.f_8={
1184.345f, 2644.418f, 38.866f 
};
uParam0->f_9.f_11={
-15.4014f, 0f, 161.4493f 
};
uParam0->f_9.f_14=67.3374f;
uParam0->f_27={
1182.835f, 2634.775f, 36.55006f 
};
uParam0->f_27.f_3={
1182.578f, 2647.955f, 39.58602f 
};
uParam0->f_27.f_6=5.5f;
return;
break;
}}

int func_176(){
int iVar0;
int iVar1;
iVar1=func_81(1200, -1);
if(!MISC::IS_BIT_SET(iVar1, 1)){
iVar0=1;
}elseif(!MISC::IS_BIT_SET(iVar1, 2)){
iVar0=1;
}
return iVar0;
}


void func_177(){
if(bLocal_89){
if(!iLocal_90){
func_179(1215605247, 1, 0);
func_178(1);
iLocal_90=1;
}}elseif(iLocal_90){
func_179(1215605247, 0, 0);
func_178(0);
iLocal_90=0;
}}


void func_178(bool bParam0){
if(Global_2794162.f_4623 !=bParam0){
if(bParam0){
}
Global_2794162.f_4623=bParam0;
}}


void func_179(int iParam0, bool bParam1, bool bParam2){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){}elseif(bParam1){
if(!MISC::IS_BIT_SET(Global_2794162.f_4602, func_180(iParam0))){
if(bParam2){
MISC::SET_BIT(&(Global_2794162.f_4602.f_1), func_180(iParam0));
}
MISC::SET_BIT(&(Global_2794162.f_4602), func_180(iParam0));
}}elseif(MISC::IS_BIT_SET(Global_2794162.f_4602, func_180(iParam0))){
if(bParam2){
MISC::CLEAR_BIT(&(Global_2794162.f_4602.f_1), func_180(iParam0));
}
MISC::CLEAR_BIT(&(Global_2794162.f_4602), func_180(iParam0));
}}

int func_180(int iParam0){
switch (iParam0){
case 1215605247:
return 0;
break;
case -1710530912:
return 1;
break;
case 1131590004:
return 2;
break;
case 916723671:
return 3;
break;
case 1340820069:
return 4;
break;
case -866958545:
return 5;
break;
}
return 0;
}


void func_181(){
int iVar0;
int iVar1;
if(MISC::IS_BIT_SET(Local_333.f_23, 0)){
if(iLocal_324 >=32){
MISC::CLEAR_BIT(&uLocal_341, 5);
iLocal_324=0;
iLocal_296=-1;
}
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_324))){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_324));
iVar1=PLAYER::GET_PLAYER_PED(iVar0);
if(func_15(iVar0, 0, 1)){
if(!MISC::IS_BIT_SET(uLocal_341, 3)){
if(MISC::IS_BIT_SET(Local_340[iLocal_324 /*4*/].f_2, 1)){
MISC::SET_BIT(&uLocal_341, 3);
}}
if(iLocal_296==-1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(!PED::IS_PED_INJURED(iVar1)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_333.f_22))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_333.f_22), -1, 0)==iVar1){
iLocal_296=iLocal_324;
}}}
}}}}}
iLocal_324++;
if(iLocal_324 >=32){
MISC::SET_BIT(&uLocal_341, 5);
}
func_278();
if(!MISC::IS_BIT_SET(uLocal_341, 3)){
if(!MISC::IS_BIT_SET(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3)){
if(!MISC::IS_BIT_SET(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1)){
if(func_276()){
MISC::SET_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
}}}}}
if(iLocal_293 !=Local_333.f_34){
if(Local_333.f_34==0){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
iLocal_293=Local_333.f_34;
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_293);
}}else{
iLocal_293=Local_333.f_34;
NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_293);
}}
if(MISC::IS_BIT_SET(Local_333.f_23, 0)){
switch (Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3){
case 0:
if(!Global_2794162.f_1759){
}
if(MISC::IS_BIT_SET(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3)){
MISC::CLEAR_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
}
if(MISC::IS_BIT_SET(uLocal_341, 21)){
MISC::CLEAR_BIT(&uLocal_341, 21);
}
if(MISC::IS_BIT_SET(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1)){
MISC::CLEAR_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), true);
}
if(((!func_140(PLAYER::PLAYER_ID(), 1, 0) && !func_114()) && !func_275(PLAYER::PLAYER_ID(), 1, 0)) || func_72(PLAYER::PLAYER_ID(), 6)){
if(MISC::IS_BIT_SET(uLocal_341, 3)){
MISC::CLEAR_BIT(&uLocal_341, 3);
}
if(MISC::IS_BIT_SET(uLocal_341, 19)){
MISC::CLEAR_BIT(&uLocal_341, 19);
}
if(MISC::IS_BIT_SET(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3)){
MISC::CLEAR_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
}
if(iLocal_295 !=-1){
iLocal_295=-1;
}
if(MISC::IS_BIT_SET(Local_333.f_23, 0)){
if(!MISC::IS_BIT_SET(uLocal_341, 16)){
MISC::SET_BIT(&uLocal_341, 16);
func_274(6, 1);
MISC::SET_BIT(&uLocal_341, 7);
Global_2794162.f_1758=1;
Global_2794162.f_1759=0;
}
if(NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_268()){
if(Local_333.f_67 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_333.f_67, 1);
}
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=1;
Global_1935850=HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_333.f_22));
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_333.f_22)))){
HUD::SET_BLIP_SPRITE(Global_1935850, 348);
func_170("IMPEX_HIPB_INT", -1);
}
else{
HUD::SET_BLIP_SPRITE(Global_1935850, 225);
func_170("IMPEX_HIPR_INT", -1);
}
HUD::SET_BLIP_COLOUR(Global_1935850, 2);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1935850, "IMPEX_HIPR_BLP");
func_274(6, 1);
MISC::SET_BIT(&uLocal_341, 7);
Global_2794162.f_1758=1;
if(func_120()){
HUD::SET_BLIP_DISPLAY(Global_1935850, 0);
}}}
}}}elseif(!Global_2794162.f_1759){
Global_2794162.f_1759=1;
}
break;
case 1:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_333.f_22), 0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22))){
func_267(1);
if(func_266()){
func_261(2, 0, 1);
}
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
HUD::REMOVE_BLIP(&Global_1935850);
}}else{
func_267(0);
if(!func_260(NETWORK::NET_TO_VEH(Local_333.f_22), 0)){
if(!HUD::DOES_BLIP_EXIST(Global_1935850)){
if(!iLocal_112){
func_259();
}
}}}
}
if(!MISC::IS_BIT_SET(uLocal_341, 19)){
if(func_268()){
if(func_257()){
if(!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22))){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_333.f_22), 1)) < 2500f){
if(func_120()){
func_170("FM_IMP_JAC", -1);
}
MISC::SET_BIT(&uLocal_341, 19);
}
}}}
}
if(func_256()){
}
func_254();
}else{
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
HUD::REMOVE_BLIP(&Global_1935850);
}
func_274(6, 0);
MISC::CLEAR_BIT(&uLocal_341, 7);
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=3;
}}else{
if(Local_333.f_67 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_333.f_67, 0);
}
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
HUD::REMOVE_BLIP(&Global_1935850);
}
func_274(6, 0);
MISC::CLEAR_BIT(&uLocal_341, 7);
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=3;
}
if(MISC::IS_BIT_SET(uLocal_341, 3)){
func_274(6, 0);
MISC::CLEAR_BIT(&uLocal_341, 7);
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
HUD::REMOVE_BLIP(&Global_1935850);
}
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=3;
}
if(Local_333.f_26==3){
if(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3==1){
if(Local_333.f_67 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_333.f_67, 0);
}
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
HUD::REMOVE_BLIP(&Global_1935850);
}
if(MISC::IS_BIT_SET(uLocal_341, 16)){
MISC::CLEAR_BIT(&uLocal_341, 16);
}
func_274(6, 0);
MISC::CLEAR_BIT(&uLocal_341, 7);
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=3;
}}
break;
case 3:
func_267(0);
break;
}
if(func_251()){
if(func_250("IMPEX_HIPR_INT")){
HUD::CLEAR_HELP(1);
}
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
HUD::REMOVE_BLIP(&Global_1935850);
}
if(Local_333.f_67 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_333.f_67, 0);
}
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=3;
func_274(6, 0);
MISC::CLEAR_BIT(&uLocal_341, 7);
if(MISC::IS_BIT_SET(uLocal_341, 16)){
MISC::CLEAR_BIT(&uLocal_341, 16);
}
func_267(0);
}
func_197();
if(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3){
func_194();
}}else{
if(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 !=0){
if(Local_333.f_67 !=0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_333.f_67, 0);
}
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3=0;
}
if(MISC::IS_BIT_SET(uLocal_341, 21)){
MISC::CLEAR_BIT(&uLocal_341, 21);
}
if(Global_2794162.f_1758){
if(!func_526(&uLocal_306)){
func_525(&uLocal_306, 0, 0);
}elseif(func_524(&uLocal_306, 5000, 0)){
func_47(&uLocal_306);
Global_2794162.f_1758=0;
}}
if(MISC::IS_BIT_SET(uLocal_341, 16)){
if(Local_333.f_34==0){
MISC::CLEAR_BIT(&uLocal_341, 16);
}}}
func_182();
}


void func_182(){
struct<3> Var0;
struct<3> Var1;
var uVar2;
var uVar3;
bool bVar4;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(!func_257()){
if(!func_526(&uLocal_347)){
func_525(&uLocal_347, 0, 0);
}
if(func_524(&uLocal_347, 1000, 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_333.f_22)){
Var1={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_333.f_22), 1) 
};
if(func_190(Var1, func_191(39), func_151(39, 0))){
if(func_185(39, 0, &Var0, &uVar2, &uVar3, 0)){
bVar4=true;
}
}
elseif(func_190(Var1, func_191(40), func_151(40, 0))){
if(func_185(40, 0, &Var0, &uVar2, &uVar3, 0)){
bVar4=true;
}
}
elseif(func_190(Var1, func_191(41), func_151(41, 0))){
if(func_185(41, 0, &Var0, &uVar2, &uVar3, 0)){
bVar4=true;
}
}
elseif(func_190(Var1, func_191(42), func_151(42, 0))){
if(func_185(42, 0, &Var0, &uVar2, &uVar3, 0)){
bVar4=true;
}
}
elseif(func_190(Var1, func_191(43), func_151(43, 0))){
if(func_185(43, 0, &Var0, &uVar2, &uVar3, 0)){
bVar4=true;
}
}
elseif(func_190(Var1, func_191(44), func_151(44, 0))){
if(func_185(44, 0, &Var0, &uVar2, &uVar3, 0)){
bVar4=true;
}
}}
func_47(&uLocal_347);
}
if(bVar4){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_333.f_22)){
if(func_183(NETWORK::NET_TO_VEH(Local_333.f_22), 1, 0, 0, 0, 0, 1, 0, 1)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_VEH(Local_333.f_22), Var0, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_333.f_22), uVar2);
NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_333.f_22), 1, 1);
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_333.f_22), false);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_333.f_22), 1);
}}}}}}}

int func_183(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
if(iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=0;
while (iVar0 < iVar1){
iVar2=func_184(iParam0, (iVar0 - 1), bParam6, iParam7);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(iParam3 && iVar2==PLAYER::PLAYER_PED_ID()){
}elseif(bParam2){
if(PED::IS_PED_A_PLAYER(iVar2)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
if(((!PED::IS_PED_INJURED(iVar2) && iVar3 !=func_123()) && func_15(iVar3, 1, 1)) || iParam8){
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

int func_184(int iParam0, int iParam1, bool bParam2, int iParam3){
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


bool func_185(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5){
*uParam2={
0f, 0f, 0f 
};
*uParam3=0f;
*uParam4=1f;
if(iParam0==39){
if(iParam1==0){
*uParam2={
-1136.491f, -1991.127f, 12.1674f 
};
*uParam3=312.0856f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-1133.253f, -1993.854f, 12.1687f 
};
*uParam3=314.389f;
*uParam4=1f;
}elseif(iParam1==2){
*uParam2={
-1130.806f, -1997.875f, 12.1713f 
};
*uParam3=317.9671f;
*uParam4=0.6f;
}elseif(iParam1==3){
*uParam2={
-1127.329f, -2001.548f, 12.1741f 
};
*uParam3=315.1484f;
*uParam4=0.5f;
}elseif(iParam1==4){
*uParam2={
-1123.286f, -2006.263f, 12.1791f 
};
*uParam3=236.5043f;
*uParam4=0.4f;
}elseif(iParam1==5){
*uParam2={
-1115.469f, -2012.307f, 12.1802f 
};
*uParam3=264.1943f;
*uParam4=0.2f;
}elseif(iParam1==6){
*uParam2={
-1110.562f, -2015.446f, 12.1999f 
};
*uParam3=302.6618f;
*uParam4=0.1f;
}elseif(iParam1==7){
*uParam2={
-1121.69f, -2000.23f, 12.1718f 
};
*uParam3=238.2144f;
*uParam4=0.1f;
}elseif(iParam1==8){
*uParam2={
-1111.589f, -2006.454f, 12.1692f 
};
*uParam3=238.336f;
*uParam4=0.3f;
}elseif(iParam1==9){
*uParam2={
-1138.648f, -1979.826f, 12.1634f 
};
*uParam3=278.7886f;
*uParam4=0.9f;
}elseif(iParam1==10){
*uParam2={
-1124.321f, -1978.124f, 12.1856f 
};
*uParam3=276.276f;
*uParam4=0.4f;
}elseif(iParam1==11){
*uParam2={
-1110.264f, -1975.971f, 12.1588f 
};
*uParam3=279.4681f;
*uParam4=0.5f;
}elseif(iParam1==12){
*uParam2={
-1128.293f, -1984.828f, 12.1659f 
};
*uParam3=295.1603f;
*uParam4=0.8f;
}elseif(iParam1==13){
*uParam2={
-1126.066f, -1991.346f, 12.1683f 
};
*uParam3=227.6551f;
*uParam4=0.7f;
}}elseif(iParam0==40){
if(iParam1==0){
*uParam2={
717.5009f, -1082.013f, 21.2916f 
};
*uParam3=3.6761f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
716.7202f, -1069.264f, 21.2546f 
};
*uParam3=3.5291f;
*uParam4=1f;
}elseif(iParam1==2){
*uParam2={
717.009f, -1058.204f, 21.0152f 
};
*uParam3=355.8705f;
*uParam4=0.9f;
}elseif(iParam1==3){
*uParam2={
712.7385f, -1083.534f, 21.3647f 
};
*uParam3=359.9393f;
*uParam4=0.9f;
}elseif(iParam1==4){
*uParam2={
712.7766f, -1072.967f, 21.307f 
};
*uParam3=359.9453f;
*uParam4=0.8f;
}elseif(iParam1==5){
*uParam2={
712.8783f, -1061.094f, 21.1883f 
};
*uParam3=357.2739f;
*uParam4=0.8f;
}elseif(iParam1==6){
*uParam2={
708.5093f, -1081.285f, 21.3978f 
};
*uParam3=358.5361f;
*uParam4=0.7f;
}elseif(iParam1==7){
*uParam2={
708.9708f, -1068.358f, 21.3519f 
};
*uParam3=357.9787f;
*uParam4=0.7f;
}elseif(iParam1==8){
*uParam2={
710.7449f, -1053.611f, 21.2011f 
};
*uParam3=339.2883f;
*uParam4=0.6f;
}elseif(iParam1==9){
*uParam2={
704.6691f, -1079.536f, 21.3804f 
};
*uParam3=359.4009f;
*uParam4=0.5f;
}elseif(iParam1==10){
*uParam2={
704.4818f, -1065.911f, 21.4447f 
};
*uParam3=0.9557f;
*uParam4=0.4f;
}elseif(iParam1==11){
*uParam2={
716.4031f, -1044.615f, 20.9157f 
};
*uParam3=280.6607f;
*uParam4=0.3f;
}elseif(iParam1==12){
*uParam2={
725.7982f, -1044.226f, 21.046f 
};
*uParam3=271.6107f;
*uParam4=0.2f;
}elseif(iParam1==13){
*uParam2={
727.0708f, -1047.951f, 21.2648f 
};
*uParam3=270.6534f;
*uParam4=0.1f;
}}elseif(iParam0==41){
if(iParam1==0){
*uParam2={
-365.9221f, -125.5196f, 37.6785f 
};
*uParam3=65.4762f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-362.3411f, -122.0465f, 37.6788f 
};
*uParam3=68.8025f;
*uParam4=1f;
}elseif(iParam1==2){
*uParam2={
-363.4988f, -117.1944f, 37.6792f 
};
*uParam3=78.9594f;
*uParam4=0.9f;
}elseif(iParam1==3){
*uParam2={
-372.3338f, -115.238f, 37.6796f 
};
*uParam3=74.7182f;
*uParam4=0.8f;
}elseif(iParam1==4){
*uParam2={
-371.1733f, -121.0303f, 37.6797f 
};
*uParam3=62.123f;
*uParam4=0.5f;
}elseif(iParam1==5){
*uParam2={
-369.2153f, -127.0247f, 37.6784f 
};
*uParam3=61.9032f;
*uParam4=0.7f;
}elseif(iParam1==6){
*uParam2={
-371.8094f, -130.2364f, 37.6798f 
};
*uParam3=52.11f;
*uParam4=0.6f;
}elseif(iParam1==7){
*uParam2={
-378.4785f, -130.0621f, 37.6796f 
};
*uParam3=36.469f;
*uParam4=0.5f;
}elseif(iParam1==8){
*uParam2={
-387.4156f, -118.9469f, 37.6829f 
};
*uParam3=38.3679f;
*uParam4=0.4f;
}elseif(iParam1==9){
*uParam2={
-382.709f, -112.8489f, 37.6985f 
};
*uParam3=65.0749f;
*uParam4=0.3f;
}elseif(iParam1==10){
*uParam2={
-397.1963f, -107.1517f, 37.6834f 
};
*uParam3=33.315f;
*uParam4=0.2f;
}elseif(iParam1==11){
*uParam2={
-404.3896f, -96.5394f, 39.0491f 
};
*uParam3=34.1156f;
*uParam4=0.1f;
}}elseif(iParam0==42){
if(iParam1==0){
*uParam2={
120.3574f, 6599.573f, 31.0156f 
};
*uParam3=269.5703f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
123.4549f, 6594.44f, 30.9958f 
};
*uParam3=269.5584f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
126.712f, 6589.798f, 30.9386f 
};
*uParam3=269.5731f;
*uParam4=0.5f;
}elseif(iParam1==3){
*uParam2={
133.9324f, 6585.555f, 30.9551f 
};
*uParam3=269.4128f;
*uParam4=0.5f;
}elseif(iParam1==4){
*uParam2={
136.8265f, 6580.12f, 31.013f 
};
*uParam3=269.4126f;
*uParam4=0.2f;
}elseif(iParam1==5){
*uParam2={
141.8716f, 6575.214f, 30.9522f 
};
*uParam3=270.5616f;
*uParam4=0.2f;
}elseif(iParam1==6){
*uParam2={
140.8046f, 6606.312f, 30.8449f 
};
*uParam3=178.8423f;
*uParam4=0.7f;
}elseif(iParam1==7){
*uParam2={
145.8316f, 6601.099f, 30.85f 
};
*uParam3=180.9941f;
*uParam4=0.6f;
}elseif(iParam1==8){
*uParam2={
150.5503f, 6596.533f, 30.8449f 
};
*uParam3=177.9041f;
*uParam4=0.4f;
}elseif(iParam1==9){
*uParam2={
155.6983f, 6591.292f, 30.8449f 
};
*uParam3=177.9025f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
159.1213f, 6580.544f, 30.841f 
};
*uParam3=208.1021f;
*uParam4=0.3f;
}elseif(iParam1==11){
*uParam2={
153.3835f, 6581.357f, 30.843f 
};
*uParam3=208.9007f;
*uParam4=0.3f;
}elseif(iParam1==12){
*uParam2={
160.6086f, 6567.498f, 30.8061f 
};
*uParam3=210.3887f;
*uParam4=0.1f;
}elseif(iParam1==13){
*uParam2={
166.7977f, 6567.135f, 30.7544f 
};
*uParam3=210.3833f;
*uParam4=0.2f;
}}elseif(iParam0==43){
if(iParam1==0){
*uParam2={
1182.498f, 2653.582f, 36.8099f 
};
*uParam3=304.7889f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
1190.678f, 2661.143f, 36.8165f 
};
*uParam3=321.483f;
*uParam4=1f;
}elseif(iParam1==2){
*uParam2={
1196.733f, 2669.66f, 36.7883f 
};
*uParam3=345.6812f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
1200.466f, 2666.494f, 36.8099f 
};
*uParam3=347.5349f;
*uParam4=0.6f;
}elseif(iParam1==4){
*uParam2={
1205.586f, 2667.136f, 36.8099f 
};
*uParam3=352.7466f;
*uParam4=0.5f;
}elseif(iParam1==5){
*uParam2={
1210.698f, 2666.592f, 36.8099f 
};
*uParam3=7.6557f;
*uParam4=0.1f;
}elseif(iParam1==6){
*uParam2={
1193.573f, 2688.714f, 36.7457f 
};
*uParam3=87.5179f;
*uParam4=0.2f;
}elseif(iParam1==7){
*uParam2={
1181.127f, 2689.26f, 36.8532f 
};
*uParam3=87.4959f;
*uParam4=0.4f;
}elseif(iParam1==8){
*uParam2={
1162.459f, 2689.204f, 37.1039f 
};
*uParam3=87.5173f;
*uParam4=0.3f;
}elseif(iParam1==9){
*uParam2={
1162.663f, 2677.458f, 37.078f 
};
*uParam3=268.6483f;
*uParam4=0.1f;
}elseif(iParam1==10){
*uParam2={
1171.858f, 2677.125f, 36.995f 
};
*uParam3=267.8824f;
*uParam4=0.2f;
}elseif(iParam1==11){
*uParam2={
1224.358f, 2677.226f, 36.6702f 
};
*uParam3=272.1325f;
*uParam4=0.1f;
}}elseif(iParam0==44){
if(iParam1==0){
*uParam2={
-199.5331f, -1301.69f, 30.296f 
};
*uParam3=263.703f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-205.9477f, -1303.868f, 30.2575f 
};
*uParam3=1.5267f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
-200.7847f, -1298.636f, 30.296f 
};
*uParam3=89.6847f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
-193.9668f, -1305.65f, 30.3643f 
};
*uParam3=86.5508f;
*uParam4=0.7f;
}elseif(iParam1==4){
*uParam2={
-213.389f, -1305.822f, 30.3533f 
};
*uParam3=88.0277f;
*uParam4=0.6f;
}elseif(iParam1==5){
*uParam2={
-210.4487f, -1301.42f, 30.296f 
};
*uParam3=50.2894f;
*uParam4=0.5f;
}elseif(iParam1==6){
*uParam2={
-193.1976f, -1302.892f, 30.296f 
};
*uParam3=310.5602f;
*uParam4=0.4f;
}elseif(iParam1==7){
*uParam2={
-198.882f, -1304.772f, 30.325f 
};
*uParam3=268.713f;
*uParam4=0.3f;
}elseif(iParam1==8){
*uParam2={
-230.2501f, -1305.596f, 30.3533f 
};
*uParam3=89.1508f;
*uParam4=0.2f;
}elseif(iParam1==9){
*uParam2={
-186.4736f, -1305.746f, 30.3495f 
};
*uParam3=270.2632f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
-236.5289f, -1302.071f, 30.296f 
};
*uParam3=270.2677f;
*uParam4=0.1f;
}elseif(iParam1==11){
*uParam2={
-181.8344f, -1299.311f, 30.296f 
};
*uParam3=88.0286f;
*uParam4=0.1f;
}}elseif(func_189(iParam0, iParam5)){
if(iParam1==0){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.7f;
}elseif(iParam1==4){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.6f;
}elseif(iParam1==5){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.5f;
}elseif(iParam1==6){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.4f;
}elseif(iParam1==7){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.3f;
}elseif(iParam1==8){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.2f;
}elseif(iParam1==9){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.1f;
}elseif(iParam1==11){
*uParam2={
-795.6738f, 306.1536f, 84.7005f 
};
*uParam3=175.3352f;
*uParam4=0.1f;
}}elseif(func_188(iParam0, iParam5)){
switch (iParam5){
case 6:
if(iParam1==0){
*uParam2={
-1574.907f, -569.6819f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-1573.983f, -570.0646f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
-1575.289f, -570.6058f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
-1575.83f, -569.2993f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.7f;
}elseif(iParam1==4){
*uParam2={
-1574.524f, -568.7581f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.6f;
}elseif(iParam1==5){
*uParam2={
-1574.365f, -570.9885f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.5f;
}elseif(iParam1==6){
*uParam2={
-1576.213f, -570.2231f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.4f;
}elseif(iParam1==7){
*uParam2={
-1575.448f, -568.3754f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.3f;
}elseif(iParam1==8){
*uParam2={
-1573.6f, -569.1407f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.2f;
}elseif(iParam1==9){
*uParam2={
-1573.059f, -570.4473f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
-1575.672f, -571.5297f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.1f;
}elseif(iParam1==11){
*uParam2={
-1576.754f, -568.9166f, 104.2001f 
};
*uParam3=104.9486f;
*uParam4=0.1f;
}
break;
case 7:
if(iParam1==0){
*uParam2={
-1387.561f, -481.637f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-1386.637f, -482.0197f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
-1387.944f, -482.5609f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
-1388.485f, -481.2543f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.7f;
}elseif(iParam1==4){
*uParam2={
-1387.178f, -480.7131f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.6f;
}elseif(iParam1==5){
*uParam2={
-1387.02f, -482.9435f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.5f;
}elseif(iParam1==6){
*uParam2={
-1388.868f, -482.1782f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.4f;
}elseif(iParam1==7){
*uParam2={
-1388.102f, -480.3304f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.3f;
}elseif(iParam1==8){
*uParam2={
-1386.255f, -481.0958f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.2f;
}elseif(iParam1==9){
*uParam2={
-1385.713f, -482.4024f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
-1388.327f, -483.4847f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.1f;
}elseif(iParam1==11){
*uParam2={
-1389.409f, -480.8716f, 77.2001f 
};
*uParam3=353.0411f;
*uParam4=0.1f;
}
break;
case 8:
if(iParam1==0){
*uParam2={
-142.5312f, -590.6586f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-141.6073f, -591.0413f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
-142.9139f, -591.5825f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
-143.4551f, -590.2759f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.7f;
}elseif(iParam1==4){
*uParam2={
-142.1485f, -589.7347f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.6f;
}elseif(iParam1==5){
*uParam2={
-141.99f, -591.9651f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.5f;
}elseif(iParam1==6){
*uParam2={
-143.8378f, -591.1998f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.4f;
}elseif(iParam1==7){
*uParam2={
-143.0724f, -589.352f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.3f;
}elseif(iParam1==8){
*uParam2={
-141.2247f, -590.1174f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.2f;
}elseif(iParam1==9){
*uParam2={
-141.2247f, -590.1174f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
-140.6835f, -591.424f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.1f;
}elseif(iParam1==11){
*uParam2={
-143.2966f, -592.5063f, 166.0001f 
};
*uParam3=110.9811f;
*uParam4=0.1f;
}
break;
case 9:
if(iParam1==0){
*uParam2={
-74.8035f, -814.8599f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-73.8796f, -815.2426f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
-75.1862f, -815.7838f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
-75.7274f, -814.4772f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.7f;
}elseif(iParam1==4){
*uParam2={
-74.4208f, -813.936f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.6f;
}elseif(iParam1==5){
*uParam2={
-74.2623f, -816.1664f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.5f;
}elseif(iParam1==6){
*uParam2={
-76.11f, -815.4011f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.4f;
}elseif(iParam1==7){
*uParam2={
-75.3447f, -813.5533f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.3f;
}elseif(iParam1==8){
*uParam2={
-73.4969f, -814.3187f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.2f;
}elseif(iParam1==9){
*uParam2={
-72.9557f, -815.6252f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
-75.5689f, -816.7076f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.1f;
}elseif(iParam1==11){
*uParam2={
-76.6513f, -814.0945f, 284.0001f 
};
*uParam3=146.2765f;
*uParam4=0.1f;
}
break;
}}elseif(func_187(iParam0, iParam5)){
if(iParam1==0){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.7f;
}elseif(iParam1==4){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.6f;
}elseif(iParam1==5){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.5f;
}elseif(iParam1==6){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.4f;
}elseif(iParam1==7){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.3f;
}elseif(iParam1==8){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.2f;
}elseif(iParam1==9){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.1f;
}elseif(iParam1==11){
*uParam2={
-1200.862f, -1737.385f, 3.1713f 
};
*uParam3=284.5345f;
*uParam4=0.1f;
}}elseif(func_186(iParam0, iParam5)){
if(iParam1==0){
*uParam2={
2799.313f, -3931.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=1f;
}elseif(iParam1==1){
*uParam2={
2801.313f, -3931.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.9f;
}elseif(iParam1==2){
*uParam2={
2799.313f, -3929.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.8f;
}elseif(iParam1==3){
*uParam2={
2801.313f, -3929.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.7f;
}elseif(iParam1==4){
*uParam2={
2799.313f, -3927.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.6f;
}elseif(iParam1==5){
*uParam2={
2801.313f, -3927.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.5f;
}elseif(iParam1==6){
*uParam2={
2799.313f, -3925.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.4f;
}elseif(iParam1==7){
*uParam2={
2801.313f, -3925.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.3f;
}elseif(iParam1==8){
*uParam2={
2801.313f, -3929.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.2f;
}elseif(iParam1==9){
*uParam2={
2799.313f, -3929.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.2f;
}elseif(iParam1==10){
*uParam2={
2801.313f, -3931.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.1f;
}elseif(iParam1==11){
*uParam2={
2799.313f, -3931.387f, 147.0031f 
};
*uParam3=0f;
*uParam4=0.1f;
}}
return !func_32(*uParam2, 0f, 0f, 0f, 0);
}

int func_186(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==17){
return 1;
}}
return 0;
}

int func_187(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==10){
return 1;
}}
return 0;
}

int func_188(int iParam0, int iParam1){
if(iParam0==45){
switch (iParam1){
case 6:
case 7:
case 8:
case 9:
return 1;
}
default:
}
return 0;
}

int func_189(int iParam0, int iParam1){
if(iParam0==45){
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
}
default:
}
return 0;
}

int func_190(struct<3> Param0, var uParam1, struct<3> Param2){
int iVar0;
int iVar1;
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
iVar0=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, uParam1);
if(!INTERIOR::IS_VALID_INTERIOR(iVar0)){
return 0;
}
iVar1=INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
if(iVar1==iVar0){
return 1;
}}
return 0;
}


char* func_191(int iParam0){
switch (iParam0){
case -1:
return "";
break;
case 0:
return "v_hairdresser";
break;
case 1:
return "v_barbers";
break;
case 2:
return "v_barbers";
break;
case 3:
return "v_barbers";
break;
case 4:
return "v_barbers";
break;
case 5:
return "v_barbers";
break;
case 6:
return "v_barbers";
break;
case 7:
return "v_clotheslo";
break;
case 8:
return "v_clotheslo";
break;
case 9:
return "v_clotheslo";
break;
case 10:
return "v_clotheslo";
break;
case 11:
return "v_clotheslo";
break;
case 12:
return "v_clotheslo";
break;
case 13:
return "v_clotheslo";
break;
case 14:
return "v_clothesmid";
break;
case 15:
return "v_clothesmid";
break;
case 16:
return "v_clothesmid";
break;
case 17:
return "v_clothesmid";
break;
case 18:
return "v_clotheshi";
break;
case 19:
return "v_clotheshi";
break;
case 20:
return "v_clotheshi";
break;
case 21:
return "";
break;
case 22:
return "v_tattoo";
break;
case 23:
return "v_tattoo2";
break;
case 24:
return "v_tattoo2";
break;
case 25:
return "v_tattoo";
break;
case 26:
return "v_tattoo";
break;
case 27:
return "v_tattoo";
break;
case 28:
return "v_gun";
break;
case 29:
return "v_gun2";
break;
case 30:
return "v_gun2";
break;
case 31:
return "v_gun2";
break;
case 32:
return "v_gun2";
break;
case 33:
return "v_gun2";
break;
case 34:
return "v_gun2";
break;
case 35:
return "v_gun2";
break;
case 36:
return "v_gun2";
break;
case 37:
return "v_gun2";
break;
case 38:
return "v_gun";
break;
case 39:
return "v_carmod";
break;
case 40:
return "v_lockup";
break;
case 41:
return "v_carmod";
break;
case 42:
return "v_carmod3";
break;
case 43:
return "v_carmod3";
break;
case 44:
return "lr_supermod_int";
break;
case 45:
return func_193(Global_102986);
break;
case 46:
return "gr_grdlc_int_01";
break;
case 47:
return func_192();
break;
case 48:
return "ba_dlc_int_03_ba";
break;
case 49:
return "xs_x18_int_mod";
break;
case 52:
return "ch_dlc_plan";
break;
case 50:
return "vw_dlc_casino_apart";
break;
case 51:
return "vw_dlc_casino_main";
break;
case 53:
return "h4_int_sub_h4";
break;
case 54:
return "tr_tuner_car_meet";
break;
case 55:
return "tr_tuner_car_meet";
break;
case 56:
return "sf_dlc_office_sec";
break;
case 57:
return "sf_dlc_studio_sec";
break;
case 58:
return "";
break;
case 59:
return "xm3_dlc_int_03_xm3";
break;
case 60:
return "sm_smugdlc_int_01";
break;
}
return "";
}


char* func_192(){
return "M23_1_dlc_int_01_M23_1";
}


char* func_193(int iParam0){
switch (iParam0){
case 1:
return "imp_impexp_intwaremed";
break;
case 2:
return "imp_impexp_intwaremed";
break;
case 3:
return "imp_impexp_intwaremed";
break;
case 6:
case 7:
case 8:
case 9:
return "imp_imptexp_mod_int_01";
break;
case 4:
return "Bkr_Biker_DLC_INT_01";
break;
case 5:
return "Bkr_Biker_DLC_INT_02";
break;
case 10:
return "gr_grdlc_int_01";
break;
case 11:
return "gr_grdlc_int_02";
break;
case 12:
return "sm_smugdlc_int_01";
break;
case 13:
return func_192();
break;
case 14:
return "xm_x17dlc_int_02";
break;
case 15:
return "ba_dlc_int_01_ba";
break;
case 16:
return "ba_dlc_int_03_ba";
break;
case 17:
if(func_166()==0){
return "xs_x18_int_mod";
}else{
return "xs_x18_int_mod2";
}
break;
case 18:
return "tr_tuner_car_meet";
break;
case 19:
return "tr_tuner_mod_garage";
break;
case 20:
return "sf_dlc_garage_sec";
break;
case 21:
return "xm3_dlc_int_03_xm3";
break;
default:
return "";
break;
}
return "";
}


void func_194(){
int iVar0;
bool bVar1;
int iVar2;
if(iLocal_296 > -1){
if(iLocal_296 !=NETWORK::PARTICIPANT_ID_TO_INT()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_296))){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_296));
bVar1=true;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iVar0, PLAYER::PLAYER_ID())){
iVar2=1;
}}}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22), 0)){
if(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1==0){
if(!bVar1 || (bVar1 && iVar2)){
func_195(NETWORK::NET_TO_VEH(Local_333.f_22), 0, 10);
}}}}}}}


void func_195(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
HUD::GET_HUD_COLOUR(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
if(iParam1==0){}
VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0);
if(func_15(PLAYER::PLAYER_ID(), 1, 1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_196(iParam0)==0){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
if(VEHICLE::IS_VEHICLE_VISIBLE(iParam0)){
GRAPHICS::ADD_ENTITY_ICON(iParam0, "MP_Arrow");
GRAPHICS::SET_ENTITY_ICON_COLOR(iParam0, uVar0, uVar1, uVar2, 190);
GRAPHICS::SET_ENTITY_ICON_VISIBILITY(iParam0, 1);
}}}}}}

int func_196(int iParam0){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)==0 && VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)==0){
return 0;
}
if(VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0)){
return 0;
}
return 1;
}


void func_197(){
int iVar0;
if(MISC::IS_BIT_SET(uLocal_341, 5)){
if(iLocal_295 !=iLocal_296){
if(iLocal_296 > -1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_296))){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_296));
if(iVar0 !=PLAYER::PLAYER_ID()){
if(!func_275(PLAYER::PLAYER_ID(), 1, 0)){
func_198("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
}}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!MISC::IS_BIT_SET(Local_333.f_23, 8)){
MISC::SET_BIT(&(Local_333.f_23), 8);
}}}}
iLocal_295=iLocal_296;
}}}

int func_198(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
int iVar0;
int iVar1;
struct<16> Var2;
int iVar3;
int iVar4;
iVar0=-1;
iVar1=PLAYER::GET_PLAYER_TEAM(iParam1);
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3){
if(func_9(iParam1)){
if(!bParam2){
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
}else{
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var2)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
if((iVar1 !=-1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4){
if(Global_4718592.f_112316[iVar1] !=-1){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_248(iVar1, iParam1, 0));
}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_207(iParam1, -2, 1, 0, 0));
}}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_207(iParam1, -2, 1, 0, 0));
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_205(&Var2));
if(!bParam4){
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}else{
Global_2764376={
func_204(iParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376)){
iVar3=0;
if(MISC::ARE_STRINGS_EQUAL(&(Global_2764306.f_22), "Leader") && Global_2764306.f_30==0){
iVar3=1;
}
if(Global_2764306.f_21 > 0){
iVar4=0;
}else{
iVar4=1;
}
if(bParam5){
if(bParam6){
Var2={
func_203(&Var2) 
};
}
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, iVar3, 0, Global_2764306, &Var2, Global_1576220, Global_1576221, Global_1576222);
}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, iVar3, 0, Global_2764306, Global_1576220, Global_1576221, Global_1576222);
}}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}
func_199(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
}}
return iVar0;
}


void func_199(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_202() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_25(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_200(iParam2);
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

int func_200(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944768 - 1)){
if(iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1){
func_201(iVar0);
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


void func_201(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944768.f_5[iVar0 /*53*/]={
Global_1944768.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_202(){
return DLC::IS_DLC_PRESENT(-1762644250);
}
struct<16> func_203(char* sParam0){
struct<16> Var0;
StringCopy(&Var0, "<C>", 64);
StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
StringConCat(&Var0, sParam0, 64);
StringConCat(&Var0, "</C>", 64);
return Var0;
}
struct<13> func_204(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


var func__205(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_206(&cVar0);
}


var func__206(char[4] cParam0){
return cParam0;
}

int func_207(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(!func_9(iParam0)){
return 1;
}
if(func_246(iParam0) && !bParam4){
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
if(((func_246(PLAYER::PLAYER_ID()) || (func_245() && func_244())) && !MISC::IS_BIT_SET(Global_2794162.f_4697, 31)) && !bParam4){
iVar1=func_243();
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_15(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_248(iParam1, iParam0, 0);
}else{
return func_222(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_222(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_248(iParam1, iParam0, 0);
}else{
return func_208(0, -1, 0);
}}else{
return func_208(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_112316[iParam1] !=-1){
return func_248(iParam1, iParam0, 0);
}else{
return func_222(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_222(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_208(bool bParam0, int iParam1, bool bParam2){
return func_209(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_209(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
if((func_221() || (func_220() && func_218())) && Global_1665516.f_1){
if(bParam1){
return func_217(iParam2, iVar0);
}else{
return func_217(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_214(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_213(1);
}else{
return func_213(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_210(iVar0, iParam2, 1, 4);
}else{
return func_210(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_213(1);
}
return func_213(0);
}

int func_210(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_212(iParam0, iParam1, iParam3);
if(func_211(Global_4718592.f_117591, 1)){
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

int func_211(int iParam0, bool bParam1){
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

int func_212(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_214(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_213(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_215(iParam0, bVar0, iParam1, bVar1) || !func_215(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_215(iParam0, bVar0, iParam1, bVar1) || !func_215(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_215(iParam0, bVar0, iParam1, bVar1) || !func_215(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_215(iParam0, bVar0, iParam1, bVar1) || !func_215(iParam1, bVar1, iParam0, bVar0)){
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

int func_215(int iParam0, bool bParam1, int iParam2, bool bParam3){
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
if(((!func_15(iVar1, 1, 1) || func_25(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_216(iVar1)){
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


var func__216(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

int func_217(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_212(iParam1, iParam0, 4);
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

int func_218(){
if(func_219()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_175236, 4);
}


bool func_219(){
return MISC::IS_BIT_SET(Global_4718592.f_164769, 12);
}


bool func_220(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_175236, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_221(){
if(func_219() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_222(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
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
iVar2=iParam0;
if(iVar2 > -1){
if(Global_1853988[iVar2 /*867*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_231()){
iVar3=func_227(iParam0);
if(!iVar3==-1){
return func_225(iVar3);
}}
if((func_224(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_214(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_213(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_223(1);
}else{
return func_209(iParam1, 1, iVar0, bParam4);
}}elseif((Global_1836600 || Global_1836590) || Global_1853988[iParam0 /*867*/]==0){
if(iParam0==iParam1 || (Global_1836600==1 && Global_1836610==0)){
return func_213(1);
}else{
return func_209(iParam1, 1, iVar0, bParam4);
}}
if(Global_1836594 && Global_1836080.f_14==iParam0){
return 28;
}}
iVar4=func_227(iParam0);
if(!iVar4==-1){
return func_225(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_223(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_224(int iParam0, int iParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(iParam1)==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(iParam0)==PLAYER::GET_PLAYER_TEAM(iParam1);
}else{
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && iParam2==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(iParam0)==iParam2;
}
return PLAYER::GET_PLAYER_TEAM(iParam0)==iParam2;
}

int func_225(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_226(iParam0);
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


var func__226(int iParam0){
return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_227(int iParam0){
if(func_9(iParam0)){
if(func_229(iParam0, 1)){
return Global_2648711.f_818.f_11[func_228(iParam0)];
}}
return -1;
}

int func_228(int iParam0){
if(func_9(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_123();
}


bool func_229(int iParam0, bool bParam1){
if(!func_9(iParam0)){
return 0;
}
if(!bParam1){
if(func_230(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_123();
}

int func_230(int iParam0){
if(func_9(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_123()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_231(){
if(((((((func_242() || func_241()) || func_31()) || func_240()) || func_239()) || func_237()) || func_235()) || func_232()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_232(){
return func_233(Global_4718592.f_117591);
}

int func_233(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_234(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_234(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33923[iParam0];
}
return -1;
}

int func_235(){
return func_236(Global_4718592.f_117591);
}

int func_236(int iParam0){
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

int func_237(){
return func_238(Global_4718592.f_117591);
}

int func_238(int iParam0){
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


var func__239(){
return Global_2683883.f_24;
}


var func__240(){
return Global_2683883.f_21;
}


var func__241(){
return Global_2683883.f_18;
}


var func__242(){
return Global_2683883.f_17;
}


var func__243(){
return Global_2621446.f_2;
}


var func__244(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__245(){
return MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_246(int iParam0){
if(func_25(iParam0, 0)){
return 1;
}
if(func_247()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_247(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_248(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058071.f_14[iParam0];
if(func_231()){
iVar2=func_227(iParam1);
if(!iVar2==-1){
return func_225(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_123()){
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
iVar0=func_209(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_249(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_214(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_223(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_249(int iParam0){
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


bool func_250(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_251(){
if((Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3) || (Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3==0 && func_72(PLAYER::PLAYER_ID(), 6))){
if(func_140(PLAYER::PLAYER_ID(), 1, 0) || func_114()){
if((!func_252(PLAYER::PLAYER_ID(), 5) && !func_252(PLAYER::PLAYER_ID(), 32)) && !func_252(PLAYER::PLAYER_ID(), 148)){
return 1;
}elseif(!iLocal_112){
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
HUD::REMOVE_BLIP(&Global_1935850);
}
iLocal_112=1;
}}elseif(iLocal_112){
func_259();
iLocal_112=0;
}
if(Local_333.f_26==3){
if(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3==0 && func_72(PLAYER::PLAYER_ID(), 6)){
return 1;
}}}
return 0;
}

int func_252(int iParam0, int iParam1){
int iVar0;
if(func_85() !=0){
return 0;
}
if(!func_253(iParam0)){
return 0;
}
iVar0=iParam0;
if(Global_1853988[iVar0 /*867*/]==iParam1){
return 1;
}
return 0;
}

int func_253(int iParam0){
if(!func_9(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_2672524.f_1, iParam0);
}


void func_254(){
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
if(func_120() || func_255()){
HUD::SET_BLIP_DISPLAY(Global_1935850, 0);
}else{
HUD::SET_BLIP_DISPLAY(Global_1935850, 4);
}
if(!iLocal_101){
if(func_275(PLAYER::PLAYER_ID(), 1, 0)){
HUD::SET_BLIP_AS_SHORT_RANGE(Global_1935850, 1);
iLocal_101=1;
}}elseif(!func_275(PLAYER::PLAYER_ID(), 1, 0)){
HUD::SET_BLIP_AS_SHORT_RANGE(Global_1935850, 0);
iLocal_101=0;
}}}


var func__255(){
return Global_2646835.f_1869;
}

int func_256(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_333.f_22), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_333.f_22), 1, 40000)){
if(NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_333.f_22)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_333.f_22)){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_333.f_22), -2000f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_333.f_22), 0f);
}
return 1;
}elseif(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_11(Local_333.f_22)){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_333.f_22), -2000f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_333.f_22), 0f);
return 1;
}}else{
return 1;
}}}else{
return 1;
}}
return 0;
}

int func_257(){
int iVar0;
int iVar1;
if(iLocal_296==-1 && MISC::IS_BIT_SET(uLocal_341, 5)){
return 0;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22))){
if(func_258(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22), -1)){
return 1;
}}}
if(iLocal_296 >=0){
if(iLocal_296 !=NETWORK::PARTICIPANT_ID_TO_INT()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_296))){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_296));
if(func_15(iVar0, 1, 1)){
iVar1=PLAYER::GET_PLAYER_PED(iVar0);
if(PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_333.f_22))){
if(func_258(iVar1, NETWORK::NET_TO_VEH(Local_333.f_22), -1)){
return 1;
}}
}}}}}}
return 0;
}

int func_258(int iParam0, int iParam1, int iParam2){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, 0)==iParam0){
return 1;
}}}
return 0;
}


void func_259(){
Global_1935850=HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_333.f_22));
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_333.f_22)))){
HUD::SET_BLIP_SPRITE(Global_1935850, 348);
}else{
HUD::SET_BLIP_SPRITE(Global_1935850, 225);
}
HUD::SET_BLIP_COLOUR(Global_1935850, 2);
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1935850, "IMPEX_HIPR_BLP");
if(func_120()){
HUD::SET_BLIP_DISPLAY(Global_1935850, 0);
}}

int func_260(int iParam0, int iParam1){
if(func_171(iParam0, 1215605247, &uLocal_321, 0f, 500, 1, iParam1)){
return 1;
}
return 0;
}


void func_261(int iParam0, int iParam1, bool bParam2){
if(func_266()){
if(iParam1==1){
if(Global_2794162.f_4499==-1){
Global_2794162.f_4499=Global_262145.f_27370;
}
func_265(&(Global_2794162.f_4497), 0, 0);
if(bParam2){
if(Global_2794162.f_4502==-1){
Global_2794162.f_4502=Global_262145.f_27371;
}
func_265(&(Global_2794162.f_4500), 0, 0);
}else{
Global_1574582=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=0;
func_264(1);
}}else{
Global_1574582=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=0;
func_264(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_263()) && !func_262(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_262(int iParam0){
if(func_140(iParam0, 1, 0)){
if(Global_1853988[iParam0 /*867*/] !=6){
return 1;
}}
return 0;
}


bool func_263(){
return Global_2683883.f_841;
}


void func_264(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_266()){
if(func_15(PLAYER::PLAYER_ID(), 1, 0)){
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
if(func_15(PLAYER::PLAYER_ID(), 1, 1)){
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


void func_265(var uParam0, bool bParam1, bool bParam2){
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


bool func_266(){
return Global_1574582;
}


void func_267(int iParam0){
if(iParam0==1){
if(!MISC::IS_BIT_SET(Global_2794162.f_4697, 28)){
MISC::SET_BIT(&(Global_2794162.f_4697), 28);
}}elseif(MISC::IS_BIT_SET(Global_2794162.f_4697, 28)){
MISC::CLEAR_BIT(&(Global_2794162.f_4697), 28);
}}

int func_268(){
if(func_120()){
return 0;
}
if(!func_269(0, 1, 1, 1)){
return 0;
}
return 1;
}

int func_269(bool bParam0, bool bParam1, int iParam2, bool bParam3){
if(iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
return 0;
}
if(func_109()){
return 0;
}
if(!CAM::IS_SCREEN_FADED_IN()){
return 0;
}
if(func_117()){
return 0;
}
if(func_114()){
return 0;
}
if(bParam1){
if(func_140(PLAYER::PLAYER_ID(), 1, 0)){
return 0;
}}
if(bParam0){
if(func_273(PLAYER::PLAYER_ID())){
return 0;
}}
if(func_112()){
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
if(func_272()){
return 0;
}
if(func_271()){
return 0;
}
if(func_545()){
return 0;
}
if(Global_75816){
return 0;
}
if(Global_2804769){
return 0;
}
if(func_270()){
return 0;
}
return 1;
}


bool func_270(){
return Global_2765083;
}


bool func_271(){
return Global_2683883.f_691;
}


bool func_272(){
return Global_2683883.f_845;
}

int func_273(int iParam0){
if(Global_2657704[iParam0 /*463*/].f_218==0){
return 0;
}
return 1;
}


void func_274(bool bParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0)){
MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
}}

int func_275(int iParam0, bool bParam1, bool bParam2){
if(iParam0==func_123()){
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

int func_276(){
struct<3> Var0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(!func_257()){
Var0={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_333.f_22), 1) 
};
if(func_277(Var0, 1215605247, 18)){
if(func_260(NETWORK::NET_TO_VEH(Local_333.f_22), 1)){
return 1;
}}}}}
return 0;
}

int func_277(struct<3> Param0, int iParam1, int iParam2){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_174(iParam1), 1) <=IntToFloat(iParam2)){
return 1;
}
return 0;
}


void func_278(){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22), 0)){
if(!MISC::IS_BIT_SET(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2)){
MISC::SET_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
}}elseif(func_279(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22), 1) < 180f){
if(!MISC::IS_BIT_SET(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2)){
MISC::SET_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
}}elseif(MISC::IS_BIT_SET(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2)){
MISC::CLEAR_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
}}}}}


float func_279(int iParam0, int iParam1, int iParam2){
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


void func_280(){
int iVar0;
if(iLocal_87){
func_386();
if(!MISC::IS_BIT_SET(uLocal_341, 1)){
if(Global_2794162.f_1783 > 0){
if(Global_2794162.f_1786==0){
Global_2794162.f_1786=NETWORK::GET_NETWORK_TIME();
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2794162.f_1786) > Global_262145.f_12116){
if(!func_109()){
if(func_71()){
if(func_268()){
if(!func_385()){
if(!func_384(0) && !func_125()){
Global_22950=0;
iVar0=func_81(1200, -1);
if(!MISC::IS_BIT_SET(iVar0, 0)){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2794162.f_1786) > 20000){
if(func_383(18, "CELL_CLTEST6", 2, "NULL", Global_2794162.f_1783, "TestSender1", 4, 0, 1, 0, 0, bLocal_108, 0, 0, 0, 0, 0)){
MISC::SET_BIT(&iVar0, false);
func_147(1200, iVar0, -1, 1);
MISC::SET_BIT(&uLocal_341, true);
func_381(0f, 0f, 0f, func_382(19), "");
Global_2794162.f_1785=1;
iLocal_87=0;
}}
}
elseif(func_383(18, "CELL_CLTEST1", 2, "NULL", Global_2794162.f_1783, "TestSender1", 4, 0, 1, 0, 0, bLocal_108, 0, 0, 0, 0, 0)){
func_381(0f, 0f, 0f, func_382(19), "");
MISC::SET_BIT(&uLocal_341, true);
Global_2794162.f_1785=1;
iLocal_87=0;
}
}}else{
Global_2794162.f_1786=NETWORK::GET_NETWORK_TIME();
}}
}}}}}}elseif(MISC::IS_BIT_SET(uLocal_341, 1)){
if(!MISC::IS_BIT_SET(uLocal_318, 5)){
if(func_268()){
if(bLocal_108){
func_170("IMPEX_HELP_LNCH", -1);
}
MISC::SET_BIT(&uLocal_318, 5);
func_525(&uLocal_304, 0, 0);
}}}
if(iLocal_110){
if(func_533()){
if(!func_526(&uLocal_118)){
func_525(&uLocal_118, 0, 0);
}elseif(func_524(&uLocal_118, 10000, 0)){
if(func_281(18, "CELL_IMPT", 0, 0)){
iLocal_110=0;
func_47(&uLocal_118);
}}}}}


bool func_281(int iParam0, char* sParam1, bool bParam2, int iParam3){
char* sVar0;
bool bVar1;
int iVar2;
sVar0=0;
bVar1=false;
iVar2=-99;
return func_282(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_282(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8){
var uVar0;
int iVar1;
uVar0=16;
iVar1=2;
if(bParam7){
iVar1=5;
}
return func_283(&uVar0, iParam0, func_380(), sParam1, iVar1, 3, uParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_283(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12){
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
iVar1=func_379(sParam2, sParam3);
iVar2=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam7)){
iVar2=MISC::GET_HASH_KEY(sParam7);
}
if(func_378(iVar0, iVar1, iVar2)){
return 1;
}
if(!func_374(uParam6)){
return 0;
}
if(func_371(iVar0, iVar1, iVar2)){
if(func_370()){
return 0;
}
func_369();
return func_290(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
}
if(!func_289(iParam4)){
return 0;
}
func_284(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
return 0;
}


void func_284(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6){
Global_1649067.f_40.f_1=iParam0;
Global_1649067.f_40.f_2=iParam1;
Global_1649067.f_40.f_3=iParam2;
StringCopy(&(Global_1649067.f_40.f_4), sParam3, 16);
Global_1649067.f_40.f_8=iParam4;
Global_1649067.f_40.f_9=iParam5;
Global_1649067.f_40.f_14=uParam6;
func_285(iParam4);
func_369();
Global_1649067.f_40.f_13=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}


void func_285(int iParam0){
if(func_288(iParam0)){
func_287();
return;
}
func_286();
}


void func_286(){
Global_1649067.f_40.f_10=0;
}


void func_287(){
Global_1649067.f_40.f_10=1;
}

int func_288(int iParam0){
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


bool func_289(int iParam0){
return iParam0 > Global_1649067.f_40.f_8;
}

int func_290(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12){
struct<2> Var0;
func_368();
if(iParam6==5){
iParam6=0;
}
if(iParam5==8){
return func_365(uParam0, sParam3, sParam4);
}
if(iParam5==4){
StringCopy(&Var0, "CELL_226", 16);
return func_362(uParam0, iParam1, sParam3, sParam4, &Var0);
}
if(iParam5==1 || iParam5==7){
if(iParam6==2){
return func_365(uParam0, sParam3, sParam4);
}
return func_345(uParam0, iParam1, sParam3, sParam4, uParam7);
}
if(iParam5==5){
return func_344(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==2){
return func_333(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==3){
return func_332(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
}
if(iParam5==6){
return func_291(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
}
return 0;
}

int func_291(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
func_331();
bVar0=true;
if(func_293(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8)){
func_292(120000);
return 1;
}
return 0;
}


void func_292(int iParam0){
Global_1649067.f_40.f_11=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
Global_1649067.f_40.f_12=1;
}

int func_293(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9){
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
iVar0=func_123();
iVar1=0;
if(iParam0==145){
iVar0=iParam1;
sVar2=PLAYER::GET_PLAYER_NAME(iVar0);
iVar1=func_325(iVar0);
if(iVar1==0){
if(NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649067.f_40.f_13)){
return 0;
}}}else{
sVar2="";
}
iVar3=0;
sVar4=func_324(uParam5, bParam6, &iVar3);
uVar5=func_322(iParam7, &iVar3);
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
bVar12=func_321(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
}else{
bVar12=func_297(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
}
if(!bVar12){
return 0;
}
if(MISC::IS_BIT_SET(uParam4, 0)){
func_296();
}
func_331();
func_295();
func_294();
return 1;
}


void func_294(){
Global_1649067.f_57=0;
Global_1649067.f_57.f_1=0;
}


void func_295(){
Global_1649067.f_40=3;
}


void func_296(){
MISC::SET_BIT(&Global_8370, 8);
}

int func_297(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9){
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
if(func_298(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_9077=iParam6;
MISC::SET_BIT(&Global_4542302, false);
}
return 1;
}
return 0;
}

int func_298(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_314();
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
if(func_313()==0){
func_311();
return 0;
}
func_310(Global_4542286);
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
func_314();
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
func_309(0);
break;
case 1:
func_309(1);
break;
case 2:
func_309(2);
break;
case 3:
func_309(3);
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
func_314();
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
if(!func_308()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, 1);
}}}
if(!Global_20705){
if(Global_20500.f_1==6){
func_307(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_303(1);
func_307(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20480), -1082130432, -1082130432, -1082130432);
}}
if(Global_1978329 !=-1 && iParam0==Global_1978329){
bVar1=true;
}
func_299(iParam0, sParam1, bVar1, func_302(PLAYER::PLAYER_ID()));
return 1;
}


void func_299(int iParam0, char* sParam1, bool bParam2, var uParam3){
struct<14> Var0;
if(!func_300()){
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

int func_300(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_123()){
return 0;
}
if(func_301(PLAYER::PLAYER_ID())){
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


bool func_301(int iParam0){
return func_134(iParam0, 20);
}


var func__302(int iParam0){
return Global_1853988[iParam0 /*867*/].f_205.f_6;
}


void func_303(int iParam0){
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
Global_22913=0;
Global_8975=iParam0;
iVar0=0;
while (iVar0 < 9){
Global_8939[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
iVar1=0;
if(func_306(14)){
while (iVar1 < 34){
if(iParam0==Global_8377[iVar1 /*15*/].f_11){
if(iVar0==Global_8377[iVar1 /*15*/].f_4){
if(Global_8939[iVar0]==0){
Global_8903[iVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8371, 3)){
iVar2=42;
Global_20708=1;
}else{
iVar2=255;
Global_20708=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_305(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694571){
if(iVar1==14){
func_304(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8939[iVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8377[iVar1 /*15*/].f_11){
if(iVar0==Global_8377[iVar1 /*15*/].f_4){
if(Global_8939[iVar0]==0){
Global_8903[iVar0]=iVar1;
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
func_304(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78689){
iVar4=0;
iVar4=Global_4541036;
iVar5=0;
while (iVar5 < 12){
if(Global_4541037[iVar5 /*104*/].f_24 !=0){
if(Global_4541037[iVar5 /*104*/].f_28==0){
if(Global_4541037[iVar5 /*104*/].f_99[Global_20500]==1){
iVar4++;
}}
}
iVar5++;
}
func_304(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20500){
case 0:
iVar6=Global_44580;
break;
case 1:
iVar6=Global_44581;
break;
case 2:
iVar6=Global_44582;
break;
default:
break;
}
func_304(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_304(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_305(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8376);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8371, 6)){
iVar7=42;
}else{
iVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_305(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8371, 3)){
iVar8=42;
Global_20708=1;
}else{
iVar8=255;
Global_20708=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_305(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_305(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8377[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8371, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_305(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8377[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890239.f_1;
func_304(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_304(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8939[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_304(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam7)){
func_305(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_305(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_305(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_305(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_305(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_305(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


bool func_306(int iParam0){
return Global_43377==iParam0;
}


void func_307(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


bool func_308(){
return Global_1575063;
}


void func_309(int iParam0){
var uVar0;
var uVar1;
uVar0=Global_113810.f_14054[iParam0 /*20*/].f_8;
uVar0=uVar0;
uVar1=uVar1;
}


void func_310(int iParam0){
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


void func_311(){
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
if(!func_312(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18)){
Global_4542286=iVar2;
}
iVar2++;
}
Global_4541037[Global_4542286 /*104*/].f_24=1;
}

int func_312(struct<6> Param0, struct<6> Param1){
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

int func_313(){
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
if(!func_312(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18)){
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


void func_314(){
if(func_306(14)){
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
Global_20500=func_315();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


var func__315(){
func_316();
return Global_113810.f_2366.f_539.f_4321;
}


void func_316(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_319(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_318(PLAYER::PLAYER_PED_ID());
if(func_317(iVar0) && (!func_306(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_317(Global_113810.f_2366.f_539.f_4321)){
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


bool func_317(int iParam0){
return iParam0 < 3;
}

int func_318(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_319(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_319(int iParam0){
if(func_317(iParam0)){
return func_320(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__320(int iParam0){
return Global_2058[iParam0 /*29*/];
}

int func_321(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16){
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
if(func_298(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0)==1){
if(bParam11==1){
Global_9077=iParam10;
MISC::SET_BIT(&Global_4542302, false);
}
return 1;
}
return 0;
}

int func_322(int iParam0, int iParam1){
if(iParam0==-99){
return -99;
}
func_323(2, iParam1);
return iParam0;
}


void func_323(int iParam0, var uParam1){
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


var func__324(char* sParam0, bool bParam1, int iParam2){
if(MISC::IS_STRING_NULL_OR_EMPTY(uParam0)){
return sLocal_16;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_16)){
return sLocal_16;
}
func_323(1, iParam2);
if(bParam1){
return sParam0;
}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_325(int iParam0){
int iVar0;
iVar0=func_328(iParam0);
if(iVar0==-1){
func_326(iParam0, 1);
return 0;
}
Global_1666485[iVar0 /*5*/].f_4=1;
return Global_1666485[iVar0 /*5*/].f_2;
}


void func_326(int iParam0, bool bParam1){
if(!func_15(iParam0, 0, 1)){
return;
}
if(func_328(iParam0) !=-1){
return;
}
if(Global_1666648){
if(iParam0==Global_1666648.f_1){
return;
}}
if(func_327(iParam0)){
return;
}
if(Global_1666686 >=32){
return;
}
Global_1666653[Global_1666686]=iParam0;
Global_1666686++;
if(bParam1){}}

int func_327(int iParam0){
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

int func_328(int iParam0){
int iVar0;
if(!func_15(iParam0, 0, 1)){
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
func_329(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_329(int iParam0){
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
func_330(&(Global_1666485[iVar2 /*5*/]));
Global_1666646=(Global_1666646 - 1);
}


void func_330(var uParam0){
*uParam0=0;
uParam0->f_1=func_123();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}


void func_331(){
Global_1649067.f_40.f_9=4;
}

int func_332(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
func_331();
bVar0=false;
return func_293(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_333(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
bVar0=false;
return func_334(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_334(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9){
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
iVar0=func_123();
iVar1=0;
if(iParam0==145){
iVar0=iParam1;
sVar2=PLAYER::GET_PLAYER_NAME(iVar0);
iVar1=func_325(iVar0);
if(iVar1==0){
if(NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649067.f_40.f_13)){
return 0;
}}
Global_22906=iVar1;
}else{
sVar2="";
}
iVar3=0;
sVar4=func_324(uParam5, bParam6, &iVar3);
uVar5=func_322(iParam7, &iVar3);
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
bVar12=func_383(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
}else{
bVar12=func_336(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
}
if(!bVar12){
return 0;
}
if(MISC::IS_BIT_SET(uParam4, 0)){
func_296();
}
func_335();
func_295();
func_294();
return 1;
}


void func_335(){
Global_1649067.f_40.f_9=3;
}

int func_336(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9){
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
if(func_338(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_9077=iParam6;
Global_8980[3 /*6*/]={
func_337(iParam0) 
};
Global_9057=iParam0;
MISC::SET_BIT(&Global_8370, true);
MISC::SET_BIT(&Global_8370, 7);
}
return 1;
}
return 0;
}


struct<4> func_337(int iParam0){
return Global_2058[iParam0 /*29*/].f_3;
}

int func_338(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_314();
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
if(func_343()==0){
func_341();
return 0;
}
func_340(Global_22912);
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
func_309(0);
func_309(2);
func_309(1);
}else{
func_314();
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
func_309(0);
Global_9076=0;
break;
case 1:
func_309(1);
Global_9076=1;
break;
case 2:
func_309(2);
Global_9076=2;
break;
case 3:
func_309(3);
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
func_314();
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
if(!func_308()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, 1);
}}}
if(!Global_20705){
if(Global_20500.f_1==6){
func_307(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_303(1);
func_307(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20480), -1082130432, -1082130432, -1082130432);
}}
if(Global_1978329 !=-1 && iParam0==Global_1978329){
bVar1=true;
}
func_339(iParam0, sParam1, bVar1, func_302(PLAYER::PLAYER_ID()));
return 1;
}


void func_339(int iParam0, char* sParam1, bool bParam2, var uParam3){
struct<14> Var0;
if(!func_300()){
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


void func_340(int iParam0){
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


void func_341(){
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
if(!func_342(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18)){
Global_22912=iVar2;
}
iVar2++;
}
Global_113810.f_14144[Global_22912 /*104*/].f_24=1;
}

int func_342(struct<6> Param0, struct<6> Param1){
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

int func_343(){
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
if(!func_342(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18)){
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

int func_344(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8){
bool bVar0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
func_335();
bVar0=true;
if(func_334(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8)){
func_292(120000);
return 1;
}
return 0;
}

int func_345(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4){
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
bVar0=func_361(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
}else{
bVar0=func_351(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
}
if(bVar0){
if(MISC::IS_BIT_SET(uParam4, 3)){
func_350(1);
}
if(MISC::IS_BIT_SET(uParam4, 5)){
func_349(1);
}
func_348();
func_295();
func_347();
func_346();
return 1;
}
return 0;
}


void func_346(){
Global_2804285=0;
}


void func_347(){
Global_1649067.f_57=1;
Global_1649067.f_57.f_1=0;
}


void func_348(){
Global_1649067.f_40.f_9=1;
}


void func_349(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8372, false);
}else{
MISC::CLEAR_BIT(&Global_8372, false);
}}


void func_350(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 20);
}else{
MISC::CLEAR_BIT(&Global_8370, 20);
}}

int func_351(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
func_360(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
return func_352(sParam3, iParam4, bParam7);
}

int func_352(char* sParam0, int iParam1, bool bParam2){
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
func_359();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_116(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_358();
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
func_314();
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
if(func_357()){
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
if(func_356()){
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
func_355();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_354();
func_353();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_359();
}
return 0;
}


void func_353(){
if(!func_300()){
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


void func_354(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_355(){
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

int func_356(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_357(){
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


void func_358(){
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


void func_359(){
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


void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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

int func_361(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
func_360(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
return func_352(sParam3, iParam4, bParam7);
}

int func_362(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){}
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_364(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1)){
func_363();
func_348();
func_295();
func_347();
func_346();
return 1;
}
return 0;
}


void func_363(){
Global_22863=0;
}


bool func_364(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8){
func_360(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
return func_352(sParam3, iParam4, bParam8);
}

int func_365(var uParam0, char* sParam1, char* sParam2){
if(func_367(uParam0, sParam1, sParam2, 12, 0, 0, 0)){
func_366();
func_295();
func_347();
return 1;
}
return 0;
}


void func_366(){
Global_1649067.f_40.f_9=2;
}


bool func_367(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_352(sParam2, iParam3, 0);
}


void func_368(){
Global_1649067.f_55=Global_1649067.f_40.f_1;
Global_1649067.f_55.f_1=Global_1649067.f_40.f_10;
}


void func_369(){
Global_1649067.f_40=1;
}


bool func_370(){
return Global_1649067.f_40==1;
}

int func_371(int iParam0, int iParam1, int iParam2){
if(!func_372(iParam0)){
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

int func_372(int iParam0){
if(!func_373()){
return 0;
}
if(!Global_1649067.f_40.f_1==iParam0){
return 0;
}
return 1;
}

int func_373(){
if(Global_1649067.f_40==0){
return 0;
}
return 1;
}

int func_374(var uParam0){
if(func_377()){
return 0;
}
if(func_111()){
return 0;
}
if(func_384(0)){
return 0;
}
if(Global_1574632.f_18 !=0){
return 0;
}
if(Global_1935879 || func_376()){
return 0;
}
if(!MISC::IS_BIT_SET(uParam0, 6)){
if(func_375()){
return 0;
}}
return 1;
}


bool func_375(){
return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1665432);
}

int func_376(){
if(Global_4521801.f_943 > -1){
return 1;
}
return 0;
}


bool func_377(){
return func_356();
}

int func_378(int iParam0, int iParam1, int iParam2){
if(!func_111()){
return 0;
}
return func_371(iParam0, iParam1, iParam2);
}

int func_379(char* sParam0, char* sParam1){
char cVar0[64];
StringCopy(&cVar0, sParam0, 64);
StringConCat(&cVar0, sParam1, 64);
return MISC::GET_HASH_KEY(&cVar0);
}


char* func_380(){
return "TXTMSG";
}

int func_381(struct<3> Param0, char* sParam1, char* sParam2){
int iVar0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
iVar0=0;
while (iVar0 < 16){
if(!MISC::ARE_STRINGS_EQUAL(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), sParam1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2794162.f_4070[iVar0 /*26*/].f_4))){
Global_2794162.f_4070[iVar0 /*26*/]=1;
Global_2794162.f_4070[iVar0 /*26*/].f_1={
Param0 
};
StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), sParam1, 24);
StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_10), sParam2, 64);
return 1;
}}elseif(!func_32(Global_2794162.f_4070[iVar0 /*26*/].f_1, Param0, 0)){
Global_2794162.f_4070[iVar0 /*26*/]=1;
Global_2794162.f_4070[iVar0 /*26*/].f_1={
Param0 
};
StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), sParam1, 24);
StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_10), sParam2, 64);
return 1;
}else{
return 1;
}
iVar0++;
}}
return 0;
}


char* func_382(int iParam0){
if(iParam0==iParam0){}
return "";
}

int func_383(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16){
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
if(func_338(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0)==1){
if(bParam11==1){
Global_9077=iParam10;
Global_8980[3 /*6*/]={
func_337(iParam0) 
};
Global_9057=iParam0;
StringCopy(&Global_9058, sParam5, 64);
MISC::SET_BIT(&Global_8370, true);
MISC::SET_BIT(&Global_8370, 7);
}
return 1;
}
return 0;
}

int func_384(int iParam0){
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


bool func_385(){
return func_373();
}


void func_386(){
if(func_71()){
if(!iLocal_323==Local_333.f_32){
Global_2794162.f_1743={
Local_332 
};
func_387();
iLocal_323=Local_333.f_32;
}}}


void func_387(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 5){
StringCopy(&(Global_2794162.f_1762[iVar1 /*4*/]), "", 16);
if(!Global_2794162.f_1743[iVar1]==-1 && Global_2794162.f_1743.f_6[iVar1]==0){
StringCopy(&(Global_2794162.f_1762[iVar0 /*4*/]), func_388(Global_2794162.f_1743[iVar1], 1), 16);
iVar0++;
}
iVar1++;
}
Global_2794162.f_1783=iVar0;
}


char* func_388(int iParam0, bool bParam1){
switch (iParam0){
case 0:
return func_389(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
case 1:
return func_389(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
case 2:
return func_389(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
case 3:
return func_389(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
case 4:
return func_389(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
case 5:
return func_389(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
case 6:
return func_389(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
case 7:
return func_389(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
case 8:
return func_389(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
case 9:
return func_389(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
case 10:
return func_389(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
case 11:
return func_389(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
case 12:
return func_389(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
case 13:
return func_389(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
case 14:
return func_389(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
case 15:
return func_389(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
case 16:
return func_389(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
case 17:
return func_389(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
case 18:
return func_389(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
case 19:
return func_389(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
default:
}
return "";
}


char* func_389(bool bParam0, char* sParam1, char* sParam2){
if(bParam0){
return sParam1;
}
return sParam2;
}


void func_390(){
int iVar0;
if(!iLocal_102){
if(!func_395(PLAYER::PLAYER_ID(), 1)){
if(!func_124(PLAYER::PLAYER_ID(), 0)){
if(!Local_333.f_28==-1){
if(!iLocal_325==func_35(Local_333.f_28)){
if(!func_394(PLAYER::PLAYER_PED_ID())){
if(!func_393(PLAYER::PLAYER_ID())){
iLocal_325=func_35(Local_333.f_28);
iVar0=0;
while (iVar0 < iLocal_331){
ZONE::OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(iLocal_331[iVar0], iLocal_325);
iVar0++;
}
iLocal_102=1;
STREAMING::REQUEST_MODEL(iLocal_325);
func_392();
func_391(iLocal_325);
}
}}}}}}elseif((((func_395(PLAYER::PLAYER_ID(), 1) || (Local_333.f_28 > -1 && !iLocal_325==func_35(Local_333.f_28))) || func_394(PLAYER::PLAYER_PED_ID())) || func_124(PLAYER::PLAYER_ID(), 0)) || func_393(PLAYER::PLAYER_ID())){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_325);
iVar0=0;
while (iVar0 < iLocal_331){
ZONE::CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(iLocal_331[iVar0]);
iVar0++;
}
func_392();
iLocal_325=0;
iLocal_102=0;
}}


void func_391(int iParam0){
if(MISC::IS_BIT_SET(Local_333.f_23, 0)){
if(iParam0==Local_333.f_67){
return;
}}
switch (iParam0){
case joaat("sentinel"):
case joaat("serrano"):
case joaat("dominator"):
case joaat("schafter2"):
case joaat("surge"):
iLocal_288[0]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[1]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[2]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[3]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[4]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[5]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[6]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[7]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[8]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[9]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_289=1;
break;
case joaat("jackal"):
case joaat("ztype"):
case joaat("tailgater"):
case joaat("landstalker"):
case joaat("penumbra"):
iLocal_288[0]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[1]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[2]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[3]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[4]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[5]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[6]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[7]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[8]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[9]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_289=1;
break;
case joaat("f620"):
case joaat("fq2"):
case joaat("patriot"):
case joaat("habanero"):
case joaat("prairie"):
case joaat("gresley"):
iLocal_288[0]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[1]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[2]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[3]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[4]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[5]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[6]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[7]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[8]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[9]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_289=1;
break;
case joaat("fusilade"):
case joaat("bjxl"):
case joaat("buccaneer"):
case joaat("daemon"):
case joaat("bagger"):
iLocal_288[0]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[1]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[2]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[3]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[4]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[5]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[6]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[7]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[8]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_288[9]=VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
iLocal_289=1;
break;
}}


void func_392(){
int iVar0;
if(iLocal_289){}
iVar0=0;
while (iVar0 < 10){
if(VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_288[iVar0])){
VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_288[iVar0]);
}
iLocal_288[iVar0]=0;
iVar0++;
}
iLocal_289=0;
}

int func_393(int iParam0){
if(iParam0 !=func_123()){
if(func_15(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_122(Global_2657704[iParam0 /*463*/].f_321.f_7)==11;
}}}
return 0;
}


bool func_394(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){}
return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0)==Global_152484;
}


bool func_395(int iParam0, bool bParam1){
if(func_85() !=0){
return func_396(iParam0) !=0;
}
return func_140(iParam0, bParam1, 0);
}

int func_396(int iParam0){
if(func_15(iParam0, 0, 1)){
return Global_2657704[iParam0 /*463*/].f_1;
}
return 0;
}


void func_397(){
var uVar0;
if(!func_526(&uLocal_310)){
func_525(&uLocal_310, 0, 0);
}elseif(func_524(&uLocal_310, 250, 0)){
func_47(&uLocal_310);
if(func_412(1, 0)){
if(!MISC::IS_BIT_SET(uLocal_318, 5) && !func_411()){
}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if((func_410() || func_411()) || func_406()){
if(!func_405(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(!func_404(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !func_16(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(func_399(&uVar0)){
if(!MISC::IS_BIT_SET(uLocal_318, 2)){
if(func_268() && timera() > 500){
func_170("IMPEX_FSPRAY_FM", -1);
MISC::SET_BIT(&uLocal_318, 2);
}
}
else{
settimera(0);
}}elseif(!MISC::IS_BIT_SET(uLocal_318, 8)){
if(func_268() && timera() > 500){
func_170("IMPEX_CASH_FM", -1);
MISC::SET_BIT(&uLocal_318, 8);
}}else{
settimera(0);
}}elseif(!MISC::IS_BIT_SET(uLocal_318, 11)){
if(func_268() && timera() > 500){
func_170("IMPEX_WANTED_FM", -1);
MISC::SET_BIT(&uLocal_318, 11);
}}else{
settimera(0);
}
}
elseif(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(!func_398()){
if(!func_16(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(!MISC::IS_BIT_SET(uLocal_318, 3)){
MISC::CLEAR_BIT(&uLocal_318, 7);
if(func_268() && timera() > 2000){
if(Global_2794162.f_4622==0){
if(!func_260(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
func_170("IMPEX_DELIVER_FM", -1);
MISC::SET_BIT(&uLocal_318, 3);
}}
}
}
else{
settimera(0);
}}elseif(!MISC::IS_BIT_SET(uLocal_318, 7)){
if(func_268() && timera() > 2000){
func_170("IMPEX_RIG_FM", -1);
MISC::SET_BIT(&uLocal_318, 7);
}}else{
settimera(0);
}}elseif(!MISC::IS_BIT_SET(uLocal_318, 6)){
if(func_268() && timera() > 2000){
func_170("IMPEX_WANTED_P", -1);
MISC::SET_BIT(&uLocal_318, 6);
}}else{
settimera(0);
}
}
elseif(!MISC::IS_BIT_SET(uLocal_318, 4)){
if(func_268() && timera() > 5000){
func_170("IMPEX_WANTED_FM", -1);
MISC::SET_BIT(&uLocal_318, 4);
}
}
else{
settimera(0);
}}}else{
if(func_250("IMPEX_FSPRAY_FM")){
HUD::CLEAR_HELP(1);
}
MISC::CLEAR_BIT(&uLocal_318, 2);
MISC::CLEAR_BIT(&uLocal_318, 3);
MISC::CLEAR_BIT(&uLocal_318, 4);
MISC::CLEAR_BIT(&uLocal_318, 6);
MISC::CLEAR_BIT(&uLocal_318, 7);
MISC::CLEAR_BIT(&uLocal_318, 8);
MISC::CLEAR_BIT(&uLocal_318, 11);
settimera(0);
}}else{
if(func_250("IMPEX_FSPRAY_FM")){
HUD::CLEAR_HELP(1);
}
MISC::CLEAR_BIT(&uLocal_318, 2);
MISC::CLEAR_BIT(&uLocal_318, 3);
MISC::CLEAR_BIT(&uLocal_318, 4);
MISC::CLEAR_BIT(&uLocal_318, 6);
MISC::CLEAR_BIT(&uLocal_318, 7);
MISC::CLEAR_BIT(&uLocal_318, 8);
MISC::CLEAR_BIT(&uLocal_318, 11);
if(timera() > 0){
settimera(0);
}}}elseif(func_250("IMPEX_FSPRAY_FM")){
HUD::CLEAR_HELP(1);
}}}

int func_398(){
var uVar0;
int iVar1;
int iVar2;
var uVar3;
uVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iVar2=0;
while (iVar2 < 4){
iVar1=(iVar2 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar3, iVar1, 0)){
if(ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, 0))){
if(!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, 0), 0)){
uVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, 0);
if(!PED::IS_PED_A_PLAYER(uVar0)){
return 1;
}}}}
iVar2++;
}
return 0;
}

int func_399(var uParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)){
*uParam0=func_400(iVar0, 0);
if(!MONEY::NETWORK_CAN_SPEND_MONEY((400 + *uParam0), 0, 0, 1, -1, 0)){
return 0;
}}else{
return 0;
}}
return 1;
}

int func_400(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
if(func_403(PLAYER::PLAYER_ID()) && !bParam1){
return 0;
}
fVar3=VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
if(fVar3 > 10f){
iVar9=8;
}elseif(fVar3 > 5f){
iVar9=4;
}
fVar3=(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) / 1000f);
if(fVar3 > 0.99f){
iVar5=0;
}elseif(fVar3 > 0.8f){
iVar5=20;
}elseif(fVar3 > 0.6f){
iVar5=40;
}elseif(fVar3 > 0.4f){
iVar5=80;
}else{
iVar5=100;
}
fVar3=(VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) / 1000f);
if(fVar3 > 0.99f){
iVar6=0;
}elseif(fVar3 > 0.8f){
iVar6=20;
}elseif(fVar3 > 0.6f){
iVar6=40;
}elseif(fVar3 > 0.4f){
iVar6=60;
}else{
iVar6=75;
}
fVar3=(to_float(ENTITY::GET_ENTITY_HEALTH(iParam0)) / 1000f);
if(fVar3 > 0.99f){
iVar8=0;
}elseif(fVar3 > 0.8f){
iVar8=40;
}elseif(fVar3 > 0.6f){
iVar8=80;
}elseif(fVar3 > 0.4f){
iVar8=150;
}else{
iVar8=200;
}
if(VEHICLE::GET_DOES_VEHICLE_HAVE_DAMAGE_DECALS(iParam0)){
iVar8 +=50;
}
if(VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 1)){
iVar8 +=50;
}elseif(VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(iParam0, 1)){
iVar8 +=25;
}
if(VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 0)){
iVar8 +=50;
}elseif(VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(iParam0, 0)){
iVar8 +=25;
}
if(!VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iParam0)){
iVar10 +=20;
if(!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 6)){
iVar10 +=40;
}
if(!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 7)){
iVar10 +=40;
}}
if(VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0))){
iVar1=0;
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0)){
iVar1++;
}
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1)){
iVar1++;
}
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2)){
iVar1++;
}
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3)){
iVar1++;
}
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 4)){
iVar1++;
}
if(VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 5)){
iVar1++;
}
iVar8=(iVar8 + iVar1 * 25);
}
if(VEHICLE::GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(iParam0)){
iVar8 +=15;
}
if(VEHICLE::GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(iParam0)){
iVar8 +=15;
}
iVar1=0;
iVar2=0;
while (iVar2 < 8){
if(VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iVar2, 0)){
iVar1++;
}
iVar2++;
}
iVar7=iVar1 * 25;
if(AUDIO::IS_VEHICLE_AUDIBLY_DAMAGED(iParam0)){
iVar11=50;
}
iVar0=(((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
if(func_402(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
iVar0=floor((to_float(iVar0) * Global_262145.f_12198));
if(iVar0 > floor((4f * Global_262145.f_12198))){
iVar4=Global_262145.f_12196;
iVar0=(iVar0 + iVar4);
}
if(iVar0 > Global_262145.f_12197){
iVar0=Global_262145.f_12197;
}}elseif(func_401(iParam0)){
iVar0=floor((to_float(iVar0) * Global_262145.f_12201));
if(iVar0 > floor((4f * Global_262145.f_12201))){
iVar4=Global_262145.f_12199;
iVar0=(iVar0 + iVar4);
}
if(iVar0 > Global_262145.f_12200){
iVar0=Global_262145.f_12200;
}}else{
if(iVar0 > 0){
iVar4=50;
iVar0=(iVar0 + iVar4);
}
if(iVar0 > 1250){
iVar0=1250;
}}
return iVar0;
}

int func_401(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("technical2"):
case joaat("boxville5"):
case joaat("wastelander"):
case joaat("phantom2"):
case joaat("voltic2"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("ruiner2"):
case joaat("blazer5"):
return 1;
break;
}
return 0;
}

int func_402(int iParam0, int iParam1){
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

int func_403(int iParam0){
if(iParam0 !=func_123()){
if(func_15(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_122(Global_2657704[iParam0 /*463*/].f_321.f_7)==22;
}}}
return 0;
}


bool func_404(int iParam0){
return DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_405(int iParam0){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player") && DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player") !=NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_406(){
var uVar0;
if(func_535()){
return 0;
}
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!func_409(uVar0, 1) && !func_408(uVar0, 1)){
if(func_407(ENTITY::GET_ENTITY_MODEL(uVar0))){
return 1;
}}}
return 0;
}

int func_407(int iParam0){
int iVar0;
int iVar1;
iVar0=func_76(iParam0);
if(iVar0 > -1){
iVar1=0;
while (iVar1 < 10){
if(Local_333.f_35[iVar1]==iVar0){
if(!func_524(&(Local_333.f_46[iVar1 /*2*/]), 120000, 0)){
return 1;
}}
iVar1++;
}}
return 0;
}

int func_408(int iParam0, bool bParam1){
if(Global_78689){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "TestDrive")){
return DECORATOR::DECOR_GET_BOOL(iParam0, "TestDrive");
}}}}
return 0;
}

int func_409(int iParam0, bool bParam1){
if(Global_78689){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
return 1;
}}}
return 0;
}

int func_410(){
var uVar0;
if(func_535()){
return 0;
}
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!Global_1926496){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!func_409(uVar0, 1) && !func_408(uVar0, 1)){
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(uVar0, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 1)){
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33 <=0){
if(!DECORATOR::DECOR_EXIST_ON(iVar0, "Not_Allow_As_Saved_Veh")){
if(!Global_1926495){
if(bLocal_290){
bLocal_290=false;
}
if(func_75(&Local_332, ENTITY::GET_ENTITY_MODEL(iVar0))){
Global_2794162.f_1787=1;
return 1;
}}}
}}elseif(!bLocal_290){
bLocal_290=true;
}}}}}
return 0;
}

int func_411(){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BIT_SET(Local_333.f_23, 0)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_333.f_22)){
if(func_4(Local_333.f_22)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_333.f_22))){
return 1;
}}}}}
return 0;
}


bool func_412(bool bParam0, bool bParam1){
bool bVar0;
bVar0=true;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
bVar0=false;
}
if(!bParam1){
if(bVar0){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
bVar0=false;
}}}
if(!bParam0){
if(bVar0){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
bVar0=false;
}}}
if(bVar0){
if(func_140(PLAYER::PLAYER_ID(), 1, 0)){
bVar0=false;
}}
if(bVar0){
if(func_114()){
bVar0=false;
}}
if(!func_15(PLAYER::PLAYER_ID(), 0, 0)){
bVar0=false;
}
if(func_72(PLAYER::PLAYER_ID(), 1)){
bVar0=false;
}
if(func_124(PLAYER::PLAYER_ID(), 1)){
bVar0=false;
}
return bVar0;
}


void func_413(){
int iVar0;
switch (iLocal_115){
case 0:
if(!func_140(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_526(&uLocal_116) || func_524(&uLocal_116, 2000, 0)){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f){
func_416(&uLocal_120, 4, iLocal_114, "MECHANIC_IMP", 0, 1);
iLocal_343=0;
iLocal_115++;
}}
func_47(&uLocal_116);
func_525(&uLocal_116, 0, 0);
}}
break;
case 1:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_140(PLAYER::PLAYER_ID(), 1, 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f){
if(bLocal_99){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0)){
if(!iLocal_343){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_400(iVar0, 0) > 500){
sLocal_344="FM_IEPOOR";
}
else{
sLocal_344="FM_IEGOOD";
}
iLocal_343=1;
}
elseif(func_415(&uLocal_120, "FM_1AU", sLocal_344, 12, 0, 0, 0)){
iLocal_285=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
iLocal_115++;
iLocal_343=0;
}}}
}}else{
func_414();
iLocal_115=0;
}}else{
func_414();
iLocal_115=0;
}}
break;
case 2:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!func_140(PLAYER::PLAYER_ID(), 1, 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f){
if(bLocal_99){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) !=iLocal_285){
iLocal_115=1;
}}
}}else{
func_414();
iLocal_115=0;
}}else{
func_414();
iLocal_115=0;
}}
break;
}}


void func_414(){
var uVar0;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_114)){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_xmech_02"));
uVar0=iLocal_114;
ENTITY::DELETE_ENTITY(&uVar0);
}}


bool func_415(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_352(sParam2, iParam3, 0);
}


void func_416(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


void func_417(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
bool bVar7;
int iVar8;
struct<3> Var9;
int iVar10;
if(func_412(1, 1)){
switch (Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1){
case 0:
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
bVar7=func_406();
if((func_410() || func_411()) || bVar7){
if(!func_398()){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(!func_513()){
if(bLocal_98){
bLocal_98=false;
}
iVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AllowModSprayRepair", 2)){
if(!DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") || (DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") && DECORATOR::DECOR_GET_BOOL(iVar3, "AllowModSprayRepair")==0)){
DECORATOR::DECOR_SET_BOOL(iVar3, "AllowModSprayRepair", 1);
}
}
if(!iLocal_104){
if(func_512(iVar3)){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}
}
iLocal_345=iVar3;
if(MISC::IS_BIT_SET(uLocal_341, 15)){
MISC::CLEAR_BIT(&uLocal_341, 15);
}
if(MISC::IS_BIT_SET(uLocal_318, 9)){
MISC::CLEAR_BIT(&uLocal_318, 9);
}
if(MISC::IS_BIT_SET(uLocal_318, 12)){
MISC::CLEAR_BIT(&uLocal_318, 12);
}
if(MISC::IS_BIT_SET(uLocal_318, 10)){
MISC::CLEAR_BIT(&uLocal_318, 10);
}
if(!MISC::IS_BIT_SET(uLocal_341, 12)){
if(bVar7){
MISC::SET_BIT(&uLocal_341, 12);
}
}
elseif(!bVar7){
MISC::CLEAR_BIT(&uLocal_341, 12);
}
if(func_404(iVar3)){
if(!func_16(iVar3)){
bLocal_91=true;
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(bLocal_97){
bLocal_97=false;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, 0)==PLAYER::PLAYER_PED_ID()){
bLocal_94=true;
}}elseif(func_78()){
if(bLocal_94){
bLocal_94=false;
}
bLocal_97=true;
}
bLocal_92=false;
bLocal_93=false;
bLocal_95=false;
bLocal_96=false;
bLocal_98=false;
bLocal_99=true;
if(func_511(1215605247, 18)){
bLocal_89=true;
}
iLocal_327=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_327)){
if(func_260(iLocal_327, 0)){
if(!MISC::IS_BIT_SET(uLocal_341, 17)){
MISC::SET_BIT(&uLocal_341, 17);
}
elseif(func_260(iLocal_327, 1)){
Var9={
ENTITY::GET_ENTITY_VELOCITY(iLocal_327) 
};
if(ENTITY::GET_ENTITY_SPEED(iLocal_327) < 0.5f || MISC::ABSF(Var9.f_1) < 1.3f){
func_510();
func_501(PLAYER::PLAYER_ID(), 0, 16388, 0);
if(func_411()){
MISC::SET_BIT(&uLocal_341, 4);
MISC::SET_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), true);
}
if(func_410() || func_406()){
MISC::SET_BIT(&uLocal_341, 6);
}
if(func_500()){
bLocal_88=true;
}
else{
bLocal_88=false;
}
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_327, 2);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_327)){
ENTITY::SET_ENTITY_PROOFS(iLocal_327, 1, 1, 1, 1, 1, 0, 0, 0);
}
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=func_76(ENTITY::GET_ENTITY_MODEL(iLocal_327));
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1=1;
iVar5=0;
iVar4=0;
while (iVar4 < 4){
iVar1=(iVar4 - 1);
iLocal_326[iVar4]=func_123();
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_327, iVar1, 0)){
if(ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_327, iVar1, 0))){
if(!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_327, iVar1, 0), 0)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_327, iVar1, 0);
if(PED::IS_PED_A_PLAYER(iVar0)){
if(func_15(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 0, 0)){
if(NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0))){
iLocal_326[iVar4]=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
iVar5++;
}
}
}
}
}
}
iVar4++;
}
iLocal_297=func_499(ENTITY::GET_ENTITY_MODEL(iLocal_327));
iLocal_298=func_400(iLocal_327, 0);
fLocal_299=to_float((iLocal_297 - iLocal_298));
fLocal_299=(fLocal_299 * Global_262145.f_2422);
if(MISC::IS_BIT_SET(uLocal_341, 4)){
fLocal_299=(fLocal_299 * 1.3f);
}
fLocal_299=(fLocal_299 / to_float(iVar5));
fLocal_300=500f;
func_498();
func_178(0);
func_497(1248, 1, -1);
if(func_250("IMPEX_DELIVER_FM")){
HUD::CLEAR_HELP(1);
}
MISC::CLEAR_BIT(&uLocal_341, 12);
iVar6=func_81(1200, -1);
if(!MISC::IS_BIT_SET(iVar6, 1)){
MISC::SET_BIT(&iVar6, true);
func_147(1200, iVar6, -1, 1);
}
elseif(!MISC::IS_BIT_SET(iVar6, 2)){
MISC::SET_BIT(&iVar6, 2);
func_147(1200, iVar6, -1, 1);
}
func_496();
iLocal_301=0;
iLocal_301=round(fLocal_299);
iLocal_301=(iLocal_301 - (iLocal_301 % 25));
if(iLocal_346==iVar3){
iLocal_301=(iLocal_301 + iLocal_303);
}
if(!MISC::IS_BIT_SET(uLocal_341, 4)){
if(iLocal_301 > Global_262145.f_174){
iLocal_301=Global_262145.f_174;
}
}
elseif(iLocal_301 > Global_262145.f_174){
iLocal_301=Global_262145.f_174;
}
iLocal_302=0;
fLocal_300=(fLocal_300 * Global_262145.f_4238);
iLocal_302=round(fLocal_300);
MISC::CLEAR_BIT(&uLocal_341, 17);
iLocal_328=iLocal_327;
iLocal_330=ENTITY::GET_ENTITY_MODEL(iLocal_327);
if(!MISC::IS_BIT_SET(uLocal_341, 4)){
STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(19, iLocal_302, iLocal_301, iLocal_327);
}
else{
STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(120, iLocal_302, iLocal_301, iLocal_327);
}
func_495(19, 1);
func_494();
func_529();
}
elseif(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
func_501(PLAYER::PLAYER_ID(), 0, 16388, 0);
}
}}elseif(MISC::IS_BIT_SET(uLocal_341, 17)){
MISC::CLEAR_BIT(&uLocal_341, 17);
}}
}
else{
if(bLocal_91){
bLocal_91=false;
}
if(bLocal_99){
bLocal_99=false;
}
if(bLocal_94){
bLocal_94=false;
}
if(bLocal_97){
bLocal_97=false;
}
if(bLocal_98){
bLocal_98=false;
}
}
}
elseif(!func_16(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(func_399(&iVar8)){
if(!func_405(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, 0)==PLAYER::PLAYER_PED_ID()){
if(iLocal_346 !=iVar3){
iLocal_346=iVar3;
iLocal_303=0;
}
elseif(iLocal_303 !=iVar8){
if(iLocal_303 < iVar8){
iLocal_303=iVar8;
}
}}
if(!bLocal_92){
bLocal_92=true;
}
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(func_78()){
if(bLocal_93){
bLocal_93=false;
}
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1, 0)==PLAYER::PLAYER_PED_ID()){
if(func_400(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) > 0){
if(!bLocal_96){
bLocal_96=true;
}
}
else{
if(bLocal_96){
bLocal_96=false;
}
if(!bLocal_95){
bLocal_95=true;
}
}
}
}}elseif(!func_78()){
if(bLocal_95){
bLocal_95=false;
}
if(bLocal_96){
bLocal_96=false;
}
if(!bLocal_93){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1, 0)==PLAYER::PLAYER_PED_ID()){
bLocal_93=true;
}
}}}else{
func_493();
}
}
else{
func_493();
}
}
else{
func_493();
if(bLocal_99){
bLocal_99=false;
}
}}}else{
iVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(iLocal_345 !=iVar3){
if(!iLocal_104){
if(func_512(iVar3)){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}
}
iLocal_345=iVar3;
}
if(!bLocal_98){
func_493();
bLocal_98=true;
}}
}}else{
func_493();
if(bLocal_99){
bLocal_99=false;
}
if(iLocal_104){
if(Local_333.f_33){
if(bLocal_109){
iLocal_104=0;
}}
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if((func_250("IMPEX_NOT_NEED") || func_250("IMPEX_NO_MORE")) || func_250("IMPEX_NOT_PVEH")){
HUD::CLEAR_HELP(1);
}
}
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_409(iVar2, 1)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0)==PLAYER::PLAYER_PED_ID()){
if(DECORATOR::DECOR_EXIST_ON(iVar2, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(iVar2, "Player_Vehicle") !=NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) || iVar2==iLocal_345){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
if(func_268()){
if(!MISC::IS_BIT_SET(uLocal_341, 15)){
if(bVar7 || func_75(&Local_332, ENTITY::GET_ENTITY_MODEL(iVar2))){
func_170("IMPEX_NOT_PVEH", -1);
MISC::SET_BIT(&uLocal_341, 15);
}}}
}
}
elseif(MISC::IS_BIT_SET(uLocal_341, 15)){
if(iVar2 !=iLocal_345){
MISC::CLEAR_BIT(&uLocal_341, 15);
}
}}}
}
else{
if(MISC::IS_BIT_SET(uLocal_341, 15)){
if(iVar2 !=iLocal_345){
MISC::CLEAR_BIT(&uLocal_341, 15);
}}
if(bLocal_105){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_511(1215605247, 18)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_260(iVar2, 0)){
if(!iLocal_103){
func_178(1);
iLocal_103=1;
}
bLocal_89=true;
}}elseif(iLocal_103){
func_178(0);
iLocal_103=0;
bLocal_89=false;
}}
}
if(func_511(1215605247, 18)){
if(func_268()){
if(func_409(iVar2, 1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
if(!MISC::IS_BIT_SET(uLocal_318, 10)){
func_170("IMPEX_NOT_PVEH", -1);
MISC::SET_BIT(&uLocal_318, 10);
}
}}elseif(func_75(&Local_332, ENTITY::GET_ENTITY_MODEL(iVar2))){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar2, 0)){
if(!MISC::IS_BIT_SET(uLocal_318, 12)){
func_170("IMPEX_NOT_CREW", -1);
MISC::SET_BIT(&uLocal_318, 12);
}
}}elseif(!MISC::IS_BIT_SET(uLocal_318, 9)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0)==PLAYER::PLAYER_PED_ID()){
func_170("IMPEX_NOT_NEED", -1);
MISC::SET_BIT(&uLocal_318, 9);
}}}
}
else{
if(MISC::IS_BIT_SET(uLocal_318, 9)){
MISC::CLEAR_BIT(&uLocal_318, 9);
}
if(MISC::IS_BIT_SET(uLocal_318, 10)){
MISC::CLEAR_BIT(&uLocal_318, 10);
}
if(MISC::IS_BIT_SET(uLocal_318, 12)){
MISC::CLEAR_BIT(&uLocal_318, 12);
}
if(MISC::IS_BIT_SET(uLocal_341, 12)){
if(func_268()){
func_170("IMPEX_NO_MORE", -1);
MISC::CLEAR_BIT(&uLocal_341, 12);
func_119();
}}
}}}else{
func_493();
if(bLocal_99){
bLocal_99=false;
}
if(iLocal_104){
iLocal_104=0;
}}
break;
case 1:
if(func_15(PLAYER::PLAYER_ID(), 1, 1)){
if(!func_171(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_321, 0, 500, 1, 0)){
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1=2;
}}else{
MISC::CLEAR_BIT(&uLocal_341, 4);
MISC::CLEAR_BIT(&uLocal_341, 6);
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1=0;
}
break;
case 2:
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1=3;
break;
case 3:
if(CAM::IS_SCREEN_FADED_IN()){
func_489(17, 1, -1);
if(MISC::IS_BIT_SET(uLocal_341, 4)){
MISC::SET_BIT(&(Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), true);
func_488();
}else{
func_486();
}
if(bLocal_88){
if(MISC::IS_BIT_SET(uLocal_341, 6)){
Local_86.f_2=2092359122;
}
else{
Local_86.f_2=-1279215969;
}
Local_86.f_3=Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/];
Local_86.f_10=iLocal_326[0];
Local_86.f_11=iLocal_326[1];
Local_86.f_12=iLocal_326[2];
Local_86.f_13=iLocal_326[3];
if(!MISC::IS_BIT_SET(uLocal_341, 6)){
}}
MISC::CLEAR_BIT(&uLocal_341, 6);
func_484(4, iLocal_301);
func_468(&iLocal_301, 1);
if(iLocal_301 > 0){
if(func_467()){
func_456(941287179, iLocal_301, &iVar10, 0, 0, 0);
Global_4535172[iVar10 /*85*/].f_3=iLocal_330;
}
else{
MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(iLocal_301, iLocal_330);
}}
if(iLocal_298 > 0){
func_455("IMPEX_PASS", iLocal_301, 7000, 0);
}else{
func_455("IMPEX_PASS", iLocal_301, 7000, 0);
}
func_422(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_302, 1, -1, 0);
func_421(29);
func_501(PLAYER::PLAYER_ID(), 1, 0, 0);
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1=0;
Local_340[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]=-1;
MISC::CLEAR_BIT(&uLocal_341, 4);
iLocal_110=1;
func_418(-78295735, 12, 0);
}
break;
}}else{
if(!func_395(PLAYER::PLAYER_ID(), 1)){
if(!bLocal_105){
if(iLocal_103){
func_178(0);
iLocal_103=0;
}}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_511(1215605247, 18)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_260(iVar2, 0)){
if(!iLocal_103){
func_178(1);
iLocal_103=1;
}
bLocal_89=true;
}}elseif(iLocal_103){
func_178(0);
iLocal_103=0;
bLocal_89=false;
}}
if(bLocal_92){
bLocal_92=false;
}
if(bLocal_93){
bLocal_93=false;
}
if(bLocal_95){
bLocal_95=false;
}
if(bLocal_96){
bLocal_96=false;
}}}


void func_418(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_420(iParam1, iParam2)){
iVar0=func_419();
Global_2694470[iVar0]=iParam1;
Global_2694481[iVar0]=iParam0;
}}

int func_419(){
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

int func_420(int iParam0, var uParam1){
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


void func_421(int iParam0){
int iVar0;
if(Global_262145.f_9208){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_523() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}


var func__422(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
return func_423(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}


var func__423(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_424(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_424(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_447();
if(func_446(uParam2)){}
if(func_445()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_443(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_442(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_440(0, &iVar1);
break;
case 3:
func_440(1, &iVar1);
break;
case 1:
func_437(&iVar1);
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
func_497(1165, iVar1, -1);
if(iParam1==0){
func_432((func_436(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 !=-1){
func_497(1166, iVar1, -1);
}
func_429(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_425((func_427(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_425((func_427(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_425(int iParam0){
if(func_445()){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5=iParam0;
func_426(joaat("mpply_globalxp"), iParam0);
}}


void func_426(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}}

int func_427(int iParam0){
if(iParam0 > -1){
if(func_15(iParam0, 0, 1)){
if(iParam0==PLAYER::PLAYER_ID()){
return func_428(joaat("mpply_globalxp"));
}else{
return Global_1853988[iParam0 /*867*/].f_205.f_5;
}}else{
return func_428(joaat("mpply_globalxp"));
}}
return 0;
}

int func_428(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_429(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_204(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_430(func_431(&Var0));
if(iVar1==0){
func_426(joaat("mpply_crew_local_xp_0"), (func_428(joaat("mpply_crew_local_xp_0")) + iParam0));
}elseif(iVar1==1){
func_426(joaat("mpply_crew_local_xp_1"), (func_428(joaat("mpply_crew_local_xp_1")) + iParam0));
}elseif(iVar1==2){
func_426(joaat("mpply_crew_local_xp_2"), (func_428(joaat("mpply_crew_local_xp_2")) + iParam0));
}elseif(iVar1==3){
func_426(joaat("mpply_crew_local_xp_3"), (func_428(joaat("mpply_crew_local_xp_3")) + iParam0));
}elseif(iVar1==4){
func_426(joaat("mpply_crew_local_xp_4"), (func_428(joaat("mpply_crew_local_xp_4")) + iParam0));
}}}}

int func_430(int iParam0){
if(iParam0==func_428(joaat("mpply_crew_0_id"))){
return 0;
}elseif(iParam0==func_428(joaat("mpply_crew_1_id"))){
return 1;
}elseif(iParam0==func_428(joaat("mpply_crew_2_id"))){
return 2;
}elseif(iParam0==func_428(joaat("mpply_crew_3_id"))){
return 3;
}elseif(iParam0==func_428(joaat("mpply_crew_4_id"))){
return 4;
}else{
return -1;
}
return -1;
}

int func_431(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694518;
}}
return Global_2694518;
}


void func_432(int iParam0, int iParam1, int iParam2){
if(func_445()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10242==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < func_81(640, -1)){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==func_81(640, -1)){
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
if(func_253(PLAYER::PLAYER_ID())){
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1=iParam0;
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6=func_433(iParam0, 1);
}
func_147(640, iParam0, -1, 1);
func_147(641, func_433(iParam0, 1), -1, 1);
func_418(-1109644434, 7, 0);
}}

int func_433(int iParam0, bool bParam1){
if(bParam1){}
return func_434(iParam0, 0);
}

int func_434(int iParam0, int iParam1){
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
if(func_435(iVar3)==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(func_435(iVar3) < iParam0){
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

int func_435(int iParam0){
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

int func_436(int iParam0){
if(Global_1574632.f_9==0){
if(iParam0 > -1){
if(iParam0==PLAYER::PLAYER_ID()){
return func_81(640, -1);
}elseif(func_253(iParam0)){
return Global_1853988[iParam0 /*867*/].f_205.f_1;
}}}else{
return func_81(640, -1);
}
return 0;
}


void func_437(int iParam0){
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
if(PLAYER::GET_PLAYER_TEAM(iVar5)==iVar1 || func_214(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1)){
iVar2++;
if(iVar5 !=PLAYER::PLAYER_ID()){
if(func_439(PLAYER::PLAYER_ID(), iVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=round((func_438(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_438(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_438(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}

int func_439(int iParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764376={
func_204(iParam0) 
};
Global_2764389={
func_204(iParam1) 
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


void func_440(bool bParam0, int iParam1){
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
if(func_15(iVar4, 0, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_439(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
iVar4=iVar0;
if(func_15(iVar4, 1, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
if(func_441(PLAYER::PLAYER_ID(), iVar4) <=20f){
iVar1++;
if(func_439(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_438(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_438(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_441(int iParam0, int iParam1){
return vdist(func_29(iParam0), func_29(iParam1));
return 0f;
}

int func_442(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_438(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_443(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_436(PLAYER::PLAYER_ID())){
iParam0=-func_436(PLAYER::PLAYER_ID());
}}
if(func_444(8000, 0, 0) > 0){
if(func_444(8000, 0, 0) < (iParam0 + func_436(PLAYER::PLAYER_ID()))){
iParam0=(func_444(8000, 0, 0) - func_436(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_444(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return func_435(iParam0);
}

int func_445(){
return 1;
}

int func_446(char* sParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0")){
return 1;
}
return 0;
}

int func_447(){
int iVar0;
if(func_454(PLAYER::PLAYER_ID()) || func_453(PLAYER::PLAYER_ID())){
if(Global_262145.f_10274 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10274;
}}elseif(func_451() || func_448(PLAYER::PLAYER_ID())){
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

int func_448(int iParam0){
return func_449(func_450(iParam0));
}

int func_449(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_450(int iParam0){
if(func_9(iParam0)){
if(func_124(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_451(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_31();
}
return func_452(Global_4718592.f_117591);
}

int func_452(int iParam0){
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


bool func_453(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==2;
}


bool func_454(int iParam0){
return Global_2657704[iParam0 /*463*/].f_121==7;
}


void func_455(char* sParam0, int iParam1, int iParam2, int iParam3){
iParam3=iParam3;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}


void func_456(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_467()){
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
func_457(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_457(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_457(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_457(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_457(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_467()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_27()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_464(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_463(1, iParam4);
Global_4536677=0;
}
if(iParam7 & 4 !=0){
func_458(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_458(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_459(iParam0);
}}


void func_459(int iParam0){
bool bVar0;
bVar0=false;
if(!func_467()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_462(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_460(&(Global_4535172[iParam0 /*85*/]));
}}


void func_460(var uParam0){
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
func_461(&(uParam0->f_14));
func_461(&(uParam0->f_14.f_13));
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


void func_461(var uParam0){
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

int func_462(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_463(int iParam0, var uParam1){
Global_2697092=uParam1;
Global_2697091=iParam0;
}

int func_464(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_467()){
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
func_465(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_465(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_8(Var0.f_1);
if((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260){
return;
}
if(!iVar1==0){
func_466();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_466(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_467(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_468(int iParam0, int iParam1){
int iVar0;
if(*iParam0 > 0){
if(!func_483()){
if(func_482(0)){
if(!func_478(0)){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_477())){
if(func_476()==100){
iVar0=*iParam0;
*iParam0=0;
}
else{
iVar0=((*iParam0 / 100) * func_476());
*iParam0=(*iParam0 - iVar0);
}
func_474(&iVar0, 0);
if(iParam1==1){
func_473("GB_BCUT_TICK1", func_477(), iVar0, 0, 0, 1);
}
func_472(20);
func_469(func_477(), iVar0, 1);
}}}}}}


void func_469(bool bParam0, int iParam1, int iParam2){
struct<8> Var0;
if(func_15(bParam0, 0, 1)){
Var0.f_0=-1141119736;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam2;
Var0.f_5=func_471(bParam0);
func_470(&(Var0.f_6), &(Var0.f_7));
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_8(bParam0));
}}


void func_470(var uParam0, var uParam1){
*uParam0=Global_1924276.f_9;
*uParam1=Global_1924276.f_10;
}


var func__471(int iParam0){
return Global_1895156[iParam0 /*609*/].f_511;
}


void func_472(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), bVar1);
}

int func_473(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
struct<8> Var1;
iVar0=-1;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5){
if(!bParam4){
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
}else{
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_207(iParam1, -2, 1, 0, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_205(&Var1));
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_199(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_474(int iParam0, bool bParam1){
int iVar0;
int iVar1;
if(bParam1){
iVar1=func_475(1);
}else{
iVar1=func_475(0);
}
iVar0=((*iParam0 / 100) * iVar1);
*iParam0=(*iParam0 - iVar0);
}

int func_475(bool bParam0){
if(bParam0){
return round((0.05f * 100f));
}
return Global_262145.f_13038;
}

int func_476(){
return Global_262145.f_13037;
}


bool func_477(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}


bool func_478(bool bParam0){
return func_479(PLAYER::PLAYER_ID(), bParam0);
}

int func_479(int iParam0, bool bParam1){
return func_480(iParam0, bParam1, 1);
}

int func_480(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_9(iParam0)){
return 0;
}
if(!bParam1){
if(func_481(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_123() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_481(int iParam0, int iParam1){
if(func_9(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_123()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}


bool func_482(bool bParam0){
return func_229(PLAYER::PLAYER_ID(), bParam0);
}


bool func_483(){
return func_230(PLAYER::PLAYER_ID());
}


void func_484(int iParam0, int iParam1){
if(iParam1 > 0){
if(Global_262145.f_24178 !=-1){
if(func_485()){
Global_2794162.f_283=iParam0;
if(iParam1 > Global_262145.f_7127){
iParam1=Global_262145.f_7127;
}
Global_2794162.f_284=iParam1;
Global_2794162.f_285=0;
}}}}

int func_485(){
if(MISC::IS_PC_VERSION() && Global_1984719==0){
return 0;
}
return 0;
}


void func_486(){
int iVar0;
iVar0=func_487(42);
Global_2645174[iVar0 /*83*/]=42;
StringCopy(&(Global_2645174[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_487(int iParam0){
int iVar0;
int iVar1;
iVar0=19;
iVar1=0;
while (iVar1 <=19){
if(Global_2645174[iVar1 /*83*/]==iParam0){
iVar0=iVar1;
iVar1=20;
}elseif(Global_2645174[iVar1 /*83*/]==0){
iVar0=iVar1;
iVar1=20;
}
iVar1++;
}
return iVar0;
}


void func_488(){
int iVar0;
iVar0=func_487(43);
Global_2645174[iVar0 /*83*/]=43;
StringCopy(&(Global_2645174[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}


void func_489(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_492(iParam0, func_83(iParam2));
iVar0=(iVar0 + iParam1);
func_490(iParam0, iVar0, iParam2);
}


void func_490(var uParam0, int iParam1, var uParam2){
int iVar0;
iVar0=func_491(uParam0, uParam2);
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}


var func__491(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(8, uParam0, func_83(uParam1));
}

int func_492(var uParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_491(uParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_493(){
if(bLocal_98){
bLocal_98=false;
}
if(bLocal_93){
bLocal_93=false;
}
if(bLocal_94){
bLocal_94=false;
}
if(bLocal_95){
bLocal_95=false;
}
if(bLocal_97){
bLocal_97=false;
}
if(bLocal_96){
bLocal_96=false;
}}


void func_494(){
Global_2359296[func_523() /*5568*/].f_681.f_35=NETWORK::GET_CLOUD_TIME_AS_INT();
}


void func_495(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
if(bParam1){
iVar0=-1;
}
switch (iParam0){
case 59:
Global_2359296[func_523() /*5568*/].f_681.f_19=iVar0;
break;
case 19:
Global_2359296[func_523() /*5568*/].f_681.f_18=iVar0;
break;
case 74:
Global_2359296[func_523() /*5568*/].f_681.f_12=iVar0;
break;
case 29:
Global_2359296[func_523() /*5568*/].f_681.f_14=iVar0;
break;
case 8:
Global_2359296[func_523() /*5568*/].f_681.f_15=iVar0;
break;
case 31:
Global_2359296[func_523() /*5568*/].f_681.f_16=iVar0;
break;
case 3:
Global_2359296[func_523() /*5568*/].f_681.f_20=iVar0;
break;
case 6:
Global_2359296[func_523() /*5568*/].f_681.f_17=iVar0;
break;
case 103:
case 104:
case 98:
case 105:
Global_2359296[func_523() /*5568*/].f_681.f_23=iVar0;
break;
case 76:
Global_2359296[func_523() /*5568*/].f_681.f_24=iVar0;
break;
case 93:
Global_2359296[func_523() /*5568*/].f_681.f_25=iVar0;
break;
case 61:
case 62:
case 63:
case 64:
case 77:
case 81:
Global_2359296[func_523() /*5568*/].f_681.f_26=iVar0;
break;
case 65:
case 75:
case 95:
Global_2359296[func_523() /*5568*/].f_681.f_27=iVar0;
break;
break;
case 97:
Global_2359296[func_523() /*5568*/].f_681.f_29=iVar0;
break;
case 88:
Global_2359296[func_523() /*5568*/].f_681.f_28=iVar0;
break;
case 100:
Global_2359296[func_523() /*5568*/].f_681.f_31=iVar0;
break;
case 106:
Global_2359296[func_523() /*5568*/].f_681.f_32=iVar0;
break;
case 99:
Global_2359296[func_523() /*5568*/].f_681.f_30=iVar0;
break;
}}


void func_496(){
int iVar0;
bool bVar1;
iVar0=func_81(1200, -1);
if(!MISC::IS_BIT_SET(iVar0, 3)){
MISC::SET_BIT(&iVar0, 3);
MISC::SET_BIT(&uLocal_342, true);
bVar1=true;
}elseif(!MISC::IS_BIT_SET(iVar0, 4)){
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&uLocal_342, 2);
bVar1=true;
}elseif(!MISC::IS_BIT_SET(iVar0, 5)){
MISC::SET_BIT(&iVar0, 5);
MISC::SET_BIT(&uLocal_342, 3);
bVar1=true;
}
if(bVar1){
func_147(1200, iVar0, -1, 1);
}}


void func_497(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_81(iParam0, func_83(iParam2));
iVar0=(iVar0 + iParam1);
func_147(iParam0, iVar0, iParam2, 1);
}


void func_498(){
if(!Global_2794162.f_4632){
Global_2794162.f_4632=1;
}
func_265(&(Global_2794162.f_4633), 0, 0);
}

int func_499(int iParam0){
switch (iParam0){
case joaat("zion"):
return 9000;
case joaat("serrano"):
return 9254;
case joaat("jackal"):
return 9350;
case joaat("schafter2"):
return 9804;
case joaat("dubsta"):
return 10500;
case joaat("f620"):
return 12000;
case joaat("schwarzer"):
return 12000;
case joaat("rocoto"):
return 12750;
case joaat("sentinel2"):
return 14250;
case joaat("felon2"):
return 14250;
case joaat("comet2"):
return 15000;
case joaat("banshee"):
return 15750;
case joaat("surano"):
return 16500;
case joaat("coquette"):
return 19800;
case joaat("carbonizzare"):
return 20000;
case joaat("exemplar"):
return 20000;
case joaat("feltzer2"):
return 20000;
case joaat("bullet"):
return 20000;
case joaat("superd"):
return 20000;
case joaat("infernus"):
return 20000;
default:
}
return -1;
}

int func_500(){
int iVar0;
if(func_15(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}}}}
return 0;
}


void func_501(int iParam0, bool bParam1, int iParam2, int iParam3){
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
if(func_509()){
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
if(!func_137()){
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
}elseif(bVar14 || ((!func_25(PLAYER::PLAYER_ID(), 0) && !func_247()) && !func_246(PLAYER::PLAYER_ID()))){
ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657704[iParam0 /*463*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_506(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_505(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27)){
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
func_504();
func_503();
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
if(!func_505(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
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
if(func_502(Global_4718592.f_171044)){
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


bool func_502(int iParam0){
return iParam0==17;
}


void func_503(){
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


void func_504(){
Global_2635560.f_702=0;
Global_2635560.f_2835=0;
Global_2635560.f_515=0;
Global_2635560.f_606=0;
Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217=0;
Global_2635560.f_2790=0;
}

int func_505(int iParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_506(int iParam0, int iParam1, int iParam2){
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
func_508();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), true);
}}
if(func_25(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_507(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_507(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_508(){
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

int func_509(){
if(MISC::IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216==-1){
return 1;
}
return 0;
}


void func_510(){
func_119();
}

int func_511(int iParam0, int iParam1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_174(iParam0), 1) <=IntToFloat(iParam1)){
return 1;
}
return 0;
}

int func_512(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)==PLAYER::PLAYER_PED_ID()){
if(!func_405(iParam0)){
if(iParam0 !=iLocal_345){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2){
return 1;
}}}}}
return 0;
}

int func_513(){
if(Global_2672524.f_62.f_20 || Global_2672524.f_62.f_21){
return 1;
}
return 0;
}


void func_514(var uParam0, int iParam1, var uParam2){
int iVar0;
int iVar1;
iVar1=uParam2;
iVar0=0;
while (iVar0 < 5){
(*uParam0)[iVar0]=-1;
uParam0->f_6[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(iVar0 < iParam1){
(*uParam0)[iVar0]=func_515(iVar1, iVar0);
uParam0->f_6[iVar0]=0;
}else{
(*uParam0)[iVar0]=-1;
uParam0->f_6[iVar0]=1;
}
iVar0++;
}}

int func_515(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_522(iParam1);
break;
case 1:
iVar0=func_521(iParam1);
break;
case 2:
iVar0=func_520(iParam1);
break;
case 3:
iVar0=func_519(iParam1);
break;
case 4:
iVar0=func_518(iParam1);
break;
case 5:
iVar0=func_517(iParam1);
break;
case 6:
iVar0=func_516(iParam1);
break;
}
return iVar0;
}

int func_516(int iParam0){
int iVar0;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_76(joaat("felon2"));
break;
case 1:
iVar0=func_76(joaat("serrano"));
break;
case 2:
iVar0=func_76(joaat("bullet"));
break;
case 3:
iVar0=func_76(joaat("infernus"));
break;
case 4:
iVar0=func_76(joaat("coquette"));
break;
}
return iVar0;
}

int func_517(int iParam0){
int iVar0;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_76(joaat("zion"));
break;
case 1:
iVar0=func_76(joaat("banshee"));
break;
case 2:
iVar0=func_76(joaat("comet2"));
break;
case 3:
iVar0=func_76(joaat("surano"));
break;
case 4:
iVar0=func_76(joaat("exemplar"));
break;
}
return iVar0;
}

int func_518(int iParam0){
int iVar0;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_76(joaat("sentinel2"));
break;
case 1:
iVar0=func_76(joaat("schwarzer"));
break;
case 2:
iVar0=func_76(joaat("superd"));
break;
case 3:
iVar0=func_76(joaat("jackal"));
break;
case 4:
iVar0=func_76(joaat("feltzer2"));
break;
}
return iVar0;
}

int func_519(int iParam0){
int iVar0;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_76(joaat("schafter2"));
break;
case 1:
iVar0=func_76(joaat("bullet"));
break;
case 2:
iVar0=func_76(joaat("f620"));
break;
case 3:
iVar0=func_76(joaat("carbonizzare"));
break;
case 4:
iVar0=func_76(joaat("comet2"));
break;
}
return iVar0;
}

int func_520(int iParam0){
int iVar0;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_76(joaat("feltzer2"));
break;
case 1:
iVar0=func_76(joaat("jackal"));
break;
case 2:
iVar0=func_76(joaat("f620"));
break;
case 3:
iVar0=func_76(joaat("superd"));
break;
case 4:
iVar0=func_76(joaat("rocoto"));
break;
}
return iVar0;
}

int func_521(int iParam0){
int iVar0;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_76(joaat("banshee"));
break;
case 1:
iVar0=func_76(joaat("coquette"));
break;
case 2:
iVar0=func_76(joaat("sentinel2"));
break;
case 3:
iVar0=func_76(joaat("dubsta"));
break;
case 4:
iVar0=func_76(joaat("infernus"));
break;
}
return iVar0;
}

int func_522(int iParam0){
int iVar0;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_76(joaat("rocoto"));
break;
case 1:
iVar0=func_76(joaat("felon2"));
break;
case 2:
iVar0=func_76(joaat("schafter2"));
break;
case 3:
iVar0=func_76(joaat("carbonizzare"));
break;
case 4:
iVar0=func_76(joaat("exemplar"));
break;
}
return iVar0;
}

int func_523(){
int iVar0;
iVar0=0;
return iVar0;
}

int func_524(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_525(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_525(var uParam0, bool bParam1, bool bParam2){
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


bool func_526(var uParam0){
return uParam0->f_1;
}


void func_527(){
Global_2359296[func_523() /*5568*/].f_681.f_36=NETWORK::GET_CLOUD_TIME_AS_INT();
}


void func_528(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar1=CLOCK::GET_CLOCK_DAY_OF_WEEK();
iVar0=0;
while (iVar0 < 5){
(*uParam0)[iVar0]=-1;
uParam0->f_6[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(iVar0 < iParam1){
(*uParam0)[iVar0]=func_515(iVar1, iVar0);
uParam0->f_6[iVar0]=0;
}else{
(*uParam0)[iVar0]=-1;
uParam0->f_6[iVar0]=1;
}
iVar0++;
}
Global_2359296[func_523() /*5568*/].f_681.f_37=iVar1;
}


void func_529(){
func_532("CELL_CLTEST1", 0);
func_530("CELL_CLTEST1");
func_532("CELL_CLTEST6", 0);
func_530("CELL_CLTEST6");
}


void func_530(char* sParam0){
int iVar0;
iVar0=0;
while (iVar0 < 35){
if(!MISC::IS_STRING_NULL(&(Global_113810.f_14144[iVar0 /*104*/]))){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_14144[iVar0 /*104*/]), sParam0)){
if(Global_113810.f_14144[iVar0 /*104*/].f_24==2){
}else{
func_314();
Global_113810.f_14144[iVar0 /*104*/].f_99[Global_20500]=0;
if(func_531(iVar0)){
}else{
Global_113810.f_14144[iVar0 /*104*/].f_24=0;
Global_113810.f_14144[iVar0 /*104*/].f_28=0;
Global_113810.f_14144[iVar0 /*104*/].f_29=0;
}
HUD::THEFEED_REMOVE_ITEM(Global_113810.f_14144[iVar0 /*104*/].f_16);
}}}
iVar0++;
}}

int func_531(int iParam0){
if((Global_113810.f_14144[iParam0 /*104*/].f_99[0]==1 || Global_113810.f_14144[iParam0 /*104*/].f_99[1]==1) || Global_113810.f_14144[iParam0 /*104*/].f_99[2]==1){
return 1;
}
return 0;
}


void func_532(char* sParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 35){
if(!MISC::IS_STRING_NULL(&(Global_113810.f_14144[iVar0 /*104*/]))){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_14144[iVar0 /*104*/]), sParam0)){
if(Global_113810.f_14144[iVar0 /*104*/].f_24==0){
}
Global_113810.f_14144[iVar0 /*104*/].f_24=1;
if(Global_113810.f_14144[iVar0 /*104*/].f_25==1){
if(Global_113810.f_14144[iVar0 /*104*/].f_99[0]==1){
Global_113810.f_14054[0 /*20*/].f_17=0;
}
if(Global_113810.f_14144[iVar0 /*104*/].f_99[1]==1){
Global_113810.f_14054[1 /*20*/].f_17=0;
}
if(Global_113810.f_14144[iVar0 /*104*/].f_99[2]==1){
Global_113810.f_14054[2 /*20*/].f_17=0;
}
if(Global_113810.f_14144[iVar0 /*104*/].f_99[3]==1){
Global_113810.f_14054[3 /*20*/].f_17=0;
}
Global_113810.f_14144[iVar0 /*104*/].f_25=0;
if(iParam1==1){
Global_113810.f_14144[iVar0 /*104*/].f_27=1;
}}}}
iVar0++;
}}

int func_533(){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
return 0;
}
if(func_109()){
return 0;
}
if(!CAM::IS_SCREEN_FADED_IN()){
return 0;
}
if(func_117()){
return 0;
}
if(func_114()){
return 0;
}
if(func_140(PLAYER::PLAYER_ID(), 1, 0)){
return 0;
}
if(func_112()){
return 0;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return 0;
}
if(Global_1836370){
return 0;
}
if(func_272()){
return 0;
}
if(func_271()){
return 0;
}
if(func_545()){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
if(func_534()){
return 0;
}
if(!func_137()){
return 0;
}
if(func_110()){
return 0;
}
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
return 0;
}
return 1;
}


bool func_534(){
return Global_75816;
}


bool func_535(){
if(Global_2359296[func_523() /*5568*/].f_681.f_35==0){
return 0;
}
return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[func_523() /*5568*/].f_681.f_35) < 86400;
}


bool func_536(){
if(Global_2359296[func_523() /*5568*/].f_681.f_36==0){
return 0;
}
return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[func_523() /*5568*/].f_681.f_36) < 86400;
}


bool func_537(){
if(!MISC::IS_BIT_SET(uLocal_341, 2)){
if(!func_25(PLAYER::PLAYER_ID(), 0)){
if((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_140(PLAYER::PLAYER_ID(), 1, 0)) && !func_114()) && (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && CAM::IS_SCREEN_FADED_IN()) && func_539(19)) && !func_538(PLAYER::PLAYER_ID())){
MISC::SET_BIT(&uLocal_341, 2);
}}}
return MISC::IS_BIT_SET(uLocal_341, 2);
}

int func_538(int iParam0){
if(iParam0 !=func_123()){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_5, 4);
}
return 0;
}

int func_539(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_541(iParam0);
if(iVar0==1){
return 1;
}
iVar1=func_540(PLAYER::PLAYER_ID(), 1);
iVar2=func_433(iVar1, 1);
if(iVar2 >=iVar0 && iVar0 !=-1){
return 1;
}
return 0;
}

int func_540(int iParam0, bool bParam1){
if(bParam1){}
return func_436(iParam0);
}

int func_541(int iParam0){
if(func_105()){
return 1;
}
if(func_104()){
return 1;
}
switch (iParam0){
case 16:
case 1:
case 2:
case 28:
case 156:
case 121:
case 96:
case 128:
case 78:
return 1;
case 21:
return 2;
case 22:
case 18:
case 17:
case 73:
case 30:
case 59:
case 60:
case 76:
case 13:
case 90:
case 0:
case 99:
case 5:
case 32:
case 125:
case 129:
case 131:
case 132:
case 133:
case 134:
case 136:
case 138:
case 139:
case 140:
case 141:
case 144:
case 146:
case 137:
case 148:
case 135:
case 236:
case 150:
if(!func_542(-1)){
return 3;
}else{
return 1;
}
break;
case 23:
case 102:
case 110:
return 5;
case 12:
case 11:
case 14:
case 15:
case 27:
case 122:
return 6;
case 97:
case 107:
return 7;
case 4:
return 8;
case 19:
return 8;
case 29:
return 10;
case 8:
return 11;
case 61:
case 119:
return 12;
case 89:
return 13;
case 31:
return 14;
case 3:
case 103:
case 124:
case 126:
case 127:
return 15;
case 109:
case 88:
return 16;
case 74:
case 100:
return 17;
case 6:
return 18;
case 20:
return 19;
case 62:
case 108:
case 130:
return 20;
case 65:
case 93:
return 21;
case 63:
case 104:
return 25;
case 77:
case 106:
return 30;
case 81:
case 98:
return 35;
case 75:
case 95:
return 40;
case 105:
return 45;
break;
case 67:
case 64:
return 50;
}
return -1;
}


bool func_542(int iParam0){
return func_543(123, iParam0);
}

int func_543(int iParam0, var uParam1){
var uVar0;
var uVar1;
uVar0=func_544(iParam0, uParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__544(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_83(uParam1));
}


bool func_545(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 !=0;
}

int func_546(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_552()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_551()){
return 1;
}
if(func_550(159)){
if(!func_549()){
return 1;
}}
if(func_550(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_547() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_547())==0){
return 1;
}}
return 0;
}

int func_547(){
switch (func_85()){
case 0:
return func_548();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_548(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_549(){
return Global_2683883.f_698;
}

int func_550(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_551(){
return Global_2694576;
}


bool func_552(){
return Global_2683883.f_693;
}


void func_553(){
wait(0);
}


void func_554(){
if(iLocal_113 !=-1){
func_144(iLocal_113, 0);
}
func_556(&iLocal_320);
if(MISC::IS_BIT_SET(uLocal_341, 1)){
func_555(0f, 0f, 0f, func_382(19), 1);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_333.f_24)){
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_333.f_24);
}
Local_333.f_24=-1;
}}
func_392();
Global_2794162.f_1755=0;
Global_2794162.f_1756=0;
Global_2794162.f_1758=0;
Global_2794162.f_1784=0;
if(MISC::IS_BIT_SET(uLocal_341, 7)){
func_274(6, 0);
}
func_414();
if(HUD::DOES_BLIP_EXIST(Global_1935839)){
HUD::REMOVE_BLIP(&Global_1935839);
}
func_267(0);
if(HUD::DOES_BLIP_EXIST(Global_1935850)){
HUD::REMOVE_BLIP(&Global_1935850);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iLocal_90){
func_179(1215605247, 0, 0);
func_178(0);
}
if(iLocal_103){
func_178(0);
}}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_555(struct<3> Param0, char* sParam1, int iParam2){
int iVar0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam1)){
iVar0=0;
while (iVar0 < 16){
if(MISC::ARE_STRINGS_EQUAL(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), sParam1)){
if(iParam2 || func_32(Global_2794162.f_4070[iVar0 /*26*/].f_1, Param0, 0)){
Global_2794162.f_4070[iVar0 /*26*/]=0;
Global_2794162.f_4070[iVar0 /*26*/].f_1={
0f, 0f, 0f 
};
StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), "", 24);
StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_10), "", 64);
}}
iVar0++;
}}}


void func_556(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_557(*iParam0);
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

int func_557(int iParam0){
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

int func_558(struct<21> Param0){
func_564(func_565(Param0.f_0), Param0);
func_561(0, -1, 0);
NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_333, 74, 0);
NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_340, 129, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
if(!func_560()){
return 0;
}
Global_2794162.f_1758=0;
Global_2794162.f_4488=0;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){}
if(func_72(PLAYER::PLAYER_ID(), 6)){
func_274(6, 0);
}
func_559();
return 1;
}


void func_559(){
var uVar0;
uVar0=func_81(1200, -1);
if(MISC::IS_BIT_SET(uVar0, 3)){
MISC::SET_BIT(&uLocal_342, true);
}
if(MISC::IS_BIT_SET(uVar0, 4)){
MISC::SET_BIT(&uLocal_342, 2);
}
if(MISC::IS_BIT_SET(uVar0, 5)){
MISC::SET_BIT(&uLocal_342, 3);
MISC::SET_BIT(&uLocal_342, false);
}}

int func_560(){
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
if(func_552()){
return 0;
}
if(func_550(157)){
return 0;
}
if(iVar0 >=3600){
return 0;
}
wait(0);
}
return 0;
}

int func_561(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_563();
}else{
return 0;
}}
if(!func_562(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_563();
}else{
return 0;
}}
if(func_552()){
if(!bParam2){
func_563();
}else{
return 0;
}}
if(func_550(157)){
if(!bParam2){
func_563();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_563();
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
func_563();
}else{
return 0;
}}}elseif(!NETWORK::NETWORK_IS_IN_SESSION()){
if(!bParam2){
func_563();
}else{
return 0;
}}
return 1;
}


bool func_562(bool bParam0){
if(bParam0){}
return Global_1575038;
}


void func_563(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_564(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_563();
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_565(int iParam0){
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
switch (func_566(func_567(iParam0, 1))){
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

int func_566(int iParam0){
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

int func_567(int iParam0, bool bParam1){
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