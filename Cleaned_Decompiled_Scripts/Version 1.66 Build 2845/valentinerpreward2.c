//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
char* sLocal_0=NULL;
int iLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
var uLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
var uLocal_14=0;
var uLocal_15=0;
var uLocal_16=0;
var uLocal_17=0;
var uLocal_18=0;
struct<3> Local_19={
0, 0, 0 
};
int iLocal_20=0;
int iLocal_21=0;
int iLocal_22=0;
int iLocal_23=0;
int iLocal_24=0;
int iLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
int iLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
int iLocal_31=0;
int iLocal_32=0;
int iLocal_33=0;
int iLocal_34=0;
int iLocal_35=0;
struct<2> Local_36={
0, 0 
};
struct<3> Local_37={
0, 0, 0 
};
struct<3> Local_38={
0, 0, 0 
};
float fLocal_39=0f;
int iLocal_40=0;
int iLocal_41[3]={
0, 0, 0 
};
struct<2> Local_42={
0, 0 
};
int iLocal_43=0;
int iLocal_44[32]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_45=0;
int iLocal_46=0;
int iLocal_47=0;
struct<13> Local_48={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_49=0;
int iLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
int iLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
int iLocal_58=0;
int iLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
int iLocal_62=0;
struct<2> Local_63={
0, 0 
};
var uLocal_64=-1;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=4;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
int iLocal_89=0;
int iLocal_90=0;
int iLocal_91=0;
int iLocal_92=0;
int iLocal_93=0;
int iLocal_94=0;
int iLocal_95=0;
float fLocal_96=0f;
int iLocal_97=0;
int iLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
struct<2> Local_103={
0, 0 
};
int iLocal_104=0;
int iLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
int iLocal_108=0;
int iLocal_109=0;
int iLocal_110=0;
int iLocal_111=0;
int iLocal_112=0;
bool bLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
var uLocal_116=0;
#endregion

void __EntryFunction__(){
int iVar0;
sLocal_0="1.64.14";
iLocal_21=-1;
iLocal_22=-1;
iLocal_28=10000;
Local_37={
5022.564f, -5738f, 16.0937f 
};
Local_38={
5033.854f, -5747.749f, 20.4291f 
};
fLocal_39=2f;
iLocal_92=-1;
iLocal_98=-1;
iLocal_99=-1;
iLocal_100=-1;
iLocal_101=-1;
iLocal_108=-1;
iLocal_109=-1;
iLocal_110=-1;
iLocal_111=-1;
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(iScriptParam_115==iScriptParam_115){}
Global_1577991=MISC::GET_HASH_KEY(sLocal_0);
iVar0=MISC::GET_GAME_TIMER() + 10000;
while (MISC::GET_GAME_TIMER() < iVar0){
func_540();
wait(0);
}
while (true){
if(func_539()){
func_537();
}
func_540();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692735.f_3){
func_536();
func_535();
func_532();
func_530();
func_529();
func_523();
func_519();
func_516();
func_514();
func_511();
func_506();
func_505();
func_499();
func_498();
func_493();
func_489();
func_485();
func_479();
func_478();
func_463();
func_454();
func_445();
func_441();
func_440();
func_437();
func_427();
func_420();
func_294();
func_291();
if(MISC::IS_PC_VERSION()){
func_285();
}
func_260();
func_252();
func_249();
func_241();
func_229();
func_228();
func_225();
func_221();
func_87();
func_86();
func_73();
func_72();
func_56();
func_47();
func_38();
func_31();
func_26();
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_24();
func_23();
func_12();
func_11();
func_10();
func_9();
func_6();
func_3();
}else{
func_1();
}
wait(0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_1(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_35)){
OBJECT::DELETE_OBJECT(&iLocal_35);
}
iLocal_108=-1;
iLocal_109=-1;
func_2();
}


void func_2(){
if(!bLocal_113){
return;
}
iLocal_110=-1;
iLocal_111=-1;
iLocal_112=0;
bLocal_113=false;
iLocal_114=0;
}


void func_3(){
float fVar0;
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020"))==0){
return;
}
if(!func_4(Global_4718592.f_113724)){
return;
}
if(Global_1058032.f_1 !=6){
func_2();
return;
}
if(Global_1058032==58 && Global_1837298==0){
if(!bLocal_113){
Global_4718592.f_1219=Global_262145.f_8376;
bLocal_113=true;
iLocal_111=Global_262145.f_8417;
fVar0=(to_float((Global_262145.f_8376 - iLocal_110)) / 2f);
Global_262145.f_8417=(Global_262145.f_8417 - ceil(fVar0));
}}elseif(!bLocal_113){
if(!iLocal_112){
iLocal_110=Global_4718592.f_1219;
iLocal_112=1;
}}elseif(!iLocal_114){
Global_4718592.f_1219=iLocal_110;
iLocal_114=1;
Global_262145.f_8417=iLocal_111;
}}

int func_4(int iParam0){
if((((iParam0==func_5(6) || iParam0==func_5(7)) || iParam0==func_5(8)) || iParam0==func_5(9)) || iParam0==func_5(10)){
return 1;
}
return 0;
}

int func_5(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33703[iParam0];
}
return -1;
}


void func_6(){
int iVar0;
int iVar1;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler"))==0){
return;
}
iVar0=Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_259;
if((iVar0==iLocal_108 || iVar0 < 0) || iVar0 >=25){
return;
}
iLocal_108=iVar0;
iVar1=Global_4718592.f_179674[iVar0 /*276*/].f_52;
if((iVar1==iLocal_109 || iVar1 < 0) || iVar1 > 4){
return;
}
if(iLocal_109==3 || iLocal_109==4){
func_7(0, 1);
}
iLocal_109=iVar1;
}


void func_7(bool bParam0, bool bParam1){
if((bParam1 || Global_2646729.f_1597==SCRIPT::GET_ID_OF_THIS_THREAD()) || !SCRIPT::IS_THREAD_ACTIVE(Global_2646729.f_1597)){
if(bParam0){
Global_2646729.f_1597=SCRIPT::GET_ID_OF_THIS_THREAD();
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_2), 22);
func_8(1, -1, 2147483647, 0, bParam1);
}else{
Global_2646729.f_1597=-1;
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_2), 22);
func_8(0, -1, 500, 500, bParam1);
}}elseif(!bParam1){}}


void func_8(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
if((bParam4 || Global_2646729.f_1576==SCRIPT::GET_ID_OF_THIS_THREAD()) || !SCRIPT::IS_THREAD_ACTIVE(Global_2646729.f_1576)){
if(bParam0){
Global_2646729.f_1576=SCRIPT::GET_ID_OF_THIS_THREAD();
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_2), 19);
Global_2646729.f_1577=NETWORK::GET_NETWORK_TIME();
}else{
Global_2646729.f_1576=-1;
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_2), 19);
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_4=iParam2;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_5=iParam3;
Global_2646729.f_1579=iParam1;
}elseif(!bParam4){}}


void func_9(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_race_controler")) > 0){
if(iLocal_95){
if(fLocal_96 < 3f){
fLocal_96=(fLocal_96 + MISC::GET_FRAME_TIME());
}else{
iLocal_95=0;
fLocal_96=0f;
Global_20383.f_1=3;
}}
if(Global_20383.f_1==10 && Global_7568==188){
MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
Global_21725=5;
iLocal_95=1;
}}}


void func_10(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) <=0){
return;
}
if(Global_1665699.f_1){
return;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_40, 1)){
return;
}
Global_4718592.f_1196=0;
}


void func_11(){
if(Global_4718592.f_113724 !=1601836271){
return;
}
if(MISC::IS_BIT_SET(Global_4980736.f_102388[74 /*1051*/].f_917.f_1, 10) || MISC::IS_BIT_SET(Global_4980736.f_102388[77 /*1051*/].f_917.f_1, 10)){}
MISC::CLEAR_BIT(&(Global_4980736.f_102388[74 /*1051*/].f_917.f_1), 10);
MISC::CLEAR_BIT(&(Global_4980736.f_102388[77 /*1051*/].f_917.f_1), 10);
}


void func_12(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if((Global_262145.f_33703[10] !=Global_4718592.f_113724 || Global_1574964) || !Global_1574965){
func_22();
return;
}
MISC::CLEAR_BIT(&(Global_4718592.f_156642[1 /*565*/].f_18), 7);
MISC::CLEAR_BIT(&(Global_4718592.f_156642[1 /*565*/].f_18), 29);
Global_4980736.f_102388[42 /*1051*/].f_913[0]=3;
Global_4980736.f_102388[58 /*1051*/].f_913[0]=3;
if(Global_1058070.f_14[0] > 7 || Global_1058070.f_14[0] < 6){
func_21(&iLocal_41);
return;
}
iVar0=func_19(&iLocal_41);
iVar1=600;
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)){
iVar1=900;
}}
func_18(iVar0);
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
iVar2=CUTSCENE::GET_CUTSCENE_END_TIME();
iVar3=CUTSCENE::GET_CUTSCENE_TIME();
if(iVar3 >=(iVar2 - 300) && !func_17(&Local_42)){
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
func_16(&Local_42, 0, 0);
}}elseif(func_17(&Local_42) && func_15(Local_42, iVar1, 0)){
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
func_14(&Local_42);
iLocal_40=1;
func_13(iVar0);
}}


void func_13(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
return;
}
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1, 0);
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(iParam0, 0);
VEHICLE::SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(iParam0, 0);
VEHICLE::SET_VEHICLE_HANDBRAKE(iParam0, 0);
ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 30f);
}


void func_14(var uParam0){
uParam0->f_1=0;
}

int func_15(var uParam0, var uParam1, int iParam2, bool bParam3){
if(iParam2==-1){
return 1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >=iParam2){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0)) >=iParam2){
return 1;
}
return 0;
}


void func_16(var uParam0, bool bParam1, bool bParam2){
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


bool func_17(var uParam0){
return uParam0->f_1;
}


void func_18(int iParam0){
if(iLocal_40){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
if(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
return;
}
ENTITY::SET_ENTITY_VELOCITY(iParam0, 0f, 0f, 0f);
}

int func_19(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1058070.f_268 - 1)){
if(!ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0])){
}elseif(ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]) !=joaat("cargoplane2")){
}elseif(func_20(iParam0, Global_1058070.f_233[iVar0])){
}else{
return Global_1058070.f_233[iVar0];
}
iVar0++;
}
return 0;
}

int func_20(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 <=2){
if(iParam1==(*uParam0)[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}


void func_21(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 <=(Global_1058070.f_268 - 1)){
if(!ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0])){
}elseif(ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]) !=joaat("cargoplane2")){
}elseif(func_20(iParam0, Global_1058070.f_233[iVar0])){
}else{
iVar1=0;
while (iVar1 <=2){
if(ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1])){
}else{
(*iParam0)[iVar1]=Global_1058070.f_233[iVar0];
}else{
iVar1++;
}}}
iVar0++;
}}


void func_22(){
int iVar0;
func_14(&Local_42);
iLocal_40=0;
iVar0=0;
while (iVar0 <=2){
iLocal_41[iVar0]=0;
iVar0++;
}}


void func_23(){
if(Global_4718592.f_113724==380938673 || Global_4718592.f_113724==1597839856){
if(!MISC::IS_BIT_SET(Global_4718592.f_35, 2)){
MISC::SET_BIT(&(Global_4718592.f_35), 2);
}}}


void func_24(){
if(!Global_2683864.f_24){
return;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_37, Local_38, fLocal_39, 0, 1, 0)){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, 1);
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_35)){
iLocal_35=OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, 0, 0, 0);
ENTITY::SET_ENTITY_HEADING(iLocal_35, -42.2f);
ENTITY::SET_ENTITY_ALPHA(iLocal_35, 0, 0);
ENTITY::SET_ENTITY_NOWEAPONDECALS(iLocal_35, 1);
}
if(!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())){
if(func_15(Local_36, 750, 0)){
return;
}}else{
func_25(&Local_36, 0, 0);
}
PAD::DISABLE_CONTROL_ACTION(0, 220, 1);
PAD::DISABLE_CONTROL_ACTION(0, 221, 1);
PAD::DISABLE_CONTROL_ACTION(0, 295, 1);
PAD::DISABLE_CONTROL_ACTION(0, 294, 1);
PAD::DISABLE_CONTROL_ACTION(0, 292, 1);
PAD::DISABLE_CONTROL_ACTION(0, 293, 1);
PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
PAD::DISABLE_CONTROL_ACTION(0, 290, 1);
PAD::DISABLE_CONTROL_ACTION(0, 291, 1);
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
PAD::DISABLE_CONTROL_ACTION(0, 239, 1);
PAD::DISABLE_CONTROL_ACTION(0, 240, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 63, 1);
PAD::DISABLE_CONTROL_ACTION(0, 64, 1);
PAD::DISABLE_CONTROL_ACTION(0, 62, 1);
PAD::DISABLE_CONTROL_ACTION(0, 61, 1);
PAD::DISABLE_CONTROL_ACTION(2, 193, 1);
PAD::DISABLE_CONTROL_ACTION(2, 194, 1);
PAD::DISABLE_CONTROL_ACTION(2, 192, 1);
PAD::DISABLE_CONTROL_ACTION(2, 191, 1);
PAD::DISABLE_CONTROL_ACTION(2, 189, 1);
PAD::DISABLE_CONTROL_ACTION(2, 190, 1);
PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
PAD::DISABLE_CONTROL_ACTION(2, 195, 1);
PAD::DISABLE_CONTROL_ACTION(2, 196, 1);
PAD::DISABLE_CONTROL_ACTION(2, 197, 1);
PAD::DISABLE_CONTROL_ACTION(2, 198, 1);
PAD::DISABLE_CONTROL_ACTION(0, 218, 1);
PAD::DISABLE_CONTROL_ACTION(0, 219, 1);
PAD::DISABLE_CONTROL_ACTION(0, 266, 1);
PAD::DISABLE_CONTROL_ACTION(0, 267, 1);
PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
PAD::DISABLE_CONTROL_ACTION(0, 34, 1);
PAD::DISABLE_CONTROL_ACTION(0, 35, 1);
PAD::DISABLE_CONTROL_ACTION(0, 32, 1);
PAD::DISABLE_CONTROL_ACTION(0, 33, 1);
PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
PAD::DISABLE_CONTROL_ACTION(0, 209, 1);
PAD::DISABLE_CONTROL_ACTION(0, 210, 1);
}


