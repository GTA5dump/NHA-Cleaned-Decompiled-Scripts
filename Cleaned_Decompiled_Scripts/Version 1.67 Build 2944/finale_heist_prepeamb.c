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
int iLocal_35=0;
int iLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
struct<9> Local_42={
0, 0, 0, 0, 0, 0, 0, 0, 0 
};
char* sLocal_43[46]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
bool bLocal_44=0;
var uLocal_45[2]={
0, 0 
};
float fLocal_46=0f;
var uLocal_47=0;
struct<3> Local_48={
0, 0, 0 
};
int iLocal_49=0;
struct<3> Local_50={
0, 0, 0 
};
float fLocal_51=0f;
struct<67> Local_52={
0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 
};
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
int iLocal_64[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_65=0;
struct<261> Local_66[4];
char* sLocal_67[13]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
char* sLocal_68=NULL;
var uLocal_69=0;
var uLocal_70=0;
int iLocal_71=0;
var uLocal_72=0;
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
char* sLocal_77=NULL;
var uLocal_78=16;
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
int iLocal_245=0;
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
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
iLocal_41=145;
bLocal_44=-1;
fLocal_46=0f;
Local_48={
0f, 0f, 0f 
};
Local_50={
0f, 0f, 0f 
};
fLocal_51=0f;
iLocal_65=1;
sLocal_68="";
iLocal_71=-1;
iLocal_74=-1;
iLocal_76=-1;
if(!func_268(31)){
iLocal_35=Global_113810.f_10052.f_128;
if(iLocal_35==2){
MISC::SET_BIT(&uLocal_47, 10);
Local_50={
func_267(25) 
};
fLocal_51=func_266(25);
if(func_265(&Local_52, 25)){
if(!MISC::IS_BIT_SET(uLocal_47, 14)){
MISC::SET_BIT(&uLocal_47, 14);
}}}elseif(iLocal_35==1){
}}else{
func_263("AM_H_PREP8", 2, 0, -1, 10000, 7, 0, 0, 0);
Global_113810.f_10052.f_128=iLocal_35;
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82)){
if(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP()==2){
func_254(0);
func_253();
func_251(31, 1);
}else{
func_253();
func_251(31, 0);
}}
func_246(2);
Local_48={
-166.1555f, -621.9833f, 31.4281f 
};
while (true){
if(func_245(85)){
func_241("AM_H_PREP8", 1);
func_251(31, 0);
}
if(func_240(PLAYER::PLAYER_PED_ID())){
func_232();
func_224();
func_223();
func_212();
switch (iLocal_35){
case 0:
func_173();
break;
case 1:
func_140();
break;
case 2:
func_139();
break;
case 3:
func_132();
break;
case 4:
func_16(34);
break;
case 5:
break;
default:
break;
}
func_7();
}else{
func_1(46, 1);
}
wait(0);
}}


void func_1(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
while (iVar0 <=(46 - 1)){
if(iParam0 !=iVar0 && iParam0 !=46){
func_4(iVar0);
}
iVar0++;
}
if(bParam1){
if(iParam0 !=46){
if((!func_2(func_3(iParam0)) && !Global_112449) && !MISC::IS_BIT_SET(uLocal_47, 15)){
MISC::SET_BIT(&uLocal_47, 15);
HUD::CLEAR_HELP(1);
}}elseif((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_112449) && !MISC::IS_BIT_SET(uLocal_47, 15)){
MISC::SET_BIT(&uLocal_47, 15);
HUD::CLEAR_HELP(1);
}}}


bool func_2(var uParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


var func__3(bool bParam0){
return sLocal_43[bParam0];
}


void func_4(bool bParam0){
bool bVar0;
bVar0=func_6(bParam0);
MISC::CLEAR_BIT(&(uLocal_45[func_5(bParam0)]), bVar0);
}

int func_5(int iParam0){
int iVar0;
if(iParam0 < 32){
iVar0=0;
}else{
iVar0=1;
}
return iVar0;
}

int func_6(int iParam0){
if(iParam0 > 31){
return (iParam0 - 32);
}
return iParam0;
}


void func_7(){
if(((MISC::IS_BIT_SET(uLocal_47, 0) && !MISC::IS_BIT_SET(uLocal_47, 1)) && !MISC::IS_BIT_SET(uLocal_47, 14)) && func_13()){
if(func_12(0, 172, 0) || func_12(0, 173, 0)){
iLocal_76=MISC::GET_GAME_TIMER();
}
if(iLocal_76 !=-1){
if((MISC::GET_GAME_TIMER() - iLocal_76) < 200){
iLocal_41=func_8();
}else{
iLocal_76=-1;
}}}else{
iLocal_41=145;
iLocal_76=-1;
}}

int func_8(){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar2=0;
iVar3=145;
if(Global_78689){
iVar3=145;
}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)==1){
if(func_11()){
if(func_10()){
iVar6=0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "GET_CURRENT_SELECTION");
uVar0=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
iVar4=MISC::GET_GAME_TIMER();
while ((!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uVar0) && iVar6==0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)==1){
wait(0);
iVar5=MISC::GET_GAME_TIMER();
if((iVar5 - iVar4) > 1500){
iVar6=1;
}}
iVar1=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uVar0);
if(iVar1 > func_9() || iVar1 < 0){
iVar1=func_9();
}
iVar2=Global_20506[iVar1];
iVar3=iVar2;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)==0){
iVar3=145;
}
if(iVar6==1){
iVar3=145;
}}else{
iVar3=145;
}}else{
iVar3=145;
}}else{
iVar3=145;
}
return iVar3;
}

int func_9(){
if(Global_32283==0 || Global_32283==2){
return 193;
}
return 161;
}

int func_10(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
return 1;
}
return 0;
}

int func_11(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcontacts")) > 0){
return 1;
}
return 0;
}

int func_12(int iParam0, int iParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1))){
if(MISC::IS_PC_VERSION()){
if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2))){
return 0;
}}
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()){
return 0;
}else{
return 1;
}}
return 0;
}

int func_13(){
if(func_15(0) && func_14()){
return 1;
}
return 0;
}

int func_14(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcontacts")) > 0){
return 1;
}
return 0;
}

int func_15(int iParam0){
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


void func_16(int iParam0){
func_112();
if(iLocal_38==0){
switch (iLocal_39){
case 0:
func_111(1);
uLocal_72=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
func_1(46, 1);
iLocal_73=MISC::GET_GAME_TIMER() + 3000;
if(!MISC::IS_BIT_SET(uLocal_47, 10)){
func_95();
}
func_94(iParam0, 1);
iLocal_39=1;
break;
case 1:
if(MISC::GET_GAME_TIMER() > iLocal_73){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_72)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_72, "SHOW_MISSION_PASSED_MESSAGE");
func_93("M_FB4P3_P");
func_93("M_FB4P3");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_73=MISC::GET_GAME_TIMER() + 10000;
func_91(0);
iLocal_39=2;
}}
break;
case 2:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_72) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI()){
if(MISC::GET_GAME_TIMER() < iLocal_73){
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_72, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
}elseif(MISC::GET_GAME_TIMER() < iLocal_73 + 100){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_72, "TRANSITION_OUT");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_73=(iLocal_73 - 100);
}elseif(MISC::GET_GAME_TIMER() < iLocal_73 + 500){
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_72, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
}else{
iLocal_39=3;
}}
break;
case 3:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_72)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_72);
}
func_111(0);
if(iLocal_40==2){
func_90(108, 0);
}
if(func_88(iLocal_49)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_49, 1);
}
func_84("M_FHPE", func_85());
func_81(2, 0);
break;
}}
func_17();
}


void func_17(){
int iVar0;
if(!MISC::IS_BIT_SET(uLocal_47, 2)){
if(!func_80(0f, 0f, 0f, Local_50, 0)){
if(func_79(PLAYER::PLAYER_PED_ID(), Local_50, 100f, 1) && !func_78()){
if(func_88(func_77(25))){
iLocal_49=func_77(25);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_49, 1, 1);
if(func_88(iLocal_49)){
if(!DECORATOR::DECOR_EXIST_ON(iLocal_49, "GetawayVehicleValid")){
if(DECORATOR::DECOR_SET_BOOL(iLocal_49, "GetawayVehicleValid", 1)){
}
}
MISC::SET_BIT(&uLocal_47, false);
MISC::SET_BIT(&uLocal_47, 2);
}}elseif(!func_76(25, 0)){
if(!func_88(func_77(25))){
func_71(1);
}}}elseif(func_88(iLocal_49)){
if(!func_79(PLAYER::PLAYER_PED_ID(), Local_50, 100f, 1)){
}}}}else{
if(!func_80(0f, 0f, 0f, Local_50, 0)){
if(!func_79(PLAYER::PLAYER_PED_ID(), Local_50, 100f, 1)){
if(func_88(iLocal_49)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_49, 0)){
func_21(iLocal_49, Local_50, fLocal_51, 25, 1);
MISC::CLEAR_BIT(&uLocal_47, 2);
VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_49, 0);
func_20(&iLocal_49);
MISC::CLEAR_BIT(&uLocal_47, false);
}else{
func_71(0);
}}elseif(!func_76(25, 0)){
func_71(1);
}}elseif(!func_76(25, 0)){
if(!func_88(iLocal_49)){
func_71(1);
}}elseif(!func_88(iLocal_49)){
iVar0=func_77(25);
if(func_88(iVar0) && iVar0 !=iLocal_49){
iLocal_49=iVar0;
}}}
func_18();
}}


void func_18(){
if(MISC::IS_BIT_SET(uLocal_47, 2) && MISC::IS_BIT_SET(uLocal_47, 0)){
if(func_88(iLocal_49)){
if(func_19(PLAYER::PLAYER_PED_ID(), iLocal_49, 10f, 1)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_49, 1), Local_50) >=100f){
func_71(0);
}}}elseif(!func_76(25, 0)){
if(func_88(iLocal_49)){
VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_49, 0);
}
func_20(&iLocal_49);
func_71(1);
}}}


bool func_19(int iParam0, int iParam1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), ENTITY::GET_ENTITY_COORDS(iParam1, iParam3)) <=(fParam2 * fParam2);
}


void func_20(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
}}}


void func_21(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4){
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
func_70(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_65(iParam0, &Var0);
if(func_80(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
fParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78467=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_59(iParam3, &Var0, Param1, fParam2, func_64(iParam0));
func_22(iParam3, iParam0, 0);
}}


void func_22(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_55(&(Global_77479.f_555[0 /*21*/]), iParam0)){
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
Global_113810.f_32752.f_4801=func_44();
}
if(iParam1 !=Global_77479.f_139[iParam0]){
if(iParam0==24){
iVar0=func_77(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_23(iVar0, 145);
}}
Global_78385=iParam1;
Global_78386=iParam0;
Global_78387=iParam2;
}}}}


void func_23(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_24(iParam0)){
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
func_65(iParam0, &(Global_113810.f_32752.f_5510));
}

