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
var uLocal_95=4;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=1061158912;
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
var uLocal_117=1061158912;
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
var uLocal_131=1061158912;
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
var uLocal_145=1061158912;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=-1;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=-1;
var uLocal_158=-1;
var uLocal_159=-1;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
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
if(func_70()){
while (!func_59()){
func_11(&uLocal_95);
wait(0);
}}
func_1();
}


void func_1(){
func_3(&uLocal_95);
func_2();
}


void func_2(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(var uParam0){
func_9(&(uParam0->f_57.f_5));
func_4(uParam0, 1);
}


void func_4(var uParam0, bool bParam1){
if(func_5(uParam0)){
HUD::CLEAR_HELP(1);
}
if(bParam1){
func_9(&(uParam0->f_57.f_5));
}}


bool func_5(var uParam0){
char* sVar0;
char* sVar1;
func_7(uParam0, uParam0->f_57.f_2, &sVar0);
func_7(uParam0, uParam0->f_57.f_2, &sVar1);
return (func_6(&sVar0) || func_6(&sVar1));
}


var func__6(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_7(var uParam0, int iParam1, char* sParam2){
if(func_8(&(uParam0->f_57), 7)){
Stack.Push(uParam0[iParam1 /*14*/]);
Stack.Push(iParam1);
Stack.Push(sParam2);
Call_Loc(uParam0->f_57.f_14);
}else{
StringCopy(sParam2, "MPJAC_EXIT", 16);
}}


bool func_8(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}


void func_9(var uParam0){
int iVar0;
if(*uParam0==-1){
return;
}
iVar0=func_10(*uParam0);
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

int func_10(int iParam0){
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


void func_11(var uParam0){
char* sVar0;
char* sVar1;
struct<14> Var2;
struct<3> Var3;
struct<3> Var4;
var uVar5;
int iVar6;
var uVar7;
var uVar8;
func_56(uParam0);
func_54(uParam0);
Var2.f_1.f_6=1061158912;
Var2={
*(uParam0[uParam0->f_57.f_2 /*14*/]) 
};
switch (uParam0->f_57.f_4){
case 0:
func_53(&(uParam0->f_57), 11);
func_52(uParam0, 1);
break;
case 1:
if(func_51(uParam0)){
uParam0->f_57.f_6=MISC::GET_GAME_TIMER();
func_52(uParam0, 2);
}
break;
case 2:
if(func_50(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_57.f_2 /*14*/])){
if((func_49(uParam0) || func_47(uParam0)) || !func_46(uParam0)){
func_4(uParam0, 1);
func_52(uParam0, 1);
}elseif(uParam0->f_57.f_5==-1){
if((MISC::GET_GAME_TIMER() - uParam0->f_57.f_6) > 150){
func_45(&(uParam0->f_57.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(0, 51)){
func_9(&(uParam0->f_57.f_5));
func_42(uParam0);
func_52(uParam0, 3);
}}else{
func_4(uParam0, 1);
func_52(uParam0, 1);
}
break;
case 3:
func_41(uParam0, &sVar0);
STREAMING::REQUEST_ANIM_DICT(&sVar0);
if(STREAMING::HAS_ANIM_DICT_LOADED(&sVar0)){
func_52(uParam0, 4);
}
break;
case 4:
func_41(uParam0, &sVar0);
func_40(uParam0, &sVar1);
if(Var2.f_0 !=3){
Var3={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar1, func_39(uParam0), func_38(uParam0), 0, 2) 
};
Var4={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, func_39(uParam0), func_38(uParam0), 0, 2) 
};
uVar5=Var4.f_2;
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var3, 1f, 500, uVar5, 0.15f);
}
func_52(uParam0, 5);
break;
case 5:
func_26(uParam0);
func_41(uParam0, &sVar0);
func_40(uParam0, &sVar1);
if(Var2.f_0==3){
iVar6=TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_achieve_heading"));
}else{
iVar6=TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"));
}
if(iVar6 !=1 && iVar6 !=0){
uParam0->f_57.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1.5f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
uParam0->f_57.f_8.f_4=MISC::GET_GAME_TIMER();
func_25(&(uParam0->f_57), 8);
func_52(uParam0, 6);
}
break;
case 6:
if(func_8(&(uParam0->f_57), 10)){
func_53(&(uParam0->f_57), 10);
func_24(uParam0);
}
func_26(uParam0);
func_18(uParam0);
uVar7=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_57.f_1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar7)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar7) >=1f){
func_12(uParam0, 0);
func_41(uParam0, &sVar0);
func_40(uParam0, &sVar1);
uParam0->f_57.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_25(&(uParam0->f_57), 8);
func_25(&(uParam0->f_57), 11);
}else{
func_53(&(uParam0->f_57), 8);
}}elseif(!func_8(&(uParam0->f_57), 8)){
func_52(uParam0, 8);
}
break;
case 7:
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_52(uParam0, 8);
break;
case 8:
uVar8=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_57.f_1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar8)){
if((PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar8) >=1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 364629851)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869)){
NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_4(uParam0, 1);
func_52(uParam0, 0);
}}else{
func_4(uParam0, 1);
func_52(uParam0, 0);
}
break;
}}