void func_25(var uParam0, bool bParam1, bool bParam2){
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


void func_26(){
if(((func_30()==3 && func_29()) && func_28()) && func_27(Global_4718592.f_113724)){
NETWORK::NETWORK_BAIL(51, 0, 0);
}}

int func_27(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31051[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_28(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}


var func__29(){
return MISC::IS_BIT_SET(Global_2684801.f_1.f_2809, 5);
}

int func_30(){
return Global_1057409;
}


void func_31(){
if((func_34(PLAYER::PLAYER_ID()) && func_33()) && (MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "CMM_MOD_BOMT") || MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "CMM_MOD_ARWT"))){
func_25(&uLocal_106, 0, 0);
HUD::DISABLE_FRONTEND_THIS_FRAME();
}elseif(func_17(&uLocal_106)){
if(!func_32(&uLocal_106, 1000, 0)){
HUD::DISABLE_FRONTEND_THIS_FRAME();
}else{
func_14(&uLocal_106);
}}}

int func_32(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_16(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


var func__33(){
return MISC::IS_BIT_SET(Global_78807, 8);
}

int func_34(int iParam0){
if(iParam0 !=func_37()){
if(func_36(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_35(Global_2657589[iParam0 /*466*/].f_321.f_7)==13;
}}}
return 0;
}

int func_35(int iParam0){
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

int func_36(int iParam0, bool bParam1, bool bParam2){
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

int func_37(){
return -1;
}


void func_38(){
if(func_46()){
if(!func_44(-1)){
if(Global_262145.f_33963 && func_39(0)){
iLocal_105=1;
Global_262145.f_33963=0;
}}elseif(iLocal_105){
iLocal_105=0;
Global_262145.f_33963=1;
}}}

int func_39(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_41(10870, -1, 0), 0);
}
return func_40(PLAYER::PLAYER_ID());
}

int func_40(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_57.f_2, 0);
}
return 0;
}

int func_41(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_42(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_42(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_43();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_43(){
return Global_1574918;
}


bool func_44(int iParam0){
return func_41(11432, iParam0, 0)==func_45();
}

int func_45(){
return joaat("brickade2");
}

int func_46(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_47(){
if(func_36(PLAYER::PLAYER_ID(), 1, 1)){
if(!iLocal_104){
if(func_55(PLAYER::PLAYER_ID())){
if((((func_54() && func_53(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !func_52()) && CAM::IS_SCREEN_FADED_IN()){
if(func_49(func_50()) && func_48(ENTITY::GET_ENTITY_MODEL(func_50()))){
ENTITY::SET_ENTITY_INVINCIBLE(func_50(), 0);
iLocal_104=1;
}}}}elseif(!func_54() || !ENTITY::DOES_ENTITY_EXIST(func_50())){
iLocal_104=0;
}}elseif(iLocal_104){
iLocal_104=0;
}}

int func_48(int iParam0){
switch (iParam0){
case joaat("buzzard"):
case joaat("savage"):
case joaat("valkyrie"):
case joaat("hydra"):
case joaat("cargobob"):
case joaat("cargobob2"):
case joaat("havok"):
case joaat("hunter"):
case joaat("volatus"):
case joaat("supervolito"):
case joaat("supervolito2"):
case joaat("swift"):
case joaat("swift2"):
case joaat("frogger"):
case joaat("maverick"):
case joaat("annihilator"):
case joaat("mogul"):
case joaat("rogue"):
case joaat("starling"):
case joaat("seabreeze"):
case joaat("microlight"):
case joaat("tula"):
case joaat("lazer"):
case joaat("pyro"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("howard"):
case joaat("bombushka"):
case joaat("alphaz1"):
case joaat("nimbus"):
case joaat("luxor2"):
case joaat("velum2"):
case joaat("dodo"):
case joaat("miljet"):
case joaat("besra"):
case joaat("vestra"):
case joaat("duster"):
case joaat("shamal"):
case joaat("cuban800"):
case joaat("luxor"):
case joaat("stunt"):
case joaat("mammatus"):
case joaat("titan"):
case joaat("velum"):
case joaat("akula"):
case joaat("volatol"):
case joaat("strikeforce"):
case joaat("seasparrow"):
case joaat("alkonost"):
case joaat("annihilator2"):
case joaat("conada"):
return 1;
default:
}
return 0;
}

int func_49(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_50(){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==func_51()){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_38) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_38)){
return NETWORK::NET_TO_VEH(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_38);
}}
return Global_2793046.f_299;
}

int func_51(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


bool func_52(){
return Global_1950108.f_4610 !=-1;
}

int func_53(int iParam0){
if(iParam0 !=func_37()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 5);
}
return 0;
}

int func_54(){
if(PLAYER::PLAYER_ID() !=func_37()){
switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_17){
case 83:
case 84:
case 85:
case 86:
case 87:
return 1;
break;
}}
return 0;
}

int func_55(int iParam0){
if(iParam0 !=func_37()){
return Global_1853910[iParam0 /*862*/].f_267.f_293 !=0;
}
return 0;
}


void func_56(){
int iVar0;
int iVar1;
if((!iLocal_97 && func_71(0)) && !func_70(-1)){
Global_2765949=1;
iVar0=func_41(9903, -1, 0);
if(iVar0==0){
func_69(0, 1);
func_69(1, 2);
func_69(2, MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
}elseif(iVar0==1){
func_69(0, 1);
func_69(1, 2);
func_69(2, MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
}elseif(iVar0==2){
func_69(0, 2);
func_69(1, 1);
func_69(2, MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
}elseif(iVar0==3){
func_69(0, 3);
func_69(1, 4);
func_69(2, MISC::GET_RANDOM_INT_IN_RANGE(1, 3));
}elseif(iVar0==4){
func_69(0, 4);
func_69(1, 3);
func_69(2, MISC::GET_RANDOM_INT_IN_RANGE(1, 3));
}
iLocal_97=1;
}
iVar1=0;
if(Global_1021887 !=iLocal_98){
iLocal_98=Global_1021887;
iVar1=0;
while (iVar1 < 62){
if(func_68(Global_1021887.f_4[iVar1 /*88*/].f_56)){
MISC::CLEAR_BIT(&(Global_1021887.f_4[iVar1 /*88*/].f_76), 13);
}
iVar1++;
}}
iVar1=0;
if(Global_1016359 !=iLocal_99){
iLocal_99=Global_1016359;
iVar1=0;
while (iVar1 < 62){
if(func_68(Global_1016359.f_4[iVar1 /*88*/].f_56)){
MISC::CLEAR_BIT(&(Global_1016359.f_4[iVar1 /*88*/].f_76), 13);
}
iVar1++;
}}
iVar1=0;
if(Global_1010831 !=iLocal_100){
iLocal_100=Global_1010831;
iVar1=0;
while (iVar1 < 62){
if(func_68(Global_1010831.f_4[iVar1 /*88*/].f_56)){
MISC::CLEAR_BIT(&(Global_1010831.f_4[iVar1 /*88*/].f_76), 13);
}
iVar1++;
}}
iVar1=0;
if(Global_1027415 !=iLocal_101){
iLocal_101=Global_1027415;
iVar1=0;
while (iVar1 < 31){
if(func_68(Global_1027415.f_33[iVar1 /*88*/].f_56)){
MISC::CLEAR_BIT(&(Global_1027415.f_33[iVar1 /*88*/].f_76), 13);
}
iVar1++;
}}
if(func_67(PLAYER::PLAYER_ID()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10==PLAYER::PLAYER_ID()){
if(!func_66() && ((((func_28() || func_65()) || func_64()) || func_63()) || func_62())){
if(Global_75693){
func_25(&Local_103, 1, 0);
}else{
Global_75693=1;
iLocal_102=1;
func_16(&Local_103, 1, 0);
}}elseif((iLocal_102 && Global_75693) && ((func_66() || func_61(Local_103, 1500, 1)) || func_58(Global_2672505.f_4.f_16))){
Global_75693=0;
iLocal_102=0;
func_14(&Local_103);
}}
if(((iLocal_102 && Global_75693) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) < 1) && !func_57(PLAYER::PLAYER_ID())){
Global_75693=0;
iLocal_102=0;
func_14(&Local_103);
}}

int func_57(int iParam0){
if(iParam0 !=func_37()){
if(func_36(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}elseif((Global_1575060 && iParam0==PLAYER::PLAYER_ID()) && func_36(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_58(int iParam0){
if(iParam0 !=func_37() && func_36(iParam0, 1, 1)){
if(func_60(iParam0) && !func_59(iParam0)){
return 1;
}}
return 0;
}

int func_59(int iParam0){
if(iParam0 !=func_37() && func_36(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 4);
}
return 0;
}

int func_60(int iParam0){
if(iParam0 !=func_37() && func_36(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 3);
}
return 0;
}

int func_61(var uParam0, var uParam1, int iParam2, bool bParam3){
if(!func_17(&uParam0)){
return 0;
}
if(iParam2==-1){
return 1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >=iParam2){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0)) >=iParam2){
return 1;
}
return 0;
}


var func__62(){
return MISC::IS_BIT_SET(Global_1048576.f_10, 18);
}


var func__63(){
return Global_2672505.f_3575;
}


bool func_64(){
return HUD::GET_PAUSE_MENU_STATE() !=0;
}


var func__65(){
return Global_1836764.f_75;
}


bool func_66(){
return Global_1575060;
}

int func_67(int iParam0){
if(iParam0 !=func_37()){
if(func_36(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_35(Global_2657589[iParam0 /*466*/].f_321.f_7)==24;
}}}
return 0;
}

int func_68(struct<3> Param0){
if(((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 369.762f, -54.702f, 101.369f, 397.561f, -64.872f, 115.581f, 25f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1034.964f, -434.189f, 61.868f, -1008.375f, -421.17f, 76.507f, 25f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -573.272f, -717.097f, 111.013f, -602.873f, -716.668f, 125.263f, 25f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1004.441f, -775.809f, 59.928f, -1004.215f, -746.208f, 74.382f, 25f, 0, 1)){
return 1;
}
return 0;
}


void func_69(int iParam0, int iParam1){
switch (iParam1){
case 1:
Global_2765949.f_1[iParam0 /*3*/]={
369.762f, -54.702f, 101.369f 
};
Global_2765949.f_11[iParam0 /*3*/]={
397.561f, -64.872f, 115.581f 
};
Global_2765949.f_21[iParam0]=25f;
break;
case 2:
Global_2765949.f_1[iParam0 /*3*/]={
-1034.964f, -434.189f, 61.868f 
};
Global_2765949.f_11[iParam0 /*3*/]={
-1008.375f, -421.17f, 76.507f 
};
Global_2765949.f_21[iParam0]=25f;
break;
case 3:
Global_2765949.f_1[iParam0 /*3*/]={
-573.272f, -717.097f, 111.013f 
};
Global_2765949.f_11[iParam0 /*3*/]={
-602.873f, -716.668f, 125.263f 
};
Global_2765949.f_21[iParam0]=25f;
break;
case 4:
Global_2765949.f_1[iParam0 /*3*/]={
-1004.441f, -775.809f, 59.928f 
};
Global_2765949.f_11[iParam0 /*3*/]={
-1004.215f, -746.208f, 74.382f 
};
Global_2765949.f_21[iParam0]=25f;
break;
}}

int func_70(int iParam0){
if(!STATS::STAT_SAVE_PENDING() && !STATS::STAT_LOAD_PENDING(iParam0)){
return 0;
}
return 1;
}


var func__71(int iParam0){
return Global_1574538[iParam0];
}


void func_72(){
Global_1669394.f_34=1;
}


void func_73(){
int iVar0;
int iVar1;
struct<2> Var2;
float fVar3;
float fVar4;
struct<3> Var5;
if(func_17(&uLocal_17)){
MISC::SET_BIT(&Global_8254, 2);
if(func_32(&uLocal_17, 60000, 0)){
func_25(&uLocal_17, 0, 0);
func_14(&uLocal_17);
}}
if(func_17(&uLocal_15) && func_32(&uLocal_15, 1000, 0)){
if(iLocal_22==-1){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_22=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_22, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", 0, 0);
}}elseif(func_32(&uLocal_15, 4000, 0)){
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_22)){
AUDIO::STOP_SOUND(iLocal_22);
}
AUDIO::RELEASE_SOUND_ID(iLocal_22);
iLocal_22=-1;
AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
func_25(&uLocal_15, 0, 0);
func_14(&uLocal_15);
}}
if(!iLocal_9 && !func_81()){
return;
}
iLocal_9=1;
MISC::SET_BIT(&Global_8254, 2);
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_8)){
iVar0=joaat("imp_prop_ship_01a");
STREAMING::REQUEST_MODEL(iVar0);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
iLocal_8=OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_8, 1);
ENTITY::SET_ENTITY_LOD_DIST(iLocal_8, 8000);
iVar1=func_41(7869, -1, 0);
func_80(7869, iVar1 + 1, -1, 1, 0);
Var2.f_1=1;
Var2.f_0=24;
STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&Var2);
Local_19={
ENTITY::GET_ENTITY_COORDS(iLocal_8, 0) 
};
iLocal_20=0;
}}else{
func_79();
if(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()){
if(iLocal_21==-1){
AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
iLocal_21=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "07", iLocal_8, "DLC_GR_CS2_Sounds", 0, 0);
}
if(!iLocal_10){
if(func_32(&uLocal_11, 4500, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_8, 0);
func_25(&uLocal_11, 0, 0);
func_14(&uLocal_11);
func_16(&uLocal_13, 0, 0);
iLocal_10=1;
}}else{
fVar3=(to_float(func_78(&uLocal_13, 0, 0)) / to_float(func_77()));
fVar4=(to_float(func_78(&uLocal_11, 0, 0)) / to_float(func_76()));
fVar4=(fVar4 * fVar3);
Var5={
func_74(Local_19, func_75(), fVar4) 
};
ENTITY::SET_ENTITY_COORDS(iLocal_8, Var5, 1, 0, 0, 1);
if(fVar4 >=1f){
iLocal_20++;
Local_19={
ENTITY::GET_ENTITY_COORDS(iLocal_8, 0) 
};
func_25(&uLocal_11, 0, 0);
func_14(&uLocal_11);
if(func_76()==-1){
OBJECT::DELETE_OBJECT(&iLocal_8);
MISC::FORCE_LIGHTNING_FLASH();
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_21)){
AUDIO::STOP_SOUND(iLocal_21);
}
AUDIO::RELEASE_SOUND_ID(iLocal_21);
iLocal_21=-1;
func_16(&uLocal_15, 0, 0);
func_16(&uLocal_17, 0, 0);
func_25(&uLocal_13, 0, 0);
func_14(&uLocal_13);
Local_19={
0f, 0f, 0f 
};
iLocal_20=0;
iLocal_9=0;
iLocal_10=0;
}}}}}}


Vector3 func__74(struct<3> Param0, struct<3> Param1, float fParam2){
return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}


Vector3 func__75(){
switch (iLocal_20){
case 0:
return 306.567f, 5652.283f, 785.594f;
case 1:
return -1082.865f, 6390.52f, 924.2493f;
case 2:
return -2542.874f, 7217.514f, 1051.333f;
case 3:
return -4139.106f, 8143.302f, 1412.694f;
default:
}
return 0f, 0f, 0f;
}

int func_76(){
switch (iLocal_20){
case 0:
return 2000;
case 1:
return 1000;
case 2:
return 100;
case 3:
return 50;
default:
}
return -1;
}

int func_77(){
return 3150;
}

int func_78(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


void func_79(){
struct<3> Var0;
Var0={
ENTITY::GET_ENTITY_ROTATION(iLocal_8, 2) 
};
Var0.f_0=0f;
Var0.f_1=0f;
Var0.f_2=(Var0.f_2 + 1f);
ENTITY::SET_ENTITY_ROTATION(iLocal_8, Var0, 2, 1);
}


void func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_42(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_81(){
if(((((((func_85(22107, -1) && Global_2639783==7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && func_84(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684801.f_3076.f_178 >=1) && Global_2684801.f_3076.f_178 < 4) && func_83()) && func_82()){
return 1;
}
return 0;
}

int func_82(){
if(func_85(15476, -1) && func_41(5453, func_43(), 0) > 577){
return 1;
}
return 0;
}

int func_83(){
int iVar0;
int iVar1;
float fVar2;
MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
if(fVar2 < 0.5f){
if((iVar0==joaat("rain") || iVar0==joaat("THUNDER")) || iVar1==-1429616491){
return 1;
}}elseif((iVar1==joaat("rain") || iVar1==joaat("THUNDER")) || iVar1==-1429616491){
return 1;
}
return 0;
}


bool func_84(int iParam0, struct<3> Param1, float fParam2){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <=(fParam2 * fParam2);
}


bool func_85(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_43();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}


void func_86(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) > 0){
if(!iLocal_94){
iLocal_94=1;
}}elseif(iLocal_94){
WEAPON::SET_WEAPON_DAMAGE_MODIFIER(joaat("weapon_unarmed"), 1f);
iLocal_94=0;
}}


void func_87(){
if(!func_220()){
return;
}
if(!func_219(PLAYER::PLAYER_ID(), 0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_content_stash_house")) > 0){
if(func_215()){
if(func_195()){
func_194(36657, 1, -1);
iLocal_90=1;
}}}elseif(iLocal_90){
if(func_88()){
iLocal_92=-1;
iLocal_90=0;
iLocal_91=0;
iLocal_93=0;
}}}}

int func_88(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(func_195()){
iVar1=func_193(iLocal_92);
if(iLocal_92==0){
iVar0=func_192(PLAYER::PLAYER_ID());
if(iVar0 !=0){
if(!func_46() || iLocal_91){
func_126(iVar0, &iLocal_93, 5, 0, 0, 0, 0);
}else{
iVar2=func_124(0);
if(func_104(5, iVar2, &iLocal_93)){
if(iLocal_93==2){
iLocal_93=0;
iLocal_91=1;
return 0;
}}}}}else{
iVar0=func_102(PLAYER::PLAYER_ID(), iVar1);
iVar3=func_100(iVar0);
if(iVar0 !=0){
if(!func_46() || iLocal_91){
func_126(iVar0, &iLocal_93, 5, 0, 0, 0, 0);
}else{
iVar4=func_124(0);
if(func_104(iVar3, iVar4, &iLocal_93)){
if(iLocal_93==2){
iLocal_93=0;
iLocal_91=1;
return 0;
}}}}}
switch (iLocal_93){
case 0:
case 1:
return 0;
break;
case 2:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SH_TICKER_END1");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_98("DSH_H_SUPP", func_99(iVar1), -1);
func_95(11, func_97(iVar0));
break;
case 3:
break;
}}else{
func_89("SH_TICKER_END2", Global_262145.f_33759, 0);
}
return 1;
}

int func_89(char* sParam0, var uParam1, bool bParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
if(bParam2){
func_90(3, sParam0, 2, "", uParam1, 0, 0, 0, 1, 0, 0, 0);
}else{
func_90(3, sParam0, 1, "", uParam1, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_90(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_539() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_93(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_91(iParam2);
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

int func_91(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_92(iVar0);
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


void func_92(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_93(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_94(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_94(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_43();
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


void func_95(int iParam0, int iParam1){
int iVar0;
bool bVar1;
func_96(iParam1, &iVar0, &bVar1);
switch (iParam0){
case 0:
MISC::SET_BIT(&(Global_1950108.f_2654[iVar0]), bVar1);
return;
break;
case 1:
MISC::SET_BIT(&(Global_1950108.f_2661[iVar0]), bVar1);
return;
break;
case 2:
MISC::SET_BIT(&(Global_1950108.f_2668[iVar0]), bVar1);
return;
break;
case 3:
MISC::SET_BIT(&(Global_1950108.f_3325[iVar0]), bVar1);
return;
break;
case 4:
MISC::SET_BIT(&(Global_1950108.f_3332[iVar0]), bVar1);
return;
break;
case 5:
MISC::SET_BIT(&(Global_1950108.f_3618[iVar0]), bVar1);
return;
break;
case 6:
MISC::SET_BIT(&(Global_1950108.f_3625[iVar0]), bVar1);
return;
break;
case 7:
MISC::SET_BIT(&(Global_1950108.f_3632[iVar0]), bVar1);
return;
break;
case 8:
MISC::SET_BIT(&(Global_1950108.f_3655[iVar0]), bVar1);
return;
break;
case 9:
MISC::SET_BIT(&(Global_1950108.f_3662[iVar0]), bVar1);
return;
break;
case 10:
MISC::SET_BIT(&(Global_1950108.f_3339[iVar0]), bVar1);
return;
break;
case 11:
MISC::SET_BIT(&(Global_1950108.f_3639[iVar0]), bVar1);
return;
break;
case 12:
MISC::SET_BIT(&(Global_1950108.f_3646[iVar0]), bVar1);
return;
break;
case 13:
MISC::SET_BIT(&(Global_1950108.f_3349[iVar0]), bVar1);
return;
break;
}}


void func_96(int iParam0, var uParam1, var uParam2){
if(iParam0==-1){
return;
}
*uParam1=floor((to_float(iParam0) / 32f));
*uParam2=(iParam0 - *uParam1 * 32);
}

int func_97(int iParam0){
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


void func_98(char* sParam0, var uParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}


char* func_99(int iParam0){
switch (iParam0){
case 3:
return "DSH_H_METH";
case 1:
return "DSH_H_WEED";
case 4:
return "DSH_H_COKE";
case 2:
return "DSH_H_CASH";
case 0:
return "DSH_H_DOCS";
case 5:
return "DSH_H_WEAP";
case 6:
return "DSH_H_ACID";
default:
}
return "";
}

int func_100(int iParam0){
int iVar0;
if(func_101(iParam0)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iVar0 /*13*/]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_101(int iParam0){
if(iParam0==33 || iParam0==0){
return 0;
}
return 1;
}

int func_102(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(iParam0==func_37()){
return 0;
}
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/] !=0){
iVar1=Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/];
if(func_103(iVar1)==iParam1){
return iVar1;
}}
iVar0++;
}
return 0;
}

int func_103(int iParam0){
switch (iParam0){
case 1:
return 3;
case 2:
return 1;
case 3:
return 4;
case 4:
return 2;
case 5:
return 0;
case 6:
return 3;
case 7:
return 1;
case 8:
return 4;
case 9:
return 2;
case 10:
return 0;
case 11:
return 3;
case 12:
return 1;
case 13:
return 4;
case 14:
return 2;
case 15:
return 0;
case 16:
return 3;
case 17:
return 1;
case 18:
return 4;
case 19:
return 2;
case 20:
return 0;
case 21:
return 5;
case 22:
return 5;
case 23:
return 5;
case 24:
return 5;
case 25:
return 5;
case 26:
return 5;
case 27:
return 5;
case 28:
return 5;
case 29:
return 5;
case 30:
return 5;
case 31:
return 5;
case 32:
return 6;
default:
}
return -1;
}


bool func_104(int iParam0, int iParam1, int iParam2){
int iVar0;
if(*iParam2 !=0 && *iParam2 !=1){
*iParam2=0;
}
switch (*iParam2){
case 0:
if(func_123() !=-1){
return 0;
}
iVar0=func_122(iParam0);
if(func_118(78225582, -1799524201, iParam1, -1018905335, 1, 0, 1, 4, iVar0, 3)){
*iParam2=1;
}else{
*iParam2=3;
}
if(*iParam2==1 && func_112()){
}else{
*iParam2=3;
func_108(func_123());
}
break;
case 1:
if(func_107(func_123())){
if(func_106(func_123())==2){
*iParam2=2;
func_108(func_123());
func_105(iParam1);
}else{
*iParam2=3;
func_108(func_123());
}}
break;
}
return *iParam2 !=1;
}


void func_105(int iParam0){
Global_4536663=iParam0;
}

int func_106(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2;
}
return 0;
}

int func_107(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2 !=1;
}
return 0;
}


void func_108(int iParam0){
bool bVar0;
bVar0=false;
if(!func_46()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_111(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_109(&(Global_4535172[iParam0 /*85*/]));
}}


void func_109(var uParam0){
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
func_110(&(uParam0->f_14));
func_110(&(uParam0->f_14.f_13));
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


void func_110(var uParam0){
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

int func_111(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}

int func_112(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
bVar0=false;
if(!func_46()){
bVar0=true;
}
iVar1=1;
iVar2=func_123();
if(iVar2==-1){
return 0;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_43()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
if(func_117(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1)==1){
Global_4536674=1;
}
return 0;
}
if(Global_2695821){
if(Global_4535172[iVar2 /*85*/].f_66.f_6==1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6==-1303831698){
Global_4536675=1;
return 0;
}}}
iVar3=func_116(iVar2);
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
func_113(Global_4535172[iVar2 /*85*/], iVar2);
}
Global_4536659=1;
return 1;
}}
return 0;
}


void func_113(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_115(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_114();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_114(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__115(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_116(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66;
}
return -1;
}

int func_117(int iParam0, int iParam1, int iParam2){
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

int func_118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
bool bVar0;
int iVar1;
struct<4> Var2;
bVar0=false;
if(!func_46()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_43()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
iVar1=func_123();
if(iVar1==-1){
if(!func_120(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9)){
return 0;
}}
if(iVar1 !=-1){
if(iParam8 !=0 && func_119(iParam1)){
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

int func_119(int iParam0){
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

int func_120(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5){
bool bVar0;
int iVar1;
bool bVar2;
var uVar3;
bVar0=false;
if(!func_46()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_43()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*iParam0=func_121(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
return 1;
}
return 0;
}

int func_121(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_46()){
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
func_113(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}

int func_122(int iParam0){
char cVar0[64];
switch (iParam0){
case 0:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
break;
case 1:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
break;
case 2:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
break;
case 3:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
break;
case 4:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
break;
case 5:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
break;
case 6:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY6_v0", 64);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
return -1;
}
return MISC::GET_HASH_KEY(&cVar0);
}

int func_123(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(func_116(iVar0) !=2147483647){
if(func_111(iVar0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_124(bool bParam0){
char* sVar0;
func_125(&sVar0, bParam0);
return MISC::GET_HASH_KEY(&sVar0);
}


void func_125(char* sParam0, bool bParam1){
if(bParam1){
StringCopy(sParam0, "IG_SELL_0_t0_v0", 64);
}else{
StringCopy(sParam0, "IG_BUY_0_t0_v0", 64);
}}


void func_126(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
float fVar0;
float fVar1;
float fVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if((!bParam4 && !bParam5) && !bParam6){}
fVar0=to_float(Global_262145.f_18380);
fVar1=to_float(Global_262145.f_18381);
if(func_191(iParam0)){
if(func_189(PLAYER::PLAYER_ID())==297){
fVar0=to_float(Global_262145.f_32596);
fVar1=to_float(Global_262145.f_32596);
}else{
fVar0=to_float(Global_262145.f_21523);
fVar1=to_float(Global_262145.f_21524);
}}elseif(func_188(iParam0)){
fVar0=to_float(Global_262145.f_32700);
}
fVar2=0f;
fVar2=(fVar2 + (to_float(iParam2) * fVar0));
fVar2=(fVar2 + (to_float(iParam3) * fVar1));
iVar3=func_187(PLAYER::PLAYER_ID(), iParam0);
iVar4=func_100(iParam0);
if(iVar4 >=0){
iVar5=func_183(iParam0);
iVar6=(iVar3 + round(fVar2));
if(bParam4){
iVar6=100;
}
if(bParam5 || bParam6){
iVar6=(100 + iVar5);
}
if(iVar6 > (100 + iVar5)){
iVar6=(100 + iVar5);
}
if(iVar6 < 0){
iVar6=0;
}
if(iVar6 > (100 + func_182(iParam0, 0))){
iVar6=(100 + func_182(iParam0, 0));
}
if(func_191(iParam0) && iVar6 >=100){
Global_1648742=1;
}
if(!func_46()){
func_80(func_181(iVar4), iVar6, -1, 1, 0);
func_180(iVar4, iVar6);
func_179(iVar4, iVar6);
if(func_178(iVar4, 0) && iVar4==6){
func_163(0);
}
func_194(func_162(iVar4), 0, -1);
Global_2694475=1;
*iParam1=2;
if((!bParam4 && !bParam5) && func_191(iParam0)){
func_134();
}
func_131(func_133(iParam0));
}else{
iVar7=round(fVar2);
if(iVar5 > func_182(iParam0, 0)){
iVar5=func_182(iParam0, 0);
}
if((bParam4 || bParam5) || bParam6){
iVar7=(100 + iVar5);
}
if(((bParam4 || bParam5) || bParam6) || (iVar7 + iVar3) > (100 + iVar5)){
iVar7=((100 + iVar5) - iVar3);
}
if(iVar7 <=0){
*iParam1=2;
return;
}
if(func_127(iVar4, iVar7, iParam1)){
if(*iParam1==2){
func_80(func_181(iVar4), iVar6, -1, 1, 0);
func_180(iVar4, iVar6);
func_179(iVar4, iVar6);
if(func_178(iVar4, 0) && iVar4==6){
func_163(0);
}
func_194(func_162(iVar4), 0, -1);
Global_2694475=1;
if((!bParam4 && !bParam5) && func_191(iParam0)){
func_134();
}
func_131(func_133(iParam0));
}}elseif(*iParam1==1 && func_123()==-1){
*iParam1=3;
}}}else{
*iParam1=3;
}}


bool func_127(int iParam0, int iParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(*uParam2 !=0 && *uParam2 !=1){
*uParam2=0;
}
switch (*uParam2){
case 0:
if(func_123() !=-1){
return 0;
}
iVar0=func_130(iParam0);
iVar1=func_129();
iVar2=func_128(iParam0);
iVar3=297710065;
if(iParam0==6){
iVar3=-1523725408;
}
if(func_118(78225582, -1799524201, iVar1, 2108234284, 1, 0, 1, 4, iVar0, 3)){
if(func_118(78225582, 69656641, iVar2, 2108234284, iParam1, 0, 0, 4, 0, 3)){
if(func_118(78225582, -739932302, iVar3, 2108234284, 1, 0, iParam1, 4, iVar2, 3)){
*uParam2=1;
}else{
*uParam2=3;
}}else{
*uParam2=3;
}}else{
*uParam2=3;
}
if(*uParam2==1 && func_112()){
}else{
*uParam2=3;
func_108(func_123());
}
break;
case 1:
if(func_107(func_123())){
if(func_106(func_123())==2){
*uParam2=2;
func_108(func_123());
}else{
*uParam2=3;
func_108(func_123());
}}
break;
}
return *uParam2 !=1;
}

int func_128(int iParam0){
char cVar0[64];
switch (iParam0){
case 0:
StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY0_v0", 64);
break;
case 1:
StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY1_v0", 64);
break;
case 2:
StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY2_v0", 64);
break;
case 3:
StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY3_v0", 64);
break;
case 4:
StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY4_v0", 64);
break;
case 5:
StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY5_v0", 64);
break;
case 6:
StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY6_v0", 64);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
return -1;
}
return MISC::GET_HASH_KEY(&cVar0);
}


var func__129(){
return Global_4536663;
}

int func_130(int iParam0){
char cVar0[64];
switch (iParam0){
case 0:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
break;
case 1:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
break;
case 2:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
break;
case 3:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
break;
case 4:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
break;
case 5:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
break;
case 6:
StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY6_v0", 64);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
return -1;
}
return MISC::GET_HASH_KEY(&cVar0);
}


void func_131(int iParam0){
int iVar0;
if(Global_262145.f_9036){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_132() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_132(){
int iVar0;
iVar0=0;
return iVar0;
}

int func_133(int iParam0){
switch (func_103(iParam0)){
case 4:
return 135;
break;
case 1:
return 136;
break;
case 2:
return 137;
break;
case 3:
return 138;
break;
case 0:
return 139;
break;
case 5:
return 140;
break;
case 6:
return 140;
break;
}
return -1;
}


void func_134(){
int iVar0;
if(func_161(PLAYER::PLAYER_ID())){
iVar0=func_192(PLAYER::PLAYER_ID());
if(func_160(PLAYER::PLAYER_ID(), iVar0) <=0 && func_159(PLAYER::PLAYER_ID(), iVar0) !=0){
func_156(PLAYER::PLAYER_ID(), iVar0, 0, 1);
func_136(5, 0, 1, 0);
func_135(PLAYER::PLAYER_ID(), iVar0, 5000, 1);
}}}


void func_135(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
if(iParam0==func_37()){
return;
}
if(func_101(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
if(bParam3){
Global_1853910[iParam0 /*862*/].f_267.f_286=iParam2;
}else{
Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_9=iParam2;
}}
iVar0++;
}}}


void func_136(int iParam0, bool bParam1, bool bParam2, bool bParam3){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
float fVar6;
bVar1=false;
iVar2=func_155(PLAYER::PLAYER_ID(), iParam0);
if(!bParam1){
func_154(iParam0, 0, bParam2);
}
if(bParam1){
iVar0=Global_2764476[iParam0];
iVar0=func_153(iParam0, bParam2);
if(iVar0 < 0){
iVar0=0;
}
if(!bParam2){
Global_1949961=-1;
}
func_152(iParam0, 0, bParam2);
}elseif(func_178(iParam0, bParam2)){
iVar0=func_138(iVar2, 0, 0, 0);
iVar3=func_187(PLAYER::PLAYER_ID(), iVar2);
iVar4=func_182(iVar2, bParam2);
iVar5=func_138(iVar2, 0, bParam2, 0);
fVar6=(to_float(iVar5) / to_float(iVar4));
iVar0=(iVar0 - round((to_float(iVar3) * fVar6)));
if(iVar0 <=0){
iVar0=iVar5;
}
if(func_191(iVar2) && func_159(PLAYER::PLAYER_ID(), iVar2)==2){
iVar0=(iVar0 / 2);
bVar1=true;
}
func_154(iParam0, iVar0, bParam2);
}else{
if(func_137(PLAYER::PLAYER_ID(), iVar2) > 0){
func_180(iParam0, (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/].f_2 - (func_182(iVar2, bParam2) / 2)));
}
iVar0=(func_138(iVar2, 1, bParam2, bParam3) / func_137(PLAYER::PLAYER_ID(), iVar2) + 1);
}
if(!bVar1){
if(func_191(iVar2) && func_159(PLAYER::PLAYER_ID(), iVar2)==2){
iVar0=(iVar0 / 2);
bVar1=true;
}}
func_135(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

int func_137(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_37()){
return 0;
}
if(func_101(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_8;
}
iVar0++;
}}
return 0;
}

int func_138(int iParam0, bool bParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
iVar1=func_103(iParam0);
if(bParam1){
func_144(iParam0, bParam2, bParam3);
}
switch (iVar1){
case 1:
iVar0=Global_262145.f_17391;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17401);
}
if(func_141(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17407);
}
if(Global_262145.f_33039 && !func_85(34716, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33046));
}
break;
case 6:
iVar0=Global_262145.f_17396;
if(func_140(PLAYER::PLAYER_ID())){
iVar0=(iVar0 - Global_262145.f_17402);
}
if(func_139(1)){
iVar0=(iVar0 / 2);
}
break;
case 3:
iVar0=Global_262145.f_17392;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17400);
}
if(func_141(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17406);
}
if(Global_262145.f_33040 && !func_85(34719, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33047));
}
break;
case 4:
iVar0=Global_262145.f_17393;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17399);
}
if(func_141(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17405);
}
if(Global_262145.f_33041 && !func_85(34717, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33048));
}
break;
case 0:
iVar0=Global_262145.f_17394;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17397);
}
if(func_141(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17403);
}
if(Global_262145.f_33042 && !func_85(34718, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33049));
}
break;
case 2:
iVar0=Global_262145.f_17395;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=(iVar0 - Global_262145.f_17398);
}
if(func_141(PLAYER::PLAYER_ID(), iParam0, 1)){
iVar0=(iVar0 - Global_262145.f_17404);
}
if(Global_262145.f_33043 && !func_85(34720, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33050));
}
break;
case 5:
if(bParam2){
iVar0=Global_262145.f_21548;
}else{
iVar0=Global_262145.f_21532;
}
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
if(bParam2){
iVar0=(iVar0 - Global_262145.f_21549);
}else{
iVar0=(iVar0 - Global_262145.f_21533);
}}
if(func_141(PLAYER::PLAYER_ID(), iParam0, 1)){
if(bParam2){
iVar0=(iVar0 - Global_262145.f_21550);
}else{
iVar0=(iVar0 - Global_262145.f_21534);
}}
if(bParam2){
if(Global_262145.f_33045 && !func_85(34739, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33052));
}}elseif(Global_262145.f_33044 && !func_85(34721, -1)){
iVar0=floor((IntToFloat(iVar0) * Global_262145.f_33051));
}
if(func_159(PLAYER::PLAYER_ID(), iParam0)==2){
iVar0 *=2;
}
break;
}
return iVar0;
}

int func_139(int iParam0){
int iVar0;
iVar0=func_41(11822, -1, 0);
if(iVar0==0){
return 0;
}
if(func_41(11823, -1, 0) <=NETWORK::GET_CLOUD_TIME_AS_INT()){
if(iVar0 !=0){
func_80(11823, 0, -1, 1, 0);
func_80(11822, 0, -1, 1, 0);
}
return 0;
}
if(iParam0 && iVar0 > Global_262145.f_21871){
return 0;
}
return 1;
}

int func_140(int iParam0){
if(iParam0==func_37()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_478, 16);
}

int func_141(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_143(iParam0, iParam1)){
iVar0=func_142(iParam0, iParam1);
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_5, iParam2);
}
return 0;
}

int func_142(int iParam0, int iParam1){
int iVar0;
if(func_101(iParam1) && iParam0 !=func_37()){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_143(int iParam0, int iParam1){
int iVar0;
if(func_101(iParam1) && iParam0 !=func_37()){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return 1;
}
iVar0++;
}}
return 0;
}


void func_144(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(!func_148(iParam0, bParam2)){
return;
}
iVar0=func_147(iParam0);
iVar1=func_146(iVar0);
if(bParam1){
iVar1=func_145(iVar0);
}
if(!func_85(iVar1, -1)){
func_194(iVar1, 1, -1);
}}

int func_145(int iParam0){
switch (iParam0){
case 5:
return 34738;
break;
}
return 0;
}

int func_146(int iParam0){
switch (iParam0){
case 1:
return 34722;
break;
case 3:
return 34725;
break;
case 4:
return 34723;
break;
case 0:
return 34724;
break;
case 2:
return 34726;
break;
case 5:
return 34727;
break;
}
return 0;
}

int func_147(int iParam0){
switch (iParam0){
case 3:
case 8:
case 13:
case 18:
return 4;
break;
case 4:
case 9:
case 14:
case 19:
return 2;
break;
case 5:
case 10:
case 15:
case 20:
return 0;
break;
case 1:
case 6:
case 11:
case 16:
return 3;
break;
case 2:
case 7:
case 12:
case 17:
return 1;
break;
case 32:
return 6;
break;
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
return 5;
break;
}
return -1;
}

int func_148(int iParam0, bool bParam1){
if(!func_143(PLAYER::PLAYER_ID(), iParam0)){
return 0;
}
if(!bParam1 && !func_151(PLAYER::PLAYER_ID(), iParam0)){
return 0;
}
if(!bParam1 && !func_149(PLAYER::PLAYER_ID(), func_100(iParam0))){
return 0;
}
return 1;
}

int func_149(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=func_155(iParam0, iParam1);
iVar2=func_103(iVar1);
switch (iVar2){
case 1:
if(func_150(iParam0, iVar1) > 8){
iVar0=1;
}
break;
case 3:
if(func_150(iParam0, iVar1) > 2){
iVar0=1;
}
break;
case 4:
if(func_150(iParam0, iVar1) > 1){
iVar0=1;
}
break;
case 0:
if(func_150(iParam0, iVar1) > 1){
iVar0=1;
}
break;
case 2:
if(func_150(iParam0, iVar1) > 1){
iVar0=1;
}
break;
case 5:
if(func_150(iParam0, iVar1) > 1){
iVar0=1;
}
break;
case 6:
if(func_150(iParam0, iVar1) > 1){
iVar0=1;
}
break;
}
return iVar0;
}

int func_150(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_37()){
return 0;
}
if(func_101(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_4;
}
iVar0++;
}}
return 0;
}

int func_151(int iParam0, int iParam1){
int iVar0;
if(func_143(iParam0, iParam1)){
iVar0=func_142(iParam0, iParam1);
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_4 > 0 && Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_7){
return 1;
}}
return 0;
}


void func_152(int iParam0, int iParam1, bool bParam2){
if(bParam2){
func_194(15384, iParam1, -1);
return;
}
func_194(func_162(iParam0), iParam1, -1);
}

int func_153(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=Global_2764476[iParam0];
iVar1=func_155(PLAYER::PLAYER_ID(), iParam0);
if(bParam1){
iVar0=Global_2764484;
}
if(func_191(iVar1)){
if(func_159(PLAYER::PLAYER_ID(), iVar1)==2){
iVar0 *=2;
}}
return iVar0;
}


void func_154(int iParam0, int iParam1, bool bParam2){
if(bParam2){
Global_2764484=iParam1;
return;
}
Global_2764476[iParam0]=iParam1;
}

int func_155(int iParam0, int iParam1){
var uVar0;
if(iParam0==func_37()){
return 0;
}
if(iParam1 < 0 || iParam1 >=7){
return 0;
}
if(func_101(Global_1853910[iParam0 /*862*/].f_267.f_193[iParam1 /*13*/])){
uVar0=Global_1853910[iParam0 /*862*/].f_267.f_193[iParam1 /*13*/];
}
return uVar0;
}


void func_156(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
if(func_101(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_8=iParam2;
if(bParam3){
func_194(func_158(iVar0), func_157(iParam2), -1);
}}
iVar0++;
}}}


bool func_157(int iParam0){
return iParam0==1;
}

int func_158(int iParam0){
switch (iParam0){
case 0:
return 9394;
case 1:
return 9395;
case 2:
return 9396;
case 3:
return 9397;
case 4:
return 9398;
case 5:
return 15371;
case 6:
return 36666;
default:
}
return 9394;
}

int func_159(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_37()){
return 0;
}
if(func_101(iParam1) && func_191(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_12;
}
iVar0++;
}}
return 0;
}

int func_160(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_37()){
return 0;
}
if(func_101(iParam1) && func_191(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853910[iParam0 /*862*/].f_267.f_285;
}
iVar0++;
}}
return 0;
}


bool func_161(int iParam0){
return func_192(iParam0) !=0;
}

int func_162(int iParam0){
switch (iParam0){
case 0:
return 9416;
case 1:
return 9417;
case 2:
return 9418;
case 3:
return 9419;
case 4:
return 9420;
case 5:
return 15372;
case 6:
return 36662;
default:
}
return 9416;
}


void func_163(int iParam0){
struct<15> Var0;
int iVar1;
if(!func_177()){
return;
}
if(func_176(1)){
Var0.f_0=func_174(func_175());
Var0.f_1=func_173(func_175());
}
Var0.f_2=iParam0;
Var0.f_14=func_140(PLAYER::PLAYER_ID());
Var0.f_4=func_172(PLAYER::PLAYER_ID(), 32);
Var0.f_3=func_171(Global_1648664[6] >=0, Global_1648664[6], 0);
StringCopy(&(Var0.f_5), func_164(PLAYER::PLAYER_ID()), 32);
iVar1=func_41(11823, -1, 0);
if(iVar1 > NETWORK::GET_CLOUD_TIME_AS_INT()){
Var0.f_13=(iVar1 - NETWORK::GET_CLOUD_TIME_AS_INT());
}
STATS::_PLAYSTATS_ACID_RND(&Var0);
}


char* func_164(int iParam0){
char* sVar0;
int iVar1;
if(iParam0==PLAYER::PLAYER_ID()){
sVar0=func_170(&(Global_1914091[iParam0 /*297*/].f_265));
return sVar0;
}
if(Global_1894573[iParam0 /*608*/].f_10.f_121 !=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121){
return sVar0;
}
if(func_169(iParam0, 28) || (func_169(PLAYER::PLAYER_ID(), 28) && !func_167(iParam0))){
return "";
}
iVar1=func_166(iParam0);
if(iVar1 !=func_37()){
if(iVar1 !=PLAYER::PLAYER_ID()){
if(!func_165() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return "";
}}}
if(iVar1 !=func_37()){
sVar0=func_170(&(Global_1914091[iVar1 /*297*/].f_265));
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar0)){
return "";
}else{
return sVar0;
}}
return "";
}


bool func_165(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_166(int iParam0){
if(iParam0 !=func_37()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_37();
}

int func_167(int iParam0){
struct<13> Var0;
Var0={
func_168(iParam0) 
};
if(func_165()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_168(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


bool func_169(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


var func__170(var uParam0){
return uParam0;
}

int func_171(bool bParam0, var uParam1, int iParam2){
if(bParam0){
return uParam1;
}
return iParam2;
}

int func_172(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_37()){
return 0;
}
if(func_101(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_1;
}
iVar0++;
}}
return 0;
}

int func_173(int iParam0){
if(iParam0==func_37()){
return -1;
}
return Global_1894573[iParam0 /*608*/].f_10.f_8[1];
}

int func_174(int iParam0){
if(iParam0==func_37()){
return -1;
}
return Global_1894573[iParam0 /*608*/].f_10.f_8[0];
}

int func_175(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


bool func_176(bool bParam0){
return func_219(PLAYER::PLAYER_ID(), bParam0);
}


bool func_177(){
return func_85(36658, -1);
}


bool func_178(int iParam0, bool bParam1){
if(bParam1){
return func_85(15384, -1);
}
return func_85(func_162(iParam0), -1);
}


void func_179(int iParam0, int iParam1){
if(iParam0 !=-1 && iParam1 !=Global_1648664[iParam0]){
Global_1648664[iParam0]=iParam1;
}}


void func_180(int iParam0, int iParam1){
if(iParam0 !=-1 && iParam1 !=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/].f_2){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/].f_2=iParam1;
}}

int func_181(int iParam0){
switch (iParam0){
case 0:
return 3850;
case 1:
return 3851;
case 2:
return 3852;
case 3:
return 3853;
case 4:
return 3854;
case 5:
return 5446;
case 6:
return 11805;
default:
}
return 3850;
}

int func_182(int iParam0, bool bParam1){
var uVar0;
int iVar1;
iVar1=func_103(iParam0);
switch (iVar1){
case 1:
uVar0=Global_262145.f_17412;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17418;
}
break;
case 3:
uVar0=Global_262145.f_17411;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17417;
}
break;
case 4:
uVar0=Global_262145.f_17410;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17416;
}
break;
case 0:
uVar0=Global_262145.f_17408;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17414;
}
break;
case 6:
uVar0=Global_262145.f_17413;
if(func_140(PLAYER::PLAYER_ID())){
uVar0=Global_262145.f_17419;
}
break;
case 2:
uVar0=Global_262145.f_17409;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_17415;
}
break;
case 5:
if(bParam1){
uVar0=Global_262145.f_21551;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_21552;
}}else{
uVar0=Global_262145.f_21535;
if(func_141(PLAYER::PLAYER_ID(), iParam0, 0)){
uVar0=Global_262145.f_21536;
}}
break;
}
return uVar0;
}

int func_183(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
float fVar6;
float fVar7;
float fVar8;
iVar1=func_100(iParam0);
iVar2=func_138(iParam0, 0, 0, 0);
iVar3=func_78(&(Global_2764461[iVar1 /*2*/]), 0, 0);
if(func_85(func_162(iVar1), -1)){
iVar3=(iVar2 - Global_2764476[iVar1]);
if(iVar3 < 0){
iVar3=0;
}}
if(iVar1==5){
iVar4=func_184(iVar1, iParam0, 1);
iVar5=func_184(iVar1, iParam0, 0);
iVar0=(iVar4 + iVar5);
}else{
fVar6=(1f - (to_float((iVar2 - iVar3)) / to_float(iVar2)));
fVar7=to_float(func_182(iParam0, 0));
fVar8=(fVar7 * fVar6);
iVar0=round(fVar8);
}
return iVar0;
}

int func_184(int iParam0, int iParam1, bool bParam2){
struct<2> Var0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
if(bParam2){
Var0.f_0=Global_2764485;
Var0.f_1=Global_2764485.f_1;
}else{
Var0.f_0=Global_2764461[iParam0 /*2*/];
Var0.f_1=Global_2764461[iParam0 /*2*/].f_1;
}
iVar1=func_138(iParam1, 0, bParam2, 0);
iVar2=func_185(iParam1, Var0, iParam0, bParam2);
if(iVar2 < 0){
iVar2=0;
}
fVar3=(1f - (to_float((iVar1 - iVar2)) / to_float(iVar1)));
fVar4=to_float(func_182(iParam1, bParam2));
return round((fVar4 * fVar3));
}

int func_185(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_138(iParam0, 0, bParam4, 0);
iVar1=func_78(&uParam1, 0, 0);
if(func_153(iParam3, bParam4) > 0){
iVar2=func_153(iParam3, bParam4);
if(func_191(iParam0) && func_159(PLAYER::PLAYER_ID(), iParam0)==2){
iVar2=(iVar2 / 2);
}
iVar1=(iVar0 - iVar2);
iVar3=(func_186(PLAYER::PLAYER_ID(), iParam0, bParam4) - func_78(&uParam1, 0, 0));
func_154(iParam3, iVar3, bParam4);
}
return iVar1;
}

int func_186(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
if(iParam0==func_37()){
return 0;
}
if(func_101(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
iVar1=Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_9;
if(bParam2){
iVar1=Global_1853910[iParam0 /*862*/].f_267.f_286;
}
if(func_191(iParam1)){
if(func_159(PLAYER::PLAYER_ID(), iParam1)==2){
iVar1 *=2;
}}
return iVar1;
}
iVar0++;
}}
return 0;
}

int func_187(int iParam0, int iParam1){
int iVar0;
if(iParam0==func_37()){
return 0;
}
if(func_101(iParam1)){
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/]==iParam1){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_2;
}
iVar0++;
}}
return 0;
}


bool func_188(int iParam0){
return func_103(iParam0)==6;
}

int func_189(int iParam0){
if(func_190(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_190(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}


bool func_191(int iParam0){
return func_103(iParam0)==5;
}

int func_192(int iParam0){
if(iParam0==func_37()){
return 0;
}
return Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_193(int iParam0){
switch (iParam0){
case 0:
return 5;
break;
case 1:
return 3;
break;
case 2:
return 1;
break;
case 3:
return 4;
break;
case 4:
return 2;
break;
case 5:
return 0;
break;
case 6:
return 6;
break;
}
return -1;
}


void func_194(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_43();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_195(){
int iVar0[7];
int iVar1;
int iVar2;
int iVar3;
if(!func_220()){
return 0;
}
if(iLocal_92 !=-1){
return 1;
}
iVar2=0;
while (iVar2 < 7){
if(func_197(iVar2)){
iVar0[iVar1]=iVar2;
iVar1++;
}
iVar2++;
}
if(iVar1 > 1){
iVar3=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
iLocal_92=func_196(iVar0[iVar3]);
return 1;
}elseif(iVar1==1){
iLocal_92=func_196(iVar0[0]);
return 1;
}
return 0;
}

int func_196(int iParam0){
switch (iParam0){
case 5:
return 0;
case 3:
return 1;
case 1:
return 2;
case 4:
return 3;
case 2:
return 4;
case 0:
return 5;
case 6:
return 6;
default:
}
return -1;
}

int func_197(int iParam0){
int iVar0;
int iVar1;
if(iParam0==5){
if(func_161(PLAYER::PLAYER_ID())){
iVar0=func_102(PLAYER::PLAYER_ID(), 5);
if(func_202(iVar0) && func_200(iVar0)){
return 1;
}}}elseif(func_199(PLAYER::PLAYER_ID(), iParam0)){
iVar0=func_102(PLAYER::PLAYER_ID(), iParam0);
iVar1=func_100(iVar0);
if((func_202(iVar0) && func_200(iVar0)) && !func_198(iVar1)){
return 1;
}}
return 0;
}


bool func_198(int iParam0){
int iVar0;
if(func_101(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/])){
iVar0=func_147(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/]);
if(iVar0==1){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/].f_4 > 8){
return 0;
}}}
return Global_1648645[iParam0] !=0;
}

int func_199(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
if(iParam0==func_37()){
return 0;
}
iVar0=0;
while (iVar0 <=6){
if(Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/] !=0){
iVar1=Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/];
if(func_103(iVar1)==iParam1){
return 1;
}}
iVar0++;
}
return 0;
}

int func_200(int iParam0){
int iVar0;
iVar0=func_100(iParam0);
if((func_143(PLAYER::PLAYER_ID(), iParam0) && Global_1648664[iVar0] < Global_262145.f_18386) && !func_201(iVar0)){
return 1;
}
return 0;
}


bool func_201(int iParam0){
return Global_1648637[iParam0] !=0;
}

int func_202(int iParam0){
int iVar0;
int iVar1;
if(!func_143(PLAYER::PLAYER_ID(), iParam0)){
return 0;
}
iVar0=func_100(iParam0);
if(iVar0 >=0 && iVar0 < 7){
if(Global_1648691[iVar0] !=0){
return Global_1648691[iVar0]==1;
}}
iVar1=func_203(iParam0);
if(iVar1==1 || iVar1==3){
return 1;
}
return 0;
}

int func_203(int iParam0){
int iVar0;
if(!func_143(PLAYER::PLAYER_ID(), iParam0)){
return 0;
}
iVar0=func_100(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iVar0 /*13*/].f_4 <=0){
return 4;
}elseif(!func_214(PLAYER::PLAYER_ID(), iVar0) && !func_198(iVar0)){
return 2;
}elseif(func_204(iVar0, iParam0)){
return 1;
}
return 3;
}