int func_24(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_42(iParam0, 0, 0)) || func_42(iParam0, 1, 0)) || func_42(iParam0, 2, 0)) || func_64(iParam0) !=145) || func_41(iParam0)) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || !func_25(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_40(iParam0)){
}
if(func_40(iParam0)){
}
if(func_42(iParam0, 0, 0)){
}
if(func_42(iParam0, 1, 0)){
}
if(func_42(iParam0, 2, 0)){
}
if(func_64(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_25(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_26(iParam0, 0, -1)){
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

int func_26(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_37()){
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
if((((!func_36() && !func_35()) && !func_34()) && !func_33()) && !func_37()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_32() || MISC::IS_PC_VERSION()) || func_31()){
}elseif(!func_34()){
return 0;
}}
if(bParam1){
if(!func_29(iParam0, iParam2)){
return 0;
}}
if(!func_27(iParam0)){
return 0;
}
return 1;
}

int func_27(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_28()){
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

int func_28(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_29(int iParam0, int iParam1){
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
}}elseif(iParam0==func_30(1)){
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

int func_30(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}


var func__31(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__32(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_33(){
return 0;
}

int func_34(){
return 1;
}

int func_35(){
return 1;
}

int func_36(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_37(){
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

int func_38(int iParam0){
int iVar0;
char* sVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
sVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G ")){
return 1;
}
if(!func_26(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_39(int iParam0){
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

int func_40(int iParam0){
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

int func_41(int iParam0){
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

int func_42(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_43(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_43(int iParam0, int iParam1, char* sParam2, var uParam3){
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


var func__44(){
var uVar0;
func_54(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_53(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_52(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_47(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_46(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_45(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_45(var uParam0, int iParam1){
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


void func_46(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_47(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_51(*uParam0);
iVar1=func_49(*uParam0);
if(iParam1 < 1 || iParam1 > func_48(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_48(int iParam0, int iParam1){
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


var func__49(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_50(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_50(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_51(var uParam0){
return uParam0 & 15;
}


void func_52(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_53(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_54(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_55(var uParam0, int iParam1){
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
uParam0->f_4=func_56(0, 1);
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
uParam0->f_4=func_56(0, 1);
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
uParam0->f_4=func_56(1, 1);
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
uParam0->f_4=func_56(1, 2);
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
uParam0->f_4=func_56(1, 1);
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
uParam0->f_4=func_56(1, 2);
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
uParam0->f_4=func_56(2, 1);
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
uParam0->f_4=func_56(2, 1);
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
uParam0->f_4=func_56(2, 1);
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
if(func_37()){
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
if(func_37()){
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
if(!func_80(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113810.f_32752.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113810.f_32752.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_80(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_80(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_56(int iParam0, int iParam1){
struct<82> Var0;
if(func_58(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_57(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_57(int iParam0, var uParam1, int iParam2){
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


bool func_58(int iParam0){
return iParam0 < 3;
}


void func_59(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4){
if(func_55(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
func_63(iParam0);
func_62(uParam1, &(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]));
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 11)){
Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/]={
Param2 
};
Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14]=fParam3;
}else{
Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/]={
0f, 0f, 0f 
};
Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14]=-1f;
}
Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14]=iParam4 + 1;
func_60(iParam0, 1);
}}}


void func_60(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_76(iParam0, 0)){
func_61(iParam0, 1, 0);
func_61(iParam0, 2, 0);
func_61(iParam0, 3, 0);
func_61(iParam0, 4, 0);
func_61(iParam0, 0, 1);
Global_77479[iParam0]=1;
}}else{
func_61(iParam0, 0, 0);
}}


void func_61(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}}


void func_62(var uParam0, var uParam1){
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


void func_63(int iParam0){
if(iParam0==-1){
return;
}
if(func_55(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
func_60(iParam0, 0);
}}}

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


void func_65(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_69(uParam1);
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
if(uParam1->f_65==-1 && !func_68(uParam1->f_66)){
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
func_67(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_66(iVar0 + 1));
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

int func_66(int iParam0){
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

int func_67(int iParam0, var uParam1, var uParam2){
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

int func_68(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_69(var uParam0){
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


void func_70(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_63(iParam0);
func_60(iParam0, 0);
}


void func_71(bool bParam0){
if(MISC::IS_BIT_SET(uLocal_47, 14)){
if(func_73(PLAYER::PLAYER_PED_ID())==0){
if(bParam0){
func_72(10);
}else{
func_72(12);
}}elseif(bParam0){
func_72(11);
}else{
func_72(13);
}
if(iLocal_40==0){
func_94(45, 0);
}elseif(iLocal_40==1){
func_94(12, 0);
}elseif(iLocal_40==2){
func_94(34, 0);
}
if(iLocal_40 !=2){
Local_48={
0f, 0f, 0f 
};
}
iLocal_38=0;
iLocal_39=0;
MISC::CLEAR_BIT(&uLocal_47, 6);
MISC::CLEAR_BIT(&uLocal_47, 7);
MISC::CLEAR_BIT(&uLocal_47, false);
MISC::CLEAR_BIT(&uLocal_47, true);
MISC::CLEAR_BIT(&uLocal_47, 8);
MISC::CLEAR_BIT(&uLocal_47, 12);
MISC::CLEAR_BIT(&uLocal_47, 2);
MISC::CLEAR_BIT(&uLocal_47, 14);
if(iLocal_35==4){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_72)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_72);
}
func_111(0);
}
func_81(0, 0);
}}


void func_72(int iParam0){
bool bVar0;
bVar0=func_6(iParam0);
MISC::SET_BIT(&(uLocal_45[func_5(iParam0)]), bVar0);
}

int func_73(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_74(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_74(int iParam0){
if(func_58(iParam0)){
return func_75(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__75(int iParam0){
return Global_2058[iParam0 /*29*/];
}

int func_76(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}

int func_77(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77479.f_139[iParam0];
}

int func_78(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}


bool func_79(int iParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), Param1) <=(fParam2 * fParam2);
}


bool func_80(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_81(int iParam0, bool bParam1){
Global_113810.f_10052.f_128=iParam0;
iLocal_35=iParam0;
if(bParam1){
return;
}
func_82();
}

int func_82(){
if(func_83(0)){
return 0;
}
if(Global_100872.f_8){
if(Global_100872.f_10 > 0){
return 0;
}}elseif(Global_100872.f_10 > 1){
return 0;
}
Global_100872.f_10++;
return 1;
}

int func_83(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_84(char* sParam0, var uParam1){
STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), sParam0, 1);
if(MISC::IS_BIT_SET(uParam1, 0)){
STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), sParam0, 1);
}
if(MISC::IS_BIT_SET(uParam1, 1)){
STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), sParam0, 1);
}
if(MISC::IS_BIT_SET(uParam1, 2)){
STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), sParam0, 1);
}}

int func_85(){
func_86();
switch (Global_113810.f_2366.f_539.f_4321){
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


void func_86(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_74(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_73(PLAYER::PLAYER_PED_ID());
if(func_58(iVar0) && (!func_87(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_58(Global_113810.f_2366.f_539.f_4321)){
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


bool func_87(int iParam0){
return Global_43377==iParam0;
}

int func_88(int iParam0){
if(func_89(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}

int func_89(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}


void func_90(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113810.f_8616[iParam0]=1;
Global_113810.f_8616.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}


void func_91(bool bParam0){
char* sVar0;
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
switch (func_92()){
case 0:
if(bParam0){
sVar0="MICHAEL_SMALL_01";
}else{
sVar0="MICHAEL_BIG_01";
}
break;
case 1:
if(bParam0){
sVar0="FRANKLIN_SMALL_01";
}else{
sVar0="FRANKLIN_BIG_01";
}
break;
case 2:
if(bParam0){
sVar0="TREVOR_SMALL_01";
}else{
sVar0="TREVOR_BIG_01";
}
break;
}
AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}


bool func_92(){
func_86();
return Global_113810.f_2366.f_539.f_4321;
}


void func_93(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_94(int iParam0, int iParam1){
if(iParam0==146 || iParam0==-1){
return;
}
if(Global_113810.f_9088.f_99.f_58[iParam0]==iParam1){
return;
}
Global_113810.f_9088.f_99.f_58[iParam0]=iParam1;
}


void func_95(){
Global_113810.f_10019.f_21++;
if(iLocal_40==0){
STATS::STAT_SET_INT(joaat("fl_co_fb4p3"), Global_113810.f_10019.f_21, 1);
if(func_104()){
if(func_245(74) || (func_245(75) && func_103())){
func_94(46, 1);
}}}
func_96();
MISC::SET_BIT(&uLocal_47, 10);
}


void func_96(){
if(iLocal_40==0){
func_97(23, 0, 0);
}elseif(iLocal_40==1){}elseif(iLocal_40==2){}}


void func_97(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_101((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113810.f_10197[iParam0 /*12*/].f_5==1){
if(Global_113810.f_10197[iParam0 /*12*/].f_6==11 || Global_113810.f_10197[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113810.f_10197[iParam0 /*12*/].f_5=1;
Global_113810.f_10197[iParam0 /*12*/].f_10=iParam1;
Global_113810.f_10197[iParam0 /*12*/].f_11=iParam2;
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
func_98();
}}


void func_98(){
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
Global_113546=0;
Global_113547=0;
Global_113548=0;
Global_113549=0;
Global_113550=0;
Global_113551=0;
Global_113552=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113810.f_10197.f_3853;
Global_113810.f_10197.f_3853=0f;
while (iVar0 < 321){
if(Global_113810.f_10197[iVar0 /*12*/].f_5==1){
switch (Global_113810.f_10197[iVar0 /*12*/].f_6){
case 1:
Global_113546++;
fVar1=(fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 3:
Global_113547++;
fVar2=(fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 5:
Global_113548++;
fVar3=(fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 7:
Global_113549++;
fVar4=(fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 9:
Global_113550++;
fVar5=(fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113551++;
fVar6=(fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 13:
Global_113552++;
fVar7=(fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113529 > 0){
if(Global_113546==Global_113529){
fVar1=55f;
}}
if(Global_113530 > 0){
if(Global_113547==Global_113530){
fVar2=10f;
}}
if(Global_113531 > 0){
if(Global_113548==Global_113531){
fVar3=0f;
}}
if(Global_113532 > 0){
if(Global_113549==Global_113532){
fVar4=10f;
}}
if(Global_113533 > 0){
if(((Global_113550==Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550==Global_113536){
if(!MISC::IS_BIT_SET(Global_113810.f_10197.f_3856, 14)){
if(Global_113550==Global_113533){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113533, 0);
MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113534 > 0){
if(Global_113551==Global_113534){
fVar6=15f;
}}
if(Global_113535 > 0){
if(Global_113552==Global_113535){
fVar7=5f;
}}
Global_113810.f_10197.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113550 > Global_113536 || Global_113550==Global_113536){
iVar9=Global_113536;
}else{
iVar9=Global_113550;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113546, 1);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113529, 1);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113547, 1);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113530, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113548, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113531, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113549, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113532, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113536, 1);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113552 + Global_113551), 1);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113535 + Global_113534), 1);
Global_113553=(Global_113546 * 100 / Global_113529);
Global_113555=((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
Global_113554=((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
Global_113556=((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113810.f_10197.f_3853, 1);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113553, 1);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113554, 1);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113555, 1);
if(fVar8 > 0f && floor(fVar8) < floor(Global_113810.f_10197.f_3853)){
func_100(13, floor(Global_113810.f_10197.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78689){
if(func_99()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113544=0;
}
if(!Global_63485){
func_82();
}}}}}

int func_99(){
return Global_32283;
}

int func_100(int iParam0, int iParam1){
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


void func_101(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_102();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_102(){
return Global_1574918;
}

int func_103(){
if((func_245(41) && func_245(3)) && func_245(21)){
return 1;
}
return 0;
}

int func_104(){
if(iLocal_40==0){
return func_109();
}elseif(iLocal_40==1){
return func_108();
}elseif(iLocal_40==2){
return func_105();
}
return 0;
}

int func_105(){
if((func_245(79) && func_245(83)) && func_106(func_107())){
return 1;
}
return 0;
}

int func_106(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_99.f_58[iParam0];
}

int func_107(){
if(iLocal_40==0){
return 45;
}elseif(iLocal_40==1){
return 12;
}elseif(iLocal_40==2){
return 34;
}
return -1;
}

int func_108(){
if(func_245(68)){
return 1;
}
return 0;
}

int func_109(){
if(func_110(33, 37) >=4){
return 1;
}
return 0;
}

int func_110(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
iVar1=iParam0;
while (iVar1 <=iParam1){
if(func_245(iVar1)){
iVar0++;
}
iVar1++;
}
if(func_106(func_107())){
iVar0++;
}
return iVar0;
}


void func_111(int iParam0){
Global_78950=iParam0;
Global_78951=iParam0;
}


void func_112(){
struct<6> Var0;
if(iLocal_38 !=0){
Var0={
func_131() 
};
switch (iLocal_38){
case 1:
if(iLocal_40 !=2){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
if(AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0){
func_130("LOCAUD", Local_42.f_7);
func_129(1);
iLocal_38=2;
}
elseif(MISC::IS_BIT_SET(uLocal_47, 10) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE()==0){
func_130("LOCAUD", Local_42.f_7);
func_129(1);
iLocal_38=2;
}}}else{
iLocal_38=0;
}
if(func_128()){
iLocal_38=3;
}
break;
case 2:
if(func_128()){
iLocal_38=3;
}
if(!MISC::IS_BIT_SET(uLocal_47, 10)){
if(AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >=0){
func_121(Var0);
}}else{
iLocal_38=3;
}
break;
case 3:
if(!func_120()){
iLocal_38=4;
}
break;
case 4:
if(!func_15(0)){
if(iLocal_40==1){
func_117(Local_42.f_8);
}
iLocal_38=5;
}
break;
case 5:
if(func_92()==0){
if(iLocal_40==0){
if(func_104()){
if((func_245(74) || func_245(75)) && func_103()){
func_113(1);
iLocal_38=0;
}else{
func_113(0);
iLocal_38=0;
}
}
else{
iLocal_38=0;
}}else{
iLocal_38=0;
}}else{
if(iLocal_40==0){
if(func_104()){
if(!func_245(3)){
func_90(50, 0);
}
}}
iLocal_38=0;
}
break;
}}}


void func_113(bool bParam0){
if(bParam0){
func_114(1527885205, 0, func_92(), 23, 3, 6000, 6000, -1, 0, -1, 0);
}elseif(!func_245(3)){
func_114(-224691627, 0, func_92(), 23, 3, 6000, 6000, -1, 50, -1, 0);
}else{
func_114(-224691627, 0, func_92(), 23, 3, 6000, 6000, -1, 0, -1, 0);
}}

int func_114(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
struct<15> Var0;
int iVar1;
if(func_83(0)){
return 0;
}
if(iParam5 < 0){
return 0;
}
if(iParam6 < 0){
return 0;
}
if(iParam7==76){
return 0;
}
if(iParam8==235){
return 0;
}
if(iParam3==bParam2){
return 0;
}
if(((bParam2 !=144 && bParam2 !=0) && bParam2 !=1) && bParam2 !=2){
return 0;
}
if(Global_113810.f_7691.f_136 < 9){
Var0.f_0=iParam0;
if(Global_113810.f_7691.f_911==Var0.f_0){
Global_113810.f_7691.f_911=-1;
}
Var0.f_3=func_116(iParam1);
Var0.f_5=iParam6;
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam5);
Var0.f_1=iParam10;
iVar1=0;
MISC::SET_BIT(&iVar1, bParam2);
Var0.f_2=iVar1;
Var0.f_6=iParam3;
Var0.f_14=iParam4;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_7=iParam7;
Var0.f_8=iParam8;
Var0.f_9=iParam9;
MISC::SET_BIT(&(Var0.f_1), false);
MISC::CLEAR_BIT(&(Var0.f_1), true);
if(iParam1==0){
MISC::SET_BIT(&(Var0.f_1), 10);
}
Global_113810.f_7691[Global_113810.f_7691.f_136 /*15*/]={
Var0 
};
Global_113810.f_7691.f_136++;
func_115(bParam2);
return 1;
}
return 0;
}


void func_115(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(!func_58(bParam0)){
return;
}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_136){
if(MISC::IS_BIT_SET(Global_113810.f_7691[iVar0 /*15*/].f_2, bParam0)){
if(Global_113810.f_7691[iVar0 /*15*/].f_3 > iVar1){
iVar1=Global_113810.f_7691[iVar0 /*15*/].f_3;
}}
iVar0++;
}
iVar2=0;
while (iVar2 < Global_113810.f_7691.f_764){
if(MISC::IS_BIT_SET(Global_113810.f_7691.f_651[iVar2 /*14*/].f_2, bParam0)){
if(Global_113810.f_7691.f_651[iVar2 /*14*/].f_3==5){
iVar1=5;
}}
iVar2++;
}
Global_113810.f_7691.f_919[bParam0]=iVar1;
}

int func_116(int iParam0){
switch (iParam0){
case 0:
case 4:
return 5;
break;
case 7:
return 4;
break;
case 2:
return 3;
break;
case 1:
return 2;
break;
case 3:
return 1;
break;
case 5:
case 6:
return 0;
break;
}
return 7;
}


void func_117(int iParam0){
if(Global_117[iParam0 /*10*/].f_8 !=172){
func_119(iParam0, 0, 0);
func_119(iParam0, 1, 0);
func_119(iParam0, 2, 0);
func_118(iParam0, 0, 0);
func_118(iParam0, 1, 0);
func_118(iParam0, 2, 0);
}}


void func_118(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_119(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_120(){
if(Global_21845==4){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
return 1;
}else{
return 0;
}}
return 0;
}


void func_121(struct<6> Param0){
if(iLocal_40==0){
func_126(Param0);
}elseif(iLocal_40==1){
func_122(Param0);
}}


void func_122(struct<6> Param0){
if(func_104()){
func_123(Param0, 1);
}else{
func_123(Param0, 0);
}}


void func_123(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6){
struct<4> Var0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0)){
if(MISC::ARE_STRINGS_EQUAL(&uParam0, Local_42.f_7)){
if(AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >=0){
if(iLocal_40==0){
Var0={
func_125(bParam6) 
};
func_94(46, 1);
func_130(sLocal_77, &Var0);
func_129(1);
}elseif(iLocal_40==1){
Var0={
func_124(bParam6) 
};
func_130(sLocal_77, &Var0);
func_129(1);
}
iLocal_38=3;
}}}}


struct<4> func_124(bool bParam0){
struct<4> Var0;
if(bParam0){
switch (func_92()){
case 1:
StringCopy(&Var0, "AHF_C8", 16);
break;
case 0:
StringCopy(&Var0, "AHF_C5", 16);
break;
}}else{
switch (func_92()){
case 1:
StringCopy(&Var0, "AHF_C9", 16);
break;
case 0:
StringCopy(&Var0, "AHF_C6", 16);
break;
}}
return Var0;
}


struct<4> func_125(bool bParam0){
struct<4> Var0;
if(bParam0){
switch (func_92()){
case 1:
StringCopy(&Var0, "FBI4_ISAGO", 16);
break;
case 2:
StringCopy(&Var0, "FBI4_ISAGO", 16);
break;
}}else{
switch (func_92()){
case 1:
StringCopy(&Var0, "FBI4_THATSIT", 16);
break;
case 2:
StringCopy(&Var0, "FBI4_THATSIT", 16);
break;
}}
return Var0;
}


void func_126(struct<6> Param0){
if(func_104()){
if(func_127()){
if(func_92() !=0){
func_123(Param0, 1);
}else{
iLocal_38=3;
}}elseif(func_92() !=0){
func_123(Param0, 0);
}else{
iLocal_38=3;
}}else{
iLocal_38=3;
}}

int func_127(){
if(iLocal_40==0){
if((func_245(74) || func_245(74)) && func_103()){
return 1;
}}elseif(iLocal_40==1){
if(func_245(68)){
return 1;
}}
return 0;
}

int func_128(){
if(Global_21894==1 || Global_22861==1){
return 1;
}
return 0;
}


void func_129(bool bParam0){
AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
if(bParam0){}}


void func_130(char* sParam0, char* sParam1){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
Global_21902=1;
StringCopy(&Global_21909, sParam0, 24);
StringCopy(&Global_21903, sParam1, 24);
}}


struct<6> func_131(){
struct<6> Var0;
StringCopy(&Var0, "NULL", 24);
if(Global_21845==4){
return Global_21464;
}
return Var0;
}


void func_132(){
func_133();
}


void func_133(){
func_137();
func_134();
}


void func_134(){
if(func_136()==85){
if(func_135() && !func_76(25, 0)){
if(Local_52.f_66 !=0){
func_59(25, &Local_52, Local_50, fLocal_51, 145);
}}}}

int func_135(){
if(Global_100833==10 || Global_100833==9){
return 1;
}
return 0;
}

int func_136(){
return Global_78952;
}


void func_137(){
if(!func_80(Local_50, 0f, 0f, 0f, 0) && func_136() !=func_138()){
if(func_79(PLAYER::PLAYER_PED_ID(), Local_50, 60f, 1)){
if(func_88(func_77(25))){
if(vdist2(ENTITY::GET_ENTITY_COORDS(func_77(25), 1), Local_50) >=100f){
func_71(0);
}}elseif(!func_76(25, 0)){
func_71(1);
}}}}

int func_138(){
if(iLocal_40==0){
return 38;
}elseif(iLocal_40==1){
return 69;
}elseif(iLocal_40==2){
return 85;
}
return -1;
}


void func_139(){
func_17();
func_112();
}


void func_140(){
func_154();
func_150();
func_147();
func_112();
if(func_79(PLAYER::PLAYER_PED_ID(), Local_48, 150f, 1) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -176.9431f, -651.257f, 31.2136f, -150.9563f, -579.7476f, 35.4245f, 50f, 0, 1, 0)){
MISC::CLEAR_AREA_OF_VEHICLES(Local_48, 6f, 0, 1, 0, 0, 0, 0, 0);
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, 0, 1);
}
if(!MISC::IS_BIT_SET(uLocal_47, 18)){
if(!func_15(0) && !func_120()){
func_146(sLocal_43[4], 7500, 0);
MISC::SET_BIT(&uLocal_47, 18);
}}
if(MISC::IS_BIT_SET(uLocal_47, 0)){
if(MISC::IS_BIT_SET(uLocal_47, 1)){
PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
func_145(&uLocal_243);
if(!iLocal_245){
iLocal_245=1;
if(!func_144("PRC_GETOUT", 0, 0)){
func_146("PRC_GETOUT", 7500, 0);
}}
if(func_88(iLocal_49)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_49, 0)){
if(VEHICLE::IS_VEHICLE_STOPPED(iLocal_49)){
func_142();
func_141(&uLocal_244);
func_94(35, 0);
if(func_144("PRC_GETOUT", 0, 0)){
HUD::CLEAR_PRINTS();
}
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, 1, 1);
func_81(4, 0);
}}}}else{
if(func_144("PRC_GETOUT", 0, 0)){
HUD::CLEAR_PRINTS();
}
iLocal_245=0;
}}else{
MISC::CLEAR_BIT(&uLocal_47, 18);
func_141(&uLocal_244);
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, 1, 1);
func_81(0, 1);
}}


void func_141(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43339){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43338=0;
Global_43340=0;
Global_43377=15;
Global_63482=0;
Global_63483=0;
}


void func_142(){
if(!MISC::IS_BIT_SET(uLocal_47, 6)){
if(func_88(iLocal_49)){
Local_50={
ENTITY::GET_ENTITY_COORDS(iLocal_49, 1) 
};
fLocal_51=ENTITY::GET_ENTITY_HEADING(iLocal_49);
MISC::SET_BIT(&uLocal_47, 6);
MISC::SET_BIT(&uLocal_47, 2);
func_65(iLocal_49, &Local_52);
func_21(iLocal_49, Local_50, fLocal_51, 25, 1);
MISC::SET_BIT(&uLocal_47, 14);
func_143(iLocal_49);
}}}

int func_143(int iParam0){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave")){
if(DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1)){
return 1;
}}else{
return 1;
}
return 0;
}


bool func_144(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
if(iParam1==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
}
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}


void func_145(var uParam0){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::SET_BLIP_ROUTE(*uParam0, 0);
HUD::REMOVE_BLIP(uParam0);
}}


void func_146(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}


void func_147(){
switch (iLocal_36){
case 0:
if(((!HUD::DOES_BLIP_EXIST(uLocal_243) && MISC::IS_BIT_SET(uLocal_47, 0)) && !MISC::IS_BIT_SET(uLocal_47, 1)) && MISC::IS_BIT_SET(uLocal_47, 18)){
uLocal_243=func_148(Local_48, 1);
PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
}
break;
case 1:
func_145(&uLocal_243);
PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
break;
case 2:
break;
}}


var func__148(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_149(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


float func_149(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_150(){
if(func_106(35)){
if(iLocal_36==0){
if(!MISC::IS_BIT_SET(uLocal_47, 1)){
if(func_88(iLocal_49)){
ENTITY::IS_ENTITY_AT_COORD(iLocal_49, Local_48, 4f, 4f, 2f, 1, 1, 0);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_49, -168.8162f, -619.9002f, 31.42446f, -162.6423f, -622.0781f, 33.42446f, 4.14f, 0, 1, 0)){
func_153(24, 46);
if(func_152(iLocal_49)){
if(func_151(1077936128, 1)){
MISC::SET_BIT(&uLocal_47, true);
}
}}}}elseif(MISC::IS_BIT_SET(uLocal_47, 0)){
if(!func_79(iLocal_49, Local_48, 10f, 1) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_49)){
MISC::CLEAR_BIT(&uLocal_47, true);
}}}}}

int func_151(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
return 1;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0)==PLAYER::PLAYER_PED_ID()){
if(!VEHICLE::IS_VEHICLE_STOPPED(iVar0)){
VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, iParam0, iParam1, 0);
return 0;
}}else{
return 1;
}}
if(PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID())){
return 1;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_STOPPED(iVar0)){
return 1;
}}
return 0;
}

int func_152(int iParam0){
struct<3> Var0;
if(ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0)){
func_72(39);
return 0;
}
if(!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0, 0) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, 0, 0, 0)){
func_72(37);
return 0;
}
if(ENTITY::IS_ENTITY_IN_WATER(iParam0)){
func_72(36);
return 0;
}
Var0={
ENTITY::GET_ENTITY_ROTATION(iParam0, 2) 
};
if(Var0.f_0 >=10f || Var0.f_0 <=-10f){
func_72(42);
return 0;
}elseif(Var0.f_1 >=15f || Var0.f_1 <=-15f){
func_72(43);
return 0;
}
return 1;
}


void func_153(bool bParam0, bool bParam1){
func_4(bParam0);
if(func_2(func_3(bParam0))){
HUD::CLEAR_HELP(1);
MISC::SET_BIT(&uLocal_47, 15);
}
if(bParam1 !=46){
func_4(bParam1);
if(func_2(func_3(bParam1))){
HUD::CLEAR_HELP(1);
MISC::SET_BIT(&uLocal_47, 15);
}}}


void func_154(){
int iVar0;
int iVar1;
if((Global_43377==15 && !func_172()) || func_106(35)){
if(iLocal_36==0){
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!MISC::IS_BIT_SET(uLocal_47, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!MISC::IS_BIT_SET(uLocal_47, 7)){
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_88(iVar0)){
if(!func_171(iVar0)){
if(func_164(iVar0) && !func_163()){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0)){
if(!MISC::IS_BIT_SET(uLocal_47, 19)){
func_72(9);
MISC::SET_BIT(&uLocal_47, 19);
}elseif(func_73(PLAYER::PLAYER_PED_ID())==0){
func_72(17);
}else{
func_72(18);
}
iLocal_49=iVar0;
if(DECORATOR::DECOR_SET_BOOL(iLocal_49, "GetawayVehicleValid", 1)){
}
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_49, 1, 1);
MISC::SET_BIT(&uLocal_47, false);
MISC::SET_BIT(&uLocal_47, 8);
MISC::SET_BIT(&uLocal_47, 7);
return;
}
else{
func_20(&iLocal_49);
MISC::CLEAR_BIT(&uLocal_47, 7);
MISC::CLEAR_BIT(&uLocal_47, false);
return;
}
}
if(DECORATOR::DECOR_SET_BOOL(iVar0, "GetawayVehicleValid", 0)){
}
MISC::SET_BIT(&uLocal_47, 7);
}elseif(func_162(iVar0)){
iLocal_49=iVar0;
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_49, 1, 1);
MISC::SET_BIT(&uLocal_47, false);
MISC::SET_BIT(&uLocal_47, 8);
MISC::SET_BIT(&uLocal_47, 7);
return;
}}else{
func_20(&iLocal_49);
MISC::SET_BIT(&uLocal_47, 7);
MISC::CLEAR_BIT(&uLocal_47, false);
}
}
elseif(MISC::IS_BIT_SET(uLocal_47, 0)){
if(!func_88(iLocal_49)){
func_20(&iLocal_49);
MISC::SET_BIT(&uLocal_47, false);
MISC::SET_BIT(&uLocal_47, 8);
MISC::SET_BIT(&uLocal_47, 7);
}
}}elseif(MISC::IS_BIT_SET(uLocal_47, 8)){
iVar1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_88(iVar1)){
if(func_19(PLAYER::PLAYER_PED_ID(), iVar1, 10f, 1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "Getaway_Winched")){
iLocal_49=iVar1;
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_49, 1, 1);
MISC::SET_BIT(&uLocal_47, false);
MISC::SET_BIT(&uLocal_47, 7);
}
}}else{
MISC::CLEAR_BIT(&uLocal_47, 7);
}}elseif(func_88(iLocal_49)){
if(!func_19(PLAYER::PLAYER_PED_ID(), iLocal_49, 80f, 1)){
func_72(5);
MISC::SET_BIT(&uLocal_47, 8);
func_20(&iLocal_49);
MISC::CLEAR_BIT(&uLocal_47, false);
MISC::CLEAR_BIT(&uLocal_47, 7);
func_253();
}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) !=iLocal_49){
func_20(&iLocal_49);
func_153(17, 46);
func_153(18, 46);
func_153(14, 46);
func_161();
if(func_13()){
func_156(0);
}
func_253();
}}elseif(!func_155(iLocal_49)){
if(DECORATOR::DECOR_SET_BOOL(iLocal_49, "GetawayVehicleValid", 0)){
}
func_153(17, 46);
func_153(18, 46);
func_20(&iLocal_49);
func_253();
func_161();
}}else{
func_20(&iLocal_49);
func_161();
func_253();
}}}}}

int func_155(int iParam0){
if(ENTITY::GET_ENTITY_HEALTH(iParam0) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < 300f){
func_72(6);
return 0;
}
return 1;
}


void func_156(int iParam0){
if(func_160()){
return;
}
if(Global_20704){
if(func_159()){
func_158(1, 1);
}else{
func_158(0, 0);
}}
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
}
Global_21845=5;
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 30);
}else{
MISC::CLEAR_BIT(&Global_8370, 30);
}
if(!func_157()){
Global_20500.f_1=3;
}}

int func_157(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_158(bool bParam0, bool bParam1){
if(bParam0){
if(func_15(0)){
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


bool func_159(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_160(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_161(){
MISC::CLEAR_BIT(&uLocal_47, false);
MISC::CLEAR_BIT(&uLocal_47, 8);
MISC::CLEAR_BIT(&uLocal_47, 7);
}

int func_162(int iParam0){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid")){
if(DECORATOR::DECOR_GET_BOOL(iParam0, "GetawayVehicleValid")){
return 1;
}}
return 0;
}

int func_163(){
if(PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID())){
if((VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0)==PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 0)==PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}
return 0;
}

int func_164(int iParam0){
if((func_170() && func_166(iParam0)) && func_165(iParam0)){
return 1;
}
return 0;
}

int func_165(int iParam0){
int iVar0;
iVar0=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
if(iVar0 >=3){
return 1;
}
func_72(15);
return 0;
}

int func_166(int iParam0){
if((func_168(iParam0) && !func_167(iParam0)) && func_155(iParam0)){
return 1;
}
return 0;
}

int func_167(int iParam0){
int iVar0;
iVar0=func_64(iParam0);
if(iVar0==0){
func_72(25);
return 1;
}
if(iVar0==1){
func_72(26);
return 1;
}
if(iVar0==2){
func_72(27);
return 1;
}
if(func_39(iParam0)){
func_72(14);
return 1;
}
return 0;
}

int func_168(int iParam0){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(!func_169(iVar0)){
if(VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f){
return 1;
}}
func_72(14);
return 0;
}

int func_169(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=9){
if(iLocal_64[iVar0]==iParam0){
if(iVar0==0 && !func_245(33)){
MISC::SET_BIT(&uLocal_47, 3);
}elseif(iVar0==1 && !func_245(34)){
MISC::SET_BIT(&uLocal_47, 3);
}else{
MISC::CLEAR_BIT(&uLocal_47, 3);
}
return 1;
}
iVar0++;
}
return 0;
}

int func_170(){
if((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())){
func_72(14);
return 0;
}
return 1;
}

int func_171(int iParam0){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid")){
return 1;
}
return 0;
}

int func_172(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}


void func_173(){
int iVar0;
func_154();
func_112();
func_211();
if(func_209()){
if(func_203(&uLocal_244) && func_174(&iVar0)){
func_254(0);
if(iVar0==1){
func_81(iVar0, 0);
}else{
func_81(iVar0, 1);
}}}}

int func_174(var uParam0){
var uVar0;
if(MISC::IS_BIT_SET(uLocal_47, 0)){
func_192();
if(func_175()){
uVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(!MISC::IS_STRING_NULL_OR_EMPTY(uVar0)){
if(iLocal_40==2){
*uParam0=1;
}else{
*uParam0=4;
}}
return 1;
}}
return 0;
}

int func_175(){
if(func_177(&uLocal_78, Local_42.f_8, sLocal_77, Local_42.f_4, 9, 1, 0, 0, 0)){
iLocal_38=1;
func_176(192, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
return 1;
}
return 0;
}


void func_176(int iParam0, struct<3> Param1){
int iVar0;
if(HUD::DOES_BLIP_EXIST(Global_32663[iParam0 /*23*/].f_19)){
HUD::SET_BLIP_COORDS(Global_32663[iParam0 /*23*/].f_19, Param1);
}
iVar0=0;
iVar0=0;
while (iVar0 <=2){
Global_32663[iParam0 /*23*/][iVar0 /*3*/]={
Param1 
};
iVar0++;
}}


bool func_177(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_191(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
return func_178(sParam3, iParam4, bParam8);
}

int func_178(char* sParam0, int iParam1, bool bParam2){
Global_21846=0;
if(Global_21845==0 || Global_21847==2){
if(Global_21845 !=0){
if(iParam1 > Global_21847){
if(Global_21852==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
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
func_190();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_189(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_188();
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
func_187();
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
if(func_186()){
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
if(func_157()){
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
func_185();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_184();
func_179();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_190();
}
return 0;
}


void func_179(){
if(!func_180()){
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

int func_180(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_183()){
return 0;
}
if(func_181(PLAYER::PLAYER_ID())){
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


bool func_181(int iParam0){
return func_182(iParam0, 20);
}


var func__182(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_183(){
return -1;
}


void func_184(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21845=1;
}


void func_185(){
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

int func_186(){
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


void func_187(){
if(func_87(14)){
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
Global_20500=func_92();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


void func_188(){
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


bool func_189(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_190(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1==9) || Global_20499==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21845=6;
Global_20500.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(true);
Global_21845=6;
return;
}}


void func_191(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21299={
*uParam0 
};
Global_7686=uParam1;
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


void func_192(){
bool bVar0;
bVar0=func_92();
func_193(bVar0, func_202(bVar0));
}


void func_193(bool bParam0, var uParam1){
int iVar0;
switch (bParam0){
case 0:
Local_42.f_0=0;
Local_42.f_1="MICHAEL";
if(iLocal_40==0){
Local_42.f_2=1;
Local_42.f_3="FRANKLIN";
Local_42.f_8=5;
}else{
Local_42.f_2=3;
Local_42.f_3="LESTER";
if(iLocal_40==1){
Local_42.f_8=6;
}else{
Local_42.f_8=12;
}}
Local_42.f_5="FBI_3_FRESP";
func_200(bParam0);
break;
case 1:
Local_42.f_0=1;
Local_42.f_1="FRANKLIN";
if(iLocal_40==0){
Local_42.f_2=0;
Local_42.f_3="MICHAEL";
Local_42.f_8=9;
}else{
Local_42.f_2=3;
Local_42.f_3="LESTER";
if(iLocal_40==1){
Local_42.f_8=7;
}else{
Local_42.f_8=12;
}}
Local_42.f_5="FBI_3_MRESP";
func_200(bParam0);
break;
case 2:
Local_42.f_0=2;
Local_42.f_1="TREVOR";
if(iLocal_40==0){
Local_42.f_2=0;
Local_42.f_3="MICHAEL";
Local_42.f_8=8;
}else{
Local_42.f_2=3;
Local_42.f_3="LESTER";
if(iLocal_40==1){
Local_42.f_8=7;
}else{
Local_42.f_8=12;
}}
Local_42.f_5="FBI_3_MRESP";
func_200(bParam0);
break;
}
if(iLocal_40==1){
if(bParam0==0){
iVar0=0;
}else{
iVar0=1;
}
func_195(Local_42.f_8, iVar0, 0);
}
func_194(&uLocal_78, Local_42.f_0, PLAYER::PLAYER_PED_ID(), Local_42.f_1, 0, 1);
func_194(&uLocal_78, Local_42.f_2, 0, Local_42.f_3, 0, 1);
Local_42.f_4=uParam1;
}


void func_194(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


void func_195(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_9056=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=172){
func_187();
if(iParam1==4){
func_119(iParam0, 0, 1);
func_119(iParam0, 1, 1);
func_119(iParam0, 2, 1);
func_118(iParam0, 0, 1);
func_118(iParam0, 1, 1);
func_118(iParam0, 2, 1);
}else{
if(func_199(iParam0, iParam1)==1 && func_198(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_119(iParam0, iVar0, 1);
func_118(iParam0, iVar0, 1);
if(iParam0==172 && !MISC::IS_BIT_SET(Global_2794162.f_6892, 4)){
bParam2=false;
}
if(iParam0==171 && !MISC::IS_BIT_SET(Global_2794162.f_6892, 3)){
bParam2=false;
}
if(iParam0==173 && !MISC::IS_BIT_SET(Global_2794162.f_6892, 3)){
bParam2=false;
}}
if(bParam2){
if(!Global_78689){
if(iParam1 !=4){
if(Global_20500 !=iParam1){
Global_9029[iParam1 /*4*/]={
func_197(iParam0) 
};
Global_9046[iParam1]=1;
Global_9051[iParam1]=iParam0;
}elseif(iParam0==Global_20500){
}else{
Global_8980[1 /*6*/]={
func_197(iParam0) 
};
Global_8980[1 /*6*/].f_5=iParam1;
func_196();
}}else{
Global_8980[1 /*6*/]={
func_197(iParam0) 
};
Global_8980[1 /*6*/].f_5=iParam1;
func_196();
}}else{
Global_8980[1 /*6*/]={
func_197(iParam0) 
};
Global_8980[1 /*6*/].f_5=iParam1;
func_196();
}}}}


void func_196(){
char cVar0[64];
char cVar1[64];
char* sVar2;
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[Global_9056 /*29*/].f_7)), 64);
if(Global_9075==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
StringCopy(&cVar1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8980[1 /*6*/])), 64);
sVar2=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8980[1 /*6*/]));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8370, false);
}


struct<4> func_197(int iParam0){
return Global_2058[iParam0 /*29*/].f_3;
}

int func_198(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_24[iParam1];
}

int func_199(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_12[iParam1];
}


void func_200(int iParam0){
Local_42.f_6=ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
func_201(iParam0);
}


void func_201(int iParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(Local_42.f_6)){
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SanAnd")){
if(iParam0==0){
Local_42.f_7="LOC_M77";
}elseif(iParam0==1){
Local_42.f_7="LOC_F78";
}else{
Local_42.f_7="LOC_T78";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Alamo")){
if(iParam0==0){
Local_42.f_7="LOC_M101";
}elseif(iParam0==1){
Local_42.f_7="LOC_F1";
}else{
Local_42.f_7="LOC_T1";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Alta")){
if(iParam0==0){
Local_42.f_7="LOC_M1";
}elseif(iParam0==1){
Local_42.f_7="LOC_F2";
}else{
Local_42.f_7="LOC_T2";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Airp")){
if(iParam0==0){
Local_42.f_7="LOC_M48";
}elseif(iParam0==1){
Local_42.f_7="LOC_F49";
}else{
Local_42.f_7="LOC_T49";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ArmyB")){
if(iParam0==0){
Local_42.f_7="LOC_M28";
}elseif(iParam0==1){
Local_42.f_7="LOC_F29";
}else{
Local_42.f_7="LOC_T29";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "BhamCa")){
if(iParam0==0){
Local_42.f_7="LOC_M2";
}elseif(iParam0==1){
Local_42.f_7="LOC_F3";
}else{
Local_42.f_7="LOC_T3";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Banning")){
if(iParam0==0){
Local_42.f_7="LOC_M3";
}elseif(iParam0==1){
Local_42.f_7="LOC_F4";
}else{
Local_42.f_7="LOC_T4";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Baytre")){
if(iParam0==0){
Local_42.f_7="LOC_M4";
}elseif(iParam0==1){
Local_42.f_7="LOC_F5";
}else{
Local_42.f_7="LOC_T5";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Beach")){
if(iParam0==0){
Local_42.f_7="LOC_M93";
}elseif(iParam0==1){
Local_42.f_7="LOC_F94";
}else{
Local_42.f_7="LOC_T94";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "BradT")){
if(iParam0==0){
Local_42.f_7="LOC_M7";
}elseif(iParam0==1){
Local_42.f_7="LOC_F8";
}else{
Local_42.f_7="LOC_T8";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "BradP")){
if(iParam0==0){
Local_42.f_7="LOC_M6";
}elseif(iParam0==1){
Local_42.f_7="LOC_F7";
}else{
Local_42.f_7="LOC_T7";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Burton")){
if(iParam0==0){
Local_42.f_7="LOC_M8";
}elseif(iParam0==1){
Local_42.f_7="LOC_F9";
}else{
Local_42.f_7="LOC_T9";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CANNY")){
if(iParam0==0){
Local_42.f_7="LOC_M70";
}elseif(iParam0==1){
Local_42.f_7="LOC_F71";
}else{
Local_42.f_7="LOC_T71";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CCreak")){
if(iParam0==0){
Local_42.f_7="LOC_M10";
}elseif(iParam0==1){
Local_42.f_7="LOC_F11";
}else{
Local_42.f_7="LOC_T11";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CalafB")){
if(iParam0==0){
Local_42.f_7="LOC_M9";
}elseif(iParam0==1){
Local_42.f_7="LOC_F10";
}else{
Local_42.f_7="LOC_T10";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ChamH")){
if(iParam0==0){
Local_42.f_7="LOC_M11";
}elseif(iParam0==1){
Local_42.f_7="LOC_F12";
}else{
Local_42.f_7="LOC_T12";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CHU")){
if(iParam0==0){
Local_42.f_7="LOC_M13";
}elseif(iParam0==1){
Local_42.f_7="LOC_F14";
}else{
Local_42.f_7="LOC_T14";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CHIL")){
if(iParam0==0){
Local_42.f_7="LOC_M96";
}elseif(iParam0==1){
Local_42.f_7="LOC_F97";
}else{
Local_42.f_7="LOC_T97";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "COSI")){
if(iParam0==0){
Local_42.f_7="LOC_M14";
}elseif(iParam0==1){
Local_42.f_7="LOC_F15";
}else{
Local_42.f_7="LOC_T15";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "CMSW")){
if(iParam0==0){
Local_42.f_7="LOC_M12";
}elseif(iParam0==1){
Local_42.f_7="LOC_F13";
}else{
Local_42.f_7="LOC_T13";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Cypre")){
if(iParam0==0){
Local_42.f_7="LOC_M15";
}elseif(iParam0==1){
Local_42.f_7="LOC_F16";
}else{
Local_42.f_7="LOC_T16";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Davis")){
if(iParam0==0){
Local_42.f_7="LOC_M16";
}elseif(iParam0==1){
Local_42.f_7="LOC_F17";
}else{
Local_42.f_7="LOC_T17";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Desrt")){
if(iParam0==0){
Local_42.f_7="LOC_M32";
}elseif(iParam0==1){
Local_42.f_7="LOC_F33";
}else{
Local_42.f_7="LOC_T33";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "DelBe")){
if(iParam0==0){
Local_42.f_7="LOC_M19";
}elseif(iParam0==1){
Local_42.f_7="LOC_F20";
}else{
Local_42.f_7="LOC_T20";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "DelPe")){
if(iParam0==0){
Local_42.f_7="LOC_M18";
}elseif(iParam0==1){
Local_42.f_7="LOC_F19";
}else{
Local_42.f_7="LOC_T19";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "DelSol")){
if(iParam0==0){
Local_42.f_7="LOC_M41";
}elseif(iParam0==1){
Local_42.f_7="LOC_F42";
}else{
Local_42.f_7="LOC_T42";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Downt")){
if(iParam0==0){
Local_42.f_7="LOC_M20";
}elseif(iParam0==1){
Local_42.f_7="LOC_F21";
}else{
Local_42.f_7="LOC_T21";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "DTVine")){
if(iParam0==0){
Local_42.f_7="LOC_M21";
}elseif(iParam0==1){
Local_42.f_7="LOC_F22";
}else{
Local_42.f_7="LOC_T22";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Eclips")){
if(iParam0==0){
Local_42.f_7="LOC_M24";
}elseif(iParam0==1){
Local_42.f_7="LOC_F25";
}else{
Local_42.f_7="LOC_T25";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ELSant")){
if(iParam0==0){
Local_42.f_7="LOC_M22";
}elseif(iParam0==1){
Local_42.f_7="LOC_F23";
}else{
Local_42.f_7="LOC_T23";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "EBuro")){
if(iParam0==0){
Local_42.f_7="LOC_M25";
}elseif(iParam0==1){
Local_42.f_7="LOC_F26";
}else{
Local_42.f_7="LOC_T26";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ELGorl")){
if(iParam0==0){
Local_42.f_7="LOC_M26";
}elseif(iParam0==1){
Local_42.f_7="LOC_F27";
}else{
Local_42.f_7="LOC_T27";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Elysian")){
if(iParam0==0){
Local_42.f_7="LOC_M27";
}elseif(iParam0==1){
Local_42.f_7="LOC_F28";
}else{
Local_42.f_7="LOC_T28";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Galli")){
if(iParam0==0){
Local_42.f_7="LOC_M31";
}elseif(iParam0==1){
Local_42.f_7="LOC_F32";
}else{
Local_42.f_7="LOC_T32";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Galfish")){
if(iParam0==0){
Local_42.f_7="LOC_M29";
}elseif(iParam0==1){
Local_42.f_7="LOC_F30";
}else{
Local_42.f_7="LOC_T30";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Greatc")){
if(iParam0==0){
Local_42.f_7="LOC_M34";
}elseif(iParam0==1){
Local_42.f_7="LOC_F35";
}else{
Local_42.f_7="LOC_T35";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Golf")){
if(iParam0==0){
Local_42.f_7="LOC_M35";
}elseif(iParam0==1){
Local_42.f_7="LOC_F36";
}else{
Local_42.f_7="LOC_T36";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "GrapeS")){
if(iParam0==0){
Local_42.f_7="LOC_M33";
}elseif(iParam0==1){
Local_42.f_7="LOC_F34";
}else{
Local_42.f_7="LOC_T34";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Hawick")){
if(iParam0==0){
Local_42.f_7="LOC_M37";
}elseif(iParam0==1){
Local_42.f_7="LOC_F38";
}else{
Local_42.f_7="LOC_T38";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Harmo")){
if(iParam0==0){
Local_42.f_7="LOC_M36";
}elseif(iParam0==1){
Local_42.f_7="LOC_F37";
}else{
Local_42.f_7="LOC_T37";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Heart")){
if(iParam0==0){
Local_42.f_7="LOC_M38";
}elseif(iParam0==1){
Local_42.f_7="LOC_F39";
}else{
Local_42.f_7="LOC_T39";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "HumLab")){
if(iParam0==0){
Local_42.f_7="LOC_M39";
}elseif(iParam0==1){
Local_42.f_7="LOC_F40";
}else{
Local_42.f_7="LOC_T40";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "HORS")){
if(iParam0==0){
Local_42.f_7="LOC_M97";
}elseif(iParam0==1){
Local_42.f_7="LOC_F98";
}else{
Local_42.f_7="LOC_T98";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Koreat")){
if(iParam0==0){
Local_42.f_7="LOC_M46";
}elseif(iParam0==1){
Local_42.f_7="LOC_F47";
}else{
Local_42.f_7="LOC_T47";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Jail")){
if(iParam0==0){
Local_42.f_7="LOC_M5";
}elseif(iParam0==1){
Local_42.f_7="LOC_F6";
}else{
Local_42.f_7="LOC_T6";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LAct")){
if(iParam0==0){
Local_42.f_7="LOC_M45";
}elseif(iParam0==1){
Local_42.f_7="LOC_F46";
}else{
Local_42.f_7="LOC_T46";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LDam")){
if(iParam0==0){
Local_42.f_7="LOC_M44";
}elseif(iParam0==1){
Local_42.f_7="LOC_F45";
}else{
Local_42.f_7="LOC_T45";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Lago")){
if(iParam0==0){
Local_42.f_7="LOC_M43";
}elseif(iParam0==1){
Local_42.f_7="LOC_F44";
}else{
Local_42.f_7="LOC_T44";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LegSqu")){
if(iParam0==0){
Local_42.f_7="LOC_M";
}elseif(iParam0==1){
Local_42.f_7="LOC_F";
}else{
Local_42.f_7="LOC_T";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LosSF")){
if(iParam0==0){
Local_42.f_7="LOC_M47";
}elseif(iParam0==1){
Local_42.f_7="LOC_F48";
}else{
Local_42.f_7="LOC_T48";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LMesa")){
if(iParam0==0){
Local_42.f_7="LOC_M40";
}elseif(iParam0==1){
Local_42.f_7="LOC_F41";
}else{
Local_42.f_7="LOC_T41";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LosPuer")){
if(iParam0==0){
Local_42.f_7="LOC_M41";
}elseif(iParam0==1){
Local_42.f_7="LOC_F42";
}else{
Local_42.f_7="LOC_T42";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LosPFy")){
if(iParam0==0){
Local_42.f_7="LOC_M42";
}elseif(iParam0==1){
Local_42.f_7="LOC_F43";
}else{
Local_42.f_7="LOC_T43";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "LOSTMC")){
if(iParam0==0){
Local_42.f_7="LOC_M";
}elseif(iParam0==1){
Local_42.f_7="LOC_F";
}else{
Local_42.f_7="LOC_T";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Mirr")){
if(iParam0==0){
Local_42.f_7="LOC_M50";
}elseif(iParam0==1){
Local_42.f_7="LOC_F51";
}else{
Local_42.f_7="LOC_T51";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Morn")){
if(iParam0==0){
Local_42.f_7="LOC_M52";
}elseif(iParam0==1){
Local_42.f_7="LOC_F53";
}else{
Local_42.f_7="LOC_T53";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Murri")){
if(iParam0==0){
Local_42.f_7="LOC_M56";
}elseif(iParam0==1){
Local_42.f_7="LOC_F57";
}else{
Local_42.f_7="LOC_T57";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "MTChil")){
if(iParam0==0){
Local_42.f_7="LOC_M53";
}elseif(iParam0==1){
Local_42.f_7="LOC_F54";
}else{
Local_42.f_7="LOC_T54";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "MTJose")){
if(iParam0==0){
Local_42.f_7="LOC_M55";
}elseif(iParam0==1){
Local_42.f_7="LOC_F56";
}else{
Local_42.f_7="LOC_T56";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "MTGordo")){
if(iParam0==0){
Local_42.f_7="LOC_M54";
}elseif(iParam0==1){
Local_42.f_7="LOC_F55";
}else{
Local_42.f_7="LOC_T55";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Movie")){
if(iParam0==0){
Local_42.f_7="LOC_M72";
}elseif(iParam0==1){
Local_42.f_7="LOC_F73";
}else{
Local_42.f_7="LOC_T73";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "NCHU")){
if(iParam0==0){
Local_42.f_7="LOC_M57";
}elseif(iParam0==1){
Local_42.f_7="LOC_F58";
}else{
Local_42.f_7="LOC_T58";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Noose")){
if(iParam0==0){
Local_42.f_7="LOC_M84";
}elseif(iParam0==1){
Local_42.f_7="LOC_F85";
}else{
Local_42.f_7="LOC_T85";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Oceana")){
if(iParam0==0){
Local_42.f_7="LOC_M60";
}elseif(iParam0==1){
Local_42.f_7="LOC_F61";
}else{
Local_42.f_7="LOC_T61";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Observ")){
if(iParam0==0){
Local_42.f_7="LOC_M30";
}elseif(iParam0==1){
Local_42.f_7="LOC_F31";
}else{
Local_42.f_7="LOC_T31";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Palmpow")){
if(iParam0==0){
Local_42.f_7="LOC_M64";
}elseif(iParam0==1){
Local_42.f_7="LOC_F65";
}else{
Local_42.f_7="LOC_T65";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PBOX")){
if(iParam0==0){
Local_42.f_7="LOC_M66";
}elseif(iParam0==1){
Local_42.f_7="LOC_F67";
}else{
Local_42.f_7="LOC_T67";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PBluff")){
if(iParam0==0){
Local_42.f_7="LOC_M59";
}elseif(iParam0==1){
Local_42.f_7="LOC_F60";
}else{
Local_42.f_7="LOC_T60";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Paleto")){
if(iParam0==0){
Local_42.f_7="LOC_M61";
}elseif(iParam0==1){
Local_42.f_7="LOC_F62";
}else{
Local_42.f_7="LOC_T62";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PalCov")){
if(iParam0==0){
Local_42.f_7="LOC_M62";
}elseif(iParam0==1){
Local_42.f_7="LOC_F63";
}else{
Local_42.f_7="LOC_T63";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PalFor")){
if(iParam0==0){
Local_42.f_7="LOC_M63";
}elseif(iParam0==1){
Local_42.f_7="LOC_F64";
}else{
Local_42.f_7="LOC_T64";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "PalHigh")){
if(iParam0==0){
Local_42.f_7="LOC_M65";
}elseif(iParam0==1){
Local_42.f_7="LOC_F66";
}else{
Local_42.f_7="LOC_T66";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ProcoB")){
if(iParam0==0){
Local_42.f_7="LOC_M68";
}elseif(iParam0==1){
Local_42.f_7="LOC_F69";
}else{
Local_42.f_7="LOC_T69";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Prol")){
if(iParam0==0){
Local_42.f_7="LOC_M58";
}elseif(iParam0==1){
Local_42.f_7="LOC_F59";
}else{
Local_42.f_7="LOC_T59";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "RTRAK")){
if(iParam0==0){
Local_42.f_7="LOC_M71";
}elseif(iParam0==1){
Local_42.f_7="LOC_F72";
}else{
Local_42.f_7="LOC_T72";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Rancho")){
if(iParam0==0){
Local_42.f_7="LOC_M69";
}elseif(iParam0==1){
Local_42.f_7="LOC_F70";
}else{
Local_42.f_7="LOC_T70";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "RGLEN")){
if(iParam0==0){
Local_42.f_7="LOC_M74";
}elseif(iParam0==1){
Local_42.f_7="LOC_F75";
}else{
Local_42.f_7="LOC_T75";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Richm")){
if(iParam0==0){
Local_42.f_7="LOC_M73";
}elseif(iParam0==1){
Local_42.f_7="LOC_F74";
}else{
Local_42.f_7="LOC_T74";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Rockf")){
if(iParam0==0){
Local_42.f_7="LOC_M75";
}elseif(iParam0==1){
Local_42.f_7="LOC_F76";
}else{
Local_42.f_7="LOC_T76";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SANDY")){
if(iParam0==0){
Local_42.f_7="LOC_M79";
}elseif(iParam0==1){
Local_42.f_7="LOC_F80";
}else{
Local_42.f_7="LOC_T80";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "TongvaH")){
if(iParam0==0){
Local_42.f_7="LOC_M87";
}elseif(iParam0==1){
Local_42.f_7="LOC_F88";
}else{
Local_42.f_7="LOC_T88";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "TongvaV")){
if(iParam0==0){
Local_42.f_7="LOC_M88";
}elseif(iParam0==1){
Local_42.f_7="LOC_F89";
}else{
Local_42.f_7="LOC_T89";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "East_V")){
if(iParam0==0){
Local_42.f_7="LOC_M23";
}elseif(iParam0==1){
Local_42.f_7="LOC_F24";
}else{
Local_42.f_7="LOC_T24";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Zenora")){
if(iParam0==0){
Local_42.f_7="LOC_M80";
}elseif(iParam0==1){
Local_42.f_7="LOC_F81";
}else{
Local_42.f_7="LOC_T81";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Slab")){
if(iParam0==0){
Local_42.f_7="LOC_M81";
}elseif(iParam0==1){
Local_42.f_7="LOC_F82";
}else{
Local_42.f_7="LOC_T82";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SKID")){
if(iParam0==0){
Local_42.f_7="LOC_M51";
}elseif(iParam0==1){
Local_42.f_7="LOC_F52";
}else{
Local_42.f_7="LOC_T52";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SLSant")){
if(iParam0==0){
Local_42.f_7="LOC_M82";
}elseif(iParam0==1){
Local_42.f_7="LOC_F83";
}else{
Local_42.f_7="LOC_T83";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Stad")){
if(iParam0==0){
Local_42.f_7="LOC_M49";
}elseif(iParam0==1){
Local_42.f_7="LOC_F50";
}else{
Local_42.f_7="LOC_T50";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Tatamo")){
if(iParam0==0){
Local_42.f_7="LOC_M84";
}elseif(iParam0==1){
Local_42.f_7="LOC_F85";
}else{
Local_42.f_7="LOC_T85";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Termina")){
if(iParam0==0){
Local_42.f_7="LOC_M85";
}elseif(iParam0==1){
Local_42.f_7="LOC_F86";
}else{
Local_42.f_7="LOC_T86";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "TEXTI")){
if(iParam0==0){
Local_42.f_7="LOC_M86";
}elseif(iParam0==1){
Local_42.f_7="LOC_F87";
}else{
Local_42.f_7="LOC_T87";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "WVine")){
if(iParam0==0){
Local_42.f_7="LOC_M99";
}elseif(iParam0==1){
Local_42.f_7="LOC_F100";
}else{
Local_42.f_7="LOC_T100";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "UtopiaG")){
if(iParam0==0){
Local_42.f_7="LOC_M89";
}elseif(iParam0==1){
Local_42.f_7="LOC_F90";
}else{
Local_42.f_7="LOC_T90";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Vesp")){
if(iParam0==0){
Local_42.f_7="LOC_M92";
}elseif(iParam0==1){
Local_42.f_7="LOC_F93";
}else{
Local_42.f_7="LOC_T93";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "VCana")){
if(iParam0==0){
Local_42.f_7="LOC_M94";
}elseif(iParam0==1){
Local_42.f_7="LOC_F95";
}else{
Local_42.f_7="LOC_T95";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Vine")){
if(iParam0==0){
Local_42.f_7="LOC_M95";
}elseif(iParam0==1){
Local_42.f_7="LOC_F96";
}else{
Local_42.f_7="LOC_T96";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "WMirror")){
if(iParam0==0){
Local_42.f_7="LOC_M98";
}elseif(iParam0==1){
Local_42.f_7="LOC_F99";
}else{
Local_42.f_7="LOC_T99";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "WindF")){
if(iParam0==0){
Local_42.f_7="LOC_M76";
}elseif(iParam0==1){
Local_42.f_7="LOC_F77";
}else{
Local_42.f_7="LOC_T77";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "Zancudo")){
if(iParam0==0){
Local_42.f_7="LOC_M100";
}elseif(iParam0==1){
Local_42.f_7="LOC_F101";
}else{
Local_42.f_7="LOC_T101";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "SanChia")){
if(iParam0==0){
Local_42.f_7="LOC_M78";
}elseif(iParam0==1){
Local_42.f_7="LOC_F79";
}else{
Local_42.f_7="LOC_T79";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "STRAW")){
if(iParam0==0){
Local_42.f_7="LOC_M83";
}elseif(iParam0==1){
Local_42.f_7="LOC_F84";
}else{
Local_42.f_7="LOC_T84";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "zQ_UAR")){
if(iParam0==0){
Local_42.f_7="LOC_M17";
}elseif(iParam0==1){
Local_42.f_7="LOC_F18";
}else{
Local_42.f_7="LOC_T18";
}
return;
}
if(MISC::ARE_STRINGS_EQUAL(Local_42.f_6, "ZP_ORT")){
if(iParam0==0){
Local_42.f_7="LOC_M67";
}elseif(iParam0==1){
Local_42.f_7="LOC_F68";
}else{
Local_42.f_7="LOC_T68";
}
return;
}
if(iParam0==0){
Local_42.f_7="LOC_M";
}elseif(iParam0==1){
Local_42.f_7="LOC_M";
}else{
Local_42.f_7="LOC_M";
}}elseif(iParam0==0){
Local_42.f_7="LOC_M";
}elseif(iParam0==1){
Local_42.f_7="LOC_F";
}else{
Local_42.f_7="LOC_T";
}}


char* func_202(bool bParam0){
char* sVar0;
if(!MISC::IS_BIT_SET(uLocal_47, 10)){
if(iLocal_40==0){
sLocal_77="FBIPRAU";
}elseif(iLocal_40==1){
sLocal_77="AHFAUD";
}elseif(iLocal_40==2){
sLocal_77="FHFAUD";
}
if(iLocal_40==0){
if(bParam0==0){
sVar0="FBI_3_MDRPC";
}elseif(bParam0==1){
sVar0="FBI_3_FDRPC";
}elseif(bParam0==2){
sVar0="FBI_3_TDRPC";
}}elseif(iLocal_40==1){
if(bParam0==0){
sVar0="AH_MDRPC";
}elseif(bParam0==1){
sVar0="AH_FDRPC";
}elseif(bParam0==2){
sVar0="AH_TDRPC";
}}elseif(iLocal_40==2){
if(bParam0==0){
sVar0="FHP_PICKCM";
}elseif(bParam0==1){
sVar0="FHP_PICKCF";
}elseif(bParam0==2){
sVar0="FHP_PICKCT";
}}}else{
sLocal_77="FHFAUD";
if(bParam0==0){
sVar0="FHP_MOVEM";
}elseif(bParam0==1){
sVar0="FHP_MOVEF";
}elseif(bParam0==2){
sVar0="FHP_MOVET";
}}
return sVar0;
}

int func_203(var uParam0){
switch (func_204(uParam0, 1, 5, 0, 0)){
case 1:
return 1;
break;
case 0:
func_94(35, 0);
func_156(0);
return 0;
break;
case 2:
func_94(35, 1);
return 0;
break;
}
return 0;
}

int func_204(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_208(0)){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23251.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43377=iParam2;
Global_43339=*uParam0;
Global_43340=iParam4;
Global_43338=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43338 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
return 2;
}
iVar0++;
}}elseif(Global_43339==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!func_206(iParam2)){
return 0;
}
if(Global_43338==8){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
Global_43344[Global_43338 /*4*/]=Global_43341;
Global_43344[Global_43338 /*4*/].f_1=iParam1;
Global_43344[Global_43338 /*4*/].f_2=iParam2;
Global_43344[Global_43338 /*4*/].f_3=0;
Global_43338++;
if(iParam4 !=0){
func_205(uParam0, iParam4);
}}
return 2;
}


void func_205(var uParam0, int iParam1){
int iVar0;
if(Global_43338==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
Global_43344[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}


bool func_206(int iParam0){
return func_207(iParam0, Global_43377);
}

int func_207(int iParam0, int iParam1){
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

int func_208(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_206(iParam0)){
return 0;
}
return 1;
}

int func_209(){
if(MISC::IS_BIT_SET(uLocal_47, 0)){
if(func_88(iLocal_49)){
if(func_210(12)){
return 1;
}}}
return 0;
}

int func_210(int iParam0){
if(Global_22960==0){
return 0;
}
if(Global_117[iParam0 /*10*/].f_8 !=172){
if(Global_20500.f_1==10){
if(Global_7685==iParam0){
return 1;
}else{
return 0;
}}else{
return 0;
}}
return 0;
}


void func_211(){
if(MISC::IS_BIT_SET(uLocal_47, 0)){
if(!MISC::IS_BIT_SET(uLocal_47, 11)){
func_254(1);
}}elseif(MISC::IS_BIT_SET(uLocal_47, 11)){
func_254(0);
}}


void func_212(){
int iVar0;
bool bVar1;
if(((((((Global_43377==15 && iLocal_35 !=3) && MISC::IS_BIT_SET(uLocal_47, 5)) && !func_172()) && Global_78686==-1) && !func_222()) && !func_87(9)) || func_106(35)){
func_221();
func_220();
switch (iLocal_37){
case 0:
if(MISC::IS_BIT_SET(uLocal_47, 17)){
iVar0=-1;
while (iVar0 < (36 - 1)){
iVar0++;
if(iVar0 !=46){
func_219(uLocal_45[0], &iVar0);
}}
MISC::CLEAR_BIT(&uLocal_47, 17);
}else{
iVar0=31;
while (iVar0 < (46 - 1)){
iVar0++;
if(iVar0 !=46){
func_219(uLocal_45[1], &iVar0);
}}
MISC::SET_BIT(&uLocal_47, 17);
}
break;
case 1:
case 2:
case 3:
case 4:
func_214(bLocal_44, 1);
break;
}}elseif(((((((Global_43377 !=15 || Global_43377 !=0) || Global_43377 !=2) || Global_43377 !=4) || Global_43377 !=17) || func_172()) || Global_78686==-1) || Global_112865){
bVar1=false;
if(func_213()){
bVar1=true;
}elseif(Global_112865){
bVar1=2;
}
if(MISC::IS_BIT_SET(uLocal_45[func_5(bVar1)], bVar1)){
func_214(bVar1, 0);
}}}


bool func_213(){
return SCRIPT::IS_THREAD_ACTIVE(Global_113810.f_18106.f_395);
}


void func_214(bool bParam0, bool bParam1){
switch (iLocal_37){
case 1:
if((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_217(func_92())) && !func_216()){
func_215(func_3(bParam0), 15000);
iLocal_37=2;
}
break;
case 2:
if(func_2(func_3(bParam0))){
fLocal_46=0f;
iLocal_37=3;
}else{
fLocal_46=(fLocal_46 + MISC::GET_FRAME_TIME());
if(fLocal_46 >=20f){
iLocal_37=4;
}elseif(MISC::IS_BIT_SET(uLocal_47, 15)){
func_4(bParam0);
MISC::CLEAR_BIT(&uLocal_47, 15);
iLocal_37=4;
}}
break;
case 3:
if(!func_2(func_3(bParam0))){
if(fLocal_46 >=7.5f || MISC::IS_BIT_SET(uLocal_47, 15)){
func_4(bParam0);
MISC::CLEAR_BIT(&uLocal_47, 15);
iLocal_37=4;
}elseif(bParam1){
iLocal_37=0;
}else{
iLocal_37=1;
fLocal_46=0f;
}}else{
fLocal_46=(fLocal_46 + MISC::GET_FRAME_TIME());
}
break;
case 4:
fLocal_46=0f;
iLocal_37=0;
break;
}}


void func_215(var uParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_216(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_217(bool bParam0){
int iVar0;
if(func_58(bParam0)){
if(func_218(bParam0)){
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_136){
if(Global_113810.f_7691[iVar0 /*15*/].f_3==5){
return 1;
}
iVar0++;
}}}
return 0;
}

int func_218(bool bParam0){
int iVar0;
if(!func_58(bParam0)){}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_136){
if(MISC::IS_BIT_SET(Global_113810.f_7691[iVar0 /*15*/].f_2, bParam0)){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_764){
if(MISC::IS_BIT_SET(Global_113810.f_7691.f_651[iVar0 /*14*/].f_2, bParam0)){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_7691.f_866){
if(MISC::IS_BIT_SET(Global_113810.f_7691.f_765[iVar0 /*10*/].f_2, bParam0)){
return 1;
}
iVar0++;
}
return 0;
}


void func_219(var uParam0, int iParam1){
bool bVar0;
bVar0=func_6(*iParam1);
if(MISC::IS_BIT_SET(uParam0, bVar0)){
if(!MISC::IS_BIT_SET(uLocal_47, 3)){
bLocal_44=*iParam1;
iLocal_37=1;
fLocal_46=0f;
func_4(44);
func_4(45);
iLocal_74=MISC::GET_GAME_TIMER();
*iParam1=46;
}elseif(14==bVar0){
func_4(bVar0);
*iParam1=46;
}else{
bLocal_44=*iParam1;
iLocal_37=1;
fLocal_46=0f;
*iParam1=46;
}}}


void func_220(){
if(iLocal_35==0 || iLocal_35==1){
switch (iLocal_36){
case 0:
if(func_144(func_3(3), 0, 0)){
MISC::SET_BIT(&uLocal_47, 15);
HUD::CLEAR_HELP(1);
}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_213()) && !Global_112449){
MISC::SET_BIT(&uLocal_47, 15);
HUD::CLEAR_HELP(1);
}
iLocal_36=1;
}
break;
case 1:
if(MISC::IS_BIT_SET(uLocal_47, 0)){
if(iLocal_40==2){
if(iLocal_35==1){
if(func_88(iLocal_49)){
func_72(3);
func_1(3, 1);
}
}
iLocal_36=2;
}else{
if(func_88(iLocal_49)){
func_72(3);
func_1(3, 1);
}
iLocal_36=2;
}}else{
iLocal_36=2;
}
break;
case 2:
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(func_2(func_3(3))){
MISC::SET_BIT(&uLocal_47, 15);
HUD::CLEAR_HELP(1);
}
iLocal_36=0;
}
break;
}}}


void func_221(){
if((((!func_106(func_107()) && !func_106(35)) && !func_217(func_92())) && !func_216()) && !func_120()){
if(iLocal_75 < 2 && (MISC::GET_GAME_TIMER() - iLocal_74) > 480000){
if(iLocal_40 !=2){
func_72(44);
}else{
func_72(45);
}
iLocal_75++;
}}}

int func_222(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


void func_223(){
if(func_78()){
if(MISC::IS_BIT_SET(uLocal_47, 2)){
if(func_88(iLocal_49)){
func_21(iLocal_49, Local_50, fLocal_51, 25, 1);
func_20(&iLocal_49);
}
MISC::CLEAR_BIT(&uLocal_47, 2);
}
func_1(46, 1);
func_254(0);
}}


void func_224(){
if(!func_229()){
if(!func_222()){
if(CAM::IS_SCREEN_FADED_IN()){
if(!CAM::IS_SCREEN_FADING_IN()){
func_226();
}}}}elseif(iLocal_35 !=3){
func_225();
}}


void func_225(){
if(iLocal_35 !=4){
if(iLocal_35 !=2){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_112449){
MISC::SET_BIT(&uLocal_47, 15);
HUD::CLEAR_HELP(1);
}
if(MISC::IS_BIT_SET(uLocal_47, 0)){
if(func_88(iLocal_49)){
VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_49, 0);
}
func_20(&iLocal_49);
func_161();
if(iLocal_40 !=2){
Local_48={
0f, 0f, 0f 
};
}
MISC::CLEAR_BIT(&uLocal_47, 8);
}}elseif(MISC::IS_BIT_SET(uLocal_47, 0)){
func_21(iLocal_49, Local_50, fLocal_51, 25, 1);
if(func_88(iLocal_49)){
VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_49, 0);
}
func_20(&iLocal_49);
func_161();
}
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5)){
HUD::CLEAR_ADDITIONAL_TEXT(5, 0);
MISC::CLEAR_BIT(&uLocal_47, 4);
MISC::CLEAR_BIT(&uLocal_47, 5);
func_254(0);
if(func_213()){
func_1(1, 1);
}else{
func_1(0, 1);
}}
iLocal_35=3;
}}


void func_226(){
func_228();
if(MISC::IS_BIT_SET(uLocal_47, 4)){
if(!MISC::IS_BIT_SET(uLocal_47, 5) && !MISC::IS_BIT_SET(uLocal_47, 16)){
HUD::REQUEST_ADDITIONAL_TEXT("GETAWY", 5);
if(HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5)){
MISC::SET_BIT(&uLocal_47, 5);
}
if(MISC::IS_BIT_SET(uLocal_47, 5)){
func_227();
iLocal_37=0;
MISC::CLEAR_BIT(&uLocal_47, 7);
MISC::CLEAR_BIT(&uLocal_47, false);
MISC::CLEAR_BIT(&uLocal_47, true);
if(func_2(func_3(0))){
HUD::CLEAR_HELP(1);
}
func_4(0);
iLocal_35=Global_113810.f_10052.f_128;
}}}}


void func_227(){
if(!func_106(func_107())){
if(!MISC::IS_BIT_SET(uLocal_47, 12)){
if(func_104()){
if(iLocal_40 !=2){
func_72(44);
}else{
func_72(45);
}
MISC::SET_BIT(&uLocal_47, 12);
}}}}


void func_228(){
if(!HUD::IS_STREAMING_ADDITIONAL_TEXT(5)){
MISC::SET_BIT(&uLocal_47, 4);
}else{
MISC::CLEAR_BIT(&uLocal_47, 4);
}}

int func_229(){
if(iLocal_40 !=2){
if(iLocal_40==1 && func_92()==2){
if(!MISC::IS_BIT_SET(uLocal_47, 16)){
MISC::SET_BIT(&uLocal_47, 16);
}
return 1;
}elseif(MISC::IS_BIT_SET(uLocal_47, 16)){
MISC::CLEAR_BIT(&uLocal_47, 16);
}
if(func_230()){
return 0;
}}elseif(func_106(35)){
return 0;
}elseif(func_230()){
return 0;
}
return 1;
}

int func_230(){
if(((((Global_43377==15 && !func_172()) && Global_78686==-1) && !func_213()) && !func_231(1112014848)) && !Global_112865){
return 1;
}
return 0;
}

int func_231(float fParam0){
if(iLocal_40==1){
if(func_79(PLAYER::PLAYER_PED_ID(), Global_96759[1 /*15*/], fParam0, 1)){
return 1;
}}elseif(iLocal_40==2){
if(func_79(PLAYER::PLAYER_PED_ID(), Global_96759[0 /*15*/], fParam0, 1)){
return 1;
}}elseif(iLocal_40==0){
if(func_79(PLAYER::PLAYER_PED_ID(), Global_96759[3 /*15*/], fParam0, 1)){
return 1;
}}
return 0;
}


void func_232(){
if(!MISC::IS_BIT_SET(uLocal_47, 13)){
if(func_233()){
MISC::SET_BIT(&uLocal_47, 13);
}}elseif(!func_233()){
MISC::CLEAR_BIT(&uLocal_47, 7);
MISC::CLEAR_BIT(&uLocal_47, false);
MISC::CLEAR_BIT(&uLocal_47, true);
MISC::CLEAR_BIT(&uLocal_47, 13);
}}

int func_233(){
if(((((func_234(39) || func_234(40)) || func_234(41)) || func_234(42)) || func_234(43)) || func_234(44)){
return 1;
}
return 0;
}

int func_234(int iParam0){
return func_235(iParam0, 6, 1);
}

int func_235(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_99()==0){
return MISC::IS_BIT_SET(func_236(func_239(iParam0), -1), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);
}
return 0;
}

int func_236(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam0 !=14385){
iVar0=func_237(iParam0, iParam1);
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__237(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_238(uParam1));
}

int func_238(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_102();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_239(int iParam0){
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

int func_240(int iParam0){
if(func_89(uParam0)){
if(!PED::IS_PED_INJURED(uParam0)){
return 1;
}}
return 0;
}


void func_241(char* sParam0, int iParam1){
int iVar0;
int iVar1;
if(Global_112449 && iParam1){
if(func_2(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT()){
HUD::CLEAR_HELP(0);
}}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_113810.f_20413[iVar0 /*16*/]))){
iVar1=iVar0;
while (iVar1 <=(Global_113810.f_20413.f_145 - 2)){
func_244(iVar1, iVar1 + 1);
iVar1++;
}
func_243((Global_113810.f_20413.f_145 - 1));
Global_113810.f_20413.f_145=(Global_113810.f_20413.f_145 - 1);
func_242();
return;
}
iVar0++;
}}


void func_242(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113810.f_20413.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 0)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[0]){
Global_113810.f_20413.f_146[0]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 1)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[1]){
Global_113810.f_20413.f_146[1]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 2)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[2]){
Global_113810.f_20413.f_146[2]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
iVar0++;
}}


void func_243(int iParam0){
StringCopy(&(Global_113810.f_20413[iParam0 /*16*/]), "", 16);
StringCopy(&(Global_113810.f_20413[iParam0 /*16*/].f_4), "", 16);
Global_113810.f_20413[iParam0 /*16*/].f_8=0;
Global_113810.f_20413[iParam0 /*16*/].f_9=0;
Global_113810.f_20413[iParam0 /*16*/].f_11=0;
Global_113810.f_20413[iParam0 /*16*/].f_10=-1;
Global_113810.f_20413[iParam0 /*16*/].f_12=0;
Global_113810.f_20413[iParam0 /*16*/].f_13=0;
Global_113810.f_20413[iParam0 /*16*/].f_14=0;
Global_113810.f_20413[iParam0 /*16*/].f_15=0;
}


void func_244(int iParam0, int iParam1){
Global_113810.f_20413[iParam0 /*16*/]={
Global_113810.f_20413[iParam1 /*16*/] 
};
Global_113810.f_20413[iParam0 /*16*/].f_4={
Global_113810.f_20413[iParam1 /*16*/].f_4 
};
Global_113810.f_20413[iParam0 /*16*/].f_8=Global_113810.f_20413[iParam1 /*16*/].f_8;
Global_113810.f_20413[iParam0 /*16*/].f_10=Global_113810.f_20413[iParam1 /*16*/].f_10;
Global_113810.f_20413[iParam0 /*16*/].f_9=Global_113810.f_20413[iParam1 /*16*/].f_9;
Global_113810.f_20413[iParam0 /*16*/].f_11=Global_113810.f_20413[iParam1 /*16*/].f_11;
Global_113810.f_20413[iParam0 /*16*/].f_12=Global_113810.f_20413[iParam1 /*16*/].f_12;
Global_113810.f_20413[iParam0 /*16*/].f_13=Global_113810.f_20413[iParam1 /*16*/].f_13;
Global_113810.f_20413[iParam0 /*16*/].f_14=Global_113810.f_20413[iParam1 /*16*/].f_14;
Global_113810.f_20413[iParam0 /*16*/].f_15=Global_113810.f_20413[iParam1 /*16*/].f_15;
}

int func_245(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_330[iParam0 /*6*/];
}


void func_246(int iParam0){
iLocal_40=iParam0;
if(iLocal_40==0){
sLocal_77="FBIPRAU";
}elseif(iLocal_40==1){
sLocal_77="AHFAUD";
}elseif(iLocal_40==2){
sLocal_77="FHFAUD";
}
iLocal_64[0]=joaat("trash");
iLocal_64[1]=joaat("towtruck");
iLocal_64[2]=joaat("ambulance");
iLocal_64[3]=joaat("barracks2");
iLocal_64[4]=joaat("stretch");
iLocal_64[5]=joaat("phantom");
iLocal_64[6]=joaat("packer");
iLocal_64[7]=joaat("blazer");
iLocal_64[8]=joaat("blazer2");
if(iLocal_40 !=0){
iLocal_64[9]=joaat("sentinel2");
}else{
iLocal_64[9]=0;
}
func_249();
func_247();
MISC::SET_BIT(&uLocal_47, 17);
iLocal_74=MISC::GET_GAME_TIMER();
}


void func_247(){
sLocal_43[0]="AM_H_FBIC1A";
sLocal_43[1]="AM_H_FBIC1B";
sLocal_43[2]="AM_H_FBIC1C";
sLocal_43[3]="PRC_WANT";
sLocal_43[4]="PRC_DROPOFF";
sLocal_43[5]="PRC_INVALVEH";
sLocal_43[6]="PRC_HEALTH";
sLocal_43[7]=func_248(7);
sLocal_43[8]=func_248(8);
sLocal_43[9]="PRC_USEFIRST";
sLocal_43[10]=func_248(10);
sLocal_43[11]=func_248(11);
sLocal_43[13]=func_248(13);
sLocal_43[12]=func_248(12);
sLocal_43[14]="PRC_UNUSE";
sLocal_43[15]="PRC_SEATS";
sLocal_43[16]="PRC_CBOBVAL";
sLocal_43[17]=func_248(17);
sLocal_43[18]=func_248(18);
sLocal_43[20]=func_248(20);
sLocal_43[21]="PRC_PUBAREA";
sLocal_43[22]="PRC_LAWAREA";
sLocal_43[23]="PRC_RESAREA";
sLocal_43[24]="PRC_STOP";
sLocal_43[25]="PRC_OWNEDM";
sLocal_43[26]="PRC_OWNEDF";
sLocal_43[27]="PRC_OWNEDT";
sLocal_43[28]="PRC_SECROUTE";
sLocal_43[29]="PRC_CLOSELOT";
sLocal_43[30]="PRC_CLOSELES";
sLocal_43[31]="PRC_CLSAGNT";
sLocal_43[32]="PRC_CLOSESAFE_M";
sLocal_43[33]="PRC_CLOSESAFE_F";
sLocal_43[34]="PRC_CLOSESAFE_T";
sLocal_43[35]="PRC_PEDS";
sLocal_43[36]="PRC_WATER";
sLocal_43[37]="PRC_OBST";
sLocal_43[38]="PRC_OBSTVEH";
sLocal_43[39]="PRC_UPDWN";
sLocal_43[40]="PRC_NEARROAD";
sLocal_43[41]="PRC_ONROAD";
sLocal_43[19]="PRC_PLAN";
sLocal_43[42]="PRC_TOOSTEEP";
sLocal_43[43]="PRC_UNEVEN";
sLocal_43[44]="PRC_REMIND";
sLocal_43[45]="PRC_REMINDA";
}


char* func_248(int iParam0){
char* sVar0;
if(iLocal_40==0){
if(iParam0==17){
sVar0="PRC_USEFT";
}elseif(iParam0==18){
sVar0="PRC_USEM";
}elseif(iParam0==10){
sVar0="PRC_PICKCARTF";
}elseif(iParam0==11){
sVar0="PRC_PICKCARM";
}elseif(iParam0==13){
sVar0="PRC_PICKNEWM";
}elseif(iParam0==12){
sVar0="PRC_PICKNEWTF";
}elseif(iParam0==7){
sVar0="PRC_LOCSUITFT";
}elseif(iParam0==8){
sVar0="PRC_LOCSUITM";
}elseif(iParam0==20){
sVar0="PRC_INACC";
}}elseif(iLocal_40==1){
if(iParam0==17){
sVar0="PRC_USEFL";
}elseif(iParam0==18){
sVar0="PRC_USEML";
}elseif(iParam0==10){
sVar0="PRC_PICKCRFL";
}elseif(iParam0==11){
sVar0="PRC_PICKCRML";
}elseif(iParam0==13){
sVar0="PRC_PICKNEWML";
}elseif(iParam0==12){
sVar0="PRC_PICKNEWFL";
}elseif(iParam0==7){
sVar0="PRC_LOCSUITFL";
}elseif(iParam0==8){
sVar0="PRC_LOCSUITML";
}elseif(iParam0==20){
sVar0="PRC_INACCF";
}}elseif(iLocal_40==2){
if(iParam0==17){
sVar0="PRC_USEL";
}elseif(iParam0==18){
sVar0="PRC_USEL";
}elseif(iParam0==10){
sVar0="PRC_PICKCARL";
}elseif(iParam0==11){
sVar0="PRC_PICKCARL";
}elseif(iParam0==13){
sVar0="PRC_PICKNEWL";
}elseif(iParam0==12){
sVar0="PRC_PICKNEWL";
}elseif(iParam0==7){
sVar0="PRC_LOCSUITFT";
}elseif(iParam0==8){
sVar0="PRC_LOCSUITM";
}elseif(iParam0==20){
sVar0="PRC_INACCF";
}}
return sVar0;
}


void func_249(){
sLocal_67[0]="ARMYB";
sLocal_67[1]="AIRP";
sLocal_67[2]="STAD";
sLocal_67[3]="TERMINA";
sLocal_67[4]="MOVIE";
sLocal_67[5]="JAIL";
sLocal_67[6]="OCEANA";
sLocal_67[7]="GOLF";
sLocal_67[8]="HORS";
sLocal_67[9]="MTCHIL";
sLocal_67[10]="MTGORDO";
sLocal_67[11]="SANCHIA";
sLocal_67[12]="TATAMO";
Local_66[0 /*261*/][0 /*8*/]={
func_250("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) 
};
Local_66[0 /*261*/][1 /*8*/]={
func_250("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) 
};
Local_66[0 /*261*/][2 /*8*/]={
func_250("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) 
};
Local_66[0 /*261*/][3 /*8*/]={
func_250("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) 
};
Local_66[0 /*261*/][4 /*8*/]={
func_250("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) 
};
Local_66[0 /*261*/][5 /*8*/]={
func_250("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) 
};
Local_66[0 /*261*/][6 /*8*/]={
func_250("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) 
};
Local_66[0 /*261*/][7 /*8*/]={
func_250("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) 
};
Local_66[0 /*261*/][8 /*8*/]={
func_250("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) 
};
Local_66[0 /*261*/][9 /*8*/]={
func_250("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) 
};
Local_66[0 /*261*/][10 /*8*/]={
func_250("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) 
};
Local_66[0 /*261*/][11 /*8*/]={
func_250("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) 
};
Local_66[0 /*261*/][13 /*8*/]={
func_250("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) 
};
Local_66[0 /*261*/][14 /*8*/]={
func_250("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[0 /*261*/][15 /*8*/]={
func_250("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[0 /*261*/][16 /*8*/]={
func_250("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[0 /*261*/][17 /*8*/]={
func_250("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[0 /*261*/][18 /*8*/]={
func_250("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[0 /*261*/][19 /*8*/]={
func_250("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[0 /*261*/][20 /*8*/]={
func_250("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) 
};
Local_66[0 /*261*/][21 /*8*/]={
func_250("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) 
};
Local_66[0 /*261*/][22 /*8*/]={
func_250("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) 
};
Local_66[0 /*261*/][23 /*8*/]={
func_250("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) 
};
Local_66[0 /*261*/][24 /*8*/]={
func_250("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) 
};
Local_66[0 /*261*/][25 /*8*/]={
func_250("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) 
};
Local_66[0 /*261*/][26 /*8*/]={
func_250("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) 
};
Local_66[0 /*261*/][27 /*8*/]={
func_250("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) 
};
Local_66[0 /*261*/][28 /*8*/]={
func_250("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) 
};
Local_66[0 /*261*/][29 /*8*/]={
func_250("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) 
};
Local_66[0 /*261*/][30 /*8*/]={
func_250("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) 
};
Local_66[0 /*261*/][31 /*8*/]={
func_250("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) 
};
Local_66[0 /*261*/].f_260=0;
Local_66[0 /*261*/].f_257=32;
Local_66[2 /*261*/][0 /*8*/]={
func_250("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) 
};
Local_66[2 /*261*/][1 /*8*/]={
func_250("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) 
};
Local_66[2 /*261*/][2 /*8*/]={
func_250("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) 
};
Local_66[2 /*261*/][3 /*8*/]={
func_250("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) 
};
Local_66[2 /*261*/][4 /*8*/]={
func_250("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) 
};
Local_66[2 /*261*/][5 /*8*/]={
func_250("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[2 /*261*/][6 /*8*/]={
func_250("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[2 /*261*/].f_260=2;
Local_66[2 /*261*/].f_257=7;
Local_66[1 /*261*/][0 /*8*/]={
func_250("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) 
};
Local_66[1 /*261*/][1 /*8*/]={
func_250("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) 
};
Local_66[1 /*261*/][2 /*8*/]={
func_250("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) 
};
Local_66[1 /*261*/][3 /*8*/]={
func_250("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) 
};
Local_66[1 /*261*/][4 /*8*/]={
func_250("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) 
};
Local_66[1 /*261*/][5 /*8*/]={
func_250("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) 
};
Local_66[1 /*261*/][6 /*8*/]={
func_250("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) 
};
Local_66[1 /*261*/][7 /*8*/]={
func_250("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) 
};
Local_66[1 /*261*/][8 /*8*/]={
func_250("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) 
};
Local_66[1 /*261*/][9 /*8*/]={
func_250("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) 
};
Local_66[1 /*261*/][10 /*8*/]={
func_250("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) 
};
Local_66[1 /*261*/][11 /*8*/]={
func_250("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) 
};
Local_66[1 /*261*/][12 /*8*/]={
func_250("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) 
};
Local_66[1 /*261*/][13 /*8*/]={
func_250("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) 
};
Local_66[1 /*261*/][14 /*8*/]={
func_250("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) 
};
Local_66[1 /*261*/][15 /*8*/]={
func_250("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) 
};
Local_66[1 /*261*/][16 /*8*/]={
func_250("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) 
};
Local_66[1 /*261*/][17 /*8*/]={
func_250("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) 
};
Local_66[1 /*261*/][18 /*8*/]={
func_250("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) 
};
Local_66[1 /*261*/][19 /*8*/]={
func_250("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) 
};
Local_66[1 /*261*/][20 /*8*/]={
func_250("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) 
};
Local_66[1 /*261*/][21 /*8*/]={
func_250("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) 
};
Local_66[1 /*261*/].f_260=1;
Local_66[1 /*261*/].f_257=22;
Local_66[3 /*261*/][0 /*8*/]={
func_250("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[3 /*261*/][1 /*8*/]={
func_250("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[3 /*261*/][2 /*8*/]={
func_250("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[3 /*261*/][3 /*8*/]={
func_250("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) 
};
Local_66[3 /*261*/][4 /*8*/]={
func_250("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) 
};
Local_66[3 /*261*/][5 /*8*/]={
func_250("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) 
};
Local_66[3 /*261*/][6 /*8*/]={
func_250("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) 
};
Local_66[3 /*261*/][7 /*8*/]={
func_250("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) 
};
Local_66[3 /*261*/][8 /*8*/]={
func_250("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) 
};
Local_66[3 /*261*/][9 /*8*/]={
func_250("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) 
};
Local_66[3 /*261*/][10 /*8*/]={
func_250("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) 
};
Local_66[3 /*261*/][11 /*8*/]={
func_250("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) 
};
Local_66[3 /*261*/][12 /*8*/]={
func_250("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) 
};
Local_66[3 /*261*/][13 /*8*/]={
func_250("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) 
};
Local_66[3 /*261*/][14 /*8*/]={
func_250("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) 
};
Local_66[3 /*261*/][15 /*8*/]={
func_250("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) 
};
Local_66[3 /*261*/][16 /*8*/]={
func_250("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) 
};
Local_66[3 /*261*/][17 /*8*/]={
func_250("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) 
};
Local_66[3 /*261*/][18 /*8*/]={
func_250("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) 
};
Local_66[3 /*261*/][19 /*8*/]={
func_250("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) 
};
Local_66[3 /*261*/][20 /*8*/]={
func_250("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) 
};
Local_66[3 /*261*/][21 /*8*/]={
func_250("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) 
};
Local_66[3 /*261*/][22 /*8*/]={
func_250("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) 
};
Local_66[3 /*261*/][23 /*8*/]={
func_250("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) 
};
Local_66[3 /*261*/][24 /*8*/]={
func_250("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) 
};
Local_66[3 /*261*/][25 /*8*/]={
func_250("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) 
};
Local_66[3 /*261*/][26 /*8*/]={
func_250("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) 
};
Local_66[3 /*261*/][27 /*8*/]={
func_250("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) 
};
Local_66[3 /*261*/][28 /*8*/]={
func_250("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) 
};
Local_66[3 /*261*/][29 /*8*/]={
func_250("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) 
};
Local_66[3 /*261*/][30 /*8*/]={
func_250("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) 
};
Local_66[3 /*261*/].f_260=3;
Local_66[3 /*261*/].f_257=31;
if(func_240(PLAYER::PLAYER_PED_ID())){
sLocal_68=ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
}}


struct<8> func_250(char* sParam0, struct<3> Param1, struct<3> Param2, float fParam3){
struct<8> Var0;
Var0.f_0=sParam0;
Var0.f_1={
Param1 
};
Var0.f_4={
Param2 
};
Var0.f_7=fParam3;
return Var0;
}


void func_251(int iParam0, bool bParam1){
if(func_88(iLocal_49)){
func_20(&iLocal_49);
}
if(!bParam1){
func_252(iParam0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}

int func_252(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iVar0], bVar1)){
MISC::CLEAR_BIT(&(Global_113810.f_9088.f_99.f_219[iVar0]), bVar1);
return 1;
}
return 0;
}


void func_253(){
if(func_106(35)){
func_94(35, 0);
func_141(&uLocal_244);
}
func_145(&uLocal_243);
}


void func_254(bool bParam0){
char* sVar0;
if(bParam0){
sVar0="PRC_MARK";
if(iLocal_40==2){
sVar0="PRC_MARKVEH";
func_262(sVar0);
}elseif(iLocal_40==0){
if(func_92()==0){
func_261(sVar0);
func_260(sVar0);
}elseif(func_92()==1){
func_259(sVar0);
}else{
func_259(sVar0);
}}elseif(iLocal_40==1){
if(func_92()==0){
func_261(sVar0);
func_262(sVar0);
}elseif(func_92()==1){
func_259(sVar0);
func_262(sVar0);
}else{
func_259(sVar0);
func_262(sVar0);
}}
MISC::SET_BIT(&uLocal_47, 11);
}elseif(MISC::IS_BIT_SET(uLocal_47, 11)){
func_258();
func_257();
func_256();
func_255();
MISC::CLEAR_BIT(&uLocal_47, 11);
}}


void func_255(){
StringCopy(&(Global_8208[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}


void func_256(){
StringCopy(&(Global_8208[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}


void func_257(){
StringCopy(&(Global_8208[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}


void func_258(){
StringCopy(&(Global_8208[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}


void func_259(char* sParam0){
StringCopy(&(Global_8208[0 /*16*/].f_8), sParam0, 32);
}


void func_260(char* sParam0){
StringCopy(&(Global_8208[2 /*16*/].f_8), sParam0, 32);
}


void func_261(char* sParam0){
StringCopy(&(Global_8208[1 /*16*/].f_8), sParam0, 32);
}


void func_262(char* sParam0){
StringCopy(&(Global_8208[3 /*16*/].f_8), sParam0, 32);
}


void func_263(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_264(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_264(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_20413[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113810.f_20413.f_145 < 9){
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9=iParam5;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11=iParam6;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12=uParam2;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13=iParam7;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14=iParam8;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=-1;
}
Global_113810.f_20413.f_145++;
func_242();
}}

int func_265(var uParam0, int iParam1){
if(iParam1==-1){
return 0;
}
if(!func_55(&(Global_77479.f_555[0 /*21*/]), iParam1)){
return 0;
}else{
func_62(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
}
return 1;
}


float func_266(int iParam0){
if(iParam0==-1){
return 0f;
}
if(!func_55(&(Global_77479.f_555[0 /*21*/]), iParam0)){
return 0f;
}
return Global_77479.f_555[0 /*21*/].f_3;
}


Vector3 func__267(int iParam0){
if(iParam0==-1){
return 0f, 0f, 0f;
}
if(!func_55(&(Global_77479.f_555[0 /*21*/]), iParam0)){
return 0f, 0f, 0f;
}
return Global_77479.f_555[0 /*21*/];
}

int func_268(int iParam0){
int iVar0;
bool bVar1;
if(iParam0 <=31){
iVar0=9;
bVar1=iParam0;
}else{
iVar0=10;
bVar1=(iParam0 - 32);
}
if(MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[iVar0], bVar1)){
return 0;
}
MISC::SET_BIT(&(Global_113810.f_9088.f_99.f_219[iVar0]), bVar1);
return 1;
}