void func_12(var uParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
if(bParam1){
iVar1=func_13(uParam0);
if(iVar1 !=uParam0->f_57.f_8.f_1){
if(iVar1==0){
iVar0=(11 + uParam0->f_57.f_8.f_1);
}else{
iVar0=(6 + iVar1);
}}else{
iVar0=uParam0->f_57.f_8.f_2;
}
iVar1=uParam0->f_57.f_8.f_1;
}elseif(uParam0->f_57.f_8.f_2==5){
iVar1=uParam0->f_57.f_8.f_1;
iVar2=3;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
if(iVar0==uParam0->f_57.f_8.f_3){
iVar0=(iVar0 + 1 % iVar2);
}}else{
if(uParam0->f_57.f_8.f_2 > 6){
iVar1=func_13(uParam0);
uParam0->f_57.f_8.f_4=MISC::GET_GAME_TIMER();
}else{
iVar1=uParam0->f_57.f_8.f_1;
}
if((MISC::GET_GAME_TIMER() - uParam0->f_57.f_8.f_4) >=90000){
iVar1=func_13(uParam0);
if(iVar1 !=uParam0->f_57.f_8.f_1){
if(iVar1==0){
iVar0=(11 + uParam0->f_57.f_8.f_1);
}else{
iVar0=(6 + iVar1);
}}
iVar1=uParam0->f_57.f_8.f_1;
}else{
iVar0=5;
}}
uParam0->f_57.f_8.f_3=uParam0->f_57.f_8.f_2;
uParam0->f_57.f_8.f_2=iVar0;
uParam0->f_57.f_8.f_1=iVar1;
}

int func_13(var uParam0){
if(uParam0->f_57.f_8==2){
return uParam0->f_57.f_8.f_1;
}
return (uParam0->f_57.f_8.f_1 + 1 % func_14(uParam0->f_57.f_8));
}

int func_14(int iParam0){
switch (iParam0){
case 0:
return 3;
case 1:
return func_15(func_16(), 4, 5);
case 2:
return 5;
default:
}
return 0;
}

int func_15(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}


bool func_16(){
return func_17(PLAYER::PLAYER_ID());
}

int func_17(int iParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}