int func_204(int iParam0, int iParam1){
if(iParam0==5){
if(Global_1648664[iParam0] > 0 && (!func_210(iParam1) || !func_208(PLAYER::PLAYER_ID(), iParam1))){
if(!Global_262145.f_21553 || func_207(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}
if((Global_1648664[iParam0] > 0 && !func_210(iParam1)) && (!Global_262145.f_18951 || func_205(PLAYER::PLAYER_ID()))){
return 1;
}
return 0;
}


bool func_205(int iParam0){
return func_206(iParam0, 1);
}

int func_206(int iParam0, int iParam1){
if(iParam0 !=func_37()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_37()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_207(int iParam0){
if(iParam0 !=func_37()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_37()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}


bool func_208(int iParam0, int iParam1){
return func_160(iParam0, iParam1) >=func_209(iParam1);
}

int func_209(int iParam0){
switch (iParam0){
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
return Global_262145.f_21547;
default:
}
return 0;
}


bool func_210(int iParam0){
return func_211(PLAYER::PLAYER_ID(), iParam0);
}

int func_211(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=func_37() && func_143(iParam0, iParam1)){
iVar0=func_142(iParam0, iParam1);
if(func_213(iVar0)){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_1 >=func_212(iParam1);
}}
return 0;
}

int func_212(int iParam0){
switch (iParam0){
case 2:
return Global_262145.f_18909;
case 1:
return Global_262145.f_18917;
case 3:
return Global_262145.f_18925;
case 5:
return Global_262145.f_18933;
case 4:
return Global_262145.f_18941;
case 7:
return Global_262145.f_18909;
case 6:
return Global_262145.f_18917;
case 8:
return Global_262145.f_18925;
case 10:
return Global_262145.f_18933;
case 9:
return Global_262145.f_18941;
case 12:
return Global_262145.f_18909;
case 11:
return Global_262145.f_18917;
case 13:
return Global_262145.f_18925;
case 15:
return Global_262145.f_18933;
case 14:
return Global_262145.f_18941;
case 17:
return Global_262145.f_18909;
case 16:
return Global_262145.f_18917;
case 18:
return Global_262145.f_18925;
case 20:
return Global_262145.f_18933;
case 19:
return Global_262145.f_18941;
case 32:
return Global_262145.f_18949;
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
return Global_262145.f_21531;
default:
}
return 0;
}


bool func_213(int iParam0){
return (iParam0 >=0 && iParam0 < 7);
}

int func_214(int iParam0, int iParam1){
if(iParam0 !=func_37() && func_143(iParam0, func_155(iParam0, iParam1))){
return Global_1853910[iParam0 /*862*/].f_267.f_193[iParam1 /*13*/].f_6;
}
return 0;
}

int func_215(){
if((func_216("SH_OT_LEAVE") || func_216("SH_OT_LEAVE2")) || func_216("SH_OT_LEAVE3")){
return 1;
}
return 0;
}


bool func_216(char* sParam0){
if(!func_218()){
return 0;
}
if(Global_1574757==11){
return func_217(sParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_217(char* sParam0){
if(!func_218()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_218(){
if(Global_1574757==20){
return 0;
}
return 1;
}


bool func_219(int iParam0, bool bParam1){
if(!bParam1){
if(func_207(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_37();
}

int func_220(){
if((Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[0 /*13*/] !=0 || Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[6 /*13*/] !=0) || Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[5 /*13*/] !=0){
return 1;
}
return 0;
}


void func_221(){
if(func_189(Global_2672505.f_4.f_16)==309){
if(!iLocal_7){
if(!iLocal_5){
if(!func_224(0)){
func_223(0);
iLocal_5=1;
}}elseif(func_224(0)){
if(!iLocal_6){
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
iLocal_6=1;
}}elseif(!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && CAM::IS_SCREEN_FADED_IN()){
iLocal_6=0;
func_222(0);
iLocal_5=0;
iLocal_7=1;
}}}}else{
if(iLocal_5){
if(func_224(0)){
func_222(0);
}
iLocal_5=0;
}
if(iLocal_6){
iLocal_6=0;
}
if(iLocal_7){
iLocal_7=0;
}}}


void func_222(bool bParam0){
MISC::CLEAR_BIT(&(Global_2793046.f_5225.f_48), bParam0);
}


void func_223(bool bParam0){
MISC::SET_BIT(&(Global_2793046.f_5225.f_48), bParam0);
}


bool func_224(int iParam0){
return MISC::IS_BIT_SET(Global_2793046.f_5225.f_48, iParam0);
}


void func_225(){
if((func_227() && func_226()) || func_64()){
if(Global_1926703){
Global_1950107=1;
}}}


bool func_226(){
return NETWORK::GET_CLOUD_TIME_AS_INT() < func_41(10873, -1, 0);
}

int func_227(){
if(!func_49(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.5573f, -234.6412f, 35.94032f, -792.6026f, -241.4741f, 39.50642f, 3f, 0, 1, 1)){
return 1;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -792.1209f, -242.4434f, 35.93293f, -789.0962f, -247.5213f, 39.44004f, 3f, 0, 1, 1)){
return 1;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -786.5422f, -248.4348f, 35.99127f, -780.4202f, -245.9356f, 39.44004f, 3f, 0, 1, 1)){
return 1;
}
return 0;
}


void func_228(){
if(func_189(Global_2672505.f_4.f_16)==309){
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
PAD::SET_CONTROL_VALUE_NEXT_FRAME(0, 75, -1000f);
}}}


void func_229(){
if(iLocal_86){
return;
}
if(PLAYER::PLAYER_ID()==func_37()){
return;
}
if(!func_240(-1)){
return;
}
if(!func_238(0)){
return;
}
if(!iLocal_87){
if(func_237() && CAM::IS_SCREEN_FADED_IN()){
switch (iLocal_89){
case 0:
if(func_234(0)){
iLocal_87=1;
iLocal_88=0;
}else{
iLocal_89++;
}
break;
case 1:
if(func_234(1)){
iLocal_87=1;
iLocal_88=0;
}else{
iLocal_86=1;
iLocal_89=0;
}
break;
}}}else{
if(!func_230(0, iLocal_89, &iLocal_88)){
return;
}
if(iLocal_88==2){
}
if(iLocal_89==0){
iLocal_87=0;
iLocal_88=0;
iLocal_89++;
}else{
iLocal_86=1;
iLocal_89=0;
}}}

int func_230(int iParam0, int iParam1, int iParam2){
if(iParam0 < 0){
*iParam2=3;
return 1;
}
if(func_46()){
if(func_232(iParam2, iParam0, iParam1)){
if(*iParam2==2){
func_80(func_231(iParam1), iParam0, -1, 1, 0);
}}
return (*iParam2 !=1 && *iParam2 !=0);
}else{
if(iParam0 !=-1){
func_80(func_231(iParam1), iParam0, -1, 1, 0);
}
*iParam2=2;
return 1;
}
return 0;
}

int func_231(int iParam0){
switch (iParam0){
case 0:
return 9861;
case 1:
return 9862;
default:
}
return 14192;
}


bool func_232(var uParam0, int iParam1, int iParam2){
int iVar0;
if(*uParam0 !=0 && *uParam0 !=1){
*uParam0=0;
}
switch (*uParam0){
case 0:
if(func_123() !=-1){
return 0;
}else{
iVar0=func_233(iParam2);
if(func_118(78225582, 69656641, iVar0, -886368739, iParam1, 0, 1, 4, 0, 3)){
*uParam0=1;
}else{
*uParam0=3;
}
if(*uParam0==1 && func_112()){
}else{
*uParam0=3;
func_108(func_123());
}}
break;
case 1:
if(func_123()==-1){
*uParam0=3;
}elseif(func_107(func_123())){
if(func_106(func_123())==2){
*uParam0=2;
func_108(func_123());
}else{
*uParam0=3;
func_108(func_123());
}}
break;
}
return (*uParam0 !=1 && *uParam0 !=0);
}

int func_233(int iParam0){
char cVar0[64];
switch (iParam0){
case 0:
StringCopy(&cVar0, "MP_STAT_TUNER_CLIENT_VEHICLE_0_v0", 64);
break;
case 1:
StringCopy(&cVar0, "MP_STAT_TUNER_CLIENT_VEHICLE_1_v0", 64);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
return -1;
}
return MISC::GET_HASH_KEY(&cVar0);
}

int func_234(int iParam0){
int iVar0;
iVar0=0;
if(iParam0==0){
iVar0=func_41(9850, -1, 0);
}else{
if(!func_236(PLAYER::PLAYER_ID())){
return 0;
}
iVar0=func_41(9854, -1, 0);
}
if(((func_41(func_231(iParam0), -1, 0) !=0 && func_41(func_235(iParam0), -1, 0)==0) && !MISC::IS_BIT_SET(Global_2766158[iParam0 /*106*/].f_105, 2)) && iVar0==0){
return 1;
}
return 0;
}

int func_235(int iParam0){
switch (iParam0){
case 0:
return 9859;
case 1:
return 9860;
default:
}
return 14192;
}

int func_236(int iParam0){
if(iParam0 !=func_37()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_485.f_2, 29);
}
return 0;
}

int func_237(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_51()) > 0 && Global_1574666==2){
return 1;
}
return 0;
}


bool func_238(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_41(9618, -1, 0), 0);
}
return func_239(PLAYER::PLAYER_ID());
}

int func_239(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return MISC::IS_BIT_SET(func_41(9618, -1, 0), 0);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_1, 0);
}
return 0;
}


bool func_240(int iParam0){
if(iParam0==-1){
iParam0=func_42(iParam0);
}
return func_41(9613, iParam0, 0) !=0;
}


void func_241(){
bool bVar0;
if(iLocal_25==1 && (func_52() || func_248())){
bVar0=false;
if(!func_36(PLAYER::PLAYER_ID(), 1, 0) && !MISC::IS_BIT_SET(Global_1950108, 27)){
bVar0=true;
}
if(!bVar0 && !func_246()){
bVar0=true;
}
if(!bVar0){
if((((func_49(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !func_57(PLAYER::PLAYER_ID())){
if(!func_60(PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(Global_1950108, 27)){
bVar0=true;
}}}
if(bVar0){
Global_1950091=0;
func_244();
func_242();
}}}


void func_242(){
func_243(-1);
}


void func_243(int iParam0){
if(iParam0 !=-1){
Global_1950108.f_4610.f_1=iParam0;
}else{
Global_1950108.f_4610.f_1=-1;
}}


void func_244(){
func_245(-1);
}


void func_245(int iParam0){
if(iParam0 !=-1){
Global_1950108.f_4610=iParam0;
}else{
Global_1950108.f_4610=-1;
}}

int func_246(){
if(func_247()==0){
return 1;
}
return 0;
}

int func_247(){
return Global_1574632.f_18;
}


bool func_248(){
return Global_1950108.f_4610.f_1 !=-1;
}


void func_249(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_189(PLAYER::PLAYER_ID())==164 && func_250(PLAYER::PLAYER_ID()))){
return;
}
if(Global_100733.f_324[58] < 20f && Global_2672505.f_2514[0 /*80*/].f_1==1){
if(!MISC::IS_BIT_SET(Global_100733.f_1407[58], 8)){
MISC::SET_BIT(&(Global_100733.f_1407[58]), 8);
iLocal_85=1;
}}elseif(iLocal_85){
iLocal_85=0;
if(MISC::IS_BIT_SET(Global_100733.f_1407[58], 8)){
MISC::CLEAR_BIT(&(Global_100733.f_1407[58]), 8);
}}}

int func_250(int iParam0){
if(func_207(iParam0)){
if(func_251(iParam0)){
return 1;
}}
return 0;
}

int func_251(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_169(iParam0, 9);
}
return 0;
}


void func_252(){
if(!func_259(PLAYER::PLAYER_ID())){
return;
}
if(!iLocal_84){
if((((((((func_36(PLAYER::PLAYER_ID(), 1, 1) && !Global_1935176) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !Global_4521801.f_910==1) && !func_64()) && func_255(PLAYER::PLAYER_PED_ID(), -1352.45f, 146.7562f, -99.6944f, 50f)) && func_84(PLAYER::PLAYER_PED_ID(), -1352.45f, 146.7562f, -99.6944f, 1f)) && !func_254()) && !Global_262145.f_26641){
if((func_253() || PAD::IS_CONTROL_JUST_PRESSED(0, 51)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51)){
iLocal_84=1;
}}}elseif(((((!func_36(PLAYER::PLAYER_ID(), 1, 1) || Global_4521801.f_910==1) || func_64()) || !func_255(PLAYER::PLAYER_PED_ID(), -1352.45f, 146.7562f, -99.6944f, 50f)) || !func_84(PLAYER::PLAYER_PED_ID(), -1352.45f, 146.7562f, -99.6944f, 1f)) || Global_262145.f_26641){
if(!Global_1935176){
Global_1935176=1;
}elseif(!func_253()){
Global_1935176=0;
iLocal_84=0;
}}}


bool func_253(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_254(){
if(Global_2672505.f_947.f_5==-1){
return 0;
}
return 1;
}


bool func_255(int iParam0, struct<3> Param1, float fParam2){
return func_256(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam2);
}


bool func_256(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3){
struct<3> Var0;
var uVar1;
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(0f, 0f, 0f, uParam1, 0f, 1f, 0f) 
};
uVar1=func_257(func_258(Var0), func_258(Param2 - Param0));
return MISC::ACOS(uVar1) <=fParam3;
}


float func_257(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__258(struct<3> Param0){
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

int func_259(int iParam0){
if(iParam0 !=func_37()){
if(func_36(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_35(Global_2657589[iParam0 /*466*/].f_321.f_7)==22;
}}}
return 0;
}


void func_260(){
struct<4> Var0;
struct<4> Var1;
struct<16> Var2;
if(Global_2766490 || ((func_36(PLAYER::PLAYER_ID(), 1, 1) && func_246()) && !iLocal_83)){
iLocal_83=1;
StringCopy(&Var0, "&#166;
", 16);
StringCopy(&Var1, "&#8249;
", 16);
if(func_207(PLAYER::PLAYER_ID())){
Var2={
func_281() 
};
if(func_280(&Var2, Var0) || func_280(&Var2, Var1)){
if(func_205(PLAYER::PLAYER_ID())){
func_267(&Var2, 0, 1);
}else{
func_267(&Var2, 1, 1);
}
func_266();
}}
if(func_265(PLAYER::PLAYER_ID())){
StringCopy(&Var2, func_264(PLAYER::PLAYER_ID()), 64);
if(func_280(&Var2, Var0) || func_280(&Var2, Var1)){
func_261(Var2);
}}}}


void func_261(char[64] cParam0){
func_262(55, 56, &cParam0, -1, 1);
Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_281={
cParam0 
};
}


void func_262(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
char cVar2[32];
char cVar3[32];
int iVar4;
int iVar5;
if(func_263()){
iVar0=Global_2849801[iParam0 /*3*/][func_42(iParam3)];
iVar1=Global_2849801[iParam1 /*3*/][func_42(iParam3)];
if(iVar0 !=0 && iVar1 !=0){
StringCopy(&cVar2, "", 32);
StringCopy(&cVar3, "", 32);
iVar4=HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
if(iVar4 > 0){
iVar5=10;
if(iVar4 < 10){
iVar5=iVar4;
}
StringCopy(&cVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, iVar5, 31), 32);
if(iVar4 > 10){
StringCopy(&cVar3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, iVar4, 31), 32);
}}
STATS::STAT_SET_STRING(iVar0, &cVar2, iParam4);
STATS::STAT_SET_STRING(iVar1, &cVar3, iParam4);
}}}

int func_263(){
return 1;
return 0;
}


char* func_264(int iParam0){
char* sVar0;
int iVar1;
sVar0=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N");
if(iParam0==func_37()){
return sVar0;
}
if(iParam0==PLAYER::PLAYER_ID()){
sVar0=func_170(&(Global_1914091[iParam0 /*297*/].f_281));
return sVar0;
}
if(Global_1894573[iParam0 /*608*/].f_10.f_121 !=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121){
return sVar0;
}
if(func_169(iParam0, 28) || (func_169(PLAYER::PLAYER_ID(), 28) && !func_167(iParam0))){
return sVar0;
}
iVar1=func_166(iParam0);
if(iVar1 !=func_37()){
if(iVar1 !=PLAYER::PLAYER_ID()){
if(!func_165() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return sVar0;
}}}
if(iVar1 !=func_37()){
sVar0=func_170(&(Global_1914091[iVar1 /*297*/].f_281));
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar0)){
return sVar0;
}else{
return sVar0;
}}
return sVar0;
}

int func_265(int iParam0){
if(iParam0==func_37()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_478, 14);
}


void func_266(){
int iVar0;
struct<2> Var1;
Var1.f_0=-1548744127;
Var1.f_1=PLAYER::PLAYER_ID();
iVar0=0;
while (iVar0 < 7){
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_11[iVar0] !=func_37()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_11[iVar0])){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var1, 2, func_115(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_11[iVar0]));
}}
iVar0++;
}}


void func_267(char* sParam0, int iParam1, bool bParam2){
if(bParam2){
if(func_277(1) || iParam1==0){
func_262(47, 48, sParam0, -1, 1);
if(func_276() && iParam1==0){
func_275(sParam0, bParam2);
}}else{
func_262(65, 67, sParam0, -1, 1);
if(func_274() && iParam1==1){
func_272(sParam0, bParam2);
}}}
StringCopy(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_105), sParam0, 64);
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121=LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
if((!func_165() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_270()){
func_269(28);
}else{
func_268(28);
}}


void func_268(bool bParam0){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), bParam0);
}


void func_269(bool bParam0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), bParam0);
}

int func_270(){
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==0){
return 0;
}
if(func_271()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}elseif(func_165()){
if(NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, 1)){
return 1;
}}elseif(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
return 0;
}


bool func_271(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_272(char* sParam0, bool bParam1){
struct<16> Var0;
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_262(45, 46, sParam0, -1, 1);
Var0={
func_273(65, 67, -1) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
func_262(65, 67, sParam0, -1, 1);
}}}
if((!func_165() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_270()){
func_269(28);
}else{
func_268(28);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
StringCopy(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_338), sParam0, 64);
}}
struct<16> func_273(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
struct<16> Var2;
char cVar3[32];
uVar0=Global_2849801[iParam0 /*3*/][func_42(iParam2)];
uVar1=Global_2849801[iParam1 /*3*/][func_42(iParam2)];
StringCopy(&Var2, STATS::STAT_GET_STRING(uVar0, -1), 64);
StringCopy(&cVar3, STATS::STAT_GET_STRING(uVar1, -1), 32);
StringConCat(&Var2, &cVar3, 64);
return Var2;
}

int func_274(){
return func_207(PLAYER::PLAYER_ID());
}


void func_275(char* sParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_262(49, 50, sParam0, -1, 1);
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
StringCopy(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_354), sParam0, 64);
}
if((!func_165() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_270()){
func_269(28);
}else{
func_268(28);
}}


bool func_276(){
return func_205(PLAYER::PLAYER_ID());
}


bool func_277(bool bParam0){
return func_278(PLAYER::PLAYER_ID(), bParam0);
}


bool func_278(int iParam0, bool bParam1){
return func_279(iParam0, bParam1, 1);
}

int func_279(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_37()){
return 0;
}
if(!bParam1){
if(func_206(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_37() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_280(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
struct<16> Var7;
iVar0=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
iVar3=MISC::GET_HASH_KEY(&cParam1);
iVar4=HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
iVar5=HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam1);
iVar6=0;
while (iVar6 <=(iVar4 - 1)){
if((iVar6 + iVar5) > iVar4){
return 0;
}elseif(MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar6, (iVar6 + iVar5)))==iVar3){
iVar1=iVar6;
iVar2=(iVar6 + iVar5);
iVar0=1;
}else{
iVar6++;
}}
if(iVar6 !=0){
StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, iVar1), 64);
}
if(iVar6 !=(iVar4 - iVar5)){
StringConCat(&Var7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar2, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0)), 64);
}
*sParam0={
Var7 
};
}
return iVar0;
}
struct<16> func_281(){
int iVar0;
struct<16> Var1;
iVar0=func_166(PLAYER::PLAYER_ID());
if(iVar0 !=func_37()){
if(iVar0 !=PLAYER::PLAYER_ID()){
if(((func_169(iVar0, 28) || func_169(PLAYER::PLAYER_ID(), 28)) || func_284(iVar0)) && !func_167(iVar0)){
StringCopy(&Var1, func_282(iVar0, 0), 64);
return Var1;
}
if(!func_165() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
StringCopy(&Var1, func_282(iVar0, 0), 64);
return Var1;
}}
return Global_1894573[iVar0 /*608*/].f_10.f_105;
}
StringCopy(&Var1, "", 64);
return Var1;
}


var func__282(int iParam0, bool bParam1){
if(!bParam1){
if(func_278(iParam0, 1)){
return func_283();
}}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}


var func__283(){
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}

int func_284(int iParam0){
struct<13> Var0;
if(iParam0 !=func_37()){
Var0={
func_168(iParam0) 
};
if((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return 0;
}}elseif(func_165() || MISC::IS_PROSPERO_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 0;
}}}}
return 1;
}


void func_285(){
func_287(&uLocal_64);
if(Global_1935690.f_12 !=4){
func_286(&uLocal_64, 0);
}
if(Global_2650102.f_192 !=6){
func_286(&uLocal_64, 1);
}
if(Global_2648605.f_1236 !=32){
func_286(&uLocal_64, 2);
}
if(Global_2648605.f_1399 !=32){
func_286(&uLocal_64, 3);
}}


void func_286(var uParam0, int iParam1){
if(uParam0->f_4[iParam1]==0){
uParam0->f_4[iParam1]=1;
}}


void func_287(var uParam0){
switch (uParam0->f_3){
case 0:
uParam0->f_2=func_290(uParam0);
if(uParam0->f_2 !=4){
uParam0->f_3=2;
}
break;
case 2:
if(NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(uParam0, 1474183246, func_289(uParam0->f_2), -50712147, 0, 1)){
if(NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(*uParam0)){
uParam0->f_3=1;
uParam0->f_4[uParam0->f_2]=2;
}}
break;
case 1:
func_288(uParam0);
if(uParam0->f_1 && NETSHOPPING::NET_GAMESERVER_END_SERVICE(*uParam0)){
*uParam0=-1;
uParam0->f_3=0;
uParam0->f_4[uParam0->f_2]=3;
uParam0->f_2=4;
}
break;
}}


void func_288(var uParam0){
int iVar0;
int iVar1;
if(*uParam0==-1 || uParam0->f_1){
return;
}
iVar0=0;
while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1)){
if(SCRIPT::GET_EVENT_AT_INDEX(1, iVar0)==227){
if(SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar1, 7)){
if(iVar1==*uParam0 && iVar1 !=-1){
uParam0->f_1=1;
}}}
iVar0++;
}}

int func_289(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=-1807935122;
break;
case 1:
iVar0=2026037878;
break;
case 2:
iVar0=1794983659;
break;
case 3:
iVar0=612415999;
break;
}
return iVar0;
}

int func_290(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(uParam0->f_4[iVar0]==1){
return iVar0;
}
iVar0++;
}
return 4;
}


void func_291(){
int iVar0;
int iVar1;
int iVar2;
if(PLAYER::PLAYER_ID()==func_37()){
return;
}
if(!func_46()){
return;
}
if(!func_240(-1)){
return;
}
if(!func_238(0)){
return;
}
iVar0=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_485.f_4;
if(iVar0 !=0 && iVar0 !=1){
return;
}
if(!iLocal_79){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_content_auto_shop_delivery")) > 0){
if(func_36(PLAYER::PLAYER_ID(), 1, 1) && func_293(PLAYER::PLAYER_PED_ID(), 0)==-1){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
iVar1=ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
iVar2=func_292(iVar1);
if(iVar2 !=func_41(func_231(iVar0), -1, 0)){
iLocal_79=1;
iLocal_81=iVar1;
iLocal_82=0;
}}}}}elseif(!iLocal_80){
if(!func_230(0, iVar0, &iLocal_82)){
return;
}
if(iLocal_82==2){
}
iLocal_80=1;
iLocal_82=0;
return;
}else{
if(!func_230(func_292(iLocal_81), iVar0, &iLocal_82)){
return;
}
if(iLocal_82==2){
}
iLocal_82=0;
iLocal_79=0;
iLocal_81=0;
iLocal_80=0;
}}

int func_292(int iParam0){
switch (iParam0){
case joaat("weevil"):
return 1;
case joaat("brioso2"):
return 2;
case joaat("rhapsody"):
return 3;
case joaat("club"):
return 4;
case joaat("issi3"):
return 5;
case joaat("nebula"):
return 6;
case joaat("dynasty"):
return 7;
case joaat("fagaloa"):
return 8;
case joaat("futo"):
return 9;
case joaat("asbo"):
return 10;
case joaat("sentinel"):
return 11;
case joaat("dominator3"):
return 12;
case joaat("vamos"):
return 13;
case joaat("hermes"):
return 14;
case joaat("coquette3"):
return 15;
case joaat("riata"):
return 16;
case joaat("everon"):
return 17;
case joaat("glendale2"):
return 18;
case joaat("schafter3"):
return 19;
case joaat("warrener"):
return 20;
case joaat("primo2"):
return 21;
case joaat("seminole2"):
return 22;
case joaat("rebla"):
return 23;
case joaat("swinger"):
return 24;
case joaat("flashgt"):
return 25;
case joaat("raiden"):
return 26;
case joaat("surano"):
return 27;
case joaat("penumbra2"):
return 28;
case joaat("vstr"):
return 29;
case joaat("jugular"):
return 30;
case joaat("toros"):
return 31;
case joaat("entity2"):
return 32;
case joaat("tempesta"):
return 33;
case joaat("thrax"):
return 34;
case joaat("sc1"):
return 35;
case joaat("gp1"):
return 36;
case joaat("cheetah2"):
return 37;
case joaat("neo"):
return 38;
case joaat("comet2"):
return 39;
case joaat("paragon"):
return 40;
default:
}
return 0;
}

int func_293(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
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


void func_294(){
bool bVar0;
struct<101> Var1;
if(((iLocal_74 > 2 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !func_46()) || !func_416(PLAYER::PLAYER_ID())){
return;
}
if(!iLocal_75 && func_44(-1)){
iLocal_74=3;
return;
}
bVar0=false;
if(func_415(PLAYER::PLAYER_ID()) && !func_44(-1)){
bVar0=true;
}
if(!bVar0){
return;
}
if(!iLocal_75){
if((!func_246() || func_44(-1)) || Global_2793046.f_996){
return;
}
if(NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
func_25(&uLocal_76, 0, 0);
return;
}elseif(NETSHOPPING::NET_GAMESERVER_TRANSACTION_IN_PROGRESS()){
func_25(&uLocal_76, 0, 0);
return;
}elseif(func_17(&uLocal_76)){
if(!func_32(&uLocal_76, 5000, 0)){
return;
}
func_14(&uLocal_76);
}
if((Global_75693 || func_414()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return;
}
if(func_49(PLAYER::PLAYER_PED_ID()) && func_413()){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 568.6935f, -438.6235f, -70.647f) < 4f){
return;
}}
iLocal_74=0;
iLocal_75=1;
}else{
Var1.f_9=49;
Var1.f_59=2;
Var1.f_78=-1;
Var1.f_79=-1;
Var1.f_96=-1;
Var1.f_97=1;
Var1.f_99=132;
Var1.f_100=-1;
switch (iLocal_74){
case 0:
case 1:
if(iLocal_74==0){
func_412(&Var1);
Var1.f_66=joaat("brickade2");
}else{
func_411(&Var1);
Var1.f_66=joaat("manchez3");
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_73)){
if(!func_382(&Var1, &iLocal_73)){
}}elseif(func_335(&iLocal_78, iLocal_73)){
if(iLocal_78==2){
func_108(func_123());
iLocal_78=0;
if(iLocal_74==0){
func_305(iLocal_73, 413, 1, 1, 0, 1, 1, 0, 0, -1, 0);
}
else{
func_305(iLocal_73, 414, 1, 1, 0, 1, 1, 0, 0, -1, 0);
}
iLocal_74++;
VEHICLE::DELETE_VEHICLE(&iLocal_73);
}else{
func_108(func_123());
iLocal_74=0;
iLocal_78=0;
iLocal_75=0;
VEHICLE::DELETE_VEHICLE(&iLocal_73);
}}
break;
case 2:
func_300(413, 413, -1);
func_300(414, 414, -1);
func_299(1);
func_298(1);
func_295(-835426960, 10, 0);
func_14(&uLocal_76);
iLocal_74++;
break;
}}}


void func_295(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_297(iParam1, iParam2)){
iVar0=func_296();
Global_2694420[iVar0]=iParam1;
Global_2694431[iVar0]=iParam0;
}}

int func_296(){
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

int func_297(int iParam0, var uParam1){
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


void func_298(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201, 6)){
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201), 6);
}}elseif(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201, 6)){
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201), 6);
}}


void func_299(bool bParam0){
if(bParam0){
if(!MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201, 5)){
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201), 5);
}}elseif(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201, 5)){
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201), 5);
}}


void func_300(int iParam0, int iParam1, int iParam2){
if(iParam0 < 0){
return;
}
iParam1++;
func_301(iParam0, iParam1, iParam2);
if(iParam0 >=415){
return;
}
if(iParam2==func_43() || iParam2==-1){
Global_1944416[iParam0]=iParam1;
}}


void func_301(int iParam0, int iParam1, int iParam2){
if(iParam1 <=255){
func_303(func_304(iParam0), iParam1, iParam2);
func_303(func_302(iParam0), 0, iParam2);
}else{
func_303(func_304(iParam0), 255, iParam2);
func_303(func_302(iParam0), (iParam1 - 255), iParam2);
}}

int func_302(int iParam0){
if(iParam0 < 261){
return (24625 + iParam0);
}elseif(iParam0 < 271){
return ((26349 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28069 + iParam0) - 271);
}elseif(iParam0 < 307){
return ((30200 + iParam0) - 281);
}elseif(iParam0 < 317){
return ((31548 + iParam0) - 307);
}elseif(iParam0 < 337){
return ((34096 + iParam0) - 317);
}elseif(iParam0 < 363){
return ((36594 + iParam0) - 337);
}elseif(iParam0 < 415){
return ((41160 + iParam0) - 363);
}
return (24625 + iParam0);
}


void func_303(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_43();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_304(int iParam0){
if(iParam0 < 158){
if(iParam0 <=38){
return (4036 + iParam0);
}elseif(iParam0 <=48){
return ((5905 + iParam0) - 39);
}elseif(iParam0 <=51){
return ((6025 + iParam0) - 49);
}elseif(iParam0 <=64){
return ((7199 + iParam0) - 52);
}elseif(iParam0 <=87){
return ((9207 + iParam0) - 65);
}else{
return ((14734 + iParam0) - 88);
}}elseif(iParam0==158){
return 15356;
}elseif(iParam0 < 261){
if(iParam0 < 184){
return ((17911 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18903 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21757 + iParam0) - 194);
}else{
return ((24595 + iParam0) - 231);
}}elseif(iParam0 < 271){
return ((26339 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28059 + iParam0) - 271);
}elseif(iParam0 < 307){
return ((30174 + iParam0) - 281);
}elseif(iParam0 < 317){
return ((31538 + iParam0) - 307);
}elseif(iParam0 < 337){
return ((34076 + iParam0) - 317);
}elseif(iParam0 < 363){
return ((36568 + iParam0) - 337);
}elseif(iParam0 < 415){
return ((41108 + iParam0) - 363);
}
return (4036 + iParam0);
}


void func_305(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10){
int iVar0;
var uVar1;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_333();
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) !=0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
}
if(bParam5){
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 12);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 15);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 8);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 9);
func_331();
func_330(iParam1, 1);
Global_1956097=1;
}
func_320(iParam0, &(Global_1586468[iParam1 /*142*/]), bParam5);
Global_1586468[iParam1 /*142*/].f_70=1;
if(bParam2){
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), true);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 6);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 7);
}
if(bParam3){
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), false);
}else{
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), false);
}
if(bParam4){
func_319(iParam1);
}
if(bParam6){
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 15);
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
}
if(bParam7){
switch (iParam10){
case 0:
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 27);
break;
case 1:
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 28);
break;
}}
if(bParam8){
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 13);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
if(MISC::IS_BIT_SET(iVar0, 3)){
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
}}}
if(VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >=0){
func_318(&iParam0, &(Global_1586468[iParam1 /*142*/].f_9), &(Global_1586468[iParam1 /*142*/].f_59));
if(func_317(iParam1, &uVar1)){
if(bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE()==iParam0){
Global_2359296[func_132() /*5568*/].f_593.f_86=iParam1 + 1;
}
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 25);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 26);
}}
Global_2359296[func_132() /*5568*/].f_681.f_1275=NETWORK::GET_CLOUD_TIME_AS_INT();
func_306(iParam1, &(Global_1586468[iParam1 /*142*/]), 0, iParam9, 0, 0);
}}

int func_306(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5){
int iVar0;
int iVar1;
var uVar2;
if(bParam2){
if(!bParam4){
}
Global_2359296[func_132() /*5568*/].f_681.f_1275=NETWORK::GET_CLOUD_TIME_AS_INT();
}
if(!bParam4){}
iVar1=func_316(1411, iParam0);
func_303(iVar1, uParam1->f_138, iParam3);
if(!bParam4){}
iVar1=func_316(1412, iParam0);
func_303(iVar1, uParam1->f_139, iParam3);
if(!bParam4){}
iVar1=func_316(1413, iParam0);
func_303(iVar1, *uParam1, iParam3);
if(!bParam4){}
iVar0=0;
while (iVar0 < 49){
if(iVar0 < 25){
iVar1=(func_316(1414, iParam0) + iVar0);
func_303(iVar1, uParam1->f_9[iVar0], iParam3);
}else{
iVar1=(func_315(iParam0) + (iVar0 - 25));
func_303(iVar1, uParam1->f_9[iVar0], iParam3);
}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 2){
iVar1=(func_316(1439, iParam0) + iVar0);
func_303(iVar1, uParam1->f_59[iVar0], iParam3);
iVar0++;
}
iVar1=func_316(1441, iParam0);
func_303(iVar1, uParam1->f_62, iParam3);
if(!bParam4){}
iVar1=func_316(1442, iParam0);
func_303(iVar1, uParam1->f_63, iParam3);
if(!bParam4){}
iVar1=func_316(1443, iParam0);
func_303(iVar1, uParam1->f_64, iParam3);
if(!bParam4){}
iVar1=func_316(1444, iParam0);
func_303(iVar1, uParam1->f_65, iParam3);
if(!bParam4){}
iVar1=func_316(1445, iParam0);
func_303(iVar1, uParam1->f_67, iParam3);
iVar1=func_316(1446, iParam0);
func_303(iVar1, uParam1->f_68, iParam3);
iVar1=func_316(1447, iParam0);
func_303(iVar1, uParam1->f_69, iParam3);
if(!bParam4){}
iVar1=func_316(1448, iParam0);
func_303(iVar1, uParam1->f_70, -1);
iVar1=func_316(1449, iParam0);
func_303(iVar1, uParam1->f_71, iParam3);
iVar1=func_316(1450, iParam0);
func_303(iVar1, uParam1->f_72, iParam3);
iVar1=func_316(1451, iParam0);
func_303(iVar1, uParam1->f_73, iParam3);
iVar1=func_316(1452, iParam0);
func_303(iVar1, uParam1->f_5, iParam3);
iVar1=func_316(1453, iParam0);
func_303(iVar1, uParam1->f_6, iParam3);
iVar1=func_316(1454, iParam0);
func_303(iVar1, uParam1->f_7, iParam3);
iVar1=func_316(1455, iParam0);
func_303(iVar1, uParam1->f_8, iParam3);
iVar1=func_316(3880, iParam0);
func_303(iVar1, uParam1->f_74, iParam3);
iVar1=func_316(3881, iParam0);
func_303(iVar1, uParam1->f_75, iParam3);
iVar1=func_316(3882, iParam0);
func_303(iVar1, uParam1->f_76, iParam3);
iVar1=func_314(iParam0);
func_303(iVar1, uParam1->f_97, iParam3);
iVar1=func_313(iParam0);
func_303(iVar1, uParam1->f_99, iParam3);
iVar1=func_312(iParam0);
func_303(iVar1, uParam1->f_98, iParam3);
iVar1=func_309(iParam0, 0);
func_303(iVar1, uParam1->f_102, iParam3);
uVar2=Global_2359296[func_132() /*5568*/].f_681.f_1275;
if(bParam5){
uVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
}
func_80(1629, uVar2, iParam3, 1, 0);
if(!bParam4){}
func_80(func_308(1, iParam0), uParam1->f_103, iParam3, 1, 0);
if(!bParam4){}
func_80(func_308(2, iParam0), uParam1->f_104, iParam3, 1, 0);
if(!bParam4){}
func_80(func_308(3, iParam0), uParam1->f_105, iParam3, 1, 0);
if(!bParam4){}
func_80(func_308(4, iParam0), uParam1->f_66, iParam3, 1, 0);
func_80(func_308(5, iParam0), uParam1->f_77, iParam3, 1, 0);
if(!bParam4){}
func_80(func_308(7, iParam0), uParam1->f_140, iParam3, 1, 0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1))){
func_307(func_308(6, iParam0), &(uParam1->f_1), iParam3);
if(!bParam4){
}}elseif(!bParam4){}
if(!bParam4){}
return 1;
}


void func_307(int iParam0, var uParam1, int iParam2){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_42(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_LICENSE_PLATE(iVar0, uParam1);
}}

int func_308(int iParam0, int iParam1){
switch (iParam0){
case 1:
switch (iParam1){
case 363:
return 11434;
case 364:
return 11441;
case 365:
return 11448;
case 366:
return 11455;
case 367:
return 11462;
case 368:
return 11469;
case 369:
return 11476;
case 370:
return 11483;
case 371:
return 11490;
case 372:
return 11497;
case 373:
return 11504;
case 374:
return 11511;
case 375:
return 11518;
case 376:
return 11525;
case 377:
return 11532;
case 378:
return 11539;
case 379:
return 11546;
case 380:
return 11553;
case 381:
return 11560;
case 382:
return 11567;
case 383:
return 11574;
case 384:
return 11581;
case 385:
return 11588;
case 386:
return 11595;
case 387:
return 11602;
case 388:
return 11609;
case 389:
return 11616;
case 390:
return 11623;
case 391:
return 11630;
case 392:
return 11637;
case 393:
return 11644;
case 394:
return 11651;
case 395:
return 11658;
case 396:
return 11665;
case 397:
return 11672;
case 398:
return 11679;
case 399:
return 11686;
case 400:
return 11693;
case 401:
return 11700;
case 402:
return 11707;
case 403:
return 11714;
case 404:
return 11721;
case 405:
return 11728;
case 406:
return 11735;
case 407:
return 11742;
case 408:
return 11749;
case 409:
return 11756;
case 410:
return 11763;
case 411:
return 11770;
case 412:
return 11777;
case 413:
return 11784;
case 414:
return 11791;
default:
}
break;
case 2:
switch (iParam1){
case 363:
return 11435;
case 364:
return 11442;
case 365:
return 11449;
case 366:
return 11456;
case 367:
return 11463;
case 368:
return 11470;
case 369:
return 11477;
case 370:
return 11484;
case 371:
return 11491;
case 372:
return 11498;
case 373:
return 11505;
case 374:
return 11512;
case 375:
return 11519;
case 376:
return 11526;
case 377:
return 11533;
case 378:
return 11540;
case 379:
return 11547;
case 380:
return 11554;
case 381:
return 11561;
case 382:
return 11568;
case 383:
return 11575;
case 384:
return 11582;
case 385:
return 11589;
case 386:
return 11596;
case 387:
return 11603;
case 388:
return 11610;
case 389:
return 11617;
case 390:
return 11624;
case 391:
return 11631;
case 392:
return 11638;
case 393:
return 11645;
case 394:
return 11652;
case 395:
return 11659;
case 396:
return 11666;
case 397:
return 11673;
case 398:
return 11680;
case 399:
return 11687;
case 400:
return 11694;
case 401:
return 11701;
case 402:
return 11708;
case 403:
return 11715;
case 404:
return 11722;
case 405:
return 11729;
case 406:
return 11736;
case 407:
return 11743;
case 408:
return 11750;
case 409:
return 11757;
case 410:
return 11764;
case 411:
return 11771;
case 412:
return 11778;
case 413:
return 11785;
case 414:
return 11792;
default:
}
break;
case 3:
switch (iParam1){
case 363:
return 11436;
case 364:
return 11443;
case 365:
return 11450;
case 366:
return 11457;
case 367:
return 11464;
case 368:
return 11471;
case 369:
return 11478;
case 370:
return 11485;
case 371:
return 11492;
case 372:
return 11499;
case 373:
return 11506;
case 374:
return 11513;
case 375:
return 11520;
case 376:
return 11527;
case 377:
return 11534;
case 378:
return 11541;
case 379:
return 11548;
case 380:
return 11555;
case 381:
return 11562;
case 382:
return 11569;
case 383:
return 11576;
case 384:
return 11583;
case 385:
return 11590;
case 386:
return 11597;
case 387:
return 11604;
case 388:
return 11611;
case 389:
return 11618;
case 390:
return 11625;
case 391:
return 11632;
case 392:
return 11639;
case 393:
return 11646;
case 394:
return 11653;
case 395:
return 11660;
case 396:
return 11667;
case 397:
return 11674;
case 398:
return 11681;
case 399:
return 11688;
case 400:
return 11695;
case 401:
return 11702;
case 402:
return 11709;
case 403:
return 11716;
case 404:
return 11723;
case 405:
return 11730;
case 406:
return 11737;
case 407:
return 11744;
case 408:
return 11751;
case 409:
return 11758;
case 410:
return 11765;
case 411:
return 11772;
case 412:
return 11779;
case 413:
return 11786;
case 414:
return 11793;
default:
}
break;
case 4:
switch (iParam1){
case 363:
return 11437;
case 364:
return 11444;
case 365:
return 11451;
case 366:
return 11458;
case 367:
return 11465;
case 368:
return 11472;
case 369:
return 11479;
case 370:
return 11486;
case 371:
return 11493;
case 372:
return 11500;
case 373:
return 11507;
case 374:
return 11514;
case 375:
return 11521;
case 376:
return 11528;
case 377:
return 11535;
case 378:
return 11542;
case 379:
return 11549;
case 380:
return 11556;
case 381:
return 11563;
case 382:
return 11570;
case 383:
return 11577;
case 384:
return 11584;
case 385:
return 11591;
case 386:
return 11598;
case 387:
return 11605;
case 388:
return 11612;
case 389:
return 11619;
case 390:
return 11626;
case 391:
return 11633;
case 392:
return 11640;
case 393:
return 11647;
case 394:
return 11654;
case 395:
return 11661;
case 396:
return 11668;
case 397:
return 11675;
case 398:
return 11682;
case 399:
return 11689;
case 400:
return 11696;
case 401:
return 11703;
case 402:
return 11710;
case 403:
return 11717;
case 404:
return 11724;
case 405:
return 11731;
case 406:
return 11738;
case 407:
return 11745;
case 408:
return 11752;
case 409:
return 11759;
case 410:
return 11766;
case 411:
return 11773;
case 412:
return 11780;
case 413:
return 11787;
case 414:
return 11794;
default:
}
break;
case 5:
switch (iParam1){
case 363:
return 11438;
case 364:
return 11445;
case 365:
return 11452;
case 366:
return 11459;
case 367:
return 11466;
case 368:
return 11473;
case 369:
return 11480;
case 370:
return 11487;
case 371:
return 11494;
case 372:
return 11501;
case 373:
return 11508;
case 374:
return 11515;
case 375:
return 11522;
case 376:
return 11529;
case 377:
return 11536;
case 378:
return 11543;
case 379:
return 11550;
case 380:
return 11557;
case 381:
return 11564;
case 382:
return 11571;
case 383:
return 11578;
case 384:
return 11585;
case 385:
return 11592;
case 386:
return 11599;
case 387:
return 11606;
case 388:
return 11613;
case 389:
return 11620;
case 390:
return 11627;
case 391:
return 11634;
case 392:
return 11641;
case 393:
return 11648;
case 394:
return 11655;
case 395:
return 11662;
case 396:
return 11669;
case 397:
return 11676;
case 398:
return 11683;
case 399:
return 11690;
case 400:
return 11697;
case 401:
return 11704;
case 402:
return 11711;
case 403:
return 11718;
case 404:
return 11725;
case 405:
return 11732;
case 406:
return 11739;
case 407:
return 11746;
case 408:
return 11753;
case 409:
return 11760;
case 410:
return 11767;
case 411:
return 11774;
case 412:
return 11781;
case 413:
return 11788;
case 414:
return 11795;
default:
}
break;
case 6:
switch (iParam1){
case 363:
return 11440;
case 364:
return 11447;
case 365:
return 11454;
case 366:
return 11461;
case 367:
return 11468;
case 368:
return 11475;
case 369:
return 11482;
case 370:
return 11489;
case 371:
return 11496;
case 372:
return 11503;
case 373:
return 11510;
case 374:
return 11517;
case 375:
return 11524;
case 376:
return 11531;
case 377:
return 11538;
case 378:
return 11545;
case 379:
return 11552;
case 380:
return 11559;
case 381:
return 11566;
case 382:
return 11573;
case 383:
return 11580;
case 384:
return 11587;
case 385:
return 11594;
case 386:
return 11601;
case 387:
return 11608;
case 388:
return 11615;
case 389:
return 11622;
case 390:
return 11629;
case 391:
return 11636;
case 392:
return 11643;
case 393:
return 11650;
case 394:
return 11657;
case 395:
return 11664;
case 396:
return 11671;
case 397:
return 11678;
case 398:
return 11685;
case 399:
return 11692;
case 400:
return 11699;
case 401:
return 11706;
case 402:
return 11713;
case 403:
return 11720;
case 404:
return 11727;
case 405:
return 11734;
case 406:
return 11741;
case 407:
return 11748;
case 408:
return 11755;
case 409:
return 11762;
case 410:
return 11769;
case 411:
return 11776;
case 412:
return 11783;
case 413:
return 11790;
case 414:
return 11797;
default:
}
break;
case 7:
switch (iParam1){
case 363:
return 11439;
case 364:
return 11446;
case 365:
return 11453;
case 366:
return 11460;
case 367:
return 11467;
case 368:
return 11474;
case 369:
return 11481;
case 370:
return 11488;
case 371:
return 11495;
case 372:
return 11502;
case 373:
return 11509;
case 374:
return 11516;
case 375:
return 11523;
case 376:
return 11530;
case 377:
return 11537;
case 378:
return 11544;
case 379:
return 11551;
case 380:
return 11558;
case 381:
return 11565;
case 382:
return 11572;
case 383:
return 11579;
case 384:
return 11586;
case 385:
return 11593;
case 386:
return 11600;
case 387:
return 11607;
case 388:
return 11614;
case 389:
return 11621;
case 390:
return 11628;
case 391:
return 11635;
case 392:
return 11642;
case 393:
return 11649;
case 394:
return 11656;
case 395:
return 11663;
case 396:
return 11670;
case 397:
return 11677;
case 398:
return 11684;
case 399:
return 11691;
case 400:
return 11698;
case 401:
return 11705;
case 402:
return 11712;
case 403:
return 11719;
case 404:
return 11726;
case 405:
return 11733;
case 406:
return 11740;
case 407:
return 11747;
case 408:
return 11754;
case 409:
return 11761;
case 410:
return 11768;
case 411:
return 11775;
case 412:
return 11782;
case 413:
return 11789;
case 414:
return 11796;
default:
}
break;
}
return 1630;
}

int func_309(int iParam0, bool bParam1){
if(iParam0 <=38){
if(iParam0 < 10){
if(bParam1){
return (4212 + iParam0);
}else{
return (31488 + iParam0);
}}elseif(iParam0 > 12 && iParam0 < 23){
if(bParam1){
return ((4212 + iParam0) - 3);
}else{
return ((31488 + iParam0) - 3);
}}elseif(iParam0 > 25 && iParam0 < 36){
if(bParam1){
return ((4212 + iParam0) - 6);
}else{
return ((31488 + iParam0) - 6);
}}}elseif(iParam0 > 38 && iParam0 < 49){
return ((6015 + iParam0) - 39);
}elseif(iParam0 > 51 && iParam0 < 62){
return ((7252 + iParam0) - 52);
}elseif(iParam0 > 64 && iParam0 < 85){
return ((9310 + iParam0) - 65);
}elseif(iParam0 >=281 && iParam0 < 291){
return ((30134 + iParam0) - 281);
}elseif(iParam0 >=294 && iParam0 < 304){
return (30134 + ((iParam0 - 281) - 3));
}elseif(iParam0 < func_310(11)){
return ((15084 + iParam0) - 88);
}elseif(iParam0 <=157){
return ((15084 + iParam0) - 88);
}elseif(iParam0==158){
return 15361;
}elseif(iParam0 < 184){
return ((18036 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18953 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21942 + iParam0) - 194);
}elseif(iParam0 < 261){
return ((24535 + iParam0) - 231);
}elseif(iParam0 < 271){
return ((26319 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28039 + iParam0) - 271);
}elseif(iParam0 > 306 && iParam0 < 317){
return ((31488 + 30 + iParam0) - 307);
}elseif(iParam0 >=317 && iParam0 < 337){
return ((34036 + iParam0) - 317);
}elseif(iParam0 >=337 && iParam0 < 347){
return ((36528 + iParam0) - 337);
}elseif(iParam0 >=350 && iParam0 < 360){
return (36528 + ((iParam0 - 337) - 3));
}elseif(iParam0 >=363 && iParam0 <=414){
return (41004 + (iParam0 - 363));
}
return 0;
}

int func_310(int iParam0){
switch (iParam0){
case 8:
return 108;
break;
case 9:
return 128;
break;
case 10:
return 148;
break;
case 11:
return 156;
break;
case 6:
return 75;
break;
case 7:
return 88;
break;
case 5:
return -1;
break;
case 12:
return 179;
break;
case 13:
return 186;
break;
case 14:
return 192;
break;
case 15:
return 202;
break;
case 16:
return 212;
break;
case 17:
return 222;
break;
case 18:
return 236;
break;
case 19:
return 246;
break;
case 20:
return 256;
break;
case 21:
return 268;
break;
case 22:
return 278;
break;
case 23:
return 294;
break;
case 24:
return 307;
break;
case 25:
return 317;
break;
case 26:
return 337;
break;
case 27:
return 350;
break;
case 28:
return 363;
break;
case 29:
return 413;
break;
}
if(iParam0 >=1000){
return -1;
}
return (func_311(iParam0, -1, 1) * iParam0 + 1);
}

int func_311(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
if(iParam1 >=1){
if(iParam1==115){
return 8;
}elseif(iParam1==116){
return 20;
}elseif(iParam1==117){
return 7;
}elseif(iParam1==118){
return 1;
}elseif((iParam1==119 || iParam1==120) || iParam1==121){
return 10;
}elseif(iParam1==122){
return 9;
}elseif(iParam1==123 || iParam1==124){
return 10;
}elseif(iParam1==125){
return 10;
}elseif(iParam1==126){
return 10;
}elseif(iParam1==127){
return 10;
}elseif(iParam1==128){
return 20;
}elseif(iParam1==129){
return 50;
}elseif(iParam1 <=130 && iParam1 > 0){
if(Global_1312228[iParam1 /*1951*/].f_33==2){
if(bParam2){
return 3;
}else{
return 2;
}}elseif(Global_1312228[iParam1 /*1951*/].f_33==6){
if(bParam2){
return 8;
}else{
return 6;
}}elseif(Global_1312228[iParam1 /*1951*/].f_33==10){
if(bParam2){
return 13;
}else{
return 10;
}}}}}
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
return 13;
break;
case 5:
return 0;
break;
case 6:
return 10;
break;
case 8:
case 9:
case 10:
return 20;
break;
case 11:
return 8;
break;
case 12:
return 20;
break;
case 13:
return 7;
break;
case 14:
return 1;
break;
case 15:
case 16:
case 17:
return 10;
break;
case 18:
case 19:
case 20:
return 10;
break;
case 21:
return 10;
break;
case 22:
return 10;
break;
case 25:
return 10;
break;
case 26:
return 20;
break;
case 29:
return 50;
break;
}
return 0;
}

int func_312(int iParam0){
if(iParam0 < 10){
return (7263 + iParam0);
}elseif(iParam0 > 12 && iParam0 < 23){
return (7263 + (iParam0 - 3));
}elseif(iParam0 > 25 && iParam0 < 36){
return (7263 + (iParam0 - 6));
}elseif(iParam0 > 38 && iParam0 < 49){
return (7263 + (iParam0 - 9));
}elseif(iParam0 > 51 && iParam0 < 62){
return ((7263 + iParam0) - 12);
}elseif(iParam0 > 64 && iParam0 < 85){
return ((9330 + iParam0) - 65);
}elseif(iParam0 >=281 && iParam0 < 291){
return ((30154 + iParam0) - 281);
}elseif(iParam0 >=294 && iParam0 < 304){
return (30154 + ((iParam0 - 281) - 3));
}elseif(iParam0 < func_310(11)){
return ((15154 + iParam0) - 88);
}elseif(iParam0 <=157){
return ((15154 + iParam0) - 88);
}elseif(iParam0==158){
return 15362;
}elseif(iParam0 < 184){
return ((18061 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18963 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21979 + iParam0) - 194);
}elseif(iParam0 < 261){
return ((24565 + iParam0) - 231);
}elseif(iParam0 < 271){
return ((26329 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28049 + iParam0) - 271);
}elseif(iParam0 > 306 && iParam0 < 317){
return ((31528 + iParam0) - 307);
}elseif(iParam0 >=317 && iParam0 < 337){
return ((34056 + iParam0) - 317);
}elseif(iParam0 >=337 && iParam0 < 347){
return ((36548 + iParam0) - 337);
}elseif(iParam0 >=350 && iParam0 < 360){
return (36548 + ((iParam0 - 337) - 3));
}elseif(iParam0 >=363 && iParam0 <=414){
return ((41056 + iParam0) - 363);
}
return 0;
}

int func_313(int iParam0){
if(iParam0 < 10){
return (5975 + iParam0);
}elseif(iParam0 > 12 && iParam0 < 23){
return (5975 + (iParam0 - 3));
}elseif(iParam0 > 25 && iParam0 < 36){
return (5975 + (iParam0 - 6));
}elseif(iParam0 > 38 && iParam0 < 49){
return (5975 + (iParam0 - 9));
}elseif(iParam0 > 51 && iParam0 < 62){
return ((7242 + iParam0) - 52);
}elseif(iParam0 > 64 && iParam0 < 85){
return ((9290 + iParam0) - 65);
}elseif(iParam0 >=281 && iParam0 < 291){
return ((30114 + iParam0) - 281);
}elseif(iParam0 >=294 && iParam0 < 304){
return (30114 + ((iParam0 - 281) - 3));
}elseif(iParam0 < func_310(11)){
return ((15014 + iParam0) - 88);
}elseif(iParam0 <=157){
return ((15014 + iParam0) - 88);
}elseif(iParam0==158){
return 15360;
}elseif(iParam0 < 184){
return ((18011 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18943 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21905 + iParam0) - 194);
}elseif(iParam0 < 261){
return ((24505 + iParam0) - 231);
}elseif(iParam0 < 271){
return ((26309 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28029 + iParam0) - 271);
}elseif(iParam0 > 306 && iParam0 < 317){
return ((31478 + iParam0) - 307);
}elseif(iParam0 >=317 && iParam0 < 337){
return ((34016 + iParam0) - 317);
}elseif(iParam0 >=337 && iParam0 < 347){
return ((36508 + iParam0) - 337);
}elseif(iParam0 >=350 && iParam0 < 360){
return (36508 + ((iParam0 - 337) - 3));
}elseif(iParam0 >=363 && iParam0 <=414){
return ((40952 + iParam0) - 363);
}
return 0;
}

int func_314(int iParam0){
if(iParam0 < 10){
return (5935 + iParam0);
}elseif(iParam0 > 12 && iParam0 < 23){
return (5935 + (iParam0 - 3));
}elseif(iParam0 > 25 && iParam0 < 36){
return (5935 + (iParam0 - 6));
}elseif(iParam0 > 38 && iParam0 < 49){
return (5935 + (iParam0 - 9));
}elseif(iParam0 > 51 && iParam0 < 62){
return ((7232 + iParam0) - 52);
}elseif(iParam0 > 64 && iParam0 < 85){
return ((9270 + iParam0) - 65);
}elseif(iParam0 >=281 && iParam0 < 291){
return ((30094 + iParam0) - 281);
}elseif(iParam0 >=294 && iParam0 < 304){
return (30094 + ((iParam0 - 281) - 3));
}elseif(iParam0 < func_310(11)){
return ((14944 + iParam0) - 88);
}elseif(iParam0 <=157){
return ((14944 + iParam0) - 88);
}elseif(iParam0==158){
return 15359;
}elseif(iParam0 < 184){
return ((17986 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18933 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21868 + iParam0) - 194);
}elseif(iParam0 < 261){
return ((24475 + iParam0) - 231);
}elseif(iParam0 < 271){
return ((26299 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28019 + iParam0) - 271);
}elseif(iParam0 > 306 && iParam0 < 317){
return ((31468 + iParam0) - 307);
}elseif(iParam0 >=317 && iParam0 < 337){
return ((33996 + iParam0) - 317);
}elseif(iParam0 >=337 && iParam0 < 347){
return ((36488 + iParam0) - 337);
}elseif(iParam0 >=350 && iParam0 < 360){
return (36488 + ((iParam0 - 337) - 3));
}elseif(iParam0 >=363 && iParam0 <=414){
return ((40900 + iParam0) - 363);
}
return 0;
}

int func_315(int iParam0){
int iVar0;
iVar0=(4424 - 4400);
if(iParam0 < 10){
return (4400 + (iParam0 * iVar0));
}elseif(iParam0 > 12 && iParam0 < 23){
return (4640 + ((iParam0 - 13) * iVar0));
}elseif(iParam0 > 25 && iParam0 < 36){
return (4880 + ((iParam0 - 26) * iVar0));
}elseif(iParam0 > 38 && iParam0 < 49){
return (5120 + ((iParam0 - 39) * iVar0));
}elseif(iParam0 > 51 && iParam0 < 62){
return (6414 + ((iParam0 - 52) * iVar0));
}elseif(iParam0 > 64 && iParam0 < 85){
return (7682 + ((iParam0 - 65) * iVar0));
}elseif(iParam0 >=281 && iParam0 < 291){
return (29534 + ((iParam0 - 281) * iVar0));
}elseif(iParam0 >=294 && iParam0 < 304){
return (29774 + ((iParam0 - 294) * iVar0));
}elseif(iParam0 < func_310(11)){
return (9554 + ((iParam0 - 88) * iVar0));
}elseif(iParam0 <=157){
return (9554 + ((iParam0 - 88) * iVar0));
}elseif(iParam0==158){
return 15282;
}elseif(iParam0 < 184){
return (16061 + ((iParam0 - 159) * iVar0));
}elseif(iParam0 < 194){
return (18163 + ((iParam0 - 184) * iVar0));
}elseif(iParam0 < 231){
return (19019 + ((iParam0 - 194) * iVar0));
}elseif(iParam0 < 261){
return (22195 + ((iParam0 - 231) * iVar0));
}elseif(iParam0 < 271){
return (25539 + ((iParam0 - 261) * iVar0));
}elseif(iParam0 < 281){
return (27259 + ((iParam0 - 271) * iVar0));
}elseif(iParam0 > 306 && iParam0 < 317){
return (31188 + ((iParam0 - 307) * iVar0));
}elseif(iParam0 >=317 && iParam0 < 337){
return (33436 + ((iParam0 - 317) * iVar0));
}elseif(iParam0 >=337 && iParam0 < 347){
return (35928 + ((iParam0 - 337) * iVar0));
}elseif(iParam0 >=350 && iParam0 < 360){
return (36168 + ((iParam0 - 350) * iVar0));
}elseif(iParam0 >=363 && iParam0 <=414){
return (39444 + ((iParam0 - 363) * iVar0));
}
return 0;
}

int func_316(int iParam0, int iParam1){
int iVar0;
if((iParam0==3880 || iParam0==3881) || iParam0==3882){
if(iParam1 < 10){
iVar0=(iParam0 + iParam1 * 3);
}elseif(iParam1 < 23){
if(iParam0==3880){
iVar0=(3910 + (iParam1 - 13) * 3);
}elseif(iParam0==3881){
iVar0=(3911 + (iParam1 - 13) * 3);
}elseif(iParam0==3882){
iVar0=(3912 + (iParam1 - 13) * 3);
}}elseif(iParam1 < 36){
if(iParam0==3880){
iVar0=(3946 + (iParam1 - 26) * 3);
}elseif(iParam0==3881){
iVar0=(3947 + (iParam1 - 26) * 3);
}elseif(iParam0==3882){
iVar0=(3948 + (iParam1 - 26) * 3);
}}elseif(iParam1 < 49){
if(iParam0==3880){
iVar0=(5855 + (iParam1 - 39) * 3);
}elseif(iParam0==3881){
iVar0=(5856 + (iParam1 - 39) * 3);
}elseif(iParam0==3882){
iVar0=(5857 + (iParam1 - 39) * 3);
}}elseif(iParam1 < 62){
if(iParam0==3880){
iVar0=(7149 + (iParam1 - 52) * 3);
}elseif(iParam0==3881){
iVar0=(7150 + (iParam1 - 52) * 3);
}elseif(iParam0==3882){
iVar0=(7151 + (iParam1 - 52) * 3);
}}elseif(iParam1 < 85){
if(iParam0==3880){
iVar0=(9107 + (iParam1 - 65) * 3);
}elseif(iParam0==3881){
iVar0=(9108 + (iParam1 - 65) * 3);
}elseif(iParam0==3882){
iVar0=(9109 + (iParam1 - 65) * 3);
}}elseif(iParam1 < func_310(11)){
if(iParam0==3880){
iVar0=(14384 + (iParam1 - 88) * 3);
}elseif(iParam0==3881){
iVar0=(14385 + (iParam1 - 88) * 3);
}elseif(iParam0==3882){
iVar0=(14386 + (iParam1 - 88) * 3);
}}elseif(iParam1 <=157){
if(iParam0==3880){
iVar0=(14384 + (iParam1 - 88) * 3);
}elseif(iParam0==3881){
iVar0=(14385 + (iParam1 - 88) * 3);
}elseif(iParam0==3882){
iVar0=(14386 + (iParam1 - 88) * 3);
}}elseif(iParam1==158){
if(iParam0==3880){
iVar0=15351;
}elseif(iParam0==3881){
iVar0=15352;
}elseif(iParam0==3882){
iVar0=15353;
}}elseif(iParam1 < 184){
if(iParam0==3880){
iVar0=(17786 + (iParam1 - 159) * 3);
}elseif(iParam0==3881){
iVar0=(17787 + (iParam1 - 159) * 3);
}elseif(iParam0==3882){
iVar0=(17788 + (iParam1 - 159) * 3);
}}elseif(iParam1 < 194){
if(iParam0==3880){
iVar0=(18853 + (iParam1 - 184) * 3);
}elseif(iParam0==3881){
iVar0=(18854 + (iParam1 - 184) * 3);
}elseif(iParam0==3882){
iVar0=(18855 + (iParam1 - 184) * 3);
}}elseif(iParam1 < 231){
if(iParam0==3880){
iVar0=(21572 + (iParam1 - 194) * 3);
}elseif(iParam0==3881){
iVar0=(21573 + (iParam1 - 194) * 3);
}elseif(iParam0==3882){
iVar0=(21574 + (iParam1 - 194) * 3);
}}elseif(iParam1 < 261){
if(iParam0==3880){
iVar0=(24265 + (iParam1 - 231) * 3);
}elseif(iParam0==3881){
iVar0=(24266 + (iParam1 - 231) * 3);
}elseif(iParam0==3882){
iVar0=(24267 + (iParam1 - 231) * 3);
}}elseif(iParam1 < 271){
if(iParam0==3880){
iVar0=(26229 + (iParam1 - 261) * 3);
}elseif(iParam0==3881){
iVar0=(26230 + (iParam1 - 261) * 3);
}elseif(iParam0==3882){
iVar0=(26231 + (iParam1 - 261) * 3);
}}elseif(iParam1 < 281){
if(iParam0==3880){
iVar0=(27949 + (iParam1 - 271) * 3);
}elseif(iParam0==3881){
iVar0=(27950 + (iParam1 - 271) * 3);
}elseif(iParam0==3882){
iVar0=(27951 + (iParam1 - 271) * 3);
}}elseif(iParam1 < 291){
if(iParam0==3880){
iVar0=(29474 + (iParam1 - 281) * 3);
}elseif(iParam0==3881){
iVar0=(29475 + (iParam1 - 281) * 3);
}elseif(iParam0==3882){
iVar0=(29476 + (iParam1 - 281) * 3);
}}elseif(iParam1 < 304){
if(iParam0==3880){
iVar0=(29504 + (iParam1 - 294) * 3);
}elseif(iParam0==3881){
iVar0=(29505 + (iParam1 - 294) * 3);
}elseif(iParam0==3882){
iVar0=(29506 + (iParam1 - 294) * 3);
}}elseif(iParam1 > 306 && iParam1 < 317){
if(iParam0==3880){
iVar0=(31158 + (iParam1 - 307) * 3);
}elseif(iParam0==3881){
iVar0=(31159 + (iParam1 - 307) * 3);
}elseif(iParam0==3882){
iVar0=(31160 + (iParam1 - 307) * 3);
}}elseif(iParam1 >=317 && iParam1 < 337){
if(iParam0==3880){
iVar0=(33376 + (iParam1 - 317) * 3);
}elseif(iParam0==3881){
iVar0=(33377 + (iParam1 - 317) * 3);
}elseif(iParam0==3882){
iVar0=(33378 + (iParam1 - 317) * 3);
}}elseif(iParam1 >=337 && iParam1 < 347){
if(iParam0==3880){
iVar0=(35868 + (iParam1 - 337) * 3);
}elseif(iParam0==3881){
iVar0=(35869 + (iParam1 - 337) * 3);
}elseif(iParam0==3882){
iVar0=(35870 + (iParam1 - 337) * 3);
}}elseif(iParam1 >=350 && iParam1 < 360){
if(iParam0==3880){
iVar0=(35898 + (iParam1 - 350) * 3);
}elseif(iParam0==3881){
iVar0=(35899 + (iParam1 - 350) * 3);
}elseif(iParam0==3882){
iVar0=(35900 + (iParam1 - 350) * 3);
}}elseif(iParam1 >=363 && iParam1 <=414){
if(iParam0==3880){
iVar0=(39288 + (iParam1 - 363) * 3);
}elseif(iParam0==3881){
iVar0=(39289 + (iParam1 - 363) * 3);
}elseif(iParam0==3882){
iVar0=(39290 + (iParam1 - 363) * 3);
}}}elseif(iParam1 < 10){
iVar0=(iParam0 + (iParam1 * (1456 - 1411)));
}elseif(iParam1 >=10 && iParam1 <=12){
iVar0=((iParam1 - 10) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=1861;
}elseif(iParam0==1412){
iVar0 +=1862;
}elseif(iParam0==1441){
iVar0 +=1863;
}elseif(iParam0==1442){
iVar0 +=1864;
}elseif(iParam0==1443){
iVar0 +=1865;
}elseif(iParam0==1445){
iVar0 +=1866;
}elseif(iParam0==1447){
iVar0 +=1867;
}elseif(iParam0==1448){
iVar0 +=1868;
}elseif(iParam0==1449){
iVar0 +=1869;
}elseif(iParam0==1450){
iVar0 +=1870;
}elseif(iParam0==1451){
iVar0 +=1871;
}elseif(iParam0==1452){
iVar0 +=1872;
}elseif(iParam0==1453){
iVar0 +=1873;
}elseif(iParam0==1454){
iVar0 +=1874;
}elseif(iParam0==1455){
iVar0 +=1875;
}}elseif(iParam1 < 23){
iVar0=(1906 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 13) * (1456 - 1411)));
}elseif(iParam1 >=23 && iParam1 <=25){
iVar0=((iParam1 - 23) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=2356;
}elseif(iParam0==1412){
iVar0 +=2357;
}elseif(iParam0==1441){
iVar0 +=2358;
}elseif(iParam0==1442){
iVar0 +=2359;
}elseif(iParam0==1443){
iVar0 +=2360;
}elseif(iParam0==1445){
iVar0 +=2361;
}elseif(iParam0==1447){
iVar0 +=2362;
}elseif(iParam0==1448){
iVar0 +=2363;
}elseif(iParam0==1449){
iVar0 +=2364;
}elseif(iParam0==1450){
iVar0 +=2365;
}elseif(iParam0==1451){
iVar0 +=2366;
}elseif(iParam0==1452){
iVar0 +=2367;
}elseif(iParam0==1453){
iVar0 +=2368;
}elseif(iParam0==1454){
iVar0 +=2369;
}elseif(iParam0==1455){
iVar0 +=2370;
}}elseif(iParam1 < 36){
iVar0=(2405 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 26) * (1456 - 1411)));
}elseif(iParam1 >=36 && iParam1 <=38){
iVar0=((iParam1 - 36) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=2855;
}elseif(iParam0==1412){
iVar0 +=2856;
}elseif(iParam0==1441){
iVar0 +=2857;
}elseif(iParam0==1442){
iVar0 +=2858;
}elseif(iParam0==1443){
iVar0 +=2859;
}elseif(iParam0==1445){
iVar0 +=2860;
}elseif(iParam0==1447){
iVar0 +=2861;
}elseif(iParam0==1448){
iVar0 +=2862;
}elseif(iParam0==1449){
iVar0 +=2863;
}elseif(iParam0==1450){
iVar0 +=2864;
}elseif(iParam0==1451){
iVar0 +=2865;
}elseif(iParam0==1452){
iVar0 +=2866;
}elseif(iParam0==1453){
iVar0 +=2867;
}elseif(iParam0==1454){
iVar0 +=2868;
}elseif(iParam0==1455){
iVar0 +=2869;
}}elseif(iParam1 < 49){
iVar0=(5360 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 39) * (1456 - 1411)));
}elseif(iParam1 >=49 && iParam1 <=51){
iVar0=((iParam1 - 49) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=5810;
}elseif(iParam0==1412){
iVar0 +=5811;
}elseif(iParam0==1441){
iVar0 +=5812;
}elseif(iParam0==1442){
iVar0 +=5813;
}elseif(iParam0==1443){
iVar0 +=5814;
}elseif(iParam0==1445){
iVar0 +=5815;
}elseif(iParam0==1447){
iVar0 +=5816;
}elseif(iParam0==1448){
iVar0 +=5817;
}elseif(iParam0==1449){
iVar0 +=5818;
}elseif(iParam0==1450){
iVar0 +=5819;
}elseif(iParam0==1451){
iVar0 +=5820;
}elseif(iParam0==1452){
iVar0 +=5821;
}elseif(iParam0==1453){
iVar0 +=5822;
}elseif(iParam0==1454){
iVar0 +=5823;
}elseif(iParam0==1455){
iVar0 +=5824;
}}elseif(iParam1 < 62){
iVar0=(6654 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 52) * (1456 - 1411)));
}elseif(iParam1 >=62 && iParam1 <=64){
iVar0=((iParam1 - 62) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=7104;
}elseif(iParam0==1412){
iVar0 +=7105;
}elseif(iParam0==1441){
iVar0 +=7106;
}elseif(iParam0==1442){
iVar0 +=7107;
}elseif(iParam0==1443){
iVar0 +=7108;
}elseif(iParam0==1445){
iVar0 +=7109;
}elseif(iParam0==1447){
iVar0 +=7110;
}elseif(iParam0==1448){
iVar0 +=7111;
}elseif(iParam0==1449){
iVar0 +=7112;
}elseif(iParam0==1450){
iVar0 +=7113;
}elseif(iParam0==1451){
iVar0 +=7114;
}elseif(iParam0==1452){
iVar0 +=7115;
}elseif(iParam0==1453){
iVar0 +=7116;
}elseif(iParam0==1454){
iVar0 +=7117;
}elseif(iParam0==1455){
iVar0 +=7118;
}}elseif(iParam1 < 85){
iVar0=(8162 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 65) * (1456 - 1411)));
}elseif(iParam1 >=85 && iParam1 <=87){
iVar0=((iParam1 - 85) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=9062;
}elseif(iParam0==1412){
iVar0 +=9063;
}elseif(iParam0==1441){
iVar0 +=9064;
}elseif(iParam0==1442){
iVar0 +=9065;
}elseif(iParam0==1443){
iVar0 +=9066;
}elseif(iParam0==1445){
iVar0 +=9067;
}elseif(iParam0==1447){
iVar0 +=9068;
}elseif(iParam0==1448){
iVar0 +=9069;
}elseif(iParam0==1449){
iVar0 +=9070;
}elseif(iParam0==1450){
iVar0 +=9071;
}elseif(iParam0==1451){
iVar0 +=9072;
}elseif(iParam0==1452){
iVar0 +=9073;
}elseif(iParam0==1453){
iVar0 +=9074;
}elseif(iParam0==1454){
iVar0 +=9075;
}elseif(iParam0==1455){
iVar0 +=9076;
}}elseif(iParam1 < func_310(11)){
iVar0=(11234 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - func_310(7)) * (1456 - 1411)));
}elseif(iParam1 <=157){
iVar0=(11234 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - func_310(7)) * (1456 - 1411)));
}elseif(iParam1==158){
iVar0=(15306 - 1411);
iVar0=(iVar0 + iParam0);
}elseif(iParam1 < 184){
iVar0=(16661 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 159) * (1456 - 1411)));
}elseif(iParam1 < 194){
iVar0=(18403 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 184) * (1456 - 1411)));
}elseif(iParam1 < 231){
iVar0=(19907 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 194) * (1456 - 1411)));
}elseif(iParam1 < 261){
iVar0=(22915 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 231) * (1456 - 1411)));
}elseif(iParam1 < 271){
iVar0=(25779 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 261) * (1456 - 1411)));
}elseif(iParam1 < 281){
iVar0=(27499 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 271) * (1456 - 1411)));
}elseif(iParam1 < 291){
iVar0=(28484 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 281) * (1456 - 1411)));
}elseif(iParam1 >=291 && iParam1 <=293){
iVar0=((iParam1 - 291) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=28934;
}elseif(iParam0==1412){
iVar0 +=28935;
}elseif(iParam0==1441){
iVar0 +=28936;
}elseif(iParam0==1442){
iVar0 +=28937;
}elseif(iParam0==1443){
iVar0 +=28938;
}elseif(iParam0==1445){
iVar0 +=28939;
}elseif(iParam0==1447){
iVar0 +=28940;
}elseif(iParam0==1448){
iVar0 +=28941;
}elseif(iParam0==1449){
iVar0 +=28942;
}elseif(iParam0==1450){
iVar0 +=28943;
}elseif(iParam0==1451){
iVar0 +=28944;
}elseif(iParam0==1452){
iVar0 +=28945;
}elseif(iParam0==1453){
iVar0 +=28946;
}elseif(iParam0==1454){
iVar0 +=28947;
}elseif(iParam0==1455){
iVar0 +=28948;
}}elseif(iParam1 < 304){
iVar0=(28979 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 294) * (1456 - 1411)));
}elseif(iParam1 >=304 && iParam1 <=306){
iVar0=((iParam1 - 304) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=29429;
}elseif(iParam0==1412){
iVar0 +=29430;
}elseif(iParam0==1441){
iVar0 +=29431;
}elseif(iParam0==1442){
iVar0 +=29432;
}elseif(iParam0==1443){
iVar0 +=29433;
}elseif(iParam0==1445){
iVar0 +=29434;
}elseif(iParam0==1447){
iVar0 +=29435;
}elseif(iParam0==1448){
iVar0 +=29436;
}elseif(iParam0==1449){
iVar0 +=29437;
}elseif(iParam0==1450){
iVar0 +=29438;
}elseif(iParam0==1451){
iVar0 +=29439;
}elseif(iParam0==1452){
iVar0 +=29440;
}elseif(iParam0==1453){
iVar0 +=29441;
}elseif(iParam0==1454){
iVar0 +=29442;
}elseif(iParam0==1455){
iVar0 +=29443;
}}elseif(iParam1 > 306 && iParam1 < 317){
iVar0=(30708 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 307) * (1456 - 1411)));
}elseif(iParam1 >=317 && iParam1 < 337){
iVar0=(32476 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 317) * (1456 - 1411)));
}elseif(iParam1 < 347){
iVar0=(34878 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 337) * (1456 - 1411)));
}elseif(iParam1 >=347 && iParam1 <=349){
iVar0=((iParam1 - 347) * (1876 - 1861));
if(iParam0==1411){
iVar0=(iVar0 + 35328);
}elseif(iParam0==1412){
iVar0=(iVar0 + 35329);
}elseif(iParam0==1441){
iVar0=(iVar0 + 35330);
}elseif(iParam0==1442){
iVar0=(iVar0 + 35331);
}elseif(iParam0==1443){
iVar0=(iVar0 + 35332);
}elseif(iParam0==1445){
iVar0=(iVar0 + 35333);
}elseif(iParam0==1447){
iVar0=(iVar0 + 35334);
}elseif(iParam0==1448){
iVar0=(iVar0 + 35335);
}elseif(iParam0==1449){
iVar0=(iVar0 + 35336);
}elseif(iParam0==1450){
iVar0=(iVar0 + 35337);
}elseif(iParam0==1451){
iVar0=(iVar0 + 35338);
}elseif(iParam0==1452){
iVar0=(iVar0 + 35339);
}elseif(iParam0==1453){
iVar0=(iVar0 + 35340);
}elseif(iParam0==1454){
iVar0=(iVar0 + 35341);
}elseif(iParam0==1455){
iVar0=(iVar0 + 35342);
}}elseif(iParam1 < 360){
iVar0=(35373 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 350) * (1456 - 1411)));
}elseif(iParam1 >=360 && iParam1 <=362){
iVar0=((iParam1 - 360) * (1876 - 1861));
if(iParam0==1411){
iVar0=(iVar0 + 35823);
}elseif(iParam0==1412){
iVar0=(iVar0 + 35824);
}elseif(iParam0==1441){
iVar0=(iVar0 + 35825);
}elseif(iParam0==1442){
iVar0=(iVar0 + 35826);
}elseif(iParam0==1443){
iVar0=(iVar0 + 35827);
}elseif(iParam0==1445){
iVar0=(iVar0 + 35828);
}elseif(iParam0==1447){
iVar0=(iVar0 + 35829);
}elseif(iParam0==1448){
iVar0=(iVar0 + 35830);
}elseif(iParam0==1449){
iVar0=(iVar0 + 35831);
}elseif(iParam0==1450){
iVar0=(iVar0 + 35832);
}elseif(iParam0==1451){
iVar0=(iVar0 + 35833);
}elseif(iParam0==1452){
iVar0=(iVar0 + 35834);
}elseif(iParam0==1453){
iVar0=(iVar0 + 35835);
}elseif(iParam0==1454){
iVar0=(iVar0 + 35836);
}elseif(iParam0==1455){
iVar0=(iVar0 + 35837);
}}elseif(iParam1 >=363 && iParam1 <=414){
iVar0=(36948 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 363) * (1456 - 1411)));
}
return iVar0;
}