void func_18(var uParam0){
struct<3> Var0;
float fVar1;
if(uParam0->f_57.f_4==6){
Var0={
PAD::GET_CONTROL_NORMAL(0, 218), PAD::GET_CONTROL_NORMAL(0, 219), 0f 
};
fVar1=vmag(Var0);
if((uParam0->f_57.f_4==6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853)) && !func_8(&(uParam0->f_57), 12)){
if(fVar1 >=0.35f){
func_23(uParam0);
}}
if(ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853)){
func_4(uParam0, 1);
}elseif(func_22(uParam0)){
func_4(uParam0, 1);
}else{
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
if(((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_8(&(uParam0->f_57), 0)) && !func_8(&(uParam0->f_57), 4)) && !func_21()) && !func_19(1)) && uParam0->f_57.f_8.f_2 !=3){
if(uParam0->f_57.f_5==-1){
func_45(&(uParam0->f_57.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
}
if(uParam0->f_57.f_4==6){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 51)){
func_24(uParam0);
}}}}}
func_53(&(uParam0->f_57), 9);
}

int func_19(bool bParam0){
if(PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_20(PLAYER::PLAYER_PED_ID())){
if(PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68)){
return 0;
}}}}
if(Global_23131.f_130){
return 0;
}
if(PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19))){
return 1;
}
if(MISC::IS_PC_VERSION()){
if(((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169)){
return 1;
}
if(!bParam0){
if(((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169)){
return 1;
}}}
return 0;
}

int func_20(var uParam0){
int iVar0;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(uParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
if(((iVar0==joaat("weapon_sniperrifle") || iVar0==joaat("weapon_heavysniper")) || iVar0==joaat("weapon_marksmanrifle")) || iVar0==joaat("weapon_heavysniper_mk2")){
return 1;
}}}
return 0;
}

int func_21(){
if(Global_2672505.f_947.f_5==-1){
return 0;
}
return 1;
}


bool func_22(var uParam0){
return func_8(&(uParam0->f_57), 9);
}