bool func_317(int iParam0, var uParam1){
int iVar0;
*uParam1=-1;
iVar0=0;
if(iParam0 >=0 && iParam0 <=9){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if(iParam0 >=13 && iParam0 <=22){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if(iParam0 >=26 && iParam0 <=35){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if(iParam0 >=39 && iParam0 <=48){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if(iParam0 >=52 && iParam0 <=61){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if((iParam0 >=65 && iParam0 <=74) || (iParam0 >=75 && iParam0 <=84)){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if((((iParam0 >=88 && iParam0 <=107) || (iParam0 >=108 && iParam0 <=127)) || (iParam0 >=128 && iParam0 <=147)) || (iParam0 >=148 && iParam0 <=155)){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
iVar0++;
iVar0 +=20;
if(iParam0 >=179 && iParam0 <=185){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
iVar0++;
iVar0++;
iVar0++;
if(iParam0 >=191 && iParam0 <=221){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
iVar0++;
iVar0++;
iVar0++;
if(iParam0 >=227 && iParam0 <=235){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
if(iParam0 >=237 && iParam0 <=245){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
if(iParam0 >=247 && iParam0 <=255){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
if(iParam0 >=258 && iParam0 <=267){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
if(*uParam1 >=212 || *uParam1==-1){
*uParam1=0;
return 0;
}
return *uParam1 !=-1;
}

int func_318(int iParam0, var uParam1, var uParam2){
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


void func_319(int iParam0){
Global_2359296[func_132() /*5568*/].f_681.f_2=iParam0;
}


void func_320(int iParam0, var uParam1, bool bParam2){
int iVar0;
func_329(uParam1);
if(bParam2){
uParam1->f_103=0;
uParam1->f_105=0;
StringCopy(&(uParam1->f_106), "", 64);
StringCopy(&(uParam1->f_122), "", 64);
uParam1->f_140=0;
uParam1->f_138=-1;
uParam1->f_139=-1;
uParam1->f_141=NETWORK::GET_CLOUD_TIME_AS_INT();
if(Global_262145.f_11091){
MISC::SET_BIT(&(uParam1->f_103), 22);
}}
if(func_328(iParam0, 0)){
func_327();
MISC::SET_BIT(&(uParam1->f_103), 3);
}
func_321(iParam0, uParam1);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
if(MISC::IS_BIT_SET(iVar0, 3)){
MISC::SET_BIT(&(uParam1->f_103), 2);
}}}}


void func_321(int iParam0, var uParam1){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_323(iParam0, uParam1);
MISC::CLEAR_BIT(&(uParam1->f_95), false);
if(MISC::IS_BIT_SET(uParam1->f_77, 11)){
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
iVar0=PLAYER::PLAYER_ID();
MISC::CLEAR_BIT(&(uParam1->f_95), 3);
if(!iVar0==func_37()){
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
MISC::SET_BIT(&(uParam1->f_95), true);
}else{
MISC::CLEAR_BIT(&(uParam1->f_95), true);
}
if(iVar0==PLAYER::PLAYER_ID()){
MISC::SET_BIT(&(uParam1->f_95), 2);
if(uParam1->f_94==1){
if(func_322(iParam0)){
MISC::SET_BIT(&(uParam1->f_95), 3);
}}}else{
MISC::CLEAR_BIT(&(uParam1->f_95), 2);
}}}

int func_322(int iParam0){
if(Global_2793046.f_299==iParam0){
return 1;
}
return 0;
}


void func_323(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_326(uParam1);
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
if(uParam1->f_65==-1 && !func_325(uParam1->f_66)){
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
func_318(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar0 + 1));
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

int func_324(int iParam0){
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

int func_325(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_326(var uParam0){
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


void func_327(){
int iVar0;
iVar0=0;
while (iVar0 < 415){
if(MISC::IS_BIT_SET(Global_1586468[iVar0 /*142*/].f_103, 3)){
MISC::CLEAR_BIT(&(Global_1586468[iVar0 /*142*/].f_103), 3);
}
iVar0++;
}}

int func_328(int iParam0, int iParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(iParam1==0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1")){
return 1;
}}}elseif(iParam1==1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec")){
return 1;
}}}}}
return 0;
}


void func_329(var uParam0){
func_326(uParam0);
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


void func_330(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
iVar0=0;
while (iVar0 < 39){
if(Global_2793046.f_2339[iVar0 /*44*/].f_40==iParam0){
func_330(iVar0, 0);
}
iVar0++;
}}else{
StringCopy(&(Global_2793046.f_2339[iParam0 /*44*/]), "", 24);
Global_2793046.f_2339[iParam0 /*44*/].f_6=138;
StringCopy(&(Global_2793046.f_2339[iParam0 /*44*/].f_7), "", 64);
StringCopy(&(Global_2793046.f_2339[iParam0 /*44*/].f_23), "", 64);
Global_2793046.f_2339[iParam0 /*44*/].f_39=-1;
Global_2793046.f_2339[iParam0 /*44*/].f_40=-1;
func_14(&(Global_2793046.f_2339[iParam0 /*44*/].f_41));
Global_2793046.f_2339[iParam0 /*44*/].f_43=0;
}}


void func_331(){
func_332(10);
}


void func_332(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_1836764.f_5[iVar0]), bVar1);
}


void func_333(){
Global_2672505.f_62.f_73=0;
func_334(25);
func_334(24);
}


void func_334(bool bParam0){
if(bParam0 < 32){
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_1, bParam0)){
MISC::CLEAR_BIT(&(Global_2672505.f_62.f_1), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2672505.f_62.f_2, (bParam0 - 32))){
MISC::CLEAR_BIT(&(Global_2672505.f_62.f_2), (bParam0 - 32));
}}

int func_335(var uParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!func_49(iParam1)){
return 1;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam1);
if(*uParam0==0){
if(func_123() !=-1){
return 0;
}
if(iVar0==func_45()){
iVar1=413;
iVar2=MISC::GET_HASH_KEY("VE_BRICKADE2_t2_v38");
}else{
iVar1=414;
iVar2=func_380(iVar0, 1, -1, 0);
}
iVar3=func_379(iVar1);
iVar4=iVar0;
if(func_118(78225582, -1224924353, iVar2, -897111558, 1, 0, iVar4, 4, iVar3, 3)){
if(func_336(iVar1, iParam1, 1, 0)){
if(func_112()){
*uParam0=1;
}else{
*uParam0=3;
return 1;
}}else{
*uParam0=3;
return 1;
}}else{
*uParam0=3;
return 1;
}}elseif(*uParam0==1){
iVar5=func_123();
if(iVar5 >=0 && iVar5 < 15){
if(func_107(iVar5)){
if(func_106(iVar5)==2){
*uParam0=2;
return 1;
}else{
*uParam0=3;
return 1;
}}}else{
*uParam0=3;
return 1;
}}
return 0;
}

int func_336(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
char* sVar3;
char* sVar4;
struct<4> Var5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bool bVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
var uVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
struct<4> Var22;
var uVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
bool bVar32;
int iVar33;
int iVar34;
int iVar35;
char* sVar36;
iVar10=func_378(ENTITY::GET_ENTITY_MODEL(iParam1));
if(((!Global_4540401 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <=0){
if(VEHICLE::GET_NUM_MOD_KITS(iParam1) <=0 && func_377(ENTITY::GET_ENTITY_MODEL(iParam1))){
func_376(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
if(!func_375(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6)){
return 0;
}
if(!func_375(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8)){
return 0;
}
if(!func_373(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_374(iVar0))){
return 0;
}
if(!func_375(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7)){
return 0;
}
if(!func_373(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_374(iVar1))){
return 0;
}}
return 1;
}
if(iParam0==-1){
iParam0=0;
}
bVar11=true;
if((((((((((((((iParam0==10 || iParam0==11) || iParam0==12) || iParam0==23) || iParam0==24) || iParam0==25) || iParam0==36) || iParam0==37) || iParam0==38) || iParam0==49) || iParam0==50) || iParam0==51) || iParam0==62) || iParam0==63) || iParam0==64){
bVar11=false;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
iVar12=func_371(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar13=func_369(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar14=func_365(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar15=func_364(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar16=func_363(iParam1);
if(bVar11){
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_361(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_361(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47)){
return 0;
}
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48)){
return 0;
}}
if(bVar11){
uVar17=func_360(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
if(!func_358(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_359(uVar17), 10, iVar12)){
return 0;
}}
if(bVar11){
if(!func_357(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15)){
return 0;
}
if(!func_357(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15)){
return 0;
}}
if(!func_355(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1)){
return 0;
}
if(bVar11){
iVar18=0;
switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1)){
case 0:
iVar18=0;
break;
case 3:
iVar18=1;
break;
case 2:
iVar18=2;
break;
case 1:
iVar18=3;
break;
case 4:
iVar18=4;
break;
case 5:
iVar18=5;
break;
}
if(!func_362(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23)){
return 0;
}}
if(bVar11){
iVar19=0;
switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1)){
case 3:
iVar19=0;
break;
case 0:
iVar19=1;
break;
case 4:
iVar19=2;
break;
case 2:
iVar19=3;
break;
case 1:
iVar19=4;
break;
}
if(!func_362(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23)){
return 0;
}}
if(bVar11){
if(VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23)==0){
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23)){
return 0;
}}elseif(!func_362(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23)){
return 0;
}
if(VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24)==0){
if(!func_362(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23)){
return 0;
}}elseif(!func_362(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23)){
return 0;
}}
func_376(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
iVar20=func_354(iVar9);
if(!func_362(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23)){
return 0;
}
VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
if(bParam3){
while (func_353(iVar21, &Var22, &uVar23, &iVar24, &iVar25)){
if(iVar24==iVar6 && iVar25==iVar8){
Var5={
Var22 
};
}
iVar21++;
}}
if(!func_375(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6)){
return 0;
}
if(!func_375(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8)){
return 0;
}
if(!func_373(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_374(iVar0))){
return 0;
}
if(!func_375(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7)){
return 0;
}
if(!func_373(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_374(iVar1))){
return 0;
}
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
switch (func_352(iVar26, iVar27, iVar28)){
case 1:
iVar29=3;
break;
case 2:
iVar29=4;
break;
case 3:
iVar29=5;
break;
case 4:
iVar29=6;
break;
case 5:
iVar29=11;
break;
case 6:
iVar29=7;
break;
case 7:
iVar29=10;
break;
case 8:
iVar29=8;
break;
case 9:
iVar29=12;
break;
case 10:
iVar29=13;
break;
case 11:
iVar29=-1;
break;
case 12:
iVar29=9;
break;
case 0:
if(func_48(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2"))){
iVar29=255;
break;
}
break;
}
if(bVar11){
if(!func_351(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12)){
return 0;
}}
iVar30=func_350(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2), (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0) || VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1)), VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3));
if(bVar11){
if(!func_349(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1)){
return 0;
}}
VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
iVar31=func_346(iVar26, iVar27, iVar28);
if(bVar11){
if(!func_349(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0)){
return 0;
}}
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1){
if(!func_362(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, func_345(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23)){
return 0;
}}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam1) > 1){
if(!func_362(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::GET_VEHICLE_LIVERY2(iParam1), 39, iVar14, func_345(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23)){
return 0;
}}
if(bVar11){
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1)){
if(!func_344(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12)){
return 0;
}}}
if(bVar11){
VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam1, &iVar35);
bVar32=false;
iVar33=0;
while (func_343(iVar33, &iVar34) && !bVar32){
if(iVar34==iVar35){
bVar32=true;
sVar36=func_342(iVar33);
}else{
iVar33++;
}}
if(bVar32){
func_341(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
}
VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam1, &iVar35);
bVar32=false;
iVar33=0;
while (func_340(iVar33, &iVar34) && !bVar32){
if(iVar34==iVar35){
bVar32=true;
sVar36=func_339(iVar33);
}else{
iVar33++;
}}
if(!bVar32){
if(iVar35==0){
sVar36="VEM_COLOUR_6_BLACK_t65_v3";
bVar32=true;
}elseif(iVar35==132){
sVar36="VEM_COLOUR_6_DEFAULT_t65_v3";
bVar32=true;
}}
if(bVar32){
func_341(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
}}
if(iParam2 && bVar11){
if(!func_338(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1))){
return 0;
}}elseif(bVar11){
if(!func_337(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v")){
return 0;
}}
return 1;
}
return 0;
}

int func_337(int iParam0, char* sParam1){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_338(int iParam0, char* sParam1, int iParam2){
char cVar0[64];
char cVar1[16];
char cVar2[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1)==-515263000){
return 1;
}
StringConCat(&cVar2, "VEM_INSURANCE_", 64);
StringConCat(&cVar2, &cVar1, 64);
switch (iParam2){
case joaat("dubsta2"):
case joaat("cavalcade2"):
case joaat("mesa2"):
case joaat("rapidgt2"):
case joaat("emperor2"):
case joaat("manana2"):
StringConCat(&cVar2, "2", 64);
break;
case joaat("mesa3"):
case joaat("emperor3"):
case joaat("burrito3"):
case joaat("mule3"):
StringConCat(&cVar2, "3", 64);
break;
case joaat("tornado4"):
StringConCat(&cVar2, "4", 64);
break;
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar2))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar2), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


char* func_339(int iParam0){
switch (iParam0){
case 0:
return "SILVER";
break;
case 1:
return "BLUE_SILVER";
break;
case 2:
return "ROLLED_STEEL";
break;
case 3:
return "SHADOW_SILVER";
break;
case 4:
return "WHITE";
break;
case 5:
return "FROST_WHITE";
break;
case 6:
return "CREAM";
break;
case 7:
return "SIENNA_BROWN";
break;
case 8:
return "SADDLE_BROWN";
break;
case 9:
return "MOSS_BROWN";
break;
case 10:
return "WOODBEECH_BROWN";
break;
case 11:
return "STRAW_BROWN";
break;
case 12:
return "SANDY_BROWN";
break;
case 13:
return "BLEECHED_BROWN";
break;
case 14:
return "GOLD";
break;
case 15:
return "BRONZE";
break;
case 16:
return "YELLOW";
break;
case 17:
return "RACE_YELLOW";
break;
case 18:
return "FLUR_YELLOW";
break;
case 19:
return "ORANGE";
break;
case 20:
return "BRIGHT_ORANGE";
break;
case 21:
return "SUNRISE_ORANGE";
break;
case 22:
return "RED";
break;
case 23:
return "TORINO_RED";
break;
case 24:
return "FORMULA_RED";
break;
case 25:
return "LAVA_RED";
break;
case 26:
return "BLAZE_RED";
break;
case 27:
return "GRACE_RED";
break;
case 28:
return "GARNET_RED";
break;
case 29:
return "CANDY_RED";
break;
case 30:
return "HOT PINK";
break;
case 31:
return "PINK";
break;
case 32:
return "SALMON_PINK";
break;
case 33:
return "PURPLE";
break;
case 34:
return "BRIGHT_PURPLE";
break;
case 35:
return "SAXON_BLUE";
break;
case 36:
return "BLUE";
break;
case 37:
return "MARINER_BLUE";
break;
case 38:
return "HARBOR_BLUE";
break;
case 39:
return "DIAMOND_BLUE";
break;
case 40:
return "SURF_BLUE";
break;
case 41:
return "NAUTICAL_BLUE";
break;
case 42:
return "RACING_BLUE";
break;
case 43:
return "ULTRA_BLUE";
break;
case 44:
return "LIGHT_BLUE";
break;
case 45:
return "SEA_GREEN";
break;
case 46:
return "BRIGHT_GREEN";
break;
case 47:
return "PETROL_GREEN";
break;
case 48:
return "LIME_GREEN";
break;
}
return "";
}


bool func_340(int iParam0, int iParam1){
*iParam1=-1;
switch (iParam0){
case 0:
*iParam1=4;
break;
case 1:
*iParam1=5;
break;
case 2:
*iParam1=6;
break;
case 3:
*iParam1=7;
break;
case 4:
*iParam1=111;
break;
case 5:
*iParam1=112;
break;
case 6:
*iParam1=107;
break;
case 7:
*iParam1=104;
break;
case 8:
*iParam1=98;
break;
case 9:
*iParam1=100;
break;
case 10:
*iParam1=102;
break;
case 11:
*iParam1=99;
break;
case 12:
*iParam1=105;
break;
case 13:
*iParam1=106;
break;
case 14:
*iParam1=37;
break;
case 15:
*iParam1=90;
break;
case 16:
*iParam1=88;
break;
case 17:
*iParam1=89;
break;
case 18:
*iParam1=91;
break;
case 19:
*iParam1=38;
break;
case 20:
*iParam1=138;
break;
case 21:
*iParam1=36;
break;
case 22:
*iParam1=27;
break;
case 23:
*iParam1=28;
break;
case 24:
*iParam1=29;
break;
case 25:
*iParam1=150;
break;
case 26:
*iParam1=30;
break;
case 27:
*iParam1=31;
break;
case 28:
*iParam1=32;
break;
case 29:
*iParam1=35;
break;
case 30:
*iParam1=135;
break;
case 31:
*iParam1=137;
break;
case 32:
*iParam1=136;
break;
case 33:
*iParam1=71;
break;
case 34:
*iParam1=145;
break;
case 35:
*iParam1=63;
break;
case 36:
*iParam1=64;
break;
case 37:
*iParam1=65;
break;
case 38:
*iParam1=66;
break;
case 39:
*iParam1=67;
break;
case 40:
*iParam1=68;
break;
case 41:
*iParam1=69;
break;
case 42:
*iParam1=73;
break;
case 43:
*iParam1=70;
break;
case 44:
*iParam1=74;
break;
case 45:
*iParam1=51;
break;
case 46:
*iParam1=53;
break;
case 47:
*iParam1=54;
break;
case 48:
*iParam1=92;
break;
}
return *iParam1 !=-1;
}

int func_341(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
StringCopy(&cVar1, "VEM_COLOUR_", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_", 64);
StringConCat(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam3, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


char* func_342(int iParam0){
switch (iParam0){
case 0:
return "BLACK";
break;
case 1:
return "GRAPHITE";
break;
case 2:
return "ANTHR_BLACK";
break;
case 3:
return "BLACK_STEEL";
break;
case 4:
return "DARK_SILVER";
break;
case 5:
return "BLUE_SILVER";
break;
case 6:
return "ROLLED_STEEL";
break;
case 7:
return "SHADOW_SILVER";
break;
case 8:
return "STONE_SILVER";
break;
case 9:
return "MIDNIGHT_SILVER";
break;
case 10:
return "CAST_IRON_SIL";
break;
case 11:
return "RED";
break;
case 12:
return "TORINO_RED";
break;
case 13:
return "LAVA_RED";
break;
case 14:
return "BLAZE_RED";
break;
case 15:
return "GRACE_RED";
break;
case 16:
return "GARNET_RED";
break;
case 17:
return "SUNSET_RED";
break;
case 18:
return "CABERNET_RED";
break;
case 19:
return "WINE_RED";
break;
case 20:
return "CANDY_RED";
break;
case 21:
return "PINK";
break;
case 22:
return "SALMON_PINK";
break;
case 23:
return "SUNRISE_ORANGE";
break;
case 24:
return "ORANGE";
break;
case 25:
return "BRIGHT_ORANGE";
break;
case 26:
return "BRONZE";
break;
case 27:
return "YELLOW";
break;
case 28:
return "RACE_YELLOW";
break;
case 29:
return "FLUR_YELLOW";
break;
case 30:
return "DARK_GREEN";
break;
case 31:
return "RACING_GREEN";
break;
case 32:
return "SEA_GREEN";
break;
case 33:
return "OLIVE_GREEN";
break;
case 34:
return "BRIGHT_GREEN";
break;
case 35:
return "PETROL_GREEN";
break;
case 36:
return "LIME_GREEN";
break;
case 37:
return "MIDNIGHT_BLUE";
break;
case 38:
return "GALAXY_BLUE";
break;
case 39:
return "DARK_BLUE";
break;
case 40:
return "SAXON_BLUE";
break;
case 41:
return "MARINER_BLUE";
break;
case 42:
return "HARBOR_BLUE";
break;
case 43:
return "DIAMOND_BLUE";
break;
case 44:
return "SURF_BLUE";
break;
case 45:
return "NAUTICAL_BLUE";
break;
case 46:
return "RACING_BLUE";
break;
case 47:
return "ULTRA_BLUE";
break;
case 48:
return "LIGHT_BLUE";
break;
case 49:
return "CHOCOLATE_BROWN";
break;
case 50:
return "BISON_BROWN";
break;
case 51:
return "CREEK_BROWN";
break;
case 52:
return "UMBER_BROWN";
break;
case 53:
return "MAPLE_BROWN";
break;
case 54:
return "BEECHWOOD_BROWN";
break;
case 55:
return "SIENNA_BROWN";
break;
case 56:
return "SADDLE_BROWN";
break;
case 57:
return "MOSS_BROWN";
break;
case 58:
return "WOODBEECH_BROWN";
break;
case 59:
return "STRAW_BROWN";
break;
case 60:
return "SANDY_BROWN";
break;
case 61:
return "BLEECHED_BROWN";
break;
case 62:
return "SPIN_PURPLE";
break;
case 63:
return "MIGHT_PURPLE";
break;
case 64:
return "BRIGHT_PURPLE";
break;
case 65:
return "CREAM";
break;
case 66:
return "WHITE";
break;
case 67:
return "FROST_WHITE";
break;
}
return "";
}


bool func_343(int iParam0, var uParam1){
*uParam1=-1;
switch (iParam0){
case 0:
*uParam1=0;
break;
case 1:
*uParam1=1;
break;
case 2:
*uParam1=11;
break;
case 3:
*uParam1=2;
break;
case 4:
*uParam1=3;
break;
case 5:
*uParam1=5;
break;
case 6:
*uParam1=6;
break;
case 7:
*uParam1=7;
break;
case 8:
*uParam1=8;
break;
case 9:
*uParam1=9;
break;
case 10:
*uParam1=10;
break;
case 11:
*uParam1=27;
break;
case 12:
*uParam1=28;
break;
case 13:
*uParam1=150;
break;
case 14:
*uParam1=30;
break;
case 15:
*uParam1=31;
break;
case 16:
*uParam1=32;
break;
case 17:
*uParam1=33;
break;
case 18:
*uParam1=34;
break;
case 19:
*uParam1=143;
break;
case 20:
*uParam1=35;
break;
case 21:
*uParam1=137;
break;
case 22:
*uParam1=136;
break;
case 23:
*uParam1=36;
break;
case 24:
*uParam1=38;
break;
case 25:
*uParam1=138;
break;
case 26:
*uParam1=90;
break;
case 27:
*uParam1=88;
break;
case 28:
*uParam1=89;
break;
case 29:
*uParam1=91;
break;
case 30:
*uParam1=49;
break;
case 31:
*uParam1=50;
break;
case 32:
*uParam1=51;
break;
case 33:
*uParam1=52;
break;
case 34:
*uParam1=53;
break;
case 35:
*uParam1=54;
break;
case 36:
*uParam1=92;
break;
case 37:
*uParam1=141;
break;
case 38:
*uParam1=61;
break;
case 39:
*uParam1=62;
break;
case 40:
*uParam1=63;
break;
case 41:
*uParam1=65;
break;
case 42:
*uParam1=66;
break;
case 43:
*uParam1=67;
break;
case 44:
*uParam1=68;
break;
case 45:
*uParam1=69;
break;
case 46:
*uParam1=73;
break;
case 47:
*uParam1=70;
break;
case 48:
*uParam1=74;
break;
case 49:
*uParam1=96;
break;
case 50:
*uParam1=101;
break;
case 51:
*uParam1=95;
break;
case 52:
*uParam1=94;
break;
case 53:
*uParam1=97;
break;
case 54:
*uParam1=103;
break;
case 55:
*uParam1=104;
break;
case 56:
*uParam1=98;
break;
case 57:
*uParam1=100;
break;
case 58:
*uParam1=102;
break;
case 59:
*uParam1=99;
break;
case 60:
*uParam1=105;
break;
case 61:
*uParam1=106;
break;
case 62:
*uParam1=72;
break;
case 63:
*uParam1=146;
break;
case 64:
*uParam1=145;
break;
case 65:
*uParam1=107;
break;
case 66:
*uParam1=111;
break;
case 67:
*uParam1=112;
break;
}
return *uParam1 !=-1;
}

int func_344(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam3, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam4, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_345(int iParam0){
switch (iParam0){
case joaat("windsor"):
return 1;
break;
}
return -1;
}

int func_346(int iParam0, int iParam1, int iParam2){
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
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_347()) && Global_1576216){
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 13;
}}
return 0;
}

int func_347(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_348() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_348(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_349(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_", 64);
if(iParam3==0 && !bParam6){
StringConCat(&cVar1, "255", 64);
}else{
StringIntConCat(&cVar1, iParam3, 64);
}
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_350(bool bParam0, bool bParam1, bool bParam2){
if((bParam2 && bParam1) && bParam0){
return 7;
}elseif((bParam2 && bParam1) && !bParam0){
return 6;
}elseif((!bParam2 && bParam1) && bParam0){
return 5;
}elseif((bParam2 && !bParam1) && bParam0){
return 4;
}elseif((!bParam2 && bParam1) && !bParam0){
return 3;
}elseif((bParam2 && !bParam1) && !bParam0){
return 2;
}elseif((!bParam2 && !bParam1) && bParam0){
return 1;
}
return 0;
}

int func_351(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_", 64);
if(iParam3==-1){
StringConCat(&cVar1, "PAT", 64);
}else{
StringIntConCat(&cVar1, iParam3, 64);
}
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_352(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if((iParam0==255 && iParam1==255) && iParam2==255){
return 1;
}
if((iParam0==0 && iParam1==0) && iParam2==0){
return 11;
}
if((iParam0==255 && iParam1==127) && iParam2==0){
return 6;
}
if((iParam0==252 && iParam1==238) && iParam2==0){
return 4;
}
if((iParam0==0 && iParam1==174) && iParam2==239){
return 3;
}
if((iParam0==226 && iParam1==6) && iParam2==6){
return 8;
}
if((iParam0==20 && iParam1==20) && iParam2==20){
return 2;
}
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 12;
}
if((iParam0==1 && iParam1==1) && iParam2==1){
return 0;
}
HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
if((iParam0==iVar0 && iParam1==iVar1) && iParam2==iVar2){
return 5;
}
HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
if((iParam0==iVar0 && iParam1==iVar1) && iParam2==iVar2){
return 7;
}
if(((iParam0==114 && iParam1==204) && iParam2==114) || ((iParam0==102 && iParam1==152) && iParam2==104)){
return 7;
}
HUD::GET_HUD_COLOUR(24, &iVar0, &iVar1, &iVar2, &uVar3);
if((iParam0==iVar0 && iParam1==iVar1) && iParam2==iVar2){
return 9;
}
HUD::GET_HUD_COLOUR(107, &iVar0, &iVar1, &iVar2, &uVar3);
if((iParam0==iVar0 && iParam1==iVar1) && iParam2==iVar2){
return 10;
}
return 1;
}


bool func_353(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4){
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

int func_354(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 156:
iVar0=0;
break;
case 0:
iVar0=1;
break;
case 1:
iVar0=2;
break;
case 11:
iVar0=3;
break;
case 2:
iVar0=4;
break;
case 8:
iVar0=5;
break;
case 122:
iVar0=6;
break;
case 27:
iVar0=7;
break;
case 30:
iVar0=8;
break;
case 45:
iVar0=9;
break;
case 35:
iVar0=10;
break;
case 33:
iVar0=11;
break;
case 136:
iVar0=12;
break;
case 135:
iVar0=13;
break;
case 36:
iVar0=14;
break;
case 41:
iVar0=15;
break;
case 138:
iVar0=16;
break;
case 37:
iVar0=17;
break;
case 99:
iVar0=18;
break;
case 90:
iVar0=19;
break;
case 95:
iVar0=20;
break;
case 115:
iVar0=21;
break;
case 109:
iVar0=22;
break;
case 153:
iVar0=23;
break;
case 154:
iVar0=24;
break;
case 88:
iVar0=25;
break;
case 89:
iVar0=26;
break;
case 91:
iVar0=27;
break;
case 55:
iVar0=28;
break;
case 125:
iVar0=29;
break;
case 53:
iVar0=30;
break;
case 56:
iVar0=31;
break;
case 151:
iVar0=32;
break;
case 82:
iVar0=33;
break;
case 64:
iVar0=34;
break;
case 87:
iVar0=35;
break;
case 70:
iVar0=36;
break;
case 140:
iVar0=37;
break;
case 81:
iVar0=38;
break;
case 145:
iVar0=39;
break;
case 142:
iVar0=40;
break;
}
return iVar0;
}

int func_355(int iParam0, char* sParam1, int iParam2){
char cVar0[64];
int iVar1;
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
iVar1=func_356(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iVar1)){
return 1;
}
return func_118(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_356(int iParam0){
char cVar0[32];
StringCopy(&cVar0, "VEM_", 32);
switch (iParam0){
case -1:
StringConCat(&cVar0, "MWT_INVALID", 32);
break;
case 0:
StringConCat(&cVar0, "MWT_SPORT", 32);
break;
case 1:
StringConCat(&cVar0, "MWT_MUSCLE", 32);
break;
case 2:
StringConCat(&cVar0, "MWT_LOWRIDER", 32);
break;
case 3:
StringConCat(&cVar0, "MWT_SUV", 32);
break;
case 4:
StringConCat(&cVar0, "MWT_OFFROAD", 32);
break;
case 5:
StringConCat(&cVar0, "MWT_TUNER", 32);
break;
case 6:
StringConCat(&cVar0, "MWT_BIKE", 32);
break;
case 7:
StringConCat(&cVar0, "MWT_HIEND", 32);
break;
case 8:
StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
break;
case 9:
StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
break;
case 10:
StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
break;
case 11:
StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
break;
case 12:
StringConCat(&cVar0, "MWT_SUPERMOD5", 32);
break;
}
StringConCat(&cVar0, "_t", 32);
StringIntConCat(&cVar0, iParam0, 32);
StringConCat(&cVar0, "_v0", 32);
return MISC::GET_HASH_KEY(&cVar0);
}

int func_357(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4){
char cVar0[64];
char cVar1[64];
int iVar2;
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, "VEM_", 64);
iVar2=VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
if(iVar2==-1 || (iParam3==24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))){
StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
}else{
StringConCat(&cVar1, "CMOD_WHE_0", 64);
}}else{
StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
}
StringConCat(&cVar1, "_t19_v", 64);
StringIntConCat(&cVar1, iParam4, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_358(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, "VEM_", 64);
StringConCat(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam3, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam4, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


char* func_359(var uParam0){
char* sVar0;
int iVar1;
sVar0="";
iVar1=uParam0;
switch (iVar1){
case 0:
sVar0="CMOD_HRN_0";
break;
case 1:
sVar0="HORN_INDI_1";
break;
case 2:
sVar0="HORN_INDI_2";
break;
case 3:
sVar0="HORN_INDI_3";
break;
case 4:
sVar0="HORN_INDI_4";
break;
case 5:
sVar0="HORN_HIPS1";
break;
case 6:
sVar0="HORN_HIPS2";
break;
case 7:
sVar0="HORN_HIPS3";
break;
case 8:
sVar0="HORN_HIPS4";
break;
case 9:
sVar0="HORN_CNOTE_C0";
break;
case 10:
sVar0="HORN_CNOTE_D0";
break;
case 11:
sVar0="HORN_CNOTE_E0";
break;
case 12:
sVar0="HORN_CNOTE_F0";
break;
case 13:
sVar0="HORN_CNOTE_G0";
break;
case 14:
sVar0="HORN_CNOTE_A0";
break;
case 15:
sVar0="HORN_CNOTE_B0";
break;
case 16:
sVar0="HORN_CNOTE_C1";
break;
case 17:
sVar0="HORN_CLAS1";
break;
case 18:
sVar0="HORN_CLAS2";
break;
case 19:
sVar0="HORN_CLAS3";
break;
case 20:
sVar0="HORN_CLAS4";
break;
case 21:
sVar0="HORN_CLAS5";
break;
case 22:
sVar0="HORN_CLAS6";
break;
case 23:
sVar0="HORN_CLAS7";
break;
case 24:
sVar0="HORN_LUXE1";
break;
case 25:
sVar0="HORN_LUXE2";
break;
case 26:
sVar0="HORN_LUXE3";
break;
case 30:
sVar0="HORN_LOWRDER1";
break;
case 31:
sVar0="HORN_LOWRDER2";
break;
case 34:
sVar0="HORN_HWEEN1";
break;
case 35:
sVar0="HORN_HWEEN2";
break;
case 38:
sVar0="HORN_XM15_1";
break;
case 39:
sVar0="HORN_XM15_2";
break;
case 40:
sVar0="HORN_XM15_3";
break;
case 46:
sVar0="CMOD_HRN_CLO";
break;
case 45:
sVar0="CMOD_HRN_COP";
break;
case 44:
sVar0="CMOD_HRN_TRK";
break;
case 47:
sVar0="CMOD_HRN_MUS1";
break;
case 48:
sVar0="CMOD_HRN_MUS2";
break;
case 49:
sVar0="CMOD_HRN_MUS3";
break;
case 50:
sVar0="CMOD_HRN_MUS4";
break;
case 51:
sVar0="CMOD_HRN_MUS5";
break;
case 52:
sVar0="CMOD_HRN_SAD";
break;
case 53:
sVar0="CMOD_AIRHORN_01";
break;
case 54:
sVar0="CMOD_AIRHORN_02";
break;
case 55:
sVar0="CMOD_AIRHORN_03";
break;
}
return sVar0;
}

int func_360(int iParam0){
switch (iParam0){
case joaat("indep_horn_1"):
return 1;
break;
case joaat("indep_horn_2"):
return 2;
break;
case joaat("indep_horn_3"):
return 3;
break;
case joaat("indep_horn_4"):
return 4;
break;
case joaat("hipster_horn_1"):
return 5;
break;
case joaat("hipster_horn_2"):
return 6;
break;
case joaat("hipster_horn_3"):
return 7;
break;
case joaat("hipster_horn_4"):
return 8;
break;
case joaat("dlc_busi2_c_major_notes_c0"):
return 9;
break;
case joaat("dlc_busi2_c_major_notes_d0"):
return 10;
break;
case joaat("dlc_busi2_c_major_notes_e0"):
return 11;
break;
case joaat("dlc_busi2_c_major_notes_f0"):
return 12;
break;
case joaat("dlc_busi2_c_major_notes_g0"):
return 13;
break;
case joaat("dlc_busi2_c_major_notes_a0"):
return 14;
break;
case joaat("dlc_busi2_c_major_notes_b0"):
return 15;
break;
case joaat("dlc_busi2_c_major_notes_c1"):
return 16;
break;
case joaat("musical_horn_business_1"):
return 17;
break;
case joaat("musical_horn_business_2"):
return 18;
break;
case joaat("musical_horn_business_3"):
return 19;
break;
case joaat("musical_horn_business_4"):
return 20;
break;
case joaat("musical_horn_business_5"):
return 21;
break;
case joaat("musical_horn_business_6"):
return 22;
break;
case joaat("musical_horn_business_7"):
return 23;
break;
case joaat("luxe_horn_2"):
return 24;
break;
case joaat("luxe_horn_1"):
return 25;
break;
case joaat("luxe_horn_3"):
return 26;
break;
case joaat("luxury_horn_2"):
return 27;
break;
case joaat("luxory_horn_1"):
return 28;
break;
case joaat("luxury_horn_3"):
return 29;
break;
case joaat("LOWRIDER_HORN_1"):
return 30;
break;
case joaat("LOWRIDER_HORN_2"):
return 31;
break;
case joaat("LOWRIDER_HORN_1_PREVIEW"):
return 32;
break;
case joaat("LOWRIDER_HORN_2_PREVIEW"):
return 33;
break;
case joaat("ORGAN_HORN_LOOP_01"):
return 34;
break;
case joaat("ORGAN_HORN_LOOP_02"):
return 35;
break;
case joaat("ORGAN_HORN_LOOP_01_PREVIEW"):
return 36;
break;
case joaat("ORGAN_HORN_LOOP_02_PREVIEW"):
return 37;
break;
case joaat("XM15_HORN_01"):
return 38;
break;
case joaat("XM15_HORN_02"):
return 39;
break;
case joaat("XM15_HORN_03"):
return 40;
break;
case joaat("XM15_HORN_01_PREVIEW"):
return 41;
break;
case joaat("XM15_HORN_02_PREVIEW"):
return 42;
break;
case joaat("XM15_HORN_03_PREVIEW"):
return 43;
break;
case joaat("HORN_CLOWN"):
return 46;
break;
case joaat("HORN_COP"):
return 45;
break;
case joaat("HORN_TRUCK"):
return 44;
break;
case joaat("HORN_MUSICAL_1"):
return 47;
break;
case joaat("HORN_MUSICAL_2"):
return 48;
break;
case joaat("HORN_MUSICAL_3"):
return 49;
break;
case joaat("HORN_MUSICAL_4"):
return 50;
break;
case joaat("HORN_MUSICAL_5"):
return 51;
break;
case joaat("HORN_SAD_TROMBONE"):
return 52;
break;
case joaat("dlc_aw_airhorn_01"):
return 53;
break;
case joaat("dlc_aw_airhorn_02"):
return 54;
break;
case joaat("dlc_aw_airhorn_03"):
return 55;
break;
case joaat("dlc_aw_airhorn_01_preview"):
return 56;
break;
case joaat("dlc_aw_airhorn_02_preview"):
return 57;
break;
case joaat("dlc_aw_airhorn_03_preview"):
return 58;
break;
}
return 0;
}

int func_361(bool bParam0){
if(bParam0){
return 1;
}
return 0;
}

int func_362(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
if(iParam8 !=23){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8)==0){
if((iParam8 >=0 && iParam8 < 64) && !MISC::IS_BIT_SET(Global_4540730[(iParam8 / 32)], (iParam8 % 32))){
return 1;
}}}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_", 64);
if(iParam4==33){
if(iParam3 < 0 || iParam3 > 3){
iParam3=0;
}}
StringIntConCat(&cVar1, iParam3, 64);
if(iParam6 !=-1){
StringConCat(&cVar1, "_n", 64);
StringIntConCat(&cVar1, iParam6, 64);
}
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_363(int iParam0){
int iVar0;
iVar0=-1;
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("revolter"):
case joaat("savestra"):
case joaat("comet4"):
case joaat("viseris"):
iVar0=1;
break;
case joaat("avenger"):
iVar0=2;
break;
}
return iVar0;
}

int func_364(int iParam0){
switch (iParam0){
case joaat("faction3"):
return 12;
break;
case joaat("diablous"):
return 4;
break;
case joaat("fcr"):
return 4;
break;
}
return func_378(iParam0);
}

int func_365(int iParam0){
switch (iParam0){
case joaat("btype2"):
return 9;
break;
case joaat("lurcher"):
return 8;
break;
case joaat("sultanrs"):
return 6;
break;
case joaat("banshee2"):
return 7;
break;
case joaat("btype3"):
return 5;
break;
case joaat("omnis"):
return 13;
break;
case joaat("bf400"):
return 14;
break;
case joaat("tropos"):
return 15;
break;
case joaat("brioso"):
return 16;
break;
case joaat("trophytruck"):
return 17;
break;
case joaat("trophytruck2"):
return 18;
break;
case joaat("cliffhanger"):
return 19;
break;
case joaat("tampa2"):
return 20;
break;
case joaat("gargoyle"):
return 21;
break;
case joaat("le7b"):
return 22;
break;
case joaat("lynx"):
return 24;
break;
case joaat("sheava"):
return 25;
break;
case joaat("diablous2"):
return 28;
break;
case joaat("fcr2"):
return 28;
break;
case joaat("italigtb2"):
return 27;
break;
case joaat("specter2"):
return 27;
break;
case joaat("nero2"):
return 27;
break;
case joaat("comet3"):
return 26;
break;
case joaat("elegy"):
return 26;
break;
case joaat("trailerlarge"):
return 32;
break;
case joaat("rcbandito"):
return 39;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("manana2"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
return 27;
break;
}
if(func_368(iParam0)){
return 33;
}elseif(func_367(iParam0)){
return 34;
}
if(func_366(iParam0)){
return 38;
}
return 3;
}

int func_366(int iParam0){
switch (iParam0){
case joaat("scarab"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("monster3"):
case joaat("dominator4"):
case joaat("impaler2"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("deathbike"):
case joaat("zr380"):
case joaat("slamvan4"):
case joaat("brutus"):
case joaat("imperator2"):
case joaat("imperator3"):
case joaat("deathbike3"):
case joaat("deathbike2"):
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
return 1;
default:
}
return 0;
}

int func_367(int iParam0){
switch (iParam0){
case joaat("hunter"):
case joaat("bombushka"):
case joaat("volatol"):
case joaat("akula"):
case joaat("khanjali"):
case joaat("strikeforce"):
case joaat("alkonost"):
case joaat("annihilator2"):
return 1;
break;
}
return 0;
}

int func_368(int iParam0){
switch (iParam0){
case joaat("havok"):
case joaat("microlight"):
case joaat("mogul"):
case joaat("rogue"):
case joaat("seabreeze"):
case joaat("tula"):
case joaat("pyro"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("starling"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("cuban800"):
case joaat("avenger"):
case joaat("thruster"):
case joaat("riot2"):
case joaat("chernobog"):
case joaat("volatol"):
case joaat("seasparrow"):
case joaat("seasparrow2"):
return 1;
break;
}
return 0;
}

int func_369(int iParam0){
switch (iParam0){
case joaat("virgo2"):
return 10;
break;
case joaat("slamvan3"):
return 11;
break;
}
switch (iParam0){
case joaat("sultanrs"):
return 6;
break;
case joaat("banshee2"):
return 7;
break;
}
switch (iParam0){
case joaat("btype3"):
return 5;
break;
}
switch (iParam0){
case joaat("faction3"):
return 3;
break;
case joaat("minivan2"):
return 3;
break;
case joaat("sabregt2"):
return 3;
break;
case joaat("slamvan3"):
return 3;
break;
case joaat("tornado5"):
return 3;
break;
case joaat("virgo2"):
return 3;
break;
}
switch (iParam0){
case joaat("diablous2"):
return 28;
break;
case joaat("fcr2"):
return 28;
break;
case joaat("italigtb2"):
return 27;
break;
case joaat("specter2"):
return 27;
break;
case joaat("nero2"):
return 27;
break;
case joaat("comet3"):
return 26;
break;
case joaat("elegy"):
return 26;
break;
case joaat("rcbandito"):
return 39;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("manana2"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
return 27;
break;
}
if(func_366(iParam0)){
return 38;
}
if(func_370(iParam0)){
return 38;
}
return 3;
}

int func_370(int iParam0){
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
return 1;
break;
}
return 0;
}

int func_371(int iParam0){
switch (iParam0){
case joaat("virgo2"):
return 10;
break;
case joaat("slamvan3"):
return 11;
break;
}
switch (iParam0){
case joaat("sultanrs"):
return 6;
break;
case joaat("banshee2"):
return 7;
break;
}
switch (iParam0){
case joaat("btype3"):
return 5;
break;
}
switch (iParam0){
case joaat("faction3"):
return 3;
break;
case joaat("minivan2"):
return 0;
break;
case joaat("sabregt2"):
return 0;
break;
case joaat("slamvan3"):
return 0;
break;
case joaat("tornado5"):
return 0;
break;
case joaat("virgo2"):
return 3;
break;
case joaat("virgo3"):
return 3;
break;
}
switch (iParam0){
case joaat("fcr"):
return 0;
break;
case joaat("diablous"):
return 0;
break;
case joaat("diablous2"):
return 28;
break;
case joaat("fcr2"):
return 28;
break;
case joaat("italigtb"):
return 3;
break;
case joaat("specter"):
return 3;
break;
case joaat("nero"):
return 3;
break;
case joaat("italigtb2"):
return 27;
break;
case joaat("specter2"):
return 27;
break;
case joaat("nero2"):
return 27;
break;
case joaat("comet3"):
return 26;
break;
case joaat("elegy"):
return 26;
break;
case joaat("youga3"):
return 27;
break;
case joaat("gauntlet5"):
return 27;
break;
case joaat("manana2"):
return 27;
break;
case joaat("peyote3"):
return 27;
break;
case joaat("yosemite3"):
return 27;
break;
case joaat("glendale2"):
return 27;
break;
}
switch (iParam0){
case joaat("apc"):
return 29;
break;
case joaat("halftrack"):
return 29;
break;
case joaat("trailersmall2"):
return 29;
break;
case joaat("deluxo"):
return 29;
break;
case joaat("stromberg"):
return 29;
break;
case joaat("caracara"):
return 29;
break;
case joaat("dune3"):
return 30;
break;
case joaat("insurgent3"):
return 30;
break;
case joaat("tampa3"):
return 30;
break;
case joaat("technical3"):
return 30;
break;
case joaat("oppressor"):
return 31;
break;
case joaat("oppressor2"):
return 31;
break;
case joaat("phantom3"):
return 32;
break;
case joaat("hauler2"):
return 32;
break;
case joaat("trailerlarge"):
return 32;
break;
case joaat("barrage"):
return 35;
break;
case joaat("mule4"):
return 37;
break;
case joaat("speedo4"):
return 36;
break;
case joaat("pounder2"):
return 36;
break;
case joaat("rcbandito"):
return 39;
break;
case joaat("minitank"):
return 36;
break;
case joaat("jb7002"):
return 36;
break;
}
if(func_368(iParam0)){
return 33;
}elseif(func_367(iParam0)){
return 34;
}elseif(func_366(iParam0)){
return 38;
}
switch (iParam0){
case joaat("vigilante"):
return 31;
break;
}
if(func_370(iParam0) || iParam0==joaat("brickade2")){
return 38;
}
if(func_372(iParam0)){
return 3;
}
if(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)){
return 4;
}
switch (iParam0){
case joaat("adder"):
return 3;
break;
case joaat("airbus"):
return 0;
break;
case joaat("akuma"):
return 4;
break;
case joaat("alpha"):
return 3;
break;
case joaat("annihilator"):
return 0;
break;
case joaat("asea"):
return 0;
break;
case joaat("asterope"):
return 0;
break;
case joaat("baller2"):
return 2;
break;
case joaat("banshee"):
return 3;
break;
case joaat("barracks"):
return 0;
break;
case joaat("bati"):
return 4;
break;
case joaat("bati2"):
return 4;
break;
case joaat("besra"):
return 0;
break;
case joaat("bfinjection"):
return 0;
break;
case joaat("bifta"):
return 0;
break;
case joaat("bison"):
return 2;
break;
case joaat("blade"):
return 3;
break;
case joaat("blazer"):
return 0;
break;
case joaat("blazer3"):
return 0;
break;
case joaat("bmx"):
return 0;
break;
case joaat("bobcatxl"):
return 2;
break;
case joaat("bodhi2"):
return 0;
break;
case joaat("btype"):
return 0;
break;
case joaat("buffalo"):
return 0;
break;
case joaat("buffalo2"):
return 1;
break;
case joaat("bullet"):
return 3;
break;
case joaat("bus"):
return 0;
break;
case joaat("buzzard"):
return 0;
break;
case joaat("carbonizzare"):
return 3;
break;
case joaat("carbonrs"):
return 3;
break;
case joaat("cavalcade"):
return 2;
break;
case joaat("cavalcade2"):
return 2;
break;
case joaat("cheetah"):
return 3;
break;
case joaat("coach"):
return 0;
break;
case joaat("cogcabrio"):
return 3;
break;
case joaat("comet2"):
return 3;
break;
case joaat("coquette"):
return 3;
break;
case joaat("coquette2"):
return 1;
break;
case joaat("cruiser"):
return 0;
break;
case joaat("crusader"):
return 0;
break;
case joaat("cuban800"):
return 0;
break;
case joaat("dilettante"):
return 0;
break;
case joaat("dilettante2"):
return 0;
break;
case joaat("dominator"):
return 1;
break;
case joaat("dominator2"):
return 1;
break;
case joaat("double"):
return 4;
break;
case joaat("dubsta3"):
return 3;
break;
case joaat("dump"):
return 0;
break;
case joaat("dune"):
return 0;
break;
case joaat("duster"):
return 0;
break;
case joaat("elegy2"):
return 3;
break;
case joaat("entityxf"):
return 3;
break;
case joaat("exemplar"):
return 3;
break;
case joaat("f620"):
return 1;
break;
case joaat("faggio2"):
return 4;
break;
case joaat("felon"):
return 0;
break;
case joaat("felon2"):
return 0;
break;
case joaat("feltzer2"):
return 3;
break;
case joaat("frogger"):
return 0;
break;
case joaat("frogger2"):
return 0;
break;
case joaat("fugitive"):
return 0;
break;
case joaat("fusilade"):
return 1;
break;
case joaat("gauntlet"):
return 0;
break;
case joaat("gauntlet2"):
return 0;
break;
case joaat("glendale"):
return 3;
break;
case joaat("granger"):
return 2;
break;
case joaat("gresley"):
return 2;
break;
case joaat("hexer"):
return 4;
break;
case joaat("hotknife"):
return 3;
break;
case joaat("huntley"):
return 1;
break;
case joaat("hydra"):
return 0;
break;
case joaat("infernus"):
return 3;
break;
case joaat("ingot"):
return 0;
break;
case joaat("intruder"):
return 0;
break;
case joaat("issi2"):
return 0;
break;
case joaat("jackal"):
return 1;
break;
case joaat("jb700"):
return 3;
break;
case joaat("jester"):
return 3;
break;
case joaat("jester2"):
return 3;
break;
case joaat("jetmax"):
return 0;
break;
case joaat("journey"):
return 0;
break;
case joaat("kalahari"):
return 0;
break;
case joaat("khamelion"):
return 3;
break;
case joaat("landstalker"):
return 2;
break;
case joaat("luxor"):
return 0;
break;
case joaat("mammatus"):
return 0;
break;
case joaat("marquis"):
return 0;
break;
case joaat("massacro"):
return 3;
break;
case joaat("massacro2"):
return 3;
break;
case joaat("maverick"):
return 0;
break;
case joaat("mesa"):
return 2;
break;
case joaat("mesa2"):
return 2;
break;
case joaat("mesa3"):
return 2;
break;
case joaat("miljet"):
return 0;
break;
case joaat("minivan"):
return 0;
break;
case joaat("monroe"):
return 3;
break;
case joaat("monster"):
return 0;
break;
case joaat("mule"):
return 0;
break;
case joaat("mule2"):
return 0;
break;
case joaat("mule3"):
return 0;
break;
}
switch (iParam0){
case joaat("nemesis"):
return 4;
break;
case joaat("ninef"):
return 3;
break;
case joaat("ninef2"):
return 3;
break;
case joaat("oracle"):
return 1;
break;
case joaat("oracle2"):
return 1;
break;
case joaat("panto"):
return 3;
break;
case joaat("paradise"):
return 0;
break;
case joaat("pcj"):
return 4;
break;
case joaat("penumbra"):
return 1;
break;
case joaat("picador"):
return 0;
break;
case joaat("pigalle"):
return 3;
break;
case joaat("premier"):
return 0;
break;
case joaat("primo"):
return 0;
break;
case joaat("radi"):
return 0;
break;
case joaat("rancherxl"):
return 2;
break;
case joaat("rancherxl2"):
return 2;
break;
case joaat("rapidgt"):
return 3;
break;
case joaat("ratloader"):
return 2;
break;
case joaat("ratloader2"):
return 2;
break;
case joaat("rebel"):
return 2;
break;
case joaat("rebel2"):
return 2;
break;
case joaat("regina"):
return 0;
break;
case joaat("rentalbus"):
return 0;
break;
case joaat("rhapsody"):
return 3;
break;
case joaat("rhino"):
return 0;
break;
case joaat("rocoto"):
return 2;
break;
case joaat("ruffian"):
return 4;
break;
case joaat("rumpo"):
return 0;
break;
case joaat("sadler"):
return 2;
break;
case joaat("sanchez"):
return 4;
break;
case joaat("sanchez2"):
return 4;
break;
case joaat("sandking"):
return 2;
break;
case joaat("sandking2"):
return 2;
break;
case joaat("schafter2"):
return 1;
break;
case joaat("schwarzer"):
return 1;
break;
case joaat("scorcher"):
return 0;
break;
case joaat("seashark"):
return 0;
break;
case joaat("seminole"):
return 2;
break;
case joaat("sentinel"):
return 1;
break;
case joaat("sentinel2"):
return 1;
break;
case joaat("shamal"):
return 0;
break;
case joaat("sovereign"):
return 4;
break;
case joaat("speeder"):
return 0;
break;
case joaat("squalo"):
return 0;
break;
case joaat("stanier"):
return 0;
break;
case joaat("stinger"):
return 3;
break;
case joaat("stingergt"):
return 3;
break;
case joaat("stratum"):
return 0;
break;
case joaat("stretch"):
return 0;
break;
case joaat("stunt"):
return 0;
break;
case joaat("suntrap"):
return 0;
break;
case joaat("superd"):
return 3;
break;
case joaat("surano"):
return 3;
break;
case joaat("surfer"):
return 0;
break;
case joaat("surge"):
return 0;
break;
case joaat("tailgater"):
return 0;
break;
case joaat("thrust"):
return 4;
break;
case joaat("titan"):
return 0;
break;
case joaat("tribike"):
return 4;
break;
case joaat("tribike2"):
return 4;
break;
case joaat("tribike3"):
return 4;
break;
case joaat("tropic"):
return 0;
break;
case joaat("turismor"):
return 3;
break;
case joaat("vacca"):
return 3;
break;
case joaat("vader"):
return 4;
break;
case joaat("valkyrie"):
return 0;
break;
case joaat("velum"):
return 0;
break;
case joaat("vestra"):
return 0;
break;
case joaat("vigero"):
return 1;
break;
case joaat("voltic"):
return 3;
break;
case joaat("warrener"):
return 3;
break;
case joaat("washington"):
return 0;
break;
case joaat("youga"):
return 2;
break;
case joaat("zentorno"):
return 3;
break;
case joaat("zion"):
return 1;
break;
case joaat("zion2"):
return 1;
break;
case joaat("ztype"):
return 3;
break;
case joaat("swift"):
return 0;
break;
case joaat("innovation"):
return 4;
break;
case joaat("hakuchou"):
return 4;
break;
case joaat("furoregt"):
return 0;
break;
case joaat("kuruma"):
return 3;
break;
case joaat("blista2"):
return 0;
break;
case joaat("blista3"):
return 0;
break;
case joaat("buffalo3"):
return 1;
break;
case joaat("dodo"):
return 0;
break;
case joaat("dominator"):
return 1;
break;
case joaat("dominator2"):
return 1;
break;
case joaat("dukes"):
return 1;
break;
case joaat("dukes2"):
return 0;
break;
case joaat("marshall"):
return 0;
break;
case joaat("stalion"):
return 0;
break;
case joaat("stalion2"):
return 0;
break;
case joaat("submersible"):
return 0;
break;
case joaat("submersible2"):
return 0;
break;
}
switch (iParam0){
case joaat("bagger"):
return 4;
break;
case joaat("baller"):
return 2;
break;
case joaat("bjxl"):
return 2;
break;
case joaat("blista"):
return 0;
break;
case joaat("blista2"):
return 0;
break;
case joaat("buccaneer"):
return 0;
break;
case joaat("daemon"):
return 4;
break;
case joaat("dloader"):
return 0;
break;
case joaat("fq2"):
return 0;
break;
case joaat("habanero"):
return 0;
break;
case joaat("manana"):
return 0;
break;
case joaat("patriot"):
return 2;
break;
case joaat("peyote"):
return 0;
break;
case joaat("phoenix"):
return 0;
break;
case joaat("prairie"):
return 0;
break;
case joaat("sabregt"):
return 0;
break;
case joaat("serrano"):
return 2;
break;
case joaat("speedo"):
return 0;
break;
case joaat("speedo2"):
return 0;
break;
case joaat("voodoo2"):
return 0;
break;
case joaat("romero"):
return 0;
break;
case joaat("surfer2"):
return 0;
break;
case joaat("emperor2"):
return 0;
break;
case joaat("dubsta2"):
return 2;
break;
case joaat("blazer2"):
return 0;
break;
case joaat("oracle2"):
return 1;
break;
case joaat("cavalcade2"):
return 2;
break;
case joaat("dubsta"):
return 2;
break;
case joaat("rapidgt2"):
return 1;
break;
case joaat("boxville4"):
return 0;
break;
case joaat("mesa"):
return 2;
break;
}
switch (iParam0){
case joaat("windsor"):
case joaat("osiris"):
case joaat("feltzer3"):
case joaat("virgo"):
return 3;
break;
case joaat("faction"):
case joaat("faction2"):
case joaat("moonbeam2"):
case joaat("moonbeam"):
return 3;
break;
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("primo2"):
case joaat("voodoo"):
return 0;
break;
case joaat("btype2"):
case joaat("lurcher"):
return 3;
break;
case joaat("omnis"):
case joaat("tropos"):
case joaat("brioso"):
case joaat("trophytruck"):
case joaat("trophytruck2"):
case joaat("cliffhanger"):
case joaat("bf400"):
case joaat("rallytruck"):
case joaat("tampa2"):
case joaat("gargoyle"):
case joaat("tyrus"):
case joaat("le7b"):
case joaat("lynx"):
case joaat("sheava"):
case joaat("ardent"):
case joaat("cheetah2"):
case joaat("torero"):
case joaat("vagner"):
case joaat("xa21"):
return 3;
break;
case joaat("contender"):
return 2;
break;
case joaat("tampa3"):
case joaat("apc"):
case joaat("halftrack"):
case joaat("dune3"):
case joaat("trailersmall2"):
case joaat("insurgent3"):
case joaat("technical3"):
case joaat("sentinel3"):
case joaat("riata"):
return 3;
break;
case joaat("gb200"):
case joaat("issi3"):
case joaat("swinger"):
case joaat("patriot2"):
case joaat("menacer"):
case joaat("freecrawler"):
case joaat("stafford"):
case joaat("scramjet"):
case joaat("terbyte"):
case joaat("clique"):
case joaat("deveste"):
case joaat("deviant"):
case joaat("impaler"):
case joaat("scarab"):
case joaat("schlagen"):
case joaat("toros"):
case joaat("vamos"):
case joaat("tulip"):
case joaat("monster3"):
case joaat("impaler2"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("italigto"):
case joaat("deathbike"):
case joaat("slamvan4"):
case joaat("zr380"):
case joaat("brutus"):
case joaat("lguard"):
case joaat("blazer2"):
case joaat("firetruk"):
case joaat("burrito2"):
case joaat("boxville"):
case joaat("stockade"):
case joaat("asbo"):
case joaat("kanjo"):
case joaat("formula"):
case joaat("imorgon"):
case joaat("komoda"):
case joaat("manana2"):
case joaat("rebla"):
case joaat("sugoi"):
case joaat("youga3"):
case joaat("zhaba"):
case joaat("vstr"):
case joaat("everon"):
case joaat("sultan2"):
case joaat("jb7002"):
case joaat("outlaw"):
case joaat("stryder"):
case joaat("vagrant"):
case joaat("formula2"):
case joaat("furia"):
case joaat("yosemite2"):
case joaat("retinue2"):
case joaat("minitank"):
case joaat("gauntlet5"):
case joaat("club"):
case joaat("dukes3"):
case joaat("manchez2"):
case joaat("brioso2"):
case joaat("winky"):
case joaat("verus"):
case joaat("avisa"):
case joaat("longfin"):
case joaat("patrolboat"):
case joaat("seasparrow3"):
case joaat("slamtruck"):
case joaat("vetir"):
case joaat("italirsx"):
case joaat("toreador"):
case joaat("weevil"):
case joaat("dinghy5"):
case joaat("squaddie"):
case joaat("veto"):
case joaat("veto2"):
case joaat("calico"):
case joaat("comet6"):
case joaat("cypher"):
case joaat("dominator7"):
case joaat("jester4"):
case joaat("remus"):
case joaat("vectre"):
case joaat("zr350"):
case joaat("warrener2"):
case joaat("rt3000"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
case joaat("penumbra2"):
case joaat("landstalker2"):
case joaat("seminole2"):
case joaat("tigon"):
case joaat("openwheel1"):
case joaat("coquette4"):
case joaat("openwheel2"):
case joaat("futo2"):
case joaat("tailgater2"):
case joaat("sultan3"):
case joaat("dominator8"):
case joaat("euros"):
case joaat("growler"):
case joaat("previon"):
case joaat("baller7"):
case joaat("astron"):
case joaat("comet7"):
case joaat("ignus"):
case joaat("youga4"):
case joaat("zeno"):
case joaat("cinquemila"):
case joaat("mule5"):
case joaat("iwagen"):
return 3;
break;
}
return 0;
}

int func_372(int iParam0){
switch (iParam0){
case joaat("adder"):
case joaat("banshee"):
case joaat("bullet"):
case joaat("carbonizzare"):
case joaat("carbonrs"):
case joaat("cheetah"):
case joaat("cogcabrio"):
case joaat("comet2"):
case joaat("coquette"):
case joaat("elegy2"):
case joaat("entityxf"):
case joaat("exemplar"):
case joaat("feltzer2"):
case joaat("hotknife"):
case joaat("infernus"):
case joaat("jb700"):
case joaat("khamelion"):
case joaat("monroe"):
case joaat("ninef"):
case joaat("ninef2"):
case joaat("rapidgt"):
case joaat("rapidgt2"):
case joaat("stinger"):
case joaat("stingergt"):
case joaat("superd"):
case joaat("surano"):
case joaat("vacca"):
case joaat("voltic"):
case joaat("ztype"):
case joaat("dubsta3"):
case joaat("blade"):
case joaat("glendale"):
case joaat("rhapsody"):
case joaat("warrener"):
case joaat("panto"):
case joaat("pigalle"):
case joaat("casco"):
case joaat("kuruma2"):
case joaat("lectro"):
case joaat("insurgent"):
case joaat("insurgent2"):
case joaat("technical"):
return 1;
break;
case joaat("windsor"):
case joaat("osiris"):
case joaat("feltzer3"):
case joaat("virgo"):
return 1;
break;
case joaat("faction"):
case joaat("faction2"):
case joaat("moonbeam"):
case joaat("moonbeam2"):
return 1;
break;
case joaat("faction3"):
case joaat("virgo2"):
return 1;
break;
case joaat("baller3"):
case joaat("baller4"):
case joaat("cognoscenti"):
case joaat("cog55"):
case joaat("limo2"):
case joaat("mamba"):
case joaat("nightshade"):
case joaat("schafter3"):
case joaat("schafter4"):
case joaat("verlierer2"):
return 1;
break;
case joaat("tampa"):
return 1;
break;
case joaat("banshee2"):
return 1;
break;
case joaat("bestiagts"):
case joaat("brickade"):
case joaat("fmj"):
case joaat("nimbus"):
case joaat("pfister811"):
case joaat("prototipo"):
case joaat("rumpo3"):
case joaat("seven70"):
case joaat("tug"):
case joaat("volatus"):
case joaat("windsor2"):
case joaat("xls"):
case joaat("xls2"):
case joaat("reaper"):
return 1;
break;
case joaat("omnis"):
case joaat("tropos"):
case joaat("brioso"):
case joaat("trophytruck"):
case joaat("trophytruck2"):
case joaat("cliffhanger"):
case joaat("bf400"):
case joaat("rallytruck"):
case joaat("tampa2"):
case joaat("gargoyle"):
case joaat("tyrus"):
case joaat("le7b"):
case joaat("lynx"):
case joaat("sheava"):
return 1;
break;
case joaat("avarus"):
case joaat("defiler"):
case joaat("nightblade"):
case joaat("zombiea"):
case joaat("zombieb"):
case joaat("chimera"):
case joaat("esskey"):
case joaat("ratbike"):
case joaat("hakuchou2"):
case joaat("daemon2"):
case joaat("shotaro"):
case joaat("raptor"):
case joaat("blazer4"):
case joaat("sanctus"):
case joaat("vortex"):
case joaat("manchez"):
case joaat("tornado6"):
case joaat("youga2"):
case joaat("wolfsbane"):
case joaat("faggio3"):
case joaat("faggio"):
return 1;
break;
case joaat("blazer5"):
case joaat("boxville5"):
case joaat("comet3"):
case joaat("diablous"):
case joaat("diablous2"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("fcr"):
case joaat("fcr2"):
case joaat("italigtb"):
case joaat("nero"):
case joaat("penetrator"):
case joaat("phantom2"):
case joaat("ruiner2"):
case joaat("technical2"):
case joaat("tempesta"):
case joaat("voltic2"):
case joaat("wastelander"):
case joaat("elegy"):
case joaat("italigtb2"):
case joaat("nero2"):
case joaat("ruiner3"):
case joaat("specter"):
case joaat("specter2"):
return 1;
break;
case joaat("gp1"):
case joaat("ruston"):
case joaat("infernus2"):
case joaat("turismo2"):
return 1;
break;
case joaat("ardent"):
case joaat("vagner"):
case joaat("cheetah2"):
case joaat("nightshark"):
case joaat("torero"):
case joaat("xa21"):
case joaat("tampa3"):
case joaat("apc"):
case joaat("halftrack"):
case joaat("dune3"):
case joaat("trailersmall2"):
case joaat("insurgent3"):
case joaat("technical3"):
case joaat("phantom3"):
case joaat("hauler2"):
return 1;
break;
case joaat("cyclone"):
case joaat("rapidgt3"):
case joaat("retinue"):
case joaat("visione"):
case joaat("vigilante"):
return 1;
break;
case joaat("deluxo"):
case joaat("stromberg"):
case joaat("riot2"):
case joaat("chernobog"):
case joaat("khanjali"):
case joaat("akula"):
case joaat("thruster"):
case joaat("avenger"):
case joaat("barrage"):
case joaat("volatol"):
case joaat("comet4"):
case joaat("neon"):
case joaat("streiter"):
case joaat("sentinel3"):
case joaat("yosemite"):
case joaat("sc1"):
case joaat("autarch"):
case joaat("gt500"):
case joaat("hustler"):
case joaat("revolter"):
case joaat("pariah"):
case joaat("raiden"):
case joaat("savestra"):
case joaat("riata"):
case joaat("hermes"):
case joaat("comet5"):
case joaat("z190"):
case joaat("viseris"):
case joaat("kamacho"):
return 1;
break;
}
switch (iParam0){
case joaat("gb200"):
case joaat("issi3"):
case joaat("ellie"):
case joaat("fagaloa"):
case joaat("michelli"):
case joaat("flashgt"):
case joaat("hotring"):
case joaat("tezeract"):
case joaat("tyrant"):
case joaat("dominator3"):
case joaat("taipan"):
case joaat("entity2"):
case joaat("jester3"):
case joaat("cheburek"):
case joaat("caracara"):
case joaat("seasparrow"):
case joaat("clique"):
case joaat("deveste"):
case joaat("deviant"):
case joaat("impaler"):
case joaat("scarab"):
case joaat("schlagen"):
case joaat("toros"):
case joaat("vamos"):
case joaat("tulip"):
case joaat("monster3"):
case joaat("impaler2"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("italigto"):
case joaat("deathbike"):
case joaat("slamvan4"):
case joaat("brutus"):
case joaat("imperator2"):
case joaat("imperator3"):
case joaat("deathbike3"):
case joaat("deathbike2"):
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
case joaat("rcbandito"):
case joaat("caracara2"):
case joaat("drafter"):
case joaat("dynasty"):
case joaat("gauntlet3"):
case joaat("gauntlet4"):
case joaat("hellion"):
case joaat("issi7"):
case joaat("krieger"):
case joaat("locust"):
case joaat("nebula"):
case joaat("neo"):
case joaat("novak"):
case joaat("s80"):
case joaat("thrax"):
case joaat("zion3"):
case joaat("zorrusso"):
case joaat("emerus"):
case joaat("peyote2"):
case joaat("rrocket"):
case joaat("jugular"):
case joaat("paragon"):
case joaat("paragon2"):
case joaat("slamvan2"):
case joaat("asbo"):
case joaat("kanjo"):
case joaat("formula"):
case joaat("imorgon"):
case joaat("komoda"):
case joaat("manana2"):
case joaat("rebla"):
case joaat("sugoi"):
case joaat("youga3"):
case joaat("zhaba"):
case joaat("vstr"):
case joaat("everon"):
case joaat("sultan2"):
case joaat("jb7002"):
case joaat("outlaw"):
case joaat("stryder"):
case joaat("vagrant"):
case joaat("formula2"):
case joaat("minitank"):
case joaat("gauntlet5"):
case joaat("dukes3"):
case joaat("club"):
case joaat("peyote3"):
case joaat("glendale2"):
case joaat("penumbra2"):
case joaat("landstalker2"):
case joaat("seminole2"):
case joaat("tigon"):
case joaat("openwheel1"):
case joaat("coquette4"):
case joaat("openwheel2"):
case joaat("manchez2"):
case joaat("brioso2"):
case joaat("winky"):
case joaat("verus"):
case joaat("alkonost"):
case joaat("avisa"):
case joaat("longfin"):
case joaat("patrolboat"):
case joaat("seasparrow2"):
case joaat("seasparrow3"):
case joaat("slamtruck"):
case joaat("vetir"):
case joaat("kosatka"):
case joaat("italirsx"):
case joaat("toreador"):
case joaat("weevil"):
case joaat("dinghy5"):
case joaat("annihilator2"):
case joaat("squaddie"):
case joaat("veto"):
case joaat("veto2"):
case joaat("calico"):
case joaat("comet6"):
case joaat("cypher"):
case joaat("dominator7"):
case joaat("jester4"):
case joaat("remus"):
case joaat("vectre"):
case joaat("zr350"):
case joaat("warrener2"):
case joaat("rt3000"):
case joaat("futo2"):
case joaat("tailgater2"):
case joaat("sultan3"):
case joaat("dominator8"):
case joaat("euros"):
case joaat("growler"):
case joaat("previon"):
case joaat("baller7"):
case joaat("astron"):
case joaat("buffalo4"):
case joaat("comet7"):
case joaat("deity"):
case joaat("granger2"):
case joaat("ignus"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("youga4"):
case joaat("zeno"):
case joaat("mule5"):
case joaat("champion"):
case joaat("iwagen"):
case joaat("reever"):
case joaat("shinobi"):
return 1;
break;
}
switch (iParam0){
case joaat("brioso3"):
case joaat("corsita"):
case joaat("draugur"):
case joaat("greenwood"):
case joaat("kanjosj"):
case joaat("lm87"):
case joaat("postlude"):
case joaat("rhinehart"):
case joaat("sm722"):
case joaat("tenf"):
case joaat("tenf2"):
case joaat("torero2"):
case joaat("vigero2"):
case joaat("weevil2"):
case joaat("ruiner4"):
case joaat("sentinel4"):
case joaat("conada"):
case joaat("omnisegt"):
case joaat("eudora"):
case joaat("surfer3"):
case joaat("journey2"):
case joaat("entity3"):
case joaat("panthere"):
case joaat("boor"):
case joaat("everon2"):
case joaat("tulip2"):
case joaat("issi8"):
case joaat("broadway"):
case joaat("tahoma"):
return 1;
break;
}
return 0;
}

int func_373(int iParam0, char* sParam1, int iParam2){
char cVar0[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iParam2)){
return 1;
}
return func_118(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_374(int iParam0){
char cVar0[32];
StringCopy(&cVar0, "VEM_", 32);
switch (iParam0){
case 0:
StringConCat(&cVar0, "MCT_METALLIC", 32);
break;
case 1:
StringConCat(&cVar0, "MCT_CLASSIC", 32);
break;
case 2:
StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
break;
case 3:
StringConCat(&cVar0, "MCT_MATTE", 32);
break;
case 4:
StringConCat(&cVar0, "MCT_METALS", 32);
break;
case 5:
StringConCat(&cVar0, "MCT_CHROME", 32);
break;
case 7:
StringConCat(&cVar0, "MCT_INVALID", 32);
iParam0=255;
break;
}
StringConCat(&cVar0, "_t", 32);
StringIntConCat(&cVar0, iParam0, 32);
StringConCat(&cVar0, "_v0", 32);
return MISC::GET_HASH_KEY(&cVar0);
}

int func_375(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringConCat(&cVar1, "VEM_", 64);
if(iParam3==1){
StringConCat(&cVar1, "COLOUR_1_", 64);
}elseif(iParam3==2){
StringConCat(&cVar1, "COLOUR_2_", 64);
}elseif(iParam3==3){
StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
}
if(iParam6==5){
StringConCat(&cVar1, "MCT_CHROME_", 64);
}elseif(iParam6==1){
StringConCat(&cVar1, "MCT_CLASSIC_", 64);
}elseif(iParam6==0){
StringConCat(&cVar1, "MCT_METALLIC_", 64);
}elseif(iParam6==4){
StringConCat(&cVar1, "MCT_METALS_", 64);
}elseif(iParam6==3){
StringConCat(&cVar1, "MCT_MATTE_", 64);
}elseif(iParam6==2){
StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
}elseif(iParam6==7){
StringConCat(&cVar1, "MCT_NONE_", 64);
}
StringConCat(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
if(iParam6==7){
StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
StringIntConCat(&cVar1, iParam7, 64);
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_118(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


void func_376(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, bool bParam11){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
var uVar9;
VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, uParam10);
StringCopy(sParam2, "", 16);
StringCopy(sParam5, "", 16);
StringCopy(sParam8, "", 16);
if(bParam11){
VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &uVar2);
VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
}
if(bParam11){
iVar3=0;
while (iVar3 !=7){
iVar5=VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
iVar4=0;
while (iVar4 < iVar5){
VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, uVar2);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
if(iVar6==*iParam3){
*iParam1=iVar3;
StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, 0), 16);
iVar4=iVar5 + 1;
}
iVar4++;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
iVar3++;
}else{
iVar3=7;
}}}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
*iParam1=7;
IntToString(sParam2, *iParam3, 16);
}
if(bParam11){
iVar4=0;
iVar5=VEHICLE::GET_NUM_MOD_COLORS(0, 1);
iVar4=0;
while (iVar4 < iVar5){
VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
if(iVar8==*iParam9){
StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, 0), 16);
iVar4=iVar5 + 1;
}
iVar4++;
}}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
IntToString(sParam8, *iParam9, 16);
*iParam7=7;
}else{
*iParam7=*iParam1;
}
if(bParam11){
iVar3=0;
while (iVar3 !=7){
iVar4=0;
iVar5=VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
iVar4=0;
while (iVar4 < iVar5){
VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
if(iVar7==*iParam6){
*iParam4=iVar3;
StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
iVar4=iVar5 + 1;
}
iVar4++;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
iVar3++;
}else{
iVar3=7;
}}}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
*iParam4=7;
IntToString(sParam5, *iParam6, 16);
}
VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *uParam10);
}

int func_377(int iParam0){
if(iParam0==joaat("bmx")){
return 1;
}
if(iParam0==joaat("cruiser")){
return 1;
}
if(iParam0==joaat("scorcher")){
return 1;
}
if((iParam0==joaat("tribike") || iParam0==joaat("tribike2")) || iParam0==joaat("tribike3")){
return 1;
}
if(iParam0==joaat("fixter")){
return 1;
}
return 0;
}

int func_378(int iParam0){
switch (iParam0){
case joaat("faction2"):
case joaat("moonbeam2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("primo2"):
case joaat("voodoo"):
case joaat("sultanrs"):
case joaat("banshee2"):
case joaat("btype3"):
case joaat("faction3"):
case joaat("minivan2"):
case joaat("sabregt2"):
case joaat("slamvan3"):
case joaat("tornado5"):
case joaat("virgo2"):
case joaat("diablous2"):
case joaat("fcr2"):
case joaat("italigtb2"):
case joaat("specter2"):
case joaat("nero2"):
case joaat("comet3"):
case joaat("elegy"):
case joaat("apc"):
case joaat("halftrack"):
case joaat("trailersmall2"):
case joaat("dune3"):
case joaat("insurgent3"):
case joaat("tampa3"):
case joaat("technical3"):
case joaat("oppressor"):
case joaat("trailerlarge"):
case joaat("hauler2"):
case joaat("phantom3"):
case joaat("bombushka"):
case joaat("hunter"):
case joaat("microlight"):
case joaat("rogue"):
case joaat("tula"):
case joaat("havok"):
case joaat("mogul"):
case joaat("starling"):
case joaat("seabreeze"):
case joaat("cyclone"):
case joaat("visione"):
case joaat("vigilante"):
case joaat("rapidgt3"):
case joaat("retinue"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("pyro"):
case joaat("cuban800"):
case joaat("akula"):
case joaat("volatol"):
case joaat("avenger"):
case joaat("barrage"):
case joaat("chernobog"):
case joaat("deluxo"):
case joaat("khanjali"):
case joaat("riot2"):
case joaat("stromberg"):
case joaat("thruster"):
case joaat("caracara"):
case joaat("seasparrow"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("speedo4"):
case joaat("oppressor2"):
case joaat("strikeforce"):
case joaat("clique"):
case joaat("deveste"):
case joaat("deviant"):
case joaat("impaler"):
case joaat("scarab"):
case joaat("schlagen"):
case joaat("toros"):
case joaat("vamos"):
case joaat("tulip"):
case joaat("monster3"):
case joaat("impaler2"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("italigto"):
case joaat("deathbike"):
case joaat("slamvan4"):
case joaat("zr380"):
case joaat("brutus"):
case joaat("rcbandito"):
case joaat("jb7002"):
case joaat("minitank"):
case joaat("formula"):
case joaat("formula2"):
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("manana2"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
case joaat("seasparrow2"):
case joaat("alkonost"):
case joaat("annihilator2"):
case joaat("sultan3"):
case joaat("buffalo4"):
case joaat("deity"):
case joaat("jubilee"):
case joaat("granger2"):
case joaat("patriot3"):
case joaat("champion"):
case joaat("weevil2"):
case joaat("tenf2"):
case joaat("brioso3"):
case joaat("sentinel4"):
case joaat("manchez3"):
case joaat("brickade2"):
case joaat("eudora"):
case joaat("powersurge"):
case joaat("surfer3"):
case joaat("journey2"):
case joaat("panthere"):
case joaat("broadway"):
case joaat("issi8"):
return 3;
break;
}
if(func_366(iParam0)){
return 3;
}
if(func_370(iParam0)){
return 3;
}
return func_371(iParam0);
}

int func_379(int iParam0){
char cVar0[64];
if(iParam0==-1){
iParam0=0;
}
switch (iParam0){
case 0:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
break;
case 1:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
break;
case 2:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
break;
case 3:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
break;
case 4:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
break;
case 5:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
break;
case 6:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
break;
case 7:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
break;
case 8:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
break;
case 9:
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
break;
}
if(iParam0 >=10){
StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
StringIntConCat(&cVar0, iParam0, 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
return -1;
}
return MISC::GET_HASH_KEY(&cVar0);
}

int func_380(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
struct<4> Var1;
char* sVar2;
iVar0=func_371(iParam0);
StringCopy(&Var1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
if(bParam1){
func_381(&sVar2, Var1, iParam0, 4, 1, iVar0, iParam2, -1, 0, bParam3);
}else{
func_381(&sVar2, Var1, iParam0, 4, 0, iVar0, iParam2, -1, 0, bParam3);
}
return MISC::GET_HASH_KEY(&sVar2);
}


void func_381(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11){
switch (MISC::GET_HASH_KEY(&cParam1)){
case 64715401:
case joaat("GSA_TYPE_R"):
StringCopy(&cParam1, "GSA_TYPE_R", 16);
break;
case -414529079:
case joaat("GSA_TYPE_C"):
StringCopy(&cParam1, "GSA_TYPE_C", 16);
break;
case 336264847:
case joaat("GSA_TYPE_RO"):
StringCopy(&cParam1, "GSA_TYPE_RO", 16);
break;
case 531395379:
case joaat("GSA_TYPE_CH"):
StringCopy(&cParam1, "GSA_TYPE_CH", 16);
break;
case 1034118160:
case joaat("GSA_TYPE_G"):
StringCopy(&cParam1, "GSA_TYPE_G", 16);
break;
case -218834291:
case joaat("GSA_TYPE_B"):
StringCopy(&cParam1, "GSA_TYPE_B", 16);
break;
case 1779531303:
case joaat("GSA_TYPE_FW"):
StringCopy(&cParam1, "GSA_TYPE_FW", 16);
break;
}
StringCopy(sParam0, "", 64);
switch (iParam5){
case 0:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_HA_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
break;
case 1:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_CL_", 64);
if(iParam6==12){
StringConCat(sParam0, "OUTFIT_", 64);
}
StringConCat(sParam0, &cParam1, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam9 !=-1){
StringConCat(sParam0, "_p", 64);
StringIntConCat(sParam0, iParam9, 64);
}
break;
case 2:
if(iParam4==joaat("mp_m_freemode_01")){
StringCopy(sParam0, "M", 64);
}elseif(iParam4==joaat("mp_f_freemode_01")){
StringCopy(sParam0, "F", 64);
}
StringConCat(sParam0, "_TA_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
break;
case 3:
StringConCat(sParam0, "WP_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
break;
case 4:
if(iParam4==Global_75654){
StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
}elseif(iParam4==Global_75655){
StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
}elseif(iParam4==Global_75656){
StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
}elseif(iParam4==Global_75657){
StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
}elseif(iParam4==Global_75658){
StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
}elseif(iParam4==joaat("kosatka")){
StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
}elseif(iParam4==func_45()){
if(iParam6==40){
StringCopy(sParam0, "VEU_BRICKADE2_t0_v0", 64);
}elseif(iParam6==2){
StringCopy(sParam0, "VE_BRICKADE2_t2_v38", 64);
}elseif(iParam6==1){
StringCopy(sParam0, "VE_BRICKADE2_t1_v38", 64);
}else{
StringCopy(sParam0, "VE_BRICKADE2_t0_v38", 64);
}}elseif(iParam4==joaat("manchez3")){
if(iParam6==1){
StringCopy(sParam0, "VE_MANCHEZ3_t1_v4", 64);
}else{
StringCopy(sParam0, "VE_MANCHEZ3_t0_v4", 64);
}}elseif(iParam4==0){
StringConCat(sParam0, "VEM_", 64);
if(iParam6==24 || iParam6==25){
if(iParam8==1){
StringConCat(sParam0, "COLOUR_1_", 64);
}elseif(iParam8==2){
StringConCat(sParam0, "COLOUR_2_", 64);
}elseif(iParam8==3){
StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
}
if(iParam9==5){
StringConCat(sParam0, "MCT_CHROME_", 64);
}elseif(iParam9==1){
StringConCat(sParam0, "MCT_CLASSIC_", 64);
}elseif(iParam9==0){
StringConCat(sParam0, "MCT_METALLIC_", 64);
}elseif(iParam9==4){
StringConCat(sParam0, "MCT_METALS_", 64);
}elseif(iParam9==3){
StringConCat(sParam0, "MCT_MATTE_", 64);
}elseif(iParam9==2){
StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
}elseif(iParam9==7){
StringConCat(sParam0, "MCT_NONE_", 64);
}
iParam8=-1;
}elseif(iParam6==38){
StringConCat(sParam0, "COLOUR_5_", 64);
}elseif(iParam6==65){
StringConCat(sParam0, "COLOUR_6_", 64);
}
StringConCat(sParam0, &cParam1, 64);
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
}elseif(iParam6==22){
StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1)==-515263000){
return;
}
StringConCat(sParam0, "VEM_INSURANCE_", 64);
StringConCat(sParam0, &cParam1, 64);
if(!bParam10){
switch (iParam4){
case joaat("dubsta2"):
case joaat("cavalcade2"):
case joaat("mesa2"):
case joaat("rapidgt2"):
case joaat("emperor2"):
case joaat("cargobob2"):
StringConCat(sParam0, "2", 64);
break;
case joaat("mesa3"):
case joaat("emperor3"):
case joaat("burrito3"):
case joaat("mule3"):
StringConCat(sParam0, "3", 64);
break;
case joaat("tornado4"):
StringConCat(sParam0, "4", 64);
break;
}}}elseif(iParam6==40){
switch (iParam4){
case joaat("fcr2"):
StringCopy(&cParam1, "FCR2", 16);
break;
case joaat("diablous2"):
StringCopy(&cParam1, "DIABLOUS2", 16);
break;
case joaat("comet3"):
StringCopy(&cParam1, "COMET3", 16);
break;
default:
StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cParam1)){
return;
}
break;
}
StringConCat(sParam0, "VEU_", 64);
StringConCat(sParam0, &cParam1, 64);
StringConCat(sParam0, "_t0_v", 64);
StringIntConCat(sParam0, iParam7, 64);
}else{
StringConCat(sParam0, "VE_", 64);
StringConCat(sParam0, &cParam1, 64);
if(!bParam10){
switch (iParam4){
case joaat("dubsta2"):
case joaat("cavalcade2"):
case joaat("mesa2"):
case joaat("rapidgt2"):
case joaat("emperor2"):
case joaat("cargobob2"):
StringConCat(sParam0, "2", 64);
break;
case joaat("mesa3"):
case joaat("emperor3"):
case joaat("burrito3"):
case joaat("mule3"):
StringConCat(sParam0, "3", 64);
break;
case joaat("tornado4"):
StringConCat(sParam0, "4", 64);
break;
}}
if(iParam8 !=-1){
StringConCat(sParam0, "_n", 64);
StringIntConCat(sParam0, iParam8, 64);
}
StringConCat(sParam0, "_t", 64);
StringIntConCat(sParam0, iParam6, 64);
StringConCat(sParam0, "_v", 64);
StringIntConCat(sParam0, iParam7, 64);
if(iParam9 !=-1){
StringConCat(sParam0, "_p", 64);
StringIntConCat(sParam0, iParam9, 64);
}}
break;
}
if(bParam11){
StringConCat(sParam0, "_CESP", 64);
}}

int func_382(var uParam0, var uParam1){
struct<3> Var0;
STREAMING::REQUEST_MODEL(uParam0->f_66);
if(!STREAMING::HAS_MODEL_LOADED(uParam0->f_66)){
return 0;
}
if(!func_49(PLAYER::PLAYER_PED_ID())){
return 0;
}
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
*uParam1=VEHICLE::CREATE_VEHICLE(uParam0->f_66, Var0.f_0, Var0.f_1, (Var0.f_2 + 200f), 0f, 0, 0, 0);
func_383(*uParam1, uParam0, 1, 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(*uParam1, 1);
ENTITY::SET_ENTITY_VISIBLE(*uParam1, 0, 0);
ENTITY::SET_ENTITY_COLLISION(*uParam1, 0, 0);
return 1;
}


void func_383(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
float fVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(PLAYER::PLAYER_ID() !=func_37()){
uParam1->f_100=PLAYER::PLAYER_ID();
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
func_396(iParam0, uParam1, bParam2, bParam3);
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
if(func_370(ENTITY::GET_ENTITY_MODEL(iParam0))){
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
if(func_395(uParam1->f_66, &fVar1) && uParam1->f_80 !=fVar1){
uParam1->f_80=fVar1;
}
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
if(uParam1->f_99 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
}
if(func_394(iParam0)){
func_392(iParam0, func_346(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >=0){
VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
}
if((!func_387(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
}
if(func_386(iVar0)){
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
if(func_385(ENTITY::GET_ENTITY_MODEL(iParam0))){
switch (uParam1->f_9[5]){
case 1:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
VEHICLE::SET_VEHICLE_STRONG(iParam0, 1);
if(uParam1->f_9[16]==5){
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21747 + 0.05f));
}
else{
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21747);
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
if(func_384(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))){
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


bool func_384(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


bool func_385(int iParam0){
return func_370(iParam0);
}

int func_386(int iParam0){
switch (iParam0){
case joaat("pounder2"):
case joaat("mule4"):
case joaat("speedo4"):
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

int func_387(int iParam0){
int iVar0;
if(func_414()){
iVar0=0;
while (iVar0 < 60){
if(func_391(iVar0)==iParam0){
if(func_388(iVar0)){
return 1;
}}
iVar0++;
}}
return 0;
}


bool func_388(int iParam0){
return func_389(iParam0, 6, 1);
}

int func_389(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Global_32163==0){
return MISC::IS_BIT_SET(func_41(func_390(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_390(int iParam0){
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
return 12385;
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
default:
break;
}
return 14192;
}

int func_391(int iParam0){
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
}
return 6;
}


void func_392(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_393(iParam1);
func_340(iVar1, &uVar0);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(uParam0, uVar0);
}

int func_393(int iParam0){
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

int func_394(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(uParam0)){
case joaat("deathbike2"):
return 1;
break;
}
return 0;
}


bool func_395(int iParam0, var uParam1){
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


void func_396(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_406(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_324(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar6));
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
VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
}
if(uParam1->f_7 < 0){
uParam1->f_7=0;
}
if(uParam1->f_8 < 0){
uParam1->f_8=0;
}
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
if((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_405(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_325(uParam1->f_66)){
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
func_404(iParam0, uParam1->f_69);
}}else{
func_404(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_401(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar7 + 1))){
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
if(((func_397() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
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

int func_397(){
if((((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19) && Global_4718592.f_2==20){
return 0;
}
if(func_399(7)){
if(func_251(Global_2672505.f_4.f_16) || func_398(Global_2672505.f_4.f_16)){
return 0;
}}
return 1;
}

int func_398(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}


bool func_399(int iParam0){
return func_400(&(Global_2672505.f_184), iParam0);
}


var func__400(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_401(var uParam0, var uParam1, var uParam2){
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
}else{
VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
func_403(uParam0);
if(func_402(*uParam0)){
VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
}
return 1;
}

int func_402(int iParam0){
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


void func_403(var uParam0){
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


void func_404(int iParam0, var uParam1){
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

int func_405(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(iVar0, 4);
}}}
return 0;
}

int func_406(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_410(PLAYER::PLAYER_ID(), -1)){
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
if(func_408(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_407(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_407(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(uParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_408(int iParam0){
if(func_189(iParam0)==233){
return func_409(iParam0);
}
return -1;
}

int func_409(int iParam0){
if(func_190(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_410(int iParam0, int iParam1){
var uVar0;
if(func_36(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}


void func_411(var uParam0){
uParam0->f_5=3;
uParam0->f_6=6;
uParam0->f_7=2;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_9[48]=2;
MISC::SET_BIT(&(uParam0->f_77), 9);
}


void func_412(var uParam0){
uParam0->f_5=9;
uParam0->f_6=9;
uParam0->f_7=1;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[42]=1;
uParam0->f_9[5]=1;
uParam0->f_9[48]=0;
MISC::SET_BIT(&(uParam0->f_77), false);
MISC::SET_BIT(&(uParam0->f_77), 9);
}


var func__413(){
return MISC::IS_BIT_SET(Global_1950108.f_515, 31);
}


bool func_414(){
return Global_100733.f_388 > 0;
}

int func_415(int iParam0){
if(iParam0==func_37()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_478, 15);
}

int func_416(int iParam0){
if(iParam0==func_37()){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
return func_419(5, 1);
}else{
return func_417(iParam0, 5);
}
return 0;
}

int func_417(int iParam0, int iParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_57, func_418(iParam1, 1));
}
return 0;
}

int func_418(int iParam0, bool bParam1){
if(bParam1){
switch (iParam0){
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
case 5:
return 5;
case 6:
return 6;
case 7:
return 7;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
default:}}else{
switch (iParam0){
case 0:
return 11;
case 1:
return 12;
case 2:
return 13;
case 3:
return 14;
case 4:
return 15;
case 5:
return 16;
case 6:
return 17;
case 7:
return 18;
case 8:
return 19;
case 9:
return 20;
case 10:
return 21;
}
default:
}
return -1;
}

int func_419(int iParam0, bool bParam1){
if(bParam1){
return MISC::IS_BIT_SET(func_41(10871, -1, 0), func_418(iParam0, 1));
}
return func_417(PLAYER::PLAYER_ID(), iParam0);
}


void func_420(){
if(func_49(PLAYER::PLAYER_PED_ID())){
if(!iLocal_62){
if(((MISC::IS_BIT_SET(Global_1950108, 27) && MISC::IS_BIT_SET(Global_1950108.f_5, 20)) && Global_2644490.f_1==17) && func_426(1)){
iLocal_62=1;
func_16(&Local_63, 0, 0);
}}else{
if((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_423(), "base", 3) && func_426(1)) && func_246()){
MISC::SET_BIT(&Global_1950108, 27);
MISC::SET_BIT(&(Global_1950108.f_5), 20);
func_422(5);
func_421(0);
iLocal_62=0;
func_14(&Local_63);
}
if(func_61(Local_63, 10000, 0)){
iLocal_62=0;
func_14(&Local_63);
}}}}


void func_421(int iParam0){
Global_2644490=iParam0;
}


void func_422(int iParam0){
if(!Global_2639783==iParam0){
Global_2639783.f_1=0;
}
Global_2639783=iParam0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_2639783.f_3=NETWORK::GET_NETWORK_TIME();
}}


char* func_423(){
if(func_424()){
return "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_B@BASE@";
}else{
return "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_B@BASE@";
}
return "";
}


bool func_424(){
return func_425(PLAYER::PLAYER_ID());
}

int func_425(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}


bool func_426(int iParam0){
return Global_2644490==iParam0;
}


void func_427(){
if(!func_436()){
if(func_435(PLAYER::PLAYER_PED_ID(), 353.7142f, 4877.06f, -59.14812f, 1) < 16f && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_429(1);
}}
if(((MISC::IS_BIT_SET(Global_1966831.f_1247, 1) || MISC::IS_BIT_SET(Global_1966831.f_1247, 2)) || MISC::IS_BIT_SET(Global_1964005.f_2825, 1)) || MISC::IS_BIT_SET(Global_1964005.f_2825, 2)){
if(!func_28()){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
HUD::DISABLE_FRONTEND_THIS_FRAME();
}}}
if(!iLocal_59){
if(func_28() && func_428(Global_4718592.f_113724)){
iLocal_59=1;
}}elseif(!func_28()){
if(!func_17(&uLocal_60)){
func_16(&uLocal_60, 0, 0);
}elseif(!func_32(&uLocal_60, 4000, 0)){
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
Global_1963031=1;
}}else{
func_14(&uLocal_60);
iLocal_59=0;
}}}

int func_428(int iParam0){
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


void func_429(int iParam0){
if(func_434()){
return;
}
if(!Global_20383.f_1==1){
if(func_433(0)){
func_430(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_430(int iParam0){
if(func_434()){
return;
}
if(Global_20584){
if(func_432()){
func_431(1, 1);
}else{
func_431(0, 0);
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
if(!func_436()){
Global_20383.f_1=3;
}}


void func_431(bool bParam0, bool bParam1){
if(bParam0){
if(func_433(0)){
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


bool func_432(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_433(int iParam0){
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


bool func_434(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


float func_435(int iParam0, struct<3> Param1, int iParam2){
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

int func_436(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_437(){
if(func_32(&uLocal_56, 5000, 0)){
MISC::CLEAR_BIT(&(Global_1950108.f_4600.f_1), 26);
func_14(&uLocal_56);
iLocal_58=0;
}elseif(!iLocal_58){
if((((func_433(0) || func_64()) || func_439()) || func_254()) || func_438(1)){
func_14(&uLocal_56);
iLocal_58=1;
if(!MISC::IS_BIT_SET(Global_1950108.f_4600.f_1, 26)){
MISC::SET_BIT(&(Global_1950108.f_4600.f_1), 26);
}}}elseif(iLocal_58){
if((((!func_433(0) && !func_64()) && !func_439()) && !func_254()) && !func_438(1)){
func_14(&uLocal_56);
iLocal_58=0;
func_16(&uLocal_56, 0, 0);
}}}


bool func_438(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}


bool func_439(){
return Global_75693;
}


void func_440(){
if(func_189(Global_2672505.f_4.f_16) !=256){
return;
}
if(func_409(Global_2672505.f_4.f_16) !=17){
return;
}
if(MISC::IS_BIT_SET(Global_1950108.f_7, 4)){
return;
}
if(func_84(Global_2672505.f_4.f_15, 978.3134f, 61.9363f, 119.2406f, 5f)){
if(Global_2793046.f_6880==1){
Global_2793046.f_6880=0;
}}elseif(Global_2793046.f_6880==0){
Global_2793046.f_6880=1;
}}


void func_441(){
if(!func_444(PLAYER::PLAYER_ID())){
return;
}
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(Global_1926703){
Global_1950107=1;
}}
if((func_443() || func_442(1000)) && Global_1926703){
Global_1950107=1;
}}

int func_442(int iParam0){
if(PAD::IS_CONTROL_PRESSED(0, 75) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75)){
if(!func_17(&uLocal_54)){
func_16(&uLocal_54, 0, 0);
}elseif(func_32(&uLocal_54, iParam0, 0)){
func_14(&uLocal_54);
return 1;
}}else{
func_14(&uLocal_54);
}
return 0;
}

int func_443(){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(func_49(PLAYER::PLAYER_PED_ID())){
Var0={
-2148.613f, 1106.074f, 31.21305f 
};
Var1={
-2132.121f, 1106.089f, 24.41229f 
};
fVar2=10f;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, 0, 1, 0)){
return 1;
}}
return 0;
}

int func_444(int iParam0){
if(iParam0 !=func_37()){
if(func_36(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_35(Global_2657589[iParam0 /*466*/].f_321.f_7)==23;
}}}
return 0;
}


void func_445(){
if(!MISC::IS_BIT_SET(Global_1981350.f_5, 0) && !func_446()){
MISC::SET_BIT(&(Global_1981350.f_5), false);
}}


bool func_446(){
int iVar0;
bool bVar1;
int iVar2;
bVar1=false;
iVar2=0;
while (iVar2 < 30){
if(!bVar1){
iVar0=func_449(iVar2, -1);
if(iVar0 !=0){
bVar1=func_447(iVar0);
}}
iVar2++;
}
return bVar1;
}

int func_447(int iParam0){
if(func_448(iParam0)==6){
return 1;
}
return 0;
}

int func_448(int iParam0){
switch (iParam0){
case 86:
return 8;
break;
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 10;
break;
case 87:
case 88:
case 89:
case 90:
return 9;
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
return 7;
break;
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
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
case 61:
case 62:
case 63:
case 64:
case 65:
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
return 6;
break;
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 66:
case 67:
case 68:
case 69:
return 5;
break;
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 70:
case 71:
case 72:
return 4;
break;
case 24:
case 26:
case 27:
case 54:
case 56:
case 57:
return 3;
break;
case 25:
case 28:
case 32:
case 33:
case 50:
case 52:
case 53:
case 55:
return 2;
break;
case 29:
case 30:
case 31:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 51:
case 58:
case 59:
case 60:
return 1;
break;
}
return 0;
}

int func_449(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=iParam1;
if(iParam1==-1){
iVar0=func_43();
}
if(iParam0==7 && !Global_262145.f_17451){
return 0;
}
if(iParam0 >=1000){
iVar1=func_453(iParam0);
if(iVar1==0 && func_41(5396, iParam1, 0) !=0){
return 1234;
}
if(func_452(-1) && iVar1==2){
return 1236;
}
if(func_451(PLAYER::PLAYER_ID()) && iVar1==1){
return 1237;
}
if(func_450(-1) && iVar1==3){
return 1238;
}}
if(iParam0==0){
return Global_1665644[iVar0];
}elseif(iParam0==99){
return Global_2851504[iVar0];
}elseif(iParam0 >=1){
if(iParam0 >=30){
return 0;
}
return Global_2851325[(iParam0 - 1) /*3*/][iVar0];
}
return 0;
}


bool func_450(int iParam0){
return func_41(9517, iParam0, 0) !=0;
}

int func_451(int iParam0){
if(iParam0 !=func_37()){
return Global_1853910[iParam0 /*862*/].f_267.f_353 !=0;
}
return 0;
}


bool func_452(int iParam0){
if(!Global_262145.f_24171){
return 0;
}
return func_41(7210, iParam0, 0) !=0;
}

int func_453(int iParam0){
iParam0=(iParam0 - 1000);
if(iParam0 >=0 && iParam0 <=4){
return iParam0;
}
return -1;
}


void func_454(){
if(func_189(Global_2672505.f_4.f_16)==309){
if(func_169(Global_2672505.f_4.f_16, 27)){
func_455(13, 1, 0);
func_269(27);
}
if(func_169(Global_2672505.f_4.f_16, 22)){
func_269(22);
}}}


void func_455(int iParam0, int iParam1, bool bParam2){
if(func_462()){
if(iParam1==1){
if(Global_2793046.f_4492==-1){
Global_2793046.f_4492=Global_262145.f_27184;
}
func_25(&(Global_2793046.f_4490), 0, 0);
if(bParam2){
if(Global_2793046.f_4495==-1){
Global_2793046.f_4495=Global_262145.f_27185;
}
func_25(&(Global_2793046.f_4493), 0, 0);
}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_461(1);
}}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_461(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_460()) && !func_456(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_456(int iParam0){
if(func_457(iParam0, 1, 0)){
if(Global_1853910[iParam0 /*862*/] !=6){
return 1;
}}
return 0;
}

int func_457(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_458(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_458(int iParam0){
return func_459(iParam0);
}


var func__459(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_460(){
return Global_2683864.f_841;
}


void func_461(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_462()){
if(func_36(PLAYER::PLAYER_ID(), 1, 0)){
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
if(func_36(PLAYER::PLAYER_ID(), 1, 1)){
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


bool func_462(){
return Global_1574582;
}


void func_463(){
if((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_246()) || !func_36(PLAYER::PLAYER_ID(), 0, 1)){
return;
}
if(!func_477(PLAYER::PLAYER_ID(), 0) || !func_476(PLAYER::PLAYER_ID())){
return;
}
if(func_475()){
func_464();
}}


void func_464(){
int iVar0;
int iVar1[20];
iVar0=0;
while (iVar0 < 20){
iVar1[iVar0]=iVar0;
iVar0++;
}
iVar0=0;
while (iVar0 < 3){
if(iVar0==0){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <=4){
Global_1968823[iVar0 /*10*/]=func_474(iVar0, 1, &iVar1);
Global_1968823[iVar0 /*10*/].f_9=2;
}else{
Global_1968823[iVar0 /*10*/]=func_474(iVar0, 0, &iVar1);
Global_1968823[iVar0 /*10*/].f_9=0;
}}else{
Global_1968823[iVar0 /*10*/]=func_474(iVar0, 0, &iVar1);
Global_1968823[iVar0 /*10*/].f_9=1;
}
func_470(iVar0);
func_465(iVar0);
iVar0++;
}}


void func_465(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
bVar3=false;
iVar0=0;
while (iVar0 < 3){
func_469(iParam0, Global_1968823[iParam0 /*10*/].f_1[iVar0], &iVar1, &iVar2);
iVar2++;
Global_1968823[iParam0 /*10*/].f_5[iVar0]=MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iVar2);
if(iParam0 > 0 && func_468(Global_1968823[iParam0 /*10*/].f_1[iVar0], Global_1968823[iParam0 /*10*/].f_5[iVar0])){
if(bVar3){
Global_1968823[iParam0 /*10*/].f_5[iVar0]=(Global_1968823[iParam0 /*10*/].f_5[iVar0] - func_466(Global_1968823[iParam0 /*10*/].f_1[iVar0]));
}
bVar3=true;
}
iVar0++;
}}

int func_466(int iParam0){
return (func_467(iParam0) / 5);
}

int func_467(int iParam0){
switch (iParam0){
case 1:
return Global_262145.f_24388;
case 2:
return Global_262145.f_24389;
case 3:
return Global_262145.f_24390;
case 4:
return Global_262145.f_24391;
case 5:
return Global_262145.f_24392;
case 6:
return Global_262145.f_24393;
case 0:
return Global_262145.f_24394;
default:
}
return 0;
}


bool func_468(int iParam0, int iParam1){
int iVar0;
iVar0=func_466(iParam0);
return iParam1 > iVar0 * 4;
}


void func_469(int iParam0, int iParam1, var uParam2, var uParam3){
int iVar0;
iVar0=0;
if(iParam0 > 0){
iVar0=1;
}elseif(Global_1968823[iParam0 /*10*/] > 20){
iVar0=2;
}
switch (iParam1){
case 0:
switch (iVar0){
case 0:
*uParam2=1;
*uParam3=10;
break;
case 1:
*uParam2=11;
*uParam3=50;
break;
case 2:
*uParam2=41;
*uParam3=50;
break;
}
break;
case 1:
switch (iVar0){
case 0:
*uParam2=1;
*uParam3=20;
break;
case 1:
*uParam2=21;
*uParam3=100;
break;
case 2:
*uParam2=81;
*uParam3=100;
break;
}
break;
case 2:
switch (iVar0){
case 0:
*uParam2=1;
*uParam3=2;
break;
case 1:
*uParam2=3;
*uParam3=10;
break;
case 2:
*uParam2=9;
*uParam3=10;
break;
}
break;
case 3:
switch (iVar0){
case 0:
*uParam2=1;
*uParam3=4;
break;
case 1:
*uParam2=5;
*uParam3=20;
break;
case 2:
*uParam2=17;
*uParam3=20;
break;
}
break;
case 4:
switch (iVar0){
case 0:
*uParam2=1;
*uParam3=16;
break;
case 1:
*uParam2=17;
*uParam3=80;
break;
case 2:
*uParam2=65;
*uParam3=80;
break;
}
break;
case 5:
switch (iVar0){
case 0:
*uParam2=1;
*uParam3=12;
break;
case 1:
*uParam2=13;
*uParam3=60;
break;
case 2:
*uParam2=49;
*uParam3=60;
break;
}
break;
case 6:
switch (iVar0){
case 0:
*uParam2=1;
*uParam3=8;
break;
case 1:
*uParam2=9;
*uParam3=40;
break;
case 2:
*uParam2=33;
*uParam3=40;
break;
}
break;
}}


void func_470(int iParam0){
int iVar0;
int iVar1;
int iVar2;
var uVar3[6];
int iVar4;
int iVar5;
iVar2=6;
func_473(&uVar3);
iVar0=iParam0;
while (iVar0 > 0){
iVar4=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
iVar5=0;
if(func_472(&uVar3, Global_1968823[(iVar0 - 1) /*10*/].f_1[iVar4], &iVar5)){
func_471(&uVar3, iVar5);
iVar0=(iVar0 - 1);
iVar2=(iVar2 - 1);
}}
iVar0=0;
while (iVar0 < 3){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
Global_1968823[iParam0 /*10*/].f_1[iVar0]=uVar3[iVar1];
func_471(&uVar3, iVar1);
iVar2=(iVar2 - 1);
iVar0++;
}}


void func_471(var uParam0, int iParam1){
int iVar0;
(*uParam0)[iParam1]=-1;
iVar0=iParam1;
while (iVar0 <=(6 - 2)){
if((*uParam0)[iVar0]==-1){
(*uParam0)[iVar0]=(*uParam0)[iVar0 + 1];
(*uParam0)[iVar0 + 1]=-1;
}
iVar0++;
}}

int func_472(var uParam0, int iParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if((*uParam0)[iVar0]==iParam1){
*iParam2=iVar0;
return 1;
}
iVar0++;
}
return 0;
}


void func_473(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
(*uParam0)[iVar0]=iVar0;
iVar0++;
}}

int func_474(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar1=0;
iVar2=1;
iVar3=(20 - iParam0);
if(bParam1){
iVar2=21;
iVar3=27;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
iVar4=iVar0;
}else{
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
iVar4=(*iParam2)[iVar0];
(*iParam2)[iVar0]=0;
iVar1=iVar0;
while (iVar1 <=(20 - 2)){
if((*iParam2)[iVar1]==0){
(*iParam2)[iVar1]=(*iParam2)[iVar1 + 1];
(*iParam2)[iVar1 + 1]=0;
}
iVar1++;
}}
return iVar4;
}

int func_475(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 3){
if(Global_1968823[iVar0 /*10*/].f_1[iVar1]==7){
return 1;
}
iVar1++;
}
iVar0++;
}
return 0;
}

int func_476(int iParam0){
if(iParam0 !=func_37()){
if(Global_1853910[iParam0 /*862*/].f_267.f_310 !=0){
return 1;
}}
return 0;
}

int func_477(int iParam0, bool bParam1){
if(iParam0==func_37()){
return 0;
}
if(Global_1853910[iParam0 /*862*/].f_267.f_193[0 /*13*/] !=0){
return 1;
}
if(Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/] !=0){
return 1;
}
if(Global_1853910[iParam0 /*862*/].f_267.f_293 !=0){
return 1;
}
if(Global_1853910[iParam0 /*862*/].f_267.f_116[0 /*3*/] !=-1){
return 1;
}
if(bParam1){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_133, 14);
}
return 0;
}


void func_478(){
bool bVar0;
bVar0=true;
if(func_189(PLAYER::PLAYER_ID()) !=307){
bVar0=false;
}
if(func_409(PLAYER::PLAYER_ID()) !=1){
bVar0=false;
}
if(!Global_2672505.f_947.f_10){
bVar0=false;
}
if(bVar0){
if(!iLocal_53){
if(!func_17(&uLocal_51)){
func_16(&uLocal_51, 0, 0);
}elseif(func_32(&uLocal_51, 10000, 0)){
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
iLocal_53=1;
}}}elseif(func_17(&uLocal_51)){
func_14(&uLocal_51);
iLocal_53=0;
}}


void func_479(){
if((func_484(PLAYER::PLAYER_ID()) && func_49(PLAYER::PLAYER_PED_ID())) && CAM::IS_SCREEN_FADED_IN()){
if(!iLocal_50){
if((func_253() && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "SUB_SUPPLIES")) && !func_84(PLAYER::PLAYER_PED_ID(), func_483(), 1.5f)){
iLocal_50=1;
}}else{
if(func_480(PLAYER::PLAYER_PED_ID())){
Global_44199=1;
}
if((func_253() && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "SUB_SUPPLIES")) && func_84(PLAYER::PLAYER_PED_ID(), func_483(), 1f)){
iLocal_50=0;
}}}elseif(iLocal_50){
iLocal_50=0;
}}

int func_480(int iParam0){
if(func_482(iParam0)){
return 1;
}
if(func_481(iParam0)){
return 1;
}
return 0;
}


bool func_481(int iParam0){
return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, -1360.612f, 161.8972f, -99.9951f, -1368.39f, 161.8997f, -97.24433f, 7.25f, 0, 1, 0);
}


bool func_482(int iParam0){
return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, -1352.578f, 161.7798f, -100.4443f, -1352.477f, 168.3758f, -97.94434f, 6f, 0, 1, 0);
}


Vector3 func__483(){
return -1352.45f, 146.7562f, -99.6944f;
}

int func_484(int iParam0){
if(iParam0 !=func_37()){
if(func_259(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}


void func_485(){
if(iLocal_49){
if(func_488(PLAYER::PLAYER_ID()) || func_60(PLAYER::PLAYER_ID())){
return;
}else{
iLocal_49=0;
}}
if((Global_1836858.f_5 !=-1 && func_60(PLAYER::PLAYER_ID())) && func_487(PLAYER::PLAYER_ID())==160){
func_486();
iLocal_49=1;
}}


void func_486(){
Global_1836858.f_24=1;
}

int func_487(int iParam0){
if(iParam0 !=func_37() && func_36(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_488(int iParam0){
if(iParam0 !=func_37()){
if(func_36(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_35(Global_2657589[iParam0 /*466*/].f_321.f_7)==26;
}}}
return 0;
}


void func_489(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
float fVar4;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020"))==0){
func_491();
return;
}
if(!Global_1574965){
func_491();
return;
}
if(Global_4718592.f_113724 !=1871729633 || Global_1058070.f_14[0] !=1){
func_491();
return;
}
if(!iLocal_45){
iLocal_45=1;
iVar0=0;
while (iVar0 <=(Global_1058070.f_266 - 1)){
iVar1=Global_4980736.f_5994[iVar0 /*492*/].f_15;
switch (iVar1){
case joaat("xm3_prop_xm3_lsd_flask"):
case joaat("xm3_prop_xm3_lsd_beaker"):
case joaat("xm3_prop_xm3_lsd_bottle_01a"):
case joaat("xm3_prop_xm3_lsd_bottle_02a"):
case joaat("xm3_prop_xm3_lsd_bottle_03a"):
case joaat("xm3_prop_xm3_lsd_bottles1"):
case joaat("xm3_prop_xm3_lsd_bottles2"):
case joaat("xm3_prop_xm3_lsd_bottles3"):
case joaat("xm3_prop_xm3_set_eqpt_lsd"):
iLocal_44[iLocal_43]=iVar0;
iLocal_43++;
break;
}
iVar0++;
}}
iVar0=0;
while (iVar0 <=(iLocal_43 - 1)){
iVar2=iLocal_44[iVar0];
if(!func_490(iVar2)){
}else{
uVar3=Global_1058070.f_119[iVar2];
if(!ENTITY::DOES_ENTITY_EXIST(uVar3)){
}elseif(ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
}else{
fVar4=OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(iVar3, 0);
if(fVar4 < 0.1f){
ENTITY::SET_ENTITY_HEALTH(iVar3, 0, 0);
}}}
iVar0++;
}}


bool func_490(int iParam0){
return (iParam0 > -1 && iParam0 < 32);
}


void func_491(){
if(iLocal_43 > 0){
func_492(&iLocal_44, -1);
iLocal_43=0;
iLocal_45=0;
}}


void func_492(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
(*uParam0)[iVar0]=iParam1;
iVar0++;
}}


void func_493(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0){
func_496();
}else{
func_494();
}}


void func_494(){
bool bVar0;
if(iLocal_33==0){
return;
}
bVar0=false;
while (bVar0 < 26){
if(MISC::IS_BIT_SET(iLocal_33, bVar0)){
AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_495(bVar0), 0);
MISC::CLEAR_BIT(&iLocal_33, bVar0);
}
bVar0++;
}
iLocal_34=0;
Global_2766577=0;
}


char* func_495(bool bParam0){
switch (bParam0){
case 9:
return "RADIO_01_CLASS_ROCK";
case 10:
return "RADIO_02_POP";
case 12:
return "RADIO_03_HIPHOP_NEW";
case 18:
return "RADIO_04_PUNK";
case 17:
return "RADIO_06_COUNTRY";
case 15:
return "RADIO_07_DANCE_01";
case 16:
return "RADIO_08_MEXICAN";
case 11:
return "RADIO_09_HIPHOP_OLD";
case 23:
return "RADIO_11_TALK_02";
case 22:
return "RADIO_12_REGGAE";
case 5:
return "RADIO_13_JAZZ";
case 6:
return "RADIO_14_DANCE_02";
case 21:
return "RADIO_15_MOTOWN";
case 13:
return "RADIO_20_THELAB";
case 14:
return "RADIO_16_SILVERLAKE";
case 20:
return "RADIO_17_FUNK";
case 19:
return "RADIO_18_90S_ROCK";
case 8:
return "RADIO_21_DLC_XM17";
case 24:
return "RADIO_05_TALK_01";
case 2:
return "RADIO_27_DLC_PRHEI4";
case 4:
return "RADIO_23_DLC_XM19_RADIO";
case 7:
return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
case 0:
return "RADIO_36_AUDIOPLAYER";
case 1:
return "RADIO_35_DLC_HEI4_MLR";
case 3:
return "RADIO_34_DLC_HEI4_KULT";
case 25:
return "RADIO_37_MOTOMAMI";
default:
}
return "OFF";
}


void func_496(){
int iVar0;
bool bVar1;
if(!func_497(Global_4718592.f_113724)){
return;
}
iVar0=func_41(9877, -1, 0);
if(iVar0==0){
return;
}
bVar1=false;
while (bVar1 < 26){
if(!MISC::IS_BIT_SET(iLocal_34, bVar1)){
if(MISC::IS_BIT_SET(iVar0, bVar1)){
}
MISC::SET_BIT(&iLocal_34, bVar1);
AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_495(bVar1), 1);
}
if(MISC::IS_BIT_SET(iVar0, bVar1) && !MISC::IS_BIT_SET(iLocal_33, bVar1)){
MISC::SET_BIT(&iLocal_33, bVar1);
Global_2766577=1;
}
bVar1++;
}}

int func_497(int iParam0){
if((iParam0==Global_262145.f_31722[0] || iParam0==Global_262145.f_31722[1]) || iParam0==Global_262145.f_31722[2]){
return 1;
}
return 0;
}


void func_498(){
if(MISC::IS_BIT_SET(Global_1950108.f_8, 25)){
if(Global_4282954 !=-1){
Global_4282954=-1;
}}}


void func_499(){
if(PLAYER::PLAYER_ID()==func_37()){
iLocal_32=0;
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(Global_2793046.f_299)){
iLocal_32=0;
return;
}
if(ENTITY::IS_ENTITY_DEAD(Global_2793046.f_299, 0)){
iLocal_32=0;
return;
}
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2793046.f_299, 0)){
iLocal_32=0;
return;
}
if(func_60(PLAYER::PLAYER_ID())){
iLocal_32=0;
return;
}
if(func_259(PLAYER::PLAYER_ID()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10==PLAYER::PLAYER_ID()){
iLocal_32=0;
return;
}
if(!ENTITY::IS_ENTITY_IN_AREA(Global_2793046.f_299, -1372.786f, 135.814f, -100.586f, -1319.589f, 169.764f, -87.918f, 0, 1, 0)){
iLocal_32=0;
return;
}
if(iLocal_32){
return;
}
func_500(1, 0, 0, 0, 0, 0, 0);
iLocal_32=1;
}


void func_500(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6){
if(func_504() < 0 && Global_1962819){
return;
}
if(func_503(35)){
bParam0=true;
}
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_60, 3)){
bParam0=true;
}
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_64, 3)){
bParam0=true;
bParam1=false;
}
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_68, 3)){
bParam0=true;
bParam1=false;
}
if(bParam0){
func_502(2);
}else{
func_502(1);
}
if(bParam1){
func_502(11);
}
if(bParam2){
func_502(32);
if(bParam3){
if(func_504() >=0 && MISC::IS_BIT_SET(Global_1586468[func_504() /*142*/].f_103, 0)){
func_502(33);
}}else{
func_334(33);
}
if(func_504() >=0){
if(func_501(Global_1586468[func_504() /*142*/].f_66)){
func_502(40);
}}}elseif(bParam5){
func_502(37);
}
if(bParam4){
func_502(36);
}
if(func_503(36)){
if(func_503(2)){
func_334(36);
}}
if(bParam6){
func_502(38);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_2793046.f_436=NETWORK::GET_NETWORK_TIME();
}}

int func_501(int iParam0){
if(iParam0==joaat("trailersmall2")){
return 1;
}
return 0;
}


void func_502(bool bParam0){
if(bParam0 < 32){
if(!MISC::IS_BIT_SET(Global_2672505.f_62.f_1, bParam0)){
MISC::SET_BIT(&(Global_2672505.f_62.f_1), bParam0);
}}elseif(!MISC::IS_BIT_SET(Global_2672505.f_62.f_2, (bParam0 - 32))){
MISC::SET_BIT(&(Global_2672505.f_62.f_2), (bParam0 - 32));
}}


bool func_503(int iParam0){
if(iParam0 < 32){
return MISC::IS_BIT_SET(Global_2672505.f_62.f_1, iParam0);
}
return MISC::IS_BIT_SET(Global_2672505.f_62.f_2, (iParam0 - 32));
}

int func_504(){
if(Global_2359296[func_132() /*5568*/].f_681.f_2 >=415){
Global_2359296[func_132() /*5568*/].f_681.f_2=-1;
return -1;
}
return Global_2359296[func_132() /*5568*/].f_681.f_2;
}


void func_505(){
if(Global_2672505.f_62.f_57){
if(ENTITY::DOES_ENTITY_EXIST(Global_2793046.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2793046.f_299, 0)){
if(!Global_2672505.f_62.f_21){
if(iLocal_31==-1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3)){
if(DECORATOR::DECOR_EXIST_ON(Global_2793046.f_299, "PV_Slot")){
iLocal_31=DECORATOR::DECOR_GET_INT(Global_2793046.f_299, "PV_Slot");
}}}elseif(Global_2359296[func_132() /*5568*/].f_681.f_2 !=iLocal_31){
if(!func_17(&uLocal_29)){
func_16(&uLocal_29, 1, 0);
}elseif(func_32(&uLocal_29, 10000, 1)){
func_500(1, 0, 1, 0, 0, 0, 0);
}}}else{
func_14(&uLocal_29);
iLocal_31=-1;
}}else{
func_14(&uLocal_29);
iLocal_31=-1;
}}else{
func_14(&uLocal_29);
iLocal_31=-1;
}}


void func_506(){
if(func_510(PLAYER::PLAYER_ID()) && func_507()==PLAYER::PLAYER_ID()){
if((PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE()) || func_64()){
func_25(&uLocal_26, 1, 0);
Global_1949962=1;
if(PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
iLocal_28=30000;
}}}
if(func_17(&uLocal_26)){
if(func_32(&uLocal_26, iLocal_28, 1)){
func_14(&uLocal_26);
Global_1949962=0;
iLocal_28=10000;
}}}

int func_507(){
return func_508(PLAYER::PLAYER_ID());
}

int func_508(int iParam0){
int iVar0;
if(iParam0==func_37()){
return iParam0;
}
if(func_509(iParam0) !=-1){
iVar0=func_35(func_509(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_219(iParam0, 0)){
return func_166(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_37();
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}
return func_37();
}

int func_509(int iParam0){
if(iParam0 !=func_37()){
if(func_36(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}elseif(((Global_1575060 || Global_2635559.f_2680) && iParam0==PLAYER::PLAYER_ID()) && func_36(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}}
return -1;
}

int func_510(int iParam0){
if(iParam0 !=func_37()){
if(func_36(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_35(Global_2657589[iParam0 /*466*/].f_321.f_7)==9;
}}}
return 0;
}


void func_511(){
if(!func_513() && !func_512()){
if(!STATS::STAT_IS_STATS_TRACKING_ENABLED()){
if(((func_246() && func_36(PLAYER::PLAYER_ID(), 0, 1)) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
STATS::STAT_ENABLE_STATS_TRACKING();
}}}}


bool func_512(){
return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}


bool func_513(){
return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}


void func_514(){
int iVar0;
iLocal_25++;
if(iLocal_25==30){
iLocal_25=0;
}else{
return;
}
if(((((((((!func_49(PLAYER::PLAYER_PED_ID()) || !func_36(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_246()) || func_60(PLAYER::PLAYER_ID())) || func_515(PLAYER::PLAYER_ID())) || func_57(PLAYER::PLAYER_ID())) || Global_2672505.f_3542) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return;
}
if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_49(iVar0)){
if(!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0)){
if(ENTITY::GET_ENTITY_CAN_BE_DAMAGED(iVar0)){
}else{
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 0f);
ENTITY::SET_ENTITY_INVINCIBLE(iVar0, 0);
ENTITY::SET_ENTITY_PROOFS(iVar0, 0, 0, 0, 0, 0, 0, 1, 0);
}}}}}

int func_515(int iParam0){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 11)){
return 1;
}
return 0;
}


void func_516(){
if(!func_36(PLAYER::PLAYER_ID(), 1, 1)){
return;
}
if(!iLocal_24){
if((Global_1950108.f_513 !=-1 && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "MP_MAN_VEH1")) && func_518()==9){
iLocal_24=1;
}}elseif(!func_253()){
if(func_517()){
PAD::DISABLE_CONTROL_ACTION(2, 51, 1);
PAD::DISABLE_CONTROL_ACTION(2, 52, 1);
}elseif(func_49(Global_2793046.f_299)){
if(!func_517()){
func_500(1, 0, 1, 0, 0, 0, 0);
}}else{
iLocal_24=0;
StringCopy(&(Global_23270.f_1), "", 16);
}}}

int func_517(){
if(func_503(2) || func_503(1)){
return 1;
}
return 0;
}

int func_518(){
return func_35(Global_1950108.f_513);
}


void func_519(){
var uVar0;
if(!func_36(PLAYER::PLAYER_ID(), 1, 1)){
return;
}
if(func_57(PLAYER::PLAYER_ID()) || func_522(PLAYER::PLAYER_ID())){
return;
}
if(func_521() || func_520("CMOD_TRIG", &Global_44195)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_293(PLAYER::PLAYER_PED_ID(), 0)==-1){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, -2, 0)){
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
}}}}}


var func__520(char* sParam0, var uParam1){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_521(){
if(((((func_389(39, 5, 0) || func_389(40, 5, 0)) || func_389(41, 5, 0)) || func_389(42, 5, 0)) || func_389(43, 5, 0)) || func_389(44, 5, 0)){
return 1;
}
return 0;
}

int func_522(int iParam0){
if(iParam0 > -1){
if(Global_2657589[iParam0 /*466*/].f_246 > -1){
if(func_391(Global_2657589[iParam0 /*466*/].f_246)==5){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 4)){
return 1;
}}
return 0;
}


void func_523(){
var uVar0;
int iVar1;
if((func_36(PLAYER::PLAYER_ID(), 1, 1) && func_528(PLAYER::PLAYER_ID())) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_49(uVar0) && func_293(PLAYER::PLAYER_PED_ID(), 0)==-1){
iVar1=ENTITY::GET_ENTITY_MODEL(uVar0);
if((((iVar1==joaat("openwheel1") || iVar1==joaat("openwheel2")) || iVar1==joaat("formula")) || iVar1==joaat("formula2")) || iVar1==joaat("oppressor2")){
if(!iLocal_23){
iLocal_23=1;
func_527(45, 1, 1);
}
PAD::DISABLE_CONTROL_ACTION(2, 51, 1);
PAD::DISABLE_CONTROL_ACTION(2, 52, 1);
Global_44199=1;
if(CAM::IS_GAMEPLAY_CAM_RENDERING() && !func_526("CMOD_FTRIG")){
func_525("CMOD_FTRIG");
}}}}elseif(iLocal_23){
iLocal_23=0;
func_524(45, 1, 1);
if(func_526("CMOD_FTRIG")){
HUD::CLEAR_HELP(1);
}}}


void func_524(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::CLEAR_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Global_32163==0){
uVar0=func_41(func_390(iParam0), -1, 0);
MISC::CLEAR_BIT(&uVar0, bParam1);
func_80(func_390(iParam0), uVar0, -1, 1, 0);
}}else{
MISC::CLEAR_BIT(&(Global_113648.f_668[iParam0]), bParam1);
}}


void func_525(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}


bool func_526(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_527(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(Global_32163==0){
uVar0=func_41(func_390(iParam0), -1, 0);
MISC::SET_BIT(&uVar0, bParam1);
func_80(func_390(iParam0), uVar0, -1, 1, 0);
}}else{
MISC::SET_BIT(&(Global_113648.f_668[iParam0]), bParam1);
}}

int func_528(int iParam0){
if(iParam0==func_37()){
return 0;
}
if(func_510(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}


void func_529(){
if((Global_112594 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <=0) && func_246()){
NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
}}


void func_530(){
int iVar0;
if(!iLocal_4){
if(Global_1836395){
iVar0=func_531(joaat("mpply_char_exploit_level"));
if(iVar0 >=4){
Global_262145.f_10593=1;
}
iLocal_4=1;
}}elseif(!Global_1836395){
iLocal_4=0;
}}

int func_531(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_532(){
if(!iLocal_3){
if(Global_1836395){
if(func_534() || func_533()){
Global_262145.f_20169=1;
}else{
Global_262145.f_20169=0;
}
iLocal_3=1;
}}elseif(!Global_1836395){
iLocal_3=0;
}}

int func_533(){
int iVar0;
var uVar1[4];
int iVar2;
iVar0=func_531(joaat("mpply_char_peak_exploit_level"));
if(iVar0 < Global_262145.f_10702){
return 0;
}
uVar1[0]=func_531(joaat("mpply_prevseasonexploitlevel"));
uVar1[1]=func_531(joaat("mpply_prevseason2exploitlevel"));
uVar1[2]=func_531(joaat("mpply_prevseason3exploitlevel"));
uVar1[3]=func_531(joaat("mpply_prevseason4exploitlevel"));
iVar2=0;
while (iVar2 < (Global_262145.f_10698 - 1)){
if(uVar1[iVar2] < Global_262145.f_10702){
return 0;
}
iVar2++;
}
return 1;
}

int func_534(){
int iVar0;
var uVar1[4];
int iVar2;
iVar0=func_531(joaat("mpply_char_peak_exploit_level"));
if(iVar0 < Global_262145.f_10701){
return 0;
}
uVar1[0]=func_531(joaat("mpply_prevseasonexploitlevel"));
uVar1[1]=func_531(joaat("mpply_prevseason2exploitlevel"));
uVar1[2]=func_531(joaat("mpply_prevseason3exploitlevel"));
uVar1[3]=func_531(joaat("mpply_prevseason4exploitlevel"));
iVar2=0;
while (iVar2 < (Global_262145.f_10697 - 1)){
if(uVar1[iVar2] < Global_262145.f_10701){
return 0;
}
iVar2++;
}
return 1;
}


void func_535(){
int iVar0;
if(MISC::IS_PC_VERSION()){
iVar0=0;
while (iVar0 < Global_1853910){
MISC::SET_BIT(&(Global_1853910[iVar0 /*862*/].f_799), true);
iVar0++;
}}}


void func_536(){
if(Global_262145.f_10677 !=120){
Global_262145.f_10677=120;
}}


void func_537(){
if(iLocal_1){
HUD::SET_TEXT_SCALE(0f, 0.23f);
HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
func_538(0.69f, 0.06f, "STRING", sLocal_0);
}
if(!iLocal_1){
if(HUD::IS_PAUSE_MENU_ACTIVE()){
switch (iLocal_2){
case 0:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_2++;
settimera(0);
}
break;
case 1:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 2:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 3:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 4:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
iLocal_1=1;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
}}}elseif(HUD::IS_PAUSE_MENU_ACTIVE()){
switch (iLocal_2){
case 0:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
iLocal_2++;
settimera(0);
}
break;
case 1:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 2:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 3:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
iLocal_2++;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
case 4:
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
iLocal_1=0;
settimera(0);
}elseif(timera() > 2000){
iLocal_2=0;
}
break;
}}}


void func_538(float fParam0, float fParam1, char* sParam2, char* sParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}


bool func_539(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


void func_540(){
var uVar0;
if(iLocal_47){
if((((((func_545()==-1 && func_544()==999) && func_246()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !CAM::IS_SCREEN_FADING_OUT()){
Global_32441=0;
iLocal_47=0;
STATS::STAT_SET_BLOCK_SAVES(0);
func_541();
}}
if(!iLocal_46){
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Local_48, 13);
if(func_384(Local_48)){
iLocal_46=1;
}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692735.f_3){
NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0, 13);
if(!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&uVar0, &Local_48)){
NETWORK::NETWORK_BAIL(0, 0, 0);
STATS::STAT_SET_BLOCK_SAVES(1);
if(!Global_32441){
Global_32441=1;
iLocal_47=1;
}
iLocal_46=0;
}}}


void func_541(){
int iVar0;
iVar0=0;
while (iVar0 <=2){
func_542(0, iVar0);
STATS::STAT_CLEAR_SLOT_FOR_RELOAD(iVar0);
iVar0++;
}
STATS::FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE();
}


void func_542(int iParam0, int iParam1){
if(iParam0==0){
func_543();
}
Global_1574538[iParam1]=iParam0;
}


void func_543(){
Global_2694511=0;
}

int func_544(){
return Global_32164;
}

int func_545(){
return Global_32163;
}