void func_23(var uParam0){
char* sVar0;
char* sVar1;
if(((func_13(uParam0) !=uParam0->f_57.f_8.f_1 && uParam0->f_57.f_8.f_2 < 6) && uParam0->f_57.f_8.f_2 !=3) && uParam0->f_57.f_8.f_2 !=4){
func_12(uParam0, 1);
func_41(uParam0, &sVar0);
func_40(uParam0, &sVar1);
uParam0->f_57.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_25(&(uParam0->f_57), 8);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}


void func_24(var uParam0){
char* sVar0;
uParam0->f_57.f_1=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
func_41(uParam0, &sVar0);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
func_9(&(uParam0->f_57.f_5));
func_52(uParam0, 8);
}


void func_25(var uParam0, int iParam1){
MISC::SET_BIT(uParam0, iParam1);
}


void func_26(var uParam0){
int iVar0;
switch (uParam0->f_57.f_4){
case 4:
case 8:
func_31(1);
case 6:
CAM::INVALIDATE_IDLE_CAM();
HUD::HUD_FORCE_WEAPON_WHEEL(0);
HUD::DISPLAY_AMMO_THIS_FRAME(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
func_30();
if(WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1) && iVar0 !=joaat("weapon_unarmed")){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
func_28(1);
func_27();
break;
}}


void func_27(){
Global_23131.f_6=1;
}


void func_28(bool bParam0){
if(bParam0){
if(func_29()){
Global_2683864.f_41=1;
}}else{
Global_2683864.f_41=0;
}}


bool func_29(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 11);
}


void func_30(){
MISC::SET_BIT(&Global_8254, 4);
}


void func_31(int iParam0){
if(func_37()){
return;
}
if(!Global_20383.f_1==1){
if(func_36(0)){
func_32(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_32(int iParam0){
if(func_37()){
return;
}
if(Global_20584){
if(func_35()){
func_34(1, 1);
}else{
func_34(0, 0);
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
if(!func_33()){
Global_20383.f_1=3;
}}

int func_33(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_34(bool bParam0, bool bParam1){
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


bool func_35(){
return MISC::IS_BIT_SET(Global_1962996, 5);
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


bool func_37(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


Vector3 func__38(var uParam0){
struct<3> Var0;
Var0={
(uParam0[uParam0->f_57.f_2 /*14*/])->f_8.f_3 
};
if(func_16() && uParam0->f_57.f_8==0){
Var0.f_2=(Var0.f_2 - 4f);
}
return Var0;
}


Vector3 func__39(var uParam0){
return (uParam0[uParam0->f_57.f_2 /*14*/])->f_8;
}


void func_40(var uParam0, char* sParam1){
switch (uParam0->f_57.f_8.f_2){
case 0:
StringCopy(sParam1, "IDLE_A", 16);
break;
case 1:
StringCopy(sParam1, "IDLE_B", 16);
break;
case 2:
StringCopy(sParam1, "IDLE_C", 16);
break;
case 3:
StringCopy(sParam1, "ENTER", 16);
break;
case 5:
StringCopy(sParam1, "BASE", 16);
break;
case 4:
StringCopy(sParam1, "EXIT", 16);
break;
case 7:
StringCopy(sParam1, "A_TO_B", 16);
break;
case 8:
StringCopy(sParam1, "B_TO_C", 16);
break;
case 9:
StringCopy(sParam1, "C_TO_D", 16);
break;
case 10:
StringCopy(sParam1, "D_TO_E", 16);
break;
case 12:
StringCopy(sParam1, "B_TO_E", 16);
break;
case 13:
StringCopy(sParam1, "C_TO_A", 16);
break;
case 14:
StringCopy(sParam1, "D_TO_A", 16);
break;
case 15:
StringCopy(sParam1, "E_TO_A", 16);
break;
default:
StringCopy(sParam1, "invalid_clip", 16);
}}


void func_41(var uParam0, char* sParam1){
switch (uParam0->f_57.f_8){
case 0:
StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
break;
case 1:
StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
break;
case 2:
StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
break;
}
if(func_16()){
StringConCat(sParam1, "@FEMALE", 64);
}else{
StringConCat(sParam1, "@MALE", 64);
}
switch (uParam0->f_57.f_8){
case 1:
case 0:
switch (uParam0->f_57.f_8.f_1){
case 0:
StringConCat(sParam1, "@VAR_A@BASE@", 64);
break;
case 1:
StringConCat(sParam1, "@VAR_B@BASE@", 64);
break;
case 2:
StringConCat(sParam1, "@VAR_C@BASE@", 64);
break;
case 3:
StringConCat(sParam1, "@VAR_D@BASE@", 64);
break;
case 4:
StringConCat(sParam1, "@VAR_E@BASE@", 64);
break;
}
break;
case 2:
switch (uParam0->f_57.f_8.f_1){
case 0:
StringConCat(sParam1, "@VAR_A@", 64);
break;
case 1:
StringConCat(sParam1, "@VAR_B@", 64);
break;
case 2:
StringConCat(sParam1, "@VAR_C@", 64);
break;
case 3:
StringConCat(sParam1, "@VAR_D@", 64);
break;
case 4:
StringConCat(sParam1, "@VAR_E@", 64);
break;
}
break;
}}


void func_42(var uParam0){
uParam0->f_57.f_8=func_44((*uParam0)[uParam0->f_57.f_2 /*14*/]);
uParam0->f_57.f_8.f_1=func_43(uParam0);
uParam0->f_57.f_8.f_2=3;
uParam0->f_57.f_8.f_3=3;
}

int func_43(var uParam0){
int iVar0;
switch (uParam0->f_57.f_8){
case 2:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
if(iVar0 >=1){
iVar0++;
}
break;
default:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, func_14(uParam0->f_57.f_8));
}
return iVar0;
}

int func_44(int iParam0){
if(iParam0 >=11){
return 0;
}elseif(iParam0 >=9){
return 0;
}elseif(iParam0 >=7){
return 0;
}elseif(iParam0 >=4){
return 0;
}elseif(iParam0 > 1){
return 2;
}
return 0;
}


void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*uParam0==-1){
func_9(uParam0);
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


bool func_46(var uParam0){
Stack.Push(!func_8(&(uParam0->f_57), 5));
Stack.Push(uParam0[uParam0->f_57.f_2 /*14*/]);
Stack.Push(uParam0->f_57.f_2);
Call_Loc(uParam0->f_57.f_13);
return (StackVal || StackVal);
}

int func_47(var uParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
if((iVar1 !=PLAYER::PLAYER_ID() && func_48(iVar1, 1, 1)) && func_50(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_57.f_2 /*14*/])){
return 1;
}}
iVar0++;
}
return 0;
}

int func_48(int iParam0, bool bParam1, bool bParam2){
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


bool func_49(var uParam0){
return uParam0->f_57 & 31 > 0;
}


bool func_50(var uParam0, var uParam1){
return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_51(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 1){
if(func_50(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_57.f_2 /*14*/])){
return 1;
}else{
uParam0->f_57.f_2=(uParam0->f_57.f_2 + 1 % 4);
}
iVar0++;
}
return 0;
}


void func_52(var uParam0, int iParam1){
uParam0->f_57.f_4=iParam1;
}


void func_53(var uParam0, int iParam1){
MISC::CLEAR_BIT(uParam0, iParam1);
}


void func_54(var uParam0){
if(uParam0->f_57.f_4==6){}elseif(uParam0->f_57.f_4 > 4){
CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
uParam0->f_57.f_7=MISC::GET_FRAME_COUNT();
}elseif(uParam0->f_57.f_4 > 1){
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
uParam0->f_57.f_7=MISC::GET_FRAME_COUNT();
}elseif((MISC::GET_FRAME_COUNT() - uParam0->f_57.f_7) < 5){
PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
}}


float func_55(var uParam0){
switch ((*uParam0)[uParam0->f_57.f_2 /*14*/]){
case 12:
case 10:
case 6:
return 0.24f;
case 2:
return 0.16f;
case 3:
return 0.18f;
default:
}
return 0.13f;
}


void func_56(var uParam0){
func_57(&(uParam0->f_57), 4, func_58());
func_57(&(uParam0->f_57), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0));
func_57(&(uParam0->f_57), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1));
func_57(&(uParam0->f_57), 0, func_36(0));
func_57(&(uParam0->f_57), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}


void func_57(var uParam0, int iParam1, bool bParam2){
var uVar0;
uVar0=iParam1;
if(bParam2){
MISC::SET_BIT(uParam0, uVar0);
}else{
MISC::CLEAR_BIT(uParam0, iVar0);
}}


bool func_58(){
return Global_75693;
}

int func_59(){
if(!func_69(PLAYER::PLAYER_PED_ID())){
return 1;
}
if(func_61()){
return 1;
}
if(Global_1853753==func_60()){
return 1;
}
return 0;
}

int func_60(){
return -1;
}

int func_61(){
if(Global_1575035==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_68()){
return 1;
}
if(Global_2696917){
return 1;
}
if(func_67()){
return 1;
}
if(func_66(159)){
if(!func_65()){
return 1;
}}
if(func_66(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_62() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_62())==0){
return 1;
}}
return 0;
}

int func_62(){
switch (func_64()){
case 0:
return func_63();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_63(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_64(){
return Global_32163;
}


bool func_65(){
return Global_2683864.f_698;
}

int func_66(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_67(){
return Global_2694526;
}


bool func_68(){
return Global_2683864.f_693;
}


bool func_69(var uParam0){
return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, 451.6327f, 4829.453f, -54.97165f, 499.981f, 4842.034f, -50.67961f, 30.75f, 0, 1, 0);
}

int func_70(){
if(Global_1853753 !=func_60()){
if(NETWORK::NETWORK_IS_SCRIPT_ACTIVE("base_entrance_seats", Global_1853753, 1, 0)){
return 0;
}
NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Global_1853753);
func_80(0, -1, 0);
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
func_71();
return 1;
}
return 0;
}


void func_71(){
int iVar0[2];
iVar0[0]=0;
iVar0[1]=1;
func_72(0, &uLocal_95, &iVar0);
iVar0[0]=2;
iVar0[1]=3;
func_72(1, &uLocal_95, &iVar0);
}


void func_72(int iParam0, var uParam1, int iParam2){
struct<3> Var0;
float fVar1;
int iVar2;
func_79(iParam0, &Var0, &fVar1);
iVar2=0;
while (iVar2 < 2){
(*uParam1)[(*iParam2)[iVar2] /*14*/]=2;
(uParam1[(*iParam2)[iVar2] /*14*/])->f_8={
func_75(func_76(iVar2), fVar1) + Var0 
};
(uParam1[(*iParam2)[iVar2] /*14*/])->f_8.f_3={
0f, 0f, (fVar1 + 174f) 
};
(uParam1[(*iParam2)[iVar2] /*14*/])->f_1={
func_75(func_74(iVar2), fVar1) + Var0 
};
(uParam1[(*iParam2)[iVar2] /*14*/])->f_1.f_3={
func_75(func_73(iVar2), fVar1) + Var0 
};
(uParam1[(*iParam2)[iVar2] /*14*/])->f_1.f_6=1.42f;
iVar2++;
}}


Vector3 func__73(int iParam0){
switch (iParam0){
case 0:
return (-1.42f / 2f), ((0.87f / 2f) - 1.74f), 2f;
case 1:
return (1.42f / 2f), ((0.87f / 2f) - 1.74f), 2f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__74(int iParam0){
switch (iParam0){
case 0:
return (-1.42f / 2f), (0.87f / 2f), 0f;
case 1:
return (1.42f / 2f), (0.87f / 2f), 0f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__75(struct<3> Param0, float fParam1){
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


Vector3 func__76(int iParam0){
switch (iParam0){
case 0:
return Vector(-59.42f, 4832.75f, 391.558f) - func_77();
case 1:
return Vector(-59.42f, 4832.75f, 392.858f) - func_77();
default:
}
return 0f, 0f, 0f;
}


Vector3 func__77(){
return func_78() + Vector(0f, -8.946f, 47.215f);
}


Vector3 func__78(){
return 345.0041f, 4842.001f, -59.9997f;
}


void func_79(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 0:
*uParam1={
116.985f, -16.656f, 5f 
};
*uParam2=81f;
break;
case 1:
*uParam1={
148.822f, -8.126f, 5f 
};
*uParam2=-51f;
break;
case 2:
*uParam1={
41.997f, -8.832f, 0f 
};
*uParam2=-2.5f;
break;
case 3:
*uParam1={
47.215f, -8.946f, 0f 
};
*uParam2=0f;
break;
case 4:
*uParam1={
68.813f, -8.955f, 0f 
};
*uParam2=0f;
break;
case 5:
*uParam1={
0.521f, 3.241f, 0f 
};
*uParam2=-27f;
break;
case 6:
*uParam1={
11.391f, -4.387f, 0f 
};
*uParam2=-105f;
break;
case 7:
*uParam1={
18.427f, 6.559f, -3.588f 
};
*uParam2=(-19f - 180f);
break;
case 8:
*uParam1={
24.092f, 4.763f, -3.588f 
};
*uParam2=(-16f - 180f);
break;
case 9:
*uParam1={
17.343f, 3.485f, -3.588f 
};
*uParam2=-19f;
break;
case 10:
*uParam1={
23.17f, 1.637f, -3.588f 
};
*uParam2=-16f;
break;
default:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
}
*uParam1={
*uParam1 + func_78() 
};
}

int func_80(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=NETWORK::NETWORK_GET_SCRIPT_STATUS();
while (iVar0 !=2){
if(((iVar0==3 || iVar0==4) || iVar0==5) || iVar0==6){
if(!bParam2){
func_2();
}else{
return 0;
}}
if(!func_81(0)){
if(iParam0==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!bParam2){
func_2();
}else{
return 0;
}}
if(func_68()){
if(!bParam2){
func_2();
}else{
return 0;
}}
if(func_66(157)){
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


bool func_81(bool bParam0){
if(bParam0){}
return Global_1575035;
}